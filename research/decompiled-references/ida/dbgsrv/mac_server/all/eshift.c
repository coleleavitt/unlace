/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: eshift
// Address: 0x00000001000749C0

//----- (00000001000749C0) ----------------------------------------------------
__int64 __fastcall eshift(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  __m128i *v3; // rax
  const __m128i *v4; // rcx
  unsigned int v5; // edx
  int v6; // r9d
  unsigned int v7; // ecx
  __m128i v8; // xmm0
  unsigned int v9; // eax
  __m128i inserted; // xmm1
  __m128i si128; // xmm1
  unsigned int v12; // eax
  __m128i v13; // xmm0
  unsigned int v14; // ecx
  int v15; // eax
  __m128i *v16; // rdx
  const __m128i *v17; // r8
  int v18; // r9d
  __int16 v19; // cx
  int v20; // esi
  __m128i v21; // xmm1
  unsigned int v22; // ecx
  unsigned int v23; // edx
  __m128i v24; // xmm1
  __m128i v25; // xmm0
  __m128i v26; // xmm1
  bool v27; // cf
  unsigned int v28; // r10d
  __int16 v29; // cx
  __int16 v30; // cx
  __int16 v31; // cx
  int v32; // r9d
  int v33; // eax
  unsigned int epi16; // edx
  __m128i v35; // xmm0
  unsigned int v36; // esi
  unsigned int v37; // r8d
  __m128i v38; // xmm1
  unsigned int v39; // edx
  __m128i v40; // xmm0
  unsigned int v41; // eax
  unsigned int v42; // esi
  __m128i v43; // xmm1

  result = 1;
  if ( !a2 )
    return result;
  if ( (a2 & 0x80000000) == 0 )
  {
    if ( a2 >= 0x10 )
    {
      v3 = (__m128i *)(a1 + 4);
      v4 = (const __m128i *)(a1 + 6);
      v5 = a2 - 16;
      if ( (((unsigned __int8)((a2 - 16) >> 4) + 1) & 7) != 0 )
      {
        v6 = 0;
        do
        {
          *v3 = _mm_loadu_si128(v4);
          *(_WORD *)(a1 + 20) = 0;
          v6 += 16;
        }
        while ( 16 * (((unsigned __int8)((a2 - 16) >> 4) + 1) & 7) != v6 );
        a2 -= v6;
      }
      if ( v5 >= 0x70 )
      {
        do
        {
          *v3 = *v4;
          *(_WORD *)(a1 + 20) = 0;
          *v3 = *v4;
          *(_WORD *)(a1 + 20) = 0;
          *v3 = *v4;
          *(_WORD *)(a1 + 20) = 0;
          *v3 = *v4;
          *(_WORD *)(a1 + 20) = 0;
          *v3 = *v4;
          *(_WORD *)(a1 + 20) = 0;
          *v3 = *v4;
          *(_WORD *)(a1 + 20) = 0;
          *v3 = *v4;
          *(_WORD *)(a1 + 20) = 0;
          *v3 = _mm_loadu_si128(v4);
          *(_WORD *)(a1 + 20) = 0;
          a2 -= 128;
        }
        while ( a2 > 0xF );
      }
    }
    if ( a2 >= 8 )
    {
      v7 = *(unsigned __int16 *)(a1 + 20);
      v8 = _mm_loadu_si128((const __m128i *)(a1 + 4));
      v9 = a2 - 8;
      if ( (((_BYTE)a2 - 8) & 8) == 0 )
      {
        inserted = _mm_insert_epi16(_mm_srli_si128(v8, 2), v7, 7);
        v7 <<= 8;
        v8 = _mm_or_si128(_mm_slli_epi16(v8, 8u), _mm_srli_epi16(inserted, 8u));
        a2 -= 8;
      }
      if ( v9 >= 8 )
      {
        si128 = _mm_load_si128((const __m128i *)&xmmword_1000A1510);
        v9 = a2;
        do
        {
          v8 = _mm_or_si128(
                 _mm_srli_epi16(_mm_insert_epi16(_mm_srli_si128(v8, 1), v7 << 8, 7), 8u),
                 _mm_and_si128(_mm_insert_epi16(_mm_srli_si128(v8, 2), v7, 7), si128));
          v9 -= 16;
          v7 = 0;
        }
        while ( v9 > 7 );
      }
      *(_WORD *)(a1 + 20) = v7;
      *(__m128i *)(a1 + 4) = v8;
      a2 = v9;
    }
    if ( !a2 )
      return 1;
    v12 = *(unsigned __int16 *)(a1 + 20);
    v13 = _mm_loadu_si128((const __m128i *)(a1 + 4));
    if ( (a2 & 1) != 0 )
    {
      v21 = _mm_insert_epi16(_mm_srli_si128(v13, 2), v12, 7);
      v12 *= 2;
      v13 = _mm_or_si128(_mm_add_epi16(v13, v13), _mm_srli_epi16(v21, 0xFu));
      v14 = a2 - 1;
      if ( a2 == 1 )
      {
LABEL_28:
        *(_WORD *)(a1 + 20) = v12;
        *(__m128i *)(a1 + 4) = v13;
        return 1;
      }
    }
    else
    {
      v14 = a2;
      if ( a2 == 1 )
        goto LABEL_28;
    }
    v22 = v14 - 1;
    do
    {
      v23 = 2 * v12;
      v24 = _mm_srli_epi16(_mm_insert_epi16(_mm_srli_si128(v13, 2), v12, 7), 0xFu);
      v25 = _mm_add_epi16(v13, v13);
      v26 = _mm_or_si128(v24, v25);
      v12 *= 4;
      v13 = _mm_or_si128(
              _mm_srli_epi16(_mm_insert_epi16(_mm_srli_si128(v25, 2), v23, 7), 0xFu),
              _mm_add_epi16(v26, v26));
      v27 = __CFADD__(v22, -2);
      v22 -= 2;
    }
    while ( v27 );
    goto LABEL_28;
  }
  v15 = -a2;
  if ( (signed int)-a2 < 16 )
  {
    v19 = 0;
    goto LABEL_36;
  }
  v16 = (__m128i *)(a1 + 6);
  v17 = (const __m128i *)(a1 + 4);
  v18 = ((unsigned __int8)((-16 - a2) >> 4) + 1) & 3;
  if ( -16 - a2 < 0x30 )
  {
    v19 = 0;
    v20 = -a2;
    if ( !v18 )
      goto LABEL_36;
    goto LABEL_33;
  }
  v28 = (((-16 - a2) >> 4) + 1) & 0xFFFFFFFC;
  v19 = 0;
  do
  {
    v29 = *(_WORD *)(a1 + 20) | v19;
    *v16 = *v17;
    *(_WORD *)(a1 + 4) = 0;
    v30 = *(_WORD *)(a1 + 20) | v29;
    *v16 = *v17;
    *(_WORD *)(a1 + 4) = 0;
    v31 = *(_WORD *)(a1 + 20) | v30;
    *v16 = *v17;
    *(_WORD *)(a1 + 4) = 0;
    v19 = *(_WORD *)(a1 + 20) | v31;
    *v16 = _mm_loadu_si128(v17);
    *(_WORD *)(a1 + 4) = 0;
    a2 += 64;
    v28 -= 4;
  }
  while ( v28 );
  v20 = -a2;
  v15 = v20;
  if ( v18 )
  {
LABEL_33:
    v32 = 16 * v18;
    v33 = 0;
    do
    {
      v19 |= *(_WORD *)(a1 + 20);
      *v16 = _mm_loadu_si128(v17);
      *(_WORD *)(a1 + 4) = 0;
      v33 += 16;
    }
    while ( v32 != v33 );
    v15 = v20 - v33;
  }
LABEL_36:
  if ( v15 >= 8 )
  {
    epi16 = *(unsigned __int16 *)(a1 + 20);
    v35 = _mm_loadu_si128((const __m128i *)(a1 + 4));
    do
    {
      v36 = v15;
      v19 |= (unsigned __int8)epi16;
      v37 = (unsigned int)_mm_extract_epi16(v35, 0) >> 8;
      v38 = _mm_or_si128(
              _mm_slli_epi16(v35, 8u),
              _mm_srli_epi16(_mm_insert_epi16(_mm_srli_si128(v35, 2), epi16, 7), 8u));
      v35 = _mm_insert_epi16(_mm_slli_si128(v38, 2), v37, 0);
      v15 -= 8;
      epi16 = _mm_extract_epi16(v38, 7);
    }
    while ( v36 > 0xF );
    *(_WORD *)(a1 + 4) = v37;
    *(__m128i *)(a1 + 6) = v38;
  }
  if ( v15 > 0 )
  {
    v39 = *(unsigned __int16 *)(a1 + 20);
    v40 = _mm_loadu_si128((const __m128i *)(a1 + 4));
    v41 = v15 + 1;
    do
    {
      v19 |= v39 & 1;
      v42 = (unsigned int)_mm_extract_epi16(v40, 0) >> 1;
      v43 = _mm_or_si128(
              _mm_slli_epi16(v40, 0xFu),
              _mm_srli_epi16(_mm_insert_epi16(_mm_srli_si128(v40, 2), v39, 7), 1u));
      v40 = _mm_insert_epi16(_mm_slli_si128(v43, 2), v42, 0);
      v39 = _mm_extract_epi16(v43, 7);
      --v41;
    }
    while ( v41 > 1 );
    *(_WORD *)(a1 + 4) = v42;
    *(__m128i *)(a1 + 6) = v43;
  }
  result = 2;
  if ( !v19 )
    return 1;
  return result;
}
// 1000A1510: using guessed type __int128 xmmword_1000A1510;
