signed __int64 __fastcall sub_5755F0(
        __int64 a1,
        __int64 a2,
        const double *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int128 a8)
{
  signed __int64 result; // rax
  __m128 v10; // xmm0

  result = sub_5754C0(
             a1,
             a2,
             (__int64)a3,
             a4,
             a5,
             a6,
             (__int128)_mm_loadu_si128((const __m128i *)&a7),
             (__int128)_mm_loadu_si128((const __m128i *)&a8));
  if ( a3 )
  {
    v10 = _mm_loadh_ps(a3);
    *(_OWORD *)(a1 + 184) = 0;
    *(__m128 *)(a1 + 176) = v10;
  }
  return result;
}
