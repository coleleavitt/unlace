/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: emdnorm
// Address: 0x00000000000B7C00

//----- (00000000000B7C00) ----------------------------------------------------
bool __fastcall emdnorm(__int64 a1, char a2, char a3, int a4, int a5, double a6, __m128 a7)
{
  char v9; // r12
  int v11; // ebp
  bool v12; // r15
  int v13; // eax
  int v14; // r13d
  __int16 v15; // dx
  int v16; // r9d
  unsigned int v17; // r11d
  int v18; // edi
  __int16 v19; // ax
  bool v20; // zf
  unsigned __int16 v21; // dx
  int v22; // r8d
  __int64 v23; // r10
  int v24; // ecx
  __m128i v25; // xmm0
  __m128i v26; // xmm1
  __int16 v27; // bp
  __int16 v28; // si
  __int64 v29; // r10
  __int64 v30; // r8
  int v31; // ebp
  __int64 v32; // r9
  __m128i v33; // xmm0
  __int64 v34; // rdx
  __m128i si128; // xmm3
  __m128i v36; // xmm2
  __int64 v37; // rcx
  __m128i v38; // xmm2
  __m128i v39; // xmm0
  __m128i v40; // xmm1
  unsigned int v41; // ecx
  unsigned int v42; // ecx
  unsigned int v43; // eax
  unsigned int v44; // r8d
  unsigned int v45; // ecx
  unsigned int v46; // edi
  int v47; // ecx
  unsigned int v48; // eax
  __m128i v49; // xmm0
  __m128i v50; // xmm0
  unsigned int v51; // eax
  __m128i v52; // xmm0
  __int16 v54; // [rsp+0h] [rbp-48h]
  int v55; // [rsp+4h] [rbp-44h]
  int v56; // [rsp+8h] [rbp-40h]
  __int64 v58; // [rsp+10h] [rbp-38h]

  v9 = a2;
  v11 = 0;
  v12 = *(_WORD *)(a1 + 2) != 0;
  v13 = sub_B8110(a1);
  if ( v13 >= 113 )
  {
    LOBYTE(v11) = v12;
LABEL_47:
    *(_OWORD *)a1 = 0;
    *(_QWORD *)(a1 + 14) = 0;
    return v11 != 0;
  }
  v14 = a4 - v13;
  v11 = 1;
  if ( v14 > 32766 )
    goto LABEL_47;
  if ( v14 < 0 )
  {
    v11 = 0;
    if ( v14 < -112 )
      goto LABEL_47;
    v9 = a2 | ((unsigned int)eshift(a1, v14, a6, a7) != 1);
  }
  v15 = 255;
  v16 = 128;
  if ( a5 <= 52 )
  {
    if ( !a5 )
    {
      *(_WORD *)(a1 + 20) = 0;
      if ( v14 > 0 )
        goto LABEL_49;
LABEL_24:
      v11 = 0;
      goto LABEL_47;
    }
    if ( a5 != 24 )
    {
LABEL_25:
      if ( a5 >= 64 )
      {
        v21 = *(_WORD *)(a1 + 20);
        v16 = 0x8000;
        v24 = 1;
        v18 = 0;
        v23 = 9;
        v22 = 0;
        v54 = 1;
        goto LABEL_33;
      }
      v17 = 10;
      v15 = -1;
      v16 = 0x8000;
      v24 = 1;
      v18 = 0;
      v23 = 9;
      v22 = 0;
      v54 = 1;
      if ( v14 > 0 )
      {
LABEL_20:
        v27 = *(_WORD *)(a1 + 2LL * v17);
        v28 = v15;
        v21 = v15 & v27;
        if ( (v17 | 1) > 0xA )
        {
LABEL_32:
          *(_WORD *)(a1 + 2LL * v17) = ~v28 & v27;
          goto LABEL_33;
        }
        v58 = v23;
        v55 = v22;
        v56 = v24;
        v29 = v17 | 1LL;
        if ( 10 - (unsigned __int64)v17 >= 0x10 )
        {
          v31 = v16;
          v32 = (10 - (_BYTE)v17) & 0xE;
          v30 = v29 + 10LL - v17 - v32;
          v33 = _mm_cvtsi32_si128(v21);
          v34 = 0;
          si128 = _mm_load_si128((const __m128i *)&xmmword_FE320);
          v36 = 0;
          do
          {
            v37 = v34 | v29;
            v33 = _mm_or_si128(
                    v33,
                    _mm_andnot_si128(
                      _mm_cmpeq_epi16(_mm_loadu_si128((const __m128i *)(a1 + 2 * (v34 | v29))), (__m128i)0LL),
                      si128));
            v36 = _mm_or_si128(
                    v36,
                    _mm_andnot_si128(
                      _mm_cmpeq_epi16(_mm_loadu_si128((const __m128i *)(a1 + 2 * (v34 | v29) + 16)), (__m128i)0LL),
                      si128));
            *(_OWORD *)(a1 + 2 * v37) = 0;
            *(_OWORD *)(a1 + 2 * v37 + 16) = 0;
            v34 += 16;
          }
          while ( 10LL - v17 - v32 != v34 );
          v38 = _mm_or_si128(v36, v33);
          v39 = _mm_or_si128(_mm_shuffle_epi32(v38, 78), v38);
          v40 = _mm_or_si128(_mm_shuffle_epi32(v39, 229), v39);
          v21 = _mm_cvtsi128_si32(_mm_or_si128(_mm_srli_epi32(v40, 0x10u), v40));
          v20 = (_DWORD)v32 == 0;
          v16 = v31;
          if ( v20 )
            goto LABEL_31;
        }
        else
        {
          v30 = v17 | 1LL;
        }
        do
        {
          v21 |= *(_WORD *)(a1 + 2 * v30) != 0;
          *(_WORD *)(a1 + 2 * v30++) = 0;
        }
        while ( v30 != 11 );
LABEL_31:
        v27 = *(_WORD *)(a1 + 2LL * v17);
        v24 = v56;
        v22 = v55;
        v23 = v58;
        goto LABEL_32;
      }
LABEL_19:
      v25 = _mm_cvtsi32_si128(*(unsigned __int16 *)(a1 + 4));
      *(_WORD *)(a1 + 4) >>= 1;
      v26 = _mm_loadu_si128((const __m128i *)(a1 + 6));
      *(__m128i *)(a1 + 6) = _mm_or_si128(
                               _mm_srli_epi16(v26, 1u),
                               _mm_slli_epi16(_mm_blend_epi16(_mm_slli_si128(v26, 2), v25, 1), 0xFu));
      goto LABEL_20;
    }
    v17 = 4;
    v22 = 0;
    v18 = 256;
    v23 = 4;
    v24 = 0;
LABEL_18:
    v54 = 256;
    if ( v14 > 0 )
      goto LABEL_20;
    goto LABEL_19;
  }
  v17 = 6;
  v18 = 0;
  if ( a5 == 53 )
  {
    v15 = 2047;
    v16 = 1024;
    v22 = 2048;
    v23 = 6;
    v24 = 0;
    v54 = 2048;
    if ( v14 > 0 )
      goto LABEL_20;
    goto LABEL_19;
  }
  if ( a5 == 56 )
  {
    v22 = 256;
    v23 = 6;
    v24 = 0;
    goto LABEL_18;
  }
  if ( a5 != 64 )
    goto LABEL_25;
  v19 = *(_WORD *)(a1 + 14) | (*(_WORD *)(a1 + 16) != 0);
  v20 = *(_WORD *)(a1 + 18) == 0;
  *(_DWORD *)(a1 + 16) = 0;
  v21 = v19 | (!v20 || *(_WORD *)(a1 + 20) != 0);
  *(_WORD *)(a1 + 20) = 0;
  v16 = 0x8000;
  v22 = 1;
  v18 = 0;
  v23 = 6;
  v24 = 0;
  v54 = 1;
LABEL_33:
  if ( (v21 & (unsigned __int16)v16) != 0 )
  {
    if ( v16 != v21 )
      goto LABEL_39;
    if ( v9 )
    {
      if ( a3 )
        goto LABEL_40;
      goto LABEL_39;
    }
    if ( (*(_WORD *)(a1 + 2 * v23) & (unsigned __int16)v54) != 0 )
    {
LABEL_39:
      v41 = *(unsigned __int16 *)(a1 + 18) + v24;
      *(_WORD *)(a1 + 18) = v41;
      v42 = HIWORD(v41) + *(unsigned __int16 *)(a1 + 16);
      *(_WORD *)(a1 + 16) = v42;
      v43 = HIWORD(v42) + *(unsigned __int16 *)(a1 + 14);
      *(_WORD *)(a1 + 14) = v43;
      v44 = HIWORD(v43) + *(unsigned __int16 *)(a1 + 12) + v22;
      *(_WORD *)(a1 + 12) = v44;
      v45 = (HIWORD(v44) & 1) + *(unsigned __int16 *)(a1 + 10);
      *(_WORD *)(a1 + 10) = v45;
      v46 = HIWORD(v45) + *(unsigned __int16 *)(a1 + 8) + v18;
      *(_WORD *)(a1 + 8) = v46;
      v47 = (HIWORD(v46) & 1) + *(unsigned __int16 *)(a1 + 6);
      *(_WORD *)(a1 + 6) = v47;
      *(_WORD *)(a1 + 4) += HIWORD(v47);
    }
  }
LABEL_40:
  if ( a5 > 63 || v14 > 0 )
  {
    v51 = *(unsigned __int16 *)(a1 + 4);
    if ( !(_WORD)v51 )
      goto LABEL_46;
    goto LABEL_45;
  }
  v48 = *(unsigned __int16 *)(a1 + 20);
  *(_WORD *)(a1 + 20) = 2 * v48;
  v49 = _mm_loadu_si128((const __m128i *)(a1 + 4));
  v50 = _mm_or_si128(
          _mm_add_epi16(v49, v49),
          _mm_srli_epi16(
            _mm_insert_epi16(
              _mm_insert_epi16(
                _mm_insert_epi16(
                  _mm_insert_epi16(
                    _mm_insert_epi16(
                      _mm_insert_epi16(
                        _mm_insert_epi16(_mm_cvtsi32_si128(_mm_extract_epi16(v49, 1)), _mm_extract_epi16(v49, 2), 1),
                        _mm_extract_epi16(v49, 3),
                        2),
                      _mm_extract_epi16(v49, 4),
                      3),
                    _mm_extract_epi16(v49, 5),
                    4),
                  _mm_extract_epi16(v49, 6),
                  5),
                _mm_extract_epi16(v49, 7),
                6),
              v48,
              7),
            0xFu));
  *(__m128i *)(a1 + 4) = v50;
  v51 = _mm_cvtsi128_si32(v50);
  if ( (_WORD)v51 )
  {
LABEL_45:
    *(_WORD *)(a1 + 4) = (unsigned __int16)v51 >> 1;
    v52 = _mm_loadu_si128((const __m128i *)(a1 + 6));
    *(__m128i *)(a1 + 6) = _mm_or_si128(
                             _mm_srli_epi16(v52, 1u),
                             _mm_slli_epi16(_mm_blend_epi16(_mm_slli_si128(v52, 2), _mm_cvtsi32_si128(v51), 1), 0xFu));
    ++v14;
  }
LABEL_46:
  *(_WORD *)(a1 + 20) = 0;
  v11 = 1;
  if ( v14 > 32766 )
    goto LABEL_47;
  if ( v14 <= 0 )
    goto LABEL_24;
LABEL_49:
  *(_WORD *)(a1 + 2) = v14;
  return 1;
}
// FE320: using guessed type __int128 xmmword_FE320;
