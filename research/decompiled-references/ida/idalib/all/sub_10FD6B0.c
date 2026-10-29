void __fastcall sub_10FD6B0(__int64 a1, __m128i *a2, __int64 a3)
{
  __int64 v3; // rax
  __m128i *v4; // r12
  void **v5; // rbp
  size_t v6; // r14
  int v7; // eax
  size_t v8; // rcx
  size_t v9; // rdx
  const void *v10; // rsi
  int v11; // eax
  bool v12; // cc
  void *v13; // r8
  size_t v14; // r14
  size_t v15; // rax
  int v16; // eax
  size_t v17; // r9
  size_t v18; // rdx
  const void *v19; // rsi
  int v20; // eax
  unsigned __int64 v21; // rbp
  __m128i *v22; // r14
  size_t v23; // r9
  size_t v24; // rdx
  const void *v25; // rsi
  int v26; // eax
  void *v27; // r8
  void *v28; // r9
  size_t v29; // r15
  size_t v30; // rax
  int v31; // eax
  size_t v32; // rcx
  size_t v33; // rdx
  const void *v34; // rsi
  int v35; // eax
  __m128i *v36; // r15
  void *v37; // r8
  size_t v38; // rax
  __int64 v39; // rsi
  int v40; // eax
  __int64 v41; // rbp
  const __m128i *i; // r15
  __int64 v43; // rcx
  size_t v44; // rsi
  __m128i *v45; // rdx
  __m128i v46; // xmm2
  void *v47; // rcx
  size_t v48; // rax
  const void *v49; // rsi
  int v50; // eax
  void *v51; // rcx
  size_t v52; // r8
  size_t v53; // rdx
  int v54; // eax
  size_t v55; // rax
  int v56; // eax
  size_t v57; // r9
  size_t v58; // rdx
  const void *v59; // rsi
  int v60; // eax
  void *v61; // r8
  size_t v62; // rbp
  size_t v63; // rax
  int v64; // eax
  size_t v65; // r14
  size_t v66; // rdx
  int v67; // eax
  __int64 v68; // r12
  __m128i *v69; // r15
  size_t v70; // rax
  _BYTE *v71; // rax
  __int64 v72; // rbp
  size_t v73; // rdx
  __int64 v74; // rax
  __int64 v75; // [rsp+8h] [rbp-A0h]
  __int64 v76; // [rsp+8h] [rbp-A0h]
  void *s2; // [rsp+10h] [rbp-98h]
  void *s2g; // [rsp+10h] [rbp-98h]
  void *s2a; // [rsp+10h] [rbp-98h]
  void *s2h; // [rsp+10h] [rbp-98h]
  void *s2b; // [rsp+10h] [rbp-98h]
  void *s2i; // [rsp+10h] [rbp-98h]
  void *s2c; // [rsp+10h] [rbp-98h]
  void *s2d; // [rsp+10h] [rbp-98h]
  void *s2e; // [rsp+10h] [rbp-98h]
  void *s2j; // [rsp+10h] [rbp-98h]
  void *s2f; // [rsp+10h] [rbp-98h]
  void *v88; // [rsp+18h] [rbp-90h]
  void *v89; // [rsp+18h] [rbp-90h]
  void *v90; // [rsp+18h] [rbp-90h]
  unsigned __int64 v91; // [rsp+28h] [rbp-80h]
  __m128i *v92; // [rsp+30h] [rbp-78h]
  size_t v93; // [rsp+38h] [rbp-70h]
  __m128i v94; // [rsp+40h] [rbp-68h] BYREF
  void *s1; // [rsp+50h] [rbp-58h] BYREF
  size_t n; // [rsp+58h] [rbp-50h]
  _OWORD v97[4]; // [rsp+60h] [rbp-48h] BYREF

  v3 = (__int64)a2->m128i_i64 - a1;
  v75 = a3;
  if ( (__int64)a2->m128i_i64 - a1 <= 512 )
    return;
  if ( !a3 )
  {
    v91 = (unsigned __int64)a2;
    goto LABEL_42;
  }
  v4 = a2;
  do
  {
    --v75;
    s1 = *(void **)(a1 + 32);
    n = *(_QWORD *)(a1 + 40);
    v5 = (void **)(a1 + 32
                      * ((__int64)((((__int64)v4->m128i_i64 - a1) >> 5) + (((unsigned __int64)v4 - a1) >> 63)) >> 1));
    v6 = (size_t)v5[1];
    s2 = *v5;
    v7 = sub_22462B0(&s1, *v5, v6);
    if ( v7 )
    {
      v13 = (void *)v4[-2].m128i_i64[0];
      v14 = v4[-2].m128i_u64[1];
      if ( v7 < 0 )
        goto LABEL_69;
    }
    else
    {
      v8 = n;
      v9 = n;
      if ( v6 <= n )
        v9 = v6;
      if ( v9 )
      {
        v10 = s2;
        s2g = (void *)n;
        v11 = memcmp(s1, v10, v9);
        v8 = (size_t)s2g;
        if ( v11 )
        {
          if ( v11 >= 0 )
          {
            v13 = (void *)v4[-2].m128i_i64[0];
            v14 = v4[-2].m128i_u64[1];
LABEL_69:
            v55 = (size_t)v5[1];
            s2e = v13;
            s1 = *v5;
            n = v55;
            v56 = sub_22462B0(&s1, v13, v14);
            if ( v56 )
            {
              if ( v56 < 0 )
                goto LABEL_107;
            }
            else
            {
              v57 = n;
              v58 = v14;
              if ( n <= v14 )
                v58 = n;
              if ( v58 && (v59 = s2e, s2j = (void *)n, v60 = memcmp(s1, v59, v58), v57 = (size_t)s2j, v60) )
              {
                if ( v60 >= 0 )
                  goto LABEL_107;
              }
              else if ( v57 != v14 && v57 >= v14 )
              {
LABEL_107:
                sub_ABA4C0((__m128i *)a1, (__m128i *)v5);
                goto LABEL_19;
              }
            }
            v61 = (void *)v4[-2].m128i_i64[0];
            v62 = v4[-2].m128i_u64[1];
            v63 = *(_QWORD *)(a1 + 40);
            s1 = *(void **)(a1 + 32);
            s2f = v61;
            n = v63;
            v64 = sub_22462B0(&s1, v61, v62);
            if ( v64 )
            {
              if ( v64 < 0 )
                goto LABEL_105;
            }
            else
            {
              v65 = n;
              v66 = n;
              if ( v62 <= n )
                v66 = v62;
              if ( v66 && (v67 = memcmp(s1, s2f, v66)) != 0 )
              {
                if ( v67 >= 0 )
                  goto LABEL_105;
              }
              else if ( v62 != v65 && v62 <= v65 )
              {
                goto LABEL_105;
              }
            }
            goto LABEL_18;
          }
LABEL_101:
          v13 = (void *)v4[-2].m128i_i64[0];
          v14 = v4[-2].m128i_u64[1];
          goto LABEL_11;
        }
      }
      v12 = v6 <= v8;
      if ( v6 == v8 )
        goto LABEL_101;
      v13 = (void *)v4[-2].m128i_i64[0];
      v14 = v4[-2].m128i_u64[1];
      if ( v12 )
        goto LABEL_69;
    }
LABEL_11:
    v15 = *(_QWORD *)(a1 + 40);
    s2a = v13;
    s1 = *(void **)(a1 + 32);
    n = v15;
    v16 = sub_22462B0(&s1, v13, v14);
    if ( v16 )
    {
      if ( v16 >= 0 )
        goto LABEL_53;
    }
    else
    {
      v17 = n;
      v18 = v14;
      if ( n <= v14 )
        v18 = n;
      if ( v18 && (v19 = s2a, s2h = (void *)n, v20 = memcmp(s1, v19, v18), v17 = (size_t)s2h, v20) )
      {
        if ( v20 < 0 )
          goto LABEL_53;
      }
      else if ( v17 == v14 || v17 < v14 )
      {
LABEL_53:
        v47 = (void *)v4[-2].m128i_i64[1];
        v48 = (size_t)v5[1];
        v49 = (const void *)v4[-2].m128i_i64[0];
        s1 = *v5;
        s2d = v47;
        n = v48;
        v50 = sub_22462B0(&s1, v49, v47);
        v51 = s2d;
        if ( v50 )
        {
          if ( v50 >= 0 )
            goto LABEL_107;
        }
        else
        {
          v52 = n;
          v53 = n;
          if ( (unsigned __int64)s2d <= n )
            v53 = (size_t)s2d;
          if ( v53 && (v90 = (void *)n, v54 = memcmp(s1, v49, v53), v51 = s2d, v52 = (size_t)v90, v54) )
          {
            if ( v54 < 0 )
              goto LABEL_107;
          }
          else if ( v51 == (void *)v52 || (unsigned __int64)v51 > v52 )
          {
            goto LABEL_107;
          }
        }
LABEL_105:
        sub_ABA4C0((__m128i *)a1, v4 - 2);
        goto LABEL_19;
      }
    }
LABEL_18:
    sub_ABA4C0((__m128i *)a1, (__m128i *)(a1 + 32));
LABEL_19:
    v21 = a1 + 32;
    v22 = v4;
    while ( 1 )
    {
      v28 = *(void **)a1;
      v91 = v21;
      v29 = *(_QWORD *)(a1 + 8);
      v30 = *(_QWORD *)(v21 + 8);
      s1 = *(void **)v21;
      s2b = v28;
      n = v30;
      v31 = sub_22462B0(&s1, v28, v29);
      if ( !v31 )
        break;
      if ( v31 >= 0 )
        goto LABEL_36;
LABEL_28:
      v21 += 32LL;
    }
    v32 = n;
    v33 = n;
    if ( v29 <= n )
      v33 = v29;
    if ( v33 )
    {
      v34 = s2b;
      s2i = (void *)n;
      v35 = memcmp(s1, v34, v33);
      v32 = (size_t)s2i;
      if ( v35 )
      {
        if ( v35 < 0 )
          goto LABEL_36;
        goto LABEL_28;
      }
    }
    if ( v29 != v32 && v29 <= v32 )
      goto LABEL_28;
LABEL_36:
    v36 = v22 - 2;
    do
    {
      while ( 1 )
      {
        v37 = (void *)v36->m128i_i64[1];
        v22 = v36;
        v38 = *(_QWORD *)(a1 + 8);
        v39 = v36->m128i_i64[0];
        v89 = (void *)v36->m128i_i64[0];
        s1 = *(void **)a1;
        s2c = v37;
        n = v38;
        v40 = sub_22462B0(&s1, v39, v37);
        v27 = s2c;
        if ( v40 )
          break;
        v23 = n;
        v24 = n;
        if ( (unsigned __int64)s2c <= n )
          v24 = (size_t)s2c;
        if ( v24 && (v25 = v89, v88 = (void *)n, v26 = memcmp(s1, v25, v24), v27 = s2c, v23 = (size_t)v88, v26) )
        {
          if ( v26 < 0 )
            goto LABEL_26;
        }
        else if ( v27 == (void *)v23 || (unsigned __int64)v27 > v23 )
        {
LABEL_26:
          if ( v21 >= (unsigned __int64)v36 )
            goto LABEL_40;
LABEL_27:
          sub_ABA4C0((__m128i *)v21, v22);
          goto LABEL_28;
        }
        v36 -= 2;
      }
      v36 -= 2;
    }
    while ( v40 < 0 );
    if ( v21 < (unsigned __int64)v22 )
      goto LABEL_27;
LABEL_40:
    sub_10FD6B0(v21, v4, v75);
    v3 = v21 - a1;
    if ( (__int64)(v21 - a1) <= 512 )
      return;
    v4 = (__m128i *)v21;
  }
  while ( v75 );
LABEL_42:
  v76 = v3 >> 5;
  v41 = ((v3 >> 5) - 2) >> 1;
  for ( i = (const __m128i *)(a1 + 32 * v41 + 16); ; i -= 2 )
  {
    v45 = (__m128i *)i[-1].m128i_i64[0];
    if ( v45 == i )
    {
      v46 = _mm_loadu_si128(i);
      v44 = i[-1].m128i_u64[1];
      i->m128i_i8[0] = 0;
      i[-1].m128i_i64[1] = 0;
      s1 = v97;
      v94 = v46;
    }
    else
    {
      v43 = i->m128i_i64[0];
      v44 = i[-1].m128i_u64[1];
      i[-1].m128i_i64[0] = (__int64)i;
      v94.m128i_i64[0] = v43;
      i[-1].m128i_i64[1] = 0;
      i->m128i_i8[0] = 0;
      s1 = v97;
      if ( v45 != &v94 )
      {
        s1 = v45;
        *(_QWORD *)&v97[0] = v43;
        goto LABEL_45;
      }
    }
    v97[0] = _mm_load_si128(&v94);
LABEL_45:
    n = v44;
    v94.m128i_i8[0] = 0;
    sub_10DBFD0(a1, v41, v76, (__int64)&s1);
    if ( s1 != v97 )
      operator delete(s1);
    if ( !v41 )
      break;
    --v41;
  }
  v68 = a1 + 16;
  v69 = (__m128i *)(v91 - 16);
  do
  {
    v92 = &v94;
    if ( (__m128i *)v69[-1].m128i_i64[0] == v69 )
    {
      v94 = _mm_loadu_si128(v69);
    }
    else
    {
      v92 = (__m128i *)v69[-1].m128i_i64[0];
      v94.m128i_i64[0] = v69->m128i_i64[0];
    }
    v70 = v69[-1].m128i_u64[1];
    v69[-1].m128i_i64[0] = (__int64)v69;
    v69[-1].m128i_i64[1] = 0;
    v93 = v70;
    v69->m128i_i8[0] = 0;
    if ( *(_QWORD *)a1 == v68 )
    {
      v73 = *(_QWORD *)(a1 + 8);
      if ( v73 )
      {
        if ( v73 == 1 )
          v69->m128i_i8[0] = *(_BYTE *)(a1 + 16);
        else
          memcpy(v69, (const void *)(a1 + 16), v73);
        v73 = *(_QWORD *)(a1 + 8);
      }
      v74 = v69[-1].m128i_i64[0];
      v69[-1].m128i_i64[1] = v73;
      *(_BYTE *)(v74 + v73) = 0;
      v71 = *(_BYTE **)a1;
    }
    else
    {
      v69[-1].m128i_i64[0] = *(_QWORD *)a1;
      v69[-1].m128i_i64[1] = *(_QWORD *)(a1 + 8);
      v69->m128i_i64[0] = *(_QWORD *)(a1 + 16);
      v71 = (_BYTE *)(a1 + 16);
      *(_QWORD *)a1 = v68;
    }
    *(_QWORD *)(a1 + 8) = 0;
    *v71 = 0;
    s1 = v97;
    if ( v92 == &v94 )
    {
      v97[0] = _mm_load_si128(&v94);
    }
    else
    {
      s1 = v92;
      *(_QWORD *)&v97[0] = v94.m128i_i64[0];
    }
    v72 = (__int64)v69[-1].m128i_i64 - a1;
    n = v93;
    v94.m128i_i8[0] = 0;
    sub_10DBFD0(a1, 0, v72 >> 5, (__int64)&s1);
    if ( s1 != v97 )
      operator delete(s1);
    v69 -= 2;
  }
  while ( v72 > 32 );
}
