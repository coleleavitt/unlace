__int64 __fastcall sub_6A3F70(
        __int64 a1,
        const char *a2,
        unsigned int a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned int a6,
        double a7,
        __m128i a8,
        double a9,
        double a10,
        double a11,
        double a12,
        double a13,
        __m128 a14,
        unsigned __int64 a15)
{
  __int64 v15; // r15
  size_t v16; // r13
  __int64 v17; // rbx
  int v19; // ebp
  unsigned int v20; // r14d
  size_t v21; // r13
  __m128i v22; // xmm0
  __int64 v23; // rdx
  __int8 v24; // al
  __m128i v25; // xmm0
  __int64 v26; // rax
  __int64 v27; // rdi
  char v28; // dl
  char v29; // r13
  __int64 v30; // rcx
  char *i; // rsi
  char v32; // r13
  __int64 v34; // r14
  unsigned __int64 v35; // r10
  int v36; // r15d
  size_t v37; // r14
  unsigned __int64 v38; // r13
  char *v39; // rsi
  const char *v40; // rdi
  _QWORD *v41; // r12
  void *v42; // rdi
  void *v43; // rdi
  unsigned __int64 v44; // rax
  __m128i *v45; // r9
  unsigned __int64 v46; // r12
  __m128i *v47; // r15
  char *v48; // rsi
  __int64 v49; // rbp
  unsigned __int64 v50; // rbx
  __int64 v51; // r12
  unsigned __int64 v52; // r14
  __int64 v53; // rax
  int v54; // eax
  const char *v55; // rdi
  char v56; // al
  const char *v57; // r12
  const char *v58; // r14
  unsigned __int64 v59; // rax
  unsigned __int64 v60; // rdx
  unsigned int v61; // edi
  const char *v62; // rsi
  char *v63; // rdi
  char *v64; // rax
  __int64 v65; // rdx
  unsigned __int64 v66; // r12
  const char *m128i_i8; // rsi
  char v68; // dl
  void *v69; // rax
  const void *v70; // rsi
  char *v71; // rax
  __int64 v72; // rdi
  __int64 func; // rax
  __int64 v74; // r12
  unsigned int v75; // edx
  _QWORD *v76; // r11
  _QWORD *v77; // r10
  __int64 v78; // r11
  __m128i v79; // xmm0
  unsigned __int64 v80; // r14
  __m128i *v81; // r12
  __int64 v82; // rdx
  __m128i *v83; // r11
  __m128i *v84; // rax
  __int64 v85; // r14
  __int64 v86; // r14
  __int64 v87; // rax
  __m128i *v88; // rcx
  __int64 v89; // rdx
  double v90; // xmm4_8
  double v91; // xmm5_8
  char *v92; // rdi
  __int64 v93; // r12
  __int64 v94; // rbp
  char *v95; // rbx
  void *v96; // rdi
  void *v97; // rdi
  __int64 v98; // rcx
  __int64 v99; // r12
  __int64 v100; // rbp
  char *v101; // rbx
  void *v102; // rdi
  void *v103; // rdi
  void *v104; // rdi
  void *v105; // rdi
  __m128i v106; // xmm0
  __m128i v107; // xmm2
  __m128i v108; // xmm1
  __m128i v109; // xmm3
  __m128i v110; // xmm0
  __int64 v111; // rax
  __int64 v112; // rdx
  __m128i v113; // xmm3
  __m128i v114; // xmm3
  __int64 v115; // r12
  __int64 v116; // r15
  __m128i v117; // xmm0
  __int32 v118; // eax
  __m128i v119; // xmm0
  __int32 v120; // eax
  const __m128i *v121; // rcx
  __m128i v122; // xmm0
  const __m128i *v123; // r13
  void *v124; // rax
  void *v125; // rax
  char *v126; // rdi
  __int64 v127; // r13
  __int64 v128; // r15
  char *v129; // r12
  void *v130; // rdi
  void *v131; // rdi
  __m128i v132; // xmm2
  __m128i v133; // xmm1
  __m128i v134; // xmm0
  __int64 v135; // rax
  __m128i si128; // xmm3
  __int64 v137; // rdx
  __m128i v138; // xmm3
  void *v139; // r12
  void *v140; // rdi
  char *v141; // r12
  void *v142; // rdi
  int v144; // [rsp+0h] [rbp-1B8h]
  unsigned __int64 v145; // [rsp+0h] [rbp-1B8h]
  __int64 v146; // [rsp+0h] [rbp-1B8h]
  size_t n; // [rsp+10h] [rbp-1A8h]
  size_t na; // [rsp+10h] [rbp-1A8h]
  size_t nc; // [rsp+10h] [rbp-1A8h]
  size_t nb; // [rsp+10h] [rbp-1A8h]
  __m128i *v152; // [rsp+20h] [rbp-198h]
  const char *v153; // [rsp+28h] [rbp-190h]
  __int64 v154; // [rsp+30h] [rbp-188h]
  __m128i *dest; // [rsp+40h] [rbp-178h]
  int v156; // [rsp+50h] [rbp-168h]
  char v157; // [rsp+57h] [rbp-161h]
  __int64 v158; // [rsp+60h] [rbp-158h]
  __int64 v159; // [rsp+68h] [rbp-150h]
  __int64 v160; // [rsp+70h] [rbp-148h]
  unsigned int v161; // [rsp+78h] [rbp-140h]
  bool v162; // [rsp+7Ch] [rbp-13Ch]
  __m128i v163[3]; // [rsp+80h] [rbp-138h] BYREF
  int v164[2]; // [rsp+B0h] [rbp-108h]
  __m128i v165; // [rsp+C0h] [rbp-F8h] BYREF
  char *s2; // [rsp+D0h] [rbp-E8h] BYREF
  __int128 v167; // [rsp+D8h] [rbp-E0h]
  void *src; // [rsp+E8h] [rbp-D0h] BYREF
  __int128 v169; // [rsp+F0h] [rbp-C8h]
  const char *v170; // [rsp+100h] [rbp-B8h] BYREF
  __m128i v171; // [rsp+108h] [rbp-B0h] BYREF
  __m128i v172; // [rsp+118h] [rbp-A0h] BYREF
  __int64 v173; // [rsp+128h] [rbp-90h]
  __int64 v174; // [rsp+130h] [rbp-88h]
  __int8 v175; // [rsp+138h] [rbp-80h]
  __m128i v176; // [rsp+140h] [rbp-78h]
  __m128i v177; // [rsp+150h] [rbp-68h]
  __m128i v178; // [rsp+160h] [rbp-58h]
  __int64 v179; // [rsp+170h] [rbp-48h]
  unsigned __int64 v180; // [rsp+178h] [rbp-40h]

  v158 = (__int64)a2;
  v180 = __readfsqword(0x28u);
  v15 = qword_2CA1698;
  if ( !a5 )
    return (unsigned int)-4;
  v16 = *(_QWORD *)(a4 + 24);
  v17 = a1;
  v19 = a6;
  v20 = a6 >> 31;
  s2 = nullptr;
  v165 = _mm_loadu_si128((const __m128i *)a4);
  v167 = 0;
  if ( v16 )
  {
    v71 = (char *)qalloc_or_throw(v16, a2);
    a2 = *(const char **)(a4 + 16);
    *((_QWORD *)&v167 + 1) = v16;
    s2 = v71;
    memcpy(v71, a2, v16);
    *(_QWORD *)&v167 = v16;
  }
  v21 = *(_QWORD *)(a4 + 48);
  src = nullptr;
  v169 = 0;
  if ( v21 )
  {
    v69 = (void *)qalloc_or_throw(v21, a2);
    v70 = *(const void **)(a4 + 40);
    src = v69;
    *((_QWORD *)&v169 + 1) = v21;
    memcpy(v69, v70, v21);
    *(_QWORD *)&v169 = v21;
  }
  v170 = nullptr;
  copy_tinfo_t(&v170);
  v22 = _mm_loadu_si128((const __m128i *)(a4 + 72));
  v23 = *(_QWORD *)(a4 + 112);
  v173 = *(_QWORD *)(a4 + 104);
  v24 = *(_BYTE *)(a4 + 120);
  v171 = v22;
  v25 = _mm_loadu_si128((const __m128i *)(a4 + 88));
  v175 = v24;
  v26 = v167;
  v174 = v23;
  v172 = v25;
  if ( (unsigned __int64)v167 <= 1 )
  {
    if ( v19 < 0 )
    {
      v32 = 1;
      goto LABEL_95;
    }
    v29 = 0;
    v30 = 0;
    if ( (v19 & 0x40) != 0 )
    {
      sub_6A0340(a1, (__int64)&v165, &v170, a5);
      v26 = v167;
      v30 = 0;
    }
    goto LABEL_89;
  }
  v27 = *(_QWORD *)(v15 + 1480);
  v28 = v20;
  v29 = 0;
  v30 = 0;
LABEL_8:
  for ( i = s2; !(unsigned __int8)sub_4BD3C0(v27, i, v28, v30); i = (char *)haystack )
  {
    v32 = v29 ^ 1;
    if ( v19 >= 0 )
      goto LABEL_11;
LABEL_95:
    v29 = (v158 != 0) & v32;
    if ( !v29 || (v72 = *(unsigned int *)(v158 + 56), (_DWORD)v72 == -1) || (func = get_func(v72)) == 0 )
    {
LABEL_11:
      set_error_string();
      v161 = -3;
      goto LABEL_12;
    }
    na = func;
    build_stkvar_name(&s2, func, (unsigned __int64)v165.m128i_i64[0] >> 3);
    v26 = v167;
    v30 = na;
LABEL_89:
    v27 = *(_QWORD *)(v15 + 1480);
    v28 = v20;
    if ( v26 )
      goto LABEL_8;
  }
  if ( v19 < 0 && !get_tinfo_size(0, v170, 0) && !get_tinfo_property(v170, 287) )
  {
    v161 = -5;
    goto LABEL_12;
  }
  v161 = sub_6A3860(a3, v165.m128i_i64, *(_BYTE *)(v17 + 51), v19, a5);
  if ( v161 )
    goto LABEL_12;
  v34 = v165.m128i_i64[1];
  v35 = *(_QWORD *)(v17 + 8);
  v159 = v165.m128i_i64[1] * a5;
  v160 = v165.m128i_i64[0];
  dest = *(__m128i **)v17;
  if ( !*(_BYTE *)(v17 + 51) )
  {
    v74 = *(_QWORD *)v17;
    if ( (__int64)a15 > 1 && v35 >= a15 )
    {
      v74 = *(_QWORD *)v17 + (a15 << 7);
      v106 = _mm_loadu_si128((const __m128i *)(v74 - 128));
      a8 = _mm_srli_si128(v106, 8);
      if ( v165.m128i_i64[0] < _mm_add_epi64(v106, a8).m128i_u64[0] )
        v74 = *(_QWORD *)v17;
    }
    if ( (v19 & 4) != 0 )
    {
      dest = (__m128i *)v74;
    }
    else
    {
      dest += 8 * v35;
      if ( (__m128i *)v74 != dest )
      {
        v75 = v165.m128i_i32[0];
        v145 = *(_QWORD *)(v17 + 8);
        v76 = (_QWORD *)v74;
        do
        {
          if ( sub_6978E0(*v76, v76[1], v75, v159) && (*(_BYTE *)(v78 + 117) & 4) == 0 )
          {
            v161 = -13;
            goto LABEL_12;
          }
          v76 = (_QWORD *)(v78 + 128);
        }
        while ( v77 != v76 );
        dest = (__m128i *)v74;
        v35 = v145;
      }
    }
  }
  v36 = 1;
  v154 = ((_QWORD)v167 == 0) + (_QWORD)v167 - 1LL;
  v162 = v19 >= 0;
  v157 = (v19 >= 0) | v29 ^ 1;
LABEL_21:
  v37 = a5 * v34;
  if ( !v35 )
    goto LABEL_83;
  v156 = v36;
  v38 = 0;
  n = v37;
  v144 = v19;
  while ( 1 )
  {
    v45 = *(__m128i **)v17;
    v46 = v38 << 7;
    v47 = (__m128i *)(*(_QWORD *)v17 + (v38 << 7));
    if ( a5 != 1 )
      break;
    v39 = (char *)haystack;
    if ( (_QWORD)v167 )
      v39 = s2;
    v40 = haystack;
    if ( v47[1].m128i_i64[1] )
      v40 = (const char *)v47[1].m128i_i64[0];
    if ( !strcmp(v40, v39) )
    {
      if ( *(_BYTE *)(v17 + 51) )
        goto LABEL_61;
LABEL_29:
      if ( (v144 & 4) == 0
        || v47->m128i_i64[0] != v165.m128i_i64[0]
        && !sub_6978E0(v47->m128i_i64[0], v47->m128i_i64[1], v165.m128i_u32[0], n) )
      {
LABEL_61:
        v19 = v144;
        v62 = haystack;
        if ( v47[1].m128i_i64[1] )
          v62 = (const char *)v47[1].m128i_i64[0];
        if ( !v62 )
          goto LABEL_83;
        if ( v157 )
        {
          set_error_string();
          v161 = -21;
          goto LABEL_12;
        }
        v63 = s2;
        v64 = s2;
        if ( v154 )
        {
          v65 = v167;
          v66 = v154 + 1;
          if ( (unsigned __int64)v167 < v154 + 1 )
          {
            if ( *((_QWORD *)&v167 + 1) < v66 )
            {
              v64 = (char *)qvector_reserve(&s2, s2, v154 + 1, 1);
              s2 = v64;
              v65 = v167;
            }
            memset(&v64[v65], 0, v66 - v65);
            *(_QWORD *)&v167 = v154 + 1;
            v63 = s2;
          }
          else if ( v66 != (_QWORD)v167 )
          {
            *(_QWORD *)&v167 = v154 + 1;
          }
          v63[v154] = 0;
        }
        else if ( s2 )
        {
          *(_QWORD *)&v167 = 0;
          qfree(s2);
          s2 = nullptr;
          *((_QWORD *)&v167 + 1) = 0;
        }
        sub_357520((__int64 *)&s2);
        v34 = v165.m128i_i64[1];
        v35 = *(_QWORD *)(v17 + 8);
        v36 = v156 + 1;
        goto LABEL_21;
      }
      v41 = (_QWORD *)(*(_QWORD *)v17 + v46);
      clear_tinfo_t(v41 + 8);
      v42 = (void *)v41[5];
      if ( v42 )
      {
        v41[6] = 0;
        qfree(v42);
      }
      v43 = (void *)v41[2];
      if ( v43 )
      {
        v41[3] = 0;
        qfree(v43);
      }
      memmove(v41, v41 + 16, *(_QWORD *)v17 + (*(_QWORD *)(v17 + 8) << 7) - (_QWORD)v41 - 128LL);
      v44 = *(_QWORD *)(v17 + 8) - 1LL;
      *(_QWORD *)(v17 + 8) = v44;
    }
    else
    {
LABEL_54:
      v44 = *(_QWORD *)(v17 + 8);
      ++v38;
    }
    if ( v38 >= v44 )
      goto LABEL_82;
  }
  v48 = s2;
  v49 = v17;
  v50 = v38 << 7;
  v51 = v167;
  while ( 2 )
  {
    if ( v51 )
    {
LABEL_41:
      v52 = v51 - 1;
      if ( v48 )
      {
        if ( v51 != 1 )
        {
          v53 = v47[1].m128i_i64[1];
          if ( v53 )
          {
            if ( v53 - 1 >= v52 )
            {
              v152 = v45;
              v153 = (const char *)v47[1].m128i_i64[0];
              v54 = strncmp(v153, v48, v51 - 1);
              v45 = v152;
              if ( !v54 )
              {
                v55 = &v153[v52];
                goto LABEL_47;
              }
            }
          }
          goto LABEL_69;
        }
        goto LABEL_71;
      }
      v55 = (const char *)(v52 + v47[1].m128i_i64[0]);
      goto LABEL_47;
    }
    while ( 1 )
    {
LABEL_71:
      v55 = (const char *)v47[1].m128i_i64[0];
LABEL_47:
      if ( *v55 != 95 )
        goto LABEL_69;
      v56 = v55[1];
      if ( v56 != 48 )
        break;
      if ( !v55[2] )
      {
        v57 = v55 + 1;
LABEL_50:
        v58 = v57;
        while ( (unsigned int)v56 > 0x7F || !islower(v56) )
        {
          v56 = *++v58;
          if ( !v56 )
            goto LABEL_56;
        }
        v17 = v49;
        goto LABEL_54;
      }
LABEL_69:
      if ( ++v38 >= *(_QWORD *)(v49 + 8) )
        goto LABEL_81;
      v50 = v38 << 7;
      v47 = &v45[8 * v38];
      if ( v51 )
        goto LABEL_41;
    }
    v57 = v55 + 1;
    if ( v56 )
      goto LABEL_50;
LABEL_56:
    v59 = strtoull(v57, (char **)v163, 16);
    if ( !*(_BYTE *)v163[0].m128i_i64[0] )
    {
      v60 = (unsigned __int64)v165.m128i_i64[0] >> 3;
      if ( v59 >= (unsigned int)((unsigned __int64)v165.m128i_i64[0] >> 3) )
      {
        v61 = (unsigned __int64)v165.m128i_i64[1] >> 3;
        if ( v59 < (unsigned int)v60 + (_DWORD)a5 * v61 && !(((int)v59 - (int)v60) % v61) )
        {
          v46 = v50;
          v17 = v49;
          if ( !*(_BYTE *)(v49 + 51) )
            goto LABEL_29;
          goto LABEL_61;
        }
      }
    }
    if ( ++v38 < *(_QWORD *)(v49 + 8) )
    {
      v45 = *(__m128i **)v49;
      v51 = v167;
      v50 = v38 << 7;
      v48 = s2;
      v47 = (__m128i *)(*(_QWORD *)v49 + (v38 << 7));
      continue;
    }
    break;
  }
LABEL_81:
  v17 = v49;
LABEL_82:
  v19 = v144;
LABEL_83:
  m128i_i8 = (const char *)&v170;
  sub_532820(v171.m128i_i64, &v170);
  v68 = *(_BYTE *)(v17 + 51);
  if ( !v68 )
  {
    v79.m128i_i64[0] = 0;
    v80 = *(_QWORD *)(v17 + 8);
    memset(v163, 0, sizeof(v163));
    v164[0] = 1;
    if ( v19 >= 0 )
    {
      v146 = 0;
      v87 = 0;
      if ( v80 )
      {
        v146 = qalloc_or_throw(v80 << 7, (const char *)&v170);
        v115 = v146;
        v116 = 0;
        do
        {
          v121 = (const __m128i *)(*(_QWORD *)v17 + (v116 << 7));
          v122 = _mm_loadu_si128(v121);
          *(_OWORD *)(v115 + 24) = 0;
          v123 = v121;
          *(_QWORD *)(v115 + 16) = 0;
          *(__m128i *)v115 = v122;
          if ( v121[1].m128i_i64[1] )
          {
            nc = v121[1].m128i_u64[1];
            v124 = (void *)qalloc_or_throw(nc, m128i_i8);
            *(_QWORD *)(v115 + 16) = v124;
            *(_QWORD *)(v115 + 32) = nc;
            m128i_i8 = (const char *)v123[1].m128i_i64[0];
            memcpy(v124, m128i_i8, nc);
            *(_QWORD *)(v115 + 24) = nc;
          }
          *(_QWORD *)(v115 + 40) = 0;
          *(_OWORD *)(v115 + 48) = 0;
          if ( v123[3].m128i_i64[0] )
          {
            nb = v123[3].m128i_u64[0];
            v125 = (void *)qalloc_or_throw(nb, m128i_i8);
            *(_QWORD *)(v115 + 40) = v125;
            *(_QWORD *)(v115 + 56) = nb;
            memcpy(v125, (const void *)v123[2].m128i_i64[1], nb);
            *(_QWORD *)(v115 + 48) = nb;
          }
          *(_QWORD *)(v115 + 64) = 0;
          m128i_i8 = v123[4].m128i_i8;
          copy_tinfo_t(v115 + 64);
          v117 = _mm_loadu_si128((const __m128i *)((char *)v123 + 72));
          ++v116;
          v115 += 128;
          *(_QWORD *)(v115 - 24) = v123[6].m128i_i64[1];
          v118 = v123[7].m128i_i32[0];
          *(__m128i *)(v115 - 56) = v117;
          v119 = _mm_loadu_si128((const __m128i *)((char *)v123 + 88));
          *(_DWORD *)(v115 - 16) = v118;
          v120 = v123[7].m128i_i32[1];
          *(__m128i *)(v115 - 40) = v119;
          *(_DWORD *)(v115 - 12) = v120;
          *(_BYTE *)(v115 - 8) = v123[7].m128i_i8[8];
        }
        while ( v80 != v116 );
        v126 = (char *)v163[0].m128i_i64[0];
        if ( v163[0].m128i_i64[0] )
        {
          if ( v163[0].m128i_i64[1] )
          {
            v127 = 0;
            v128 = v163[0].m128i_i64[1];
            do
            {
              v129 = &v126[128 * v127];
              clear_tinfo_t(v129 + 64);
              v130 = *((void **)v129 + 5);
              if ( v130 )
              {
                *((_QWORD *)v129 + 6) = 0;
                qfree(v130);
              }
              v131 = *((void **)v129 + 2);
              if ( v131 )
              {
                *((_QWORD *)v129 + 3) = 0;
                qfree(v131);
              }
              ++v127;
              v126 = (char *)v163[0].m128i_i64[0];
            }
            while ( v128 != v127 );
          }
          v163[0].m128i_i64[1] = 0;
          qfree(v126);
        }
        v68 = *(_BYTE *)(v17 + 51);
        v87 = *(_QWORD *)(v17 + 8);
      }
      HIBYTE(v164[0]) = v68;
      a8 = _mm_unpacklo_epi64((__m128i)v80, (__m128i)v80);
      v163[0].m128i_i64[0] = v146;
      v98 = *(_QWORD *)(v17 + 40);
      v79 = (__m128i)_mm_loadh_ps((const double *)(v17 + 32));
      v89 = v87 << 7;
      *(__m128i *)((char *)v163 + 8) = a8;
      v163[2].m128i_i64[1] = v98;
      LOWORD(v98) = *(_WORD *)(v17 + 48);
      *(__m128i *)((char *)&v163[1] + 8) = v79;
      LOWORD(v164[0]) = v98;
      BYTE2(v164[0]) = *(_BYTE *)(v17 + 50);
      v88 = *(__m128i **)v17;
      v81 = (__m128i *)(*(_QWORD *)v17 + (v87 << 7));
      if ( dest != v81 )
      {
        while ( 1 )
        {
LABEL_110:
          if ( v19 >= 0 && get_tinfo_property(dest[4].m128i_i64[0], 287) )
            goto LABEL_156;
          if ( dest->m128i_i64[0] >= (unsigned __int64)(v159 + v160) )
            break;
          if ( sub_6978E0(dest->m128i_i64[0], dest->m128i_i64[1], v165.m128i_u32[0], v159) )
          {
            v84 = *(__m128i **)v17;
            if ( (v83[7].m128i_i8[5] & 4) != 0
              && a5 == 1
              && &v83[8] != &v84[8 * *(_QWORD *)(v17 + 8)]
              && v83[8].m128i_i64[0] >= (unsigned __int64)(v82 + v165.m128i_i64[1]) )
            {
              if ( v19 >= 0 )
              {
                if ( get_tinfo_property(v170, 287) )
                  goto LABEL_197;
                v82 = v165.m128i_i64[0];
              }
              dest->m128i_i64[0] = v82;
              dest->m128i_i64[1] = v165.m128i_i64[1];
              if ( &dest[1] != (__m128i *)&s2 )
              {
                v85 = v167;
                if ( (unsigned __int64)v167 > 1 )
                {
                  v141 = s2;
                  v142 = (void *)dest[1].m128i_i64[0];
                  if ( dest[2].m128i_i64[0] < (unsigned __int64)v167 )
                  {
                    v142 = (void *)qvector_reserve(&dest[1], dest[1].m128i_i64[0], v167, 1);
                    dest[1].m128i_i64[0] = (__int64)v142;
                  }
                  dest[1].m128i_i64[1] = v85;
                  memmove(v142, v141, v85 - 1);
                  *(_BYTE *)(dest[1].m128i_i64[0] + v85 - 1) = 0;
                }
                else
                {
                  dest[1].m128i_i64[1] = 0;
                }
              }
              if ( &dest[2].m128i_u64[1] != (unsigned __int64 *)&src )
              {
                v86 = v169;
                if ( (unsigned __int64)v169 > 1 )
                {
                  v139 = src;
                  v140 = (void *)dest[2].m128i_i64[1];
                  if ( dest[3].m128i_i64[1] < (unsigned __int64)v169 )
                  {
                    v140 = (void *)qvector_reserve(&dest[2].m128i_u64[1], dest[2].m128i_i64[1], v169, 1);
                    dest[2].m128i_i64[1] = (__int64)v140;
                  }
                  dest[3].m128i_i64[0] = v86;
                  memmove(v140, v139, v86 - 1);
                  *(_BYTE *)(dest[2].m128i_i64[1] + v86 - 1) = 0;
                }
                else
                {
                  dest[3].m128i_i64[0] = 0;
                }
              }
              copy_tinfo_t(&dest[4]);
              *(__m128i *)((char *)dest + 72) = _mm_loadu_si128(&v171);
              v79 = _mm_loadu_si128(&v172);
              *(__m128i *)((char *)dest + 88) = v79;
              dest[6].m128i_i32[2] = v173;
              dest[7].m128i_i64[0] = v174;
              dest[7].m128i_i8[8] = v175;
              sub_6A0430((__int64 *)(v158 + 96), &v165);
LABEL_127:
              v87 = *(_QWORD *)(v17 + 8);
              v88 = *(__m128i **)v17;
              v89 = v87 << 7;
              v81 = (__m128i *)(*(_QWORD *)v17 + (v87 << 7));
              if ( dest == v81 )
                goto LABEL_148;
              goto LABEL_128;
            }
            sub_52B590(v158, (_QWORD *)v17, ((char *)dest - (char *)v84) >> 7);
            clear_tinfo_t(&dest[4]);
            v104 = (void *)dest[2].m128i_i64[1];
            if ( v104 )
            {
              dest[3].m128i_i64[0] = 0;
              qfree(v104);
            }
            v105 = (void *)dest[1].m128i_i64[0];
            if ( v105 )
            {
              dest[1].m128i_i64[1] = 0;
              qfree(v105);
            }
            memmove(dest, &dest[8], *(_QWORD *)v17 + (*(_QWORD *)(v17 + 8) << 7) - (_QWORD)dest - 128LL);
            v87 = *(_QWORD *)(v17 + 8) - 1LL;
            *(_QWORD *)(v17 + 8) = v87;
          }
          else
          {
            dest += 8;
            v87 = *(_QWORD *)(v17 + 8);
          }
          v88 = *(__m128i **)v17;
          v89 = v87 << 7;
          if ( dest == (__m128i *)(*(_QWORD *)v17 + (v87 << 7)) )
          {
            v81 = dest;
            goto LABEL_148;
          }
        }
        if ( v19 >= 0 && get_tinfo_property(v170, 287) )
          goto LABEL_197;
        dest = sub_6A1330(v158, (const char *)v17, dest, (__int64)&v165, a5);
        goto LABEL_127;
      }
LABEL_148:
      if ( v87 && v162 && get_tinfo_property(*(__int64 *)((char *)v88[-4].m128i_i64 + v89), 287) )
      {
LABEL_197:
        v132 = _mm_loadu_si128((const __m128i *)v17);
        v133 = _mm_loadu_si128((const __m128i *)(v17 + 16));
        v134 = _mm_loadu_si128((const __m128i *)(v17 + 32));
        *(__m128i *)v17 = _mm_load_si128(v163);
        v135 = *(_QWORD *)(v17 + 48);
        si128 = _mm_load_si128(&v163[1]);
        v137 = *(_QWORD *)v164;
        v176 = v132;
        *(__m128i *)(v17 + 16) = si128;
        v138 = _mm_load_si128(&v163[2]);
        v179 = v135;
        *(_QWORD *)(v17 + 48) = v137;
        *(_QWORD *)v164 = v135;
        v177 = v133;
        v178 = v134;
        *(__m128i *)(v17 + 32) = v138;
        v163[0] = v132;
        v163[1] = v133;
        v163[2] = v134;
LABEL_156:
        v161 = -12;
        goto LABEL_157;
      }
    }
    else
    {
      v81 = (__m128i *)((v80 << 7) + *(_QWORD *)v17);
      if ( dest != v81 )
        goto LABEL_110;
    }
    dest = sub_6A1330(v158, (const char *)v17, v81, (__int64)&v165, a5);
LABEL_128:
    if ( (unsigned __int8)sub_5CF320(0, (__int64)dest) )
      dest[7].m128i_i32[1] |= 0x100u;
    if ( !(unsigned int)sub_697960(
                          v17,
                          (__int64)&v165,
                          v19,
                          *(double *)v79.m128i_i64,
                          *(double *)a8.m128i_i64,
                          a9,
                          a10,
                          v90,
                          v91,
                          a13,
                          a14) )
    {
      v92 = (char *)v163[0].m128i_i64[0];
      if ( !v163[0].m128i_i64[0] )
        goto LABEL_12;
      v93 = v163[0].m128i_i64[1];
      if ( v163[0].m128i_i64[1] )
      {
        v94 = 0;
        do
        {
          v95 = &v92[128 * v94];
          clear_tinfo_t(v95 + 64);
          v96 = *((void **)v95 + 5);
          if ( v96 )
          {
            *((_QWORD *)v95 + 6) = 0;
            qfree(v96);
          }
          v97 = *((void **)v95 + 2);
          if ( v97 )
          {
            *((_QWORD *)v95 + 3) = 0;
            qfree(v97);
          }
          ++v94;
          v92 = (char *)v163[0].m128i_i64[0];
        }
        while ( v93 != v94 );
      }
      goto LABEL_139;
    }
    v107 = _mm_loadu_si128((const __m128i *)v17);
    v108 = _mm_loadu_si128((const __m128i *)(v17 + 16));
    v161 = -28;
    v109 = _mm_load_si128(v163);
    v110 = _mm_loadu_si128((const __m128i *)(v17 + 32));
    v111 = *(_QWORD *)(v17 + 48);
    v112 = *(_QWORD *)v164;
    v176 = v107;
    *(__m128i *)v17 = v109;
    v113 = _mm_load_si128(&v163[1]);
    v179 = v111;
    *(__m128i *)(v17 + 16) = v113;
    v114 = _mm_load_si128(&v163[2]);
    *(_QWORD *)(v17 + 48) = v112;
    *(_QWORD *)v164 = v111;
    v177 = v108;
    v178 = v110;
    *(__m128i *)(v17 + 32) = v114;
    v163[0] = v107;
    v163[1] = v108;
    v163[2] = v110;
LABEL_157:
    v92 = (char *)v163[0].m128i_i64[0];
    if ( !v163[0].m128i_i64[0] )
      goto LABEL_12;
    v99 = v163[0].m128i_i64[1];
    if ( v163[0].m128i_i64[1] )
    {
      v100 = 0;
      do
      {
        v101 = &v92[128 * v100];
        clear_tinfo_t(v101 + 64);
        v102 = *((void **)v101 + 5);
        if ( v102 )
        {
          *((_QWORD *)v101 + 6) = 0;
          qfree(v102);
        }
        v103 = *((void **)v101 + 2);
        if ( v103 )
        {
          *((_QWORD *)v101 + 3) = 0;
          qfree(v103);
        }
        ++v100;
        v92 = (char *)v163[0].m128i_i64[0];
      }
      while ( v99 != v100 );
    }
LABEL_139:
    v163[0].m128i_i64[1] = 0;
    qfree(v92);
    goto LABEL_12;
  }
  if ( a5 == 1 )
  {
    sub_6A0430((__int64 *)v17, &v165);
    sub_6A0430((__int64 *)(v158 + 96), &v165);
  }
  else
  {
    v161 = -4;
  }
LABEL_12:
  clear_tinfo_t(&v170);
  if ( src )
  {
    *(_QWORD *)&v169 = 0;
    qfree(src);
  }
  if ( s2 )
  {
    *(_QWORD *)&v167 = 0;
    qfree(s2);
  }
  return v161;
}

