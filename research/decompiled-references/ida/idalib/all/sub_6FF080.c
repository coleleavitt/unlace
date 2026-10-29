unsigned __int64 __fastcall sub_6FF080(_QWORD *a1, char *a2)
{
  unsigned __int64 v2; // rax
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
  char *v45; // r12
  char *v46; // rdi
  char *v47; // r15
  char *v48; // r14
  char *v49; // r13
  __int64 v50; // rax
  __int64 v51; // rcx
  char *v52; // rdx
  __m128i v53; // xmm4
  __int64 v54; // rdi
  char **v55; // rsi
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
  volatile signed __int32 *v85; // rax
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
  unsigned __int64 v104; // r15
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
  char *v172; // r15
  char *v173; // r14
  char *v174; // r13
  __int64 v175; // rax
  __int64 v176; // rcx
  char *v177; // rdx
  __m128i v178; // xmm4
  __int64 v179; // rdi
  char **v180; // rsi
  char *v181; // r8
  _DWORD *v182; // rsi
  __int64 v183; // rdx
  __int64 v184; // rdi
  __int64 v185; // rsi
  __int64 v186; // rdi
  char *v187; // rbp
  char *v188; // r12
  char *v189; // r13
  char *v190; // rsi
  char *v191; // r14
  char *v192; // rax
  size_t v193; // r13
  _QWORD *v194; // rdi
  __m128i v195; // xmm1
  char *v196; // r14
  __m128i v197; // xmm1
  unsigned __int64 v198; // rax
  char *v199; // rdi
  __m128i v200; // xmm1
  unsigned __int64 v201; // rax
  char *v202; // rdi
  __int64 v203; // rax
  _QWORD *v204; // rax
  __int64 v205; // rax
  _QWORD *v206; // rax
  volatile signed __int32 *v207; // rcx
  volatile signed __int32 *v208; // rdi
  _QWORD *v209; // rax
  bool v210; // cc
  __int64 v211; // rsi
  __m128i v212; // xmm0
  __int64 v213; // rax
  _QWORD *v214; // rax
  __int64 v215; // rax
  _QWORD *v216; // rax
  __int64 v217; // rax
  __int64 v218; // rdi
  __int64 v219; // rax
  __int64 v220; // rdx
  __int64 v221; // rax
  _QWORD *v222; // r14
  __int64 v223; // rax
  volatile signed __int32 *v224; // rdx
  _QWORD *v225; // rcx
  void *v226; // rax
  char *v227; // rax
  char *v228; // r12
  char *v229; // rbp
  _QWORD *v230; // r14
  _QWORD *v231; // rbx
  void *v232; // rax
  __m128i v233; // xmm0
  __int64 v234; // rax
  __m128i v235; // xmm0
  __int64 v236; // rax
  void *v237; // rdi
  void *v238; // rdi
  _QWORD *v240; // rax
  void *v241; // rdx
  __int64 v242; // rax
  _QWORD *v243; // rax
  __int64 v244; // rax
  _QWORD *v245; // rax
  __int64 v246; // [rsp-8h] [rbp-260h]
  __m128i v247; // [rsp+0h] [rbp-258h] BYREF
  char **v248; // [rsp+18h] [rbp-240h]
  size_t n[2]; // [rsp+20h] [rbp-238h] BYREF
  void *v250; // [rsp+30h] [rbp-228h]
  _QWORD *v251; // [rsp+38h] [rbp-220h]
  volatile signed __int32 *v252; // [rsp+40h] [rbp-218h]
  size_t v253; // [rsp+48h] [rbp-210h]
  char *v254; // [rsp+50h] [rbp-208h]
  size_t v255; // [rsp+58h] [rbp-200h]
  char **v256; // [rsp+60h] [rbp-1F8h]
  char *s; // [rsp+68h] [rbp-1F0h]
  __int64 v258; // [rsp+70h] [rbp-1E8h] BYREF
  int v259; // [rsp+78h] [rbp-1E0h]
  char v260; // [rsp+7Ch] [rbp-1DCh]
  void *v261[2]; // [rsp+80h] [rbp-1D8h] BYREF
  size_t v262; // [rsp+90h] [rbp-1C8h]
  void *v263; // [rsp+A0h] [rbp-1B8h] BYREF
  __int128 v264; // [rsp+A8h] [rbp-1B0h]
  void *ptr; // [rsp+C0h] [rbp-198h] BYREF
  __int128 v266; // [rsp+C8h] [rbp-190h]
  char *v267[4]; // [rsp+E0h] [rbp-178h] BYREF
  char *v268; // [rsp+100h] [rbp-158h] BYREF
  __m128i v269; // [rsp+108h] [rbp-150h] BYREF
  __int16 v270; // [rsp+120h] [rbp-138h]
  char **v271; // [rsp+140h] [rbp-118h]
  void *v272[2]; // [rsp+150h] [rbp-108h] BYREF
  _QWORD v273[2]; // [rsp+160h] [rbp-F8h] BYREF
  void *v274[2]; // [rsp+170h] [rbp-E8h] BYREF
  _QWORD v275[2]; // [rsp+180h] [rbp-D8h] BYREF
  void *v276[2]; // [rsp+190h] [rbp-C8h] BYREF
  _QWORD v277[2]; // [rsp+1A0h] [rbp-B8h] BYREF
  void *v278; // [rsp+1B0h] [rbp-A8h] BYREF
  char *v279; // [rsp+1B8h] [rbp-A0h]
  _QWORD v280[2]; // [rsp+1C0h] [rbp-98h] BYREF
  void *v281; // [rsp+1D0h] [rbp-88h] BYREF
  char *v282; // [rsp+1D8h] [rbp-80h]
  char v283[16]; // [rsp+1E0h] [rbp-78h] BYREF
  void *v284; // [rsp+1F0h] [rbp-68h] BYREF
  char *v285; // [rsp+1F8h] [rbp-60h]
  char v286[24]; // [rsp+200h] [rbp-58h] BYREF
  unsigned __int64 v287; // [rsp+218h] [rbp-40h]

  v251 = a1;
  s = a2;
  v287 = __readfsqword(0x28u);
  v2 = operator new(0xC80u);
  v3 = v2 + 3200;
  v4 = *(__int64 *)a1[1] < 0;
  v247 = _mm_unpacklo_epi64((__m128i)v2, (__m128i)v2);
  if ( v4 )
  {
    memset(v267, 0, 24);
    v256 = v267;
    sub_6F24B0((__int64)v267);
    v187 = v267[1];
    if ( v267[1] )
    {
      v189 = v267[1] + 9;
      v188 = v267[1] + 10;
      v187 = v267[1] - 1;
    }
    else
    {
      v188 = byte_9 + 2;
      v189 = byte_9 + 1;
    }
    v190 = v267[0];
    if ( v267[2] < v188 )
    {
      v267[0] = (char *)qvector_reserve(v256, v267[0], v188, 1);
      v190 = v267[0];
    }
    v267[1] = v188;
    v189[(_QWORD)v190] = 0;
    qmemcpy(&v267[0][(unsigned __int64)v187], "clang-tool", 10);
    if ( !v267[1] )
    {
      v272[0] = v273;
      if ( !haystack )
        goto LABEL_322;
      v268 = nullptr;
      v248 = &v268;
      goto LABEL_267;
    }
    v191 = v267[0];
    v272[0] = v273;
    if ( !v267[0] )
      goto LABEL_322;
    v192 = (char *)strlen(v267[0]);
    v268 = v192;
    v193 = (size_t)v192;
    if ( (unsigned __int64)v192 <= 0xF )
    {
      if ( v192 == (_BYTE *)&dword_0 + 1 )
      {
        LOBYTE(v273[0]) = *v191;
        v248 = &v268;
        goto LABEL_267;
      }
      v248 = &v268;
      if ( !v192 )
        goto LABEL_267;
      v194 = v273;
    }
    else
    {
      v248 = &v268;
      v272[0] = (void *)std::string::_M_create(v272, &v268, 0);
      v194 = v272[0];
      v273[0] = v268;
    }
    memcpy(v194, v191, v193);
LABEL_267:
    v195 = _mm_load_si128(&v247);
    v11 = v261;
    v262 = v3;
    v272[1] = v268;
    *((_BYTE *)v272[0] + (unsigned __int64)v268) = 0;
    *(__m128i *)v261 = v195;
    sub_6FEF60((__int64)v261, (char **)v272);
    si128 = _mm_load_si128((const __m128i *)v261);
    v13 = v262;
    if ( v272[0] != v273 )
    {
      v247 = si128;
      operator delete(v272[0], v273[0] + 1LL);
      si128 = _mm_load_si128(&v247);
    }
    if ( v267[0] )
    {
      v247 = si128;
      v267[1] = nullptr;
      qfree(v267[0]);
      si128 = _mm_load_si128(&v247);
    }
    goto LABEL_10;
  }
  v5 = *(_QWORD *)(*v251 + 1896LL);
  if ( *(_BYTE *)(v5 + 168) )
  {
    if ( *(_QWORD *)(v5 + 152) )
      goto LABEL_4;
LABEL_32:
    v274[0] = v275;
    if ( !haystack )
      goto LABEL_322;
    v268 = nullptr;
    v248 = &v268;
    goto LABEL_8;
  }
  sub_6F24B0(v5 + 144);
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
    v219 = qvector_reserve(v5 + 144, v36, v34, 1);
    *(_QWORD *)(v5 + 144) = v219;
    v36 = v219;
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
  v274[0] = v275;
  if ( !v6 )
    goto LABEL_322;
  v7 = (char *)strlen(v6);
  v268 = v7;
  v8 = (size_t)v7;
  if ( (unsigned __int64)v7 > 0xF )
  {
    v248 = &v268;
    v274[0] = (void *)std::string::_M_create(v274, &v268, 0);
    v9 = v274[0];
    v275[0] = v268;
LABEL_7:
    memcpy(v9, v6, v8);
    goto LABEL_8;
  }
  if ( v7 == (_BYTE *)&dword_0 + 1 )
  {
    LOBYTE(v275[0]) = *v6;
    v248 = &v268;
  }
  else
  {
    if ( v7 )
    {
      v9 = v275;
      v248 = &v268;
      goto LABEL_7;
    }
    v248 = &v268;
  }
LABEL_8:
  v10 = _mm_load_si128(&v247);
  v11 = v261;
  v262 = v3;
  v274[1] = v268;
  *((_BYTE *)v274[0] + (unsigned __int64)v268) = 0;
  *(__m128i *)v261 = v10;
  sub_6FEF60((__int64)v261, (char **)v274);
  si128 = _mm_load_si128((const __m128i *)v261);
  v13 = v262;
  if ( v274[0] != v275 )
  {
    v247 = si128;
    operator delete(v274[0], v275[0] + 1LL);
    si128 = _mm_load_si128(&v247);
  }
LABEL_10:
  v285 = byte_9 + 4;
  strcpy(v286, "-fsyntax-only");
  v250 = &v284;
  v252 = (volatile signed __int32 *)v286;
  v284 = v286;
  v262 = v13;
  *(__m128i *)v261 = si128;
  sub_6FEF60((__int64)v261, (char **)&v284);
  if ( v284 != v286 )
    operator delete(v284, *(_QWORD *)v286 + 1LL);
  v14 = v252;
  strcpy(v286, "-fno-rtti");
  v284 = (void *)v252;
  v285 = byte_9;
  sub_6FEF60((__int64)v261, (char **)v250);
  if ( v284 != v14 )
    operator delete(v284, *(_QWORD *)v286 + 1LL);
  v15 = v252;
  strcpy(v286, "-fbuiltin");
  v284 = (void *)v252;
  v285 = byte_9;
  sub_6FEF60((__int64)v261, (char **)v250);
  if ( v284 != v15 )
    operator delete(v284, *(_QWORD *)v286 + 1LL);
  v16 = v252;
  strcpy(v286, "-fms-extensions");
  v284 = (void *)v252;
  v285 = byte_9 + 6;
  sub_6FEF60((__int64)v261, (char **)v250);
  if ( v284 != v16 )
    operator delete(v284, *(_QWORD *)v286 + 1LL);
  v17 = (char **)v250;
  v18 = v252;
  v268 = (_BYTE *)(&dword_14 + 1);
  v284 = (void *)v252;
  v19 = (__m128i *)std::string::_M_create(v250, v248, 0);
  v284 = v19;
  *(_QWORD *)v286 = v268;
  *v19 = _mm_load_si128((const __m128i *)&xmmword_23A8250);
  *(__int64 *)((char *)&v19->m128i_i64[1] + 5) = 0x383231746E692D65LL;
  v285 = v268;
  v268[(_QWORD)v284] = 0;
  sub_6FEF60((__int64)v261, v17);
  v22 = v262;
  v247 = _mm_load_si128((const __m128i *)v261);
  if ( v284 != v18 )
    operator delete(v284, *(_QWORD *)v286 + 1LL);
  v23 = (_QWORD *)v251[1];
  v24 = *v23 & 0x800LL;
  if ( (*v23 & 0x800) != 0 )
    goto LABEL_52;
  v253 = *v23 & 0x800LL;
  v25 = off_2B380A0;
  do
  {
    v28 = *v25;
    v276[0] = v277;
    if ( !v28 )
      goto LABEL_322;
    v29 = (char *)strlen(v28);
    v268 = v29;
    v30 = (size_t)v29;
    if ( (unsigned __int64)v29 <= 0xF )
    {
      if ( v29 == (_BYTE *)&dword_0 + 1 )
      {
        LOBYTE(v277[0]) = *v28;
LABEL_24:
        v26 = v277;
        goto LABEL_25;
      }
      if ( !v29 )
        goto LABEL_24;
      v32 = v277;
    }
    else
    {
      n[0] = (size_t)v29;
      v31 = (void *)std::string::_M_create(v276, v248, 0);
      v30 = n[0];
      v276[0] = v31;
      v32 = v31;
      v277[0] = v268;
    }
    memcpy(v32, v28, v30);
    v29 = v268;
    v26 = v276[0];
LABEL_25:
    v276[1] = v29;
    v27 = _mm_load_si128(&v247);
    v29[(_QWORD)v26] = 0;
    v262 = v22;
    *(__m128i *)v261 = v27;
    sub_6FEF60((__int64)v261, (char **)v276);
    v22 = v262;
    v247 = _mm_load_si128((const __m128i *)v261);
    if ( v276[0] != v277 )
      operator delete(v276[0], v277[0] + 1LL);
    ++v25;
  }
  while ( &unk_2B38290 != (_UNKNOWN *)v25 );
  v133 = v251;
  v134 = v251 + 55;
  v135 = v251 + 52;
  n[0] = v253;
  get_custom_callcnvs(v251 + 52, v251 + 55);
  v268 = nullptr;
  v269 = 0;
  v136 = (char *)qvector_reserve(v248, 0, 9, 1);
  v137 = v248;
  v138 = n[0];
  v268 = v136;
  v269.m128i_i64[0] = 9;
  *(_QWORD *)v136 = 0x676E616C6F675F5FLL;
  v139 = v268;
  v268[8] = 0;
  v140 = v133[52];
  v141 = v133[53];
  v142 = v133[54];
  v143 = v141 + 1;
  if ( (unsigned __int64)v137 >= v140 && (unsigned __int64)v137 < v140 + 24 * v142 )
  {
    v200 = _mm_loadu_si128(&v269);
    v268 = nullptr;
    v269 = 0;
    if ( v142 < v143 )
    {
      v253 = v138;
      *(__m128i *)n = v200;
      v242 = qvector_reserve(v135, v140, v141 + 1, 24);
      v138 = v253;
      v200 = _mm_load_si128((const __m128i *)n);
      v140 = v242;
      v243 = v251;
      v251[52] = v140;
      v141 = v243[53];
    }
    v201 = v140 + 24 * v141;
    *(_QWORD *)v201 = v139;
    *(__m128i *)(v201 + 8) = v200;
    v202 = v268;
    ++v251[53];
    if ( v202 )
    {
      n[0] = v138;
      v269.m128i_i64[0] = 0;
      qfree(v202);
      v138 = n[0];
    }
  }
  else
  {
    if ( v142 < v143 )
    {
      n[0] = v138;
      v213 = qvector_reserve(v135, v140, v141 + 1, 24);
      v139 = v268;
      v138 = n[0];
      v140 = v213;
      v214 = v251;
      v251[52] = v140;
      v141 = v214[53];
    }
    v144 = _mm_loadu_si128(&v269);
    v145 = v140 + 24 * v141;
    *(_QWORD *)v145 = v139;
    *(__m128i *)(v145 + 8) = v144;
    ++v251[53];
  }
  v146 = v251[56];
  v147 = v251[55];
  if ( v251[57] < (unsigned __int64)(v146 + 1) )
  {
    n[0] = v138;
    v205 = qvector_reserve(v134, v147, v146 + 1, 4);
    v138 = n[0];
    v147 = v205;
    v206 = v251;
    v251[55] = v147;
    v146 = v206[56];
  }
  v148 = v251;
  *(_DWORD *)(v147 + 4 * v146) = 176;
  v149 = v248;
  n[0] = v138;
  ++v148[56];
  v269 = 0;
  v268 = nullptr;
  v150 = qvector_reserve(v149, 0, 8, 1);
  v151 = n[0];
  v269.m128i_i64[0] = 8;
  v268 = (char *)v150;
  *(_DWORD *)v150 = 1869045599;
  *(_DWORD *)(v150 + 3) = 1802793839;
  v268[7] = 0;
  v152 = v148[52];
  v153 = v148[53];
  v154 = v148[54];
  v155 = v153 + 1;
  if ( (unsigned __int64)v149 >= v152 && (unsigned __int64)v149 < v152 + 24 * v154 )
  {
    v196 = v268;
    v197 = _mm_loadu_si128(&v269);
    v268 = nullptr;
    v269 = 0;
    if ( v154 < v155 )
    {
      v253 = v151;
      *(__m128i *)n = v197;
      v244 = qvector_reserve(v135, v152, v153 + 1, 24);
      v151 = v253;
      v197 = _mm_load_si128((const __m128i *)n);
      v152 = v244;
      v245 = v251;
      v251[52] = v152;
      v153 = v245[53];
    }
    v198 = v152 + 24 * v153;
    *(_QWORD *)v198 = v196;
    *(__m128i *)(v198 + 8) = v197;
    v199 = v268;
    ++v251[53];
    if ( v199 )
    {
      n[0] = v151;
      v269.m128i_i64[0] = 0;
      qfree(v199);
      v151 = n[0];
    }
  }
  else
  {
    if ( v154 < v155 )
    {
      n[0] = v151;
      v215 = qvector_reserve(v135, v152, v153 + 1, 24);
      v151 = n[0];
      v152 = v215;
      v216 = v251;
      v251[52] = v152;
      v153 = v216[53];
    }
    v156 = _mm_loadu_si128(&v269);
    v157 = v152 + 24 * v153;
    *(_QWORD *)v157 = v268;
    *(__m128i *)(v157 + 8) = v156;
    ++v251[53];
  }
  v158 = v251[56];
  v159 = v251[55];
  if ( v251[57] < (unsigned __int64)(v158 + 1) )
  {
    n[0] = v151;
    v203 = qvector_reserve(v134, v159, v158 + 1, 4);
    v151 = n[0];
    v159 = v203;
    v204 = v251;
    v251[55] = v159;
    v158 = v204[56];
  }
  *(_DWORD *)(v159 + 4 * v158) = 256;
  v160 = v251;
  v161 = v251[52];
  ++v251[56];
  v162 = 3LL * v160[53];
  if ( v161 != v161 + 8 * v162 )
  {
    v254 = (char *)v151;
    v163 = v161 + 8 * v162;
    n[0] = (size_t)v261;
    while ( 1 )
    {
      v268 = nullptr;
      v269 = 0;
      sub_35A790(v248);
      if ( !v269.m128i_i64[0] )
      {
        v278 = v280;
        if ( !haystack )
          goto LABEL_322;
        v267[0] = nullptr;
        goto LABEL_216;
      }
      v164 = v268;
      v278 = v280;
      if ( !v268 )
        goto LABEL_322;
      v165 = (char *)strlen(v268);
      v267[0] = v165;
      v166 = (size_t)v165;
      if ( (unsigned __int64)v165 <= 0xF )
      {
        if ( v165 == (_BYTE *)&dword_0 + 1 )
        {
          LOBYTE(v280[0]) = *v164;
          goto LABEL_216;
        }
        if ( !v165 )
          goto LABEL_216;
        v168 = v280;
      }
      else
      {
        v253 = (size_t)v165;
        v167 = (void *)std::string::_M_create(&v278, v267, 0);
        v166 = v253;
        v278 = v167;
        v168 = v167;
        v280[0] = v267[0];
      }
      memcpy(v168, v164, v166);
LABEL_216:
      v262 = v22;
      v169 = _mm_load_si128(&v247);
      v170 = n[0];
      v279 = v267[0];
      *((_BYTE *)v278 + (unsigned __int64)v267[0]) = 0;
      *(__m128i *)v261 = v169;
      sub_6FEF60(v170, (char **)&v278);
      v22 = v262;
      v247 = _mm_load_si128((const __m128i *)v261);
      if ( v278 != v280 )
        operator delete(v278, v280[0] + 1LL);
      if ( v268 )
      {
        v269.m128i_i64[0] = 0;
        qfree(v268);
      }
      v161 += 24;
      if ( v163 == v161 )
      {
        v151 = (size_t)v254;
        v11 = (void **)n[0];
        break;
      }
    }
  }
  v263 = nullptr;
  v264 = 0;
  v171 = *v251;
  n[0] = v151;
  sub_60A2D0(*(_QWORD *)(v171 + 1672), (__int64 *)&v263);
  ptr = nullptr;
  v266 = 0;
  sub_456FB0(&v263, (__int64 *)&ptr, ";", 1);
  v24 = n[0];
  v39 = (char *)ptr;
  v38 = (char *)ptr + 24 * v266;
  if ( ptr != v38 )
  {
    v254 = (char *)ptr + 24 * v266;
    v172 = (char *)v252;
    v253 = (size_t)&v278;
    v256 = (char **)n[0];
    n[0] = (size_t)v11;
    do
    {
      if ( *((_QWORD *)v39 + 1) )
      {
        v255 = *((_QWORD *)v39 + 1);
        v174 = (char *)qalloc_or_throw(v255);
        memcpy(v174, *(const void **)v39, v255);
        v278 = v280;
        strcpy((char *)v280, "-D");
        v279 = (_BYTE *)(&dword_0 + 2);
        if ( strlen(v174) > 0x3FFFFFFFFFFFFFFDLL )
LABEL_321:
          std::__throw_length_error("basic_string::append");
        v173 = v174;
      }
      else
      {
        v278 = v280;
        v173 = nullptr;
        v174 = (char *)haystack;
        strcpy((char *)v280, "-D");
        v279 = (_BYTE *)(&dword_0 + 2);
      }
      v175 = sub_9EE560(v253, v174);
      v284 = v172;
      v176 = v175 + 16;
      if ( *(_QWORD *)v175 == v175 + 16 )
      {
        v181 = v172;
        v182 = (_DWORD *)(v175 + 16);
        v183 = *(_QWORD *)(v175 + 8) + 1LL;
        if ( (unsigned int)v183 >= 8 )
        {
          LODWORD(v185) = 0;
          do
          {
            v186 = (unsigned int)v185;
            v185 = (unsigned int)(v185 + 8);
            *(_QWORD *)&v172[v186] = *(_QWORD *)(v176 + v186);
          }
          while ( (unsigned int)v185 < ((unsigned int)v183 & 0xFFFFFFF8) );
          v181 = &v172[v185];
          v182 = (_DWORD *)(v176 + v185);
        }
        v184 = 0;
        if ( (v183 & 4) != 0 )
        {
          *(_DWORD *)v181 = *v182;
          v184 = 4;
        }
        if ( (v183 & 2) != 0 )
        {
          *(_WORD *)&v181[v184] = *(_WORD *)((char *)v182 + v184);
          v184 += 2;
        }
        if ( (v183 & 1) != 0 )
          v181[v184] = *((_BYTE *)v182 + v184);
      }
      else
      {
        v284 = *(void **)v175;
        *(_QWORD *)v286 = *(_QWORD *)(v175 + 16);
      }
      v177 = *(char **)(v175 + 8);
      v178 = _mm_load_si128(&v247);
      *(_QWORD *)v175 = v176;
      *(_QWORD *)(v175 + 8) = 0;
      v179 = n[0];
      v285 = v177;
      v180 = (char **)v250;
      *(_BYTE *)(v175 + 16) = 0;
      v262 = v22;
      *(__m128i *)v261 = v178;
      sub_6FEF60(v179, v180);
      v22 = v262;
      v247 = _mm_load_si128((const __m128i *)v261);
      if ( v284 != v172 )
        operator delete(v284, *(_QWORD *)v286 + 1LL);
      if ( v278 != v280 )
        operator delete(v278, v280[0] + 1LL);
      if ( v173 )
        qfree(v173);
      v39 += 24;
    }
    while ( v254 != v39 );
    v38 = (char *)ptr;
    v24 = (size_t)v256;
    v11 = (void **)n[0];
    v39 = (char *)ptr;
  }
  if ( v38 )
  {
    v40 = v266;
    if ( (_QWORD)v266 )
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
    *(_QWORD *)&v266 = 0;
    qfree(v38);
  }
  if ( v263 )
  {
    *(_QWORD *)&v264 = 0;
    qfree(v263);
  }
LABEL_52:
  v44 = *v251;
  v256 = v267;
  memset(v267, 0, 24);
  sub_631490(v44, (__int64 *)v267, 71, v20, v24, v21);
  v268 = nullptr;
  v269 = 0;
  sub_456FB0(v267, (__int64 *)v248, ":", 1);
  v45 = v268;
  v46 = &v268[24 * v269.m128i_i64[0]];
  if ( v268 != v46 )
  {
    v254 = &v268[24 * v269.m128i_i64[0]];
    v47 = (char *)v252;
    v253 = (size_t)&v281;
    n[0] = (size_t)v11;
    do
    {
      if ( *((_QWORD *)v45 + 1) )
      {
        v255 = *((_QWORD *)v45 + 1);
        v49 = (char *)qalloc_or_throw(v255);
        memcpy(v49, *(const void **)v45, v255);
        v281 = v283;
        strcpy(v283, "-I");
        v282 = (_BYTE *)(&dword_0 + 2);
        if ( strlen(v49) > 0x3FFFFFFFFFFFFFFDLL )
          goto LABEL_321;
        v48 = v49;
      }
      else
      {
        v281 = v283;
        v48 = nullptr;
        v49 = (char *)haystack;
        strcpy(v283, "-I");
        v282 = (_BYTE *)(&dword_0 + 2);
      }
      v50 = sub_9EE560(v253, v49);
      v284 = v47;
      v51 = v50 + 16;
      if ( *(_QWORD *)v50 == v50 + 16 )
      {
        v56 = v47;
        v57 = (_DWORD *)(v50 + 16);
        v58 = *(_QWORD *)(v50 + 8) + 1LL;
        if ( (unsigned int)v58 >= 8 )
        {
          LODWORD(v131) = 0;
          do
          {
            v132 = (unsigned int)v131;
            v131 = (unsigned int)(v131 + 8);
            *(_QWORD *)&v47[v132] = *(_QWORD *)(v51 + v132);
          }
          while ( (unsigned int)v131 < ((unsigned int)v58 & 0xFFFFFFF8) );
          v56 = &v47[v131];
          v57 = (_DWORD *)(v51 + v131);
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
        v284 = *(void **)v50;
        *(_QWORD *)v286 = *(_QWORD *)(v50 + 16);
      }
      v52 = *(char **)(v50 + 8);
      v53 = _mm_load_si128(&v247);
      *(_QWORD *)v50 = v51;
      *(_QWORD *)(v50 + 8) = 0;
      v54 = n[0];
      v285 = v52;
      v55 = (char **)v250;
      *(_BYTE *)(v50 + 16) = 0;
      v262 = v22;
      *(__m128i *)v261 = v53;
      sub_6FEF60(v54, v55);
      v22 = v262;
      v247 = _mm_load_si128((const __m128i *)v261);
      if ( v284 != v47 )
        operator delete(v284, *(_QWORD *)v286 + 1LL);
      if ( v281 != v283 )
        operator delete(v281, *(_QWORD *)v283 + 1LL);
      if ( v48 )
        qfree(v48);
      v45 += 24;
    }
    while ( v254 != v45 );
    v46 = v268;
    v11 = (void **)n[0];
    v45 = v268;
  }
  if ( v46 )
  {
    v60 = v269.m128i_i64[0];
    if ( v269.m128i_i64[0] )
    {
      v61 = 0;
      do
      {
        v62 = &v46[24 * v61];
        v63 = *(void **)v62;
        if ( *(_QWORD *)v62 )
        {
          *((_QWORD *)v62 + 1) = 0;
          qfree(v63);
          v45 = v268;
        }
        ++v61;
        v46 = v45;
      }
      while ( v60 != v61 );
    }
    v269.m128i_i64[0] = 0;
    qfree(v46);
  }
  if ( v267[0] )
  {
    v267[1] = nullptr;
    qfree(v267[0]);
  }
  v64 = v251[9];
  v65 = v64 + 24LL * v251[10];
  if ( v65 != v64 )
  {
    n[0] = (size_t)v11;
    v66 = v65;
    while ( 1 )
    {
      if ( !*(_QWORD *)(v64 + 8) )
      {
        v281 = v283;
        if ( !haystack )
          goto LABEL_322;
        v268 = nullptr;
        goto LABEL_90;
      }
      v67 = *(const char **)v64;
      v281 = v283;
      if ( !v67 )
        goto LABEL_322;
      v68 = (char *)strlen(v67);
      v268 = v68;
      v69 = (size_t)v68;
      if ( (unsigned __int64)v68 <= 0xF )
      {
        if ( v68 == (_BYTE *)&dword_0 + 1 )
        {
          v283[0] = *v67;
          goto LABEL_90;
        }
        if ( !v68 )
          goto LABEL_90;
        v71 = v283;
      }
      else
      {
        v253 = (size_t)v68;
        v70 = (void *)std::string::_M_create(&v281, v248, 0);
        v69 = v253;
        v281 = v70;
        v71 = (char *)v70;
        *(_QWORD *)v283 = v268;
      }
      memcpy(v71, v67, v69);
LABEL_90:
      v262 = v22;
      v72 = _mm_load_si128(&v247);
      v73 = n[0];
      v282 = v268;
      v268[(_QWORD)v281] = 0;
      *(__m128i *)v261 = v72;
      sub_6FEF60(v73, (char **)&v281);
      v22 = v262;
      v247 = _mm_load_si128((const __m128i *)v261);
      if ( v281 != v283 )
        operator delete(v281, *(_QWORD *)v283 + 1LL);
      v64 += 24;
      if ( v66 == v64 )
      {
        v11 = (void **)n[0];
        break;
      }
    }
  }
  if ( !v251[4] )
  {
    v284 = (void *)v252;
    if ( haystack )
    {
      v268 = nullptr;
      goto LABEL_104;
    }
LABEL_322:
    std::__throw_logic_error("basic_string: construction from null is not valid");
  }
  v74 = (const char *)v251[3];
  v284 = (void *)v252;
  if ( !v74 )
    goto LABEL_322;
  v75 = (char *)strlen(v74);
  v268 = v75;
  v76 = (size_t)v75;
  if ( (unsigned __int64)v75 > 0xF )
  {
    v284 = (void *)std::string::_M_create(v250, v248, 0);
    v77 = v284;
    *(_QWORD *)v286 = v268;
    goto LABEL_103;
  }
  if ( v75 == (_BYTE *)&dword_0 + 1 )
  {
    v286[0] = *v74;
  }
  else if ( v75 )
  {
    v77 = (void *)v252;
LABEL_103:
    memcpy(v77, v74, v76);
  }
LABEL_104:
  v262 = v22;
  v78 = _mm_load_si128(&v247);
  v79 = (char **)v250;
  v285 = v268;
  v268[(_QWORD)v284] = 0;
  *(__m128i *)v261 = v78;
  sub_6FEF60((__int64)v11, v79);
  v80 = (char *)v261[0];
  v81 = (char *)v261[1];
  v253 = v262;
  if ( v284 != v252 )
    operator delete(v284, *(_QWORD *)v286 + 1LL);
  v82 = v80;
  sub_6F3700((__int64)v251, (int)"=== command line:\n");
  v83 = v251;
  if ( v80 != v81 )
  {
    do
    {
      v84 = *(_QWORD *)v82;
      v82 += 32;
      sub_6F3700((__int64)v83, (int)"  %s\n", v84);
    }
    while ( v81 != v82 );
  }
  v85 = (volatile signed __int32 *)operator new(0x28u);
  v86 = v248;
  v87 = v85;
  sub_22603D0(v248);
  sub_2267E70(v87, v86);
  if ( v87 )
    _InterlockedAdd(v87 + 2, 1u);
  v88 = v268;
  if ( v268 && !_InterlockedSub((volatile signed __int32 *)v268 + 2, 1u) )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v88 + 8LL))(v88);
  v89 = operator new(0x40u);
  v247.m128i_i64[0] = v89;
  sub_2262BE0(v89, 1);
  if ( v89 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v89 + 8), 1u);
    _InterlockedAdd((volatile signed __int32 *)(v89 + 8), 1u);
  }
  v268 = (char *)v247.m128i_i64[0];
  sub_2267D50(v87, v248);
  v90 = v268;
  if ( v268 && !_InterlockedSub((volatile signed __int32 *)v268 + 2, 1u) )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v90 + 8LL))(v90);
  v260 = 0;
  v91 = 0;
  BYTE4(v267[0]) = 0;
  BYTE4(ptr) = 0;
  v92 = s;
  BYTE4(v263) = 0;
  if ( s )
    v91 = strlen(s);
  n[0] = (size_t)&v258;
  sub_2230330(&v258, v92, v91, &byte_22F0C30, 0, 1);
  if ( v251[4] )
  {
    v93 = (char *)v251[3];
    v270 = 257;
    if ( *v93 )
    {
      v268 = v93;
      LOBYTE(v270) = 3;
    }
  }
  else
  {
    v270 = 257;
  }
  sub_2264550(v247.m128i_i32[0], (_DWORD)v248, 0, n[0], v259, (_DWORD)v263, (__int64)ptr, (__int64)v267[0]);
  if ( v258 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v258 + 8LL))(v258, v246);
  n[0] = operator new(0x328u);
  if ( v87 )
    _InterlockedAdd(v87 + 2, 1u);
  v94 = (_DWORD *)n[0];
  v268 = (char *)v87;
  v95 = v250;
  v285 = nullptr;
  v284 = (void *)v252;
  v286[0] = 0;
  sub_FD68E0(n[0], v250, v248);
  if ( v94 )
    ++*v94;
  if ( v284 != v252 )
  {
    v95 = (void *)(*(_QWORD *)v286 + 1LL);
    operator delete(v284, *(_QWORD *)v286 + 1LL);
  }
  v96 = v268;
  if ( v268 && !_InterlockedSub((volatile signed __int32 *)v268 + 2, 1u) )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v96 + 8LL))(v96);
  ptr = nullptr;
  v97 = (_QWORD *)operator new(0x80u);
  v97[1] = 0x100000001LL;
  *v97 = off_2B38070;
  sub_1FE2A60(v97 + 2);
  ptr = v97 + 2;
  *(_QWORD *)&v266 = v97;
  v98 = (_QWORD *)operator new(0x88u);
  sub_1365750(v98);
  v98[14] = 0;
  *v98 = off_2BFBB68;
  v102 = v251;
  v98[15] = 0;
  v98[13] = v102;
  v98[16] = 0;
  v263 = v98;
  memset(v267, 0, 24);
  v103 = v81 - v80;
  if ( v81 == v80 )
  {
    v104 = 0;
  }
  else
  {
    if ( v103 > 0x7FFFFFFFFFFFFFE0LL )
      sub_2EBC5E(v98, v95, v99, v100, v101);
    v104 = operator new(v81 - v80);
  }
  v267[2] = (char *)(v104 + v103);
  *(__m128i *)v267 = _mm_unpacklo_epi64((__m128i)v104, (__m128i)v104);
  if ( v80 != v81 )
  {
    v250 = (void *)v87;
    v105 = v80;
    while ( 1 )
    {
      v106 = v104 + 16;
      *(_QWORD *)v104 = v104 + 16;
      v107 = *((char **)v105 + 1);
      v108 = *(_BYTE **)v105;
      v268 = v107;
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
      v104 += 32LL;
      v107[v106] = 0;
      if ( v81 == v105 )
      {
        v87 = (volatile signed __int32 *)v250;
        goto LABEL_147;
      }
    }
    v109 = std::string::_M_create(v104, v248, 0);
    *(_QWORD *)v104 = v109;
    v106 = v109;
    *(_QWORD *)(v104 + 16) = v268;
LABEL_144:
    memcpy((void *)v106, v108, (size_t)v107);
    v107 = v268;
    v106 = *(_QWORD *)v104;
    goto LABEL_141;
  }
LABEL_147:
  v110 = (char *)v256;
  v267[1] = (char *)v104;
  sub_2009210(v248, v256, &v263, n[0], &ptr);
  v111 = v267[1];
  v112 = v267[0];
  if ( v267[1] != v267[0] )
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
    v112 = v267[0];
  }
  if ( v112 )
  {
    v110 = (char *)(v267[2] - v112);
    operator delete(v112, v267[2] - v112);
  }
  v113 = v263;
  if ( v263 )
  {
    v114 = *(void (__fastcall **)(void *))(*(_QWORD *)v263 + 64LL);
    if ( (char *)v114 == (char *)sub_6FC3B0 )
    {
      *((_QWORD *)v263 + 13) = 0;
      *v113 = off_2BFBB68;
      if ( v113[14] )
      {
        v115 = v113[15];
        v250 = v113;
        sub_1455D90(v115, 0, 0);
        v113 = v250;
      }
      v116 = (volatile signed __int32 *)v113[16];
      if ( v116 )
      {
        v117 = v116 + 2;
        if ( *((_QWORD *)v116 + 1) == 0x100000001LL )
        {
          v220 = *(_QWORD *)v116;
          v250 = v113;
          *((_QWORD *)v116 + 1) = 0;
          (*(void (__fastcall **)(volatile signed __int32 *, __int64, __int64, volatile signed __int32 *))(v220 + 16))(
            v116,
            0x100000001LL,
            v220,
            v117);
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v116 + 24LL))(v116);
          v113 = v250;
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
            v250 = v113;
            sub_434350(v116);
            v113 = v250;
          }
        }
      }
      v119 = (__int64 *)v113[14];
      if ( v119 )
      {
        v120 = *v119;
        v250 = v113;
        (*(void (__fastcall **)(__int64 *))(v120 + 8))(v119);
        v113 = v250;
      }
      v250 = v113;
      *v113 = &off_2C43730;
      sub_13657A0(v113);
      v110 = (_BYTE *)off_88;
      operator delete(v250, 0x88u);
    }
    else
    {
      v114(v263);
    }
  }
  v121 = (volatile signed __int32 *)v266;
  if ( (_QWORD)v266 )
  {
    v122 = (volatile signed __int32 *)(v266 + 8);
    if ( *(_QWORD *)(v266 + 8) == 0x100000001LL )
    {
      v217 = *(_QWORD *)v266;
      v218 = v266;
      *(_QWORD *)(v266 + 8) = 0;
      (*(void (__fastcall **)(__int64, char *, volatile signed __int32 *))(v217 + 16))(v218, v110, v122);
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
        v123 = *(_DWORD *)(v266 + 8);
        *(_DWORD *)(v266 + 8) = v123 - 1;
      }
      if ( v123 == 1 )
        sub_434350(v121);
    }
  }
  v124 = v251;
  v267[1] = nullptr;
  v267[0] = (char *)&off_2BFBC00;
  v267[2] = (char *)v251;
  v271 = v256;
  if ( !(unsigned __int8)sub_2009F40(v248) )
  {
    v125 = v124[75];
    if ( !v125 )
    {
      if ( v251[76] )
      {
        v207 = (volatile signed __int32 *)v251[74];
      }
      else
      {
        v222 = v251;
        v223 = qvector_reserve(v251 + 74, 0, 1, 64);
        v224 = (volatile signed __int32 *)v222[75];
        v225 = (_QWORD *)v223;
        v226 = (void *)v222[76];
        v222[76] = 0;
        v252 = v224;
        v250 = v226;
        v227 = (char *)v222[74];
        if ( (__int64)v224 - 1 >= 0 )
        {
          v252 = v87;
          v228 = v227;
          v229 = (char *)v224 - 1;
          v230 = v225;
          v254 = v81;
          v231 = v225;
          do
          {
            v232 = *(void **)v228;
            v233 = _mm_loadu_si128((const __m128i *)(v228 + 8));
            *(_QWORD *)v228 = 0;
            *(_OWORD *)(v228 + 8) = 0;
            *v231 = v232;
            *(__m128i *)(v231 + 1) = v233;
            v234 = *((_QWORD *)v228 + 3);
            v235 = _mm_loadu_si128((const __m128i *)v228 + 2);
            *((_QWORD *)v228 + 3) = 0;
            v231[3] = v234;
            *((__m128i *)v231 + 2) = v235;
            v236 = *((_QWORD *)v228 + 6);
            *((_QWORD *)v228 + 5) = 0;
            v231[6] = v236;
            v231[7] = *((_QWORD *)v228 + 7);
            v237 = *((void **)v228 + 3);
            if ( v237 )
            {
              *((_QWORD *)v228 + 4) = 0;
              qfree(v237);
            }
            v238 = *(void **)v228;
            if ( *(_QWORD *)v228 )
            {
              *((_QWORD *)v228 + 1) = 0;
              qfree(v238);
            }
            v228 += 64;
            v231 += 8;
          }
          while ( v229-- != nullptr );
          v87 = v252;
          v225 = v230;
          v81 = v254;
          v227 = (char *)v251[74];
        }
        v252 = (volatile signed __int32 *)v225;
        qfree(v227);
        v240 = v251;
        v207 = v252;
        v241 = v250;
        v251[74] = v252;
        v240[76] = v241;
        v125 = v240[75];
      }
      v208 = &v207[16 * v125];
      v209 = v251;
      *(_QWORD *)v208 = 0;
      *((_QWORD *)v208 + 7) = 4;
      *(_OWORD *)(v208 + 2) = 0;
      *((_QWORD *)v208 + 3) = 0;
      *((_QWORD *)v208 + 6) = -1;
      *((_OWORD *)v208 + 2) = 0;
      ++v209[75];
      v210 = *((_QWORD *)v208 + 2) <= 0x1Bu;
      *((_DWORD *)v208 + 14) = 5;
      v211 = *(_QWORD *)v208;
      if ( v210 )
      {
        v250 = (void *)v208;
        v221 = qvector_reserve(v208, v211, 28, 1);
        v208 = (volatile signed __int32 *)v250;
        v211 = v221;
        *(_QWORD *)v250 = v221;
      }
      v212 = _mm_load_si128((const __m128i *)&xmmword_23A8260);
      *((_QWORD *)v208 + 1) = 28;
      *(__m128i *)v211 = v212;
      *(__m128i *)(v211 + 11) = _mm_load_si128((const __m128i *)&xmmword_23A8270);
      *(_BYTE *)(*(_QWORD *)v208 + 27LL) = 0;
    }
  }
  v267[0] = (char *)&off_2BFBC00;
  v267[2] = nullptr;
  nullsub_558(v256);
  sub_20092B0(v248);
  v126 = n[0];
  if ( n[0] )
  {
    v127 = (void *)n[0];
    LODWORD(v248) = *(_DWORD *)n[0];
    v37 = (_DWORD)v248 == 1;
    *(_DWORD *)n[0] = (_DWORD)v248 - 1;
    if ( v37 )
    {
      sub_FD6C20(v126);
      operator delete(v127, 0x328u);
    }
  }
  v128 = v247.m128i_i64[0];
  if ( v247.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)(v247.m128i_i64[0] + 8), 1u) )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v128 + 8LL))(v128);
  if ( v87 && !_InterlockedSub(v87 + 2, 1u) )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v87 + 8LL))(v87);
  for ( i = v80; v81 != i; i += 32 )
  {
    if ( *(char **)i != i + 16 )
      operator delete(*(void **)i, *((_QWORD *)i + 2) + 1LL);
  }
  if ( v80 )
    operator delete(v80, v253 - (_QWORD)v80);
  return v287 - __readfsqword(0x28u);
}
