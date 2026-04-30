#include <cstdio>
struct Animal {
    virtual const char* speak() = 0;
    virtual ~Animal() = default;
};
struct Dog : Animal {
    const char* speak() override { return "woof"; }
};
struct Cat : Animal {
    const char* speak() override { return "meow"; }
};
const char* identify(Animal* a) {
    if (auto* d = dynamic_cast<Dog*>(a)) return d->speak();
    if (auto* c = dynamic_cast<Cat*>(a)) return c->speak();
    return "unknown";
}
int main() {
    Dog d;
    Cat c;
    printf("%s %s\n", identify(&d), identify(&c));
    return 0;
}
