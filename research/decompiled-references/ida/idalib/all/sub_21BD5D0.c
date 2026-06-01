void __fastcall sub_21BD5D0(
        _QWORD *a1,
        _QWORD *a2,
        const char *a3,
        const __m128i *a4,
        char a5,
        char a6,
        __int64 a7,
        int a8)
{
  _QWORD *v9; // r13
  const char *v10; // r12
  void *v12; // rdx
  __int64 v13; // rbp
  __int64 v14; // r9
  size_t v15; // rax
  _WORD *v16; // rdi
  size_t v17; // r14
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // r8
  __m128i *v20; // rdx
  __int64 v21; // rbp
  size_t v22; // rax
  _WORD *v23; // rdi
  size_t v24; // r12
  unsigned __int64 v25; // rax
  __m128i *v26; // rsi
  _QWORD *v27; // rbp
  __int64 v28; // rax
  __int64 i; // r13
  __int64 v30; // rax
  __int64 v31; // r14
  char v32; // r15
  const char *v33; // rbx
  const __m128i *v34; // rax
  __int64 v35; // rcx
  _BYTE *v36; // r12
  char *v37; // rsi
  size_t v38; // rax
  unsigned __int8 v39; // cl
  __int64 v40; // rax
  const char *v41; // rcx
  size_t v42; // r14
  unsigned __int64 v43; // r12
  size_t v44; // rax
  _BYTE *v45; // rsi
  size_t v46; // r12
  unsigned __int64 v47; // rdx
  char *v48; // rdi
  __int64 v49; // rdx
  __m128i *v50; // rsi
  int *v51; // r14
  size_t v52; // rbp
  void *v53; // r12
  __m128i *v54; // rbx
  size_t v55; // r13
  size_t v56; // rdx
  int v57; // eax
  size_t v58; // r12
  char *v59; // rcx
  size_t v60; // rdx
  int v61; // eax
  __m128i *v62; // rax
  __m128i *v63; // r8
  __m128i *v64; // r12
  __int64 v65; // rax
  void *v66; // r9
  void *v67; // rcx
  void *v68; // r11
  void *v69; // r10
  int v70; // eax
  signed __int64 v71; // rax
  int *v72; // r10
  __int64 v73; // rax
  void *v74; // r9
  size_t v75; // rcx
  size_t v76; // rdx
  const void *v77; // rdi
  int v78; // eax
  __int64 v79; // rcx
  size_t v80; // r14
  size_t v81; // rdx
  const void *v82; // rdi
  int v83; // eax
  __int64 v84; // r14
  int *v85; // rdx
  __int64 v86; // rdi
  size_t v87; // rax
  __int64 v88; // rbx
  __int64 v89; // r15
  int *v90; // rax
  size_t v91; // rbx
  _WORD *v92; // rbp
  __m128i *v93; // r12
  unsigned __int64 v94; // rdx
  __int64 v95; // rax
  __int64 v96; // rbp
  unsigned int v97; // r14d
  __int64 v98; // rcx
  __int64 v99; // rax
  __int64 v100; // rdx
  int v101; // ebx
  __int64 v102; // rax
  __m128i **v103; // r12
  __int64 v104; // rbx
  unsigned __int64 v105; // rax
  size_t v106; // rcx
  _BYTE *v107; // rdi
  __int64 v108; // rax
  _WORD *v109; // rbx
  _BYTE *v110; // rax
  char *v111; // r12
  void **v112; // rbp
  void **v113; // rbx
  char *v114; // r13
  char *v115; // rdi
  char *v116; // r14
  size_t v117; // r12
  _BYTE *v118; // rdx
  size_t v119; // rax
  unsigned __int64 v120; // rcx
  size_t v121; // rax
  _BYTE *v122; // rcx
  size_t v123; // r12
  unsigned __int64 v124; // rdx
  char *v125; // rdi
  unsigned __int64 v126; // rax
  unsigned __int64 v127; // rax
  __int64 v128; // r15
  unsigned __int64 v129; // rdi
  unsigned __int64 v130; // r12
  char *v131; // r12
  char *v132; // rax
  void *v133; // rdx
  __m128i v134; // xmm7
  const __m128i *v135; // rax
  __m128i *v136; // rdi
  const __m128i *v137; // rcx
  __m128i v138; // xmm7
  void **v139; // r15
  int v140; // eax
  __int64 v141; // rcx
  __int64 v142; // rax
  void *v143; // r9
  size_t v144; // r15
  size_t v145; // rdx
  const void *v146; // rsi
  signed __int64 v147; // rax
  __m128i v148; // xmm6
  void **v149; // r15
  void *v150; // rdi
  unsigned __int64 v151; // rdx
  char *v152; // rax
  size_t v153; // r12
  _BYTE *v154; // rdx
  size_t v155; // rax
  unsigned __int64 v156; // rcx
  size_t v157; // r15
  size_t v158; // r14
  size_t v159; // rdx
  signed __int64 v160; // rax
  int v161; // r11d
  void *v162; // r10
  int v163; // eax
  size_t v164; // r12
  unsigned __int64 v165; // rcx
  __int64 v166; // [rsp+0h] [rbp-168h]
  size_t v168; // [rsp+10h] [rbp-158h]
  char *src; // [rsp+18h] [rbp-150h]
  int srcc; // [rsp+18h] [rbp-150h]
  void *srca; // [rsp+18h] [rbp-150h]
  void *srcb; // [rsp+18h] [rbp-150h]
  char *s; // [rsp+28h] [rbp-140h]
  char *sa; // [rsp+28h] [rbp-140h]
  char *sf; // [rsp+28h] [rbp-140h]
  char *sg; // [rsp+28h] [rbp-140h]
  char *sb; // [rsp+28h] [rbp-140h]
  char *sh; // [rsp+28h] [rbp-140h]
  char *si; // [rsp+28h] [rbp-140h]
  char *sc; // [rsp+28h] [rbp-140h]
  char *sj; // [rsp+28h] [rbp-140h]
  char *sd; // [rsp+28h] [rbp-140h]
  char *sk; // [rsp+28h] [rbp-140h]
  char *se; // [rsp+28h] [rbp-140h]
  char *sl; // [rsp+28h] [rbp-140h]
  __int64 m128i_i64; // [rsp+40h] [rbp-128h] BYREF
  void *v188; // [rsp+48h] [rbp-120h]
  void *s1; // [rsp+50h] [rbp-118h]
  _QWORD *v190; // [rsp+58h] [rbp-110h]
  void *v191; // [rsp+60h] [rbp-108h]
  void *v192; // [rsp+68h] [rbp-100h]
  void *v193; // [rsp+70h] [rbp-F8h] BYREF
  size_t v194; // [rsp+78h] [rbp-F0h]
  _QWORD v195[2]; // [rsp+80h] [rbp-E8h] BYREF
  void *s2; // [rsp+90h] [rbp-D8h] BYREF
  size_t n; // [rsp+98h] [rbp-D0h]
  __m128i v198; // [rsp+A0h] [rbp-C8h] BYREF
  char v199[8]; // [rsp+B0h] [rbp-B8h] BYREF
  int v200; // [rsp+B8h] [rbp-B0h] BYREF
  void *v201; // [rsp+C0h] [rbp-A8h]
  int *v202; // [rsp+C8h] [rbp-A0h]
  int *v203; // [rsp+D0h] [rbp-98h]
  __int64 v204; // [rsp+D8h] [rbp-90h]
  void *ptr[2]; // [rsp+E0h] [rbp-88h] BYREF
  __m128i v206; // [rsp+F0h] [rbp-78h] BYREF
  __m128i v207; // [rsp+100h] [rbp-68h] BYREF
  __m128i v208; // [rsp+110h] [rbp-58h]
  __m128i v209; // [rsp+120h] [rbp-48h]

  v9 = a2;
  v10 = (const char *)a4;
  v12 = (void *)a2[4];
  if ( a2[3] - (_QWORD)v12 > 9u )
  {
    v14 = 8250;
    v13 = (__int64)a2;
    qmemcpy(v12, "OVERVIEW: ", 10);
    a2[4] += 10LL;
  }
  else
  {
    v13 = sub_227BF10(a2, "OVERVIEW: ", 10);
  }
  if ( !v10 )
    goto LABEL_6;
  v15 = strlen(v10);
  v16 = *(_WORD **)(v13 + 32);
  v17 = v15;
  v18 = *(_QWORD *)(v13 + 24) - (_QWORD)v16;
  if ( v17 > v18 )
  {
    v13 = sub_227BF10(v13, v10, v17);
LABEL_6:
    v16 = *(_WORD **)(v13 + 32);
    v18 = *(_QWORD *)(v13 + 24) - (_QWORD)v16;
    goto LABEL_7;
  }
  if ( v17 )
  {
    memcpy(v16, v10, v17);
    v16 = (_WORD *)(v17 + *(_QWORD *)(v13 + 32));
    v127 = *(_QWORD *)(v13 + 24) - (_QWORD)v16;
    *(_QWORD *)(v13 + 32) = v16;
    if ( v127 <= 1 )
      goto LABEL_8;
    goto LABEL_205;
  }
LABEL_7:
  if ( v18 <= 1 )
  {
LABEL_8:
    sub_227BF10(v13, "\n\n", 2);
    goto LABEL_9;
  }
LABEL_205:
  v19 = 2570;
  *v16 = 2570;
  *(_QWORD *)(v13 + 32) += 2LL;
LABEL_9:
  v20 = (__m128i *)a2[4];
  if ( a2[3] - (_QWORD)v20 > 6u )
  {
    v20->m128i_i32[0] = 1195463509;
    v21 = (__int64)a2;
    v20->m128i_i16[2] = 14917;
    v20->m128i_i8[6] = 32;
    a2[4] += 7LL;
  }
  else
  {
    v21 = sub_227BF10(a2, "USAGE: ", 7);
  }
  if ( !a3 )
    goto LABEL_14;
  v22 = strlen(a3);
  v23 = *(_WORD **)(v21 + 32);
  v24 = v22;
  v25 = *(_QWORD *)(v21 + 24) - (_QWORD)v23;
  if ( v24 > v25 )
  {
    v21 = sub_227BF10(v21, a3, v24);
LABEL_14:
    v23 = *(_WORD **)(v21 + 32);
    v25 = *(_QWORD *)(v21 + 24) - (_QWORD)v23;
    goto LABEL_15;
  }
  if ( v24 )
  {
    memcpy(v23, a3, v24);
    v23 = (_WORD *)(v24 + *(_QWORD *)(v21 + 32));
    v126 = *(_QWORD *)(v21 + 24) - (_QWORD)v23;
    *(_QWORD *)(v21 + 32) = v23;
    if ( v126 <= 1 )
      goto LABEL_16;
LABEL_202:
    v26 = (__m128i *)(elf_gnu_hash_indexes + 1890);
    *v23 = 2570;
    *(_QWORD *)(v21 + 32) += 2LL;
    goto LABEL_17;
  }
LABEL_15:
  if ( v25 > 1 )
    goto LABEL_202;
LABEL_16:
  v26 = (__m128i *)"\n\n";
  sub_227BF10(v21, "\n\n", 2);
LABEL_17:
  v27 = a1;
  v200 = 0;
  v202 = &v200;
  v203 = &v200;
  v28 = a1[5];
  v201 = nullptr;
  v204 = 0;
  if ( !(_DWORD)v28 )
  {
    if ( v9[2] != v9[4] )
      goto LABEL_166;
    return;
  }
  v190 = v9;
  v166 = (unsigned int)(v28 - 1);
  for ( i = 0; ; i = v30 )
  {
    v26 = (__m128i *)(80 * i + v27[4]);
    v31 = 5 * i;
    if ( v26[2].m128i_i8[12] )
    {
      if ( a5 || (v26[3].m128i_i8[0] & 1) == 0 )
      {
        if ( !*(_QWORD *)(a7 + 16) )
          std::__throw_bad_function_call();
        v32 = (*(__int64 (__fastcall **)(__int64))(a7 + 24))(a7);
        if ( !v32 )
        {
          a4 = (const __m128i *)v27[4];
          v26 = (__m128i *)&a4[v31];
          *(__m128i *)ptr = _mm_loadu_si128(&a4[v31]);
          v206 = _mm_loadu_si128(&a4[v31 + 1]);
          v33 = (const char *)v206.m128i_i64[1];
          v207 = _mm_loadu_si128(&a4[v31 + 2]);
          v208 = _mm_loadu_si128(&a4[v31 + 3]);
          v209 = _mm_loadu_si128(&a4[v31 + 4]);
          if ( ((v206.m128i_i32[1] | v206.m128i_i32[0]) & a8) == 0 )
            v33 = (const char *)v26->m128i_i64[1];
          if ( v33 || !a6 )
            goto LABEL_37;
          if ( (_DWORD)i == -1 )
            sub_21B97F0((__m128 *)ptr, 0, 0);
          else
            sub_21B97F0((__m128 *)ptr, (__int64)v26, (__int64)v27);
          if ( *((_WORD *)ptr[0] + 29) )
          {
            v26 = (__m128i *)(*((_QWORD *)ptr[1] + 4) + 80LL * ((unsigned int)*((unsigned __int16 *)ptr[0] + 29) - 1));
            sub_21B97F0((__m128 *)ptr, (__int64)v26, (__int64)ptr[1]);
          }
          else
          {
            v26 = nullptr;
            sub_21B97F0((__m128 *)ptr, 0, 0);
          }
          if ( ptr[0] )
            break;
        }
      }
    }
LABEL_19:
    v30 = i + 1;
    if ( v166 == i )
      goto LABEL_122;
LABEL_20:
    ;
  }
  a4 = (const __m128i *)v27[4];
  v34 = &a4[5 * (unsigned int)(*((_DWORD *)ptr[0] + 10) - 1)];
  *(__m128i *)ptr = _mm_loadu_si128(v34);
  v206 = _mm_loadu_si128(v34 + 1);
  v33 = (const char *)v206.m128i_i64[1];
  v20 = (__m128i *)(unsigned int)(v206.m128i_i32[0] | v206.m128i_i32[1]);
  v207 = _mm_loadu_si128(v34 + 2);
  v208 = _mm_loadu_si128(v34 + 3);
  v209 = _mm_loadu_si128(v34 + 4);
  if ( ((unsigned int)v20 & a8) == 0 )
    v33 = (const char *)v34->m128i_i64[1];
LABEL_37:
  if ( !v33 || !*v33 )
    goto LABEL_19;
  s = sub_21BA8A0((__int64)v27, (int)i + 1);
  if ( (_DWORD)i == -1 )
    sub_21B97F0((__m128 *)ptr, 0, 0);
  else
    sub_21B97F0((__m128 *)ptr, v35 + v31 * 16, (__int64)v27);
  v36 = ptr[0];
  v37 = (char *)(**((_QWORD **)ptr[1] + 1)
               + *(unsigned int *)(*((_QWORD *)ptr[1] + 4) + 80LL * (unsigned int)(*((_DWORD *)ptr[0] + 10) - 1) + 4));
  if ( v37 )
  {
    v38 = strlen(v37);
    v193 = v195;
    sub_21BA8F0(&v193, v37, (__int64)&v37[v38]);
  }
  else
  {
    LOBYTE(v195[0]) = 0;
    v193 = v195;
    v194 = 0;
  }
  v39 = v36[44];
  if ( v39 <= 0xCu )
  {
    v40 = 1LL << v39;
    if ( ((1LL << v39) & 0x1210) != 0 )
    {
LABEL_45:
      v41 = *(const char **)(v27[4] + v31 * 16 + 32);
      v42 = v194;
      v43 = 0x7FFFFFFFFFFFFFFFLL - v194;
      if ( v41 )
      {
        src = (char *)v41;
        v44 = strlen(v41);
        if ( v44 > v43 )
          goto LABEL_313;
        v45 = v193;
        v46 = v44 + v42;
        if ( v193 == v195 )
          v47 = 15;
        else
          v47 = v195[0];
        if ( v46 > v47 )
        {
          sub_998B30((__int64)&v193, v42, 0, src, v44);
          v194 = v46;
          *((_BYTE *)v193 + v46) = 0;
        }
        else
        {
          if ( v44 )
          {
            v48 = (char *)v193 + v42;
            if ( v44 == 1 )
              *v48 = *src;
            else
              memcpy(v48, src, v44);
            v45 = v193;
          }
          v194 = v46;
          v45[v46] = 0;
        }
      }
      else
      {
        if ( v43 <= 6 )
          goto LABEL_313;
        if ( v193 == v195 )
          v151 = 15;
        else
          v151 = v195[0];
        if ( v194 + 7 > v151 )
        {
          sub_998B30((__int64)&v193, v194, 0, "<value>", 7u);
        }
        else
        {
          v152 = (char *)v193 + v194;
          *(_DWORD *)v152 = 1818326588;
          *((_WORD *)v152 + 2) = 25973;
          v152[6] = 62;
        }
        v194 = v42 + 7;
        *((_BYTE *)v193 + v42 + 7) = 0;
      }
    }
    else
    {
      if ( (v40 & 0x9C0) != 0 )
      {
        v153 = v194;
        v154 = v193;
        v155 = v194 + 1;
        if ( v193 == v195 )
          v156 = 15;
        else
          v156 = v195[0];
        if ( v155 > v156 )
        {
          srcb = (void *)(v194 + 1);
          sub_998B30((__int64)&v193, v194, 0, nullptr, 1u);
          v154 = v193;
          v155 = (size_t)srcb;
        }
        v154[v153] = 32;
        v194 = v155;
        *((_BYTE *)v193 + v153 + 1) = 0;
        goto LABEL_45;
      }
      if ( (v40 & 0x400) != 0 )
      {
        v116 = *(char **)(v27[4] + v31 * 16 + 32);
        if ( v116 )
        {
          v117 = v194;
          v118 = v193;
          v119 = v194 + 1;
          if ( v193 == v195 )
            v120 = 15;
          else
            v120 = v195[0];
          if ( v119 > v120 )
          {
            srca = (void *)(v194 + 1);
            sub_998B30((__int64)&v193, v194, 0, nullptr, 1u);
            v118 = v193;
            v119 = (size_t)srca;
          }
          v118[v117] = 32;
          v194 = v119;
          *((_BYTE *)v193 + v117 + 1) = 0;
          v121 = strlen(v116);
          if ( 0x7FFFFFFFFFFFFFFFLL - v194 < v121 )
LABEL_313:
            std::__throw_length_error("basic_string::append");
          v122 = v193;
          v123 = v194 + v121;
          if ( v193 == v195 )
            v124 = 15;
          else
            v124 = v195[0];
          if ( v123 > v124 )
          {
            sub_998B30((__int64)&v193, v194, 0, v116, v121);
            v122 = v193;
          }
          else if ( v121 )
          {
            v125 = (char *)v193 + v194;
            if ( v121 == 1 )
              *v125 = *v116;
            else
              memcpy(v125, v116, v121);
            v122 = v193;
          }
          v194 = v123;
          v122[v123] = 0;
        }
        else
        {
          v161 = (unsigned __int8)v36[45];
          if ( v36[45] )
          {
            v162 = v27;
            v163 = 0;
            do
            {
              while ( 1 )
              {
                v164 = v194;
                if ( 0x7FFFFFFFFFFFFFFFLL - v194 <= 7 )
                  goto LABEL_313;
                v165 = v193 == v195 ? 15LL : v195[0];
                if ( v194 + 8 > v165 )
                  break;
                ++v163;
                *(_QWORD *)((char *)v193 + v194) = 0x3E65756C61763C20LL;
                v194 = v164 + 8;
                *((_BYTE *)v193 + v164 + 8) = 0;
                if ( v161 == v163 )
                  goto LABEL_293;
              }
              v188 = v162;
              LODWORD(m128i_i64) = v163;
              srcc = v161;
              sub_998B30((__int64)&v193, v194, 0, " <value>", 8u);
              v161 = srcc;
              v194 = v164 + 8;
              v162 = v188;
              v163 = m128i_i64 + 1;
              *((_BYTE *)v193 + v164 + 8) = 0;
            }
            while ( srcc != v163 );
LABEL_293:
            v27 = v162;
          }
        }
      }
    }
  }
  v49 = -1;
  s2 = &v198;
  if ( s )
    v49 = (__int64)&s[strlen(s)];
  v50 = (__m128i *)s;
  sub_21BA8F0(&s2, s, v49);
  if ( !v201 )
  {
    v51 = &v200;
    goto LABEL_78;
  }
  v50 = (__m128i *)v199;
  sa = (char *)v33;
  v188 = v27;
  v51 = &v200;
  v52 = n;
  m128i_i64 = i;
  v53 = v201;
  s1 = s2;
  v54 = (__m128i *)s2;
  while ( 2 )
  {
    while ( 2 )
    {
      v55 = *((_QWORD *)v53 + 5);
      v56 = v52;
      if ( v55 <= v52 )
        v56 = *((_QWORD *)v53 + 5);
      if ( !v56 || (v50 = v54, (v57 = memcmp(*((const void **)v53 + 4), v54, v56)) == 0) )
      {
        if ( (__int64)(v55 - v52) > 0x7FFFFFFF )
          goto LABEL_68;
        if ( (__int64)(v55 - v52) >= (__int64)0xFFFFFFFF80000000LL )
        {
          v57 = v55 - v52;
          break;
        }
LABEL_59:
        v53 = *((void **)v53 + 3);
        if ( !v53 )
          goto LABEL_69;
        continue;
      }
      break;
    }
    if ( v57 < 0 )
      goto LABEL_59;
LABEL_68:
    v51 = (int *)v53;
    v53 = *((void **)v53 + 2);
    if ( v53 )
      continue;
    break;
  }
LABEL_69:
  v58 = v52;
  v33 = sa;
  i = m128i_i64;
  v27 = v188;
  if ( v51 == &v200 )
    goto LABEL_78;
  v59 = *((char **)v51 + 5);
  v60 = (size_t)v59;
  if ( v58 <= (unsigned __int64)v59 )
    v60 = v58;
  if ( v60 )
  {
    v50 = *((__m128i **)v51 + 4);
    sf = *((char **)v51 + 5);
    v61 = memcmp(s1, v50, v60);
    v59 = sf;
    if ( v61 )
    {
LABEL_77:
      if ( v61 < 0 )
        goto LABEL_78;
      goto LABEL_114;
    }
  }
  if ( (__int64)(v58 - (_QWORD)v59) > 0x7FFFFFFF )
    goto LABEL_114;
  if ( (__int64)(v58 - (_QWORD)v59) >= (__int64)0xFFFFFFFF80000000LL )
  {
    v61 = v58 - (_DWORD)v59;
    goto LABEL_77;
  }
LABEL_78:
  v62 = (__m128i *)operator new(0x58u);
  v63 = (__m128i *)s2;
  v64 = v62;
  m128i_i64 = (__int64)v62[3].m128i_i64;
  v62[2].m128i_i64[0] = (__int64)v62[3].m128i_i64;
  if ( v63 == &v198 )
  {
    v63 = (__m128i *)m128i_i64;
    v62[3] = _mm_load_si128(&v198);
  }
  else
  {
    v65 = v198.m128i_i64[0];
    v64[2].m128i_i64[0] = (__int64)v63;
    v64[3].m128i_i64[0] = v65;
  }
  v66 = (void *)n;
  n = 0;
  v198.m128i_i8[0] = 0;
  v64[2].m128i_i64[1] = (__int64)v66;
  s2 = &v198;
  v64[4] = 0;
  v64[5].m128i_i64[0] = 0;
  if ( v51 == &v200 )
  {
    if ( v204 )
    {
      v72 = v203;
      v80 = *((_QWORD *)v203 + 5);
      v81 = v80;
      if ( (unsigned __int64)v66 <= v80 )
        v81 = (size_t)v66;
      if ( v81 )
      {
        v82 = *((const void **)v203 + 4);
        v188 = v66;
        si = (char *)v203;
        v83 = memcmp(v82, v63, v81);
        v72 = (int *)si;
        v66 = v188;
        if ( v83 )
        {
LABEL_107:
          if ( v83 < 0 )
            goto LABEL_110;
          goto LABEL_108;
        }
      }
      v84 = v80 - (_QWORD)v66;
      if ( v84 <= 0x7FFFFFFF )
      {
        if ( v84 < (__int64)0xFFFFFFFF80000000LL )
          goto LABEL_110;
        v83 = v84;
        goto LABEL_107;
      }
    }
LABEL_108:
    v51 = (int *)sub_21BAC70((__int64)v199, (__int64)v64[2].m128i_i64);
    v72 = v85;
    if ( v85 )
    {
LABEL_109:
      v32 = v51 != nullptr;
      goto LABEL_110;
    }
    v149 = (void **)v64[4].m128i_i64[0];
    se = (char *)v64[4].m128i_i64[1];
    if ( se != (char *)v149 )
    {
      do
      {
        while ( *v149 != v149 + 2 )
        {
          operator delete(*v149);
          v149 += 6;
          if ( se == (char *)v149 )
            goto LABEL_254;
        }
        v149 += 6;
      }
      while ( se != (char *)v149 );
LABEL_254:
      v149 = (void **)v64[4].m128i_i64[0];
    }
    if ( v149 )
      operator delete(v149);
    goto LABEL_257;
  }
  v67 = *((void **)v51 + 5);
  v68 = *((void **)v51 + 4);
  v69 = v67;
  if ( v66 <= v67 )
    v69 = v66;
  if ( !v69 )
  {
    v71 = (_BYTE *)v66 - (_BYTE *)v67;
    if ( (_BYTE *)v66 - (_BYTE *)v67 <= 0x7FFFFFFF )
      goto LABEL_86;
LABEL_229:
    v141 = (_BYTE *)v67 - (_BYTE *)v66;
    if ( v141 > 0x7FFFFFFF )
      goto LABEL_257;
    if ( v141 >= (__int64)0xFFFFFFFF80000000LL )
    {
      v140 = v141;
      goto LABEL_232;
    }
LABEL_233:
    v72 = v203;
    sd = (char *)v66;
    v188 = v63;
    if ( v51 == v203 )
      goto LABEL_110;
    v142 = std::_Rb_tree_increment(v51, v50->m128i_i8);
    v143 = sd;
    v144 = *(_QWORD *)(v142 + 40);
    v72 = (int *)v142;
    v145 = v144;
    if ( (unsigned __int64)sd <= v144 )
      v145 = (size_t)sd;
    if ( v145 )
    {
      v146 = *(const void **)(v142 + 32);
      s1 = sd;
      sk = (char *)v142;
      LODWORD(v147) = memcmp(v188, v146, v145);
      v72 = (int *)sk;
      v143 = s1;
      if ( (_DWORD)v147 )
        goto LABEL_240;
    }
    v147 = (signed __int64)v143 - v144;
    if ( (__int64)((__int64)v143 - v144) > 0x7FFFFFFF )
      goto LABEL_108;
    if ( v147 >= (__int64)0xFFFFFFFF80000000LL )
    {
LABEL_240:
      if ( (int)v147 >= 0 )
        goto LABEL_108;
    }
    if ( !*((_QWORD *)v51 + 3) )
      v72 = v51;
    v32 = *((_QWORD *)v51 + 3) != 0;
    goto LABEL_110;
  }
  v50 = *((__m128i **)v51 + 4);
  v192 = *((void **)v51 + 5);
  v191 = v66;
  s1 = v69;
  v188 = v68;
  sg = (char *)v63;
  v70 = memcmp(v63, v50, (size_t)v69);
  v63 = (__m128i *)sg;
  v68 = v188;
  v69 = s1;
  v66 = v191;
  v67 = v192;
  if ( v70 )
  {
    if ( v70 < 0 )
      goto LABEL_88;
    goto LABEL_228;
  }
  v71 = (_BYTE *)v191 - (_BYTE *)v192;
  if ( (_BYTE *)v191 - (_BYTE *)v192 > 0x7FFFFFFF )
    goto LABEL_228;
LABEL_86:
  if ( v71 >= (__int64)0xFFFFFFFF80000000LL && (int)v71 >= 0 )
  {
    if ( !v69 )
      goto LABEL_229;
LABEL_228:
    v50 = v63;
    s1 = v67;
    v188 = v66;
    sj = (char *)v63;
    v140 = memcmp(v68, v63, (size_t)v69);
    v63 = (__m128i *)sj;
    v66 = v188;
    v67 = s1;
    if ( !v140 )
      goto LABEL_229;
LABEL_232:
    if ( v140 < 0 )
      goto LABEL_233;
LABEL_257:
    v150 = (void *)v64[2].m128i_i64[0];
    if ( (void *)m128i_i64 != v150 )
      operator delete(v150);
    operator delete(v64);
    goto LABEL_114;
  }
LABEL_88:
  v72 = v202;
  sb = (char *)v66;
  v188 = v63;
  if ( v51 == v202 )
  {
    v32 = 1;
    goto LABEL_110;
  }
  v73 = std::_Rb_tree_decrement(v51);
  v74 = sb;
  v75 = *(_QWORD *)(v73 + 40);
  v72 = (int *)v73;
  v76 = v75;
  if ( (unsigned __int64)sb <= v75 )
    v76 = (size_t)sb;
  if ( v76 )
  {
    v77 = *(const void **)(v73 + 32);
    v191 = *(void **)(v73 + 40);
    s1 = sb;
    sh = (char *)v73;
    v78 = memcmp(v77, v188, v76);
    v72 = (int *)sh;
    v74 = s1;
    v75 = (size_t)v191;
    if ( v78 )
    {
LABEL_96:
      if ( v78 < 0 )
        goto LABEL_97;
      goto LABEL_108;
    }
  }
  v79 = v75 - (_QWORD)v74;
  if ( v79 > 0x7FFFFFFF )
    goto LABEL_108;
  if ( v79 >= (__int64)0xFFFFFFFF80000000LL )
  {
    v78 = v79;
    goto LABEL_96;
  }
LABEL_97:
  if ( *((_QWORD *)v72 + 3) )
  {
    v72 = v51;
    goto LABEL_109;
  }
LABEL_110:
  if ( v72 == &v200 || v32 )
  {
LABEL_112:
    v86 = 1;
    goto LABEL_113;
  }
  v157 = v64[2].m128i_u64[1];
  v158 = *((_QWORD *)v72 + 5);
  v159 = v158;
  if ( v157 <= v158 )
    v159 = v64[2].m128i_u64[1];
  if ( v159
    && (sl = (char *)v72,
        LODWORD(v160) = memcmp((const void *)v64[2].m128i_i64[0], *((const void **)v72 + 4), v159),
        v72 = (int *)sl,
        (_DWORD)v160) )
  {
LABEL_281:
    v86 = (unsigned int)v160 >> 31;
  }
  else
  {
    v86 = 0;
    v160 = v157 - v158;
    if ( (__int64)(v157 - v158) <= 0x7FFFFFFF )
    {
      if ( v160 < (__int64)0xFFFFFFFF80000000LL )
        goto LABEL_112;
      goto LABEL_281;
    }
  }
LABEL_113:
  v51 = (int *)v64;
  std::_Rb_tree_insert_and_rebalance(v86, v64, v72, &v200);
  ++v204;
LABEL_114:
  v26 = (__m128i *)v193;
  ptr[0] = &v206;
  sub_21BA9B0(ptr, v193, (__int64)v193 + v194);
  v207.m128i_i64[0] = (__int64)v33;
  v87 = strlen(v33);
  v88 = *((_QWORD *)v51 + 9);
  v207.m128i_i64[1] = v87;
  if ( v88 != *((_QWORD *)v51 + 10) )
  {
    *(_QWORD *)v88 = v88 + 16;
    if ( ptr[0] == &v206 )
    {
      *(__m128i *)(v88 + 16) = _mm_load_si128(&v206);
    }
    else
    {
      *(void **)v88 = ptr[0];
      *(_QWORD *)(v88 + 16) = v206.m128i_i64[0];
    }
    *(void **)(v88 + 8) = ptr[1];
    *(__m128i *)(v88 + 32) = _mm_load_si128(&v207);
    *((_QWORD *)v51 + 9) += 48LL;
    goto LABEL_118;
  }
  v128 = v88 - *((_QWORD *)v51 + 8);
  v188 = *((void **)v51 + 8);
  if ( 0xAAAAAAAAAAAAAAABLL * (v128 >> 4) )
  {
    v129 = 0x5555555555555556LL * (v128 >> 4);
    if ( 0xAAAAAAAAAAAAAAABLL * (v128 >> 4) > v129 )
    {
      v130 = -16;
    }
    else
    {
      v130 = -16;
      if ( v129 > 0x555555555555555LL )
        goto LABEL_210;
      if ( !v129 )
      {
        m128i_i64 = 48;
        v131 = nullptr;
        sc = nullptr;
        goto LABEL_211;
      }
      v130 = 32 * (v128 >> 4);
    }
  }
  else
  {
    v130 = 48;
  }
LABEL_210:
  sc = (char *)operator new(v130);
  v131 = &sc[v130];
  m128i_i64 = (__int64)(sc + 48);
LABEL_211:
  v132 = &sc[v128];
  v26 = &v206;
  *(_QWORD *)&sc[v128] = &sc[v128 + 16];
  if ( ptr[0] == &v206 )
  {
    *((__m128i *)v132 + 1) = _mm_load_si128(&v206);
  }
  else
  {
    *(void **)v132 = ptr[0];
    *((_QWORD *)v132 + 2) = v206.m128i_i64[0];
  }
  v133 = ptr[1];
  v206.m128i_i8[0] = 0;
  v134 = _mm_load_si128(&v207);
  ptr[1] = nullptr;
  *((_QWORD *)v132 + 1) = v133;
  v20 = &v206;
  a4 = (const __m128i *)v188;
  ptr[0] = &v206;
  *((__m128i *)v132 + 2) = v134;
  if ( (const __m128i *)v88 != a4 )
  {
    v135 = a4 + 1;
    v19 = (0xAAAAAAAAAAAAAABLL * ((unsigned __int64)(v88 - 48 - (_QWORD)a4) >> 4)) & 0xFFFFFFFFFFFFFFFLL;
    v20 = (__m128i *)sc;
    v136 = (__m128i *)&sc[48 * v19 + 48];
    do
    {
      while ( 1 )
      {
        v20->m128i_i64[0] = (__int64)v20[1].m128i_i64;
        v137 = (const __m128i *)v135[-1].m128i_i64[0];
        if ( v137 == v135 )
          break;
        v20->m128i_i64[0] = (__int64)v137;
        v20 += 3;
        v20[-2].m128i_i64[0] = v135->m128i_i64[0];
        v20[-3].m128i_i64[1] = v135[-1].m128i_i64[1];
        v138 = _mm_loadu_si128(v135 + 1);
        v135[-1].m128i_i64[0] = (__int64)v135;
        v135 += 3;
        v135[-4].m128i_i64[1] = 0;
        v135[-3].m128i_i8[0] = 0;
        v20[-1] = v138;
        if ( v20 == v136 )
          goto LABEL_217;
      }
      v20 += 3;
      v20[-2] = _mm_loadu_si128(v135);
      v20[-3].m128i_i64[1] = v135[-1].m128i_i64[1];
      v148 = _mm_loadu_si128(v135 + 1);
      v135[-1].m128i_i64[0] = (__int64)v135;
      v135 += 3;
      v135[-4].m128i_i64[1] = 0;
      v135[-3].m128i_i8[0] = 0;
      v20[-1] = v148;
    }
    while ( v20 != v136 );
LABEL_217:
    a4 = (const __m128i *)sc;
    v139 = (void **)v188;
    m128i_i64 = (__int64)&sc[48 * v19 + 96];
    do
    {
      while ( *v139 != v139 + 2 )
      {
        operator delete(*v139);
        v139 += 6;
        if ( (void **)v88 == v139 )
          goto LABEL_220;
      }
      v139 += 6;
    }
    while ( (void **)v88 != v139 );
  }
LABEL_220:
  if ( v188 )
    operator delete(v188);
  *((_QWORD *)v51 + 10) = v131;
  *((__m128 *)v51 + 4) = _mm_loadh_ps((const double *)&m128i_i64);
  if ( ptr[0] != &v206 )
    operator delete(ptr[0]);
LABEL_118:
  if ( s2 != &v198 )
    operator delete(s2);
  if ( v193 == v195 )
    goto LABEL_19;
  operator delete(v193);
  v30 = i + 1;
  if ( v166 != i )
    goto LABEL_20;
LABEL_122:
  v89 = (__int64)v202;
  v9 = v190;
  if ( v202 != &v200 )
  {
    v90 = v202;
    v91 = *((_QWORD *)v202 + 5);
    v92 = (_WORD *)v190[4];
LABEL_152:
    v93 = *(__m128i **)(v89 + 32);
    if ( !v91 )
      goto LABEL_156;
    v26 = *((__m128i **)v90 + 4);
    if ( !memcmp(*(const void **)(v89 + 32), v26, v91) )
    {
      if ( v91 <= v9[3] - (_QWORD)v92 )
      {
LABEL_155:
        v26 = v93;
        memcpy(v92, v93, v91);
        v109 = (_WORD *)(v9[4] + v91);
        v9[4] = v109;
        v92 = v109;
LABEL_156:
        v95 = (__int64)v9;
        if ( v9[3] - (_QWORD)v92 <= 1u )
          goto LABEL_129;
LABEL_157:
        *v92 = 2618;
        *(_QWORD *)(v95 + 32) += 2LL;
        goto LABEL_130;
      }
    }
    else
    {
      while ( 1 )
      {
        if ( v92 == (_WORD *)v9[3] )
        {
          v26 = (__m128i *)"\n";
          sub_227BF10(v9, "\n", 1);
          v92 = (_WORD *)v9[4];
        }
        else
        {
          *(_BYTE *)v92 = 10;
          v92 = (_WORD *)(v9[4] + 1LL);
          v9[4] = v92;
        }
        v91 = *(_QWORD *)(v89 + 40);
        v93 = *(__m128i **)(v89 + 32);
        v94 = v9[3] - (_QWORD)v92;
        if ( v94 < v91 )
          break;
        v95 = (__int64)v9;
        if ( v91 )
          goto LABEL_155;
LABEL_128:
        if ( v94 > 1 )
          goto LABEL_157;
LABEL_129:
        v26 = (__m128i *)":\n";
        sub_227BF10(v95, ":\n", 2);
LABEL_130:
        v96 = *(_QWORD *)(v89 + 64);
        v97 = 0;
        v98 = *(_QWORD *)(v89 + 72);
        v166 = v98;
        v99 = v96;
        if ( v96 != v98 )
        {
          do
          {
            v100 = *(_QWORD *)(v99 + 8);
            if ( (unsigned int)v100 <= 0x17 && v97 < (unsigned int)v100 )
              v97 = *(_QWORD *)(v99 + 8);
            v99 += 48;
          }
          while ( v98 != v99 );
          do
          {
            while ( 1 )
            {
              v101 = v97 - *(_DWORD *)(v96 + 8);
              v102 = sub_227D090(v9, 2);
              sub_227BF10(v102, *(_QWORD *)v96, *(_QWORD *)(v96 + 8));
              if ( v101 < 0 )
              {
                v110 = (_BYTE *)v9[4];
                if ( (_BYTE *)v9[3] == v110 )
                {
                  sub_227BF10(v9, "\n", 1);
                }
                else
                {
                  *v110 = 10;
                  ++v9[4];
                }
                v101 = v97 + 2;
              }
              ptr[0] = &v206;
              ptr[1] = (void *)0x300000000LL;
              sub_22476F0(v96 + 32, ptr, 10, 0xFFFFFFFFLL, 1);
              v103 = (__m128i **)ptr[0];
              v104 = sub_227D090(v9, (unsigned int)(v101 + 1));
              v105 = *(_QWORD *)(v104 + 24);
              v106 = (size_t)v103[1];
              v107 = *(_BYTE **)(v104 + 32);
              v26 = *v103;
              if ( v105 - (unsigned __int64)v107 < v106 )
              {
LABEL_147:
                v104 = sub_227BF10(v104, v26, v106);
                v107 = *(_BYTE **)(v104 + 32);
                v105 = *(_QWORD *)(v104 + 24);
                goto LABEL_143;
              }
              while ( 1 )
              {
                if ( v106 )
                {
                  v168 = v106;
                  memcpy(v107, v26, v106);
                  v107 = (_BYTE *)(*(_QWORD *)(v104 + 32) + v168);
                  *(_QWORD *)(v104 + 32) = v107;
                  v105 = *(_QWORD *)(v104 + 24);
                }
LABEL_143:
                if ( (unsigned __int64)v107 < v105 )
                {
                  *(_QWORD *)(v104 + 32) = v107 + 1;
                  *v107 = 10;
                }
                else
                {
                  v26 = (__m128i *)(byte_9 + 1);
                  sub_227BA10(v104, 10);
                }
                v103 += 2;
                if ( v103 == (__m128i **)((char *)ptr[0] + 16 * LODWORD(ptr[1])) )
                  break;
                v108 = sub_227D090(v9, v97 + 3);
                v106 = (size_t)v103[1];
                v26 = *v103;
                v104 = v108;
                v105 = *(_QWORD *)(v108 + 24);
                v107 = *(_BYTE **)(v104 + 32);
                if ( v106 > v105 - (unsigned __int64)v107 )
                  goto LABEL_147;
              }
              if ( ptr[0] == &v206 )
                break;
              free(ptr[0]);
              v96 += 48;
              if ( v166 == v96 )
                goto LABEL_150;
            }
            v96 += 48;
          }
          while ( v166 != v96 );
        }
LABEL_150:
        v89 = std::_Rb_tree_increment(v89, v26->m128i_i8);
        if ( (int *)v89 == &v200 )
          goto LABEL_165;
        v90 = v202;
        v91 = *(_QWORD *)(v89 + 40);
        v92 = (_WORD *)v9[4];
        if ( v91 == *((_QWORD *)v202 + 5) )
          goto LABEL_152;
      }
    }
    v26 = v93;
    v95 = sub_227BF10(v9, v93, v91);
    v92 = *(_WORD **)(v95 + 32);
    v94 = *(_QWORD *)(v95 + 24) - (_QWORD)v92;
    goto LABEL_128;
  }
LABEL_165:
  if ( v9[4] != v9[2] )
LABEL_166:
    sub_227B9F0(v9, v26, v20, a4, v19, v14, v166);
  v111 = (char *)v201;
  if ( v201 )
  {
    while ( 1 )
    {
      sub_21BA780((__int64)v199, *((_QWORD **)v111 + 3));
      v112 = *((void ***)v111 + 9);
      v113 = *((void ***)v111 + 8);
      v114 = *((char **)v111 + 2);
      if ( v112 != v113 )
      {
        do
        {
          while ( *v113 != v113 + 2 )
          {
            operator delete(*v113);
            v113 += 6;
            if ( v113 == v112 )
              goto LABEL_171;
          }
          v113 += 6;
        }
        while ( v112 != v113 );
LABEL_171:
        v113 = *((void ***)v111 + 8);
      }
      if ( v113 )
        operator delete(v113);
      v115 = *((char **)v111 + 4);
      if ( v115 == v111 + 48 )
      {
        operator delete(v111);
        if ( !v114 )
          return;
      }
      else
      {
        operator delete(v115);
        operator delete(v111);
        if ( !v114 )
          return;
      }
      v111 = v114;
    }
  }
}
