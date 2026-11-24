#include <arm_neon.h>
#include <stdatomic.h>
int32x4_t addv(int32x4_t a, int32x4_t b) { return vaddq_s32(a, b); }
uint8x16_t tbl(uint8x16_t t, uint8x16_t i) { return vqtbl1q_u8(t, i); }
float dot4(const float *a, const float *b) { float32x4_t s = vmulq_f32(vld1q_f32(a), vld1q_f32(b)); return vaddvq_f32(s); }
struct big { long a, b, c, d; };
void cp(struct big *d, const struct big *s) { *d = *s; }
_Thread_local int tl;
int gettl(void) { return tl; }
_Atomic long cnt;
long inc(void) { return atomic_fetch_add_explicit(&cnt, 1, memory_order_relaxed); }
int cas(_Atomic int *p, int e, int n) { return atomic_compare_exchange_strong(p, &e, n); }
long sys_w(long fd, const void *b, long n) { register long x8 __asm__("x8") = 64; register long x0 __asm__("x0") = fd; register long x1 __asm__("x1") = (long)b; register long x2 __asm__("x2") = n; __asm__ volatile("svc 0" : "+r"(x0) : "r"(x8), "r"(x1), "r"(x2) : "memory"); return x0; }
typedef int (*fp)(int);
int callfp(fp f, int x) { return f(x) + 1; }
unsigned long sysreg(void) { unsigned long v; __asm__ volatile("mrs %0, cntvct_el0" : "=r"(v)); return v; }
