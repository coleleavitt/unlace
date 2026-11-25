/* Fixture for functails with gcc hot/cold splits whose cold parts are calls to abort,
   the shape of the assert tails in /bin/ls (crates/unlace-console/tests/verify_functails.rs).
   gcc -O2 -o cold_stub_x86_64 cold_stub_x86_64.c && strip cold_stub_x86_64 */
#include <stdlib.h>

__attribute__((noinline)) int first(int x) {
    if (__builtin_expect(x < 0, 0))
        abort();
    return x + 7;
}

__attribute__((noinline)) int work(int x) {
    if (__builtin_expect(x < 0, 0))
        abort();
    return x * 3 + 1;
}

int main(int argc, char **argv) {
    (void)argv;
    return (first(argc) + work(argc)) & 0xff;
}
