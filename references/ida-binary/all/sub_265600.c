void __fastcall sub_265600(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r9
  __int64 v5; // r13
  __int64 v7; // r13
  const char *v8; // rsi
  const char *v9; // rdi
  int v10; // eax
  unsigned __int8 v11; // al
  const char *v12; // rdi
  __m128i v13; // xmm0
  __int64 v14; // rax
  const char *v15; // r13
  const char **v16; // rbp
  const char *v17; // rdi
  const char *v18; // r13
  __m128i v19; // xmm0
  const char *v20; // rdi
  __int64 v21; // rax
  __int64 v22; // r15
  __int64 v23; // rdx
  __int64 v24; // rbp
  __int64 *v25; // r14
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 *v28; // r15
  __int64 v29; // r14
  __m128i v30; // xmm4
  char *v31; // rdi
  __m128i v32; // xmm5
  __int16 v33; // ax
  char *v34; // r12
  __int64 v35; // rdx
  __int64 v36; // r8
  char *v37; // rcx
  __int64 v38; // r13
  char *v39; // rax
  __int64 v40; // r12
  __int64 v41; // r14
  const char *v42; // rdi
  int v43; // eax
  unsigned __int8 v44; // al
  const char *v45; // rdi
  const char *v46; // rsi
  __m128i v47; // xmm0
  const char **v48; // r12
  const char *v49; // rdi
  const char *v50; // rsi
  const char *v51; // r15
  __m128i v52; // xmm0
  const char *v53; // rdi
  __int64 v54; // rbp
  __int64 v55; // r15
  __int64 v56; // r14
  __int64 v57; // rdi
  __m128i si128; // xmm6
  __int64 v59; // rdi
  __int16 v60; // ax
  __m128i v61; // xmm7
  __int64 v62; // rdi
  __int64 v63; // r14
  __int64 v64; // rbp
  __int64 v65; // r13
  __m128i v66; // xmm0
  __int64 v67; // rdi
  __int64 v68; // r13
  __m128i v69; // xmm0
  __int64 v70; // rdi
  __int64 v71; // r14
  __m128i v72; // [rsp+0h] [rbp-B8h] BYREF
  __m128i v73; // [rsp+10h] [rbp-A8h] BYREF
  __m128i v74; // [rsp+20h] [rbp-98h] BYREF
  __int64 v75; // [rsp+30h] [rbp-88h]
  __int64 v76; // [rsp+38h] [rbp-80h]
  char *s2; // [rsp+40h] [rbp-78h]
  char *v78; // [rsp+48h] [rbp-70h]
  char *v79; // [rsp+50h] [rbp-68h]
  __int16 v80; // [rsp+5Eh] [rbp-5Ah]
  __m128i v81; // [rsp+60h] [rbp-58h] BYREF
  __m128i v82[4]; // [rsp+70h] [rbp-48h] BYREF

  v4 = a2;
  v5 = a3;
  if ( a2 >= (a3 - 1) / 2 )
  {
    v29 = a2;
    v28 = (__int64 *)(a1 + 56 * a2);
    goto LABEL_26;
  }
  v74.m128i_i64[0] = a2;
  v7 = a2;
  v75 = a3;
  v76 = a4;
  v72.m128i_i64[0] = (a3 - 1) / 2;
  while ( 1 )
  {
    v22 = 2 * (v7 + 1);
    v23 = 112 * (v7 + 1);
    v24 = a1 + v23 - 56;
    v25 = (__int64 *)(a1 + v23);
    v26 = *(_QWORD *)(a1 + v23 + 8);
    if ( !*(_QWORD *)(v24 + 8) )
    {
      v8 = &s1;
      if ( !v26 )
      {
        v11 = *((_BYTE *)v25 + 24);
        v8 = (const char *)*(unsigned __int8 *)(v24 + 24);
        if ( v11 < (unsigned __int8)v8 )
          goto LABEL_22;
        goto LABEL_7;
      }
LABEL_4:
      v9 = (const char *)*v25;
      goto LABEL_5;
    }
    v8 = *(const char **)v24;
    v9 = &s1;
    if ( v26 )
      goto LABEL_4;
LABEL_5:
    v10 = strcmp(v9, v8);
    if ( v10 )
    {
      if ( v10 < 0 )
        goto LABEL_22;
      goto LABEL_13;
    }
    v11 = *((_BYTE *)v25 + 24);
    v8 = (const char *)*(unsigned __int8 *)(v24 + 24);
    if ( v11 < (unsigned __int8)v8 )
      goto LABEL_22;
LABEL_7:
    if ( (unsigned __int8)v8 >= v11 )
    {
      v8 = &s1;
      if ( *(_QWORD *)(v24 + 40) )
        v8 = *(const char **)(v24 + 32);
      v12 = &s1;
      if ( v25[5] )
        v12 = (const char *)v25[4];
      if ( strcmp(v12, v8) < 0 )
      {
LABEL_22:
        --v22;
        v25 = (__int64 *)(a1 + 56 * v22);
      }
    }
LABEL_13:
    v13 = _mm_loadu_si128((const __m128i *)(v25 + 1));
    v14 = 7 * v7;
    *(_OWORD *)(v25 + 1) = 0;
    v15 = (const char *)*v25;
    v16 = (const char **)(a1 + 8 * v14);
    *v25 = 0;
    v17 = *v16;
    if ( *v16 )
    {
      v16[1] = nullptr;
      v73 = v13;
      qfree(v17, v8);
      v13 = _mm_load_si128(&v73);
    }
    *v16 = v15;
    *(__m128i *)(v16 + 1) = v13;
    *((_BYTE *)v16 + 24) = *((_BYTE *)v25 + 24);
    a2 = *((unsigned __int8 *)v25 + 25);
    *((_BYTE *)v16 + 25) = a2;
    v18 = (const char *)v25[4];
    v19 = _mm_loadu_si128((const __m128i *)(v25 + 5));
    v25[4] = 0;
    *(_OWORD *)(v25 + 5) = 0;
    v20 = v16[4];
    if ( v20 )
    {
      v16[5] = nullptr;
      v73 = v19;
      qfree(v20, (const char *)a2);
      v19 = _mm_load_si128(&v73);
    }
    v21 = v72.m128i_i64[0];
    v16[4] = v18;
    *(__m128i *)(v16 + 5) = v19;
    if ( v22 >= v21 )
      break;
    v7 = v22;
  }
  v27 = v22;
  v4 = v74.m128i_i64[0];
  v5 = v75;
  v28 = v25;
  a4 = v76;
  v29 = v27;
LABEL_26:
  if ( (v5 & 1) == 0 && (v5 - 2) / 2 == v29 )
  {
    v62 = v29 + 1;
    v63 = 2 * (v29 + 1);
    v64 = a1 + 8 * (16 * v62 - v63) - 56;
    v65 = *(_QWORD *)v64;
    v66 = _mm_loadu_si128((const __m128i *)(v64 + 8));
    *(_OWORD *)(v64 + 8) = 0;
    *(_QWORD *)v64 = 0;
    v67 = *v28;
    if ( *v28 )
    {
      v28[1] = 0;
      v74.m128i_i64[0] = a4;
      v73.m128i_i64[0] = v4;
      v72 = v66;
      qfree(v67, (const char *)a2);
      a4 = v74.m128i_i64[0];
      v4 = v73.m128i_i64[0];
      v66 = _mm_load_si128(&v72);
    }
    *v28 = v65;
    *(__m128i *)(v28 + 1) = v66;
    *((_BYTE *)v28 + 24) = *(_BYTE *)(v64 + 24);
    *((_BYTE *)v28 + 25) = *(_BYTE *)(v64 + 25);
    v68 = *(_QWORD *)(v64 + 32);
    v69 = _mm_loadu_si128((const __m128i *)(v64 + 40));
    *(_QWORD *)(v64 + 32) = 0;
    *(_OWORD *)(v64 + 40) = 0;
    v70 = v28[4];
    if ( v70 )
    {
      v28[5] = 0;
      v74.m128i_i64[0] = a4;
      v73.m128i_i64[0] = v4;
      v72 = v69;
      qfree(v70, (const char *)a2);
      a4 = v74.m128i_i64[0];
      v4 = v73.m128i_i64[0];
      v69 = _mm_load_si128(&v72);
    }
    v29 = v63 - 1;
    v28[4] = v68;
    *(__m128i *)(v28 + 5) = v69;
    v28 = (__int64 *)(a1 + 56 * v29);
  }
  v30 = _mm_loadu_si128((const __m128i *)(a4 + 8));
  v31 = *(char **)a4;
  v32 = _mm_loadu_si128((const __m128i *)(a4 + 40));
  v33 = *(_WORD *)(a4 + 24);
  *(_OWORD *)(a4 + 8) = 0;
  v34 = *(char **)(a4 + 32);
  v35 = *(unsigned __int8 *)(a4 + 24);
  *(_OWORD *)(a4 + 40) = 0;
  v80 = v33;
  v76 = (__int64)v31;
  v36 = (v29 - 1) / 2;
  *(_QWORD *)a4 = 0;
  *(_QWORD *)(a4 + 32) = 0;
  v82[0] = v30;
  v81 = v32;
  if ( v29 > v4 )
  {
    v37 = (char *)&s1;
    v79 = v34;
    v38 = v30.m128i_i64[0];
    if ( v30.m128i_i64[0] )
      v37 = v31;
    v39 = (char *)&s1;
    LOBYTE(v75) = v35;
    if ( v32.m128i_i64[0] )
      v39 = v34;
    v72.m128i_i64[0] = v4;
    v40 = v29;
    v41 = (v29 - 1) / 2;
    s2 = v37;
    v78 = v39;
    while ( 1 )
    {
      v54 = a1 + 56 * v41;
      v55 = *(_QWORD *)(v54 + 8);
      if ( v38 )
      {
        a2 = v76;
        v42 = &s1;
        if ( !v55 )
          goto LABEL_36;
      }
      else if ( !v55 )
      {
        goto LABEL_37;
      }
      v42 = *(const char **)v54;
      a2 = (__int64)s2;
LABEL_36:
      v43 = strcmp(v42, (const char *)a2);
      if ( v43 )
      {
        if ( v43 >= 0 )
        {
LABEL_52:
          v56 = v40;
          v34 = v79;
          v28 = (__int64 *)(a1 + 56 * v56);
          break;
        }
        goto LABEL_42;
      }
LABEL_37:
      v44 = *(_BYTE *)(v54 + 24);
      a4 = (unsigned __int8)v75;
      if ( v44 >= (unsigned __int8)v75 )
      {
        if ( (unsigned __int8)v75 < v44 )
          goto LABEL_52;
        v45 = &s1;
        if ( *(_QWORD *)(v54 + 40) )
          v45 = *(const char **)(v54 + 32);
        a2 = (__int64)v78;
        if ( strcmp(v45, v78) >= 0 )
        {
          v71 = v40;
          v34 = v79;
          v28 = (__int64 *)(a1 + 56 * v71);
          break;
        }
      }
LABEL_42:
      v46 = *(const char **)v54;
      *(_QWORD *)v54 = 0;
      v47 = (__m128i)_mm_loadh_ps((const double *)(v54 + 16));
      v48 = (const char **)(a1 + 56 * v40);
      *(_OWORD *)(v54 + 8) = 0;
      v49 = *v48;
      if ( *v48 )
      {
        v48[1] = nullptr;
        v73.m128i_i64[0] = (__int64)v46;
        v74 = v47;
        qfree(v49, v46);
        v47 = _mm_load_si128(&v74);
        v46 = (const char *)v73.m128i_i64[0];
      }
      *v48 = v46;
      *(__m128i *)(v48 + 1) = v47;
      *((_BYTE *)v48 + 24) = *(_BYTE *)(v54 + 24);
      v50 = (const char *)*(unsigned __int8 *)(v54 + 25);
      *((_BYTE *)v48 + 25) = (_BYTE)v50;
      v51 = *(const char **)(v54 + 32);
      v52 = _mm_loadu_si128((const __m128i *)(v54 + 40));
      *(_QWORD *)(v54 + 32) = 0;
      *(_OWORD *)(v54 + 40) = 0;
      v53 = v48[4];
      if ( v53 )
      {
        v48[5] = nullptr;
        v73 = v52;
        qfree(v53, v50);
        v52 = _mm_load_si128(&v73);
      }
      a2 = v41 - 1;
      v48[4] = v51;
      *(__m128i *)(v48 + 5) = v52;
      v40 = v41;
      if ( v72.m128i_i64[0] >= v41 )
      {
        v34 = v79;
        v28 = (__int64 *)(a1 + 56 * v41);
        break;
      }
      v41 = (v41 - 1) / 2;
    }
  }
  v57 = *v28;
  if ( *v28 )
  {
    v28[1] = 0;
    qfree(v57, (const char *)a2, v35, a4, v36);
  }
  si128 = _mm_load_si128(v82);
  v59 = v28[4];
  *v28 = v76;
  v60 = v80;
  *(__m128i *)(v28 + 1) = si128;
  *((_WORD *)v28 + 12) = v60;
  if ( v59 )
  {
    v28[5] = 0;
    qfree(v59, (const char *)a2, v35, a4, v36);
  }
  v61 = _mm_load_si128(&v81);
  v28[4] = (__int64)v34;
  *(__m128i *)(v28 + 5) = v61;
}
