__int64 __fastcall sub_1556B20(
        const __m128i *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int32 a5,
        _DWORD *a6,
        __m128i a7,
        __m128 a8,
        char a9,
        char a10)
{
  __int64 v10; // r10
  __int64 v11; // r11
  __int64 v15; // rdi
  _BYTE *v16; // rsi
  __int8 v17; // cl
  __int64 v18; // rsi
  int v19; // r9d
  _DWORD *v20; // r12
  size_t v21; // rdi
  __int32 v22; // r8d
  __int64 v23; // r13
  __m128i *v24; // rax
  __m128i *v25; // r15
  __int8 v26; // al
  __int64 v27; // rax
  _QWORD *v28; // rdi
  unsigned int v29; // r13d
  _BYTE *v30; // r12
  _BYTE *v31; // rbx
  int v33; // r12d
  __int8 *v34; // r13
  int v35; // edx
  __int64 *v36; // rsi
  __int64 v37; // rdi
  __m128i v38; // xmm2
  int v39; // edx
  __int64 v40; // rax
  int v41; // r12d
  char v42; // dl
  _DWORD *i; // [rsp+8h] [rbp-510h]
  __int64 v45; // [rsp+8h] [rbp-510h]
  int v46; // [rsp+10h] [rbp-508h]
  unsigned int v47; // [rsp+14h] [rbp-504h]
  __int32 v48; // [rsp+18h] [rbp-500h]
  unsigned int v49; // [rsp+20h] [rbp-4F8h]
  __int64 v51; // [rsp+30h] [rbp-4E8h]
  __int8 v52; // [rsp+3Bh] [rbp-4DDh]
  unsigned int v53; // [rsp+3Ch] [rbp-4DCh]
  int v54; // [rsp+48h] [rbp-4D0h] BYREF
  int v55; // [rsp+4Ch] [rbp-4CCh] BYREF
  _BYTE *v56; // [rsp+50h] [rbp-4C8h] BYREF
  __int64 v57; // [rsp+58h] [rbp-4C0h]
  _BYTE v58[1208]; // [rsp+60h] [rbp-4B8h] BYREF

  v10 = a2;
  v11 = a4;
  v46 = a6[6];
  v54 = 0;
  v55 = 0;
  v56 = v58;
  v57 = 0x1000000000LL;
  if ( !a10 || a1[2].m128i_i16[0] == 47 )
  {
    v26 = sub_15569D0((__int64)a1, 0, &v54, (__int64)&v56, &v55, a2, a7, a8);
    v19 = v55;
    v17 = v26;
    if ( !v55 )
    {
      v29 = 1;
      goto LABEL_20;
    }
    v20 = v56;
    v10 = a2;
    v16 = v56;
    v47 = v57;
    v15 = (unsigned int)v57;
    if ( a3 != 2 || !a9 )
    {
      v18 = 18LL * (unsigned int)v57;
      v21 = v18 * 4 + 56;
      v53 = v54;
      goto LABEL_5;
    }
    v11 = a4;
    if ( v26 )
    {
      a1[2].m128i_i16[0] = 417;
      v27 = 0;
LABEL_14:
      a1[1].m128i_i64[1] = v27;
      if ( *(_DWORD *)v11 && *(_DWORD *)(v11 + 4) || *(_QWORD *)(v11 + 8) )
      {
        a1[1].m128i_i32[0] = *(_DWORD *)v11;
      }
      else
      {
        v33 = v46;
        if ( a5 )
          v33 = a5;
        a1[1].m128i_i32[0] = v33;
      }
      goto LABEL_17;
    }
LABEL_41:
    v45 = v11;
    v27 = sub_1CE0AE0(
            a1[6].m128i_i64[0],
            *(_QWORD *)(a1[6].m128i_i64[0] + 608),
            v46,
            v54,
            (__int64)v16,
            v15,
            v55,
            0,
            0,
            0);
    v11 = v45;
    a1[2].m128i_i16[0] = 417;
    if ( v42 )
      v27 = 0;
    goto LABEL_14;
  }
  v15 = 0;
  v16 = v58;
  v17 = a9 & (a3 == 2);
  if ( v17 )
    goto LABEL_41;
  v53 = 0;
  v18 = 0;
  v19 = 0;
  v20 = v58;
  v47 = 0;
  v21 = 56;
LABEL_5:
  a1[2].m128i_i16[0] = 418;
  v22 = *a6;
  if ( *a6 )
  {
    v22 = a6[2];
    v23 = 0;
  }
  else
  {
    v23 = *((_QWORD *)a6 + 1);
  }
  v51 = v10;
  v52 = v17;
  v49 = v19;
  v48 = v22;
  v24 = (__m128i *)malloc(v21);
  v25 = v24;
  if ( !v24 )
    sub_2221CE0("Allocation failed");
  v24->m128i_i32[0] = a5;
  v24->m128i_i64[1] = v23;
  v34 = &v24[3].m128i_i8[8];
  v24[1].m128i_i32[0] = v48;
  v24->m128i_i32[1] = v46;
  v24[1].m128i_i64[1] = v51;
  v24[2] = _mm_unpacklo_epi64(
             _mm_unpacklo_epi32(_mm_cvtsi32_si128(a3), _mm_cvtsi32_si128(v53)),
             _mm_unpacklo_epi32(_mm_cvtsi32_si128(v49), _mm_cvtsi32_si128(v47)));
  v24[3].m128i_i8[0] = v52;
  for ( i = &v20[v18]; i != v20; *((_DWORD *)v34 - 1) = v39 )
  {
    v35 = *v20;
    v36 = (__int64 *)(v20 + 6);
    v37 = (__int64)(v34 + 24);
    v20 += 18;
    v34 += 72;
    *((_DWORD *)v34 - 18) = v35;
    *((_QWORD *)v34 - 8) = *((_QWORD *)v20 - 8);
    *((_QWORD *)v34 - 7) = *((_QWORD *)v20 - 7);
    sub_E90750(v37, v36);
    v38 = _mm_loadu_si128((const __m128i *)(v20 - 6));
    *((_DWORD *)v34 - 2) = *(v20 - 2);
    v39 = *(v20 - 1);
    *(__m128i *)(v34 - 24) = v38;
  }
  v40 = a1[160].m128i_u32[0];
  if ( v40 + 1 > (unsigned __int64)a1[160].m128i_u32[1] )
  {
    sub_2237220(&a1[159].m128i_u64[1], &a1[160].m128i_u64[1], v40 + 1, 8);
    v40 = a1[160].m128i_u32[0];
  }
  v41 = v46;
  *(_QWORD *)(a1[159].m128i_i64[1] + 8 * v40) = v25;
  ++a1[160].m128i_i32[0];
  if ( a5 )
    v41 = a5;
  a1[1].m128i_i64[1] = (__int64)v25;
  a1[1].m128i_i32[0] = v41;
LABEL_17:
  v28 = (_QWORD *)a1->m128i_i64[1];
  v29 = 0;
  a1[1].m128i_i32[1] = v55;
  if ( v28[368] && v28[370] != v28[369] )
    sub_1417320((__int64)v28, a1 + 1);
LABEL_20:
  v30 = v56;
  v31 = &v56[72 * (unsigned int)v57];
  if ( v56 != v31 )
  {
    do
    {
      while ( 1 )
      {
        v31 -= 72;
        if ( *((_DWORD *)v31 + 11) )
          break;
        if ( v30 == v31 )
          goto LABEL_23;
      }
      free(*((void **)v31 + 4));
    }
    while ( v30 != v31 );
LABEL_23:
    v31 = v56;
  }
  if ( v31 != v58 )
    free(v31);
  return v29;
}
