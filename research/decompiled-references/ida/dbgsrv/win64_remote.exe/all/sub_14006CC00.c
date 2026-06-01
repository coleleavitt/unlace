/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14006CC00
// Address: 0x000000014006CC00

//----- (000000014006CC00) ----------------------------------------------------
const __m128i *__fastcall sub_14006CC00(const __m128i *a1, unsigned __int16 a2)
{
  int v2; // r10d
  __int64 v4; // r9
  __m128i v5; // xmm2
  __m128i v6; // xmm0
  unsigned int v7; // eax
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned __int16 *v10; // rdx

  v2 = a2;
  v4 = 0;
  v5 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_cvtsi32_si128(a2), 0), 0);
  while ( ((unsigned __int16)a1 & 0xFFFu) > 0xFF0uLL )
  {
    if ( a1->m128i_i16[0] == a2 )
      return a1;
    if ( !a1->m128i_i16[0] )
      return nullptr;
    v8 = 2;
LABEL_8:
    a1 = (const __m128i *)((char *)a1 + v8);
  }
  v6 = _mm_loadu_si128(a1);
  v7 = _mm_movemask_epi8((__m128i)_mm_or_ps((__m128)_mm_cmpeq_epi16((__m128i)0LL, v6), (__m128)_mm_cmpeq_epi16(v6, v5)));
  if ( !v7 )
  {
    v8 = 16;
    goto LABEL_8;
  }
  _BitScanForward((unsigned int *)&v9, v7);
  v10 = (unsigned __int16 *)((char *)a1->m128i_u16 + v9);
  if ( *v10 == v2 )
    return (const __m128i *)v10;
  return (const __m128i *)v4;
}
// 14006CC64: variable 'v9' is possibly undefined
