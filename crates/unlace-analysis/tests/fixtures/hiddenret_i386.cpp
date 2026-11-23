// (kuna) cppsig hidden struct return on i386 System V: mk returns S by value,
// so the caller passes a hidden pointer the callee pops with `ret $4`.
// Build: clang++ -m32 -O1 -fno-stack-protector -fno-pic -nostdlib -ffreestanding
//        -static -fno-exceptions -o hiddenret_i386 hiddenret_i386.cpp
struct S { int a, b, c; };
__attribute__((noinline)) struct S mk(int x, int y) { struct S s = { x, y, x + y }; return s; }
__attribute__((noinline)) int use(int q) { struct S s = mk(q, 2); return s.c; }
extern "C" void _start(void) { volatile int k = use(*(volatile int *)0x1000); (void)k; for (;;) {} }
