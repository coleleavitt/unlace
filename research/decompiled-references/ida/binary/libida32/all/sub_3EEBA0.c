void __fastcall sub_3EEBA0(__int64 a1)
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
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 *v42; // r13
  __int64 v43; // rbp
  size_t v44; // r14
  __int64 v45; // rdx
  __int64 v46; // rsi
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r9
  __int64 v52; // rbx
  void *v53; // r13
  size_t v54; // r8
  __int64 *v55; // rbp
  __int64 v56; // rdx
  __int64 v57; // rsi
  __int64 v58; // rax
  unsigned __int64 v59; // rbx
  unsigned __int64 *v60; // r13
  unsigned __int64 v61; // r14
  const void **v62; // rax
  __m128i v63; // xmm5
  __m128i v64; // xmm6
  __int64 v65; // rax
  __m128i v66; // xmm7
  char *v67; // rbp
  const void **v68; // rsi
  __int64 v69; // r15
  __int64 k; // r13
  char *v71; // rcx
  void *v72; // rdi
  __m128i si128; // xmm5
  __m128i v74; // xmm6
  __int64 v75; // rbp
  char *v76; // rdi
  __int64 v77; // r13
  __int64 m; // r15
  char *v79; // rsi
  void *v80; // rcx
  __m128i v81; // xmm5
  char *v82; // rdi
  __int64 v83; // r13
  __int64 ii; // rbp
  char *v85; // rsi
  void *v86; // rcx
  __m128i v87; // xmm6
  char *v88; // rdi
  __int64 v89; // r13
  __int64 jj; // rbp
  char *v91; // rcx
  void *v92; // rax
  __m128i v93; // xmm7
  int v94; // eax
  unsigned __int64 *v95; // r12
  unsigned __int64 v96; // rbp
  __int64 v97; // rbx
  unsigned __int64 kk; // rbx
  __m128i v99; // xmm2
  void *v100; // r14
  void *v101; // r15
  __m128i v102; // xmm0
  void *v103; // rdi
  void *v104; // rdi
  __m128i v105; // xmm3
  __int64 v106; // rax
  __int64 v107; // rcx
  __int64 v108; // r8
  __int64 v109; // r9
  __int64 v110; // rdx
  void *v111; // r13
  __int64 *v112; // r11
  __int64 v113; // rdx
  size_t v114; // rbx
  __int64 v115; // rax
  __int64 v116; // rsi
  __int64 v117; // rax
  __int64 v118; // rbx
  __int64 v119; // rdx
  __int64 v120; // rsi
  __int64 v121; // rax
  __int64 *v122; // rbp
  void *v123; // r13
  __int64 v124; // rax
  __int64 v125; // rcx
  __int64 v126; // r8
  __int64 v127; // r9
  __int64 v128; // rdx
  __int64 *v129; // rbx
  __int64 v130; // r14
  size_t v131; // rbp
  __int64 v132; // rax
  __int64 v133; // rax
  __int64 v134; // rax
  __int64 v135; // rdi
  __int64 v136; // rax
  __int64 v137; // rdx
  __int64 v138; // rsi
  __int64 v139; // rax
  void *v140; // r15
  __int64 v141; // rax
  __int64 v142; // rdx
  __int64 v143; // rcx
  __int64 v144; // r8
  __int64 v145; // r9
  __int64 v146; // rbx
  size_t v147; // r13
  __int64 *v148; // rbp
  __int64 v149; // rax
  size_t n[2]; // [rsp+0h] [rbp-88h] BYREF
  __m128i v151; // [rsp+10h] [rbp-78h] BYREF
  const void **v152; // [rsp+28h] [rbp-60h]
  __m128i v153; // [rsp+30h] [rbp-58h] BYREF
  __int64 v154; // [rsp+40h] [rbp-48h]
  int v155; // [rsp+4Ch] [rbp-3Ch]

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
        v140 = nullptr;
        v141 = sub_3EE9F0((unsigned __int64 *)n[0], 2);
        v146 = *v19 + v20;
        v147 = *(_QWORD *)(v146 + 8);
        v148 = (__int64 *)v141;
        if ( v147 )
        {
          v140 = (void *)qalloc_or_throw(*(_QWORD *)(v146 + 8), 2, v142, v143, v144, v145);
          memcpy(v140, *(const void **)v146, v147);
        }
        v137 = v148[1];
        v138 = *v148;
        if ( v148[2] < (unsigned __int64)(v137 + 1) )
        {
          v149 = qvector_reserve(v148, v138, v137 + 1, 24);
          *v148 = v149;
          v137 = v148[1];
          v138 = v149;
        }
        v139 = v138 + 24 * v137;
        *(_QWORD *)v139 = v140;
        *(__m128i *)(v139 + 8) = _mm_unpacklo_epi64((__m128i)v147, (__m128i)v147);
        ++v148[1];
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
      v152 = (const void **)v17;
      v151.m128i_i64[0] = v16;
      n[0] = (size_t)v23;
      v29 = strcmp(v28, v27);
      v30 = n[0];
      v31 = v151.m128i_i64[0];
      if ( !v29 )
        break;
      v32 = *(_QWORD *)(a1 + 40);
      v33 = *(_QWORD *)(a1 + 24) + 1LL;
      v34 = (unsigned __int64)v152 + v18 * v33;
      if ( v34 >= v32
        || (v35 = *(_QWORD *)(a1 + 32),
            v151.m128i_i64[0] = n[0],
            n[0] = v31,
            v34 = *(_QWORD *)(v35 + 8 * v34),
            v36 = v21 + v31 * v33,
            v36 >= v32) )
      {
        sub_3EC800(v34, v32, v30);
      }
      if ( *(_QWORD *)(v35 + 8 * v36) >= v34 )
      {
        v37 = nullptr;
        v38 = sub_3EE9F0((unsigned __int64 *)(a1 + 56), 1);
        v16 = n[0];
        v42 = (__int64 *)v38;
        v43 = *(_QWORD *)v151.m128i_i64[0] + v22;
        v44 = *(_QWORD *)(v43 + 8);
        if ( v44 )
        {
          v37 = (void *)qalloc_or_throw(*(_QWORD *)(v43 + 8), 1, v151.m128i_i64[0], v39, v40, v41);
          memcpy(v37, *(const void **)v43, v44);
          v16 = n[0];
        }
        v45 = v42[1];
        v46 = *v42;
        if ( v42[2] < (unsigned __int64)(v45 + 1) )
        {
          n[0] = v16;
          v136 = qvector_reserve(v42, v46, v45 + 1, 24);
          v45 = v42[1];
          v16 = n[0];
          *v42 = v136;
          v46 = v136;
        }
        v17 = v21;
        v47 = v46 + 24 * v45;
        *(_QWORD *)v47 = v37;
        *(__m128i *)(v47 + 8) = _mm_unpacklo_epi64((__m128i)v44, (__m128i)v44);
        ++v42[1];
        goto LABEL_22;
      }
      v151.m128i_i64[0] = (__int64)v152;
      n[0] = a1 + 56;
      v106 = sub_3EE9F0((unsigned __int64 *)(a1 + 56), 2);
      v110 = *v19;
      v111 = nullptr;
      v17 = (__int64)v152;
      v112 = (__int64 *)v106;
      v113 = v20 + v110;
      v114 = *(_QWORD *)(v113 + 8);
      if ( v114 )
      {
        v135 = *(_QWORD *)(v113 + 8);
        v153.m128i_i64[0] = v151.m128i_i64[0];
        v152 = (const void **)v113;
        v151.m128i_i64[0] = v106;
        v111 = (void *)qalloc_or_throw(v135, 2, v113, v107, v108, v109);
        memcpy(v111, *v152, v114);
        v17 = v153.m128i_i64[0];
        v112 = (__int64 *)v151.m128i_i64[0];
      }
      v115 = v112[1];
      v116 = *v112;
      if ( v112[2] < (unsigned __int64)(v115 + 1) )
      {
        v152 = (const void **)v17;
        v151.m128i_i64[0] = (__int64)v112;
        v134 = qvector_reserve(v112, v116, v115 + 1, 24);
        v112 = (__int64 *)v151.m128i_i64[0];
        v116 = v134;
        v17 = (__int64)v152;
        *(_QWORD *)v151.m128i_i64[0] = v134;
        v115 = v112[1];
      }
      v117 = v116 + 24 * v115;
      *(_QWORD *)v117 = v111;
      *(__m128i *)(v117 + 8) = _mm_unpacklo_epi64((__m128i)v114, (__m128i)v114);
      ++v112[1];
      if ( !v18 )
        goto LABEL_97;
      v16 = v18;
      v19 = *(__int64 **)a1;
      v118 = 3 * --v18;
      v20 = 8 * v118;
    }
    v48 = sub_3EE9F0((unsigned __int64 *)(a1 + 56), 0);
    v52 = *v19 + v20;
    v53 = nullptr;
    v54 = *(_QWORD *)(v52 + 8);
    v55 = (__int64 *)v48;
    if ( v54 )
    {
      n[0] = *(_QWORD *)(v52 + 8);
      v53 = (void *)qalloc_or_throw(n[0], 0, v49, v50, v54, v51);
      memcpy(v53, *(const void **)v52, n[0]);
      v54 = n[0];
    }
    v56 = v55[1];
    v57 = *v55;
    if ( v55[2] < (unsigned __int64)(v56 + 1) )
    {
      n[0] = v54;
      v133 = qvector_reserve(v55, v57, v56 + 1, 24);
      v56 = v55[1];
      v54 = n[0];
      *v55 = v133;
      v57 = v133;
    }
    v58 = v57 + 24 * v56;
    *(_QWORD *)v58 = v53;
    *(__m128i *)(v58 + 8) = _mm_unpacklo_epi64((__m128i)v54, (__m128i)v54);
    ++v55[1];
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
        v122 = *(__int64 **)(a1 + 8);
        v123 = nullptr;
        v124 = sub_3EE9F0((unsigned __int64 *)n[0], 1);
        v128 = *v122;
        v129 = (__int64 *)v124;
        v130 = *v122 + 24 * v21;
        v131 = *(_QWORD *)(v130 + 8);
        if ( v131 )
        {
          v123 = (void *)qalloc_or_throw(*(_QWORD *)(v130 + 8), 1, v128, v125, v126, v127);
          memcpy(v123, *(const void **)v130, v131);
        }
        v119 = v129[1];
        v120 = *v129;
        if ( v129[2] < (unsigned __int64)(v119 + 1) )
        {
          v132 = qvector_reserve(v129, v120, v119 + 1, 24);
          *v129 = v132;
          v119 = v129[1];
          v120 = v132;
        }
        v121 = v120 + 24 * v119;
        *(_QWORD *)v121 = v123;
        *(__m128i *)(v121 + 8) = _mm_unpacklo_epi64((__m128i)v131, (__m128i)v131);
        ++v129[1];
        if ( !v21 )
          break;
        --v21;
      }
    }
    break;
  }
LABEL_45:
  v59 = *(_QWORD *)(a1 + 56);
  v60 = (unsigned __int64 *)(v59 + 56LL * *(_QWORD *)(a1 + 64));
  if ( (unsigned __int64 *)v59 != v60 )
  {
    v61 = (unsigned __int64)(v60 - 7);
    if ( v59 >= (unsigned __int64)(v60 - 7) )
      goto LABEL_77;
    do
    {
      v62 = *(const void ***)v59;
      *(_QWORD *)v59 = 0;
      v63 = _mm_loadu_si128((const __m128i *)(v59 + 8));
      v64 = _mm_loadu_si128((const __m128i *)(v59 + 32));
      *(_OWORD *)(v59 + 8) = 0;
      v152 = v62;
      v65 = *(_QWORD *)(v59 + 24);
      *(_OWORD *)(v59 + 32) = 0;
      *(_QWORD *)(v59 + 24) = 0;
      v66 = _mm_loadu_si128((const __m128i *)(v61 + 8));
      v154 = v65;
      v67 = *(char **)v61;
      LODWORD(v65) = *(_DWORD *)(v59 + 48);
      *(_QWORD *)v61 = 0;
      *(_OWORD *)(v61 + 8) = 0;
      v68 = *(const void ***)v59;
      v155 = v65;
      v151 = v63;
      v153 = v64;
      *(__m128i *)n = v66;
      if ( v68 )
      {
        v69 = *(_QWORD *)(v59 + 8);
        if ( v69 )
        {
          for ( k = 0; k != v69; ++k )
          {
            v71 = (char *)&v68[3 * k];
            v72 = *(void **)v71;
            if ( *(_QWORD *)v71 )
            {
              *((_QWORD *)v71 + 1) = 0;
              qfree(v72);
              v68 = *(const void ***)v59;
            }
          }
        }
        *(_QWORD *)(v59 + 8) = 0;
        qfree(v68);
      }
      si128 = _mm_load_si128((const __m128i *)n);
      *(_QWORD *)v59 = v67;
      *(__m128i *)(v59 + 8) = si128;
      v74 = _mm_loadu_si128((const __m128i *)(v61 + 32));
      v75 = *(_QWORD *)(v61 + 24);
      *(_OWORD *)(v61 + 32) = 0;
      *(_QWORD *)(v61 + 24) = 0;
      v76 = *(char **)(v59 + 24);
      *(__m128i *)n = v74;
      if ( v76 )
      {
        v77 = *(_QWORD *)(v59 + 32);
        if ( v77 )
        {
          for ( m = 0; m != v77; ++m )
          {
            v79 = &v76[24 * m];
            v80 = *(void **)v79;
            if ( *(_QWORD *)v79 )
            {
              *((_QWORD *)v79 + 1) = 0;
              qfree(v80);
              v76 = *(char **)(v59 + 24);
            }
          }
        }
        *(_QWORD *)(v59 + 32) = 0;
        qfree(v76);
      }
      v81 = _mm_load_si128((const __m128i *)n);
      *(_QWORD *)(v59 + 24) = v75;
      *(__m128i *)(v59 + 32) = v81;
      *(_DWORD *)(v59 + 48) = *(_DWORD *)(v61 + 48);
      v82 = *(char **)v61;
      if ( *(_QWORD *)v61 )
      {
        v83 = *(_QWORD *)(v61 + 8);
        if ( v83 )
        {
          for ( ii = 0; ii != v83; ++ii )
          {
            v85 = &v82[24 * ii];
            v86 = *(void **)v85;
            if ( *(_QWORD *)v85 )
            {
              *((_QWORD *)v85 + 1) = 0;
              qfree(v86);
              v82 = *(char **)v61;
            }
          }
        }
        *(_QWORD *)(v61 + 8) = 0;
        qfree(v82);
      }
      v87 = _mm_load_si128(&v151);
      v88 = *(char **)(v61 + 24);
      *(_QWORD *)v61 = v152;
      *(__m128i *)(v61 + 8) = v87;
      if ( v88 )
      {
        v89 = *(_QWORD *)(v61 + 32);
        if ( v89 )
        {
          for ( jj = 0; jj != v89; ++jj )
          {
            v91 = &v88[24 * jj];
            v92 = *(void **)v91;
            if ( *(_QWORD *)v91 )
            {
              *((_QWORD *)v91 + 1) = 0;
              qfree(v92);
              v88 = *(char **)(v61 + 24);
            }
          }
        }
        *(_QWORD *)(v61 + 32) = 0;
        qfree(v88);
      }
      v93 = _mm_load_si128(&v153);
      v59 += 56LL;
      v61 -= 56LL;
      *(_QWORD *)(v61 + 80) = v154;
      v94 = v155;
      *(__m128i *)(v61 + 88) = v93;
      *(_DWORD *)(v61 + 104) = v94;
    }
    while ( v59 < v61 );
    v59 = *(_QWORD *)(a1 + 56);
    v60 = (unsigned __int64 *)(v59 + 56LL * *(_QWORD *)(a1 + 64));
    if ( (unsigned __int64 *)v59 != v60 )
    {
LABEL_77:
      v95 = (unsigned __int64 *)v59;
      do
      {
        v96 = *v95;
        v97 = *v95 + 24 * v95[1];
        if ( *v95 != v97 )
        {
          for ( kk = v97 - 24; v96 < kk; *(__m128i *)(kk + 32) = v105 )
          {
            v99 = _mm_loadu_si128((const __m128i *)(v96 + 8));
            v100 = *(void **)v96;
            *(_QWORD *)v96 = 0;
            *(_OWORD *)(v96 + 8) = 0;
            v101 = *(void **)kk;
            v102 = _mm_loadu_si128((const __m128i *)(kk + 8));
            *(_QWORD *)kk = 0;
            *(_OWORD *)(kk + 8) = 0;
            v103 = *(void **)v96;
            *(__m128i *)n = v99;
            if ( v103 )
            {
              *(_QWORD *)(v96 + 8) = 0;
              v151 = v102;
              qfree(v103);
              v102 = _mm_load_si128(&v151);
            }
            *(_QWORD *)v96 = v101;
            *(__m128i *)(v96 + 8) = v102;
            v104 = *(void **)kk;
            if ( *(_QWORD *)kk )
            {
              *(_QWORD *)(kk + 8) = 0;
              qfree(v104);
            }
            v105 = _mm_load_si128((const __m128i *)n);
            *(_QWORD *)kk = v100;
            v96 += 24LL;
            kk -= 24LL;
          }
        }
        v95 += 7;
      }
      while ( v60 != v95 );
    }
  }
}

