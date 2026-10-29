void __fastcall sub_833A00(__int64 *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rbp
  __int64 v4; // rdi
  __int64 v5; // r12
  char v6; // al
  __int64 v7; // rsi
  _QWORD *v8; // rdi
  __int64 v9; // rbp
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // r12
  __int64 v13; // r13
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r12
  unsigned int v19; // eax
  int v20; // r12d
  __int8 v21; // r14
  __int64 v22; // r15
  __int64 v23; // rbx
  int v24; // r14d
  _QWORD *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rdi
  unsigned __int128 v28; // kr00_16
  char *v29; // rax
  __int64 v30; // r13
  __int64 v31; // rdx
  _QWORD **v32; // rbx
  __int64 v33; // rsi
  __int64 v34; // rdi
  _DWORD *v35; // rbp
  _DWORD *v36; // rbx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rax
  _QWORD **v40; // r13
  __int64 v41; // rdi
  __int64 v42; // rax
  _DWORD *v43; // r13
  __m128i v44; // xmm1
  _QWORD **v46; // [rsp+8h] [rbp-1E0h]
  unsigned __int128 v47; // [rsp+10h] [rbp-1D8h] BYREF
  __int64 v48[4]; // [rsp+20h] [rbp-1C8h] BYREF
  unsigned int v49; // [rsp+40h] [rbp-1A8h] BYREF
  char v50; // [rsp+44h] [rbp-1A4h]
  __m128i v51; // [rsp+80h] [rbp-168h] BYREF
  int v52; // [rsp+90h] [rbp-158h]
  _QWORD **v53; // [rsp+C0h] [rbp-128h] BYREF
  unsigned __int64 v54; // [rsp+C8h] [rbp-120h] BYREF
  _QWORD *v55[7]; // [rsp+D0h] [rbp-118h] BYREF
  char v56[56]; // [rsp+108h] [rbp-E0h] BYREF
  char v57[56]; // [rsp+140h] [rbp-A8h] BYREF
  char v58[112]; // [rsp+178h] [rbp-70h] BYREF

  v2 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v2 + 16) - 56 > 1 )
    v2 = sub_B0D320(v2);
  v3 = *(_QWORD *)(v2 + 32);
  v50 &= ~1u;
  v49 = 0;
  v4 = *(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFF0LL);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v6 = *(_BYTE *)(v5 + 16);
  if ( v6 != 13 )
  {
    if ( v6 == 46 )
    {
      v39 = sub_B14A40(*(_QWORD *)(*(_QWORD *)(v4 + 8) & 0xFFFFFFFFFFFFFFF0LL));
      if ( ((*(_BYTE *)(v39 + 74) & 1) != 0 || *(_QWORD *)(v39 + 128) > 7u) && *(char *)(sub_B14A40(v5) + 76) >= 0 )
      {
        v4 = *(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFF0LL);
        goto LABEL_14;
      }
    }
    else if ( v6 == 10 )
    {
      goto LABEL_14;
    }
LABEL_5:
    v7 = v3;
    v8 = *(_QWORD **)(*a1 + 16);
    v9 = sub_6BF060(v8, v3);
    v11 = sub_2575D20(v8, v7, v10);
    v12 = v11;
    if ( v9 == v11 )
    {
      sub_257CE40(v48, v11, 0);
      if ( v48[0] != v12 )
        goto LABEL_7;
    }
    else
    {
      sub_2579AA0(v48, v9, 0);
      if ( v48[0] != v12 )
      {
LABEL_7:
        sub_25795C0(v48, 0);
        goto LABEL_8;
      }
    }
    sub_257D590(v48, 0);
LABEL_8:
    BYTE4(v53) &= ~1u;
    LODWORD(v53) = 0;
    v13 = sub_2575D00();
    sub_2580BE0(&v51, 0.0);
    sub_257EDC0(&v54, &v51, v13);
    sub_25769A0(&v51);
    LODWORD(v53) = 3;
    if ( v12 == v48[0] )
      sub_257D000(&v51, v48, v14, v15);
    else
      sub_2576960(&v51, v48);
    if ( v12 == v54 )
    {
      if ( v51.m128i_i64[0] == v12 )
      {
        if ( v55[0] )
          sub_832F90(v55[0], (__int64)v48, v16);
        v55[0] = nullptr;
        sub_257D000(&v54, &v51, v16, v17);
        goto LABEL_50;
      }
    }
    else if ( v51.m128i_i64[0] != v12 )
    {
      sub_2576350(&v54, &v51, v16, v17);
LABEL_50:
      sub_5FF3B0(v51.m128i_i64);
      sub_6A01B0((__int64)&v49, (__int64)&v53);
      if ( (unsigned int)v53 > 1 )
        sub_69F740((__int64)&v53);
      sub_5FF3B0(v48);
      goto LABEL_18;
    }
    sub_5FF3B0((__int64 *)&v54);
    if ( v12 == v51.m128i_i64[0] )
      sub_257D000(&v54, &v51, v37, v38);
    else
      sub_2576960(&v54, &v51);
    goto LABEL_50;
  }
  if ( (((*(_WORD *)(v5 + 18) >> 3) + 77) & 0x1FFu) > 0x13 )
    goto LABEL_5;
LABEL_14:
  v18 = *(_QWORD *)(*a1 + 16);
  v51.m128i_i32[2] = 64;
  v51.m128i_i64[0] = 0;
  v51.m128i_i8[12] = sub_B10310(v4) ^ 1;
  v19 = sub_70B280(v18, v3);
  v20 = 64;
  v21 = v51.m128i_i8[12];
  if ( v19 == 64 )
  {
    v22 = v51.m128i_i64[0];
  }
  else
  {
    if ( v51.m128i_i8[12] )
      sub_2587E20(&v53, &v51, v19);
    else
      sub_2587E80(&v53, &v51, v19);
    v20 = v54;
    v22 = (__int64)v53;
    if ( v51.m128i_i32[2] > 0x40u && v51.m128i_i64[0] )
      operator delete[]((void *)v51.m128i_i64[0]);
  }
  LODWORD(v55[0]) = v20;
  BYTE4(v53) &= ~1u;
  LODWORD(v53) = 2;
  v54 = v22;
  BYTE4(v55[0]) = v21;
  sub_6A01B0((__int64)&v49, (__int64)&v53);
  if ( (unsigned int)v53 > 1 )
    sub_69F740((__int64)&v53);
LABEL_18:
  v23 = *(unsigned int *)(v2 + 20);
  v53 = v55;
  v54 = 0x400000000LL;
  v24 = v23;
  if ( (unsigned int)v23 > 4 )
  {
    *(_QWORD *)&v47 = v23;
    v46 = (_QWORD **)sub_25D5F70(&v53, v55, v23, 56, &v51);
    v40 = v46;
    do
    {
      v41 = (__int64)v40;
      v40 += 7;
      sub_6A4260(v41, (int *)&v49);
      *(_QWORD *)&v47 = v47 - 1;
    }
    while ( (_QWORD)v47 );
    v42 = (__int64)v53;
    v43 = &v53[7 * (unsigned int)v54];
    if ( v53 != (_QWORD **)v43 )
    {
      do
      {
        v43 -= 14;
        if ( *v43 > 1u )
        {
          *(_QWORD *)&v47 = v42;
          sub_69F740((__int64)v43);
          v42 = v47;
        }
      }
      while ( (_DWORD *)v42 != v43 );
      v43 = v53;
    }
    v44 = _mm_loadl_epi64(&v51);
    if ( v43 != (_DWORD *)v55 )
    {
      *(_QWORD *)&v47 = v44.m128i_i64[0];
      free(v43);
      v44 = _mm_loadl_epi64((const __m128i *)&v47);
    }
    v51.m128i_i8[4] &= ~1u;
    v51.m128i_i64[1] = 0;
    v53 = v46;
    *((_QWORD *)&v47 + 1) = 56 * v23;
    *(_QWORD *)&v47 = 56 * v23 + 8;
    v52 = 0;
    v51.m128i_i32[0] = 8;
    v54 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v23), v44).m128i_u64[0];
    v25 = (_QWORD *)operator new[](v47);
    v28 = v47;
    *v25 = v23;
    v27 = (__int64)(v25 + 1);
  }
  else
  {
    v46 = v55;
    if ( v23 )
    {
      sub_6A4260((__int64)v55, (int *)&v49);
      if ( v23 != 1 )
      {
        sub_6A4260((__int64)v56, (int *)&v49);
        if ( v23 != 2 )
        {
          sub_6A4260((__int64)v57, (int *)&v49);
          if ( v23 != 3 )
            sub_6A4260((__int64)v58, (int *)&v49);
        }
      }
      v46 = v53;
    }
    v51.m128i_i8[4] &= ~1u;
    LODWORD(v54) = v23;
    v51.m128i_i64[1] = 0;
    *((_QWORD *)&v47 + 1) = 56 * v23;
    *(_QWORD *)&v47 = 56 * v23 + 8;
    v52 = 0;
    v51.m128i_i32[0] = 8;
    v25 = (_QWORD *)operator new[](v47);
    v26 = v47;
    *v25 = v23;
    v27 = (__int64)(v25 + 1);
    v28 = __PAIR128__(56 * v23, v26);
    if ( !v23 )
    {
      v51.m128i_i64[1] = (__int64)(v25 + 1);
      v52 = 0;
      goto LABEL_30;
    }
  }
  v29 = (char *)v25 + v28;
  v30 = v27;
  v31 = v27;
  do
  {
    *(_BYTE *)(v31 + 4) &= ~1u;
    v31 += 56;
    *(_DWORD *)(v31 - 56) = 0;
  }
  while ( v29 != (char *)v31 );
  v32 = v46;
  v51.m128i_i64[1] = v27;
  v52 = v24;
  do
  {
    v33 = (__int64)v32;
    v34 = v30;
    v32 += 7;
    v30 += 56;
    sub_6A63E0(v34, v33);
  }
  while ( v32 != (_QWORD **)((char *)v46 + *((_QWORD *)&v28 + 1)) );
LABEL_30:
  sub_6A01B0(a1[1], (__int64)&v51);
  if ( v51.m128i_i32[0] > 1u )
    sub_69F740((__int64)&v51);
  v35 = v53;
  v36 = &v53[7 * (unsigned int)v54];
  if ( v53 != (_QWORD **)v36 )
  {
    do
    {
      v36 -= 14;
      if ( *v36 > 1u )
        sub_69F740((__int64)v36);
    }
    while ( v35 != v36 );
    v36 = v53;
  }
  if ( v36 != (_DWORD *)v55 )
    free(v36);
  if ( v49 > 1 )
    sub_69F740((__int64)&v49);
}

