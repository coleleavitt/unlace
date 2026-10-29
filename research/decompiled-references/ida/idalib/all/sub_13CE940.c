void __fastcall sub_13CE940(__m128 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rbp
  _BYTE *v8; // r15
  __int64 v9; // r12
  char v10; // al
  bool v11; // al
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  __int64 v14; // r14
  __int64 v15; // r12
  __int64 v16; // rdx
  __int64 v17; // rax
  unsigned int v18; // edx
  char v19; // cl
  char v20; // dl
  __int64 v21; // rax
  unsigned __int64 v22; // rdx
  __int64 v23; // rbx
  __int64 v24; // rbp
  __int64 v25; // rax
  _BYTE *v26; // rsi
  __int64 v27; // rdx
  __m128i *v28; // rsi
  const __m128i *v29; // r12
  const __m128i *v30; // rbp
  signed __int64 v31; // rbx
  unsigned __int64 v32; // rax
  __m128i v33; // xmm3
  __m128i *v34; // rsi
  const __m128i *v35; // r12
  const __m128i *v36; // rbp
  __m128i v37; // xmm6
  __m128i *v38; // rsi
  const __m128i *v39; // r13
  const __m128i *v40; // r12
  signed __int64 v41; // rbp
  int v42; // edx
  __int32 v43; // eax
  __m128i v44; // xmm1
  __m128i *v45; // rsi
  const __m128i *v46; // r12
  const __m128i *v47; // r13
  __m128i v48; // xmm6
  __m128i *v49; // rsi
  int v50; // eax
  __int64 v51; // r8
  __int64 v52; // r9
  char *v53; // r13
  char *v54; // r12
  signed __int64 v55; // rax
  unsigned __int64 v56; // rbx
  __int64 v57; // r14
  __int64 v58; // rbx
  __int64 v59; // rax
  char *v60; // rax
  __int64 v61; // rdx
  int v62; // r13d
  char *v63; // r12
  unsigned __int64 v64; // rax
  unsigned int v65; // edi
  int *v66; // rsi
  int v67; // ecx
  __m128i *v68; // rax
  __m128i *v69; // rsi
  __m128i v70; // xmm0
  unsigned __int64 *v71; // rbp
  char *v72; // rdi
  char **v73; // r14
  void **v74; // r15
  unsigned __int64 v75; // rcx
  __int64 v76; // rsi
  unsigned __int64 v77; // rbx
  void **v78; // r13
  unsigned __int64 v79; // r12
  void **v80; // rbx
  const __m128i *v81; // rbp
  void **v82; // rbx
  char *v83; // rbx
  bool v84; // zf
  __int64 v85; // rax
  __m128i *v86; // rcx
  char *v87; // rsi
  __int64 v88; // rbx
  signed __int64 v89; // rax
  __int64 v90; // r14
  __int64 v91; // rbp
  void *v92; // rdi
  size_t v93; // rax
  char *v94; // r8
  char *v95; // rcx
  __int64 v96; // rax
  __int64 v97; // rax
  const char *v98; // r12
  char *v99; // rdi
  const char *v100; // r13
  size_t v101; // rdx
  size_t v102; // r15
  char v103; // al
  _BYTE *v104; // rax
  __int64 v105; // rax
  _BYTE *v106; // rax
  _BYTE *v107; // r14
  signed __int64 v108; // r12
  char v109; // al
  size_t v110; // rbx
  const void *v111; // rbp
  char **v112; // r12
  char *v113; // rbx
  signed __int64 v114; // r13
  char **v115; // r15
  char *v116; // rax
  __int64 v117; // rbp
  __m128i v118; // xmm0
  size_t v119; // rbx
  const void *v120; // rbp
  void *v121; // rbx
  void **v122; // rbx
  void **v123; // r14
  char *v124; // r12
  unsigned __int64 v125; // rbx
  __int64 v126; // rax
  __m128i v127; // xmm0
  __m128i v128; // xmm0
  char *v129; // rdi
  char *v130; // rdi
  __int64 v131; // rax
  __m128i *v132; // rcx
  __int64 v133; // rax
  __m128i *v134; // rcx
  unsigned __int64 v135; // rdi
  char *v136; // rcx
  const char *v137; // r12
  unsigned int v138; // ecx
  unsigned int v139; // ecx
  unsigned int v140; // edx
  __int64 v141; // rsi
  int v142; // r8d
  int *v143; // r10
  int v144; // ecx
  __int64 v145; // r8
  __int64 v146; // rcx
  unsigned __int64 v147; // rax
  __int64 v148; // rax
  char *v149; // rax
  __int64 v150; // r15
  char *v151; // rsi
  char *v152; // rcx
  __int32 v153; // r11d
  char *j; // rdx
  char *v155; // rdx
  __int32 k; // r10d
  int v157; // ecx
  unsigned int v158; // r8d
  char *v159; // rdi
  int v160; // r9d
  int v161; // ecx
  unsigned __int64 v162; // rax
  unsigned __int64 v163; // rax
  __int64 v164; // rax
  char *v165; // rax
  __int64 v166; // r11
  char *v167; // rcx
  __int32 v168; // r9d
  char *i; // rdx
  char *v170; // rdx
  int v171; // ecx
  unsigned int v172; // r8d
  char *v173; // rsi
  int v174; // edi
  int v175; // ecx
  void *v176; // rax
  __int32 v177; // esi
  __int32 v178; // eax
  unsigned int v179; // edx
  int v180; // edi
  int v181; // r9d
  int *v182; // r8
  __int32 v183; // esi
  __int32 v184; // eax
  unsigned int v185; // r15d
  int v186; // edx
  int v187; // r8d
  int *v188; // rdi
  __m128i v189; // xmm0
  __m128i v190; // xmm0
  char *v191; // rdx
  char *v192; // rdx
  __m128i v193; // [rsp+8h] [rbp-250h] BYREF
  __m128 *v194; // [rsp+18h] [rbp-240h]
  __int32 v195; // [rsp+20h] [rbp-238h]
  int v196; // [rsp+24h] [rbp-234h]
  unsigned __int64 *v197; // [rsp+28h] [rbp-230h]
  char *v198; // [rsp+30h] [rbp-228h]
  char *v199; // [rsp+38h] [rbp-220h]
  char *v200; // [rsp+40h] [rbp-218h]
  char *v201; // [rsp+48h] [rbp-210h]
  _QWORD v202[4]; // [rsp+50h] [rbp-208h] BYREF
  __int16 v203; // [rsp+70h] [rbp-1E8h]
  __m128i v204[2]; // [rsp+80h] [rbp-1D8h] BYREF
  __int16 v205; // [rsp+A0h] [rbp-1B8h]
  void *v206[2]; // [rsp+B0h] [rbp-1A8h] BYREF
  void *v207; // [rsp+C0h] [rbp-198h]
  __int16 v208; // [rsp+D0h] [rbp-188h]
  void *v209[2]; // [rsp+E0h] [rbp-178h] BYREF
  __m128i *v210; // [rsp+F0h] [rbp-168h]
  __int16 v211; // [rsp+100h] [rbp-158h]
  void *v212; // [rsp+110h] [rbp-148h] BYREF
  const __m128i *v213; // [rsp+118h] [rbp-140h]
  __int64 v214; // [rsp+120h] [rbp-138h]
  void *v215; // [rsp+128h] [rbp-130h] BYREF
  __m128i *v216; // [rsp+130h] [rbp-128h]
  const __m128i *v217; // [rsp+138h] [rbp-120h]
  unsigned __int64 *v218; // [rsp+140h] [rbp-118h]
  char v219; // [rsp+148h] [rbp-110h]
  void *v220; // [rsp+150h] [rbp-108h] BYREF
  _BYTE v221[32]; // [rsp+160h] [rbp-F8h] BYREF
  void *ptr; // [rsp+180h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+188h] [rbp-D0h] BYREF
  __int64 v224; // [rsp+198h] [rbp-C0h] BYREF
  __int16 v225; // [rsp+1A0h] [rbp-B8h]

  v8 = *(_BYTE **)a2;
  v9 = *(_QWORD *)(a2 + 8);
  v10 = *(_BYTE *)(a2 + 624);
  v194 = a1;
  v193.m128i_i64[0] = a4;
  v218 = (unsigned __int64 *)a1;
  v219 = (v10 & 0x10) != 0;
  v220 = v221;
  v212 = nullptr;
  v213 = nullptr;
  v214 = 0;
  v215 = nullptr;
  v216 = nullptr;
  v217 = nullptr;
  sub_13CD010(&v220, v8, (__int64)&v8[v9]);
  v11 = 0;
  if ( v9 )
  {
    v11 = 1;
    if ( v9 == 1 )
      v11 = *v8 != 47;
  }
  v221[16] = v11;
  v12 = *(_QWORD *)(a2 + 32);
  v13 = 0xCCCCCCCCCCCCCCCDLL * ((*(_QWORD *)(a2 + 40) - v12) >> 3);
  if ( (_DWORD)v13 )
  {
    v193.m128i_i64[1] = a3;
    v14 = 0;
    v15 = (unsigned int)(v13 - 1);
    while ( 1 )
    {
      v17 = v12 + 40 * v14;
      v18 = *(_DWORD *)(v17 + 32);
      v19 = *(_BYTE *)(v17 + 36) & 1;
      if ( (*(_BYTE *)(v17 + 36) & 2) != 0 )
      {
        ptr = (void *)v17;
        v5 = (unsigned int)v14 | v5 & 0xFFFFFF0000000000LL | 0x100000000LL;
        v225 = 260;
        sub_13CDBD0((__int64)&v212, (void ***)&ptr, v18, v19, v5);
        v16 = v14 + 1;
        if ( v15 == v14 )
          goto LABEL_8;
      }
      else
      {
        ptr = (void *)v17;
        v225 = 260;
        v4 = (unsigned int)v14 | v4 & 0xFFFFFF0000000000LL | 0x100000000LL;
        sub_13CE5D0((__int64)&v212, (void ****)&ptr, v18, v19, v4);
        v16 = v14 + 1;
        if ( v15 == v14 )
        {
LABEL_8:
          a3 = v193.m128i_i64[1];
          break;
        }
      }
      v12 = *(_QWORD *)(a2 + 32);
      v14 = v16;
    }
  }
  if ( !sub_13CCC90(v193.m128i_i64[0]) )
    goto LABEL_13;
  v20 = *(_BYTE *)(a2 + 624);
  if ( (*(_QWORD *)a3 & 0x200000800LL) == 0x800 && (v20 & 6) == 6 && (v20 & 8) != 0 )
  {
    ptr = "/usr/include/c++/v1";
    v225 = 259;
    sub_13CE5D0((__int64)&v212, (void ****)&ptr, 5u, 0, 0);
    v20 = *(_BYTE *)(a2 + 624);
  }
  if ( (v20 & 2) != 0 )
  {
    ptr = "/usr/local/include";
    v225 = 259;
    sub_13CE5D0((__int64)&v212, (void ****)&ptr, 2u, 0, 0);
    v109 = *(_BYTE *)(a2 + 624);
    if ( (v109 & 1) == 0 )
    {
LABEL_142:
      if ( (v109 & 2) != 0 )
      {
        v225 = 259;
        ptr = "/usr/include";
        sub_13CE5D0((__int64)&v212, (void ****)&ptr, 3u, 0, 0);
      }
      goto LABEL_13;
    }
LABEL_144:
    v110 = *(_QWORD *)(a2 + 88);
    v111 = *(const void **)(a2 + 80);
    ptr = &v224;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
    if ( v110 > 0x80 )
    {
      sub_2236E10(&ptr, &v224, v110, 1);
      v129 = (char *)ptr + si128.m128i_i64[0];
    }
    else
    {
      if ( !v110 )
      {
LABEL_146:
        si128.m128i_i64[0] = v110;
        v211 = 257;
        v205 = 257;
        v202[0] = "include";
        v203 = 259;
        v208 = 257;
        sub_228A3B0(&ptr, v202, v204, v206, v209);
        v211 = 261;
        v209[0] = ptr;
        v209[1] = (void *)si128.m128i_i64[0];
        sub_13CDBD0((__int64)&v212, (void ***)v209, 3u, 0, 0);
        if ( ptr != &v224 )
          free(ptr);
        v109 = *(_BYTE *)(a2 + 624);
        goto LABEL_142;
      }
      v129 = (char *)&v224;
    }
    memcpy(v129, v111, v110);
    v110 += si128.m128i_i64[0];
    goto LABEL_146;
  }
  if ( (v20 & 1) != 0 )
    goto LABEL_144;
LABEL_13:
  v21 = *(_QWORD *)(a2 + 56);
  v22 = 0xCCCCCCCCCCCCCCCDLL * ((*(_QWORD *)(a2 + 64) - v21) >> 3);
  if ( !(_DWORD)v22 )
    goto LABEL_25;
  v23 = 0;
  v193.m128i_i64[0] = a3;
  v24 = 8 * (5LL * (unsigned int)(v22 - 1) + 5);
  while ( 1 )
  {
    v25 = v23 + v21;
    v26 = *(_BYTE **)v25;
    v27 = *(_QWORD *)(v25 + 8);
    LOBYTE(v25) = *(_BYTE *)(v25 + 32);
    ptr = &si128.m128i_u64[1];
    LOBYTE(v209[0]) = v25;
    sub_13CD010(&ptr, v26, (__int64)&v26[v27]);
    v28 = v216;
    if ( v216 == v217 )
      break;
    v216->m128i_i64[0] = (__int64)v216[1].m128i_i64;
    if ( ptr == &si128.m128i_u64[1] )
    {
      v28[1] = _mm_load_si128((const __m128i *)&si128.m128i_u64[1]);
    }
    else
    {
      v28->m128i_i64[0] = (__int64)ptr;
      v28[1].m128i_i64[0] = si128.m128i_i64[1];
    }
    v28->m128i_i64[1] = si128.m128i_i64[0];
    v28[2].m128i_i8[0] = (__int8)v209[0];
    v216 = (__m128i *)((char *)v216 + 40);
LABEL_17:
    v23 += 40;
    if ( v24 == v23 )
      goto LABEL_24;
LABEL_18:
    v21 = *(_QWORD *)(a2 + 56);
  }
  sub_13CD940((void ***)&v215, v216, (__m128i *)&ptr, v209);
  if ( ptr == &si128.m128i_u64[1] )
    goto LABEL_17;
  operator delete(ptr);
  v23 += 40;
  if ( v24 != v23 )
    goto LABEL_18;
LABEL_24:
  a3 = v193.m128i_i64[0];
LABEL_25:
  if ( (*(_BYTE *)(a2 + 624) & 1) != 0 )
  {
    v119 = *(_QWORD *)(a2 + 88);
    v120 = *(const void **)(a2 + 80);
    ptr = &v224;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
    if ( v119 > 0x80 )
    {
      sub_2236E10(&ptr, &v224, v119, 1);
      v130 = (char *)ptr + si128.m128i_i64[0];
    }
    else
    {
      if ( !v119 )
      {
LABEL_183:
        si128.m128i_i64[0] = v119;
        v211 = 257;
        v202[0] = "include";
        v203 = 259;
        v208 = 257;
        v205 = 257;
        sub_228A3B0(&ptr, v202, v204, v206, v209);
        sub_FD9440((__int64)v209, v194[2].m128_i64[1], (char *)ptr, si128.m128i_u64[0], 1);
        if ( ((__int64)v209[1] & 1) != 0 )
        {
          v176 = v209[0];
          v209[0] = nullptr;
          v204[0].m128i_i64[0] = (__int64)v176;
          sub_A05760(v206, v204);
          if ( v204[0].m128i_i64[0] )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v204[0].m128i_i64[0] + 8LL))(v204[0].m128i_i64[0]);
          sub_A04D70((__int64 *)v209);
        }
        else
        {
          v121 = v209[0];
          sub_A04D70((__int64 *)v209);
          if ( v121 )
            v194[43].m128_u64[1] = (unsigned __int64)v121;
        }
        if ( ptr != &v224 )
          free(ptr);
        goto LABEL_26;
      }
      v130 = (char *)&v224;
    }
    memcpy(v130, v120, v119);
    v119 += si128.m128i_i64[0];
    goto LABEL_183;
  }
LABEL_26:
  v29 = v213;
  v30 = (const __m128i *)v212;
  *(_OWORD *)v206 = 0;
  v207 = nullptr;
  v31 = (char *)v213 - (_BYTE *)v212;
  v32 = ((char *)v213 - (_BYTE *)v212) >> 5;
  if ( v32 > 0x7FFFFFFFFFFFFFFLL )
    goto LABEL_322;
  if ( v32 )
  {
    v117 = operator new((char *)v213 - (_BYTE *)v212);
    if ( v206[0] )
      operator delete(v206[0]);
    v193.m128i_i64[0] = v117;
    v118 = _mm_loadl_epi64(&v193);
    v207 = (void *)(v117 + v31);
    v30 = (const __m128i *)v212;
    v29 = v213;
    *(__m128i *)v206 = _mm_unpacklo_epi64(v118, v118);
  }
  for ( ; v29 != v30; v206[1] = v34 )
  {
    while ( v30->m128i_i32[0] )
    {
LABEL_30:
      v30 += 2;
      if ( v29 == v30 )
        goto LABEL_34;
    }
    if ( v206[1] == v207 )
    {
      sub_13CCCF0((__int64)v206, (const __m128i *)v206[1], v30);
      goto LABEL_30;
    }
    v33 = _mm_loadu_si128(v30);
    v34 = (__m128i *)((char *)v206[1] + 32);
    v30 += 2;
    *(__m128i *)v206[1] = v33;
    v34[-1] = _mm_loadu_si128(v30 - 1);
  }
LABEL_34:
  sub_13CD0D0((__int64 *)v206, 0, v219);
  v35 = v213;
  v36 = (const __m128i *)v212;
  v193.m128i_i64[0] = ((char *)v206[1] - (char *)v206[0]) >> 5;
  v195 = v193.m128i_i32[0];
  if ( v212 != v213 )
  {
    do
    {
      while ( v36->m128i_i32[0] != 1 )
      {
LABEL_36:
        v36 += 2;
        if ( v35 == v36 )
          goto LABEL_40;
      }
      if ( v206[1] == v207 )
      {
        sub_13CCCF0((__int64)v206, (const __m128i *)v206[1], v36);
        goto LABEL_36;
      }
      v37 = _mm_loadu_si128(v36);
      v38 = (__m128i *)((char *)v206[1] + 32);
      v36 += 2;
      *(__m128i *)v206[1] = v37;
      v38[-1] = _mm_loadu_si128(v36 - 1);
      v206[1] = v38;
    }
    while ( v35 != v36 );
  }
LABEL_40:
  sub_13CD0D0((__int64 *)v206, v193.m128i_u32[0], v219);
  v39 = v213;
  v40 = (const __m128i *)v212;
  v41 = ((char *)v206[1] - (char *)v206[0]) >> 5;
  if ( v212 == v213 )
    goto LABEL_59;
  while ( 2 )
  {
    while ( 2 )
    {
      v43 = v40->m128i_i32[0];
      if ( (unsigned int)(v40->m128i_i32[0] - 2) > 1 )
      {
        v42 = *(_DWORD *)a3 & 0x40800;
        if ( (v43 != 4 || v42) && ((*(_BYTE *)(a3 + 1) & 8) == 0 || v43 != 5) )
        {
          if ( v42 == 0x40000 )
          {
            if ( v43 != 6 )
              goto LABEL_49;
          }
          else if ( v43 != 7 || v42 != 264192 )
          {
LABEL_49:
            v40 += 2;
            if ( v39 == v40 )
              goto LABEL_53;
            continue;
          }
        }
      }
      break;
    }
    if ( v206[1] == v207 )
    {
      sub_13CCCF0((__int64)v206, (const __m128i *)v206[1], v40);
      goto LABEL_49;
    }
    v44 = _mm_loadu_si128(v40);
    v45 = (__m128i *)((char *)v206[1] + 32);
    v40 += 2;
    *(__m128i *)v206[1] = v44;
    v45[-1] = _mm_loadu_si128(v40 - 1);
    v206[1] = v45;
    if ( v39 != v40 )
      continue;
    break;
  }
LABEL_53:
  v46 = (const __m128i *)v212;
  v47 = v213;
  if ( v212 != v213 )
  {
    do
    {
      while ( v46->m128i_i32[0] != 8 )
      {
LABEL_55:
        v46 += 2;
        if ( v47 == v46 )
          goto LABEL_59;
      }
      if ( v206[1] == v207 )
      {
        sub_13CCCF0((__int64)v206, (const __m128i *)v206[1], v46);
        goto LABEL_55;
      }
      v48 = _mm_loadu_si128(v46);
      v49 = (__m128i *)((char *)v206[1] + 32);
      v46 += 2;
      *(__m128i *)v206[1] = v48;
      v49[-1] = _mm_loadu_si128(v46 - 1);
      v206[1] = v49;
    }
    while ( v47 != v46 );
  }
LABEL_59:
  v50 = sub_13CD0D0((__int64 *)v206, v193.m128i_u32[0], v219);
  v53 = (char *)v206[1];
  v54 = (char *)v206[0];
  ptr = nullptr;
  v196 = v41 - v50;
  v197 = v218;
  si128.m128i_i64[0] = 0;
  si128.m128i_i32[2] = 0;
  v55 = ((char *)v206[1] - (char *)v206[0]) >> 5;
  v56 = v55;
  if ( !(_DWORD)v55 )
    goto LABEL_69;
  v57 = (unsigned int)(v55 - 1);
  v58 = 0;
  v193.m128i_i64[1] = (__int64)&ptr;
  v194 = (__m128 *)v209;
  while ( 2 )
  {
    v60 = &v54[32 * v58];
    if ( !v60[28] )
    {
      v59 = v58 + 1;
      if ( v57 == v58 )
        break;
      goto LABEL_62;
    }
    v61 = si128.m128i_u32[2];
    v62 = *((_DWORD *)v60 + 6);
    v63 = (char *)ptr;
    if ( !si128.m128i_i32[2] )
      goto LABEL_229;
    v64 = (unsigned int)(si128.m128i_i32[2] - 1);
    v65 = (37 * v58) & (si128.m128i_i32[2] - 1);
    v66 = (int *)((char *)ptr + 8 * v65);
    v67 = *v66;
    if ( *v66 == (_DWORD)v58 )
    {
LABEL_66:
      sub_B69B00(v194, v66, (int *)ptr + 2 * si128.m128i_u32[2], v193.m128i_i64[1], 1);
      goto LABEL_67;
    }
    v142 = 1;
    v143 = nullptr;
    if ( v67 != -1 )
    {
      while ( 1 )
      {
        if ( !v143 && v67 == -2 )
          v143 = v66;
        v52 = (unsigned int)(v142 + 1);
        v65 = v64 & (v142 + v65);
        v66 = (int *)((char *)ptr + 8 * v65);
        v67 = *v66;
        if ( *v66 == (_DWORD)v58 )
          goto LABEL_66;
        if ( v67 == -1 )
          break;
        ++v142;
      }
      if ( v143 )
        v66 = v143;
    }
    v144 = si128.m128i_i32[0] + 1;
    v51 = (unsigned int)(4 * (si128.m128i_i32[0] + 1));
    if ( (unsigned int)v51 < 3 * si128.m128i_i32[2] )
    {
      v145 = (unsigned __int32)si128.m128i_i32[2] >> 3;
      if ( si128.m128i_i32[2] - si128.m128i_i32[1] - v144 <= (unsigned int)v145 )
      {
        LODWORD(v198) = si128.m128i_i32[2];
        v162 = (((v64 >> 1) | v64) >> 2) | (v64 >> 1) | v64;
        v163 = (((v162 >> 4) | v162) >> 8) | (v162 >> 4) | v162;
        v164 = ((v163 >> 16) | v163) + 1;
        if ( (unsigned int)v164 < 0x40 )
          LODWORD(v164) = 64;
        si128.m128i_i32[2] = v164;
        v165 = (char *)sub_22300B0(8LL * (unsigned int)v164, 4, v61, 64, v145, v52);
        ptr = v165;
        if ( v63 )
        {
          v166 = 8LL * (unsigned int)v198;
          si128.m128i_i64[0] = 0;
          v167 = &v165[8 * si128.m128i_u32[2]];
          v168 = si128.m128i_i32[2];
          for ( i = v165; v167 != i; i += 8 )
            *(_DWORD *)i = -1;
          v170 = v63;
          LODWORD(v198) = v168 - 1;
          do
          {
            v171 = *(_DWORD *)v170;
            if ( (unsigned int)(*(_DWORD *)v170 + 2) > 1 )
            {
              if ( !v168 )
                goto LABEL_337;
              v172 = (unsigned int)v198 & (37 * v171);
              v173 = &v165[8 * v172];
              v174 = *(_DWORD *)v173;
              if ( v171 != *(_DWORD *)v173 && v174 != -1 )
              {
                LODWORD(v200) = 1;
                v199 = nullptr;
                v201 = v170;
                while ( 1 )
                {
                  if ( !v199 )
                  {
                    if ( v174 != -2 )
                      v173 = v199;
                    v199 = v173;
                  }
                  v172 = (unsigned int)v198 & ((_DWORD)v200 + v172);
                  v173 = &v165[8 * v172];
                  v174 = *(_DWORD *)v173;
                  if ( v171 == *(_DWORD *)v173 )
                  {
                    v170 = v201;
                    goto LABEL_251;
                  }
                  if ( v174 == -1 )
                    break;
                  LODWORD(v200) = (_DWORD)v200 + 1;
                }
                v170 = v201;
                if ( v199 )
                  v173 = v199;
              }
LABEL_251:
              *(_DWORD *)v173 = v171;
              v175 = *((_DWORD *)v170 + 1);
              ++si128.m128i_i32[0];
              *((_DWORD *)v173 + 1) = v175;
            }
            v170 += 8;
          }
          while ( &v63[v166] != v170 );
          operator delete(v63, v166, 4);
          v63 = (char *)ptr;
          v183 = si128.m128i_i32[2];
          v144 = si128.m128i_i32[0] + 1;
        }
        else
        {
          si128.m128i_i64[0] = 0;
          v63 = &v165[8 * si128.m128i_u32[2]];
          v183 = si128.m128i_i32[2];
          if ( v165 != v63 )
          {
            v192 = v165;
            do
            {
              *(_DWORD *)v192 = -1;
              v192 += 8;
            }
            while ( v63 != v192 );
            v63 = v165;
          }
          v144 = 1;
        }
        if ( !v183 )
          goto LABEL_336;
        v184 = v183 - 1;
        v185 = (v183 - 1) & (37 * v58);
        v66 = (int *)&v63[8 * v185];
        v186 = *v66;
        if ( *v66 != (_DWORD)v58 )
        {
          v187 = 1;
          v188 = nullptr;
          if ( v186 != -1 )
          {
            while ( 1 )
            {
              if ( !v188 && v186 == -2 )
                v188 = v66;
              v185 = v184 & (v187 + v185);
              v66 = (int *)&v63[8 * v185];
              v186 = *v66;
              if ( *v66 == (_DWORD)v58 )
                break;
              if ( v186 == -1 )
              {
                if ( v188 )
                  v66 = v188;
                break;
              }
              ++v187;
            }
          }
        }
      }
    }
    else
    {
LABEL_229:
      LODWORD(v198) = si128.m128i_i32[2];
      v147 = (((((((unsigned int)(2 * si128.m128i_i32[2] - 1)
                 | ((unsigned __int64)(unsigned int)(2 * si128.m128i_i32[2] - 1) >> 1)) >> 2)
               | (unsigned int)(2 * si128.m128i_i32[2] - 1)
               | ((unsigned __int64)(unsigned int)(2 * si128.m128i_i32[2] - 1) >> 1)) >> 4)
             | (((unsigned int)(2 * si128.m128i_i32[2] - 1)
               | ((unsigned __int64)(unsigned int)(2 * si128.m128i_i32[2] - 1) >> 1)) >> 2)
             | (unsigned int)(2 * si128.m128i_i32[2] - 1)
             | ((unsigned __int64)(unsigned int)(2 * si128.m128i_i32[2] - 1) >> 1)) >> 8)
           | (((((unsigned int)(2 * si128.m128i_i32[2] - 1)
               | ((unsigned __int64)(unsigned int)(2 * si128.m128i_i32[2] - 1) >> 1)) >> 2)
             | (unsigned int)(2 * si128.m128i_i32[2] - 1)
             | ((unsigned __int64)(unsigned int)(2 * si128.m128i_i32[2] - 1) >> 1)) >> 4)
           | (((unsigned int)(2 * si128.m128i_i32[2] - 1)
             | ((unsigned __int64)(unsigned int)(2 * si128.m128i_i32[2] - 1) >> 1)) >> 2)
           | (unsigned int)(2 * si128.m128i_i32[2] - 1)
           | ((unsigned __int64)(unsigned int)(2 * si128.m128i_i32[2] - 1) >> 1);
      v148 = ((v147 >> 16) | v147) + 1;
      if ( (unsigned int)v148 < 0x40 )
        LODWORD(v148) = 64;
      si128.m128i_i32[2] = v148;
      v149 = (char *)sub_22300B0(8LL * (unsigned int)v148, 4, v61, 64, v51, v52);
      ptr = v149;
      if ( v63 )
      {
        v150 = 8LL * (unsigned int)v198;
        si128.m128i_i64[0] = 0;
        v151 = &v63[v150];
        v152 = &v149[8 * si128.m128i_u32[2]];
        v153 = si128.m128i_i32[2];
        for ( j = v149; v152 != j; j += 8 )
          *(_DWORD *)j = -1;
        v155 = v63;
        for ( k = v153 - 1; v151 != v155; v155 += 8 )
        {
          v157 = *(_DWORD *)v155;
          if ( (unsigned int)(*(_DWORD *)v155 + 2) > 1 )
          {
            if ( !v153 )
            {
LABEL_337:
              dword_0 = 0;
              BUG();
            }
            v158 = k & (37 * v157);
            v159 = &v149[8 * v158];
            v160 = *(_DWORD *)v159;
            if ( v157 != *(_DWORD *)v159 && v160 != -1 )
            {
              LODWORD(v199) = 1;
              v198 = nullptr;
              v200 = v155;
              while ( 1 )
              {
                if ( v160 == -2 )
                {
                  if ( v198 )
                    v159 = v198;
                  v198 = v159;
                }
                v158 = k & ((_DWORD)v199 + v158);
                v159 = &v149[8 * v158];
                v160 = *(_DWORD *)v159;
                if ( v157 == *(_DWORD *)v159 )
                {
                  v155 = v200;
                  goto LABEL_240;
                }
                if ( v160 == -1 )
                  break;
                LODWORD(v199) = (_DWORD)v199 + 1;
              }
              v155 = v200;
              if ( v198 )
                v159 = v198;
            }
LABEL_240:
            *(_DWORD *)v159 = v157;
            v161 = *((_DWORD *)v155 + 1);
            ++si128.m128i_i32[0];
            *((_DWORD *)v159 + 1) = v161;
          }
        }
        operator delete(v63, v150, 4);
        v63 = (char *)ptr;
        v177 = si128.m128i_i32[2];
        v144 = si128.m128i_i32[0] + 1;
      }
      else
      {
        si128.m128i_i64[0] = 0;
        v63 = &v149[8 * si128.m128i_u32[2]];
        v177 = si128.m128i_i32[2];
        if ( v149 != v63 )
        {
          v191 = v149;
          do
          {
            *(_DWORD *)v191 = -1;
            v191 += 8;
          }
          while ( v63 != v191 );
          v63 = v149;
        }
        v144 = 1;
      }
      if ( !v177 )
      {
LABEL_336:
        ++si128.m128i_i32[0];
        BUG();
      }
      v178 = v177 - 1;
      v179 = (v177 - 1) & (37 * v58);
      v66 = (int *)&v63[8 * v179];
      v180 = *v66;
      if ( *v66 != (_DWORD)v58 )
      {
        v181 = 1;
        v182 = nullptr;
        if ( v180 != -1 )
        {
          while ( 1 )
          {
            if ( v180 == -2 && !v182 )
              v182 = v66;
            v179 = v178 & (v181 + v179);
            v66 = (int *)&v63[8 * v179];
            v180 = *v66;
            if ( *v66 == (_DWORD)v58 )
              break;
            if ( v180 == -1 )
            {
              if ( v182 )
                v66 = v182;
              break;
            }
            ++v181;
          }
        }
      }
    }
    si128.m128i_i32[0] = v144;
    if ( *v66 != -1 )
      --si128.m128i_i32[1];
    *v66 = v58;
    v146 = v193.m128i_i64[1];
    v66[1] = v62;
    sub_B69B00(v194, v66, (int *)&v63[8 * si128.m128i_u32[2]], v146, 1);
LABEL_67:
    v54 = (char *)v206[0];
    v59 = v58 + 1;
    if ( v57 != v58 )
    {
LABEL_62:
      v58 = v59;
      continue;
    }
    break;
  }
  v53 = (char *)v206[1];
  v56 = ((char *)v206[1] - (char *)v54) >> 5;
LABEL_69:
  v210 = nullptr;
  *(_OWORD *)v209 = 0;
  if ( v56 > 0xFFFFFFFFFFFFFFFLL )
LABEL_322:
    std::__throw_length_error("vector::reserve");
  v68 = nullptr;
  v69 = nullptr;
  if ( v56 )
  {
    v125 = v56;
    v126 = operator new(v125 * 16);
    v69 = (__m128i *)v126;
    if ( v209[0] )
    {
      v193.m128i_i64[1] = v126;
      operator delete(v209[0]);
      v69 = (__m128i *)v193.m128i_i64[1];
    }
    v193.m128i_i64[1] = (__int64)v69;
    v127 = _mm_loadl_epi64((const __m128i *)&v193.m128i_u64[1]);
    v68 = &v69[v125];
    v210 = &v69[v125];
    v53 = (char *)v206[1];
    v54 = (char *)v206[0];
    *(__m128i *)v209 = _mm_unpacklo_epi64(v127, v127);
  }
  if ( v53 != v54 )
  {
    while ( 1 )
    {
      v70 = _mm_loadu_si128((const __m128i *)(v54 + 8));
      v204[0] = v70;
      if ( v69 == v68 )
      {
        v54 += 32;
        sub_13CE7E0((__int64)v209, v69, v204);
        if ( v54 == v53 )
          break;
      }
      else
      {
        *v69 = v70;
        v54 += 32;
        v209[1] = &v69[1];
        if ( v54 == v53 )
          break;
      }
      v69 = (__m128i *)v209[1];
      v68 = v210;
    }
  }
  sub_13C69E0((__int64)v197, (__int64 *)v209, v193.m128i_i32[0], v196, (__int64 *)&ptr);
  if ( v209[0] )
    operator delete(v209[0]);
  operator delete(ptr, 8LL * si128.m128i_u32[2], 4);
  v71 = v218;
  v72 = (char *)0xCCCCCCCCCCCCCCCDLL;
  v73 = (char **)v215;
  v74 = (void **)v218[31];
  v75 = v218[33];
  v193.m128i_i64[0] = (__int64)v216;
  v193.m128i_i64[1] = (char *)v216 - (_BYTE *)v215;
  v76 = 0xCCCCCCCCCCCCCCCDLL * (((char *)v216 - (_BYTE *)v215) >> 3);
  v77 = v76;
  if ( v76 > 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v75 - (_QWORD)v74) >> 3) )
  {
    if ( v76 )
    {
      if ( (unsigned __int64)v76 > 0x666666666666666LL )
        std::__throw_bad_alloc();
      v72 = (char *)v193.m128i_i64[1];
      v112 = (char **)operator new(v193.m128i_u64[1]);
    }
    else
    {
      v112 = nullptr;
    }
    if ( v73 != (char **)v193.m128i_i64[0] )
    {
      *v112 = (char *)(v112 + 2);
      v113 = *v73;
      v114 = (signed __int64)v73[1];
      if ( &(*v73)[v114] && !v113 )
LABEL_170:
        std::__throw_logic_error("basic_string::_M_construct null not valid");
      v115 = v112;
      while ( (unsigned __int64)v114 <= 0xF )
      {
        v116 = *v115;
        if ( v114 == 1 )
        {
          *v116 = *v113;
          v116 = *v115;
        }
        else if ( v114 )
        {
          goto LABEL_175;
        }
LABEL_167:
        v115[1] = (char *)v114;
        v73 += 5;
        v115 += 5;
        v116[v114] = 0;
        *((_BYTE *)v115 - 8) = *((_BYTE *)v73 - 8);
        if ( (char **)v193.m128i_i64[0] == v73 )
          goto LABEL_188;
        *v115 = (char *)(v115 + 2);
        v113 = *v73;
        v114 = (signed __int64)v73[1];
        if ( &(*v73)[v114] && !v113 )
          goto LABEL_170;
      }
      if ( v114 < 0 )
LABEL_321:
        std::__throw_length_error("basic_string::_M_create");
      v116 = (char *)operator new(v114 + 1);
      v115[2] = (char *)v114;
      *v115 = v116;
LABEL_175:
      v76 = (__int64)v113;
      v72 = v116;
      memcpy(v116, v113, v114);
      v116 = *v115;
      goto LABEL_167;
    }
LABEL_188:
    v122 = (void **)v71[32];
    v123 = (void **)v71[31];
    if ( v122 != v123 )
    {
      do
      {
        while ( 1 )
        {
          v72 = (char *)*v123;
          if ( *v123 == v123 + 2 )
            break;
          operator delete(v72);
          v123 += 5;
          if ( v122 == v123 )
            goto LABEL_191;
        }
        v123 += 5;
      }
      while ( v122 != v123 );
LABEL_191:
      v123 = (void **)v71[31];
    }
    if ( v123 )
    {
      v72 = (char *)v123;
      operator delete(v123);
    }
    v71[31] = (unsigned __int64)v112;
    v124 = (char *)v112 + v193.m128i_i64[1];
    v71[32] = (unsigned __int64)v124;
    v71[33] = (unsigned __int64)v124;
LABEL_89:
    if ( !v219 )
      goto LABEL_90;
LABEL_110:
    v85 = sub_227D6D0(v72, v76);
    v86 = *(__m128i **)(v85 + 32);
    if ( *(_QWORD *)(v85 + 24) - (_QWORD)v86 > 0x22u )
    {
      v128 = _mm_load_si128((const __m128i *)&xmmword_23AA4E0);
      v87 = (_BYTE *)(&stru_3A60 + 5);
      v86[2].m128i_i8[2] = 10;
      v86[2].m128i_i16[0] = 14949;
      *v86 = v128;
      v86[1] = _mm_load_si128((const __m128i *)&xmmword_23AA4F0);
      *(_QWORD *)(v85 + 32) += 35LL;
    }
    else
    {
      v87 = "#include \"...\" search starts here:\n";
      v72 = (char *)v85;
      sub_227BF10(v85, "#include \"...\" search starts here:\n", 35);
    }
    v88 = 0;
    v89 = ((char *)v206[1] - (char *)v206[0]) >> 5;
    v90 = (unsigned int)(v89 - 1);
    if ( !(_DWORD)v89 )
    {
LABEL_208:
      v131 = sub_227D6D0(v72, v87);
      v132 = *(__m128i **)(v131 + 32);
      if ( *(_QWORD *)(v131 + 24) - (_QWORD)v132 > 0x13u )
      {
        v190 = _mm_load_si128((const __m128i *)&xmmword_23AA510);
        v132[1].m128i_i32[0] = 170816627;
        *v132 = v190;
        *(_QWORD *)(v131 + 32) += 20LL;
      }
      else
      {
        sub_227BF10(v131, "End of search list.\n", 20);
      }
      goto LABEL_90;
    }
    while ( 1 )
    {
      if ( v195 == (_DWORD)v88 )
      {
        v133 = sub_227D6D0(v72, v87);
        v134 = *(__m128i **)(v133 + 32);
        if ( *(_QWORD *)(v133 + 24) - (_QWORD)v134 > 0x22u )
        {
          v189 = _mm_load_si128((const __m128i *)&xmmword_23AA500);
          v134[2].m128i_i8[2] = 10;
          v134[2].m128i_i16[0] = 14949;
          *v134 = v189;
          v134[1] = _mm_load_si128((const __m128i *)&xmmword_23AA4F0);
          *(_QWORD *)(v133 + 32) += 35LL;
        }
        else
        {
          v87 = "#include <...> search starts here:\n";
          sub_227BF10(v133, "#include <...> search starts here:\n", 35);
        }
      }
      v98 = &byte_22F0C30;
      v99 = (char *)v206[0] + 32 * v88 + 8;
      v100 = sub_13C04B0((__int64)v99);
      v102 = v101;
      v103 = (*((_BYTE *)v206[0] + 32 * v88 + 16) >> 3) & 3;
      if ( v103 )
      {
        v98 = " (framework directory)";
        if ( v103 != 1 )
          v98 = " (headermap)";
      }
      v91 = sub_227D6D0(v99, v87);
      v104 = *(_BYTE **)(v91 + 32);
      if ( v104 == *(_BYTE **)(v91 + 24) )
      {
        v91 = sub_227BF10(v91, " ", 1);
        v92 = *(void **)(v91 + 32);
        if ( *(_QWORD *)(v91 + 24) - (_QWORD)v92 < v102 )
          goto LABEL_128;
      }
      else
      {
        *v104 = 32;
        v92 = (void *)(*(_QWORD *)(v91 + 32) + 1LL);
        v105 = *(_QWORD *)(v91 + 24);
        *(_QWORD *)(v91 + 32) = v92;
        if ( v105 - (__int64)v92 < v102 )
        {
LABEL_128:
          v91 = sub_227BF10(v91, v100, v102);
          goto LABEL_117;
        }
      }
      if ( v102 )
      {
        memcpy(v92, v100, v102);
        *(_QWORD *)(v91 + 32) += v102;
      }
LABEL_117:
      v93 = strlen(v98);
      v94 = *(char **)(v91 + 24);
      v95 = *(char **)(v91 + 32);
      v72 = v94;
      v87 = v95;
      if ( v93 > v94 - v95 )
      {
        v96 = sub_227BF10(v91, v98, v93);
        v72 = *(char **)(v96 + 24);
        v87 = *(char **)(v96 + 32);
        v91 = v96;
        goto LABEL_119;
      }
      if ( v93 )
      {
        if ( (unsigned int)v93 >= 8 )
        {
          v135 = (unsigned __int64)(v95 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          *(_QWORD *)v95 = *(_QWORD *)v98;
          *(_QWORD *)&v95[(unsigned int)v93 - 8] = *(_QWORD *)&v98[(unsigned int)v93 - 8];
          v136 = &v95[-v135];
          v137 = (const char *)(v98 - v136);
          v138 = (v93 + (_DWORD)v136) & 0xFFFFFFF8;
          if ( v138 >= 8 )
          {
            v139 = v138 & 0xFFFFFFF8;
            v140 = 0;
            do
            {
              v141 = v140;
              v140 += 8;
              *(_QWORD *)(v135 + v141) = *(_QWORD *)&v137[v141];
            }
            while ( v140 < v139 );
          }
LABEL_215:
          v95 = *(char **)(v91 + 32);
          v94 = *(char **)(v91 + 24);
        }
        else if ( (v93 & 4) != 0 )
        {
          *(_DWORD *)v95 = *(_DWORD *)v98;
          *(_DWORD *)&v95[(unsigned int)v93 - 4] = *(_DWORD *)&v98[(unsigned int)v93 - 4];
          v95 = *(char **)(v91 + 32);
          v94 = *(char **)(v91 + 24);
        }
        else if ( (_DWORD)v93 )
        {
          *v95 = *v98;
          if ( (v93 & 2) == 0 )
            goto LABEL_215;
          *(_WORD *)&v95[(unsigned int)v93 - 2] = *(_WORD *)&v98[(unsigned int)v93 - 2];
          v95 = *(char **)(v91 + 32);
          v94 = *(char **)(v91 + 24);
        }
        v87 = &v95[v93];
        v72 = v94;
        *(_QWORD *)(v91 + 32) = &v95[v93];
      }
LABEL_119:
      if ( v72 == v87 )
      {
        v87 = "\n";
        v72 = (char *)v91;
        sub_227BF10(v91, "\n", 1);
        v97 = v88 + 1;
        if ( v88 == v90 )
          goto LABEL_208;
      }
      else
      {
        *v87 = 10;
        v97 = v88 + 1;
        ++*(_QWORD *)(v91 + 32);
        if ( v88 == v90 )
          goto LABEL_208;
      }
      v88 = v97;
    }
  }
  v78 = (void **)v218[32];
  v76 = (char *)v78 - (char *)v74;
  v79 = 0xCCCCCCCCCCCCCCCDLL * (v78 - v74);
  if ( v77 <= v79 )
  {
    if ( v193.m128i_i64[1] > 0 )
    {
      do
      {
        v76 = (__int64)v73;
        v72 = (char *)v74;
        v73 += 5;
        v74 += 5;
        sub_9EE8A0((__int64)v72, v76);
        *((_BYTE *)v74 - 8) = *((_BYTE *)v73 - 8);
        --v77;
      }
      while ( v77 );
      v78 = (void **)v71[32];
    }
    if ( v74 != v78 )
    {
      v80 = v74;
      do
      {
        while ( 1 )
        {
          v72 = (char *)*v80;
          if ( *v80 == v80 + 2 )
            break;
          operator delete(v72);
          v80 += 5;
          if ( v80 == v78 )
            goto LABEL_88;
        }
        v80 += 5;
      }
      while ( v80 != v78 );
LABEL_88:
      v71[32] = (unsigned __int64)v74;
    }
    goto LABEL_89;
  }
  v83 = (char *)v215 + v76;
  if ( v76 <= 0 )
    goto LABEL_131;
  do
  {
    v76 = (__int64)v73;
    v72 = (char *)v74;
    v73 += 5;
    v74 += 5;
    sub_9EE8A0((__int64)v72, v76);
    *((_BYTE *)v74 - 8) = *((_BYTE *)v73 - 8);
    --v79;
  }
  while ( v79 );
  v78 = (void **)v71[32];
  if ( (char *)v193.m128i_i64[0] != v83 )
  {
    while ( 1 )
    {
      *v78 = v78 + 2;
      v107 = *(_BYTE **)v83;
      v108 = *((_QWORD *)v83 + 1);
      if ( v108 + *(_QWORD *)v83 && !v107 )
        goto LABEL_170;
      if ( (unsigned __int64)v108 > 0xF )
        break;
      v106 = *v78;
      if ( v108 == 1 )
      {
        *v106 = *v107;
        v106 = *v78;
        goto LABEL_130;
      }
      if ( v108 )
        goto LABEL_153;
LABEL_130:
      v78[1] = (void *)v108;
      v83 += 40;
      v78 += 5;
      v106[v108] = 0;
      *((_BYTE *)v78 - 8) = *(v83 - 8);
LABEL_131:
      if ( (char *)v193.m128i_i64[0] == v83 )
        goto LABEL_109;
    }
    if ( v108 < 0 )
      goto LABEL_321;
    v106 = (_BYTE *)operator new(v108 + 1);
    v78[2] = (void *)v108;
    *v78 = v106;
LABEL_153:
    v76 = (__int64)v107;
    v72 = v106;
    memcpy(v106, v107, v108);
    v106 = *v78;
    goto LABEL_130;
  }
LABEL_109:
  v84 = v219 == 0;
  v71[32] = (unsigned __int64)v78;
  if ( !v84 )
    goto LABEL_110;
LABEL_90:
  if ( v206[0] )
    operator delete(v206[0]);
  if ( v220 != v221 )
    operator delete(v220);
  v81 = v216;
  v82 = (void **)v215;
  if ( v216 != v215 )
  {
    do
    {
      while ( *v82 != v82 + 2 )
      {
        operator delete(*v82);
        v82 += 5;
        if ( v82 == (void **)v81 )
          goto LABEL_97;
      }
      v82 += 5;
    }
    while ( v81 != (const __m128i *)v82 );
LABEL_97:
    v82 = (void **)v215;
  }
  if ( v82 )
    operator delete(v82);
  if ( v212 )
    operator delete(v212);
}
