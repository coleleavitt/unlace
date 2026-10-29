size_t __fastcall sub_FDB4A0(__int64 a1, __int64 a2, unsigned __int64 a3, size_t a4)
{
  __int64 v6; // r13
  __int64 v9; // rax
  __int64 v10; // rcx
  unsigned int v11; // edx
  __int64 *v12; // rsi
  __int64 v13; // r8
  _QWORD *v14; // r10
  __int64 *v15; // rdx
  size_t result; // rax
  int v17; // esi
  int v18; // r9d
  __int64 v19; // r8
  __int64 *v20; // rdi
  __int64 v21; // rax
  unsigned int (__fastcall *v22)(__int64 *, __m128 *, void **); // rax
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 *v26; // r14
  unsigned __int64 v27; // rax
  __int64 v28; // rdi
  __int64 *v29; // rsi
  __int64 v30; // rcx
  __int64 v31; // rax
  char *v32; // rcx
  void *v33; // r14
  char *v34; // rax
  void *v35; // rdi
  unsigned __int64 v36; // rax
  __int64 v37; // rax
  _QWORD *v38; // rax
  __int64 v39; // rdx
  __int64 *v40; // r11
  __int64 v41; // r10
  _QWORD *i; // rdx
  __int64 *v43; // rax
  int j; // r9d
  __int64 v45; // rdx
  __int64 v46; // r8
  unsigned int v47; // ecx
  __int64 v48; // rsi
  __int64 v49; // rdi
  int v50; // ecx
  unsigned int v51; // r8d
  __int64 v52; // rdi
  int v53; // r10d
  __int64 v54; // r8
  unsigned __int64 v55; // rax
  unsigned __int64 v56; // rax
  __int64 v57; // rax
  _QWORD *v58; // rax
  unsigned int v59; // r11d
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // rdx
  __int64 *v63; // r8
  int v64; // r10d
  _QWORD *k; // rdx
  __int64 *v66; // rax
  __int64 v67; // r9
  __int64 v68; // rdi
  unsigned int v69; // edx
  __int64 *v70; // rcx
  __int64 v71; // rsi
  unsigned int v72; // r11d
  int v73; // r9d
  __int64 *v74; // r14
  __int64 v75; // rcx
  _QWORD *v76; // rsi
  _QWORD *v77; // rcx
  __int64 v78; // rcx
  _QWORD *v79; // rsi
  _QWORD *v80; // rcx
  int v81; // r9d
  _QWORD *v82; // [rsp+8h] [rbp-2E0h]
  size_t v83; // [rsp+8h] [rbp-2E0h]
  unsigned int v84; // [rsp+8h] [rbp-2E0h]
  __int64 v85; // [rsp+8h] [rbp-2E0h]
  int v86; // [rsp+8h] [rbp-2E0h]
  size_t v87; // [rsp+10h] [rbp-2D8h] BYREF
  size_t n; // [rsp+18h] [rbp-2D0h]
  __int64 v89; // [rsp+20h] [rbp-2C8h]
  __int64 *v90; // [rsp+28h] [rbp-2C0h]
  __int64 v91; // [rsp+30h] [rbp-2B8h]
  __int64 v92; // [rsp+38h] [rbp-2B0h]
  __m128 v93[2]; // [rsp+40h] [rbp-2A8h] BYREF
  __int16 v94; // [rsp+60h] [rbp-288h]
  char *v95; // [rsp+70h] [rbp-278h]
  __m128i si128; // [rsp+78h] [rbp-270h]
  char v97; // [rsp+88h] [rbp-260h] BYREF
  void *ptr; // [rsp+190h] [rbp-158h] BYREF
  __m128i v99; // [rsp+198h] [rbp-150h]
  _BYTE v100[320]; // [rsp+1A8h] [rbp-140h] BYREF

  v6 = a1 + 656;
  v9 = *(unsigned int *)(a1 + 672);
  n = a4;
  v10 = *(_QWORD *)(a1 + 656);
  v87 = a3;
  if ( !(_DWORD)v9 )
    goto LABEL_10;
  v11 = (v9 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
  v12 = (__int64 *)(v10 + 24LL * v11);
  v13 = *v12;
  if ( a2 != *v12 )
  {
    v17 = 1;
    if ( v13 != -4096 )
    {
      do
      {
        v18 = v17 + 1;
        v11 = (v9 - 1) & (v17 + v11);
        v12 = (__int64 *)(v10 + 24LL * v11);
        v19 = *v12;
        if ( a2 == *v12 )
          goto LABEL_3;
        v17 = v18;
      }
      while ( v19 != -4096 );
    }
LABEL_10:
    sub_E7C080((__m128 *)&ptr, (__int64 *)(v10 + 24 * v9), (__int64 *)(v10 + 24 * v9), v6, 1);
    v14 = ptr;
    goto LABEL_4;
  }
LABEL_3:
  sub_E7C080((__m128 *)&ptr, v12, (__int64 *)(v10 + 24 * v9), v6, 1);
  v14 = ptr;
LABEL_4:
  v82 = v14;
  v15 = (__int64 *)(*(_QWORD *)(a1 + 656) + 24LL * *(unsigned int *)(a1 + 672));
  sub_E7C080((__m128 *)&ptr, v15, v15, v6, 1);
  if ( ptr != v82 )
    return v82[1];
  v20 = *(__int64 **)(a1 + 8);
  v95 = &v97;
  ptr = v100;
  v21 = *v20;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
  v22 = *(unsigned int (__fastcall **)(__int64 *, __m128 *, void **))(v21 + 88);
  v93[0].m128_u64[1] = a4;
  v94 = 261;
  v99 = si128;
  v93[0].m128_u64[0] = a3;
  if ( !v22(v20, v93, &ptr) )
  {
    v31 = v99.m128i_i64[0];
    v87 = 0;
    n = v99.m128i_i64[0];
    if ( v99.m128i_i64[0] )
    {
      v32 = *(char **)(a1 + 680);
      *(_QWORD *)(a1 + 760) += v99.m128i_i64[0];
      v33 = ptr;
      v87 = (size_t)v32;
      v34 = &v32[v31];
      if ( *(_QWORD *)(a1 + 688) >= (unsigned __int64)v34 && v32 )
      {
        *(_QWORD *)(a1 + 680) = v34;
        v35 = v32;
      }
      else
      {
        v87 = sub_986170(a1 + 680, n, n, 0, v23, v24);
        v35 = (void *)v87;
      }
      memmove(v35, v33, n);
    }
  }
  v25 = *(unsigned int *)(a1 + 672);
  v26 = *(__int64 **)(a1 + 656);
  if ( !(_DWORD)v25 )
    goto LABEL_22;
  v27 = (unsigned int)(v25 - 1);
  LODWORD(v28) = v27 & (((unsigned int)a2 >> 4) ^ ((unsigned int)a2 >> 9));
  v29 = &v26[3 * (unsigned int)v28];
  v30 = *v29;
  if ( a2 == *v29 )
  {
LABEL_14:
    sub_E7C080(v93, v29, &v26[3 * v25], v6, 1);
    goto LABEL_15;
  }
  v53 = 1;
  v24 = 0;
  if ( v30 != -4096 )
  {
    while ( 1 )
    {
      if ( !v24 && v30 == -8192 )
        v24 = (__int64)v29;
      v28 = (unsigned int)v27 & ((_DWORD)v28 + v53);
      v29 = &v26[3 * v28];
      v30 = *v29;
      if ( a2 == *v29 )
        goto LABEL_14;
      if ( v30 == -4096 )
        break;
      ++v53;
    }
    if ( v24 )
      v29 = (__int64 *)v24;
  }
  v50 = *(_DWORD *)(a1 + 664) + 1;
  v23 = (unsigned int)(4 * v50);
  if ( (unsigned int)v23 >= 3 * (int)v25 )
  {
LABEL_22:
    v84 = *(_DWORD *)(a1 + 672);
    v36 = (((((((unsigned int)(2 * v25 - 1) | ((unsigned __int64)(unsigned int)(2 * v25 - 1) >> 1)) >> 2)
            | (unsigned int)(2 * v25 - 1)
            | ((unsigned __int64)(unsigned int)(2 * v25 - 1) >> 1)) >> 4)
          | (((unsigned int)(2 * v25 - 1) | ((unsigned __int64)(unsigned int)(2 * v25 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * v25 - 1)
          | ((unsigned __int64)(unsigned int)(2 * v25 - 1) >> 1)) >> 8)
        | (((((unsigned int)(2 * v25 - 1) | ((unsigned __int64)(unsigned int)(2 * v25 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * v25 - 1)
          | ((unsigned __int64)(unsigned int)(2 * v25 - 1) >> 1)) >> 4)
        | (((unsigned int)(2 * v25 - 1) | ((unsigned __int64)(unsigned int)(2 * v25 - 1) >> 1)) >> 2)
        | (unsigned int)(2 * v25 - 1)
        | ((unsigned __int64)(unsigned int)(2 * v25 - 1) >> 1);
    v37 = ((v36 >> 16) | v36) + 1;
    if ( (unsigned int)v37 < 0x40 )
      LODWORD(v37) = 64;
    *(_DWORD *)(a1 + 672) = v37;
    v38 = (_QWORD *)sub_22300B0(24LL * (unsigned int)v37, 8, v25, 64, v23, v24);
    v39 = v84;
    *(_QWORD *)(a1 + 656) = v38;
    if ( v26 )
    {
      *(_QWORD *)(a1 + 664) = 0;
      v85 = 24LL * v84;
      v40 = &v26[3 * v39];
      v41 = *(unsigned int *)(a1 + 672);
      for ( i = &v38[3 * v41]; i != v38; v38 += 3 )
        *v38 = -4096;
      v43 = v26;
      for ( j = v41 - 1; v40 != v43; v43 += 3 )
      {
        v45 = *v43;
        if ( *v43 != -4096 && v45 != -8192 )
        {
          if ( !(_DWORD)v41 )
          {
            *(_QWORD *)&dword_0 = *v43;
            BUG();
          }
          v46 = *(_QWORD *)(a1 + 656);
          v47 = j & (((unsigned int)v45 >> 9) ^ ((unsigned int)v45 >> 4));
          v48 = v46 + 24LL * v47;
          v49 = *(_QWORD *)v48;
          if ( *(_QWORD *)v48 != v45 && v49 != -4096 )
          {
            LODWORD(v90) = 1;
            v89 = 0;
            v91 = v46;
            while ( 1 )
            {
              if ( !v89 )
              {
                if ( v49 != -8192 )
                  v48 = v89;
                v89 = v48;
              }
              v47 = j & ((_DWORD)v90 + v47);
              v48 = v91 + 24LL * v47;
              v49 = *(_QWORD *)v48;
              if ( v45 == *(_QWORD *)v48 )
                break;
              if ( v49 == -4096 )
              {
                if ( v89 )
                  v48 = v89;
                break;
              }
              LODWORD(v90) = (_DWORD)v90 + 1;
            }
          }
          *(_QWORD *)v48 = v45;
          *(__m128i *)(v48 + 8) = _mm_loadu_si128((const __m128i *)(v43 + 1));
          ++*(_DWORD *)(a1 + 664);
        }
      }
      operator delete(v26, v85, 8);
      v38 = *(_QWORD **)(a1 + 656);
      v25 = *(unsigned int *)(a1 + 672);
      v50 = *(_DWORD *)(a1 + 664) + 1;
    }
    else
    {
      v75 = *(unsigned int *)(a1 + 672);
      *(_QWORD *)(a1 + 664) = 0;
      v25 = v75;
      v76 = &v38[3 * v75];
      if ( v38 != v76 )
      {
        v77 = v38;
        do
        {
          *v77 = -4096;
          v77 += 3;
        }
        while ( v76 != v77 );
      }
      v50 = 1;
    }
    if ( (_DWORD)v25 )
    {
      v51 = (v25 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
      v29 = &v38[3 * v51];
      v52 = *v29;
      if ( a2 == *v29 )
        goto LABEL_37;
      v81 = 1;
      v74 = nullptr;
      if ( v52 != -4096 )
      {
        while ( 1 )
        {
          if ( !v74 && v52 == -8192 )
            v74 = v29;
          v51 = (v25 - 1) & (v81 + v51);
          v29 = &v38[3 * v51];
          v52 = *v29;
          if ( a2 == *v29 )
            goto LABEL_37;
          if ( v52 == -4096 )
          {
LABEL_107:
            if ( !v74 )
              goto LABEL_60;
            v52 = *v74;
            v29 = v74;
            goto LABEL_37;
          }
          ++v81;
        }
      }
      goto LABEL_60;
    }
LABEL_120:
    ++*(_DWORD *)(a1 + 664);
    BUG();
  }
  v54 = (unsigned int)v25 >> 3;
  if ( (int)v25 - *(_DWORD *)(a1 + 668) - v50 > (unsigned int)v54 )
  {
    v52 = *v29;
    goto LABEL_37;
  }
  LODWORD(v89) = *(_DWORD *)(a1 + 672);
  v55 = (((v27 >> 1) | v27) >> 2) | (v27 >> 1) | v27;
  v56 = (((v55 >> 4) | v55) >> 8) | (v55 >> 4) | v55;
  v57 = ((v56 >> 16) | v56) + 1;
  if ( (unsigned int)v57 < 0x40 )
    LODWORD(v57) = 64;
  *(_DWORD *)(a1 + 672) = v57;
  v58 = (_QWORD *)sub_22300B0(24LL * (unsigned int)v57, 8, v25, 64, v54, v24);
  v59 = ((unsigned int)a2 >> 4) ^ ((unsigned int)a2 >> 9);
  v60 = (unsigned int)v89;
  *(_QWORD *)(a1 + 656) = v58;
  if ( v26 )
  {
    *(_QWORD *)(a1 + 664) = 0;
    v61 = 3 * v60;
    v62 = *(unsigned int *)(a1 + 672);
    v89 = v61 * 8;
    v63 = &v26[v61];
    v64 = v62;
    for ( k = &v58[3 * v62]; k != v58; v58 += 3 )
      *v58 = -4096;
    v66 = v26;
    v86 = v64 - 1;
    do
    {
      v67 = *v66;
      if ( *v66 != -8192 && v67 != -4096 )
      {
        if ( !v64 )
        {
          *(_QWORD *)&dword_0 = *v66;
          BUG();
        }
        v68 = *(_QWORD *)(a1 + 656);
        v69 = v86 & (((unsigned int)v67 >> 9) ^ ((unsigned int)v67 >> 4));
        v70 = (__int64 *)(v68 + 24LL * v69);
        v71 = *v70;
        if ( *v70 != v67 && v71 != -4096 )
        {
          LODWORD(v91) = 1;
          v90 = nullptr;
          v92 = v68;
          while ( 1 )
          {
            if ( v71 == -8192 )
            {
              if ( v90 )
                v70 = v90;
              v90 = v70;
            }
            v69 = v86 & (v91 + v69);
            v70 = (__int64 *)(v92 + 24LL * v69);
            v71 = *v70;
            if ( v67 == *v70 )
              break;
            if ( v71 == -4096 )
            {
              if ( v90 )
                v70 = v90;
              break;
            }
            LODWORD(v91) = v91 + 1;
          }
        }
        *v70 = v67;
        *(__m128i *)(v70 + 1) = _mm_loadu_si128((const __m128i *)(v66 + 1));
        ++*(_DWORD *)(a1 + 664);
      }
      v66 += 3;
    }
    while ( v63 != v66 );
    operator delete(v26, v89, 8);
    v59 = ((unsigned int)a2 >> 4) ^ ((unsigned int)a2 >> 9);
    v58 = *(_QWORD **)(a1 + 656);
    v25 = *(unsigned int *)(a1 + 672);
    v50 = *(_DWORD *)(a1 + 664) + 1;
  }
  else
  {
    v78 = *(unsigned int *)(a1 + 672);
    *(_QWORD *)(a1 + 664) = 0;
    v25 = v78;
    v79 = &v58[3 * v78];
    if ( v58 != v79 )
    {
      v80 = v58;
      do
      {
        *v80 = -4096;
        v80 += 3;
      }
      while ( v79 != v80 );
    }
    v50 = 1;
  }
  if ( !(_DWORD)v25 )
    goto LABEL_120;
  v72 = (v25 - 1) & v59;
  v29 = &v58[3 * v72];
  v52 = *v29;
  if ( a2 == *v29 )
  {
LABEL_37:
    *(_DWORD *)(a1 + 664) = v50;
    if ( v52 != -4096 )
      --*(_DWORD *)(a1 + 668);
    goto LABEL_39;
  }
  v73 = 1;
  v74 = nullptr;
  if ( v52 != -4096 )
  {
    while ( 1 )
    {
      if ( !v74 && v52 == -8192 )
        v74 = v29;
      v72 = (v25 - 1) & (v73 + v72);
      v29 = &v58[3 * v72];
      v52 = *v29;
      if ( a2 == *v29 )
        goto LABEL_37;
      if ( v52 == -4096 )
        goto LABEL_107;
      ++v73;
    }
  }
LABEL_60:
  *(_DWORD *)(a1 + 664) = v50;
LABEL_39:
  v29[2] = n;
  *(__m128 *)v29 = _mm_loadh_ps((const double *)&v87);
  sub_E7C080(v93, v29, (__int64 *)(*(_QWORD *)(a1 + 656) + 24 * v25), v6, 1);
LABEL_15:
  result = v87;
  if ( ptr != v100 )
  {
    v87 = n;
    v83 = result;
    free(ptr);
    return v83;
  }
  return result;
}
