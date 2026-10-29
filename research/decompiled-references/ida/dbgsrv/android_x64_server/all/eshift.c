/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: eshift
// Address: 0x00000000000B7800

//----- (00000000000B7800) ----------------------------------------------------
__int64 __fastcall eshift(__int64 a1, int a2, double a3, __m128 a4)
{
  __int64 result; // rax
  int v5; // eax
  int v6; // eax
  int v7; // esi
  int v8; // ecx
  int v9; // edx
  unsigned int v10; // ecx
  __m128i v11; // xmm0
  int v12; // eax
  __m128i v13; // xmm1
  unsigned int v14; // eax
  __m128i v15; // xmm0
  int v16; // esi
  __m128i inserted; // xmm1
  int v18; // r9d
  __m128i v19; // xmm0
  int v20; // edx
  int v21; // r8d
  unsigned int v22; // r8d
  int v23; // r10d
  __m128i v24; // xmm1
  int v25; // r10d
  __m128i si128; // xmm2
  int v27; // ecx
  __m128i v28; // xmm1
  __m128i v29; // xmm0
  int v30; // edx
  __m128i v31; // xmm0
  int v32; // eax
  __m128i v33; // xmm1

  result = 1;
  if ( !a2 )
    return result;
  if ( a2 >= 0 )
  {
    if ( a2 >= 16 )
    {
      v9 = a2 + 16;
      do
      {
        *(__m128i *)(a1 + 4) = _mm_loadu_si128((const __m128i *)(a1 + 6));
        *(_WORD *)(a1 + 20) = 0;
        v9 -= 16;
      }
      while ( v9 > 31 );
      a2 &= 0xFu;
      if ( a2 < 8 )
      {
LABEL_5:
        if ( a2 <= 0 )
          return 1;
LABEL_18:
        v14 = *(unsigned __int16 *)(a1 + 20);
        v15 = _mm_loadu_si128((const __m128i *)(a1 + 4));
        v16 = a2 + 1;
        do
        {
          inserted = _mm_insert_epi16(
                       _mm_insert_epi16(
                         _mm_insert_epi16(
                           _mm_insert_epi16(
                             _mm_insert_epi16(
                               _mm_insert_epi16(
                                 _mm_insert_epi16(
                                   _mm_cvtsi32_si128(_mm_extract_epi16(v15, 1)),
                                   _mm_extract_epi16(v15, 2),
                                   1),
                                 _mm_extract_epi16(v15, 3),
                                 2),
                               _mm_extract_epi16(v15, 4),
                               3),
                             _mm_extract_epi16(v15, 5),
                             4),
                           _mm_extract_epi16(v15, 6),
                           5),
                         _mm_extract_epi16(v15, 7),
                         6),
                       v14,
                       7);
          v14 *= 2;
          v15 = _mm_or_si128(_mm_add_epi16(v15, v15), _mm_srli_epi16(inserted, 0xFu));
          --v16;
        }
        while ( v16 > 1 );
        *(_WORD *)(a1 + 20) = v14;
        *(__m128i *)(a1 + 4) = v15;
        return 1;
      }
    }
    else if ( a2 < 8 )
    {
      goto LABEL_5;
    }
    v10 = *(unsigned __int16 *)(a1 + 20);
    v11 = _mm_loadu_si128((const __m128i *)(a1 + 4));
    v12 = a2 + 8;
    do
    {
      v13 = _mm_insert_epi16(
              _mm_insert_epi16(
                _mm_insert_epi16(
                  _mm_insert_epi16(
                    _mm_insert_epi16(
                      _mm_insert_epi16(
                        _mm_insert_epi16(_mm_cvtsi32_si128(_mm_extract_epi16(v11, 1)), _mm_extract_epi16(v11, 2), 1),
                        _mm_extract_epi16(v11, 3),
                        2),
                      _mm_extract_epi16(v11, 4),
                      3),
                    _mm_extract_epi16(v11, 5),
                    4),
                  _mm_extract_epi16(v11, 6),
                  5),
                _mm_extract_epi16(v11, 7),
                6),
              v10,
              7);
      v10 <<= 8;
      v11 = _mm_or_si128(_mm_slli_epi16(v11, 8u), _mm_srli_epi16(v13, 8u));
      v12 -= 8;
    }
    while ( v12 > 15 );
    a2 &= 7u;
    *(_WORD *)(a1 + 20) = v10;
    *(__m128i *)(a1 + 4) = v11;
    if ( a2 <= 0 )
      return 1;
    goto LABEL_18;
  }
  v5 = -a2;
  if ( -a2 < 16 )
  {
    v8 = 0;
    if ( v5 < 8 )
      goto LABEL_31;
LABEL_22:
    LOWORD(v18) = *(_WORD *)(a1 + 4);
    v19 = _mm_loadu_si128((const __m128i *)(a1 + 6));
    v20 = ~v5;
    v21 = -16;
    if ( ~v5 >= -17 && v5 != 16 )
      v21 = ~v5;
    v22 = v5 + v21;
    if ( (v22 & 8) != 0 )
    {
      v8 |= (unsigned __int8)_mm_extract_epi16(v19, 7);
      v24 = _mm_cvtsi32_si128((unsigned __int16)v18);
      v18 = BYTE1(v18);
      v19 = _mm_or_si128(_mm_srli_epi16(v19, 8u), _mm_slli_epi16(_mm_blend_epi16(_mm_slli_si128(v19, 2), v24, 1), 8u));
      v23 = v5 - 8;
      v20 = v8;
      a4 = (__m128)v19;
      if ( v22 > 0xFFFFFFF7 )
      {
LABEL_30:
        v5 &= 7u;
        *(_WORD *)(a1 + 4) = v18;
        *(__m128 *)(a1 + 6) = a4;
        v8 = v20;
        goto LABEL_31;
      }
    }
    else
    {
      v23 = v5;
      if ( v22 > 0xFFFFFFF7 )
        goto LABEL_30;
    }
    v25 = v23 + 16;
    si128 = _mm_load_si128((const __m128i *)&xmmword_FE310);
    a4 = (__m128)v19;
    do
    {
      v27 = (unsigned __int8)_mm_extract_epi16(v19, 7) | v8;
      v28 = _mm_blend_epi16(_mm_slli_si128((__m128i)a4, 2), _mm_cvtsi32_si128((unsigned __int16)v18), 1);
      v29 = _mm_or_si128(_mm_srli_epi16(v19, 8u), _mm_slli_epi16(v28, 8u));
      v20 = v27 | (unsigned __int8)_mm_extract_epi16(v29, 7);
      a4 = (__m128)_mm_or_si128(
                     _mm_and_si128(v28, si128),
                     _mm_slli_epi16(_mm_blend_epi16(_mm_slli_si128(v29, 2), _mm_cvtsi32_si128(BYTE1(v18)), 1), 8u));
      v25 -= 16;
      LOWORD(v18) = 0;
      v8 = v20;
      v19 = (__m128i)a4;
    }
    while ( v25 > 23 );
    goto LABEL_30;
  }
  v6 = 16 - a2;
  v7 = -a2;
  v8 = 0;
  do
  {
    LOWORD(v8) = *(_WORD *)(a1 + 20) | v8;
    *(__m128i *)(a1 + 6) = _mm_loadu_si128((const __m128i *)(a1 + 4));
    *(_WORD *)(a1 + 4) = 0;
    v6 -= 16;
  }
  while ( v6 > 31 );
  v5 = v7 & 0xF;
  if ( (unsigned int)v5 >= 8 )
    goto LABEL_22;
LABEL_31:
  if ( v5 > 0 )
  {
    LOWORD(v30) = *(_WORD *)(a1 + 4);
    v31 = _mm_loadu_si128((const __m128i *)(a1 + 6));
    v32 = v5 + 1;
    do
    {
      v8 |= _mm_extract_epi16(v31, 7) & 1;
      v33 = _mm_cvtsi32_si128((unsigned __int16)v30);
      v30 = (unsigned __int16)v30 >> 1;
      v31 = _mm_or_si128(_mm_srli_epi16(v31, 1u), _mm_slli_epi16(_mm_blend_epi16(_mm_slli_si128(v31, 2), v33, 1), 0xFu));
      --v32;
    }
    while ( v32 > 1 );
    *(_WORD *)(a1 + 4) = v30;
    *(__m128i *)(a1 + 6) = v31;
  }
  result = 2;
  if ( !(_WORD)v8 )
    return 1;
  return result;
}
// FE310: using guessed type __int128 xmmword_FE310;
