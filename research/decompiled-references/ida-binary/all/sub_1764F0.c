__int64 __fastcall sub_1764F0(__int64 a1, __int64 a2, __m128i a3, __m128i a4)
{
  __int64 result; // rax
  __m128d v5; // xmm2

  if ( *(_DWORD *)(a2 + 64) == 1 )
  {
    result = QT::QEventPoint::position(*(QT::QEventPoint **)(a2 + 48));
    v5 = (__m128d)_mm_unpacklo_epi64(a3, a4);
    *(_QWORD *)(a1 + 80) = _mm_cvttpd_epi32(
                             _mm_add_pd(
                               _mm_or_pd(
                                 _mm_unpacklo_pd((__m128d)0x3FE0000000000000uLL, (__m128d)0x3FE0000000000000uLL),
                                 _mm_and_pd(
                                   _mm_unpacklo_pd((__m128d)0x8000000000000000LL, (__m128d)0x8000000000000000LL),
                                   v5)),
                               v5)).m128i_u64[0];
  }
  return result;
}
