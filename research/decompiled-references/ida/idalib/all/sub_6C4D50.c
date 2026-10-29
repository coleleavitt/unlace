__int64 __fastcall sub_6C4D50(
        __int64 a1,
        _QWORD *a2,
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
  __m128i v27; // xmm0
  __int64 v28; // rdi
  char v29; // dl
  char v30; // r13
  __int64 v31; // rcx
  char *i; // rsi
  char v33; // r13
  char *v34; // rsi
  __int64 v36; // r12
  unsigned __int64 v37; // r9
  int v38; // r14d
  unsigned __int64 v39; // r13
  char *v40; // rsi
  const char *v41; // rdi
  _QWORD *v42; // r15
  void *v43; // rdi
  void *v44; // rdi
  unsigned __int64 v45; // rax
  size_t v46; // r9
  __int64 v47; // r15
  unsigned __int64 *v48; // r12
  char *v49; // rsi
  __int64 v50; // rbp
  __int64 v51; // rbx
  __int64 v52; // r12
  unsigned __int64 v53; // r14
  __int64 v54; // rax
  int v55; // eax
  const char *v56; // rdi
  char v57; // al
  const char *v58; // r12
  const char *v59; // r14
  unsigned __int64 v60; // rax
  unsigned __int64 v61; // rdx
  const char *v62; // rsi
  char *v63; // rdi
  char *v64; // rax
  __int64 v65; // rdx
  unsigned __int64 v66; // r12
  char v67; // al
  void *v68; // rax
  const void *v69; // rsi
  char *v70; // rax
  const void *v71; // rsi
  __int64 v72; // rdi
  __int64 func; // rax
  __m128i *v74; // r11
  unsigned __int64 v75; // rdx
  __m128i *v76; // r10
  __m128i *v77; // r10
  __m128i v78; // xmm0
  unsigned __int64 v79; // r12
  __m128i *v80; // r12
  __int64 v81; // rdx
  __m128i *v82; // r11
  __m128i *v83; // rax
  __int64 v84; // r14
  __int64 v85; // r14
  __int64 v86; // rdx
  __m128i *v87; // rcx
  __int64 v88; // rax
  double v89; // xmm4_8
  double v90; // xmm5_8
  char *v91; // rdi
  __int64 v92; // r12
  __int64 v93; // rbp
  char *v94; // rbx
  void *v95; // rdi
  void *v96; // rdi
  __int64 v97; // rcx
  __int64 v98; // r12
  __int64 v99; // rbp
  char *v100; // rbx
  void *v101; // rdi
  void *v102; // rdi
  void *v103; // rdi
  void *v104; // rdi
  __m128i v105; // xmm0
  __m128i v106; // xmm2
  __m128i v107; // xmm1
  __m128i v108; // xmm3
  __m128i v109; // xmm0
  __int64 v110; // rax
  __int64 v111; // rdx
  __m128i v112; // xmm3
  __m128i v113; // xmm3
  __m128i *v114; // r14
  __int64 v115; // r15
  __m128i v116; // xmm0
  __int32 v117; // eax
  __m128i v118; // xmm0
  __int32 v119; // eax
  __m128i v120; // xmm0
  const __m128i *v121; // r8
  __m128i v122; // xmm0
  const __m128i *v123; // r13
  void *v124; // rax
  void *v125; // rax
  char *v126; // rdi
  __int64 v127; // r14
  __int64 v128; // r15
  char *v129; // r13
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
  int v144; // [rsp+0h] [rbp-1C8h]
  __int64 v146; // [rsp+10h] [rbp-1B8h]
  __int64 v147; // [rsp+10h] [rbp-1B8h]
  __int64 v148; // [rsp+10h] [rbp-1B8h]
  size_t n; // [rsp+20h] [rbp-1A8h]
  size_t nb; // [rsp+20h] [rbp-1A8h]
  size_t na; // [rsp+20h] [rbp-1A8h]
  const char *v152; // [rsp+28h] [rbp-1A0h]
  __int64 v153; // [rsp+30h] [rbp-198h]
  __m128i *dest; // [rsp+40h] [rbp-188h]
  int v155; // [rsp+50h] [rbp-178h]
  char v156; // [rsp+57h] [rbp-171h]
  __int64 v158; // [rsp+68h] [rbp-160h]
  __int64 v159; // [rsp+70h] [rbp-158h]
  unsigned int v160; // [rsp+78h] [rbp-150h]
  bool v161; // [rsp+7Ch] [rbp-14Ch]
  __m128i v162[3]; // [rsp+80h] [rbp-148h] BYREF
  int v163[2]; // [rsp+B0h] [rbp-118h]
  __m128i v164; // [rsp+C0h] [rbp-108h] BYREF
  char *s2; // [rsp+D0h] [rbp-F8h] BYREF
  __int128 v166; // [rsp+D8h] [rbp-F0h]
  void *src; // [rsp+E8h] [rbp-E0h] BYREF
  __int128 v168; // [rsp+F0h] [rbp-D8h]
  unsigned __int64 v169; // [rsp+100h] [rbp-C8h] BYREF
  __m128i v170; // [rsp+108h] [rbp-C0h] BYREF
  __m128i v171; // [rsp+118h] [rbp-B0h] BYREF
  __m128i v172; // [rsp+128h] [rbp-A0h] BYREF
  __int64 v173; // [rsp+138h] [rbp-90h]
  __int64 v174; // [rsp+140h] [rbp-88h]
  __int8 v175; // [rsp+148h] [rbp-80h]
  __m128i v176; // [rsp+150h] [rbp-78h]
  __m128i v177; // [rsp+160h] [rbp-68h]
  __m128i v178; // [rsp+170h] [rbp-58h]
  __int64 v179; // [rsp+180h] [rbp-48h]
  unsigned __int64 v180; // [rsp+188h] [rbp-40h]

  v180 = __readfsqword(0x28u);
  v15 = qword_2CCB598;
  if ( !a5 )
    return (unsigned int)-4;
  v16 = *(_QWORD *)(a4 + 24);
  v17 = a1;
  v19 = a6;
  v20 = a6 >> 31;
  s2 = nullptr;
  v164 = _mm_loadu_si128((const __m128i *)a4);
  v166 = 0;
  if ( v16 )
  {
    v70 = (char *)qalloc_or_throw(v16);
    v71 = *(const void **)(a4 + 16);
    *((_QWORD *)&v166 + 1) = v16;
    s2 = v70;
    memcpy(v70, v71, v16);
    *(_QWORD *)&v166 = v16;
  }
  v21 = *(_QWORD *)(a4 + 48);
  src = nullptr;
  v168 = 0;
  if ( v21 )
  {
    v68 = (void *)qalloc_or_throw(v21);
    v69 = *(const void **)(a4 + 40);
    src = v68;
    *((_QWORD *)&v168 + 1) = v21;
    memcpy(v68, v69, v21);
    *(_QWORD *)&v168 = v21;
  }
  v169 = 0;
  copy_tinfo_t(&v169);
  v22 = _mm_loadu_si128((const __m128i *)(a4 + 72));
  v23 = *(_QWORD *)(a4 + 128);
  v173 = *(_QWORD *)(a4 + 120);
  v24 = *(_BYTE *)(a4 + 136);
  v170 = v22;
  v25 = _mm_loadu_si128((const __m128i *)(a4 + 88));
  v175 = v24;
  v26 = v166;
  v171 = v25;
  v27 = _mm_loadu_si128((const __m128i *)(a4 + 104));
  v174 = v23;
  v172 = v27;
  if ( (unsigned __int64)v166 <= 1 )
  {
    if ( v19 < 0 )
    {
      v33 = 1;
      goto LABEL_97;
    }
    v30 = 0;
    v31 = 0;
    if ( (v19 & 0x40) != 0 )
    {
      sub_6C0F70(a1, (__int64)&v164, &v169, a5);
      v26 = v166;
      v31 = 0;
    }
    goto LABEL_91;
  }
  v28 = *(_QWORD *)(v15 + 1672);
  v29 = v20;
  v30 = 0;
  v31 = 0;
LABEL_8:
  for ( i = s2; !sub_4D4430(v28, i, v29, v31); i = (char *)haystack )
  {
    v33 = v30 ^ 1;
    if ( v19 >= 0 )
    {
      v34 = (char *)haystack;
      if ( (_QWORD)v166 )
        v34 = s2;
LABEL_13:
      set_error_string(0, v34);
      v160 = -3;
      goto LABEL_14;
    }
LABEL_97:
    v30 = (a2 != nullptr) & v33;
    if ( !v30 || (v72 = a2[7], v72 == -1) || (func = get_func(v72)) == 0 )
    {
      v34 = (char *)haystack;
      if ( *(_QWORD *)(a4 + 24) )
        v34 = *(char **)(a4 + 16);
      goto LABEL_13;
    }
    v147 = func;
    build_stkvar_name((__int64)&s2, func, (unsigned __int64)v164.m128i_i64[0] >> 3);
    v26 = v166;
    v31 = v147;
LABEL_91:
    v28 = *(_QWORD *)(v15 + 1672);
    v29 = v20;
    if ( v26 )
      goto LABEL_8;
  }
  if ( v19 < 0 && !get_tinfo_size(0, v169, 0) && !get_tinfo_property(v169, 287) )
  {
    v160 = -5;
    goto LABEL_14;
  }
  v160 = sub_6C4620(a3, v164.m128i_i64, *(_BYTE *)(v17 + 51), v19, a5);
  if ( v160 )
    goto LABEL_14;
  v36 = v164.m128i_i64[1];
  v37 = *(_QWORD *)(v17 + 8);
  v158 = v164.m128i_i64[1] * a5;
  v159 = v164.m128i_i64[0];
  dest = *(__m128i **)v17;
  if ( *(_BYTE *)(v17 + 51) )
    goto LABEL_22;
  v74 = *(__m128i **)v17;
  if ( (__int64)a15 > 1 && v37 >= a15 )
  {
    v74 = &dest[9 * a15];
    v105 = _mm_loadu_si128(v74 - 9);
    a8 = _mm_srli_si128(v105, 8);
    if ( v164.m128i_i64[0] < _mm_add_epi64(v105, a8).m128i_u64[0] )
      v74 = *(__m128i **)v17;
  }
  if ( (v19 & 4) != 0 )
    goto LABEL_109;
  dest += 9 * v37;
  if ( v74 != dest )
  {
    v75 = v164.m128i_i64[0];
    v76 = v74;
    do
    {
      if ( sub_6B81E0(v76->m128i_i64[0], v76->m128i_i64[1], v75, v158) && (v77[8].m128i_i8[5] & 4) == 0 )
      {
        v160 = -13;
        goto LABEL_14;
      }
      v76 = v77 + 9;
    }
    while ( dest != v76 );
LABEL_109:
    dest = v74;
  }
LABEL_22:
  v38 = 1;
  v153 = ((_QWORD)v166 == 0) + (_QWORD)v166 - 1LL;
  v161 = v19 >= 0;
  v156 = (v19 >= 0) | v30 ^ 1;
LABEL_23:
  if ( !v37 )
    goto LABEL_85;
  v155 = v38;
  v39 = 0;
  v146 = v36 * a5;
  v144 = v19;
  while ( 1 )
  {
    v46 = *(_QWORD *)v17;
    v47 = 144 * v39;
    v48 = (unsigned __int64 *)(*(_QWORD *)v17 + 144 * v39);
    if ( a5 != 1 )
      break;
    v40 = (char *)haystack;
    if ( (_QWORD)v166 )
      v40 = s2;
    v41 = haystack;
    if ( v48[3] )
      v41 = (const char *)v48[2];
    if ( !strcmp(v41, v40) )
    {
      if ( *(_BYTE *)(v17 + 51) )
        goto LABEL_63;
LABEL_31:
      if ( (v144 & 4) == 0 || *v48 != v164.m128i_i64[0] && !sub_6B81E0(*v48, v48[1], v164.m128i_u64[0], v146) )
      {
LABEL_63:
        v62 = haystack;
        v19 = v144;
        if ( v48[3] )
          v62 = (const char *)v48[2];
        if ( !v62 )
          goto LABEL_85;
        if ( v156 )
        {
          set_error_string(0, v62);
          v160 = -21;
          goto LABEL_14;
        }
        v63 = s2;
        v64 = s2;
        if ( v153 )
        {
          v65 = v166;
          v66 = v153 + 1;
          if ( (unsigned __int64)v166 < v153 + 1 )
          {
            if ( *((_QWORD *)&v166 + 1) < v66 )
            {
              v64 = (char *)qvector_reserve(&s2, s2, v153 + 1, 1);
              s2 = v64;
              v65 = v166;
            }
            memset(&v64[v65], 0, v66 - v65);
            *(_QWORD *)&v166 = v153 + 1;
            v63 = s2;
          }
          else if ( v66 != (_QWORD)v166 )
          {
            *(_QWORD *)&v166 = v153 + 1;
          }
          v63[v153] = 0;
        }
        else if ( s2 )
        {
          *(_QWORD *)&v166 = 0;
          qfree(s2);
          s2 = nullptr;
          *((_QWORD *)&v166 + 1) = 0;
        }
        sub_35A910((__int64 *)&s2);
        v36 = v164.m128i_i64[1];
        v37 = *(_QWORD *)(v17 + 8);
        v38 = v155 + 1;
        goto LABEL_23;
      }
      v42 = (_QWORD *)(*(_QWORD *)v17 + v47);
      clear_tinfo_t(v42 + 8);
      v43 = (void *)v42[5];
      if ( v43 )
      {
        v42[6] = 0;
        qfree(v43);
      }
      v44 = (void *)v42[2];
      if ( v44 )
      {
        v42[3] = 0;
        qfree(v44);
      }
      memmove(v42, v42 + 18, *(_QWORD *)v17 + 144LL * *(_QWORD *)(v17 + 8) - (_QWORD)v42 - 144);
      v45 = *(_QWORD *)(v17 + 8) - 1LL;
      *(_QWORD *)(v17 + 8) = v45;
    }
    else
    {
LABEL_56:
      v45 = *(_QWORD *)(v17 + 8);
      ++v39;
    }
    if ( v39 >= v45 )
      goto LABEL_84;
  }
  v49 = s2;
  v50 = v17;
  v51 = *(_QWORD *)v17 + 144 * v39;
  v52 = v166;
  while ( 2 )
  {
    if ( v52 )
    {
LABEL_43:
      v53 = v52 - 1;
      if ( v49 )
      {
        if ( v52 != 1 )
        {
          v54 = *(_QWORD *)(v51 + 24);
          if ( v54 )
          {
            if ( v54 - 1 >= v53 )
            {
              n = v46;
              v152 = *(const char **)(v51 + 16);
              v55 = strncmp(v152, v49, v52 - 1);
              v46 = n;
              if ( !v55 )
              {
                v56 = &v152[v53];
                goto LABEL_49;
              }
            }
          }
          goto LABEL_71;
        }
        goto LABEL_73;
      }
      v56 = (const char *)(v53 + *(_QWORD *)(v51 + 16));
      goto LABEL_49;
    }
    while ( 1 )
    {
LABEL_73:
      v56 = *(const char **)(v51 + 16);
LABEL_49:
      if ( *v56 != 95 )
        goto LABEL_71;
      v57 = v56[1];
      if ( v57 != 48 )
        break;
      if ( !v56[2] )
      {
        v58 = v56 + 1;
LABEL_52:
        v59 = v58;
        while ( (unsigned int)v57 > 0x7F || !islower(v57) )
        {
          v57 = *++v59;
          if ( !v57 )
            goto LABEL_58;
        }
        v17 = v50;
        goto LABEL_56;
      }
LABEL_71:
      if ( ++v39 >= *(_QWORD *)(v50 + 8) )
        goto LABEL_83;
      v47 = 144 * v39;
      v51 = v46 + 144 * v39;
      if ( v52 )
        goto LABEL_43;
    }
    v58 = v56 + 1;
    if ( v57 )
      goto LABEL_52;
LABEL_58:
    v60 = strtoull(v58, (char **)v162, 16);
    if ( !*(_BYTE *)v162[0].m128i_i64[0] )
    {
      v61 = (unsigned __int64)v164.m128i_i64[0] >> 3;
      if ( v60 < ((unsigned __int64)v164.m128i_i64[0] >> 3) + ((unsigned __int64)v164.m128i_i64[1] >> 3) * a5
        && v60 >= v61
        && !((v60 - v61) % ((unsigned __int64)v164.m128i_i64[1] >> 3)) )
      {
        v48 = (unsigned __int64 *)v51;
        v17 = v50;
        if ( !*(_BYTE *)(v50 + 51) )
          goto LABEL_31;
        goto LABEL_63;
      }
    }
    if ( ++v39 < *(_QWORD *)(v50 + 8) )
    {
      v46 = *(_QWORD *)v50;
      v52 = v166;
      v47 = 144 * v39;
      v49 = s2;
      v51 = *(_QWORD *)v50 + 144 * v39;
      continue;
    }
    break;
  }
LABEL_83:
  v17 = v50;
LABEL_84:
  v19 = v144;
LABEL_85:
  sub_54B890(v170.m128i_i64, &v169);
  v67 = *(_BYTE *)(v17 + 51);
  if ( !v67 )
  {
    v78.m128i_i64[0] = 0;
    v79 = *(_QWORD *)(v17 + 8);
    memset(v162, 0, sizeof(v162));
    v163[0] = 1;
    if ( v19 >= 0 )
    {
      v148 = 0;
      v86 = 0;
      if ( v79 )
      {
        v148 = qalloc_or_throw(144 * v79);
        v114 = (__m128i *)(v148 + 64);
        v115 = 0;
        do
        {
          v121 = (__m128i *)((char *)v114 + -64 - v148 + *(_QWORD *)v17);
          v122 = _mm_loadu_si128(v121);
          v114[-3].m128i_i64[0] = 0;
          v123 = v121;
          v114[-4] = v122;
          *(__m128i *)((char *)&v114[-3] + 8) = 0;
          if ( v121[1].m128i_i64[1] )
          {
            nb = v121[1].m128i_u64[1];
            v124 = (void *)qalloc_or_throw(nb);
            v114[-3].m128i_i64[0] = (__int64)v124;
            v114[-2].m128i_i64[0] = nb;
            memcpy(v124, (const void *)v123[1].m128i_i64[0], nb);
            v114[-3].m128i_i64[1] = nb;
          }
          v114[-2].m128i_i64[1] = 0;
          v114[-1] = 0;
          if ( v123[3].m128i_i64[0] )
          {
            na = v123[3].m128i_u64[0];
            v125 = (void *)qalloc_or_throw(na);
            v114[-2].m128i_i64[1] = (__int64)v125;
            v114[-1].m128i_i64[1] = na;
            memcpy(v125, (const void *)v123[2].m128i_i64[1], na);
            v114[-1].m128i_i64[0] = na;
          }
          v114->m128i_i64[0] = 0;
          copy_tinfo_t(v114);
          v116 = _mm_loadu_si128((const __m128i *)((char *)v123 + 72));
          ++v115;
          v114 += 9;
          v114[-6].m128i_i64[1] = v123[7].m128i_i64[1];
          v117 = v123[8].m128i_i32[0];
          *(__m128i *)((char *)v114 - 136) = v116;
          v118 = _mm_loadu_si128((const __m128i *)((char *)v123 + 88));
          v114[-5].m128i_i32[0] = v117;
          v119 = v123[8].m128i_i32[1];
          *(__m128i *)((char *)v114 - 120) = v118;
          v120 = _mm_loadu_si128((const __m128i *)((char *)v123 + 104));
          v114[-5].m128i_i32[1] = v119;
          LOBYTE(v119) = v123[8].m128i_i8[8];
          *(__m128i *)((char *)v114 - 104) = v120;
          v114[-5].m128i_i8[8] = v119;
        }
        while ( v79 != v115 );
        v126 = (char *)v162[0].m128i_i64[0];
        if ( v162[0].m128i_i64[0] )
        {
          if ( v162[0].m128i_i64[1] )
          {
            v127 = 0;
            v128 = v162[0].m128i_i64[1];
            do
            {
              v129 = &v126[144 * v127];
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
              v126 = (char *)v162[0].m128i_i64[0];
            }
            while ( v128 != v127 );
          }
          v162[0].m128i_i64[1] = 0;
          qfree(v126);
        }
        v67 = *(_BYTE *)(v17 + 51);
        v86 = *(_QWORD *)(v17 + 8);
      }
      HIBYTE(v163[0]) = v67;
      a8 = _mm_unpacklo_epi64((__m128i)v79, (__m128i)v79);
      v162[0].m128i_i64[0] = v148;
      v97 = *(_QWORD *)(v17 + 40);
      v78 = (__m128i)_mm_loadh_ps((const double *)(v17 + 32));
      v88 = 9 * v86;
      *(__m128i *)((char *)v162 + 8) = a8;
      v162[2].m128i_i64[1] = v97;
      LOWORD(v97) = *(_WORD *)(v17 + 48);
      *(__m128i *)((char *)&v162[1] + 8) = v78;
      LOWORD(v163[0]) = v97;
      BYTE2(v163[0]) = *(_BYTE *)(v17 + 50);
      v87 = *(__m128i **)v17;
      v80 = (__m128i *)(*(_QWORD *)v17 + 144 * v86);
      if ( dest != v80 )
      {
        while ( 1 )
        {
LABEL_112:
          if ( v19 >= 0 && get_tinfo_property(dest[4].m128i_i64[0], 287) )
            goto LABEL_158;
          if ( dest->m128i_i64[0] >= (unsigned __int64)(v158 + v159) )
            break;
          if ( sub_6B81E0(dest->m128i_i64[0], dest->m128i_i64[1], v164.m128i_u64[0], v158) )
          {
            v83 = *(__m128i **)v17;
            if ( (v82[8].m128i_i8[5] & 4) != 0
              && a5 == 1
              && &v82[9] != &v83[9 * *(_QWORD *)(v17 + 8)]
              && v82[9].m128i_i64[0] >= (unsigned __int64)(v81 + v164.m128i_i64[1]) )
            {
              if ( v19 >= 0 )
              {
                if ( get_tinfo_property(v169, 287) )
                  goto LABEL_199;
                v81 = v164.m128i_i64[0];
              }
              dest->m128i_i64[0] = v81;
              dest->m128i_i64[1] = v164.m128i_i64[1];
              if ( &dest[1] != (__m128i *)&s2 )
              {
                v84 = v166;
                if ( (unsigned __int64)v166 > 1 )
                {
                  v141 = s2;
                  v142 = (void *)dest[1].m128i_i64[0];
                  if ( dest[2].m128i_i64[0] < (unsigned __int64)v166 )
                  {
                    v142 = (void *)qvector_reserve(&dest[1], dest[1].m128i_i64[0], v166, 1);
                    dest[1].m128i_i64[0] = (__int64)v142;
                  }
                  dest[1].m128i_i64[1] = v84;
                  memmove(v142, v141, v84 - 1);
                  *(_BYTE *)(dest[1].m128i_i64[0] + v84 - 1) = 0;
                }
                else
                {
                  dest[1].m128i_i64[1] = 0;
                }
              }
              if ( &dest[2].m128i_u64[1] != (unsigned __int64 *)&src )
              {
                v85 = v168;
                if ( (unsigned __int64)v168 > 1 )
                {
                  v139 = src;
                  v140 = (void *)dest[2].m128i_i64[1];
                  if ( dest[3].m128i_i64[1] < (unsigned __int64)v168 )
                  {
                    v140 = (void *)qvector_reserve(&dest[2].m128i_u64[1], dest[2].m128i_i64[1], v168, 1);
                    dest[2].m128i_i64[1] = (__int64)v140;
                  }
                  dest[3].m128i_i64[0] = v85;
                  memmove(v140, v139, v85 - 1);
                  *(_BYTE *)(dest[2].m128i_i64[1] + v85 - 1) = 0;
                }
                else
                {
                  dest[3].m128i_i64[0] = 0;
                }
              }
              copy_tinfo_t(&dest[4]);
              *(__m128i *)((char *)dest + 72) = _mm_loadu_si128(&v170);
              *(__m128i *)((char *)dest + 88) = _mm_loadu_si128(&v171);
              v78 = _mm_loadu_si128(&v172);
              *(__m128i *)((char *)dest + 104) = v78;
              dest[7].m128i_i32[2] = v173;
              dest[8].m128i_i64[0] = v174;
              dest[8].m128i_i8[8] = v175;
              sub_6C1060(a2 + 12, (__int64)&v164);
LABEL_129:
              v86 = *(_QWORD *)(v17 + 8);
              v87 = *(__m128i **)v17;
              v88 = 9 * v86;
              v80 = (__m128i *)(*(_QWORD *)v17 + 144 * v86);
              if ( dest == v80 )
                goto LABEL_150;
              goto LABEL_130;
            }
            sub_544310(a2, (_QWORD *)v17, 0x8E38E38E38E38E39LL * (dest - v83));
            clear_tinfo_t(&dest[4]);
            v103 = (void *)dest[2].m128i_i64[1];
            if ( v103 )
            {
              dest[3].m128i_i64[0] = 0;
              qfree(v103);
            }
            v104 = (void *)dest[1].m128i_i64[0];
            if ( v104 )
            {
              dest[1].m128i_i64[1] = 0;
              qfree(v104);
            }
            memmove(dest, &dest[9], *(_QWORD *)v17 + 144LL * *(_QWORD *)(v17 + 8) - (_QWORD)dest - 144);
            v86 = *(_QWORD *)(v17 + 8) - 1LL;
            *(_QWORD *)(v17 + 8) = v86;
          }
          else
          {
            dest += 9;
            v86 = *(_QWORD *)(v17 + 8);
          }
          v87 = *(__m128i **)v17;
          v88 = 9 * v86;
          if ( dest == (__m128i *)(*(_QWORD *)v17 + 144 * v86) )
          {
            v80 = dest;
            goto LABEL_150;
          }
        }
        if ( v19 >= 0 && get_tinfo_property(v169, 287) )
          goto LABEL_199;
        dest = sub_6C1FD0((__int64)a2, (__int64 *)v17, dest, (__int64)&v164, a5);
        goto LABEL_129;
      }
LABEL_150:
      if ( v86 && v161 && get_tinfo_property(v87[v88 - 5].m128i_i64[0], 287) )
      {
LABEL_199:
        v132 = _mm_loadu_si128((const __m128i *)v17);
        v133 = _mm_loadu_si128((const __m128i *)(v17 + 16));
        v134 = _mm_loadu_si128((const __m128i *)(v17 + 32));
        *(__m128i *)v17 = _mm_load_si128(v162);
        v135 = *(_QWORD *)(v17 + 48);
        si128 = _mm_load_si128(&v162[1]);
        v137 = *(_QWORD *)v163;
        v176 = v132;
        *(__m128i *)(v17 + 16) = si128;
        v138 = _mm_load_si128(&v162[2]);
        v179 = v135;
        *(_QWORD *)(v17 + 48) = v137;
        *(_QWORD *)v163 = v135;
        v177 = v133;
        v178 = v134;
        *(__m128i *)(v17 + 32) = v138;
        v162[0] = v132;
        v162[1] = v133;
        v162[2] = v134;
LABEL_158:
        v160 = -12;
        goto LABEL_159;
      }
    }
    else
    {
      v80 = (__m128i *)(*(_QWORD *)v17 + 144 * v79);
      if ( dest != v80 )
        goto LABEL_112;
    }
    dest = sub_6C1FD0((__int64)a2, (__int64 *)v17, v80, (__int64)&v164, a5);
LABEL_130:
    if ( (unsigned __int8)sub_5EB0F0(0, (__int64)dest) )
      dest[8].m128i_i32[1] |= 0x100u;
    if ( !(unsigned int)sub_6B8250(
                          v17,
                          (__int64)&v164,
                          v19,
                          *(double *)v78.m128i_i64,
                          *(double *)a8.m128i_i64,
                          a9,
                          a10,
                          v89,
                          v90,
                          a13,
                          a14) )
    {
      v91 = (char *)v162[0].m128i_i64[0];
      if ( !v162[0].m128i_i64[0] )
        goto LABEL_14;
      v92 = v162[0].m128i_i64[1];
      if ( v162[0].m128i_i64[1] )
      {
        v93 = 0;
        do
        {
          v94 = &v91[144 * v93];
          clear_tinfo_t(v94 + 64);
          v95 = *((void **)v94 + 5);
          if ( v95 )
          {
            *((_QWORD *)v94 + 6) = 0;
            qfree(v95);
          }
          v96 = *((void **)v94 + 2);
          if ( v96 )
          {
            *((_QWORD *)v94 + 3) = 0;
            qfree(v96);
          }
          ++v93;
          v91 = (char *)v162[0].m128i_i64[0];
        }
        while ( v92 != v93 );
      }
      goto LABEL_141;
    }
    v106 = _mm_loadu_si128((const __m128i *)v17);
    v107 = _mm_loadu_si128((const __m128i *)(v17 + 16));
    v160 = -28;
    v108 = _mm_load_si128(v162);
    v109 = _mm_loadu_si128((const __m128i *)(v17 + 32));
    v110 = *(_QWORD *)(v17 + 48);
    v111 = *(_QWORD *)v163;
    v176 = v106;
    *(__m128i *)v17 = v108;
    v112 = _mm_load_si128(&v162[1]);
    v179 = v110;
    *(__m128i *)(v17 + 16) = v112;
    v113 = _mm_load_si128(&v162[2]);
    *(_QWORD *)(v17 + 48) = v111;
    *(_QWORD *)v163 = v110;
    v177 = v107;
    v178 = v109;
    *(__m128i *)(v17 + 32) = v113;
    v162[0] = v106;
    v162[1] = v107;
    v162[2] = v109;
LABEL_159:
    v91 = (char *)v162[0].m128i_i64[0];
    if ( !v162[0].m128i_i64[0] )
      goto LABEL_14;
    v98 = v162[0].m128i_i64[1];
    if ( v162[0].m128i_i64[1] )
    {
      v99 = 0;
      do
      {
        v100 = &v91[144 * v99];
        clear_tinfo_t(v100 + 64);
        v101 = *((void **)v100 + 5);
        if ( v101 )
        {
          *((_QWORD *)v100 + 6) = 0;
          qfree(v101);
        }
        v102 = *((void **)v100 + 2);
        if ( v102 )
        {
          *((_QWORD *)v100 + 3) = 0;
          qfree(v102);
        }
        ++v99;
        v91 = (char *)v162[0].m128i_i64[0];
      }
      while ( v98 != v99 );
    }
LABEL_141:
    v162[0].m128i_i64[1] = 0;
    qfree(v91);
    goto LABEL_14;
  }
  if ( a5 == 1 )
  {
    sub_6C1060((__int64 *)v17, (__int64)&v164);
    sub_6C1060(a2 + 12, (__int64)&v164);
  }
  else
  {
    v160 = -4;
  }
LABEL_14:
  clear_tinfo_t(&v169);
  if ( src )
  {
    *(_QWORD *)&v168 = 0;
    qfree(src);
  }
  if ( s2 )
  {
    *(_QWORD *)&v166 = 0;
    qfree(s2);
  }
  return v160;
}
