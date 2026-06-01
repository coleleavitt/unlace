void __fastcall sub_401BE0(__int64 a1)
{
  char *v2; // rdi
  __int64 v3; // r14
  __int64 v4; // r13
  char *v5; // rbp
  char *v6; // rdx
  __int64 v7; // r15
  __int64 i; // rbx
  char *v9; // rax
  void *v10; // rdi
  char *v11; // rdx
  __int64 v12; // r15
  __int64 j; // rbx
  char *v14; // rax
  void *v15; // rdi
  __int64 v16; // r11
  __int64 v17; // r10
  __int64 v18; // r14
  __int64 *v19; // r13
  __int64 v20; // rbx
  __int64 v21; // r15
  __int64 v22; // rbp
  _QWORD *v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rsi
  __int64 v26; // rcx
  const char *v27; // rcx
  const char *v28; // rdi
  int v29; // eax
  size_t v30; // rdx
  __int64 v31; // r11
  unsigned __int64 v32; // rsi
  __int64 v33; // rax
  unsigned __int64 v34; // rdi
  __int64 v35; // rcx
  unsigned __int64 v36; // rax
  void *v37; // rbx
  __int64 v38; // rax
  __int64 *v39; // r13
  __int64 v40; // rbp
  size_t v41; // r14
  __int64 v42; // rdx
  __int64 v43; // rsi
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rbx
  void *v47; // r13
  size_t v48; // r8
  __int64 *v49; // rbp
  __int64 v50; // rdx
  __int64 v51; // rsi
  __int64 v52; // rax
  unsigned __int64 v53; // rbx
  unsigned __int64 *v54; // r13
  unsigned __int64 v55; // r14
  const void **v56; // rax
  __m128i v57; // xmm5
  __m128i v58; // xmm6
  __int64 v59; // rax
  __m128i v60; // xmm7
  char *v61; // rbp
  const void **v62; // rsi
  __int64 v63; // r15
  __int64 k; // r13
  char *v65; // rcx
  void *v66; // rdi
  __m128i si128; // xmm5
  __m128i v68; // xmm6
  __int64 v69; // rbp
  char *v70; // rdi
  __int64 v71; // r13
  __int64 m; // r15
  char *v73; // rsi
  void *v74; // rcx
  __m128i v75; // xmm5
  char *v76; // rdi
  __int64 v77; // r13
  __int64 ii; // rbp
  char *v79; // rsi
  void *v80; // rcx
  __m128i v81; // xmm6
  char *v82; // rdi
  __int64 v83; // r13
  __int64 jj; // rbp
  char *v85; // rcx
  void *v86; // rax
  __m128i v87; // xmm7
  int v88; // eax
  unsigned __int64 *v89; // r12
  unsigned __int64 v90; // rbp
  __int64 v91; // rbx
  unsigned __int64 kk; // rbx
  __m128i v93; // xmm2
  void *v94; // r14
  void *v95; // r15
  __m128i v96; // xmm0
  void *v97; // rdi
  void *v98; // rdi
  __m128i v99; // xmm3
  __int64 v100; // rax
  __int64 v101; // rdx
  void *v102; // r13
  __int64 *v103; // r11
  __int64 v104; // rdx
  size_t v105; // rbx
  __int64 v106; // rax
  __int64 v107; // rsi
  __int64 v108; // rax
  __int64 v109; // rbx
  __int64 v110; // rdx
  __int64 v111; // rsi
  __int64 v112; // rax
  _QWORD *v113; // rbp
  void *v114; // r13
  __int64 *v115; // rbx
  __int64 v116; // r14
  size_t v117; // rbp
  __int64 v118; // rax
  __int64 v119; // rax
  __int64 v120; // rax
  __int64 v121; // rdi
  __int64 v122; // rax
  __int64 v123; // rdx
  __int64 v124; // rsi
  __int64 v125; // rax
  void *v126; // r15
  __int64 v127; // rax
  __int64 v128; // rbx
  size_t v129; // r13
  __int64 *v130; // rbp
  __int64 v131; // rax
  size_t n[2]; // [rsp+0h] [rbp-88h] BYREF
  __m128i v133; // [rsp+10h] [rbp-78h] BYREF
  const void **v134; // [rsp+28h] [rbp-60h]
  __m128i v135; // [rsp+30h] [rbp-58h] BYREF
  __int64 v136; // [rsp+40h] [rbp-48h]
  int v137; // [rsp+4Ch] [rbp-3Ch]

  v2 = *(char **)(a1 + 56);
  if ( v2 )
  {
    n[0] = *(_QWORD *)(a1 + 64);
    if ( n[0] )
    {
      v3 = 0;
      v4 = 0;
      do
      {
        v5 = &v2[v3];
        v6 = *(char **)&v2[v3 + 24];
        if ( v6 )
        {
          v7 = *((_QWORD *)v5 + 4);
          if ( v7 )
          {
            for ( i = 0; i != v7; ++i )
            {
              v9 = &v6[24 * i];
              v10 = *(void **)v9;
              if ( *(_QWORD *)v9 )
              {
                *((_QWORD *)v9 + 1) = 0;
                qfree(v10);
                v6 = *((char **)v5 + 3);
              }
            }
          }
          *((_QWORD *)v5 + 4) = 0;
          qfree(v6);
        }
        v11 = *(char **)v5;
        if ( *(_QWORD *)v5 )
        {
          v12 = *((_QWORD *)v5 + 1);
          if ( v12 )
          {
            for ( j = 0; j != v12; ++j )
            {
              v14 = &v11[24 * j];
              v15 = *(void **)v14;
              if ( *(_QWORD *)v14 )
              {
                *((_QWORD *)v14 + 1) = 0;
                qfree(v15);
                v11 = *(char **)v5;
              }
            }
          }
          *((_QWORD *)v5 + 1) = 0;
          qfree(v11);
        }
        v2 = *(char **)(a1 + 56);
        ++v4;
        v3 += 56;
      }
      while ( n[0] != v4 );
    }
    *(_QWORD *)(a1 + 64) = 0;
    qfree(v2);
    *(_QWORD *)(a1 + 56) = 0;
    *(_QWORD *)(a1 + 72) = 0;
  }
  v16 = *(_QWORD *)(a1 + 16);
  v17 = *(_QWORD *)(a1 + 24);
  if ( *(_OWORD *)(a1 + 16) == 0 )
    goto LABEL_45;
  if ( !v16 )
    goto LABEL_44;
LABEL_22:
  while ( 2 )
  {
    v18 = v16 - 1;
    v19 = *(__int64 **)a1;
    v20 = 24 * (v16 - 1);
    if ( !v17 )
    {
      n[0] = a1 + 56;
      while ( 1 )
      {
        v126 = nullptr;
        v127 = sub_401A30((unsigned __int64 *)n[0], 2);
        v128 = *v19 + v20;
        v129 = *(_QWORD *)(v128 + 8);
        v130 = (__int64 *)v127;
        if ( v129 )
        {
          v126 = (void *)qalloc_or_throw(*(_QWORD *)(v128 + 8));
          memcpy(v126, *(const void **)v128, v129);
        }
        v123 = v130[1];
        v124 = *v130;
        if ( v130[2] < (unsigned __int64)(v123 + 1) )
        {
          v131 = qvector_reserve(v130, v124, v123 + 1, 24);
          *v130 = v131;
          v123 = v130[1];
          v124 = v131;
        }
        v125 = v124 + 24 * v123;
        *(_QWORD *)v125 = v126;
        *(__m128i *)(v125 + 8) = _mm_unpacklo_epi64((__m128i)v129, (__m128i)v129);
        ++v130[1];
        if ( !v18 )
          break;
        --v18;
        v19 = *(__int64 **)a1;
        v20 = 24 * v18;
      }
      break;
    }
    v21 = v17 - 1;
    v22 = 24 * (v17 - 1);
    while ( 1 )
    {
      v23 = *(_QWORD **)(a1 + 8);
      v24 = v20 + *v19;
      v25 = *(_QWORD *)(v24 + 8);
      v26 = v22 + *v23;
      if ( *(_QWORD *)(v26 + 8) )
      {
        v27 = *(const char **)v26;
        v28 = haystack;
        if ( !v25 )
          goto LABEL_27;
        goto LABEL_26;
      }
      if ( !v25 )
        break;
      v27 = haystack;
LABEL_26:
      v28 = *(const char **)v24;
LABEL_27:
      v134 = (const void **)v17;
      v133.m128i_i64[0] = v16;
      n[0] = (size_t)v23;
      v29 = strcmp(v28, v27);
      v30 = n[0];
      v31 = v133.m128i_i64[0];
      if ( !v29 )
        break;
      v32 = *(_QWORD *)(a1 + 40);
      v33 = *(_QWORD *)(a1 + 24) + 1LL;
      v34 = (unsigned __int64)v134 + v18 * v33;
      if ( v34 >= v32
        || (v35 = *(_QWORD *)(a1 + 32),
            v133.m128i_i64[0] = n[0],
            n[0] = v31,
            v34 = *(_QWORD *)(v35 + 8 * v34),
            v36 = v21 + v31 * v33,
            v36 >= v32) )
      {
        sub_3FF840(v34, v32, v30);
      }
      if ( *(_QWORD *)(v35 + 8 * v36) >= v34 )
      {
        v37 = nullptr;
        v38 = sub_401A30((unsigned __int64 *)(a1 + 56), 1);
        v16 = n[0];
        v39 = (__int64 *)v38;
        v40 = *(_QWORD *)v133.m128i_i64[0] + v22;
        v41 = *(_QWORD *)(v40 + 8);
        if ( v41 )
        {
          v37 = (void *)qalloc_or_throw(*(_QWORD *)(v40 + 8));
          memcpy(v37, *(const void **)v40, v41);
          v16 = n[0];
        }
        v42 = v39[1];
        v43 = *v39;
        if ( v39[2] < (unsigned __int64)(v42 + 1) )
        {
          n[0] = v16;
          v122 = qvector_reserve(v39, v43, v42 + 1, 24);
          v42 = v39[1];
          v16 = n[0];
          *v39 = v122;
          v43 = v122;
        }
        v17 = v21;
        v44 = v43 + 24 * v42;
        *(_QWORD *)v44 = v37;
        *(__m128i *)(v44 + 8) = _mm_unpacklo_epi64((__m128i)v41, (__m128i)v41);
        ++v39[1];
        goto LABEL_22;
      }
      v133.m128i_i64[0] = (__int64)v134;
      n[0] = a1 + 56;
      v100 = sub_401A30((unsigned __int64 *)(a1 + 56), 2);
      v101 = *v19;
      v102 = nullptr;
      v17 = (__int64)v134;
      v103 = (__int64 *)v100;
      v104 = v20 + v101;
      v105 = *(_QWORD *)(v104 + 8);
      if ( v105 )
      {
        v121 = *(_QWORD *)(v104 + 8);
        v135.m128i_i64[0] = v133.m128i_i64[0];
        v134 = (const void **)v104;
        v133.m128i_i64[0] = v100;
        v102 = (void *)qalloc_or_throw(v121);
        memcpy(v102, *v134, v105);
        v17 = v135.m128i_i64[0];
        v103 = (__int64 *)v133.m128i_i64[0];
      }
      v106 = v103[1];
      v107 = *v103;
      if ( v103[2] < (unsigned __int64)(v106 + 1) )
      {
        v134 = (const void **)v17;
        v133.m128i_i64[0] = (__int64)v103;
        v120 = qvector_reserve(v103, v107, v106 + 1, 24);
        v103 = (__int64 *)v133.m128i_i64[0];
        v107 = v120;
        v17 = (__int64)v134;
        *(_QWORD *)v133.m128i_i64[0] = v120;
        v106 = v103[1];
      }
      v108 = v107 + 24 * v106;
      *(_QWORD *)v108 = v102;
      *(__m128i *)(v108 + 8) = _mm_unpacklo_epi64((__m128i)v105, (__m128i)v105);
      ++v103[1];
      if ( !v18 )
        goto LABEL_97;
      v16 = v18;
      v19 = *(__int64 **)a1;
      v109 = 3 * --v18;
      v20 = 8 * v109;
    }
    v45 = sub_401A30((unsigned __int64 *)(a1 + 56), 0);
    v46 = *v19 + v20;
    v47 = nullptr;
    v48 = *(_QWORD *)(v46 + 8);
    v49 = (__int64 *)v45;
    if ( v48 )
    {
      n[0] = *(_QWORD *)(v46 + 8);
      v47 = (void *)qalloc_or_throw(n[0]);
      memcpy(v47, *(const void **)v46, n[0]);
      v48 = n[0];
    }
    v50 = v49[1];
    v51 = *v49;
    if ( v49[2] < (unsigned __int64)(v50 + 1) )
    {
      n[0] = v48;
      v119 = qvector_reserve(v49, v51, v50 + 1, 24);
      v50 = v49[1];
      v48 = n[0];
      *v49 = v119;
      v51 = v119;
    }
    v52 = v51 + 24 * v50;
    *(_QWORD *)v52 = v47;
    *(__m128i *)(v52 + 8) = _mm_unpacklo_epi64((__m128i)v48, (__m128i)v48);
    ++v49[1];
    if ( v18 | v21 )
    {
      v16 = v18;
      v17 = v21;
      if ( v18 )
        continue;
LABEL_44:
      v21 = v17 - 1;
      n[0] = a1 + 56;
      while ( 1 )
      {
LABEL_97:
        v113 = *(_QWORD **)(a1 + 8);
        v114 = nullptr;
        v115 = (__int64 *)sub_401A30((unsigned __int64 *)n[0], 1);
        v116 = *v113 + 24 * v21;
        v117 = *(_QWORD *)(v116 + 8);
        if ( v117 )
        {
          v114 = (void *)qalloc_or_throw(*(_QWORD *)(v116 + 8));
          memcpy(v114, *(const void **)v116, v117);
        }
        v110 = v115[1];
        v111 = *v115;
        if ( v115[2] < (unsigned __int64)(v110 + 1) )
        {
          v118 = qvector_reserve(v115, v111, v110 + 1, 24);
          *v115 = v118;
          v110 = v115[1];
          v111 = v118;
        }
        v112 = v111 + 24 * v110;
        *(_QWORD *)v112 = v114;
        *(__m128i *)(v112 + 8) = _mm_unpacklo_epi64((__m128i)v117, (__m128i)v117);
        ++v115[1];
        if ( !v21 )
          break;
        --v21;
      }
    }
    break;
  }
LABEL_45:
  v53 = *(_QWORD *)(a1 + 56);
  v54 = (unsigned __int64 *)(v53 + 56LL * *(_QWORD *)(a1 + 64));
  if ( (unsigned __int64 *)v53 != v54 )
  {
    v55 = (unsigned __int64)(v54 - 7);
    if ( v53 >= (unsigned __int64)(v54 - 7) )
      goto LABEL_77;
    do
    {
      v56 = *(const void ***)v53;
      *(_QWORD *)v53 = 0;
      v57 = _mm_loadu_si128((const __m128i *)(v53 + 8));
      v58 = _mm_loadu_si128((const __m128i *)(v53 + 32));
      *(_OWORD *)(v53 + 8) = 0;
      v134 = v56;
      v59 = *(_QWORD *)(v53 + 24);
      *(_OWORD *)(v53 + 32) = 0;
      *(_QWORD *)(v53 + 24) = 0;
      v60 = _mm_loadu_si128((const __m128i *)(v55 + 8));
      v136 = v59;
      v61 = *(char **)v55;
      LODWORD(v59) = *(_DWORD *)(v53 + 48);
      *(_QWORD *)v55 = 0;
      *(_OWORD *)(v55 + 8) = 0;
      v62 = *(const void ***)v53;
      v137 = v59;
      v133 = v57;
      v135 = v58;
      *(__m128i *)n = v60;
      if ( v62 )
      {
        v63 = *(_QWORD *)(v53 + 8);
        if ( v63 )
        {
          for ( k = 0; k != v63; ++k )
          {
            v65 = (char *)&v62[3 * k];
            v66 = *(void **)v65;
            if ( *(_QWORD *)v65 )
            {
              *((_QWORD *)v65 + 1) = 0;
              qfree(v66);
              v62 = *(const void ***)v53;
            }
          }
        }
        *(_QWORD *)(v53 + 8) = 0;
        qfree(v62);
      }
      si128 = _mm_load_si128((const __m128i *)n);
      *(_QWORD *)v53 = v61;
      *(__m128i *)(v53 + 8) = si128;
      v68 = _mm_loadu_si128((const __m128i *)(v55 + 32));
      v69 = *(_QWORD *)(v55 + 24);
      *(_OWORD *)(v55 + 32) = 0;
      *(_QWORD *)(v55 + 24) = 0;
      v70 = *(char **)(v53 + 24);
      *(__m128i *)n = v68;
      if ( v70 )
      {
        v71 = *(_QWORD *)(v53 + 32);
        if ( v71 )
        {
          for ( m = 0; m != v71; ++m )
          {
            v73 = &v70[24 * m];
            v74 = *(void **)v73;
            if ( *(_QWORD *)v73 )
            {
              *((_QWORD *)v73 + 1) = 0;
              qfree(v74);
              v70 = *(char **)(v53 + 24);
            }
          }
        }
        *(_QWORD *)(v53 + 32) = 0;
        qfree(v70);
      }
      v75 = _mm_load_si128((const __m128i *)n);
      *(_QWORD *)(v53 + 24) = v69;
      *(__m128i *)(v53 + 32) = v75;
      *(_DWORD *)(v53 + 48) = *(_DWORD *)(v55 + 48);
      v76 = *(char **)v55;
      if ( *(_QWORD *)v55 )
      {
        v77 = *(_QWORD *)(v55 + 8);
        if ( v77 )
        {
          for ( ii = 0; ii != v77; ++ii )
          {
            v79 = &v76[24 * ii];
            v80 = *(void **)v79;
            if ( *(_QWORD *)v79 )
            {
              *((_QWORD *)v79 + 1) = 0;
              qfree(v80);
              v76 = *(char **)v55;
            }
          }
        }
        *(_QWORD *)(v55 + 8) = 0;
        qfree(v76);
      }
      v81 = _mm_load_si128(&v133);
      v82 = *(char **)(v55 + 24);
      *(_QWORD *)v55 = v134;
      *(__m128i *)(v55 + 8) = v81;
      if ( v82 )
      {
        v83 = *(_QWORD *)(v55 + 32);
        if ( v83 )
        {
          for ( jj = 0; jj != v83; ++jj )
          {
            v85 = &v82[24 * jj];
            v86 = *(void **)v85;
            if ( *(_QWORD *)v85 )
            {
              *((_QWORD *)v85 + 1) = 0;
              qfree(v86);
              v82 = *(char **)(v55 + 24);
            }
          }
        }
        *(_QWORD *)(v55 + 32) = 0;
        qfree(v82);
      }
      v87 = _mm_load_si128(&v135);
      v53 += 56LL;
      v55 -= 56LL;
      *(_QWORD *)(v55 + 80) = v136;
      v88 = v137;
      *(__m128i *)(v55 + 88) = v87;
      *(_DWORD *)(v55 + 104) = v88;
    }
    while ( v53 < v55 );
    v53 = *(_QWORD *)(a1 + 56);
    v54 = (unsigned __int64 *)(v53 + 56LL * *(_QWORD *)(a1 + 64));
    if ( (unsigned __int64 *)v53 != v54 )
    {
LABEL_77:
      v89 = (unsigned __int64 *)v53;
      do
      {
        v90 = *v89;
        v91 = *v89 + 24 * v89[1];
        if ( *v89 != v91 )
        {
          for ( kk = v91 - 24; v90 < kk; *(__m128i *)(kk + 32) = v99 )
          {
            v93 = _mm_loadu_si128((const __m128i *)(v90 + 8));
            v94 = *(void **)v90;
            *(_QWORD *)v90 = 0;
            *(_OWORD *)(v90 + 8) = 0;
            v95 = *(void **)kk;
            v96 = _mm_loadu_si128((const __m128i *)(kk + 8));
            *(_QWORD *)kk = 0;
            *(_OWORD *)(kk + 8) = 0;
            v97 = *(void **)v90;
            *(__m128i *)n = v93;
            if ( v97 )
            {
              *(_QWORD *)(v90 + 8) = 0;
              v133 = v96;
              qfree(v97);
              v96 = _mm_load_si128(&v133);
            }
            *(_QWORD *)v90 = v95;
            *(__m128i *)(v90 + 8) = v96;
            v98 = *(void **)kk;
            if ( *(_QWORD *)kk )
            {
              *(_QWORD *)(kk + 8) = 0;
              qfree(v98);
            }
            v99 = _mm_load_si128((const __m128i *)n);
            *(_QWORD *)kk = v94;
            v90 += 24LL;
            kk -= 24LL;
          }
        }
        v89 += 7;
      }
      while ( v54 != v89 );
    }
  }
}
