/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: emdnorm
// Address: 0x000A42A0

//----- (000A42A0) --------------------------------------------------------
bool __cdecl emdnorm(int a1, char a2, char a3, int a4, int a5)
{
  int v5; // eax
  int v6; // ecx
  int v7; // edi
  char v8; // al
  __int16 v9; // cx
  int v10; // edx
  __int16 v11; // ax
  bool v12; // zf
  unsigned __int16 v13; // cx
  int v14; // edx
  unsigned int v15; // eax
  __m128i v16; // xmm1
  int v17; // ebx
  __int16 v18; // ax
  int v19; // edx
  int v20; // eax
  int v21; // eax
  unsigned int v22; // ebx
  __m128i v23; // xmm0
  int v24; // ecx
  __m128i si128; // xmm3
  __m128i v26; // xmm1
  int v27; // edi
  __m128i v28; // xmm1
  __m128i v29; // xmm0
  __m128i v30; // xmm1
  int v31; // eax
  unsigned int v32; // eax
  unsigned int v33; // ecx
  unsigned int v34; // eax
  unsigned int v35; // ebx
  unsigned int v36; // ecx
  unsigned int v37; // edx
  int v38; // ecx
  unsigned int v39; // eax
  __m128i v40; // xmm0
  __m128i v41; // xmm0
  unsigned int v42; // eax
  __m128i v43; // xmm0
  char v45; // [esp+Fh] [ebp-3Dh]
  __int16 v46; // [esp+10h] [ebp-3Ch]
  int v47; // [esp+14h] [ebp-38h]
  int v48; // [esp+18h] [ebp-34h]
  bool v49; // [esp+1Ch] [ebp-30h]
  int v50; // [esp+20h] [ebp-2Ch]
  int v51; // [esp+24h] [ebp-28h]
  int v52; // [esp+28h] [ebp-24h]
  int v53; // [esp+30h] [ebp-1Ch]
  __int16 v54; // [esp+34h] [ebp-18h]
  int v55; // [esp+38h] [ebp-14h]

  v49 = *(_WORD *)(a1 + 2) != 0;
  v5 = sub_A47E0(a1);
  if ( v5 < 113 )
  {
    v7 = a4 - v5;
    v6 = 1;
    if ( a4 - v5 > 32766 )
      goto LABEL_50;
    v8 = a2;
    if ( v7 < 0 )
    {
      v6 = 0;
      if ( v7 < -112 )
        goto LABEL_50;
      v8 = (eshift(a1, v7) != 1) | a2;
    }
    v9 = 255;
    v52 = 128;
    if ( a5 <= 52 )
    {
      if ( !a5 )
      {
        *(_WORD *)(a1 + 20) = 0;
        if ( v7 > 0 )
          goto LABEL_48;
        goto LABEL_49;
      }
      if ( a5 == 24 )
      {
        v50 = 4;
        v48 = 0;
        v10 = 256;
        v47 = 0;
        v46 = 256;
        v51 = 4;
        goto LABEL_21;
      }
    }
    else
    {
      v50 = 6;
      v10 = 0;
      if ( a5 == 53 )
      {
        v9 = 2047;
        v52 = 1024;
        v48 = 2048;
        v47 = 0;
        v46 = 2048;
        v51 = 6;
        goto LABEL_21;
      }
      v48 = 256;
      v47 = 0;
      v46 = 256;
      v51 = 6;
      if ( a5 == 56 )
        goto LABEL_21;
      if ( a5 == 64 )
      {
        v45 = v8;
        v11 = *(_WORD *)(a1 + 14) | (*(_WORD *)(a1 + 16) != 0);
        v12 = *(_WORD *)(a1 + 18) == 0;
        *(_DWORD *)(a1 + 16) = 0;
        v13 = v11 | (!v12 || *(_WORD *)(a1 + 20) != 0);
        *(_WORD *)(a1 + 20) = 0;
        v52 = 0x8000;
        v50 = 6;
        v48 = 1;
        v14 = 0;
        v47 = 0;
        v46 = 1;
LABEL_33:
        if ( (v13 & (unsigned __int16)v52) != 0 )
        {
          if ( v52 != v13 )
            goto LABEL_39;
          if ( v45 )
          {
            if ( a3 )
              goto LABEL_40;
            goto LABEL_39;
          }
          if ( (*(_WORD *)(a1 + 2 * v50) & (unsigned __int16)v46) != 0 )
          {
LABEL_39:
            v32 = ((unsigned int)*(unsigned __int16 *)(a1 + 18) + v47) >> 16;
            *(_WORD *)(a1 + 18) += v47;
            v33 = v32 + *(unsigned __int16 *)(a1 + 16);
            *(_WORD *)(a1 + 16) = v33;
            v34 = HIWORD(v33) + *(unsigned __int16 *)(a1 + 14);
            *(_WORD *)(a1 + 14) = v34;
            v35 = HIWORD(v34) + *(unsigned __int16 *)(a1 + 12) + v48;
            *(_WORD *)(a1 + 12) = v35;
            v36 = (HIWORD(v35) & 1) + *(unsigned __int16 *)(a1 + 10);
            *(_WORD *)(a1 + 10) = v36;
            v37 = HIWORD(v36) + *(unsigned __int16 *)(a1 + 8) + v14;
            *(_WORD *)(a1 + 8) = v37;
            v38 = (HIWORD(v37) & 1) + *(unsigned __int16 *)(a1 + 6);
            *(_WORD *)(a1 + 6) = v38;
            *(_WORD *)(a1 + 4) += HIWORD(v38);
          }
        }
LABEL_40:
        if ( a5 > 63 || v7 > 0 )
        {
          v42 = *(unsigned __int16 *)(a1 + 4);
          if ( !(_WORD)v42 )
            goto LABEL_46;
        }
        else
        {
          v39 = *(unsigned __int16 *)(a1 + 20);
          *(_WORD *)(a1 + 20) = 2 * v39;
          v40 = _mm_loadu_si128((const __m128i *)(a1 + 4));
          v41 = _mm_or_si128(
                  _mm_add_epi16(v40, v40),
                  _mm_srli_epi16(_mm_insert_epi16(_mm_srli_si128(v40, 2), v39, 7), 0xFu));
          *(__m128i *)(a1 + 4) = v41;
          v42 = _mm_cvtsi128_si32(v41);
          if ( !(_WORD)v42 )
          {
LABEL_46:
            *(_WORD *)(a1 + 20) = 0;
            v6 = 1;
            if ( v7 > 32766 )
              goto LABEL_50;
            if ( v7 > 0 )
            {
LABEL_48:
              *(_WORD *)(a1 + 2) = v7;
              return 1;
            }
LABEL_49:
            v6 = 0;
            goto LABEL_50;
          }
        }
        *(_WORD *)(a1 + 4) = (unsigned __int16)v42 >> 1;
        v43 = _mm_loadu_si128((const __m128i *)(a1 + 6));
        *(__m128i *)(a1 + 6) = _mm_or_si128(
                                 _mm_srli_epi16(v43, 1u),
                                 _mm_slli_epi16(
                                   _mm_or_si128(
                                     _mm_shuffle_epi8(v43, *(__m128i *)(&qword_13ACD8 - 38397)),
                                     _mm_shuffle_epi8(_mm_cvtsi32_si128(v42), *(__m128i *)(&qword_13ACD8 - 38399))),
                                   0xFu));
        ++v7;
        goto LABEL_46;
      }
    }
    if ( a5 >= 64 )
    {
      v45 = v8;
      v13 = *(_WORD *)(a1 + 20);
      v52 = 0x8000;
      v50 = 9;
      v47 = 1;
      v14 = 0;
      v48 = 0;
      v46 = 1;
      goto LABEL_33;
    }
    v51 = 10;
    v9 = -1;
    v52 = 0x8000;
    v50 = 9;
    v47 = 1;
    v10 = 0;
    v48 = 0;
    v46 = 1;
LABEL_21:
    v55 = v10;
    v45 = v8;
    if ( v7 <= 0 )
    {
      v15 = *(unsigned __int16 *)(a1 + 4);
      *(_WORD *)(a1 + 4) >>= 1;
      v16 = _mm_loadu_si128((const __m128i *)(a1 + 6));
      *(__m128i *)(a1 + 6) = _mm_or_si128(
                               _mm_srli_epi16(v16, 1u),
                               _mm_slli_epi16(
                                 _mm_or_si128(
                                   _mm_shuffle_epi8(_mm_cvtsi32_si128(v15), *(__m128i *)(&qword_13ACD8 - 38399)),
                                   _mm_shuffle_epi8(v16, *(__m128i *)(&qword_13ACD8 - 38397))),
                                 0xFu));
    }
    v17 = v51;
    v18 = *(_WORD *)(a1 + 2 * v51);
    v54 = v9;
    v13 = v9 & v18;
    v19 = v51 | 1;
    if ( (v51 | 1u) > 0xA )
      goto LABEL_32;
    v20 = 10 - v51;
    if ( (unsigned int)(10 - v51) >= 0x10 )
    {
      v53 = v7;
      v22 = v20 & 0xFFFFFFF0;
      v21 = v19 + (v20 & 0xFFFFFFF0);
      v23 = _mm_cvtsi32_si128(v13);
      v24 = 0;
      si128 = _mm_load_si128((const __m128i *)(&qword_13ACD8 - 38395));
      v26 = 0;
      do
      {
        v27 = v24 | v19;
        v23 = _mm_or_si128(
                v23,
                _mm_andnot_si128(
                  _mm_cmpeq_epi16(_mm_loadu_si128((const __m128i *)(a1 + 2 * (v24 | v19))), (__m128i)0LL),
                  si128));
        v26 = _mm_or_si128(
                v26,
                _mm_andnot_si128(
                  _mm_cmpeq_epi16(_mm_loadu_si128((const __m128i *)(a1 + 2 * (v24 | v19) + 16)), (__m128i)0LL),
                  si128));
        *(_OWORD *)(a1 + 2 * v27) = 0;
        *(_OWORD *)(a1 + 2 * v27 + 16) = 0;
        v24 += 16;
      }
      while ( v22 != v24 );
      v28 = _mm_or_si128(v26, v23);
      v29 = _mm_or_si128(_mm_shuffle_epi32(v28, 78), v28);
      v30 = _mm_or_si128(_mm_shuffle_epi32(v29, 229), v29);
      v13 = _mm_cvtsi128_si32(_mm_or_si128(_mm_srli_epi32(v30, 0x10u), v30));
      v7 = v53;
      if ( 10 - v51 == v22 )
        goto LABEL_31;
    }
    else
    {
      v21 = v51 | 1;
    }
    v31 = v21 - 11;
    do
    {
      v13 |= *(_WORD *)(a1 + 2 * v31 + 22) != 0;
      *(_WORD *)(a1 + 2 * v31++ + 22) = 0;
    }
    while ( v31 );
LABEL_31:
    v17 = v51;
    v18 = *(_WORD *)(a1 + 2 * v51);
LABEL_32:
    *(_WORD *)(a1 + 2 * v17) = ~v54 & v18;
    v14 = v55;
    goto LABEL_33;
  }
  v6 = v49;
LABEL_50:
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 18) = 0;
  *(_DWORD *)(a1 + 14) = 0;
  return v6 != 0;
}
// 13ACD8: using guessed type __int64 qword_13ACD8;
