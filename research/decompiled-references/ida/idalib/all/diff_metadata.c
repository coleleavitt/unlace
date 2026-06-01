__int64 __fastcall diff_metadata(__int64 a1, const char **a2, const char **a3, char a4)
{
  unsigned __int64 v6; // rax
  const char **v7; // r13
  const char **v8; // rbp
  bool v9; // al
  const char *v10; // rax
  const char *v11; // rsi
  void (*v12)(); // rax
  _BYTE *v13; // rsi
  unsigned __int64 v14; // rdx
  _QWORD *v15; // rax
  _BYTE *v16; // rsi
  unsigned __int64 v17; // rdx
  void (*v18)(); // rax
  char **v19; // rbx
  void *v20; // rdi
  char *v21; // rdi
  __int64 v22; // r13
  char **p_s1; // rbx
  __int64 v24; // rbp
  unsigned __int64 v25; // rdi
  std::nothrow_t *v26; // r9
  __int64 v27; // r8
  char *v28; // r10
  size_t v29; // r8
  size_t v30; // r11
  __int64 v31; // rsi
  char *v32; // rdx
  __int64 v33; // rax
  char v34; // bp
  char v35; // bl
  void (*v36)(); // r8
  char **v37; // rax
  char **v38; // rdx
  __int64 v39; // rax
  __int64 v40; // r13
  __int64 *v41; // r12
  unsigned __int64 v42; // r11
  unsigned __int64 v43; // rdi
  unsigned __int64 v44; // rdx
  int v45; // r15d
  int v46; // r8d
  __int64 v47; // rbp
  __int64 v48; // rsi
  char *v49; // rdi
  __int64 v50; // rbx
  __int64 v51; // r14
  char *v52; // rax
  __int64 v53; // rdx
  char *v54; // rcx
  __int64 v55; // r14
  __m128i *v56; // r15
  __m128i *v57; // rsi
  signed __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // r13
  __m128i *v61; // r12
  __m128i *v62; // r15
  __int64 v63; // r14
  unsigned __int64 v64; // rbx
  __m128i *v65; // rax
  __m128i *v66; // rbp
  __int8 *v67; // rcx
  __int8 *v68; // rax
  __m128i v69; // xmm0
  __int64 v70; // r8
  const __m128i *v71; // rax
  __m128i *v72; // r14
  __int64 i; // rbx
  __int64 v74; // rax
  const char *v75; // rsi
  const char *v76; // rdi
  unsigned int *v77; // r12
  __int64 v78; // r13
  __int64 v79; // rbp
  void (*v80)(); // rax
  char **v81; // rbp
  char *v82; // r13
  char *v83; // rdx
  char *j; // rbx
  char *v85; // rax
  void *v86; // rdi
  __int64 v87; // rax
  __int64 *v88; // r13
  __int64 v89; // rax
  void *v90; // rsi
  unsigned __int64 v91; // rdx
  int v92; // r11d
  __int64 v93; // r12
  int v94; // ebp
  __int128 v95; // xmm0
  __int64 v96; // r8
  __int64 v97; // rsi
  char *v98; // rdi
  __int64 *v99; // rbx
  __int64 v100; // r15
  char *v101; // rax
  __int64 v102; // rdx
  char *v103; // rcx
  __int64 v104; // r12
  __m128i *v105; // r9
  __m128i *v106; // rbp
  signed __int64 v107; // rax
  __int64 v108; // rdx
  __int64 k; // r15
  __int64 v110; // r14
  unsigned __int64 v111; // rbx
  __m128i *v112; // rax
  __m128i *v113; // r13
  __int8 *v114; // rsi
  const __m128i *v115; // rax
  __m128i v116; // xmm0
  __int64 v117; // rcx
  __m128i v118; // xmm0
  const __m128i *v119; // rax
  __m128i *v120; // rsi
  __int64 m; // rbp
  __int64 v122; // rax
  const char *v123; // rsi
  const char *v124; // rdi
  int v125; // eax
  __int64 v126; // r15
  __int64 v127; // r14
  bool v128; // dl
  bool v129; // cl
  bool v130; // al
  void (*v131)(); // rax
  unsigned int *v132; // rbx
  __int64 v133; // r14
  __int64 v134; // r15
  void (*v135)(); // rax
  __int64 v136; // rax
  const char *v137; // rsi
  const char *v138; // rdi
  char **v139; // rbp
  char *v140; // r14
  __int64 v141; // r13
  char *v142; // r12
  char *v143; // rbx
  void *v144; // rdi
  void *v145; // rdi
  __int64 *v146; // r12
  __int64 v147; // r8
  __int64 v148; // rax
  unsigned __int64 v149; // rsi
  unsigned __int64 v150; // rdx
  int v151; // r15d
  int v152; // r14d
  __int64 v153; // rbp
  __int64 v154; // rsi
  char *v155; // rdi
  __int64 v156; // rbx
  __int64 v157; // r13
  char *v158; // rax
  __int64 v159; // rdx
  char *v160; // rcx
  __int64 v161; // rbp
  __m128i *v162; // r13
  __m128i *v163; // r14
  signed __int64 v164; // rax
  __int64 v165; // rbx
  __int64 v166; // r15
  __m128i *v167; // rax
  __m128i *v168; // rbp
  __int8 *v169; // rsi
  __int8 *v170; // r8
  __int64 v171; // rcx
  unsigned __int64 v172; // rbx
  __int8 *v173; // rax
  __m128i v174; // xmm0
  __int64 v175; // rdx
  const __m128i *v176; // rax
  __m128i *v177; // rsi
  __int64 v178; // rbx
  unsigned int *v179; // rax
  unsigned __int64 v180; // rcx
  unsigned __int64 v181; // r8
  void (*v182)(); // r9
  char **v183; // r14
  __int64 v184; // r9
  __int64 v185; // rax
  _BYTE *v186; // rsi
  __int64 v187; // rdx
  int v188; // r8d
  int v189; // r15d
  __int64 v190; // rbp
  int n; // ebx
  __int64 v192; // rdi
  char *v193; // rsi
  char *v194; // r12
  __int64 v195; // r13
  char *v196; // rax
  __int64 v197; // rdx
  char *v198; // rcx
  __int64 v199; // rbx
  __m128i *v200; // rbp
  __m128i *v201; // r8
  signed __int64 v202; // rax
  __int64 v203; // rcx
  __int64 v204; // r15
  __m128i *v205; // rbp
  __int64 v206; // r14
  unsigned __int64 v207; // rbx
  __m128i *v208; // rax
  __m128i *v209; // r13
  __int8 *v210; // rsi
  __int8 *v211; // rax
  __m128i v212; // xmm0
  __int64 v213; // rdx
  const __m128i *v214; // rax
  __m128i *v215; // rsi
  __int64 v216; // r14
  __int8 *v217; // r12
  __int64 v218; // r13
  __int64 v219; // r15
  __int64 v220; // rax
  const char *v221; // rsi
  const char *v222; // rdi
  __int64 v223; // rax
  const char *v224; // rsi
  const char *v225; // rdi
  __int64 v226; // rax
  const char *v227; // rsi
  const char *v228; // rdi
  __int64 v229; // rax
  const char *v230; // rsi
  const char *v231; // rdi
  __int64 v232; // rax
  const char *v233; // rsi
  const char *v234; // rdi
  void (*v235)(); // rax
  char **v236; // r13
  char *v237; // r14
  __int64 v238; // r12
  char *v239; // rbp
  char *v240; // rbx
  void *v241; // rdi
  void *v242; // rdi
  void *v243; // rdi
  void *v244; // rdi
  void *v245; // rdi
  __int64 v246; // r9
  int v247; // r8d
  __int64 v248; // rbx
  _QWORD *v249; // rax
  unsigned __int8 *v250; // rsi
  unsigned __int8 *v251; // rdx
  unsigned __int64 v252; // rsi
  unsigned __int64 v253; // rdx
  int v254; // r15d
  __int64 v255; // r12
  int ii; // ebp
  __int64 v257; // rsi
  char *v258; // rdi
  char *v259; // rbx
  __int64 v260; // r14
  char *v261; // rax
  __int64 v262; // rdx
  char *v263; // rcx
  __int64 v264; // rbp
  __m128i *v265; // r13
  __m128i *v266; // r14
  signed __int64 v267; // rax
  __int64 v268; // rbx
  __int64 v269; // r15
  __m128i *v270; // rax
  __m128i *v271; // rbp
  __int8 *v272; // rcx
  __int64 v273; // r8
  unsigned __int64 v274; // rbx
  __int8 *v275; // rax
  __m128i v276; // xmm0
  __int64 v277; // rdx
  const __m128i *v278; // rax
  __m128i *v279; // rsi
  __int64 jj; // rbx
  unsigned int *v281; // r10
  __int64 v282; // r9
  __int64 v283; // r8
  unsigned __int64 v284; // rdx
  unsigned __int64 v285; // rax
  __int64 v286; // rdi
  unsigned int v287; // esi
  _BOOL4 v288; // r15d
  char v289; // cl
  __int64 v290; // r11
  __int64 v291; // r14
  bool v292; // cl
  unsigned int v294; // ecx
  unsigned int v295; // r11d
  void (*v296)(); // rax
  const char *v297; // rsi
  char *v298; // rsi
  const char *v299; // rdi
  const char *v300; // rsi
  const char *v301; // rdi
  __int64 v302; // rax
  unsigned int v303; // ebp
  unsigned int v304; // eax
  __int64 v305; // rdx
  void (*v306)(); // rax
  __m128i *dest; // [rsp+8h] [rbp-160h]
  __int64 v309; // [rsp+10h] [rbp-158h]
  __int64 v310; // [rsp+10h] [rbp-158h]
  __int64 v311; // [rsp+10h] [rbp-158h]
  __int64 v312; // [rsp+10h] [rbp-158h]
  __int64 v313; // [rsp+18h] [rbp-150h]
  __int64 v314; // [rsp+18h] [rbp-150h]
  __m128i *v315; // [rsp+18h] [rbp-150h]
  __m128i *v316; // [rsp+18h] [rbp-150h]
  void *v317; // [rsp+18h] [rbp-150h]
  __m128i *v318; // [rsp+18h] [rbp-150h]
  void *v319; // [rsp+18h] [rbp-150h]
  __m128i *v320; // [rsp+18h] [rbp-150h]
  int v321; // [rsp+18h] [rbp-150h]
  int v322; // [rsp+18h] [rbp-150h]
  int v323; // [rsp+18h] [rbp-150h]
  void *v324; // [rsp+18h] [rbp-150h]
  int v325; // [rsp+18h] [rbp-150h]
  char *v326; // [rsp+18h] [rbp-150h]
  int v327; // [rsp+18h] [rbp-150h]
  __int64 v328; // [rsp+20h] [rbp-148h]
  __int64 v329; // [rsp+20h] [rbp-148h]
  __int64 v330; // [rsp+20h] [rbp-148h]
  size_t v331; // [rsp+20h] [rbp-148h]
  std::nothrow_t *v332; // [rsp+28h] [rbp-140h]
  std::nothrow_t *v333; // [rsp+28h] [rbp-140h]
  std::nothrow_t *v334; // [rsp+28h] [rbp-140h]
  int v335; // [rsp+28h] [rbp-140h]
  std::nothrow_t *v336; // [rsp+28h] [rbp-140h]
  __int64 v337; // [rsp+30h] [rbp-138h]
  int v338; // [rsp+30h] [rbp-138h]
  __int64 v339; // [rsp+30h] [rbp-138h]
  char *v340; // [rsp+30h] [rbp-138h]
  size_t v341; // [rsp+38h] [rbp-130h]
  void *v342[4]; // [rsp+40h] [rbp-128h] BYREF
  void *ptr[4]; // [rsp+60h] [rbp-108h] BYREF
  void *src; // [rsp+80h] [rbp-E8h] BYREF
  __int128 v345; // [rsp+88h] [rbp-E0h]
  __int16 v346; // [rsp+9Eh] [rbp-CAh]
  _QWORD v347[2]; // [rsp+A0h] [rbp-C8h]
  char *s1; // [rsp+B0h] [rbp-B8h] BYREF
  char *v349[3]; // [rsp+B8h] [rbp-B0h] BYREF
  char *v350[3]; // [rsp+D0h] [rbp-98h] BYREF
  __int64 v351; // [rsp+E8h] [rbp-80h] BYREF
  char *v352; // [rsp+F0h] [rbp-78h]
  _BYTE v353[24]; // [rsp+F8h] [rbp-70h] BYREF
  __int128 v354; // [rsp+110h] [rbp-58h] BYREF
  char v355; // [rsp+120h] [rbp-48h] BYREF
  unsigned __int64 v356; // [rsp+128h] [rbp-40h]

  v356 = __readfsqword(0x28u);
  if ( (a4 & 1) != 0 )
  {
    v303 = score_metadata(a2);
    v304 = score_metadata(a3);
    v305 = v304;
    if ( v303 != v304 )
    {
      v306 = *(void (**)())(*(_QWORD *)a1 + 16LL);
      if ( v306 != nullsub_267 )
        ((void (__fastcall *)(__int64, _QWORD, __int64))v306)(a1, v303, v305);
    }
  }
  v6 = (unsigned __int64)a3[1];
  if ( (unsigned __int64)a2[1] <= 1 )
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
      v9 = a3 == nullptr;
      if ( a3 != nullptr || a2 == nullptr )
        goto LABEL_7;
LABEL_14:
      v8 = nullptr;
      goto LABEL_15;
    }
LABEL_417:
    v7 = nullptr;
    goto LABEL_15;
  }
  v9 = 1;
  v8 = nullptr;
  if ( a2 )
    goto LABEL_14;
LABEL_7:
  if ( v9 && !a2 )
    goto LABEL_17;
  v10 = a2[1];
  if ( v8[1] )
  {
    v11 = *v8;
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
  if ( !strcmp(*a2, v11) )
    goto LABEL_17;
LABEL_15:
  v12 = *(void (**)())(*(_QWORD *)a1 + 24LL);
  if ( v12 != nullsub_268 )
    ((void (__fastcall *)(__int64, const char **, const char **))v12)(a1, v7, v8);
LABEL_17:
  sub_7FA860((__int64 *)v342, (__int64)(a2 + 4));
  sub_7FA860((__int64 *)ptr, (__int64)(a3 + 4));
  LOBYTE(s1) = 0;
  memset(v349, 0, sizeof(v349));
  memset(v350, 0, sizeof(v350));
  LOBYTE(v351) = 0;
  v352 = nullptr;
  memset(v353, 0, sizeof(v353));
  v354 = 0;
  v13 = *((_BYTE **)v342[0] + 2);
  v347[0] = v342;
  v347[1] = ptr;
  if ( v13 && (v14 = *((_QWORD *)v342[0] + 3)) != 0 )
  {
    extract_type_from_metadata((__int64)&s1, v13, v14);
    v15 = ptr[0];
    v16 = *((_BYTE **)ptr[0] + 2);
    if ( !v16 )
      goto LABEL_22;
  }
  else
  {
    v15 = ptr[0];
    v16 = *((_BYTE **)ptr[0] + 2);
    if ( !v16 )
      goto LABEL_406;
  }
  v17 = v15[3];
  if ( v17 )
    extract_type_from_metadata((__int64)&v351, v16, v17);
LABEL_22:
  if ( (_BYTE)s1 != (_BYTE)v351 )
    goto LABEL_23;
LABEL_406:
  if ( *(_QWORD *)v353 )
  {
    v298 = v352;
    v299 = byte_23ADD24;
    if ( !v349[1] )
      goto LABEL_409;
  }
  else
  {
    v298 = (char *)byte_23ADD24;
    if ( !v349[1] )
      goto LABEL_410;
  }
  v299 = v349[0];
LABEL_409:
  if ( strcmp(v299, v298) )
    goto LABEL_23;
LABEL_410:
  if ( (_QWORD)v354 )
  {
    v300 = *(const char **)&v353[16];
    v301 = byte_23ADD24;
    if ( !v350[1] )
      goto LABEL_413;
  }
  else
  {
    v300 = byte_23ADD24;
    if ( !v350[1] )
      goto LABEL_25;
  }
  v301 = v350[0];
LABEL_413:
  if ( strcmp(v301, v300) )
  {
LABEL_23:
    v18 = *(void (**)())(*(_QWORD *)a1 + 32LL);
    if ( v18 != nullsub_269 )
      ((void (__fastcall *)(__int64, char **, __int64 *))v18)(a1, &s1, &v351);
  }
LABEL_25:
  v19 = (char **)&v355;
  do
  {
    v20 = *(v19 - 3);
    v19 -= 7;
    if ( v20 )
    {
      v19[5] = nullptr;
      qfree(v20);
    }
    v21 = v19[1];
    if ( v21 )
    {
      v19[2] = nullptr;
      qfree(v21);
    }
  }
  while ( v19 != &s1 );
  v22 = 0;
  do
  {
    p_s1 = &s1;
    v346 = 0;
    v24 = 0;
    s1 = nullptr;
    memset(v349, 0, sizeof(v349));
    *(_OWORD *)v350 = 0;
    do
    {
      v25 = (-v22 & 0xFFFFFFFFFFFFFFF0LL) + 64 + *(_QWORD *)v347[v24];
      v26 = *(std::nothrow_t **)v25;
      if ( *(_QWORD *)v25 )
      {
        v27 = *(_QWORD *)(v25 + 8);
        if ( v27 )
        {
          v28 = p_s1[1];
          v29 = v27 - (_QWORD)v26;
          v30 = v29;
          if ( v28 )
          {
            --v28;
            v30 = (size_t)&v28[v29];
          }
          v31 = (__int64)*p_s1;
          v32 = (char *)(v30 + 1);
          if ( (unsigned __int64)p_s1[2] < v30 + 1 )
          {
            v341 = v30;
            v340 = v28;
            v336 = *(std::nothrow_t **)v25;
            v331 = v29;
            v326 = (char *)(v30 + 1);
            v302 = qvector_reserve(p_s1, v31, v32, 1);
            v30 = v341;
            v28 = v340;
            *p_s1 = (char *)v302;
            v31 = v302;
            v26 = v336;
            v29 = v331;
            v32 = v326;
          }
          p_s1[1] = v32;
          *(_BYTE *)(v31 + v30) = 0;
          memmove(&(*p_s1)[(_QWORD)v28], v26, v29);
          *((_BYTE *)&v346 + v24) = 1;
        }
      }
      v33 = v24 + 1;
      p_s1 += 3;
      v24 = 1;
    }
    while ( v33 != 2 );
    v34 = v346;
    v35 = HIBYTE(v346);
    if ( (_BYTE)v346 == HIBYTE(v346) )
    {
      if ( !v350[0] )
      {
        v297 = haystack;
        if ( !v349[0] )
          goto LABEL_48;
LABEL_403:
        if ( !strcmp(s1, v297) )
          goto LABEL_48;
        goto LABEL_42;
      }
      v297 = v349[2];
      if ( v349[0] )
        goto LABEL_403;
      if ( !strcmp(haystack, v349[2]) )
        goto LABEL_48;
    }
LABEL_42:
    v36 = *(void (**)())(*(_QWORD *)a1 + 40LL);
    v37 = nullptr;
    v38 = nullptr;
    if ( v35 )
      v38 = &v349[2];
    if ( v34 )
      v37 = &s1;
    if ( v36 != nullsub_270 )
      ((void (__fastcall *)(__int64, char **, char **, _QWORD))v36)(a1, v37, v38, (unsigned int)v22 ^ 1);
LABEL_48:
    if ( v349[2] )
    {
      v350[0] = nullptr;
      qfree(v349[2]);
    }
    if ( s1 )
    {
      v349[0] = nullptr;
      qfree(s1);
    }
    v39 = v22 + 1;
    v22 = 1;
  }
  while ( v39 != 2 );
  v313 = 0;
  while ( 2 )
  {
    s1 = nullptr;
    v40 = 0;
    v41 = (__int64 *)&s1;
    memset(v349, 0, sizeof(v349));
    src = nullptr;
    v42 = (-v313 & 0xFFFFFFFFFFFFFFF0LL) + 96;
    *(_OWORD *)v350 = 0;
    v345 = 0;
    while ( 1 )
    {
      v43 = v42 + *(_QWORD *)v347[v40];
      if ( !*(_QWORD *)v43 )
        goto LABEL_69;
      v44 = *(_QWORD *)(v43 + 8);
      if ( !v44 )
        goto LABEL_69;
      v332 = (std::nothrow_t *)v42;
      extract_insn_cmts_from_metadata(v41, *(void **)v43, v44);
      v42 = (unsigned __int64)v332;
      if ( !v40 )
      {
        if ( (char *)*((_QWORD *)&v345 + 1) < v349[0] )
        {
          src = (void *)qvector_reserve(&src, src, v349[0], 24);
          v42 = (unsigned __int64)v332;
        }
        v45 = v41[1];
        if ( v45 <= 0 )
          goto LABEL_70;
        goto LABEL_61;
      }
      v45 = v41[1];
      if ( v45 <= 0 )
        break;
LABEL_61:
      v46 = v40;
      v47 = 0;
      do
      {
        v48 = v345;
        v49 = (char *)src;
        v50 = *v41 + 32 * v47;
        v51 = *(_QWORD *)v50;
        if ( !(_QWORD)v345 )
          goto LABEL_127;
        v52 = (char *)src;
        v53 = 0;
        while ( 1 )
        {
          v54 = v52;
          if ( *(_DWORD *)v50 == *(_DWORD *)v52 && *(_DWORD *)(v50 + 4) == *((_DWORD *)v52 + 1) )
            break;
          ++v53;
          v52 += 24;
          if ( (_QWORD)v345 == v53 )
            goto LABEL_127;
        }
        if ( !v52 )
        {
LABEL_127:
          if ( *((_QWORD *)&v345 + 1) < (unsigned __int64)(v345 + 1) )
          {
            v338 = v46;
            v334 = (std::nothrow_t *)v42;
            src = (void *)qvector_reserve(&src, src, v345 + 1, 24);
            v48 = v345;
            v49 = (char *)src;
            v46 = v338;
            v42 = (unsigned __int64)v334;
          }
          v54 = &v49[24 * v48];
          *(_OWORD *)(v54 + 8) = 0;
          *(_QWORD *)v54 = -1;
          *(_QWORD *)&v345 = v345 + 1;
          *(_QWORD *)v54 = v51;
        }
        ++v47;
        *(_QWORD *)&v54[8 * v46 + 8] = v50 + 8;
      }
      while ( v45 > (int)v47 );
LABEL_69:
      if ( v40 == 1 )
        break;
LABEL_70:
      v41 += 3;
      v40 = 1;
    }
    v55 = v345;
    v56 = (__m128i *)src;
    v57 = (__m128i *)((char *)src + 24 * v345);
    if ( src != v57 )
    {
      v58 = 0xAAAAAAAAAAAAAAABLL * ((24 * (__int64)v345) >> 3) + 1;
      v59 = v58 / 2;
      if ( v58 <= 1 )
      {
        v72 = (__m128i *)src;
        v64 = 0;
        v66 = nullptr;
        if ( v59 )
        {
LABEL_433:
          v64 = 0;
          v66 = nullptr;
          sub_7F56C0(v56->m128i_i8, v57->m128i_i8);
        }
        else
        {
LABEL_81:
          sub_7F6F30(v56, v72, v57, v66);
        }
      }
      else
      {
        v60 = v58 / 2;
        v61 = (__m128i *)src;
        v62 = (__m128i *)((char *)src + 24 * v345);
        while ( 1 )
        {
          v337 = v59;
          v63 = 3 * v60;
          v64 = 24 * v60;
          v65 = (__m128i *)operator new(24 * v60, (const std::nothrow_t *)&std::nothrow);
          v59 = v337;
          v66 = v65;
          if ( v65 )
            break;
          if ( v60 == 1 )
          {
            v57 = v62;
            v56 = v61;
            goto LABEL_433;
          }
          v60 = (v60 + 1) >> 1;
        }
        v67 = &v65->m128i_i8[v63 * 8];
        v57 = v62;
        v56 = v61;
        *v65 = _mm_loadu_si128(v61);
        v65[1].m128i_i64[0] = v61[1].m128i_i64[0];
        v68 = &v65[1].m128i_i8[8];
        if ( v63 == 3 )
        {
          v71 = v66;
        }
        else
        {
          do
          {
            v69 = _mm_loadu_si128((const __m128i *)(v68 - 24));
            v70 = *((_QWORD *)v68 - 1);
            v68 += 24;
            *(__m128i *)(v68 - 24) = v69;
            *((_QWORD *)v68 - 1) = v70;
          }
          while ( v67 != v68 );
          v71 = (__m128i *)((char *)v66 + 8 * v63 - 24);
        }
        *v61 = _mm_loadu_si128(v71);
        v61[1].m128i_i64[0] = v71[1].m128i_i64[0];
        if ( v60 == v337 )
        {
          v72 = (__m128i *)((char *)v61 + v63 * 8);
          goto LABEL_81;
        }
        sub_7F8360(v61, v57, v66, v60);
      }
      operator delete(v66, v64);
      v55 = v345;
      v56 = (__m128i *)src;
    }
    if ( v55 )
    {
      for ( i = 0; i != v55; ++i )
      {
        while ( 1 )
        {
          v77 = (unsigned int *)v56 + 6 * i;
          v78 = *((_QWORD *)v77 + 1);
          v79 = *((_QWORD *)v77 + 2);
          if ( !v79 )
            break;
          if ( !v78 )
            goto LABEL_94;
LABEL_86:
          if ( !(v79 | v78) )
            goto LABEL_91;
          v74 = *(_QWORD *)(v78 + 8);
          if ( *(_QWORD *)(v79 + 8) )
          {
            v75 = *(const char **)v79;
            v76 = haystack;
            if ( !v74 )
              goto LABEL_90;
          }
          else
          {
            v75 = haystack;
            if ( !v74 )
              goto LABEL_91;
          }
          v76 = *(const char **)v78;
LABEL_90:
          if ( strcmp(v76, v75) )
            goto LABEL_94;
LABEL_91:
          if ( ++i == v55 )
            goto LABEL_96;
        }
        if ( !v78 )
          goto LABEL_86;
LABEL_94:
        v80 = *(void (**)())(*(_QWORD *)a1 + 48LL);
        if ( v80 == nullsub_271 )
          goto LABEL_91;
        ((void (__fastcall *)(__int64, _QWORD, _QWORD, __int64, __int64, _QWORD))v80)(
          a1,
          *v77,
          v77[1],
          v78,
          v79,
          (unsigned int)v313 ^ 1);
        v56 = (__m128i *)src;
      }
    }
LABEL_96:
    if ( v56 )
    {
      *(_QWORD *)&v345 = 0;
      qfree(v56);
    }
    v81 = &v350[2];
    do
    {
      v81 -= 3;
      if ( *v81 )
      {
        v82 = v81[1];
        if ( v82 )
        {
          v83 = *v81;
          for ( j = nullptr; j != v82; ++j )
          {
            v85 = &v83[32 * (_QWORD)j];
            v86 = *((void **)v85 + 1);
            if ( v86 )
            {
              *((_QWORD *)v85 + 2) = 0;
              qfree(v86);
              v83 = *v81;
            }
          }
        }
        else
        {
          v83 = *v81;
        }
        v81[1] = nullptr;
        qfree(v83);
      }
    }
    while ( v81 != &s1 );
    v87 = v313;
    v313 = 1;
    if ( v87 != 1 )
      continue;
    break;
  }
  s1 = nullptr;
  v88 = (__int64 *)&s1;
  src = nullptr;
  v314 = 0;
  memset(v349, 0, sizeof(v349));
  *(_OWORD *)v350 = 0;
  v345 = 0;
  while ( 2 )
  {
    v89 = *(_QWORD *)v347[v314];
    v90 = *(void **)(v89 + 112);
    if ( !v90 || (v91 = *(_QWORD *)(v89 + 120)) == 0 )
    {
LABEL_123:
      if ( v314 == 1 )
        goto LABEL_134;
      goto LABEL_124;
    }
    extract_extra_cmts_from_metadata(v88, v90, v91);
    if ( !v314 )
    {
      if ( (char *)*((_QWORD *)&v345 + 1) < v349[0] )
        src = (void *)qvector_reserve(&src, src, v349[0], 40);
      v92 = v88[1];
      if ( v92 > 0 )
        goto LABEL_115;
LABEL_124:
      v314 = 1;
      v88 += 3;
      continue;
    }
    break;
  }
  v92 = v88[1];
  if ( v92 > 0 )
  {
LABEL_115:
    v93 = 0;
    v94 = 0;
    v95 = 0;
    v96 = v314 + 2;
    do
    {
      v97 = v345;
      v98 = (char *)src;
      v99 = (__int64 *)(v93 + *v88);
      v100 = *v99;
      if ( !(_QWORD)v345 )
        goto LABEL_130;
      v101 = (char *)src;
      v102 = 0;
      while ( 1 )
      {
        v103 = v101;
        if ( *(_DWORD *)v99 == *(_DWORD *)v101 && *((_DWORD *)v99 + 1) == *((_DWORD *)v101 + 1) )
          break;
        ++v102;
        v101 += 40;
        if ( (_QWORD)v345 == v102 )
          goto LABEL_130;
      }
      if ( !v101 )
      {
LABEL_130:
        if ( *((_QWORD *)&v345 + 1) < (unsigned __int64)(v345 + 1) )
        {
          v339 = v96;
          v335 = v92;
          src = (void *)qvector_reserve(&src, src, v345 + 1, 40);
          v98 = (char *)src;
          v97 = v345;
          v95 = 0;
          v96 = v339;
          v92 = v335;
        }
        v103 = &v98[40 * v97];
        *(_QWORD *)v103 = -1;
        *(_OWORD *)(v103 + 8) = v95;
        *(_OWORD *)(v103 + 24) = v95;
        *(_QWORD *)&v345 = v345 + 1;
        *(_QWORD *)v103 = v100;
      }
      ++v94;
      v93 += 56;
      *(_QWORD *)&v103[8 * v314 + 8] = v99 + 1;
      *(_QWORD *)&v103[8 * v96 + 8] = v99 + 4;
    }
    while ( v94 < v92 );
    goto LABEL_123;
  }
LABEL_134:
  v104 = v345;
  v105 = (__m128i *)src;
  v106 = (__m128i *)((char *)src + 40 * v345);
  if ( src != v106 )
  {
    v107 = 0xCCCCCCCCCCCCCCCDLL * ((40 * (__int64)v345) >> 3) + 1;
    v108 = v107 / 2;
    if ( v107 <= 1 )
    {
      v120 = (__m128i *)src;
      v111 = 0;
      v113 = nullptr;
      if ( v108 )
      {
LABEL_454:
        v111 = 0;
        v113 = nullptr;
        sub_7F5920(v105->m128i_i8, v106->m128i_i8);
      }
      else
      {
LABEL_143:
        sub_7F7B50(v105, v120, v106, v113);
      }
    }
    else
    {
      for ( k = v107 / 2; ; k = (k + 1) >> 1 )
      {
        v333 = (std::nothrow_t *)v108;
        v110 = 5 * k;
        v315 = v105;
        v111 = 40 * k;
        v112 = (__m128i *)operator new(40 * k, (const std::nothrow_t *)&std::nothrow);
        v105 = v315;
        v108 = (__int64)v333;
        v113 = v112;
        if ( v112 )
          break;
        if ( k == 1 )
          goto LABEL_454;
      }
      v114 = &v112->m128i_i8[v110 * 8];
      *v112 = _mm_loadu_si128(v315);
      v112[1] = _mm_loadu_si128(v315 + 1);
      v112[2].m128i_i64[0] = v315[2].m128i_i64[0];
      v115 = (__m128i *)((char *)v112 + 40);
      if ( v110 == 5 )
      {
        v119 = v113;
      }
      else
      {
        do
        {
          v116 = _mm_loadu_si128((const __m128i *)((char *)v115 - 40));
          v117 = v115[-1].m128i_i64[1];
          v115 = (const __m128i *)((char *)v115 + 40);
          *(__m128i *)((char *)v115 - 40) = v116;
          v118 = _mm_loadu_si128(v115 - 4);
          v115[-1].m128i_i64[1] = v117;
          *(__m128i *)((char *)v115 - 24) = v118;
        }
        while ( v115 != (const __m128i *)v114 );
        v119 = (__m128i *)((char *)v113 + 8 * v110 - 40);
      }
      *v315 = _mm_loadu_si128(v119);
      v315[1] = _mm_loadu_si128(v119 + 1);
      v315[2].m128i_i64[0] = v119[2].m128i_i64[0];
      if ( (std::nothrow_t *)k == v333 )
      {
        v120 = (__m128i *)((char *)v315 + v110 * 8);
        goto LABEL_143;
      }
      sub_7F9A60(v315, v106, v113, k);
    }
    operator delete(v113, v111);
    v104 = v345;
    v105 = (__m128i *)src;
  }
  if ( v104 )
  {
    for ( m = 0; m != v104; ++m )
    {
      v132 = (unsigned int *)v105 + 10 * m;
      v133 = *((_QWORD *)v132 + 1);
      v134 = *((_QWORD *)v132 + 2);
      if ( v134 )
      {
        if ( !v133 )
          goto LABEL_163;
      }
      else if ( v133 )
      {
        goto LABEL_163;
      }
      if ( !(v134 | v133) )
        goto LABEL_153;
      v122 = *(_QWORD *)(v133 + 8);
      if ( *(_QWORD *)(v134 + 8) )
      {
        v123 = *(const char **)v134;
        v124 = haystack;
        if ( !v122 )
          goto LABEL_152;
      }
      else
      {
        v123 = haystack;
        if ( !v122 )
          goto LABEL_153;
      }
      v124 = *(const char **)v133;
LABEL_152:
      v316 = v105;
      v125 = strcmp(v124, v123);
      v105 = v316;
      if ( !v125 )
        goto LABEL_153;
LABEL_163:
      v135 = *(void (**)())(*(_QWORD *)a1 + 56LL);
      if ( v135 != nullsub_272 )
      {
        ((void (__fastcall *)(__int64, _QWORD, _QWORD, __int64, __int64, __int64))v135)(
          a1,
          *v132,
          v132[1],
          v133,
          v134,
          1);
LABEL_153:
        v126 = *((_QWORD *)v132 + 3);
        v127 = *((_QWORD *)v132 + 4);
        v128 = v126 != 0;
        v129 = v126 == 0;
        if ( v127 && !v126 )
        {
          v126 = 0;
          goto LABEL_158;
        }
LABEL_155:
        v130 = v127 == 0;
        if ( !v128 )
          goto LABEL_167;
        goto LABEL_156;
      }
      v126 = *((_QWORD *)v132 + 3);
      v127 = *((_QWORD *)v132 + 4);
      v128 = v126 != 0;
      v129 = v126 == 0;
      if ( !v127 )
        goto LABEL_155;
      if ( !v126 )
        continue;
      v130 = v127 == 0;
LABEL_156:
      if ( !v130 )
      {
LABEL_167:
        if ( v129 && v130 )
          goto LABEL_159;
        v136 = *(_QWORD *)(v126 + 8);
        if ( *(_QWORD *)(v127 + 8) )
        {
          v137 = *(const char **)v127;
          v138 = haystack;
          if ( v136 )
            goto LABEL_171;
        }
        else
        {
          v137 = haystack;
          if ( !v136 )
            goto LABEL_159;
LABEL_171:
          v138 = *(const char **)v126;
        }
        if ( !strcmp(v138, v137) )
          goto LABEL_159;
        v131 = *(void (**)())(*(_QWORD *)a1 + 56LL);
        if ( v131 == nullsub_272 )
          goto LABEL_159;
LABEL_174:
        ((void (__fastcall *)(__int64, _QWORD, _QWORD, __int64, __int64, _QWORD))v131)(
          a1,
          *v132,
          v132[1],
          v126,
          v127,
          0);
        goto LABEL_159;
      }
      v127 = 0;
LABEL_158:
      v131 = *(void (**)())(*(_QWORD *)a1 + 56LL);
      if ( v131 != nullsub_272 )
        goto LABEL_174;
LABEL_159:
      v105 = (__m128i *)src;
    }
  }
  if ( v105 )
  {
    *(_QWORD *)&v345 = 0;
    qfree(v105);
  }
  v139 = &v350[2];
  do
  {
    v139 -= 3;
    if ( *v139 )
    {
      v140 = v139[1];
      v141 = 0;
      v142 = nullptr;
      if ( v140 )
      {
        do
        {
          v143 = &(*v139)[v141];
          v144 = *((void **)v143 + 4);
          if ( v144 )
          {
            *((_QWORD *)v143 + 5) = 0;
            qfree(v144);
          }
          v145 = *((void **)v143 + 1);
          if ( v145 )
          {
            *((_QWORD *)v143 + 2) = 0;
            qfree(v145);
          }
          ++v142;
          v141 += 56;
        }
        while ( v140 != v142 );
      }
      v139[1] = nullptr;
      qfree(*v139);
    }
  }
  while ( v139 != &s1 );
  v146 = (__int64 *)&s1;
  v147 = 0;
  s1 = nullptr;
  src = nullptr;
  memset(v349, 0, sizeof(v349));
  *(_OWORD *)v350 = 0;
  v345 = 0;
  while ( 2 )
  {
    v148 = *(_QWORD *)v347[v147];
    v149 = *(_QWORD *)(v148 + 128);
    if ( !v149 )
      goto LABEL_206;
    v150 = *(_QWORD *)(v148 + 136);
    if ( !v150 )
      goto LABEL_206;
    v317 = (void *)v147;
    extract_user_stkpnts_from_metadata(v146, v149, v150);
    v147 = (__int64)v317;
    if ( !v317 )
    {
      if ( (char *)*((_QWORD *)&v345 + 1) < v349[0] )
      {
        src = (void *)qvector_reserve(&src, src, v349[0], 24);
        v147 = 0;
      }
      v151 = v146[1];
      if ( v151 > 0 )
        goto LABEL_198;
LABEL_207:
      v146 += 3;
      v147 = 1;
      continue;
    }
    break;
  }
  v151 = v146[1];
  if ( v151 > 0 )
  {
LABEL_198:
    v152 = v147;
    v153 = 0;
    do
    {
      v154 = v345;
      v155 = (char *)src;
      v156 = *v146 + 16 * v153;
      v157 = *(_QWORD *)v156;
      if ( !(_QWORD)v345 )
        goto LABEL_208;
      v158 = (char *)src;
      v159 = 0;
      while ( 1 )
      {
        v160 = v158;
        if ( *(_DWORD *)v156 == *(_DWORD *)v158 && *(_DWORD *)(v156 + 4) == *((_DWORD *)v158 + 1) )
          break;
        ++v159;
        v158 += 24;
        if ( (_QWORD)v345 == v159 )
          goto LABEL_208;
      }
      if ( !v158 )
      {
LABEL_208:
        if ( *((_QWORD *)&v345 + 1) < (unsigned __int64)(v345 + 1) )
        {
          v324 = (void *)v147;
          src = (void *)qvector_reserve(&src, src, v345 + 1, 24);
          v154 = v345;
          v155 = (char *)src;
          v147 = (__int64)v324;
        }
        v160 = &v155[24 * v154];
        *(_QWORD *)v160 = -1;
        *(_OWORD *)(v160 + 8) = 0;
        *(_QWORD *)&v345 = v345 + 1;
        *(_QWORD *)v160 = v157;
      }
      ++v153;
      *(_QWORD *)&v160[8 * v152 + 8] = v156 + 8;
    }
    while ( v151 > (int)v153 );
LABEL_206:
    if ( v147 == 1 )
      goto LABEL_212;
    goto LABEL_207;
  }
LABEL_212:
  v161 = v345;
  v162 = (__m128i *)src;
  v163 = (__m128i *)((char *)src + 24 * v345);
  if ( src != v163 )
  {
    v164 = 0xAAAAAAAAAAAAAAABLL * ((24 * (__int64)v345) >> 3) + 1;
    if ( v164 <= 1 )
    {
      v177 = (__m128i *)src;
      v172 = 0;
      v168 = nullptr;
      if ( v164 / 2 )
      {
LABEL_450:
        v172 = 0;
        v168 = nullptr;
        sub_7F54C0(v162->m128i_i8, v163->m128i_i8);
      }
      else
      {
LABEL_221:
        sub_7F7830(v162, v177, v163, v168);
      }
    }
    else
    {
      v318 = (__m128i *)src;
      v165 = v164 / 2;
      v328 = v164 / 2;
      while ( 1 )
      {
        v166 = 24 * v165;
        v167 = (__m128i *)operator new(24 * v165, (const std::nothrow_t *)&std::nothrow);
        v168 = v167;
        if ( v167 )
          break;
        if ( v165 == 1 )
        {
          v162 = v318;
          goto LABEL_450;
        }
        v165 = (v165 + 1) >> 1;
      }
      v162 = v318;
      v169 = &v167->m128i_i8[v166];
      v170 = &v167[1].m128i_i8[8];
      v171 = v165;
      v172 = 24 * v165;
      *v167 = _mm_loadu_si128(v318);
      v167[1].m128i_i64[0] = v318[1].m128i_i64[0];
      v173 = &v167[1].m128i_i8[8];
      if ( v166 == 24 )
      {
        v176 = v168;
      }
      else
      {
        do
        {
          v174 = _mm_loadu_si128((const __m128i *)(v173 - 24));
          v175 = *((_QWORD *)v173 - 1);
          v173 += 24;
          *(__m128i *)(v173 - 24) = v174;
          *((_QWORD *)v173 - 1) = v175;
        }
        while ( v169 != v173 );
        v176 = (const __m128i *)&v170[v166 - 48];
      }
      *v318 = _mm_loadu_si128(v176);
      v318[1].m128i_i64[0] = v176[1].m128i_i64[0];
      if ( v171 == v328 )
      {
        v177 = (__m128i *)((char *)v318 + v166);
        goto LABEL_221;
      }
      sub_7F8910(v318, v163, v168, v171);
    }
    operator delete(v168, v172);
    v161 = v345;
    v162 = (__m128i *)src;
  }
  if ( v161 )
  {
    v178 = 0;
    while ( 1 )
    {
      v179 = (unsigned int *)v162 + 6 * v178;
      v180 = *((_QWORD *)v179 + 1);
      v181 = *((_QWORD *)v179 + 2);
      if ( v181 )
      {
        if ( v180 )
          goto LABEL_226;
      }
      else if ( !v180 )
      {
LABEL_226:
        if ( !(v181 | v180) || *(_DWORD *)v180 == *(_DWORD *)v181 )
          goto LABEL_228;
      }
      v182 = *(void (**)())(*(_QWORD *)a1 + 64LL);
      if ( v182 == nullsub_273 )
      {
LABEL_228:
        if ( ++v178 == v161 )
          break;
      }
      else
      {
        ((void (__fastcall *)(__int64, _QWORD, _QWORD))v182)(a1, *v179, v179[1]);
        ++v178;
        v162 = (__m128i *)src;
        if ( v178 == v161 )
          break;
      }
    }
  }
  if ( v162 )
  {
    *(_QWORD *)&v345 = 0;
    qfree(v162);
  }
  if ( v349[2] )
  {
    v350[0] = nullptr;
    qfree(v349[2]);
  }
  if ( s1 )
  {
    v349[0] = nullptr;
    qfree(s1);
  }
  v183 = &s1;
  s1 = nullptr;
  v184 = 0;
  v349[0] = (char *)-1LL;
  LOWORD(v349[1]) = 0;
  v349[2] = nullptr;
  v351 = -1;
  LOWORD(v352) = 0;
  memset(v353, 0, sizeof(v353));
  src = nullptr;
  memset(v350, 0, sizeof(v350));
  v345 = 0;
  while ( 2 )
  {
    v185 = *(_QWORD *)v347[v184];
    v186 = *(_BYTE **)(v185 + 144);
    if ( !v186 )
      goto LABEL_254;
    v187 = *(_QWORD *)(v185 + 152);
    if ( !v187 )
      goto LABEL_254;
    v319 = (void *)v184;
    extract_frame_desc_from_metadata((__int64)v183, v186, v187);
    v184 = (__int64)v319;
    if ( !v319 )
    {
      if ( (char *)*((_QWORD *)&v345 + 1) < v350[0] )
      {
        src = (void *)qvector_reserve(&src, src, v350[0], 24);
        v184 = 0;
      }
      v188 = (unsigned int)v183[4];
      if ( v188 > 0 )
        goto LABEL_246;
LABEL_255:
      v183 += 6;
      v184 = 1;
      continue;
    }
    break;
  }
  v188 = (unsigned int)v183[4];
  if ( v188 > 0 )
  {
LABEL_246:
    v189 = v184;
    v190 = 0;
    for ( n = 0; n < v188; ++n )
    {
      v192 = v345;
      v193 = (char *)src;
      v194 = &v183[3][v190];
      v195 = *((_QWORD *)v194 + 15);
      if ( !(_QWORD)v345 )
        goto LABEL_256;
      v196 = (char *)src;
      v197 = 0;
      while ( 1 )
      {
        v198 = v196;
        if ( !*(_DWORD *)v196 && (unsigned int)*((_QWORD *)v194 + 15) == *((_DWORD *)v196 + 1) )
          break;
        ++v197;
        v196 += 24;
        if ( (_QWORD)v345 == v197 )
          goto LABEL_256;
      }
      if ( !v196 )
      {
LABEL_256:
        if ( *((_QWORD *)&v345 + 1) < (unsigned __int64)(v345 + 1) )
        {
          v330 = v184;
          v325 = v188;
          src = (void *)qvector_reserve(&src, src, v345 + 1, 24);
          v192 = v345;
          v193 = (char *)src;
          v184 = v330;
          v188 = v325;
        }
        v198 = &v193[24 * v192];
        *(_QWORD *)v198 = -1;
        *(_OWORD *)(v198 + 8) = 0;
        *(_QWORD *)&v345 = v345 + 1;
        *(_DWORD *)v198 = 0;
        *((_DWORD *)v198 + 1) = v195;
      }
      v190 += 416;
      *(_QWORD *)&v198[8 * v189 + 8] = v194;
    }
LABEL_254:
    if ( v184 == 1 )
      goto LABEL_260;
    goto LABEL_255;
  }
LABEL_260:
  v199 = v345;
  v200 = (__m128i *)src;
  v201 = (__m128i *)((char *)src + 24 * v345);
  if ( src != v201 )
  {
    v202 = 0xAAAAAAAAAAAAAAABLL * ((24 * (__int64)v345) >> 3) + 1;
    v203 = v202 / 2;
    if ( v202 <= 1 )
    {
      v215 = (__m128i *)src;
      v207 = 0;
      v209 = nullptr;
      if ( v203 )
      {
LABEL_452:
        v207 = 0;
        v209 = nullptr;
        sub_7F52C0(v200->m128i_i8, v201->m128i_i8);
      }
      else
      {
LABEL_269:
        sub_7F7530(v200, v215, v201, v209);
      }
    }
    else
    {
      v320 = (__m128i *)src;
      v204 = v202 / 2;
      v205 = (__m128i *)((char *)src + 24 * v345);
      while ( 1 )
      {
        v329 = v203;
        v206 = 3 * v204;
        v207 = 24 * v204;
        v208 = (__m128i *)operator new(24 * v204, (const std::nothrow_t *)&std::nothrow);
        v203 = v329;
        v209 = v208;
        if ( v208 )
          break;
        if ( v204 == 1 )
        {
          v201 = v205;
          v200 = v320;
          goto LABEL_452;
        }
        v204 = (v204 + 1) >> 1;
      }
      v201 = v205;
      v200 = v320;
      v210 = &v208->m128i_i8[v206 * 8];
      *v208 = _mm_loadu_si128(v320);
      v208[1].m128i_i64[0] = v320[1].m128i_i64[0];
      v211 = &v208[1].m128i_i8[8];
      if ( v206 == 3 )
      {
        v214 = v209;
      }
      else
      {
        do
        {
          v212 = _mm_loadu_si128((const __m128i *)(v211 - 24));
          v213 = *((_QWORD *)v211 - 1);
          v211 += 24;
          *(__m128i *)(v211 - 24) = v212;
          *((_QWORD *)v211 - 1) = v213;
        }
        while ( v210 != v211 );
        v214 = (__m128i *)((char *)v209 + 8 * v206 - 24);
      }
      *v320 = _mm_loadu_si128(v214);
      v320[1].m128i_i64[0] = v214[1].m128i_i64[0];
      if ( v329 == v204 )
      {
        v215 = (__m128i *)((char *)v320 + v206 * 8);
        goto LABEL_269;
      }
      sub_7F8EC0(v320, v201, v209, v204);
    }
    operator delete(v209, v207);
    v199 = v345;
    v200 = (__m128i *)src;
  }
  if ( v199 )
  {
    v216 = 0;
    while ( 1 )
    {
      v217 = &v200->m128i_i8[24 * v216];
      v218 = *((_QWORD *)v217 + 1);
      v219 = *((_QWORD *)v217 + 2);
      if ( v219 )
      {
        if ( !v218 )
          goto LABEL_297;
      }
      else if ( v218 )
      {
        goto LABEL_297;
      }
      if ( v219 | v218 )
        break;
LABEL_299:
      if ( ++v216 == v199 )
        goto LABEL_300;
    }
    v220 = *(_QWORD *)(v218 + 8);
    if ( *(_QWORD *)(v219 + 8) )
    {
      v221 = *(const char **)v219;
      v222 = haystack;
      if ( v220 )
        goto LABEL_278;
LABEL_279:
      if ( strcmp(v222, v221) )
        goto LABEL_297;
      v223 = *(_QWORD *)(v218 + 32);
      if ( *(_QWORD *)(v219 + 32) )
        goto LABEL_281;
LABEL_346:
      v224 = byte_23ADD24;
      if ( !v223 )
      {
        v226 = *(_QWORD *)(v218 + 56);
        if ( !*(_QWORD *)(v219 + 56) )
          goto LABEL_348;
LABEL_285:
        v227 = *(const char **)(v219 + 48);
        v228 = byte_23ADD24;
        if ( v226 )
          goto LABEL_286;
LABEL_287:
        if ( strcmp(v228, v227) )
          goto LABEL_297;
        v229 = *(_QWORD *)(v218 + 80);
        if ( *(_QWORD *)(v219 + 80) )
          goto LABEL_289;
LABEL_350:
        v230 = haystack;
        if ( v229 )
          goto LABEL_290;
        goto LABEL_292;
      }
LABEL_282:
      v225 = *(const char **)(v218 + 24);
    }
    else
    {
      v221 = haystack;
      if ( v220 )
      {
LABEL_278:
        v222 = *(const char **)v218;
        goto LABEL_279;
      }
      v223 = *(_QWORD *)(v218 + 32);
      if ( !*(_QWORD *)(v219 + 32) )
        goto LABEL_346;
LABEL_281:
      v224 = *(const char **)(v219 + 24);
      v225 = byte_23ADD24;
      if ( v223 )
        goto LABEL_282;
    }
    if ( strcmp(v225, v224) )
      goto LABEL_297;
    v226 = *(_QWORD *)(v218 + 56);
    if ( *(_QWORD *)(v219 + 56) )
      goto LABEL_285;
LABEL_348:
    v227 = byte_23ADD24;
    if ( v226 )
    {
LABEL_286:
      v228 = *(const char **)(v218 + 48);
      goto LABEL_287;
    }
    v229 = *(_QWORD *)(v218 + 80);
    if ( !*(_QWORD *)(v219 + 80) )
      goto LABEL_350;
LABEL_289:
    v230 = *(const char **)(v219 + 72);
    v231 = haystack;
    if ( v229 )
LABEL_290:
      v231 = *(const char **)(v218 + 72);
    if ( strcmp(v231, v230) )
      goto LABEL_297;
LABEL_292:
    v232 = *(_QWORD *)(v218 + 104);
    if ( *(_QWORD *)(v219 + 104) )
    {
      v233 = *(const char **)(v219 + 96);
      v234 = haystack;
      if ( !v232 )
      {
LABEL_294:
        if ( strcmp(v234, v233) )
          goto LABEL_297;
LABEL_295:
        if ( *(_QWORD *)(v218 + 120) != *(_QWORD *)(v219 + 120)
          || *(_QWORD *)(v219 + 128) != *(_QWORD *)(v218 + 128)
          || (*(_QWORD *)(v218 + 128) & 0xF00000LL) == 0x500000 && *(_DWORD *)(v218 + 160) != *(_DWORD *)(v219 + 160)
          || *(_QWORD *)(v218 + 408) != *(_QWORD *)(v219 + 408) )
        {
LABEL_297:
          v235 = *(void (**)())(*(_QWORD *)a1 + 72LL);
          if ( v235 != nullsub_274 )
          {
            ((void (__fastcall *)(__int64, _QWORD, __int64, __int64))v235)(a1, *((unsigned int *)v217 + 1), v218, v219);
            v200 = (__m128i *)src;
          }
          goto LABEL_299;
        }
        goto LABEL_299;
      }
    }
    else
    {
      v233 = haystack;
      if ( !v232 )
        goto LABEL_295;
    }
    v234 = *(const char **)(v218 + 96);
    goto LABEL_294;
  }
LABEL_300:
  if ( v200 )
  {
    *(_QWORD *)&v345 = 0;
    qfree(v200);
  }
  v236 = (char **)&v354;
  do
  {
    v236 -= 6;
    if ( v236[3] )
    {
      v237 = v236[4];
      v238 = 0;
      v239 = nullptr;
      if ( v237 )
      {
        do
        {
          v240 = &v236[3][v238];
          v241 = *((void **)v240 + 12);
          if ( v241 )
          {
            *((_QWORD *)v240 + 13) = 0;
            qfree(v241);
          }
          v242 = *((void **)v240 + 9);
          if ( v242 )
          {
            *((_QWORD *)v240 + 10) = 0;
            qfree(v242);
          }
          v243 = *((void **)v240 + 6);
          if ( v243 )
          {
            *((_QWORD *)v240 + 7) = 0;
            qfree(v243);
          }
          v244 = *((void **)v240 + 3);
          if ( v244 )
          {
            *((_QWORD *)v240 + 4) = 0;
            qfree(v244);
          }
          v245 = *(void **)v240;
          if ( *(_QWORD *)v240 )
          {
            *((_QWORD *)v240 + 1) = 0;
            qfree(v245);
          }
          ++v239;
          v238 += 416;
        }
        while ( v237 != v239 );
      }
      v236[4] = nullptr;
      qfree(v236[3]);
    }
  }
  while ( v236 != &s1 );
  s1 = nullptr;
  v246 = 0;
  src = nullptr;
  memset(v349, 0, sizeof(v349));
  *(_OWORD *)v350 = 0;
  v345 = 0;
  while ( 2 )
  {
    v247 = v246;
    v248 = v347[v246];
    v249 = *(_QWORD **)v248;
    v250 = *(unsigned __int8 **)(*(_QWORD *)v248 + 160LL);
    if ( v250 )
    {
      v251 = (unsigned __int8 *)v249[21];
      if ( v251 )
      {
        v321 = v246;
        v309 = v246;
        extract_insn_opreprs_from_metadata((__int64 *)v236, v250, v251);
        v249 = *(_QWORD **)v248;
        v247 = v321;
        v246 = v309;
      }
    }
    v252 = v249[22];
    if ( v252 )
    {
      v253 = v249[23];
      if ( v253 )
      {
        v322 = v247;
        v310 = v246;
        extract_insn_opreprs_from_metadata_ex((__int64)v236, v252, v253);
        v247 = v322;
        v246 = v310;
      }
    }
    if ( !v246 )
    {
      if ( (char *)*((_QWORD *)&v345 + 1) < v349[0] )
      {
        v327 = v247;
        src = (void *)qvector_reserve(&src, src, v349[0], 24);
        v247 = v327;
        v246 = 0;
      }
      v254 = (unsigned int)v236[1];
      if ( v254 > 0 )
        goto LABEL_327;
      goto LABEL_336;
    }
    v254 = (unsigned int)v236[1];
    if ( v254 <= 0 )
      break;
LABEL_327:
    v255 = 0;
    for ( ii = 0; ii < v254; ++ii )
    {
      v257 = v345;
      v258 = (char *)src;
      v259 = &(*v236)[v255];
      v260 = *(_QWORD *)v259;
      if ( !(_QWORD)v345 )
        goto LABEL_341;
      v261 = (char *)src;
      v262 = 0;
      while ( 1 )
      {
        v263 = v261;
        if ( *(_DWORD *)v259 == *(_DWORD *)v261 && *((_DWORD *)v259 + 1) == *((_DWORD *)v261 + 1) )
          break;
        ++v262;
        v261 += 24;
        if ( (_QWORD)v345 == v262 )
          goto LABEL_341;
      }
      if ( !v261 )
      {
LABEL_341:
        if ( *((_QWORD *)&v345 + 1) < (unsigned __int64)(v345 + 1) )
        {
          v323 = v247;
          v312 = v246;
          src = (void *)qvector_reserve(&src, src, v345 + 1, 24);
          v257 = v345;
          v258 = (char *)src;
          v247 = v323;
          v246 = v312;
        }
        v263 = &v258[24 * v257];
        *(_OWORD *)(v263 + 8) = 0;
        *(_QWORD *)v263 = -1;
        *(_QWORD *)&v345 = v345 + 1;
        *(_QWORD *)v263 = v260;
      }
      v255 += 2192;
      *(_QWORD *)&v263[8 * v247 + 8] = v259;
    }
    if ( v246 != 1 )
    {
LABEL_336:
      v236 += 3;
      v246 = 1;
      continue;
    }
    break;
  }
  v264 = v345;
  v265 = (__m128i *)src;
  v266 = (__m128i *)((char *)src + 24 * v345);
  if ( src != v266 )
  {
    v267 = 0xAAAAAAAAAAAAAAABLL * ((24 * (__int64)v345) >> 3) + 1;
    if ( v267 <= 1 )
    {
      v279 = (__m128i *)src;
      v274 = 0;
      v271 = nullptr;
      if ( v267 / 2 )
      {
LABEL_448:
        v274 = 0;
        v271 = nullptr;
        sub_7F50C0(v265->m128i_i8, v266->m128i_i8);
      }
      else
      {
LABEL_361:
        sub_7F7230(v265, v279, v266, v271);
      }
    }
    else
    {
      dest = (__m128i *)src;
      v268 = v267 / 2;
      v311 = v267 / 2;
      while ( 1 )
      {
        v269 = 3 * v268;
        v270 = (__m128i *)operator new(24 * v268, (const std::nothrow_t *)&std::nothrow);
        v271 = v270;
        if ( v270 )
          break;
        if ( v268 == 1 )
        {
          v265 = dest;
          goto LABEL_448;
        }
        v268 = (v268 + 1) >> 1;
      }
      v265 = dest;
      v272 = &v270->m128i_i8[v269 * 8];
      v273 = v268;
      v274 = 24 * v268;
      *v270 = _mm_loadu_si128(dest);
      v270[1].m128i_i64[0] = dest[1].m128i_i64[0];
      v275 = &v270[1].m128i_i8[8];
      if ( v269 == 3 )
      {
        v278 = v271;
      }
      else
      {
        do
        {
          v276 = _mm_loadu_si128((const __m128i *)(v275 - 24));
          v277 = *((_QWORD *)v275 - 1);
          v275 += 24;
          *(__m128i *)(v275 - 24) = v276;
          *((_QWORD *)v275 - 1) = v277;
        }
        while ( v275 != v272 );
        v278 = (__m128i *)((char *)v271 + 8 * v269 - 24);
      }
      *dest = _mm_loadu_si128(v278);
      dest[1].m128i_i64[0] = v278[1].m128i_i64[0];
      if ( v273 == v311 )
      {
        v279 = (__m128i *)((char *)dest + v269 * 8);
        goto LABEL_361;
      }
      sub_7F9470(dest, v266, v271, v273);
    }
    operator delete(v271, v274);
    v264 = v345;
    v265 = (__m128i *)src;
  }
  if ( v264 )
  {
    for ( jj = 0; jj != v264; ++jj )
    {
      v281 = (unsigned int *)v265 + 6 * jj;
      v282 = *((_QWORD *)v281 + 1);
      v283 = *((_QWORD *)v281 + 2);
      if ( v283 )
      {
        if ( !v282 )
          goto LABEL_391;
      }
      else if ( v282 )
      {
        goto LABEL_391;
      }
      if ( v283 | v282 )
      {
        v284 = *(_QWORD *)(v283 + 8);
        v285 = *(_QWORD *)(v282 + 8);
        v286 = 40;
        v287 = 0;
        while ( v285 >= v284 && v284 >= v285 )
        {
          if ( v287 > 7
            || (v288 = 0,
                v289 = 4 * (v287 + (v287 > 1) + 5),
                v290 = 15LL << v289,
                v291 = 5LL << v289,
                v292 = 1,
                (v285 & v290) == v291) )
          {
            v294 = *(_DWORD *)(v282 + v286);
            v295 = *(_DWORD *)(v283 + v286);
            if ( v294 < v295 )
              break;
            v288 = v295 < v294;
            v292 = v295 >= v294;
          }
          ++v287;
          v286 += 272;
          if ( v287 == 8 || !v292 )
          {
            if ( v288 )
              break;
            goto LABEL_376;
          }
        }
LABEL_391:
        v296 = *(void (**)())(*(_QWORD *)a1 + 80LL);
        if ( v296 != nullsub_275 )
        {
          ((void (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD))v296)(a1, *v281, v281[1], *((_QWORD *)v281 + 1));
          v265 = (__m128i *)src;
        }
      }
LABEL_376:
      ;
    }
  }
  if ( v265 )
  {
    *(_QWORD *)&v345 = 0;
    qfree(v265);
  }
  if ( v349[2] )
  {
    v350[0] = nullptr;
    qfree(v349[2]);
  }
  if ( s1 )
  {
    v349[0] = nullptr;
    qfree(s1);
  }
  if ( ptr[0] )
  {
    ptr[1] = nullptr;
    qfree(ptr[0]);
  }
  if ( v342[0] )
  {
    v342[1] = nullptr;
    qfree(v342[0]);
  }
  return 1;
}
