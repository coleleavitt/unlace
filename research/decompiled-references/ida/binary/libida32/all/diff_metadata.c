__int64 __fastcall diff_metadata(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  unsigned __int64 v6; // rax
  __int64 v7; // r13
  __int64 v8; // rbp
  bool v9; // al
  __int64 v10; // rax
  const char *v11; // rsi
  void (*v12)(); // rax
  __int64 v13; // rsi
  _QWORD *v14; // rax
  void (*v15)(); // rax
  char **v16; // rbx
  void *v17; // rdi
  char *v18; // rdi
  __int64 v19; // r13
  char **p_s1; // rbx
  __int64 v21; // rbp
  unsigned __int64 v22; // rdi
  std::nothrow_t *v23; // r9
  __int64 v24; // r8
  char *v25; // r10
  size_t v26; // r8
  size_t v27; // r11
  __int64 v28; // rsi
  char *v29; // rdx
  __int64 v30; // rax
  char v31; // bp
  char v32; // bl
  void (*v33)(); // r8
  char **v34; // rax
  char **v35; // rdx
  __int64 v36; // rax
  __int64 v37; // r13
  char **v38; // r12
  unsigned __int64 v39; // r11
  _QWORD *v40; // rdi
  int v41; // r15d
  int v42; // r8d
  __int64 v43; // rbp
  __int64 v44; // rsi
  char *v45; // rdi
  __int64 v46; // rbx
  __int64 v47; // r14
  char *v48; // rax
  __int64 v49; // rdx
  char *v50; // rcx
  __int64 v51; // r14
  __m128i *v52; // r15
  __m128i *v53; // rsi
  signed __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // r13
  __m128i *v57; // r12
  __m128i *v58; // r15
  __int64 v59; // r14
  unsigned __int64 v60; // rbx
  __m128i *v61; // rax
  __m128i *v62; // rbp
  __int8 *v63; // rcx
  __int8 *v64; // rax
  __m128i v65; // xmm0
  __int64 v66; // r8
  const __m128i *v67; // rax
  __m128i *v68; // r14
  __int64 i; // rbx
  __int64 v70; // rax
  const char *v71; // rsi
  const char *v72; // rdi
  unsigned int *v73; // r12
  __int64 v74; // r13
  __int64 v75; // rbp
  void (*v76)(); // rax
  char **v77; // rbp
  char *v78; // r13
  char *v79; // rdx
  char *j; // rbx
  char *v81; // rax
  void *v82; // rdi
  __int64 v83; // rax
  char **v84; // r13
  __int64 v85; // rax
  __int64 v86; // rsi
  int v87; // r11d
  __int64 v88; // r12
  int v89; // ebp
  __int128 v90; // xmm0
  __int64 v91; // r8
  __int64 v92; // rsi
  char *v93; // rdi
  char *v94; // rbx
  __int64 v95; // r15
  char *v96; // rax
  __int64 v97; // rdx
  char *v98; // rcx
  __int64 v99; // r12
  __m128i *v100; // r9
  __m128i *v101; // rbp
  signed __int64 v102; // rax
  __int64 v103; // rdx
  __int64 k; // r15
  __int64 v105; // r14
  unsigned __int64 v106; // rbx
  __m128i *v107; // rax
  __m128i *v108; // r13
  __int8 *v109; // rsi
  const __m128i *v110; // rax
  __m128i v111; // xmm0
  __int64 v112; // rcx
  __m128i v113; // xmm0
  const __m128i *v114; // rax
  __m128i *v115; // rsi
  __int64 m; // rbp
  __int64 v117; // rax
  const char *v118; // rsi
  const char *v119; // rdi
  int v120; // eax
  __int64 v121; // r15
  __int64 v122; // r14
  bool v123; // dl
  bool v124; // cl
  bool v125; // al
  void (*v126)(); // rax
  unsigned int *v127; // rbx
  __int64 v128; // r14
  __int64 v129; // r15
  void (*v130)(); // rax
  __int64 v131; // rax
  const char *v132; // rsi
  const char *v133; // rdi
  char **v134; // rbp
  char *v135; // r14
  __int64 v136; // r13
  char *v137; // r12
  char *v138; // rbx
  void *v139; // rdi
  void *v140; // rdi
  char **v141; // r12
  __int64 v142; // r8
  __int64 v143; // rax
  __int64 v144; // rsi
  int v145; // r15d
  int v146; // r14d
  __int64 v147; // rbp
  __int64 v148; // rsi
  char *v149; // rdi
  __int64 v150; // rbx
  __int64 v151; // r13
  char *v152; // rax
  __int64 v153; // rdx
  char *v154; // rcx
  __int64 v155; // rbp
  __m128i *v156; // r13
  __m128i *v157; // r14
  signed __int64 v158; // rax
  __int64 v159; // rbx
  __int64 v160; // r15
  __m128i *v161; // rax
  __m128i *v162; // rbp
  __int8 *v163; // rsi
  __int8 *v164; // r8
  __int64 v165; // rcx
  unsigned __int64 v166; // rbx
  __int8 *v167; // rax
  __m128i v168; // xmm0
  __int64 v169; // rdx
  const __m128i *v170; // rax
  __m128i *v171; // rsi
  __int64 v172; // rbx
  unsigned int *v173; // rax
  unsigned __int64 v174; // rcx
  unsigned __int64 v175; // r8
  void (*v176)(); // r9
  char **v177; // r14
  __int64 v178; // r9
  __int64 v179; // rax
  __int64 v180; // rsi
  int v181; // r8d
  int v182; // r15d
  __int64 v183; // rbp
  int n; // ebx
  __int64 v185; // rdi
  char *v186; // rsi
  char *v187; // r12
  __int64 v188; // r13
  char *v189; // rax
  __int64 v190; // rdx
  char *v191; // rcx
  __int64 v192; // rbx
  __m128i *v193; // rbp
  __m128i *v194; // r8
  signed __int64 v195; // rax
  __int64 v196; // rcx
  __int64 v197; // r15
  __m128i *v198; // rbp
  __int64 v199; // r14
  unsigned __int64 v200; // rbx
  __m128i *v201; // rax
  __m128i *v202; // r13
  __int8 *v203; // rsi
  __int8 *v204; // rax
  __m128i v205; // xmm0
  __int64 v206; // rdx
  const __m128i *v207; // rax
  __m128i *v208; // rsi
  __int64 v209; // r14
  __int8 *v210; // r12
  __int64 v211; // r13
  __int64 v212; // r15
  __int64 v213; // rax
  const char *v214; // rsi
  const char *v215; // rdi
  __int64 v216; // rax
  const char *v217; // rsi
  const char *v218; // rdi
  __int64 v219; // rax
  const char *v220; // rsi
  const char *v221; // rdi
  __int64 v222; // rax
  const char *v223; // rsi
  const char *v224; // rdi
  __int64 v225; // rax
  const char *v226; // rsi
  const char *v227; // rdi
  void (*v228)(); // rax
  __int64 *v229; // r13
  __int64 v230; // r14
  __int64 v231; // r12
  __int64 v232; // rbp
  __int64 v233; // rbx
  void *v234; // rdi
  void *v235; // rdi
  void *v236; // rdi
  void *v237; // rdi
  void *v238; // rdi
  __int64 v239; // r9
  int v240; // r8d
  __int64 v241; // rbx
  _QWORD *v242; // rax
  __int64 v243; // rsi
  __int64 v244; // rsi
  int v245; // r15d
  __int64 v246; // r12
  int ii; // ebp
  __int64 v248; // rsi
  char *v249; // rdi
  __int64 *v250; // rbx
  __int64 v251; // r14
  char *v252; // rax
  __int64 v253; // rdx
  char *v254; // rcx
  __int64 v255; // rbp
  __m128i *v256; // r13
  __m128i *v257; // r14
  signed __int64 v258; // rax
  __int64 v259; // rbx
  __int64 v260; // r15
  __m128i *v261; // rax
  __m128i *v262; // rbp
  __int8 *v263; // rcx
  __int64 v264; // r8
  unsigned __int64 v265; // rbx
  __int8 *v266; // rax
  __m128i v267; // xmm0
  __int64 v268; // rdx
  const __m128i *v269; // rax
  __m128i *v270; // rsi
  __int64 jj; // rbx
  unsigned int *v272; // r10
  __int64 v273; // r9
  __int64 v274; // r8
  unsigned __int64 v275; // rdx
  unsigned __int64 v276; // rax
  __int64 v277; // rdi
  unsigned int v278; // esi
  _BOOL4 v279; // r15d
  char v280; // cl
  __int64 v281; // r11
  __int64 v282; // r14
  bool v283; // cl
  unsigned int v285; // ecx
  unsigned int v286; // r11d
  void (*v287)(); // rax
  const char *v288; // rsi
  const char *v289; // rsi
  const char *v290; // rdi
  char *v291; // rsi
  const char *v292; // rdi
  __int64 v293; // rax
  unsigned int v294; // ebp
  unsigned int v295; // eax
  __int64 v296; // rdx
  void (*v297)(); // rax
  __m128i *dest; // [rsp+8h] [rbp-160h]
  __int64 v300; // [rsp+10h] [rbp-158h]
  __int64 v301; // [rsp+10h] [rbp-158h]
  __int64 v302; // [rsp+10h] [rbp-158h]
  __int64 v303; // [rsp+10h] [rbp-158h]
  __int64 v304; // [rsp+18h] [rbp-150h]
  __int64 v305; // [rsp+18h] [rbp-150h]
  __m128i *v306; // [rsp+18h] [rbp-150h]
  __m128i *v307; // [rsp+18h] [rbp-150h]
  void *v308; // [rsp+18h] [rbp-150h]
  __m128i *v309; // [rsp+18h] [rbp-150h]
  void *v310; // [rsp+18h] [rbp-150h]
  __m128i *v311; // [rsp+18h] [rbp-150h]
  int v312; // [rsp+18h] [rbp-150h]
  int v313; // [rsp+18h] [rbp-150h]
  int v314; // [rsp+18h] [rbp-150h]
  void *v315; // [rsp+18h] [rbp-150h]
  int v316; // [rsp+18h] [rbp-150h]
  char *v317; // [rsp+18h] [rbp-150h]
  int v318; // [rsp+18h] [rbp-150h]
  __int64 v319; // [rsp+20h] [rbp-148h]
  __int64 v320; // [rsp+20h] [rbp-148h]
  __int64 v321; // [rsp+20h] [rbp-148h]
  size_t v322; // [rsp+20h] [rbp-148h]
  std::nothrow_t *v323; // [rsp+28h] [rbp-140h]
  std::nothrow_t *v324; // [rsp+28h] [rbp-140h]
  std::nothrow_t *v325; // [rsp+28h] [rbp-140h]
  int v326; // [rsp+28h] [rbp-140h]
  std::nothrow_t *v327; // [rsp+28h] [rbp-140h]
  __int64 v328; // [rsp+30h] [rbp-138h]
  int v329; // [rsp+30h] [rbp-138h]
  __int64 v330; // [rsp+30h] [rbp-138h]
  char *v331; // [rsp+30h] [rbp-138h]
  size_t v332; // [rsp+38h] [rbp-130h]
  void *v333[4]; // [rsp+40h] [rbp-128h] BYREF
  void *ptr[4]; // [rsp+60h] [rbp-108h] BYREF
  void *src; // [rsp+80h] [rbp-E8h] BYREF
  __int128 v336; // [rsp+88h] [rbp-E0h]
  __int16 v337; // [rsp+9Eh] [rbp-CAh]
  _QWORD v338[2]; // [rsp+A0h] [rbp-C8h]
  char *s1; // [rsp+B0h] [rbp-B8h] BYREF
  char *v340[6]; // [rsp+B8h] [rbp-B0h] BYREF
  __m256i v341; // [rsp+E8h] [rbp-80h] BYREF
  char *v342; // [rsp+108h] [rbp-60h]
  __int128 v343; // [rsp+110h] [rbp-58h]
  char v344; // [rsp+120h] [rbp-48h] BYREF
  unsigned __int64 v345; // [rsp+128h] [rbp-40h]

  v345 = __readfsqword(0x28u);
  if ( (a4 & 1) != 0 )
  {
    v294 = score_metadata(a2);
    v295 = score_metadata(a3);
    v296 = v295;
    if ( v294 != v295 )
    {
      v297 = *(void (**)())(*(_QWORD *)a1 + 16LL);
      if ( v297 != nullsub_246 )
        ((void (__fastcall *)(__int64, _QWORD, __int64))v297)(a1, v294, v296);
    }
  }
  v6 = *(_QWORD *)(a3 + 8);
  if ( *(_QWORD *)(a2 + 8) <= 1u )
  {
    if ( v6 <= 1 )
      goto LABEL_17;
    v8 = a3;
    if ( !a3 )
      goto LABEL_17;
    goto LABEL_417;
  }
  v7 = a2;
  if ( v6 > 1 )
  {
    v8 = a3;
    if ( !a3 || a2 )
    {
      v9 = a3 == 0;
      if ( a3 != 0 || a2 == 0 )
        goto LABEL_7;
LABEL_14:
      v8 = 0;
      goto LABEL_15;
    }
LABEL_417:
    v7 = 0;
    goto LABEL_15;
  }
  v9 = 1;
  v8 = 0;
  if ( a2 )
    goto LABEL_14;
LABEL_7:
  if ( v9 && !a2 )
    goto LABEL_17;
  v10 = *(_QWORD *)(a2 + 8);
  if ( *(_QWORD *)(v8 + 8) )
  {
    v11 = *(const char **)v8;
    if ( !v10 )
    {
      if ( !strcmp(haystack, v11) )
        goto LABEL_17;
      goto LABEL_15;
    }
  }
  else
  {
    v11 = haystack;
    if ( !v10 )
      goto LABEL_17;
  }
  if ( !strcmp(*(const char **)a2, v11) )
    goto LABEL_17;
LABEL_15:
  v12 = *(void (**)())(*(_QWORD *)a1 + 24LL);
  if ( v12 != nullsub_247 )
    ((void (__fastcall *)(__int64, __int64, __int64))v12)(a1, v7, v8);
LABEL_17:
  sub_7D76E0((__int64 *)v333, a2 + 32);
  sub_7D76E0((__int64 *)ptr, a3 + 32);
  LOBYTE(s1) = 0;
  memset(v340, 0, sizeof(v340));
  v341.m256i_i8[0] = 0;
  memset(&v341.m256i_u64[1], 0, 24);
  v342 = nullptr;
  v343 = 0;
  v13 = *((_QWORD *)v333[0] + 2);
  v338[0] = v333;
  v338[1] = ptr;
  if ( v13 && *((_QWORD *)v333[0] + 3) )
  {
    extract_type_from_metadata();
    v14 = ptr[0];
    if ( !*((_QWORD *)ptr[0] + 2) )
      goto LABEL_22;
  }
  else
  {
    v14 = ptr[0];
    if ( !*((_QWORD *)ptr[0] + 2) )
      goto LABEL_406;
  }
  if ( v14[3] )
    extract_type_from_metadata();
LABEL_22:
  if ( (_BYTE)s1 != v341.m256i_i8[0] )
    goto LABEL_23;
LABEL_406:
  if ( v341.m256i_i64[2] )
  {
    v289 = (const char *)v341.m256i_i64[1];
    v290 = byte_2389C44;
    if ( !v340[1] )
      goto LABEL_409;
  }
  else
  {
    v289 = byte_2389C44;
    if ( !v340[1] )
      goto LABEL_410;
  }
  v290 = v340[0];
LABEL_409:
  if ( strcmp(v290, v289) )
    goto LABEL_23;
LABEL_410:
  if ( (_QWORD)v343 )
  {
    v291 = v342;
    v292 = byte_2389C44;
    if ( !v340[4] )
      goto LABEL_413;
  }
  else
  {
    v291 = (char *)byte_2389C44;
    if ( !v340[4] )
      goto LABEL_25;
  }
  v292 = v340[3];
LABEL_413:
  if ( strcmp(v292, v291) )
  {
LABEL_23:
    v15 = *(void (**)())(*(_QWORD *)a1 + 32LL);
    if ( v15 != nullsub_248 )
      ((void (__fastcall *)(__int64, char **, __m256i *))v15)(a1, &s1, &v341);
  }
LABEL_25:
  v16 = (char **)&v344;
  do
  {
    v17 = *(v16 - 3);
    v16 -= 7;
    if ( v17 )
    {
      v16[5] = nullptr;
      qfree(v17);
    }
    v18 = v16[1];
    if ( v18 )
    {
      v16[2] = nullptr;
      qfree(v18);
    }
  }
  while ( v16 != &s1 );
  v19 = 0;
  do
  {
    p_s1 = &s1;
    v337 = 0;
    v21 = 0;
    s1 = nullptr;
    memset(v340, 0, 40);
    do
    {
      v22 = (-v19 & 0xFFFFFFFFFFFFFFF0LL) + 64 + *(_QWORD *)v338[v21];
      v23 = *(std::nothrow_t **)v22;
      if ( *(_QWORD *)v22 )
      {
        v24 = *(_QWORD *)(v22 + 8);
        if ( v24 )
        {
          v25 = p_s1[1];
          v26 = v24 - (_QWORD)v23;
          v27 = v26;
          if ( v25 )
          {
            --v25;
            v27 = (size_t)&v25[v26];
          }
          v28 = (__int64)*p_s1;
          v29 = (char *)(v27 + 1);
          if ( (unsigned __int64)p_s1[2] < v27 + 1 )
          {
            v332 = v27;
            v331 = v25;
            v327 = *(std::nothrow_t **)v22;
            v322 = v26;
            v317 = (char *)(v27 + 1);
            v293 = qvector_reserve(p_s1, v28, v29, 1);
            v27 = v332;
            v25 = v331;
            *p_s1 = (char *)v293;
            v28 = v293;
            v23 = v327;
            v26 = v322;
            v29 = v317;
          }
          p_s1[1] = v29;
          *(_BYTE *)(v28 + v27) = 0;
          memmove(&(*p_s1)[(_QWORD)v25], v23, v26);
          *((_BYTE *)&v337 + v21) = 1;
        }
      }
      v30 = v21 + 1;
      p_s1 += 3;
      v21 = 1;
    }
    while ( v30 != 2 );
    v31 = v337;
    v32 = HIBYTE(v337);
    if ( (_BYTE)v337 == HIBYTE(v337) )
    {
      if ( !v340[3] )
      {
        v288 = haystack;
        if ( !v340[0] )
          goto LABEL_48;
LABEL_403:
        if ( !strcmp(s1, v288) )
          goto LABEL_48;
        goto LABEL_42;
      }
      v288 = v340[2];
      if ( v340[0] )
        goto LABEL_403;
      if ( !strcmp(haystack, v340[2]) )
        goto LABEL_48;
    }
LABEL_42:
    v33 = *(void (**)())(*(_QWORD *)a1 + 40LL);
    v34 = nullptr;
    v35 = nullptr;
    if ( v32 )
      v35 = &v340[2];
    if ( v31 )
      v34 = &s1;
    if ( v33 != nullsub_249 )
      ((void (__fastcall *)(__int64, char **, char **, _QWORD))v33)(a1, v34, v35, (unsigned int)v19 ^ 1);
LABEL_48:
    if ( v340[2] )
    {
      v340[3] = nullptr;
      qfree(v340[2]);
    }
    if ( s1 )
    {
      v340[0] = nullptr;
      qfree(s1);
    }
    v36 = v19 + 1;
    v19 = 1;
  }
  while ( v36 != 2 );
  v304 = 0;
  while ( 2 )
  {
    s1 = nullptr;
    v37 = 0;
    v38 = &s1;
    memset(v340, 0, 40);
    src = nullptr;
    v39 = (-v304 & 0xFFFFFFFFFFFFFFF0LL) + 96;
    v336 = 0;
    while ( 1 )
    {
      v40 = (_QWORD *)(v39 + *(_QWORD *)v338[v37]);
      if ( !*v40 || !v40[1] )
        goto LABEL_69;
      v323 = (std::nothrow_t *)v39;
      extract_insn_cmts_from_metadata(v38, *v40);
      v39 = (unsigned __int64)v323;
      if ( !v37 )
      {
        if ( (char *)*((_QWORD *)&v336 + 1) < v340[0] )
        {
          src = (void *)qvector_reserve(&src, src, v340[0], 24);
          v39 = (unsigned __int64)v323;
        }
        v41 = (unsigned int)v38[1];
        if ( v41 <= 0 )
          goto LABEL_70;
        goto LABEL_61;
      }
      v41 = (unsigned int)v38[1];
      if ( v41 <= 0 )
        break;
LABEL_61:
      v42 = v37;
      v43 = 0;
      do
      {
        v44 = v336;
        v45 = (char *)src;
        v46 = (__int64)&(*v38)[32 * v43];
        v47 = *(_QWORD *)v46;
        if ( !(_QWORD)v336 )
          goto LABEL_127;
        v48 = (char *)src;
        v49 = 0;
        while ( 1 )
        {
          v50 = v48;
          if ( *(_DWORD *)v46 == *(_DWORD *)v48 && *(_DWORD *)(v46 + 4) == *((_DWORD *)v48 + 1) )
            break;
          ++v49;
          v48 += 24;
          if ( (_QWORD)v336 == v49 )
            goto LABEL_127;
        }
        if ( !v48 )
        {
LABEL_127:
          if ( *((_QWORD *)&v336 + 1) < (unsigned __int64)(v336 + 1) )
          {
            v329 = v42;
            v325 = (std::nothrow_t *)v39;
            src = (void *)qvector_reserve(&src, src, v336 + 1, 24);
            v44 = v336;
            v45 = (char *)src;
            v42 = v329;
            v39 = (unsigned __int64)v325;
          }
          v50 = &v45[24 * v44];
          *(_OWORD *)(v50 + 8) = 0;
          *(_QWORD *)v50 = -1;
          *(_QWORD *)&v336 = v336 + 1;
          *(_QWORD *)v50 = v47;
        }
        ++v43;
        *(_QWORD *)&v50[8 * v42 + 8] = v46 + 8;
      }
      while ( v41 > (int)v43 );
LABEL_69:
      if ( v37 == 1 )
        break;
LABEL_70:
      v38 += 3;
      v37 = 1;
    }
    v51 = v336;
    v52 = (__m128i *)src;
    v53 = (__m128i *)((char *)src + 24 * v336);
    if ( src != v53 )
    {
      v54 = 0xAAAAAAAAAAAAAAABLL * ((24 * (__int64)v336) >> 3) + 1;
      v55 = v54 / 2;
      if ( v54 <= 1 )
      {
        v68 = (__m128i *)src;
        v60 = 0;
        v62 = nullptr;
        if ( v55 )
        {
LABEL_433:
          v60 = 0;
          v62 = nullptr;
          sub_7D2540(v52->m128i_i8, v53->m128i_i8);
        }
        else
        {
LABEL_81:
          sub_7D3DB0(v52, v68, v53, v62);
        }
      }
      else
      {
        v56 = v54 / 2;
        v57 = (__m128i *)src;
        v58 = (__m128i *)((char *)src + 24 * v336);
        while ( 1 )
        {
          v328 = v55;
          v59 = 3 * v56;
          v60 = 24 * v56;
          v61 = (__m128i *)operator new(24 * v56, (const std::nothrow_t *)&std::nothrow);
          v55 = v328;
          v62 = v61;
          if ( v61 )
            break;
          if ( v56 == 1 )
          {
            v53 = v58;
            v52 = v57;
            goto LABEL_433;
          }
          v56 = (v56 + 1) >> 1;
        }
        v63 = &v61->m128i_i8[v59 * 8];
        v53 = v58;
        v52 = v57;
        *v61 = _mm_loadu_si128(v57);
        v61[1].m128i_i64[0] = v57[1].m128i_i64[0];
        v64 = &v61[1].m128i_i8[8];
        if ( v59 == 3 )
        {
          v67 = v62;
        }
        else
        {
          do
          {
            v65 = _mm_loadu_si128((const __m128i *)(v64 - 24));
            v66 = *((_QWORD *)v64 - 1);
            v64 += 24;
            *(__m128i *)(v64 - 24) = v65;
            *((_QWORD *)v64 - 1) = v66;
          }
          while ( v63 != v64 );
          v67 = (__m128i *)((char *)v62 + 8 * v59 - 24);
        }
        *v57 = _mm_loadu_si128(v67);
        v57[1].m128i_i64[0] = v67[1].m128i_i64[0];
        if ( v56 == v328 )
        {
          v68 = (__m128i *)((char *)v57 + v59 * 8);
          goto LABEL_81;
        }
        sub_7D51E0(v57, v53, v62, v56);
      }
      operator delete(v62, v60);
      v51 = v336;
      v52 = (__m128i *)src;
    }
    if ( v51 )
    {
      for ( i = 0; i != v51; ++i )
      {
        while ( 1 )
        {
          v73 = (unsigned int *)v52 + 6 * i;
          v74 = *((_QWORD *)v73 + 1);
          v75 = *((_QWORD *)v73 + 2);
          if ( !v75 )
            break;
          if ( !v74 )
            goto LABEL_94;
LABEL_86:
          if ( !(v75 | v74) )
            goto LABEL_91;
          v70 = *(_QWORD *)(v74 + 8);
          if ( *(_QWORD *)(v75 + 8) )
          {
            v71 = *(const char **)v75;
            v72 = haystack;
            if ( !v70 )
              goto LABEL_90;
          }
          else
          {
            v71 = haystack;
            if ( !v70 )
              goto LABEL_91;
          }
          v72 = *(const char **)v74;
LABEL_90:
          if ( strcmp(v72, v71) )
            goto LABEL_94;
LABEL_91:
          if ( ++i == v51 )
            goto LABEL_96;
        }
        if ( !v74 )
          goto LABEL_86;
LABEL_94:
        v76 = *(void (**)())(*(_QWORD *)a1 + 48LL);
        if ( v76 == nullsub_250 )
          goto LABEL_91;
        ((void (__fastcall *)(__int64, _QWORD, _QWORD, __int64, __int64, _QWORD))v76)(
          a1,
          *v73,
          v73[1],
          v74,
          v75,
          (unsigned int)v304 ^ 1);
        v52 = (__m128i *)src;
      }
    }
LABEL_96:
    if ( v52 )
    {
      *(_QWORD *)&v336 = 0;
      qfree(v52);
    }
    v77 = &v340[5];
    do
    {
      v77 -= 3;
      if ( *v77 )
      {
        v78 = v77[1];
        if ( v78 )
        {
          v79 = *v77;
          for ( j = nullptr; j != v78; ++j )
          {
            v81 = &v79[32 * (_QWORD)j];
            v82 = *((void **)v81 + 1);
            if ( v82 )
            {
              *((_QWORD *)v81 + 2) = 0;
              qfree(v82);
              v79 = *v77;
            }
          }
        }
        else
        {
          v79 = *v77;
        }
        v77[1] = nullptr;
        qfree(v79);
      }
    }
    while ( v77 != &s1 );
    v83 = v304;
    v304 = 1;
    if ( v83 != 1 )
      continue;
    break;
  }
  s1 = nullptr;
  v84 = &s1;
  src = nullptr;
  v305 = 0;
  memset(v340, 0, 40);
  v336 = 0;
  while ( 2 )
  {
    v85 = *(_QWORD *)v338[v305];
    v86 = *(_QWORD *)(v85 + 112);
    if ( !v86 || !*(_QWORD *)(v85 + 120) )
    {
LABEL_123:
      if ( v305 == 1 )
        goto LABEL_134;
      goto LABEL_124;
    }
    extract_extra_cmts_from_metadata(v84, v86);
    if ( !v305 )
    {
      if ( (char *)*((_QWORD *)&v336 + 1) < v340[0] )
        src = (void *)qvector_reserve(&src, src, v340[0], 40);
      v87 = (unsigned int)v84[1];
      if ( v87 > 0 )
        goto LABEL_115;
LABEL_124:
      v305 = 1;
      v84 += 3;
      continue;
    }
    break;
  }
  v87 = (unsigned int)v84[1];
  if ( v87 > 0 )
  {
LABEL_115:
    v88 = 0;
    v89 = 0;
    v90 = 0;
    v91 = v305 + 2;
    do
    {
      v92 = v336;
      v93 = (char *)src;
      v94 = &(*v84)[v88];
      v95 = *(_QWORD *)v94;
      if ( !(_QWORD)v336 )
        goto LABEL_130;
      v96 = (char *)src;
      v97 = 0;
      while ( 1 )
      {
        v98 = v96;
        if ( *(_DWORD *)v94 == *(_DWORD *)v96 && *((_DWORD *)v94 + 1) == *((_DWORD *)v96 + 1) )
          break;
        ++v97;
        v96 += 40;
        if ( (_QWORD)v336 == v97 )
          goto LABEL_130;
      }
      if ( !v96 )
      {
LABEL_130:
        if ( *((_QWORD *)&v336 + 1) < (unsigned __int64)(v336 + 1) )
        {
          v330 = v91;
          v326 = v87;
          src = (void *)qvector_reserve(&src, src, v336 + 1, 40);
          v93 = (char *)src;
          v92 = v336;
          v90 = 0;
          v91 = v330;
          v87 = v326;
        }
        v98 = &v93[40 * v92];
        *(_QWORD *)v98 = -1;
        *(_OWORD *)(v98 + 8) = v90;
        *(_OWORD *)(v98 + 24) = v90;
        *(_QWORD *)&v336 = v336 + 1;
        *(_QWORD *)v98 = v95;
      }
      ++v89;
      v88 += 56;
      *(_QWORD *)&v98[8 * v305 + 8] = v94 + 8;
      *(_QWORD *)&v98[8 * v91 + 8] = v94 + 32;
    }
    while ( v89 < v87 );
    goto LABEL_123;
  }
LABEL_134:
  v99 = v336;
  v100 = (__m128i *)src;
  v101 = (__m128i *)((char *)src + 40 * v336);
  if ( src != v101 )
  {
    v102 = 0xCCCCCCCCCCCCCCCDLL * ((40 * (__int64)v336) >> 3) + 1;
    v103 = v102 / 2;
    if ( v102 <= 1 )
    {
      v115 = (__m128i *)src;
      v106 = 0;
      v108 = nullptr;
      if ( v103 )
      {
LABEL_454:
        v106 = 0;
        v108 = nullptr;
        sub_7D27A0(v100->m128i_i8, v101->m128i_i8);
      }
      else
      {
LABEL_143:
        sub_7D49D0(v100, v115, v101, v108);
      }
    }
    else
    {
      for ( k = v102 / 2; ; k = (k + 1) >> 1 )
      {
        v324 = (std::nothrow_t *)v103;
        v105 = 5 * k;
        v306 = v100;
        v106 = 40 * k;
        v107 = (__m128i *)operator new(40 * k, (const std::nothrow_t *)&std::nothrow);
        v100 = v306;
        v103 = (__int64)v324;
        v108 = v107;
        if ( v107 )
          break;
        if ( k == 1 )
          goto LABEL_454;
      }
      v109 = &v107->m128i_i8[v105 * 8];
      *v107 = _mm_loadu_si128(v306);
      v107[1] = _mm_loadu_si128(v306 + 1);
      v107[2].m128i_i64[0] = v306[2].m128i_i64[0];
      v110 = (__m128i *)((char *)v107 + 40);
      if ( v105 == 5 )
      {
        v114 = v108;
      }
      else
      {
        do
        {
          v111 = _mm_loadu_si128((const __m128i *)((char *)v110 - 40));
          v112 = v110[-1].m128i_i64[1];
          v110 = (const __m128i *)((char *)v110 + 40);
          *(__m128i *)((char *)v110 - 40) = v111;
          v113 = _mm_loadu_si128(v110 - 4);
          v110[-1].m128i_i64[1] = v112;
          *(__m128i *)((char *)v110 - 24) = v113;
        }
        while ( v110 != (const __m128i *)v109 );
        v114 = (__m128i *)((char *)v108 + 8 * v105 - 40);
      }
      *v306 = _mm_loadu_si128(v114);
      v306[1] = _mm_loadu_si128(v114 + 1);
      v306[2].m128i_i64[0] = v114[2].m128i_i64[0];
      if ( (std::nothrow_t *)k == v324 )
      {
        v115 = (__m128i *)((char *)v306 + v105 * 8);
        goto LABEL_143;
      }
      sub_7D68E0(v306, v101, v108, k);
    }
    operator delete(v108, v106);
    v99 = v336;
    v100 = (__m128i *)src;
  }
  if ( v99 )
  {
    for ( m = 0; m != v99; ++m )
    {
      v127 = (unsigned int *)v100 + 10 * m;
      v128 = *((_QWORD *)v127 + 1);
      v129 = *((_QWORD *)v127 + 2);
      if ( v129 )
      {
        if ( !v128 )
          goto LABEL_163;
      }
      else if ( v128 )
      {
        goto LABEL_163;
      }
      if ( !(v129 | v128) )
        goto LABEL_153;
      v117 = *(_QWORD *)(v128 + 8);
      if ( *(_QWORD *)(v129 + 8) )
      {
        v118 = *(const char **)v129;
        v119 = haystack;
        if ( !v117 )
          goto LABEL_152;
      }
      else
      {
        v118 = haystack;
        if ( !v117 )
          goto LABEL_153;
      }
      v119 = *(const char **)v128;
LABEL_152:
      v307 = v100;
      v120 = strcmp(v119, v118);
      v100 = v307;
      if ( !v120 )
        goto LABEL_153;
LABEL_163:
      v130 = *(void (**)())(*(_QWORD *)a1 + 56LL);
      if ( v130 != nullsub_251 )
      {
        ((void (__fastcall *)(__int64, _QWORD, _QWORD, __int64, __int64, __int64))v130)(
          a1,
          *v127,
          v127[1],
          v128,
          v129,
          1);
LABEL_153:
        v121 = *((_QWORD *)v127 + 3);
        v122 = *((_QWORD *)v127 + 4);
        v123 = v121 != 0;
        v124 = v121 == 0;
        if ( v122 && !v121 )
        {
          v121 = 0;
          goto LABEL_158;
        }
LABEL_155:
        v125 = v122 == 0;
        if ( !v123 )
          goto LABEL_167;
        goto LABEL_156;
      }
      v121 = *((_QWORD *)v127 + 3);
      v122 = *((_QWORD *)v127 + 4);
      v123 = v121 != 0;
      v124 = v121 == 0;
      if ( !v122 )
        goto LABEL_155;
      if ( !v121 )
        continue;
      v125 = v122 == 0;
LABEL_156:
      if ( !v125 )
      {
LABEL_167:
        if ( v124 && v125 )
          goto LABEL_159;
        v131 = *(_QWORD *)(v121 + 8);
        if ( *(_QWORD *)(v122 + 8) )
        {
          v132 = *(const char **)v122;
          v133 = haystack;
          if ( v131 )
            goto LABEL_171;
        }
        else
        {
          v132 = haystack;
          if ( !v131 )
            goto LABEL_159;
LABEL_171:
          v133 = *(const char **)v121;
        }
        if ( !strcmp(v133, v132) )
          goto LABEL_159;
        v126 = *(void (**)())(*(_QWORD *)a1 + 56LL);
        if ( v126 == nullsub_251 )
          goto LABEL_159;
LABEL_174:
        ((void (__fastcall *)(__int64, _QWORD, _QWORD, __int64, __int64, _QWORD))v126)(
          a1,
          *v127,
          v127[1],
          v121,
          v122,
          0);
        goto LABEL_159;
      }
      v122 = 0;
LABEL_158:
      v126 = *(void (**)())(*(_QWORD *)a1 + 56LL);
      if ( v126 != nullsub_251 )
        goto LABEL_174;
LABEL_159:
      v100 = (__m128i *)src;
    }
  }
  if ( v100 )
  {
    *(_QWORD *)&v336 = 0;
    qfree(v100);
  }
  v134 = &v340[5];
  do
  {
    v134 -= 3;
    if ( *v134 )
    {
      v135 = v134[1];
      v136 = 0;
      v137 = nullptr;
      if ( v135 )
      {
        do
        {
          v138 = &(*v134)[v136];
          v139 = *((void **)v138 + 4);
          if ( v139 )
          {
            *((_QWORD *)v138 + 5) = 0;
            qfree(v139);
          }
          v140 = *((void **)v138 + 1);
          if ( v140 )
          {
            *((_QWORD *)v138 + 2) = 0;
            qfree(v140);
          }
          ++v137;
          v136 += 56;
        }
        while ( v135 != v137 );
      }
      v134[1] = nullptr;
      qfree(*v134);
    }
  }
  while ( v134 != &s1 );
  v141 = &s1;
  v142 = 0;
  s1 = nullptr;
  src = nullptr;
  memset(v340, 0, 40);
  v336 = 0;
  while ( 2 )
  {
    v143 = *(_QWORD *)v338[v142];
    v144 = *(_QWORD *)(v143 + 128);
    if ( !v144 || !*(_QWORD *)(v143 + 136) )
      goto LABEL_206;
    v308 = (void *)v142;
    extract_user_stkpnts_from_metadata(v141, v144);
    v142 = (__int64)v308;
    if ( !v308 )
    {
      if ( (char *)*((_QWORD *)&v336 + 1) < v340[0] )
      {
        src = (void *)qvector_reserve(&src, src, v340[0], 24);
        v142 = 0;
      }
      v145 = (unsigned int)v141[1];
      if ( v145 > 0 )
        goto LABEL_198;
LABEL_207:
      v141 += 3;
      v142 = 1;
      continue;
    }
    break;
  }
  v145 = (unsigned int)v141[1];
  if ( v145 > 0 )
  {
LABEL_198:
    v146 = v142;
    v147 = 0;
    do
    {
      v148 = v336;
      v149 = (char *)src;
      v150 = (__int64)&(*v141)[16 * v147];
      v151 = *(_QWORD *)v150;
      if ( !(_QWORD)v336 )
        goto LABEL_208;
      v152 = (char *)src;
      v153 = 0;
      while ( 1 )
      {
        v154 = v152;
        if ( *(_DWORD *)v150 == *(_DWORD *)v152 && *(_DWORD *)(v150 + 4) == *((_DWORD *)v152 + 1) )
          break;
        ++v153;
        v152 += 24;
        if ( (_QWORD)v336 == v153 )
          goto LABEL_208;
      }
      if ( !v152 )
      {
LABEL_208:
        if ( *((_QWORD *)&v336 + 1) < (unsigned __int64)(v336 + 1) )
        {
          v315 = (void *)v142;
          src = (void *)qvector_reserve(&src, src, v336 + 1, 24);
          v148 = v336;
          v149 = (char *)src;
          v142 = (__int64)v315;
        }
        v154 = &v149[24 * v148];
        *(_QWORD *)v154 = -1;
        *(_OWORD *)(v154 + 8) = 0;
        *(_QWORD *)&v336 = v336 + 1;
        *(_QWORD *)v154 = v151;
      }
      ++v147;
      *(_QWORD *)&v154[8 * v146 + 8] = v150 + 8;
    }
    while ( v145 > (int)v147 );
LABEL_206:
    if ( v142 == 1 )
      goto LABEL_212;
    goto LABEL_207;
  }
LABEL_212:
  v155 = v336;
  v156 = (__m128i *)src;
  v157 = (__m128i *)((char *)src + 24 * v336);
  if ( src != v157 )
  {
    v158 = 0xAAAAAAAAAAAAAAABLL * ((24 * (__int64)v336) >> 3) + 1;
    if ( v158 <= 1 )
    {
      v171 = (__m128i *)src;
      v166 = 0;
      v162 = nullptr;
      if ( v158 / 2 )
      {
LABEL_450:
        v166 = 0;
        v162 = nullptr;
        sub_7D2340(v156->m128i_i8, v157->m128i_i8);
      }
      else
      {
LABEL_221:
        sub_7D46B0(v156, v171, v157, v162);
      }
    }
    else
    {
      v309 = (__m128i *)src;
      v159 = v158 / 2;
      v319 = v158 / 2;
      while ( 1 )
      {
        v160 = 24 * v159;
        v161 = (__m128i *)operator new(24 * v159, (const std::nothrow_t *)&std::nothrow);
        v162 = v161;
        if ( v161 )
          break;
        if ( v159 == 1 )
        {
          v156 = v309;
          goto LABEL_450;
        }
        v159 = (v159 + 1) >> 1;
      }
      v156 = v309;
      v163 = &v161->m128i_i8[v160];
      v164 = &v161[1].m128i_i8[8];
      v165 = v159;
      v166 = 24 * v159;
      *v161 = _mm_loadu_si128(v309);
      v161[1].m128i_i64[0] = v309[1].m128i_i64[0];
      v167 = &v161[1].m128i_i8[8];
      if ( v160 == 24 )
      {
        v170 = v162;
      }
      else
      {
        do
        {
          v168 = _mm_loadu_si128((const __m128i *)(v167 - 24));
          v169 = *((_QWORD *)v167 - 1);
          v167 += 24;
          *(__m128i *)(v167 - 24) = v168;
          *((_QWORD *)v167 - 1) = v169;
        }
        while ( v163 != v167 );
        v170 = (const __m128i *)&v164[v160 - 48];
      }
      *v309 = _mm_loadu_si128(v170);
      v309[1].m128i_i64[0] = v170[1].m128i_i64[0];
      if ( v165 == v319 )
      {
        v171 = (__m128i *)((char *)v309 + v160);
        goto LABEL_221;
      }
      sub_7D5790(v309, v157, v162, v165);
    }
    operator delete(v162, v166);
    v155 = v336;
    v156 = (__m128i *)src;
  }
  if ( v155 )
  {
    v172 = 0;
    while ( 1 )
    {
      v173 = (unsigned int *)v156 + 6 * v172;
      v174 = *((_QWORD *)v173 + 1);
      v175 = *((_QWORD *)v173 + 2);
      if ( v175 )
      {
        if ( v174 )
          goto LABEL_226;
      }
      else if ( !v174 )
      {
LABEL_226:
        if ( !(v175 | v174) || *(_DWORD *)v174 == *(_DWORD *)v175 )
          goto LABEL_228;
      }
      v176 = *(void (**)())(*(_QWORD *)a1 + 64LL);
      if ( v176 == nullsub_252 )
      {
LABEL_228:
        if ( ++v172 == v155 )
          break;
      }
      else
      {
        ((void (__fastcall *)(__int64, _QWORD, _QWORD))v176)(a1, *v173, v173[1]);
        ++v172;
        v156 = (__m128i *)src;
        if ( v172 == v155 )
          break;
      }
    }
  }
  if ( v156 )
  {
    *(_QWORD *)&v336 = 0;
    qfree(v156);
  }
  if ( v340[2] )
  {
    v340[3] = nullptr;
    qfree(v340[2]);
  }
  if ( s1 )
  {
    v340[0] = nullptr;
    qfree(s1);
  }
  memset(v340, 0, 32);
  v177 = &s1;
  s1 = (char *)0xFFFFFFFF00000000LL;
  v178 = 0;
  v340[4] = (char *)0xFFFFFFFF00000000LL;
  v340[5] = nullptr;
  memset(&v341, 0, 24);
  src = nullptr;
  v336 = 0;
  while ( 2 )
  {
    v179 = *(_QWORD *)v338[v178];
    v180 = *(_QWORD *)(v179 + 144);
    if ( !v180 || !*(_QWORD *)(v179 + 152) )
      goto LABEL_254;
    v310 = (void *)v178;
    extract_frame_desc_from_metadata(v177, v180);
    v178 = (__int64)v310;
    if ( !v310 )
    {
      if ( (char *)*((_QWORD *)&v336 + 1) < v340[2] )
      {
        src = (void *)qvector_reserve(&src, src, v340[2], 24);
        v178 = 0;
      }
      v181 = (unsigned int)v177[3];
      if ( v181 > 0 )
        goto LABEL_246;
LABEL_255:
      v177 += 5;
      v178 = 1;
      continue;
    }
    break;
  }
  v181 = (unsigned int)v177[3];
  if ( v181 > 0 )
  {
LABEL_246:
    v182 = v178;
    v183 = 0;
    for ( n = 0; n < v181; ++n )
    {
      v185 = v336;
      v186 = (char *)src;
      v187 = &v177[2][v183];
      v188 = *((_QWORD *)v187 + 15);
      if ( !(_QWORD)v336 )
        goto LABEL_256;
      v189 = (char *)src;
      v190 = 0;
      while ( 1 )
      {
        v191 = v189;
        if ( !*(_DWORD *)v189 && (unsigned int)*((_QWORD *)v187 + 15) == *((_DWORD *)v189 + 1) )
          break;
        ++v190;
        v189 += 24;
        if ( (_QWORD)v336 == v190 )
          goto LABEL_256;
      }
      if ( !v189 )
      {
LABEL_256:
        if ( *((_QWORD *)&v336 + 1) < (unsigned __int64)(v336 + 1) )
        {
          v321 = v178;
          v316 = v181;
          src = (void *)qvector_reserve(&src, src, v336 + 1, 24);
          v185 = v336;
          v186 = (char *)src;
          v178 = v321;
          v181 = v316;
        }
        v191 = &v186[24 * v185];
        *(_QWORD *)v191 = -1;
        *(_OWORD *)(v191 + 8) = 0;
        *(_QWORD *)&v336 = v336 + 1;
        *(_DWORD *)v191 = 0;
        *((_DWORD *)v191 + 1) = v188;
      }
      v183 += 280;
      *(_QWORD *)&v191[8 * v182 + 8] = v187;
    }
LABEL_254:
    if ( v178 == 1 )
      goto LABEL_260;
    goto LABEL_255;
  }
LABEL_260:
  v192 = v336;
  v193 = (__m128i *)src;
  v194 = (__m128i *)((char *)src + 24 * v336);
  if ( src != v194 )
  {
    v195 = 0xAAAAAAAAAAAAAAABLL * ((24 * (__int64)v336) >> 3) + 1;
    v196 = v195 / 2;
    if ( v195 <= 1 )
    {
      v208 = (__m128i *)src;
      v200 = 0;
      v202 = nullptr;
      if ( v196 )
      {
LABEL_452:
        v200 = 0;
        v202 = nullptr;
        sub_7D2140(v193->m128i_i8, v194->m128i_i8);
      }
      else
      {
LABEL_269:
        sub_7D43B0(v193, v208, v194, v202);
      }
    }
    else
    {
      v311 = (__m128i *)src;
      v197 = v195 / 2;
      v198 = (__m128i *)((char *)src + 24 * v336);
      while ( 1 )
      {
        v320 = v196;
        v199 = 3 * v197;
        v200 = 24 * v197;
        v201 = (__m128i *)operator new(24 * v197, (const std::nothrow_t *)&std::nothrow);
        v196 = v320;
        v202 = v201;
        if ( v201 )
          break;
        if ( v197 == 1 )
        {
          v194 = v198;
          v193 = v311;
          goto LABEL_452;
        }
        v197 = (v197 + 1) >> 1;
      }
      v194 = v198;
      v193 = v311;
      v203 = &v201->m128i_i8[v199 * 8];
      *v201 = _mm_loadu_si128(v311);
      v201[1].m128i_i64[0] = v311[1].m128i_i64[0];
      v204 = &v201[1].m128i_i8[8];
      if ( v199 == 3 )
      {
        v207 = v202;
      }
      else
      {
        do
        {
          v205 = _mm_loadu_si128((const __m128i *)(v204 - 24));
          v206 = *((_QWORD *)v204 - 1);
          v204 += 24;
          *(__m128i *)(v204 - 24) = v205;
          *((_QWORD *)v204 - 1) = v206;
        }
        while ( v203 != v204 );
        v207 = (__m128i *)((char *)v202 + 8 * v199 - 24);
      }
      *v311 = _mm_loadu_si128(v207);
      v311[1].m128i_i64[0] = v207[1].m128i_i64[0];
      if ( v320 == v197 )
      {
        v208 = (__m128i *)((char *)v311 + v199 * 8);
        goto LABEL_269;
      }
      sub_7D5D40(v311, v194, v202, v197);
    }
    operator delete(v202, v200);
    v192 = v336;
    v193 = (__m128i *)src;
  }
  if ( v192 )
  {
    v209 = 0;
    while ( 1 )
    {
      v210 = &v193->m128i_i8[24 * v209];
      v211 = *((_QWORD *)v210 + 1);
      v212 = *((_QWORD *)v210 + 2);
      if ( v212 )
      {
        if ( !v211 )
          goto LABEL_297;
      }
      else if ( v211 )
      {
        goto LABEL_297;
      }
      if ( v212 | v211 )
        break;
LABEL_299:
      if ( ++v209 == v192 )
        goto LABEL_300;
    }
    v213 = *(_QWORD *)(v211 + 8);
    if ( *(_QWORD *)(v212 + 8) )
    {
      v214 = *(const char **)v212;
      v215 = haystack;
      if ( v213 )
        goto LABEL_278;
LABEL_279:
      if ( strcmp(v215, v214) )
        goto LABEL_297;
      v216 = *(_QWORD *)(v211 + 32);
      if ( *(_QWORD *)(v212 + 32) )
        goto LABEL_281;
LABEL_346:
      v217 = byte_2389C44;
      if ( !v216 )
      {
        v219 = *(_QWORD *)(v211 + 56);
        if ( !*(_QWORD *)(v212 + 56) )
          goto LABEL_348;
LABEL_285:
        v220 = *(const char **)(v212 + 48);
        v221 = byte_2389C44;
        if ( v219 )
          goto LABEL_286;
LABEL_287:
        if ( strcmp(v221, v220) )
          goto LABEL_297;
        v222 = *(_QWORD *)(v211 + 80);
        if ( *(_QWORD *)(v212 + 80) )
          goto LABEL_289;
LABEL_350:
        v223 = haystack;
        if ( v222 )
          goto LABEL_290;
        goto LABEL_292;
      }
LABEL_282:
      v218 = *(const char **)(v211 + 24);
    }
    else
    {
      v214 = haystack;
      if ( v213 )
      {
LABEL_278:
        v215 = *(const char **)v211;
        goto LABEL_279;
      }
      v216 = *(_QWORD *)(v211 + 32);
      if ( !*(_QWORD *)(v212 + 32) )
        goto LABEL_346;
LABEL_281:
      v217 = *(const char **)(v212 + 24);
      v218 = byte_2389C44;
      if ( v216 )
        goto LABEL_282;
    }
    if ( strcmp(v218, v217) )
      goto LABEL_297;
    v219 = *(_QWORD *)(v211 + 56);
    if ( *(_QWORD *)(v212 + 56) )
      goto LABEL_285;
LABEL_348:
    v220 = byte_2389C44;
    if ( v219 )
    {
LABEL_286:
      v221 = *(const char **)(v211 + 48);
      goto LABEL_287;
    }
    v222 = *(_QWORD *)(v211 + 80);
    if ( !*(_QWORD *)(v212 + 80) )
      goto LABEL_350;
LABEL_289:
    v223 = *(const char **)(v212 + 72);
    v224 = haystack;
    if ( v222 )
LABEL_290:
      v224 = *(const char **)(v211 + 72);
    if ( strcmp(v224, v223) )
      goto LABEL_297;
LABEL_292:
    v225 = *(_QWORD *)(v211 + 104);
    if ( *(_QWORD *)(v212 + 104) )
    {
      v226 = *(const char **)(v212 + 96);
      v227 = haystack;
      if ( !v225 )
      {
LABEL_294:
        if ( strcmp(v227, v226) )
          goto LABEL_297;
LABEL_295:
        if ( *(_QWORD *)(v211 + 120) != *(_QWORD *)(v212 + 120)
          || *(_QWORD *)(v212 + 128) != *(_QWORD *)(v211 + 128)
          || (*(_QWORD *)(v211 + 128) & 0xF00000LL) == 0x500000 && *(_DWORD *)(v211 + 148) != *(_DWORD *)(v212 + 148)
          || *(_DWORD *)(v211 + 272) != *(_DWORD *)(v212 + 272) )
        {
LABEL_297:
          v228 = *(void (**)())(*(_QWORD *)a1 + 72LL);
          if ( v228 != nullsub_253 )
          {
            ((void (__fastcall *)(__int64, _QWORD, __int64, __int64))v228)(a1, *((unsigned int *)v210 + 1), v211, v212);
            v193 = (__m128i *)src;
          }
          goto LABEL_299;
        }
        goto LABEL_299;
      }
    }
    else
    {
      v226 = haystack;
      if ( !v225 )
        goto LABEL_295;
    }
    v227 = *(const char **)(v211 + 96);
    goto LABEL_294;
  }
LABEL_300:
  if ( v193 )
  {
    *(_QWORD *)&v336 = 0;
    qfree(v193);
  }
  v229 = &v341.m256i_i64[3];
  do
  {
    v229 -= 5;
    if ( v229[2] )
    {
      v230 = v229[3];
      v231 = 0;
      v232 = 0;
      if ( v230 )
      {
        do
        {
          v233 = v231 + v229[2];
          v234 = *(void **)(v233 + 96);
          if ( v234 )
          {
            *(_QWORD *)(v233 + 104) = 0;
            qfree(v234);
          }
          v235 = *(void **)(v233 + 72);
          if ( v235 )
          {
            *(_QWORD *)(v233 + 80) = 0;
            qfree(v235);
          }
          v236 = *(void **)(v233 + 48);
          if ( v236 )
          {
            *(_QWORD *)(v233 + 56) = 0;
            qfree(v236);
          }
          v237 = *(void **)(v233 + 24);
          if ( v237 )
          {
            *(_QWORD *)(v233 + 32) = 0;
            qfree(v237);
          }
          v238 = *(void **)v233;
          if ( *(_QWORD *)v233 )
          {
            *(_QWORD *)(v233 + 8) = 0;
            qfree(v238);
          }
          ++v232;
          v231 += 280;
        }
        while ( v230 != v232 );
      }
      v229[3] = 0;
      qfree((void *)v229[2]);
    }
  }
  while ( v229 != (__int64 *)&s1 );
  s1 = nullptr;
  v239 = 0;
  src = nullptr;
  memset(v340, 0, 40);
  v336 = 0;
  while ( 2 )
  {
    v240 = v239;
    v241 = v338[v239];
    v242 = *(_QWORD **)v241;
    v243 = *(_QWORD *)(*(_QWORD *)v241 + 160LL);
    if ( v243 && v242[21] )
    {
      v312 = v239;
      v300 = v239;
      extract_insn_opreprs_from_metadata(v229, v243);
      v242 = *(_QWORD **)v241;
      v240 = v312;
      v239 = v300;
    }
    v244 = v242[22];
    if ( v244 && v242[23] )
    {
      v313 = v240;
      v301 = v239;
      extract_insn_opreprs_from_metadata_ex(v229, v244);
      v240 = v313;
      v239 = v301;
    }
    if ( !v239 )
    {
      if ( (char *)*((_QWORD *)&v336 + 1) < v340[0] )
      {
        v318 = v240;
        src = (void *)qvector_reserve(&src, src, v340[0], 24);
        v240 = v318;
        v239 = 0;
      }
      v245 = v229[1];
      if ( v245 > 0 )
        goto LABEL_327;
      goto LABEL_336;
    }
    v245 = v229[1];
    if ( v245 <= 0 )
      break;
LABEL_327:
    v246 = 0;
    for ( ii = 0; ii < v245; ++ii )
    {
      v248 = v336;
      v249 = (char *)src;
      v250 = (__int64 *)(v246 + *v229);
      v251 = *v250;
      if ( !(_QWORD)v336 )
        goto LABEL_341;
      v252 = (char *)src;
      v253 = 0;
      while ( 1 )
      {
        v254 = v252;
        if ( *(_DWORD *)v250 == *(_DWORD *)v252 && *((_DWORD *)v250 + 1) == *((_DWORD *)v252 + 1) )
          break;
        ++v253;
        v252 += 24;
        if ( (_QWORD)v336 == v253 )
          goto LABEL_341;
      }
      if ( !v252 )
      {
LABEL_341:
        if ( *((_QWORD *)&v336 + 1) < (unsigned __int64)(v336 + 1) )
        {
          v314 = v240;
          v303 = v239;
          src = (void *)qvector_reserve(&src, src, v336 + 1, 24);
          v248 = v336;
          v249 = (char *)src;
          v240 = v314;
          v239 = v303;
        }
        v254 = &v249[24 * v248];
        *(_OWORD *)(v254 + 8) = 0;
        *(_QWORD *)v254 = -1;
        *(_QWORD *)&v336 = v336 + 1;
        *(_QWORD *)v254 = v251;
      }
      v246 += 1104;
      *(_QWORD *)&v254[8 * v240 + 8] = v250;
    }
    if ( v239 != 1 )
    {
LABEL_336:
      v229 += 3;
      v239 = 1;
      continue;
    }
    break;
  }
  v255 = v336;
  v256 = (__m128i *)src;
  v257 = (__m128i *)((char *)src + 24 * v336);
  if ( src != v257 )
  {
    v258 = 0xAAAAAAAAAAAAAAABLL * ((24 * (__int64)v336) >> 3) + 1;
    if ( v258 <= 1 )
    {
      v270 = (__m128i *)src;
      v265 = 0;
      v262 = nullptr;
      if ( v258 / 2 )
      {
LABEL_448:
        v265 = 0;
        v262 = nullptr;
        sub_7D1F40(v256->m128i_i8, v257->m128i_i8);
      }
      else
      {
LABEL_361:
        sub_7D40B0(v256, v270, v257, v262);
      }
    }
    else
    {
      dest = (__m128i *)src;
      v259 = v258 / 2;
      v302 = v258 / 2;
      while ( 1 )
      {
        v260 = 3 * v259;
        v261 = (__m128i *)operator new(24 * v259, (const std::nothrow_t *)&std::nothrow);
        v262 = v261;
        if ( v261 )
          break;
        if ( v259 == 1 )
        {
          v256 = dest;
          goto LABEL_448;
        }
        v259 = (v259 + 1) >> 1;
      }
      v256 = dest;
      v263 = &v261->m128i_i8[v260 * 8];
      v264 = v259;
      v265 = 24 * v259;
      *v261 = _mm_loadu_si128(dest);
      v261[1].m128i_i64[0] = dest[1].m128i_i64[0];
      v266 = &v261[1].m128i_i8[8];
      if ( v260 == 3 )
      {
        v269 = v262;
      }
      else
      {
        do
        {
          v267 = _mm_loadu_si128((const __m128i *)(v266 - 24));
          v268 = *((_QWORD *)v266 - 1);
          v266 += 24;
          *(__m128i *)(v266 - 24) = v267;
          *((_QWORD *)v266 - 1) = v268;
        }
        while ( v266 != v263 );
        v269 = (__m128i *)((char *)v262 + 8 * v260 - 24);
      }
      *dest = _mm_loadu_si128(v269);
      dest[1].m128i_i64[0] = v269[1].m128i_i64[0];
      if ( v264 == v302 )
      {
        v270 = (__m128i *)((char *)dest + v260 * 8);
        goto LABEL_361;
      }
      sub_7D62F0(dest, v257, v262, v264);
    }
    operator delete(v262, v265);
    v255 = v336;
    v256 = (__m128i *)src;
  }
  if ( v255 )
  {
    for ( jj = 0; jj != v255; ++jj )
    {
      v272 = (unsigned int *)v256 + 6 * jj;
      v273 = *((_QWORD *)v272 + 1);
      v274 = *((_QWORD *)v272 + 2);
      if ( v274 )
      {
        if ( !v273 )
          goto LABEL_391;
      }
      else if ( v273 )
      {
        goto LABEL_391;
      }
      if ( v274 | v273 )
      {
        v275 = *(_QWORD *)(v274 + 8);
        v276 = *(_QWORD *)(v273 + 8);
        v277 = 28;
        v278 = 0;
        while ( v276 >= v275 && v275 >= v276 )
        {
          if ( v278 > 7
            || (v279 = 0,
                v280 = 4 * (v278 + (v278 > 1) + 5),
                v281 = 15LL << v280,
                v282 = 5LL << v280,
                v283 = 1,
                (v276 & v281) == v282) )
          {
            v285 = *(_DWORD *)(v273 + v277);
            v286 = *(_DWORD *)(v274 + v277);
            if ( v285 < v286 )
              break;
            v279 = v286 < v285;
            v283 = v286 >= v285;
          }
          ++v278;
          v277 += 136;
          if ( v278 == 8 || !v283 )
          {
            if ( v279 )
              break;
            goto LABEL_376;
          }
        }
LABEL_391:
        v287 = *(void (**)())(*(_QWORD *)a1 + 80LL);
        if ( v287 != nullsub_254 )
        {
          ((void (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD))v287)(a1, *v272, v272[1], *((_QWORD *)v272 + 1));
          v256 = (__m128i *)src;
        }
      }
LABEL_376:
      ;
    }
  }
  if ( v256 )
  {
    *(_QWORD *)&v336 = 0;
    qfree(v256);
  }
  if ( v340[2] )
  {
    v340[3] = nullptr;
    qfree(v340[2]);
  }
  if ( s1 )
  {
    v340[0] = nullptr;
    qfree(s1);
  }
  if ( ptr[0] )
  {
    ptr[1] = nullptr;
    qfree(ptr[0]);
  }
  if ( v333[0] )
  {
    v333[1] = nullptr;
    qfree(v333[0]);
  }
  return 1;
}

