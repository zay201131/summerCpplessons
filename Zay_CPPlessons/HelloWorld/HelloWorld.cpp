// HelloWorld.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
struct zay

{
    zay() = default;
    ~zay() = default;
    zay(const zay& other) = delete;
    zay(zay&& other) = delete;

    const char* name = "Xavier";
    int Age = 13;
    float Weight = 104.f;
    float  Height = 64.f;

    uint32_t Grade =7 ;
    uint64_t Yearborn= 2011;
    double GPA= 3.48 ;
    const char* Favoriteteachersname =   "Mohammad Tahmid";
    uint16_t Howmanydaysleftofschool = 183*(12-Grade);



    void print()
    {
        std::cout << "My name:" << name << std::endl;
        std::cout << "My age:" << Age << std::endl;
        std::cout << "My weight:" << Weight << std::endl;
        std::cout << "My height:" << Height << std::endl;
        std::cout << "I'm in Grade:" << Grade << std::endl;
        std::cout << "I was Born:" << Yearborn << std::endl;
        std::cout << "My GPA is:" << GPA << std::endl;
        std::cout << "My Favorite Teacher is:" << Favoriteteachersname << std::endl;
        std::cout << "I have" << Howmanydaysleftofschool << "days of school left" << std::endl;
    }
};



int main()
{
    std::cout << "Welcome!\n";
    std::cout << "This is Zay's world\n";
    std::cout << "Thank you for visiting my new world have a nice day\n";
    zay myinfo;
    myinfo.print();
}





   // Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// // Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
  