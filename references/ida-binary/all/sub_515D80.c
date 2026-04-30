unsigned __int64 __fastcall sub_515D80(QT::QAbstractScrollArea *this, __int64 a2, __m128i a3, __m128i a4)
{
  __m128d v5; // xmm2
  __m128d v6; // xmm1
  __m128d v7; // xmm0
  double v8; // [rsp+8h] [rbp-20h] BYREF
  unsigned __int64 v9; // [rsp+10h] [rbp-18h] BYREF
  unsigned __int64 v10; // [rsp+18h] [rbp-10h]

  v10 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a2 + 68) == 1 )
  {
    QT::QEventPoint::position(*(QT::QEventPoint **)(a2 + 48));
    v5 = (__m128d)_mm_unpacklo_epi64(a3, a4);
    v6 = _mm_and_pd(_mm_unpacklo_pd((__m128d)0x8000000000000000LL, (__m128d)0x8000000000000000LL), v5);
    v7 = (__m128d)_mm_cvttpd_epi32(
                    _mm_add_pd(
                      _mm_or_pd(_mm_unpacklo_pd((__m128d)0x3FE0000000000000uLL, (__m128d)0x3FE0000000000000uLL), v6),
                      v5));
    v8 = v7.m128d_f64[0];
    v9 = sub_5128F0(this, (__int64)&v8, v7, v6);
    sub_514C10(this, (int *)&v9, 1, 1, v7.m128d_f64[0], v6.m128d_f64[0]);
  }
  return v10 - __readfsqword(0x28u);
}
