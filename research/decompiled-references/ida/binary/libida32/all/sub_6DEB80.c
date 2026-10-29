unsigned __int64 __fastcall sub_6DEB80(_QWORD *a1, char *a2)
{
  __int64 v2; // rax
  size_t v3; // rbx
  bool v4; // sf
  __int64 v5; // rbp
  const char *v6; // r14
  char *v7; // rax
  size_t v8; // r13
  _QWORD *v9; // rdi
  __m128i v10; // xmm7
  void **v11; // r13
  __m128i si128; // xmm0
  size_t v13; // rbx
  volatile signed __int32 *v14; // rbx
  volatile signed __int32 *v15; // rbx
  volatile signed __int32 *v16; // rbx
  char **v17; // r14
  volatile signed __int32 *v18; // rbx
  __m128i *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r9
  size_t v22; // rbp
  _QWORD *v23; // rax
  size_t v24; // r8
  char **v25; // rbx
  _QWORD *v26; // rdx
  __m128i v27; // xmm2
  const char *v28; // r15
  char *v29; // rax
  size_t v30; // rcx
  void *v31; // rax
  _QWORD *v32; // rdi
  __int64 v33; // r12
  unsigned __int64 v34; // r14
  __int64 v35; // r15
  __int64 v36; // rsi
  bool v37; // zf
  char *v38; // rdi
  char *v39; // r12
  __int64 v40; // rbx
  size_t v41; // r14
  char *v42; // rax
  void *v43; // rdi
  __int64 v44; // rdi
  char *v45; // rsi
  char *v46; // r12
  char *v47; // rdi
  char *v48; // r15
  char *v49; // r14
  char *v50; // r13
  __int64 v51; // rax
  __int64 v52; // rcx
  char *v53; // rdx
  __m128i v54; // xmm4
  __int64 v55; // rdi
  char *v56; // r8
  _DWORD *v57; // rsi
  __int64 v58; // rdx
  __int64 v59; // rdi
  __int64 v60; // r14
  __int64 v61; // rbx
  char *v62; // rax
  void *v63; // rdi
  __int64 v64; // r12
  __int64 v65; // rcx
  __int64 v66; // r15
  const char *v67; // r13
  char *v68; // rax
  size_t v69; // rcx
  void *v70; // rax
  char *v71; // rdi
  __m128i v72; // xmm6
  __int64 v73; // rdi
  const char *v74; // r12
  char *v75; // rax
  size_t v76; // rbx
  void *v77; // rdi
  __m128i v78; // xmm1
  char **v79; // rsi
  char *v80; // r13
  char *v81; // rbx
  char *v82; // r12
  _QWORD *v83; // r14
  __int64 v84; // rdx
  __int64 v85; // rax
  char **v86; // r14
  volatile signed __int32 *v87; // rbp
  char *v88; // rdi
  __int64 v89; // r14
  char *v90; // rdi
  size_t v91; // rax
  char *v92; // r14
  char *v93; // rdx
  _DWORD *v94; // r14
  void *v95; // rsi
  char *v96; // rdi
  _QWORD *v97; // r15
  _QWORD *v98; // rdi
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // r8
  _QWORD *v102; // rax
  unsigned __int64 v103; // r12
  __int64 v104; // r15
  char *v105; // r14
  __int64 v106; // rdi
  char *v107; // r12
  _BYTE *v108; // rbp
  __int64 v109; // rax
  char *v110; // rsi
  char *v111; // r12
  char *v112; // r15
  _QWORD *v113; // rax
  void (__fastcall *v114)(void *); // rdx
  __int64 v115; // rdi
  volatile signed __int32 *v116; // r15
  volatile signed __int32 *v117; // rcx
  signed __int32 v118; // edx
  __int64 *v119; // rdi
  __int64 v120; // rdx
  volatile signed __int32 *v121; // r15
  volatile signed __int32 *v122; // rdx
  signed __int32 v123; // eax
  _QWORD *v124; // r14
  __int64 v125; // rax
  size_t v126; // rcx
  void *v127; // r14
  __int64 v128; // rdi
  char *i; // rbp
  __int64 v131; // rsi
  __int64 v132; // rdi
  _QWORD *v133; // r15
  _QWORD *v134; // rbx
  _QWORD *v135; // r12
  char *v136; // rax
  char **v137; // r11
  size_t v138; // r8
  char *v139; // r14
  unsigned __int64 v140; // rsi
  __int64 v141; // rax
  unsigned __int64 v142; // rdx
  unsigned __int64 v143; // rdi
  __m128i v144; // xmm0
  unsigned __int64 v145; // rax
  __int64 v146; // rax
  __int64 v147; // rsi
  _QWORD *v148; // r14
  char **v149; // r15
  __int64 v150; // rax
  size_t v151; // r8
  unsigned __int64 v152; // rsi
  __int64 v153; // rax
  unsigned __int64 v154; // rdx
  unsigned __int64 v155; // rdi
  __m128i v156; // xmm0
  unsigned __int64 v157; // rax
  __int64 v158; // rax
  __int64 v159; // rsi
  _QWORD *v160; // rax
  __int64 v161; // r12
  __int64 v162; // rax
  __int64 v163; // r15
  char *v164; // r13
  char *v165; // rax
  size_t v166; // rcx
  void *v167; // rax
  _QWORD *v168; // rdi
  __m128i v169; // xmm1
  __int64 v170; // rdi
  __int64 v171; // rax
  char *p_ptr; // rsi
  char *v173; // r15
  char *v174; // r14
  char *v175; // r13
  __int64 v176; // rax
  __int64 v177; // rcx
  char *v178; // rdx
  __m128i v179; // xmm4
  __int64 v180; // rdi
  __int64 v181; // rdx
  char *v182; // r8
  _DWORD *v183; // rsi
  __int64 v184; // rdx
  __int64 v185; // rdi
  __int64 v186; // rsi
  __int64 v187; // rdi
  char *v188; // rbp
  char *v189; // r12
  char *v190; // r13
  char *v191; // rsi
  char *v192; // r14
  char *v193; // rax
  size_t v194; // r13
  _QWORD *v195; // rdi
  __m128i v196; // xmm1
  char *v197; // r14
  __m128i v198; // xmm1
  unsigned __int64 v199; // rax
  char *v200; // rdi
  __m128i v201; // xmm1
  unsigned __int64 v202; // rax
  char *v203; // rdi
  __int64 v204; // rax
  _QWORD *v205; // rax
  __int64 v206; // rax
  _QWORD *v207; // rax
  volatile signed __int32 *v208; // rcx
  volatile signed __int32 *v209; // rdi
  _QWORD *v210; // rax
  bool v211; // cc
  __int64 v212; // rsi
  __m128i v213; // xmm0
  __int64 v214; // rax
  _QWORD *v215; // rax
  __int64 v216; // rax
  _QWORD *v217; // rax
  __int64 v218; // rax
  __int64 v219; // rdi
  __int64 v220; // rax
  __int64 v221; // rdx
  __int64 v222; // rax
  _QWORD *v223; // r14
  __int64 v224; // rax
  volatile signed __int32 *v225; // rdx
  _QWORD *v226; // rcx
  void *v227; // rax
  char *v228; // rax
  char *v229; // r12
  char *v230; // rbp
  _QWORD *v231; // r14
  _QWORD *v232; // rbx
  void *v233; // rax
  __m128i v234; // xmm0
  __int64 v235; // rax
  __m128i v236; // xmm0
  __int64 v237; // rax
  void *v238; // rdi
  void *v239; // rdi
  _QWORD *v241; // rax
  void *v242; // rdx
  __int64 v243; // rax
  _QWORD *v244; // rax
  __int64 v245; // rax
  _QWORD *v246; // rax
  __int64 v247; // [rsp-8h] [rbp-260h]
  __m128i v248; // [rsp+0h] [rbp-258h] BYREF
  char **v249; // [rsp+18h] [rbp-240h]
  size_t n[2]; // [rsp+20h] [rbp-238h] BYREF
  void *v251; // [rsp+30h] [rbp-228h]
  _QWORD *v252; // [rsp+38h] [rbp-220h]
  volatile signed __int32 *v253; // [rsp+40h] [rbp-218h]
  size_t v254; // [rsp+48h] [rbp-210h]
  char *v255; // [rsp+50h] [rbp-208h]
  size_t v256; // [rsp+58h] [rbp-200h]
  char **v257; // [rsp+60h] [rbp-1F8h]
  char *s; // [rsp+68h] [rbp-1F0h]
  __int64 v259; // [rsp+70h] [rbp-1E8h] BYREF
  int v260; // [rsp+78h] [rbp-1E0h]
  char v261; // [rsp+7Ch] [rbp-1DCh]
  void *v262[2]; // [rsp+80h] [rbp-1D8h] BYREF
  size_t v263; // [rsp+90h] [rbp-1C8h]
  void *v264; // [rsp+A0h] [rbp-1B8h] BYREF
  __int128 v265; // [rsp+A8h] [rbp-1B0h]
  void *ptr; // [rsp+C0h] [rbp-198h] BYREF
  __int128 v267; // [rsp+C8h] [rbp-190h]
  char *v268[4]; // [rsp+E0h] [rbp-178h] BYREF
  char *v269; // [rsp+100h] [rbp-158h] BYREF
  __m128i v270; // [rsp+108h] [rbp-150h] BYREF
  __int16 v271; // [rsp+120h] [rbp-138h]
  char **v272; // [rsp+140h] [rbp-118h]
  void *v273[2]; // [rsp+150h] [rbp-108h] BYREF
  _QWORD v274[2]; // [rsp+160h] [rbp-F8h] BYREF
  void *v275[2]; // [rsp+170h] [rbp-E8h] BYREF
  _QWORD v276[2]; // [rsp+180h] [rbp-D8h] BYREF
  void *v277[2]; // [rsp+190h] [rbp-C8h] BYREF
  _QWORD v278[2]; // [rsp+1A0h] [rbp-B8h] BYREF
  void *v279; // [rsp+1B0h] [rbp-A8h] BYREF
  char *v280; // [rsp+1B8h] [rbp-A0h]
  _QWORD v281[2]; // [rsp+1C0h] [rbp-98h] BYREF
  void *v282; // [rsp+1D0h] [rbp-88h] BYREF
  char *v283; // [rsp+1D8h] [rbp-80h]
  char v284[16]; // [rsp+1E0h] [rbp-78h] BYREF
  void *v285; // [rsp+1F0h] [rbp-68h] BYREF
  char *v286; // [rsp+1F8h] [rbp-60h]
  char v287[24]; // [rsp+200h] [rbp-58h] BYREF
  unsigned __int64 v288; // [rsp+218h] [rbp-40h]

  v252 = a1;
  s = a2;
  v288 = __readfsqword(0x28u);
  v2 = operator new(0xC80u);
  v3 = v2 + 3200;
  v4 = *(__int64 *)a1[1] < 0;
  v248 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v2, (__m128i)(unsigned __int64)v2);
  if ( v4 )
  {
    memset(v268, 0, 24);
    v257 = v268;
    sub_6D1E70((__int64)v268);
    v188 = v268[1];
    if ( v268[1] )
    {
      v190 = v268[1] + 9;
      v189 = v268[1] + 10;
      v188 = v268[1] - 1;
    }
    else
    {
      v189 = byte_9 + 2;
      v190 = byte_9 + 1;
    }
    v191 = v268[0];
    if ( v268[2] < v189 )
    {
      v268[0] = (char *)qvector_reserve(v257, v268[0], v189, 1);
      v191 = v268[0];
    }
    v268[1] = v189;
    v190[(_QWORD)v191] = 0;
    qmemcpy(&v268[0][(unsigned __int64)v188], "clang-tool", 10);
    if ( !v268[1] )
    {
      v273[0] = v274;
      if ( !haystack )
        goto LABEL_322;
      v269 = nullptr;
      v249 = &v269;
      goto LABEL_267;
    }
    v192 = v268[0];
    v273[0] = v274;
    if ( !v268[0] )
      goto LABEL_322;
    v193 = (char *)strlen(v268[0]);
    v269 = v193;
    v194 = (size_t)v193;
    if ( (unsigned __int64)v193 <= 0xF )
    {
      if ( v193 == (_BYTE *)&dword_0 + 1 )
      {
        LOBYTE(v274[0]) = *v192;
        v249 = &v269;
        goto LABEL_267;
      }
      v249 = &v269;
      if ( !v193 )
        goto LABEL_267;
      v195 = v274;
    }
    else
    {
      v249 = &v269;
      v273[0] = (void *)std::string::_M_create();
      v195 = v273[0];
      v274[0] = v269;
    }
    memcpy(v195, v192, v194);
LABEL_267:
    v196 = _mm_load_si128(&v248);
    v11 = v262;
    v263 = v3;
    v273[1] = v269;
    *((_BYTE *)v273[0] + (unsigned __int64)v269) = 0;
    *(__m128i *)v262 = v196;
    sub_6DEA60((__int64)v262, (char **)v273);
    si128 = _mm_load_si128((const __m128i *)v262);
    v13 = v263;
    if ( v273[0] != v274 )
    {
      v248 = si128;
      operator delete(v273[0], v274[0] + 1LL);
      si128 = _mm_load_si128(&v248);
    }
    if ( v268[0] )
    {
      v248 = si128;
      v268[1] = nullptr;
      qfree(v268[0]);
      si128 = _mm_load_si128(&v248);
    }
    goto LABEL_10;
  }
  v5 = *(_QWORD *)(*v252 + 1704LL);
  if ( *(_BYTE *)(v5 + 168) )
  {
    if ( *(_QWORD *)(v5 + 152) )
      goto LABEL_4;
LABEL_32:
    v275[0] = v276;
    if ( !haystack )
      goto LABEL_322;
    v269 = nullptr;
    v249 = &v269;
    goto LABEL_8;
  }
  sub_6D1E70(v5 + 144);
  v33 = *(_QWORD *)(v5 + 152);
  if ( v33 )
  {
    v35 = v33 + 9;
    v34 = v33 + 10;
    --v33;
  }
  else
  {
    v34 = 11;
    v35 = 10;
  }
  v36 = *(_QWORD *)(v5 + 144);
  if ( *(_QWORD *)(v5 + 160) < v34 )
  {
    v220 = qvector_reserve(v5 + 144, v36, v34, 1);
    *(_QWORD *)(v5 + 144) = v220;
    v36 = v220;
  }
  *(_QWORD *)(v5 + 152) = v34;
  *(_BYTE *)(v36 + v35) = 0;
  qmemcpy((void *)(*(_QWORD *)(v5 + 144) + v33), "clang-tool", 10);
  v37 = *(_QWORD *)(v5 + 152) == 0;
  *(_BYTE *)(v5 + 168) = 1;
  if ( v37 )
    goto LABEL_32;
LABEL_4:
  v6 = *(const char **)(v5 + 144);
  v275[0] = v276;
  if ( !v6 )
    goto LABEL_322;
  v7 = (char *)strlen(v6);
  v269 = v7;
  v8 = (size_t)v7;
  if ( (unsigned __int64)v7 > 0xF )
  {
    v249 = &v269;
    v275[0] = (void *)std::string::_M_create();
    v9 = v275[0];
    v276[0] = v269;
LABEL_7:
    memcpy(v9, v6, v8);
    goto LABEL_8;
  }
  if ( v7 == (_BYTE *)&dword_0 + 1 )
  {
    LOBYTE(v276[0]) = *v6;
    v249 = &v269;
  }
  else
  {
    if ( v7 )
    {
      v9 = v276;
      v249 = &v269;
      goto LABEL_7;
    }
    v249 = &v269;
  }
LABEL_8:
  v10 = _mm_load_si128(&v248);
  v11 = v262;
  v263 = v3;
  v275[1] = v269;
  *((_BYTE *)v275[0] + (unsigned __int64)v269) = 0;
  *(__m128i *)v262 = v10;
  sub_6DEA60((__int64)v262, (char **)v275);
  si128 = _mm_load_si128((const __m128i *)v262);
  v13 = v263;
  if ( v275[0] != v276 )
  {
    v248 = si128;
    operator delete(v275[0], v276[0] + 1LL);
    si128 = _mm_load_si128(&v248);
  }
LABEL_10:
  v286 = byte_9 + 4;
  strcpy(v287, "-fsyntax-only");
  v251 = &v285;
  v253 = (volatile signed __int32 *)v287;
  v285 = v287;
  v263 = v13;
  *(__m128i *)v262 = si128;
  sub_6DEA60((__int64)v262, (char **)&v285);
  if ( v285 != v287 )
    operator delete(v285, *(_QWORD *)v287 + 1LL);
  v14 = v253;
  strcpy(v287, "-fno-rtti");
  v285 = (void *)v253;
  v286 = byte_9;
  sub_6DEA60((__int64)v262, (char **)v251);
  if ( v285 != v14 )
    operator delete(v285, *(_QWORD *)v287 + 1LL);
  v15 = v253;
  strcpy(v287, "-fbuiltin");
  v285 = (void *)v253;
  v286 = byte_9;
  sub_6DEA60((__int64)v262, (char **)v251);
  if ( v285 != v15 )
    operator delete(v285, *(_QWORD *)v287 + 1LL);
  v16 = v253;
  strcpy(v287, "-fms-extensions");
  v285 = (void *)v253;
  v286 = byte_9 + 6;
  sub_6DEA60((__int64)v262, (char **)v251);
  if ( v285 != v16 )
    operator delete(v285, *(_QWORD *)v287 + 1LL);
  v17 = (char **)v251;
  v18 = v253;
  v269 = (_BYTE *)(&dword_14 + 1);
  v285 = (void *)v253;
  v19 = (__m128i *)std::string::_M_create();
  v285 = v19;
  *(_QWORD *)v287 = v269;
  *v19 = _mm_load_si128((const __m128i *)&xmmword_2384220);
  *(__int64 *)((char *)&v19->m128i_i64[1] + 5) = 0x383231746E692D65LL;
  v286 = v269;
  v269[(_QWORD)v285] = 0;
  sub_6DEA60((__int64)v262, v17);
  v22 = v263;
  v248 = _mm_load_si128((const __m128i *)v262);
  if ( v285 != v18 )
    operator delete(v285, *(_QWORD *)v287 + 1LL);
  v23 = (_QWORD *)v252[1];
  v24 = *v23 & 0x800LL;
  if ( (*v23 & 0x800) != 0 )
    goto LABEL_52;
  v254 = *v23 & 0x800LL;
  v25 = off_2B0E100;
  do
  {
    v28 = *v25;
    v277[0] = v278;
    if ( !v28 )
      goto LABEL_322;
    v29 = (char *)strlen(v28);
    v269 = v29;
    v30 = (size_t)v29;
    if ( (unsigned __int64)v29 <= 0xF )
    {
      if ( v29 == (_BYTE *)&dword_0 + 1 )
      {
        LOBYTE(v278[0]) = *v28;
LABEL_24:
        v26 = v278;
        goto LABEL_25;
      }
      if ( !v29 )
        goto LABEL_24;
      v32 = v278;
    }
    else
    {
      n[0] = (size_t)v29;
      v31 = (void *)std::string::_M_create();
      v30 = n[0];
      v277[0] = v31;
      v32 = v31;
      v278[0] = v269;
    }
    memcpy(v32, v28, v30);
    v29 = v269;
    v26 = v277[0];
LABEL_25:
    v277[1] = v29;
    v27 = _mm_load_si128(&v248);
    v29[(_QWORD)v26] = 0;
    v263 = v22;
    *(__m128i *)v262 = v27;
    sub_6DEA60((__int64)v262, (char **)v277);
    v22 = v263;
    v248 = _mm_load_si128((const __m128i *)v262);
    if ( v277[0] != v278 )
      operator delete(v277[0], v278[0] + 1LL);
    ++v25;
  }
  while ( &unk_2B0E2F0 != (_UNKNOWN *)v25 );
  v133 = v252;
  v134 = v252 + 55;
  v135 = v252 + 52;
  n[0] = v254;
  get_custom_callcnvs(v252 + 52, v252 + 55);
  v269 = nullptr;
  v270 = 0;
  v136 = (char *)qvector_reserve(v249, 0, 9, 1);
  v137 = v249;
  v138 = n[0];
  v269 = v136;
  v270.m128i_i64[0] = 9;
  *(_QWORD *)v136 = 0x676E616C6F675F5FLL;
  v139 = v269;
  v269[8] = 0;
  v140 = v133[52];
  v141 = v133[53];
  v142 = v133[54];
  v143 = v141 + 1;
  if ( (unsigned __int64)v137 >= v140 && (unsigned __int64)v137 < v140 + 24 * v142 )
  {
    v201 = _mm_loadu_si128(&v270);
    v269 = nullptr;
    v270 = 0;
    if ( v142 < v143 )
    {
      v254 = v138;
      *(__m128i *)n = v201;
      v243 = qvector_reserve(v135, v140, v141 + 1, 24);
      v138 = v254;
      v201 = _mm_load_si128((const __m128i *)n);
      v140 = v243;
      v244 = v252;
      v252[52] = v140;
      v141 = v244[53];
    }
    v202 = v140 + 24 * v141;
    *(_QWORD *)v202 = v139;
    *(__m128i *)(v202 + 8) = v201;
    v203 = v269;
    ++v252[53];
    if ( v203 )
    {
      n[0] = v138;
      v270.m128i_i64[0] = 0;
      qfree(v203);
      v138 = n[0];
    }
  }
  else
  {
    if ( v142 < v143 )
    {
      n[0] = v138;
      v214 = qvector_reserve(v135, v140, v141 + 1, 24);
      v139 = v269;
      v138 = n[0];
      v140 = v214;
      v215 = v252;
      v252[52] = v140;
      v141 = v215[53];
    }
    v144 = _mm_loadu_si128(&v270);
    v145 = v140 + 24 * v141;
    *(_QWORD *)v145 = v139;
    *(__m128i *)(v145 + 8) = v144;
    ++v252[53];
  }
  v146 = v252[56];
  v147 = v252[55];
  if ( v252[57] < (unsigned __int64)(v146 + 1) )
  {
    n[0] = v138;
    v206 = qvector_reserve(v134, v147, v146 + 1, 4);
    v138 = n[0];
    v147 = v206;
    v207 = v252;
    v252[55] = v147;
    v146 = v207[56];
  }
  v148 = v252;
  *(_DWORD *)(v147 + 4 * v146) = 176;
  v149 = v249;
  n[0] = v138;
  ++v148[56];
  v270 = 0;
  v269 = nullptr;
  v150 = qvector_reserve(v149, 0, 8, 1);
  v151 = n[0];
  v270.m128i_i64[0] = 8;
  v269 = (char *)v150;
  *(_DWORD *)v150 = 1869045599;
  *(_DWORD *)(v150 + 3) = 1802793839;
  v269[7] = 0;
  v152 = v148[52];
  v153 = v148[53];
  v154 = v148[54];
  v155 = v153 + 1;
  if ( (unsigned __int64)v149 >= v152 && (unsigned __int64)v149 < v152 + 24 * v154 )
  {
    v197 = v269;
    v198 = _mm_loadu_si128(&v270);
    v269 = nullptr;
    v270 = 0;
    if ( v154 < v155 )
    {
      v254 = v151;
      *(__m128i *)n = v198;
      v245 = qvector_reserve(v135, v152, v153 + 1, 24);
      v151 = v254;
      v198 = _mm_load_si128((const __m128i *)n);
      v152 = v245;
      v246 = v252;
      v252[52] = v152;
      v153 = v246[53];
    }
    v199 = v152 + 24 * v153;
    *(_QWORD *)v199 = v197;
    *(__m128i *)(v199 + 8) = v198;
    v200 = v269;
    ++v252[53];
    if ( v200 )
    {
      n[0] = v151;
      v270.m128i_i64[0] = 0;
      qfree(v200);
      v151 = n[0];
    }
  }
  else
  {
    if ( v154 < v155 )
    {
      n[0] = v151;
      v216 = qvector_reserve(v135, v152, v153 + 1, 24);
      v151 = n[0];
      v152 = v216;
      v217 = v252;
      v252[52] = v152;
      v153 = v217[53];
    }
    v156 = _mm_loadu_si128(&v270);
    v157 = v152 + 24 * v153;
    *(_QWORD *)v157 = v269;
    *(__m128i *)(v157 + 8) = v156;
    ++v252[53];
  }
  v158 = v252[56];
  v159 = v252[55];
  if ( v252[57] < (unsigned __int64)(v158 + 1) )
  {
    n[0] = v151;
    v204 = qvector_reserve(v134, v159, v158 + 1, 4);
    v151 = n[0];
    v159 = v204;
    v205 = v252;
    v252[55] = v159;
    v158 = v205[56];
  }
  *(_DWORD *)(v159 + 4 * v158) = 256;
  v160 = v252;
  v161 = v252[52];
  ++v252[56];
  v162 = 3LL * v160[53];
  if ( v161 != v161 + 8 * v162 )
  {
    v255 = (char *)v151;
    v163 = v161 + 8 * v162;
    n[0] = (size_t)v262;
    while ( 1 )
    {
      v269 = nullptr;
      v270 = 0;
      sub_3573A0(v249);
      if ( !v270.m128i_i64[0] )
      {
        v279 = v281;
        if ( !haystack )
          goto LABEL_322;
        v268[0] = nullptr;
        goto LABEL_216;
      }
      v164 = v269;
      v279 = v281;
      if ( !v269 )
        goto LABEL_322;
      v165 = (char *)strlen(v269);
      v268[0] = v165;
      v166 = (size_t)v165;
      if ( (unsigned __int64)v165 <= 0xF )
      {
        if ( v165 == (_BYTE *)&dword_0 + 1 )
        {
          LOBYTE(v281[0]) = *v164;
          goto LABEL_216;
        }
        if ( !v165 )
          goto LABEL_216;
        v168 = v281;
      }
      else
      {
        v254 = (size_t)v165;
        v167 = (void *)std::string::_M_create();
        v166 = v254;
        v279 = v167;
        v168 = v167;
        v281[0] = v268[0];
      }
      memcpy(v168, v164, v166);
LABEL_216:
      v263 = v22;
      v169 = _mm_load_si128(&v248);
      v170 = n[0];
      v280 = v268[0];
      *((_BYTE *)v279 + (unsigned __int64)v268[0]) = 0;
      *(__m128i *)v262 = v169;
      sub_6DEA60(v170, (char **)&v279);
      v22 = v263;
      v248 = _mm_load_si128((const __m128i *)v262);
      if ( v279 != v281 )
        operator delete(v279, v281[0] + 1LL);
      if ( v269 )
      {
        v270.m128i_i64[0] = 0;
        qfree(v269);
      }
      v161 += 24;
      if ( v163 == v161 )
      {
        v151 = (size_t)v255;
        v11 = (void **)n[0];
        break;
      }
    }
  }
  v264 = nullptr;
  v265 = 0;
  v171 = *v252;
  n[0] = v151;
  sub_5EE390(*(_QWORD *)(v171 + 1480), (__int64 *)&v264);
  p_ptr = (char *)&ptr;
  ptr = nullptr;
  v267 = 0;
  sub_4431C0(&v264, (__int64 *)&ptr, ";", 1);
  v24 = n[0];
  v39 = (char *)ptr;
  v38 = (char *)ptr + 24 * v267;
  if ( ptr != v38 )
  {
    v255 = (char *)ptr + 24 * v267;
    v173 = (char *)v253;
    v254 = (size_t)&v279;
    v257 = (char **)n[0];
    n[0] = (size_t)v11;
    do
    {
      v181 = *((_QWORD *)v39 + 1);
      if ( v181 )
      {
        v256 = *((_QWORD *)v39 + 1);
        v175 = (char *)qalloc_or_throw(v256, p_ptr, v181, v20, v24, v21, *(_OWORD *)&v248);
        memcpy(v175, *(const void **)v39, v256);
        v279 = v281;
        strcpy((char *)v281, "-D");
        v280 = (_BYTE *)(&dword_0 + 2);
        if ( strlen(v175) > 0x3FFFFFFFFFFFFFFDLL )
LABEL_321:
          std::__throw_length_error("basic_string::append");
        v174 = v175;
      }
      else
      {
        v279 = v281;
        v174 = nullptr;
        v175 = (char *)haystack;
        strcpy((char *)v281, "-D");
        v280 = (_BYTE *)(&dword_0 + 2);
      }
      v176 = sub_9CA820(v254, v175);
      v285 = v173;
      v177 = v176 + 16;
      if ( *(_QWORD *)v176 == v176 + 16 )
      {
        v182 = v173;
        v183 = (_DWORD *)(v176 + 16);
        v184 = *(_QWORD *)(v176 + 8) + 1LL;
        if ( (unsigned int)v184 >= 8 )
        {
          LODWORD(v186) = 0;
          do
          {
            v187 = (unsigned int)v186;
            v186 = (unsigned int)(v186 + 8);
            *(_QWORD *)&v173[v187] = *(_QWORD *)(v177 + v187);
          }
          while ( (unsigned int)v186 < ((unsigned int)v184 & 0xFFFFFFF8) );
          v182 = &v173[v186];
          v183 = (_DWORD *)(v177 + v186);
        }
        v185 = 0;
        if ( (v184 & 4) != 0 )
        {
          *(_DWORD *)v182 = *v183;
          v185 = 4;
        }
        if ( (v184 & 2) != 0 )
        {
          *(_WORD *)&v182[v185] = *(_WORD *)((char *)v183 + v185);
          v185 += 2;
        }
        if ( (v184 & 1) != 0 )
          v182[v185] = *((_BYTE *)v183 + v185);
      }
      else
      {
        v285 = *(void **)v176;
        *(_QWORD *)v287 = *(_QWORD *)(v176 + 16);
      }
      v178 = *(char **)(v176 + 8);
      v179 = _mm_load_si128(&v248);
      *(_QWORD *)v176 = v177;
      *(_QWORD *)(v176 + 8) = 0;
      v180 = n[0];
      v286 = v178;
      p_ptr = (char *)v251;
      *(_BYTE *)(v176 + 16) = 0;
      v263 = v22;
      *(__m128i *)v262 = v179;
      sub_6DEA60(v180, (char **)p_ptr);
      v22 = v263;
      v248 = _mm_load_si128((const __m128i *)v262);
      if ( v285 != v173 )
      {
        p_ptr = (char *)(*(_QWORD *)v287 + 1LL);
        operator delete(v285, *(_QWORD *)v287 + 1LL);
      }
      if ( v279 != v281 )
      {
        p_ptr = (char *)(v281[0] + 1LL);
        operator delete(v279, v281[0] + 1LL);
      }
      if ( v174 )
        qfree(v174);
      v39 += 24;
    }
    while ( v255 != v39 );
    v38 = (char *)ptr;
    v24 = (size_t)v257;
    v11 = (void **)n[0];
    v39 = (char *)ptr;
  }
  if ( v38 )
  {
    v40 = v267;
    if ( (_QWORD)v267 )
    {
      v41 = v24;
      do
      {
        v42 = &v38[24 * v41];
        v43 = *(void **)v42;
        if ( *(_QWORD *)v42 )
        {
          *((_QWORD *)v42 + 1) = 0;
          qfree(v43);
          v39 = (char *)ptr;
        }
        ++v41;
        v38 = v39;
      }
      while ( v40 != v41 );
    }
    *(_QWORD *)&v267 = 0;
    qfree(v38);
  }
  if ( v264 )
  {
    *(_QWORD *)&v265 = 0;
    qfree(v264);
  }
LABEL_52:
  v44 = *v252;
  v257 = v268;
  memset(v268, 0, 24);
  sub_614990(v44, (__int64 *)v268, 71, v20, v24, v21);
  v45 = (char *)v249;
  v269 = nullptr;
  v270 = 0;
  sub_4431C0(v268, (__int64 *)v249, ":", 1);
  v46 = v269;
  v47 = &v269[24 * v270.m128i_i64[0]];
  if ( v269 != v47 )
  {
    v255 = &v269[24 * v270.m128i_i64[0]];
    v48 = (char *)v253;
    v254 = (size_t)&v282;
    n[0] = (size_t)v11;
    do
    {
      if ( *((_QWORD *)v46 + 1) )
      {
        v256 = *((_QWORD *)v46 + 1);
        v50 = (char *)qalloc_or_throw(v256, v45);
        memcpy(v50, *(const void **)v46, v256);
        v282 = v284;
        strcpy(v284, "-I");
        v283 = (_BYTE *)(&dword_0 + 2);
        if ( strlen(v50) > 0x3FFFFFFFFFFFFFFDLL )
          goto LABEL_321;
        v49 = v50;
      }
      else
      {
        v282 = v284;
        v49 = nullptr;
        v50 = (char *)haystack;
        strcpy(v284, "-I");
        v283 = (_BYTE *)(&dword_0 + 2);
      }
      v51 = sub_9CA820(v254, v50);
      v285 = v48;
      v52 = v51 + 16;
      if ( *(_QWORD *)v51 == v51 + 16 )
      {
        v56 = v48;
        v57 = (_DWORD *)(v51 + 16);
        v58 = *(_QWORD *)(v51 + 8) + 1LL;
        if ( (unsigned int)v58 >= 8 )
        {
          LODWORD(v131) = 0;
          do
          {
            v132 = (unsigned int)v131;
            v131 = (unsigned int)(v131 + 8);
            *(_QWORD *)&v48[v132] = *(_QWORD *)(v52 + v132);
          }
          while ( (unsigned int)v131 < ((unsigned int)v58 & 0xFFFFFFF8) );
          v56 = &v48[v131];
          v57 = (_DWORD *)(v52 + v131);
        }
        v59 = 0;
        if ( (v58 & 4) != 0 )
        {
          *(_DWORD *)v56 = *v57;
          v59 = 4;
        }
        if ( (v58 & 2) != 0 )
        {
          *(_WORD *)&v56[v59] = *(_WORD *)((char *)v57 + v59);
          v59 += 2;
        }
        if ( (v58 & 1) != 0 )
          v56[v59] = *((_BYTE *)v57 + v59);
      }
      else
      {
        v285 = *(void **)v51;
        *(_QWORD *)v287 = *(_QWORD *)(v51 + 16);
      }
      v53 = *(char **)(v51 + 8);
      v54 = _mm_load_si128(&v248);
      *(_QWORD *)v51 = v52;
      *(_QWORD *)(v51 + 8) = 0;
      v55 = n[0];
      v286 = v53;
      v45 = (char *)v251;
      *(_BYTE *)(v51 + 16) = 0;
      v263 = v22;
      *(__m128i *)v262 = v54;
      sub_6DEA60(v55, (char **)v45);
      v22 = v263;
      v248 = _mm_load_si128((const __m128i *)v262);
      if ( v285 != v48 )
      {
        v45 = (char *)(*(_QWORD *)v287 + 1LL);
        operator delete(v285, *(_QWORD *)v287 + 1LL);
      }
      if ( v282 != v284 )
      {
        v45 = (char *)(*(_QWORD *)v284 + 1LL);
        operator delete(v282, *(_QWORD *)v284 + 1LL);
      }
      if ( v49 )
        qfree(v49);
      v46 += 24;
    }
    while ( v255 != v46 );
    v47 = v269;
    v11 = (void **)n[0];
    v46 = v269;
  }
  if ( v47 )
  {
    v60 = v270.m128i_i64[0];
    if ( v270.m128i_i64[0] )
    {
      v61 = 0;
      do
      {
        v62 = &v47[24 * v61];
        v63 = *(void **)v62;
        if ( *(_QWORD *)v62 )
        {
          *((_QWORD *)v62 + 1) = 0;
          qfree(v63);
          v46 = v269;
        }
        ++v61;
        v47 = v46;
      }
      while ( v60 != v61 );
    }
    v270.m128i_i64[0] = 0;
    qfree(v47);
  }
  if ( v268[0] )
  {
    v268[1] = nullptr;
    qfree(v268[0]);
  }
  v64 = v252[9];
  v65 = v64 + 24LL * v252[10];
  if ( v65 != v64 )
  {
    n[0] = (size_t)v11;
    v66 = v65;
    while ( 1 )
    {
      if ( !*(_QWORD *)(v64 + 8) )
      {
        v282 = v284;
        if ( !haystack )
          goto LABEL_322;
        v269 = nullptr;
        goto LABEL_90;
      }
      v67 = *(const char **)v64;
      v282 = v284;
      if ( !v67 )
        goto LABEL_322;
      v68 = (char *)strlen(v67);
      v269 = v68;
      v69 = (size_t)v68;
      if ( (unsigned __int64)v68 <= 0xF )
      {
        if ( v68 == (_BYTE *)&dword_0 + 1 )
        {
          v284[0] = *v67;
          goto LABEL_90;
        }
        if ( !v68 )
          goto LABEL_90;
        v71 = v284;
      }
      else
      {
        v254 = (size_t)v68;
        v70 = (void *)std::string::_M_create();
        v69 = v254;
        v282 = v70;
        v71 = (char *)v70;
        *(_QWORD *)v284 = v269;
      }
      memcpy(v71, v67, v69);
LABEL_90:
      v263 = v22;
      v72 = _mm_load_si128(&v248);
      v73 = n[0];
      v283 = v269;
      v269[(_QWORD)v282] = 0;
      *(__m128i *)v262 = v72;
      sub_6DEA60(v73, (char **)&v282);
      v22 = v263;
      v248 = _mm_load_si128((const __m128i *)v262);
      if ( v282 != v284 )
        operator delete(v282, *(_QWORD *)v284 + 1LL);
      v64 += 24;
      if ( v66 == v64 )
      {
        v11 = (void **)n[0];
        break;
      }
    }
  }
  if ( !v252[4] )
  {
    v285 = (void *)v253;
    if ( haystack )
    {
      v269 = nullptr;
      goto LABEL_104;
    }
LABEL_322:
    std::__throw_logic_error("basic_string: construction from null is not valid");
  }
  v74 = (const char *)v252[3];
  v285 = (void *)v253;
  if ( !v74 )
    goto LABEL_322;
  v75 = (char *)strlen(v74);
  v269 = v75;
  v76 = (size_t)v75;
  if ( (unsigned __int64)v75 > 0xF )
  {
    v285 = (void *)std::string::_M_create();
    v77 = v285;
    *(_QWORD *)v287 = v269;
    goto LABEL_103;
  }
  if ( v75 == (_BYTE *)&dword_0 + 1 )
  {
    v287[0] = *v74;
  }
  else if ( v75 )
  {
    v77 = (void *)v253;
LABEL_103:
    memcpy(v77, v74, v76);
  }
LABEL_104:
  v263 = v22;
  v78 = _mm_load_si128(&v248);
  v79 = (char **)v251;
  v286 = v269;
  v269[(_QWORD)v285] = 0;
  *(__m128i *)v262 = v78;
  sub_6DEA60((__int64)v11, v79);
  v80 = (char *)v262[0];
  v81 = (char *)v262[1];
  v254 = v263;
  if ( v285 != v253 )
    operator delete(v285, *(_QWORD *)v287 + 1LL);
  v82 = v80;
  sub_6D30C0((__int64)v252, (int)"=== command line:\n");
  v83 = v252;
  if ( v80 != v81 )
  {
    do
    {
      v84 = *(_QWORD *)v82;
      v82 += 32;
      sub_6D30C0((__int64)v83, (int)"  %s\n", v84);
    }
    while ( v81 != v82 );
  }
  v85 = operator new(0x28u);
  v86 = v249;
  v87 = (volatile signed __int32 *)v85;
  sub_223C690(v249);
  sub_2244130(v87, v86);
  if ( v87 )
    _InterlockedAdd(v87 + 2, 1u);
  v88 = v269;
  if ( v269 && !_InterlockedSub((volatile signed __int32 *)v269 + 2, 1u) )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v88 + 8LL))(v88);
  v89 = operator new(0x40u);
  v248.m128i_i64[0] = v89;
  sub_223EEA0(v89, 1);
  if ( v89 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v89 + 8), 1u);
    _InterlockedAdd((volatile signed __int32 *)(v89 + 8), 1u);
  }
  v269 = (char *)v248.m128i_i64[0];
  sub_2244010(v87, v249);
  v90 = v269;
  if ( v269 && !_InterlockedSub((volatile signed __int32 *)v269 + 2, 1u) )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v90 + 8LL))(v90);
  v261 = 0;
  v91 = 0;
  BYTE4(v268[0]) = 0;
  BYTE4(ptr) = 0;
  v92 = s;
  BYTE4(v264) = 0;
  if ( s )
    v91 = strlen(s);
  n[0] = (size_t)&v259;
  sub_220C5F0(&v259, v92, v91, &byte_22CD811, 0, 1);
  if ( v252[4] )
  {
    v93 = (char *)v252[3];
    v271 = 257;
    if ( *v93 )
    {
      v269 = v93;
      LOBYTE(v271) = 3;
    }
  }
  else
  {
    v271 = 257;
  }
  sub_2240810(v248.m128i_i32[0], (_DWORD)v249, 0, n[0], v260, (_DWORD)v264, (__int64)ptr, (__int64)v268[0]);
  if ( v259 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v259 + 8LL))(v259, v247);
  n[0] = operator new(0x328u);
  if ( v87 )
    _InterlockedAdd(v87 + 2, 1u);
  v94 = (_DWORD *)n[0];
  v269 = (char *)v87;
  v95 = v251;
  v286 = nullptr;
  v285 = (void *)v253;
  v287[0] = 0;
  sub_FB2BA0(n[0], v251, v249);
  if ( v94 )
    ++*v94;
  if ( v285 != v253 )
  {
    v95 = (void *)(*(_QWORD *)v287 + 1LL);
    operator delete(v285, *(_QWORD *)v287 + 1LL);
  }
  v96 = v269;
  if ( v269 && !_InterlockedSub((volatile signed __int32 *)v269 + 2, 1u) )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v96 + 8LL))(v96);
  ptr = nullptr;
  v97 = (_QWORD *)operator new(0x80u);
  v97[1] = 0x100000001LL;
  *v97 = off_2B0E0D0;
  sub_1FBED20(v97 + 2);
  ptr = v97 + 2;
  *(_QWORD *)&v267 = v97;
  v98 = (_QWORD *)operator new(0x88u);
  sub_1341A10(v98);
  v98[14] = 0;
  *v98 = off_2BD1B68;
  v102 = v252;
  v98[15] = 0;
  v98[13] = v102;
  v98[16] = 0;
  v264 = v98;
  memset(v268, 0, 24);
  v103 = v81 - v80;
  if ( v81 == v80 )
  {
    v104 = 0;
  }
  else
  {
    if ( v103 > 0x7FFFFFFFFFFFFFE0LL )
      sub_2E883E(v98, v95, v99, v100, v101);
    v104 = operator new(v81 - v80);
  }
  v268[2] = (char *)(v104 + v103);
  *(__m128i *)v268 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v104, (__m128i)(unsigned __int64)v104);
  if ( v80 != v81 )
  {
    v251 = (void *)v87;
    v105 = v80;
    while ( 1 )
    {
      v106 = v104 + 16;
      *(_QWORD *)v104 = v104 + 16;
      v107 = *((char **)v105 + 1);
      v108 = *(_BYTE **)v105;
      v269 = v107;
      if ( (unsigned __int64)v107 > 0xF )
        break;
      if ( v107 == (_BYTE *)&dword_0 + 1 )
      {
        *(_BYTE *)(v104 + 16) = *v108;
        goto LABEL_141;
      }
      if ( v107 )
        goto LABEL_144;
LABEL_141:
      v105 += 32;
      *(_QWORD *)(v104 + 8) = v107;
      v104 += 32;
      v107[v106] = 0;
      if ( v81 == v105 )
      {
        v87 = (volatile signed __int32 *)v251;
        goto LABEL_147;
      }
    }
    v109 = std::string::_M_create();
    *(_QWORD *)v104 = v109;
    v106 = v109;
    *(_QWORD *)(v104 + 16) = v269;
LABEL_144:
    memcpy((void *)v106, v108, (size_t)v107);
    v107 = v269;
    v106 = *(_QWORD *)v104;
    goto LABEL_141;
  }
LABEL_147:
  v110 = (char *)v257;
  v268[1] = (char *)v104;
  sub_1FE54D0(v249, v257, &v264, n[0], &ptr);
  v111 = v268[1];
  v112 = v268[0];
  if ( v268[1] != v268[0] )
  {
    do
    {
      if ( *(char **)v112 != v112 + 16 )
      {
        v110 = (char *)(*((_QWORD *)v112 + 2) + 1LL);
        operator delete(*(void **)v112, (unsigned __int64)v110);
      }
      v112 += 32;
    }
    while ( v111 != v112 );
    v112 = v268[0];
  }
  if ( v112 )
  {
    v110 = (char *)(v268[2] - v112);
    operator delete(v112, v268[2] - v112);
  }
  v113 = v264;
  if ( v264 )
  {
    v114 = *(void (__fastcall **)(void *))(*(_QWORD *)v264 + 64LL);
    if ( (char *)v114 == (char *)sub_6DBD50 )
    {
      *((_QWORD *)v264 + 13) = 0;
      *v113 = off_2BD1B68;
      if ( v113[14] )
      {
        v115 = v113[15];
        v251 = v113;
        sub_1432050(v115, 0, 0);
        v113 = v251;
      }
      v116 = (volatile signed __int32 *)v113[16];
      if ( v116 )
      {
        v117 = v116 + 2;
        if ( *((_QWORD *)v116 + 1) == 0x100000001LL )
        {
          v221 = *(_QWORD *)v116;
          v251 = v113;
          *((_QWORD *)v116 + 1) = 0;
          (*(void (__fastcall **)(volatile signed __int32 *, __int64, __int64, volatile signed __int32 *))(v221 + 16))(
            v116,
            0x100000001LL,
            v221,
            v117);
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v116 + 24LL))(v116);
          v113 = v251;
        }
        else
        {
          if ( &_pthread_key_create )
          {
            v118 = _InterlockedExchangeAdd(v117, 0xFFFFFFFF);
          }
          else
          {
            v118 = *((_DWORD *)v116 + 2);
            *((_DWORD *)v116 + 2) = v118 - 1;
          }
          if ( v118 == 1 )
          {
            v251 = v113;
            sub_420480(v116);
            v113 = v251;
          }
        }
      }
      v119 = (__int64 *)v113[14];
      if ( v119 )
      {
        v120 = *v119;
        v251 = v113;
        (*(void (__fastcall **)(__int64 *))(v120 + 8))(v119);
        v113 = v251;
      }
      v251 = v113;
      *v113 = &off_2C19730;
      sub_1341A60(v113);
      v110 = (_BYTE *)off_88;
      operator delete(v251, 0x88u);
    }
    else
    {
      v114(v264);
    }
  }
  v121 = (volatile signed __int32 *)v267;
  if ( (_QWORD)v267 )
  {
    v122 = (volatile signed __int32 *)(v267 + 8);
    if ( *(_QWORD *)(v267 + 8) == 0x100000001LL )
    {
      v218 = *(_QWORD *)v267;
      v219 = v267;
      *(_QWORD *)(v267 + 8) = 0;
      (*(void (__fastcall **)(__int64, char *, volatile signed __int32 *))(v218 + 16))(v219, v110, v122);
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v121 + 24LL))(v121);
    }
    else
    {
      if ( &_pthread_key_create )
      {
        v123 = _InterlockedExchangeAdd(v122, 0xFFFFFFFF);
      }
      else
      {
        v123 = *(_DWORD *)(v267 + 8);
        *(_DWORD *)(v267 + 8) = v123 - 1;
      }
      if ( v123 == 1 )
        sub_420480(v121);
    }
  }
  v124 = v252;
  v268[1] = nullptr;
  v268[0] = (char *)&off_2BD1C00;
  v268[2] = (char *)v252;
  v272 = v257;
  if ( !(unsigned __int8)sub_1FE6200(v249) )
  {
    v125 = v124[75];
    if ( !v125 )
    {
      if ( v252[76] )
      {
        v208 = (volatile signed __int32 *)v252[74];
      }
      else
      {
        v223 = v252;
        v224 = qvector_reserve(v252 + 74, 0, 1, 64);
        v225 = (volatile signed __int32 *)v223[75];
        v226 = (_QWORD *)v224;
        v227 = (void *)v223[76];
        v223[76] = 0;
        v253 = v225;
        v251 = v227;
        v228 = (char *)v223[74];
        if ( (__int64)v225 - 1 >= 0 )
        {
          v253 = v87;
          v229 = v228;
          v230 = (char *)v225 - 1;
          v231 = v226;
          v255 = v81;
          v232 = v226;
          do
          {
            v233 = *(void **)v229;
            v234 = _mm_loadu_si128((const __m128i *)(v229 + 8));
            *(_QWORD *)v229 = 0;
            *(_OWORD *)(v229 + 8) = 0;
            *v232 = v233;
            *(__m128i *)(v232 + 1) = v234;
            v235 = *((_QWORD *)v229 + 3);
            v236 = _mm_loadu_si128((const __m128i *)v229 + 2);
            *((_QWORD *)v229 + 3) = 0;
            v232[3] = v235;
            *((__m128i *)v232 + 2) = v236;
            v237 = *((_QWORD *)v229 + 6);
            *((_QWORD *)v229 + 5) = 0;
            v232[6] = v237;
            v232[7] = *((_QWORD *)v229 + 7);
            v238 = *((void **)v229 + 3);
            if ( v238 )
            {
              *((_QWORD *)v229 + 4) = 0;
              qfree(v238);
            }
            v239 = *(void **)v229;
            if ( *(_QWORD *)v229 )
            {
              *((_QWORD *)v229 + 1) = 0;
              qfree(v239);
            }
            v229 += 64;
            v232 += 8;
          }
          while ( v230-- != nullptr );
          v87 = v253;
          v226 = v231;
          v81 = v255;
          v228 = (char *)v252[74];
        }
        v253 = (volatile signed __int32 *)v226;
        qfree(v228);
        v241 = v252;
        v208 = v253;
        v242 = v251;
        v252[74] = v253;
        v241[76] = v242;
        v125 = v241[75];
      }
      v209 = &v208[16 * v125];
      v210 = v252;
      *(_QWORD *)v209 = 0;
      *((_QWORD *)v209 + 7) = 4;
      *(_OWORD *)(v209 + 2) = 0;
      *((_QWORD *)v209 + 3) = 0;
      *((_QWORD *)v209 + 6) = -1;
      *((_OWORD *)v209 + 2) = 0;
      ++v210[75];
      v211 = *((_QWORD *)v209 + 2) <= 0x1Bu;
      *((_DWORD *)v209 + 14) = 5;
      v212 = *(_QWORD *)v209;
      if ( v211 )
      {
        v251 = (void *)v209;
        v222 = qvector_reserve(v209, v212, 28, 1);
        v209 = (volatile signed __int32 *)v251;
        v212 = v222;
        *(_QWORD *)v251 = v222;
      }
      v213 = _mm_load_si128((const __m128i *)&xmmword_2384230);
      *((_QWORD *)v209 + 1) = 28;
      *(__m128i *)v212 = v213;
      *(__m128i *)(v212 + 11) = _mm_load_si128((const __m128i *)&xmmword_2384240);
      *(_BYTE *)(*(_QWORD *)v209 + 27LL) = 0;
    }
  }
  v268[0] = (char *)&off_2BD1C00;
  v268[2] = nullptr;
  nullsub_537(v257);
  sub_1FE5570(v249);
  v126 = n[0];
  if ( n[0] )
  {
    v127 = (void *)n[0];
    LODWORD(v249) = *(_DWORD *)n[0];
    v37 = (_DWORD)v249 == 1;
    *(_DWORD *)n[0] = (_DWORD)v249 - 1;
    if ( v37 )
    {
      sub_FB2EE0(v126);
      operator delete(v127, 0x328u);
    }
  }
  v128 = v248.m128i_i64[0];
  if ( v248.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)(v248.m128i_i64[0] + 8), 1u) )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v128 + 8LL))(v128);
  if ( v87 && !_InterlockedSub(v87 + 2, 1u) )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v87 + 8LL))(v87);
  for ( i = v80; v81 != i; i += 32 )
  {
    if ( *(char **)i != i + 16 )
      operator delete(*(void **)i, *((_QWORD *)i + 2) + 1LL);
  }
  if ( v80 )
    operator delete(v80, v254 - (_QWORD)v80);
  return v288 - __readfsqword(0x28u);
}

