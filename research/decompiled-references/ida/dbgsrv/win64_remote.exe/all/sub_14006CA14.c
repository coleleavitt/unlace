/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14006CA14
// Address: 0x000000014006CA14

//----- (000000014006CA14) ----------------------------------------------------
__int8 *__fastcall sub_14006CA14(__int64 a1, unsigned __int8 a2)
{
  const __m128i *v2; // r8
  unsigned int v3; // r10d
  __int64 v4; // r9
  __m128i v5; // xmm0
  __m128i v6; // xmm4
  __int64 v7; // rdx
  __m128i v8; // xmm1
  __int8 *v9; // rdx

  v2 = (const __m128i *)(a1 & 0xFFFFFFFFFFFFFFF0uLL);
  v3 = a2 | (a2 << 8);
  v4 = 0;
  v5 = _mm_loadu_si128((const __m128i *)(a1 & 0xFFFFFFFFFFFFFFF0uLL));
  v6 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_cvtsi32_si128(v3), 0), 0);
  for ( LODWORD(v7) = (-1 << (a1 & 0xF))
                    & _mm_movemask_epi8((__m128i)_mm_or_ps(
                                                   (__m128)_mm_cmpeq_epi8(v5, v6),
                                                   (__m128)_mm_cmpeq_epi8(v5, (__m128i)0LL)));
        !(_DWORD)v7;
        LODWORD(v7) = _mm_movemask_epi8((__m128i)_mm_or_ps(
                                                   (__m128)_mm_cmpeq_epi8(v8, v6),
                                                   (__m128)_mm_cmpeq_epi8(v8, (__m128i)0LL))) )
  {
    v8 = _mm_loadu_si128(++v2);
  }
  _BitScanForward((unsigned int *)&v7, v7);
  v9 = &v2->m128i_i8[v7];
  if ( *v9 == (_BYTE)v3 )
    return v9;
  return (__int8 *)v4;
}
// 14006CA84: variable 'v7' is possibly undefined
