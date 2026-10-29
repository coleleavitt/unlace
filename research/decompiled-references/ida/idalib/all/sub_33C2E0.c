void sub_33C2E0()
{
  size_t v0; // r12
  size_t v1; // r13
  __int64 v2; // rbx
  const char *v3; // rdx
  __int64 v4; // r13
  __int64 v5; // r8
  __int64 v6; // r15
  size_t v7; // rbx
  void *v8; // rbp
  __int64 v9; // r12
  size_t v10; // r14
  size_t v11; // rdx
  signed __int64 v12; // rax
  __int64 v13; // r14
  size_t v14; // rcx
  unsigned __int64 v15; // r9
  size_t v16; // r15
  size_t v17; // rdx
  signed __int64 v18; // rax
  __int64 v19; // rax
  char *v20; // rsi
  size_t v21; // rdx
  __int64 v22; // r15
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r15
  __int64 v26; // r8
  unsigned int v27; // r15d
  int v28; // r13d
  __int64 v29; // r14
  const __m128i *v30; // r15
  unsigned __int64 v31; // rsi
  __int64 v32; // rdi
  const __m128i *v33; // rax
  __int32 v34; // r8d
  __int32 *v35; // rbx
  _BYTE *v36; // r14
  _BYTE *v37; // rdi
  __int64 v38; // rax
  size_t v39; // r13
  size_t v40; // rax
  _BYTE *v41; // rdi
  __int64 v42; // rax
  _QWORD *v43; // rdi
  size_t v44; // rdx
  size_t v45; // r15
  __int64 v46; // rax
  _BYTE *v47; // rdi
  void *v48; // rdi
  void *v49; // rdi
  size_t v50; // rcx
  size_t v51; // r9
  size_t v52; // rdx
  unsigned int v53; // eax
  int v54; // r10d
  unsigned __int64 v55; // rdx
  int v56; // eax
  _DWORD *v57; // rdi
  __int64 v58; // rcx
  __int64 v59; // rcx
  unsigned __int64 v60; // rax
  __int64 v61; // rax
  _DWORD *v62; // rax
  __int64 v63; // rdx
  const __m128i *v64; // rcx
  _DWORD *v65; // rdx
  const __m128i *v66; // r14
  __int64 v67; // rbp
  const __m128i *v68; // r12
  __int32 v69; // esi
  int v70; // eax
  int v71; // eax
  __m128i *v72; // r10
  int v73; // r11d
  unsigned int i; // r8d
  __m128i *v75; // rdi
  __int32 v76; // edx
  const __m128i *v77; // rbx
  const __m128i *v78; // rax
  __m128i *v79; // rdi
  __m128i *v80; // rdi
  unsigned __int64 v81; // rax
  __int64 v82; // rax
  _DWORD *v83; // rax
  int v84; // ecx
  __int64 v85; // rdx
  __int64 v86; // r14
  _DWORD *v87; // rdx
  const __m128i *v88; // r14
  const __m128i *k; // rbp
  __int32 v90; // eax
  int v91; // ecx
  int v92; // ecx
  int v93; // edx
  __m128i *v94; // r11
  unsigned int m; // esi
  __m128i *v96; // rdi
  __int32 v97; // r8d
  const __m128i *v98; // r12
  const __m128i *v99; // rax
  __m128i *v100; // rdi
  __m128i *v101; // rdi
  int v102; // eax
  int v103; // eax
  int v104; // r9d
  unsigned __int64 v105; // r8
  unsigned int j; // ecx
  int v107; // esi
  int v108; // eax
  int v109; // eax
  int v110; // r9d
  unsigned int ii; // ecx
  int v112; // esi
  unsigned int v113; // ecx
  __int64 v114; // rdx
  _DWORD *v115; // rdx
  __int64 v116; // rdx
  _DWORD *v117; // rdx
  unsigned int v118; // r8d
  unsigned int v119; // esi
  unsigned int v120; // ecx
  __int64 v121; // [rsp+0h] [rbp-118h]
  size_t v122; // [rsp+0h] [rbp-118h]
  __int64 v123; // [rsp+0h] [rbp-118h]
  __int64 v124; // [rsp+0h] [rbp-118h]
  __int64 v125; // [rsp+0h] [rbp-118h]
  __int64 v126; // [rsp+0h] [rbp-118h]
  __int64 v127; // [rsp+0h] [rbp-118h]
  void *v128; // [rsp+8h] [rbp-110h]
  size_t v129; // [rsp+8h] [rbp-110h]
  size_t v130; // [rsp+10h] [rbp-108h]
  void *s2; // [rsp+20h] [rbp-F8h] BYREF
  size_t n; // [rsp+28h] [rbp-F0h]
  _BYTE v133[16]; // [rsp+30h] [rbp-E8h] BYREF
  void *src; // [rsp+40h] [rbp-D8h] BYREF
  size_t v135; // [rsp+48h] [rbp-D0h]
  _QWORD v136[3]; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v137; // [rsp+68h] [rbp-B0h]
  char v138; // [rsp+70h] [rbp-A8h]
  void *v139; // [rsp+78h] [rbp-A0h]
  size_t v140; // [rsp+80h] [rbp-98h]
  _QWORD v141[2]; // [rsp+88h] [rbp-90h] BYREF
  void *ptr[2]; // [rsp+98h] [rbp-80h] BYREF
  _BYTE v143[112]; // [rsp+A8h] [rbp-70h] BYREF

  v0 = j__strlen("Controls transformations in div-rem-pairs pass");
  v1 = j__strlen("div-rem-pairs-transform");
  v2 = sub_221BAF0();
  src = v136;
  sub_21E9B10(&src, "Controls transformations in div-rem-pairs pass", &aControlsTransf[v0]);
  v3 = &aDivRemPairsTra[v1];
  s2 = v133;
  v4 = v2 + 32;
  sub_21E9B10(&s2, "div-rem-pairs-transform", v3);
  v6 = *(_QWORD *)(v2 + 40);
  if ( !v6 )
  {
    v13 = v2 + 32;
    goto LABEL_18;
  }
  v121 = v2;
  v7 = n;
  v8 = s2;
  v9 = v4;
  do
  {
    while ( 1 )
    {
      v10 = *(_QWORD *)(v6 + 40);
      v11 = v7;
      if ( v10 <= v7 )
        v11 = *(_QWORD *)(v6 + 40);
      if ( !v11 || (LODWORD(v12) = memcmp(*(const void **)(v6 + 32), v8, v11), !(_DWORD)v12) )
      {
        v12 = v10 - v7;
        if ( (__int64)(v10 - v7) > 0x7FFFFFFF )
          goto LABEL_3;
        if ( v12 < (__int64)0xFFFFFFFF80000000LL )
          break;
      }
      if ( (int)v12 < 0 )
        break;
LABEL_3:
      v9 = v6;
      v6 = *(_QWORD *)(v6 + 16);
      if ( !v6 )
        goto LABEL_10;
    }
    v6 = *(_QWORD *)(v6 + 24);
  }
  while ( v6 );
LABEL_10:
  v13 = v9;
  v14 = v7;
  v15 = (unsigned __int64)v8;
  v2 = v121;
  if ( v4 == v9 )
    goto LABEL_18;
  v16 = *(_QWORD *)(v9 + 40);
  v17 = v16;
  if ( v14 <= v16 )
    v17 = v14;
  if ( v17 && (v122 = v14, LODWORD(v18) = memcmp(v8, *(const void **)(v9 + 32), v17), v14 = v122, (_DWORD)v18) )
  {
LABEL_17:
    if ( (int)v18 < 0 )
      goto LABEL_18;
  }
  else
  {
    v18 = v14 - v16;
    if ( (__int64)(v14 - v16) <= 0x7FFFFFFF )
    {
      if ( v18 >= (__int64)0xFFFFFFFF80000000LL )
        goto LABEL_17;
LABEL_18:
      v123 = v13;
      v19 = operator new(0x48u);
      v20 = (char *)s2;
      v21 = n;
      v22 = v19 + 32;
      v13 = v19;
      *(_QWORD *)(v19 + 32) = v19 + 48;
      v128 = (void *)(v19 + 48);
      sub_21E9A50(v19 + 32, v20, &v20[v21]);
      *(_DWORD *)(v13 + 64) = 0;
      v23 = sub_200EA40(v2 + 24, v123, v22);
      v25 = v23;
      v26 = v24;
      if ( v24 )
      {
        LOBYTE(v27) = v4 == v24 || v23 != 0;
        if ( (_BYTE)v27 )
          goto LABEL_20;
        v50 = *(_QWORD *)(v13 + 40);
        v52 = *(_QWORD *)(v24 + 40);
        v51 = v52;
        if ( v50 <= v52 )
          v52 = *(_QWORD *)(v13 + 40);
        if ( v52
          && (v130 = v51,
              v129 = *(_QWORD *)(v13 + 40),
              v125 = v26,
              v53 = memcmp(*(const void **)(v13 + 32), *(const void **)(v26 + 32), v52),
              v26 = v125,
              v50 = v129,
              v51 = v130,
              v53) )
        {
LABEL_78:
          v27 = v53 >> 31;
        }
        else
        {
          v59 = v50 - v51;
          if ( v59 <= 0x7FFFFFFF )
          {
            if ( v59 >= (__int64)0xFFFFFFFF80000000LL )
            {
              v53 = v59;
              goto LABEL_78;
            }
            LOBYTE(v27) = 1;
          }
        }
LABEL_20:
        std::_Rb_tree_insert_and_rebalance((unsigned __int8)v27, v13, v26, v4);
        ++*(_QWORD *)(v2 + 64);
      }
      else
      {
        v48 = *(void **)(v13 + 32);
        if ( v128 != v48 )
          operator delete(v48);
        v49 = (void *)v13;
        v13 = v25;
        operator delete(v49);
      }
    }
  }
  v28 = *(_DWORD *)(v13 + 64);
  if ( !v28 )
  {
    v43 = *(_QWORD **)(v2 + 80);
    *(_DWORD *)(v13 + 64) = (((__int64)v43 - *(_QWORD *)(v2 + 72)) >> 5) + 1;
    if ( v43 == *(_QWORD **)(v2 + 88) )
    {
      sub_10BCB90(v2 + 72, v43, &s2, v14, v5, v15);
    }
    else
    {
      *v43 = v43 + 2;
      sub_21E9A50(v43, s2, (char *)s2 + n);
      *(_QWORD *)(v2 + 80) += 32LL;
    }
    v28 = *(_DWORD *)(v13 + 64);
  }
  v29 = *(unsigned int *)(v2 + 16);
  v30 = *(const __m128i **)v2;
  if ( !(_DWORD)v29 )
    goto LABEL_101;
  v14 = (unsigned int)(37 * v28);
  v31 = (unsigned int)(v29 - 1);
  LODWORD(v32) = v31 & (37 * v28);
  v33 = &v30[8 * (unsigned __int64)(unsigned int)v32];
  v34 = v33->m128i_i32[0];
  if ( v28 == v33->m128i_i32[0] )
  {
LABEL_24:
    v35 = &v33->m128i_i32[2];
    goto LABEL_25;
  }
  v54 = 1;
  v55 = 0;
  if ( v34 == -1 )
    goto LABEL_80;
  while ( 1 )
  {
    if ( !v55 && v34 == -2 )
      v55 = (unsigned __int64)v33;
    v15 = (unsigned int)(v54 + 1);
    v32 = (unsigned int)v31 & ((_DWORD)v32 + v54);
    v33 = &v30[8 * v32];
    v34 = v33->m128i_i32[0];
    if ( v28 == v33->m128i_i32[0] )
      goto LABEL_24;
    if ( v34 == -1 )
      break;
    ++v54;
  }
  if ( !v55 )
LABEL_80:
    v55 = (unsigned __int64)v33;
  v56 = *(_DWORD *)(v2 + 8) + 1;
  v5 = (unsigned int)(4 * v56);
  if ( (unsigned int)v5 >= 3 * (int)v29 )
  {
LABEL_101:
    v60 = (((((((unsigned int)(2 * v29 - 1) | ((unsigned __int64)(unsigned int)(2 * v29 - 1) >> 1)) >> 2)
            | (unsigned int)(2 * v29 - 1)
            | ((unsigned __int64)(unsigned int)(2 * v29 - 1) >> 1)) >> 4)
          | (((unsigned int)(2 * v29 - 1) | ((unsigned __int64)(unsigned int)(2 * v29 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * v29 - 1)
          | ((unsigned __int64)(unsigned int)(2 * v29 - 1) >> 1)) >> 8)
        | (((((unsigned int)(2 * v29 - 1) | ((unsigned __int64)(unsigned int)(2 * v29 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * v29 - 1)
          | ((unsigned __int64)(unsigned int)(2 * v29 - 1) >> 1)) >> 4)
        | (((unsigned int)(2 * v29 - 1) | ((unsigned __int64)(unsigned int)(2 * v29 - 1) >> 1)) >> 2)
        | (unsigned int)(2 * v29 - 1)
        | ((unsigned __int64)(unsigned int)(2 * v29 - 1) >> 1);
    v61 = ((v60 >> 16) | v60) + 1;
    if ( (unsigned int)v61 < 0x40 )
      LODWORD(v61) = 64;
    *(_DWORD *)(v2 + 16) = v61;
    v62 = (_DWORD *)sub_22300B0((unsigned __int64)(unsigned int)v61 << 7, 8, 64, v14, v5, v15);
    *(_QWORD *)v2 = v62;
    if ( v30 )
    {
      v63 = *(unsigned int *)(v2 + 16);
      *(_QWORD *)(v2 + 8) = 0;
      v126 = v29 << 7;
      v64 = &v30[8 * v29];
      v65 = &v62[32 * v63];
      while ( v65 != v62 )
      {
        *v62 = -1;
        v62 += 32;
      }
      v66 = v30;
      v67 = v2;
      v68 = v64;
      while ( v68 != v66 )
      {
        v69 = v66->m128i_i32[0];
        if ( (unsigned int)(v66->m128i_i32[0] + 2) > 1 )
        {
          v70 = *(_DWORD *)(v67 + 16);
          if ( !v70 )
          {
LABEL_192:
            dword_0 = 0;
            BUG();
          }
          v71 = v70 - 1;
          v72 = nullptr;
          v73 = 1;
          for ( i = v71 & (37 * v69); ; i = v71 & v118 )
          {
            v75 = (__m128i *)(*(_QWORD *)v67 + ((unsigned __int64)i << 7));
            v76 = v75->m128i_i32[0];
            if ( v69 == v75->m128i_i32[0] )
              break;
            if ( v76 == -1 )
            {
              if ( v72 )
                v75 = v72;
              break;
            }
            if ( v72 || v76 != -2 )
              v75 = v72;
            v118 = v73 + i;
            v72 = v75;
            ++v73;
          }
          v75->m128i_i32[0] = v69;
          v77 = v66 + 3;
          v75->m128i_i64[1] = v66->m128i_i64[1];
          v75[1].m128i_i64[0] = v66[1].m128i_i64[0];
          v75[1].m128i_i8[8] = v66[1].m128i_i8[8];
          v75[2].m128i_i64[0] = (__int64)v75[3].m128i_i64;
          v78 = (const __m128i *)v66[2].m128i_i64[0];
          if ( v78 == &v66[3] )
          {
            v75[3] = _mm_loadu_si128(v66 + 3);
          }
          else
          {
            v75[2].m128i_i64[0] = (__int64)v78;
            v75[3].m128i_i64[0] = v66[3].m128i_i64[0];
          }
          v75[2].m128i_i64[1] = v66[2].m128i_i64[1];
          v66[2].m128i_i64[0] = (__int64)v77;
          v66[2].m128i_i64[1] = 0;
          v66[3].m128i_i8[0] = 0;
          v75[4].m128i_i64[0] = (__int64)v75[5].m128i_i64;
          v75[4].m128i_i64[1] = 0x300000000LL;
          if ( v66[4].m128i_i32[2] )
            sub_200E7A0(&v75[4], &v66[4]);
          v79 = (__m128i *)v66[4].m128i_i64[0];
          ++*(_DWORD *)(v67 + 8);
          if ( v79 != &v66[5] )
            free(v79);
          v80 = (__m128i *)v66[2].m128i_i64[0];
          if ( v80 != v77 )
            operator delete(v80);
        }
        v66 += 8;
      }
      v2 = v67;
      operator delete(v30, v126, 8);
    }
    else
    {
      v114 = *(unsigned int *)(v2 + 16);
      *(_QWORD *)(v2 + 8) = 0;
      v115 = &v62[32 * v114];
      while ( v115 != v62 )
      {
        *v62 = -1;
        v62 += 32;
      }
    }
    v102 = *(_DWORD *)(v2 + 16);
    if ( v102 )
    {
      v103 = v102 - 1;
      v104 = 1;
      v105 = 0;
      for ( j = v103 & (37 * v28); ; j = v103 & v120 )
      {
        v55 = *(_QWORD *)v2 + ((unsigned __int64)j << 7);
        v107 = *(_DWORD *)v55;
        if ( v28 == *(_DWORD *)v55 )
          break;
        if ( v107 == -1 )
        {
LABEL_148:
          if ( v105 )
            v55 = v105;
          goto LABEL_83;
        }
        if ( v105 || v107 != -2 )
          v55 = v105;
        v120 = v104 + j;
        v105 = v55;
        ++v104;
      }
      goto LABEL_83;
    }
    goto LABEL_193;
  }
  if ( (int)v29 - *(_DWORD *)(v2 + 12) - v56 <= (unsigned int)v29 >> 3 )
  {
    v81 = (((((v31 >> 1) | v31 | (((v31 >> 1) | v31) >> 2)) >> 4) | (v31 >> 1) | v31 | (((v31 >> 1) | v31) >> 2)) >> 8)
        | (((v31 >> 1) | v31 | (((v31 >> 1) | v31) >> 2)) >> 4)
        | (v31 >> 1)
        | v31
        | (((v31 >> 1) | v31) >> 2);
    v82 = ((v81 >> 16) | v81) + 1;
    if ( (unsigned int)v82 < 0x40 )
      LODWORD(v82) = 64;
    *(_DWORD *)(v2 + 16) = v82;
    v83 = (_DWORD *)sub_22300B0((unsigned __int64)(unsigned int)v82 << 7, 8, 64, v14, v5, v15);
    v84 = 37 * v28;
    *(_QWORD *)v2 = v83;
    if ( v30 )
    {
      v85 = *(unsigned int *)(v2 + 16);
      v86 = v29 << 7;
      *(_QWORD *)(v2 + 8) = 0;
      v127 = v86;
      v87 = &v83[32 * v85];
      while ( v87 != v83 )
      {
        *v83 = -1;
        v83 += 32;
      }
      v88 = (const __m128i *)((char *)v30 + v86);
      for ( k = v30; v88 != k; k += 8 )
      {
        v90 = k->m128i_i32[0];
        if ( (unsigned int)(k->m128i_i32[0] + 2) > 1 )
        {
          v91 = *(_DWORD *)(v2 + 16);
          if ( !v91 )
            goto LABEL_192;
          v92 = v91 - 1;
          v93 = 1;
          v94 = nullptr;
          for ( m = v92 & (37 * v90); ; m = v92 & v119 )
          {
            v96 = (__m128i *)(*(_QWORD *)v2 + ((unsigned __int64)m << 7));
            v97 = v96->m128i_i32[0];
            if ( v90 == v96->m128i_i32[0] )
              break;
            if ( v97 == -1 )
            {
              if ( v94 )
                v96 = v94;
              break;
            }
            if ( v94 || v97 != -2 )
              v96 = v94;
            v119 = v93 + m;
            v94 = v96;
            ++v93;
          }
          v96->m128i_i32[0] = v90;
          v98 = k + 3;
          v96->m128i_i64[1] = k->m128i_i64[1];
          v96[1].m128i_i64[0] = k[1].m128i_i64[0];
          v96[1].m128i_i8[8] = k[1].m128i_i8[8];
          v96[2].m128i_i64[0] = (__int64)v96[3].m128i_i64;
          v99 = (const __m128i *)k[2].m128i_i64[0];
          if ( v99 == &k[3] )
          {
            v96[3] = _mm_loadu_si128(k + 3);
          }
          else
          {
            v96[2].m128i_i64[0] = (__int64)v99;
            v96[3].m128i_i64[0] = k[3].m128i_i64[0];
          }
          v96[2].m128i_i64[1] = k[2].m128i_i64[1];
          k[2].m128i_i64[0] = (__int64)v98;
          k[2].m128i_i64[1] = 0;
          k[3].m128i_i8[0] = 0;
          v96[4].m128i_i64[0] = (__int64)v96[5].m128i_i64;
          v96[4].m128i_i64[1] = 0x300000000LL;
          if ( k[4].m128i_i32[2] )
            sub_200E7A0(&v96[4], &k[4]);
          v100 = (__m128i *)k[4].m128i_i64[0];
          ++*(_DWORD *)(v2 + 8);
          if ( v100 != &k[5] )
            free(v100);
          v101 = (__m128i *)k[2].m128i_i64[0];
          if ( v101 != v98 )
            operator delete(v101);
        }
      }
      operator delete(v30, v127, 8);
      v84 = 37 * v28;
    }
    else
    {
      v116 = *(unsigned int *)(v2 + 16);
      *(_QWORD *)(v2 + 8) = 0;
      v117 = &v83[32 * v116];
      while ( v117 != v83 )
      {
        *v83 = -1;
        v83 += 32;
      }
    }
    v108 = *(_DWORD *)(v2 + 16);
    if ( v108 )
    {
      v109 = v108 - 1;
      v110 = 1;
      v105 = 0;
      for ( ii = v109 & v84; ; ii = v109 & v113 )
      {
        v55 = *(_QWORD *)v2 + ((unsigned __int64)ii << 7);
        v112 = *(_DWORD *)v55;
        if ( v28 == *(_DWORD *)v55 )
          break;
        if ( v112 == -1 )
          goto LABEL_148;
        if ( v112 != -2 || v105 )
          v55 = v105;
        v113 = v110 + ii;
        v105 = v55;
        ++v110;
      }
      goto LABEL_83;
    }
LABEL_193:
    ++*(_DWORD *)(v2 + 8);
    BUG();
  }
LABEL_83:
  ++*(_DWORD *)(v2 + 8);
  if ( *(_DWORD *)v55 != -1 )
    --*(_DWORD *)(v2 + 12);
  v57 = (_DWORD *)(v55 + 8);
  v58 = 30;
  *(_DWORD *)v55 = v28;
  while ( v58 )
  {
    *v57++ = 0;
    --v58;
  }
  v35 = (__int32 *)(v55 + 8);
  *(_QWORD *)(v55 + 32) = v55 + 48;
  *(_QWORD *)(v55 + 64) = v55 + 80;
  *(_QWORD *)(v55 + 72) = 0x300000000LL;
LABEL_25:
  v138 = 0;
  v140 = 0;
  v139 = v141;
  v36 = v35 + 10;
  ptr[0] = v143;
  LOBYTE(v141[0]) = 0;
  ptr[1] = (void *)0x300000000LL;
  v37 = *((_BYTE **)v35 + 3);
  v137 = 0;
  v136[2] = 0;
  *(_QWORD *)v35 = 0;
  *((_QWORD *)v35 + 1) = v137;
  *((_BYTE *)v35 + 16) = v138;
  if ( v139 == v141 )
  {
    v44 = v140;
    if ( v140 )
    {
      if ( v140 == 1 )
        *v37 = v141[0];
      else
        memcpy(v37, v139, v140);
      v37 = *((_BYTE **)v35 + 3);
      v44 = v140;
    }
    *((_QWORD *)v35 + 4) = v44;
    v37[v44] = 0;
  }
  else
  {
    if ( v37 == v36 )
    {
      *((_QWORD *)v35 + 3) = v139;
      *((_QWORD *)v35 + 4) = v140;
      *((_QWORD *)v35 + 5) = v141[0];
    }
    else
    {
      *((_QWORD *)v35 + 3) = v139;
      v38 = *((_QWORD *)v35 + 5);
      *((_QWORD *)v35 + 4) = v140;
      *((_QWORD *)v35 + 5) = v141[0];
      if ( v37 )
      {
        v139 = v37;
        v141[0] = v38;
        goto LABEL_29;
      }
    }
    v139 = v141;
  }
LABEL_29:
  v140 = 0;
  *(_BYTE *)v139 = 0;
  sub_200E7A0(v35 + 14, ptr);
  if ( ptr[0] != v143 )
    free(ptr[0]);
  if ( v139 != v141 )
    operator delete(v139);
  if ( v35 + 6 != (__int32 *)&src )
  {
    v39 = v135;
    if ( *((_BYTE **)v35 + 3) == v36 )
      v40 = 15;
    else
      v40 = *((_QWORD *)v35 + 5);
    if ( v135 > v40 )
    {
      if ( (v135 & 0x8000000000000000LL) != 0LL )
        std::__throw_length_error("basic_string::_M_create");
      v45 = 2 * v40;
      if ( v135 >= 2 * v40 )
      {
        v45 = v135;
      }
      else if ( (v40 & 0x4000000000000000LL) != 0 )
      {
        v45 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v46 = operator new(v45 + 1);
      v47 = *((_BYTE **)v35 + 3);
      if ( v47 != v36 )
      {
        v124 = v46;
        operator delete(v47);
        v46 = v124;
      }
      *((_QWORD *)v35 + 3) = v46;
      *((_QWORD *)v35 + 5) = v45;
    }
    if ( v39 )
    {
      v41 = *((_BYTE **)v35 + 3);
      if ( v39 == 1 )
        *v41 = *(_BYTE *)src;
      else
        memcpy(v41, src, v39);
    }
    v42 = *((_QWORD *)v35 + 3);
    *((_QWORD *)v35 + 4) = v39;
    *(_BYTE *)(v42 + v39) = 0;
  }
  if ( s2 != v133 )
    operator delete(s2);
  if ( src != v136 )
    operator delete(src);
}
