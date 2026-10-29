__m128i *__fastcall sub_5F1780(__int64 a1, const __m128i *a2)
{
  __int64 v3; // r12
  __m128i *v4; // rbp
  size_t v5; // rcx
  char *v6; // rdx
  __int64 v7; // r13
  __int64 i; // rbx
  char *v9; // rax
  void *v10; // rdi
  __m128i si128; // xmm4
  unsigned __int64 v12; // rbx
  size_t v13; // rdx
  __int64 v14; // rcx
  int v15; // r8d
  int v16; // r9d
  __int64 v17; // rax
  __int64 v18; // r13
  _QWORD *v19; // r12
  __int64 v20; // rbx
  __int64 v21; // r12
  size_t v22; // rax
  __int64 v23; // r13
  __int64 v24; // rsi
  unsigned __int8 v25; // al
  const void *v27; // r13
  void *v28; // rax
  char v29; // al
  __int64 v30; // rax
  int v31; // edx
  int v32; // ecx
  int v33; // r8d
  int v34; // r9d
  __int64 v35; // r13
  __int64 **v36; // r12
  __int64 *v37; // rbx
  __int64 *v38; // rbx
  __int64 v39; // r12
  __int64 v40; // rsi
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
  __int64 *v111; // rax
  __int64 v112; // rbx
  __int64 v113; // rax
  __int64 v114; // rdx
  size_t v115; // rax
  __m128i v116; // xmm0
  int v117; // eax
  size_t v118; // rbx
  char v119; // al
  size_t v120; // r15
  size_t v121; // r9
  size_t v122; // r14
  __int64 v123; // rax
  __int64 v124; // r12
  __int64 v125; // rax
  __int64 v126; // rbx
  __int64 v127; // r13
  __int64 v128; // rax
  __int64 v129; // rdx
  __m128i v130; // xmm0
  __m128i v131; // xmm0
  __int64 v132; // rbx
  const __m128i *v133; // rcx
  __m128i v134; // xmm0
  const __m128i *v135; // r12
  void *v136; // rax
  size_t v137; // rdx
  void *v138; // rax
  size_t v139; // rdx
  void *v140; // rax
  int v141; // [rsp+0h] [rbp-78h]
  int v142; // [rsp+8h] [rbp-70h]
  int v143[2]; // [rsp+8h] [rbp-70h]
  int v144[2]; // [rsp+8h] [rbp-70h]
  int v145[2]; // [rsp+8h] [rbp-70h]
  size_t v146[2]; // [rsp+10h] [rbp-68h] BYREF
  size_t n; // [rsp+20h] [rbp-58h]
  size_t v148; // [rsp+28h] [rbp-50h]
  __int64 v149; // [rsp+30h] [rbp-48h]
  _QWORD *v150; // [rsp+38h] [rbp-40h]

  v3 = 0;
  v142 = a1;
  v4 = (__m128i *)sub_5E7430(a1);
  v4->m128i_i64[0] = a2->m128i_i64[0];
  v4->m128i_i64[1] = a2->m128i_i64[1];
  v4[1].m128i_i64[0] = a2[1].m128i_i64[0];
  v4[1].m128i_i64[1] = a2[1].m128i_i64[1];
  v4[2].m128i_i64[0] = a2[2].m128i_i64[0];
  v4[2].m128i_i64[1] = a2[2].m128i_i64[1];
  v4[3] = _mm_loadu_si128(a2 + 3);
  v4[4] = _mm_loadu_si128(a2 + 4);
  v4[5].m128i_i64[0] = a2[5].m128i_i64[0];
  v4[5].m128i_i64[1] = a2[5].m128i_i64[1];
  v4[6].m128i_i64[0] = a2[6].m128i_i64[0];
  v4[6].m128i_i64[1] = a2[6].m128i_i64[1];
  copy_argloc(&v4[7], &a2[7]);
  v5 = a2[8].m128i_u64[1];
  *(__m128i *)v146 = _mm_unpacklo_epi64((__m128i)v5, (__m128i)v5);
  if ( v5 )
  {
    n = v5;
    v54 = 0;
    v55 = qalloc_or_throw(24 * v5);
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
        v148 = v60;
        v63 = (void *)qalloc_or_throw(v62);
        v64 = (const void **)v148;
        *(_QWORD *)(v58 + 16) = v61;
        *(_QWORD *)v58 = v63;
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
  v6 = (char *)v4[8].m128i_i64[0];
  if ( v6 )
  {
    v7 = v4[8].m128i_i64[1];
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
          v6 = (char *)v4[8].m128i_i64[0];
        }
      }
    }
    v4[8].m128i_i64[1] = 0;
    qfree(v6);
  }
  si128 = _mm_load_si128((const __m128i *)v146);
  v4[8].m128i_i64[0] = v3;
  *(__m128i *)((char *)v4 + 136) = si128;
  if ( &v4[9].m128i_u64[1] != &a2[9].m128i_u64[1] )
  {
    v12 = a2[10].m128i_u64[0];
    if ( v12 > 1 )
    {
      v27 = (const void *)a2[9].m128i_i64[1];
      v28 = (void *)v4[9].m128i_i64[1];
      if ( v4[10].m128i_i64[1] < v12 )
      {
        v28 = (void *)qvector_reserve(&v4[9].m128i_u64[1], v4[9].m128i_i64[1], a2[10].m128i_i64[0], 1);
        v4[9].m128i_i64[1] = (__int64)v28;
      }
      v4[10].m128i_i64[0] = v12;
      memmove(v28, v27, v12 - 1);
      *(_BYTE *)(v4[9].m128i_i64[1] + v12 - 1) = 0;
    }
    else
    {
      v4[10].m128i_i64[0] = 0;
    }
  }
  v4[11].m128i_i32[0] = a2[11].m128i_i32[0];
  v4[11].m128i_i32[1] = a2[11].m128i_i32[1];
  v4[11].m128i_i8[8] = a2[11].m128i_i8[8];
  v4[11].m128i_i8[9] = a2[11].m128i_i8[9];
  v4[11].m128i_i8[10] = a2[11].m128i_i8[10];
  v4[11].m128i_i8[11] = a2[11].m128i_i8[11];
  v4[11].m128i_i32[3] = a2[11].m128i_i32[3];
  v4->m128i_i64[0] = qstrdup(a2->m128i_i64[0]);
  v4->m128i_i64[1] = qstrdup(a2->m128i_i64[1]);
  if ( a2[1].m128i_i64[1] )
  {
    v17 = qalloc_or_throw(24);
    v18 = a2[1].m128i_i64[1];
    *(_QWORD *)v17 = 0;
    v19 = (_QWORD *)v17;
    *(_OWORD *)(v17 + 8) = 0;
    v20 = *(_QWORD *)(v18 + 8);
    if ( v20 )
    {
      v68 = (void *)qalloc_or_throw(8 * v20);
      *v19 = v68;
      v19[2] = v20;
      memcpy(v68, *(const void **)v18, 8 * v20);
      v19[1] = v20;
    }
    v4[1].m128i_i64[1] = (__int64)v19;
  }
  if ( !a2[1].m128i_i64[0] )
    goto LABEL_19;
  v21 = qalloc_or_throw(24);
  v22 = a2[1].m128i_u64[0];
  *(_QWORD *)v21 = 0;
  *(_OWORD *)(v21 + 8) = 0;
  v23 = *(_QWORD *)(v22 + 8);
  v146[0] = v22;
  if ( !v23 )
    goto LABEL_18;
  v69 = qalloc_or_throw(48 * v23);
  *(_QWORD *)v21 = v69;
  v70 = v69;
  v71 = 0;
  *(_QWORD *)(v21 + 16) = v23;
  while ( 1 )
  {
    v72 = 48 * v71 + v70;
    v14 = *(_QWORD *)v146[0] + 48 * v71;
    *(_QWORD *)v72 = 0;
    *(_OWORD *)(v72 + 8) = 0;
    v73 = *(_QWORD *)(v14 + 8);
    if ( v73 )
    {
      v74 = *(_QWORD *)(v14 + 8);
      v148 = v14;
      n = v73;
      v75 = (void *)qalloc_or_throw(v74);
      v76 = n;
      v77 = (const void **)v148;
      *(_QWORD *)v72 = v75;
      *(_QWORD *)(v72 + 16) = v76;
      memcpy(v75, *v77, v76);
      v14 = v148;
      *(_QWORD *)(v72 + 8) = n;
    }
    *(_QWORD *)(v72 + 24) = 0;
    *(_OWORD *)(v72 + 32) = 0;
    v13 = *(_QWORD *)(v14 + 32);
    if ( v13 )
      break;
    if ( v23 == ++v71 )
      goto LABEL_62;
LABEL_58:
    v70 = *(_QWORD *)v21;
  }
  v78 = *(_QWORD *)(v14 + 32);
  v148 = v14;
  n = v13;
  v79 = (void *)qalloc_or_throw(v78);
  v80 = n;
  *(_QWORD *)(v72 + 24) = v79;
  ++v71;
  v81 = v148;
  *(_QWORD *)(v72 + 40) = v80;
  memcpy(v79, *(const void **)(v81 + 24), v80);
  LODWORD(v13) = n;
  *(_QWORD *)(v72 + 32) = n;
  if ( v23 != v71 )
    goto LABEL_58;
LABEL_62:
  *(_QWORD *)(v21 + 8) = v23;
LABEL_18:
  v4[1].m128i_i64[0] = v21;
LABEL_19:
  v24 = a2[2].m128i_i64[0];
  if ( v24 )
    v4[2].m128i_i64[0] = sub_5F1780(v142, v24, v13, v14, v15, v16, v141, v142, v146[0], (void *)v146[1]);
  v25 = v4[11].m128i_i8[10] & 0xF;
  if ( v25 == 12 )
  {
    v65 = v142;
    v66 = sub_5F1780(v142, a2[3].m128i_i64[0], v13, v14, v15, v16, v141, v142, v146[0], (void *)v146[1]);
    v67 = (void *)v4[3].m128i_i64[1];
    v4[3].m128i_i64[0] = v66;
    v4[3].m128i_i64[1] = sub_5F2420(v65, v67);
    return v4;
  }
  if ( v25 <= 0xCu )
  {
    if ( v25 == 10 || v25 == 11 )
      v4[3].m128i_i64[0] = sub_5F1780(
                             v142,
                             a2[3].m128i_i64[0],
                             v13,
                             v14,
                             v15,
                             v16,
                             v141,
                             v142,
                             v146[0],
                             (void *)v146[1]);
    return v4;
  }
  if ( v25 != 13 )
    return v4;
  v4[4].m128i_i64[1] = qstrdup(v4[4].m128i_i64[1]);
  v29 = a2[11].m128i_i8[10] & 0x30;
  if ( v29 == 16 )
  {
LABEL_34:
    if ( v4[3].m128i_i64[0] )
    {
      v30 = qalloc_or_throw(24);
      v35 = v4[3].m128i_i64[0];
      *(_QWORD *)v30 = 0;
      v36 = (__int64 **)v30;
      *(_OWORD *)(v30 + 8) = 0;
      v37 = *(__int64 **)(v35 + 8);
      if ( v37 )
      {
        v111 = (__int64 *)qalloc_or_throw(8LL * (_QWORD)v37);
        *v36 = v111;
        v36[2] = v37;
        memcpy(v111, *(const void **)v35, 8LL * (_QWORD)v37);
        v36[1] = v37;
      }
      v4[3].m128i_i64[0] = (__int64)v36;
      v38 = *v36;
      v39 = (__int64)&(*v36)[(_QWORD)v36[1]];
      if ( (__int64 *)v39 != v38 )
      {
        do
        {
          v40 = *v38++;
          *(v38 - 1) = sub_5F1780(v142, v40, v31, v32, v33, v34, v141, v142, v146[0], (void *)v146[1]);
        }
        while ( v38 != (__int64 *)v39 );
      }
    }
    if ( v4[4].m128i_i64[0] )
    {
      v41 = operator new(0x30u);
      v42 = v4[4].m128i_i64[0];
      *(_DWORD *)(v41 + 8) = 0;
      v43 = (_QWORD *)v41;
      *(_QWORD *)(v41 + 16) = 0;
      *(_QWORD *)(v41 + 24) = v41 + 8;
      *(_QWORD *)(v41 + 32) = v41 + 8;
      *(_QWORD *)(v41 + 40) = 0;
      v44 = *(_QWORD *)(v42 + 16);
      if ( v44 )
      {
        v45 = sub_5E3EB0(v44, v41 + 8);
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
      v4[4].m128i_i64[0] = (__int64)v43;
    }
    if ( v4[3].m128i_i64[1] )
    {
      v51 = qalloc_or_throw(24);
      v52 = (_QWORD *)v4[3].m128i_i64[1];
      n = v51;
      *(_QWORD *)v51 = 0;
      *(_OWORD *)(v51 + 8) = 0;
      v53 = v52[1];
      v150 = v52;
      v149 = v53;
      if ( v53 )
      {
        v112 = v53;
        v113 = qalloc_or_throw(88 * v53);
        v146[0] = 0;
        v114 = v113;
        v115 = n;
        *(_QWORD *)n = v114;
        *(_QWORD *)(v115 + 16) = v112;
        while ( 1 )
        {
          v120 = v114 + 88 * v146[0];
          v121 = *v150 + 88 * v146[0];
          *(_QWORD *)v120 = 0;
          v122 = v121;
          *(_OWORD *)(v120 + 8) = 0;
          v123 = *(_QWORD *)(v121 + 8);
          *(_QWORD *)v145 = v123;
          if ( v123 )
          {
            v124 = *(_QWORD *)(v121 + 8);
            v125 = qalloc_or_throw(144 * v123);
            *(_QWORD *)v120 = v125;
            v126 = v125;
            v127 = 0;
            *(_QWORD *)(v120 + 16) = v124;
            while ( 1 )
            {
              v132 = 144 * v127 + v126;
              v133 = (const __m128i *)(*(_QWORD *)v122 + 144 * v127);
              v134 = _mm_loadu_si128(v133);
              *(_QWORD *)(v132 + 16) = 0;
              v135 = v133;
              *(_OWORD *)(v132 + 24) = 0;
              *(__m128i *)v132 = v134;
              if ( v133[1].m128i_i64[1] )
              {
                v148 = v133[1].m128i_u64[1];
                v136 = (void *)qalloc_or_throw(v148);
                v137 = v148;
                *(_QWORD *)(v132 + 16) = v136;
                *(_QWORD *)(v132 + 32) = v137;
                memcpy(v136, (const void *)v135[1].m128i_i64[0], v137);
                *(_QWORD *)(v132 + 24) = v148;
              }
              *(_QWORD *)(v132 + 40) = 0;
              *(_OWORD *)(v132 + 48) = 0;
              if ( v135[3].m128i_i64[0] )
              {
                v148 = v135[3].m128i_u64[0];
                v138 = (void *)qalloc_or_throw(v148);
                v139 = v148;
                *(_QWORD *)(v132 + 40) = v138;
                *(_QWORD *)(v132 + 56) = v139;
                memcpy(v138, (const void *)v135[2].m128i_i64[1], v139);
                *(_QWORD *)(v132 + 48) = v148;
              }
              *(_QWORD *)(v132 + 64) = 0;
              copy_tinfo_t(v132 + 64);
              v128 = v135[7].m128i_i64[1];
              ++v127;
              v129 = v135[8].m128i_i64[0];
              *(__m128i *)(v132 + 72) = _mm_loadu_si128((const __m128i *)((char *)v135 + 72));
              v130 = _mm_loadu_si128((const __m128i *)((char *)v135 + 88));
              *(_QWORD *)(v132 + 120) = v128;
              LOBYTE(v128) = v135[8].m128i_i8[8];
              *(__m128i *)(v132 + 88) = v130;
              v131 = _mm_loadu_si128((const __m128i *)((char *)v135 + 104));
              *(_QWORD *)(v132 + 128) = v129;
              *(_BYTE *)(v132 + 136) = v128;
              *(__m128i *)(v132 + 104) = v131;
              if ( *(_QWORD *)v145 == v127 )
                break;
              v126 = *(_QWORD *)v120;
            }
            *(_QWORD *)(v120 + 8) = *(_QWORD *)v145;
          }
          v116 = _mm_loadu_si128((const __m128i *)(v122 + 24));
          *(_QWORD *)(v120 + 40) = *(_QWORD *)(v122 + 40);
          v117 = *(_DWORD *)(v122 + 48);
          *(__m128i *)(v120 + 24) = v116;
          *(_DWORD *)(v120 + 48) = v117;
          *(_QWORD *)(v120 + 56) = 0;
          *(_OWORD *)(v120 + 64) = 0;
          v118 = *(_QWORD *)(v122 + 64);
          if ( v118 )
          {
            v140 = (void *)qalloc_or_throw(*(_QWORD *)(v122 + 64));
            *(_QWORD *)(v120 + 56) = v140;
            *(_QWORD *)(v120 + 72) = v118;
            memcpy(v140, *(const void **)(v122 + 56), v118);
            *(_QWORD *)(v120 + 64) = v118;
          }
          v119 = *(_BYTE *)(v122 + 80);
          ++v146[0];
          *(_BYTE *)(v120 + 80) = v119;
          if ( v149 == v146[0] )
            break;
          v114 = *(_QWORD *)n;
        }
        *(_QWORD *)(n + 8) = v149;
      }
      v4[3].m128i_i64[1] = n;
    }
  }
  else
  {
    if ( v29 != 32 )
    {
      if ( v29 )
        return v4;
      goto LABEL_34;
    }
    if ( a2[3].m128i_i64[0] )
    {
      v82 = qalloc_or_throw(56);
      v83 = a2[3].m128i_u64[0];
      *(_QWORD *)v82 = 0;
      v84 = v82;
      *(_OWORD *)(v82 + 8) = 0;
      v85 = *(_QWORD *)(v83 + 8);
      *(_QWORD *)v143 = v85;
      if ( v85 )
      {
        v146[0] = v83;
        v98 = v85;
        v99 = qalloc_or_throw(56 * v85);
        *(_QWORD *)v84 = v99;
        v83 = v146[0];
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
            v146[0] = v104;
            v106 = (void *)qalloc_or_throw(v105);
            v107 = v146[0];
            *(_QWORD *)v102 = v106;
            *(_QWORD *)(v102 + 16) = v107;
            memcpy(v106, *(const void **)v103, v107);
            v83 = n;
            *(_QWORD *)(v102 + 8) = v146[0];
          }
          *(_QWORD *)(v102 + 24) = 0;
          *(_OWORD *)(v102 + 32) = 0;
          v101 = *(_QWORD *)(v103 + 32);
          if ( v101 )
          {
            v108 = *(_QWORD *)(v103 + 32);
            n = v83;
            v146[0] = v101;
            v109 = (void *)qalloc_or_throw(v108);
            v110 = v146[0];
            *(_QWORD *)(v102 + 24) = v109;
            *(_QWORD *)(v102 + 40) = v110;
            memcpy(v109, *(const void **)(v103 + 24), v110);
            v83 = n;
            *(_QWORD *)(v102 + 32) = v146[0];
          }
          ++v100;
          *(_QWORD *)(v102 + 48) = *(_QWORD *)(v103 + 48);
          if ( *(_QWORD *)v143 == v100 )
            break;
          v99 = *(_QWORD *)v84;
        }
        *(_QWORD *)(v84 + 8) = *(_QWORD *)v143;
      }
      *(_QWORD *)(v84 + 24) = 0;
      *(_OWORD *)(v84 + 32) = 0;
      v86 = *(_QWORD *)(v83 + 32);
      if ( v86 )
      {
        *(_QWORD *)v144 = v83;
        v96 = (void *)qalloc_or_throw(4 * v86);
        *(_QWORD *)(v84 + 24) = v96;
        *(_QWORD *)(v84 + 40) = v86;
        memcpy(v96, *(const void **)(*(_QWORD *)v144 + 24LL), 4 * v86);
        *(_QWORD *)(v84 + 32) = v86;
        v83 = *(_QWORD *)v144;
      }
      *(_DWORD *)(v84 + 48) = *(_DWORD *)(v83 + 48);
      *(_BYTE *)(v84 + 52) = *(_BYTE *)(v83 + 52);
      v4[3].m128i_i64[0] = v84;
    }
    if ( a2[3].m128i_i64[1] )
    {
      v87 = qalloc_or_throw(24);
      v88 = v4[3].m128i_i64[1];
      *(_QWORD *)v87 = 0;
      v89 = (_QWORD *)v87;
      *(_OWORD *)(v87 + 8) = 0;
      v90 = *(_QWORD *)(v88 + 8);
      if ( v90 )
      {
        v97 = (void *)qalloc_or_throw(16 * v90);
        *v89 = v97;
        v89[2] = v90;
        memcpy(v97, *(const void **)v88, 16 * v90);
        v89[1] = v90;
      }
      v4[3].m128i_i64[1] = (__int64)v89;
    }
    if ( a2[4].m128i_i64[0] )
    {
      v91 = qalloc_or_throw(24);
      v92 = v4[4].m128i_i64[0];
      *(_QWORD *)v91 = 0;
      v93 = (_QWORD *)v91;
      *(_OWORD *)(v91 + 8) = 0;
      v94 = *(_QWORD *)(v92 + 8);
      if ( v94 )
      {
        v95 = (void *)qalloc_or_throw(4 * v94);
        *v93 = v95;
        v93[2] = v94;
        memcpy(v95, *(const void **)v92, 4 * v94);
        v93[1] = v94;
      }
      v4[4].m128i_i64[0] = (__int64)v93;
    }
  }
  return v4;
}
