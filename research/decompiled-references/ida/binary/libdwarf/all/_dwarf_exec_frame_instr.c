__int64 __fastcall dwarf_exec_frame_instr(
        int a1,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int8 *a5,
        unsigned __int8 *a6,
        __int64 a7,
        _QWORD *a8,
        Dwarf_Debug a9,
        __int64 a10,
        _DWORD *a11,
        unsigned __int64 *a12,
        _QWORD *a13,
        __int64 *a14,
        __int64 a15)
{
  size_t v17; // rcx
  _QWORD *v18; // rax
  _QWORD *v19; // r11
  size_t v20; // rcx
  _QWORD *v21; // r13
  unsigned __int16 v22; // ax
  __int64 v23; // rbx
  __int64 v24; // r8
  __int64 v25; // rax
  unsigned __int8 *v26; // rdx
  __m128 *v27; // rbx
  __int64 v28; // rcx
  unsigned __int8 *v29; // rbp
  __int64 v30; // r9
  __int64 v31; // kr00_8
  __m128 *v32; // rax
  char *v33; // rdx
  unsigned __int16 v34; // ax
  _QWORD *v35; // rax
  size_t v36; // rdx
  int v37; // edx
  __int64 v38; // rax
  void *v39; // rbp
  void *v40; // rdi
  char v43; // cl
  unsigned int v44; // r9d
  void *v45; // rbp
  void *v46; // rdi
  void *v47; // rdi
  __int64 v48; // rax
  char v49; // di
  void *v50; // rbx
  _QWORD *v51; // r12
  void *v52; // rsi
  unsigned int unaligned_ck_wrapper; // eax
  void **v54; // rax
  unsigned int v55; // eax
  unsigned __int64 v56; // rbp
  unsigned int v57; // eax
  int v58; // eax
  unsigned __int64 v59; // rbp
  __int64 v60; // rdx
  char *v61; // rax
  unsigned int v62; // eax
  __int64 v63; // rcx
  __int64 v64; // r8
  int v65; // eax
  unsigned __int64 v66; // rax
  char v67; // cl
  char *v68; // rdi
  unsigned int v69; // eax
  __int64 v70; // rcx
  __int64 v71; // r8
  int v72; // eax
  void *v73; // rbp
  void *v74; // rdi
  unsigned int v75; // eax
  __int64 v76; // rcx
  __int64 v77; // r8
  int v78; // eax
  void *v79; // rbp
  void *v80; // rdi
  unsigned int v81; // eax
  unsigned int v82; // eax
  unsigned int v83; // eax
  unsigned int v84; // eax
  int v85; // eax
  unsigned int v86; // eax
  unsigned int v87; // eax
  unsigned int v88; // eax
  __m128 v89; // xmm0
  unsigned int v90; // eax
  unsigned __int64 v91; // rbp
  unsigned int v92; // eax
  int v93; // eax
  __int64 v94; // rdx
  _QWORD *v95; // rax
  __m128 v96; // xmm0
  unsigned int v97; // eax
  __int64 v98; // rcx
  __int64 v99; // r8
  int v100; // eax
  unsigned int v101; // eax
  unsigned int v102; // eax
  unsigned __int64 v103; // rdi
  unsigned __int8 *v104; // rsi
  unsigned __int64 v105; // rax
  _QWORD *v106; // rdx
  unsigned __int64 v107; // rax
  bool v108; // cl
  void *v109; // rbp
  void *v110; // rdi
  unsigned __int64 v111; // rbp
  unsigned __int64 v112; // rax
  char v113; // si
  unsigned int v114; // eax
  unsigned int v115; // eax
  int v116; // eax
  __int64 v117; // rax
  unsigned int v118; // eax
  unsigned __int64 v119; // rbp
  unsigned int v120; // eax
  int v121; // eax
  _QWORD *v122; // rbp
  __int64 v123; // rax
  unsigned int v124; // eax
  int v125; // eax
  unsigned int v126; // eax
  unsigned int v127; // eax
  int v128; // eax
  unsigned int v129; // eax
  unsigned __int64 v130; // rbp
  unsigned int v131; // eax
  int v132; // eax
  unsigned __int64 v133; // rbp
  __int64 v134; // rdx
  char *v135; // rax
  unsigned int v136; // eax
  unsigned __int8 **v137; // rsi
  unsigned int v138; // eax
  unsigned __int8 **v139; // r11
  unsigned __int64 v140; // rdi
  unsigned __int64 v141; // rax
  _QWORD *v142; // rdx
  unsigned __int8 *v143; // rsi
  unsigned __int64 v144; // rax
  bool v145; // cf
  char v146; // cl
  void *v147; // rbp
  void *v148; // rdi
  unsigned int v149; // eax
  unsigned __int64 v150; // rax
  unsigned __int8 *v151; // rdi
  unsigned __int64 v152; // rsi
  unsigned int v153; // eax
  void *v154; // rbp
  void *v155; // rdi
  unsigned int v156; // eax
  unsigned int v157; // eax
  unsigned int v158; // eax
  void *v159; // rbp
  __int64 alloc; // rax
  unsigned __int64 v161; // rdx
  unsigned __int64 v162; // rsi
  __int64 v163; // rcx
  bool v164; // zf
  unsigned int v165; // eax
  unsigned __int64 v166; // rbp
  unsigned int v167; // eax
  unsigned __int64 v168; // rdx
  _QWORD *v169; // rax
  __m128i v170; // xmm1
  unsigned int v171; // eax
  unsigned __int64 v172; // rdx
  __int64 v173; // rcx
  _QWORD *v174; // rax
  unsigned int v175; // eax
  __int64 v176; // rcx
  __int64 v177; // rcx
  __int64 v178; // rax
  unsigned int v179; // eax
  __int64 v180; // rcx
  _QWORD *v181; // rax
  void *v182; // rdi
  void *v183; // rbp
  void *v184; // rdi
  void *v185; // rbp
  void *v186; // rdi
  unsigned __int64 v187; // rcx
  __int64 v188; // rdx
  __int64 v189; // rdx
  unsigned __int64 v190; // rax
  void *v191; // rbp
  void *v192; // rdi
  _QWORD *v193; // r14
  __int64 v194; // rax
  __int64 v195; // rdi
  __int64 v196; // r12
  _QWORD *v197; // rdx
  void *v198; // rdi
  int v199; // edx
  __int64 v200; // rax
  void *v201; // rbp
  void *v202; // rdi
  void *v203; // rbp
  void *v204; // rdi
  void *v205; // rbp
  void *v206; // rdi
  void *v207; // rbp
  unsigned int v208; // r12d
  void *v209; // rdi
  void *v210; // rbp
  void *v211; // rdi
  void *v212; // rbp
  void *v213; // rdi
  void *v214; // rbp
  void *v215; // rdi
  void *v216; // rbp
  void *v217; // rdi
  void *v218; // rbp
  void *v219; // rdi
  void *v220; // rbp
  void *v221; // rdi
  void *v222; // rbp
  void *v223; // rdi
  void *v224; // rbp
  void *v225; // rdi
  void *v226; // rbp
  void *v227; // rdi
  void *v228; // rbp
  void *v229; // rdi
  void *v230; // rbp
  void *v231; // rdi
  void *v232; // rbp
  void *v233; // rdi
  void *v234; // rbp
  void *v235; // rdi
  void *v236; // rbp
  void *v237; // rdi
  void *v238; // rbp
  void *v239; // rdi
  void *v240; // rbp
  void *v241; // rdi
  void *v242; // rbp
  void *v243; // rdi
  void *v244; // rbp
  void *v245; // rdi
  void *v246; // rbp
  void *v247; // rdi
  void *v248; // rbp
  void *v249; // rdi
  void *v250; // rbp
  void *v251; // rdi
  void *v252; // rbp
  void *v253; // rdi
  void *v254; // rbp
  void *v255; // rdi
  void *v256; // rbp
  void *v257; // rdi
  void *v258; // rbp
  void *v259; // rdi
  void *v260; // rbp
  void *v261; // rdi
  void *v262; // rbp
  void *v263; // rdi
  void *v264; // rbp
  void *v265; // rdi
  void *v266; // rbp
  void *v267; // rdi
  void *v268; // rbp
  void *v269; // rdi
  void *v270; // rbp
  void *v271; // rdi
  void *v272; // rbp
  void *v273; // rdi
  void *v274; // rbp
  void *v275; // rdi
  void *v276; // rbp
  void *v277; // rdi
  void *v278; // rbp
  void *v279; // rdi
  void *v280; // rbp
  void *v281; // rdi
  void *v282; // rbp
  void *v283; // rdi
  void *v284; // rbp
  void *v285; // rdi
  void *v286; // rbp
  void *v287; // rdi
  void *v288; // rbp
  void *v289; // rdi
  void *v290; // rbp
  void *v291; // rdi
  void *v292; // rbp
  void *v293; // rdi
  void *v294; // rbp
  void *v295; // rdi
  void *v296; // rbp
  void *v297; // rdi
  void *v298; // rbp
  void *v299; // rdi
  void *v300; // rbp
  void *v301; // rdi
  void *v302; // rbp
  void *v303; // rdi
  void *v304; // rbp
  void *v305; // rdi
  void *v306; // rbp
  void *v307; // rdi
  void *v308; // rbp
  void *v309; // rdi
  void *v310; // rbp
  void *v311; // rdi
  void *v312; // rbp
  void *v313; // rdi
  void *v314; // rbp
  void *v315; // rdi
  void *v316; // rbp
  void *v317; // rdi
  void *v318; // rbp
  void *v319; // rdi
  void *v320; // rbp
  void *v321; // rdi
  void *v322; // rbp
  void *v323; // rdi
  void *v324; // rbp
  void *v325; // rdi
  void *v326; // rbp
  void *v327; // rdi
  void *v328; // rbp
  void *v329; // rdi
  void *v330; // rbp
  void *v331; // rdi
  void *v332; // rbp
  void *v333; // rdi
  void *v334; // rbp
  void *v335; // rdi
  void *v336; // rbp
  void *v337; // rdi
  void *v338; // rbp
  void *v339; // rdi
  void *v340; // rbp
  void *v341; // rdi
  void *v342; // rbp
  void *v343; // rdi
  void *v344; // rbp
  void *v345; // rdi
  void *v346; // rbp
  void *v347; // rdi
  void *v348; // rbp
  void *v349; // rdi
  void *v350; // rbp
  void *v351; // rdi
  void *v352; // rbp
  void *v353; // rdi
  void *v354; // rbp
  void *v355; // rdi
  void *v356; // rbp
  void *v357; // rdi
  void *v358; // rbp
  void *v359; // rdi
  void *v360; // rbp
  void *v361; // rdi
  void *v362; // rbp
  void *v363; // rdi
  void *v364; // rbp
  void *v365; // rdi
  void *v366; // rbp
  void *v367; // rdi
  void *v368; // rbp
  void *v369; // rdi
  void *v370; // rbp
  void *v371; // rdi
  void *v372; // rbp
  void *v373; // rdi
  void *v374; // rbp
  void *v375; // rdi
  void *v376; // rbp
  void *v377; // rdi
  void *v378; // rbp
  void *v379; // rdi
  void *v380; // rbp
  void *v381; // rdi
  void *v382; // rbp
  void *v383; // rdi
  void *v384; // rbp
  void *v385; // rdi
  void *v386; // rbp
  void *v387; // rdi
  void *v388; // rbp
  void *v389; // rdi
  void *v390; // rbp
  void *v391; // rdi
  void *v392; // rbp
  void *v393; // rdi
  void *v394; // rbp
  void *v395; // rdi
  void *v396; // rbp
  void *v397; // rdi
  void *v398; // rdi
  void *v399; // rbp
  void *v400; // rdi
  void *v401; // rbx
  void *v402; // rdi
  unsigned int v403; // [rsp+8h] [rbp-190h]
  int v405; // [rsp+10h] [rbp-188h]
  __int64 v406; // [rsp+10h] [rbp-188h]
  __m128 *v407; // [rsp+10h] [rbp-188h]
  _QWORD *v408; // [rsp+10h] [rbp-188h]
  size_t v409; // [rsp+18h] [rbp-180h]
  void **p_ptr; // [rsp+18h] [rbp-180h]
  _QWORD *v411; // [rsp+18h] [rbp-180h]
  __int64 v412; // [rsp+20h] [rbp-178h] BYREF
  unsigned __int64 v413; // [rsp+28h] [rbp-170h]
  unsigned __int8 *v414; // [rsp+30h] [rbp-168h]
  unsigned __int64 v415; // [rsp+38h] [rbp-160h]
  __int64 v416; // [rsp+40h] [rbp-158h]
  unsigned __int8 **v417; // [rsp+48h] [rbp-150h]
  unsigned __int8 *v418; // [rsp+50h] [rbp-148h]
  __int64 v419; // [rsp+58h] [rbp-140h]
  char v420; // [rsp+61h] [rbp-137h]
  char v421; // [rsp+62h] [rbp-136h]
  unsigned __int8 v422; // [rsp+63h] [rbp-135h]
  _BOOL4 v423; // [rsp+64h] [rbp-134h]
  unsigned __int64 v424; // [rsp+68h] [rbp-130h]
  __int64 v425; // [rsp+70h] [rbp-128h]
  void *v426; // [rsp+78h] [rbp-120h]
  __int64 v427; // [rsp+80h] [rbp-118h]
  __int64 v428; // [rsp+88h] [rbp-110h]
  unsigned __int64 v429; // [rsp+90h] [rbp-108h]
  unsigned __int64 v430; // [rsp+98h] [rbp-100h]
  _QWORD *v431; // [rsp+A0h] [rbp-F8h]
  __int64 v432; // [rsp+A8h] [rbp-F0h]
  _DWORD *v433; // [rsp+B0h] [rbp-E8h]
  unsigned __int64 *v434; // [rsp+B8h] [rbp-E0h]
  _QWORD *v435; // [rsp+C0h] [rbp-D8h]
  __int64 *v436; // [rsp+C8h] [rbp-D0h]
  unsigned int v437; // [rsp+D0h] [rbp-C8h]
  unsigned __int16 v438; // [rsp+D4h] [rbp-C4h]
  char v439; // [rsp+D7h] [rbp-C1h]
  __int64 v440; // [rsp+D8h] [rbp-C0h]
  unsigned __int8 *v441; // [rsp+E0h] [rbp-B8h] BYREF
  __int64 v442; // [rsp+E8h] [rbp-B0h] BYREF
  unsigned __int64 v443; // [rsp+F0h] [rbp-A8h] BYREF
  __int64 v444; // [rsp+F8h] [rbp-A0h] BYREF
  unsigned __int64 v445; // [rsp+100h] [rbp-98h] BYREF
  void *ptr; // [rsp+108h] [rbp-90h] BYREF
  __int64 v447; // [rsp+110h] [rbp-88h] BYREF
  unsigned __int64 v448; // [rsp+118h] [rbp-80h] BYREF
  unsigned __int64 v449; // [rsp+120h] [rbp-78h] BYREF
  unsigned __int64 v450; // [rsp+128h] [rbp-70h] BYREF
  _QWORD v451[13]; // [rsp+130h] [rbp-68h] BYREF

  v437 = a2;
  v429 = a3;
  v432 = a7;
  v412 = (__int64)a8;
  v433 = a11;
  v424 = a4;
  v434 = a12;
  v435 = a13;
  v436 = a14;
  v17 = *((_QWORD *)a9 + 1040);
  v451[5] = __readfsqword(0x28u);
  v441 = nullptr;
  v409 = v17;
  v442 = 0;
  v443 = 0;
  v444 = 0;
  v18 = calloc(v17, 0x40u);
  v19 = a8;
  v20 = v409;
  v445 = 0;
  v21 = v18;
  if ( !a8 )
  {
    v34 = *((unsigned __int8 *)a9 + 280);
    ptr = nullptr;
    v438 = v34;
    if ( v21 )
    {
      v24 = *((_QWORD *)a9 + 1039);
      if ( !v409 )
      {
        v414 = nullptr;
        v413 = 0;
        v416 = 0;
        v412 = 0;
        v421 = 0;
        v420 = 0;
        goto LABEL_24;
      }
      goto LABEL_21;
    }
LABEL_616:
    _dwarf_error(a9, a15, 62);
    return 1;
  }
  v22 = *(_WORD *)(v412 + 168);
  ptr = nullptr;
  v438 = v22;
  if ( !v21 )
    goto LABEL_616;
  v23 = *(_QWORD *)(v412 + 72);
  if ( !v23 )
  {
    v24 = *((_QWORD *)a9 + 1039);
    if ( !v409 )
    {
      v414 = nullptr;
      v413 = 0;
      v416 = 0;
      v412 = 0;
      v421 = 0;
      v420 = 0;
      goto LABEL_8;
    }
LABEL_21:
    v35 = v21;
    v36 = 0;
    do
    {
      ++v36;
      v35[1] = v24;
      v35 += 8;
      *((_WORD *)v35 - 32) = 0;
      *(v35 - 6) = 0;
      *(v35 - 3) = 0;
      *(_OWORD *)(v35 - 5) = 0;
    }
    while ( v36 < v409 );
    v414 = nullptr;
    v413 = 0;
    v416 = 0;
    v412 = 0;
    v421 = 0;
    v420 = 0;
    if ( !a8 )
      goto LABEL_24;
    goto LABEL_8;
  }
  if ( *(_QWORD *)(v23 + 72) != v409 )
  {
    free(v21);
    _dwarf_error(a9, a15, 202);
    return 1;
  }
  if ( (_DWORD)v409 )
  {
    memcpy(v21, *(const void **)(v23 + 80), (unsigned __int64)(unsigned int)v409 << 6);
    v20 = v409;
    v19 = (_QWORD *)v412;
  }
  v24 = *(_QWORD *)(v23 + 16);
  v420 = *(_BYTE *)(v23 + 8);
  v421 = *(_BYTE *)(v23 + 9);
  v412 = *(_QWORD *)(v23 + 24);
  v416 = *(_QWORD *)(v23 + 32);
  v413 = *(_QWORD *)(v23 + 40);
  v414 = *(unsigned __int8 **)(v23 + 48);
  v439 = *(_BYTE *)(v23 + 56);
  v440 = *(_QWORD *)(v23 + 64);
LABEL_8:
  if ( v19[1] )
  {
    v25 = v19[2];
    v423 = 0;
    v427 = v25;
    v425 = v19[3];
    goto LABEL_10;
  }
LABEL_24:
  v425 = 1;
  v427 = 1;
  v423 = a1 == 0;
LABEL_10:
  v441 = a5;
  v430 = a6 - a5;
  if ( a5 >= a6 )
  {
    v45 = ptr;
    if ( a6 >= a5 )
    {
      v426 = nullptr;
      v27 = nullptr;
      v419 = 0;
      goto LABEL_36;
    }
    v27 = nullptr;
LABEL_41:
    while ( v45 )
    {
      v46 = v45;
      v45 = *((void **)v45 + 15);
      free(v46);
    }
    free(v27);
    free(v21);
    _dwarf_error(a9, a15, 193);
    return 1;
  }
  v26 = a5;
  v415 = v20;
  v27 = nullptr;
  v419 = 0;
  p_ptr = &ptr;
  v426 = nullptr;
  v428 = v24;
  v431 = v19;
  while ( 2 )
  {
    v447 = 0;
    if ( v26 < a5 )
    {
      v183 = ptr;
      while ( v183 )
      {
        v184 = v183;
        v183 = *((void **)v183 + 15);
        free(v184);
      }
      free(v27);
      free(v21);
      _dwarf_error_string(
        a9,
        a15,
        62,
        "DW_DLE_ALLOC_FAIL: DW_DLE_DF_NEW_LOC_LESS_OLD_LOC: Following instruction bytes we find impossible decrease in a pointer");
      return 1;
    }
    v28 = *v26;
    v29 = v26 + 1;
    v441 = v26 + 1;
    v30 = (unsigned int)v28 & 0xFFFFFFC0;
    if ( (unsigned __int8)v28 <= 0x3Fu )
      v30 = (unsigned int)v28;
    if ( !a1 )
    {
      v31 = v30;
      v30 = (unsigned __int8)v30;
      switch ( v31 )
      {
        case 0LL:
        case 28LL:
        case 45LL:
          goto LABEL_31;
        case 1LL:
          goto LABEL_62;
        case 2LL:
          goto LABEL_95;
        case 3LL:
          goto LABEL_78;
        case 4LL:
          goto LABEL_88;
        case 5LL:
          goto LABEL_68;
        case 6LL:
          goto LABEL_246;
        case 7LL:
          goto LABEL_242;
        case 8LL:
          goto LABEL_252;
        case 9LL:
          goto LABEL_236;
        case 10LL:
          goto LABEL_229;
        case 11LL:
          goto LABEL_224;
        case 12LL:
          goto LABEL_217;
        case 13LL:
          goto LABEL_213;
        case 14LL:
          goto LABEL_207;
        case 15LL:
          goto LABEL_202;
        case 16LL:
          goto LABEL_194;
        case 17LL:
          goto LABEL_187;
        case 18LL:
          goto LABEL_180;
        case 19LL:
          goto LABEL_173;
        case 20LL:
          goto LABEL_164;
        case 21LL:
          goto LABEL_157;
        case 22LL:
          goto LABEL_139;
        case 29LL:
          goto LABEL_129;
        case 46LL:
          goto LABEL_119;
        case 48LL:
          goto LABEL_113;
        case 49LL:
          goto LABEL_106;
        case 52LL:
          goto LABEL_102;
        case 64LL:
          goto LABEL_147;
        case 128LL:
          goto LABEL_122;
        case 192LL:
          v187 = v28 & 0x3F;
          if ( v187 >= v415 )
            goto LABEL_448;
          if ( v431 )
            goto LABEL_288;
          goto LABEL_295;
        default:
          goto LABEL_25;
      }
    }
    v422 = v30;
    v418 = v26;
    LOBYTE(v417) = v28;
    v32 = (__m128 *)calloc(1u, 0x80u);
    v28 = (unsigned __int8)v417;
    v33 = (char *)v418;
    v30 = v422;
    v27 = v32;
    if ( !v32 )
    {
      v401 = ptr;
      while ( v401 )
      {
        v402 = v401;
        v401 = *((void **)v401 + 15);
        free(v402);
      }
      free(v21);
      _dwarf_error_string(a9, a15, 62, "DW_DLE_ALLOC_FAIL: DW_CFA_advance_loc out of memory");
      return 1;
    }
    v32->m128_i8[0] = v422;
    v32->m128_u64[1] = v33 - (char *)a5;
    v32[1].m128_u64[1] = (unsigned __int64)"";
    switch ( v30 )
    {
      case 0LL:
        v26 = v29;
        v43 = v29 < a6;
        LOBYTE(v44) = 0;
        goto LABEL_67;
      case 1LL:
LABEL_62:
        v451[0] = 0;
        unaligned_ck_wrapper = _dwarf_read_unaligned_ck_wrapper(a9, v451, v29, v438, a6, a15);
        v44 = unaligned_ck_wrapper;
        if ( unaligned_ck_wrapper )
        {
          v248 = ptr;
          v208 = unaligned_ck_wrapper;
          if ( ptr )
          {
            do
            {
              v249 = v248;
              v248 = *((void **)v248 + 15);
              free(v249);
            }
            while ( v248 );
            goto LABEL_323;
          }
          break;
        }
        v26 = &v441[v438];
        v441 = v26;
        if ( v451[0] )
        {
          v43 = v424 >= v451[0] && v424 != 0;
          if ( v43 )
          {
            v399 = ptr;
            while ( v399 )
            {
              v400 = v399;
              v399 = *((void **)v399 + 15);
              free(v400);
            }
            free(v27);
            free(v21);
            _dwarf_error(a9, a15, 190);
            return 1;
          }
          if ( v437 && v429 < v451[0] )
          {
            LOBYTE(v44) = 1;
          }
          else
          {
            v424 = v451[0];
            v43 = v26 < a6;
          }
        }
        else
        {
          v424 = 0;
          v43 = v26 < a6;
        }
        v445 = v451[0];
        if ( !a1 )
          goto LABEL_32;
        v27[2].m128_u64[0] = v451[0];
        v27[1].m128_u64[1] = (unsigned __int64)"u";
        goto LABEL_67;
      case 2LL:
LABEL_95:
        v451[0] = 0;
        v75 = _dwarf_read_unaligned_ck_wrapper(a9, v451, v29, 1, a6, a15);
        v44 = v75;
        if ( v75 )
        {
          v262 = ptr;
          v208 = v75;
          if ( ptr )
          {
            do
            {
              v263 = v262;
              v262 = *((void **)v262 + 15);
              free(v263);
            }
            while ( v262 );
            goto LABEL_323;
          }
          break;
        }
        ++v441;
        if ( v423 )
        {
          v260 = ptr;
          while ( v260 )
          {
            v261 = v260;
            v260 = *((void **)v260 + 15);
            free(v261);
          }
LABEL_320:
          free(v27);
          free(v21);
          _dwarf_error(a9, a15, 187);
          return 1;
        }
        LODWORD(v417) = 0;
        if ( (unsigned int)_dwarf_uint64_mult(v451[0], v427, &v444, v76, v77, v75) == 1 )
        {
          _dwarf_error_string(a9, a15, 501, "DW_DLE_ARITHMETIC_OVERFLOW unsigned 64bit multiply overflow");
          v352 = ptr;
          while ( v352 )
          {
            v353 = v352;
            v352 = *((void **)v352 + 15);
            free(v353);
          }
LABEL_27:
          free(v27);
          free(v21);
          return 1;
        }
        v78 = _dwarf_uint64_add(v424, v444, &v445);
        LOBYTE(v44) = (_BYTE)v417;
        if ( v78 == 1 )
        {
          v79 = ptr;
          while ( v79 )
          {
            v80 = v79;
            v79 = *((void **)v79 + 15);
            free(v80);
          }
          free(v27);
          free(v21);
          _dwarf_error_string(a9, a15, 501, "DW_DLE_ARITHMETIC_OVERFLOW add overflowed calcating subsequent pc");
          return 1;
        }
        goto LABEL_83;
      case 3LL:
LABEL_78:
        v451[0] = 0;
        v62 = _dwarf_read_unaligned_ck_wrapper(a9, v451, v29, 2, a6, a15);
        v44 = v62;
        if ( v62 )
        {
          v258 = ptr;
          v208 = v62;
          if ( ptr )
          {
            do
            {
              v259 = v258;
              v258 = *((void **)v258 + 15);
              free(v259);
            }
            while ( v258 );
            goto LABEL_323;
          }
          break;
        }
        v441 += 2;
        if ( v423 )
        {
          v256 = ptr;
          while ( v256 )
          {
            v257 = v256;
            v256 = *((void **)v256 + 15);
            free(v257);
          }
          goto LABEL_320;
        }
        LODWORD(v417) = 0;
        if ( (unsigned int)_dwarf_uint64_mult(v451[0], v427, &v444, v63, v64, v62) == 1 )
        {
          _dwarf_error_string(a9, a15, 501, "DW_DLE_ARITHMETIC_OVERFLOW unsigned 64bit multiply overflow");
          v348 = ptr;
          while ( v348 )
          {
            v349 = v348;
            v348 = *((void **)v348 + 15);
            free(v349);
          }
          goto LABEL_27;
        }
        if ( v444 < 0 )
        {
          v368 = ptr;
          while ( v368 )
          {
            v369 = v368;
            v368 = *((void **)v368 + 15);
            free(v369);
          }
LABEL_549:
          free(v27);
          free(v21);
          _dwarf_error_string(a9, a15, 501, "DW_DLE_ARITHMETIC_OVERFLOW negative new location");
          return 1;
        }
        v65 = _dwarf_uint64_add(v424, v444, &v445);
        LOBYTE(v44) = (_BYTE)v417;
        if ( v65 == 1 )
        {
          v366 = ptr;
          while ( v366 )
          {
            v367 = v366;
            v366 = *((void **)v366 + 15);
            free(v367);
          }
LABEL_561:
          free(v27);
          free(v21);
          _dwarf_error_string(a9, a15, 501, "DW_DLE_ARITHMETIC_OVERFLOW add overflowed");
          return 1;
        }
        goto LABEL_83;
      case 4LL:
LABEL_88:
        v451[0] = 0;
        v69 = _dwarf_read_unaligned_ck_wrapper(a9, v451, v29, 4, a6, a15);
        v44 = v69;
        if ( v69 )
        {
          v254 = ptr;
          v208 = v69;
          if ( ptr )
          {
            do
            {
              v255 = v254;
              v254 = *((void **)v254 + 15);
              free(v255);
            }
            while ( v254 );
            goto LABEL_323;
          }
          break;
        }
        v441 += 4;
        if ( v423 )
        {
          v252 = ptr;
          while ( v252 )
          {
            v253 = v252;
            v252 = *((void **)v252 + 15);
            free(v253);
          }
          goto LABEL_320;
        }
        LODWORD(v417) = 0;
        if ( (unsigned int)_dwarf_uint64_mult(v451[0], v427, &v444, v70, v71, v69) == 1 )
        {
          _dwarf_error_string(a9, a15, 501, "DW_DLE_ARITHMETIC_OVERFLOW unsigned 64bit multiply overflow");
          v354 = ptr;
          while ( v354 )
          {
            v355 = v354;
            v354 = *((void **)v354 + 15);
            free(v355);
          }
          goto LABEL_27;
        }
        v72 = _dwarf_uint64_add(v424, v444, &v445);
        LOBYTE(v44) = (_BYTE)v417;
        if ( v72 == 1 )
        {
          v73 = ptr;
          while ( v73 )
          {
            v74 = v73;
            v73 = *((void **)v73 + 15);
            free(v74);
          }
LABEL_94:
          free(v27);
          free(v21);
          _dwarf_error_string(a9, a15, 501, "DW_DLE_ARITHMETIC_OVERFLOW unsigned add overflowed");
          return 1;
        }
LABEL_83:
        v24 = v437;
        v66 = v445;
        v67 = 1;
        if ( v437 && v429 < v445 )
        {
          v66 = v424;
          v67 = 0;
          LOBYTE(v44) = 1;
        }
        v68 = "uc";
        if ( !a1 )
          goto LABEL_87;
        goto LABEL_138;
      case 5LL:
LABEL_68:
        v417 = &v441;
        v450 = 0;
        v451[0] = 0;
        v55 = _dwarf_leb128_uword_wrapper(a9, &v441, a6, &v450, a15);
        v44 = v55;
        if ( v55 )
        {
          v246 = ptr;
          v208 = v55;
          if ( ptr )
          {
            do
            {
              v247 = v246;
              v246 = *((void **)v246 + 15);
              free(v247);
            }
            while ( v246 );
            goto LABEL_323;
          }
          break;
        }
        v56 = v450;
        if ( v450 >= v415 )
        {
          v250 = ptr;
          while ( v250 )
          {
            v251 = v250;
            v250 = *((void **)v250 + 15);
            free(v251);
          }
LABEL_314:
          free(v27);
          free(v21);
          _dwarf_error(a9, a15, 188);
          return 1;
        }
        v57 = _dwarf_leb128_uword_wrapper(a9, v417, a6, &v442, a15);
        v44 = v57;
        if ( v57 )
        {
          v356 = ptr;
          v208 = v57;
          if ( ptr )
          {
            do
            {
              v357 = v356;
              v356 = *((void **)v356 + 15);
              free(v357);
            }
            while ( v356 );
            goto LABEL_323;
          }
          break;
        }
        if ( v423 )
        {
          v360 = ptr;
          while ( v360 )
          {
            v361 = v360;
            v360 = *((void **)v360 + 15);
            free(v361);
          }
          goto LABEL_320;
        }
        if ( v442 < 0 )
        {
          v358 = ptr;
          while ( v358 )
          {
            v359 = v358;
            v358 = *((void **)v358 + 15);
            free(v359);
          }
          goto LABEL_549;
        }
        LODWORD(v417) = 0;
        v58 = _dwarf_int64_mult(v442, v425, v451, a9, a15, v57);
        LOBYTE(v44) = (_BYTE)v417;
        if ( v58 == 1 )
        {
          v350 = ptr;
          while ( v350 )
          {
            v351 = v350;
            v350 = *((void **)v350 + 15);
            free(v351);
          }
          goto LABEL_27;
        }
        v59 = v56 << 6;
        *(_WORD *)((char *)v21 + v59) = 1;
        v60 = v451[0];
        v61 = (char *)v21 + v59;
        *((_QWORD *)v61 + 1) = a10;
        *((_QWORD *)v61 + 2) = v60;
        if ( !a1 )
          goto LABEL_171;
LABEL_75:
        v27[1].m128_u64[1] = (unsigned __int64)"rud";
        v27[2] = _mm_loadh_ps((const double *)&v442);
        goto LABEL_76;
      case 6LL:
LABEL_246:
        v451[0] = 0;
        v175 = _dwarf_leb128_uword_wrapper(a9, &v441, a6, v451, a15);
        v44 = v175;
        if ( v175 )
        {
          v302 = ptr;
          v208 = v175;
          if ( ptr )
          {
            do
            {
              v303 = v302;
              v302 = *((void **)v302 + 15);
              free(v303);
            }
            while ( v302 );
            goto LABEL_323;
          }
          break;
        }
        v172 = v451[0];
        if ( v451[0] >= v415 )
        {
          v300 = ptr;
          while ( v300 )
          {
            v301 = v300;
            v300 = *((void **)v300 + 15);
            free(v301);
          }
          goto LABEL_314;
        }
        if ( v431 && (v176 = v431[9]) != 0 )
        {
          v177 = *(_QWORD *)(v176 + 80);
          v178 = v451[0] << 6;
          *(__m128i *)((char *)v21 + v178) = _mm_loadu_si128((const __m128i *)(v177 + (v451[0] << 6)));
          *(__m128i *)((char *)v21 + v178 + 16) = _mm_loadu_si128((const __m128i *)(v177 + (v172 << 6) + 16));
          *(__m128i *)((char *)v21 + v178 + 32) = _mm_loadu_si128((const __m128i *)(v177 + (v172 << 6) + 32));
          *(__m128i *)((char *)v21 + v178 + 48) = _mm_loadu_si128((const __m128i *)(v177 + (v172 << 6) + 48));
          if ( !a1 )
            goto LABEL_171;
        }
        else if ( !a1 )
        {
          v185 = ptr;
          while ( v185 )
          {
            v186 = v185;
            v185 = *((void **)v185 + 15);
            free(v186);
          }
LABEL_271:
          free(v27);
          free(v21);
          _dwarf_error(a9, a15, 189);
          return 1;
        }
LABEL_245:
        v27[2].m128_u64[0] = v172;
        v27[1].m128_u64[1] = (unsigned __int64)"r";
        v26 = v441;
        v43 = v441 < a6;
        goto LABEL_67;
      case 7LL:
LABEL_242:
        v451[0] = 0;
        v171 = _dwarf_leb128_uword_wrapper(a9, &v441, a6, v451, a15);
        v44 = v171;
        if ( v171 )
        {
          v306 = ptr;
          v208 = v171;
          if ( ptr )
          {
            do
            {
              v307 = v306;
              v306 = *((void **)v306 + 15);
              free(v307);
            }
            while ( v306 );
            goto LABEL_323;
          }
          break;
        }
        v172 = v451[0];
        if ( v451[0] >= v415 )
        {
          v304 = ptr;
          while ( v304 )
          {
            v305 = v304;
            v304 = *((void **)v304 + 15);
            free(v305);
          }
          goto LABEL_351;
        }
        v173 = *((_QWORD *)a9 + 1043);
        v174 = &v21[8 * v451[0]];
        *(_WORD *)v174 = 0;
        v174[1] = v173;
        v174[2] = 0;
        if ( a1 )
          goto LABEL_245;
        goto LABEL_171;
      case 8LL:
LABEL_252:
        v451[0] = 0;
        v179 = _dwarf_leb128_uword_wrapper(a9, &v441, a6, v451, a15);
        v44 = v179;
        if ( v179 )
        {
          v296 = ptr;
          v208 = v179;
          if ( ptr )
          {
            do
            {
              v297 = v296;
              v296 = *((void **)v296 + 15);
              free(v297);
            }
            while ( v296 );
            goto LABEL_323;
          }
          break;
        }
        v172 = v451[0];
        if ( v451[0] >= v415 )
        {
          v294 = ptr;
          while ( v294 )
          {
            v295 = v294;
            v294 = *((void **)v294 + 15);
            free(v295);
          }
          goto LABEL_351;
        }
        v180 = *((_QWORD *)a9 + 1042);
        v181 = &v21[8 * v451[0]];
        *(_WORD *)v181 = 0;
        v181[1] = v180;
        v181[2] = 0;
        if ( a1 )
          goto LABEL_245;
        goto LABEL_171;
      case 9LL:
LABEL_236:
        v418 = (unsigned __int8 *)v451;
        v417 = &v441;
        v165 = _dwarf_leb128_uword_wrapper(a9, &v441, a6, v451, a15);
        v44 = v165;
        if ( v165 )
        {
          v310 = ptr;
          v208 = v165;
          if ( ptr )
          {
            do
            {
              v311 = v310;
              v310 = *((void **)v310 + 15);
              free(v311);
            }
            while ( v310 );
            goto LABEL_323;
          }
          break;
        }
        v166 = v451[0];
        if ( v451[0] >= v415 )
        {
          v308 = ptr;
          while ( v308 )
          {
            v309 = v308;
            v308 = *((void **)v308 + 15);
            free(v309);
          }
          goto LABEL_314;
        }
        v167 = _dwarf_leb128_uword_wrapper(a9, v417, a6, v418, a15);
        v44 = v167;
        if ( v167 )
        {
          v318 = ptr;
          v208 = v167;
          if ( ptr )
          {
            do
            {
              v319 = v318;
              v318 = *((void **)v318 + 15);
              free(v319);
            }
            while ( v318 );
            goto LABEL_323;
          }
          break;
        }
        v168 = v451[0];
        if ( v415 < v451[0] )
        {
          v316 = ptr;
          while ( v316 )
          {
            v317 = v316;
            v316 = *((void **)v316 + 15);
            free(v317);
          }
          goto LABEL_314;
        }
        v169 = &v21[8 * v166];
        *(_WORD *)v169 = 0;
        v169[1] = v168;
        v169[2] = 0;
        if ( !a1 )
          goto LABEL_171;
        v170 = (__m128i)v168;
        v26 = v441;
        v27[1].m128_u64[1] = (unsigned __int64)"rr";
        v27[2] = (__m128)_mm_unpacklo_epi64((__m128i)v166, v170);
        v43 = v26 < a6;
        goto LABEL_67;
      case 10LL:
LABEL_229:
        alloc = _dwarf_get_alloc(a9, 33, 1);
        if ( !alloc )
        {
          v218 = ptr;
          while ( v218 )
          {
            v219 = v218;
            v218 = *((void **)v218 + 15);
            free(v219);
          }
          goto LABEL_307;
        }
        v161 = 0;
        v162 = v415 << 6;
        if ( v415 )
        {
          do
          {
            v163 = *(_QWORD *)(alloc + 80);
            *(__m128i *)(v163 + v161) = _mm_loadu_si128((const __m128i *)&v21[v161 / 8]);
            *(__m128i *)(v163 + v161 + 16) = _mm_loadu_si128((const __m128i *)&v21[v161 / 8 + 2]);
            *(__m128i *)(v163 + v161 + 32) = _mm_loadu_si128((const __m128i *)&v21[v161 / 8 + 4]);
            *(__m128i *)(v163 + v161 + 48) = _mm_loadu_si128((const __m128i *)&v21[v161 / 8 + 6]);
            v161 += 64LL;
          }
          while ( v161 != v162 );
        }
        v164 = v426 == nullptr;
        *(_BYTE *)(alloc + 8) = v420;
        *(_BYTE *)(alloc + 9) = v421;
        *(_QWORD *)(alloc + 16) = v428;
        *(_QWORD *)(alloc + 24) = v412;
        *(_QWORD *)(alloc + 32) = v416;
        *(_QWORD *)(alloc + 40) = v413;
        *(_QWORD *)(alloc + 48) = v414;
        *(_BYTE *)(alloc + 56) = v439;
        *(_QWORD *)(alloc + 64) = v440;
        if ( !v164 )
          *(_QWORD *)(alloc + 88) = v426;
        v26 = v441;
        v43 = v441 < a6;
        if ( a1 )
        {
          v426 = (void *)alloc;
          LOBYTE(v44) = 0;
          v27[1].m128_u64[1] = (unsigned __int64)"";
          goto LABEL_67;
        }
        v426 = (void *)alloc;
        LOBYTE(v44) = 0;
        goto LABEL_32;
      case 11LL:
LABEL_224:
        if ( !v426 )
        {
          v220 = ptr;
          while ( v220 )
          {
            v221 = v220;
            v220 = *((void **)v220 + 15);
            free(v221);
          }
          free(v27);
          free(v21);
          _dwarf_error(a9, a15, 191);
          return 1;
        }
        v159 = *((void **)v426 + 11);
        if ( v415 )
          memcpy(v21, *((const void **)v426 + 10), v415 << 6);
        v420 = *((_BYTE *)v426 + 8);
        v421 = *((_BYTE *)v426 + 9);
        v428 = *((_QWORD *)v426 + 2);
        v412 = *((_QWORD *)v426 + 3);
        v416 = *((_QWORD *)v426 + 4);
        v413 = *((_QWORD *)v426 + 5);
        v414 = *((unsigned __int8 **)v426 + 6);
        v439 = *((_BYTE *)v426 + 56);
        v440 = *((_QWORD *)v426 + 8);
        dwarf_dealloc(a9, v426, 0x21u);
        v26 = v441;
        v43 = v441 < a6;
        if ( !a1 )
        {
          v426 = v159;
          LOBYTE(v44) = 0;
          goto LABEL_32;
        }
        v426 = v159;
        LOBYTE(v44) = 0;
        v27[1].m128_u64[1] = (unsigned __int64)"";
        goto LABEL_67;
      case 12LL:
LABEL_217:
        v450 = 0;
        v451[0] = 0;
        v157 = _dwarf_leb128_uword_wrapper(a9, &v441, a6, &v450, a15);
        v44 = v157;
        if ( v157 )
        {
          v224 = ptr;
          v208 = v157;
          if ( ptr )
          {
            do
            {
              v225 = v224;
              v224 = *((void **)v224 + 15);
              free(v225);
            }
            while ( v224 );
            goto LABEL_323;
          }
          break;
        }
        v428 = v450;
        if ( v450 >= v415 )
        {
          v222 = ptr;
          while ( v222 )
          {
            v223 = v222;
            v222 = *((void **)v222 + 15);
            free(v223);
          }
          goto LABEL_314;
        }
        v158 = _dwarf_leb128_uword_wrapper(a9, &v441, a6, v451, a15);
        v44 = v158;
        if ( v158 )
        {
          v376 = ptr;
          v208 = v158;
          if ( ptr )
          {
            do
            {
              v377 = v376;
              v376 = *((void **)v376 + 15);
              free(v377);
            }
            while ( v376 );
            goto LABEL_323;
          }
          break;
        }
        v24 = v423;
        if ( v423 )
        {
          v396 = ptr;
          while ( v396 )
          {
            v397 = v396;
            v396 = *((void **)v396 + 15);
            free(v397);
          }
          goto LABEL_320;
        }
        v412 = v451[0];
        if ( v451[0] < 0LL )
        {
          v394 = ptr;
          while ( v394 )
          {
            v395 = v394;
            v394 = *((void **)v394 + 15);
            free(v395);
          }
          free(v27);
          free(v21);
          _dwarf_error_string(
            a9,
            a15,
            501,
            "DW_DLE_ARITHMETIC_OVERFLOW DW_CFA_def_cfa offset unrepresantable as signed");
          return 1;
        }
        if ( !a1 )
          goto LABEL_260;
        v27[1].m128_u64[1] = (unsigned __int64)"ru";
        v27[2] = _mm_loadh_ps((const double *)&v412);
        goto LABEL_179;
      case 13LL:
LABEL_213:
        v451[0] = 0;
        v156 = _dwarf_leb128_uword_wrapper(a9, &v441, a6, v451, a15);
        v44 = v156;
        if ( v156 )
        {
          v212 = ptr;
          v208 = v156;
          if ( ptr )
          {
            do
            {
              v213 = v212;
              v212 = *((void **)v212 + 15);
              free(v213);
            }
            while ( v212 );
            goto LABEL_323;
          }
          break;
        }
        if ( v451[0] >= v415 )
        {
          v226 = ptr;
          while ( v226 )
          {
            v227 = v226;
            v226 = *((void **)v226 + 15);
            free(v227);
          }
          goto LABEL_351;
        }
        v428 = LOWORD(v451[0]);
        if ( !a1 )
          goto LABEL_171;
        v27[2].m128_u64[0] = v451[0];
        v26 = v441;
        v27[1].m128_u64[1] = (unsigned __int64)"r";
        v43 = v26 < a6;
        goto LABEL_67;
      case 14LL:
LABEL_207:
        v153 = _dwarf_leb128_uword_wrapper(a9, &v441, a6, &v442, a15);
        v44 = v153;
        if ( v153 )
        {
          v216 = ptr;
          v208 = v153;
          if ( ptr )
          {
            do
            {
              v217 = v216;
              v216 = *((void **)v216 + 15);
              free(v217);
            }
            while ( v216 );
            goto LABEL_323;
          }
          break;
        }
        if ( v423 )
        {
          v214 = ptr;
          while ( v214 )
          {
            v215 = v214;
            v214 = *((void **)v214 + 15);
            free(v215);
          }
          goto LABEL_320;
        }
        v412 = v442;
        if ( v442 < 0 )
        {
          v154 = ptr;
          while ( v154 )
          {
            v155 = v154;
            v154 = *((void **)v154 + 15);
            free(v155);
          }
          free(v27);
          free(v21);
          _dwarf_error_string(
            a9,
            a15,
            501,
            "DW_DLE_ARITHMETIC_OVERFLOW DW_CFA_def_cfa_offset unrepresantable as signed");
          return 1;
        }
        goto LABEL_104;
      case 15LL:
LABEL_202:
        v451[0] = 0;
        v149 = _dwarf_leb128_uword_wrapper(a9, &v441, a6, v451, a15);
        v44 = v149;
        if ( v149 )
        {
          v207 = ptr;
          v208 = v149;
          if ( ptr )
          {
            do
            {
              v209 = v207;
              v207 = *((void **)v207 + 15);
              free(v209);
            }
            while ( v207 );
            goto LABEL_323;
          }
          break;
        }
        v150 = v451[0];
        v151 = v441;
        v413 = v451[0];
        v414 = v441;
        if ( a1 )
        {
          v27[5].m128_u64[1] = v451[0];
          v27[1].m128_u64[1] = (unsigned __int64)"b";
          v152 = v430;
          v27[6].m128_u64[0] = (unsigned __int64)v151;
          if ( v150 >= v152 )
            goto LABEL_325;
          v26 = &v151[v150];
          v441 = &v151[v150];
          if ( &v151[v150] < v29 )
          {
LABEL_598:
            v392 = ptr;
            while ( v392 )
            {
              v393 = v392;
              v392 = *((void **)v392 + 15);
              free(v393);
            }
            goto LABEL_327;
          }
          v421 = 2;
          v420 = 0;
          v43 = v26 < a6;
          goto LABEL_67;
        }
        if ( v413 < v430 )
        {
          v26 = &v414[v413];
          v441 = &v414[v413];
          if ( &v414[v413] < v29 )
            goto LABEL_598;
          v421 = 2;
          v420 = 0;
          v43 = v26 < a6;
          goto LABEL_32;
        }
LABEL_325:
        v210 = ptr;
        while ( v210 )
        {
          v211 = v210;
          v210 = *((void **)v210 + 15);
          free(v211);
        }
LABEL_327:
        free(v27);
        free(v21);
        _dwarf_error_string(
          a9,
          a15,
          193,
          "DW_DLE_DF_FRAME_DECODING_ERROR: DW_CFA_def_cfa_expression block len overflows instructions available range.");
        return 1;
      case 16LL:
LABEL_194:
        v417 = &v441;
        v450 = 0;
        v451[0] = 0;
        v136 = _dwarf_leb128_uword_wrapper(a9, &v441, a6, &v450, a15);
        v137 = v417;
        v44 = v136;
        if ( v136 )
        {
          v230 = ptr;
          v208 = v136;
          if ( ptr )
          {
            do
            {
              v231 = v230;
              v230 = *((void **)v230 + 15);
              free(v231);
            }
            while ( v230 );
            goto LABEL_323;
          }
          break;
        }
        if ( v450 >= v415 )
        {
          v228 = ptr;
          while ( v228 )
          {
            v229 = v228;
            v228 = *((void **)v228 + 15);
            free(v229);
          }
          goto LABEL_314;
        }
        v417 = (unsigned __int8 **)v450;
        v138 = _dwarf_leb128_uword_wrapper(a9, v137, a6, v451, a15);
        v139 = v417;
        v44 = v138;
        if ( v138 )
        {
          v370 = ptr;
          v208 = v138;
          if ( ptr )
          {
            do
            {
              v371 = v370;
              v370 = *((void **)v370 + 15);
              free(v371);
            }
            while ( v370 );
            goto LABEL_323;
          }
          break;
        }
        v140 = v450;
        v141 = v450 << 6;
        *(_WORD *)((char *)v21 + v141) = 512;
        v142 = (_QWORD *)((char *)v21 + v141);
        v143 = v441;
        v144 = v451[0];
        v142[1] = v139;
        v145 = v430 < v144;
        v142[5] = v143;
        v142[4] = v144;
        v26 = &v143[v144];
        LOBYTE(v24) = &v143[v144] < v29;
        v146 = v24 | v145;
        if ( a1 )
        {
          v27[2].m128_u64[0] = v140;
          v27[1].m128_u64[1] = (unsigned __int64)"rb";
          v27[5].m128_u64[1] = v144;
          v27[6].m128_u64[0] = (unsigned __int64)v143;
          v441 = &v143[v144];
          if ( v146 )
            goto LABEL_199;
          goto LABEL_77;
        }
        v441 = &v143[v144];
        if ( v146 )
        {
LABEL_199:
          v147 = ptr;
          while ( v147 )
          {
            v148 = v147;
            v147 = *((void **)v147 + 15);
            free(v148);
          }
          free(v27);
          free(v21);
          _dwarf_error_string(
            a9,
            a15,
            193,
            "DW_DLE_DF_FRAME_DECODING_ERROR: DW_CFA_expression block len overflows instructions available range.");
          return 1;
        }
        goto LABEL_172;
      case 17LL:
LABEL_187:
        v417 = &v441;
        v450 = 0;
        v451[0] = 0;
        v129 = _dwarf_leb128_uword_wrapper(a9, &v441, a6, &v450, a15);
        v44 = v129;
        if ( v129 )
        {
          v234 = ptr;
          v208 = v129;
          if ( ptr )
          {
            do
            {
              v235 = v234;
              v234 = *((void **)v234 + 15);
              free(v235);
            }
            while ( v234 );
            goto LABEL_323;
          }
          break;
        }
        v130 = v450;
        if ( v450 >= v415 )
        {
          v232 = ptr;
          while ( v232 )
          {
            v233 = v232;
            v232 = *((void **)v232 + 15);
            free(v233);
          }
          goto LABEL_314;
        }
        v131 = _dwarf_leb128_sword_wrapper(a9, v417, a6, &v443, a15);
        v44 = v131;
        if ( v131 )
        {
          v380 = ptr;
          v208 = v131;
          if ( ptr )
          {
            do
            {
              v381 = v380;
              v380 = *((void **)v380 + 15);
              free(v381);
            }
            while ( v380 );
            goto LABEL_323;
          }
          break;
        }
        if ( v423 )
        {
          v378 = ptr;
          while ( v378 )
          {
            v379 = v378;
            v378 = *((void **)v378 + 15);
            free(v379);
          }
          goto LABEL_320;
        }
        LODWORD(v417) = 0;
        v132 = _dwarf_int64_mult(v443, v425, v451, a9, a15, v131);
        LOBYTE(v44) = (_BYTE)v417;
        if ( v132 == 1 )
        {
          v372 = ptr;
          while ( v372 )
          {
            v373 = v372;
            v372 = *((void **)v372 + 15);
            free(v373);
          }
          goto LABEL_27;
        }
        v133 = v130 << 6;
        *(_WORD *)((char *)v21 + v133) = 1;
        v134 = v451[0];
        v135 = (char *)v21 + v133;
        *((_QWORD *)v135 + 1) = a10;
        *((_QWORD *)v135 + 2) = v134;
        if ( a1 )
          goto LABEL_163;
        goto LABEL_171;
      case 18LL:
LABEL_180:
        v450 = 0;
        v451[0] = 0;
        v126 = _dwarf_leb128_uword_wrapper(a9, &v441, a6, &v450, a15);
        v44 = v126;
        if ( v126 )
        {
          v238 = ptr;
          v208 = v126;
          if ( ptr )
          {
            do
            {
              v239 = v238;
              v238 = *((void **)v238 + 15);
              free(v239);
            }
            while ( v238 );
            goto LABEL_323;
          }
          break;
        }
        v428 = v450;
        if ( v450 >= v415 )
        {
          v236 = ptr;
          while ( v236 )
          {
            v237 = v236;
            v236 = *((void **)v236 + 15);
            free(v237);
          }
          goto LABEL_314;
        }
        v127 = _dwarf_leb128_sword_wrapper(a9, &v441, a6, &v443, a15);
        v44 = v127;
        if ( v127 )
        {
          v362 = ptr;
          v208 = v127;
          if ( ptr )
          {
            do
            {
              v363 = v362;
              v362 = *((void **)v362 + 15);
              free(v363);
            }
            while ( v362 );
            goto LABEL_323;
          }
          break;
        }
        if ( v423 )
        {
          v384 = ptr;
          while ( v384 )
          {
            v385 = v384;
            v384 = *((void **)v384 + 15);
            free(v385);
          }
          goto LABEL_320;
        }
        LODWORD(v412) = 0;
        v128 = _dwarf_int64_mult(v443, v425, v451, a9, a15, v127);
        LOBYTE(v44) = v412;
        if ( v128 == 1 )
        {
          v382 = ptr;
          while ( v382 )
          {
            v383 = v382;
            v382 = *((void **)v382 + 15);
            free(v383);
          }
          goto LABEL_27;
        }
        v412 = v451[0];
        if ( !a1 )
          goto LABEL_260;
        v27[1].m128_u64[1] = (unsigned __int64)"rsd";
        v27[2].m128_u64[0] = v450;
        v27[4].m128_u64[0] = v443;
        goto LABEL_178;
      case 19LL:
LABEL_173:
        v451[0] = 0;
        v124 = _dwarf_leb128_sword_wrapper(a9, &v441, a6, &v443, a15);
        v44 = v124;
        if ( v124 )
        {
          v242 = ptr;
          v208 = v124;
          if ( ptr )
          {
            do
            {
              v243 = v242;
              v242 = *((void **)v242 + 15);
              free(v243);
            }
            while ( v242 );
            goto LABEL_323;
          }
          break;
        }
        if ( v423 )
        {
          v240 = ptr;
          while ( v240 )
          {
            v241 = v240;
            v240 = *((void **)v240 + 15);
            free(v241);
          }
          goto LABEL_320;
        }
        LODWORD(v412) = 0;
        v125 = _dwarf_int64_mult(v443, v425, v451, a9, a15, v124);
        LOBYTE(v44) = v412;
        if ( v125 == 1 )
        {
          v364 = ptr;
          while ( v364 )
          {
            v365 = v364;
            v364 = *((void **)v364 + 15);
            free(v365);
          }
          goto LABEL_27;
        }
        v412 = v451[0];
        if ( !a1 )
        {
LABEL_260:
          v26 = v441;
          v421 = 0;
          v420 = 1;
          v43 = v441 < a6;
          goto LABEL_32;
        }
        v27[1].m128_u64[1] = (unsigned __int64)"sd";
        v27[3].m128_u64[1] = v443;
LABEL_178:
        v27[5].m128_u64[0] = v425;
LABEL_179:
        v26 = v441;
        v421 = 0;
        v420 = 1;
        v43 = v441 < a6;
        goto LABEL_67;
      case 20LL:
LABEL_164:
        v417 = &v441;
        v450 = 0;
        v451[0] = 0;
        v118 = _dwarf_leb128_uword_wrapper(a9, &v441, a6, &v450, a15);
        v44 = v118;
        if ( v118 )
        {
          v290 = ptr;
          v208 = v118;
          if ( ptr )
          {
            do
            {
              v291 = v290;
              v290 = *((void **)v290 + 15);
              free(v291);
            }
            while ( v290 );
            goto LABEL_323;
          }
          break;
        }
        v119 = v450;
        if ( v450 >= v415 )
        {
          v288 = ptr;
          while ( v288 )
          {
            v289 = v288;
            v288 = *((void **)v288 + 15);
            free(v289);
          }
          goto LABEL_314;
        }
        v120 = _dwarf_leb128_uword_wrapper(a9, v417, a6, &v442, a15);
        v44 = v120;
        if ( v120 )
        {
          v338 = ptr;
          v208 = v120;
          if ( ptr )
          {
            do
            {
              v339 = v338;
              v338 = *((void **)v338 + 15);
              free(v339);
            }
            while ( v338 );
            goto LABEL_323;
          }
          break;
        }
        if ( v442 < 0 )
        {
          v336 = ptr;
          while ( v336 )
          {
            v337 = v336;
            v336 = *((void **)v336 + 15);
            free(v337);
          }
          free(v27);
          free(v21);
          _dwarf_error_string(a9, a15, 501, "DW_DLE_ARITHMETIC_OVERFLOW in DW_CFA_val_offset factored value");
          return 1;
        }
        if ( v423 )
        {
          v334 = ptr;
          while ( v334 )
          {
            v335 = v334;
            v334 = *((void **)v334 + 15);
            free(v335);
          }
          goto LABEL_320;
        }
        LODWORD(v417) = 0;
        v121 = _dwarf_int64_mult(v442, v425, v451, a9, a15, v120);
        LOBYTE(v44) = (_BYTE)v417;
        if ( v121 == 1 )
        {
          v332 = ptr;
          while ( v332 )
          {
            v333 = v332;
            v332 = *((void **)v332 + 15);
            free(v333);
          }
          goto LABEL_27;
        }
        v24 = 257;
        v122 = &v21[8 * v119];
        v122[1] = a10;
        v123 = v451[0];
        *(_WORD *)v122 = 257;
        v122[2] = v123;
        if ( !a1 )
          goto LABEL_171;
        goto LABEL_75;
      case 21LL:
LABEL_157:
        v450 = 0;
        v451[0] = 0;
        v114 = _dwarf_leb128_uword_wrapper(a9, &v441, a6, &v450, a15);
        v44 = v114;
        if ( v114 )
        {
          v244 = ptr;
          v208 = v114;
          if ( ptr )
          {
            do
            {
              v245 = v244;
              v244 = *((void **)v244 + 15);
              free(v245);
            }
            while ( v244 );
            goto LABEL_323;
          }
          break;
        }
        if ( !v415 )
        {
          v201 = ptr;
          while ( v201 )
          {
            v202 = v201;
            v201 = *((void **)v201 + 15);
            free(v202);
          }
          goto LABEL_314;
        }
        v115 = _dwarf_leb128_sword_wrapper(a9, &v441, a6, &v443, a15);
        v44 = v115;
        if ( v115 )
        {
          v386 = ptr;
          v208 = v115;
          if ( ptr )
          {
            do
            {
              v387 = v386;
              v386 = *((void **)v386 + 15);
              free(v387);
            }
            while ( v386 );
            goto LABEL_323;
          }
          break;
        }
        if ( v423 )
        {
          v314 = ptr;
          while ( v314 )
          {
            v315 = v314;
            v314 = *((void **)v314 + 15);
            free(v315);
          }
          goto LABEL_320;
        }
        LODWORD(v417) = 0;
        v116 = _dwarf_int64_mult(v443, v425, v451, a9, a15, v115);
        LOBYTE(v44) = (_BYTE)v417;
        if ( v116 == 1 )
        {
          v312 = ptr;
          while ( v312 )
          {
            v313 = v312;
            v312 = *((void **)v312 + 15);
            free(v313);
          }
          goto LABEL_27;
        }
        v117 = v451[0];
        *(_WORD *)v21 = 257;
        v21[2] = v117;
        if ( !a1 )
          goto LABEL_171;
LABEL_163:
        v27[1].m128_u64[1] = (unsigned __int64)"rsd";
        v27[2].m128_u64[0] = v450;
        v27[4].m128_u64[0] = v443;
        goto LABEL_76;
      case 22LL:
LABEL_139:
        v417 = &v441;
        v450 = 0;
        v451[0] = 0;
        v101 = _dwarf_leb128_uword_wrapper(a9, &v441, a6, &v450, a15);
        v44 = v101;
        if ( v101 )
        {
          v266 = ptr;
          v208 = v101;
          if ( ptr )
          {
            do
            {
              v267 = v266;
              v266 = *((void **)v266 + 15);
              free(v267);
            }
            while ( v266 );
            goto LABEL_323;
          }
          break;
        }
        if ( v450 >= v415 )
        {
          v264 = ptr;
          while ( v264 )
          {
            v265 = v264;
            v264 = *((void **)v264 + 15);
            free(v265);
          }
          goto LABEL_314;
        }
        v102 = _dwarf_leb128_uword_wrapper(a9, v417, a6, v451, a15);
        v44 = v102;
        if ( v102 )
        {
          v374 = ptr;
          v208 = v102;
          if ( ptr )
          {
            do
            {
              v375 = v374;
              v374 = *((void **)v374 + 15);
              free(v375);
            }
            while ( v374 );
            goto LABEL_323;
          }
          break;
        }
        v103 = v450;
        v104 = v441;
        v105 = v450 << 6;
        *(_WORD *)((char *)v21 + v105) = 768;
        v106 = (_QWORD *)((char *)v21 + v105);
        v107 = v451[0];
        v106[2] = 0;
        v106[5] = v104;
        v106[4] = v107;
        v26 = &v104[v107];
        LOBYTE(v24) = v430 < v107;
        v108 = v430 < v107 || &v104[v107] < v29;
        if ( a1 )
        {
          v27[2].m128_u64[0] = v103;
          v27[1].m128_u64[1] = (unsigned __int64)"rb";
          v27[5].m128_u64[1] = v107;
          v27[6].m128_u64[0] = (unsigned __int64)v104;
          v441 = &v104[v107];
          if ( v108 )
            goto LABEL_144;
          goto LABEL_77;
        }
        v441 = &v104[v107];
        if ( v108 )
        {
LABEL_144:
          v109 = ptr;
          while ( v109 )
          {
            v110 = v109;
            v109 = *((void **)v109 + 15);
            free(v110);
          }
          free(v27);
          free(v21);
          _dwarf_error_string(
            a9,
            a15,
            193,
            "DW_DLE_DF_FRAME_DECODING_ERROR: DW_CFA_val_expression block len overflows instructions available range.");
          return 1;
        }
        goto LABEL_172;
      case 28LL:
      case 45LL:
        v32[1].m128_u64[1] = (unsigned __int64)"";
        v26 = v29;
        v43 = v29 < a6;
        LOBYTE(v44) = 0;
        goto LABEL_67;
      case 29LL:
LABEL_129:
        v451[0] = 0;
        v97 = _dwarf_read_unaligned_ck_wrapper(a9, v451, v29, 8, a6, a15);
        v44 = v97;
        if ( v97 )
        {
          v280 = ptr;
          v208 = v97;
          if ( ptr )
          {
            do
            {
              v281 = v280;
              v280 = *((void **)v280 + 15);
              free(v281);
            }
            while ( v280 );
            goto LABEL_323;
          }
          break;
        }
        v441 += 8;
        if ( v423 )
        {
          v298 = ptr;
          while ( v298 )
          {
            v299 = v298;
            v298 = *((void **)v298 + 15);
            free(v299);
          }
          goto LABEL_320;
        }
        LODWORD(v417) = 0;
        if ( (unsigned int)_dwarf_uint64_mult(v451[0], v427, &v444, v98, v99, v97) == 1 )
        {
          _dwarf_error_string(a9, a15, 501, "DW_DLE_ARITHMETIC_OVERFLOW unsigned 64bit multiply overflow");
          v322 = ptr;
          while ( v322 )
          {
            v323 = v322;
            v322 = *((void **)v322 + 15);
            free(v323);
          }
          goto LABEL_27;
        }
        v100 = _dwarf_uint64_add(v424, v444, &v445);
        LOBYTE(v44) = (_BYTE)v417;
        if ( v100 == 1 )
        {
          v320 = ptr;
          while ( v320 )
          {
            v321 = v320;
            v320 = *((void **)v320 + 15);
            free(v321);
          }
          goto LABEL_94;
        }
        v66 = v445;
        v67 = 1;
        if ( v437 && v429 < v445 )
        {
          v66 = v424;
          v67 = 0;
          LOBYTE(v44) = 1;
        }
        if ( !a1 )
        {
LABEL_87:
          v26 = v441;
          v424 = v66;
          v43 = (v441 < a6) & v67;
          goto LABEL_32;
        }
        v68 = "u";
LABEL_138:
        v27[1].m128_u64[1] = (unsigned __int64)v68;
        v27[2].m128_u64[0] = v451[0];
        v27[4].m128_u64[1] = v427;
        v26 = v441;
        v424 = v66;
        v43 = (v441 < a6) & v67;
        goto LABEL_67;
      case 46LL:
LABEL_119:
        v451[0] = 0;
        v90 = _dwarf_leb128_uword_wrapper(a9, &v441, a6, v451, a15);
        v44 = v90;
        if ( v90 )
        {
          v286 = ptr;
          v208 = v90;
          if ( ptr )
          {
            do
            {
              v287 = v286;
              v286 = *((void **)v286 + 15);
              free(v287);
            }
            while ( v286 );
            goto LABEL_323;
          }
          break;
        }
        if ( !a1 )
          goto LABEL_171;
        v27[1].m128_u64[1] = (unsigned __int64)"u";
        v27[2].m128_u64[0] = v451[0];
        v26 = v441;
        v43 = v441 < a6;
        goto LABEL_67;
      case 48LL:
LABEL_113:
        v449 = 0;
        v450 = 0;
        v451[0] = 0;
        v86 = _dwarf_leb128_uword_wrapper(a9, &v441, a6, &v449, a15);
        v44 = v86;
        if ( v86 )
        {
          v274 = ptr;
          v208 = v86;
          if ( ptr )
          {
            do
            {
              v275 = v274;
              v274 = *((void **)v274 + 15);
              free(v275);
            }
            while ( v274 );
            goto LABEL_323;
          }
          break;
        }
        if ( v449 < v415 )
        {
          v87 = _dwarf_leb128_uword_wrapper(a9, &v441, a6, &v450, a15);
          v44 = v87;
          if ( v87 )
          {
            v340 = ptr;
            v208 = v87;
            if ( ptr )
            {
              do
              {
                v341 = v340;
                v340 = *((void **)v340 + 15);
                free(v341);
              }
              while ( v340 );
              goto LABEL_323;
            }
            break;
          }
          v88 = _dwarf_leb128_uword_wrapper(a9, &v441, a6, v451, a15);
          v44 = v88;
          if ( v88 )
          {
            v326 = ptr;
            v208 = v88;
            if ( ptr )
            {
              do
              {
                v327 = v326;
                v326 = *((void **)v326 + 15);
                free(v327);
              }
              while ( v326 );
              goto LABEL_323;
            }
            break;
          }
          if ( !a1 )
          {
LABEL_171:
            v26 = v441;
LABEL_172:
            v43 = v26 < a6;
            goto LABEL_32;
          }
          v26 = v441;
          v27[1].m128_u64[1] = (unsigned __int64)"rua";
          v89 = _mm_loadh_ps((const double *)&v450);
          v27[3].m128_u64[0] = v451[0];
          v43 = v26 < a6;
          v27[2] = v89;
          goto LABEL_67;
        }
        v272 = ptr;
        while ( v272 )
        {
          v273 = v272;
          v272 = *((void **)v272 + 15);
          free(v273);
        }
LABEL_351:
        free(v27);
        free(v21);
        _dwarf_error(a9, a15, 188);
        return 1;
      case 49LL:
LABEL_106:
        v448 = 0;
        v449 = 0;
        v450 = 0;
        v451[0] = 0;
        v82 = _dwarf_leb128_uword_wrapper(a9, &v441, a6, &v448, a15);
        v44 = v82;
        if ( v82 )
        {
          v278 = ptr;
          v208 = v82;
          if ( ptr )
          {
            do
            {
              v279 = v278;
              v278 = *((void **)v278 + 15);
              free(v279);
            }
            while ( v278 );
            goto LABEL_323;
          }
        }
        else
        {
          if ( v448 >= v415 )
          {
            v276 = ptr;
            while ( v276 )
            {
              v277 = v276;
              v276 = *((void **)v276 + 15);
              free(v277);
            }
            goto LABEL_314;
          }
          v83 = _dwarf_leb128_sword_wrapper(a9, &v441, a6, &v449, a15);
          v44 = v83;
          if ( v83 )
          {
            v346 = ptr;
            v208 = v83;
            if ( ptr )
            {
              do
              {
                v347 = v346;
                v346 = *((void **)v346 + 15);
                free(v347);
              }
              while ( v346 );
              goto LABEL_323;
            }
          }
          else
          {
            v84 = _dwarf_leb128_uword_wrapper(a9, &v441, a6, v451, a15);
            v44 = v84;
            if ( !v84 )
            {
              LODWORD(v417) = 0;
              v85 = _dwarf_int64_mult(v449, v425, &v450, a9, a15, 0);
              LOBYTE(v44) = (_BYTE)v417;
              if ( v85 == 1 )
              {
                v342 = ptr;
                while ( v342 )
                {
                  v343 = v342;
                  v342 = *((void **)v342 + 15);
                  free(v343);
                }
                goto LABEL_27;
              }
              *(_WORD *)v21 = 1;
              v21[1] = a10;
              v21[2] = v450;
              if ( !a1 )
                goto LABEL_171;
              v27[1].m128_u64[1] = (unsigned __int64)"rsda";
              v27[2].m128_u64[0] = v448;
              v27[4].m128_u64[0] = v449;
              v27[3].m128_u64[0] = v451[0];
              goto LABEL_76;
            }
            v344 = ptr;
            v208 = v84;
            if ( ptr )
            {
              do
              {
                v345 = v344;
                v344 = *((void **)v344 + 15);
                free(v345);
              }
              while ( v344 );
              goto LABEL_323;
            }
          }
        }
        break;
      case 52LL:
LABEL_102:
        v81 = _dwarf_leb128_uword_wrapper(a9, &v441, a6, &v442, a15);
        v44 = v81;
        if ( !v81 )
        {
          v412 = v442;
          if ( v442 < 0 )
          {
            v268 = ptr;
            while ( v268 )
            {
              v269 = v268;
              v268 = *((void **)v268 + 15);
              free(v269);
            }
            free(v27);
            free(v21);
            _dwarf_error_string(
              a9,
              a15,
              501,
              "DW_DLE_ARITHMETIC_OVERFLOW DW_CFA_METAWARE_info unrepresantable as signed");
            return 1;
          }
LABEL_104:
          v26 = v441;
          v43 = v441 < a6;
          if ( !a1 )
          {
            v421 = 0;
            v420 = 1;
            goto LABEL_32;
          }
          v27[1].m128_u64[1] = (unsigned __int64)"u";
          v27[2].m128_u64[0] = v412;
          v421 = 0;
          v420 = 1;
          goto LABEL_67;
        }
        v270 = ptr;
        v208 = v81;
        if ( ptr )
        {
          do
          {
            v271 = v270;
            v270 = *((void **)v270 + 15);
            free(v271);
          }
          while ( v270 );
          goto LABEL_323;
        }
        break;
      case 64LL:
LABEL_147:
        v111 = v28 & 0x3F;
        if ( v423 )
        {
          v205 = ptr;
          while ( v205 )
          {
            v206 = v205;
            v205 = *((void **)v205 + 15);
            free(v206);
          }
          goto LABEL_320;
        }
        if ( (unsigned int)_dwarf_uint64_mult(v28 & 0x3F, v427, &v447, v28, v24, v30) == 1 )
        {
          _dwarf_error_string(a9, a15, 501, "DW_DLE_ARITHMETIC_OVERFLOW unsigned 64bit multiply overflow");
          v203 = ptr;
          while ( v203 )
          {
            v204 = v203;
            v203 = *((void **)v203 + 15);
            free(v204);
          }
          goto LABEL_27;
        }
        if ( v447 < 0 )
        {
          v390 = ptr;
          while ( v390 )
          {
            v391 = v390;
            v390 = *((void **)v390 + 15);
            free(v391);
          }
          goto LABEL_549;
        }
        if ( (unsigned int)_dwarf_uint64_add(v424, v447, &v445) == 1 )
        {
          v388 = ptr;
          while ( v388 )
          {
            v389 = v388;
            v388 = *((void **)v388 + 15);
            free(v389);
          }
          goto LABEL_561;
        }
        v112 = v445;
        if ( v437 && v429 < v445 )
        {
          v112 = v424;
          v113 = 0;
          LOBYTE(v44) = 1;
        }
        else
        {
          LOBYTE(v44) = 0;
          v113 = 1;
        }
        v26 = v441;
        v424 = v112;
        v43 = v113 & (v441 < a6);
        if ( !a1 )
          goto LABEL_32;
        v27[2].m128_u64[0] = v111;
        v27[1].m128_u64[1] = (unsigned __int64)"uc";
        v27[4].m128_u64[1] = v427;
        goto LABEL_67;
      case 128LL:
LABEL_122:
        v451[0] = 0;
        v91 = v28 & 0x3F;
        if ( v91 >= v415 )
        {
          v284 = ptr;
          while ( v284 )
          {
            v285 = v284;
            v284 = *((void **)v284 + 15);
            free(v285);
          }
          goto LABEL_314;
        }
        v92 = _dwarf_leb128_uword_wrapper(a9, &v441, a6, &v442, a15);
        v44 = v92;
        if ( !v92 )
        {
          if ( v423 )
          {
            v330 = ptr;
            while ( v330 )
            {
              v331 = v330;
              v330 = *((void **)v330 + 15);
              free(v331);
            }
            goto LABEL_320;
          }
          if ( v442 < 0 )
          {
            v328 = ptr;
            while ( v328 )
            {
              v329 = v328;
              v328 = *((void **)v328 + 15);
              free(v329);
            }
            free(v27);
            free(v21);
            _dwarf_error_string(a9, a15, 501, "DW_DLE_ARITHMETIC_OVERFLOW negative factored_N_value location");
            return 1;
          }
          LODWORD(v417) = 0;
          v93 = _dwarf_int64_mult(v442, v425, v451, a9, a15, v92);
          LOBYTE(v44) = (_BYTE)v417;
          if ( v93 == 1 )
          {
            v324 = ptr;
            while ( v324 )
            {
              v325 = v324;
              v324 = *((void **)v324 + 15);
              free(v325);
            }
            goto LABEL_27;
          }
          v94 = v451[0];
          v95 = &v21[8 * v91];
          v95[1] = a10;
          v95[2] = v94;
          *(_WORD *)v95 = 1;
          if ( !a1 )
            goto LABEL_171;
          v96 = _mm_loadh_ps((const double *)&v442);
          v27[1].m128_u64[1] = (unsigned __int64)"rud";
          v27[2] = v96;
LABEL_76:
          v27[5].m128_u64[0] = v425;
          v26 = v441;
LABEL_77:
          v43 = v26 < a6;
          goto LABEL_67;
        }
        v282 = ptr;
        v208 = v92;
        if ( ptr )
        {
          do
          {
            v283 = v282;
            v282 = *((void **)v282 + 15);
            free(v283);
          }
          while ( v282 );
LABEL_323:
          v44 = v208;
        }
        break;
      case 192LL:
        v187 = v28 & 0x3F;
        if ( v187 >= v415 )
        {
LABEL_448:
          v292 = ptr;
          while ( v292 )
          {
            v293 = v292;
            v292 = *((void **)v292 + 15);
            free(v293);
          }
          goto LABEL_314;
        }
        if ( !v431 )
          goto LABEL_290;
LABEL_288:
        v188 = v431[9];
        if ( !v188 )
        {
          if ( !a1 )
          {
LABEL_295:
            v191 = ptr;
            while ( v191 )
            {
              v192 = v191;
              v191 = *((void **)v191 + 15);
              free(v192);
            }
            goto LABEL_271;
          }
LABEL_290:
          v27[2].m128_u64[0] = v187;
          v26 = v29;
          v43 = v29 < a6;
          v27[1].m128_u64[1] = (unsigned __int64)"r";
          LOBYTE(v44) = 0;
LABEL_67:
          ++v419;
          *p_ptr = v27;
          v54 = (void **)&v27[7].m128_u64[1];
          v27 = nullptr;
          p_ptr = v54;
          goto LABEL_32;
        }
        v189 = *(_QWORD *)(v188 + 80);
        v190 = v187 << 6;
        *(__m128i *)((char *)v21 + v190) = _mm_loadu_si128((const __m128i *)(v189 + (v187 << 6)));
        *(__m128i *)((char *)v21 + v190 + 16) = _mm_loadu_si128((const __m128i *)(v189 + (v187 << 6) + 16));
        *(__m128i *)((char *)v21 + v190 + 32) = _mm_loadu_si128((const __m128i *)(v189 + (v187 << 6) + 32));
        *(__m128i *)((char *)v21 + v190 + 48) = _mm_loadu_si128((const __m128i *)(v189 + (v187 << 6) + 48));
        if ( a1 )
          goto LABEL_290;
LABEL_31:
        v26 = v29;
        v43 = v29 < a6;
        LOBYTE(v44) = 0;
LABEL_32:
        if ( !v43 )
        {
          v24 = v428;
          v20 = v415;
          v19 = v431;
          v45 = ptr;
          if ( a6 >= v26 )
          {
            if ( v26 != a6 || (v44 & 1) != 0 )
            {
              if ( v433 )
                *v433 = 1;
              if ( v434 )
                *v434 = v445;
              goto LABEL_47;
            }
LABEL_36:
            if ( v433 )
              *v433 = 0;
            if ( v434 )
              *v434 = 0;
LABEL_47:
            if ( v432 )
            {
              v47 = *(void **)(v432 + 80);
              if ( v20 > *(_QWORD *)(v432 + 72) )
                v20 = *(_QWORD *)(v432 + 72);
              *(_QWORD *)v432 = v424;
              if ( (_DWORD)v20 )
              {
                v411 = v19;
                v406 = v24;
                memcpy(v47, v21, (unsigned __int64)(unsigned int)v20 << 6);
                v24 = v406;
                v19 = v411;
              }
              v48 = v432;
              *(_BYTE *)(v432 + 8) = v420;
              v49 = v421;
              *(_QWORD *)(v48 + 16) = v24;
              *(_BYTE *)(v48 + 9) = v49;
              *(_QWORD *)(v48 + 24) = v412;
              *(_QWORD *)(v48 + 32) = v416;
              *(_QWORD *)(v48 + 40) = v413;
              *(_QWORD *)(v48 + 48) = v414;
              *(_BYTE *)(v48 + 56) = v439;
              *(_QWORD *)(v48 + 64) = v440;
            }
            if ( v426 )
            {
              v407 = v27;
              v50 = v426;
              v51 = v19;
              do
              {
                v52 = v50;
                v50 = *((void **)v50 + 11);
                dwarf_dealloc(a9, v52, 0x21u);
              }
              while ( v50 );
              v27 = v407;
              v19 = v51;
            }
            if ( !a1 )
            {
              if ( v435 )
                *v435 = 0;
              if ( v436 )
                *v436 = 0;
              while ( v45 )
              {
                v182 = v45;
                v45 = *((void **)v45 + 15);
                free(v182);
              }
LABEL_258:
              free(v27);
              free(v21);
              return 0;
            }
            v408 = v19;
            v193 = (_QWORD *)_dwarf_get_alloc(a9, 19, 1);
            if ( v193 )
            {
              v194 = _dwarf_get_alloc(a9, 15, v419);
              if ( v194 )
              {
                v195 = v419;
                v193[2] = v194;
                v196 = 0;
                *v193 = a9;
                v193[3] = v195;
                for ( v193[1] = v408; v45; v197[15] = 0 )
                {
                  *(_QWORD *)(v194 + 8 * v196) = v45;
                  v197 = v45;
                  v45 = *((void **)v45 + 15);
                  ++v196;
                }
                ptr = nullptr;
                if ( v196 != v419 )
                {
                  free(v27);
                  free(v21);
                  dwarf_dealloc(a9, v193, 0x13u);
                  dwarfstring_constructor(v451);
                  dwarfstring_append_printf_u(
                    v451,
                    "DW_DLE_DF_FRAME_DECODING_ERROR: Instruction array build, instr count %u",
                    v419);
                  dwarfstring_append_printf_u(v451, " index i %u. Impossible error.", v196);
                  v200 = dwarfstring_string(v451, " index i %u. Impossible error.", v199);
                  _dwarf_error_string(a9, a15, 193, v200);
                  dwarfstring_destructor(v451);
                  return 1;
                }
                *v435 = v193;
                *v436 = v196;
                goto LABEL_258;
              }
              dwarf_dealloc(a9, v193, 0x13u);
              while ( v45 )
              {
                v398 = v45;
                v45 = *((void **)v45 + 15);
                free(v398);
              }
            }
            else
            {
              while ( v45 )
              {
                v198 = v45;
                v45 = *((void **)v45 + 15);
                free(v198);
              }
            }
LABEL_307:
            free(v27);
            free(v21);
            _dwarf_error(a9, a15, 192);
            return 1;
          }
          goto LABEL_41;
        }
        continue;
      default:
LABEL_25:
        v405 = v30;
        dwarfstring_constructor(v451);
        dwarfstring_append_printf_u(v451, "DW_DLE_DF_FRAME_DECODING_ERROR:  instr opcode 0x%x unknown", v405);
        v38 = dwarfstring_string(v451, "DW_DLE_DF_FRAME_DECODING_ERROR:  instr opcode 0x%x unknown", v37);
        _dwarf_error_string(a9, a15, 193, v38);
        dwarfstring_destructor(v451);
        v39 = ptr;
        while ( v39 )
        {
          v40 = v39;
          v39 = *((void **)v39 + 15);
          free(v40);
        }
        goto LABEL_27;
    }
    break;
  }
  v403 = v44;
  free(v27);
  free(v21);
  return v403;
}

