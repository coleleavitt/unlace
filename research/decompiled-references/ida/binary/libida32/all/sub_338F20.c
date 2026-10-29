void sub_338F20()
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
  int v27; // r13d
  __int64 v28; // r14
  const __m128i *v29; // r15
  unsigned __int64 v30; // rsi
  __int64 v31; // rdi
  const __m128i *v32; // rax
  __int32 v33; // r8d
  __int32 *v34; // rbx
  _BYTE *v35; // r14
  _BYTE *v36; // rdi
  __int64 v37; // rax
  size_t v38; // r13
  size_t v39; // rax
  _BYTE *v40; // rdi
  __int64 v41; // rax
  _QWORD *v42; // rdi
  size_t v43; // rdx
  size_t v44; // r15
  __int64 v45; // rax
  _BYTE *v46; // rdi
  void *v47; // rdi
  void *v48; // rdi
  size_t v49; // rdx
  int v50; // r10d
  unsigned __int64 v51; // rdx
  int v52; // eax
  _DWORD *v53; // rdi
  __int64 v54; // rcx
  unsigned __int64 v55; // rax
  __int64 v56; // rax
  _DWORD *v57; // rax
  __int64 v58; // rdx
  const __m128i *v59; // rcx
  _DWORD *v60; // rdx
  const __m128i *v61; // r14
  __int64 v62; // rbp
  const __m128i *v63; // r12
  __int32 v64; // esi
  int v65; // eax
  int v66; // eax
  __m128i *v67; // r10
  int v68; // r11d
  unsigned int i; // r8d
  __m128i *v70; // rdi
  __int32 v71; // edx
  const __m128i *v72; // rbx
  const __m128i *v73; // rax
  __m128i *v74; // rdi
  __m128i *v75; // rdi
  unsigned __int64 v76; // rax
  __int64 v77; // rax
  _DWORD *v78; // rax
  int v79; // ecx
  __int64 v80; // rdx
  __int64 v81; // r14
  _DWORD *v82; // rdx
  const __m128i *v83; // r14
  const __m128i *k; // rbp
  __int32 v85; // eax
  int v86; // ecx
  int v87; // ecx
  int v88; // edx
  __m128i *v89; // r11
  unsigned int m; // esi
  __m128i *v91; // rdi
  __int32 v92; // r8d
  const __m128i *v93; // r12
  const __m128i *v94; // rax
  __m128i *v95; // rdi
  __m128i *v96; // rdi
  int v97; // eax
  int v98; // eax
  int v99; // r9d
  unsigned __int64 v100; // r8
  unsigned int j; // ecx
  int v102; // esi
  int v103; // eax
  int v104; // eax
  int v105; // r9d
  unsigned int ii; // ecx
  int v107; // esi
  unsigned int v108; // ecx
  __int64 v109; // rdx
  _DWORD *v110; // rdx
  __int64 v111; // rdx
  _DWORD *v112; // rdx
  unsigned int v113; // r8d
  unsigned int v114; // esi
  unsigned int v115; // ecx
  __int64 v116; // [rsp+0h] [rbp-118h]
  size_t v117; // [rsp+0h] [rbp-118h]
  __int64 v118; // [rsp+0h] [rbp-118h]
  __int64 v119; // [rsp+0h] [rbp-118h]
  void *v120; // [rsp+8h] [rbp-110h]
  void *s2; // [rsp+20h] [rbp-F8h] BYREF
  size_t n; // [rsp+28h] [rbp-F0h]
  _BYTE v123[16]; // [rsp+30h] [rbp-E8h] BYREF
  void *src; // [rsp+40h] [rbp-D8h] BYREF
  size_t v125; // [rsp+48h] [rbp-D0h]
  _QWORD v126[3]; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v127; // [rsp+68h] [rbp-B0h]
  char v128; // [rsp+70h] [rbp-A8h]
  void *v129; // [rsp+78h] [rbp-A0h]
  size_t v130; // [rsp+80h] [rbp-98h]
  _QWORD v131[2]; // [rsp+88h] [rbp-90h] BYREF
  void *ptr[2]; // [rsp+98h] [rbp-80h] BYREF
  _BYTE v133[112]; // [rsp+A8h] [rbp-70h] BYREF

  v0 = j__strlen("Controls transformations in div-rem-pairs pass");
  v1 = j__strlen("div-rem-pairs-transform");
  v2 = sub_21F7DB0();
  src = v126;
  sub_21C5DD0(&src, "Controls transformations in div-rem-pairs pass", &aControlsTransf[v0]);
  v3 = &aDivRemPairsTra[v1];
  s2 = v123;
  v4 = v2 + 32;
  sub_21C5DD0(&s2, "div-rem-pairs-transform", v3);
  v6 = *(_QWORD *)(v2 + 40);
  if ( !v6 )
  {
    v13 = v2 + 32;
    goto LABEL_18;
  }
  v116 = v2;
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
  v2 = v116;
  if ( v4 == v9 )
    goto LABEL_18;
  v16 = *(_QWORD *)(v9 + 40);
  v17 = v16;
  if ( v14 <= v16 )
    v17 = v14;
  if ( v17 && (v117 = v14, LODWORD(v18) = memcmp(v8, *(const void **)(v9 + 32), v17), v14 = v117, (_DWORD)v18) )
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
      v118 = v13;
      v19 = operator new(0x48u);
      v20 = (char *)s2;
      v21 = n;
      v22 = v19 + 32;
      v13 = v19;
      *(_QWORD *)(v19 + 32) = v19 + 48;
      v120 = (void *)(v19 + 48);
      sub_21C5D10(v19 + 32, v20, &v20[v21]);
      *(_DWORD *)(v13 + 64) = 0;
      v23 = sub_1FEAD00(v2 + 24, v118, v22);
      v25 = v23;
      v26 = v24;
      if ( v24 )
      {
        if ( v4 != v24 && v23 == 0 )
        {
          v49 = *(_QWORD *)(v24 + 40);
          if ( *(_QWORD *)(v13 + 40) <= v49 )
            v49 = *(_QWORD *)(v13 + 40);
          if ( v49 )
            memcmp(*(const void **)(v13 + 32), *(const void **)(v26 + 32), v49);
        }
        std::_Rb_tree_insert_and_rebalance();
        ++*(_QWORD *)(v2 + 64);
      }
      else
      {
        v47 = *(void **)(v13 + 32);
        if ( v120 != v47 )
          operator delete(v47);
        v48 = (void *)v13;
        v13 = v25;
        operator delete(v48);
      }
    }
  }
  v27 = *(_DWORD *)(v13 + 64);
  if ( !v27 )
  {
    v42 = *(_QWORD **)(v2 + 80);
    *(_DWORD *)(v13 + 64) = (((__int64)v42 - *(_QWORD *)(v2 + 72)) >> 5) + 1;
    if ( v42 == *(_QWORD **)(v2 + 88) )
    {
      sub_1098E50(v2 + 72, v42, &s2, v14, v5, v15);
    }
    else
    {
      *v42 = v42 + 2;
      sub_21C5D10(v42, s2, (char *)s2 + n);
      *(_QWORD *)(v2 + 80) += 32LL;
    }
    v27 = *(_DWORD *)(v13 + 64);
  }
  v28 = *(unsigned int *)(v2 + 16);
  v29 = *(const __m128i **)v2;
  if ( !(_DWORD)v28 )
    goto LABEL_98;
  v14 = (unsigned int)(37 * v27);
  v30 = (unsigned int)(v28 - 1);
  LODWORD(v31) = v30 & (37 * v27);
  v32 = &v29[8 * (unsigned __int64)(unsigned int)v31];
  v33 = v32->m128i_i32[0];
  if ( v27 == v32->m128i_i32[0] )
  {
LABEL_24:
    v34 = &v32->m128i_i32[2];
    goto LABEL_25;
  }
  v50 = 1;
  v51 = 0;
  if ( v33 == -1 )
    goto LABEL_79;
  while ( 1 )
  {
    if ( !v51 && v33 == -2 )
      v51 = (unsigned __int64)v32;
    v15 = (unsigned int)(v50 + 1);
    v31 = (unsigned int)v30 & ((_DWORD)v31 + v50);
    v32 = &v29[8 * v31];
    v33 = v32->m128i_i32[0];
    if ( v27 == v32->m128i_i32[0] )
      goto LABEL_24;
    if ( v33 == -1 )
      break;
    ++v50;
  }
  if ( !v51 )
LABEL_79:
    v51 = (unsigned __int64)v32;
  v52 = *(_DWORD *)(v2 + 8) + 1;
  v5 = (unsigned int)(4 * v52);
  if ( (unsigned int)v5 >= 3 * (int)v28 )
  {
LABEL_98:
    v55 = (((((((unsigned int)(2 * v28 - 1) | ((unsigned __int64)(unsigned int)(2 * v28 - 1) >> 1)) >> 2)
            | (unsigned int)(2 * v28 - 1)
            | ((unsigned __int64)(unsigned int)(2 * v28 - 1) >> 1)) >> 4)
          | (((unsigned int)(2 * v28 - 1) | ((unsigned __int64)(unsigned int)(2 * v28 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * v28 - 1)
          | ((unsigned __int64)(unsigned int)(2 * v28 - 1) >> 1)) >> 8)
        | (((((unsigned int)(2 * v28 - 1) | ((unsigned __int64)(unsigned int)(2 * v28 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * v28 - 1)
          | ((unsigned __int64)(unsigned int)(2 * v28 - 1) >> 1)) >> 4)
        | (((unsigned int)(2 * v28 - 1) | ((unsigned __int64)(unsigned int)(2 * v28 - 1) >> 1)) >> 2)
        | (unsigned int)(2 * v28 - 1)
        | ((unsigned __int64)(unsigned int)(2 * v28 - 1) >> 1);
    v56 = ((v55 >> 16) | v55) + 1;
    if ( (unsigned int)v56 < 0x40 )
      LODWORD(v56) = 64;
    *(_DWORD *)(v2 + 16) = v56;
    v57 = (_DWORD *)sub_220C370((unsigned __int64)(unsigned int)v56 << 7, 8, 64, v14, v5, v15);
    *(_QWORD *)v2 = v57;
    if ( v29 )
    {
      v58 = *(unsigned int *)(v2 + 16);
      *(_QWORD *)(v2 + 8) = 0;
      v59 = &v29[8 * v28];
      v60 = &v57[32 * v58];
      while ( v60 != v57 )
      {
        *v57 = -1;
        v57 += 32;
      }
      v61 = v29;
      v62 = v2;
      v63 = v59;
      while ( v63 != v61 )
      {
        v64 = v61->m128i_i32[0];
        if ( (unsigned int)(v61->m128i_i32[0] + 2) > 1 )
        {
          v65 = *(_DWORD *)(v62 + 16);
          if ( !v65 )
          {
LABEL_188:
            dword_0 = 0;
            BUG();
          }
          v66 = v65 - 1;
          v67 = nullptr;
          v68 = 1;
          for ( i = v66 & (37 * v64); ; i = v66 & v113 )
          {
            v70 = (__m128i *)(*(_QWORD *)v62 + ((unsigned __int64)i << 7));
            v71 = v70->m128i_i32[0];
            if ( v64 == v70->m128i_i32[0] )
              break;
            if ( v71 == -1 )
            {
              if ( v67 )
                v70 = v67;
              break;
            }
            if ( v67 || v71 != -2 )
              v70 = v67;
            v113 = v68 + i;
            v67 = v70;
            ++v68;
          }
          v70->m128i_i32[0] = v64;
          v72 = v61 + 3;
          v70->m128i_i64[1] = v61->m128i_i64[1];
          v70[1].m128i_i64[0] = v61[1].m128i_i64[0];
          v70[1].m128i_i8[8] = v61[1].m128i_i8[8];
          v70[2].m128i_i64[0] = (__int64)v70[3].m128i_i64;
          v73 = (const __m128i *)v61[2].m128i_i64[0];
          if ( v73 == &v61[3] )
          {
            v70[3] = _mm_loadu_si128(v61 + 3);
          }
          else
          {
            v70[2].m128i_i64[0] = (__int64)v73;
            v70[3].m128i_i64[0] = v61[3].m128i_i64[0];
          }
          v70[2].m128i_i64[1] = v61[2].m128i_i64[1];
          v61[2].m128i_i64[0] = (__int64)v72;
          v61[2].m128i_i64[1] = 0;
          v61[3].m128i_i8[0] = 0;
          v70[4].m128i_i64[0] = (__int64)v70[5].m128i_i64;
          v70[4].m128i_i64[1] = 0x300000000LL;
          if ( v61[4].m128i_i32[2] )
            sub_1FEAA60(&v70[4], &v61[4]);
          v74 = (__m128i *)v61[4].m128i_i64[0];
          ++*(_DWORD *)(v62 + 8);
          if ( v74 != &v61[5] )
            free(v74);
          v75 = (__m128i *)v61[2].m128i_i64[0];
          if ( v75 != v72 )
            operator delete(v75);
        }
        v61 += 8;
      }
      v2 = v62;
      operator delete();
    }
    else
    {
      v109 = *(unsigned int *)(v2 + 16);
      *(_QWORD *)(v2 + 8) = 0;
      v110 = &v57[32 * v109];
      while ( v110 != v57 )
      {
        *v57 = -1;
        v57 += 32;
      }
    }
    v97 = *(_DWORD *)(v2 + 16);
    if ( v97 )
    {
      v98 = v97 - 1;
      v99 = 1;
      v100 = 0;
      for ( j = v98 & (37 * v27); ; j = v98 & v115 )
      {
        v51 = *(_QWORD *)v2 + ((unsigned __int64)j << 7);
        v102 = *(_DWORD *)v51;
        if ( v27 == *(_DWORD *)v51 )
          break;
        if ( v102 == -1 )
        {
LABEL_145:
          if ( v100 )
            v51 = v100;
          goto LABEL_82;
        }
        if ( v100 || v102 != -2 )
          v51 = v100;
        v115 = v99 + j;
        v100 = v51;
        ++v99;
      }
      goto LABEL_82;
    }
    goto LABEL_189;
  }
  if ( (int)v28 - *(_DWORD *)(v2 + 12) - v52 <= (unsigned int)v28 >> 3 )
  {
    v76 = (((((v30 >> 1) | v30 | (((v30 >> 1) | v30) >> 2)) >> 4) | (v30 >> 1) | v30 | (((v30 >> 1) | v30) >> 2)) >> 8)
        | (((v30 >> 1) | v30 | (((v30 >> 1) | v30) >> 2)) >> 4)
        | (v30 >> 1)
        | v30
        | (((v30 >> 1) | v30) >> 2);
    v77 = ((v76 >> 16) | v76) + 1;
    if ( (unsigned int)v77 < 0x40 )
      LODWORD(v77) = 64;
    *(_DWORD *)(v2 + 16) = v77;
    v78 = (_DWORD *)sub_220C370((unsigned __int64)(unsigned int)v77 << 7, 8, 64, v14, v5, v15);
    v79 = 37 * v27;
    *(_QWORD *)v2 = v78;
    if ( v29 )
    {
      v80 = *(unsigned int *)(v2 + 16);
      v81 = v28 << 7;
      *(_QWORD *)(v2 + 8) = 0;
      v82 = &v78[32 * v80];
      while ( v82 != v78 )
      {
        *v78 = -1;
        v78 += 32;
      }
      v83 = (const __m128i *)((char *)v29 + v81);
      for ( k = v29; v83 != k; k += 8 )
      {
        v85 = k->m128i_i32[0];
        if ( (unsigned int)(k->m128i_i32[0] + 2) > 1 )
        {
          v86 = *(_DWORD *)(v2 + 16);
          if ( !v86 )
            goto LABEL_188;
          v87 = v86 - 1;
          v88 = 1;
          v89 = nullptr;
          for ( m = v87 & (37 * v85); ; m = v87 & v114 )
          {
            v91 = (__m128i *)(*(_QWORD *)v2 + ((unsigned __int64)m << 7));
            v92 = v91->m128i_i32[0];
            if ( v85 == v91->m128i_i32[0] )
              break;
            if ( v92 == -1 )
            {
              if ( v89 )
                v91 = v89;
              break;
            }
            if ( v89 || v92 != -2 )
              v91 = v89;
            v114 = v88 + m;
            v89 = v91;
            ++v88;
          }
          v91->m128i_i32[0] = v85;
          v93 = k + 3;
          v91->m128i_i64[1] = k->m128i_i64[1];
          v91[1].m128i_i64[0] = k[1].m128i_i64[0];
          v91[1].m128i_i8[8] = k[1].m128i_i8[8];
          v91[2].m128i_i64[0] = (__int64)v91[3].m128i_i64;
          v94 = (const __m128i *)k[2].m128i_i64[0];
          if ( v94 == &k[3] )
          {
            v91[3] = _mm_loadu_si128(k + 3);
          }
          else
          {
            v91[2].m128i_i64[0] = (__int64)v94;
            v91[3].m128i_i64[0] = k[3].m128i_i64[0];
          }
          v91[2].m128i_i64[1] = k[2].m128i_i64[1];
          k[2].m128i_i64[0] = (__int64)v93;
          k[2].m128i_i64[1] = 0;
          k[3].m128i_i8[0] = 0;
          v91[4].m128i_i64[0] = (__int64)v91[5].m128i_i64;
          v91[4].m128i_i64[1] = 0x300000000LL;
          if ( k[4].m128i_i32[2] )
            sub_1FEAA60(&v91[4], &k[4]);
          v95 = (__m128i *)k[4].m128i_i64[0];
          ++*(_DWORD *)(v2 + 8);
          if ( v95 != &k[5] )
            free(v95);
          v96 = (__m128i *)k[2].m128i_i64[0];
          if ( v96 != v93 )
            operator delete(v96);
        }
      }
      operator delete();
      v79 = 37 * v27;
    }
    else
    {
      v111 = *(unsigned int *)(v2 + 16);
      *(_QWORD *)(v2 + 8) = 0;
      v112 = &v78[32 * v111];
      while ( v112 != v78 )
      {
        *v78 = -1;
        v78 += 32;
      }
    }
    v103 = *(_DWORD *)(v2 + 16);
    if ( v103 )
    {
      v104 = v103 - 1;
      v105 = 1;
      v100 = 0;
      for ( ii = v104 & v79; ; ii = v104 & v108 )
      {
        v51 = *(_QWORD *)v2 + ((unsigned __int64)ii << 7);
        v107 = *(_DWORD *)v51;
        if ( v27 == *(_DWORD *)v51 )
          break;
        if ( v107 == -1 )
          goto LABEL_145;
        if ( v107 != -2 || v100 )
          v51 = v100;
        v108 = v105 + ii;
        v100 = v51;
        ++v105;
      }
      goto LABEL_82;
    }
LABEL_189:
    ++*(_DWORD *)(v2 + 8);
    BUG();
  }
LABEL_82:
  ++*(_DWORD *)(v2 + 8);
  if ( *(_DWORD *)v51 != -1 )
    --*(_DWORD *)(v2 + 12);
  v53 = (_DWORD *)(v51 + 8);
  v54 = 30;
  *(_DWORD *)v51 = v27;
  while ( v54 )
  {
    *v53++ = 0;
    --v54;
  }
  v34 = (__int32 *)(v51 + 8);
  *(_QWORD *)(v51 + 32) = v51 + 48;
  *(_QWORD *)(v51 + 64) = v51 + 80;
  *(_QWORD *)(v51 + 72) = 0x300000000LL;
LABEL_25:
  v128 = 0;
  v130 = 0;
  v129 = v131;
  v35 = v34 + 10;
  ptr[0] = v133;
  LOBYTE(v131[0]) = 0;
  ptr[1] = (void *)0x300000000LL;
  v36 = *((_BYTE **)v34 + 3);
  v127 = 0;
  v126[2] = 0;
  *(_QWORD *)v34 = 0;
  *((_QWORD *)v34 + 1) = v127;
  *((_BYTE *)v34 + 16) = v128;
  if ( v129 == v131 )
  {
    v43 = v130;
    if ( v130 )
    {
      if ( v130 == 1 )
        *v36 = v131[0];
      else
        memcpy(v36, v129, v130);
      v36 = *((_BYTE **)v34 + 3);
      v43 = v130;
    }
    *((_QWORD *)v34 + 4) = v43;
    v36[v43] = 0;
  }
  else
  {
    if ( v36 == v35 )
    {
      *((_QWORD *)v34 + 3) = v129;
      *((_QWORD *)v34 + 4) = v130;
      *((_QWORD *)v34 + 5) = v131[0];
    }
    else
    {
      *((_QWORD *)v34 + 3) = v129;
      v37 = *((_QWORD *)v34 + 5);
      *((_QWORD *)v34 + 4) = v130;
      *((_QWORD *)v34 + 5) = v131[0];
      if ( v36 )
      {
        v129 = v36;
        v131[0] = v37;
        goto LABEL_29;
      }
    }
    v129 = v131;
  }
LABEL_29:
  v130 = 0;
  *(_BYTE *)v129 = 0;
  sub_1FEAA60(v34 + 14, ptr);
  if ( ptr[0] != v133 )
    free(ptr[0]);
  if ( v129 != v131 )
    operator delete(v129);
  if ( v34 + 6 != (__int32 *)&src )
  {
    v38 = v125;
    if ( *((_BYTE **)v34 + 3) == v35 )
      v39 = 15;
    else
      v39 = *((_QWORD *)v34 + 5);
    if ( v125 > v39 )
    {
      if ( (v125 & 0x8000000000000000LL) != 0LL )
        std::__throw_length_error("basic_string::_M_create");
      v44 = 2 * v39;
      if ( v125 >= 2 * v39 )
      {
        v44 = v125;
      }
      else if ( (v39 & 0x4000000000000000LL) != 0 )
      {
        v44 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v45 = operator new(v44 + 1);
      v46 = *((_BYTE **)v34 + 3);
      if ( v46 != v35 )
      {
        v119 = v45;
        operator delete(v46);
        v45 = v119;
      }
      *((_QWORD *)v34 + 3) = v45;
      *((_QWORD *)v34 + 5) = v44;
    }
    if ( v38 )
    {
      v40 = *((_BYTE **)v34 + 3);
      if ( v38 == 1 )
        *v40 = *(_BYTE *)src;
      else
        memcpy(v40, src, v38);
    }
    v41 = *((_QWORD *)v34 + 3);
    *((_QWORD *)v34 + 4) = v38;
    *(_BYTE *)(v41 + v38) = 0;
  }
  if ( s2 != v123 )
    operator delete(s2);
  if ( src != v126 )
    operator delete(src);
}

