/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_464890
// Address: 0x00464890

//----- (00464890) --------------------------------------------------------
__m128i *__cdecl sub_464890(__m128i *a1, unsigned __int8 a2, unsigned int a3)
{
  unsigned int v3; // ecx
  __m128i *v4; // edi
  unsigned int v5; // eax
  __m128i v7; // xmm0
  __m128i *v8; // edi

  v3 = a3;
  v4 = a1;
  if ( !a3 )
    return a1;
  v5 = 16843009 * a2;
  if ( a3 <= 0x20 )
    goto LABEL_16;
  if ( a3 >= 0x80 )
  {
    if ( _bittest(&dword_4B7848, 1u) )
    {
      memset(a1, a2, a3);
      return a1;
    }
    if ( !_bittest(&dword_4B5E28, 1u) )
      goto LABEL_16;
    v7 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v5), 0);
    *a1 = v7;
    v4 = (__m128i *)((unsigned int)&a1[1] & 0xFFFFFFF0);
    v3 = &a1->m128i_i8[a3] - (__int8 *)v4;
    if ( v3 > 0x80 )
    {
      do
      {
        *v4 = v7;
        v4[1] = v7;
        v4[2] = v7;
        v4[3] = v7;
        v4[4] = v7;
        v4[5] = v7;
        v4[6] = v7;
        v4[7] = v7;
        v4 += 8;
        v3 -= 128;
      }
      while ( (v3 & 0xFFFFFF00) != 0 );
      goto LABEL_12;
    }
  }
  if ( !_bittest(&dword_4B5E28, 1u) )
  {
LABEL_16:
    while ( (v3 & 3) != 0 )
    {
      v4->m128i_i8[0] = a2;
      v4 = (__m128i *)((char *)v4 + 1);
      --v3;
    }
    if ( (v3 & 4) != 0 )
    {
      v4->m128i_i32[0] = v5;
      v4 = (__m128i *)((char *)v4 + 4);
      v3 -= 4;
    }
    for ( ; (v3 & 0xFFFFFFF8) != 0; v3 -= 8 )
    {
      v4->m128i_i32[0] = v5;
      v4->m128i_i32[1] = v5;
      v4 = (__m128i *)((char *)v4 + 8);
    }
    return a1;
  }
  v7 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v5), 0);
LABEL_12:
  if ( v3 < 0x20 )
    goto LABEL_15;
  do
  {
    *v4 = v7;
    v4[1] = v7;
    v4 += 2;
    v3 -= 32;
  }
  while ( v3 >= 0x20 );
  if ( (v3 & 0x1F) != 0 )
  {
LABEL_15:
    v8 = (__m128i *)((char *)v4 + v3 - 32);
    *v8 = v7;
    v8[1] = v7;
    return a1;
  }
  return a1;
}
// 4B5E28: using guessed type int dword_4B5E28;
// 4B7848: using guessed type int dword_4B7848;
