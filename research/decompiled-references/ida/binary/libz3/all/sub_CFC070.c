__int64 __fastcall sub_CFC070(void **a1, void **a2, unsigned int a3, __m128i *a4, void **a5, __int64 *a6)
{
  __int64 v6; // r12
  int *v8; // rcx
  int v9; // r15d
  void **v12; // r13
  __m128i *v13; // r9
  __m128i *v14; // rax
  void **v15; // r13
  _DWORD *v16; // rax
  int v17; // eax
  void **v18; // rax
  __int64 v19; // r13
  __int64 v20; // rdx
  char v21; // al
  __int64 v22; // r11
  __int64 v23; // r10
  char v24; // cl
  char v25; // al
  char v26; // al
  void **v27; // r11
  __int64 v28; // rbx
  __int64 *v29; // r15
  __int64 v30; // r14
  void **v31; // r11
  void **v32; // rsi
  char v33; // al
  __int64 v34; // r13
  void **v35; // r11
  void **v36; // r10
  void **v37; // rax
  __int64 v38; // rdi
  __int64 v39; // rax
  void *v40; // r15
  int v41; // eax
  int v42; // r8d
  int v43; // r9d
  __int64 v44; // rax
  int v45; // ecx
  int v46; // r8d
  int v47; // r9d
  void **v48; // r11
  void **v49; // r10
  __int64 v50; // r15
  void *v51; // rdi
  __int64 v52; // rax
  int v53; // ecx
  int v54; // r8d
  int v55; // r9d
  __int64 *v56; // rax
  void *v57; // rdi
  __int64 v58; // rsi
  unsigned int *v59; // rax
  unsigned int *v60; // rdi
  __int64 *v61; // rsi
  __int64 v62; // rax
  unsigned int *v63; // rbx
  __int64 v64; // rcx
  int v65; // edx
  __int64 *v66; // r11
  __int64 *v67; // r15
  __int64 v68; // r12
  __int64 v69; // rdi
  int v70; // esi
  __int64 v71; // rax
  __int64 *v72; // rcx
  __int64 *v73; // rax
  int v74; // r10d
  __int64 v75; // rdx
  int *v77; // rax
  __int64 v78; // rsi
  __int64 v79; // rdi
  int v80; // r8d
  int v81; // r9d
  __int64 v82; // r11
  bool v83; // zf
  __int64 v84; // rdx
  __int64 v85; // rsi
  int v86; // r8d
  int v87; // r9d
  __int64 v88; // r11
  __int64 v89; // rax
  char v90; // al
  int v91; // eax
  int v92; // ecx
  int v93; // r8d
  int v94; // r9d
  int v95; // edx
  void *v96; // rdi
  unsigned int *v97; // rax
  unsigned int *v98; // rdi
  __int64 *v99; // rsi
  __int64 v100; // rax
  unsigned int *v101; // rbx
  __int64 v102; // rcx
  int v103; // edx
  __int64 *v104; // r11
  __int64 *v105; // r15
  __int64 v106; // r12
  __int64 v107; // rdi
  int v108; // esi
  __int64 v109; // rax
  __int64 *v110; // rcx
  __int64 *v111; // rax
  int v112; // r10d
  __int64 v113; // rdx
  __int64 v114; // r13
  __int64 v115; // r15
  int v116; // r8d
  int v117; // r9d
  __int64 v118; // r11
  int v119; // r8d
  int v120; // r9d
  __int64 v121; // r11
  __int64 v122; // rax
  char v123; // al
  int v124; // ecx
  int v125; // r8d
  int v126; // r9d
  void *v127; // rdi
  int v128; // ecx
  int v129; // r8d
  int v130; // r9d
  __int64 v131; // rax
  void *v132; // rdi
  void **v133; // r13
  __int64 v134; // r15
  void **v135; // rsi
  char v136; // al
  __int64 v137; // r11
  int v138; // r10d
  __int64 v139; // r15
  int v140; // r8d
  int v141; // r9d
  __int64 v142; // rax
  void *v143; // rdi
  char v144; // al
  int v145; // r8d
  int v146; // r9d
  __int64 *v147; // rax
  __int64 v148; // rdx
  __int64 *v149; // rax
  __int64 v150; // rdx
  void *v151; // rdi
  __int64 v152; // rax
  __int64 v153; // rax
  __int64 v154; // rbx
  int v155; // eax
  __int64 v156; // r11
  char v157; // al
  __int64 v158; // rdi
  __int64 v159; // rax
  void *v160; // rdi
  int v161; // eax
  __m128 v162; // xmm0
  __int64 v163; // r13
  __int64 v164; // r15
  char v165; // al
  int v166; // r8d
  int v167; // r9d
  __int64 v168; // r11
  int v169; // r10d
  char v170; // al
  char v171; // r13
  __int64 v172; // rdi
  __int64 v173; // rax
  char v174; // al
  __int64 v175; // rax
  bool v176; // r13
  int v177; // ecx
  int v178; // r8d
  int v179; // r9d
  __int64 v180; // r11
  void **v181; // r10
  _DWORD *v182; // rax
  int v183; // eax
  int v184; // ecx
  int v185; // r8d
  int v186; // r9d
  void **v187; // r11
  void **v188; // r10
  void *v189; // rdi
  int v190; // eax
  _DWORD *v191; // rdx
  void **v192; // r11
  __int64 v193; // rdx
  __int64 v194; // rsi
  void **v195; // r11
  void **v196; // rax
  __int64 v197; // r11
  void **v198; // r10
  int v199; // eax
  __int64 v200; // r12
  __int64 v201; // rax
  __int64 *v202; // rcx
  unsigned int v203; // edx
  __int64 *v204; // r8
  __int64 v205; // rdx
  __int64 *v206; // r10
  __int64 *i; // rax
  __int64 v208; // rdx
  void *v209; // rdi
  __int64 v210; // rax
  char v211; // al
  int v212; // ecx
  int v213; // r8d
  int v214; // r9d
  void *v215; // rdi
  void *v216; // rax
  __int64 v217; // r15
  int v218; // ecx
  int v219; // r8d
  int v220; // r9d
  int v221; // r14d
  __int64 v222; // rdi
  __int64 v223; // rax
  __int64 v224; // rax
  __int64 v225; // rax
  __int64 *v226; // rcx
  unsigned int v227; // edx
  __int64 *v228; // r8
  __int64 v229; // rdx
  __int64 *v230; // r10
  __int64 *j; // rax
  __int64 v232; // rdx
  void *v233; // rdi
  __int64 v234; // rax
  char v235; // al
  int v236; // ecx
  int v237; // r8d
  int v238; // r9d
  void *v239; // rdi
  void *v240; // rax
  __int64 v241; // r15
  int v242; // ecx
  int v243; // r8d
  int v244; // r9d
  __int64 v245; // rdi
  __int64 v246; // rax
  __int64 v247; // rax
  __int64 v248; // r13
  __int64 v249; // rsi
  __int64 v250; // rdx
  __int64 *v251; // r15
  __int64 v252; // r11
  char v253; // al
  int v254; // eax
  int v255; // ecx
  int v256; // r8d
  int v257; // r9d
  int v258; // edx
  void *v259; // rdi
  __int64 v260; // rax
  __int64 v261; // rdi
  int v262; // eax
  void **v263; // r11
  void **v264; // r9
  __int64 v265; // rdi
  void **v266; // rax
  void **v267; // rsi
  int v268; // ecx
  void **v269; // r15
  _DWORD *v270; // rdi
  int v271; // esi
  __int64 v272; // rax
  void **v273; // rcx
  int v274; // r8d
  void **v275; // rax
  _DWORD *v276; // rdx
  __int64 v277; // rdi
  void *v278; // rbx
  void **v279; // rax
  _DWORD *v280; // rdx
  _QWORD *v281; // rcx
  __int64 v282; // rax
  unsigned int v283; // edx
  _QWORD *v284; // r8
  __int64 v285; // rdx
  _QWORD *v286; // r13
  _QWORD *k; // rax
  _DWORD *v288; // rdx
  __int64 v289; // rax
  char v290; // al
  bool v291; // r13
  int v292; // ecx
  int v293; // r8d
  int v294; // r9d
  void **v295; // r11
  void **v296; // r10
  _DWORD *v297; // rax
  void *v298; // rdi
  void **v299; // rax
  int v300; // ecx
  int v301; // r8d
  int v302; // r9d
  void **v303; // r11
  void **v304; // r10
  void *v305; // rdi
  int v306; // ecx
  int v307; // r8d
  int v308; // r9d
  __int64 m; // r13
  void *v310; // rdi
  __int64 v311; // rax
  __int64 v312; // rdx
  int v313; // r8d
  int v314; // r9d
  __int64 v315; // r11
  __int64 v316; // rax
  char v317; // al
  int v318; // ecx
  int v319; // r8d
  int v320; // r9d
  void *v321; // rdi
  __m128 v322; // xmm0
  __int64 v323; // r15
  __int64 v324; // rsi
  char v325; // al
  int v326; // r8d
  int v327; // r9d
  __int64 v328; // r11
  int v329; // r10d
  char v330; // al
  __int64 v331; // rdi
  __int64 v332; // rax
  char v333; // al
  __int64 v334; // rax
  __int64 v335; // r13
  int v336; // ecx
  int v337; // r8d
  int v338; // r9d
  _DWORD *v339; // rax
  bool v340; // r13
  __int64 v341; // r11
  void **v342; // r10
  int v343; // eax
  int v344; // ecx
  int v345; // r8d
  int v346; // r9d
  void *v347; // rdi
  _DWORD *v348; // rax
  __int64 v349; // rax
  __int64 v350; // rdi
  __int64 v351; // rax
  char v352; // al
  void **v353; // r11
  void **v354; // r10
  int v355; // eax
  int v356; // ecx
  int v357; // r8d
  int v358; // r9d
  void *v359; // rdi
  char v360; // al
  __int64 v361; // rax
  char v362; // al
  int v363; // ecx
  int v364; // r8d
  int v365; // r9d
  void *v366; // rdi
  char v367; // al
  __int64 v368; // r8
  _DWORD *v369; // rax
  __int64 v370; // r15
  char v371; // al
  void **v372; // rax
  char v373; // al
  int v374; // ecx
  int v375; // r8d
  int v376; // r9d
  void *v377; // rdi
  __int64 v378; // rax
  void *v379; // rdi
  int v380; // eax
  int v381; // r8d
  int v382; // r9d
  int v383; // eax
  int v384; // ecx
  int v385; // r8d
  int v386; // r9d
  void *v387; // rdi
  __int64 v388; // rsi
  void *v389; // rdi
  __m128 v390; // xmm0
  __int64 v391; // rax
  unsigned int v392; // r15d
  void **v393; // rax
  int v394; // r8d
  int v395; // r9d
  __int64 v396; // r11
  void **v397; // r10
  _DWORD *v398; // rax
  __int64 v399; // rax
  __int64 v400; // rdx
  void **v401; // r11
  __int64 v402; // rsi
  void **v403; // r11
  void **v404; // r10
  char v405; // al
  __int32 v406; // edx
  unsigned __int64 v407; // rdx
  char v408; // si
  char v409; // al
  int v410; // eax
  __int64 v411; // rax
  char v412; // cl
  char v413; // si
  int v414; // ecx
  int v415; // r8d
  int v416; // r9d
  void **v417; // r11
  void **v418; // r10
  void *v419; // rdi
  int v420; // eax
  int v421; // ecx
  int v422; // r8d
  int v423; // r9d
  void *v424; // rdi
  void **v425; // r15
  int v426; // eax
  int v427; // ecx
  int v428; // r8d
  int v429; // r9d
  int v430; // edx
  void *v431; // rdi
  __int64 v432; // rax
  int v433; // [rsp-168h] [rbp-168h]
  int v434; // [rsp-168h] [rbp-168h]
  void **v435; // [rsp-160h] [rbp-160h]
  int v436; // [rsp-160h] [rbp-160h]
  void **v437; // [rsp-158h] [rbp-158h]
  int v438; // [rsp-158h] [rbp-158h]
  __int64 v439; // [rsp-158h] [rbp-158h]
  void **v440; // [rsp-158h] [rbp-158h]
  void **v441; // [rsp-150h] [rbp-150h]
  __int64 v442; // [rsp-150h] [rbp-150h]
  void *v443; // [rsp-150h] [rbp-150h]
  __int64 v444; // [rsp-150h] [rbp-150h]
  __int64 v445; // [rsp-150h] [rbp-150h]
  void **v446; // [rsp-148h] [rbp-148h]
  int v447; // [rsp-148h] [rbp-148h]
  int v448; // [rsp-148h] [rbp-148h]
  int v449; // [rsp-148h] [rbp-148h]
  void **v450; // [rsp-148h] [rbp-148h]
  void **v451; // [rsp-140h] [rbp-140h]
  __m128i *v452; // [rsp-140h] [rbp-140h]
  __m128i *v453; // [rsp-140h] [rbp-140h]
  int v454; // [rsp-140h] [rbp-140h]
  char v455; // [rsp-140h] [rbp-140h]
  unsigned int v456; // [rsp-140h] [rbp-140h]
  char v457; // [rsp-140h] [rbp-140h]
  __int64 v458; // [rsp-140h] [rbp-140h]
  void **v459; // [rsp-140h] [rbp-140h]
  void **v460; // [rsp-140h] [rbp-140h]
  void **v461; // [rsp-140h] [rbp-140h]
  void **v462; // [rsp-138h] [rbp-138h] BYREF
  void **v463; // [rsp-130h] [rbp-130h]
  void **v464; // [rsp-128h] [rbp-128h] BYREF
  void **v465; // [rsp-120h] [rbp-120h]
  char v466; // [rsp-111h] [rbp-111h] BYREF
  __int64 v467; // [rsp-110h] [rbp-110h] BYREF
  __int64 v468; // [rsp-108h] [rbp-108h] BYREF
  unsigned __int64 v469; // [rsp-100h] [rbp-100h]
  __int64 v470; // [rsp-F8h] [rbp-F8h] BYREF
  __int64 v471; // [rsp-F0h] [rbp-F0h]
  void **v472; // [rsp-E8h] [rbp-E8h] BYREF
  void *v473; // [rsp-E0h] [rbp-E0h]
  _QWORD v474[2]; // [rsp-D8h] [rbp-D8h] BYREF
  __m128 v475; // [rsp-C8h] [rbp-C8h] BYREF
  __int64 v476; // [rsp-B8h] [rbp-B8h] BYREF
  __int64 v477; // [rsp-B0h] [rbp-B0h]

  if ( !a3 )
    return 5;
  v6 = (__int64)a2;
  v8 = (int *)a2[3];
  if ( !v8 )
    return 5;
  v9 = *v8;
  if ( *v8 == -1 )
    return 5;
  v12 = (void **)a4 + a3;
  v13 = a4;
  v14 = a4;
  do
  {
    if ( *(_WORD *)(v14->m128i_i64[0] + 4) || (*(_BYTE *)(v14->m128i_i64[0] + 30) & 1) == 0 )
      return 5;
    v14 = (__m128i *)((char *)v14 + 8);
  }
  while ( v14 != (__m128i *)v12 );
  LODWORD(v465) = a3;
  if ( !v9 )
  {
    switch ( v8[1] )
    {
      case 2:
        v133 = (void **)a4->m128i_i64[0];
        v134 = (__int64)a1[1];
        v463 = a5;
        v135 = (void **)a1[2];
        v464 = (void **)a4->m128i_i64[1];
        v462 = v135;
        v136 = sub_CF72A0(v134, (__int64)v135, (__int64)v133);
        v138 = (int)v463;
        if ( v136 )
        {
          v449 = (int)v133;
          v462 = v464;
        }
        else
        {
          if ( !(unsigned __int8)sub_CF72A0(v134, (__int64)v462, (__int64)v464) )
            return 5;
          v462 = v133;
          v138 = (int)v463;
          v449 = (int)v464;
        }
        v463 = (void **)v137;
        v454 = v138;
        v139 = sub_15D1F10(v133);
        if ( !(unsigned __int8)sub_15D3340(v463[4], v139) )
          return 5;
        v142 = *(_QWORD *)(v139 + 24);
        if ( *(_QWORD *)(v142 + 32) <= 1u && !*(_DWORD *)(v142 + 24) )
          return 5;
        v143 = v463[4];
        if ( v463[3] )
        {
          v473 = v463[4];
          v472 = nullptr;
          v442 = (__int64)v463;
          v144 = sub_CF8380((__int64)v463, (__int64)v462, (__int64 *)&v472);
          v463 = v472;
          if ( !v144 )
          {
            sub_CF71F0((__int64)v472, (__int64)v473);
            return 5;
          }
          v350 = *(_QWORD *)(v442 + 32);
          v475 = _mm_loadh_ps((const double *)&v464);
          v351 = sub_15DC610(
                   v350,
                   v6,
                   2,
                   (int)&v475,
                   v145,
                   v146,
                   v433,
                   (int)v435,
                   v454,
                   v442,
                   v449,
                   (char)v473,
                   (int)v462,
                   (int)v463,
                   (int)v464,
                   v465);
          v464 = v441;
          v352 = sub_CF9350(v441, v351, &v475);
          v34 = v475.m128_u64[0];
          v353 = v464;
          v354 = v437;
          if ( v352 )
          {
            LODWORD(v441) = (_DWORD)v437;
            v355 = sub_15E1BF0((int)v464[4]);
            v353 = v464;
            v354 = v437;
            v359 = v464[3];
            if ( v359 )
            {
              v462 = v437;
              sub_13333D0((_DWORD)v359, (unsigned int)v446[2], v355, v356, v357, v358);
              v354 = v437;
              v353 = v464;
            }
          }
          v462 = v354;
          v464 = v353;
          sub_CF71F0((__int64)v463, (__int64)v451);
          v35 = v464;
          v36 = v462;
        }
        else
        {
          v475 = _mm_loadh_ps((const double *)&v464);
          v399 = sub_15DC610(
                   (int)v143,
                   v6,
                   2,
                   (int)&v475,
                   v140,
                   v141,
                   v433,
                   (int)v435,
                   (int)v437,
                   (int)v441,
                   v449,
                   v454,
                   v454,
                   (int)v463,
                   (int)v464,
                   v465);
          v464 = v463;
          sub_CF9350(v463, v399, &v475);
          v34 = v475.m128_u64[0];
          v35 = v464;
          v36 = v462;
        }
        goto LABEL_42;
      case 4:
        v114 = (__int64)a1[1];
        v115 = (__int64)a1[2];
        v464 = a5;
        if ( (unsigned __int8)sub_CF72A0(v114, v115, a4->m128i_i64[1]) )
        {
          if ( (unsigned __int8)sub_CF72A0(v114, v115, a4[1].m128i_i64[0]) )
          {
            v361 = sub_15DC610(
                     *(_QWORD *)(v118 + 32),
                     (int)a2,
                     (int)v465,
                     (int)a4,
                     v116,
                     v117,
                     v433,
                     (int)v435,
                     (int)v437,
                     (int)v441,
                     (int)v446,
                     (char)v451,
                     (int)v462,
                     (int)v464,
                     v118,
                     v465);
            v362 = sub_CF9350(v464, v361, &v475);
            v34 = v475.m128_u64[0];
            v35 = v464;
            v36 = v463;
            if ( v362 )
            {
              v366 = v464[3];
              if ( v366 )
              {
                sub_13333D0((_DWORD)v366, *(_QWORD *)(a4->m128i_i64[1] + 16), v475.m128_i32[0], v363, v364, v365);
                v131 = a4[1].m128i_i64[0];
                goto LABEL_66;
              }
            }
          }
          else
          {
            if ( !(unsigned __int8)sub_CF72A0(v114, v115, a4->m128i_i64[0]) )
              return 5;
            v122 = sub_15DC610(
                     *(_QWORD *)(v121 + 32),
                     (int)a2,
                     (int)v465,
                     (int)a4,
                     v119,
                     v120,
                     v433,
                     (int)v435,
                     (int)v437,
                     (int)v441,
                     (int)v446,
                     (char)v451,
                     (int)v462,
                     (int)v464,
                     v121,
                     v465);
            v123 = sub_CF9350(v464, v122, &v475);
            v34 = v475.m128_u64[0];
            v35 = v464;
            v36 = v463;
            if ( v123 )
            {
              v127 = v464[3];
              if ( v127 )
              {
                sub_13333D0(
                  (_DWORD)v127,
                  *(_QWORD *)(a4->m128i_i64[0] + 16),
                  *((_QWORD *)v464[4] + 107),
                  v124,
                  v125,
                  v126);
                v131 = a4->m128i_i64[1];
                goto LABEL_66;
              }
            }
          }
        }
        else
        {
          if ( !(unsigned __int8)sub_CF72A0(v114, v115, a4->m128i_i64[0]) )
            return 5;
          v312 = a4[1].m128i_i64[0];
          v463 = v464;
          if ( !(unsigned __int8)sub_CF72A0(v114, v115, v312) )
            return 5;
          v316 = sub_15DC610(
                   *(_QWORD *)(v315 + 32),
                   (int)a2,
                   (int)v465,
                   (int)a4,
                   v313,
                   v314,
                   v433,
                   (int)v435,
                   (int)v437,
                   (int)v441,
                   (int)v446,
                   (char)v451,
                   (int)v462,
                   (int)v463,
                   v315,
                   v465);
          v317 = sub_CF9350(v464, v316, &v475);
          v34 = v475.m128_u64[0];
          v35 = v464;
          v36 = v463;
          if ( v317 )
          {
            v321 = v464[3];
            if ( v321 )
            {
              sub_13333D0(
                (_DWORD)v321,
                *(_QWORD *)(a4->m128i_i64[0] + 16),
                *((_QWORD *)v464[4] + 108),
                v318,
                v319,
                v320);
              v131 = a4[1].m128i_i64[0];
              goto LABEL_66;
            }
          }
        }
        goto LABEL_42;
      case 5:
        v59 = (unsigned int *)a1[1];
        v60 = (unsigned int *)a1[2];
        v447 = (int)a5;
        v464 = a1;
        v61 = *(__int64 **)v59;
        v62 = v59[2];
        v463 = (void **)v6;
        v452 = a4;
        v63 = v60;
        v64 = v62;
        v65 = v62 - 1;
        v66 = v61;
        LODWORD(v62) = (_DWORD)v465;
        LODWORD(v465) = v65;
        v67 = &v61[v64];
        v68 = v64 * 8;
        LODWORD(v462) = v62;
        while ( 1 )
        {
          v69 = v13->m128i_i64[0];
          v70 = *(_DWORD *)(v13->m128i_i64[0] + 12);
          v71 = 8LL * (v70 & (unsigned int)v465);
          v72 = &v66[(unsigned __int64)v71 / 8];
          if ( v71 == v68 )
          {
LABEL_77:
            if ( v66 == v72 )
              return 5;
            v74 = (int)v465;
            v147 = v66;
            while ( 1 )
            {
              v148 = *v147;
              if ( (unsigned __int64)*v147 > 1 )
              {
                if ( *(_DWORD *)(v148 + 12) == v70 && v69 == v148 )
                  goto LABEL_129;
              }
              else if ( !v148 )
              {
                return 5;
              }
              if ( v72 == ++v147 )
                return 5;
            }
          }
          v73 = &v66[(unsigned __int64)v71 / 8];
          v74 = (int)v465;
          while ( 1 )
          {
            v75 = *v73;
            if ( (unsigned __int64)*v73 <= 1 )
            {
              if ( !v75 )
                return 5;
              goto LABEL_36;
            }
            if ( *(_DWORD *)(v75 + 12) == v70 && v69 == v75 )
              break;
LABEL_36:
            if ( v67 == ++v73 )
              goto LABEL_77;
          }
LABEL_129:
          v201 = v63[2];
          v202 = *(__int64 **)v63;
          LODWORD(v465) = v74;
          v203 = v201 - 1;
          v201 *= 8;
          v204 = (__int64 *)((char *)v202 + v201);
          v205 = 8LL * (v70 & v203);
          v206 = &v202[(unsigned __int64)v205 / 8];
          if ( v205 != v201 )
          {
            for ( i = &v202[(unsigned __int64)v205 / 8]; v204 != i; ++i )
            {
              v208 = *i;
              if ( (unsigned __int64)*i > 1 )
              {
                if ( *(_DWORD *)(v208 + 12) == v70 && v69 == v208 )
                  return 5;
              }
              else if ( !v208 )
              {
                goto LABEL_136;
              }
            }
          }
          for ( ; v206 != v202; ++v202 )
          {
            v224 = *v202;
            if ( (unsigned __int64)*v202 > 1 )
            {
              if ( *(_DWORD *)(v224 + 12) == v70 && v69 == v224 )
                return 5;
            }
            else if ( !v224 )
            {
              break;
            }
          }
LABEL_136:
          v13 = (__m128i *)((char *)v13 + 8);
          if ( v13 == (__m128i *)v12 )
          {
            LODWORD(v6) = (_DWORD)v463;
            a4 = v452;
            v209 = v464[4];
            LODWORD(v465) = (_DWORD)v462;
            v210 = sub_15DC610(
                     (int)v209,
                     (int)v463,
                     (int)v462,
                     (int)v452,
                     (int)v204,
                     (int)v13,
                     v433,
                     (int)v435,
                     (int)v437,
                     (int)v441,
                     v447,
                     (char)v452,
                     (int)v462,
                     v447,
                     (int)v464,
                     v465);
            v211 = sub_CF9350(v464, v210, &v475);
            v34 = v475.m128_u64[0];
            v35 = v464;
            v36 = v463;
            if ( !v211 )
              goto LABEL_42;
            v215 = v464[3];
            if ( !v215 )
              goto LABEL_42;
            v216 = v464[4];
            v217 = 0;
            v462 = v464;
            v464 = *((void ***)v216 + 107);
            sub_13333D0((_DWORD)v215, *(_QWORD *)(a4->m128i_i64[0] + 16), v475.m128_i32[0], v212, v213, v214);
            v36 = v463;
            v463 = (void **)a6;
            v221 = v6;
            v6 = (__int64)a4;
            a4 = (__m128i *)v462;
            while ( (int)v217 + 1 < (unsigned int)v465 )
            {
              v222 = a4[1].m128i_i64[1];
              if ( v222 )
              {
                v223 = *(_QWORD *)(v6 + 8 * v217 + 8);
                v462 = v36;
                sub_13333D0(v222, *(_QWORD *)(v223 + 16), (_DWORD)v464, v218, v219, v220);
                v36 = v462;
              }
              ++v217;
            }
            goto LABEL_144;
          }
        }
      case 6:
        v97 = (unsigned int *)a1[1];
        v98 = (unsigned int *)a1[2];
        v448 = (int)a5;
        v464 = a1;
        v99 = *(__int64 **)v97;
        v100 = v97[2];
        v463 = (void **)v6;
        v453 = a4;
        v101 = v98;
        v102 = v100;
        v103 = v100 - 1;
        v104 = v99;
        LODWORD(v100) = (_DWORD)v465;
        LODWORD(v465) = v103;
        v105 = &v99[v102];
        v106 = v102 * 8;
        LODWORD(v462) = v100;
        break;
      case 8:
        v84 = a4->m128i_i64[0];
        v85 = (__int64)a1[2];
        v463 = a5;
        if ( !(unsigned __int8)sub_CF72A0((__int64)a1[1], v85, v84) )
          return 5;
        v89 = sub_15DC610(
                *(_QWORD *)(v88 + 32),
                v6,
                (int)v465,
                (int)a4,
                v86,
                v87,
                v433,
                (int)v435,
                (int)v437,
                (int)v441,
                (int)v446,
                (char)v451,
                (int)v462,
                (int)v463,
                v88,
                v465);
        v90 = sub_CF9350(v464, v89, &v475);
        v34 = v475.m128_u64[0];
        v35 = v464;
        v36 = v463;
        if ( v90 )
        {
          if ( v464[3] )
          {
            v91 = sub_15E1A70((int)v464[4]);
            v35 = v464;
            v36 = v463;
            v95 = v91;
            v96 = v464[3];
            if ( v96 )
              goto LABEL_50;
          }
        }
        goto LABEL_42;
      default:
        return 5;
    }
LABEL_52:
    v107 = v13->m128i_i64[0];
    v108 = *(_DWORD *)(v13->m128i_i64[0] + 12);
    v109 = 8LL * (v108 & (unsigned int)v465);
    v110 = &v104[(unsigned __int64)v109 / 8];
    if ( v109 == v106 )
    {
LABEL_85:
      if ( v104 == v110 )
        return 5;
      v112 = (int)v465;
      v149 = v104;
      while ( 1 )
      {
        v150 = *v149;
        if ( (unsigned __int64)*v149 > 1 )
        {
          if ( *(_DWORD *)(v150 + 12) == v108 && v107 == v150 )
            goto LABEL_153;
        }
        else if ( !v150 )
        {
          return 5;
        }
        if ( v110 == ++v149 )
          return 5;
      }
    }
    v111 = &v104[(unsigned __int64)v109 / 8];
    v112 = (int)v465;
    while ( 1 )
    {
      v113 = *v111;
      if ( (unsigned __int64)*v111 > 1 )
      {
        if ( *(_DWORD *)(v113 + 12) == v108 && v107 == v113 )
        {
LABEL_153:
          v225 = v101[2];
          v226 = *(__int64 **)v101;
          LODWORD(v465) = v112;
          v227 = v225 - 1;
          v225 *= 8;
          v228 = (__int64 *)((char *)v226 + v225);
          v229 = 8LL * (v108 & v227);
          v230 = &v226[(unsigned __int64)v229 / 8];
          if ( v229 != v225 )
          {
            for ( j = &v226[(unsigned __int64)v229 / 8]; v228 != j; ++j )
            {
              v232 = *j;
              if ( (unsigned __int64)*j > 1 )
              {
                if ( *(_DWORD *)(v232 + 12) == v108 && v107 == v232 )
                  return 5;
              }
              else if ( !v232 )
              {
                goto LABEL_160;
              }
            }
          }
          for ( ; v230 != v226; ++v226 )
          {
            v247 = *v226;
            if ( (unsigned __int64)*v226 > 1 )
            {
              if ( *(_DWORD *)(v247 + 12) == v108 && v107 == v247 )
                return 5;
            }
            else if ( !v247 )
            {
              break;
            }
          }
LABEL_160:
          v13 = (__m128i *)((char *)v13 + 8);
          if ( v13 == (__m128i *)v12 )
          {
            LODWORD(v6) = (_DWORD)v463;
            a4 = v453;
            v233 = v464[4];
            LODWORD(v465) = (_DWORD)v462;
            v234 = sub_15DC610(
                     (int)v233,
                     (int)v463,
                     (int)v462,
                     (int)v453,
                     (int)v228,
                     (int)v13,
                     v433,
                     (int)v435,
                     (int)v437,
                     (int)v441,
                     v448,
                     (char)v453,
                     (int)v462,
                     v448,
                     (int)v464,
                     v465);
            v235 = sub_CF9350(v464, v234, &v475);
            v34 = v475.m128_u64[0];
            v35 = v464;
            v36 = v463;
            if ( !v235 )
              goto LABEL_42;
            v239 = v464[3];
            if ( !v239 )
              goto LABEL_42;
            v240 = v464[4];
            v241 = 0;
            v462 = v464;
            v464 = *((void ***)v240 + 108);
            sub_13333D0((_DWORD)v239, *(_QWORD *)(a4->m128i_i64[0] + 16), v475.m128_i32[0], v236, v237, v238);
            v36 = v463;
            v463 = (void **)a6;
            v221 = v6;
            v6 = (__int64)a4;
            a4 = (__m128i *)v462;
            while ( (int)v241 + 1 < (unsigned int)v465 )
            {
              v245 = a4[1].m128i_i64[1];
              if ( v245 )
              {
                v246 = *(_QWORD *)(v6 + 8 * v241 + 8);
                v462 = v36;
                sub_13333D0(v245, *(_QWORD *)(v246 + 16), (_DWORD)v464, v242, v243, v244);
                v36 = v462;
              }
              ++v241;
            }
LABEL_144:
            v35 = (void **)a4;
            LODWORD(a4) = v6;
            LODWORD(v6) = v221;
            a6 = (__int64 *)v463;
            goto LABEL_42;
          }
          goto LABEL_52;
        }
      }
      else if ( !v113 )
      {
        return 5;
      }
      if ( v105 == ++v111 )
        goto LABEL_85;
    }
  }
  if ( v9 == 5 )
  {
    v161 = v8[1];
    if ( v161 == 6 )
    {
      v463 = a5;
      v464 = a1;
      v349 = sub_CF9BC0(a1, 5, 6, 7, (unsigned int)v465, a4->m128i_i64);
      v35 = a1;
      v36 = v463;
      v34 = v349;
      goto LABEL_42;
    }
    if ( v161 <= 6 )
    {
      if ( v161 == 2 )
      {
        v322 = (__m128)_mm_loadu_si128(a4);
        v323 = (__int64)a1[1];
        v463 = a5;
        v324 = (__int64)a1[2];
        _mm_storeh_ps((double *)&v462, v322);
        v325 = sub_CF72A0(v323, v324, v322.m128_i64[0]);
        v329 = (int)v463;
        LOBYTE(v464) = v325;
        if ( v325 )
        {
          v367 = (char)v462;
          v462 = (void **)v322.m128_u64[0];
          v457 = v367;
        }
        else
        {
          v330 = sub_CF72A0(v323, v324, (__int64)v462);
          v329 = (int)v463;
          v457 = v322.m128_i8[0];
          if ( !v330 )
            return 5;
        }
        v331 = *(_QWORD *)(v328 + 32);
        v475 = v322;
        v332 = sub_15DC610(
                 v331,
                 v6,
                 2,
                 (int)&v475,
                 v326,
                 v327,
                 v433,
                 (int)v435,
                 (int)v437,
                 (int)v441,
                 v329,
                 v457,
                 (int)v462,
                 v328,
                 (int)v464,
                 v465);
        v333 = sub_CF9350(v463, v332, &v472);
        v35 = v463;
        v36 = v446;
        if ( v333 && v463[3] )
        {
          v440 = v446;
          v445 = (__int64)v463;
          v446 = (void **)v463[4];
          v334 = sub_15D1F10(v322.m128_u64[0]);
          v476 = 1;
          v335 = v334;
          v475.m128_u64[0] = (unsigned int)-((_BYTE)v464 == 0) | 1LL;
          v464 = &qword_1C7F2C0;
          v463 = (void **)&v476;
          v475.m128_u64[1] = 0;
          v477 = 0;
          sub_182CBA0(qword_1C7F2C0, &v476);
          v339 = *(_DWORD **)(v335 + 24);
          v340 = 0;
          BYTE4(v476) &= ~1u;
          v341 = v445;
          v342 = v440;
          LODWORD(v476) = 1;
          if ( v339 && *v339 == 5 )
            v340 = v339[1] == 1;
          if ( !*(_QWORD *)(v445 + 40) )
          {
            sub_16669E0(v445 + 32);
            v341 = v445;
            v342 = v440;
          }
          v437 = v342;
          v441 = (void **)v341;
          sub_166A700(*(_QWORD *)(v341 + 40), (unsigned int)&v475, v340, v336, v337, v338);
          sub_15E1B70((int)v441[4]);
          v34 = (__int64)v472;
          v343 = sub_15E1BF0((int)v446);
          v187 = v441;
          v188 = v437;
          v347 = v441[3];
          if ( v347 )
          {
            LODWORD(v446) = (_DWORD)v437;
            sub_13333D0((_DWORD)v347, (unsigned int)v462[2], v343, v344, v345, v346);
            v188 = v437;
            v187 = v441;
          }
          goto LABEL_118;
        }
      }
      else
      {
        if ( v161 != 3 )
          return 5;
        v162 = (__m128)_mm_loadu_si128(a4);
        v163 = (__int64)a1[1];
        v463 = a5;
        v164 = (__int64)a1[2];
        _mm_storeh_ps((double *)&v462, v162);
        v464 = (void **)v162.m128_u64[0];
        v165 = sub_CF72A0(v163, v164, v162.m128_i64[0]);
        v169 = (int)v463;
        if ( v165 )
        {
          v171 = 0;
          v455 = (char)v462;
          v462 = v464;
        }
        else
        {
          v170 = sub_CF72A0(v163, v164, (__int64)v462);
          v169 = (int)v463;
          v171 = v170;
          v455 = (char)v464;
          if ( !v170 )
            return 5;
        }
        v172 = *(_QWORD *)(v168 + 32);
        v475 = v162;
        v173 = sub_15DC610(
                 v172,
                 (int)a2,
                 2,
                 (int)&v475,
                 v166,
                 v167,
                 v433,
                 (int)v435,
                 (int)v437,
                 (int)v441,
                 v169,
                 v455,
                 (int)v462,
                 v168,
                 (int)v464,
                 v465);
        v174 = sub_CF9350(v463, v173, &v472);
        v35 = v463;
        v36 = v446;
        if ( v174 && v463[3] )
        {
          v435 = v446;
          v439 = (__int64)v463;
          v446 = (void **)v463[4];
          v175 = sub_15D1F10(v464);
          v476 = 1;
          v444 = v175;
          LODWORD(v175) = v171 == 0 ? -1 : 1;
          v176 = 0;
          v475 = (__m128)(unsigned int)v175;
          v464 = &qword_1C7F2C0;
          v477 = 0;
          v463 = (void **)&v476;
          sub_182CBA0(qword_1C7F2C0, &v476);
          BYTE4(v476) &= ~1u;
          v180 = v439;
          v181 = v435;
          LODWORD(v476) = 1;
          v182 = *(_DWORD **)(v444 + 24);
          if ( v182 && *v182 == 5 )
            v176 = v182[1] == 1;
          if ( !*(_QWORD *)(v439 + 40) )
          {
            sub_16669E0(v439 + 32);
            v180 = v439;
            v181 = v435;
          }
          v437 = v181;
          v441 = (void **)v180;
          sub_166A700(*(_QWORD *)(v180 + 40), (unsigned int)&v475, v176, v177, v178, v179);
          sub_15E1B70((int)v441[4]);
          v34 = (__int64)v472;
          v183 = sub_15E1BF0((int)v446);
          v187 = v441;
          v188 = v437;
          v189 = v441[3];
          if ( v189 )
          {
            LODWORD(v446) = (_DWORD)v437;
            sub_13333D0((_DWORD)v189, (unsigned int)v462[2], v183, v184, v185, v186);
            v188 = v437;
            v187 = v441;
          }
LABEL_118:
          v451 = v188;
          v462 = v187;
          v464 = (void **)*v464;
          sub_182CBA0(v464, &v475);
          sub_182CBA0(v464, v463);
          v35 = v462;
          v36 = v451;
          goto LABEL_42;
        }
      }
LABEL_226:
      v34 = (__int64)v472;
      goto LABEL_42;
    }
    if ( v161 != 9 )
      return 5;
    v261 = a4->m128i_i64[0];
    v435 = a5;
    v464 = a1;
    v262 = sub_15D1F10(v261);
    v263 = v464;
    v264 = (void **)a4;
    v441 = v12;
    LODWORD(v437) = v262;
    v265 = (__int64)v464[1];
    v462 = (void **)v464[2];
    v266 = (void **)*(unsigned int *)(v265 + 8);
    v267 = *(void ***)v265;
    v463 = (void **)v265;
    v268 = (_DWORD)v266 - 1;
    v266 = (void **)(8LL * (_QWORD)v266);
    v464 = v267;
    v269 = (void **)((char *)v266 + (_QWORD)v267);
    v456 = v268;
    v446 = v266;
LABEL_185:
    v270 = *v264;
    v271 = *((_DWORD *)*v264 + 3);
    v272 = 8LL * (v271 & v456);
    v273 = &v464[(unsigned __int64)v272 / 8];
    if ( (void **)v272 == v446 )
    {
LABEL_196:
      v279 = v464;
      if ( v464 == v273 )
      {
LABEL_254:
        v277 = (__int64)v463;
        goto LABEL_193;
      }
      v274 = (int)v465;
      while ( 1 )
      {
        v280 = *v279;
        if ( (unsigned __int64)*v279 > 1 )
        {
          if ( v280[3] == v271 && v270 == v280 )
            goto LABEL_204;
        }
        else if ( !v280 )
        {
          goto LABEL_192;
        }
        if ( v273 == ++v279 )
          goto LABEL_192;
      }
    }
    v274 = (int)v465;
    v275 = &v464[(unsigned __int64)v272 / 8];
    while ( 1 )
    {
      v276 = *v275;
      if ( (unsigned __int64)*v275 > 1 )
      {
        if ( v276[3] == v271 && v270 == v276 )
        {
LABEL_204:
          LODWORD(v465) = v274;
          v281 = *v462;
          v282 = *((unsigned int *)v462 + 2);
          v283 = v282 - 1;
          v282 *= 8;
          v284 = (char *)*v462 + v282;
          v285 = 8LL * (v271 & v283);
          v286 = (char *)*v462 + v285;
          if ( v285 != v282 )
          {
            for ( k = &v281[(unsigned __int64)v285 / 8]; v284 != k; ++k )
            {
              v288 = (_DWORD *)*k;
              if ( *k > 1u )
              {
                if ( v288[3] == v271 && v270 == v288 )
                  goto LABEL_254;
              }
              else if ( !v288 )
              {
                goto LABEL_211;
              }
            }
          }
          for ( ; v286 != v281; ++v281 )
          {
            v348 = (_DWORD *)*v281;
            if ( *v281 > 1u )
            {
              if ( v348[3] == v271 && v270 == v348 )
              {
                v277 = (__int64)v463;
LABEL_193:
                v470 = 1;
                v468 = 0;
                v469 = 0;
                v471 = 0;
                if ( (_DWORD)v465 != 2 )
                {
                  v463 = (void **)&v468;
                  goto LABEL_195;
                }
                v400 = a4->m128i_i64[1];
                v464 = v435;
                v463 = (void **)&v468;
                if ( (unsigned __int8)sub_CF72A0(v277, (__int64)v462, v400) )
                {
                  v402 = a4->m128i_i64[0];
                  v459 = v464;
                  v464 = v401;
                  v462 = v401 + 4;
                  if ( (unsigned __int8)sub_1666AE0(v401 + 4, v402, &v468, &v466) )
                  {
                    if ( !v466 )
                    {
                      v403 = v464;
                      v404 = v459;
                      if ( (_DWORD)v468 )
                      {
                        v405 = sub_CF9B90(v464, v6, 2, a4, &v467);
                        v403 = v464;
                        v404 = v459;
                        if ( v405 )
                        {
                          if ( v464[3] )
                          {
                            v446 = v459;
                            v473 = nullptr;
                            v460 = v464;
                            v464 = &qword_1C7F2C0;
                            v472 = (void **)(&dword_0 + 1);
                            v474[0] = 1;
                            v474[1] = 0;
                            sub_182CBA0(qword_1C7F2C0, v474);
                            BYTE4(v474[0]) &= ~1u;
                            LODWORD(v474[0]) = 1;
                            sub_27B620((__int64)&v475, (__int64)&v472, (__int64)v463);
                            v406 = v475.m128_i32[0];
                            v475.m128_i32[0] = v468;
                            LODWORD(v468) = v406;
                            v407 = v475.m128_u64[1];
                            v475.m128_u64[1] = v469;
                            v408 = BYTE4(v468) & 0xFD;
                            v469 = v407;
                            v409 = v475.m128_i8[4] & 0xFD | BYTE4(v468) & 2;
                            BYTE4(v468) = v475.m128_i8[4] & 1 | BYTE4(v468) & 0xFC | v475.m128_i8[4] & 2;
                            v475.m128_i8[4] = v408 & 1 | v409 & 0xFE;
                            v410 = v470;
                            LODWORD(v470) = v476;
                            LODWORD(v476) = v410;
                            v411 = v471;
                            v471 = v477;
                            v477 = v411;
                            v412 = BYTE4(v476) & 0xFD | BYTE4(v470) & 2;
                            v413 = BYTE4(v470) & 1;
                            BYTE4(v470) = BYTE4(v476) & 1 | BYTE4(v470) & 0xFC | BYTE4(v476) & 2;
                            BYTE4(v476) = v413 | v412 & 0xFE;
                            sub_25A130((char *)&v475);
                            sub_25A130((char *)&v472);
                            v417 = v460;
                            v418 = v446;
                            if ( !v460[5] )
                            {
                              sub_16669E0(v462);
                              v418 = v446;
                              v417 = v460;
                            }
                            v419 = v417[5];
                            v461 = v418;
                            v462 = v417;
                            sub_166A700((_DWORD)v419, (_DWORD)v463, 0, v414, v415, v416);
                            v420 = sub_15E1B70((int)v462[4]);
                            v403 = v462;
                            v404 = v461;
                            v424 = v462[3];
                            if ( v424 )
                            {
                              sub_13333D0((_DWORD)v424, *(_QWORD *)(a4->m128i_i64[1] + 16), v420, v421, v422, v423);
                              v404 = v461;
                              v403 = v462;
                            }
                          }
                          else
                          {
                            v464 = &qword_1C7F2C0;
                          }
                          v34 = v467;
                        }
                        else
                        {
                          v34 = v467;
                          v464 = &qword_1C7F2C0;
                        }
                      }
                      else
                      {
                        v34 = 0;
                        v464 = &qword_1C7F2C0;
                      }
                      v451 = v404;
                      v462 = v403;
                      v425 = (void **)*v464;
                      sub_182CBA0(*v464, v463);
                      sub_182CBA0(v425, &v470);
                      v35 = v462;
                      v36 = v451;
                      goto LABEL_42;
                    }
                  }
                }
LABEL_195:
                v278 = qword_1C7F2C0;
                sub_182CBA0(qword_1C7F2C0, v463);
                sub_182CBA0(v278, &v470);
                return 5;
              }
            }
            else if ( !v348 )
            {
              break;
            }
          }
LABEL_211:
          if ( ++v264 == v441 )
          {
            v289 = sub_15DC610(
                     (int)v263[4],
                     v6,
                     (int)v465,
                     (int)a4,
                     (int)v284,
                     (int)v264,
                     v433,
                     (int)v435,
                     (int)v437,
                     (int)v441,
                     (int)v446,
                     v456,
                     (int)v462,
                     (int)v435,
                     (int)v263,
                     v465);
            v290 = sub_CF9350(v464, v289, &v472);
            v35 = v464;
            v36 = v463;
            if ( v290 && v464[3] )
            {
              v291 = 0;
              v475 = (__m128)1uLL;
              v477 = 0;
              v476 = 1;
              sub_182CBA0(qword_1C7F2C0, &v476);
              BYTE4(v476) &= ~1u;
              v295 = v464;
              v296 = v463;
              LODWORD(v476) = 1;
              v297 = v437[3];
              if ( v297 && *v297 == 5 )
                v291 = v297[1] == 1;
              if ( !v464[5] )
              {
                sub_16669E0(v464 + 4);
                v295 = v464;
                v296 = v463;
              }
              v298 = v295[5];
              v462 = v296;
              v463 = v295;
              v299 = (void **)sub_166A700((_DWORD)v298, (unsigned int)&v475, v291, v292, v293, v294);
              v303 = v463;
              v464 = v299;
              v304 = v462;
              v305 = v463[3];
              if ( v305 )
              {
                sub_13333D0((_DWORD)v305, *(_QWORD *)(a4->m128i_i64[0] + 16), (_DWORD)v472, v300, v301, v302);
                v303 = v463;
                v304 = v462;
                for ( m = 0; (int)m + 1 < (unsigned int)v465; ++m )
                {
                  v310 = v303[3];
                  if ( v310 )
                  {
                    v311 = a4->m128i_i64[m + 1];
                    v462 = v304;
                    v463 = v303;
                    sub_13333D0((_DWORD)v310, *(_QWORD *)(v311 + 16), (_DWORD)v464, v306, v307, v308);
                    v304 = v462;
                    v303 = v463;
                  }
                }
              }
              v463 = v304;
              v464 = v303;
              sub_25A130((char *)&v475);
              v35 = v464;
              v36 = v463;
            }
            goto LABEL_226;
          }
          goto LABEL_185;
        }
      }
      else if ( !v276 )
      {
LABEL_192:
        LODWORD(v465) = v274;
        v277 = (__int64)v463;
        goto LABEL_193;
      }
      if ( v269 == ++v275 )
        goto LABEL_196;
    }
  }
  if ( *((_DWORD *)a1 + 12) == v9 )
  {
    v463 = a5;
    v464 = a1;
    v77 = sub_CFB0D0(a1, (__int64)a2, a3, a4->m128i_i64);
    v35 = a1;
    v36 = v463;
    v34 = (__int64)v77;
    goto LABEL_42;
  }
  if ( *((_DWORD *)a1 + 18) != v9 )
  {
    v15 = a1 + 11;
    v463 = a5;
    v464 = a1;
    if ( v9 == (unsigned int)sub_15F0200(a1 + 11) )
    {
      v190 = sub_15F0200(v15);
      v191 = a2[3];
      if ( v191 )
      {
        v192 = v464;
        if ( v190 == *v191 && v191[1] == 3 )
        {
          v193 = a4->m128i_i64[0];
          v194 = (__int64)v464[2];
          v464 = v463;
          if ( (unsigned __int8)sub_CF72A0((__int64)v192[1], v194, v193) )
          {
            if ( !v195[3] )
            {
              v464 = v195;
              sub_CF9B90(v195, v6, (unsigned int)v465, a4, &v475);
              v34 = v475.m128_u64[0];
              v35 = v464;
              v36 = v463;
              goto LABEL_42;
            }
            v462 = v464;
            v463 = v195;
            v196 = (void **)sub_15FCC40(v15, v6);
            v197 = (__int64)v463;
            v198 = v464;
            v83 = *((_DWORD *)v196 + 8) == 0;
            v464 = v196;
            if ( v83 )
            {
LABEL_260:
              v462 = v198;
              v463 = (void **)v197;
              v360 = sub_CF9B90(v197, v6, (unsigned int)v465, a4, &v468);
              v35 = v463;
              v36 = v462;
              if ( v360 )
              {
                v392 = 0;
                LODWORD(v450) = (_DWORD)v462;
                v393 = (void **)sub_15FB1F0(v15, v464);
                v396 = (__int64)v463;
                v397 = v462;
                v462 = v393;
                v463 = (void **)&v476;
                v475.m128_u64[0] = (unsigned __int64)&v476;
                v475.m128_u64[1] = 0x1000000000LL;
                while ( 1 )
                {
                  v398 = *v462;
                  if ( !*v462 || v392 >= *(v398 - 1) )
                    break;
                  v450 = v397;
                  v458 = v396;
                  if ( v6 == *(_QWORD *)&v398[2 * v392] )
                  {
                    v472 = (void **)v468;
                    sub_D03540(&v475, &v472);
                    v396 = v458;
                    v397 = v450;
                  }
                  else
                  {
                    v472 = (void **)sub_15E1950(*(_QWORD *)(v396 + 32));
                    sub_D03540(&v475, &v472);
                    v397 = v450;
                    v396 = v458;
                  }
                  ++v392;
                }
                v426 = sub_15DC610(
                         *(_QWORD *)(v396 + 32),
                         (int)v464,
                         v475.m128_i32[2],
                         v475.m128_i32[0],
                         v394,
                         v395,
                         v433,
                         (int)v435,
                         (int)v437,
                         (int)v441,
                         (int)v450,
                         (char)v397,
                         v396,
                         (int)v463,
                         (int)v464,
                         v465);
                v35 = v462;
                v36 = v451;
                v430 = v426;
                v431 = v462[3];
                if ( v431 )
                {
                  v432 = a4->m128i_i64[0];
                  v462 = v451;
                  v464 = v35;
                  sub_13333D0((_DWORD)v431, *(_QWORD *)(v432 + 16), v430, v427, v428, v429);
                  v36 = v451;
                  v35 = v464;
                }
                v34 = v468;
                if ( (void **)v475.m128_u64[0] != v463 && v475.m128_u64[0] )
                {
                  v463 = v36;
                  v464 = v35;
                  sub_186B220((void *)v475.m128_u64[0]);
                  v35 = v464;
                  v36 = v463;
                }
              }
              else
              {
                v34 = v468;
              }
              goto LABEL_42;
            }
            v199 = (int)v465;
            v463 = (void **)v6;
            v200 = v197;
            LODWORD(v465) = 0;
            LODWORD(v462) = v199;
            v451 = v198;
            while ( (unsigned __int8)sub_15D3340(*(_QWORD *)(v200 + 32), v464[(unsigned int)v465 + 6]) )
            {
              LODWORD(v465) = (_DWORD)v465 + 1;
              if ( (unsigned int)v465 >= *((_DWORD *)v464 + 8) )
              {
                v197 = v200;
                v198 = v451;
                v6 = (__int64)v463;
                LODWORD(v465) = (_DWORD)v462;
                goto LABEL_260;
              }
            }
          }
        }
      }
    }
    else if ( *((_DWORD *)v464 + 34) == v9 )
    {
      v16 = a2[3];
      if ( v16 )
      {
        v17 = v16[1];
        if ( v17 == 2 || v17 == 53 )
        {
          v18 = (void **)v464[2];
          v19 = (__int64)v464[1];
          v472 = nullptr;
          v20 = a4->m128i_i64[0];
          v464 = v18;
          v21 = sub_CF72A0(v19, (__int64)v18, v20);
          v23 = (__int64)v463;
          v24 = v21;
          v25 = v21 & ((_DWORD)v465 == 2);
          if ( v25 )
          {
            v368 = a4->m128i_i64[1];
            v24 = v25;
            if ( *(_DWORD *)(v368 + 8) == 1 && !*(_WORD *)(v368 + 4) )
            {
              v369 = *(_DWORD **)(*(_QWORD *)(v368 + 16) + 24LL);
              if ( v369 )
              {
                if ( *(_DWORD *)(v22 + 160) == *v369 && v369[1] == 2 && *(_DWORD *)(v368 + 24) == 2 )
                {
                  v370 = *(_QWORD *)(v368 + 32);
                  v451 = v463;
                  LOBYTE(v462) = v24;
                  v463 = (void **)v368;
                  v371 = sub_CF72A0(v19, (__int64)v464, v370);
                  v24 = (char)v462;
                  v23 = (__int64)v451;
                  if ( v371 )
                  {
                    v372 = (void **)v463[5];
                    v462 = v451;
                    v463 = (void **)v22;
                    v464 = v372;
                    v373 = sub_CF9B90(v22, a2, 2, a4, &v472);
                    v34 = (__int64)v472;
                    v35 = v463;
                    v36 = v451;
                    if ( v373 )
                    {
                      v377 = v463[3];
                      if ( v377 )
                      {
                        sub_13333D0((_DWORD)v377, *(_QWORD *)(a4->m128i_i64[0] + 16), (_DWORD)v472, v374, v375, v376);
                        v378 = sub_15D1F10(a4->m128i_i64[0]);
                        v379 = v463[19];
                        v380 = sub_15D2D60((_DWORD)v379, *((_DWORD *)v463 + 40), 1, 0, 0, 0, 0, v378);
                        v383 = sub_15DC610(
                                 (int)v379,
                                 v380,
                                 0,
                                 0,
                                 v381,
                                 v382,
                                 v433,
                                 (int)v435,
                                 (int)v437,
                                 (int)v441,
                                 (int)v446,
                                 (char)v462,
                                 (int)v463,
                                 (int)v379,
                                 (int)v464,
                                 v465);
                        v35 = v462;
                        v36 = v451;
                        v387 = v462[3];
                        if ( v387 )
                        {
                          v388 = *(_QWORD *)(v370 + 16);
                          v462 = v451;
                          v463 = v35;
                          sub_13333D0((_DWORD)v387, v388, v383, v384, v385, v386);
                          v36 = v451;
                          v35 = v463;
                        }
                      }
                      v389 = v35[19];
                      v390 = _mm_loadh_ps((const double *)&v464);
                      v463 = v36;
                      v464 = v35;
                      v475 = v390;
                      v391 = sub_15E1AF0((int)v389);
                      v35 = v464;
                      v36 = v463;
                      v34 = v391;
                    }
                    goto LABEL_42;
                  }
                }
              }
            }
          }
          v463 = (void **)v22;
          v26 = v24;
          v27 = v464;
          v464 = a2;
          v6 = (__int64)a4;
          v28 = 0;
          v29 = a6;
          v30 = v23;
          while ( v26 )
          {
            if ( (unsigned int)++v28 >= (unsigned int)v465 )
            {
              v31 = v463;
              a4 = (__m128i *)v6;
              LODWORD(v6) = (_DWORD)v464;
              v463 = (void **)v30;
              a6 = v29;
              v32 = v464;
              v464 = v31;
              v33 = sub_CF9B90(v31, v32, (unsigned int)v465, a4, &v472);
              v34 = (__int64)v472;
              v35 = v464;
              v36 = v463;
              if ( v33 )
              {
                v37 = (void **)v464[4];
                v38 = a4->m128i_i64[0];
                v462 = v463;
                v463 = v464;
                v464 = v37;
                v39 = sub_15D1F10(v38);
                v40 = v463[19];
                v41 = sub_15D2D60((_DWORD)v40, *((_DWORD *)v463 + 40), 1, 0, 0, 0, 0, v39);
                v44 = sub_15DC610(
                        (int)v40,
                        v41,
                        0,
                        0,
                        v42,
                        v43,
                        v433,
                        (int)v435,
                        (int)v437,
                        (int)v441,
                        (int)v446,
                        (char)v451,
                        (int)v462,
                        (int)v463,
                        (int)v464,
                        v465);
                v48 = v463;
                v49 = v462;
                v50 = v44;
                if ( v44 )
                  ++*(_DWORD *)(v44 + 8);
                v51 = v48[3];
                if ( v51 )
                {
                  v52 = a4->m128i_i64[0];
                  v462 = v49;
                  v463 = v48;
                  sub_13333D0((_DWORD)v51, *(_QWORD *)(v52 + 16), v34, v45, v46, v47);
                  v48 = v463;
                  v49 = v462;
                  if ( (_DWORD)v465 != 1 )
                  {
                    v56 = &a4->m128i_i64[1];
                    v463 = (void **)&a4->m128i_i64[(unsigned int)((_DWORD)v465 - 2) + 1];
                    while ( 1 )
                    {
                      v57 = v48[3];
                      v446 = (void **)v56;
                      if ( !v57 )
                        break;
                      v58 = *(_QWORD *)(*v56 + 16);
                      v451 = v49;
                      v462 = v48;
                      sub_13333D0((_DWORD)v57, v58, v50, v53, v54, v55);
                      v48 = v462;
                      v49 = v451;
                      if ( v463 == v446 )
                        break;
                      v56 = (__int64 *)(v446 + 1);
                    }
                  }
                }
                v462 = v49;
                v463 = v48;
                sub_CF71F0(v50, (__int64)v464);
                v35 = v463;
                v36 = v462;
              }
              goto LABEL_42;
            }
            v26 = sub_CF72A0(v19, (__int64)v27, *(_QWORD *)(v6 + 8 * v28));
          }
        }
      }
    }
    return 5;
  }
  v155 = v8[1];
  if ( v155 )
  {
    v464 = a5;
    if ( v155 != 1 || !(unsigned __int8)sub_CF72A0((__int64)a1[1], (__int64)a1[2], a4->m128i_i64[0]) )
      return 5;
    v463 = (void **)v156;
    v157 = sub_CF9B90(v156, a2, (unsigned int)v465, a4, &v468);
    v34 = v468;
    v35 = v463;
    v36 = v464;
    if ( v157 )
    {
      v158 = a4->m128i_i64[0];
      v463 = v464;
      v464 = v35;
      v159 = sub_15D1F10(v158);
      v35 = v464;
      v36 = v463;
      if ( v464[3] )
      {
        v475.m128_u64[0] = v159;
        v462 = v463;
        v160 = v464[10];
        v463 = v464;
        v472 = (void **)v34;
        v475.m128_i8[8] = 1;
        v464 = (void **)sub_15DCAD0((int)v160, (int)&v472, 0);
        sub_15D0DF0(&v475);
        v35 = v463;
        v95 = (int)v464;
        v36 = v462;
        v96 = v463[3];
        if ( v96 )
        {
          v463 = v462;
          v464 = v35;
LABEL_50:
          sub_13333D0((_DWORD)v96, *(_QWORD *)(a4->m128i_i64[0] + 16), v95, v92, v93, v94);
          v35 = v464;
          v36 = v463;
        }
      }
    }
  }
  else
  {
    v248 = (__int64)a1[1];
    v249 = (__int64)a1[2];
    v462 = a5;
    v250 = a4->m128i_i64[0];
    v463 = (void **)v249;
    if ( !(unsigned __int8)sub_CF72A0(v248, v249, v250) )
      return 5;
    v251 = &a4->m128i_i64[(int)v465 - 1];
    LODWORD(v464) = (_DWORD)v465 - 1;
    if ( !(unsigned __int8)sub_CF72A0(v248, (__int64)v463, *v251) )
      return 5;
    v463 = (void **)v252;
    v253 = sub_CF9B90(v252, v6, (unsigned int)v465, a4, &v475);
    v34 = v475.m128_u64[0];
    v35 = v463;
    v36 = v462;
    if ( v253 )
    {
      if ( v463[3] )
      {
        v254 = sub_15E1AF0((int)v463[4]);
        v35 = v463;
        v36 = v462;
        v258 = v254;
        v259 = v463[3];
        if ( v259 )
        {
          v260 = *v251;
          v463 = v462;
          v464 = v35;
          sub_13333D0((_DWORD)v259, *(_QWORD *)(v260 + 16), v258, v255, v256, v257);
          v131 = a4->m128i_i64[0];
LABEL_66:
          v35 = v464;
          v36 = v463;
          v132 = v464[3];
          if ( v132 )
          {
            sub_13333D0((_DWORD)v132, *(_QWORD *)(v131 + 16), v34, v128, v129, v130);
            v35 = v464;
            v36 = v463;
          }
        }
      }
    }
  }
LABEL_42:
  v463 = v35;
  if ( !v34 )
    return 5;
  v78 = (__int64)v36[1];
  ++*(_DWORD *)(v34 + 8);
  v79 = (__int64)*v36;
  v464 = v36;
  sub_CF71F0(v79, v78);
  v82 = (__int64)v463;
  v83 = *(_BYTE *)v463 == 0;
  *v464 = (void *)v34;
  if ( !v83 )
  {
    sub_15DC610(
      *(_QWORD *)(v82 + 32),
      v6,
      (int)v465,
      (int)a4,
      v80,
      v81,
      v433,
      (int)v435,
      (int)v437,
      (int)v441,
      (int)v446,
      (char)v451,
      (int)v462,
      (int)v463,
      v82,
      v465);
    v151 = v464[4];
    v465 = v464;
    v152 = sub_15E1B70((int)v151);
    v475.m128_u64[0] = sub_15DFC30(v465[4], v152);
    v153 = sub_15DFC70((int)v465[4], v434, v436, v438, v443);
    v154 = v153;
    if ( v153 )
      ++*(_DWORD *)(v153 + 8);
    sub_CF71D0(*a6, a6[1]);
    *a6 = v154;
  }
  return 4;
}

