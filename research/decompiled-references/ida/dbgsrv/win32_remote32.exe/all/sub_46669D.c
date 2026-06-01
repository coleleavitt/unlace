/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46669D
// Address: 0x0046669D

//----- (0046669D) --------------------------------------------------------
__m128i *__cdecl sub_46669D(__m128i *a1, unsigned __int16 a2)
{
  __m128i *v2; // ecx
  __int16 v3; // si
  __m128i *result; // eax
  __m128i v5; // xmm2
  unsigned int v6; // eax
  int v7; // [esp-4h] [ebp-4h]

  v2 = a1;
  if ( dword_4B7844 >= 1 )
  {
    v5 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_cvtsi32_si128(a2), 0), 0);
    while ( 1 )
    {
      if ( ((unsigned __int16)v2 & 0xFFFu) > 0xFF0 )
      {
        if ( v2->m128i_i16[0] == a2 )
          return v2;
        if ( !v2->m128i_i16[0] )
          return nullptr;
        v7 = 2;
      }
      else
      {
        v6 = _mm_movemask_epi8((__m128i)_mm_or_ps(
                                          (__m128)_mm_cmpeq_epi16((__m128i)0LL, *v2),
                                          (__m128)_mm_cmpeq_epi16(*v2, v5)));
        if ( v6 )
        {
          _BitScanForward(&v6, v6);
          v2 = (__m128i *)((char *)v2 + v6);
          goto LABEL_6;
        }
        v7 = 16;
      }
      v2 = (__m128i *)((char *)v2 + v7);
    }
  }
  if ( a1->m128i_i16[0] )
  {
    v3 = a1->m128i_i16[0];
    do
    {
      if ( v3 == a2 )
        break;
      v2 = (__m128i *)((char *)v2 + 2);
      v3 = v2->m128i_i16[0];
    }
    while ( v2->m128i_i16[0] );
  }
LABEL_6:
  result = nullptr;
  if ( v2->m128i_i16[0] == a2 )
    return v2;
  return result;
}
// 4B7844: using guessed type int dword_4B7844;
