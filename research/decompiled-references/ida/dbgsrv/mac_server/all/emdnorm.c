/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: emdnorm
// Address: 0x0000000100074D70

//----- (0000000100074D70) ----------------------------------------------------
__int64 __fastcall emdnorm(__int64 a1, char a2, char a3, int a4, int a5)
{
  unsigned int v5; // r12d
  char v8; // r13
  int v10; // eax
  signed int v11; // r14d
  char v12; // r11
  __int16 v13; // r9
  int v14; // ecx
  unsigned int v15; // r10d
  __int64 v16; // rsi
  __int16 v17; // ax
  __int16 v18; // cx
  bool v19; // zf
  unsigned __int16 v20; // r9
  int v21; // eax
  __int16 v22; // r10
  int v23; // r8d
  __m128i v24; // xmm0
  __m128i v25; // xmm1
  __int64 v26; // rdi
  __int16 v27; // dx
  int v28; // r12d
  __int64 v29; // r11
  __int64 v30; // r11
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // rsi
  __m128i v33; // xmm0
  __int64 v34; // r9
  __m128i v35; // xmm1
  __m128i v36; // xmm2
  __m128i v37; // xmm4
  __m128i v38; // xmm1
  __m128i v39; // xmm0
  __m128i v40; // xmm1
  bool v41; // cf
  unsigned int v42; // ecx
  unsigned int v43; // edx
  unsigned int v44; // r8d
  unsigned int v45; // edx
  unsigned int v46; // eax
  int v47; // eax
  __m128i v48; // xmm0
  __m128i v49; // xmm0
  unsigned int v50; // eax
  __m128i v51; // xmm0
  unsigned int v52; // eax
  __m128i v53; // xmm1
  unsigned int v54; // et0
  __int64 v56; // [rsp+0h] [rbp-40h]
  __int16 v58; // [rsp+10h] [rbp-30h]
  __int16 v59; // [rsp+14h] [rbp-2Ch]

  v8 = a2;
  LOBYTE(v5) = *(_WORD *)(a1 + 2) != 0;
  v10 = sub_1000751F0(a1);
  if ( v10 >= 113 )
    goto LABEL_50;
  v11 = a4 - v10;
  LOBYTE(v5) = 1;
  if ( v11 > 32766 )
    goto LABEL_50;
  if ( v11 < 0 )
  {
    if ( (unsigned int)v11 < 0xFFFFFF90 )
    {
LABEL_49:
      v5 = 0;
      goto LABEL_50;
    }
    v8 = a2 | ((unsigned int)eshift(a1, v11) != 1);
  }
  v12 = 1;
  v13 = 255;
  v14 = 128;
  if ( a5 <= 52 )
  {
    if ( !a5 )
    {
      *(_WORD *)(a1 + 20) = 0;
      goto LABEL_47;
    }
    if ( a5 == 24 )
    {
      v58 = 0;
      v15 = 4;
      v59 = 256;
      v16 = 4;
      v21 = 256;
      goto LABEL_22;
    }
LABEL_19:
    if ( a5 >= 64 )
    {
      v20 = *(_WORD *)(a1 + 20);
      v22 = 1;
      v21 = 0;
      v14 = 0x8000;
      v59 = 1;
      v16 = 9;
      v23 = 0;
      goto LABEL_34;
    }
    v58 = 1;
    v12 = 0;
    v15 = 10;
    v13 = -1;
    v14 = 0x8000;
    v59 = 1;
    v16 = 9;
    v21 = 0;
LABEL_22:
    v23 = 0;
    if ( v11 > 0 )
      goto LABEL_24;
    goto LABEL_23;
  }
  v15 = 6;
  v16 = 6;
  if ( a5 == 53 )
  {
    v21 = 0;
    v13 = 2047;
    v14 = 1024;
    v59 = 2048;
    v58 = 0;
    v23 = 2048;
    if ( v11 > 0 )
      goto LABEL_24;
LABEL_23:
    v24 = _mm_loadu_si128((const __m128i *)(a1 + 4));
    v25 = _mm_loadu_si128((const __m128i *)(a1 + 6));
    *(_WORD *)(a1 + 4) = (unsigned int)_mm_extract_epi16(v24, 0) >> 1;
    *(__m128i *)(a1 + 6) = _mm_or_si128(_mm_slli_epi16(v24, 0xFu), _mm_srli_epi16(v25, 1u));
LABEL_24:
    v26 = v15;
    v27 = *(_WORD *)(a1 + 2LL * v15);
    v28 = v13;
    v20 = v13 & v27;
    if ( !v12 )
    {
LABEL_33:
      v22 = v58;
      v5 = ~v28;
      *(_WORD *)(a1 + 2 * v26) = v5 & v27;
      goto LABEL_34;
    }
    v56 = v16;
    v29 = 9;
    if ( v15 >= 0xAuLL )
      v29 = v15;
    v30 = v29 + 1;
    v31 = v30 - v15;
    if ( v31 >= 0x10 )
    {
      v33 = _mm_cvtsi32_si128(v20);
      v34 = (2 * v15) | 2;
      v35 = _mm_loadu_si128((const __m128i *)(a1 + v34));
      v36 = _mm_loadu_si128((const __m128i *)(a1 + v34 + 16));
      *(_OWORD *)(a1 + v34) = 0;
      *(_OWORD *)(a1 + v34 + 16) = 0;
      v37 = _mm_cvtepi8_epi16((__m64)0x101010101010101LL);
      v38 = _mm_or_si128(
              _mm_or_si128(_mm_andnot_si128(_mm_cmpeq_epi16(v35, (__m128i)0LL), v37), v33),
              _mm_andnot_si128(_mm_cmpeq_epi16(v36, (__m128i)0LL), v37));
      v39 = _mm_or_si128(_mm_shuffle_epi32(v38, 238), v38);
      v40 = _mm_or_si128(_mm_shuffle_epi32(v39, 85), v39);
      v20 = _mm_cvtsi128_si32(_mm_or_si128(_mm_srli_epi32(v40, 0x10u), v40));
      if ( v31 == (v31 & 0xFFFFFFFFFFFFFFF0LL) )
      {
LABEL_32:
        v27 = *(_WORD *)(a1 + 2LL * v15);
        v16 = v56;
        goto LABEL_33;
      }
      v32 = v15 | v31 & 0xFFFFFFFFFFFFFFF0LL;
    }
    else
    {
      v32 = v15;
    }
    do
    {
      v19 = *(_WORD *)(a1 + 2 * v32 + 2) == 0;
      *(_WORD *)(a1 + 2 * v32 + 2) = 0;
      v20 |= !v19;
      ++v32;
    }
    while ( v30 != v32 );
    goto LABEL_32;
  }
  if ( a5 == 56 )
  {
    v21 = 0;
    v59 = 256;
    v58 = 0;
    v23 = 256;
    if ( v11 > 0 )
      goto LABEL_24;
    goto LABEL_23;
  }
  if ( a5 != 64 )
    goto LABEL_19;
  v17 = *(_WORD *)(a1 + 14) | (*(_WORD *)(a1 + 16) != 0);
  *(_WORD *)(a1 + 16) = 0;
  v18 = *(_WORD *)(a1 + 18) != 0;
  v19 = *(_WORD *)(a1 + 20) == 0;
  *(_DWORD *)(a1 + 18) = 0;
  v20 = v17 | v18 | !v19;
  v21 = 0;
  v14 = 0x8000;
  v59 = 1;
  v22 = 0;
  v23 = 1;
LABEL_34:
  if ( (v20 & (unsigned __int16)v14) == 0 )
    goto LABEL_41;
  if ( v14 != v20 )
    goto LABEL_40;
  if ( !v8 )
  {
    if ( (*(_WORD *)(a1 + 2 * v16) & (unsigned __int16)v59) == 0 )
      goto LABEL_41;
    goto LABEL_40;
  }
  if ( !a3 )
  {
LABEL_40:
    v41 = __CFADD__(v22, *(_WORD *)(a1 + 18));
    *(_WORD *)(a1 + 18) += v22;
    v42 = v41 + *(unsigned __int16 *)(a1 + 16);
    *(_WORD *)(a1 + 16) = v42;
    v43 = HIWORD(v42) + *(unsigned __int16 *)(a1 + 14);
    *(_WORD *)(a1 + 14) = v43;
    v44 = HIWORD(v43) + *(unsigned __int16 *)(a1 + 12) + v23;
    *(_WORD *)(a1 + 12) = v44;
    v45 = HIWORD(v44) + *(unsigned __int16 *)(a1 + 10);
    *(_WORD *)(a1 + 10) = v45;
    v46 = HIWORD(v45) + *(unsigned __int16 *)(a1 + 8) + v21;
    *(_WORD *)(a1 + 8) = v46;
    v47 = HIWORD(v46) + *(unsigned __int16 *)(a1 + 6);
    *(_WORD *)(a1 + 6) = v47;
    *(_WORD *)(a1 + 4) += HIWORD(v47);
  }
LABEL_41:
  if ( v11 > 0 || a5 >= 64 )
  {
    v50 = *(unsigned __int16 *)(a1 + 4);
    if ( !(_WORD)v50 )
      goto LABEL_46;
    goto LABEL_45;
  }
  v48 = _mm_loadu_si128((const __m128i *)(a1 + 4));
  v49 = _mm_or_si128(_mm_add_epi16(v48, v48), _mm_srli_epi16(_mm_loadu_si128((const __m128i *)(a1 + 6)), 0xFu));
  *(__m128i *)(a1 + 4) = v49;
  v50 = _mm_cvtsi128_si32(v49);
  if ( (_WORD)v50 )
  {
LABEL_45:
    *(_WORD *)(a1 + 4) = (unsigned __int16)v50 >> 1;
    v51 = _mm_loadl_epi64((const __m128i *)(a1 + 6));
    *(_QWORD *)(a1 + 6) = _mm_or_si128(
                            _mm_srli_epi16(v51, 1u),
                            _mm_slli_epi16(_mm_insert_epi16(_mm_slli_epi64(v51, 0x10u), v50, 0), 0xFu)).u64[0];
    v52 = *(_DWORD *)(a1 + 14);
    v53 = _mm_cvtsi32_si128(v52);
    *(_DWORD *)(a1 + 14) = _mm_cvtsi128_si32(
                             _mm_or_si128(
                               _mm_srli_epi16(v53, 1u),
                               _mm_slli_epi16(_mm_unpacklo_epi16(_mm_srli_epi64(v51, 0x30u), v53), 0xFu)));
    HIWORD(v54) = HIWORD(v52);
    LOWORD(v54) = *(_WORD *)(a1 + 18);
    *(_WORD *)(a1 + 18) = v54 >> 1;
    ++v11;
  }
LABEL_46:
  *(_WORD *)(a1 + 20) = 0;
  LOBYTE(v5) = 1;
  if ( v11 > 32766 )
  {
LABEL_50:
    *(_OWORD *)a1 = 0;
    *(_QWORD *)(a1 + 14) = 0;
    return v5;
  }
LABEL_47:
  if ( v11 <= 0 )
    goto LABEL_49;
  *(_WORD *)(a1 + 2) = v11;
  LOBYTE(v5) = 1;
  return v5;
}
// 1000751DB: variable 'v5' is possibly undefined
