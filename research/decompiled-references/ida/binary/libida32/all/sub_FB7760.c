size_t __fastcall sub_FB7760(__int64 a1, __int64 a2, unsigned __int64 a3, size_t a4)
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
  __int64 *v39; // r11
  __int64 v40; // r10
  _QWORD *i; // rdx
  __int64 *v42; // rax
  int j; // r9d
  __int64 v44; // rdx
  __int64 v45; // r8
  unsigned int v46; // ecx
  __int64 v47; // rsi
  __int64 v48; // rdi
  int v49; // ecx
  unsigned int v50; // r8d
  __int64 v51; // rdi
  int v52; // r10d
  __int64 v53; // r8
  unsigned __int64 v54; // rax
  unsigned __int64 v55; // rax
  __int64 v56; // rax
  _QWORD *v57; // rax
  unsigned int v58; // r11d
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // rdx
  __int64 *v62; // r8
  int v63; // r10d
  _QWORD *k; // rdx
  __int64 *v65; // rax
  __int64 v66; // r9
  __int64 v67; // rdi
  unsigned int v68; // edx
  __int64 *v69; // rcx
  __int64 v70; // rsi
  unsigned int v71; // r11d
  int v72; // r9d
  __int64 *v73; // r14
  __int64 v74; // rcx
  _QWORD *v75; // rsi
  _QWORD *v76; // rcx
  __int64 v77; // rcx
  _QWORD *v78; // rsi
  _QWORD *v79; // rcx
  int v80; // r9d
  _QWORD *v81; // [rsp+8h] [rbp-2E0h]
  size_t v82; // [rsp+8h] [rbp-2E0h]
  unsigned int v83; // [rsp+8h] [rbp-2E0h]
  int v84; // [rsp+8h] [rbp-2E0h]
  size_t v85; // [rsp+10h] [rbp-2D8h] BYREF
  size_t n; // [rsp+18h] [rbp-2D0h]
  __int64 v87; // [rsp+20h] [rbp-2C8h]
  __int64 *v88; // [rsp+28h] [rbp-2C0h]
  __int64 v89; // [rsp+30h] [rbp-2B8h]
  __int64 v90; // [rsp+38h] [rbp-2B0h]
  __m128 v91[2]; // [rsp+40h] [rbp-2A8h] BYREF
  __int16 v92; // [rsp+60h] [rbp-288h]
  char *v93; // [rsp+70h] [rbp-278h]
  __m128i si128; // [rsp+78h] [rbp-270h]
  char v95; // [rsp+88h] [rbp-260h] BYREF
  void *ptr; // [rsp+190h] [rbp-158h] BYREF
  __m128i v97; // [rsp+198h] [rbp-150h]
  _BYTE v98[320]; // [rsp+1A8h] [rbp-140h] BYREF

  v6 = a1 + 656;
  v9 = *(unsigned int *)(a1 + 672);
  n = a4;
  v10 = *(_QWORD *)(a1 + 656);
  v85 = a3;
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
    sub_E58340((__m128 *)&ptr, (__int64 *)(v10 + 24 * v9), (__int64 *)(v10 + 24 * v9), v6, 1);
    v14 = ptr;
    goto LABEL_4;
  }
LABEL_3:
  sub_E58340((__m128 *)&ptr, v12, (__int64 *)(v10 + 24 * v9), v6, 1);
  v14 = ptr;
LABEL_4:
  v81 = v14;
  v15 = (__int64 *)(*(_QWORD *)(a1 + 656) + 24LL * *(unsigned int *)(a1 + 672));
  sub_E58340((__m128 *)&ptr, v15, v15, v6, 1);
  if ( ptr != v81 )
    return v81[1];
  v20 = *(__int64 **)(a1 + 8);
  v93 = &v95;
  ptr = v98;
  v21 = *v20;
  si128 = _mm_load_si128((const __m128i *)&xmmword_2384DA0);
  v22 = *(unsigned int (__fastcall **)(__int64 *, __m128 *, void **))(v21 + 88);
  v91[0].m128_u64[1] = a4;
  v92 = 261;
  v97 = si128;
  v91[0].m128_u64[0] = a3;
  if ( !v22(v20, v91, &ptr) )
  {
    v31 = v97.m128i_i64[0];
    v85 = 0;
    n = v97.m128i_i64[0];
    if ( v97.m128i_i64[0] )
    {
      v32 = *(char **)(a1 + 680);
      *(_QWORD *)(a1 + 760) += v97.m128i_i64[0];
      v33 = ptr;
      v85 = (size_t)v32;
      v34 = &v32[v31];
      if ( *(_QWORD *)(a1 + 688) >= (unsigned __int64)v34 && v32 )
      {
        *(_QWORD *)(a1 + 680) = v34;
        v35 = v32;
      }
      else
      {
        v85 = sub_962430(a1 + 680, n, n, 0, v23, v24);
        v35 = (void *)v85;
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
    sub_E58340(v91, v29, &v26[3 * v25], v6, 1);
    goto LABEL_15;
  }
  v52 = 1;
  v24 = 0;
  if ( v30 != -4096 )
  {
    while ( 1 )
    {
      if ( !v24 && v30 == -8192 )
        v24 = (__int64)v29;
      v28 = (unsigned int)v27 & ((_DWORD)v28 + v52);
      v29 = &v26[3 * v28];
      v30 = *v29;
      if ( a2 == *v29 )
        goto LABEL_14;
      if ( v30 == -4096 )
        break;
      ++v52;
    }
    if ( v24 )
      v29 = (__int64 *)v24;
  }
  v49 = *(_DWORD *)(a1 + 664) + 1;
  v23 = (unsigned int)(4 * v49);
  if ( (unsigned int)v23 >= 3 * (int)v25 )
  {
LABEL_22:
    v83 = *(_DWORD *)(a1 + 672);
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
    v38 = (_QWORD *)sub_220C370(24LL * (unsigned int)v37, 8, v25, 64, v23, v24);
    *(_QWORD *)(a1 + 656) = v38;
    if ( v26 )
    {
      *(_QWORD *)(a1 + 664) = 0;
      v39 = &v26[3 * v83];
      v40 = *(unsigned int *)(a1 + 672);
      for ( i = &v38[3 * v40]; i != v38; v38 += 3 )
        *v38 = -4096;
      v42 = v26;
      for ( j = v40 - 1; v39 != v42; v42 += 3 )
      {
        v44 = *v42;
        if ( *v42 != -4096 && v44 != -8192 )
        {
          if ( !(_DWORD)v40 )
          {
            *(_QWORD *)&dword_0 = *v42;
            BUG();
          }
          v45 = *(_QWORD *)(a1 + 656);
          v46 = j & (((unsigned int)v44 >> 9) ^ ((unsigned int)v44 >> 4));
          v47 = v45 + 24LL * v46;
          v48 = *(_QWORD *)v47;
          if ( *(_QWORD *)v47 != v44 && v48 != -4096 )
          {
            LODWORD(v88) = 1;
            v87 = 0;
            v89 = v45;
            while ( 1 )
            {
              if ( !v87 )
              {
                if ( v48 != -8192 )
                  v47 = v87;
                v87 = v47;
              }
              v46 = j & ((_DWORD)v88 + v46);
              v47 = v89 + 24LL * v46;
              v48 = *(_QWORD *)v47;
              if ( v44 == *(_QWORD *)v47 )
                break;
              if ( v48 == -4096 )
              {
                if ( v87 )
                  v47 = v87;
                break;
              }
              LODWORD(v88) = (_DWORD)v88 + 1;
            }
          }
          *(_QWORD *)v47 = v44;
          *(__m128i *)(v47 + 8) = _mm_loadu_si128((const __m128i *)(v42 + 1));
          ++*(_DWORD *)(a1 + 664);
        }
      }
      operator delete();
      v38 = *(_QWORD **)(a1 + 656);
      v25 = *(unsigned int *)(a1 + 672);
      v49 = *(_DWORD *)(a1 + 664) + 1;
    }
    else
    {
      v74 = *(unsigned int *)(a1 + 672);
      *(_QWORD *)(a1 + 664) = 0;
      v25 = v74;
      v75 = &v38[3 * v74];
      if ( v38 != v75 )
      {
        v76 = v38;
        do
        {
          *v76 = -4096;
          v76 += 3;
        }
        while ( v75 != v76 );
      }
      v49 = 1;
    }
    if ( (_DWORD)v25 )
    {
      v50 = (v25 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
      v29 = &v38[3 * v50];
      v51 = *v29;
      if ( a2 == *v29 )
        goto LABEL_37;
      v80 = 1;
      v73 = nullptr;
      if ( v51 != -4096 )
      {
        while ( 1 )
        {
          if ( !v73 && v51 == -8192 )
            v73 = v29;
          v50 = (v25 - 1) & (v80 + v50);
          v29 = &v38[3 * v50];
          v51 = *v29;
          if ( a2 == *v29 )
            goto LABEL_37;
          if ( v51 == -4096 )
          {
LABEL_107:
            if ( !v73 )
              goto LABEL_60;
            v51 = *v73;
            v29 = v73;
            goto LABEL_37;
          }
          ++v80;
        }
      }
      goto LABEL_60;
    }
LABEL_120:
    ++*(_DWORD *)(a1 + 664);
    BUG();
  }
  v53 = (unsigned int)v25 >> 3;
  if ( (int)v25 - *(_DWORD *)(a1 + 668) - v49 > (unsigned int)v53 )
  {
    v51 = *v29;
    goto LABEL_37;
  }
  LODWORD(v87) = *(_DWORD *)(a1 + 672);
  v54 = (((v27 >> 1) | v27) >> 2) | (v27 >> 1) | v27;
  v55 = (((v54 >> 4) | v54) >> 8) | (v54 >> 4) | v54;
  v56 = ((v55 >> 16) | v55) + 1;
  if ( (unsigned int)v56 < 0x40 )
    LODWORD(v56) = 64;
  *(_DWORD *)(a1 + 672) = v56;
  v57 = (_QWORD *)sub_220C370(24LL * (unsigned int)v56, 8, v25, 64, v53, v24);
  v58 = ((unsigned int)a2 >> 4) ^ ((unsigned int)a2 >> 9);
  v59 = (unsigned int)v87;
  *(_QWORD *)(a1 + 656) = v57;
  if ( v26 )
  {
    *(_QWORD *)(a1 + 664) = 0;
    v60 = 3 * v59;
    v61 = *(unsigned int *)(a1 + 672);
    v87 = v60 * 8;
    v62 = &v26[v60];
    v63 = v61;
    for ( k = &v57[3 * v61]; k != v57; v57 += 3 )
      *v57 = -4096;
    v65 = v26;
    v84 = v63 - 1;
    do
    {
      v66 = *v65;
      if ( *v65 != -8192 && v66 != -4096 )
      {
        if ( !v63 )
        {
          *(_QWORD *)&dword_0 = *v65;
          BUG();
        }
        v67 = *(_QWORD *)(a1 + 656);
        v68 = v84 & (((unsigned int)v66 >> 9) ^ ((unsigned int)v66 >> 4));
        v69 = (__int64 *)(v67 + 24LL * v68);
        v70 = *v69;
        if ( *v69 != v66 && v70 != -4096 )
        {
          LODWORD(v89) = 1;
          v88 = nullptr;
          v90 = v67;
          while ( 1 )
          {
            if ( v70 == -8192 )
            {
              if ( v88 )
                v69 = v88;
              v88 = v69;
            }
            v68 = v84 & (v89 + v68);
            v69 = (__int64 *)(v90 + 24LL * v68);
            v70 = *v69;
            if ( v66 == *v69 )
              break;
            if ( v70 == -4096 )
            {
              if ( v88 )
                v69 = v88;
              break;
            }
            LODWORD(v89) = v89 + 1;
          }
        }
        *v69 = v66;
        *(__m128i *)(v69 + 1) = _mm_loadu_si128((const __m128i *)(v65 + 1));
        ++*(_DWORD *)(a1 + 664);
      }
      v65 += 3;
    }
    while ( v62 != v65 );
    operator delete();
    v58 = ((unsigned int)a2 >> 4) ^ ((unsigned int)a2 >> 9);
    v57 = *(_QWORD **)(a1 + 656);
    v25 = *(unsigned int *)(a1 + 672);
    v49 = *(_DWORD *)(a1 + 664) + 1;
  }
  else
  {
    v77 = *(unsigned int *)(a1 + 672);
    *(_QWORD *)(a1 + 664) = 0;
    v25 = v77;
    v78 = &v57[3 * v77];
    if ( v57 != v78 )
    {
      v79 = v57;
      do
      {
        *v79 = -4096;
        v79 += 3;
      }
      while ( v78 != v79 );
    }
    v49 = 1;
  }
  if ( !(_DWORD)v25 )
    goto LABEL_120;
  v71 = (v25 - 1) & v58;
  v29 = &v57[3 * v71];
  v51 = *v29;
  if ( a2 == *v29 )
  {
LABEL_37:
    *(_DWORD *)(a1 + 664) = v49;
    if ( v51 != -4096 )
      --*(_DWORD *)(a1 + 668);
    goto LABEL_39;
  }
  v72 = 1;
  v73 = nullptr;
  if ( v51 != -4096 )
  {
    while ( 1 )
    {
      if ( !v73 && v51 == -8192 )
        v73 = v29;
      v71 = (v25 - 1) & (v72 + v71);
      v29 = &v57[3 * v71];
      v51 = *v29;
      if ( a2 == *v29 )
        goto LABEL_37;
      if ( v51 == -4096 )
        goto LABEL_107;
      ++v72;
    }
  }
LABEL_60:
  *(_DWORD *)(a1 + 664) = v49;
LABEL_39:
  v29[2] = n;
  *(__m128 *)v29 = _mm_loadh_ps((const double *)&v85);
  sub_E58340(v91, v29, (__int64 *)(*(_QWORD *)(a1 + 656) + 24 * v25), v6, 1);
LABEL_15:
  result = v85;
  if ( ptr != v98 )
  {
    v85 = n;
    v82 = result;
    free(ptr);
    return v82;
  }
  return result;
}

