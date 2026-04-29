__m128d *__fastcall sub_29290(__m128d *a1)
{
  __m128d v1; // xmm1
  __m128d v2; // xmm0
  __m128d v3; // xmm1
  __m128d v5[2]; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v6; // [rsp+48h] [rbp-10h]

  v6 = __readfsqword(0x28u);
  QT::QRectF::normalized((QT::QRectF *)v5);
  v1 = _mm_unpacklo_pd((__m128d)0x4021000000000000uLL, (__m128d)0x4021000000000000uLL);
  v2 = _mm_add_pd(_mm_add_pd(v5[1], v1), v1);
  v3 = _mm_add_pd(_mm_unpacklo_pd((__m128d)0xC021000000000000LL, (__m128d)0xC021000000000000LL), v5[0]);
  a1[1] = v2;
  *a1 = v3;
  return a1;
}
