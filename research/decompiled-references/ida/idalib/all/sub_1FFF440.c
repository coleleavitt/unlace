_QWORD *__fastcall sub_1FFF440(__m128 *a1, _QWORD *a2, _BYTE *a3, void *a4)
{
  _QWORD *v4; // r15
  _QWORD *m128_u64; // r14
  __int64 *v6; // rsi
  __int64 v7; // rax
  void *v8; // rdx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rdi
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rdx
  void *v16; // r13
  size_t v17; // rbx
  __m128i v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  const __m128i *v21; // rax
  void *v22; // rsi
  int v23; // r12d
  void *v24; // r13
  unsigned __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __m128i v28; // xmm4
  __int64 v29; // rdi
  __int64 v30; // rsi
  __int64 v31; // rax
  int *v32; // rcx
  __int64 v33; // r8
  __int64 *v34; // r9
  __int64 v35; // rdx
  __int64 v36; // r13
  __int64 v37; // rbx
  _QWORD *v38; // rax
  _QWORD *v39; // r15
  _QWORD *v40; // r14
  __int64 v41; // rsi
  unsigned __int64 v42; // rdi
  unsigned int v43; // eax
  __int64 *v44; // rdx
  __int64 v45; // rcx
  int v46; // eax
  unsigned int v47; // r12d
  __int64 *v48; // rbp
  unsigned __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  _QWORD *v52; // rdx
  unsigned int v53; // r9d
  __int64 v54; // r12
  __int64 *v55; // r8
  _QWORD *v56; // rcx
  __int64 *v57; // rdx
  __int64 v58; // r10
  unsigned int i; // r11d
  __int64 v60; // rax
  unsigned int v61; // esi
  _QWORD *v62; // rcx
  __int64 v63; // rdi
  int v64; // eax
  _QWORD *v65; // rax
  __int64 v66; // rdi
  __int64 v67; // rsi
  __int64 v68; // rax
  __int64 v69; // rdx
  int *v70; // rcx
  __int64 v71; // r8
  __int64 *v72; // r9
  __int64 v73; // rbx
  _QWORD *v74; // r15
  __int64 v75; // r12
  __int64 v76; // rsi
  unsigned __int64 v77; // rdi
  unsigned int v78; // eax
  __int64 *v79; // rdx
  __int64 v80; // rcx
  int v81; // eax
  unsigned int v82; // r14d
  __int64 *v83; // rbp
  unsigned __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rax
  _QWORD *v87; // rdx
  unsigned int v88; // r9d
  __int64 v89; // r14
  __int64 *v90; // r8
  _QWORD *v91; // rcx
  __int64 *v92; // rdx
  unsigned int v93; // r11d
  __int64 j; // r10
  __int64 v95; // rax
  unsigned int v96; // esi
  _QWORD *v97; // rcx
  __int64 v98; // rdi
  int v99; // eax
  __int64 *v100; // r12
  __int64 v101; // rax
  __int64 v102; // rdi
  __int64 v103; // rsi
  __int64 v104; // rax
  __int64 *v105; // rdx
  int *v106; // rcx
  __int64 v107; // r8
  __int64 *v108; // r9
  __int64 *v109; // r14
  __int64 v110; // rbx
  _QWORD *v111; // r13
  __int64 *v112; // r15
  __int64 v113; // rsi
  unsigned int v114; // edi
  unsigned int v115; // eax
  __int64 v116; // rcx
  int v117; // eax
  unsigned int v118; // r12d
  __int64 *v119; // rbp
  unsigned __int64 v120; // rdi
  __int64 v121; // rdi
  __int64 v122; // rax
  _QWORD *v123; // rdx
  __int64 v124; // rsi
  unsigned int v125; // r10d
  __int64 *v126; // r9
  _QWORD *v127; // rcx
  __int64 *v128; // rdx
  unsigned int v129; // r12d
  __int64 v130; // rdi
  unsigned int v131; // r8d
  __int64 v132; // rcx
  __int64 v133; // r11
  int v134; // edi
  unsigned int v135; // esi
  unsigned int v136; // r10d
  __int64 v137; // rdi
  int v138; // edi
  __int64 *v139; // rbp
  size_t v140; // rbx
  const void *v141; // rax
  __int64 v142; // rdx
  __int64 *v143; // rsi
  _BYTE *v144; // rbp
  size_t v145; // r13
  __int64 *v146; // rdx
  char v147; // r8
  unsigned __int64 *v148; // rbx
  unsigned __int64 *v149; // r12
  size_t v150; // rsi
  int v151; // r9d
  __int8 v152; // r8
  unsigned __int64 v153; // rdx
  int v154; // edi
  size_t v155; // r10
  __int64 v156; // rax
  _BYTE *v157; // rcx
  size_t v158; // rax
  unsigned __int64 *v159; // rax
  __int64 *v160; // r10
  __int64 v161; // rbp
  __int64 v162; // rbx
  char *v163; // rbx
  void **v164; // rax
  void *v165; // rdx
  void *v166; // rax
  __int64 v167; // rdx
  __int64 v168; // rax
  void **v169; // rax
  __int64 v170; // rcx
  __int64 v171; // rsi
  __m128 *v172; // rdi
  _BYTE *v173; // rdx
  _QWORD *v174; // rax
  _BYTE *v175; // rsi
  unsigned __int64 *v176; // rdx
  _QWORD *v177; // rbx
  _BYTE *v178; // rsi
  _BYTE *v179; // rbp
  _BYTE *v180; // r13
  signed __int64 v181; // r15
  void *v182; // rax
  _QWORD *v183; // rax
  __m128i v184; // xmm0
  _BYTE **v185; // r12
  _QWORD *v186; // r15
  _QWORD *v187; // rax
  _QWORD *v188; // rdi
  _BYTE *v189; // rsi
  __int64 v190; // rdx
  _BYTE *v191; // rsi
  __m128 *v192; // rdi
  void **v193; // rbp
  void **v194; // rbx
  void **v195; // rbp
  void **v196; // rbx
  char *v197; // r13
  char *v198; // rdi
  char *v199; // rdi
  void **v200; // r12
  void **v201; // rbp
  char *v202; // rdi
  int v203; // r8d
  int v204; // r10d
  __int64 v205; // rax
  unsigned __int64 v206; // rdi
  unsigned __int64 v207; // rdi
  __int64 v208; // rdi
  __int64 v209; // rax
  _QWORD *v210; // rdx
  __int64 v211; // rsi
  unsigned int v212; // r9d
  __int64 *v213; // r10
  _QWORD *v214; // rcx
  __int64 *v215; // rdx
  unsigned int v216; // r12d
  __int64 v217; // rdi
  unsigned int v218; // r8d
  __int64 v219; // rcx
  __int64 v220; // r11
  int v221; // edi
  unsigned int v222; // esi
  unsigned int v223; // r10d
  int v224; // edi
  __int64 *v225; // rbp
  __int64 *v226; // r11
  _QWORD *v227; // rcx
  _QWORD *v228; // rdx
  size_t v229; // rax
  _QWORD *v230; // rcx
  _QWORD *v231; // rdx
  __int64 v232; // rax
  __m128i si128; // xmm0
  unsigned __int64 v234; // rdx
  __int64 v235; // rdi
  __int64 v236; // rsi
  __int64 v237; // rax
  int *v238; // rcx
  __int64 v239; // r8
  __int64 v240; // r9
  __int64 v241; // rdx
  __int64 v242; // r13
  __int64 v243; // rbx
  _QWORD *v244; // rax
  _QWORD *v245; // r15
  _QWORD *v246; // r14
  unsigned __int64 v247; // rsi
  unsigned int v248; // eax
  __int64 *v249; // rdx
  int *v250; // rdi
  int v251; // eax
  unsigned int v252; // r12d
  __int64 *v253; // rbp
  unsigned __int64 v254; // rax
  __int64 v255; // rax
  __int64 *v256; // rax
  unsigned int v257; // r8d
  char *v258; // rdi
  __int64 *k; // rdx
  char *v260; // rax
  __int64 v261; // r12
  unsigned int v262; // r11d
  __int64 v263; // rdx
  unsigned int v264; // esi
  __int64 v265; // rcx
  __int64 v266; // r9
  int v267; // edx
  _QWORD *v268; // rax
  int v269; // r8d
  __int64 v270; // rdi
  __int64 v271; // rdi
  __int64 v272; // rax
  char *v273; // r13
  char *v274; // rbx
  char *v275; // rdi
  char *v276; // rdi
  void **v277; // r12
  void **v278; // rbp
  char *v279; // rdi
  int v280; // r10d
  unsigned __int64 v281; // rax
  __int64 v282; // rax
  __int64 v283; // rax
  _QWORD *v284; // rdx
  unsigned int v285; // r9d
  __int64 v286; // r12
  _QWORD *v287; // rcx
  __int64 *v288; // rdx
  __int64 v289; // r10
  unsigned int v290; // r11d
  __int64 v291; // rax
  unsigned int v292; // esi
  _QWORD *v293; // rcx
  __int64 v294; // rdi
  int v295; // eax
  unsigned __int64 v296; // rax
  __int64 v297; // rax
  __int64 v298; // rax
  _QWORD *v299; // rdx
  unsigned int v300; // r9d
  __int64 v301; // r14
  _QWORD *v302; // rcx
  __int64 *v303; // rdx
  unsigned int v304; // r11d
  __int64 v305; // r10
  __int64 v306; // rax
  unsigned int v307; // esi
  _QWORD *v308; // rcx
  __int64 v309; // rdi
  int v310; // eax
  int v311; // edi
  int *v312; // rsi
  unsigned int v313; // esi
  unsigned int v314; // r10d
  unsigned int v315; // esi
  unsigned int v316; // r10d
  unsigned int v317; // esi
  unsigned int v318; // r10d
  __int64 *v319; // r11
  int v320; // edi
  unsigned int v321; // esi
  unsigned int v322; // r10d
  __int64 *v323; // rbp
  int v324; // edi
  unsigned __int64 v325; // rax
  __int64 v326; // rax
  __int64 v327; // rax
  _QWORD *v328; // rdx
  char *v329; // rsi
  unsigned int v330; // r12d
  char *v331; // r8
  _QWORD *v332; // rcx
  char *v333; // rdx
  __int64 v334; // r9
  unsigned int v335; // r11d
  __int64 v336; // rax
  unsigned int v337; // esi
  __int64 v338; // rcx
  __int64 v339; // rdi
  int v340; // eax
  __int64 v341; // r12
  __int64 v342; // rbx
  size_t v343; // r14
  __int64 v344; // r15
  __int64 v345; // r13
  size_t v346; // rbp
  size_t v347; // rdx
  int v348; // eax
  unsigned int v349; // r8d
  int *v350; // rbp
  int *v351; // r11
  unsigned int v352; // eax
  size_t v353; // r13
  __int64 v354; // r12
  size_t v355; // rdx
  _BYTE *v356; // rcx
  char v357; // si
  size_t v358; // rax
  _BYTE *v359; // rcx
  size_t v360; // rax
  unsigned int v361; // ebp
  unsigned int v362; // ebp
  int **v363; // r12
  _QWORD *v364; // rcx
  _QWORD *v365; // rdx
  _QWORD *v366; // rcx
  _QWORD *v367; // rdx
  _QWORD *v368; // rcx
  _QWORD *v369; // rdx
  _QWORD *v370; // rcx
  _QWORD *v371; // rdx
  __int64 *m; // rdx
  _QWORD *v373; // rcx
  _QWORD *v374; // rdx
  int v375; // edi
  int v376; // edi
  int v377; // esi
  void *v378; // [rsp+8h] [rbp-2C0h] BYREF
  _BYTE *v379; // [rsp+10h] [rbp-2B8h]
  void *v380; // [rsp+18h] [rbp-2B0h] BYREF
  __m128i v381; // [rsp+20h] [rbp-2A8h] BYREF
  __m128 *v382; // [rsp+30h] [rbp-298h]
  void **v383; // [rsp+38h] [rbp-290h]
  size_t n[2]; // [rsp+40h] [rbp-288h] BYREF
  void *s2; // [rsp+50h] [rbp-278h]
  void **p_ptr; // [rsp+58h] [rbp-270h]
  void (__fastcall *v387)(void **, __int64, __int64, __int64); // [rsp+60h] [rbp-268h]
  __int64 v388; // [rsp+68h] [rbp-260h]
  void **v389; // [rsp+70h] [rbp-258h]
  _QWORD *v390; // [rsp+78h] [rbp-250h]
  _QWORD *v391; // [rsp+80h] [rbp-248h]
  __int64 v392; // [rsp+88h] [rbp-240h]
  __int64 *v393; // [rsp+90h] [rbp-238h]
  __int64 *v394; // [rsp+98h] [rbp-230h]
  _QWORD v395[2]; // [rsp+A0h] [rbp-228h] BYREF
  __m128i v396; // [rsp+B0h] [rbp-218h] BYREF
  void *v397; // [rsp+C0h] [rbp-208h] BYREF
  char *v398; // [rsp+C8h] [rbp-200h]
  unsigned __int64 v399; // [rsp+D0h] [rbp-1F8h]
  __int64 *v400; // [rsp+E0h] [rbp-1E8h] BYREF
  __int64 v401; // [rsp+E8h] [rbp-1E0h]
  unsigned int v402; // [rsp+F0h] [rbp-1D8h]
  void *v403; // [rsp+100h] [rbp-1C8h] BYREF
  size_t v404; // [rsp+108h] [rbp-1C0h]
  void *ptr; // [rsp+120h] [rbp-1A8h] BYREF
  __int64 v406; // [rsp+128h] [rbp-1A0h]
  _BYTE v407[32]; // [rsp+130h] [rbp-198h] BYREF
  void *v408[2]; // [rsp+150h] [rbp-178h] BYREF
  __m128i v409; // [rsp+160h] [rbp-168h] BYREF
  void *v410[2]; // [rsp+170h] [rbp-158h]
  __m128i v411; // [rsp+180h] [rbp-148h]
  void *v412[2]; // [rsp+190h] [rbp-138h]
  __int64 v413; // [rsp+1A0h] [rbp-128h]
  void *v414; // [rsp+1A8h] [rbp-120h]
  __int64 v415; // [rsp+1B0h] [rbp-118h]
  __m128i v416; // [rsp+1B8h] [rbp-110h]
  void *v417; // [rsp+1C8h] [rbp-100h]
  __int64 v418; // [rsp+1D0h] [rbp-F8h]
  __m128i v419; // [rsp+1D8h] [rbp-F0h]
  void *v420; // [rsp+1F0h] [rbp-D8h] BYREF
  unsigned __int64 *v421; // [rsp+1F8h] [rbp-D0h]
  void *v422; // [rsp+210h] [rbp-B8h]
  __int64 v423; // [rsp+218h] [rbp-B0h]
  void *v424; // [rsp+230h] [rbp-98h]
  _BYTE *v425; // [rsp+238h] [rbp-90h]
  void *v426; // [rsp+248h] [rbp-80h]
  __int64 v427; // [rsp+250h] [rbp-78h]
  void *v428; // [rsp+268h] [rbp-60h]
  __int64 v429; // [rsp+270h] [rbp-58h]

  v4 = a2;
  m128_u64 = a1->m128_u64;
  v6 = (__int64 *)a2[1];
  v379 = a3;
  v7 = *v6;
  v380 = a4;
  (*(void (__fastcall **)(void **))(v7 + 16))(&v397);
  if ( v4[18] == v4[19] )
  {
    v8 = v398;
    goto LABEL_3;
  }
  v8 = v398;
  if ( v397 != v398 )
  {
LABEL_3:
    v378 = v8;
    a1[1].m128_u64[0] = v399;
    *a1 = _mm_loadh_ps((const double *)&v378);
    return m128_u64;
  }
  v10 = sub_228AB90(v379, v380, 0);
  v12 = 0;
  if ( v11 )
  {
    --v11;
    v12 = 1;
  }
  v13 = sub_12CCD10((unsigned __int8 *)(v10 + v12), v11);
  if ( v13 == 23 || !v13 )
  {
    v272 = v4[1];
    LODWORD(v390) = 0;
    v388 = v272;
    v387 = *(void (__fastcall **)(void **, __int64, __int64, __int64))(*(_QWORD *)v272 + 16LL);
  }
  else
  {
    v14 = (unsigned int)(v13 - 2);
    v15 = *(_QWORD *)v4[1];
    v388 = v4[1];
    v387 = *(void (__fastcall **)(void **, __int64, __int64, __int64))(v15 + 16);
    if ( (unsigned int)v14 > 0x20 )
      LODWORD(v390) = 0;
    else
      LODWORD(v390) = byte_2671FA0[v14];
  }
  v395[0] = v379;
  v395[1] = v380;
  v389 = &v403;
  sub_2246450(&v403, v395);
  v16 = v403;
  v17 = v404;
  s2 = v403;
  v18.m128i_i64[0] = sub_228AAA0(v403, v404, 0);
  v381 = v18;
  p_ptr = &ptr;
  ptr = v407;
  v406 = 0x200000000LL;
  v382 = (__m128 *)&v420;
  sub_2289790(&v420, v16, v17, 0);
  v21 = (const __m128i *)sub_2289610(&v420, v16, v19, v20);
  v22 = v16;
  v23 = 2;
  v24 = nullptr;
  *(__m128i *)v408 = _mm_loadu_si128(v21);
  v409 = _mm_loadu_si128(v21 + 1);
  *(__m128i *)v410 = _mm_loadu_si128(v21 + 2);
  sub_22895F0(&v420, v22, v17);
  v378 = v407;
  n[0] = 0;
  v383 = v408;
  while ( !(unsigned __int8)sub_22897C0(v408, v382) )
  {
    if ( v409.m128i_i64[1] > 1uLL )
    {
      v232 = (unsigned int)v406;
      si128 = _mm_load_si128(&v409);
      v234 = (unsigned int)v406 + 1LL;
      if ( v234 > HIDWORD(v406) )
      {
        *(__m128i *)n = si128;
        sub_2237220(p_ptr, v378, v234, 16);
        v232 = (unsigned int)v406;
        si128 = _mm_load_si128((const __m128i *)n);
      }
      *((__m128i *)ptr + v232) = si128;
      LODWORD(v406) = v406 + 1;
    }
    v25 = sub_2289820(v408, v382);
    if ( v25 > v17 )
      v25 = v17;
    n[0] = v25;
    sub_2289610(v408, v382, v26, v27);
    if ( v23 == 1 )
      goto LABEL_18;
    v23 = 1;
    v24 = s2;
  }
  s2 = v24;
LABEL_18:
  v28 = _mm_load_si128(&v381);
  v29 = v4[24];
  v400 = nullptr;
  v30 = v4[25];
  v401 = 0;
  v402 = 0;
  v396 = v28;
  v378 = &v396;
  v31 = sub_1FFB480(v29, v30, (__int64)&v396);
  v36 = v35;
  v37 = v31;
  if ( v31 == v35 )
    goto LABEL_37;
  v38 = v4;
  v39 = m128_u64;
  v40 = v38;
  do
  {
    v47 = v402;
    v48 = v400;
    if ( !v402 )
      goto LABEL_24;
    v41 = *(_QWORD *)(v37 + 16);
    v42 = v402 - 1;
    v43 = v42 & (((0xBF58476D1CE4E5B9LL * v41) >> 31) ^ (484763065 * v41));
    v44 = &v400[2 * v43];
    v45 = *v44;
    if ( v41 == *v44 )
    {
LABEL_21:
      v32 = (int *)(v44 + 1);
      v46 = *((_DWORD *)v44 + 2) + 1;
      goto LABEL_22;
    }
    v33 = 1;
    v34 = nullptr;
    if ( v45 != -1 )
    {
      while ( 1 )
      {
        if ( !v34 && v45 == -2 )
          v34 = v44;
        v43 = v42 & (v33 + v43);
        v44 = &v400[2 * v43];
        v45 = *v44;
        if ( v41 == *v44 )
          goto LABEL_21;
        if ( v45 == -1 )
          break;
        v33 = (unsigned int)(v33 + 1);
      }
      if ( v34 )
        v44 = v34;
    }
    v32 = (int *)(unsigned int)(v401 + 1);
    v33 = (unsigned int)(4 * (_DWORD)v32);
    if ( (unsigned int)v33 < 3 * v402 )
    {
      v33 = v402 >> 3;
      if ( v402 - HIDWORD(v401) - (unsigned int)v32 > (unsigned int)v33 )
      {
        v271 = *v44;
        goto LABEL_270;
      }
      v281 = (((v42 >> 1) | v42 | (((v42 >> 1) | v42) >> 2)) >> 4) | (v42 >> 1) | v42 | (((v42 >> 1) | v42) >> 2);
      v282 = ((((v281 >> 8) | v281) >> 16) | (v281 >> 8) | v281) + 1;
      if ( (unsigned int)v282 < 0x40 )
        LODWORD(v282) = 64;
      v402 = v282;
      v283 = sub_22300B0(16LL * (unsigned int)v282, 8, 64, v32, v33, v34);
      v400 = (__int64 *)v283;
      if ( v48 )
      {
        v284 = (_QWORD *)v283;
        v401 = 0;
        v285 = v402;
        v286 = 2LL * v47;
        v287 = (_QWORD *)(v283 + 16LL * v402);
        if ( (_QWORD *)v283 != v287 )
        {
          do
          {
            *v284 = -1;
            v284 += 2;
          }
          while ( v287 != v284 );
        }
        v288 = v48;
        v289 = v283;
        v290 = v285 - 1;
        do
        {
          v291 = *v288;
          if ( (unsigned __int64)(*v288 + 2) > 1 )
          {
            if ( !v285 )
              goto LABEL_654;
            v292 = v290 & (((0xBF58476D1CE4E5B9LL * v291) >> 31) ^ (484763065 * v291));
            v293 = (_QWORD *)(v289 + 16LL * v292);
            v294 = *v293;
            if ( v291 != *v293 && v294 != -1 )
            {
              LODWORD(v392) = 1;
              v391 = nullptr;
              v393 = v288;
              while ( 1 )
              {
                if ( v294 == -2 )
                {
                  if ( v391 )
                    v293 = v391;
                  v391 = v293;
                }
                v292 = v290 & (v392 + v292);
                v293 = (_QWORD *)(v289 + 16LL * v292);
                v294 = *v293;
                if ( v291 == *v293 )
                {
                  v288 = v393;
                  goto LABEL_345;
                }
                if ( v294 == -1 )
                  break;
                LODWORD(v392) = v392 + 1;
              }
              v288 = v393;
              if ( v391 )
                v293 = v391;
            }
LABEL_345:
            *v293 = v291;
            v295 = *((_DWORD *)v288 + 2);
            LODWORD(v401) = v401 + 1;
            *((_DWORD *)v293 + 2) = v295;
          }
          v288 += 2;
        }
        while ( &v48[v286] != v288 );
        operator delete(v48, v286 * 8, 8);
        v283 = (__int64)v400;
        v321 = v402;
        LODWORD(v32) = v401 + 1;
      }
      else
      {
        v401 = 0;
        v321 = v402;
        v368 = (_QWORD *)(v283 + 16LL * v402);
        if ( (_QWORD *)v283 != v368 )
        {
          v369 = (_QWORD *)v283;
          do
          {
            *v369 = -1;
            v369 += 2;
          }
          while ( v368 != v369 );
        }
        LODWORD(v32) = 1;
      }
      if ( !v321 )
      {
LABEL_653:
        LODWORD(v401) = v401 + 1;
        BUG();
      }
      v34 = *(__int64 **)(v37 + 16);
      v322 = v321 - 1;
      v33 = (v321 - 1)
          & ((unsigned int)((0xBF58476D1CE4E5B9LL * (unsigned __int64)v34) >> 31)
           ^ (484763065 * (_DWORD)v34));
      v44 = (__int64 *)(v283 + 16 * v33);
      v41 = *v44;
      v271 = *v44;
      if ( v34 == (__int64 *)*v44 )
        goto LABEL_270;
      if ( v41 != -1 )
      {
        v323 = (__int64 *)(v283
                         + 16LL
                         * (v322
                          & ((unsigned int)((0xBF58476D1CE4E5B9LL * (unsigned __int64)v34) >> 31)
                           ^ (484763065 * (_DWORD)v34))));
        v324 = 1;
        v44 = nullptr;
        while ( 1 )
        {
          if ( v41 == -2 && !v44 )
            v44 = v323;
          v33 = v322 & (v324 + (_DWORD)v33);
          v323 = (__int64 *)(v283 + 16LL * (unsigned int)v33);
          v41 = *v323;
          if ( v34 == (__int64 *)*v323 )
            break;
          if ( v41 == -1 )
          {
LABEL_584:
            if ( v44 )
            {
              v271 = *v44;
              v41 = (__int64)v34;
              goto LABEL_270;
            }
            v44 = v323;
            goto LABEL_377;
          }
          ++v324;
        }
LABEL_403:
        v271 = v41;
        v44 = v323;
LABEL_270:
        LODWORD(v401) = (_DWORD)v32;
        if ( v271 != -1 )
          --HIDWORD(v401);
        goto LABEL_272;
      }
    }
    else
    {
LABEL_24:
      v49 = (((((((2 * v402 - 1) | ((unsigned __int64)(2 * v402 - 1) >> 1)) >> 2)
              | (2 * v402 - 1)
              | ((unsigned __int64)(2 * v402 - 1) >> 1)) >> 4)
            | (((2 * v402 - 1) | ((unsigned __int64)(2 * v402 - 1) >> 1)) >> 2)
            | (2 * v402 - 1)
            | ((unsigned __int64)(2 * v402 - 1) >> 1)) >> 8)
          | (((((2 * v402 - 1) | ((unsigned __int64)(2 * v402 - 1) >> 1)) >> 2)
            | (2 * v402 - 1)
            | ((unsigned __int64)(2 * v402 - 1) >> 1)) >> 4)
          | (((2 * v402 - 1) | ((unsigned __int64)(2 * v402 - 1) >> 1)) >> 2)
          | (2 * v402 - 1)
          | ((unsigned __int64)(2 * v402 - 1) >> 1);
      v50 = ((v49 >> 16) | v49) + 1;
      if ( (unsigned int)v50 < 0x40 )
        LODWORD(v50) = 64;
      v402 = v50;
      v51 = sub_22300B0(16LL * (unsigned int)v50, 8, 64, v32, v33, v34);
      v400 = (__int64 *)v51;
      if ( v48 )
      {
        v52 = (_QWORD *)v51;
        v401 = 0;
        v53 = v402;
        v54 = 2LL * v47;
        v55 = &v48[v54];
        v56 = (_QWORD *)(v51 + 16LL * v402);
        if ( (_QWORD *)v51 != v56 )
        {
          do
          {
            *v52 = -1;
            v52 += 2;
          }
          while ( v56 != v52 );
        }
        v57 = v48;
        v58 = v51;
        for ( i = v53 - 1; v55 != v57; v57 += 2 )
        {
          v60 = *v57;
          if ( (unsigned __int64)(*v57 + 2) > 1 )
          {
            if ( !v53 )
              goto LABEL_654;
            v61 = i & (((0xBF58476D1CE4E5B9LL * v60) >> 31) ^ (484763065 * v60));
            v62 = (_QWORD *)(v58 + 16LL * v61);
            v63 = *v62;
            if ( v60 != *v62 && v63 != -1 )
            {
              LODWORD(v392) = 1;
              v391 = nullptr;
              v393 = v57;
              while ( 1 )
              {
                if ( v63 == -2 )
                {
                  if ( v391 )
                    v62 = v391;
                  v391 = v62;
                }
                v61 = i & (v392 + v61);
                v62 = (_QWORD *)(v58 + 16LL * v61);
                v63 = *v62;
                if ( v60 == *v62 )
                {
                  v57 = v393;
                  goto LABEL_35;
                }
                if ( v63 == -1 )
                  break;
                LODWORD(v392) = v392 + 1;
              }
              v57 = v393;
              if ( v391 )
                v62 = v391;
            }
LABEL_35:
            *v62 = v60;
            v64 = *((_DWORD *)v57 + 2);
            LODWORD(v401) = v401 + 1;
            *((_DWORD *)v62 + 2) = v64;
          }
        }
        operator delete(v48, v54 * 8, 8);
        v51 = (__int64)v400;
        v313 = v402;
        LODWORD(v32) = v401 + 1;
      }
      else
      {
        v401 = 0;
        v313 = v402;
        v366 = (_QWORD *)(v51 + 16LL * v402);
        if ( (_QWORD *)v51 != v366 )
        {
          v367 = (_QWORD *)v51;
          do
          {
            *v367 = -1;
            v367 += 2;
          }
          while ( v366 != v367 );
        }
        LODWORD(v32) = 1;
      }
      if ( !v313 )
        goto LABEL_653;
      v34 = *(__int64 **)(v37 + 16);
      v314 = v313 - 1;
      v33 = (v313 - 1)
          & ((unsigned int)((0xBF58476D1CE4E5B9LL * (unsigned __int64)v34) >> 31)
           ^ (484763065 * (_DWORD)v34));
      v44 = (__int64 *)(v51 + 16 * v33);
      v41 = *v44;
      v271 = *v44;
      if ( v34 == (__int64 *)*v44 )
        goto LABEL_270;
      if ( v41 != -1 )
      {
        v323 = (__int64 *)(v51
                         + 16LL
                         * (v314
                          & ((unsigned int)((0xBF58476D1CE4E5B9LL * (unsigned __int64)v34) >> 31)
                           ^ (484763065 * (_DWORD)v34))));
        v375 = 1;
        v44 = nullptr;
        while ( 1 )
        {
          if ( v41 == -2 && !v44 )
            v44 = v323;
          v33 = v314 & (v375 + (_DWORD)v33);
          v323 = (__int64 *)(v51 + 16LL * (unsigned int)v33);
          v41 = *v323;
          if ( v34 == (__int64 *)*v323 )
            goto LABEL_403;
          if ( v41 == -1 )
            goto LABEL_584;
          ++v375;
        }
      }
    }
LABEL_377:
    LODWORD(v401) = (_DWORD)v32;
    v41 = (__int64)v34;
LABEL_272:
    *v44 = v41;
    v32 = (int *)(v44 + 1);
    v46 = 1;
    *((_DWORD *)v44 + 2) = 0;
LABEL_22:
    v37 += 24;
    *v32 = v46;
  }
  while ( v36 != v37 );
  v65 = v40;
  m128_u64 = v39;
  v4 = v65;
LABEL_37:
  v66 = v4[24];
  v67 = v4[25];
  v396 = _mm_load_si128(&v381);
  v68 = sub_1FFB190(v66, v67, (__int64)v378);
  if ( v68 == v69 )
    goto LABEL_56;
  v381.m128i_i64[0] = (__int64)v4;
  v73 = v68;
  v74 = m128_u64;
  v75 = v69;
  while ( 2 )
  {
    v82 = v402;
    v83 = v400;
    if ( !v402 )
    {
LABEL_43:
      v84 = (((((((2 * v402 - 1) | ((unsigned __int64)(2 * v402 - 1) >> 1)) >> 2)
              | (2 * v402 - 1)
              | ((unsigned __int64)(2 * v402 - 1) >> 1)) >> 4)
            | (((2 * v402 - 1) | ((unsigned __int64)(2 * v402 - 1) >> 1)) >> 2)
            | (2 * v402 - 1)
            | ((unsigned __int64)(2 * v402 - 1) >> 1)) >> 8)
          | (((((2 * v402 - 1) | ((unsigned __int64)(2 * v402 - 1) >> 1)) >> 2)
            | (2 * v402 - 1)
            | ((unsigned __int64)(2 * v402 - 1) >> 1)) >> 4)
          | (((2 * v402 - 1) | ((unsigned __int64)(2 * v402 - 1) >> 1)) >> 2)
          | (2 * v402 - 1)
          | ((unsigned __int64)(2 * v402 - 1) >> 1);
      v85 = ((v84 >> 16) | v84) + 1;
      if ( (unsigned int)v85 < 0x40 )
        LODWORD(v85) = 64;
      v402 = v85;
      v86 = sub_22300B0(16LL * (unsigned int)v85, 8, 64, v70, v71, v72);
      v400 = (__int64 *)v86;
      if ( v83 )
      {
        v87 = (_QWORD *)v86;
        v401 = 0;
        v88 = v402;
        v89 = 2LL * v82;
        v90 = &v83[v89];
        v91 = (_QWORD *)(v86 + 16LL * v402);
        if ( (_QWORD *)v86 != v91 )
        {
          do
          {
            *v87 = -1;
            v87 += 2;
          }
          while ( v91 != v87 );
        }
        v92 = v83;
        v93 = v88 - 1;
        for ( j = v86; v90 != v92; v92 += 2 )
        {
          v95 = *v92;
          if ( (unsigned __int64)(*v92 + 2) > 1 )
          {
            if ( !v88 )
              goto LABEL_654;
            v96 = v93 & (((0xBF58476D1CE4E5B9LL * v95) >> 31) ^ (484763065 * v95));
            v97 = (_QWORD *)(j + 16LL * v96);
            v98 = *v97;
            if ( v95 != *v97 && v98 != -1 )
            {
              LODWORD(v392) = 1;
              v391 = nullptr;
              v393 = v92;
              while ( 1 )
              {
                if ( !v391 )
                {
                  if ( v98 != -2 )
                    v97 = v391;
                  v391 = v97;
                }
                v96 = v93 & (v392 + v96);
                v97 = (_QWORD *)(j + 16LL * v96);
                v98 = *v97;
                if ( v95 == *v97 )
                {
                  v92 = v393;
                  goto LABEL_54;
                }
                if ( v98 == -1 )
                  break;
                LODWORD(v392) = v392 + 1;
              }
              v92 = v393;
              if ( v391 )
                v97 = v391;
            }
LABEL_54:
            *v97 = v95;
            v99 = *((_DWORD *)v92 + 2);
            LODWORD(v401) = v401 + 1;
            *((_DWORD *)v97 + 2) = v99;
          }
        }
        operator delete(v83, v89 * 8, 8);
        v86 = (__int64)v400;
        v315 = v402;
        LODWORD(v70) = v401 + 1;
      }
      else
      {
        v401 = 0;
        v315 = v402;
        v364 = (_QWORD *)(v86 + 16LL * v402);
        if ( (_QWORD *)v86 != v364 )
        {
          v365 = (_QWORD *)v86;
          do
          {
            *v365 = -1;
            v365 += 2;
          }
          while ( v364 != v365 );
        }
        LODWORD(v70) = 1;
      }
      if ( !v315 )
        goto LABEL_653;
      v72 = *(__int64 **)(v73 + 16);
      v316 = v315 - 1;
      v71 = (v315 - 1)
          & ((unsigned int)((0xBF58476D1CE4E5B9LL * (unsigned __int64)v72) >> 31)
           ^ (484763065 * (_DWORD)v72));
      v79 = (__int64 *)(v86 + 16 * v71);
      v76 = *v79;
      v270 = *v79;
      if ( v72 != (__int64 *)*v79 )
      {
        if ( v76 == -1 )
          goto LABEL_382;
        v319 = (__int64 *)(v86
                         + 16LL
                         * (v316
                          & ((unsigned int)((0xBF58476D1CE4E5B9LL * (unsigned __int64)v72) >> 31)
                           ^ (484763065 * (_DWORD)v72))));
        v376 = 1;
        v79 = nullptr;
        while ( 1 )
        {
          if ( !v79 && v76 == -2 )
            v79 = v319;
          v71 = v316 & ((_DWORD)v71 + v376);
          v319 = (__int64 *)(v86 + 16 * v71);
          v76 = *v319;
          if ( v72 == (__int64 *)*v319 )
            break;
          if ( v76 == -1 )
            goto LABEL_592;
          ++v376;
        }
LABEL_393:
        v270 = v76;
        v79 = v319;
      }
      goto LABEL_263;
    }
    v76 = *(_QWORD *)(v73 + 16);
    v77 = v402 - 1;
    v78 = v77 & (((0xBF58476D1CE4E5B9LL * v76) >> 31) ^ (484763065 * v76));
    v79 = &v400[2 * v78];
    v80 = *v79;
    if ( v76 == *v79 )
    {
LABEL_40:
      v70 = (int *)(v79 + 1);
      v81 = *((_DWORD *)v79 + 2) + 1;
    }
    else
    {
      v269 = 1;
      v72 = nullptr;
      if ( v80 != -1 )
      {
        while ( 1 )
        {
          if ( v80 == -2 && !v72 )
            v72 = v79;
          v280 = v269 + 1;
          v71 = v78 + v269;
          v78 = v77 & v71;
          v79 = &v400[2 * ((unsigned int)v77 & (unsigned int)v71)];
          v80 = *v79;
          if ( v76 == *v79 )
            goto LABEL_40;
          if ( v80 == -1 )
            break;
          v269 = v280;
        }
        if ( v72 )
          v79 = v72;
      }
      v70 = (int *)(unsigned int)(v401 + 1);
      v71 = (unsigned int)(4 * (_DWORD)v70);
      if ( (unsigned int)v71 >= 3 * v402 )
        goto LABEL_43;
      v71 = v402 >> 3;
      if ( v402 - HIDWORD(v401) - (unsigned int)v70 > (unsigned int)v71 )
      {
        v270 = *v79;
        goto LABEL_263;
      }
      v296 = (((v77 >> 1) | v77 | (((v77 >> 1) | v77) >> 2)) >> 4) | (v77 >> 1) | v77 | (((v77 >> 1) | v77) >> 2);
      v297 = ((((v296 >> 8) | v296) >> 16) | (v296 >> 8) | v296) + 1;
      if ( (unsigned int)v297 < 0x40 )
        LODWORD(v297) = 64;
      v402 = v297;
      v298 = sub_22300B0(16LL * (unsigned int)v297, 8, 64, v70, v71, v72);
      v400 = (__int64 *)v298;
      if ( v83 )
      {
        v299 = (_QWORD *)v298;
        v401 = 0;
        v300 = v402;
        v301 = 2LL * v82;
        v302 = (_QWORD *)(v298 + 16LL * v402);
        if ( (_QWORD *)v298 != v302 )
        {
          do
          {
            *v299 = -1;
            v299 += 2;
          }
          while ( v302 != v299 );
        }
        v303 = v83;
        v304 = v300 - 1;
        v305 = v298;
        do
        {
          v306 = *v303;
          if ( (unsigned __int64)(*v303 + 2) > 1 )
          {
            if ( !v300 )
              goto LABEL_654;
            v307 = v304 & (((0xBF58476D1CE4E5B9LL * v306) >> 31) ^ (484763065 * v306));
            v308 = (_QWORD *)(v305 + 16LL * v307);
            v309 = *v308;
            if ( v306 != *v308 && v309 != -1 )
            {
              LODWORD(v392) = 1;
              v391 = nullptr;
              v393 = v303;
              while ( 1 )
              {
                if ( !v391 )
                {
                  if ( v309 != -2 )
                    v308 = v391;
                  v391 = v308;
                }
                v307 = v304 & (v392 + v307);
                v308 = (_QWORD *)(v305 + 16LL * v307);
                v309 = *v308;
                if ( v306 == *v308 )
                {
                  v303 = v393;
                  goto LABEL_356;
                }
                if ( v309 == -1 )
                  break;
                LODWORD(v392) = v392 + 1;
              }
              v303 = v393;
              if ( v391 )
                v308 = v391;
            }
LABEL_356:
            *v308 = v306;
            v310 = *((_DWORD *)v303 + 2);
            LODWORD(v401) = v401 + 1;
            *((_DWORD *)v308 + 2) = v310;
          }
          v303 += 2;
        }
        while ( &v83[v301] != v303 );
        operator delete(v83, v301 * 8, 8);
        v298 = (__int64)v400;
        v317 = v402;
        LODWORD(v70) = v401 + 1;
      }
      else
      {
        v401 = 0;
        v317 = v402;
        v370 = (_QWORD *)(v298 + 16LL * v402);
        if ( (_QWORD *)v298 != v370 )
        {
          v371 = (_QWORD *)v298;
          do
          {
            *v371 = -1;
            v371 += 2;
          }
          while ( v370 != v371 );
        }
        LODWORD(v70) = 1;
      }
      if ( !v317 )
        goto LABEL_653;
      v72 = *(__int64 **)(v73 + 16);
      v318 = v317 - 1;
      v71 = (v317 - 1)
          & ((unsigned int)((0xBF58476D1CE4E5B9LL * (unsigned __int64)v72) >> 31)
           ^ (484763065 * (_DWORD)v72));
      v79 = (__int64 *)(v298 + 16 * v71);
      v76 = *v79;
      v270 = *v79;
      if ( v72 == (__int64 *)*v79 )
      {
LABEL_263:
        LODWORD(v401) = (_DWORD)v70;
        if ( v270 != -1 )
          --HIDWORD(v401);
      }
      else
      {
        if ( v76 != -1 )
        {
          v319 = (__int64 *)(v298
                           + 16LL
                           * (v318
                            & ((unsigned int)((0xBF58476D1CE4E5B9LL * (unsigned __int64)v72) >> 31)
                             ^ (484763065 * (_DWORD)v72))));
          v320 = 1;
          v79 = nullptr;
          while ( 1 )
          {
            if ( !v79 && v76 == -2 )
              v79 = v319;
            v71 = v318 & ((_DWORD)v71 + v320);
            v319 = (__int64 *)(v298 + 16 * v71);
            v76 = *v319;
            if ( v72 == (__int64 *)*v319 )
              goto LABEL_393;
            if ( v76 == -1 )
            {
LABEL_592:
              if ( v79 )
              {
                v270 = *v79;
                v76 = (__int64)v72;
                goto LABEL_263;
              }
              v79 = v319;
              break;
            }
            ++v320;
          }
        }
LABEL_382:
        LODWORD(v401) = (_DWORD)v70;
        v76 = (__int64)v72;
      }
      *v79 = v76;
      v70 = (int *)(v79 + 1);
      v81 = 1;
      *((_DWORD *)v79 + 2) = 0;
    }
    v73 += 24;
    *v70 = v81;
    if ( v75 != v73 )
      continue;
    break;
  }
  m128_u64 = v74;
  v4 = (_QWORD *)v381.m128i_i64[0];
LABEL_56:
  v381.m128i_i64[0] = (__int64)ptr + 16 * (unsigned int)v406;
  if ( ptr == (void *)v381.m128i_i64[0] )
    goto LABEL_84;
  v391 = m128_u64;
  v100 = (__int64 *)ptr;
  while ( 2 )
  {
    v101 = v100[1];
    v102 = v4[27];
    v103 = v4[28];
    v396.m128i_i64[0] = *v100;
    v396.m128i_i64[1] = v101;
    v104 = sub_1FFB190(v102, v103, (__int64)v378);
    v109 = v105;
    v110 = v104;
    if ( (__int64 *)v104 == v105 )
      goto LABEL_82;
    v111 = v4;
    v112 = v100;
    while ( 2 )
    {
      v118 = v402;
      v119 = v400;
      if ( !v402 )
      {
LABEL_64:
        v120 = (((((((2 * v402 - 1) | ((unsigned __int64)(2 * v402 - 1) >> 1)) >> 2)
                 | (2 * v402 - 1)
                 | ((unsigned __int64)(2 * v402 - 1) >> 1)) >> 4)
               | (((2 * v402 - 1) | ((unsigned __int64)(2 * v402 - 1) >> 1)) >> 2)
               | (2 * v402 - 1)
               | ((unsigned __int64)(2 * v402 - 1) >> 1)) >> 8)
             | (((((2 * v402 - 1) | ((unsigned __int64)(2 * v402 - 1) >> 1)) >> 2)
               | (2 * v402 - 1)
               | ((unsigned __int64)(2 * v402 - 1) >> 1)) >> 4)
             | (((2 * v402 - 1) | ((unsigned __int64)(2 * v402 - 1) >> 1)) >> 2)
             | (2 * v402 - 1)
             | ((unsigned __int64)(2 * v402 - 1) >> 1);
        v121 = ((v120 >> 16) | v120) + 1;
        if ( (unsigned int)v121 < 0x40 )
          LODWORD(v121) = 64;
        v402 = v121;
        v122 = sub_22300B0(16LL * (unsigned int)v121, 8, v105, v106, v107, v108);
        v400 = (__int64 *)v122;
        if ( v119 )
        {
          v123 = (_QWORD *)v122;
          v401 = 0;
          v124 = 2LL * v118;
          v125 = v402;
          v126 = &v119[v124];
          v127 = (_QWORD *)(v122 + 16LL * v402);
          if ( (_QWORD *)v122 != v127 )
          {
            do
            {
              *v123 = -1;
              v123 += 2;
            }
            while ( v127 != v123 );
          }
          v128 = v119;
          v129 = v125 - 1;
          if ( v119 != v126 )
          {
            while ( 1 )
            {
              while ( 1 )
              {
                v130 = *v128;
                if ( (unsigned __int64)(*v128 + 2) > 1 )
                  break;
                v128 += 2;
                if ( v126 == v128 )
                  goto LABEL_76;
              }
              if ( !v125 )
                break;
              v131 = v129 & (((0xBF58476D1CE4E5B9LL * v130) >> 31) ^ (484763065 * v130));
              v132 = v122 + 16LL * v131;
              v133 = *(_QWORD *)v132;
              if ( *(_QWORD *)v132 != v130 && v133 != -1 )
              {
                LODWORD(v393) = 1;
                v392 = 0;
                v394 = v128;
                while ( 1 )
                {
                  if ( v133 == -2 )
                  {
                    if ( v392 )
                      v132 = v392;
                    v392 = v132;
                  }
                  v131 = v129 & ((_DWORD)v393 + v131);
                  v132 = v122 + 16LL * v131;
                  v133 = *(_QWORD *)v132;
                  if ( v130 == *(_QWORD *)v132 )
                  {
                    v128 = v394;
                    goto LABEL_75;
                  }
                  if ( v133 == -1 )
                    break;
                  LODWORD(v393) = (_DWORD)v393 + 1;
                }
                v128 = v394;
                if ( v392 )
                  v132 = v392;
              }
LABEL_75:
              *(_QWORD *)v132 = v130;
              v134 = *((_DWORD *)v128 + 2);
              v128 += 2;
              LODWORD(v401) = v401 + 1;
              *(_DWORD *)(v132 + 8) = v134;
              if ( v126 == v128 )
                goto LABEL_76;
            }
LABEL_654:
            *(_QWORD *)&dword_0 = 0;
            BUG();
          }
LABEL_76:
          operator delete(v119, v124 * 8, 8);
          v122 = (__int64)v400;
          v135 = v402;
          LODWORD(v106) = v401 + 1;
        }
        else
        {
          v401 = 0;
          v135 = v402;
          v227 = (_QWORD *)(v122 + 16LL * v402);
          if ( (_QWORD *)v122 != v227 )
          {
            v228 = (_QWORD *)v122;
            do
            {
              *v228 = -1;
              v228 += 2;
            }
            while ( v227 != v228 );
          }
          LODWORD(v106) = 1;
        }
        if ( !v135 )
          goto LABEL_653;
        v108 = *(__int64 **)(v110 + 16);
        v136 = v135 - 1;
        v107 = (v135 - 1)
             & ((unsigned int)((0xBF58476D1CE4E5B9LL * (unsigned __int64)v108) >> 31)
              ^ (484763065 * (_DWORD)v108));
        v105 = (__int64 *)(v122 + 16 * v107);
        v113 = *v105;
        v137 = *v105;
        if ( v108 != (__int64 *)*v105 )
        {
          v138 = 1;
          v139 = nullptr;
          if ( v113 == -1 )
            goto LABEL_80;
          while ( 1 )
          {
            if ( v113 != -2 || v139 )
              v105 = v139;
            v107 = v136 & ((_DWORD)v107 + v138);
            v226 = (__int64 *)(v122 + 16 * v107);
            v113 = *v226;
            if ( v108 == (__int64 *)*v226 )
              break;
            if ( v113 == -1 )
              goto LABEL_561;
            ++v138;
            v139 = v105;
            v105 = (__int64 *)(v122 + 16 * v107);
          }
LABEL_216:
          v137 = v113;
          v105 = v226;
        }
        goto LABEL_182;
      }
      v113 = *(_QWORD *)(v110 + 16);
      v114 = v402 - 1;
      v115 = (v402 - 1) & (((0xBF58476D1CE4E5B9LL * v113) >> 31) ^ (484763065 * v113));
      v105 = &v400[2 * v115];
      v116 = *v105;
      if ( *v105 == v113 )
      {
LABEL_61:
        v106 = (int *)(v105 + 1);
        v117 = *((_DWORD *)v105 + 2) + 1;
      }
      else
      {
        v203 = 1;
        v108 = nullptr;
        if ( v116 != -1 )
        {
          while ( 1 )
          {
            if ( v116 == -2 && !v108 )
              v108 = v105;
            v204 = v203 + 1;
            v107 = v115 + v203;
            v115 = v114 & v107;
            v105 = &v400[2 * (v114 & (unsigned int)v107)];
            v116 = *v105;
            if ( v113 == *v105 )
              goto LABEL_61;
            if ( v116 == -1 )
              break;
            v203 = v204;
          }
          if ( v108 )
            v105 = v108;
        }
        v106 = (int *)(unsigned int)(v401 + 1);
        v107 = (unsigned int)(4 * (_DWORD)v106);
        if ( (unsigned int)v107 >= 3 * v402 )
          goto LABEL_64;
        v107 = v402 >> 3;
        if ( v402 - HIDWORD(v401) - (unsigned int)v106 > (unsigned int)v107 )
        {
          v137 = *v105;
          goto LABEL_182;
        }
        v206 = ((v114 | ((unsigned __int64)v114 >> 1)) >> 2) | v114 | ((unsigned __int64)v114 >> 1);
        v207 = (((v206 >> 4) | v206) >> 8) | (v206 >> 4) | v206;
        v208 = ((v207 >> 16) | v207) + 1;
        if ( (unsigned int)v208 < 0x40 )
          LODWORD(v208) = 64;
        v402 = v208;
        v209 = sub_22300B0(16LL * (unsigned int)v208, 8, v105, v106, v107, v108);
        v400 = (__int64 *)v209;
        if ( v119 )
        {
          v210 = (_QWORD *)v209;
          v401 = 0;
          v211 = 2LL * v118;
          v212 = v402;
          v213 = &v119[v211];
          v214 = (_QWORD *)(v209 + 16LL * v402);
          if ( (_QWORD *)v209 != v214 )
          {
            do
            {
              *v210 = -1;
              v210 += 2;
            }
            while ( v214 != v210 );
          }
          v215 = v119;
          v216 = v212 - 1;
          do
          {
            while ( 1 )
            {
              v217 = *v215;
              if ( (unsigned __int64)(*v215 + 2) > 1 )
                break;
              v215 += 2;
              if ( v213 == v215 )
                goto LABEL_209;
            }
            if ( !v212 )
              goto LABEL_654;
            v218 = v216 & (((0xBF58476D1CE4E5B9LL * v217) >> 31) ^ (484763065 * v217));
            v219 = v209 + 16LL * v218;
            v220 = *(_QWORD *)v219;
            if ( v217 != *(_QWORD *)v219 && v220 != -1 )
            {
              LODWORD(v393) = 1;
              v392 = 0;
              v394 = v215;
              while ( 1 )
              {
                if ( v220 == -2 )
                {
                  if ( v392 )
                    v219 = v392;
                  v392 = v219;
                }
                v218 = v216 & ((_DWORD)v393 + v218);
                v219 = v209 + 16LL * v218;
                v220 = *(_QWORD *)v219;
                if ( v217 == *(_QWORD *)v219 )
                {
                  v215 = v394;
                  goto LABEL_208;
                }
                if ( v220 == -1 )
                  break;
                LODWORD(v393) = (_DWORD)v393 + 1;
              }
              v215 = v394;
              if ( v392 )
                v219 = v392;
            }
LABEL_208:
            *(_QWORD *)v219 = v217;
            v221 = *((_DWORD *)v215 + 2);
            v215 += 2;
            LODWORD(v401) = v401 + 1;
            *(_DWORD *)(v219 + 8) = v221;
          }
          while ( v213 != v215 );
LABEL_209:
          operator delete(v119, v211 * 8, 8);
          v209 = (__int64)v400;
          v222 = v402;
          LODWORD(v106) = v401 + 1;
        }
        else
        {
          v401 = 0;
          v222 = v402;
          v230 = (_QWORD *)(v209 + 16LL * v402);
          if ( (_QWORD *)v209 != v230 )
          {
            v231 = (_QWORD *)v209;
            do
            {
              *v231 = -1;
              v231 += 2;
            }
            while ( v230 != v231 );
          }
          LODWORD(v106) = 1;
        }
        if ( !v222 )
          goto LABEL_653;
        v108 = *(__int64 **)(v110 + 16);
        v223 = v222 - 1;
        v107 = (v222 - 1)
             & ((unsigned int)((0xBF58476D1CE4E5B9LL * (unsigned __int64)v108) >> 31)
              ^ (484763065 * (_DWORD)v108));
        v105 = (__int64 *)(v209 + 16 * v107);
        v113 = *v105;
        v137 = *v105;
        if ( v108 == (__int64 *)*v105 )
        {
LABEL_182:
          LODWORD(v401) = (_DWORD)v106;
          if ( v137 != -1 )
            --HIDWORD(v401);
        }
        else
        {
          v224 = 1;
          v225 = nullptr;
          if ( v113 != -1 )
          {
            while ( 1 )
            {
              if ( v113 != -2 || v225 )
                v105 = v225;
              v107 = v223 & ((_DWORD)v107 + v224);
              v226 = (__int64 *)(v209 + 16 * v107);
              v113 = *v226;
              if ( v108 == (__int64 *)*v226 )
                goto LABEL_216;
              if ( v113 == -1 )
              {
LABEL_561:
                if ( v105 )
                {
                  v137 = *v105;
                  v113 = (__int64)v108;
                  goto LABEL_182;
                }
                v105 = v226;
                break;
              }
              ++v224;
              v225 = v105;
              v105 = (__int64 *)(v209 + 16 * v107);
            }
          }
LABEL_80:
          LODWORD(v401) = (_DWORD)v106;
          v113 = (__int64)v108;
        }
        *v105 = v113;
        v106 = (int *)(v105 + 1);
        v117 = 1;
        *((_DWORD *)v105 + 2) = 0;
      }
      v110 += 24;
      *v106 = v117;
      if ( v109 != (__int64 *)v110 )
        continue;
      break;
    }
    v100 = v112;
    v4 = v111;
LABEL_82:
    v100 += 2;
    if ( (__int64 *)v381.m128i_i64[0] != v100 )
      continue;
    break;
  }
  m128_u64 = v391;
LABEL_84:
  v140 = n[0];
  v141 = (const void *)sub_2289AE0(s2, n[0], 0);
  if ( v140 != v142 || n[0] && memcmp(v141, s2, n[0]) )
  {
    v235 = v4[18];
    v236 = v4[19];
    v396.m128i_i64[0] = (__int64)s2;
    v396.m128i_i64[1] = n[0];
    v237 = sub_1FFB480(v235, v236, (__int64)v378);
    v242 = v241;
    v243 = v237;
    if ( v237 != v241 )
    {
      v244 = v4;
      v245 = m128_u64;
      v246 = v244;
      while ( 1 )
      {
        v252 = v402;
        v253 = v400;
        if ( !v402 )
          goto LABEL_246;
        v238 = *(int **)(v243 + 16);
        v247 = v402 - 1;
        v248 = v247 & (((0xBF58476D1CE4E5B9LL * (unsigned __int64)v238) >> 31) ^ (484763065 * *(_DWORD *)(v243 + 16)));
        v249 = &v400[2 * v248];
        v250 = (int *)*v249;
        if ( v238 != (int *)*v249 )
          break;
LABEL_243:
        v238 = (int *)(v249 + 1);
        v251 = *((_DWORD *)v249 + 2) + 1;
LABEL_244:
        v243 += 24;
        *v238 = v251;
        if ( v242 == v243 )
        {
          v268 = v246;
          m128_u64 = v245;
          v4 = v268;
          goto LABEL_87;
        }
      }
      v239 = 1;
      v240 = 0;
      if ( v250 != (int *)-1LL )
      {
        while ( 1 )
        {
          if ( !v240 && v250 == (int *)-2LL )
            v240 = (__int64)v249;
          v248 = v247 & (v239 + v248);
          v249 = &v400[2 * v248];
          v250 = (int *)*v249;
          if ( v238 == (int *)*v249 )
            goto LABEL_243;
          if ( v250 == (int *)-1LL )
            break;
          v239 = (unsigned int)(v239 + 1);
        }
        if ( v240 )
          v249 = (__int64 *)v240;
      }
      v311 = v401 + 1;
      v239 = (unsigned int)(4 * (v401 + 1));
      if ( (unsigned int)v239 >= 3 * v402 )
      {
LABEL_246:
        v254 = (((((((2 * v402 - 1) | ((unsigned __int64)(2 * v402 - 1) >> 1)) >> 2)
                 | (2 * v402 - 1)
                 | ((unsigned __int64)(2 * v402 - 1) >> 1)) >> 4)
               | (((2 * v402 - 1) | ((unsigned __int64)(2 * v402 - 1) >> 1)) >> 2)
               | (2 * v402 - 1)
               | ((unsigned __int64)(2 * v402 - 1) >> 1)) >> 8)
             | (((((2 * v402 - 1) | ((unsigned __int64)(2 * v402 - 1) >> 1)) >> 2)
               | (2 * v402 - 1)
               | ((unsigned __int64)(2 * v402 - 1) >> 1)) >> 4)
             | (((2 * v402 - 1) | ((unsigned __int64)(2 * v402 - 1) >> 1)) >> 2)
             | (2 * v402 - 1)
             | ((unsigned __int64)(2 * v402 - 1) >> 1);
        v255 = ((v254 >> 16) | v254) + 1;
        if ( (unsigned int)v255 < 0x40 )
          LODWORD(v255) = 64;
        v402 = v255;
        v256 = (__int64 *)sub_22300B0(16LL * (unsigned int)v255, 8, 64, v238, v239, v240);
        v240 = (__int64)v256;
        v400 = v256;
        if ( v253 )
        {
          v401 = 0;
          v257 = v402;
          v378 = (void *)(16LL * v252);
          v258 = (char *)v378 + (_QWORD)v253;
          for ( k = &v256[2 * v402]; k != v256; v256 += 2 )
            *v256 = -1;
          v260 = (char *)v253;
          v261 = v240;
          v262 = v257 - 1;
          if ( v253 != (__int64 *)v258 )
          {
            do
            {
              v263 = *(_QWORD *)v260;
              if ( (unsigned __int64)(*(_QWORD *)v260 + 2LL) > 1 )
              {
                if ( !v257 )
                  goto LABEL_654;
                v264 = v262 & (((0xBF58476D1CE4E5B9LL * v263) >> 31) ^ (484763065 * v263));
                v265 = v261 + 16LL * v264;
                v266 = *(_QWORD *)v265;
                if ( v263 != *(_QWORD *)v265 && v266 != -1 )
                {
                  LODWORD(n[0]) = 1;
                  v381.m128i_i64[0] = 0;
                  s2 = v260;
                  do
                  {
                    if ( v266 == -2 )
                    {
                      if ( v381.m128i_i64[0] )
                        v265 = v381.m128i_i64[0];
                      v381.m128i_i64[0] = v265;
                    }
                    v264 = v262 & (LODWORD(n[0]) + v264);
                    ++LODWORD(n[0]);
                    v265 = v261 + 16LL * v264;
                    v266 = *(_QWORD *)v265;
                    if ( v263 == *(_QWORD *)v265 )
                    {
                      v260 = (char *)s2;
                      goto LABEL_257;
                    }
                  }
                  while ( v266 != -1 );
                  v260 = (char *)s2;
                  if ( v381.m128i_i64[0] )
                    v265 = v381.m128i_i64[0];
                }
LABEL_257:
                *(_QWORD *)v265 = v263;
                v267 = *((_DWORD *)v260 + 2);
                LODWORD(v401) = v401 + 1;
                *(_DWORD *)(v265 + 8) = v267;
              }
              v260 += 16;
            }
            while ( v258 != v260 );
          }
          operator delete(v253, v378, 8);
          v240 = (__int64)v400;
          v349 = v402;
          v311 = v401 + 1;
        }
        else
        {
          v401 = 0;
          v349 = v402;
          for ( m = &v256[2 * v402]; m != v256; v256 += 2 )
            *v256 = -1;
          v311 = 1;
        }
        if ( !v349 )
          goto LABEL_653;
        v350 = *(int **)(v243 + 16);
        v239 = v349 - 1;
        v351 = v350;
        v352 = v239 & (((0xBF58476D1CE4E5B9LL * (unsigned __int64)v350) >> 31) ^ (484763065 * (_DWORD)v350));
        v249 = (__int64 *)(v240 + 16LL * v352);
        v238 = (int *)*v249;
        v312 = (int *)*v249;
        if ( v350 == (int *)*v249 )
          goto LABEL_361;
        if ( v238 != (int *)-1LL )
        {
          v363 = (int **)(v240
                        + 16LL
                        * ((unsigned int)v239
                         & ((unsigned int)((0xBF58476D1CE4E5B9LL * (unsigned __int64)v350) >> 31)
                          ^ (484763065 * (_DWORD)v350))));
          v377 = 1;
          v249 = nullptr;
          while ( 1 )
          {
            if ( v238 == (int *)-2LL && !v249 )
              v249 = (__int64 *)v363;
            v352 = v239 & (v377 + v352);
            v363 = (int **)(v240 + 16LL * v352);
            v238 = *v363;
            if ( v350 == *v363 )
            {
              v312 = *v363;
              v249 = (__int64 *)(v240 + 16LL * v352);
              goto LABEL_361;
            }
            if ( v238 == (int *)-1LL )
              break;
            ++v377;
          }
          if ( v249 )
          {
            v312 = (int *)*v249;
            v238 = *(int **)(v243 + 16);
            goto LABEL_361;
          }
LABEL_631:
          v249 = (__int64 *)v363;
        }
      }
      else
      {
        v239 = v402 >> 3;
        if ( v402 - HIDWORD(v401) - v311 > (unsigned int)v239 )
          goto LABEL_360;
        v325 = (((v247 >> 1) | v247 | (((v247 >> 1) | v247) >> 2)) >> 4)
             | (v247 >> 1)
             | v247
             | (((v247 >> 1) | v247) >> 2);
        v326 = ((((v325 >> 8) | v325) >> 16) | (v325 >> 8) | v325) + 1;
        if ( (unsigned int)v326 < 0x40 )
          LODWORD(v326) = 64;
        v402 = v326;
        v327 = sub_22300B0(16LL * (unsigned int)v326, 8, 64, v238, v239, v240);
        v400 = (__int64 *)v327;
        if ( v253 )
        {
          v328 = (_QWORD *)v327;
          v401 = 0;
          v329 = (char *)(16LL * v252);
          v330 = v402;
          v378 = v329;
          v331 = &v329[(_QWORD)v253];
          v332 = (_QWORD *)(v327 + 16LL * v402);
          if ( (_QWORD *)v327 != v332 )
          {
            do
            {
              *v328 = -1;
              v328 += 2;
            }
            while ( v332 != v328 );
          }
          v333 = (char *)v253;
          v334 = v327;
          v335 = v330 - 1;
          do
          {
            v336 = *(_QWORD *)v333;
            if ( (unsigned __int64)(*(_QWORD *)v333 + 2LL) > 1 )
            {
              if ( !v330 )
                goto LABEL_654;
              v337 = v335 & (((0xBF58476D1CE4E5B9LL * v336) >> 31) ^ (484763065 * v336));
              v338 = v334 + 16LL * v337;
              v339 = *(_QWORD *)v338;
              if ( v336 != *(_QWORD *)v338 && v339 != -1 )
              {
                LODWORD(n[0]) = 1;
                v381.m128i_i64[0] = 0;
                s2 = v333;
                while ( 1 )
                {
                  if ( !v381.m128i_i64[0] )
                  {
                    if ( v339 != -2 )
                      v338 = v381.m128i_i64[0];
                    v381.m128i_i64[0] = v338;
                  }
                  v337 = v335 & (LODWORD(n[0]) + v337);
                  v338 = v334 + 16LL * v337;
                  v339 = *(_QWORD *)v338;
                  if ( v336 == *(_QWORD *)v338 )
                  {
                    v333 = (char *)s2;
                    goto LABEL_414;
                  }
                  if ( v339 == -1 )
                    break;
                  ++LODWORD(n[0]);
                }
                v333 = (char *)s2;
                if ( v381.m128i_i64[0] )
                  v338 = v381.m128i_i64[0];
              }
LABEL_414:
              *(_QWORD *)v338 = v336;
              v340 = *((_DWORD *)v333 + 2);
              LODWORD(v401) = v401 + 1;
              *(_DWORD *)(v338 + 8) = v340;
            }
            v333 += 16;
          }
          while ( v331 != v333 );
          operator delete(v253, v378, 8);
          v327 = (__int64)v400;
          v361 = v402;
          v311 = v401 + 1;
        }
        else
        {
          v401 = 0;
          v361 = v402;
          v373 = (_QWORD *)(v327 + 16LL * v402);
          if ( (_QWORD *)v327 != v373 )
          {
            v374 = (_QWORD *)v327;
            do
            {
              *v374 = -1;
              v374 += 2;
            }
            while ( v373 != v374 );
          }
          v311 = 1;
        }
        if ( !v361 )
          goto LABEL_653;
        v238 = *(int **)(v243 + 16);
        v362 = v361 - 1;
        v239 = v362
             & ((unsigned int)((0xBF58476D1CE4E5B9LL * (unsigned __int64)v238) >> 31)
              ^ (484763065 * *(_DWORD *)(v243 + 16)));
        v249 = (__int64 *)(v327 + 16 * v239);
        v312 = (int *)*v249;
        if ( (int *)*v249 == v238 )
          goto LABEL_361;
        v351 = *(int **)(v243 + 16);
        if ( v312 != (int *)-1LL )
        {
          v363 = (int **)(v327
                        + 16LL
                        * (v362
                         & ((unsigned int)((0xBF58476D1CE4E5B9LL * *(_QWORD *)(v243 + 16)) >> 31)
                          ^ (484763065 * *(_DWORD *)(v243 + 16)))));
          v240 = 1;
          v249 = nullptr;
          while ( 1 )
          {
            if ( v312 == (int *)-2LL && !v249 )
              v249 = (__int64 *)v363;
            v239 = v362 & ((_DWORD)v240 + (_DWORD)v239);
            v363 = (int **)(v327 + 16LL * (unsigned int)v239);
            v312 = *v363;
            if ( v238 == *v363 )
            {
              v249 = (__int64 *)(v327 + 16LL * (unsigned int)v239);
              goto LABEL_361;
            }
            if ( v312 == (int *)-1LL )
              break;
            v240 = (unsigned int)(v240 + 1);
          }
          if ( !v249 )
          {
            v351 = *(int **)(v243 + 16);
            goto LABEL_631;
          }
LABEL_360:
          v312 = (int *)*v249;
LABEL_361:
          LODWORD(v401) = v311;
          if ( v312 != (int *)-1LL )
            --HIDWORD(v401);
LABEL_363:
          *v249 = (__int64)v238;
          v251 = 1;
          v238 = (int *)(v249 + 1);
          *((_DWORD *)v249 + 2) = 0;
          goto LABEL_244;
        }
      }
      LODWORD(v401) = v311;
      v238 = v351;
      goto LABEL_363;
    }
  }
LABEL_87:
  if ( ptr != p_ptr + 2 )
    free(ptr);
  v143 = v400;
  v144 = v403;
  v145 = v404;
  if ( (_DWORD)v401 )
  {
    v147 = 0;
    v378 = &v400;
    v146 = &v400[2 * v402];
  }
  else
  {
    v378 = &v400;
    v146 = &v400[2 * v402];
    v143 = v146;
    v147 = 1;
  }
  sub_1FFF3E0(v382, v143, v146, (__int64)&v400, v147);
  v148 = (unsigned __int64 *)v420;
  v149 = v421;
  sub_1FFF3E0(v382, &v400[2 * v402], &v400[2 * v402], (__int64)v378, 1);
  if ( v420 == v148 )
    goto LABEL_415;
  n[0] = (size_t)m128_u64;
  v150 = 0;
  v151 = 0;
  v378 = (void *)-1LL;
  v152 = 0;
  while ( 2 )
  {
    v153 = *v148;
    v154 = *((_DWORD *)v148 + 2);
    if ( !(_DWORD)v390 || (_DWORD)v390 == *(_DWORD *)(v4[21] + 4 * v153) )
    {
      if ( v152 )
      {
        v381.m128i_i8[0] = 1;
        goto LABEL_97;
      }
      v150 = v145;
      v152 = 1;
      v205 = v4[18] + 24 * v153;
      v157 = *(_BYTE **)v205;
      if ( *(_QWORD *)(v205 + 8) <= v145 )
        v150 = *(_QWORD *)(v205 + 8);
LABEL_102:
      if ( v150 )
      {
        if ( *v144 != *v157 )
        {
          v151 = v154;
          v378 = (void *)v153;
          v150 = 0;
          goto LABEL_108;
        }
        v158 = 0;
        while ( ++v158 != v150 )
        {
          if ( v144[v158] != v157[v158] )
          {
            v150 = v158;
            break;
          }
        }
      }
      v378 = (void *)v153;
      v151 = v154;
      goto LABEL_108;
    }
    if ( !v152 )
    {
      v381.m128i_i8[0] = 0;
LABEL_97:
      if ( v151 <= v154 )
      {
        v155 = v145;
        v156 = v4[18] + 24 * v153;
        v157 = *(_BYTE **)v156;
        if ( *(_QWORD *)(v156 + 8) <= v145 )
          v155 = *(_QWORD *)(v156 + 8);
        if ( v151 != v154 )
          goto LABEL_101;
        if ( v155 )
        {
          v229 = 0;
          if ( *v157 == *v144 )
          {
            do
              ++v229;
            while ( v229 != v155 && v144[v229] == v157[v229] );
          }
        }
        else
        {
          v229 = 0;
        }
        v151 = v154;
        if ( v229 >= v150 && (v229 != v150 || v153 <= (unsigned __int64)v378) )
        {
LABEL_101:
          v152 = v381.m128i_i8[0];
          v150 = v155;
          goto LABEL_102;
        }
      }
    }
LABEL_108:
    if ( v148 + 2 == v149 )
      goto LABEL_113;
    if ( v148[2] < 0xFFFFFFFFFFFFFFFELL )
    {
      v148 += 2;
    }
    else
    {
      v159 = v148 + 4;
      while ( 1 )
      {
        v148 = v159;
        if ( v159 == v149 )
          break;
        v159 += 2;
        if ( *v148 < 0xFFFFFFFFFFFFFFFELL )
          goto LABEL_114;
      }
LABEL_113:
      v148 = v149;
    }
LABEL_114:
    if ( v148 != v420 )
      continue;
    break;
  }
  m128_u64 = (_QWORD *)n[0];
  if ( v378 != (void *)-1LL )
    goto LABEL_116;
LABEL_415:
  v341 = v4[18];
  n[0] = v4[19];
  v381.m128i_i64[0] = v341;
  v342 = 0xAAAAAAAAAAAAAAABLL * ((signed __int64)(n[0] - v341) >> 3);
  if ( (signed __int64)(n[0] - v341) <= 0 )
  {
LABEL_490:
    v378 = *(void **)(v381.m128i_i64[0] + 16);
    goto LABEL_116;
  }
  s2 = m128_u64;
  v343 = v145;
  v390 = v4;
  v344 = v341;
  v378 = v144;
  while ( 2 )
  {
    v345 = v344 + 24 * (v342 >> 1);
    v346 = *(_QWORD *)(v345 + 8);
    v347 = v346;
    if ( v343 <= v346 )
      v347 = v343;
    if ( v347 )
    {
      v348 = memcmp(*(const void **)v345, v378, v347);
      if ( v348 )
      {
        if ( v348 >= 0 )
          goto LABEL_425;
        goto LABEL_417;
      }
    }
    if ( v343 != v346 && v343 > v346 )
    {
LABEL_417:
      v344 = v345 + 24;
      v342 = v342 - (v342 >> 1) - 1;
      goto LABEL_418;
    }
LABEL_425:
    v342 >>= 1;
LABEL_418:
    if ( v342 > 0 )
      continue;
    break;
  }
  v353 = v343;
  v354 = v344;
  m128_u64 = s2;
  v4 = v390;
  if ( v381.m128i_i64[0] == v354 )
    goto LABEL_490;
  if ( n[0] == v354 )
  {
    v378 = *(void **)(n[0] - 8);
  }
  else
  {
    v355 = v353;
    if ( *(_QWORD *)(v354 + 8) <= v353 )
      v355 = *(_QWORD *)(v354 + 8);
    v356 = *(_BYTE **)v354;
    if ( v355 && (v357 = *(_BYTE *)v378, *(_BYTE *)v378 == *v356) )
    {
      v358 = 0;
      while ( ++v358 != v355 )
      {
        if ( *((_BYTE *)v378 + v358) != v356[v358] )
        {
          if ( *(_QWORD *)(v354 - 16) <= v353 )
            v353 = *(_QWORD *)(v354 - 16);
          v359 = *(_BYTE **)(v354 - 24);
          if ( v353 && v357 == *v359 )
          {
            v355 = v358;
            goto LABEL_446;
          }
          goto LABEL_451;
        }
      }
      if ( *(_QWORD *)(v354 - 16) <= v353 )
        v353 = *(_QWORD *)(v354 - 16);
      v359 = *(_BYTE **)(v354 - 24);
      if ( !v353 || v357 != *v359 )
        goto LABEL_451;
LABEL_446:
      v360 = 0;
      while ( ++v360 < v353 )
      {
        if ( *((_BYTE *)v378 + v360) != v359[v360] )
        {
          v353 = v360;
          break;
        }
      }
      if ( v353 >= v355 )
        goto LABEL_450;
    }
    else
    {
      if ( *(_QWORD *)(v354 - 16) <= v353 )
        v353 = *(_QWORD *)(v354 - 16);
      v359 = *(_BYTE **)(v354 - 24);
      if ( v353 && *v359 == *(_BYTE *)v378 )
      {
        v355 = 0;
        goto LABEL_446;
      }
LABEL_450:
      v354 -= 24;
    }
LABEL_451:
    v378 = *(void **)(v354 + 16);
  }
LABEL_116:
  v160 = (__int64 *)(v4[2] + 32LL * (_QWORD)v378);
  v161 = *v160;
  v162 = v160[1];
  operator delete(v400, 16LL * v402, 8);
  if ( v403 != v389 + 2 )
    operator delete(v403);
  v387(p_ptr, v388, v161, v162);
  v163 = (char *)ptr;
  if ( (void *)v406 == ptr )
  {
    m128_u64[2] = 0;
    *(_OWORD *)m128_u64 = 0;
  }
  else
  {
    v408[0] = v383 + 2;
    if ( *(void **)ptr == (char *)ptr + 16 )
    {
      v409 = _mm_loadu_si128((const __m128i *)ptr + 1);
    }
    else
    {
      v408[0] = *(void **)ptr;
      v409.m128i_i64[0] = *((_QWORD *)ptr + 2);
    }
    v408[1] = *((void **)ptr + 1);
    *(_QWORD *)ptr = (char *)ptr + 16;
    v164 = v383;
    *((_QWORD *)v163 + 1) = 0;
    v163[16] = 0;
    v410[0] = v164 + 6;
    if ( *((char **)v163 + 4) == v163 + 48 )
    {
      v411 = _mm_loadu_si128((const __m128i *)v163 + 3);
    }
    else
    {
      v410[0] = *((void **)v163 + 4);
      v411.m128i_i64[0] = *((_QWORD *)v163 + 6);
    }
    v410[1] = *((void **)v163 + 5);
    v163[48] = 0;
    *((_QWORD *)v163 + 4) = v163 + 48;
    *((_QWORD *)v163 + 5) = 0;
    *(_OWORD *)v412 = 0;
    v413 = 0;
    v412[0] = *((void **)v163 + 8);
    v165 = *((void **)v163 + 9);
    *((_QWORD *)v163 + 8) = 0;
    v166 = v412[1];
    v412[1] = v165;
    v167 = *((_QWORD *)v163 + 10);
    *((_QWORD *)v163 + 9) = v166;
    v168 = v413;
    v413 = v167;
    *((_QWORD *)v163 + 10) = v168;
    v414 = v383 + 13;
    if ( *((char **)v163 + 11) == v163 + 104 )
    {
      v416 = _mm_loadu_si128((const __m128i *)(v163 + 104));
    }
    else
    {
      v414 = *((void **)v163 + 11);
      v416.m128i_i64[0] = *((_QWORD *)v163 + 13);
    }
    v415 = *((_QWORD *)v163 + 12);
    *((_QWORD *)v163 + 11) = v163 + 104;
    v169 = v383;
    *((_QWORD *)v163 + 12) = 0;
    v163[104] = 0;
    v417 = v169 + 17;
    if ( *((char **)v163 + 15) == v163 + 136 )
    {
      v419 = _mm_loadu_si128((const __m128i *)(v163 + 136));
    }
    else
    {
      v417 = *((void **)v163 + 15);
      v419.m128i_i64[0] = *((_QWORD *)v163 + 17);
    }
    v170 = (__int64)v380;
    v171 = (__int64)v383;
    v172 = v382;
    v418 = *((_QWORD *)v163 + 16);
    v173 = v379;
    *((_QWORD *)v163 + 15) = v163 + 136;
    *((_QWORD *)v163 + 16) = 0;
    v163[136] = 0;
    sub_1FFD0E0((__int64)v172, v171, v173, v170);
    m128_u64[2] = 0;
    *(_OWORD *)m128_u64 = 0;
    v174 = (_QWORD *)operator new(0x98u);
    v175 = v420;
    v176 = v421;
    v177 = v174;
    *m128_u64 = v174;
    v379 = v174 + 19;
    m128_u64[2] = v174 + 19;
    *v174 = v174 + 2;
    sub_1FFB870(v174, v175, (__int64)v176 + (_QWORD)v175);
    v178 = v422;
    v177[4] = v177 + 6;
    sub_1FFB870(v177 + 4, v178, (__int64)&v178[v423]);
    v179 = v425;
    v180 = v424;
    *((_OWORD *)v177 + 4) = 0;
    v177[10] = 0;
    v181 = v179 - v180;
    if ( (v179 - v180) >> 5 )
    {
      if ( (unsigned __int64)((v179 - v180) >> 5) > 0x7FFFFFFFFFFFFFFLL )
        std::__throw_bad_alloc();
      v182 = (void *)operator new(v179 - v180);
      v180 = v424;
      v179 = v425;
      v378 = v182;
    }
    else
    {
      v378 = nullptr;
    }
    v183 = v378;
    v380 = v378;
    v184 = _mm_loadl_epi64((const __m128i *)&v380);
    v177[10] = (char *)v378 + v181;
    *((__m128i *)v177 + 4) = _mm_unpacklo_epi64(v184, v184);
    if ( v180 != v179 )
    {
      v185 = (_BYTE **)v180;
      v186 = v183;
      do
      {
        v187 = v186 + 2;
        v188 = v186;
        v185 += 4;
        v186 += 4;
        *(v186 - 4) = v187;
        sub_1FFB870(v188, *(v185 - 4), (__int64)&(*(v185 - 3))[(_QWORD)*(v185 - 4)]);
      }
      while ( v179 != (_BYTE *)v185 );
      v378 = (char *)v378 + ((v179 - 32 - v180) & 0xFFFFFFFFFFFFFFE0LL) + 32;
    }
    v189 = v426;
    v190 = v427;
    v177[9] = v378;
    v177[11] = v177 + 13;
    sub_1FFB870(v177 + 11, v189, (__int64)&v189[v190]);
    v191 = v428;
    v177[15] = v177 + 17;
    sub_1FFB870(v177 + 15, v191, (__int64)&v191[v429]);
    v192 = (__m128 *)v428;
    m128_u64[1] = v379;
    if ( v192 != (__m128 *)&v382[8].m128_u16[4] )
      operator delete(v192);
    if ( v426 != &v382[6].m128_u16[4] )
      operator delete(v426);
    v193 = (void **)v425;
    v194 = (void **)v424;
    if ( v425 != v424 )
    {
      do
      {
        while ( *v194 != v194 + 2 )
        {
          operator delete(*v194);
          v194 += 4;
          if ( v193 == v194 )
            goto LABEL_141;
        }
        v194 += 4;
      }
      while ( v193 != v194 );
LABEL_141:
      v194 = (void **)v424;
    }
    if ( v194 )
      operator delete(v194);
    if ( v422 != &v382[3] )
      operator delete(v422);
    if ( v420 != &v382[1] )
      operator delete(v420);
    if ( v417 != v383 + 17 )
      operator delete(v417);
    if ( v414 != v383 + 13 )
      operator delete(v414);
    v195 = (void **)v412[1];
    v196 = (void **)v412[0];
    if ( v412[1] != v412[0] )
    {
      do
      {
        while ( *v196 != v196 + 2 )
        {
          operator delete(*v196);
          v196 += 4;
          if ( v195 == v196 )
            goto LABEL_155;
        }
        v196 += 4;
      }
      while ( v195 != v196 );
LABEL_155:
      v196 = (void **)v412[0];
    }
    if ( v196 )
      operator delete(v196);
    if ( v410[0] != v383 + 6 )
      operator delete(v410[0]);
    if ( v408[0] != v383 + 2 )
      operator delete(v408[0]);
    v197 = (char *)v406;
    v163 = (char *)ptr;
    if ( (void *)v406 != ptr )
    {
      do
      {
        while ( 1 )
        {
          v198 = *((char **)v163 + 15);
          if ( v198 != v163 + 136 )
            operator delete(v198);
          v199 = *((char **)v163 + 11);
          if ( v199 != v163 + 104 )
            operator delete(v199);
          v200 = *((void ***)v163 + 9);
          v201 = *((void ***)v163 + 8);
          if ( v200 != v201 )
          {
            do
            {
              while ( *v201 != v201 + 2 )
              {
                operator delete(*v201);
                v201 += 4;
                if ( v201 == v200 )
                  goto LABEL_170;
              }
              v201 += 4;
            }
            while ( v200 != v201 );
LABEL_170:
            v201 = *((void ***)v163 + 8);
          }
          if ( v201 )
            operator delete(v201);
          v202 = *((char **)v163 + 4);
          if ( v202 != v163 + 48 )
            operator delete(v202);
          if ( *(char **)v163 == v163 + 16 )
            break;
          operator delete(*(void **)v163);
          v163 += 152;
          if ( v197 == v163 )
            goto LABEL_177;
        }
        v163 += 152;
      }
      while ( v197 != v163 );
LABEL_177:
      v163 = (char *)ptr;
    }
  }
  if ( v163 )
    operator delete(v163);
  v273 = v398;
  v274 = (char *)v397;
  if ( v398 != v397 )
  {
    do
    {
      while ( 1 )
      {
        v275 = *((char **)v274 + 15);
        if ( v275 != v274 + 136 )
          operator delete(v275);
        v276 = *((char **)v274 + 11);
        if ( v276 != v274 + 104 )
          operator delete(v276);
        v277 = *((void ***)v274 + 9);
        v278 = *((void ***)v274 + 8);
        if ( v277 != v278 )
        {
          do
          {
            while ( *v278 != v278 + 2 )
            {
              operator delete(*v278);
              v278 += 4;
              if ( v278 == v277 )
                goto LABEL_286;
            }
            v278 += 4;
          }
          while ( v277 != v278 );
LABEL_286:
          v278 = *((void ***)v274 + 8);
        }
        if ( v278 )
          operator delete(v278);
        v279 = *((char **)v274 + 4);
        if ( v279 != v274 + 48 )
          operator delete(v279);
        if ( *(char **)v274 == v274 + 16 )
          break;
        operator delete(*(void **)v274);
        v274 += 152;
        if ( v273 == v274 )
          goto LABEL_293;
      }
      v274 += 152;
    }
    while ( v273 != v274 );
LABEL_293:
    v274 = (char *)v397;
  }
  if ( v274 )
    operator delete(v274);
  return m128_u64;
}
