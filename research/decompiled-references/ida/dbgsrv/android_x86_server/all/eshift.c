/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: eshift
// Address: 0x000A3F50

//----- (000A3F50) --------------------------------------------------------
int __cdecl eshift(int a1, int a2)
{
  int v2; // edx
  int result; // eax
  int v4; // eax
  int v5; // esi
  int v6; // edi
  int v7; // ecx
  __int64 v8; // xmm0_8
  int v9; // edi
  __int64 v10; // xmm0_8
  unsigned int v11; // ecx
  __m128i v12; // xmm0
  int v13; // esi
  __m128i v14; // xmm1
  unsigned int v15; // ecx
  __m128i v16; // xmm0
  int v17; // edx
  __m128i inserted; // xmm1
  int v19; // ebx
  __m128i v20; // xmm0
  int v21; // edx
  __m128i si128; // xmm1
  __m128i v23; // xmm2
  __m128i v24; // xmm3
  int v25; // edx
  __m128i v26; // xmm0
  int v27; // esi
  __m128i v28; // xmm1
  __m128i v29; // xmm2
  __m128i v30; // xmm3

  v2 = a2;
  result = 1;
  if ( !a2 )
    return result;
  v4 = a1;
  if ( a2 >= 0 )
  {
    if ( a2 >= 16 )
    {
      v9 = a2 + 16;
      do
      {
        v10 = *(_QWORD *)(a1 + 6);
        *(_QWORD *)(a1 + 12) = *(_QWORD *)(a1 + 14);
        *(_QWORD *)(a1 + 4) = v10;
        *(_WORD *)(a1 + 20) = 0;
        v9 -= 16;
      }
      while ( v9 > 31 );
      v2 = a2 & 0xF;
      if ( (unsigned int)v2 < 8 )
      {
LABEL_5:
        if ( v2 <= 0 )
          return 1;
LABEL_18:
        v15 = *(unsigned __int16 *)(a1 + 20);
        v16 = _mm_loadu_si128((const __m128i *)(a1 + 4));
        v17 = v2 + 1;
        do
        {
          inserted = _mm_insert_epi16(_mm_srli_si128(v16, 2), v15, 7);
          v15 *= 2;
          v16 = _mm_or_si128(_mm_add_epi16(v16, v16), _mm_srli_epi16(inserted, 0xFu));
          --v17;
        }
        while ( v17 > 1 );
        *(_WORD *)(a1 + 20) = v15;
        *(__m128i *)(a1 + 4) = v16;
        return 1;
      }
    }
    else if ( a2 < 8 )
    {
      goto LABEL_5;
    }
    v11 = *(unsigned __int16 *)(a1 + 20);
    v12 = _mm_loadu_si128((const __m128i *)(a1 + 4));
    v13 = v2 + 8;
    do
    {
      v14 = _mm_insert_epi16(_mm_srli_si128(v12, 2), v11, 7);
      v11 <<= 8;
      v12 = _mm_or_si128(_mm_slli_epi16(v12, 8u), _mm_srli_epi16(v14, 8u));
      v13 -= 8;
    }
    while ( v13 > 15 );
    v2 &= 7u;
    *(_WORD *)(a1 + 20) = v11;
    *(__m128i *)(a1 + 4) = v12;
    if ( !v2 )
      return 1;
    goto LABEL_18;
  }
  v5 = -a2;
  if ( -a2 < 16 )
  {
    v7 = 0;
    if ( v5 < 8 )
      goto LABEL_25;
    goto LABEL_22;
  }
  v6 = 16 - a2;
  v7 = 0;
  do
  {
    LOWORD(v7) = *(_WORD *)(a1 + 20) | v7;
    v8 = *(_QWORD *)(a1 + 4);
    *(_QWORD *)(a1 + 14) = *(_QWORD *)(a1 + 12);
    *(_QWORD *)(a1 + 6) = v8;
    *(_WORD *)(a1 + 4) = 0;
    v6 -= 16;
  }
  while ( v6 > 31 );
  v5 = -(char)a2 & 0xF;
  if ( (unsigned int)v5 >= 8 )
  {
LABEL_22:
    LOWORD(v19) = *(_WORD *)(a1 + 4);
    v20 = _mm_loadu_si128((const __m128i *)(a1 + 6));
    v21 = v5 + 8;
    si128 = _mm_load_si128((const __m128i *)(&qword_13ACD8 - 38399));
    v23 = _mm_load_si128((const __m128i *)(&qword_13ACD8 - 38397));
    do
    {
      v7 |= (unsigned __int8)_mm_extract_epi16(v20, 7);
      v24 = _mm_cvtsi32_si128((unsigned __int16)v19);
      v19 = BYTE1(v19);
      v20 = _mm_or_si128(
              _mm_srli_epi16(v20, 8u),
              _mm_slli_epi16(_mm_or_si128(_mm_shuffle_epi8(v20, v23), _mm_shuffle_epi8(v24, si128)), 8u));
      v21 -= 8;
    }
    while ( v21 > 15 );
    v5 &= 7u;
    v4 = a1;
    *(_WORD *)(a1 + 4) = v19;
    *(__m128i *)(a1 + 6) = v20;
  }
LABEL_25:
  if ( v5 > 0 )
  {
    LOWORD(v25) = *(_WORD *)(v4 + 4);
    v26 = _mm_loadu_si128((const __m128i *)(v4 + 6));
    v27 = v5 + 1;
    v28 = _mm_load_si128((const __m128i *)(&qword_13ACD8 - 38399));
    v29 = _mm_load_si128((const __m128i *)(&qword_13ACD8 - 38397));
    do
    {
      v7 |= _mm_extract_epi16(v26, 7) & 1;
      v30 = _mm_cvtsi32_si128((unsigned __int16)v25);
      v25 = (unsigned __int16)v25 >> 1;
      v26 = _mm_or_si128(
              _mm_srli_epi16(v26, 1u),
              _mm_slli_epi16(_mm_or_si128(_mm_shuffle_epi8(v26, v29), _mm_shuffle_epi8(v30, v28)), 0xFu));
      --v27;
    }
    while ( v27 > 1 );
    *(_WORD *)(v4 + 4) = v25;
    *(__m128i *)(v4 + 6) = v26;
  }
  result = 2;
  if ( !(_WORD)v7 )
    return 1;
  return result;
}
// 13ACD8: using guessed type __int64 qword_13ACD8;
