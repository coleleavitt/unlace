unsigned __int64 __fastcall sub_8C8460(
        _QWORD *a1,
        __int64 a2,
        char a3,
        unsigned int a4,
        unsigned int a5,
        char a6,
        __int64 a7,
        __int64 a8,
        _DWORD *a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        unsigned int a14,
        int a15)
{
  __m128i v15; // xmm0
  __m128i v16; // xmm1
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // r11
  __int64 v23; // rdx
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // r13
  __int64 v26; // rsi
  char v27; // r9
  int v28; // r9d
  __int64 v29; // rdx
  __int64 v30; // rsi
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // xmm0_8
  __int16 v33; // ax
  __int16 v34; // bp
  __int64 v35; // rax
  int v36; // edx
  char v37; // al
  __int64 v38; // rax
  char v39; // r9
  unsigned __int8 v40; // al
  _DWORD *v42; // rdi
  __int64 v43; // rax
  __int64 v44; // rax
  int v45; // [rsp+10h] [rbp-58h]
  __int64 v46; // [rsp+18h] [rbp-50h]
  char v47; // [rsp+18h] [rbp-50h]
  __int64 v49; // [rsp+28h] [rbp-40h]

  v15 = _mm_cvtsi32_si128(a5);
  v16 = _mm_cvtsi32_si128(a4);
  v20 = a13;
  v21 = (unsigned int)(a13 + 1);
  v22 = 8 * v21 + 40;
  if ( (_BYTE)a15 )
  {
    v23 = a1[274];
    a1[284] += v22;
    v24 = (v23 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( a1[275] >= v24 + v22 && v23 )
    {
      a1[274] = v24 + v22;
      v25 = (v23 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    }
    else
    {
      v43 = sub_8C7D70((__int64)(a1 + 274), v22, 3);
      v20 = a13;
      v15 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v15));
      v16 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v16));
      v25 = v43;
    }
    LODWORD(v26) = a15;
    v27 = 0;
  }
  else
  {
    v46 = 8 * v21 + 40;
    v28 = sub_AC1E00(a8, a9, a10, a12, a13, a14, *(double *)v15.m128i_i64, *(double *)v16.m128i_i64);
    v29 = a1[274];
    v20 = a13;
    v30 = 4LL * (unsigned int)a10;
    v16 = _mm_cvtsi32_si128(a4);
    v15 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v15));
    if ( v28 )
      v30 = 0;
    v31 = (v29 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    v26 = v46 + v30;
    a1[284] += v26;
    if ( a1[275] >= v26 + v31 && v29 )
    {
      a1[274] = v26 + v31;
      v25 = (v29 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    }
    else
    {
      v45 = v28;
      v44 = sub_8C7D70((__int64)(a1 + 274), v26, 3);
      v20 = a13;
      v15 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v15));
      v16 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v16));
      v28 = v45;
      v25 = v44;
    }
    LOBYTE(v26) = v28 == 0;
    v27 = v28 & 3;
  }
  v32 = _mm_unpacklo_epi32(v15, v16).m128i_u64[0];
  *(_WORD *)v25 = *(_WORD *)v25 & 0xFE00 | 0x22;
  if ( byte_4AD234C )
  {
    v49 = v20;
    v47 = v27;
    sub_AC4570(34);
    v20 = v49;
    LODWORD(v26) = (unsigned __int8)v26;
    v27 = v47;
  }
  v33 = *(_WORD *)(v25 + 1);
  *(_QWORD *)(v25 + 8) = a2;
  *(_WORD *)(v25 + 24) = v20;
  *(_QWORD *)(v25 + 28) = v32;
  v34 = v33 & 0xF801 | (2 * (a3 & 3));
  v35 = a8;
  if ( a11 )
    v35 = a11;
  *(_WORD *)(v25 + 1) = v34;
  *(_QWORD *)(v25 + 16) = v35;
  v36 = 0;
  v37 = *(_BYTE *)(v25 + 27);
  *(_BYTE *)(v25 + 26) = a6 + 2;
  *(_BYTE *)(v25 + 27) = v37 & 0xF8 | (a11 != 0) | (4 * a15) & 7;
  *(_DWORD *)(v25 + 36) = a14;
  v38 = 0;
  if ( v20 )
  {
    do
    {
      *(_QWORD *)(v25 + 8 * v38 + 48) = *(_QWORD *)(a12 + 8 * v38);
      v38 = (unsigned int)++v36;
    }
    while ( v36 != v20 );
  }
  v39 = (8 * v27) | *(_BYTE *)(v25 + 27) & 0xE7;
  *(_BYTE *)(v25 + 27) = v39;
  if ( (v39 & 4) == 0 && (_BYTE)v26 )
  {
    v42 = (_DWORD *)(v25 + 8LL * *(unsigned __int16 *)(v25 + 24) + 48);
    if ( 4 * a10 <= 4 )
    {
      if ( 4 * a10 == 4 )
        *v42 = *a9;
    }
    else
    {
      LODWORD(v26) = (_DWORD)a9;
      memmove(v42, a9, 4 * a10);
    }
  }
  *(_QWORD *)(v25 + 40) = a7;
  v40 = sub_76D580(v25, v26);
  *(_BYTE *)(v25 + 1) = (v40 << 6) | *(_BYTE *)(v25 + 1) & 0x3F;
  *(_BYTE *)(v25 + 2) = *(_BYTE *)(v25 + 2) & 0xF8 | (v40 >> 2) & 7;
  return v25;
}

