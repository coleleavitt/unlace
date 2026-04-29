__int64 __fastcall sub_53D00(__int64 a1, __int64 a2, int a3, __int64 a4, double a5, double a6, __m128i a7, __m128 a8)
{
  __int64 v9; // rbx
  __int64 v10; // r12
  const char *v11; // rdx
  __int64 v12; // rax
  __m128i v13; // xmm0
  unsigned __int64 *v15; // rax
  __m128i v16; // xmm1
  __m128 si128; // xmm0
  const char *v18; // r13
  double v19; // rax
  __int64 v20; // rax
  const char *v21; // r14
  __int128 v22; // kr00_16
  __int64 v23; // rax
  _QWORD *v24; // rbx
  void *v25; // rdi
  _QWORD *v26; // rbx
  void *v27; // rdi
  _QWORD *v28; // rbx
  _QWORD *v29; // rax
  void *v30; // r14
  __int64 v31; // rdi
  _QWORD *v32; // rbx
  _QWORD *v33; // rax
  void *v34; // r14
  __int64 v35; // rdi
  const char *v36; // r13
  unsigned __int64 *v37; // r14
  __int64 v38; // rax
  char **v39; // rax
  const char *v40; // r13
  char **v41; // rdi
  char *v42; // rsi
  char *v43; // rdx
  __m128i *v44; // rax
  __m128i *v45; // rsi
  __int64 v46; // rcx
  __int64 v47; // rdx
  unsigned __int64 v48; // rdx
  unsigned __int64 v49; // r13
  unsigned __int64 v50; // r13
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rax
  __int128 v54; // rax
  __int64 v55; // rcx
  __m128i v56; // xmm0
  _QWORD *v57; // rax
  _QWORD *v58; // rdi
  __int64 v59; // rsi
  __int64 v60; // rcx
  __m128i v61; // xmm0
  __int64 v62; // r13
  __int64 v63; // rcx
  __m128i v64; // kr20_16
  __int64 v65; // rax
  __m128i *v66; // rsi
  __m128i *v67; // r13
  __int64 v68; // r8
  __int64 v69; // r14
  __int64 v70; // rdi
  __m128i v71; // xmm0
  __int64 v72; // r14
  unsigned __int8 v73; // al
  unsigned __int8 v74; // r13
  __m128i v75; // xmm1
  __int64 v76; // rdx
  __int64 v77; // r14
  unsigned __int64 v78; // rsi
  __m128 *v79; // rax
  unsigned __int64 v80; // r14
  _QWORD *v81; // rsi
  _QWORD *v82; // rax
  const __m128i *v83; // r14
  const __m128i *v84; // r13
  _QWORD *v85; // rax
  unsigned __int64 v86; // rsi
  _QWORD *v87; // rdi
  _QWORD *v88; // rsi
  char **v89; // r8
  __int64 v90; // rax
  __m128i v91; // xmm0
  __int64 v92; // r9
  char *v93; // rdx
  __m128 *v94; // rax
  _QWORD *v95; // r13
  char v96; // r14
  __int64 v97; // rax
  _QWORD *v98; // rax
  _QWORD *v99; // rsi
  char *v100; // rdi
  __int64 v101; // rcx
  __int64 v102; // rdx
  char **v103; // rax
  _QWORD *v104; // r13
  unsigned __int64 v105; // r12
  _QWORD *v106; // rax
  __int64 v107; // rax
  _QWORD *v108; // rax
  unsigned __int64 v109; // r8
  char **v110; // rax
  char **v111; // rsi
  char **v112; // r14
  __int64 v113; // r13
  unsigned __int64 v114; // r9
  char *v115; // rax
  __int64 v116; // rsi
  __m128 *v117; // rax
  __int64 v118; // rdi
  unsigned __int64 *v119; // rdi
  __int64 (*v120)(void); // rax
  unsigned __int8 v121; // al
  __int64 (*v122)(void); // rax
  unsigned __int64 v123; // rdi
  __int64 v124; // rdi
  __int64 v125; // rdi
  __int8 v126; // al
  __int64 (*v127)(void); // rax
  unsigned __int64 v128; // rdi
  __int64 v129; // rdi
  __int64 v130; // rdi
  __int8 v131; // al
  __int64 (*v132)(void); // rax
  unsigned __int64 v133; // rdi
  __int64 v134; // rdi
  __int64 v135; // rdi
  unsigned __int8 v136; // al
  unsigned __int64 v137; // r14
  __int64 v138; // r13
  bool v139; // cf
  unsigned __int64 v140; // r13
  char **v141; // r13
  char *v142; // rax
  __m128i v143; // xmm0
  __int64 v144; // r14
  __int64 v145; // rcx
  __m128 *v146; // rax
  __m128i v147; // xmm0
  __int64 v148; // rdi
  __m128i v149; // xmm0
  __int64 v150; // r10
  __int64 v151; // rax
  __int64 v152; // r14
  unsigned __int64 v153; // rdx
  __m128 *v154; // rax
  __int64 v155; // rax
  __int64 v156; // r11
  __m128i *v157; // rcx
  __int8 *v158; // rdx
  char v159; // di
  __int64 v160; // rax
  const __m128i **v161; // r8
  _QWORD *v162; // rdx
  __int64 v163; // xmm0_8
  __int64 v164; // r9
  __int64 v165; // rsi
  __int64 v166; // rcx
  __int64 v167; // xmm1_8
  const __m128i *v168; // rdi
  __int64 v169; // rsi
  __int64 v170; // r11
  __int64 v171; // xmm7_8
  __m128i v172; // xmm0
  __int64 v173; // rcx
  __int64 v174; // rcx
  __int64 v175; // r8
  char **v176; // rax
  char **v177; // rsi
  unsigned __int64 v178; // rsi
  _QWORD *v179; // r9
  _QWORD *v180; // rax
  _QWORD *v181; // rdi
  __m128i v182; // xmm0
  char v183; // al
  __int64 v184; // rax
  __int64 v185; // rcx
  __int64 v186; // rsi
  const __m128i *v187; // rdi
  __int64 v188; // rdx
  __m128 v189; // xmm0
  __int64 v190; // xmm1_8
  __int64 v191; // r10
  __m128i v192; // xmm0
  __int64 v193; // rsi
  __m128i v194; // xmm0
  __m128i v195; // xmm0
  __m128i v196; // xmm0
  __m128i v197; // xmm0
  __m128i v198; // xmm0
  __m128 v199; // xmm0
  __int64 v200; // rdi
  __m128i v201; // xmm4
  __int64 v202; // rsi
  __int64 v203; // rcx
  __int64 v204; // r13
  __int64 v205; // r9
  __int64 v206; // r14
  __int64 v207; // rsi
  _QWORD *v208; // rax
  _QWORD *v209; // rsi
  __int64 v210; // rdi
  __int64 v211; // r14
  __int64 v212; // rbx
  __int64 v213; // rax
  __int64 v214; // rsi
  __int64 v215; // r12
  __int64 v216; // r13
  __int64 v217; // rax
  __int64 v218; // rdi
  _QWORD *v219; // rax
  _QWORD *v220; // rsi
  char **v221; // r13
  char *v222; // rax
  const char *v223; // r14
  __int64 v224; // rsi
  __int64 v225; // rax
  __int64 v226; // rdx
  const __m128i *v227; // rdi
  __int64 v228; // r13
  __int64 v229; // rsi
  __int64 v230; // rcx
  const __m128i *v231; // rax
  __m128i v232; // xmm0
  __int64 v233; // rsi
  __int64 v234; // rcx
  _QWORD *v235; // rdx
  _QWORD *v236; // rax
  __int64 v237; // rdx
  __m128i v238; // xmm0
  const __m128i *v239; // r14
  __int64 v240; // r13
  __int64 v241; // rcx
  unsigned __int64 v242; // rsi
  __m128 *v243; // rax
  __m128i *v244; // rax
  __int64 v245; // rax
  const __m128i *v246; // rdi
  __int64 v247; // rax
  __int64 v248; // rcx
  __int64 v249; // rsi
  __int64 v250; // r11
  const __m128i *v251; // rdx
  __m128i v252; // xmm0
  __int64 v253; // rdx
  const __m128i *v254; // rdi
  __int64 v255; // r11
  __int64 v256; // rsi
  __int64 v257; // r10
  __int64 v258; // rcx
  const __m128i *v259; // rax
  __m128i v260; // xmm0
  __m128i v261; // xmm0
  __int64 v262; // rax
  __int64 v263; // rsi
  const __m128i *v264; // rdi
  __int64 v265; // r10
  __int64 v266; // rcx
  __int64 v267; // r11
  const __m128i *v268; // rdx
  __m128i v269; // xmm0
  __int64 v270; // r10
  __int64 v271; // rax
  const __m128i *v272; // rdi
  __int64 v273; // r10
  __int64 v274; // rax
  const __m128i *v275; // rcx
  __int64 v276; // rsi
  const __m128i *v277; // rdx
  __m128i v278; // xmm0
  __int64 v279; // rdi
  __int64 v280; // rbx
  __int64 v281; // r13
  __int64 v282; // rdx
  __int64 v283; // r14
  __int64 v284; // rax
  __int64 v285; // rdi
  __int64 v286; // rcx
  const __m128i *v287; // rdi
  __int64 v288; // r9
  __int64 v289; // rsi
  __int64 v290; // xmm0_8
  __int64 v291; // xmm1_8
  __int64 v292; // rax
  const __m128i *v293; // rdx
  __m128i v294; // xmm2
  __int64 v295; // rax
  const __m128i *v296; // rdi
  __int64 v297; // rcx
  __int64 v298; // r10
  __int64 v299; // r8
  __int64 v300; // rsi
  __int64 v301; // rax
  const __m128i *v302; // rdx
  __m128i v303; // xmm0
  __int64 v304; // rdx
  __m128i v305; // xmm0
  __int64 v306; // rax
  __m128i v307; // xmm0
  __int64 v308; // rax
  __m128i v309; // xmm0
  __int64 *v310; // rdi
  __m128i v311; // xmm0
  __m128i v312; // [rsp+10h] [rbp-510h] BYREF
  __m128i v313; // [rsp+20h] [rbp-500h] BYREF
  __m128i v314; // [rsp+30h] [rbp-4F0h] BYREF
  __m128i v315; // [rsp+40h] [rbp-4E0h] BYREF
  _QWORD *v316; // [rsp+50h] [rbp-4D0h]
  _QWORD *v317; // [rsp+58h] [rbp-4C8h]
  _QWORD *v318; // [rsp+60h] [rbp-4C0h]
  _QWORD *v319; // [rsp+68h] [rbp-4B8h]
  _QWORD *v320; // [rsp+70h] [rbp-4B0h]
  __m128i *v321; // [rsp+78h] [rbp-4A8h]
  __m128i *v322; // [rsp+80h] [rbp-4A0h]
  int v323; // [rsp+8Ch] [rbp-494h]
  char **v324; // [rsp+90h] [rbp-490h]
  __int64 v325; // [rsp+98h] [rbp-488h]
  __int64 v326; // [rsp+A8h] [rbp-478h] BYREF
  const char *v327; // [rsp+B0h] [rbp-470h] BYREF
  __int64 v328; // [rsp+B8h] [rbp-468h] BYREF
  unsigned __int64 *v329; // [rsp+C0h] [rbp-460h] BYREF
  unsigned __int64 v330; // [rsp+C8h] [rbp-458h] BYREF
  unsigned __int64 *v331; // [rsp+D0h] [rbp-450h]
  double v332[2]; // [rsp+E0h] [rbp-440h] BYREF
  __int64 v333; // [rsp+F0h] [rbp-430h] BYREF
  __int128 v334; // [rsp+F8h] [rbp-428h]
  const __m128i *v335; // [rsp+110h] [rbp-410h] BYREF
  __int128 v336; // [rsp+118h] [rbp-408h]
  const __m128i *v337; // [rsp+130h] [rbp-3F0h] BYREF
  __int128 v338; // [rsp+138h] [rbp-3E8h]
  __m128i v339; // [rsp+150h] [rbp-3D0h] BYREF
  __m128i v340; // [rsp+160h] [rbp-3C0h] BYREF
  __int64 (***v341)(void); // [rsp+170h] [rbp-3B0h] BYREF
  __m128 v342; // [rsp+178h] [rbp-3A8h]
  const char *v343; // [rsp+190h] [rbp-390h] BYREF
  const char *v344; // [rsp+198h] [rbp-388h]
  char v345; // [rsp+1A8h] [rbp-378h]
  void *v346; // [rsp+1B0h] [rbp-370h] BYREF
  __int64 v347; // [rsp+1B8h] [rbp-368h]
  void *v348; // [rsp+1C0h] [rbp-360h]
  __int64 v349; // [rsp+1C8h] [rbp-358h]
  int v350; // [rsp+1D0h] [rbp-350h]
  __int64 v351; // [rsp+1D8h] [rbp-348h]
  _QWORD v352[2]; // [rsp+1E0h] [rbp-340h] BYREF
  void *s; // [rsp+1F0h] [rbp-330h] BYREF
  __int64 v354; // [rsp+1F8h] [rbp-328h]
  void *v355; // [rsp+200h] [rbp-320h]
  __int64 v356; // [rsp+208h] [rbp-318h]
  int v357; // [rsp+210h] [rbp-310h]
  __int64 v358; // [rsp+218h] [rbp-308h]
  _QWORD v359[2]; // [rsp+220h] [rbp-300h] BYREF
  void *v360; // [rsp+230h] [rbp-2F0h] BYREF
  __int64 v361; // [rsp+238h] [rbp-2E8h]
  void *v362; // [rsp+240h] [rbp-2E0h]
  __int64 v363; // [rsp+248h] [rbp-2D8h]
  int v364; // [rsp+250h] [rbp-2D0h]
  __int64 v365; // [rsp+258h] [rbp-2C8h]
  _QWORD v366[2]; // [rsp+260h] [rbp-2C0h] BYREF
  void *v367; // [rsp+270h] [rbp-2B0h] BYREF
  __int64 v368; // [rsp+278h] [rbp-2A8h]
  void *v369; // [rsp+280h] [rbp-2A0h]
  __int64 v370; // [rsp+288h] [rbp-298h]
  int v371; // [rsp+290h] [rbp-290h]
  __int64 v372; // [rsp+298h] [rbp-288h]
  _QWORD v373[2]; // [rsp+2A0h] [rbp-280h] BYREF
  __m256i v374; // [rsp+2B0h] [rbp-270h] BYREF
  __m128i v375; // [rsp+2D0h] [rbp-250h] BYREF
  __m128i v376; // [rsp+2E0h] [rbp-240h] BYREF
  __m128i v377; // [rsp+2F0h] [rbp-230h] BYREF
  __m128i v378; // [rsp+300h] [rbp-220h] BYREF
  __int64 v379; // [rsp+310h] [rbp-210h]
  char v380; // [rsp+318h] [rbp-208h]
  __m128i v381; // [rsp+320h] [rbp-200h] BYREF
  __int64 v382; // [rsp+330h] [rbp-1F0h]
  __m128i v383; // [rsp+380h] [rbp-1A0h]
  __m128 v384; // [rsp+390h] [rbp-190h]
  __int64 v385; // [rsp+3A0h] [rbp-180h]
  int v386; // [rsp+3A8h] [rbp-178h]
  __m128i v387; // [rsp+3B0h] [rbp-170h] BYREF
  _BYTE v388[24]; // [rsp+3C0h] [rbp-160h] BYREF
  __int64 v389; // [rsp+3D8h] [rbp-148h]
  __m128i v390; // [rsp+3E0h] [rbp-140h] BYREF
  __int64 v391; // [rsp+3F0h] [rbp-130h]
  __m128i v392; // [rsp+3F8h] [rbp-128h] BYREF
  char v393; // [rsp+408h] [rbp-118h]
  __m128i v394; // [rsp+410h] [rbp-110h] BYREF
  __m128i v395; // [rsp+420h] [rbp-100h] BYREF
  __int64 v396; // [rsp+430h] [rbp-F0h]
  int v397; // [rsp+438h] [rbp-E8h]
  char v398; // [rsp+440h] [rbp-E0h]
  __m256i v399; // [rsp+450h] [rbp-D0h] BYREF
  __m128i v400; // [rsp+470h] [rbp-B0h] BYREF
  _BYTE v401[24]; // [rsp+480h] [rbp-A0h] BYREF
  __int64 v402; // [rsp+498h] [rbp-88h]
  __m128i v403; // [rsp+4A0h] [rbp-80h] BYREF
  __int64 v404; // [rsp+4B0h] [rbp-70h]
  __m128i v405; // [rsp+4B8h] [rbp-68h]
  __m128 v406; // [rsp+4C8h] [rbp-58h]
  __int64 v407; // [rsp+4D8h] [rbp-48h]
  int v408; // [rsp+4E0h] [rbp-40h]
  unsigned __int64 v409; // [rsp+4E8h] [rbp-38h]

  v9 = a2;
  v323 = a3;
  v325 = a4;
  v409 = __readfsqword(0x28u);
  if ( !a4 )
  {
    if ( !*(_BYTE *)(a2 + 112) )
    {
      if ( (unsigned __int8)sub_4E700() )
        goto LABEL_2;
      *(_BYTE *)(a2 + 112) = 1;
    }
    *(_BYTE *)(a1 + 24) = 0;
    return a1;
  }
LABEL_2:
  v10 = (**(__int64 (__fastcall ***)(__int64))(*(_QWORD *)a2 + 40LL))(*(_QWORD *)a2 + 40LL);
  (**(void (__fastcall ***)(const char **, __int64, __int64))(*(_QWORD *)a2 + 56LL))(&v343, *(_QWORD *)a2 + 56LL, v10);
  if ( v345 )
  {
    v11 = s1;
    if ( v344 )
      v11 = v343;
    sub_19A90((__int64)&v399, (__int64)"Error getting PE64 excdir bounds: %s", v11);
    v12 = v399.m256i_i64[0];
    v13 = _mm_loadu_si128((const __m128i *)&v399.m256i_u64[1]);
    *(_BYTE *)(a1 + 24) = 1;
    *(_QWORD *)a1 = v12;
    *(__m128i *)(a1 + 8) = v13;
    goto LABEL_6;
  }
  v15 = *(unsigned __int64 **)(a2 + 88);
  v16.m128i_i64[0] = 0;
  si128.m128_u64[0] = 1065353216;
  v319 = v352;
  v18 = v343;
  v331 = v15;
  v19 = *(double *)(a2 + 104);
  v346 = v352;
  v332[0] = v19;
  v20 = *(_QWORD *)a2;
  v318 = v359;
  s = v359;
  v317 = v366;
  v360 = v366;
  v326 = v20;
  v333 = 0;
  v335 = nullptr;
  v347 = 1;
  v348 = nullptr;
  v349 = 0;
  v351 = 0;
  v352[0] = 0;
  v337 = nullptr;
  v354 = 1;
  v355 = nullptr;
  v356 = 0;
  v358 = 0;
  v359[0] = 0;
  v334 = 0;
  v336 = 0;
  v350 = 1065353216;
  v338 = 0;
  v357 = 1065353216;
  v361 = 1;
  v21 = v344;
  v362 = nullptr;
  v363 = 0;
  v365 = 0;
  v366[0] = 0;
  v316 = v373;
  v367 = v373;
  v368 = 1;
  v369 = nullptr;
  v370 = 0;
  v372 = 0;
  v373[0] = 0;
  v373[1] = v20;
  v364 = 1065353216;
  v371 = 1065353216;
  if ( v344 < v343 )
  {
    sub_19A90((__int64)&v399, (__int64)"[%a,%a): bad range", v343, v344);
LABEL_12:
    v22 = *(_OWORD *)v399.m256i_i8;
    v23 = v399.m256i_i64[2];
LABEL_13:
    *(_OWORD *)a1 = v22;
    *(_QWORD *)(a1 + 16) = v23;
    *(_BYTE *)(a1 + 24) = 1;
    goto LABEL_14;
  }
  v321 = &v387;
  sub_74B30(&v387, a2 + 32, v343);
  if ( !v388[0] )
  {
    sub_19A90((__int64)&v399, (__int64)"[%a,%a): no associated segment", v18, v21);
    goto LABEL_12;
  }
  if ( (unsigned __int64)(v21 - 1) < v387.m128i_i64[0] || (unsigned __int64)(v21 - 1) >= v387.m128i_i64[1] )
  {
    sub_19A90(
      (__int64)&v399,
      (__int64)"[%a,%a): does not fit in segment [%a,%a)",
      COERCE_DOUBLE(1065353216),
      0.0,
      *(double *)a7.m128i_i64,
      *(double *)a8.m128_u64);
    v23 = v399.m256i_i64[2];
    v22 = *(_OWORD *)v399.m256i_i8;
    goto LABEL_13;
  }
  v327 = v343;
  if ( v343 == v344 )
  {
LABEL_121:
    v83 = v335;
    v84 = &v335[2 * v336];
    v325 = v9 + 128;
    v324 = (char **)&v346;
    if ( v84 != v335 )
    {
      do
      {
        v85 = *(_QWORD **)(v9 + 136);
        v86 = v83[1].m128i_u64[1];
        if ( v85 )
        {
          v87 = (_QWORD *)v325;
          do
          {
            if ( v85[4] >= v86 )
            {
              v87 = v85;
              v85 = (_QWORD *)v85[2];
            }
            else
            {
              v85 = (_QWORD *)v85[3];
            }
          }
          while ( v85 );
          if ( v87 != (_QWORD *)v325 && v86 >= v87[4] )
          {
            v108 = *(_QWORD **)(v9 + 184);
            v88 = (_QWORD *)(v9 + 176);
            if ( !v108 )
              goto LABEL_140;
            v109 = v87[5];
            v88 = (_QWORD *)(v9 + 176);
            do
            {
              if ( v108[4] >= v109 )
              {
                v88 = v108;
                v108 = (_QWORD *)v108[2];
              }
              else
              {
                v108 = (_QWORD *)v108[3];
              }
            }
            while ( v108 );
            if ( v88 == (_QWORD *)(v9 + 176) || v109 < v88[4] )
            {
LABEL_140:
              v374.m256i_i64[0] = (__int64)(v87 + 5);
              v88 = sub_52D20((_QWORD *)(v9 + 168), v88, (__int64)&unk_78AE8, (unsigned __int64 **)&v374);
            }
            v89 = sub_52EB0(v324, v88 + 5);
            v90 = (__int64)v89[1];
            v91 = _mm_loadl_epi64(v83);
            v16 = _mm_loadl_epi64((const __m128i *)&v83->m128i_u64[1]);
            v92 = v83[1].m128i_i64[0];
            if ( (unsigned __int64)v89[2] < v90 + 1 )
            {
              v314.m128i_i64[1] = (__int64)v89[2];
              v315.m128i_i64[0] = v92;
              v322 = (__m128i *)v89;
              v315.m128i_i64[1] = v16.m128i_i64[0];
              v320 = (_QWORD *)v91.m128i_i64[0];
              v160 = qvector_reserve(v89, 0, v90 + 1, 24);
              v161 = (const __m128i **)v322;
              v162 = (_QWORD *)v160;
              v163 = (__int64)v320;
              v164 = v315.m128i_i64[0];
              v165 = v322->m128i_i64[1];
              v166 = v322[1].m128i_i64[0];
              v322[1].m128i_i64[0] = v314.m128i_i64[1];
              v167 = v315.m128i_i64[1];
              v168 = *v161;
              v169 = v165 - 1;
              if ( v169 >= 0 )
              {
                v170 = v325;
                v171 = v163;
                do
                {
                  v172 = _mm_loadu_si128(v168);
                  v160 += 24;
                  v168 = (const __m128i *)((char *)v168 + 24);
                  *(__m128i *)(v160 - 24) = v172;
                  *(_QWORD *)(v160 - 8) = v168[-1].m128i_i64[1];
                  v139 = v169-- == 0;
                }
                while ( !v139 );
                v325 = v170;
                v168 = *v161;
                v163 = v171;
              }
              v313.m128i_i64[0] = v166;
              v314.m128i_i64[1] = v164;
              v320 = v162;
              v322 = (__m128i *)v161;
              v315.m128i_i64[0] = v167;
              v315.m128i_i64[1] = v163;
              qfree(v168);
              v89 = (char **)v322;
              v93 = (char *)v320;
              v173 = v313.m128i_i64[0];
              v92 = v314.m128i_i64[1];
              v16 = _mm_loadl_epi64(&v315);
              v90 = v322->m128i_i64[1];
              v322->m128i_i64[0] = (__int64)v320;
              v91 = _mm_loadl_epi64((const __m128i *)&v315.m128i_u64[1]);
              v89[2] = (char *)v173;
            }
            else
            {
              v93 = *v89;
            }
            si128 = (__m128)_mm_unpacklo_epi64(v91, v16);
            v94 = (__m128 *)&v93[24 * v90];
            v94[1].m128_u64[0] = v92;
            *v94 = si128;
            ++v89[1];
          }
        }
        v83 += 2;
      }
      while ( v84 != v83 );
    }
    v315.m128i_i64[1] = (__int64)&v360;
    v320 = v355;
    v322 = &v339;
    if ( v355 )
    {
      while ( 1 )
      {
        v95 = v320;
        v96 = *(_BYTE *)sub_53130((char **)v315.m128i_i64[1], v320 + 1);
        v97 = v95[3];
        v325 = v95[2];
        v324 = (char **)(v325 + 8 * v97);
        if ( v324 != (char **)v325 )
          break;
LABEL_157:
        v320 = (_QWORD *)*v320;
        if ( !v320 )
          goto LABEL_158;
      }
      while ( 1 )
      {
        v98 = *(_QWORD **)(v9 + 184);
        v99 = (_QWORD *)(v9 + 176);
        v100 = *(char **)v325;
        v387.m128i_i64[0] = *(_QWORD *)v325;
        if ( !v98 )
          goto LABEL_154;
        do
        {
          while ( 1 )
          {
            v101 = v98[2];
            v102 = v98[3];
            if ( v98[4] < (unsigned __int64)v100 )
              break;
            v99 = v98;
            v98 = (_QWORD *)v98[2];
            if ( !v101 )
              goto LABEL_152;
          }
          v98 = (_QWORD *)v98[3];
        }
        while ( v102 );
LABEL_152:
        if ( v99 == (_QWORD *)(v9 + 176) || (unsigned __int64)v100 < v99[4] )
        {
LABEL_154:
          v381.m128i_i64[0] = (__int64)v321;
          v99 = sub_52D20((_QWORD *)(v9 + 168), v99, (__int64)&unk_78AE8, (unsigned __int64 **)&v381);
        }
        sub_52AD0(
          (__int64)&v399,
          v9,
          v99[5],
          (const __m128i *)(v99 + 5),
          &v346,
          *(double *)si128.m128_u64,
          *(double *)v16.m128i_i64,
          *(double *)a7.m128i_i64);
        if ( v399.m256i_i8[24] )
          goto LABEL_228;
        v103 = sub_53130((char **)(v9 + 416), v99 + 5);
        v325 += 8;
        *(_BYTE *)v103 = v96;
        if ( v324 == (char **)v325 )
          goto LABEL_157;
      }
    }
LABEL_158:
    v104 = *(_QWORD **)(v9 + 376);
    if ( !v104 )
    {
LABEL_165:
      v107 = v9 + 120;
      if ( (v323 & 2) != 0 )
      {
        sub_1DC80();
        v325 = v9 + 120;
        sub_19770(v9 + 120);
        *(_BYTE *)(v9 + 112) = 1;
        v107 = v325;
      }
      sub_197D0(v107);
      *(_BYTE *)(a1 + 24) = 0;
      goto LABEL_14;
    }
    while ( 1 )
    {
      v105 = v104[1];
      if ( *(_QWORD *)(v9 + 496) )
      {
        v178 = *(_QWORD *)(v9 + 480);
        v179 = *(_QWORD **)(*(_QWORD *)(v9 + 472) + 8 * (v105 % v178));
        if ( v179 )
        {
          v180 = (_QWORD *)*v179;
          if ( v105 == *(_QWORD *)(*v179 + 8LL) )
          {
LABEL_264:
            if ( v179 && *v179 )
              goto LABEL_164;
          }
          else
          {
            while ( 1 )
            {
              v181 = (_QWORD *)*v180;
              if ( !*v180 )
                break;
              v179 = v180;
              if ( v105 % v178 != v181[1] % v178 )
                break;
              v180 = (_QWORD *)*v180;
              if ( v105 == v181[1] )
                goto LABEL_264;
            }
          }
        }
      }
      else
      {
        v106 = *(_QWORD **)(v9 + 488);
        if ( v106 )
        {
          while ( v105 != v106[1] )
          {
            v106 = (_QWORD *)*v106;
            if ( !v106 )
              goto LABEL_266;
          }
          goto LABEL_164;
        }
      }
LABEL_266:
      sub_19BA0((__int64)v321, (_QWORD *)(v9 + 120), v104[1]);
      if ( v388[8] )
      {
        v306 = v387.m128i_i64[0];
        v307 = _mm_loadu_si128((const __m128i *)&v387.m128i_u64[1]);
        *(_BYTE *)(a1 + 24) = 1;
        *(_QWORD *)a1 = v306;
        *(__m128i *)(a1 + 8) = v307;
        goto LABEL_14;
      }
      v182 = _mm_load_si128(&v387);
      v382 = *(_QWORD *)v388;
      v381 = v182;
      sub_52AD0(
        (__int64)&v399,
        v9,
        v105,
        &v381,
        &v346,
        *(double *)v182.m128i_i64,
        *(double *)v16.m128i_i64,
        *(double *)a7.m128i_i64);
      v183 = v388[8];
      if ( v399.m256i_i8[24] )
      {
        v304 = v399.m256i_i64[0];
        v305 = _mm_loadu_si128((const __m128i *)&v399.m256i_u64[1]);
        *(_BYTE *)(a1 + 24) = 1;
        *(_QWORD *)a1 = v304;
        *(__m128i *)(a1 + 8) = v305;
        if ( v183 && v387.m128i_i64[0] )
        {
          v387.m128i_i64[1] = 0;
          qfree(v387.m128i_i64[0]);
        }
        goto LABEL_14;
      }
      if ( v388[8] && v387.m128i_i64[0] )
      {
        v387.m128i_i64[1] = 0;
        qfree(v387.m128i_i64[0]);
      }
LABEL_164:
      v104 = (_QWORD *)*v104;
      if ( !v104 )
        goto LABEL_165;
    }
  }
  v314.m128i_i32[2] = v323 & 1;
  v324 = (char **)(a2 + 128);
  v322 = (__m128i *)(a2 + 176);
  v320 = (_QWORD *)(a2 + 224);
  while ( 1 )
  {
    if ( v325 && *(_QWORD *)(v325 + 8) && rangeset_t_find_range(v325) )
      goto LABEL_120;
    v36 = v327;
    v37 = v331;
    v339.m128i_i64[0] = sub_73440(v331, v327);
    v339.m128i_i64[1] = sub_73440(v37, v36 + 4);
    v38 = sub_73440(v37, v36 + 8);
    v340.m128i_i64[0] = v38;
    if ( v339.m128i_i64[0] == v339.m128i_i64[1] )
    {
      if ( v339.m128i_i64[0] == v38 && v339.m128i_i64[0] == v10 )
        goto LABEL_120;
    }
    else if ( v339.m128i_i64[1] < (unsigned __int64)v339.m128i_i64[0] )
    {
      sub_19A90(
        (__int64)&v399,
        (__int64)"%a: RUNTIME_FUNCTION{%a,%a,%a} has bad range",
        *(double *)si128.m128_u64,
        *(double *)v16.m128i_i64,
        *(double *)a7.m128i_i64,
        *(double *)a8.m128_u64);
      goto LABEL_228;
    }
    v39 = *(char ***)(v9 + 136);
    v328 = v339.m128i_i64[0];
    v40 = v327;
    v41 = v324;
    if ( !v39 )
      goto LABEL_57;
    do
    {
      while ( 1 )
      {
        v42 = v39[2];
        v43 = v39[3];
        if ( (unsigned __int64)v39[4] < v339.m128i_i64[0] )
          break;
        v41 = v39;
        v39 = (char **)v39[2];
        if ( !v42 )
          goto LABEL_55;
      }
      v39 = (char **)v39[3];
    }
    while ( v43 );
LABEL_55:
    if ( v324 == v41 || v339.m128i_i64[0] < (unsigned __int64)v41[4] )
    {
LABEL_57:
      v329 = (unsigned __int64 *)&v328;
      v41 = (char **)sub_519C0((_QWORD *)(v9 + 120), v41, &v329);
    }
    v41[5] = (char *)v40;
    v44 = *(__m128i **)(v9 + 184);
    if ( !v44 )
    {
      v45 = v322;
LABEL_65:
      v330 = (unsigned __int64)&v327;
      v45 = (__m128i *)sub_52D20((_QWORD *)(v9 + 168), v45, (__int64)&unk_78AE8, (unsigned __int64 **)&v330);
      goto LABEL_66;
    }
    v45 = v322;
    do
    {
      while ( 1 )
      {
        v46 = v44[1].m128i_i64[0];
        v47 = v44[1].m128i_i64[1];
        if ( v44[2].m128i_i64[0] < (unsigned __int64)v327 )
          break;
        v45 = v44;
        v44 = (__m128i *)v44[1].m128i_i64[0];
        if ( !v46 )
          goto LABEL_63;
      }
      v44 = (__m128i *)v44[1].m128i_i64[1];
    }
    while ( v47 );
LABEL_63:
    if ( v322 == v45 || (unsigned __int64)v327 < v45[2].m128i_i64[0] )
      goto LABEL_65;
LABEL_66:
    si128 = (__m128)_mm_load_si128(&v339);
    *(__m128 *)((char *)v45 + 40) = si128;
    v45[3].m128i_i64[1] = v340.m128i_i64[0];
    v315.m128i_i64[1] = v328;
    if ( (v340.m128i_i8[0] & 1) != 0 )
    {
      v48 = v340.m128i_i64[0] ^ 1;
      v340.m128i_i64[0] = v48;
      if ( v48 >= (unsigned __int64)v343 && v48 < (unsigned __int64)v344 )
      {
        v49 = v48 + 12;
        if ( v48 >= 0xFFFFFFFFFFFFFFF4LL )
        {
          sub_19A90((__int64)&v399, (__int64)"[%a,%a): bad range", v48, v48 + 12);
        }
        else
        {
          v315.m128i_i64[0] = v48;
          sub_74B30(v321, v37 + 2, v48);
          if ( v388[0] )
          {
            if ( (unsigned __int64)(v315.m128i_i64[0] + 11) >= v387.m128i_i64[0]
              && (unsigned __int64)(v315.m128i_i64[0] + 11) < v387.m128i_i64[1] )
            {
              v50 = sub_73440(v37, v315.m128i_i64[0]);
              v51 = sub_73440(v37, v315.m128i_i64[0] + 4);
              v52 = v315.m128i_i64[0];
              v315.m128i_i64[0] = v51;
              v53 = sub_73440(v37, v52 + 8);
              v399.m256i_i64[0] = v50;
              v399.m256i_i64[2] = v53;
              v399.m256i_i64[1] = v315.m128i_i64[0];
              v399.m256i_i8[24] = 0;
              if ( (v53 & 1) == 0 )
              {
                if ( v50 >= v315.m128i_i64[1] )
                {
                  v149 = _mm_load_si128(&v339);
                  v150 = v340.m128i_i64[0];
                  *(_QWORD *)&v388[8] = v50;
                  v151 = v336;
                  v152 = (__int64)v335;
                  *(_QWORD *)v388 = v340.m128i_i64[0];
                  v387 = v149;
                  v153 = v336 + 1;
                  if ( v321 < v335 || v321 >= &v335[2 * *((_QWORD *)&v336 + 1)] )
                  {
                    if ( *((_QWORD *)&v336 + 1) < v153 )
                    {
                      v315.m128i_i64[1] = *((_QWORD *)&v336 + 1);
                      v152 = qvector_reserve(&v335, 0, v153, 32);
                      v226 = v152;
                      v227 = v335;
                      v228 = *((_QWORD *)&v336 + 1);
                      v229 = v336 - 1;
                      *((_QWORD *)&v336 + 1) = v315.m128i_i64[1];
                      v230 = v325;
                      v231 = v335;
                      if ( (__int64)v336 - 1 >= 0 )
                      {
                        do
                        {
                          v232 = _mm_loadu_si128(v231);
                          v226 += 32;
                          v231 += 2;
                          *(__m128i *)(v226 - 32) = v232;
                          *(__m128i *)(v226 - 16) = _mm_loadu_si128(v231 - 1);
                          v139 = v229-- == 0;
                        }
                        while ( !v139 );
                        v325 = v230;
                      }
                      qfree(v227);
                      v151 = v336;
                      v335 = (const __m128i *)v152;
                      *((_QWORD *)&v336 + 1) = v228;
                      v153 = v336 + 1;
                    }
                    v174 = v152 + 32 * v151;
                    *(__m128i *)v174 = _mm_load_si128(&v387);
                    si128 = (__m128)_mm_load_si128((const __m128i *)v388);
                    *(__m128 *)(v174 + 16) = si128;
                  }
                  else
                  {
                    v315.m128i_i64[0] = v387.m128i_i64[1];
                    v315.m128i_i64[1] = v387.m128i_i64[0];
                    if ( *((_QWORD *)&v336 + 1) < v153 )
                    {
                      v314.m128i_i64[0] = v340.m128i_i64[0];
                      v313.m128i_i64[0] = *((_QWORD *)&v336 + 1);
                      v152 = qvector_reserve(&v335, 0, v153, 32);
                      v253 = v152;
                      v254 = v335;
                      v255 = *((_QWORD *)&v336 + 1);
                      v256 = v336 - 1;
                      *((_QWORD *)&v336 + 1) = v313.m128i_i64[0];
                      v257 = v314.m128i_i64[0];
                      v258 = v325;
                      v259 = v335;
                      if ( (__int64)v336 - 1 >= 0 )
                      {
                        do
                        {
                          v260 = _mm_loadu_si128(v259);
                          v253 += 32;
                          v259 += 2;
                          *(__m128i *)(v253 - 32) = v260;
                          *(__m128i *)(v253 - 16) = _mm_loadu_si128(v259 - 1);
                          v139 = v256-- == 0;
                        }
                        while ( !v139 );
                        v325 = v258;
                      }
                      v314.m128i_i64[0] = v257;
                      v313.m128i_i64[0] = v255;
                      qfree(v254);
                      v335 = (const __m128i *)v152;
                      v150 = v314.m128i_i64[0];
                      v151 = v336;
                      *((_QWORD *)&v336 + 1) = v313.m128i_i64[0];
                    }
                    v154 = (__m128 *)(v152 + 32 * v151);
                    *v154 = _mm_loadh_ps((const double *)v315.m128i_i64);
                    si128 = (__m128)_mm_unpacklo_epi64((__m128i)(unsigned __int64)v150, (__m128i)v50);
                    v154[1] = si128;
                    v153 = v336 + 1;
                  }
                  *(_QWORD *)&v336 = v153;
                }
                else
                {
                  v110 = *(char ***)(v9 + 136);
                  v111 = v324;
                  if ( !v110 )
                    goto LABEL_120;
                  do
                  {
                    if ( (unsigned __int64)v110[4] >= v50 )
                    {
                      v111 = v110;
                      v110 = (char **)v110[2];
                    }
                    else
                    {
                      v110 = (char **)v110[3];
                    }
                  }
                  while ( v110 );
                  if ( v324 == v111 || v50 < (unsigned __int64)v111[4] )
                    goto LABEL_120;
                  v141 = sub_52EB0((char **)&v346, (unsigned __int64 *)&v399);
                  v142 = v141[1];
                  v143 = _mm_loadl_epi64(&v339);
                  v144 = v340.m128i_i64[0];
                  v16 = _mm_loadl_epi64((const __m128i *)&v339.m128i_u64[1]);
                  if ( v141[2] < v142 + 1 )
                  {
                    v313.m128i_i64[0] = (__int64)v141[2];
                    v315.m128i_i64[0] = v16.m128i_i64[0];
                    v315.m128i_i64[1] = v143.m128i_i64[0];
                    v184 = qvector_reserve(v141, 0, v142 + 1, 24);
                    v185 = v184;
                    v186 = (__int64)v141[2];
                    v187 = (const __m128i *)*v141;
                    v188 = (__int64)(v141[1] - 1);
                    v141[2] = (char *)v313.m128i_i64[0];
                    v189 = (__m128)_mm_loadl_epi64((const __m128i *)&v315.m128i_u64[1]);
                    v190 = v315.m128i_i64[0];
                    if ( v188 >= 0 )
                    {
                      v191 = v325;
                      a8 = v189;
                      do
                      {
                        v192 = _mm_loadu_si128(v187);
                        v184 += 24;
                        v187 = (const __m128i *)((char *)v187 + 24);
                        *(__m128i *)(v184 - 24) = v192;
                        *(_QWORD *)(v184 - 8) = v187[-1].m128i_i64[1];
                        v139 = v188-- == 0;
                      }
                      while ( !v139 );
                      v325 = v191;
                      v187 = (const __m128i *)*v141;
                      v189.m128_u64[0] = a8.m128_u64[0];
                    }
                    v314.m128i_i64[0] = v185;
                    v313.m128i_i64[0] = v186;
                    v315.m128i_i64[0] = v190;
                    v315.m128i_i64[1] = v189.m128_u64[0];
                    qfree(v187);
                    v145 = v314.m128i_i64[0];
                    v193 = v313.m128i_i64[0];
                    v16 = _mm_loadl_epi64(&v315);
                    v142 = v141[1];
                    v143 = _mm_loadl_epi64((const __m128i *)&v315.m128i_u64[1]);
                    *v141 = (char *)v314.m128i_i64[0];
                    v141[2] = (char *)v193;
                  }
                  else
                  {
                    v145 = (__int64)*v141;
                  }
                  si128 = (__m128)_mm_unpacklo_epi64(v143, v16);
                  v146 = (__m128 *)(v145 + 24LL * (_QWORD)v142);
                  v146[1].m128_u64[0] = v144;
                  *v146 = si128;
                  ++v141[1];
                }
                if ( v399.m256i_i8[24] && v399.m256i_i64[0] )
                {
                  v399.m256i_i64[1] = 0;
                  qfree(v399.m256i_i64[0]);
                }
                goto LABEL_120;
              }
              sub_19A90(
                (__int64)v321,
                (__int64)"%a->%a: directly chained RUNTIME_FUNCTION is also directly chained",
                *(double *)si128.m128_u64,
                *(double *)v16.m128i_i64);
LABEL_77:
              *(_QWORD *)a1 = v387.m128i_i64[0];
              v56 = _mm_loadu_si128((const __m128i *)&v387.m128i_u64[1]);
              *(_BYTE *)(a1 + 24) = 1;
              *(__m128i *)(a1 + 8) = v56;
              if ( v399.m256i_i8[24] && v399.m256i_i64[0] )
              {
                v399.m256i_i64[1] = 0;
                qfree(v399.m256i_i64[0]);
              }
              goto LABEL_14;
            }
            sub_19A90(
              (__int64)&v399,
              (__int64)"[%a,%a): does not fit in segment [%a,%a)",
              *(double *)si128.m128_u64,
              *(double *)v16.m128i_i64,
              *(double *)a7.m128i_i64,
              *(double *)a8.m128_u64);
            v54 = *(_OWORD *)v399.m256i_i8;
            v55 = v399.m256i_i64[2];
LABEL_76:
            v399.m256i_i64[2] = v55;
            *(_OWORD *)v399.m256i_i8 = v54;
            v399.m256i_i8[24] = 1;
            sub_19A90(
              (__int64)v321,
              (__int64)"%a->%a: error parsing directly chained RUNTIME_FUNCTION: %s",
              *(double *)si128.m128_u64,
              *(double *)v16.m128i_i64,
              v327);
            goto LABEL_77;
          }
          sub_19A90((__int64)&v399, (__int64)"[%a,%a): no associated segment", v315.m128i_i64[0], v49);
        }
        v54 = *(_OWORD *)v399.m256i_i8;
        v55 = v399.m256i_i64[2];
        goto LABEL_76;
      }
      sub_19A90(
        (__int64)&v399,
        (__int64)"%a: directly chained RUNTIME_FUNCTION->%a not in exn dir range [%a,%a)",
        *(double *)si128.m128_u64,
        *(double *)v16.m128i_i64,
        *(double *)a7.m128i_i64,
        *(double *)a8.m128_u64);
LABEL_228:
      *(_QWORD *)a1 = v399.m256i_i64[0];
      v147 = _mm_loadu_si128((const __m128i *)&v399.m256i_u64[1]);
      *(_BYTE *)(a1 + 24) = 1;
      *(__m128i *)(a1 + 8) = v147;
      goto LABEL_14;
    }
    if ( (v340.m128i_i8[0] & 3) != 0 )
    {
      sub_19A90(
        (__int64)&v399,
        (__int64)"%a: RUNTIME_FUNCTION has UNWIND_INFO %a not DWORD-aligned",
        *(double *)si128.m128_u64,
        *(double *)v16.m128i_i64);
      goto LABEL_228;
    }
    v57 = *(_QWORD **)(v9 + 232);
    if ( v57 )
    {
      v58 = v320;
      do
      {
        while ( 1 )
        {
          v59 = v57[2];
          v60 = v57[3];
          if ( v57[4] < v340.m128i_i64[0] )
            break;
          v58 = v57;
          v57 = (_QWORD *)v57[2];
          if ( !v59 )
            goto LABEL_86;
        }
        v57 = (_QWORD *)v57[3];
      }
      while ( v60 );
LABEL_86:
      if ( v320 != v58 && v340.m128i_i64[0] >= v58[4] )
        goto LABEL_120;
    }
    v403.m128i_i8[8] = 0;
    v61 = (__m128i)_mm_loadh_ps(v332);
    v399.m256i_i32[0] = -1;
    v399.m256i_i16[2] = -1;
    memset(&v399.m256i_u64[1], 0, 24);
    v401[8] = 0;
    LOBYTE(v402) = 0;
    v404 = 0;
    v341 = (__int64 (***)(void))v37;
    v342 = (__m128)v61;
    v62 = v340.m128i_i64[0] + 4;
    if ( v340.m128i_i64[0] >= 0xFFFFFFFFFFFFFFFCLL )
    {
      sub_19A90((__int64)v321, (__int64)"[%a,%a): bad range", -4, 0);
      goto LABEL_137;
    }
    v315.m128i_i64[0] = v340.m128i_i64[0];
    v313.m128i_i64[0] = (__int64)&v381;
    sub_74B30(&v381, v37 + 2, v340.m128i_i64[0]);
    if ( !(_BYTE)v382 )
    {
      sub_19A90((__int64)v321, (__int64)"[%a,%a): no associated segment", v315.m128i_i64[0], v62);
LABEL_137:
      v65 = *(_QWORD *)v388;
      v64 = v387;
      goto LABEL_93;
    }
    if ( (unsigned __int64)(v315.m128i_i64[0] + 3) < v381.m128i_i64[0]
      || (unsigned __int64)(v315.m128i_i64[0] + 3) >= v381.m128i_i64[1] )
    {
LABEL_92:
      sub_19A90(
        (__int64)v321,
        (__int64)"[%a,%a): does not fit in segment [%a,%a)",
        *(double *)v61.m128i_i64,
        *(double *)v16.m128i_i64,
        *(double *)a7.m128i_i64,
        *(double *)a8.m128_u64);
      v64 = v387;
      v65 = *(_QWORD *)v388;
LABEL_93:
      *(__m128i *)v374.m256i_i8 = v64;
      v374.m256i_i64[2] = v65;
      v380 = 1;
      goto LABEL_94;
    }
    v119 = (unsigned __int64 *)v341;
    v120 = **v341;
    if ( (char *)v120 == (char *)sub_15B80
      && (v119 = (unsigned __int64 *)v341[1], v120 = *(__int64 (**)(void))*v119, (char *)v120 == (char *)sub_15B80)
      && (v119 = (unsigned __int64 *)v119[1], v120 = *(__int64 (**)(void))*v119, (char *)v120 == (char *)sub_15B80)
      && (v119 = (unsigned __int64 *)v119[1], v120 = *(__int64 (**)(void))*v119, (char *)v120 == (char *)sub_15B80) )
    {
      v121 = (**(__int64 (__fastcall ***)(unsigned __int64, unsigned __int64, __int64, __int64, __int64, __int64))v119[1])(
               v119[1],
               v342.m128_u64[0],
               v315.m128i_i64[0],
               v63,
               v381.m128i_i64[0],
               v381.m128i_i64[1]);
    }
    else
    {
      v121 = ((__int64 (__fastcall *)(unsigned __int64 *, unsigned __int64, __int64, __int64, __int64, __int64))v120)(
               v119,
               v342.m128_u64[0],
               v315.m128i_i64[0],
               v63,
               v381.m128i_i64[0],
               v381.m128i_i64[1]);
    }
    v399.m256i_i8[1] = v121 >> 3;
    v399.m256i_i8[0] = v121 & 7;
    ++v342.m128_u64[0];
    v122 = **v341;
    if ( (char *)v122 == (char *)sub_15B80
      && (v123 = (unsigned __int64)v341[1], v122 = **(__int64 (***)(void))v123, (char *)v122 == (char *)sub_15B80)
      && (v124 = *(_QWORD *)(v123 + 8), v122 = **(__int64 (***)(void))v124, (char *)v122 == (char *)sub_15B80)
      && (v125 = *(_QWORD *)(v124 + 8), v122 = **(__int64 (***)(void))v125, (char *)v122 == (char *)sub_15B80) )
    {
      v126 = (***(__int64 (__fastcall ****)(_QWORD))(v125 + 8))(*(_QWORD *)(v125 + 8));
    }
    else
    {
      v126 = v122();
    }
    v399.m256i_i8[2] = v126;
    ++v342.m128_u64[0];
    v127 = **v341;
    if ( (char *)v127 == (char *)sub_15B80
      && (v128 = (unsigned __int64)v341[1], v127 = **(__int64 (***)(void))v128, (char *)v127 == (char *)sub_15B80)
      && (v129 = *(_QWORD *)(v128 + 8), v127 = **(__int64 (***)(void))v129, (char *)v127 == (char *)sub_15B80)
      && (v130 = *(_QWORD *)(v129 + 8), v127 = **(__int64 (***)(void))v130, (char *)v127 == (char *)sub_15B80) )
    {
      v131 = (***(__int64 (__fastcall ****)(_QWORD))(v130 + 8))(*(_QWORD *)(v130 + 8));
    }
    else
    {
      v131 = v127();
    }
    v399.m256i_i8[3] = v131;
    ++v342.m128_u64[0];
    v132 = **v341;
    if ( (char *)v132 == (char *)sub_15B80
      && (v133 = (unsigned __int64)v341[1], v132 = **(__int64 (***)(void))v133, (char *)v132 == (char *)sub_15B80)
      && (v134 = *(_QWORD *)(v133 + 8), v132 = **(__int64 (***)(void))v134, (char *)v132 == (char *)sub_15B80)
      && (v135 = *(_QWORD *)(v134 + 8), v132 = **(__int64 (***)(void))v135, (char *)v132 == (char *)sub_15B80) )
    {
      v136 = (***(__int64 (__fastcall ****)(_QWORD))(v135 + 8))(*(_QWORD *)(v135 + 8));
    }
    else
    {
      v136 = v132();
    }
    v399.m256i_i8[5] = v136 >> 4;
    v137 = v342.m128_u64[0] + 1;
    v138 = 2LL * v399.m256i_u8[3];
    v399.m256i_i8[4] = v136 & 0xF;
    v342.m128_u64[0] = v137;
    v139 = __CFADD__(v137, v138);
    v140 = v137 + v138;
    if ( v139 )
    {
      sub_19A90((__int64)v321, (__int64)"[%a,%a): bad range", v137, v140);
      goto LABEL_342;
    }
    sub_74B30(v313.m128i_i64[0], v341 + 2, v137);
    if ( !(_BYTE)v382 )
    {
      sub_19A90((__int64)v321, (__int64)"[%a,%a): no associated segment", v137, v140);
LABEL_342:
      v65 = *(_QWORD *)v388;
      v64 = v387;
      goto LABEL_93;
    }
    if ( v140 - 1 < v381.m128i_i64[0] || v140 - 1 >= v381.m128i_i64[1] )
      goto LABEL_92;
    sub_51C40(
      (__int64)v321,
      (__int64 (__fastcall ****)(__int64))&v341,
      (unsigned __int8 *)&v399,
      v61,
      *(double *)v16.m128i_i64,
      a7,
      (__m128i)a8);
    if ( !v388[8] )
    {
      v194 = _mm_load_si128((const __m128i *)&v399.m256i_u64[2]);
      v380 = 0;
      *(__m128i *)&v374.m256i_u64[2] = v194;
      v195 = _mm_load_si128(&v400);
      v374.m256i_i32[0] = v399.m256i_i32[0];
      v375 = v195;
      v196 = _mm_load_si128((const __m128i *)v401);
      v374.m256i_i16[2] = v399.m256i_i16[2];
      v376 = v196;
      v197 = _mm_load_si128((const __m128i *)&v401[16]);
      v374.m256i_i64[1] = v399.m256i_i64[1];
      v377 = v197;
      v198 = _mm_load_si128(&v403);
      v379 = v404;
      v378 = v198;
      goto LABEL_97;
    }
    v61 = _mm_loadu_si128((const __m128i *)&v387.m128i_u64[1]);
    v380 = 1;
    v374.m256i_i64[0] = v387.m128i_i64[0];
    *(__m128i *)&v374.m256i_u64[1] = v61;
LABEL_94:
    if ( v399.m256i_i64[1] )
    {
      v399.m256i_i64[2] = 0;
      qfree(v399.m256i_i64[1]);
    }
    if ( v380 )
      break;
LABEL_97:
    v66 = &v340;
    v315.m128i_i64[0] = (__int64)&v367;
    v67 = (__m128i *)sub_52600((_QWORD *)(v9 + 216), (unsigned __int64 *)&v340);
    v68 = 0;
    v67->m128i_i32[0] = v374.m256i_i32[0];
    v67->m128i_i16[2] = v374.m256i_i16[2];
    v69 = v374.m256i_i64[2];
    if ( v374.m256i_i64[2] )
    {
      v315.m128i_i64[0] = (__int64)&v367;
      v313.m128i_i64[0] = 12 * v374.m256i_i64[2];
      v155 = qalloc_or_throw(12 * v374.m256i_i64[2]);
      v156 = v325;
      v66 = (__m128i *)v313.m128i_i64[0];
      v68 = v155;
      v157 = nullptr;
      do
      {
        v155 += 12;
        v158 = &v157->m128i_i8[v374.m256i_i64[1]];
        v157 = (__m128i *)((char *)v157 + 12);
        *(_WORD *)(v155 - 12) = *(_WORD *)v158;
        *(_BYTE *)(v155 - 10) = v158[2];
        *(_DWORD *)(v155 - 8) = *((_DWORD *)v158 + 1);
        v159 = v158[4];
        LODWORD(v158) = *((_DWORD *)v158 + 2);
        *(_BYTE *)(v155 - 8) = v159;
        *(_DWORD *)(v155 - 4) = (_DWORD)v158;
      }
      while ( v157 != v66 );
      v325 = v156;
    }
    v70 = v67->m128i_i64[1];
    v71 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v69, (__m128i)(unsigned __int64)v69);
    if ( v70 )
    {
      v67[1].m128i_i64[0] = 0;
      v315.m128i_i64[0] = v68;
      v313 = v71;
      qfree(v70);
      v71 = _mm_load_si128(&v313);
      v68 = v315.m128i_i64[0];
    }
    v67->m128i_i64[1] = v68;
    v67[1] = v71;
    v67[2] = _mm_load_si128(&v375);
    v67[3] = _mm_load_si128(&v376);
    v67[4] = _mm_load_si128(&v377);
    si128 = (__m128)_mm_load_si128(&v378);
    v67[5] = (__m128i)si128;
    v67[6].m128i_i64[0] = v379;
    if ( v376.m128i_i8[8] )
    {
      v175 = v375.m128i_i64[0];
      if ( v375.m128i_i64[0] >= (unsigned __int64)v315.m128i_i64[1] )
      {
        v237 = v336;
        v399.m256i_i64[3] = v375.m128i_i64[0];
        v238 = _mm_load_si128(&v339);
        v239 = v335;
        v314.m128i_i64[0] = v340.m128i_i64[0];
        v240 = *((_QWORD *)&v336 + 1);
        v241 = v336;
        v242 = v336 + 1;
        v399.m256i_i64[2] = v340.m128i_i64[0];
        *(__m128i *)v399.m256i_i8 = v238;
        if ( &v399 < (__m256i *)v335 || &v399 >= (__m256i *)&v335[2 * *((_QWORD *)&v336 + 1)] )
        {
          if ( *((_QWORD *)&v336 + 1) < v242 )
          {
            v315.m128i_i64[0] = (__int64)&v367;
            v271 = qvector_reserve(&v335, 0, v336 + 1, 32);
            v272 = v335;
            v239 = (const __m128i *)v271;
            v273 = v325;
            v274 = *((_QWORD *)&v336 + 1);
            v275 = v239;
            *((_QWORD *)&v336 + 1) = v240;
            v276 = v336 - 1;
            v277 = v335;
            if ( (__int64)v336 - 1 >= 0 )
            {
              do
              {
                v278 = _mm_loadu_si128(v277);
                v275 += 2;
                v277 += 2;
                v275[-2] = v278;
                v275[-1] = _mm_loadu_si128(v277 - 1);
                v139 = v276-- == 0;
              }
              while ( !v139 );
              v325 = v273;
            }
            v315.m128i_i64[1] = v274;
            v315.m128i_i64[0] = (__int64)&v367;
            qfree(v272);
            v241 = v336;
            v335 = v239;
            *((_QWORD *)&v336 + 1) = v315.m128i_i64[1];
            v242 = v336 + 1;
          }
          v244 = (__m128i *)&v239[2 * v241];
          *v244 = _mm_load_si128((const __m128i *)&v399);
          si128 = (__m128)_mm_load_si128((const __m128i *)&v399.m256i_u64[2]);
          v244[1] = (__m128i)si128;
        }
        else
        {
          v313.m128i_i64[0] = v399.m256i_i64[1];
          v315.m128i_i64[1] = v399.m256i_i64[0];
          if ( *((_QWORD *)&v336 + 1) < v242 )
          {
            v312.m128i_i64[1] = v375.m128i_i64[0];
            v315.m128i_i64[0] = (__int64)&v367;
            v295 = qvector_reserve(&v335, 0, v336 + 1, 32);
            v296 = v335;
            v239 = (const __m128i *)v295;
            v297 = v295;
            v298 = *((_QWORD *)&v336 + 1);
            v299 = v312.m128i_i64[1];
            *((_QWORD *)&v336 + 1) = v240;
            v300 = v336 - 1;
            v301 = v325;
            v302 = v335;
            if ( (__int64)v336 - 1 >= 0 )
            {
              do
              {
                v303 = _mm_loadu_si128(v302);
                v297 += 32;
                v302 += 2;
                *(__m128i *)(v297 - 32) = v303;
                *(__m128i *)(v297 - 16) = _mm_loadu_si128(v302 - 1);
                v139 = v300-- == 0;
              }
              while ( !v139 );
              v325 = v301;
            }
            v312.m128i_i64[0] = v298;
            v312.m128i_i64[1] = v299;
            v315.m128i_i64[0] = (__int64)&v367;
            qfree(v296);
            v335 = v239;
            v175 = v312.m128i_i64[1];
            v237 = v336;
            *((_QWORD *)&v336 + 1) = v312.m128i_i64[0];
          }
          v243 = (__m128 *)&v239[2 * v237];
          *v243 = _mm_loadh_ps((const double *)v313.m128i_i64);
          si128 = (__m128)_mm_unpacklo_epi64(_mm_loadl_epi64(&v314), (__m128i)(unsigned __int64)v175);
          v243[1] = si128;
          v242 = v336 + 1;
        }
        *(_QWORD *)&v336 = v242;
      }
      else
      {
        v176 = *(char ***)(v9 + 136);
        if ( v176 )
        {
          v177 = v324;
          do
          {
            if ( (unsigned __int64)v176[4] >= v375.m128i_i64[0] )
            {
              v177 = v176;
              v176 = (char **)v176[2];
            }
            else
            {
              v176 = (char **)v176[3];
            }
          }
          while ( v176 );
          if ( v177 != v324 && v375.m128i_i64[0] >= (unsigned __int64)v177[4] )
          {
            v315.m128i_i64[0] = (__int64)&v367;
            v112 = sub_52EB0((char **)&v346, (unsigned __int64 *)&v375);
            v113 = v340.m128i_i64[0];
            v114 = (unsigned __int64)v112[2];
            v313.m128i_i64[0] = v339.m128i_i64[1];
            v315.m128i_i64[1] = v339.m128i_i64[0];
            v115 = v112[1];
            if ( v114 < (unsigned __int64)(v115 + 1) )
            {
              v314.m128i_i64[0] = v114;
              v315.m128i_i64[0] = (__int64)&v367;
              v262 = qvector_reserve(v112, 0, v115 + 1, 24);
              v263 = v262;
              v264 = (const __m128i *)*v112;
              v265 = (__int64)v112[2];
              v266 = (__int64)(v112[1] - 1);
              v112[2] = (char *)v314.m128i_i64[0];
              v267 = v325;
              v268 = v264;
              if ( v266 >= 0 )
              {
                do
                {
                  v269 = _mm_loadu_si128(v268);
                  v262 += 24;
                  v268 = (const __m128i *)((char *)v268 + 24);
                  *(__m128i *)(v262 - 24) = v269;
                  *(_QWORD *)(v262 - 8) = v268[-1].m128i_i64[1];
                  v139 = v266-- == 0;
                }
                while ( !v139 );
                v325 = v267;
                v264 = (const __m128i *)*v112;
              }
              v312.m128i_i64[1] = v263;
              v314.m128i_i64[0] = v265;
              v315.m128i_i64[0] = (__int64)&v367;
              qfree(v264);
              v270 = v314.m128i_i64[0];
              v116 = v312.m128i_i64[1];
              v115 = v112[1];
              *v112 = (char *)v312.m128i_i64[1];
              v112[2] = (char *)v270;
            }
            else
            {
              v116 = (__int64)*v112;
            }
            v117 = (__m128 *)(v116 + 24LL * (_QWORD)v115);
            si128 = _mm_loadh_ps((const double *)v313.m128i_i64);
            v117[1].m128_u64[0] = v113;
            *v117 = si128;
            ++v112[1];
          }
        }
      }
    }
    else if ( (v374.m256i_i8[1] & 4) == 0 && (v374.m256i_i8[1] & 3) != 0 )
    {
      if ( !v377.m128i_i8[8] )
      {
        v315.m128i_i64[0] = (__int64)&v367;
        sub_7964(v70, v66);
      }
      v72 = v377.m128i_i64[0];
      if ( !v378.m128i_i8[8] )
      {
        v315.m128i_i64[0] = (__int64)&v367;
        sub_7964(v70, v66);
      }
      v315.m128i_i64[1] = v378.m128i_i64[0];
      v315.m128i_i64[0] = (__int64)&v367;
      v73 = sub_64960(&v367, v377.m128i_i64[0]);
      v330 = -1;
      v74 = v73;
      if ( v73 == 3 )
      {
        sub_73E00(&v399, v9 + 16, v315.m128i_i64[1]);
LABEL_108:
        if ( v399.m256i_i8[24] )
        {
          *(_QWORD *)a1 = v399.m256i_i64[0];
          v311 = _mm_loadu_si128((const __m128i *)&v399.m256i_u64[1]);
          *(_BYTE *)(a1 + 24) = 1;
          *(__m128i *)(a1 + 8) = v311;
          goto LABEL_374;
        }
        v75 = _mm_load_si128(&v339);
        v330 = v399.m256i_i64[0];
        v76 = v338;
        *(__m128i *)&v399.m256i_u64[1] = v75;
        v77 = (__int64)v337;
        v16 = _mm_loadl_epi64(&v340);
        v78 = v338 + 1;
        v399.m256i_i64[0] = v328;
        v399.m256i_i64[3] = v16.m128i_i64[0];
        if ( &v399 < (__m256i *)v337 || &v399 >= (__m256i *)&v337[2 * *((_QWORD *)&v338 + 1)] )
        {
          if ( *((_QWORD *)&v338 + 1) < v78 )
          {
            v315.m128i_i64[1] = *((_QWORD *)&v338 + 1);
            v77 = qvector_reserve(&v337, 0, v338 + 1, 32);
            v246 = v337;
            v247 = *((_QWORD *)&v338 + 1);
            v248 = v77;
            v249 = v338 - 1;
            *((_QWORD *)&v338 + 1) = v315.m128i_i64[1];
            v250 = v325;
            v251 = v337;
            if ( (__int64)v338 - 1 >= 0 )
            {
              do
              {
                v252 = _mm_loadu_si128(v251);
                v248 += 32;
                v251 += 2;
                *(__m128i *)(v248 - 32) = v252;
                *(__m128i *)(v248 - 16) = _mm_loadu_si128(v251 - 1);
                v139 = v249-- == 0;
              }
              while ( !v139 );
              v325 = v250;
            }
            v315.m128i_i64[1] = v247;
            qfree(v246);
            v76 = v338;
            v337 = (const __m128i *)v77;
            *((_QWORD *)&v338 + 1) = v315.m128i_i64[1];
            v78 = v338 + 1;
          }
          v225 = v77 + 32 * v76;
          *(__m128i *)v225 = _mm_load_si128((const __m128i *)&v399);
          si128 = (__m128)_mm_load_si128((const __m128i *)&v399.m256i_u64[2]);
          *(__m128 *)(v225 + 16) = si128;
        }
        else
        {
          v313.m128i_i64[0] = v399.m256i_i64[2];
          v315.m128i_i64[1] = v399.m256i_i64[1];
          if ( *((_QWORD *)&v338 + 1) < v78 )
          {
            v312.m128i_i64[1] = *((_QWORD *)&v338 + 1);
            v312.m128i_i64[0] = v16.m128i_i64[0];
            v314.m128i_i64[0] = v328;
            v77 = qvector_reserve(&v337, 0, v338 + 1, 32);
            v286 = v77;
            v287 = v337;
            v288 = *((_QWORD *)&v338 + 1);
            v289 = v338 - 1;
            *((_QWORD *)&v338 + 1) = v312.m128i_i64[1];
            v290 = v314.m128i_i64[0];
            v291 = v312.m128i_i64[0];
            v292 = v325;
            v293 = v337;
            if ( (__int64)v338 - 1 >= 0 )
            {
              do
              {
                v294 = _mm_loadu_si128(v293);
                v286 += 32;
                v293 += 2;
                *(__m128i *)(v286 - 32) = v294;
                a7 = _mm_loadu_si128(v293 - 1);
                *(__m128i *)(v286 - 16) = a7;
                v139 = v289-- == 0;
              }
              while ( !v139 );
              v325 = v292;
            }
            v312.m128i_i64[1] = v288;
            v312.m128i_i64[0] = v291;
            v314.m128i_i64[0] = v290;
            qfree(v287);
            v337 = (const __m128i *)v77;
            v76 = v338;
            v16 = _mm_loadl_epi64(&v312);
            *((_QWORD *)&v338 + 1) = v312.m128i_i64[1];
          }
          v79 = (__m128 *)(v77 + 32 * v76);
          *v79 = _mm_loadh_ps((const double *)&v315.m128i_i64[1]);
          si128 = (__m128)_mm_unpacklo_epi64(_mm_loadl_epi64(&v313), v16);
          v79[1] = si128;
          v78 = v338 + 1;
        }
        *(_QWORD *)&v338 = v78;
        v80 = v330;
        v312.m128i_i64[1] = v9 + 272;
        v81 = (_QWORD *)(v9 + 272);
        v82 = *(_QWORD **)(v9 + 280);
        if ( !v82 )
          goto LABEL_280;
        do
        {
          if ( v82[4] >= v330 )
          {
            v81 = v82;
            v82 = (_QWORD *)v82[2];
          }
          else
          {
            v82 = (_QWORD *)v82[3];
          }
        }
        while ( v82 );
        if ( v81 == (_QWORD *)v312.m128i_i64[1] || v330 < v81[4] )
        {
LABEL_280:
          *(_BYTE *)sub_53130((char **)&v360, &v330) = v74;
          v199 = _mm_loadh_ps((const double *)&v328);
          v341 = *(__int64 (****)(void))(v9 + 88);
          v342 = v199;
          sub_43800((__int64)v321, &v326, (__int64 *)&v341, v74, *(double *)v199.m128_u64, v16, a7, (__m128i)a8);
          if ( v398 )
          {
            sub_19A90(
              (__int64)&v399,
              (__int64)"%a: error parsing FUNC_INFO[%d] at %a/%a: %s",
              *(double *)v199.m128_u64,
              v328,
              *(double *)v16.m128i_i64,
              *(double *)a7.m128i_i64,
              (const char *)v74);
            v308 = v399.m256i_i64[0];
            v309 = _mm_loadu_si128((const __m128i *)&v399.m256i_u64[1]);
            *(_BYTE *)(a1 + 24) = 1;
            *(_QWORD *)a1 = v308;
            v310 = (__int64 *)v321;
            *(__m128i *)(a1 + 8) = v309;
            sub_53390(v310);
            goto LABEL_374;
          }
          a7 = _mm_load_si128(&v390);
          v399.m256i_i64[0] = v330;
          v200 = *(_QWORD *)v388;
          v201 = _mm_loadu_si128((const __m128i *)&v388[8]);
          v390 = 0;
          v202 = v389;
          v203 = v391;
          v399.m256i_i8[8] = v387.m128i_i8[0];
          a8 = (__m128)_mm_loadu_si128(&v392);
          v16 = _mm_load_si128(&v394);
          v392 = 0;
          v403 = (__m128i)a8;
          si128 = (__m128)_mm_load_si128(&v395);
          memset(v388, 0, sizeof(v388));
          v389 = 0;
          v391 = 0;
          v385 = v396;
          v386 = v397;
          v399.m256i_i64[2] = v387.m128i_i64[1];
          v399.m256i_i64[3] = v200;
          *(_QWORD *)v401 = v202;
          v402 = v203;
          v312.m128i_i64[0] = a7.m128i_i64[0];
          v383 = v16;
          v384 = si128;
          v400 = v201;
          *(__m128i *)&v401[8] = a7;
          v407 = v396;
          LOBYTE(v404) = v393;
          v408 = v397;
          v405 = v16;
          v406 = si128;
          if ( v74 == 4 && (v407 & 1) != 0 )
            sub_534A0((char **)(v9 + 360), (unsigned __int64 *)&v328);
          v314.m128i_i64[0] = 0;
          v313.m128i_i64[0] = v9 + 360;
          if ( v312.m128i_i64[0] )
          {
            do
            {
              v204 = 0;
              v205 = *(_QWORD *)v401 + 40 * v314.m128i_i64[0];
              v206 = *(_QWORD *)(v205 + 24);
              if ( v206 )
              {
                do
                {
                  v207 = *(_QWORD *)(v205 + 16) + 72 * v204;
                  if ( *(_QWORD *)(v207 + 8) != -1 )
                  {
                    v315.m128i_i64[1] = v205;
                    sub_534A0((char **)v313.m128i_i64[0], (unsigned __int64 *)(v207 + 8));
                    v205 = v315.m128i_i64[1];
                  }
                  ++v204;
                }
                while ( v204 != v206 );
              }
              ++v314.m128i_i64[0];
            }
            while ( v314.m128i_i64[0] != v312.m128i_i64[0] );
          }
          v208 = *(_QWORD **)(v9 + 280);
          v209 = (_QWORD *)v312.m128i_i64[1];
          if ( !v208 )
            goto LABEL_298;
          v209 = (_QWORD *)v312.m128i_i64[1];
          do
          {
            if ( v208[4] >= v399.m256i_i64[0] )
            {
              v209 = v208;
              v208 = (_QWORD *)v208[2];
            }
            else
            {
              v208 = (_QWORD *)v208[3];
            }
          }
          while ( v208 );
          if ( v209 == (_QWORD *)v312.m128i_i64[1] || v399.m256i_i64[0] < v209[4] )
LABEL_298:
            sub_539D0((_QWORD *)(v9 + 264), v209, (__int64)&v399);
          if ( v402 )
          {
            v403.m128i_i64[0] = 0;
            qfree(v402);
          }
          v210 = *(_QWORD *)v401;
          if ( *(_QWORD *)v401 )
          {
            if ( *(_QWORD *)&v401[8] )
            {
              v211 = 0;
              v315.m128i_i64[1] = v10;
              v313.m128i_i64[0] = v9;
              v212 = *(_QWORD *)&v401[8];
              v314.m128i_i64[0] = v325;
              do
              {
                v213 = v210 + 40 * v211;
                v214 = *(_QWORD *)(v213 + 16);
                if ( v214 )
                {
                  v215 = *(_QWORD *)(v213 + 24);
                  v216 = 0;
                  if ( v215 )
                  {
                    v325 = v210 + 40 * v211;
                    do
                    {
                      v217 = v214 + 72 * v216;
                      v218 = *(_QWORD *)(v217 + 32);
                      if ( v218 )
                      {
                        *(_QWORD *)(v217 + 40) = 0;
                        qfree(v218);
                        v214 = *(_QWORD *)(v325 + 16);
                      }
                      ++v216;
                    }
                    while ( v215 != v216 );
                    v213 = v325;
                  }
                  *(_QWORD *)(v213 + 24) = 0;
                  qfree(v214);
                  v210 = *(_QWORD *)v401;
                }
                ++v211;
              }
              while ( v212 != v211 );
              v10 = v315.m128i_i64[1];
              v9 = v313.m128i_i64[0];
              v325 = v314.m128i_i64[0];
            }
            *(_QWORD *)&v401[8] = 0;
            qfree(v210);
          }
          if ( v399.m256i_i64[3] )
          {
            v400.m128i_i64[0] = 0;
            qfree(v399.m256i_i64[3]);
          }
          if ( v398 )
          {
            if ( v387.m128i_i64[0] )
            {
              v387.m128i_i64[1] = 0;
              qfree(v387.m128i_i64[0]);
            }
          }
          else
          {
            if ( v391 )
            {
              v392.m128i_i64[0] = 0;
              qfree(v391);
            }
            if ( v389 )
            {
              v315.m128i_i64[1] = v390.m128i_i64[0];
              if ( v390.m128i_i64[0] )
              {
                v279 = v389;
                v313.m128i_i64[0] = v9;
                v280 = 0;
                v314.m128i_i64[0] = v325;
                do
                {
                  v281 = v279 + 40 * v280;
                  v282 = *(_QWORD *)(v281 + 16);
                  if ( v282 )
                  {
                    v283 = 0;
                    if ( *(_QWORD *)(v281 + 24) )
                    {
                      v325 = *(_QWORD *)(v281 + 24);
                      do
                      {
                        v284 = v282 + 72 * v283;
                        v285 = *(_QWORD *)(v284 + 32);
                        if ( v285 )
                        {
                          *(_QWORD *)(v284 + 40) = 0;
                          qfree(v285);
                          v282 = *(_QWORD *)(v281 + 16);
                        }
                        ++v283;
                      }
                      while ( v325 != v283 );
                    }
                    *(_QWORD *)(v281 + 24) = 0;
                    qfree(v282);
                    v279 = v389;
                  }
                  ++v280;
                }
                while ( v315.m128i_i64[1] != v280 );
                v9 = v313.m128i_i64[0];
                v325 = v314.m128i_i64[0];
              }
              else
              {
                v279 = v389;
              }
              v390.m128i_i64[0] = 0;
              qfree(v279);
            }
            if ( *(_QWORD *)v388 )
            {
              *(_QWORD *)&v388[8] = 0;
              qfree(*(_QWORD *)v388);
            }
          }
          v80 = v330;
        }
        v219 = *(_QWORD **)(v9 + 328);
        if ( v219 )
        {
          v220 = (_QWORD *)(v9 + 320);
          do
          {
            if ( v219[4] >= (unsigned __int64)v327 )
            {
              v220 = v219;
              v219 = (_QWORD *)v219[2];
            }
            else
            {
              v219 = (_QWORD *)v219[3];
            }
          }
          while ( v219 );
          if ( v220 != (_QWORD *)(v9 + 320) && (unsigned __int64)v327 >= v220[4] )
            goto LABEL_330;
        }
        else
        {
          v220 = (_QWORD *)(v9 + 320);
        }
        v341 = (__int64 (***)(void))&v327;
        v220 = sub_519C0((_QWORD *)(v9 + 312), v220, (unsigned __int64 **)&v341);
LABEL_330:
        v220[5] = v80;
        v221 = sub_53750((char **)&s, &v330);
        v222 = v221[1];
        v223 = v327;
        v224 = (__int64)*v221;
        if ( v221[2] < v222 + 1 )
        {
          v245 = qvector_reserve(v221, v224, v222 + 1, 8);
          *v221 = (char *)v245;
          v224 = v245;
          v222 = v221[1];
        }
        *(_QWORD *)(v224 + 8LL * (_QWORD)v222) = v223;
        ++v221[1];
        if ( !v380 )
        {
          v148 = v374.m256i_i64[1];
          if ( !v374.m256i_i64[1] )
            goto LABEL_120;
LABEL_230:
          v374.m256i_i64[2] = 0;
          qfree(v148);
          goto LABEL_120;
        }
        v118 = v374.m256i_i64[0];
        if ( !v374.m256i_i64[0] )
          goto LABEL_120;
LABEL_190:
        v374.m256i_i64[1] = 0;
        qfree(v118);
        goto LABEL_120;
      }
      if ( v73 == 4 )
      {
        sub_74310(&v399, v9 + 16);
        goto LABEL_108;
      }
      if ( v314.m128i_i32[2] )
      {
        v233 = v333;
        v234 = v334;
        v235 = (_QWORD *)(v333 + 8 * v334);
        if ( (_QWORD *)v333 == v235 )
          goto LABEL_372;
        v236 = (_QWORD *)v333;
        while ( v72 != *v236 )
        {
          if ( v235 == ++v236 )
            goto LABEL_372;
        }
        if ( v235 == v236 )
        {
LABEL_372:
          sub_BD80((__int64)"%a: unrecognized C++ unwind handler, skipping\n", *(double *)si128.m128_u64);
          v234 = v334;
          v233 = v333;
        }
        if ( *((_QWORD *)&v334 + 1) < (unsigned __int64)(v234 + 1) )
        {
          v333 = qvector_reserve(&v333, v233, v234 + 1, 8);
          v234 = v334;
          v233 = v333;
        }
        *(_QWORD *)(v233 + 8 * v234) = v72;
        *(_QWORD *)&v334 = v334 + 1;
      }
    }
    if ( v380 )
    {
      v118 = v374.m256i_i64[0];
      if ( v374.m256i_i64[0] )
        goto LABEL_190;
    }
    else
    {
      v148 = v374.m256i_i64[1];
      if ( v374.m256i_i64[1] )
        goto LABEL_230;
    }
LABEL_120:
    v327 += 12;
    if ( v327 == v344 )
      goto LABEL_121;
  }
  v315.m128i_i64[0] = (__int64)&v367;
  sub_19A90(
    (__int64)&v399,
    (__int64)"%a: error parsing UNWIND_INFO: %s",
    *(double *)v61.m128i_i64,
    (const char *)v340.m128i_i64[0]);
  *(_QWORD *)a1 = v399.m256i_i64[0];
  v261 = _mm_loadu_si128((const __m128i *)&v399.m256i_u64[1]);
  *(_BYTE *)(a1 + 24) = 1;
  *(__m128i *)(a1 + 8) = v261;
LABEL_374:
  if ( v380 )
  {
    if ( v374.m256i_i64[0] )
    {
      v374.m256i_i64[1] = 0;
      qfree(v374.m256i_i64[0]);
    }
  }
  else if ( v374.m256i_i64[1] )
  {
    v374.m256i_i64[2] = 0;
    qfree(v374.m256i_i64[1]);
  }
LABEL_14:
  v24 = v369;
  if ( v369 )
  {
    do
    {
      v25 = v24;
      v24 = (_QWORD *)*v24;
      operator delete(v25, 0x18u);
    }
    while ( v24 );
  }
  memset(v367, 0, 8 * v368);
  v370 = 0;
  v369 = nullptr;
  if ( v367 != v316 )
    operator delete(v367, 8 * v368);
  v26 = v362;
  if ( v362 )
  {
    do
    {
      v27 = v26;
      v26 = (_QWORD *)*v26;
      operator delete(v27, 0x18u);
    }
    while ( v26 );
  }
  memset(v360, 0, 8 * v361);
  v363 = 0;
  v362 = nullptr;
  if ( v360 != v317 )
    operator delete(v360, 8 * v361);
  v28 = v355;
  if ( v355 )
  {
    do
    {
      v29 = v28;
      v30 = v28;
      v28 = (_QWORD *)*v28;
      v31 = v29[2];
      if ( v31 )
      {
        v29[3] = 0;
        qfree(v31);
      }
      operator delete(v30, 0x28u);
    }
    while ( v28 );
  }
  memset(s, 0, 8 * v354);
  v356 = 0;
  v355 = nullptr;
  if ( s != v318 )
    operator delete(s, 8 * v354);
  if ( v337 )
  {
    *(_QWORD *)&v338 = 0;
    qfree(v337);
  }
  v32 = v348;
  if ( v348 )
  {
    do
    {
      v33 = v32;
      v34 = v32;
      v32 = (_QWORD *)*v32;
      v35 = v33[2];
      if ( v35 )
      {
        v33[3] = 0;
        qfree(v35);
      }
      operator delete(v34, 0x28u);
    }
    while ( v32 );
  }
  memset(v346, 0, 8 * v347);
  v349 = 0;
  v348 = nullptr;
  if ( v346 != v319 )
    operator delete(v346, 8 * v347);
  if ( v335 )
  {
    *(_QWORD *)&v336 = 0;
    qfree(v335);
  }
  if ( v333 )
  {
    *(_QWORD *)&v334 = 0;
    qfree(v333);
  }
LABEL_6:
  if ( v345 && v343 )
  {
    v344 = nullptr;
    qfree(v343);
  }
  return a1;
}
