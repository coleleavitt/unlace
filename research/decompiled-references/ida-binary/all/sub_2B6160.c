unsigned __int64 __fastcall sub_2B6160(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __m128i a4,
        __m128i a5,
        double a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  QT::QEventPoint *v12; // rdi
  __m128 v13; // xmm2
  __m128 v14; // xmm1
  __m128 v15; // xmm4
  __m128 v16; // xmm5
  __m128i v18; // [rsp+8h] [rbp-30h] BYREF
  unsigned __int64 v19; // [rsp+18h] [rbp-20h]

  v12 = *(QT::QEventPoint **)(a3 + 48);
  v19 = __readfsqword(0x28u);
  v18.m128i_i64[1] = -1;
  QT::QEventPoint::position(v12);
  v13 = (__m128)_mm_unpacklo_epi64(a4, a5);
  v14 = (__m128)_mm_and_pd(_mm_unpacklo_pd((__m128d)0x8000000000000000LL, (__m128d)0x8000000000000000LL), (__m128d)v13);
  v18.m128i_i64[0] = _mm_cvttpd_epi32(
                       _mm_add_pd(
                         _mm_or_pd(
                           _mm_unpacklo_pd((__m128d)0x3FE0000000000000uLL, (__m128d)0x3FE0000000000000uLL),
                           (__m128d)v14),
                         (__m128d)v13)).m128i_u64[0];
  sub_2B6070(a1, &v18, (__int64)&v18.m128i_i64[1], 0, *(double *)v18.m128i_i64, v14, v13, a7, v15, v16, a10, a11);
  *(_QWORD *)a2 = v18.m128i_i64[1];
  *(_WORD *)(a2 + 8) = -1;
  return v19 - __readfsqword(0x28u);
}
