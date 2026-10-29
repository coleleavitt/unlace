unsigned __int64 __fastcall sub_5D2150(int *a1, __int64 *a2, unsigned __int64 a3)
{
  __int64 v5; // rdi
  __int64 (__fastcall *v7)(__int64); // rax
  unsigned __int64 *v8; // rax
  unsigned __int64 (__fastcall *v10)(__int64, unsigned __int64, int); // rax
  __int64 fchunk; // rax
  __int64 *next_func; // rax
  __int64 v13; // rax
  int v14; // esi
  unsigned __int64 *v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rsi
  __int64 v21; // rdi
  size_t v22; // rax
  __int64 v23; // r15
  size_t v24; // r13
  __int64 v25; // rax
  __int64 v26; // rsi
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rdi
  void *v29; // r13
  __m128i v30; // xmm0
  __m128i v31; // xmm1
  __int64 v32; // rax
  void *v33; // rdi
  __int64 v34; // rdx
  __int64 v35; // rsi
  __int64 v36; // rdi
  __int64 v37; // rdx
  __int64 v38; // rsi
  __int64 v39; // rdi
  __int64 v40; // rdx
  __int64 v41; // rsi
  __int64 v42; // rdi
  __int64 v43; // rdx
  __int64 v44; // rsi
  __int64 v45; // rdi
  __m128i v46; // xmm0
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rsi
  __int64 v50; // rdi
  const void **v51; // r15
  __int64 v52; // rdx
  __int64 v53; // rsi
  __int64 v54; // rax
  size_t v55; // r14
  void *v56; // r13
  __int64 v57; // rax
  __int64 v58; // r14
  __int64 v59; // r13
  const void **v60; // rax
  void *v61; // rdi
  __int64 v62; // rdx
  __int64 v63; // rsi
  __int64 v64; // rdi
  const void **v65; // r15
  const void **v66; // r8
  __int64 v67; // rax
  __int64 v68; // rsi
  __int64 v69; // rax
  size_t v70; // r14
  void *v71; // r13
  const void *v72; // rdi
  __int64 v73; // rax
  __int64 v74; // r14
  __int64 v75; // r13
  char *v76; // rax
  void *v77; // rdi
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // rax
  unsigned __int64 v81; // r14
  void *v82; // r13
  __int64 v83; // rax
  __int64 v84; // rsi
  unsigned __int64 v85; // rdx
  unsigned __int64 v86; // rdi
  __m128i v87; // xmm0
  __m128i v88; // xmm1
  __int64 v89; // rax
  void *v90; // rdi
  __m128i v91; // xmm0
  __int64 v92; // rax
  unsigned __int64 v93; // r14
  __int64 v94; // rdi
  __int64 v95; // rdx
  __int64 v96; // rsi
  __int64 v97; // rax
  unsigned __int64 v98; // r14
  void *v99; // r13
  __int64 v100; // rax
  __int64 v101; // rsi
  unsigned __int64 v102; // rdx
  unsigned __int64 v103; // rdi
  __m128i v104; // xmm0
  __m128i v105; // xmm1
  __int64 v106; // rax
  void *v107; // rdi
  __m128i v108; // xmm0
  __int64 v109; // rax
  unsigned __int64 v110; // r13
  __int64 v111; // rsi
  __int64 v112; // r14
  __int64 v113; // rdx
  __int64 v114; // r15
  const char *v115; // rdi
  __int64 v116; // rax
  __int64 v117; // rdx
  __int64 v118; // rsi
  __int64 v119; // rdi
  __int64 v120; // rax
  unsigned __int64 v121; // r14
  void *v122; // r13
  __int64 v123; // rax
  __int64 v124; // rsi
  unsigned __int64 v125; // rdx
  unsigned __int64 v126; // rdi
  __m128i v127; // xmm0
  __m128i v128; // xmm1
  __int64 v129; // rax
  void *v130; // rdi
  __m128i v131; // xmm0
  __int64 v132; // rax
  unsigned __int64 v133; // r13
  __int64 v134; // rdi
  __int64 v135; // rdx
  __int64 v136; // rsi
  __int64 v137; // rax
  unsigned __int64 v138; // r14
  void *v139; // r13
  __int64 v140; // rax
  __int64 v141; // rsi
  unsigned __int64 v142; // rdx
  unsigned __int64 v143; // rdi
  __m128i v144; // xmm0
  __m128i v145; // xmm1
  __int64 v146; // rax
  void *v147; // rdi
  __m128i v148; // xmm0
  __int64 v149; // rax
  __int64 v150; // rsi
  const char **v151; // r13
  __int64 v152; // rdx
  __int64 v153; // rdi
  __int64 v154; // r15
  __int64 v155; // rsi
  void *v156; // r14
  void *v157; // rax
  void *v158; // rax
  const char *v159; // rax
  unsigned __int64 v160; // rdx
  size_t v161; // r14
  __int64 v162; // r13
  size_t v163; // r8
  char *v164; // rsi
  const char *v165; // r14
  size_t v166; // rax
  __int64 v167; // r13
  size_t v168; // r9
  __int64 v169; // r8
  char *v170; // rsi
  __int64 v171; // rdx
  __int64 v172; // rax
  __int64 v173; // rax
  __int64 v174; // rax
  __int64 v175; // rax
  __int64 v176; // rax
  __int64 v177; // rax
  __int64 v178; // rax
  __int64 v179; // rax
  __int64 v180; // rax
  __int64 v181; // rax
  __int64 v182; // rax
  __int64 v183; // rax
  __int64 v184; // rax
  __int64 v185; // rax
  __int64 v186; // rax
  __int64 v187; // rax
  __int64 v188; // rax
  __int64 v189; // rax
  size_t v190; // [rsp+0h] [rbp-580h]
  size_t v191; // [rsp+0h] [rbp-580h]
  __m128i n; // [rsp+10h] [rbp-570h] BYREF
  __int64 v193; // [rsp+20h] [rbp-560h]
  __m128i v194; // [rsp+28h] [rbp-558h] BYREF
  int *v195; // [rsp+38h] [rbp-548h]
  __int64 v196; // [rsp+48h] [rbp-538h] BYREF
  void *v197; // [rsp+50h] [rbp-530h] BYREF
  void *v198; // [rsp+58h] [rbp-528h] BYREF
  void *v199; // [rsp+60h] [rbp-520h] BYREF
  __int128 v200; // [rsp+68h] [rbp-518h]
  void *v201; // [rsp+80h] [rbp-500h] BYREF
  __int128 v202; // [rsp+88h] [rbp-4F8h]
  void *v203; // [rsp+A0h] [rbp-4E0h] BYREF
  __int128 v204; // [rsp+A8h] [rbp-4D8h]
  void *ptr; // [rsp+B8h] [rbp-4C8h] BYREF
  __int128 v206; // [rsp+C0h] [rbp-4C0h]
  void *src; // [rsp+D0h] [rbp-4B0h] BYREF
  __m128i v208; // [rsp+D8h] [rbp-4A8h] BYREF
  void *v209; // [rsp+E8h] [rbp-498h]
  __int128 v210; // [rsp+F0h] [rbp-490h]
  void *v211; // [rsp+100h] [rbp-480h]
  __int128 v212; // [rsp+108h] [rbp-478h]
  void *v213; // [rsp+118h] [rbp-468h]
  __int128 v214; // [rsp+120h] [rbp-460h]
  int v215; // [rsp+130h] [rbp-450h]
  char s[1032]; // [rsp+140h] [rbp-440h] BYREF
  unsigned __int64 v217; // [rsp+548h] [rbp-38h]

  v195 = a1;
  v5 = a1[2];
  v217 = __readfsqword(0x28u);
  v194.m128i_i64[1] = switch_dbctx(v5);
  v193 = *(_QWORD *)(v194.m128i_i64[1] + 1672);
  v7 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL);
  if ( v7 == sub_3DB7B0 )
    v8 = (unsigned __int64 *)(a1 + 4);
  else
    v8 = (unsigned __int64 *)v7((__int64)v195);
  if ( a3 < *v8 || a3 >= v8[1] )
    return v217 - __readfsqword(0x28u);
  v10 = *(unsigned __int64 (__fastcall **)(__int64, unsigned __int64, int))(*(_QWORD *)v195 + 40LL);
  if ( v10 != sub_5CABB0 )
  {
    v13 = v10((__int64)v195, a3, 0);
LABEL_14:
    if ( a3 != v13 )
      return v217 - __readfsqword(0x28u);
    goto LABEL_15;
  }
  switch_dbctx(v195[2]);
  fchunk = get_fchunk(a3);
  if ( !fchunk || *(char *)(fchunk + 17) < 0 || a3 != *(_QWORD *)fchunk )
  {
    next_func = (__int64 *)get_next_func(a3);
    if ( !next_func )
      return v217 - __readfsqword(0x28u);
    v13 = *next_func;
    goto LABEL_14;
  }
LABEL_15:
  v203 = nullptr;
  v14 = v195[2];
  ptr = nullptr;
  v204 = 0;
  v206 = 0;
  v15 = sub_5C7FE0(&v203, v14, a3, 0);
  if ( v15 )
  {
    v16 = a2[1];
    v17 = *a2;
    if ( a2[2] < (unsigned __int64)(v16 + 1) )
    {
      v120 = qvector_reserve(a2, v17, v16 + 1, 24);
      *a2 = v120;
      v16 = a2[1];
      v17 = v120;
    }
    v18 = v17 + 24 * v16;
    *(_QWORD *)v18 = 0;
    *(_OWORD *)(v18 + 8) = 0;
    ++a2[1];
    sub_35A790((char **)v18);
    v19 = a2[1];
    v20 = *a2;
    if ( a2[2] < (unsigned __int64)(v19 + 1) )
    {
      v80 = qvector_reserve(a2, v20, v19 + 1, 24);
      *a2 = v80;
      v19 = a2[1];
      v20 = v80;
    }
    v21 = v20 + 24 * v19;
    *(_QWORD *)v21 = 0;
    *(_OWORD *)(v21 + 8) = 0;
    ++a2[1];
    sub_35A790((char **)v21);
    sub_578B20(s, 1024, (__int64)v15, 0, 0);
    src = nullptr;
    v208 = 0;
    v22 = strlen(s);
    v23 = v22 + 1;
    v24 = v22;
    v194.m128i_i64[0] = (__int64)&src;
    src = (void *)qvector_reserve(&src, 0, v22 + 1, 1);
    v208.m128i_i64[0] = v23;
    memmove(src, s, v24);
    *((_BYTE *)src + v24) = 0;
    v25 = a2[1];
    v26 = *a2;
    v27 = a2[2];
    v28 = v25 + 1;
    if ( v194.m128i_i64[0] < (unsigned __int64)*a2 || v194.m128i_i64[0] >= v26 + 24 * v27 )
    {
      if ( v27 < v28 )
      {
        v173 = qvector_reserve(a2, v26, v25 + 1, 24);
        *a2 = v173;
        v26 = v173;
        v25 = a2[1];
      }
      v46 = _mm_loadu_si128(&v208);
      v47 = v26 + 24 * v25;
      *(_QWORD *)v47 = src;
      *(__m128i *)(v47 + 8) = v46;
      v34 = a2[1] + 1;
      a2[1] = v34;
    }
    else
    {
      v29 = src;
      v30 = _mm_loadl_epi64(&v208);
      src = nullptr;
      v31 = _mm_loadl_epi64((const __m128i *)&v208.m128i_u64[1]);
      v208 = 0;
      if ( v27 < v28 )
      {
        n.m128i_i64[0] = v31.m128i_i64[0];
        n.m128i_i64[1] = v30.m128i_i64[0];
        v176 = qvector_reserve(a2, v26, v25 + 1, 24);
        v31 = _mm_loadl_epi64(&n);
        *a2 = v176;
        v26 = v176;
        v30 = _mm_loadl_epi64((const __m128i *)&n.m128i_u64[1]);
        v25 = a2[1];
      }
      v32 = v26 + 24 * v25;
      *(_QWORD *)v32 = v29;
      *(__m128i *)(v32 + 8) = _mm_unpacklo_epi64(v30, v31);
      v33 = src;
      v34 = a2[1] + 1;
      a2[1] = v34;
      if ( v33 )
      {
        v208.m128i_i64[0] = 0;
        qfree(v33);
        v34 = a2[1];
      }
    }
    v35 = *a2;
    if ( a2[2] < (unsigned __int64)(v34 + 1) )
    {
      v79 = qvector_reserve(a2, v35, v34 + 1, 24);
      *a2 = v79;
      v34 = a2[1];
      v35 = v79;
    }
    v36 = v35 + 24 * v34;
    *(_QWORD *)v36 = 0;
    *(_OWORD *)(v36 + 8) = 0;
    ++a2[1];
    sub_35A790((char **)v36);
    v37 = a2[1];
    v38 = *a2;
    if ( a2[2] < (unsigned __int64)(v37 + 1) )
    {
      v78 = qvector_reserve(a2, v38, v37 + 1, 24);
      *a2 = v78;
      v37 = a2[1];
      v38 = v78;
    }
    v39 = v38 + 24 * v37;
    *(_QWORD *)v39 = 0;
    *(_OWORD *)(v39 + 8) = 0;
    ++a2[1];
    sub_35A790((char **)v39);
    if ( v15[6] || (*((_BYTE *)v15 + 17) & 0x40) != 0 )
    {
      v40 = a2[1];
      v41 = *a2;
      if ( a2[2] < (unsigned __int64)(v40 + 1) )
      {
        v174 = qvector_reserve(a2, v41, v40 + 1, 24);
        *a2 = v174;
        v40 = a2[1];
        v41 = v174;
      }
      v42 = v41 + 24 * v40;
      *(_QWORD *)v42 = 0;
      *(_OWORD *)(v42 + 8) = 0;
      ++a2[1];
      sub_35A790((char **)v42);
    }
    if ( v15[7] )
    {
      v117 = a2[1];
      v118 = *a2;
      if ( a2[2] < (unsigned __int64)(v117 + 1) )
      {
        v185 = qvector_reserve(a2, v118, v117 + 1, 24);
        *a2 = v185;
        v117 = a2[1];
        v118 = v185;
      }
      v119 = v118 + 24 * v117;
      *(_QWORD *)v119 = 0;
      *(_OWORD *)(v119 + 8) = 0;
      ++a2[1];
      sub_35A790((char **)v119);
    }
    if ( *((_DWORD *)v15 + 16) != -1 )
    {
      v43 = a2[1];
      v44 = *a2;
      if ( a2[2] < (unsigned __int64)(v43 + 1) )
      {
        v181 = qvector_reserve(a2, v44, v43 + 1, 24);
        *a2 = v181;
        v43 = a2[1];
        v44 = v181;
      }
      v45 = v44 + 24 * v43;
      *(_QWORD *)v45 = 0;
      *(_OWORD *)(v45 + 8) = 0;
      ++a2[1];
      sub_35A790((char **)v45);
    }
    if ( (unsigned __int64)v204 > 1 )
    {
      src = nullptr;
      v208 = 0;
      sub_5C5F70((__int64 *)v194.m128i_i64[0], (__int64)&v203);
      v62 = a2[1];
      v63 = *a2;
      if ( a2[2] < (unsigned __int64)(v62 + 1) )
      {
        v182 = qvector_reserve(a2, v63, v62 + 1, 24);
        *a2 = v182;
        v62 = a2[1];
        v63 = v182;
      }
      v64 = v63 + 24 * v62;
      *(_QWORD *)v64 = 0;
      *(_OWORD *)(v64 + 8) = 0;
      ++a2[1];
      sub_35A790((char **)v64);
      v65 = (const void **)src;
      v66 = (const void **)((char *)src + 24 * v208.m128i_i64[0]);
      if ( src != v66 )
      {
        do
        {
          v70 = (size_t)v65[1];
          v71 = nullptr;
          if ( v70 )
          {
            v72 = v65[1];
            n.m128i_i64[1] = (__int64)v66;
            v71 = (void *)qalloc_or_throw(v72);
            memcpy(v71, *v65, v70);
            v66 = (const void **)n.m128i_i64[1];
          }
          v67 = a2[1];
          v68 = *a2;
          if ( a2[2] < (unsigned __int64)(v67 + 1) )
          {
            n.m128i_i64[1] = (__int64)v66;
            v73 = qvector_reserve(a2, v68, v67 + 1, 24);
            *a2 = v73;
            v68 = v73;
            v66 = (const void **)n.m128i_i64[1];
            v67 = a2[1];
          }
          v65 += 3;
          v69 = v68 + 24 * v67;
          *(_QWORD *)v69 = v71;
          *(__m128i *)(v69 + 8) = _mm_unpacklo_epi64((__m128i)v70, (__m128i)v70);
          ++a2[1];
        }
        while ( v66 != v65 );
        v66 = (const void **)src;
        v65 = (const void **)src;
      }
      if ( v66 )
      {
        v74 = v208.m128i_i64[0];
        if ( v208.m128i_i64[0] )
        {
          v75 = 0;
          do
          {
            v76 = (char *)&v66[3 * v75];
            v77 = *(void **)v76;
            if ( *(_QWORD *)v76 )
            {
              *((_QWORD *)v76 + 1) = 0;
              qfree(v77);
              v65 = (const void **)src;
            }
            ++v75;
            v66 = v65;
          }
          while ( v74 != v75 );
        }
        v208.m128i_i64[0] = 0;
        qfree(v66);
      }
    }
    if ( (unsigned __int64)v206 > 1 )
    {
      src = nullptr;
      v208 = 0;
      sub_5C5F70((__int64 *)v194.m128i_i64[0], (__int64)&ptr);
      v48 = a2[1];
      v49 = *a2;
      if ( a2[2] < (unsigned __int64)(v48 + 1) )
      {
        v183 = qvector_reserve(a2, v49, v48 + 1, 24);
        *a2 = v183;
        v48 = a2[1];
        v49 = v183;
      }
      v50 = v49 + 24 * v48;
      *(_QWORD *)v50 = 0;
      *(_OWORD *)(v50 + 8) = 0;
      ++a2[1];
      sub_35A790((char **)v50);
      v51 = (const void **)src;
      n.m128i_i64[1] = (__int64)src + 24 * v208.m128i_i64[0];
      if ( (void *)n.m128i_i64[1] != src )
      {
        do
        {
          v55 = (size_t)v51[1];
          v56 = nullptr;
          if ( v55 )
          {
            v56 = (void *)qalloc_or_throw(v51[1]);
            memcpy(v56, *v51, v55);
          }
          v52 = a2[1];
          v53 = *a2;
          if ( a2[2] < (unsigned __int64)(v52 + 1) )
          {
            v57 = qvector_reserve(a2, v53, v52 + 1, 24);
            *a2 = v57;
            v52 = a2[1];
            v53 = v57;
          }
          v51 += 3;
          v54 = v53 + 24 * v52;
          *(_QWORD *)v54 = v56;
          *(__m128i *)(v54 + 8) = _mm_unpacklo_epi64((__m128i)v55, (__m128i)v55);
          ++a2[1];
        }
        while ( (const void **)n.m128i_i64[1] != v51 );
        v51 = (const void **)src;
      }
      if ( v51 )
      {
        v58 = v208.m128i_i64[0];
        if ( v208.m128i_i64[0] )
        {
          v59 = 0;
          do
          {
            v60 = &v51[3 * v59];
            v61 = (void *)*v60;
            if ( *v60 )
            {
              v60[1] = nullptr;
              qfree(v61);
              v51 = (const void **)src;
            }
            ++v59;
          }
          while ( v58 != v59 );
        }
        v208.m128i_i64[0] = 0;
        qfree(v51);
      }
    }
    if ( *((_DWORD *)v15 + 20) )
    {
      v98 = v194.m128i_i64[0];
      v208 = 0;
      src = nullptr;
      src = (void *)qvector_reserve(v194.m128i_i64[0], 0, 12, 1);
      v208.m128i_i64[0] = 12;
      strcpy((char *)src, "regvars   :");
      v99 = src;
      v100 = a2[1];
      v101 = *a2;
      v102 = a2[2];
      v103 = v100 + 1;
      if ( v98 < *a2 || v194.m128i_i64[0] >= v101 + 24 * v102 )
      {
        if ( v102 < v103 )
        {
          v180 = qvector_reserve(a2, v101, v100 + 1, 24);
          *a2 = v180;
          v101 = v180;
          v99 = src;
          v100 = a2[1];
        }
        v108 = _mm_loadu_si128(&v208);
        v109 = v101 + 24 * v100;
        *(_QWORD *)v109 = v99;
        *(__m128i *)(v109 + 8) = v108;
        ++a2[1];
      }
      else
      {
        v104 = _mm_loadl_epi64(&v208);
        v105 = _mm_loadl_epi64((const __m128i *)&v208.m128i_u64[1]);
        src = nullptr;
        v208 = 0;
        if ( v102 < v103 )
        {
          n.m128i_i64[0] = v105.m128i_i64[0];
          n.m128i_i64[1] = v104.m128i_i64[0];
          v186 = qvector_reserve(a2, v101, v100 + 1, 24);
          v105 = _mm_loadl_epi64(&n);
          *a2 = v186;
          v101 = v186;
          v104 = _mm_loadl_epi64((const __m128i *)&n.m128i_u64[1]);
          v100 = a2[1];
        }
        v106 = v101 + 24 * v100;
        *(_QWORD *)v106 = v99;
        *(__m128i *)(v106 + 8) = _mm_unpacklo_epi64(v104, v105);
        v107 = src;
        ++a2[1];
        if ( v107 )
        {
          v208.m128i_i64[0] = 0;
          qfree(v107);
        }
      }
      if ( *((_DWORD *)v15 + 20) )
      {
        v110 = 0;
        do
        {
          v111 = *a2;
          v112 = v15[11] + 40 * v110;
          v113 = a2[1];
          if ( a2[2] < (unsigned __int64)(v113 + 1) )
          {
            v116 = qvector_reserve(a2, v111, v113 + 1, 24);
            *a2 = v116;
            v113 = a2[1];
            v111 = v116;
          }
          v114 = v111 + 24 * v113;
          *(_QWORD *)v114 = 0;
          *(_OWORD *)(v114 + 8) = 0;
          ++a2[1];
          sub_35A790((char **)v114);
          v115 = *(const char **)(v112 + 24);
          n.m128i_i64[1] = *(_QWORD *)(v112 + 16);
          n.m128i_i64[0] = (__int64)v115;
          strcasecmp(v115, (const char *)n.m128i_i64[1]);
          sub_35A910((__int64 *)v114);
          ++v110;
        }
        while ( v110 < *((int *)v15 + 20) );
      }
    }
    if ( *((_DWORD *)v15 + 24) )
    {
      v81 = v194.m128i_i64[0];
      v208 = 0;
      src = nullptr;
      src = (void *)qvector_reserve(v194.m128i_i64[0], 0, 12, 1);
      v208.m128i_i64[0] = 12;
      strcpy((char *)src, "llabels   :");
      v82 = src;
      v83 = a2[1];
      v84 = *a2;
      v85 = a2[2];
      v86 = v83 + 1;
      if ( v81 < *a2 || v194.m128i_i64[0] >= v84 + 24 * v85 )
      {
        if ( v85 < v86 )
        {
          v179 = qvector_reserve(a2, v84, v83 + 1, 24);
          *a2 = v179;
          v84 = v179;
          v82 = src;
          v83 = a2[1];
        }
        v91 = _mm_loadu_si128(&v208);
        v92 = v84 + 24 * v83;
        *(_QWORD *)v92 = v82;
        *(__m128i *)(v92 + 8) = v91;
        ++a2[1];
      }
      else
      {
        v87 = _mm_loadl_epi64(&v208);
        v88 = _mm_loadl_epi64((const __m128i *)&v208.m128i_u64[1]);
        src = nullptr;
        v208 = 0;
        if ( v85 < v86 )
        {
          n.m128i_i64[1] = v88.m128i_i64[0];
          v194.m128i_i64[1] = v87.m128i_i64[0];
          v188 = qvector_reserve(a2, v84, v83 + 1, 24);
          v88 = _mm_loadl_epi64((const __m128i *)&n.m128i_u64[1]);
          *a2 = v188;
          v84 = v188;
          v87 = _mm_loadl_epi64((const __m128i *)&v194.m128i_u64[1]);
          v83 = a2[1];
        }
        v89 = v84 + 24 * v83;
        *(_QWORD *)v89 = v82;
        *(__m128i *)(v89 + 8) = _mm_unpacklo_epi64(v87, v88);
        v90 = src;
        ++a2[1];
        if ( v90 )
        {
          v208.m128i_i64[0] = 0;
          qfree(v90);
        }
      }
      if ( *((_DWORD *)v15 + 24) )
      {
        v93 = 0;
        do
        {
          v95 = a2[1];
          v96 = *a2;
          if ( a2[2] < (unsigned __int64)(v95 + 1) )
          {
            v97 = qvector_reserve(a2, v96, v95 + 1, 24);
            *a2 = v97;
            v95 = a2[1];
            v96 = v97;
          }
          v94 = v96 + 24 * v95;
          *(_QWORD *)v94 = 0;
          *(_OWORD *)(v94 + 8) = 0;
          ++a2[1];
          sub_35A790((char **)v94);
          ++v93;
        }
        while ( v93 < *((int *)v15 + 24) );
      }
    }
    if ( *((_DWORD *)v15 + 28) )
    {
      v138 = v194.m128i_i64[0];
      v208 = 0;
      src = nullptr;
      src = (void *)qvector_reserve(v194.m128i_i64[0], 0, 12, 1);
      v208.m128i_i64[0] = 12;
      strcpy((char *)src, "regargs   :");
      v139 = src;
      v140 = a2[1];
      v141 = *a2;
      v142 = a2[2];
      v143 = v140 + 1;
      if ( v138 < *a2 || v194.m128i_i64[0] >= v141 + 24 * v142 )
      {
        if ( v142 < v143 )
        {
          v177 = qvector_reserve(a2, v141, v140 + 1, 24);
          *a2 = v177;
          v141 = v177;
          v139 = src;
          v140 = a2[1];
        }
        v148 = _mm_loadu_si128(&v208);
        v149 = v141 + 24 * v140;
        *(_QWORD *)v149 = v139;
        *(__m128i *)(v149 + 8) = v148;
        ++a2[1];
      }
      else
      {
        v144 = _mm_loadl_epi64(&v208);
        v145 = _mm_loadl_epi64((const __m128i *)&v208.m128i_u64[1]);
        src = nullptr;
        v208 = 0;
        if ( v142 < v143 )
        {
          n.m128i_i64[1] = v145.m128i_i64[0];
          v194.m128i_i64[1] = v144.m128i_i64[0];
          v187 = qvector_reserve(a2, v141, v140 + 1, 24);
          v145 = _mm_loadl_epi64((const __m128i *)&n.m128i_u64[1]);
          *a2 = v187;
          v141 = v187;
          v144 = _mm_loadl_epi64((const __m128i *)&v194.m128i_u64[1]);
          v140 = a2[1];
        }
        v146 = v141 + 24 * v140;
        *(_QWORD *)v146 = v139;
        *(__m128i *)(v146 + 8) = _mm_unpacklo_epi64(v144, v145);
        v147 = src;
        ++a2[1];
        if ( v147 )
        {
          v208.m128i_i64[0] = 0;
          qfree(v147);
        }
      }
      if ( *((_DWORD *)v15 + 28) )
      {
        v194.m128i_i64[1] = 0;
        do
        {
          v150 = *a2;
          v151 = (const char **)(v15[15] + 24 * v194.m128i_i64[1]);
          v152 = a2[1];
          if ( a2[2] < (unsigned __int64)(v152 + 1) )
          {
            v172 = qvector_reserve(a2, v150, v152 + 1, 24);
            *a2 = v172;
            v152 = a2[1];
            v150 = v172;
          }
          v153 = v193;
          v154 = v150 + 24 * v152;
          *(_QWORD *)v154 = 0;
          *(_OWORD *)(v154 + 8) = 0;
          ++a2[1];
          v199 = nullptr;
          v200 = 0;
          if ( sub_6742B0(v153, &v199, *(unsigned int *)v151) == -1 )
            sub_35A790((char **)&v199);
          sub_35A790((char **)v154);
          if ( v151[1] )
          {
            src = nullptr;
            v209 = nullptr;
            v211 = nullptr;
            v155 = *((_QWORD *)v195 + 4);
            v213 = nullptr;
            v215 = -1;
            v208 = 0;
            v210 = 0;
            v212 = 0;
            v214 = 0;
            sub_495970(v194.m128i_i64[0], v155, v151[1]);
            v196 = 0;
            n.m128i_i64[1] = (__int64)&v196;
            if ( v208.m128i_i64[0] <= 1uLL )
            {
              clear_tinfo_t(&v196);
              n.m128i_i64[0] = (__int64)&v201;
            }
            else
            {
              n.m128i_i64[0] = v208.m128i_i64[0];
              v156 = (void *)qalloc_or_throw(v208.m128i_i64[0]);
              memcpy(v156, src, n.m128i_u64[0]);
              v157 = nullptr;
              v197 = v156;
              if ( (unsigned __int64)v212 > 1 )
                v157 = v211;
              v198 = v157;
              v158 = nullptr;
              if ( (unsigned __int64)v214 > 1 )
                v158 = v213;
              v201 = v158;
              n.m128i_i64[0] = (__int64)&v201;
              n.m128i_i64[1] = (__int64)&v196;
              deserialize_tinfo(&v196, 0, &v197, &v198, &v201, 0);
              if ( v156 )
                qfree(v156);
            }
            v201 = nullptr;
            v202 = 0;
            v159 = v151[2];
            if ( !v159 )
            {
              v159 = haystack;
              if ( (_QWORD)v200 )
                v159 = (const char *)v199;
            }
            print_tinfo(n.m128i_i32[0], 0, 0, 0, 1024, n.m128i_i32[2], (__int64)v159, 0);
            v160 = v202;
            if ( (_QWORD)v202 )
            {
              v161 = v202 - 1;
              if ( (_QWORD)v202 != 1 )
              {
                v162 = *(_QWORD *)(v154 + 8);
                v163 = v202 - 1;
                if ( v162 )
                {
                  --v162;
                  v163 = v161 + v162;
                  v160 = v202 + v162;
                }
                v164 = *(char **)v154;
                if ( *(_QWORD *)(v154 + 16) < v160 )
                {
                  v191 = v163;
                  n.m128i_i64[0] = v160;
                  v184 = qvector_reserve(v154, v164, v160, 1);
                  *(_QWORD *)v154 = v184;
                  v163 = v191;
                  v164 = (char *)v184;
                  v160 = n.m128i_i64[0];
                }
                *(_QWORD *)(v154 + 8) = v160;
                v164[v163] = 0;
                memcpy((void *)(v162 + *(_QWORD *)v154), v201, v161);
              }
            }
            if ( v201 )
            {
              *(_QWORD *)&v202 = 0;
              qfree(v201);
            }
            clear_tinfo_t(n.m128i_i64[1]);
            if ( v213 )
            {
              *(_QWORD *)&v214 = 0;
              qfree(v213);
            }
            if ( v211 )
            {
              *(_QWORD *)&v212 = 0;
              qfree(v211);
            }
            if ( v209 )
            {
              *(_QWORD *)&v210 = 0;
              qfree(v209);
            }
            if ( src )
            {
              v208.m128i_i64[0] = 0;
              qfree(src);
            }
          }
          else
          {
            v165 = v151[2];
            if ( v165 )
            {
              v166 = strlen(v151[2]);
              v167 = *(_QWORD *)(v154 + 8);
              v168 = v166;
              v169 = v166;
              if ( v167 )
              {
                --v167;
                v169 = v166 + v167;
              }
              v170 = *(char **)v154;
              v171 = v169 + 1;
              if ( *(_QWORD *)(v154 + 16) < (unsigned __int64)(v169 + 1) )
              {
                v190 = v166;
                n.m128i_i64[0] = v169;
                n.m128i_i64[1] = v169 + 1;
                v175 = qvector_reserve(v154, v170, v171, 1);
                *(_QWORD *)v154 = v175;
                v168 = v190;
                v170 = (char *)v175;
                v171 = n.m128i_i64[1];
                v169 = n.m128i_i64[0];
              }
              *(_QWORD *)(v154 + 8) = v171;
              v170[v169] = 0;
              memmove((void *)(v167 + *(_QWORD *)v154), v165, v168);
            }
          }
          if ( v199 )
          {
            *(_QWORD *)&v200 = 0;
            qfree(v199);
          }
          ++v194.m128i_i64[1];
        }
        while ( v194.m128i_i64[1] < (unsigned __int64)*((int *)v15 + 28) );
      }
    }
    if ( *((_DWORD *)v15 + 32) )
    {
      v121 = v194.m128i_i64[0];
      v208 = 0;
      src = nullptr;
      src = (void *)qvector_reserve(v194.m128i_i64[0], 0, 12, 1);
      v208.m128i_i64[0] = 12;
      strcpy((char *)src, "tails     :");
      v122 = src;
      v123 = a2[1];
      v124 = *a2;
      v125 = a2[2];
      v126 = v123 + 1;
      if ( v121 < *a2 || v194.m128i_i64[0] >= v124 + 24 * v125 )
      {
        if ( v125 < v126 )
        {
          v178 = qvector_reserve(a2, v124, v123 + 1, 24);
          *a2 = v178;
          v124 = v178;
          v122 = src;
          v123 = a2[1];
        }
        v131 = _mm_loadu_si128(&v208);
        v132 = v124 + 24 * v123;
        *(_QWORD *)v132 = v122;
        *(__m128i *)(v132 + 8) = v131;
        ++a2[1];
      }
      else
      {
        v127 = _mm_loadl_epi64(&v208);
        v128 = _mm_loadl_epi64((const __m128i *)&v208.m128i_u64[1]);
        src = nullptr;
        v208 = 0;
        if ( v125 < v126 )
        {
          v194.m128i_i64[0] = v128.m128i_i64[0];
          v194.m128i_i64[1] = v127.m128i_i64[0];
          v189 = qvector_reserve(a2, v124, v123 + 1, 24);
          v128 = _mm_loadl_epi64(&v194);
          *a2 = v189;
          v124 = v189;
          v127 = _mm_loadl_epi64((const __m128i *)&v194.m128i_u64[1]);
          v123 = a2[1];
        }
        v129 = v124 + 24 * v123;
        *(_QWORD *)v129 = v122;
        *(__m128i *)(v129 + 8) = _mm_unpacklo_epi64(v127, v128);
        v130 = src;
        ++a2[1];
        if ( v130 )
        {
          v208.m128i_i64[0] = 0;
          qfree(v130);
        }
      }
      if ( *((_DWORD *)v15 + 32) )
      {
        v133 = 0;
        do
        {
          v135 = a2[1];
          v136 = *a2;
          if ( a2[2] < (unsigned __int64)(v135 + 1) )
          {
            v137 = qvector_reserve(a2, v136, v135 + 1, 24);
            *a2 = v137;
            v135 = a2[1];
            v136 = v137;
          }
          v134 = v136 + 24 * v135;
          *(_QWORD *)v134 = 0;
          *(_OWORD *)(v134 + 8) = 0;
          ++a2[1];
          sub_35A790((char **)v134);
          ++v133;
        }
        while ( v133 < *((int *)v15 + 32) );
      }
    }
  }
  if ( ptr )
  {
    *(_QWORD *)&v206 = 0;
    qfree(ptr);
  }
  if ( v203 )
  {
    *(_QWORD *)&v204 = 0;
    qfree(v203);
  }
  return v217 - __readfsqword(0x28u);
}
