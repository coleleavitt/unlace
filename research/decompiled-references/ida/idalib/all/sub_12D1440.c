_QWORD *__fastcall sub_12D1440(void ***a1, void **a2)
{
  __m128i *v3; // rbx
  __m128i *v4; // r15
  unsigned __int64 v5; // rax
  __int64 v6; // rsi
  __int64 m128i_i64; // rdx
  __int64 v8; // rsi
  __m128i *v9; // rsi
  __int64 v10; // rsi
  __int64 v11; // rax
  __m128i *v12; // r15
  __int64 v13; // r13
  __int64 v14; // rdx
  __int64 v15; // rax
  _BYTE *v16; // rax
  __m128i *v17; // r12
  __m128i *v18; // rdi
  size_t v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdx
  char **v22; // r13
  __int64 *v23; // r14
  unsigned __int64 v24; // r12
  __int64 v25; // rdx
  __int64 *v26; // rdi
  char *v27; // rsi
  __int64 v28; // rax
  _QWORD *result; // rax
  void **v30; // rdx
  __int64 v31; // rax
  unsigned __int64 v32; // rcx
  bool v33; // cf
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // r12
  char *v36; // rax
  const __m128i *v37; // rax
  unsigned __int64 v38; // r12
  __m128i *v39; // rdx
  __int64 v40; // r12
  __m128i *v41; // rsi
  const __m128i *v42; // rcx
  char *v43; // r12
  char **v44; // r14
  const char *v45; // r15
  __int64 v46; // rdx
  char *v47; // rsi
  char *v48; // rdi
  void **v49; // r15
  char *m128i_i8; // r13
  const __m128i *v51; // rax
  unsigned __int64 v52; // rsi
  __m128i *v53; // rdi
  __m128i *v54; // rdx
  const __m128i *v55; // rcx
  __int64 v56; // rcx
  __int64 v57; // rcx
  void **v58; // rbx
  __m128i *v59; // rax
  __m128i *v60; // rdx
  const __m128i *v61; // rax
  unsigned __int64 v62; // rsi
  const __m128i *v63; // rcx
  __int64 v64; // r12
  __int64 v65; // r12
  size_t v66; // r8
  const char **i; // rbp
  unsigned __int64 v68; // rdx
  char *v69; // rcx
  __int64 *v70; // rdi
  __m128i v71; // xmm3
  __int64 v72; // rcx
  char *v73; // [rsp+0h] [rbp-58h] BYREF
  __m128i *v74; // [rsp+8h] [rbp-50h]
  char *v75; // [rsp+10h] [rbp-48h]
  __int64 v76; // [rsp+18h] [rbp-40h]

  v3 = (__m128i *)a2;
  v4 = (__m128i *)a1[1];
  if ( (unsigned __int64)((char *)a1[2] - (char *)v4) <= 0x3F )
  {
    v30 = *a1;
    v31 = 2;
    v32 = ((char *)v4 - (char *)*a1) >> 5;
    if ( v32 >= 2 )
      v31 = ((char *)v4 - (char *)*a1) >> 5;
    v33 = __CFADD__(v31, v32);
    v34 = v31 + v32;
    if ( v33 || v34 > 0x7FFFFFFFFFFFFFFLL )
    {
      v35 = -32;
    }
    else
    {
      if ( !v34 )
      {
        v75 = nullptr;
        v73 = nullptr;
        goto LABEL_34;
      }
      v35 = 32 * v34;
    }
    v36 = (char *)operator new(v35);
    v30 = *a1;
    v73 = v36;
    v75 = &v36[v35];
LABEL_34:
    if ( a2 == v30 )
    {
      v74 = (__m128i *)v73;
      v43 = v73;
    }
    else
    {
      v37 = (const __m128i *)(v30 + 2);
      v38 = (char *)(a2 - 4) - (char *)v30;
      v39 = (__m128i *)v73;
      v40 = (v38 >> 5) + 1;
      v41 = (__m128i *)&v73[32 * v40];
      do
      {
        while ( 1 )
        {
          v39->m128i_i64[0] = (__int64)v39[1].m128i_i64;
          v42 = (const __m128i *)v37[-1].m128i_i64[0];
          if ( v42 == v37 )
            break;
          v39->m128i_i64[0] = (__int64)v42;
          v39 += 2;
          v39[-1].m128i_i64[0] = v37->m128i_i64[0];
          v39[-2].m128i_i64[1] = v37[-1].m128i_i64[1];
          v37[-1].m128i_i64[0] = (__int64)v37;
          v37 += 2;
          v37[-3].m128i_i64[1] = 0;
          v37[-2].m128i_i8[0] = 0;
          if ( v39 == v41 )
            goto LABEL_38;
        }
        v39 += 2;
        v39[-1] = _mm_loadu_si128(v37);
        v39[-2].m128i_i64[1] = v37[-1].m128i_i64[1];
        v37[-1].m128i_i64[0] = (__int64)v37;
        v37 += 2;
        v37[-3].m128i_i64[1] = 0;
        v37[-2].m128i_i8[0] = 0;
      }
      while ( v41 != v39 );
LABEL_38:
      v43 = &v73[32 * v40];
      v74 = (__m128i *)v43;
    }
    v44 = off_2BAF8D0;
    do
    {
      v45 = *v44;
      v46 = -1;
      v47 = nullptr;
      *(_QWORD *)v43 = v43 + 16;
      if ( v45 )
      {
        v47 = (char *)v45;
        v46 = (__int64)&v45[strlen(v45)];
      }
      v48 = v43;
      ++v44;
      v43 += 32;
      sub_12CD700(v48, v47, v46);
    }
    while ( v44 != (char **)&unk_2BAF8E0 );
    v49 = a1[1];
    m128i_i8 = v74[4].m128i_i8;
    if ( v3 != (__m128i *)v49 )
    {
      v51 = v3 + 1;
      v52 = (unsigned __int64)((char *)v49 - (char *)v3 - 32) >> 5;
      v53 = &v74[2 * v52 + 6];
      v54 = v74 + 4;
      do
      {
        while ( 1 )
        {
          v54->m128i_i64[0] = (__int64)v54[1].m128i_i64;
          v55 = (const __m128i *)v51[-1].m128i_i64[0];
          if ( v55 == v51 )
            break;
          v54->m128i_i64[0] = (__int64)v55;
          v56 = v51->m128i_i64[0];
          v54 += 2;
          v51[-1].m128i_i64[0] = (__int64)v51;
          v51 += 2;
          v54[-1].m128i_i64[0] = v56;
          v57 = v51[-3].m128i_i64[1];
          v51[-2].m128i_i8[0] = 0;
          v54[-2].m128i_i64[1] = v57;
          v51[-3].m128i_i64[1] = 0;
          if ( v54 == v53 )
            goto LABEL_47;
        }
        v71 = _mm_loadu_si128(v51);
        v72 = v51[-1].m128i_i64[1];
        v54 += 2;
        v51->m128i_i8[0] = 0;
        v51[-1].m128i_i64[1] = 0;
        v51 += 2;
        v54[-1] = v71;
        v54[-2].m128i_i64[1] = v72;
      }
      while ( v53 != v54 );
LABEL_47:
      v49 = a1[1];
      m128i_i8 += 32 * v52 + 32;
    }
    v58 = *a1;
    if ( *a1 != v49 )
    {
      do
      {
        while ( *v58 != v58 + 2 )
        {
          operator delete(*v58);
          v58 += 4;
          if ( v58 == v49 )
            goto LABEL_51;
        }
        v58 += 4;
      }
      while ( v58 != v49 );
LABEL_51:
      v49 = *a1;
    }
    if ( v49 )
      operator delete(v49);
    result = v75;
    v73 = m128i_i8;
    a1[2] = (void **)v75;
    *(__m128 *)a1 = _mm_loadh_ps((const double *)&v73);
    return result;
  }
  v75 = (char *)((char *)v4 - (char *)a2);
  v5 = ((char *)v4 - (char *)a2) >> 5;
  v74 = (__m128i *)v5;
  if ( v5 > 2 )
  {
    v6 = v4[-4].m128i_i64[0];
    v4->m128i_i64[0] = (__int64)v4[1].m128i_i64;
    m128i_i64 = (__int64)v4[-3].m128i_i64;
    if ( m128i_i64 == v6 )
    {
      v4[1] = _mm_loadu_si128(v4 - 3);
    }
    else
    {
      v4->m128i_i64[0] = v6;
      v4[1].m128i_i64[0] = v4[-3].m128i_i64[0];
    }
    v8 = v4[-4].m128i_i64[1];
    v4[-4].m128i_i64[0] = m128i_i64;
    v4[2].m128i_i64[0] = (__int64)v4[3].m128i_i64;
    v4->m128i_i64[1] = v8;
    v9 = (__m128i *)v4[-2].m128i_i64[0];
    v4[-4].m128i_i64[1] = 0;
    v4[-3].m128i_i8[0] = 0;
    if ( v9 == &v4[-1] )
    {
      v4[3] = _mm_loadu_si128(v4 - 1);
    }
    else
    {
      v4[2].m128i_i64[0] = (__int64)v9;
      v4[3].m128i_i64[0] = v4[-1].m128i_i64[0];
    }
    v10 = v4[-2].m128i_i64[1];
    v11 = (char *)&v4[-4] - (char *)v3;
    v4[-2].m128i_i64[0] = (__int64)v4[-1].m128i_i64;
    v12 = v4 - 5;
    v12[3].m128i_i64[1] = 0;
    v12[7].m128i_i64[1] = v10;
    v13 = v11 >> 5;
    v12[4].m128i_i8[0] = 0;
    a1[1] += 8;
    if ( v11 <= 0 )
    {
LABEL_26:
      sub_99BDC0(v3, 0, v3->m128i_u64[1], "xray-fdr", 8u);
      return sub_99BDC0((__m128i *)v3[2].m128i_i64, 0, v3[2].m128i_u64[1], "xray-basic", 0xAu);
    }
    while ( 1 )
    {
      v17 = (__m128i *)v12[-1].m128i_i64[0];
      v18 = (__m128i *)v12[3].m128i_i64[0];
      if ( v12 == v17 )
      {
        v19 = v12[-1].m128i_u64[1];
        if ( v19 )
        {
          if ( v19 == 1 )
            v18->m128i_i8[0] = v12->m128i_i8[0];
          else
            memcpy(v18, v12, v19);
        }
        v20 = v17[-1].m128i_i64[1];
        v21 = v17[3].m128i_i64[0];
        v17[3].m128i_i64[1] = v20;
        *(_BYTE *)(v21 + v20) = 0;
        goto LABEL_12;
      }
      if ( v18 == &v12[4] )
        break;
      v14 = v12[-1].m128i_i64[1];
      v15 = v12[4].m128i_i64[0];
      v12[3].m128i_i64[0] = (__int64)v17;
      v12[3].m128i_i64[1] = v14;
      v12[4].m128i_i64[0] = v12->m128i_i64[0];
      if ( !v18 )
        goto LABEL_25;
      v12[-1].m128i_i64[0] = (__int64)v18;
      v12->m128i_i64[0] = v15;
LABEL_12:
      v16 = (_BYTE *)v12[-1].m128i_i64[0];
      v12[-1].m128i_i64[1] = 0;
      v12 -= 2;
      *v16 = 0;
      if ( !--v13 )
        goto LABEL_26;
    }
    v28 = v12[-1].m128i_i64[1];
    v12[3].m128i_i64[0] = (__int64)v17;
    v12[3].m128i_i64[1] = v28;
    v12[4].m128i_i64[0] = v12->m128i_i64[0];
LABEL_25:
    v12[-1].m128i_i64[0] = (__int64)v12;
    goto LABEL_12;
  }
  v76 = 8 * v5;
  v22 = &off_2BAF8D0[v5];
  if ( v22 == (char **)&unk_2BAF8E0 )
  {
    v59 = v4;
  }
  else
  {
    v23 = (__int64 *)v4;
    v24 = (unsigned __int64)&v22[((unsigned __int64)((char *)&off_2BAF8D8 - (char *)v22) >> 3) + 1];
    do
    {
      v27 = *v22;
      *v23 = (__int64)(v23 + 2);
      if ( v27 )
      {
        v73 = v27;
        v25 = (__int64)&v27[strlen(v27)];
      }
      else
      {
        v25 = -1;
        v27 = nullptr;
      }
      v26 = v23;
      ++v22;
      v23 += 4;
      sub_12CD700(v26, v27, v25);
    }
    while ( v22 != (char **)v24 );
    v59 = (__m128i *)a1[1];
  }
  v60 = &v59[2 * (2 - (__int64)v74)];
  a1[1] = (void **)v60;
  if ( v3 != v4 )
  {
    v61 = v3 + 1;
    v62 = (unsigned __int64)v60[2].m128i_u64 + (((char *)v4 - (char *)v3 - 32) & 0xFFFFFFFFFFFFFFE0LL);
    do
    {
      while ( 1 )
      {
        v60->m128i_i64[0] = (__int64)v60[1].m128i_i64;
        v63 = (const __m128i *)v61[-1].m128i_i64[0];
        if ( v63 == v61 )
          break;
        v60->m128i_i64[0] = (__int64)v63;
        v60 += 2;
        v60[-1].m128i_i64[0] = v61->m128i_i64[0];
        v60[-2].m128i_i64[1] = v61[-1].m128i_i64[1];
        v61[-1].m128i_i64[0] = (__int64)v61;
        v61 += 2;
        v61[-3].m128i_i64[1] = 0;
        v61[-2].m128i_i8[0] = 0;
        if ( v60 == (__m128i *)v62 )
          goto LABEL_61;
      }
      v60 += 2;
      v60[-1] = _mm_loadu_si128(v61);
      v60[-2].m128i_i64[1] = v61[-1].m128i_i64[1];
      v61[-1].m128i_i64[0] = (__int64)v61;
      v61 += 2;
      v61[-3].m128i_i64[1] = 0;
      v61[-2].m128i_i8[0] = 0;
    }
    while ( (__m128i *)v62 != v60 );
LABEL_61:
    v60 = (__m128i *)a1[1];
  }
  result = (_QWORD *)v76;
  v64 = v76;
  a1[1] = (void **)&v75[(_QWORD)v60];
  v65 = v64 >> 3;
  if ( result )
  {
    v66 = 8;
    for ( i = (const char **)off_2BAF8D0; ; v66 = strlen(*i) )
    {
      v68 = v3->m128i_u64[1];
      v69 = (char *)*i;
      v70 = (__int64 *)v3;
      ++i;
      v3 += 2;
      result = sub_99BDC0(v70, 0, v68, v69, v66);
      if ( v65 == 1 )
        break;
      v65 = 1;
    }
  }
  return result;
}
