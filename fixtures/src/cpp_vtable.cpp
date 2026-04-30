#include <cstdio>
struct Base {
    virtual int value() { return 0; }
    virtual ~Base() {}
};
struct Derived : Base {
    int value() override { return 42; }
};
int use_base(Base* b) { return b->value(); }
int main() {
    Derived d;
    printf("%d\n", use_base(&d));
    return 0;
}
