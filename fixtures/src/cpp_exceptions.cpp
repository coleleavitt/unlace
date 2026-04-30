#include <stdexcept>
#include <cstdio>
void may_throw(int x) {
    if (x < 0) throw std::runtime_error("negative");
}
int safe_call(int x) {
    try {
        may_throw(x);
        return 0;
    } catch (const std::exception& e) {
        printf("caught: %s\n", e.what());
        return -1;
    }
}
int main() { return safe_call(-1); }
