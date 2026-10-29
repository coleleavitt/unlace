__m128i *__fastcall sub_5D5940(__int64 a1, const __m128i *a2)
{
  __int64 v3; // r12
  const char *m128i_i8; // rsi
  __m128i *v5; // rbp
  size_t v6; // rcx
  char *v7; // rdx
  __int64 v8; // r13
  __int64 i; // rbx
  char *v10; // rax
  void *v11; // rdi
  __m128i si128; // xmm4
  unsigned __int64 v13; // rbx
  size_t v14; // rdx
  __int64 v15; // rcx
  int v16; // r8d
  int v17; // r9d
  __int64 v18; // rax
  __int64 v19; // r13
  _QWORD *v20; // rbx
  __int64 v21; // r12
  __int64 v22; // r12
  size_t v23; // rax
  __int64 v24; // r13
  const char *v25; // rsi
  unsigned __int8 v26; // al
  const char *v28; // r13
  void *v29; // rax
  char v30; // al
  __int64 v31; // rax
  int v32; // edx
  int v33; // ecx
  int v34; // r8d
  int v35; // r9d
  __int64 v36; // r13
  const char ***v37; // r12
  const char **v38; // rbx
  const char **v39; // rbx
  __int64 v40; // r12
  __int64 v41; // rax
  __int64 v42; // r12
  _QWORD *v43; // rbx
  __int64 v44; // rdi
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rdx
  size_t v51; // rax
  _QWORD *v52; // rsi
  __int64 v53; // rax
  __int64 v54; // rbx
  __int64 v55; // rax
  size_t v56; // rcx
  __int128 v57; // xmm0
  __int64 v58; // r13
  __int64 v59; // rdx
  size_t v60; // rdx
  size_t v61; // r14
  __int64 v62; // rdi
  void *v63; // rax
  const void **v64; // rdx
  int v65; // ebx
  __int64 v66; // rax
  void *v67; // rsi
  void *v68; // rax
  __int64 v69; // rax
  __int64 v70; // rbx
  __int64 v71; // r14
  __int64 v72; // rbx
  size_t v73; // rdx
  __int64 v74; // rdi
  void *v75; // rax
  size_t v76; // rdx
  const void **v77; // rcx
  __int64 v78; // rdi
  void *v79; // rax
  size_t v80; // rdx
  size_t v81; // rcx
  __int64 v82; // rax
  size_t v83; // rcx
  __int64 v84; // r12
  __int64 v85; // rax
  __int64 v86; // rbx
  __int64 v87; // rax
  __int64 v88; // r14
  _QWORD *v89; // r12
  __int64 v90; // rbx
  __int64 v91; // rax
  __int64 v92; // r12
  _QWORD *v93; // rbx
  __int64 v94; // r14
  void *v95; // rax
  void *v96; // rax
  void *v97; // rax
  __int64 v98; // rbx
  __int64 v99; // rax
  __int64 v100; // r14
  size_t v101; // rdx
  __int64 v102; // r13
  __int64 v103; // rbx
  size_t v104; // rdx
  __int64 v105; // rdi
  void *v106; // rax
  size_t v107; // rdx
  __int64 v108; // rdi
  void *v109; // rax
  size_t v110; // rdx
  const char **v111; // rax
  __int64 v112; // rbx
  __int64 v113; // rax
  __int64 v114; // rdx
  size_t v115; // rax
  __m128i v116; // xmm0
  int v117; // eax
  size_t v118; // rbx
  char v119; // al
  const char *v120; // rsi
  size_t v121; // r15
  size_t v122; // r9
  size_t v123; // r14
  __int64 v124; // rax
  __int64 v125; // r12
  __int64 v126; // rax
  __int64 v127; // rbx
  __int64 v128; // r12
  __m128i v129; // xmm0
  __int64 v130; // rdx
  __int8 v131; // al
  __m128i v132; // xmm0
  __int64 v133; // rbx
  const __m128i *v134; // rcx
  __m128i v135; // xmm0
  const __m128i *v136; // r13
  void *v137; // rax
  size_t v138; // rdx
  void *v139; // rax
  size_t v140; // rdx
  void *v141; // rax
  int v142; // [rsp+0h] [rbp-78h]
  int v143; // [rsp+8h] [rbp-70h]
  int v144[2]; // [rsp+8h] [rbp-70h]
  int v145[2]; // [rsp+8h] [rbp-70h]
  int v146[2]; // [rsp+8h] [rbp-70h]
  size_t v147[2]; // [rsp+10h] [rbp-68h] BYREF
  size_t n; // [rsp+20h] [rbp-58h]
  size_t v149; // [rsp+28h] [rbp-50h]
  __int64 v150; // [rsp+30h] [rbp-48h]
  _QWORD *v151; // [rsp+38h] [rbp-40h]

  v3 = 0;
  v143 = a1;
  m128i_i8 = a2[7].m128i_i8;
  v5 = (__m128i *)sub_5CB650(a1);
  v5->m128i_i64[0] = a2->m128i_i64[0];
  v5->m128i_i64[1] = a2->m128i_i64[1];
  v5[1].m128i_i64[0] = a2[1].m128i_i64[0];
  v5[1].m128i_i64[1] = a2[1].m128i_i64[1];
  v5[2].m128i_i64[0] = a2[2].m128i_i64[0];
  v5[2].m128i_i64[1] = a2[2].m128i_i64[1];
  v5[3] = _mm_loadu_si128(a2 + 3);
  v5[4] = _mm_loadu_si128(a2 + 4);
  v5[5].m128i_i64[0] = a2[5].m128i_i64[0];
  v5[5].m128i_i64[1] = a2[5].m128i_i64[1];
  v5[6].m128i_i64[0] = a2[6].m128i_i64[0];
  v5[6].m128i_i64[1] = a2[6].m128i_i64[1];
  copy_argloc(&v5[7], m128i_i8);
  v6 = a2[8].m128i_u64[1];
  *(__m128i *)v147 = _mm_unpacklo_epi64((__m128i)v6, (__m128i)v6);
  if ( v6 )
  {
    n = v6;
    v54 = 0;
    v55 = qalloc_or_throw(24 * v6, m128i_i8);
    v56 = n;
    v57 = 0;
    v3 = v55;
    v58 = v55;
    do
    {
      v59 = a2[8].m128i_i64[0];
      *(_QWORD *)v58 = 0;
      *(_OWORD *)(v58 + 8) = v57;
      v60 = v59 + 24 * v54;
      v61 = *(_QWORD *)(v60 + 8);
      if ( v61 )
      {
        v62 = *(_QWORD *)(v60 + 8);
        n = v56;
        v149 = v60;
        v63 = (void *)qalloc_or_throw(v62, m128i_i8);
        v64 = (const void **)v149;
        *(_QWORD *)(v58 + 16) = v61;
        *(_QWORD *)v58 = v63;
        m128i_i8 = (const char *)*v64;
        memcpy(v63, *v64, v61);
        *(_QWORD *)(v58 + 8) = v61;
        v56 = n;
        v57 = 0;
      }
      ++v54;
      v58 += 24;
    }
    while ( v56 != v54 );
  }
  v7 = (char *)v5[8].m128i_i64[0];
  if ( v7 )
  {
    v8 = v5[8].m128i_i64[1];
    if ( v8 )
    {
      for ( i = 0; i != v8; ++i )
      {
        v10 = &v7[24 * i];
        v11 = *(void **)v10;
        if ( *(_QWORD *)v10 )
        {
          *((_QWORD *)v10 + 1) = 0;
          qfree(v11);
          v7 = (char *)v5[8].m128i_i64[0];
        }
      }
    }
    v5[8].m128i_i64[1] = 0;
    qfree(v7);
  }
  si128 = _mm_load_si128((const __m128i *)v147);
  v5[8].m128i_i64[0] = v3;
  *(__m128i *)((char *)v5 + 136) = si128;
  if ( &v5[9].m128i_u64[1] != &a2[9].m128i_u64[1] )
  {
    v13 = a2[10].m128i_u64[0];
    if ( v13 > 1 )
    {
      v28 = (const char *)a2[9].m128i_i64[1];
      v29 = (void *)v5[9].m128i_i64[1];
      if ( v5[10].m128i_i64[1] < v13 )
      {
        v29 = (void *)qvector_reserve(&v5[9].m128i_u64[1], v5[9].m128i_i64[1], a2[10].m128i_i64[0], 1);
        v5[9].m128i_i64[1] = (__int64)v29;
      }
      v5[10].m128i_i64[0] = v13;
      m128i_i8 = v28;
      memmove(v29, v28, v13 - 1);
      *(_BYTE *)(v5[9].m128i_i64[1] + v13 - 1) = 0;
    }
    else
    {
      v5[10].m128i_i64[0] = 0;
    }
  }
  v5[11].m128i_i32[0] = a2[11].m128i_i32[0];
  v5[11].m128i_i32[1] = a2[11].m128i_i32[1];
  v5[11].m128i_i8[8] = a2[11].m128i_i8[8];
  v5[11].m128i_i8[9] = a2[11].m128i_i8[9];
  v5[11].m128i_i8[10] = a2[11].m128i_i8[10];
  v5[11].m128i_i8[11] = a2[11].m128i_i8[11];
  v5[11].m128i_i32[3] = a2[11].m128i_i32[3];
  v5->m128i_i64[0] = qstrdup(a2->m128i_i64[0]);
  v5->m128i_i64[1] = qstrdup(a2->m128i_i64[1]);
  if ( a2[1].m128i_i64[1] )
  {
    v18 = qalloc_or_throw(24, m128i_i8);
    v19 = a2[1].m128i_i64[1];
    *(_QWORD *)v18 = 0;
    v20 = (_QWORD *)v18;
    *(_OWORD *)(v18 + 8) = 0;
    v21 = *(_QWORD *)(v19 + 8);
    if ( v21 )
    {
      v68 = (void *)qalloc_or_throw(8 * v21, m128i_i8);
      *v20 = v68;
      v20[2] = v21;
      m128i_i8 = *(const char **)v19;
      memcpy(v68, *(const void **)v19, 8 * v21);
      v20[1] = v21;
    }
    v5[1].m128i_i64[1] = (__int64)v20;
  }
  if ( !a2[1].m128i_i64[0] )
    goto LABEL_19;
  v22 = qalloc_or_throw(24, m128i_i8);
  v23 = a2[1].m128i_u64[0];
  *(_QWORD *)v22 = 0;
  *(_OWORD *)(v22 + 8) = 0;
  v24 = *(_QWORD *)(v23 + 8);
  v147[0] = v23;
  if ( !v24 )
    goto LABEL_18;
  v69 = qalloc_or_throw(48 * v24, m128i_i8);
  *(_QWORD *)v22 = v69;
  v70 = v69;
  v71 = 0;
  *(_QWORD *)(v22 + 16) = v24;
  while ( 1 )
  {
    v72 = 48 * v71 + v70;
    v15 = *(_QWORD *)v147[0] + 48 * v71;
    *(_QWORD *)v72 = 0;
    *(_OWORD *)(v72 + 8) = 0;
    v73 = *(_QWORD *)(v15 + 8);
    if ( v73 )
    {
      v74 = *(_QWORD *)(v15 + 8);
      v149 = v15;
      n = v73;
      v75 = (void *)qalloc_or_throw(v74, m128i_i8);
      v76 = n;
      v77 = (const void **)v149;
      *(_QWORD *)v72 = v75;
      *(_QWORD *)(v72 + 16) = v76;
      m128i_i8 = (const char *)*v77;
      memcpy(v75, *v77, v76);
      v15 = v149;
      *(_QWORD *)(v72 + 8) = n;
    }
    *(_QWORD *)(v72 + 24) = 0;
    *(_OWORD *)(v72 + 32) = 0;
    v14 = *(_QWORD *)(v15 + 32);
    if ( v14 )
      break;
    if ( v24 == ++v71 )
      goto LABEL_62;
LABEL_58:
    v70 = *(_QWORD *)v22;
  }
  v78 = *(_QWORD *)(v15 + 32);
  v149 = v15;
  n = v14;
  v79 = (void *)qalloc_or_throw(v78, m128i_i8);
  v80 = n;
  *(_QWORD *)(v72 + 24) = v79;
  ++v71;
  v81 = v149;
  *(_QWORD *)(v72 + 40) = v80;
  m128i_i8 = *(const char **)(v81 + 24);
  memcpy(v79, m128i_i8, v80);
  LODWORD(v14) = n;
  *(_QWORD *)(v72 + 32) = n;
  if ( v24 != v71 )
    goto LABEL_58;
LABEL_62:
  *(_QWORD *)(v22 + 8) = v24;
LABEL_18:
  v5[1].m128i_i64[0] = v22;
LABEL_19:
  v25 = (const char *)a2[2].m128i_i64[0];
  if ( v25 )
    v5[2].m128i_i64[0] = sub_5D5940(v143, (int)v25, v14, v15, v16, v17, v142, v143, v147[0], (void *)v147[1]);
  v26 = v5[11].m128i_i8[10] & 0xF;
  if ( v26 == 12 )
  {
    v65 = v143;
    v66 = sub_5D5940(v143, a2[3].m128i_i64[0], v14, v15, v16, v17, v142, v143, v147[0], (void *)v147[1]);
    v67 = (void *)v5[3].m128i_i64[1];
    v5[3].m128i_i64[0] = v66;
    v5[3].m128i_i64[1] = sub_5D65B0(v65, v67);
    return v5;
  }
  if ( v26 <= 0xCu )
  {
    if ( v26 == 10 || v26 == 11 )
      v5[3].m128i_i64[0] = sub_5D5940(
                             v143,
                             a2[3].m128i_i64[0],
                             v14,
                             v15,
                             v16,
                             v17,
                             v142,
                             v143,
                             v147[0],
                             (void *)v147[1]);
    return v5;
  }
  if ( v26 != 13 )
    return v5;
  v5[4].m128i_i64[1] = qstrdup(v5[4].m128i_i64[1]);
  v30 = a2[11].m128i_i8[10] & 0x30;
  if ( v30 == 16 )
  {
LABEL_34:
    if ( v5[3].m128i_i64[0] )
    {
      v31 = qalloc_or_throw(24, v25);
      v36 = v5[3].m128i_i64[0];
      *(_QWORD *)v31 = 0;
      v37 = (const char ***)v31;
      *(_OWORD *)(v31 + 8) = 0;
      v38 = *(const char ***)(v36 + 8);
      if ( v38 )
      {
        v111 = (const char **)qalloc_or_throw(8LL * (_QWORD)v38, v25);
        *v37 = v111;
        v37[2] = v38;
        v25 = *(const char **)v36;
        memcpy(v111, *(const void **)v36, 8LL * (_QWORD)v38);
        v37[1] = v38;
      }
      v5[3].m128i_i64[0] = (__int64)v37;
      v39 = *v37;
      v40 = (__int64)&(*v37)[(_QWORD)v37[1]];
      if ( (const char **)v40 != v39 )
      {
        do
        {
          v25 = *v39++;
          *(v39 - 1) = (const char *)sub_5D5940(
                                       v143,
                                       (int)v25,
                                       v32,
                                       v33,
                                       v34,
                                       v35,
                                       v142,
                                       v143,
                                       v147[0],
                                       (void *)v147[1]);
        }
        while ( v39 != (const char **)v40 );
      }
    }
    if ( v5[4].m128i_i64[0] )
    {
      v41 = operator new(0x30u);
      v42 = v5[4].m128i_i64[0];
      v25 = (const char *)(v41 + 8);
      *(_DWORD *)(v41 + 8) = 0;
      v43 = (_QWORD *)v41;
      *(_QWORD *)(v41 + 16) = 0;
      *(_QWORD *)(v41 + 24) = v41 + 8;
      *(_QWORD *)(v41 + 32) = v41 + 8;
      *(_QWORD *)(v41 + 40) = 0;
      v44 = *(_QWORD *)(v42 + 16);
      if ( v44 )
      {
        v45 = sub_5C8190(v44, v25);
        v46 = v45;
        do
        {
          v47 = v46;
          v46 = *(_QWORD *)(v46 + 16);
        }
        while ( v46 );
        v43[3] = v47;
        v48 = v45;
        do
        {
          v49 = v48;
          v48 = *(_QWORD *)(v48 + 24);
        }
        while ( v48 );
        v43[4] = v49;
        v50 = *(_QWORD *)(v42 + 40);
        v43[2] = v45;
        v43[5] = v50;
      }
      v5[4].m128i_i64[0] = (__int64)v43;
    }
    if ( v5[3].m128i_i64[1] )
    {
      v51 = qalloc_or_throw(24, v25);
      v52 = (_QWORD *)v5[3].m128i_i64[1];
      n = v51;
      *(_QWORD *)v51 = 0;
      *(_OWORD *)(v51 + 8) = 0;
      v53 = v52[1];
      v151 = v52;
      v150 = v53;
      if ( v53 )
      {
        v112 = v53;
        v113 = qalloc_or_throw(88 * v53, (const char *)v52);
        v147[0] = 0;
        v114 = v113;
        v115 = n;
        *(_QWORD *)n = v114;
        *(_QWORD *)(v115 + 16) = v112;
        while ( 1 )
        {
          v120 = (const char *)v147[0];
          v121 = v114 + 88 * v147[0];
          v122 = *v151 + 88 * v147[0];
          *(_QWORD *)v121 = 0;
          v123 = v122;
          *(_OWORD *)(v121 + 8) = 0;
          v124 = *(_QWORD *)(v122 + 8);
          *(_QWORD *)v146 = v124;
          if ( v124 )
          {
            v125 = *(_QWORD *)(v122 + 8);
            v126 = qalloc_or_throw(v124 << 7, v120);
            *(_QWORD *)(v121 + 16) = v125;
            v127 = v126;
            v128 = 0;
            for ( *(_QWORD *)v121 = v126; ; v127 = *(_QWORD *)v121 )
            {
              v133 = (v128 << 7) + v127;
              v134 = (const __m128i *)(*(_QWORD *)v123 + (v128 << 7));
              v135 = _mm_loadu_si128(v134);
              *(_QWORD *)(v133 + 16) = 0;
              v136 = v134;
              *(_OWORD *)(v133 + 24) = 0;
              *(__m128i *)v133 = v135;
              if ( v134[1].m128i_i64[1] )
              {
                v149 = v134[1].m128i_u64[1];
                v137 = (void *)qalloc_or_throw(v149, v120);
                v138 = v149;
                *(_QWORD *)(v133 + 16) = v137;
                *(_QWORD *)(v133 + 32) = v138;
                v120 = (const char *)v136[1].m128i_i64[0];
                memcpy(v137, v120, v138);
                *(_QWORD *)(v133 + 24) = v149;
              }
              *(_QWORD *)(v133 + 40) = 0;
              *(_OWORD *)(v133 + 48) = 0;
              if ( v136[3].m128i_i64[0] )
              {
                v149 = v136[3].m128i_u64[0];
                v139 = (void *)qalloc_or_throw(v149, v120);
                v140 = v149;
                *(_QWORD *)(v133 + 40) = v139;
                *(_QWORD *)(v133 + 56) = v140;
                memcpy(v139, (const void *)v136[2].m128i_i64[1], v140);
                *(_QWORD *)(v133 + 48) = v149;
              }
              *(_QWORD *)(v133 + 64) = 0;
              v120 = v136[4].m128i_i8;
              copy_tinfo_t(v133 + 64);
              v129 = _mm_loadu_si128((const __m128i *)((char *)v136 + 72));
              ++v128;
              v130 = v136[7].m128i_i64[0];
              *(_QWORD *)(v133 + 104) = v136[6].m128i_i64[1];
              v131 = v136[7].m128i_i8[8];
              *(__m128i *)(v133 + 72) = v129;
              v132 = _mm_loadu_si128((const __m128i *)((char *)v136 + 88));
              *(_QWORD *)(v133 + 112) = v130;
              *(_BYTE *)(v133 + 120) = v131;
              *(__m128i *)(v133 + 88) = v132;
              if ( *(_QWORD *)v146 == v128 )
                break;
            }
            *(_QWORD *)(v121 + 8) = *(_QWORD *)v146;
          }
          v116 = _mm_loadu_si128((const __m128i *)(v123 + 24));
          *(_QWORD *)(v121 + 40) = *(_QWORD *)(v123 + 40);
          v117 = *(_DWORD *)(v123 + 48);
          *(__m128i *)(v121 + 24) = v116;
          *(_DWORD *)(v121 + 48) = v117;
          *(_QWORD *)(v121 + 56) = 0;
          *(_OWORD *)(v121 + 64) = 0;
          v118 = *(_QWORD *)(v123 + 64);
          if ( v118 )
          {
            v141 = (void *)qalloc_or_throw(*(_QWORD *)(v123 + 64), v120);
            *(_QWORD *)(v121 + 56) = v141;
            *(_QWORD *)(v121 + 72) = v118;
            memcpy(v141, *(const void **)(v123 + 56), v118);
            *(_QWORD *)(v121 + 64) = v118;
          }
          v119 = *(_BYTE *)(v123 + 80);
          ++v147[0];
          *(_BYTE *)(v121 + 80) = v119;
          if ( v150 == v147[0] )
            break;
          v114 = *(_QWORD *)n;
        }
        *(_QWORD *)(n + 8) = v150;
      }
      v5[3].m128i_i64[1] = n;
    }
  }
  else
  {
    if ( v30 != 32 )
    {
      if ( v30 )
        return v5;
      goto LABEL_34;
    }
    if ( a2[3].m128i_i64[0] )
    {
      v82 = qalloc_or_throw(56, v25);
      v83 = a2[3].m128i_u64[0];
      *(_QWORD *)v82 = 0;
      v84 = v82;
      *(_OWORD *)(v82 + 8) = 0;
      v85 = *(_QWORD *)(v83 + 8);
      *(_QWORD *)v144 = v85;
      if ( v85 )
      {
        v147[0] = v83;
        v98 = v85;
        v99 = qalloc_or_throw(56 * v85, v25);
        *(_QWORD *)v84 = v99;
        v83 = v147[0];
        v100 = 0;
        *(_QWORD *)(v84 + 16) = v98;
        while ( 1 )
        {
          v102 = v99 + 56 * v100;
          v103 = *(_QWORD *)v83 + 56 * v100;
          *(_QWORD *)v102 = 0;
          *(_OWORD *)(v102 + 8) = 0;
          v104 = *(_QWORD *)(v103 + 8);
          if ( v104 )
          {
            v105 = *(_QWORD *)(v103 + 8);
            n = v83;
            v147[0] = v104;
            v106 = (void *)qalloc_or_throw(v105, v25);
            v107 = v147[0];
            *(_QWORD *)v102 = v106;
            *(_QWORD *)(v102 + 16) = v107;
            v25 = *(const char **)v103;
            memcpy(v106, *(const void **)v103, v107);
            v83 = n;
            *(_QWORD *)(v102 + 8) = v147[0];
          }
          *(_QWORD *)(v102 + 24) = 0;
          *(_OWORD *)(v102 + 32) = 0;
          v101 = *(_QWORD *)(v103 + 32);
          if ( v101 )
          {
            v108 = *(_QWORD *)(v103 + 32);
            n = v83;
            v147[0] = v101;
            v109 = (void *)qalloc_or_throw(v108, v25);
            v110 = v147[0];
            *(_QWORD *)(v102 + 24) = v109;
            *(_QWORD *)(v102 + 40) = v110;
            v25 = *(const char **)(v103 + 24);
            memcpy(v109, v25, v110);
            v83 = n;
            *(_QWORD *)(v102 + 32) = v147[0];
          }
          ++v100;
          *(_QWORD *)(v102 + 48) = *(_QWORD *)(v103 + 48);
          if ( *(_QWORD *)v144 == v100 )
            break;
          v99 = *(_QWORD *)v84;
        }
        *(_QWORD *)(v84 + 8) = *(_QWORD *)v144;
      }
      *(_QWORD *)(v84 + 24) = 0;
      *(_OWORD *)(v84 + 32) = 0;
      v86 = *(_QWORD *)(v83 + 32);
      if ( v86 )
      {
        *(_QWORD *)v145 = v83;
        v96 = (void *)qalloc_or_throw(4 * v86, v25);
        *(_QWORD *)(v84 + 24) = v96;
        *(_QWORD *)(v84 + 40) = v86;
        v25 = *(const char **)(*(_QWORD *)v145 + 24LL);
        memcpy(v96, v25, 4 * v86);
        *(_QWORD *)(v84 + 32) = v86;
        v83 = *(_QWORD *)v145;
      }
      *(_DWORD *)(v84 + 48) = *(_DWORD *)(v83 + 48);
      *(_BYTE *)(v84 + 52) = *(_BYTE *)(v83 + 52);
      v5[3].m128i_i64[0] = v84;
    }
    if ( a2[3].m128i_i64[1] )
    {
      v87 = qalloc_or_throw(24, v25);
      v88 = v5[3].m128i_i64[1];
      *(_QWORD *)v87 = 0;
      v89 = (_QWORD *)v87;
      *(_OWORD *)(v87 + 8) = 0;
      v90 = *(_QWORD *)(v88 + 8);
      if ( v90 )
      {
        v97 = (void *)qalloc_or_throw(16 * v90, v25);
        *v89 = v97;
        v89[2] = v90;
        v25 = *(const char **)v88;
        memcpy(v97, *(const void **)v88, 16 * v90);
        v89[1] = v90;
      }
      v5[3].m128i_i64[1] = (__int64)v89;
    }
    if ( a2[4].m128i_i64[0] )
    {
      v91 = qalloc_or_throw(24, v25);
      v92 = v5[4].m128i_i64[0];
      *(_QWORD *)v91 = 0;
      v93 = (_QWORD *)v91;
      *(_OWORD *)(v91 + 8) = 0;
      v94 = *(_QWORD *)(v92 + 8);
      if ( v94 )
      {
        v95 = (void *)qalloc_or_throw(4 * v94, v25);
        *v93 = v95;
        v93[2] = v94;
        memcpy(v95, *(const void **)v92, 4 * v94);
        v93[1] = v94;
      }
      v5[4].m128i_i64[0] = (__int64)v93;
    }
  }
  return v5;
}

