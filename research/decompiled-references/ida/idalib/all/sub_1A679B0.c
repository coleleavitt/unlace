__int64 __fastcall sub_1A679B0(__int64 a1, int a2, __int64 a3, unsigned __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v7; // r13
  __int64 v8; // rbp
  int v10; // eax
  __m128i *v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rsi
  int v14; // eax
  __m128i *v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rsi
  __m128 v18; // xmm0
  int v19; // ebp
  __int64 v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rsi
  unsigned __int16 *v23; // rax
  unsigned __int16 *v24; // rsi
  unsigned __int16 *v25; // rdx
  __int64 v26; // rax
  unsigned __int16 *v27; // r12
  unsigned __int16 *v28; // r15
  __int64 v29; // rdi
  unsigned __int8 v30; // al
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  _QWORD *v34; // r8
  __int64 v35; // r9
  __int64 v36; // rdi
  unsigned int v38; // edx
  __int64 v39; // rsi
  __m128i *v40; // rax
  __m128i v41; // xmm0
  unsigned int v42; // edx
  __int64 v43; // rsi
  __m128i *v44; // rax
  __m128i v45; // xmm0
  unsigned int v46; // eax
  int v47; // eax
  __m128i si128; // xmm0
  __m128i *v49; // rax
  __m128i *v50; // rax
  unsigned int v51; // eax
  __int64 v52; // rdx
  __m128i v53; // xmm0
  __m128i *v54; // rax
  __m128i *v55; // rax
  __int64 v56; // r12
  int v57; // eax
  __int64 v58; // r8
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r9
  __int64 v62; // rcx
  __m128i *v63; // rdx
  unsigned __int64 v64; // rsi
  __m128i v65; // xmm0
  __int64 v66; // r12
  int v67; // eax
  __int64 v68; // r9
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // rcx
  __m128i *v73; // rdx
  unsigned __int64 v74; // rsi
  __m128i v75; // xmm0
  unsigned int v76; // edx
  unsigned __int64 v77; // r12
  unsigned int v78; // edx
  unsigned __int64 v79; // r12
  __int64 v81; // [rsp+8h] [rbp-120h] BYREF
  __int64 v82; // [rsp+10h] [rbp-118h]
  __int64 v83; // [rsp+18h] [rbp-110h]
  __m128 v84; // [rsp+20h] [rbp-108h] BYREF
  __int64 v85; // [rsp+30h] [rbp-F8h]
  int v86; // [rsp+38h] [rbp-F0h]
  __int64 v87; // [rsp+40h] [rbp-E8h]
  __int64 v88; // [rsp+48h] [rbp-E0h]
  unsigned int v89; // [rsp+50h] [rbp-D8h]
  void *ptr; // [rsp+58h] [rbp-D0h]
  __int64 v91; // [rsp+60h] [rbp-C8h]
  _BYTE v92[192]; // [rsp+68h] [rbp-C0h] BYREF

  v7 = a4;
  v8 = a4;
  v10 = *(_DWORD *)(a5 + 8);
  if ( !v10 )
  {
    if ( !*(_DWORD *)(a5 + 12) )
      goto LABEL_5;
    v11 = *(__m128i **)a5;
    v12 = *(unsigned int *)(a5 + 16);
    v13 = 8 * v12;
    if ( (unsigned int)v12 > 0x40 )
    {
      v82 = a6;
      v81 = a5;
      operator delete(v11, v13, 8);
      a5 = v81;
      a6 = v82;
      *(_QWORD *)v81 = 0;
      *(_QWORD *)(a5 + 8) = 0;
      *(_DWORD *)(a5 + 16) = 0;
      goto LABEL_5;
    }
    goto LABEL_43;
  }
  v42 = 4 * v10;
  v43 = *(unsigned int *)(a5 + 16);
  v11 = *(__m128i **)a5;
  if ( (unsigned int)(4 * v10) < 0x40 )
    v42 = 64;
  if ( v42 < (unsigned int)v43 )
  {
    v46 = v10 - 1;
    if ( v46 )
    {
      _BitScanReverse(&v46, v46);
      v47 = 1 << (33 - (v46 ^ 0x1F));
      if ( v47 < 64 )
        v47 = 64;
      if ( (_DWORD)v43 == v47 )
      {
        *(_QWORD *)(a5 + 8) = 0;
        si128 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
        v49 = v11;
        a4 = ((unsigned __int64)(8 * v43 - 8) >> 3) + 1;
        do
          *v49++ = si128;
        while ( v49 != &v11[(((unsigned __int64)(8 * v43 - 8) >> 3) + 1) >> 1] );
        v50 = (__m128i *)((char *)v11 + 8 * (a4 & 0xFFFFFFFFFFFFFFFELL));
        if ( a4 == (a4 & 0xFFFFFFFFFFFFFFFELL) )
          goto LABEL_5;
        goto LABEL_58;
      }
      v76 = 4 * v47 / 3u;
      v77 = ((((v76 + 1) | ((unsigned __int64)(v76 + 1) >> 1) | (((v76 + 1) | ((unsigned __int64)(v76 + 1) >> 1)) >> 2)) >> 4)
           | (v76 + 1)
           | ((unsigned __int64)(v76 + 1) >> 1)
           | (((v76 + 1) | ((unsigned __int64)(v76 + 1) >> 1)) >> 2)
           | (((((v76 + 1) | ((unsigned __int64)(v76 + 1) >> 1) | (((v76 + 1) | ((unsigned __int64)(v76 + 1) >> 1)) >> 2)) >> 4)
             | (v76 + 1)
             | ((unsigned __int64)(v76 + 1) >> 1)
             | (((v76 + 1) | ((unsigned __int64)(v76 + 1) >> 1)) >> 2)) >> 8)
           | (((((v76 + 1) | ((unsigned __int64)(v76 + 1) >> 1) | (((v76 + 1) | ((unsigned __int64)(v76 + 1) >> 1)) >> 2)) >> 4)
             | (v76 + 1)
             | ((unsigned __int64)(v76 + 1) >> 1)
             | (((v76 + 1) | ((unsigned __int64)(v76 + 1) >> 1)) >> 2)
             | (((((v76 + 1)
                 | ((unsigned __int64)(v76 + 1) >> 1)
                 | (((v76 + 1) | ((unsigned __int64)(v76 + 1) >> 1)) >> 2)) >> 4)
               | (v76 + 1)
               | ((unsigned __int64)(v76 + 1) >> 1)
               | (((v76 + 1) | ((unsigned __int64)(v76 + 1) >> 1)) >> 2)) >> 8)) >> 16))
          + 1;
      v57 = v77;
      v56 = 8 * v77;
    }
    else
    {
      v56 = 1024;
      v57 = 128;
    }
    v83 = a6;
    v82 = a5;
    LODWORD(v81) = v57;
    operator delete(v11, 8 * v43, 8);
    v58 = v82;
    *(_DWORD *)(v82 + 16) = v81;
    v81 = v58;
    v50 = (__m128i *)sub_22300B0(v56, 8, v59, v60, v58, v61);
    a5 = v81;
    a6 = v83;
    v62 = *(unsigned int *)(v81 + 16);
    *(_QWORD *)v81 = v50;
    *(_QWORD *)(a5 + 8) = 0;
    a4 = 8 * v62;
    if ( v50 == (__m128i *)&v50->m128i_i8[a4] )
      goto LABEL_5;
    v63 = v50;
    v64 = ((a4 - 8) >> 3) + 1;
    if ( a4 != 8 )
    {
      v65 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
      a4 = (unsigned __int64)&v50[v64 >> 1];
      do
        *v63++ = v65;
      while ( v63 != (__m128i *)a4 );
      v50 = (__m128i *)((char *)v50 + 8 * (v64 & 0xFFFFFFFFFFFFFFFELL));
      if ( (v64 & 0xFFFFFFFFFFFFFFFELL) == v64 )
        goto LABEL_5;
    }
LABEL_58:
    v50->m128i_i64[0] = -4096;
    goto LABEL_5;
  }
  v13 = 8 * v43;
LABEL_43:
  if ( v11 != (__m128i *)&v11->m128i_i8[v13] )
  {
    v44 = v11;
    a4 = ((unsigned __int64)(v13 - 8) >> 3) + 1;
    if ( v13 == 8 )
      goto LABEL_48;
    v45 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
    do
      *v44++ = v45;
    while ( v44 != &v11[a4 >> 1] );
    v11 = (__m128i *)((char *)v11 + 8 * (a4 & 0xFFFFFFFFFFFFFFFELL));
    if ( a4 != (a4 & 0xFFFFFFFFFFFFFFFELL) )
LABEL_48:
      v11->m128i_i64[0] = -4096;
  }
  *(_QWORD *)(a5 + 8) = 0;
LABEL_5:
  *(_DWORD *)(a5 + 32) = 0;
  v14 = *(_DWORD *)(a6 + 8);
  if ( v14 )
  {
    v38 = 4 * v14;
    v39 = *(unsigned int *)(a6 + 16);
    v15 = *(__m128i **)a6;
    if ( (unsigned int)(4 * v14) < 0x40 )
      v38 = 64;
    if ( v38 >= (unsigned int)v39 )
    {
      v17 = 8 * v39;
      goto LABEL_32;
    }
    v51 = v14 - 1;
    if ( v51 )
    {
      _BitScanReverse(&v51, v51);
      v52 = (unsigned int)(1 << (33 - (v51 ^ 0x1F)));
      if ( (int)v52 < 64 )
        v52 = 64;
      if ( (_DWORD)v52 == (_DWORD)v39 )
      {
        *(_QWORD *)(a6 + 8) = 0;
        v53 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
        v54 = v15;
        a4 = ((unsigned __int64)(8 * v52 - 8) >> 3) + 1;
        do
          *v54++ = v53;
        while ( v54 != &v15[a4 >> 1] );
        v55 = (__m128i *)((char *)v15 + 8 * (a4 & 0xFFFFFFFFFFFFFFFELL));
        if ( (a4 & 0xFFFFFFFFFFFFFFFELL) == a4 )
          goto LABEL_9;
        goto LABEL_66;
      }
      v78 = 4 * (int)v52 / 3u;
      v79 = ((((v78 + 1) | ((unsigned __int64)(v78 + 1) >> 1) | (((v78 + 1) | ((unsigned __int64)(v78 + 1) >> 1)) >> 2)) >> 4)
           | (v78 + 1)
           | ((unsigned __int64)(v78 + 1) >> 1)
           | (((v78 + 1) | ((unsigned __int64)(v78 + 1) >> 1)) >> 2)
           | (((((v78 + 1) | ((unsigned __int64)(v78 + 1) >> 1) | (((v78 + 1) | ((unsigned __int64)(v78 + 1) >> 1)) >> 2)) >> 4)
             | (v78 + 1)
             | ((unsigned __int64)(v78 + 1) >> 1)
             | (((v78 + 1) | ((unsigned __int64)(v78 + 1) >> 1)) >> 2)) >> 8)
           | (((((v78 + 1) | ((unsigned __int64)(v78 + 1) >> 1) | (((v78 + 1) | ((unsigned __int64)(v78 + 1) >> 1)) >> 2)) >> 4)
             | (v78 + 1)
             | ((unsigned __int64)(v78 + 1) >> 1)
             | (((v78 + 1) | ((unsigned __int64)(v78 + 1) >> 1)) >> 2)
             | (((((v78 + 1)
                 | ((unsigned __int64)(v78 + 1) >> 1)
                 | (((v78 + 1) | ((unsigned __int64)(v78 + 1) >> 1)) >> 2)) >> 4)
               | (v78 + 1)
               | ((unsigned __int64)(v78 + 1) >> 1)
               | (((v78 + 1) | ((unsigned __int64)(v78 + 1) >> 1)) >> 2)) >> 8)) >> 16))
          + 1;
      v67 = v79;
      v66 = 8 * v79;
    }
    else
    {
      v66 = 1024;
      v67 = 128;
    }
    v82 = a5;
    v83 = a6;
    LODWORD(v81) = v67;
    operator delete(v15, 8 * v39, 8);
    v68 = v83;
    *(_DWORD *)(v83 + 16) = v81;
    v81 = v68;
    v55 = (__m128i *)sub_22300B0(v66, 8, v69, v70, v71, v68);
    a6 = v81;
    a5 = v82;
    v72 = *(unsigned int *)(v81 + 16);
    *(_QWORD *)v81 = v55;
    *(_QWORD *)(a6 + 8) = 0;
    a4 = 8 * v72;
    if ( v55 == (__m128i *)&v55->m128i_i8[a4] )
      goto LABEL_9;
    v73 = v55;
    v74 = ((a4 - 8) >> 3) + 1;
    if ( a4 != 8 )
    {
      v75 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
      a4 = (unsigned __int64)&v55[v74 >> 1];
      do
        *v73++ = v75;
      while ( (__m128i *)a4 != v73 );
      v55 = (__m128i *)((char *)v55 + 8 * (v74 & 0xFFFFFFFFFFFFFFFELL));
      if ( (v74 & 0xFFFFFFFFFFFFFFFELL) == v74 )
        goto LABEL_9;
    }
LABEL_66:
    v55->m128i_i64[0] = -4096;
    goto LABEL_9;
  }
  if ( *(_DWORD *)(a6 + 12) )
  {
    v15 = *(__m128i **)a6;
    v16 = *(unsigned int *)(a6 + 16);
    v17 = 8 * v16;
    if ( (unsigned int)v16 > 0x40 )
    {
      v82 = a6;
      v81 = a5;
      operator delete(v15, v17, 8);
      a6 = v82;
      a5 = v81;
      *(_QWORD *)v82 = 0;
      *(_QWORD *)(a6 + 8) = 0;
      *(_DWORD *)(a6 + 16) = 0;
      goto LABEL_9;
    }
LABEL_32:
    if ( v15 != (__m128i *)&v15->m128i_i8[v17] )
    {
      v40 = v15;
      a4 = ((unsigned __int64)(v17 - 8) >> 3) + 1;
      if ( v17 == 8 )
        goto LABEL_37;
      v41 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
      do
        *v40++ = v41;
      while ( v40 != &v15[a4 >> 1] );
      v15 = (__m128i *)((char *)v15 + 8 * (a4 & 0xFFFFFFFFFFFFFFFELL));
      if ( a4 != (a4 & 0xFFFFFFFFFFFFFFFELL) )
LABEL_37:
        v15->m128i_i64[0] = -4096;
    }
    *(_QWORD *)(a6 + 8) = 0;
  }
LABEL_9:
  v81 = a5;
  v86 = a2;
  v85 = a6;
  v18 = _mm_loadh_ps((const double *)&v81);
  ptr = v92;
  *(_DWORD *)(a6 + 32) = 0;
  v84 = v18;
  v87 = 0;
  v88 = 0;
  v89 = 0;
  v91 = 0x1000000000LL;
  if ( !v7 )
  {
    v36 = 0;
    return operator delete(v36, v8, 8);
  }
  v19 = 0;
  v20 = 0;
  do
  {
    while ( 1 )
    {
      v21 = *(_QWORD *)(a3 + 8 * v20);
      v22 = *(_QWORD *)(v21 + 8);
      if ( v22 == *(_QWORD *)(*(_QWORD *)(a1 + 248) + 19080LL) )
        break;
      sub_1A67710((__int64 *)&v84, v22, a3, a4, (_QWORD *)a5, a6);
LABEL_12:
      v20 = (unsigned int)++v19;
      if ( v19 == v7 )
        goto LABEL_24;
    }
    v23 = (unsigned __int16 *)sub_BFB9F0(v21);
    a4 = *v23;
    LOWORD(a4) = a4 & 0x1FF;
    if ( (_WORD)a4 == 4 )
    {
      v23 = (unsigned __int16 *)sub_BFB9F0(*((_QWORD *)v23 + 2));
      a4 = *v23;
      LOWORD(a4) = a4 & 0x1FF;
    }
    v24 = v23 + 32;
    v25 = v23 + 40;
    v26 = *((unsigned int *)v23 + 1);
    if ( (_WORD)a4 == 24 )
      v25 = v24;
    v27 = &v25[4 * v26];
    v28 = v25;
    if ( v25 == v27 )
      goto LABEL_12;
    do
    {
      v29 = *(_QWORD *)v28 & 0xFFFFFFFFFFFFFFF8LL;
      v30 = *(_BYTE *)(v29 + 28) & 0x7F;
      if ( ((v30 + 52) & 0x7Fu) <= 1 || (unsigned int)v30 - 53 <= 1 )
        v29 = sub_B72ED0(v29);
      v31 = sub_B8BF30(v29);
      v28 += 4;
      sub_1A67710((__int64 *)&v84, *(_QWORD *)(v31 + 48), v32, v33, v34, v35);
    }
    while ( v27 != v28 );
    v20 = (unsigned int)++v19;
  }
  while ( v19 != v7 );
LABEL_24:
  if ( ptr != v92 )
    free(ptr);
  v36 = v87;
  v8 = 8LL * v89;
  return operator delete(v36, v8, 8);
}
