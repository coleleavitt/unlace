#include <arm_neon.h>
uint8x16_t tb(uint8x16_t t, uint8x16_t i) { return vqtbl1q_u8(t, i); }
int16x8_t qadd(int16x8_t a, int16x8_t b) { return vqaddq_s16(a, b); }
uint32x4_t umx(uint32x4_t a, uint32x4_t b) { return vmaxq_u32(a, b); }
float32x4_t fma4(float32x4_t a, float32x4_t b, float32x4_t c) { return vaddq_f32(vmulq_f32(a, b), c); }
uint8x16_t aes(uint8x16_t s, uint8x16_t k) { return vaesmcq_u8(vaeseq_u8(s, k)); }
int32x4_t shr(int32x4_t a) { return vrshrq_n_s32(a, 3); }
uint32_t hmax(uint32x4_t a) { return vmaxvq_u32(a); }
int32_t lane1(int32x4_t a) { return vgetq_lane_s32(a, 1); }
int32x4_t dup(int32_t x) { return vdupq_n_s32(x); }
void addloop(int32_t *d, const int32_t *a, const int32_t *b, int n) { for (int i = 0; i + 4 <= n; i += 4) vst1q_s32(d + i, vaddq_s32(vld1q_s32(a + i), vld1q_s32(b + i))); }
uint64x2_t pm(uint64_t a, uint64_t b) { return vreinterpretq_u64_p128(vmull_p64(a, b)); }
