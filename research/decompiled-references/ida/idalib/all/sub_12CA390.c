void __fastcall sub_12CA390(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, void **a6)
{
  void **v7; // rbx
  __int64 *v8; // rax
  void **v9; // r12
  char v10; // r14
  __m128i si128; // xmm1
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  __int64 (__fastcall **v14)(void **, void *, __int64); // rax
  void **v15; // rax
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  const char *v19; // r15
  const char *v20; // rdi
  __m128i *p_ptr; // rbp
  size_t v22; // rax
  size_t v23; // r14
  __int64 *v24; // rdi
  __int64 v25; // rax
  unsigned __int64 v26; // rdx
  __int64 (__fastcall **v27)(void **, __int64, __int64); // rax
  void **v28; // rax
  __int64 v29; // rcx
  unsigned __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  unsigned __int64 v33; // rax
  char *v34; // rdx
  char *v35; // r14
  char *v36; // r15
  char *v37; // rdi
  size_t v38; // rax
  __int64 v39; // r14
  size_t v40; // rax
  size_t v41; // rdx
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rax
  char *v45; // rdx
  void ***v46; // r15
  size_t v47; // r14
  void **v48; // rbx
  void *v49; // rax
  __int64 v50; // r14
  size_t v51; // rax
  size_t v52; // rdx
  unsigned __int64 v53; // rax
  unsigned __int64 v54; // rax
  size_t v55; // rcx
  size_t v56; // r8
  __int64 v57; // r15
  char *v58; // rax
  __m128i v59; // xmm0
  char *v60; // r9
  void **v61; // rax
  size_t v62; // rax
  size_t v63; // rax
  __int64 v64; // rcx
  unsigned __int64 v65; // rdx
  size_t v66; // rcx
  unsigned __int64 v67; // r8
  __int64 v68; // r15
  char *v69; // rax
  __m128i v70; // xmm0
  _BYTE *v71; // r9
  void **v72; // rax
  size_t v73; // rax
  size_t v74; // rax
  __int64 v75; // rcx
  unsigned __int64 v76; // rdx
  __int64 v77; // rax
  unsigned __int64 v78; // rax
  char *v79; // rdx
  char *v80; // r14
  char *v81; // r15
  __int64 v82; // rdx
  void **v83; // rax
  void ***v84; // r15
  void **v85; // rax
  __m128i *v86; // r12
  void **v87; // rbp
  void ***v88; // rbx
  void **v89; // r14
  void (__fastcall *v90)(__int64, void **, __int64); // rcx
  int v91; // eax
  unsigned __int64 v92; // rax
  char *v93; // rdx
  void ***v94; // r15
  void **v95; // r14
  __m128 v96; // xmm0
  void **v97; // rbx
  __int64 v98; // rbx
  const __m128i *v99; // r14
  __int64 v100; // r15
  __int64 v101; // rdx
  unsigned __int64 v102; // rcx
  __int64 v103; // rsi
  int v104; // eax
  __int64 v105; // rcx
  __int64 v106; // rsi
  _QWORD *v107; // rbx
  void (__fastcall *v108)(_QWORD *); // rax
  __int64 v109; // rbp
  __int64 v110; // r14
  void *v111; // rdi
  _QWORD *v112; // rdi
  _QWORD *v113; // rdi
  void **v114; // r14
  void **v115; // rbp
  void *v116; // rdi
  _QWORD *v117; // rdi
  void **v118; // rax
  void **v119; // rax
  void ***v120; // r15
  void **v121; // rax
  __m128i *v122; // r12
  void **v123; // rbp
  void ***v124; // rbx
  void **v125; // r14
  void **v126; // rax
  __int64 v127; // rbx
  __int64 v128; // rax
  const char **v129; // rax
  char *v130; // r14
  size_t v131; // rax
  __int64 v132; // rax
  __int64 v133; // rax
  __int64 v134; // rax
  __int64 v135; // rax
  __int64 v136; // rax
  __int64 v137; // rax
  __int64 v138; // rax
  __int64 v139; // rax
  unsigned __int64 v140; // rdx
  size_t v141; // rcx
  unsigned __int64 v142; // r8
  __int64 v143; // rdx
  char *v144; // r9
  __int64 (__fastcall **v145)(void **); // rax
  __int64 v146; // rax
  __int64 v147; // rcx
  unsigned __int64 v148; // rdx
  __int64 v149; // rax
  unsigned __int64 v150; // rdx
  void **v151; // r14
  size_t v152; // r15
  size_t v153; // rcx
  __int64 v154; // r14
  _BYTE *v155; // r8
  void **v156; // rcx
  void **v157; // rax
  __int64 (__fastcall **v158)(void **); // rax
  __int64 v159; // rax
  __int64 v160; // rcx
  unsigned __int64 v161; // rdx
  __int64 v162; // rax
  unsigned __int64 v163; // rdx
  const char *v164; // r13
  __int64 v165; // rax
  unsigned __int64 v166; // rdi
  char *v167; // rax
  __m128i *v168; // r10
  size_t v169; // rdx
  char *v170; // rax
  signed __int64 v171; // r14
  unsigned __int64 v172; // rdi
  _BYTE *v173; // rax
  void **v174; // r9
  _BYTE *v175; // rax
  __int64 v176; // r15
  unsigned __int64 v177; // rbx
  __int64 v178; // rdi
  __int64 v179; // r15
  __int64 v180; // r15
  _QWORD *v181; // r14
  _BYTE *v182; // rsi
  __int64 v183; // rdx
  size_t v184; // r8
  __int64 v185; // rax
  unsigned __int64 v186; // rdx
  __int64 v187; // r15
  unsigned __int64 v188; // rdi
  char *v189; // rax
  __m128i *v190; // r10
  size_t v191; // rdx
  char *v192; // rax
  __m128i v193; // xmm0
  __m128i *v194; // rax
  __int64 v195; // r15
  unsigned __int64 v196; // rdi
  _BYTE *v197; // rax
  __m128i *v198; // r10
  size_t v199; // rdx
  _BYTE *v200; // rax
  __m128i v201; // xmm0
  __m128i *v202; // rax
  void **v203; // [rsp+0h] [rbp-348h] BYREF
  __int64 *v204; // [rsp+8h] [rbp-340h]
  __int64 v205; // [rsp+10h] [rbp-338h]
  __int64 v206; // [rsp+18h] [rbp-330h]
  __int64 v207; // [rsp+20h] [rbp-328h]
  void **v208; // [rsp+28h] [rbp-320h]
  size_t v209; // [rsp+30h] [rbp-318h] BYREF
  void **v210; // [rsp+38h] [rbp-310h]
  __int64 v211; // [rsp+40h] [rbp-308h]
  size_t n; // [rsp+48h] [rbp-300h]
  size_t v213; // [rsp+50h] [rbp-2F8h]
  char *v214; // [rsp+58h] [rbp-2F0h]
  __int64 v215; // [rsp+60h] [rbp-2E8h] BYREF
  unsigned __int64 v216; // [rsp+68h] [rbp-2E0h]
  void *v217[4]; // [rsp+70h] [rbp-2D8h] BYREF
  void *v218[2]; // [rsp+90h] [rbp-2B8h] BYREF
  char v219[16]; // [rsp+A0h] [rbp-2A8h] BYREF
  void *src; // [rsp+B0h] [rbp-298h] BYREF
  size_t v221; // [rsp+B8h] [rbp-290h]
  __m128i v222; // [rsp+C0h] [rbp-288h] BYREF
  void *v223; // [rsp+D0h] [rbp-278h] BYREF
  size_t v224; // [rsp+D8h] [rbp-270h]
  __m128i v225; // [rsp+E0h] [rbp-268h] BYREF
  void *v226; // [rsp+F0h] [rbp-258h] BYREF
  size_t v227; // [rsp+F8h] [rbp-250h]
  __m128i v228; // [rsp+100h] [rbp-248h] BYREF
  void *v229; // [rsp+110h] [rbp-238h] BYREF
  size_t v230; // [rsp+118h] [rbp-230h]
  __m128i v231; // [rsp+120h] [rbp-228h] BYREF
  __int16 v232; // [rsp+130h] [rbp-218h]
  void *v233; // [rsp+140h] [rbp-208h] BYREF
  __int64 v234; // [rsp+148h] [rbp-200h]
  _BYTE v235[128]; // [rsp+150h] [rbp-1F8h] BYREF
  void *v236; // [rsp+1D0h] [rbp-178h]
  __int64 v237; // [rsp+1D8h] [rbp-170h]
  __int64 v238; // [rsp+1E0h] [rbp-168h]
  _DWORD v239[34]; // [rsp+1E8h] [rbp-160h] BYREF
  __m256i ptr; // [rsp+270h] [rbp-D8h] BYREF
  __int16 v241; // [rsp+290h] [rbp-B8h]

  v7 = a6;
  v8 = *(__int64 **)(a1 + 24);
  v9 = &v233;
  v211 = a1;
  v205 = a2;
  v206 = a3;
  v204 = v8;
  v207 = a5;
  v233 = v235;
  v234 = 0x1000000000LL;
  v10 = sub_21B7850(a6, 3264, 3299, 0);
  if ( *(_DWORD *)(a4 + 8) == 1 )
  {
    v162 = (unsigned int)v234;
    v163 = (unsigned int)v234 + 1LL;
    if ( v163 > HIDWORD(v234) )
    {
      sub_2237220(&v233, v235, v163, 8);
      v162 = (unsigned int)v234;
    }
    *((_QWORD *)v233 + v162) = "-o";
    v164 = *(const char **)a4;
    LODWORD(v234) = v234 + 1;
    v165 = (unsigned int)v234;
    if ( (unsigned __int64)(unsigned int)v234 + 1 > HIDWORD(v234) )
    {
      sub_2237220(&v233, v235, (unsigned int)v234 + 1LL, 8);
      v165 = (unsigned int)v234;
    }
    *((_QWORD *)v233 + v165) = v164;
    LODWORD(v234) = v234 + 1;
  }
  qmemcpy(v239, "AMODE=64,LIST,DYNAM=DLL,MSGLEVEL=4,CASE=MIXED,REUS=RENT", 55);
  v236 = v239;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  v12 = (unsigned int)v234;
  v238 = si128.m128i_i64[1];
  v13 = (unsigned int)v234 + 1LL;
  v237 = 55;
  if ( v13 > HIDWORD(v234) )
  {
    sub_2237220(&v233, v235, v13, 8);
    v12 = (unsigned int)v234;
  }
  *((_QWORD *)v233 + v12) = "-b";
  v14 = (__int64 (__fastcall **)(void **, void *, __int64))*v7;
  LODWORD(v234) = v234 + 1;
  v15 = (void **)v14[2](v7, v236, v237);
  v16 = (unsigned int)v234;
  v17 = (unsigned int)v234 + 1LL;
  if ( v17 > HIDWORD(v234) )
  {
    v203 = v15;
    sub_2237220(&v233, v235, v17, 8);
    v16 = (unsigned int)v234;
    v15 = v203;
  }
  *((_QWORD *)v233 + v16) = v15;
  v18 = (unsigned int)(v234 + 1);
  LODWORD(v234) = v234 + 1;
  if ( !v10 )
  {
    if ( v18 + 1 > (unsigned __int64)HIDWORD(v234) )
    {
      sub_2237220(&v233, v235, v18 + 1, 8);
      v18 = (unsigned int)v234;
    }
    *((_QWORD *)v233 + v18) = "-e";
    LODWORD(v234) = v234 + 1;
    v132 = (unsigned int)v234;
    if ( (unsigned __int64)(unsigned int)v234 + 1 > HIDWORD(v234) )
    {
      sub_2237220(&v233, v235, (unsigned int)v234 + 1LL, 8);
      v132 = (unsigned int)v234;
    }
    *((_QWORD *)v233 + v132) = "CELQSTRT";
    LODWORD(v234) = v234 + 1;
    v133 = (unsigned int)v234;
    if ( (unsigned __int64)(unsigned int)v234 + 1 > HIDWORD(v234) )
    {
      sub_2237220(&v233, v235, (unsigned int)v234 + 1LL, 8);
      v133 = (unsigned int)v234;
    }
    *((_QWORD *)v233 + v133) = "-O";
    LODWORD(v234) = v234 + 1;
    v134 = (unsigned int)v234;
    if ( (unsigned __int64)(unsigned int)v234 + 1 > HIDWORD(v234) )
    {
      sub_2237220(&v233, v235, (unsigned int)v234 + 1LL, 8);
      v134 = (unsigned int)v234;
    }
    *((_QWORD *)v233 + v134) = "CELQSTRT";
    LODWORD(v234) = v234 + 1;
    v135 = (unsigned int)v234;
    if ( (unsigned __int64)(unsigned int)v234 + 1 > HIDWORD(v234) )
    {
      sub_2237220(&v233, v235, (unsigned int)v234 + 1LL, 8);
      v135 = (unsigned int)v234;
    }
    *((_QWORD *)v233 + v135) = "-u";
    LODWORD(v234) = v234 + 1;
    v136 = (unsigned int)v234;
    if ( (unsigned __int64)(unsigned int)v234 + 1 > HIDWORD(v234) )
    {
      sub_2237220(&v233, v235, (unsigned int)v234 + 1LL, 8);
      v136 = (unsigned int)v234;
    }
    *((_QWORD *)v233 + v136) = "CELQMAIN";
    LODWORD(v234) = v234 + 1;
    v137 = (unsigned int)v234;
    if ( (unsigned __int64)(unsigned int)v234 + 1 > HIDWORD(v234) )
    {
      sub_2237220(&v233, v235, (unsigned int)v234 + 1LL, 8);
      v137 = (unsigned int)v234;
    }
    *((_QWORD *)v233 + v137) = "-x";
    LODWORD(v234) = v234 + 1;
    v138 = (unsigned int)v234;
    if ( (unsigned __int64)(unsigned int)v234 + 1 > HIDWORD(v234) )
    {
      sub_2237220(&v233, v235, (unsigned int)v234 + 1LL, 8);
      v138 = (unsigned int)v234;
    }
    p_ptr = (__m128i *)&ptr;
    *((_QWORD *)v233 + v138) = "/dev/null";
    LODWORD(v234) = v234 + 1;
    v203 = &v229;
    goto LABEL_17;
  }
  v19 = *(const char **)a4;
  if ( *(_QWORD *)a4 )
  {
    v20 = *(const char **)a4;
    p_ptr = (__m128i *)&ptr;
    v22 = strlen(v20);
    v23 = v22;
    ptr.m256i_i64[0] = (__int64)&ptr.m256i_i64[3];
    *(__m128i *)&ptr.m256i_u64[1] = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
    if ( v22 <= 0x80 )
    {
      if ( !v22 )
        goto LABEL_11;
      v24 = &ptr.m256i_i64[3];
    }
    else
    {
      sub_2236E10(&ptr, &ptr.m256i_u64[3], v22, 1);
      v24 = (__int64 *)(ptr.m256i_i64[0] + ptr.m256i_i64[1]);
    }
    memcpy(v24, v19, v23);
    v22 = v23 + ptr.m256i_i64[1];
  }
  else
  {
    p_ptr = (__m128i *)&ptr;
    ptr.m256i_i64[0] = (__int64)&ptr.m256i_i64[3];
    v22 = 0;
    *(__m128i *)&ptr.m256i_u64[1] = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  }
LABEL_11:
  ptr.m256i_i64[1] = v22;
  v229 = (void *)"x";
  v232 = 259;
  v203 = &v229;
  sub_228A730(&ptr, &v229, 0);
  v25 = (unsigned int)v234;
  v26 = (unsigned int)v234 + 1LL;
  if ( v26 > HIDWORD(v234) )
  {
    sub_2237220(&v233, v235, v26, 8);
    v25 = (unsigned int)v234;
  }
  *((_QWORD *)v233 + v25) = "-x";
  v27 = (__int64 (__fastcall **)(void **, __int64, __int64))*v7;
  LODWORD(v234) = v234 + 1;
  v28 = (void **)v27[2](v7, ptr.m256i_i64[0], ptr.m256i_i64[1]);
  v29 = (unsigned int)v234;
  v30 = (unsigned int)v234 + 1LL;
  if ( v30 > HIDWORD(v234) )
  {
    v208 = v28;
    sub_2237220(&v233, v235, v30, 8);
    v29 = (unsigned int)v234;
    v28 = v208;
  }
  *((_QWORD *)v233 + v29) = v28;
  LODWORD(v234) = v234 + 1;
  if ( (unsigned __int64 *)ptr.m256i_i64[0] != &ptr.m256i_u64[3] )
    free((void *)ptr.m256i_i64[0]);
LABEL_17:
  ptr.m256i_i64[0] = 0xD250000089CLL;
  sub_21B6650(v7, &v233, &ptr, 2);
  sub_112D940((__int64)v204, (__int64)v7, (__int64)&v233, v31, v32);
  sub_11C3660((__int64)v204, v207, (__int64)v7, (__int64)&v233, v206);
  v208 = v217;
  sub_12C8560(v217, (__int64)v7);
  ptr.m256i_i32[0] = 2985;
  v33 = sub_21B6DA0(v7, &ptr, 1);
  v34 = (char *)v7[1];
  v35 = &v34[8 * (unsigned int)v33];
  v36 = &v34[8 * HIDWORD(v33)];
  if ( v35 == v36 )
    goto LABEL_21;
  while ( !*(_QWORD *)v35 || !(unsigned __int8)sub_21B9810(*(_QWORD *)v35, 2985) )
  {
    v35 += 8;
    if ( v36 == v35 )
      goto LABEL_21;
  }
  if ( v36 == v35 )
    goto LABEL_21;
  do
  {
    v77 = *(_QWORD *)v35;
    if ( *(_QWORD *)(*(_QWORD *)v35 + 16LL) )
      v77 = *(_QWORD *)(*(_QWORD *)v35 + 16LL);
    v35 += 8;
    *(_BYTE *)(v77 + 44) |= 1u;
    if ( v35 == v36 )
      break;
    while ( !*(_QWORD *)v35 || !(unsigned __int8)sub_21B9810(*(_QWORD *)v35, 2985) )
    {
      v35 += 8;
      if ( v36 == v35 )
        goto LABEL_79;
    }
  }
  while ( v36 != v35 );
LABEL_79:
  ptr.m256i_i32[0] = 2985;
  v78 = sub_21B6DA0(v7, &ptr, 1);
  v79 = (char *)v7[1];
  v80 = &v79[8 * (unsigned int)v78];
  v81 = &v79[8 * HIDWORD(v78)];
  if ( v80 == v81 )
    goto LABEL_83;
  while ( !*(_QWORD *)v80 || !(unsigned __int8)sub_21B9810(*(_QWORD *)v80, 2985) )
  {
    v80 += 8;
    if ( v81 == v80 )
      goto LABEL_83;
  }
  if ( v81 == v80 )
  {
LABEL_83:
    v82 = 0;
  }
  else
  {
    v209 = (size_t)v7;
    do
    {
      v127 = *(_QWORD *)v80;
      v128 = *(_QWORD *)(*(_QWORD *)v80 + 16LL);
      if ( !v128 )
        v128 = *(_QWORD *)v80;
      v80 += 8;
      *(_BYTE *)(v128 + 44) |= 1u;
      if ( v80 == v81 )
        break;
      while ( !*(_QWORD *)v80 || !(unsigned __int8)sub_21B9810(*(_QWORD *)v80, 2985) )
      {
        v80 += 8;
        if ( v81 == v80 )
          goto LABEL_172;
      }
    }
    while ( v81 != v80 );
LABEL_172:
    v82 = v127;
    v7 = (void **)v209;
  }
  v129 = *(const char ***)(v82 + 48);
  v130 = (char *)*v129;
  if ( !*v129 || (v131 = strlen(*v129)) == 0 )
  {
LABEL_21:
    v210 = v218;
    v218[0] = v219;
    strcpy(v219, "SYS1");
    v218[1] = &byte_4;
  }
  else
  {
    v210 = v218;
    v218[0] = v219;
    sub_12C84A0(v218, v130, (__int64)&v130[v131]);
  }
  v37 = getenv("_LD_SYSLIB");
  v229 = v37;
  v38 = 0;
  if ( v37 )
    v38 = strlen(v37);
  v39 = 0;
  v230 = v38;
  v40 = sub_2246FB0(v203, asc_22E1692, 6, 0);
  v41 = v230;
  if ( v40 < v230 )
  {
    v39 = v230 - v40;
    v41 = v40;
  }
  ptr.m256i_i64[1] = v39;
  ptr.m256i_i64[0] = (__int64)v229 + v41;
  v42 = sub_2247130(&ptr, asc_22E1692, 6, -1) + 1;
  if ( v42 > ptr.m256i_i64[1] )
    v42 = ptr.m256i_u64[1];
  v43 = ptr.m256i_i64[1] - v39 + v42;
  if ( v43 > ptr.m256i_i64[1] )
    v43 = ptr.m256i_u64[1];
  v216 = v43;
  v215 = ptr.m256i_i64[0];
  if ( !v43 )
  {
    v139 = (unsigned int)v234;
    v140 = (unsigned int)v234 + 1LL;
    if ( v140 > HIDWORD(v234) )
    {
      sub_2237220(&v233, v235, v140, 8);
      v139 = (unsigned int)v234;
    }
    *((_QWORD *)v233 + v139) = "-S";
    LODWORD(v234) = v234 + 1;
    sub_C05100((__int64)&src, "//'", (__int64)v208);
    v141 = v221;
    if ( 0x7FFFFFFFFFFFFFFFLL - v221 <= 9 )
      goto LABEL_307;
    v142 = v221 + 10;
    if ( src == &v222 )
    {
      v143 = 15;
      if ( v142 <= 0xF )
        goto LABEL_200;
    }
    else
    {
      v143 = v222.m128i_i64[0];
      if ( v142 <= v222.m128i_i64[0] )
      {
LABEL_200:
        qmemcpy((char *)src + v221, ".SCEEBND2'", 10);
        v144 = (char *)src;
        goto LABEL_201;
      }
    }
    if ( (v142 & 0x8000000000000000LL) != 0LL )
      goto LABEL_309;
    v209 = 2 * v143;
    if ( v142 < 2 * v143 )
    {
      v166 = 2 * v143 + 1;
      if ( (v143 & 0x4000000000000000LL) != 0 )
      {
        v166 = 0x8000000000000000LL;
        v209 = 0x7FFFFFFFFFFFFFFFLL;
      }
    }
    else
    {
      v209 = v221 + 10;
      v166 = v221 + 11;
    }
    v213 = v221 + 10;
    n = v221;
    v167 = (char *)operator new(v166);
    v141 = n;
    v142 = v213;
    v144 = v167;
    v168 = (__m128i *)src;
    if ( n )
    {
      if ( n == 1 )
      {
        *v167 = *(_BYTE *)src;
      }
      else
      {
        v169 = n;
        v214 = (char *)v213;
        v213 = n;
        n = (size_t)src;
        v170 = (char *)memcpy(v167, src, v169);
        v142 = (unsigned __int64)v214;
        v141 = v213;
        v168 = (__m128i *)n;
        v144 = v170;
      }
    }
    qmemcpy(&v144[v141], ".SCEEBND2'", 10);
    if ( v168 != &v222 )
    {
      v214 = v144;
      v213 = v142;
      n = v141;
      operator delete(v168);
      v144 = v214;
      v142 = v213;
      v141 = n;
    }
    src = v144;
    v222.m128i_i64[0] = v209;
LABEL_201:
    v221 = v142;
    v144[v141 + 10] = 0;
    ptr.m256i_i64[0] = (__int64)&ptr.m256i_i64[2];
    if ( src == &v222 )
    {
      *(__m128i *)&ptr.m256i_u64[2] = _mm_load_si128(&v222);
    }
    else
    {
      ptr.m256i_i64[0] = (__int64)src;
      ptr.m256i_i64[2] = v222.m128i_i64[0];
    }
    v222.m128i_i8[0] = 0;
    src = &v222;
    v145 = (__int64 (__fastcall **)(void **))*v7;
    ptr.m256i_i64[1] = v221;
    v221 = 0;
    v146 = v145[2](v7);
    v147 = (unsigned int)v234;
    v148 = (unsigned int)v234 + 1LL;
    if ( v148 > HIDWORD(v234) )
    {
      v209 = v146;
      sub_2237220(&v233, v235, v148, 8);
      v147 = (unsigned int)v234;
      v146 = v209;
    }
    *((_QWORD *)v233 + v147) = v146;
    LODWORD(v234) = v234 + 1;
    if ( (unsigned __int64 *)ptr.m256i_i64[0] != &ptr.m256i_u64[2] )
      operator delete((void *)ptr.m256i_i64[0]);
    if ( src != &v222 )
      operator delete(src);
    v149 = (unsigned int)v234;
    v150 = (unsigned int)v234 + 1LL;
    if ( v150 > HIDWORD(v234) )
    {
      sub_2237220(&v233, v235, v150, 8);
      v149 = (unsigned int)v234;
    }
    v151 = v203;
    *((_QWORD *)v233 + v149) = "-S";
    LODWORD(v234) = v234 + 1;
    sub_C05100((__int64)v151, "//'", (__int64)v210);
    v152 = v230;
    if ( 0x7FFFFFFFFFFFFFFFLL - v230 <= 7 )
      goto LABEL_307;
    v153 = v230 + 8;
    if ( v229 == v151 + 2 )
    {
      v154 = 15;
      if ( v153 <= 0xF )
        goto LABEL_214;
    }
    else
    {
      v154 = v231.m128i_i64[0];
      if ( v153 <= v231.m128i_i64[0] )
      {
LABEL_214:
        *(_QWORD *)((char *)v229 + v230) = 0x2742494C5353432ELL;
        v155 = v229;
LABEL_215:
        v230 = v153;
        v156 = v203;
        v155[v152 + 8] = 0;
        ptr.m256i_i64[0] = (__int64)&ptr.m256i_i64[2];
        if ( v229 == v156 + 2 )
        {
          v157 = v156;
          *(__m128i *)&ptr.m256i_u64[2] = _mm_load_si128(&v231);
        }
        else
        {
          ptr.m256i_i64[0] = (__int64)v229;
          ptr.m256i_i64[2] = v231.m128i_i64[0];
          v157 = v156;
        }
        v231.m128i_i8[0] = 0;
        v229 = v157 + 2;
        v158 = (__int64 (__fastcall **)(void **))*v7;
        ptr.m256i_i64[1] = v230;
        v230 = 0;
        v159 = v158[2](v7);
        v160 = (unsigned int)v234;
        v161 = (unsigned int)v234 + 1LL;
        if ( v161 > HIDWORD(v234) )
        {
          v209 = v159;
          sub_2237220(&v233, v235, v161, 8);
          v160 = (unsigned int)v234;
          v159 = v209;
        }
        *((_QWORD *)v233 + v160) = v159;
        LODWORD(v234) = v234 + 1;
        if ( (unsigned __int64 *)ptr.m256i_i64[0] != &ptr.m256i_u64[2] )
          operator delete((void *)ptr.m256i_i64[0]);
        if ( v229 != v203 + 2 )
          operator delete(v229);
        goto LABEL_31;
      }
    }
    if ( (v153 & 0x8000000000000000LL) != 0LL )
      goto LABEL_309;
    v171 = 2 * v154;
    if ( v153 >= v171 )
    {
      v172 = v230 + 9;
      v171 = v230 + 8;
    }
    else
    {
      v172 = v171 + 1;
      if ( v171 < 0 )
      {
        v172 = 0x8000000000000000LL;
        v171 = 0x7FFFFFFFFFFFFFFFLL;
      }
    }
    v209 = v230 + 8;
    v173 = (_BYTE *)operator new(v172);
    v153 = v209;
    v174 = (void **)v229;
    v155 = v173;
    if ( v152 )
    {
      if ( v152 == 1 )
      {
        *v173 = *(_BYTE *)v229;
      }
      else
      {
        n = v209;
        v209 = (size_t)v229;
        v175 = memcpy(v173, v229, v152);
        v153 = n;
        v174 = (void **)v209;
        v155 = v175;
      }
    }
    *(_QWORD *)&v155[v152] = 0x2742494C5353432ELL;
    if ( v174 != v203 + 2 )
    {
      n = v153;
      v209 = (size_t)v155;
      operator delete(v174);
      v153 = n;
      v155 = (_BYTE *)v209;
    }
    v229 = v155;
    v231.m128i_i64[0] = v171;
    goto LABEL_215;
  }
LABEL_31:
  ptr.m256i_i64[0] = 0xBDD00000BF0LL;
  v44 = sub_21B6DA0(v7, &ptr, 2);
  v45 = (char *)v7[1];
  ptr.m256i_i64[2] = 0xBDD00000BF0LL;
  v46 = (void ***)&v45[8 * (unsigned int)v44];
  v47 = (size_t)&v45[8 * HIDWORD(v44)];
  v209 = v47;
  *(__m128 *)ptr.m256i_i8 = _mm_loadh_ps((const double *)&v209);
  if ( v46 == (void ***)v47 )
    goto LABEL_38;
  v209 = (size_t)v7;
  while ( 1 )
  {
    v48 = *v46;
    if ( *v46 )
    {
      if ( (unsigned __int8)sub_21B9810(*v46, 3056) || (unsigned __int8)sub_21B9810(v48, 3037) )
        break;
    }
    ptr.m256i_i64[0] = (__int64)++v46;
    if ( (void ***)v47 == v46 )
    {
      v7 = (void **)v209;
      goto LABEL_38;
    }
  }
  v7 = (void **)v209;
  v209 = v47;
  ptr.m256i_i64[2] = 0xBDD00000BF0LL;
  *(__m128 *)ptr.m256i_i8 = _mm_loadh_ps((const double *)&v209);
  if ( v46 == (void ***)v47 )
  {
LABEL_38:
    v49 = getenv("_LD_SIDE_DECKS");
    v229 = v49;
    if ( v49 )
      v49 = (void *)strlen((const char *)v49);
    v50 = 0;
    v230 = (size_t)v49;
    v51 = sub_2246FB0(v203, asc_22E1692, 6, 0);
    v52 = v230;
    if ( v51 < v230 )
    {
      v50 = v230 - v51;
      v52 = v51;
    }
    ptr.m256i_i64[1] = v50;
    ptr.m256i_i64[0] = (__int64)v229 + v52;
    v53 = sub_2247130(&ptr, asc_22E1692, 6, -1) + 1;
    if ( v53 > ptr.m256i_i64[1] )
      v53 = ptr.m256i_u64[1];
    v54 = ptr.m256i_i64[1] - v50 + v53;
    if ( v54 > ptr.m256i_i64[1] )
      v54 = ptr.m256i_u64[1];
    v216 = v54;
    v215 = ptr.m256i_i64[0];
    if ( v54 )
    {
      ptr.m256i_i64[0] = (__int64)&ptr.m256i_i64[2];
      ptr.m256i_i64[1] = 0x300000000LL;
      sub_22471D0(&v215, &ptr, ":", 1, 0xFFFFFFFFLL, 1);
      v179 = 16LL * ptr.m256i_u32[2];
      v209 = ptr.m256i_i64[0] + v179;
      if ( ptr.m256i_i64[0] != ptr.m256i_i64[0] + v179 )
      {
        v180 = ptr.m256i_i64[0];
        v181 = v203 + 2;
        do
        {
          while ( 1 )
          {
            v182 = *(_BYTE **)v180;
            if ( *(_QWORD *)v180 )
            {
              v183 = *(_QWORD *)(v180 + 8);
              v229 = v181;
              sub_12C84A0(v203, v182, (__int64)&v182[v183]);
              v184 = (size_t)v229;
            }
            else
            {
              v229 = v181;
              v184 = (size_t)v181;
              v230 = 0;
              v231.m128i_i8[0] = 0;
            }
            v185 = (unsigned int)v234;
            v186 = (unsigned int)v234 + 1LL;
            if ( v186 > HIDWORD(v234) )
            {
              n = v184;
              sub_2237220(&v233, v235, v186, 8);
              v185 = (unsigned int)v234;
              v184 = n;
            }
            *((_QWORD *)v233 + v185) = v184;
            LODWORD(v234) = v234 + 1;
            if ( v229 == v181 )
              break;
            operator delete(v229);
            v180 += 16;
            if ( v209 == v180 )
              goto LABEL_268;
          }
          v180 += 16;
        }
        while ( v209 != v180 );
LABEL_268:
        v209 = ptr.m256i_i64[0];
      }
      if ( (unsigned __int64 *)v209 != &ptr.m256i_u64[2] )
        free((void *)v209);
      goto LABEL_96;
    }
    sub_C05100((__int64)&v223, "//'", (__int64)v208);
    v55 = v224;
    if ( 0x7FFFFFFFFFFFFFFFLL - v224 <= 0x12 )
      goto LABEL_307;
    v56 = v224 + 19;
    if ( v223 == &v225 )
    {
      v57 = 15;
      if ( v56 <= 0xF )
        goto LABEL_50;
    }
    else
    {
      v57 = v225.m128i_i64[0];
      if ( v56 <= v225.m128i_i64[0] )
      {
LABEL_50:
        v58 = (char *)v223 + v224;
        v59 = _mm_load_si128((const __m128i *)&xmmword_23A9FC0);
        *((_WORD *)v58 + 8) = 10545;
        v58[18] = 39;
        *(__m128i *)v58 = v59;
        v60 = (char *)v223;
        goto LABEL_51;
      }
    }
    if ( (v56 & 0x8000000000000000LL) != 0LL )
      goto LABEL_309;
    v187 = 2 * v57;
    if ( v56 < v187 )
    {
      v188 = v187 + 1;
      if ( v187 < 0 )
      {
        v188 = 0x8000000000000000LL;
        v187 = 0x7FFFFFFFFFFFFFFFLL;
      }
    }
    else
    {
      v188 = v224 + 20;
      v187 = v224 + 19;
    }
    n = v224 + 19;
    v209 = v224;
    v189 = (char *)operator new(v188);
    v55 = v209;
    v56 = n;
    v60 = v189;
    v190 = (__m128i *)v223;
    if ( v209 )
    {
      if ( v209 == 1 )
      {
        *v189 = *(_BYTE *)v223;
      }
      else
      {
        v191 = v209;
        v213 = n;
        n = v209;
        v209 = (size_t)v223;
        v192 = (char *)memcpy(v189, v223, v191);
        v56 = v213;
        v55 = n;
        v190 = (__m128i *)v209;
        v60 = v192;
      }
    }
    v193 = _mm_load_si128((const __m128i *)&xmmword_23A9FC0);
    v194 = (__m128i *)&v60[v55];
    v194[1].m128i_i16[0] = 10545;
    *v194 = v193;
    v194[1].m128i_i8[2] = 39;
    if ( v190 != &v225 )
    {
      v213 = v56;
      n = v55;
      v209 = (size_t)v60;
      operator delete(v190);
      v56 = v213;
      v55 = n;
      v60 = (char *)v209;
    }
    v223 = v60;
    v225.m128i_i64[0] = v187;
LABEL_51:
    v61 = v203;
    v224 = v56;
    v60[v55 + 19] = 0;
    v229 = v61 + 2;
    if ( v223 == &v225 )
    {
      v231 = _mm_load_si128(&v225);
    }
    else
    {
      v229 = v223;
      v231.m128i_i64[0] = v225.m128i_i64[0];
    }
    v62 = v224;
    v224 = 0;
    v241 = 260;
    v230 = v62;
    v223 = &v225;
    v225.m128i_i8[0] = 0;
    ptr.m256i_i64[0] = (__int64)v203;
    v63 = sub_10DA6C0((__int64)v7, (__int64)&ptr);
    v64 = (unsigned int)v234;
    v65 = (unsigned int)v234 + 1LL;
    if ( v65 > HIDWORD(v234) )
    {
      v209 = v63;
      sub_2237220(&v233, v235, v65, 8);
      v64 = (unsigned int)v234;
      v63 = v209;
    }
    *((_QWORD *)v233 + v64) = v63;
    LODWORD(v234) = v234 + 1;
    if ( v229 != v203 + 2 )
      operator delete(v229);
    if ( v223 != &v225 )
      operator delete(v223);
    sub_C05100((__int64)&v226, "//'", (__int64)v208);
    v66 = v227;
    if ( 0x7FFFFFFFFFFFFFFFLL - v227 > 0x12 )
    {
      v67 = v227 + 19;
      if ( v226 == &v228 )
      {
        v68 = 15;
        if ( v67 <= 0xF )
          goto LABEL_62;
      }
      else
      {
        v68 = v228.m128i_i64[0];
        if ( v67 <= v228.m128i_i64[0] )
        {
LABEL_62:
          v69 = (char *)v226 + v227;
          v70 = _mm_load_si128((const __m128i *)&xmmword_23A9FC0);
          *((_WORD *)v69 + 8) = 10547;
          v69[18] = 39;
          *(__m128i *)v69 = v70;
          v71 = v226;
LABEL_63:
          v72 = v203;
          v227 = v67;
          v71[v66 + 19] = 0;
          v229 = v72 + 2;
          if ( v226 == &v228 )
          {
            v231 = _mm_load_si128(&v228);
          }
          else
          {
            v229 = v226;
            v231.m128i_i64[0] = v228.m128i_i64[0];
          }
          v73 = v227;
          v227 = 0;
          v228.m128i_i8[0] = 0;
          v230 = v73;
          v226 = &v228;
          v241 = 260;
          ptr.m256i_i64[0] = (__int64)v203;
          v74 = sub_10DA6C0((__int64)v7, (__int64)&ptr);
          v75 = (unsigned int)v234;
          v76 = (unsigned int)v234 + 1LL;
          if ( v76 > HIDWORD(v234) )
          {
            v209 = v74;
            sub_2237220(&v233, v235, v76, 8);
            v75 = (unsigned int)v234;
            v74 = v209;
          }
          *((_QWORD *)v233 + v75) = v74;
          LODWORD(v234) = v234 + 1;
          if ( v229 != v203 + 2 )
            operator delete(v229);
          if ( v226 != &v228 )
            operator delete(v226);
          goto LABEL_96;
        }
      }
      if ( (v67 & 0x8000000000000000LL) == 0LL )
      {
        v195 = 2 * v68;
        if ( v67 < v195 )
        {
          v196 = v195 + 1;
          if ( v195 < 0 )
          {
            v196 = 0x8000000000000000LL;
            v195 = 0x7FFFFFFFFFFFFFFFLL;
          }
        }
        else
        {
          v196 = v227 + 20;
          v195 = v227 + 19;
        }
        n = v227 + 19;
        v209 = v227;
        v197 = (_BYTE *)operator new(v196);
        v66 = v209;
        v67 = n;
        v71 = v197;
        v198 = (__m128i *)v226;
        if ( v209 )
        {
          if ( v209 == 1 )
          {
            *v197 = *(_BYTE *)v226;
          }
          else
          {
            v199 = v209;
            v213 = n;
            n = v209;
            v209 = (size_t)v226;
            v200 = memcpy(v197, v226, v199);
            v67 = v213;
            v66 = n;
            v198 = (__m128i *)v209;
            v71 = v200;
          }
        }
        v201 = _mm_load_si128((const __m128i *)&xmmword_23A9FC0);
        v202 = (__m128i *)&v71[v66];
        v202[1].m128i_i16[0] = 10547;
        *v202 = v201;
        v202[1].m128i_i8[2] = 39;
        if ( v198 != &v228 )
        {
          v213 = (size_t)v71;
          n = v67;
          v209 = v66;
          operator delete(v198);
          v71 = (_BYTE *)v213;
          v67 = n;
          v66 = v209;
        }
        v226 = v71;
        v228.m128i_i64[0] = v195;
        goto LABEL_63;
      }
LABEL_309:
      std::__throw_length_error("basic_string::_M_create");
    }
LABEL_307:
    std::__throw_length_error("basic_string::append");
  }
  do
  {
    v83 = *v46;
    if ( (*v46)[2] )
      v83 = (void **)(*v46)[2];
    v84 = v46 + 1;
    *((_BYTE *)v83 + 44) |= 1u;
    ptr.m256i_i64[0] = (__int64)v84;
    if ( v84 == (void ***)v47 )
      break;
    v85 = v9;
    v86 = p_ptr;
    v87 = v7;
    v88 = (void ***)v47;
    v89 = v85;
    while ( 1 )
    {
      if ( *v84 )
      {
        v203 = *v84;
        if ( (unsigned __int8)sub_21B9810(v203, 3056) || (unsigned __int8)sub_21B9810(v203, 3037) )
          break;
      }
      ptr.m256i_i64[0] = (__int64)++v84;
      if ( v88 == v84 )
      {
        v7 = v87;
        p_ptr = v86;
        v9 = v89;
        goto LABEL_96;
      }
    }
    v46 = (void ***)ptr.m256i_i64[0];
    v118 = v89;
    v47 = (size_t)v88;
    v7 = v87;
    p_ptr = v86;
    v9 = v118;
  }
  while ( ptr.m256i_i64[0] != v47 );
LABEL_96:
  if ( sub_112D7B0((__int64)v204, (__int64)v7) )
  {
    v90 = *(void (__fastcall **)(__int64, void **, __int64))(*v204 + 640);
    if ( (char *)v90 == (char *)sub_12CA200 )
    {
      v91 = (*(__int64 (__fastcall **)(__int64 *, void **))(*v204 + 608))(v204, v7);
      if ( v91 )
      {
        if ( v91 == 1 )
          sub_2221C70("linking libstdc++ is unimplemented on z/OS", 1);
      }
      else
      {
        sub_12C9880(v7, (__int64)v9);
      }
    }
    else
    {
      v90((__int64)v204, v7, (__int64)v9);
    }
  }
  ptr.m256i_i64[0] = 0xBDD00000BF0LL;
  v92 = sub_21B6DA0(v7, p_ptr, 2);
  v93 = (char *)v7[1];
  ptr.m256i_i64[2] = 0xBDD00000BF0LL;
  v94 = (void ***)&v93[8 * (unsigned int)v92];
  v95 = (void **)&v93[8 * HIDWORD(v92)];
  v203 = v95;
  v96 = _mm_loadh_ps((const double *)&v203);
  *(__m128 *)ptr.m256i_i8 = v96;
  if ( v94 == (void ***)v95 )
    goto LABEL_107;
  v203 = v7;
  while ( 1 )
  {
    v97 = *v94;
    if ( *v94 )
    {
      if ( (unsigned __int8)sub_21B9810(*v94, 3056) || (unsigned __int8)sub_21B9810(v97, 3037) )
        break;
    }
    ptr.m256i_i64[0] = (__int64)++v94;
    if ( v95 == (void **)v94 )
    {
      v7 = v203;
      goto LABEL_107;
    }
  }
  v7 = v203;
  v203 = v95;
  ptr.m256i_i64[2] = 0xBDD00000BF0LL;
  v96 = _mm_loadh_ps((const double *)&v203);
  *(__m128 *)ptr.m256i_i8 = v96;
  if ( v94 == (void ***)v95 )
  {
LABEL_107:
    sub_11BEF20((__int64)v204, v204[1], (__int64)v9, (__int64)v7);
  }
  else
  {
    do
    {
      v119 = *v94;
      if ( (*v94)[2] )
        v119 = (void **)(*v94)[2];
      v120 = v94 + 1;
      *((_BYTE *)v119 + 44) |= 1u;
      ptr.m256i_i64[0] = (__int64)v120;
      if ( v120 == (void ***)v95 )
        break;
      v121 = v9;
      v122 = p_ptr;
      v123 = v7;
      v124 = (void ***)v95;
      v125 = v121;
      while ( 1 )
      {
        if ( *v120 )
        {
          v203 = *v120;
          if ( (unsigned __int8)sub_21B9810(v203, 3056) || (unsigned __int8)sub_21B9810(v203, 3037) )
            break;
        }
        ptr.m256i_i64[0] = (__int64)++v120;
        if ( v124 == v120 )
        {
          v7 = v123;
          p_ptr = v122;
          v9 = v125;
          goto LABEL_108;
        }
      }
      v94 = (void ***)ptr.m256i_i64[0];
      v126 = v125;
      v95 = (void **)v124;
      v7 = v123;
      p_ptr = v122;
      v9 = v126;
    }
    while ( (void **)ptr.m256i_i64[0] != v95 );
  }
LABEL_108:
  sub_1132E50(p_ptr, (__int64)v204, nullptr);
  v98 = (*((__int64 (__fastcall **)(void **, __int64, __int64))*v7 + 2))(v7, ptr.m256i_i64[0], ptr.m256i_i64[1]);
  if ( (__m128i *)ptr.m256i_i64[0] != &p_ptr[1] )
    operator delete((void *)ptr.m256i_i64[0]);
  v99 = *(const __m128i **)v207;
  v100 = *(unsigned int *)(v207 + 8);
  v203 = (void **)operator new(0x208u);
  sub_1106AE0((__int64)v203, v206, v211, 2, 0, v98, (__int64)v9, v99, v100, 0, 0, 0);
  v101 = *(unsigned int *)(v205 + 160);
  v102 = *(unsigned int *)(v205 + 164);
  ptr.m256i_i64[0] = (__int64)v203;
  v103 = v101 + 1;
  v104 = v101;
  if ( v101 + 1 > v102 )
  {
    v176 = v205;
    v177 = *(_QWORD *)(v205 + 152);
    v178 = v205 + 152;
    if ( v177 > (unsigned __int64)p_ptr || (unsigned __int64)p_ptr >= v177 + 8 * v101 )
    {
      sub_11673D0(v178, v103, v96, *(double *)si128.m128i_i64);
      v101 = *(unsigned int *)(v205 + 160);
      v105 = *(_QWORD *)(v205 + 152);
      v104 = *(_DWORD *)(v205 + 160);
    }
    else
    {
      sub_11673D0(v178, v103, v96, *(double *)si128.m128i_i64);
      v105 = *(_QWORD *)(v176 + 152);
      v101 = *(unsigned int *)(v176 + 160);
      p_ptr = (__m128i *)((char *)p_ptr + v105 - v177);
      v104 = *(_DWORD *)(v176 + 160);
    }
  }
  else
  {
    v105 = *(_QWORD *)(v205 + 152);
  }
  v106 = p_ptr->m128i_i64[0];
  p_ptr->m128i_i64[0] = 0;
  *(_QWORD *)(v105 + 8 * v101) = v106;
  v107 = (_QWORD *)ptr.m256i_i64[0];
  *(_DWORD *)(v205 + 160) = v104 + 1;
  if ( v107 )
  {
    v108 = *(void (__fastcall **)(_QWORD *))(*v107 + 8LL);
    if ( v108 == sub_10D4290 )
    {
      v109 = v107[58];
      v110 = v107[57];
      *v107 = &off_2BA8F30;
      if ( v109 != v110 )
      {
        do
        {
          if ( *(_BYTE *)(v110 + 32) && *(_QWORD *)v110 != v110 + 16 )
            operator delete(*(void **)v110);
          v110 += 40;
        }
        while ( v109 != v110 );
        v110 = v107[57];
      }
      if ( v110 )
        operator delete((void *)v110);
      v111 = (void *)v107[54];
      if ( v111 )
        operator delete(v111);
      v112 = (_QWORD *)v107[50];
      if ( v112 != v107 + 52 )
        operator delete(v112);
      v113 = (_QWORD *)v107[32];
      if ( v113 != v107 + 34 )
        free(v113);
      v114 = (void **)v107[29];
      v115 = (void **)v107[28];
      if ( v114 != v115 )
      {
        do
        {
          while ( *v115 != v115 + 2 )
          {
            operator delete(*v115);
            v115 += 4;
            if ( v114 == v115 )
              goto LABEL_131;
          }
          v115 += 4;
        }
        while ( v114 != v115 );
LABEL_131:
        v115 = (void **)v107[28];
      }
      if ( v115 )
        operator delete(v115);
      v116 = (void *)v107[25];
      if ( v116 )
        operator delete(v116);
      v117 = (_QWORD *)v107[7];
      if ( v117 != v107 + 9 )
        free(v117);
      operator delete(v107, 0x208u);
    }
    else
    {
      v108(v107);
    }
  }
  if ( v218[0] != v210 + 2 )
    operator delete(v218[0]);
  if ( v217[0] != v208 + 2 )
    operator delete(v217[0]);
  if ( v236 != v239 )
    free(v236);
  if ( v233 != v9 + 2 )
    free(v233);
}
