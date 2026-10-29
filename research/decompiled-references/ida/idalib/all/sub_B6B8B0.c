__m128 *__fastcall sub_B6B8B0(__int64 a1, __int64 a2, char a3, unsigned __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // r14
  __int64 (__fastcall *v8)(__int64); // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r12
  __int64 *v12; // rbp
  __int64 v13; // rbx
  __int64 *v14; // rdi
  __int64 v15; // rcx
  unsigned __int32 *v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rdx
  unsigned __int64 v19; // rax
  _QWORD *v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // rbp
  __int64 v23; // rbx
  __int64 v24; // rsi
  __int64 v25; // rcx
  unsigned __int64 v26; // rdx
  _QWORD *v27; // rax
  __int64 v28; // rdi
  __int64 v29; // rdx
  unsigned __int64 v30; // rcx
  __int64 v31; // rbp
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // rax
  __int64 v35; // r15
  __int64 v36; // rax
  _QWORD *v37; // rax
  __int64 v38; // rax
  __int64 v39; // r9
  __int64 v40; // rbp
  __int64 v41; // rbx
  unsigned __int64 v42; // rax
  __int64 v43; // rdi
  int v44; // eax
  __int64 v45; // r9
  __int64 *v46; // rbp
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // r13
  _QWORD *v53; // rbx
  void *v54; // rbp
  unsigned __int64 v55; // rdx
  unsigned int v56; // r12d
  unsigned int v57; // edi
  _QWORD *v58; // rsi
  void *v59; // rcx
  unsigned __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rbx
  __int64 v66; // r12
  __int64 i; // r13
  __int64 v68; // rbp
  __int64 v69; // r14
  __int64 *v70; // rbp
  __int64 *v71; // rbx
  char *v72; // r13
  char *v73; // r12
  char *v74; // rdi
  __m128 *result; // rax
  __m128 *v76; // rdx
  __int64 v77; // rbp
  unsigned __int64 v78; // rax
  unsigned __int64 v79; // rdx
  unsigned __int64 v80; // rax
  __int64 v81; // rdi
  int v82; // eax
  __int64 v83; // r12
  unsigned __int64 v84; // rdx
  __int64 v85; // rsi
  unsigned __int64 v86; // rdx
  unsigned __int64 v87; // rax
  _DWORD *v88; // rcx
  __int64 v89; // rdi
  int v90; // eax
  __int64 v91; // rdi
  int v92; // eax
  __int64 v93; // r12
  unsigned __int64 v94; // rax
  unsigned __int64 v95; // rdx
  unsigned __int64 v96; // rax
  unsigned int v97; // r12d
  __int64 *v98; // rbp
  __int64 *v99; // rsi
  __int64 v100; // rdx
  __int64 v101; // rax
  __int64 **v102; // r12
  __int64 v103; // rbx
  __int64 v104; // rax
  __m128 *v105; // rdi
  __int64 v106; // rax
  __int64 v107; // rax
  __int64 v108; // rdx
  __int64 v109; // rcx
  __int64 v110; // r8
  unsigned __int64 v111; // r9
  _QWORD *v112; // rbp
  __m128 v113; // xmm0
  unsigned int v114; // eax
  _QWORD *v115; // rbx
  __int64 v116; // rax
  __int64 v117; // r8
  __int64 v118; // r9
  __int64 v119; // rdx
  _QWORD *v120; // r12
  __int64 v121; // rbp
  unsigned int v122; // r13d
  unsigned __int64 v123; // rax
  __int64 v124; // rdi
  __int64 *v125; // rsi
  __int64 v126; // rcx
  __int64 v127; // rax
  __int64 v128; // rax
  __int64 v129; // r12
  __int64 n; // r13
  __m128i *v131; // rax
  __int64 v132; // rax
  __int64 v133; // rdx
  __int64 v134; // rax
  unsigned __int64 v135; // rdx
  __m128i v136; // xmm0
  _QWORD *v137; // rdx
  int v138; // r8d
  __int64 *v139; // r10
  int v140; // ecx
  __int64 v141; // r8
  __int64 v142; // rax
  __int64 v143; // rdx
  __int64 v144; // rsi
  unsigned __int64 v145; // rax
  __int64 v146; // rcx
  __m128 *v147; // rsi
  __int64 v148; // rax
  unsigned __int64 v149; // rdx
  __int64 v150; // rax
  unsigned __int64 v151; // rdx
  __int32 v152; // ecx
  __int32 v153; // ecx
  __int32 v154; // edi
  __int64 v155; // rcx
  void **v156; // r12
  void **v157; // r13
  void **v158; // rdi
  unsigned __int64 v159; // rax
  __int64 v160; // rax
  __int64 v161; // rax
  __int64 v162; // rdx
  __int64 v163; // rcx
  __int64 v164; // r11
  __int64 *v165; // rdi
  _QWORD *v166; // rdx
  int v167; // r10d
  _QWORD *v168; // rcx
  __int64 *v169; // rdx
  int m; // r9d
  __int64 v171; // r13
  unsigned int v172; // esi
  __int64 v173; // rcx
  __int64 v174; // r8
  int v175; // esi
  int v176; // esi
  int v177; // edi
  unsigned int v178; // edx
  int v179; // r9d
  __int64 *v180; // r8
  unsigned __int64 v181; // rax
  unsigned __int64 v182; // rax
  __int64 v183; // rax
  _QWORD *v184; // rax
  __int64 v185; // rdx
  _QWORD *v186; // r11
  _QWORD *v187; // rdi
  __int64 v188; // r9
  _QWORD *k; // rdx
  unsigned int v190; // ecx
  _QWORD *v191; // rax
  int v192; // r10d
  __int64 v193; // r13
  unsigned int v194; // ebp
  __int64 v195; // rdx
  unsigned int v196; // esi
  _QWORD *v197; // rcx
  __int64 v198; // r8
  int v199; // edx
  unsigned int v200; // eax
  int v201; // edx
  int v202; // edx
  unsigned int v203; // r13d
  int v204; // r8d
  __int64 *v205; // rdi
  unsigned __int64 v206; // r13
  __int64 v207; // rdi
  __int64 v208; // r12
  _QWORD *v209; // rdx
  __int64 v210; // rbp
  _QWORD *v211; // rbx
  unsigned __int64 v212; // rdx
  unsigned int v213; // r15d
  __int64 *v214; // rsi
  __int64 v215; // rcx
  __int64 v216; // rdx
  unsigned __int64 v217; // rcx
  __int64 v218; // r8
  __int64 v219; // r9
  __int64 v220; // rax
  __int64 v221; // rdi
  __int64 v222; // r12
  void *v223; // rbx
  __int64 v224; // rax
  __int64 v225; // rdx
  __int64 v226; // r8
  __int64 v227; // r9
  _QWORD *v228; // rax
  void *v229; // rsi
  __m128 *v230; // r14
  __int64 v231; // rdx
  _DWORD *v232; // rbx
  __int64 v233; // rsi
  unsigned __int64 v234; // rax
  __int64 v235; // rax
  __m128 *v236; // rsi
  __int64 v237; // rax
  unsigned __int64 v238; // rdx
  unsigned __int64 v239; // rdx
  __int32 v240; // ecx
  __int32 v241; // ecx
  __int32 v242; // r8d
  __int64 v243; // rdx
  __m128 *v244; // r12
  __m128 *v245; // rbp
  unsigned __int16 *v246; // rdi
  unsigned int v247; // eax
  __int64 v248; // rax
  __int64 v249; // rdx
  __int64 v250; // r11
  int v251; // r13d
  _QWORD *v252; // rdx
  _QWORD *v253; // rcx
  _QWORD *v254; // r8
  __int64 v255; // rsi
  unsigned int v256; // ecx
  __int64 v257; // rdx
  __int64 v258; // rdi
  int v259; // ecx
  int v260; // edx
  int v261; // edi
  unsigned int v262; // r12d
  int v263; // edx
  _QWORD *v264; // r8
  unsigned __int64 v265; // rax
  __int64 v266; // rax
  __int64 v267; // rax
  __int64 v268; // rdx
  __int64 v269; // r13
  _QWORD *v270; // rcx
  _QWORD *v271; // r12
  int v272; // r11d
  _QWORD *v273; // rdx
  _QWORD *v274; // r8
  __int64 v275; // rsi
  unsigned int v276; // ecx
  __int64 v277; // rdx
  __int64 v278; // rdi
  int v279; // ecx
  int v280; // edx
  int v281; // r9d
  unsigned int v282; // edi
  int v283; // edx
  unsigned __int64 v284; // rbp
  __int64 v285; // rdi
  int v286; // edi
  __int64 *v287; // rax
  int v288; // esi
  __int64 v289; // rcx
  __int64 v290; // rcx
  __int64 v291; // r15
  __int64 v292; // rdx
  __int64 v293; // rdx
  unsigned __int64 v294; // rbp
  __int64 v295; // rsi
  unsigned __int64 v296; // rax
  __int64 v297; // rax
  __m128 *v298; // rsi
  __int64 v299; // rax
  unsigned __int64 v300; // rdx
  unsigned __int64 v301; // rdx
  __int32 v302; // ecx
  __int32 v303; // ecx
  __int64 v304; // rdx
  void **v305; // r13
  void **v306; // r12
  void **v307; // rdi
  unsigned __int64 v308; // rax
  __int64 v309; // rax
  __int64 v310; // rax
  __int64 v311; // rdx
  __int64 v312; // rbp
  _QWORD *v313; // rcx
  _QWORD *v314; // r13
  int v315; // r11d
  _QWORD *v316; // rdx
  _QWORD *v317; // r10
  int ii; // r12d
  __int64 v319; // r15
  unsigned int v320; // ecx
  __int64 v321; // rdx
  __int64 v322; // rsi
  int v323; // ecx
  int v324; // edi
  int v325; // edi
  __int64 v326; // r10
  int v327; // edx
  __int64 *v328; // r8
  unsigned __int64 v329; // r12
  __int64 v330; // rdi
  unsigned int v331; // eax
  __int64 v332; // rax
  __int64 v333; // rdx
  __int64 v334; // rbp
  int v335; // r11d
  _QWORD *v336; // rcx
  _QWORD *v337; // rdx
  _QWORD *v338; // r10
  int v339; // r12d
  __int64 v340; // r13
  unsigned int v341; // ecx
  __int64 v342; // rdx
  __int64 v343; // rsi
  int v344; // ecx
  int v345; // edi
  int v346; // edi
  unsigned int v347; // r10d
  int v348; // edx
  __int64 v349; // rbx
  _QWORD *v350; // rcx
  __int64 v351; // rbx
  _QWORD *v352; // rdx
  __int64 v353; // r14
  unsigned __int64 v354; // rax
  __int64 v355; // rax
  __int64 v356; // rax
  __int64 v357; // rsi
  __int64 v358; // rdx
  __int64 *v359; // r13
  _QWORD *v360; // rcx
  int v361; // r11d
  _QWORD *v362; // rdx
  __int64 *v363; // r8
  int j; // r14d
  __int64 v365; // r12
  unsigned int v366; // ecx
  _QWORD *v367; // rdx
  __int64 v368; // rdi
  __int64 v369; // rcx
  _QWORD *v370; // rdi
  int v371; // edx
  __int32 v372; // esi
  int v373; // r8d
  __int64 v374; // r9
  __int64 *v375; // rax
  __int64 v376; // rcx
  __int64 v377; // rdi
  __int64 v378; // rdi
  __int64 v379; // rax
  unsigned __int64 v380; // rax
  __int64 v381; // rax
  __int64 v382; // rax
  __int64 v383; // rdx
  _QWORD *v384; // rcx
  __int64 v385; // r13
  int v386; // r12d
  __int64 *v387; // r11
  _QWORD *v388; // rdx
  __int64 *v389; // r8
  __int64 v390; // rcx
  unsigned __int32 v391; // esi
  __int64 v392; // rdx
  __int64 v393; // rdi
  int v394; // ecx
  __int64 *v395; // rdi
  int v396; // ecx
  int v397; // edx
  __int64 *v398; // rax
  int v399; // ecx
  __int64 *v400; // r10
  __int64 v401; // rbx
  _QWORD *v402; // rcx
  int v403; // r10d
  __int64 v404; // r9
  int v405; // r10d
  __int64 v406; // r9
  __int64 v407; // rcx
  unsigned __int64 v408; // rax
  __int64 v409; // rax
  __int64 v410; // rdx
  __int64 v411; // r13
  int v412; // r12d
  _QWORD *v413; // rdx
  _QWORD *v414; // rcx
  __int64 *v415; // r8
  int v416; // r11d
  __int64 v417; // rcx
  unsigned int v418; // esi
  __int64 v419; // rdx
  __int64 v420; // rdi
  int v421; // ecx
  __int64 *v422; // rdi
  int v423; // ecx
  unsigned int v424; // r11d
  int v425; // ecx
  int v426; // r10d
  __int64 v427; // r9
  __int64 v428; // rdi
  __int64 *v429; // rdx
  int v430; // edx
  __int64 *v431; // r10
  __int64 v432; // rdi
  _QWORD *v433; // rcx
  __int32 v434; // r10d
  _QWORD *v435; // r9
  __int64 v436; // rbx
  _QWORD *v437; // rdx
  int v438; // r8d
  __int64 v439; // rdi
  int v440; // r8d
  __int64 v441; // rdi
  int v442; // ecx
  __int64 v443; // rdx
  __int64 v444; // rcx
  __int64 v445; // rdi
  __int64 *v446; // rdx
  int v447; // r10d
  __int64 v448; // r9
  int v449; // edi
  int v450; // edi
  __int64 v451; // r8
  unsigned int v452; // r13d
  int v453; // edx
  __int64 *v454; // r9
  __int64 v455; // [rsp-10h] [rbp-168h]
  __m128i v456; // [rsp+0h] [rbp-158h] BYREF
  __int64 v457; // [rsp+10h] [rbp-148h] BYREF
  __int64 v458; // [rsp+18h] [rbp-140h]
  unsigned __int32 v459; // [rsp+24h] [rbp-134h]
  unsigned __int64 v460; // [rsp+28h] [rbp-130h]
  char *v461; // [rsp+30h] [rbp-128h]
  __m128 *p_ptr; // [rsp+38h] [rbp-120h]
  void **v463; // [rsp+40h] [rbp-118h]
  unsigned __int64 v464; // [rsp+48h] [rbp-110h]
  __int64 *v465; // [rsp+50h] [rbp-108h]
  __int64 v466; // [rsp+58h] [rbp-100h]
  _QWORD *v467; // [rsp+60h] [rbp-F8h]
  __int64 *v468; // [rsp+68h] [rbp-F0h]
  __int64 v469; // [rsp+70h] [rbp-E8h] BYREF
  __int64 v470; // [rsp+78h] [rbp-E0h]
  unsigned int v471; // [rsp+80h] [rbp-D8h]
  int v472; // [rsp+84h] [rbp-D4h]
  char *v473; // [rsp+88h] [rbp-D0h]
  __int64 v474; // [rsp+90h] [rbp-C8h]
  char v475; // [rsp+98h] [rbp-C0h] BYREF
  __m128 v476; // [rsp+A0h] [rbp-B8h] BYREF
  unsigned __int64 v477; // [rsp+B0h] [rbp-A8h]
  __int64 *v478; // [rsp+B8h] [rbp-A0h]
  void **v479; // [rsp+C0h] [rbp-98h]
  __int64 v480; // [rsp+C8h] [rbp-90h] BYREF
  void *ptr; // [rsp+D0h] [rbp-88h] BYREF
  __int64 v482; // [rsp+D8h] [rbp-80h]
  __m128 v483; // [rsp+E0h] [rbp-78h] BYREF
  __m128 *v484; // [rsp+F0h] [rbp-68h]
  __int64 v485; // [rsp+F8h] [rbp-60h]

  v7 = a5;
  v461 = (char *)a2;
  v460 = a4;
  if ( a3 )
  {
    v459 = 0;
    goto LABEL_8;
  }
  v8 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL);
  if ( v8 == sub_A01140 )
  {
    v9 = sub_B70A60(a2);
    v11 = *(unsigned int *)(a1 + 16);
    v12 = *(__int64 **)a1;
    v13 = v9;
    if ( !(_DWORD)v11 )
      goto LABEL_412;
  }
  else
  {
    v379 = v8(a2);
    v11 = *(unsigned int *)(a1 + 16);
    v12 = *(__int64 **)a1;
    v13 = v379;
    if ( !(_DWORD)v11 )
      goto LABEL_412;
  }
  a5 = (unsigned int)(v11 - 1);
  v456.m128i_i32[0] = ((unsigned int)v13 >> 9) ^ ((unsigned int)v13 >> 4);
  a6 = (unsigned int)a5 & v456.m128i_i32[0];
  v14 = &v12[2 * a6];
  v15 = *v14;
  if ( v13 != *v14 )
  {
    a2 = 1;
    v398 = nullptr;
    if ( v15 == -4096 )
      goto LABEL_489;
    while ( 1 )
    {
      if ( v15 == -8192 && !v398 )
        v398 = v14;
      a6 = (unsigned int)a5 & ((_DWORD)a2 + (_DWORD)a6);
      v14 = &v12[2 * (unsigned int)a6];
      v15 = *v14;
      if ( v13 == *v14 )
        goto LABEL_5;
      if ( v15 == -4096 )
        break;
      a2 = (unsigned int)(a2 + 1);
    }
    if ( !v398 )
LABEL_489:
      v398 = v14;
    v397 = *(_DWORD *)(a1 + 8) + 1;
    v10 = (unsigned int)(3 * v11);
    if ( 4 * v397 < (unsigned int)v10 )
    {
      v407 = (unsigned int)(v11 - *(_DWORD *)(a1 + 12) - v397);
      if ( (unsigned int)v407 > (unsigned int)v11 >> 3 )
      {
        a2 = *v398;
        goto LABEL_493;
      }
      v408 = ((((((((((unsigned int)a5 | ((unsigned __int64)(unsigned int)a5 >> 1)) >> 2)
                  | (unsigned int)a5
                  | ((unsigned __int64)(unsigned int)a5 >> 1)) >> 4)
                | (((unsigned int)a5 | ((unsigned __int64)(unsigned int)a5 >> 1)) >> 2)
                | (unsigned int)a5
                | ((unsigned __int64)(unsigned int)a5 >> 1)) >> 8)
              | (((((unsigned int)a5 | ((unsigned __int64)(unsigned int)a5 >> 1)) >> 2)
                | (unsigned int)a5
                | ((unsigned __int64)(unsigned int)a5 >> 1)) >> 4)
              | (((unsigned int)a5 | ((unsigned __int64)(unsigned int)a5 >> 1)) >> 2)
              | (unsigned int)a5
              | ((unsigned __int64)(unsigned int)a5 >> 1)) >> 16)
            | (((((((unsigned int)a5 | ((unsigned __int64)(unsigned int)a5 >> 1)) >> 2)
                | (unsigned int)a5
                | ((unsigned __int64)(unsigned int)a5 >> 1)) >> 4)
              | (((unsigned int)a5 | ((unsigned __int64)(unsigned int)a5 >> 1)) >> 2)
              | (unsigned int)a5
              | ((unsigned __int64)(unsigned int)a5 >> 1)) >> 8)
            | (((((unsigned int)a5 | ((unsigned __int64)(unsigned int)a5 >> 1)) >> 2)
              | (unsigned int)a5
              | ((unsigned __int64)(unsigned int)a5 >> 1)) >> 4)
            | (((unsigned int)a5 | ((unsigned __int64)(unsigned int)a5 >> 1)) >> 2)
            | (unsigned int)a5
            | ((unsigned __int64)(unsigned int)a5 >> 1))
           + 1;
      if ( (unsigned int)v408 < 0x40 )
        LODWORD(v408) = 64;
      *(_DWORD *)(a1 + 16) = v408;
      v409 = sub_22300B0(16LL * (unsigned int)v408, 8, 64, v407, a5, a6);
      *(_QWORD *)a1 = v409;
      if ( v12 )
      {
        v410 = *(unsigned int *)(a1 + 16);
        *(_QWORD *)(a1 + 8) = 0;
        v411 = 2 * v11;
        v412 = v410;
        v413 = (_QWORD *)(v409 + 16 * v410);
        v457 = (__int64)&v12[v411];
        v414 = (_QWORD *)v409;
        if ( (_QWORD *)v409 != v413 )
        {
          do
          {
            *v414 = -4096;
            v414 += 2;
          }
          while ( v413 != v414 );
        }
        v415 = v12;
        v416 = v412 - 1;
        do
        {
          v417 = *v415;
          if ( *v415 != -8192 && v417 != -4096 )
          {
            if ( !v412 )
            {
              *(_QWORD *)&dword_0 = *v415;
              BUG();
            }
            v418 = v416 & (((unsigned int)v417 >> 9) ^ ((unsigned int)v417 >> 4));
            v419 = v409 + 16LL * v418;
            v420 = *(_QWORD *)v419;
            if ( v417 != *(_QWORD *)v419 )
            {
              v426 = 1;
              v427 = 0;
              if ( v420 != -4096 )
              {
                while ( 1 )
                {
                  if ( v420 == -8192 && !v427 )
                    v427 = v419;
                  v418 = v416 & (v426 + v418);
                  LODWORD(v458) = v426 + 1;
                  v419 = v409 + 16LL * v418;
                  v420 = *(_QWORD *)v419;
                  if ( v417 == *(_QWORD *)v419 )
                    break;
                  if ( v420 == -4096 )
                  {
                    if ( v427 )
                      v419 = v427;
                    break;
                  }
                  v426 = v458;
                }
              }
            }
            *(_QWORD *)v419 = v417;
            v421 = *((_DWORD *)v415 + 2);
            ++*(_DWORD *)(a1 + 8);
            *(_DWORD *)(v419 + 8) = v421;
          }
          v415 += 2;
        }
        while ( (__int64 *)v457 != v415 );
        operator delete(v12, v411 * 8, 8);
        v422 = *(__int64 **)a1;
        v423 = *(_DWORD *)(a1 + 16);
        v397 = *(_DWORD *)(a1 + 8) + 1;
      }
      else
      {
        v428 = *(unsigned int *)(a1 + 16);
        *(_QWORD *)(a1 + 8) = 0;
        v423 = v428;
        v422 = (__int64 *)(v409 + 16 * v428);
        if ( (__int64 *)v409 != v422 )
        {
          v429 = (__int64 *)v409;
          do
          {
            *v429 = -4096;
            v429 += 2;
          }
          while ( v422 != v429 );
          v422 = (__int64 *)v409;
        }
        v397 = 1;
      }
      if ( v423 )
      {
        a5 = (unsigned int)(v423 - 1);
        v424 = a5 & v456.m128i_i32[0];
        v398 = &v422[2 * ((unsigned int)a5 & v456.m128i_i32[0])];
        a2 = *v398;
        if ( v13 == *v398 )
        {
LABEL_493:
          *(_DWORD *)(a1 + 8) = v397;
          if ( a2 != -4096 )
            --*(_DWORD *)(a1 + 12);
          goto LABEL_495;
        }
        v425 = 1;
        a6 = 0;
        if ( a2 != -4096 )
        {
          while ( 1 )
          {
            if ( !a6 && a2 == -8192 )
              a6 = (__int64)v398;
            v424 = a5 & (v425 + v424);
            v398 = &v422[2 * v424];
            a2 = *v398;
            if ( v13 == *v398 )
              goto LABEL_493;
            if ( a2 == -4096 )
            {
              if ( !a6 )
                break;
              a2 = *(_QWORD *)a6;
              v398 = (__int64 *)a6;
              goto LABEL_493;
            }
            ++v425;
          }
        }
LABEL_512:
        *(_DWORD *)(a1 + 8) = v397;
LABEL_495:
        *v398 = v13;
        v16 = (unsigned __int32 *)(v398 + 1);
        *v16 = 0;
        v459 = 1;
        goto LABEL_6;
      }
      goto LABEL_670;
    }
LABEL_412:
    v380 = (((((((unsigned int)(2 * v11 - 1) | ((unsigned __int64)(unsigned int)(2 * v11 - 1) >> 1)) >> 2)
             | (unsigned int)(2 * v11 - 1)
             | ((unsigned __int64)(unsigned int)(2 * v11 - 1) >> 1)) >> 4)
           | (((unsigned int)(2 * v11 - 1) | ((unsigned __int64)(unsigned int)(2 * v11 - 1) >> 1)) >> 2)
           | (unsigned int)(2 * v11 - 1)
           | ((unsigned __int64)(unsigned int)(2 * v11 - 1) >> 1)) >> 8)
         | (((((unsigned int)(2 * v11 - 1) | ((unsigned __int64)(unsigned int)(2 * v11 - 1) >> 1)) >> 2)
           | (unsigned int)(2 * v11 - 1)
           | ((unsigned __int64)(unsigned int)(2 * v11 - 1) >> 1)) >> 4)
         | (((unsigned int)(2 * v11 - 1) | ((unsigned __int64)(unsigned int)(2 * v11 - 1) >> 1)) >> 2)
         | (unsigned int)(2 * v11 - 1)
         | ((unsigned __int64)(unsigned int)(2 * v11 - 1) >> 1);
    v381 = ((v380 >> 16) | v380) + 1;
    if ( (unsigned int)v381 < 0x40 )
      LODWORD(v381) = 64;
    *(_DWORD *)(a1 + 16) = v381;
    v382 = sub_22300B0(16LL * (unsigned int)v381, 8, 64, v10, a5, a6);
    *(_QWORD *)a1 = v382;
    if ( v12 )
    {
      v383 = *(unsigned int *)(a1 + 16);
      v384 = (_QWORD *)v382;
      v385 = 2 * v11;
      *(_QWORD *)(a1 + 8) = 0;
      v386 = v383;
      v387 = &v12[v385];
      v388 = (_QWORD *)(v382 + 16 * v383);
      if ( (_QWORD *)v382 != v388 )
      {
        do
        {
          *v384 = -4096;
          v384 += 2;
        }
        while ( v388 != v384 );
      }
      v389 = v12;
      for ( v456.m128i_i32[0] = v386 - 1; v387 != v389; v389 += 2 )
      {
        v390 = *v389;
        if ( *v389 != -8192 && v390 != -4096 )
        {
          if ( !v386 )
          {
            *(_QWORD *)&dword_0 = *v389;
            BUG();
          }
          v391 = v456.m128i_i32[0] & (((unsigned int)v390 >> 9) ^ ((unsigned int)v390 >> 4));
          v392 = v382 + 16LL * v391;
          v393 = *(_QWORD *)v392;
          if ( v390 != *(_QWORD *)v392 )
          {
            v447 = 1;
            v448 = 0;
            if ( v393 != -4096 )
            {
              while ( 1 )
              {
                if ( v393 == -8192 && !v448 )
                  v448 = v392;
                v391 = v456.m128i_i32[0] & (v447 + v391);
                LODWORD(v457) = v447 + 1;
                v392 = v382 + 16LL * v391;
                v393 = *(_QWORD *)v392;
                if ( v390 == *(_QWORD *)v392 )
                  break;
                if ( v393 == -4096 )
                {
                  if ( v448 )
                    v392 = v448;
                  break;
                }
                v447 = v457;
              }
            }
          }
          *(_QWORD *)v392 = v390;
          v394 = *((_DWORD *)v389 + 2);
          ++*(_DWORD *)(a1 + 8);
          *(_DWORD *)(v392 + 8) = v394;
        }
      }
      operator delete(v12, v385 * 8, 8);
      v395 = *(__int64 **)a1;
      v396 = *(_DWORD *)(a1 + 16);
      v397 = *(_DWORD *)(a1 + 8) + 1;
    }
    else
    {
      v445 = *(unsigned int *)(a1 + 16);
      *(_QWORD *)(a1 + 8) = 0;
      v396 = v445;
      v395 = (__int64 *)(v382 + 16 * v445);
      if ( (__int64 *)v382 != v395 )
      {
        v446 = (__int64 *)v382;
        do
        {
          *v446 = -4096;
          v446 += 2;
        }
        while ( v395 != v446 );
        v395 = (__int64 *)v382;
      }
      v397 = 1;
    }
    if ( v396 )
    {
      a5 = (unsigned int)(v396 - 1);
      a6 = (unsigned int)a5 & (((unsigned int)v13 >> 9) ^ ((unsigned int)v13 >> 4));
      v398 = &v395[2 * a6];
      a2 = *v398;
      if ( v13 == *v398 )
        goto LABEL_493;
      v399 = 1;
      v400 = nullptr;
      if ( a2 != -4096 )
      {
        while ( 1 )
        {
          if ( a2 == -8192 && !v400 )
            v400 = v398;
          a6 = (unsigned int)a5 & (v399 + (_DWORD)a6);
          v398 = &v395[2 * (unsigned int)a6];
          a2 = *v398;
          if ( v13 == *v398 )
            goto LABEL_493;
          if ( a2 == -4096 )
          {
            if ( !v400 )
              goto LABEL_512;
            a2 = *v400;
            v398 = v400;
            goto LABEL_493;
          }
          ++v399;
        }
      }
      goto LABEL_512;
    }
LABEL_670:
    ++*(_DWORD *)(a1 + 8);
    BUG();
  }
LABEL_5:
  v16 = (unsigned __int32 *)(v14 + 1);
  v459 = *((_DWORD *)v14 + 2) + 1;
LABEL_6:
  *v16 = v459;
LABEL_8:
  v17 = *((_QWORD *)v461 + 13);
  v18 = *(_QWORD *)(v17 + 96);
  v19 = v18 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v18 & 1) == 0 )
  {
    v20 = (_QWORD *)(v18 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v18 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
    {
      v18 &= 2u;
      if ( !(_DWORD)v18 )
        goto LABEL_11;
      v77 = v20[2295];
      v78 = v17 & 0xFFFFFFFFFFFFFFFBLL;
      if ( v77 )
      {
        a2 = v20[294];
        v20[304] += 24LL;
        v79 = (a2 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v20[295] >= v79 + 24 && a2 )
        {
          v20[294] = v79 + 24;
          v80 = (a2 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        }
        else
        {
          a2 = 24;
          v80 = sub_986170((__int64)(v20 + 294), 24, 24, 3, a5, a6);
          v79 = v80 & 0xFFFFFFFFFFFFFFFBLL;
        }
        *(_QWORD *)v80 = v77;
        *(_DWORD *)(v80 + 8) = 0;
        *(_QWORD *)(v80 + 16) = v17;
        v78 = v79 | 4;
      }
      v19 = v78 & 0xFFFFFFFFFFFFFFFELL;
      v18 = v19 | 1;
      *(_QWORD *)(v17 + 96) = v19 | 1;
    }
  }
  if ( v19 )
  {
    if ( (v19 & 4) != 0 )
    {
      v18 &= 0xFFFFFFFFFFFFFFF8LL;
      if ( v18 )
      {
        v81 = *(_QWORD *)v18;
        v82 = *(_DWORD *)(*(_QWORD *)v18 + 12LL);
        if ( *(_DWORD *)(v18 + 8) != v82 )
        {
          *(_DWORD *)(v18 + 8) = v82;
          a2 = v17;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v81 + 152LL))(v81, v17);
        }
      }
    }
  }
LABEL_11:
  v21 = *((_QWORD *)v461 + 16);
  if ( (*(_BYTE *)(v21 + 24) & 1) != 0 )
    v22 = sub_B96980(v21, a2, v18);
  else
    v22 = *(_QWORD *)(v21 + 24);
  v23 = *((_QWORD *)v461 + 13);
  v24 = *(_QWORD *)(v23 + 96);
  v25 = v24;
  v26 = v24 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v24 & 1) == 0 )
  {
    v27 = (_QWORD *)(v24 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v24 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
    {
      if ( (v24 & 2) == 0 )
      {
        v28 = *((_QWORD *)v461 + 16);
        v29 = 3LL * *(unsigned int *)(v28 + 16);
        v30 = v22 + 24LL * *(unsigned int *)(v28 + 16);
        v464 = v30;
        goto LABEL_17;
      }
      v83 = v27[2295];
      v84 = v23 & 0xFFFFFFFFFFFFFFFBLL;
      if ( v83 )
      {
        v85 = v27[294];
        v27[304] += 24LL;
        v86 = (v85 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v27[295] >= v86 + 24 && v85 )
        {
          v27[294] = v86 + 24;
          v87 = (v85 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        }
        else
        {
          v87 = sub_986170((__int64)(v27 + 294), 24, 24, 3, a5, a6);
          v86 = v87 & 0xFFFFFFFFFFFFFFFBLL;
        }
        *(_QWORD *)v87 = v83;
        v84 = v86 | 4;
        *(_DWORD *)(v87 + 8) = 0;
        *(_QWORD *)(v87 + 16) = v23;
      }
      v26 = v84 & 0xFFFFFFFFFFFFFFFELL;
      v25 = v26 | 1;
      *(_QWORD *)(v23 + 96) = v26 | 1;
    }
  }
  if ( v26 )
  {
    if ( (v26 & 4) != 0 )
    {
      v88 = (_DWORD *)(v25 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v88 )
      {
        v89 = *(_QWORD *)v88;
        v90 = *(_DWORD *)(*(_QWORD *)v88 + 12LL);
        if ( v88[2] != v90 )
        {
          v88[2] = v90;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v89 + 152LL))(v89, v23);
        }
      }
    }
  }
  v28 = *((_QWORD *)v461 + 16);
  v23 = *((_QWORD *)v461 + 13);
  v30 = *(_QWORD *)(v23 + 96);
  v24 = v30;
  v29 = v30 & 0xFFFFFFFFFFFFFFFELL;
  v464 = v22 + 24LL * *(unsigned int *)(v28 + 16);
  if ( (v30 & 1) != 0 || (v27 = (_QWORD *)(v30 & 0xFFFFFFFFFFFFFFFCLL), (v30 & 0xFFFFFFFFFFFFFFFCLL) == 0) )
  {
    if ( !v29 )
    {
LABEL_24:
      v28 = *((_QWORD *)v461 + 16);
      goto LABEL_25;
    }
LABEL_98:
    v29 &= 4u;
    if ( (_DWORD)v29 )
    {
      v30 &= 0xFFFFFFFFFFFFFFF8LL;
      if ( v30 )
      {
        v91 = *(_QWORD *)v30;
        v92 = *(_DWORD *)(*(_QWORD *)v30 + 12LL);
        if ( *(_DWORD *)(v30 + 8) != v92 )
        {
          *(_DWORD *)(v30 + 8) = v92;
          v24 = v23;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v91 + 152LL))(v91, v23);
        }
      }
    }
    goto LABEL_24;
  }
LABEL_17:
  v24 &= 2u;
  if ( (_DWORD)v24 )
  {
    v31 = v27[2295];
    v32 = v23 & 0xFFFFFFFFFFFFFFFBLL;
    if ( v31 )
    {
      v24 = v27[294];
      v27[304] += 24LL;
      v33 = (v24 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v27[295] >= v33 + 24 && v24 )
      {
        v27[294] = v33 + 24;
        v34 = (v24 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      }
      else
      {
        v24 = 24;
        v34 = sub_986170((__int64)(v27 + 294), 24, 24, 3, a5, a6);
        v33 = v34 & 0xFFFFFFFFFFFFFFFBLL;
      }
      *(_QWORD *)v34 = v31;
      v32 = v33 | 4;
      *(_DWORD *)(v34 + 8) = 0;
      *(_QWORD *)(v34 + 16) = v23;
    }
    v29 = v32 & 0xFFFFFFFFFFFFFFFELL;
    v30 = v29 | 1;
    *(_QWORD *)(v23 + 96) = v29 | 1;
    if ( !v29 )
      goto LABEL_24;
    goto LABEL_98;
  }
LABEL_25:
  if ( (*(_BYTE *)(v28 + 24) & 1) != 0 )
    v458 = sub_B96980(v28, v24, v29);
  else
    v458 = *(_QWORD *)(v28 + 24);
  if ( v458 == v464 )
    goto LABEL_68;
  v457 = a1;
  v35 = v7;
  v465 = &v469;
  v468 = &v480;
  do
  {
    v36 = *(_QWORD *)(**(_QWORD **)(v458 + 16) & 0xFFFFFFFFFFFFFFF0LL);
    if ( (*(_BYTE *)(v36 + 8) & 0xF) != 0 )
      v36 = sub_F64F00(**(_QWORD **)(v458 + 16));
    v37 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(v36 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(*v37 + 16LL) == 48 )
    {
      v38 = sub_F60F10(*v37, v24, v29, v30, a5);
      v40 = *(_QWORD *)(v38 + 104);
      v41 = v38;
      v29 = *(_QWORD *)(v40 + 96);
      if ( (v29 & 1) != 0 )
      {
        v42 = v29 & 0xFFFFFFFFFFFFFFFELL;
      }
      else
      {
        v30 = v29 & 0xFFFFFFFFFFFFFFFCLL;
        if ( (v29 & 0xFFFFFFFFFFFFFFFCLL) == 0 || (v29 = *(_QWORD *)(v40 + 96) & 2LL, !(_DWORD)v29) )
        {
LABEL_39:
          if ( (*(_BYTE *)(*(_QWORD *)(v41 + 128) + 1LL) & 4) == 0 )
            goto LABEL_66;
          v45 = *(unsigned int *)(v35 + 32);
          if ( !(_DWORD)v45 && (*(_BYTE *)(v458 + 12) & 1) == 0 )
          {
            v24 = v41;
            sub_B6B8B0(v457, v41, 0, v460, v35);
            goto LABEL_66;
          }
          v469 = 0;
          v470 = 0;
          v471 = 0;
          v473 = (char *)(v465 + 5);
          v474 = 0;
          if ( (*(_BYTE *)(v458 + 12) & 1) == 0 )
          {
            v46 = v465;
            sub_B6B8B0(v457, v41, 0, v460, v465);
LABEL_44:
            v47 = 3LL * *((unsigned int *)v46 + 8);
            v456.m128i_i64[0] = v46[3];
            v463 = (void **)(v456.m128i_i64[0] + 16 * v47);
            if ( v463 != (void **)v456.m128i_i64[0] )
              goto LABEL_45;
LABEL_54:
            v70 = (__int64 *)v473;
            v71 = (__int64 *)&v473[48 * (unsigned int)v474];
            if ( v473 != (char *)v71 )
            {
              do
              {
                v71 -= 6;
                v72 = (char *)v71[4];
                v73 = &v72[120 * *((unsigned int *)v71 + 10)];
                if ( v72 != v73 )
                {
                  do
                  {
                    while ( 1 )
                    {
                      v73 -= 120;
                      v74 = *((char **)v73 + 1);
                      if ( v74 == v73 + 24 )
                        break;
                      free(v74);
                      if ( v72 == v73 )
                        goto LABEL_58;
                    }
                  }
                  while ( v72 != v73 );
LABEL_58:
                  v72 = (char *)v71[4];
                }
                if ( v72 != (char *)(v71 + 6) )
                  free(v72);
                operator delete(v71[1], 8LL * *((unsigned int *)v71 + 6), 4);
              }
              while ( v70 != v71 );
              v71 = (__int64 *)v473;
            }
            goto LABEL_63;
          }
          v97 = *(_DWORD *)(v457 + 40);
          v98 = *(__int64 **)(v457 + 24);
          if ( !v97 )
            goto LABEL_392;
          v45 = (v97 - 1) & (((unsigned int)v41 >> 9) ^ ((unsigned int)v41 >> 4));
          v99 = &v98[2 * v45];
          v100 = *v99;
          if ( v41 == *v99 )
          {
LABEL_112:
            v101 = v99[1];
            v102 = (__int64 **)(v99 + 1);
            if ( v101 )
            {
              v103 = *(_QWORD *)(v101 + 24);
              v104 = 3LL * *(unsigned int *)(v101 + 32);
              v456.m128i_i64[0] = v103;
              v463 = (void **)(v103 + 16 * v104);
              if ( v463 == (void **)v103 )
              {
                v71 = (__int64 *)&v473[48 * (unsigned int)v474];
LABEL_63:
                if ( v71 != v465 + 5 )
                  free(v71);
                v24 = 16LL * v471;
                operator delete(v469, v24, 8);
                goto LABEL_66;
              }
LABEL_45:
              p_ptr = (__m128 *)&ptr;
              while ( 1 )
              {
                v48 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v456.m128i_i64[0] + 32LL))(*(_QWORD *)v456.m128i_i64[0]);
                v52 = *(unsigned int *)(v35 + 16);
                v53 = *(_QWORD **)v35;
                v54 = (void *)v48;
                if ( !(_DWORD)v52 )
                  goto LABEL_291;
                v55 = (unsigned int)(v52 - 1);
                v56 = ((unsigned int)v48 >> 9) ^ ((unsigned int)v48 >> 4);
                v57 = v55 & v56;
                v58 = &v53[2 * ((unsigned int)v55 & v56)];
                v59 = (void *)*v58;
                if ( v48 != *v58 )
                  break;
LABEL_48:
                sub_B69CD0(p_ptr, v58, &v53[2 * (unsigned int)v52], v35, 1);
                v63 = *((unsigned int *)ptr + 2);
LABEL_49:
                v64 = *(unsigned int *)(v456.m128i_i64[0] + 40);
                v65 = *(_QWORD *)(v456.m128i_i64[0] + 32);
                v66 = *(_QWORD *)(v35 + 24) + 48 * v63 + 8;
                for ( i = v65 + 120 * v64; i != v65; v65 += 120 )
                {
                  v68 = *(_QWORD *)(v65 + 8);
                  v69 = v68 + 24LL * *(unsigned int *)(v65 + 16);
                  while ( v69 != v68 )
                  {
                    v455 = *(_QWORD *)(v68 + 16);
                    v68 += 24;
                    sub_B69E70(
                      v66,
                      *(_DWORD *)v65,
                      v64,
                      v60,
                      v61,
                      v62,
                      *(_QWORD *)(v68 - 24),
                      *(_QWORD *)(v68 - 16),
                      v455);
                  }
                }
                v456.m128i_i64[0] += 48;
                if ( (void **)v456.m128i_i64[0] == v463 )
                  goto LABEL_54;
              }
              v50 = 1;
              v228 = nullptr;
              if ( v59 == (void *)-4096LL )
                goto LABEL_255;
              while ( 1 )
              {
                if ( v59 == (void *)-8192LL && !v228 )
                  v228 = v58;
                v51 = (unsigned int)(v50 + 1);
                v57 = v55 & (v50 + v57);
                v58 = &v53[2 * v57];
                v59 = (void *)*v58;
                if ( v54 == (void *)*v58 )
                  goto LABEL_48;
                if ( v59 == (void *)-4096LL )
                  break;
                v50 = (unsigned int)v51;
              }
              if ( !v228 )
LABEL_255:
                v228 = v58;
              v49 = (unsigned int)(*(_DWORD *)(v35 + 8) + 1);
              if ( 4 * (int)v49 >= (unsigned int)(3 * v52) )
              {
LABEL_291:
                v265 = (((((((unsigned int)(2 * v52 - 1) | ((unsigned __int64)(unsigned int)(2 * v52 - 1) >> 1)) >> 2)
                         | (unsigned int)(2 * v52 - 1)
                         | ((unsigned __int64)(unsigned int)(2 * v52 - 1) >> 1)) >> 4)
                       | (((unsigned int)(2 * v52 - 1) | ((unsigned __int64)(unsigned int)(2 * v52 - 1) >> 1)) >> 2)
                       | (unsigned int)(2 * v52 - 1)
                       | ((unsigned __int64)(unsigned int)(2 * v52 - 1) >> 1)) >> 8)
                     | (((((unsigned int)(2 * v52 - 1) | ((unsigned __int64)(unsigned int)(2 * v52 - 1) >> 1)) >> 2)
                       | (unsigned int)(2 * v52 - 1)
                       | ((unsigned __int64)(unsigned int)(2 * v52 - 1) >> 1)) >> 4)
                     | (((unsigned int)(2 * v52 - 1) | ((unsigned __int64)(unsigned int)(2 * v52 - 1) >> 1)) >> 2)
                     | (unsigned int)(2 * v52 - 1)
                     | ((unsigned __int64)(unsigned int)(2 * v52 - 1) >> 1);
                v266 = ((v265 >> 16) | v265) + 1;
                if ( (unsigned int)v266 < 0x40 )
                  LODWORD(v266) = 64;
                *(_DWORD *)(v35 + 16) = v266;
                v267 = sub_22300B0(16LL * (unsigned int)v266, 8, 64, v49, v50, v51);
                *(_QWORD *)v35 = v267;
                if ( v53 )
                {
                  v268 = *(unsigned int *)(v35 + 16);
                  v269 = 2 * v52;
                  *(_QWORD *)(v35 + 8) = 0;
                  v270 = (_QWORD *)v267;
                  v271 = &v53[v269];
                  v272 = v268;
                  v273 = (_QWORD *)(v267 + 16 * v268);
                  if ( (_QWORD *)v267 != v273 )
                  {
                    do
                    {
                      *v270 = -4096;
                      v270 += 2;
                    }
                    while ( v273 != v270 );
                  }
                  v274 = v53;
                  for ( LODWORD(v466) = v272 - 1; v271 != v274; v274 += 2 )
                  {
                    v275 = *v274;
                    if ( *v274 != -4096 && v275 != -8192 )
                    {
                      if ( !v272 )
                      {
                        *(_QWORD *)&dword_0 = *v274;
                        BUG();
                      }
                      v276 = v466 & (((unsigned int)v275 >> 9) ^ ((unsigned int)v275 >> 4));
                      v277 = v267 + 16LL * v276;
                      v278 = *(_QWORD *)v277;
                      if ( *(_QWORD *)v277 != v275 )
                      {
                        v405 = 1;
                        v406 = 0;
                        if ( v278 != -4096 )
                        {
                          while ( 1 )
                          {
                            if ( !v406 && v278 == -8192 )
                              v406 = v277;
                            v276 = v466 & (v405 + v276);
                            v277 = v267 + 16LL * v276;
                            v278 = *(_QWORD *)v277;
                            if ( v275 == *(_QWORD *)v277 )
                              break;
                            if ( v278 == -4096 )
                            {
                              if ( v406 )
                                v277 = v406;
                              break;
                            }
                            ++v405;
                          }
                        }
                      }
                      v279 = *((_DWORD *)v274 + 2);
                      ++*(_DWORD *)(v35 + 8);
                      *(_QWORD *)v277 = v275;
                      *(_DWORD *)(v277 + 8) = v279;
                    }
                  }
                  operator delete(v53, v269 * 8, 8);
                  v53 = *(_QWORD **)v35;
                  v280 = *(_DWORD *)(v35 + 16);
                  LODWORD(v49) = *(_DWORD *)(v35 + 8) + 1;
                }
                else
                {
                  v349 = *(unsigned int *)(v35 + 16);
                  *(_QWORD *)(v35 + 8) = 0;
                  v280 = v349;
                  v53 = (_QWORD *)(v267 + 16 * v349);
                  if ( (_QWORD *)v267 != v53 )
                  {
                    v350 = (_QWORD *)v267;
                    do
                    {
                      *v350 = -4096;
                      v350 += 2;
                    }
                    while ( v53 != v350 );
                    v53 = (_QWORD *)v267;
                  }
                  LODWORD(v49) = 1;
                }
                if ( !v280 )
                {
LABEL_672:
                  ++*(_DWORD *)(v35 + 8);
                  BUG();
                }
                v281 = v280 - 1;
                v282 = (v280 - 1) & (((unsigned int)v54 >> 9) ^ ((unsigned int)v54 >> 4));
                v228 = &v53[2 * v282];
                v229 = (void *)*v228;
                if ( v54 == (void *)*v228 )
                  goto LABEL_259;
                v283 = 1;
                v264 = nullptr;
                if ( v229 != (void *)-4096LL )
                {
                  while ( 1 )
                  {
                    if ( !v264 && v229 == (void *)-8192LL )
                      v264 = v228;
                    v282 = v281 & (v283 + v282);
                    v228 = &v53[2 * v282];
                    v229 = (void *)*v228;
                    if ( v54 == (void *)*v228 )
                      goto LABEL_259;
                    if ( v229 == (void *)-4096LL )
                    {
LABEL_485:
                      if ( !v264 )
                        break;
                      v229 = (void *)*v264;
                      v228 = v264;
                      goto LABEL_259;
                    }
                    ++v283;
                  }
                }
              }
              else
              {
                if ( (int)v52 - *(_DWORD *)(v35 + 12) - (int)v49 > (unsigned int)v52 >> 3 )
                {
                  v229 = (void *)*v228;
LABEL_259:
                  *(_DWORD *)(v35 + 8) = v49;
                  if ( v229 != (void *)-4096LL )
                    --*(_DWORD *)(v35 + 12);
                  goto LABEL_261;
                }
                v247 = (((((((((v55 | (v55 >> 1)) >> 2) | v55 | (v55 >> 1)) >> 4)
                          | ((v55 | (v55 >> 1)) >> 2)
                          | v55
                          | (v55 >> 1)) >> 8)
                        | ((((v55 | (v55 >> 1)) >> 2) | v55 | (v55 >> 1)) >> 4)
                        | ((v55 | (v55 >> 1)) >> 2)
                        | v55
                        | (v55 >> 1)) >> 16)
                      | ((((((v55 | (v55 >> 1)) >> 2) | v55 | (v55 >> 1)) >> 4)
                        | ((v55 | (v55 >> 1)) >> 2)
                        | v55
                        | (v55 >> 1)) >> 8)
                      | ((((v55 | (v55 >> 1)) >> 2) | v55 | (v55 >> 1)) >> 4)
                      | ((v55 | (v55 >> 1)) >> 2)
                      | v55
                      | (v55 >> 1))
                     + 1;
                if ( v247 < 0x40 )
                  v247 = 64;
                *(_DWORD *)(v35 + 16) = v247;
                v248 = sub_22300B0(16LL * v247, 8, 64, v49, v50, v51);
                *(_QWORD *)v35 = v248;
                if ( v53 )
                {
                  v249 = *(unsigned int *)(v35 + 16);
                  *(_QWORD *)(v35 + 8) = 0;
                  v250 = 2 * v52;
                  v251 = v249;
                  v252 = (_QWORD *)(v248 + 16 * v249);
                  v467 = &v53[v250];
                  v253 = (_QWORD *)v248;
                  if ( (_QWORD *)v248 != v252 )
                  {
                    do
                    {
                      *v253 = -4096;
                      v253 += 2;
                    }
                    while ( v252 != v253 );
                  }
                  v254 = v53;
                  LODWORD(v466) = v251 - 1;
                  do
                  {
                    v255 = *v254;
                    if ( *v254 != -4096 && v255 != -8192 )
                    {
                      if ( !v251 )
                      {
                        *(_QWORD *)&dword_0 = *v254;
                        BUG();
                      }
                      v256 = v466 & (((unsigned int)v255 >> 9) ^ ((unsigned int)v255 >> 4));
                      v257 = v248 + 16LL * v256;
                      v258 = *(_QWORD *)v257;
                      if ( v255 != *(_QWORD *)v257 )
                      {
                        v403 = 1;
                        v404 = 0;
                        if ( v258 != -4096 )
                        {
                          while ( 1 )
                          {
                            if ( !v404 && v258 == -8192 )
                              v404 = v257;
                            v256 = v466 & (v403 + v256);
                            v257 = v248 + 16LL * v256;
                            v258 = *(_QWORD *)v257;
                            if ( v255 == *(_QWORD *)v257 )
                              break;
                            if ( v258 == -4096 )
                            {
                              if ( v404 )
                                v257 = v404;
                              break;
                            }
                            ++v403;
                          }
                        }
                      }
                      v259 = *((_DWORD *)v254 + 2);
                      ++*(_DWORD *)(v35 + 8);
                      *(_QWORD *)v257 = v255;
                      *(_DWORD *)(v257 + 8) = v259;
                    }
                    v254 += 2;
                  }
                  while ( v467 != v254 );
                  operator delete(v53, v250 * 8, 8);
                  v53 = *(_QWORD **)v35;
                  v260 = *(_DWORD *)(v35 + 16);
                  LODWORD(v49) = *(_DWORD *)(v35 + 8) + 1;
                }
                else
                {
                  v401 = *(unsigned int *)(v35 + 16);
                  *(_QWORD *)(v35 + 8) = 0;
                  v260 = v401;
                  v53 = (_QWORD *)(v248 + 16 * v401);
                  if ( (_QWORD *)v248 != v53 )
                  {
                    v402 = (_QWORD *)v248;
                    do
                    {
                      *v402 = -4096;
                      v402 += 2;
                    }
                    while ( v53 != v402 );
                    v53 = (_QWORD *)v248;
                  }
                  LODWORD(v49) = 1;
                }
                if ( !v260 )
                  goto LABEL_672;
                v261 = v260 - 1;
                v262 = (v260 - 1) & v56;
                v228 = &v53[2 * v262];
                v229 = (void *)*v228;
                if ( v54 == (void *)*v228 )
                  goto LABEL_259;
                v263 = 1;
                v264 = nullptr;
                if ( v229 != (void *)-4096LL )
                {
                  while ( 1 )
                  {
                    if ( v229 == (void *)-8192LL && !v264 )
                      v264 = v228;
                    v262 = v261 & (v263 + v262);
                    v228 = &v53[2 * v262];
                    v229 = (void *)*v228;
                    if ( v54 == (void *)*v228 )
                      goto LABEL_259;
                    if ( v229 == (void *)-4096LL )
                      goto LABEL_485;
                    ++v263;
                  }
                }
              }
              *(_DWORD *)(v35 + 8) = v49;
LABEL_261:
              v230 = p_ptr;
              *v228 = v54;
              *((_DWORD *)v228 + 2) = 0;
              sub_B69CD0(v230, v228, &v53[2 * *(unsigned int *)(v35 + 16)], v35, 1);
              v231 = *(unsigned int *)(v35 + 32);
              v232 = ptr;
              v476 = 0u;
              v478 = v468;
              v233 = v231 + 1;
              v484 = v230 + 3;
              v234 = *(unsigned int *)(v35 + 36);
              v477 = 0;
              v479 = nullptr;
              ptr = v54;
              v482 = 0;
              v483.m128_u64[0] = 0;
              v483.m128_i32[2] = 0;
              v485 = 0;
              if ( v231 + 1 > v234 )
              {
                v284 = *(_QWORD *)(v35 + 24);
                v285 = v35 + 24;
                if ( v284 > (unsigned __int64)p_ptr || (unsigned __int64)p_ptr >= v284 + 48 * v231 )
                {
                  sub_B6AD60(v285, v233);
                  v235 = *(_QWORD *)(v35 + 24);
                  v231 = *(unsigned int *)(v35 + 32);
                  v236 = p_ptr;
                }
                else
                {
                  sub_B6AD60(v285, v233);
                  v235 = *(_QWORD *)(v35 + 24);
                  v231 = *(unsigned int *)(v35 + 32);
                  v236 = (__m128 *)((char *)p_ptr + v235 - v284);
                }
              }
              else
              {
                v235 = *(_QWORD *)(v35 + 24);
                v236 = v230;
              }
              v237 = 48 * v231 + v235;
              v238 = v236->m128_u64[0];
              *(_QWORD *)(v237 + 8) = 0;
              *(_QWORD *)v237 = v238;
              v239 = v236->m128_u64[1];
              *(_QWORD *)(v237 + 16) = 0;
              *(_DWORD *)(v237 + 24) = 0;
              *(_QWORD *)(v237 + 8) = v239;
              LODWORD(v239) = v236[1].m128_i32[0];
              v236->m128_u64[1] = 0;
              *(_DWORD *)(v237 + 16) = v239;
              v240 = v236[1].m128_i32[1];
              v236[1].m128_i32[0] = 0;
              LODWORD(v239) = *(_DWORD *)(v237 + 20);
              *(_DWORD *)(v237 + 20) = v240;
              v241 = v236[1].m128_i32[2];
              v236[1].m128_i32[1] = v239;
              LODWORD(v239) = *(_DWORD *)(v237 + 24);
              *(_DWORD *)(v237 + 24) = v241;
              v236[1].m128_i32[2] = v239;
              *(_QWORD *)(v237 + 40) = 0;
              v242 = v236[2].m128_i32[2];
              *(_QWORD *)(v237 + 32) = v237 + 48;
              if ( v242 )
                sub_B6A7F0(v237 + 32, (__int64)&v236[2]);
              v243 = (unsigned int)v485;
              v244 = v484;
              ++*(_DWORD *)(v35 + 32);
              v245 = (__m128 *)((char *)v244 + 120 * v243);
              if ( v244 != v245 )
              {
                do
                {
                  while ( 1 )
                  {
                    v245 = (__m128 *)((char *)v245 - 120);
                    v246 = (unsigned __int16 *)v245->m128_u64[1];
                    if ( v246 == &v245[1].m128_u16[4] )
                      break;
                    free(v246);
                    if ( v244 == v245 )
                      goto LABEL_268;
                  }
                }
                while ( v244 != v245 );
LABEL_268:
                v245 = v484;
              }
              if ( v245 != &p_ptr[3] )
                free(v245);
              operator delete(v482, 8LL * v483.m128_u32[2], 4);
              operator delete(v476.m128_u64[0], 8LL * (unsigned int)v477, 4);
              v63 = (unsigned int)(*(_DWORD *)(v35 + 32) - 1);
              v232[2] = v63;
              goto LABEL_49;
            }
LABEL_410:
            v378 = v457;
            v46 = (__int64 *)operator new(0x28u);
            *v46 = 0;
            v46[1] = 0;
            *((_DWORD *)v46 + 4) = 0;
            v46[3] = (__int64)(v46 + 5);
            v46[4] = 0;
            *v102 = v46;
            sub_B6B8B0(v378, v41, 1, v41, v46);
            goto LABEL_44;
          }
          v442 = 1;
          v375 = nullptr;
          if ( v100 == -4096 )
            goto LABEL_613;
          while ( 1 )
          {
            if ( !v375 && v100 == -8192 )
              v375 = v99;
            a5 = (unsigned int)(v442 + 1);
            v45 = (v97 - 1) & (v442 + (_DWORD)v45);
            v99 = &v98[2 * (unsigned int)v45];
            v100 = *v99;
            if ( v41 == *v99 )
              goto LABEL_112;
            if ( v100 == -4096 )
              break;
            ++v442;
          }
          if ( !v375 )
LABEL_613:
            v375 = v99;
          v372 = *(_DWORD *)(v457 + 32) + 1;
          v456.m128i_i32[0] = *(_DWORD *)(v457 + 32);
          v30 = (unsigned int)(4 * v372);
          if ( (unsigned int)v30 < 3 * v97 )
          {
            v443 = v97 - *(_DWORD *)(v457 + 36) - v372;
            v444 = v97 >> 3;
            if ( (unsigned int)v443 > (unsigned int)v444 )
            {
              v376 = *v375;
LABEL_407:
              v377 = v457;
              *(_DWORD *)(v457 + 32) = v372;
              if ( v376 != -4096 )
                --*(_DWORD *)(v377 + 36);
              goto LABEL_409;
            }
            sub_B6AB50(v457 + 24, v97, v443, v444, a5, v45);
            v449 = *(_DWORD *)(v457 + 40);
            if ( !v449 )
              goto LABEL_667;
            v450 = v449 - 1;
            v451 = *(_QWORD *)(v457 + 24);
            v452 = v450 & (((unsigned int)v41 >> 9) ^ ((unsigned int)v41 >> 4));
            v456.m128i_i32[0] = *(_DWORD *)(v457 + 32);
            v372 = v456.m128i_i32[0] + 1;
            v375 = (__int64 *)(v451 + 16LL * v452);
            v376 = *v375;
            if ( v41 == *v375 )
              goto LABEL_407;
            v453 = 1;
            v454 = nullptr;
            if ( v376 != -4096 )
            {
              while ( 1 )
              {
                if ( !v454 && v376 == -8192 )
                  v454 = v375;
                v452 = v450 & (v453 + v452);
                v375 = (__int64 *)(v451 + 16LL * v452);
                v376 = *v375;
                if ( v41 == *v375 )
                  goto LABEL_407;
                if ( v376 == -4096 )
                {
                  if ( !v454 )
                    break;
                  v376 = *v454;
                  v375 = v454;
                  goto LABEL_407;
                }
                ++v453;
              }
            }
          }
          else
          {
LABEL_392:
            v353 = v457;
            v354 = (((((((2 * v97 - 1) | ((unsigned __int64)(2 * v97 - 1) >> 1)) >> 2)
                     | (2 * v97 - 1)
                     | ((unsigned __int64)(2 * v97 - 1) >> 1)) >> 4)
                   | (((2 * v97 - 1) | ((unsigned __int64)(2 * v97 - 1) >> 1)) >> 2)
                   | (2 * v97 - 1)
                   | ((unsigned __int64)(2 * v97 - 1) >> 1)) >> 8)
                 | (((((2 * v97 - 1) | ((unsigned __int64)(2 * v97 - 1) >> 1)) >> 2)
                   | (2 * v97 - 1)
                   | ((unsigned __int64)(2 * v97 - 1) >> 1)) >> 4)
                 | (((2 * v97 - 1) | ((unsigned __int64)(2 * v97 - 1) >> 1)) >> 2)
                 | (2 * v97 - 1)
                 | ((unsigned __int64)(2 * v97 - 1) >> 1);
            v355 = ((v354 >> 16) | v354) + 1;
            if ( (unsigned int)v355 < 0x40 )
              LODWORD(v355) = 64;
            *(_DWORD *)(v457 + 40) = v355;
            v356 = sub_22300B0(16LL * (unsigned int)v355, 8, 64, v30, a5, v45);
            *(_QWORD *)(v353 + 24) = v356;
            if ( v98 )
            {
              v357 = 2LL * v97;
              v358 = *(unsigned int *)(v457 + 40);
              *(_QWORD *)(v457 + 32) = 0;
              v359 = &v98[v357];
              v360 = (_QWORD *)v356;
              v361 = v358;
              v362 = (_QWORD *)(v356 + 16 * v358);
              if ( (_QWORD *)v356 != v362 )
              {
                do
                {
                  *v360 = -4096;
                  v360 += 2;
                }
                while ( v362 != v360 );
              }
              v363 = v98;
              for ( j = v361 - 1; v359 != v363; v363 += 2 )
              {
                v365 = *v363;
                if ( *v363 != -8192 && v365 != -4096 )
                {
                  if ( !v361 )
                  {
                    *(_QWORD *)&dword_0 = *v363;
                    BUG();
                  }
                  v366 = j & (((unsigned int)v365 >> 9) ^ ((unsigned int)v365 >> 4));
                  v367 = (_QWORD *)(v356 + 16LL * v366);
                  v368 = *v367;
                  if ( v365 != *v367 )
                  {
                    v434 = 1;
                    v435 = nullptr;
                    if ( v368 != -4096 )
                    {
                      while ( 1 )
                      {
                        if ( !v435 && v368 == -8192 )
                          v435 = v367;
                        v366 = j & (v434 + v366);
                        v456.m128i_i32[0] = v434 + 1;
                        v367 = (_QWORD *)(v356 + 16LL * v366);
                        v368 = *v367;
                        if ( v365 == *v367 )
                          break;
                        if ( v368 == -4096 )
                        {
                          if ( v435 )
                            v367 = v435;
                          break;
                        }
                        v434 = v456.m128i_i32[0];
                      }
                    }
                  }
                  v369 = v363[1];
                  *v367 = v365;
                  v367[1] = v369;
                  ++*(_DWORD *)(v457 + 32);
                }
              }
              operator delete(v98, v357 * 8, 8);
              v370 = *(_QWORD **)(v457 + 24);
              v371 = *(_DWORD *)(v457 + 40);
              v456.m128i_i32[0] = *(_DWORD *)(v457 + 32);
              v372 = v456.m128i_i32[0] + 1;
            }
            else
            {
              v432 = *(unsigned int *)(v457 + 40);
              *(_QWORD *)(v457 + 32) = 0;
              v371 = v432;
              v370 = (_QWORD *)(v356 + 16 * v432);
              if ( (_QWORD *)v356 != v370 )
              {
                v433 = (_QWORD *)v356;
                do
                {
                  *v433 = -4096;
                  v433 += 2;
                }
                while ( v370 != v433 );
                v370 = (_QWORD *)v356;
              }
              v372 = 1;
            }
            if ( !v371 )
            {
LABEL_667:
              ++*(_DWORD *)(v457 + 32);
              BUG();
            }
            v373 = v371 - 1;
            v374 = (v371 - 1) & (((unsigned int)v41 >> 9) ^ ((unsigned int)v41 >> 4));
            v375 = &v370[2 * v374];
            v376 = *v375;
            if ( v41 == *v375 )
              goto LABEL_407;
            v430 = 1;
            v431 = nullptr;
            if ( v376 != -4096 )
            {
              while ( 1 )
              {
                if ( !v431 && v376 == -8192 )
                  v431 = v375;
                LODWORD(v374) = v373 & (v430 + v374);
                v375 = &v370[2 * (unsigned int)v374];
                v376 = *v375;
                if ( v41 == *v375 )
                  goto LABEL_407;
                if ( v376 == -4096 )
                {
                  if ( !v431 )
                    break;
                  v376 = *v431;
                  v375 = v431;
                  goto LABEL_407;
                }
                ++v430;
              }
            }
          }
          *(_DWORD *)(v457 + 32) = v372;
LABEL_409:
          *v375 = v41;
          v102 = (__int64 **)(v375 + 1);
          v375[1] = 0;
          goto LABEL_410;
        }
        v93 = *(_QWORD *)(v30 + 18360);
        v94 = v40 & 0xFFFFFFFFFFFFFFFBLL;
        if ( v93 )
        {
          v24 = *(_QWORD *)(v30 + 2352);
          *(_QWORD *)(v30 + 2432) += 24LL;
          v95 = (v24 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          if ( *(_QWORD *)(v30 + 2360) >= v95 + 24 && v24 )
          {
            *(_QWORD *)(v30 + 2352) = v95 + 24;
            v96 = (v24 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          }
          else
          {
            v24 = 24;
            v96 = sub_986170(v30 + 2352, 24, 24, 3, a5, v39);
            v95 = v96 & 0xFFFFFFFFFFFFFFFBLL;
          }
          *(_QWORD *)v96 = v93;
          *(_DWORD *)(v96 + 8) = 0;
          *(_QWORD *)(v96 + 16) = v40;
          v94 = v95 | 4;
        }
        v42 = v94 & 0xFFFFFFFFFFFFFFFELL;
        v29 = v42 | 1;
        *(_QWORD *)(v40 + 96) = v42 | 1;
      }
      if ( v42 )
      {
        if ( (v42 & 4) != 0 )
        {
          v29 &= 0xFFFFFFFFFFFFFFF8LL;
          if ( v29 )
          {
            v43 = *(_QWORD *)v29;
            v44 = *(_DWORD *)(*(_QWORD *)v29 + 12LL);
            if ( *(_DWORD *)(v29 + 8) != v44 )
            {
              *(_DWORD *)(v29 + 8) = v44;
              v24 = v40;
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v43 + 152LL))(v43, v40);
            }
          }
        }
      }
      goto LABEL_39;
    }
LABEL_66:
    v458 += 24;
  }
  while ( v458 != v464 );
  v7 = v35;
LABEL_68:
  result = (__m128 *)sub_B8E970(v461 + 64);
  p_ptr = result;
  if ( !result )
    return result;
  v76 = p_ptr;
  if ( (result[1].m128_i8[12] & 0x7Fu) - 35 > 3 )
  {
    do
    {
      result = (__m128 *)(v76->m128_u64[1] & 0xFFFFFFFFFFFFFFF8LL);
      v76 = result;
      if ( !result )
        return result;
    }
    while ( (result[1].m128_i8[12] & 0x7Fu) - 35 > 3 );
    p_ptr = result;
  }
  v105 = p_ptr;
  v461 = &v475;
  while ( 2 )
  {
    v106 = (*(__int64 (__fastcall **)(__m128 *, __int64, __m128 *))(v105->m128_u64[0] + 32))(v105, v24, v76);
    if ( (*(_QWORD *)(v106 + 80) & 0x40000LL) == 0
      && ((*(_QWORD *)(v106 + 80) >> 16) & 8) == 0
      && !(unsigned int)sub_B984E0(v106) )
    {
      goto LABEL_125;
    }
    v458 = (*(__int64 (__fastcall **)(__m128 *))(p_ptr->m128_u64[0] + 32))(p_ptr);
    v107 = sub_B98510(v458);
    v112 = (_QWORD *)v107;
    v457 = v108;
    if ( v108 == v107 )
    {
      v223 = (void *)v458;
      v476.m128_u64[0] = v458;
      v224 = sub_B6AF40(v7, (unsigned __int64 *)&v476, v108, v109, v110, (unsigned __int64 *)v111);
      v24 = v459;
      ptr = v223;
      LODWORD(v482) = v459;
      v483.m128_u64[0] = v460;
      sub_B69E70(v224, v459, v225, v460, v226, v227, (__int64)v223, v459, v460);
      goto LABEL_125;
    }
    v456.m128i_i64[0] = v107;
    v463 = &ptr;
    v113 = _mm_loadh_ps((const double *)&v457);
    ptr = &v483;
    v114 = 1;
    HIDWORD(v482) = 4;
    v483 = v113;
    while ( 2 )
    {
      --v114;
      v115 = v112;
      LODWORD(v482) = v114;
      if ( v112 == (_QWORD *)v457 )
        goto LABEL_147;
      do
      {
        v116 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v115 + 32LL))(*v115);
        v119 = *(unsigned int *)(v7 + 16);
        v120 = *(_QWORD **)v7;
        v121 = v116;
        if ( !(_DWORD)v119 )
          goto LABEL_169;
        v122 = ((unsigned int)v116 >> 9) ^ ((unsigned int)v116 >> 4);
        v123 = (unsigned int)(v119 - 1);
        LODWORD(v124) = v123 & v122;
        v125 = &v120[2 * ((unsigned int)v123 & v122)];
        v126 = *v125;
        if ( v121 == *v125 )
        {
LABEL_136:
          sub_B69CD0(&v476, v125, &v120[2 * v119], v7, 1);
          v127 = *(unsigned int *)(v476.m128_u64[0] + 8);
          goto LABEL_137;
        }
        v138 = 1;
        v139 = nullptr;
        if ( v126 != -4096 )
        {
          while ( 1 )
          {
            if ( v126 == -8192 && !v139 )
              v139 = v125;
            v118 = (unsigned int)(v138 + 1);
            v124 = (unsigned int)v123 & ((_DWORD)v124 + v138);
            v125 = &v120[2 * v124];
            v126 = *v125;
            if ( v121 == *v125 )
              goto LABEL_136;
            if ( v126 == -4096 )
              break;
            ++v138;
          }
          if ( v139 )
            v125 = v139;
        }
        v140 = *(_DWORD *)(v7 + 8) + 1;
        v117 = (unsigned int)(4 * v140);
        if ( (unsigned int)v117 < 3 * (int)v119 )
        {
          v141 = (unsigned int)v119 >> 3;
          if ( (int)v119 - *(_DWORD *)(v7 + 12) - v140 > (unsigned int)v141 )
          {
            v142 = *v125;
LABEL_154:
            *(_DWORD *)(v7 + 8) = v140;
            if ( v142 != -4096 )
              --*(_DWORD *)(v7 + 12);
            goto LABEL_156;
          }
          v456.m128i_i32[0] = *(_DWORD *)(v7 + 16);
          v181 = (((v123 >> 1) | v123) >> 2) | (v123 >> 1) | v123;
          v182 = (((v181 >> 4) | v181) >> 8) | (v181 >> 4) | v181;
          v183 = ((v182 >> 16) | v182) + 1;
          if ( (unsigned int)v183 < 0x40 )
            LODWORD(v183) = 64;
          *(_DWORD *)(v7 + 16) = v183;
          v184 = (_QWORD *)sub_22300B0(16LL * (unsigned int)v183, 8, v119, 64, v141, v118);
          v185 = v456.m128i_u32[0];
          v186 = v184;
          *(_QWORD *)v7 = v184;
          if ( v120 )
          {
            *(_QWORD *)(v7 + 8) = 0;
            v456.m128i_i64[0] = 16 * v185;
            v187 = &v120[2 * v185];
            v188 = *(unsigned int *)(v7 + 16);
            for ( k = &v184[2 * v188]; k != v184; v184 += 2 )
              *v184 = -4096;
            v190 = v122;
            v191 = v120;
            v192 = v188 - 1;
            v193 = v121;
            v194 = v190;
            do
            {
              v195 = *v191;
              if ( *v191 != -4096 && v195 != -8192 )
              {
                if ( !(_DWORD)v188 )
                {
                  *(_QWORD *)&dword_0 = *v191;
                  BUG();
                }
                v196 = v192 & (((unsigned int)v195 >> 9) ^ ((unsigned int)v195 >> 4));
                v197 = &v186[2 * v196];
                v198 = *v197;
                if ( *v197 != v195 && v198 != -4096 )
                {
                  LODWORD(v465) = 1;
                  v464 = 0;
                  v466 = (__int64)v191;
                  while ( 1 )
                  {
                    if ( !v464 )
                    {
                      if ( v198 != -8192 )
                        v197 = (_QWORD *)v464;
                      v464 = (unsigned __int64)v197;
                    }
                    v196 = v192 & ((_DWORD)v465 + v196);
                    v197 = &v186[2 * v196];
                    v198 = *v197;
                    if ( v195 == *v197 )
                    {
                      v191 = (_QWORD *)v466;
                      goto LABEL_196;
                    }
                    if ( v198 == -4096 )
                      break;
                    LODWORD(v465) = (_DWORD)v465 + 1;
                  }
                  v191 = (_QWORD *)v466;
                  if ( v464 )
                    v197 = (_QWORD *)v464;
                }
LABEL_196:
                *v197 = v195;
                v199 = *((_DWORD *)v191 + 2);
                ++*(_DWORD *)(v7 + 8);
                *((_DWORD *)v197 + 2) = v199;
              }
              v191 += 2;
            }
            while ( v187 != v191 );
            v200 = v194;
            v121 = v193;
            v122 = v200;
            operator delete(v120, v456.m128i_i64[0], 8);
            v120 = *(_QWORD **)v7;
            v201 = *(_DWORD *)(v7 + 16);
            v140 = *(_DWORD *)(v7 + 8) + 1;
          }
          else
          {
            v222 = *(unsigned int *)(v7 + 16);
            *(_QWORD *)(v7 + 8) = 0;
            v201 = v222;
            v120 = &v184[2 * v222];
            if ( v184 != v120 )
            {
              do
              {
                *v184 = -4096;
                v184 += 2;
              }
              while ( v120 != v184 );
              v120 = v186;
            }
            v140 = 1;
          }
          if ( !v201 )
            goto LABEL_671;
          v202 = v201 - 1;
          v203 = v202 & v122;
          v125 = &v120[2 * v203];
          v142 = *v125;
          if ( v121 == *v125 )
            goto LABEL_154;
          v204 = 1;
          v205 = nullptr;
          if ( v142 != -4096 )
          {
            while ( 1 )
            {
              if ( v142 == -8192 && !v205 )
                v205 = v125;
              v203 = v202 & (v204 + v203);
              v125 = &v120[2 * v203];
              v142 = *v125;
              if ( v121 == *v125 )
                goto LABEL_154;
              if ( v142 == -4096 )
              {
                if ( !v205 )
                  break;
                v142 = *v205;
                v125 = v205;
                goto LABEL_154;
              }
              ++v204;
            }
          }
        }
        else
        {
LABEL_169:
          v456.m128i_i32[0] = *(_DWORD *)(v7 + 16);
          v159 = (((((((unsigned int)(2 * v119 - 1) | ((unsigned __int64)(unsigned int)(2 * v119 - 1) >> 1)) >> 2)
                   | (unsigned int)(2 * v119 - 1)
                   | ((unsigned __int64)(unsigned int)(2 * v119 - 1) >> 1)) >> 4)
                 | (((unsigned int)(2 * v119 - 1) | ((unsigned __int64)(unsigned int)(2 * v119 - 1) >> 1)) >> 2)
                 | (unsigned int)(2 * v119 - 1)
                 | ((unsigned __int64)(unsigned int)(2 * v119 - 1) >> 1)) >> 8)
               | (((((unsigned int)(2 * v119 - 1) | ((unsigned __int64)(unsigned int)(2 * v119 - 1) >> 1)) >> 2)
                 | (unsigned int)(2 * v119 - 1)
                 | ((unsigned __int64)(unsigned int)(2 * v119 - 1) >> 1)) >> 4)
               | (((unsigned int)(2 * v119 - 1) | ((unsigned __int64)(unsigned int)(2 * v119 - 1) >> 1)) >> 2)
               | (unsigned int)(2 * v119 - 1)
               | ((unsigned __int64)(unsigned int)(2 * v119 - 1) >> 1);
          v160 = ((v159 >> 16) | v159) + 1;
          if ( (unsigned int)v160 < 0x40 )
            LODWORD(v160) = 64;
          *(_DWORD *)(v7 + 16) = v160;
          v161 = sub_22300B0(16LL * (unsigned int)v160, 8, v119, 64, v117, v118);
          v162 = v456.m128i_u32[0];
          *(_QWORD *)v7 = v161;
          if ( v120 )
          {
            v163 = *(unsigned int *)(v7 + 16);
            *(_QWORD *)(v7 + 8) = 0;
            v164 = 16 * v162;
            v165 = &v120[2 * v162];
            v166 = (_QWORD *)v161;
            v167 = v163;
            v168 = (_QWORD *)(v161 + 16 * v163);
            if ( (_QWORD *)v161 != v168 )
            {
              do
              {
                *v166 = -4096;
                v166 += 2;
              }
              while ( v168 != v166 );
            }
            v169 = v120;
            for ( m = v167 - 1; v165 != v169; v169 += 2 )
            {
              v171 = *v169;
              if ( *v169 != -4096 && v171 != -8192 )
              {
                if ( !v167 )
                {
                  *(_QWORD *)&dword_0 = *v169;
                  BUG();
                }
                v172 = m & (((unsigned int)v171 >> 9) ^ ((unsigned int)v171 >> 4));
                v173 = v161 + 16LL * v172;
                v174 = *(_QWORD *)v173;
                if ( *(_QWORD *)v173 != v171 && v174 != -4096 )
                {
                  LODWORD(v464) = 1;
                  v456.m128i_i64[0] = 0;
                  v465 = v169;
                  while ( 1 )
                  {
                    if ( v174 == -8192 )
                    {
                      if ( v456.m128i_i64[0] )
                        v173 = v456.m128i_i64[0];
                      v456.m128i_i64[0] = v173;
                    }
                    v172 = m & (v464 + v172);
                    v173 = v161 + 16LL * v172;
                    v174 = *(_QWORD *)v173;
                    if ( v171 == *(_QWORD *)v173 )
                    {
                      v169 = v465;
                      goto LABEL_179;
                    }
                    if ( v174 == -4096 )
                      break;
                    LODWORD(v464) = v464 + 1;
                  }
                  v169 = v465;
                  if ( v456.m128i_i64[0] )
                    v173 = v456.m128i_i64[0];
                }
LABEL_179:
                v175 = *((_DWORD *)v169 + 2);
                ++*(_DWORD *)(v7 + 8);
                *(_QWORD *)v173 = v171;
                *(_DWORD *)(v173 + 8) = v175;
              }
            }
            operator delete(v120, v164, 8);
            v120 = *(_QWORD **)v7;
            v176 = *(_DWORD *)(v7 + 16);
            v140 = *(_DWORD *)(v7 + 8) + 1;
          }
          else
          {
            v208 = *(unsigned int *)(v7 + 16);
            *(_QWORD *)(v7 + 8) = 0;
            v176 = v208;
            v120 = (_QWORD *)(v161 + 16 * v208);
            if ( (_QWORD *)v161 != v120 )
            {
              v209 = (_QWORD *)v161;
              do
              {
                *v209 = -4096;
                v209 += 2;
              }
              while ( v120 != v209 );
              v120 = (_QWORD *)v161;
            }
            v140 = 1;
          }
          if ( !v176 )
          {
LABEL_671:
            ++*(_DWORD *)(v7 + 8);
            BUG();
          }
          v177 = v176 - 1;
          v178 = (v176 - 1) & (((unsigned int)v121 >> 9) ^ ((unsigned int)v121 >> 4));
          v125 = &v120[2 * v178];
          v142 = *v125;
          if ( v121 == *v125 )
            goto LABEL_154;
          v179 = 1;
          v180 = nullptr;
          if ( v142 != -4096 )
          {
            while ( 1 )
            {
              if ( !v180 && v142 == -8192 )
                v180 = v125;
              v178 = v177 & (v179 + v178);
              v125 = &v120[2 * v178];
              v142 = *v125;
              if ( v121 == *v125 )
                goto LABEL_154;
              if ( v142 == -4096 )
              {
                if ( !v180 )
                  break;
                v142 = *v180;
                v125 = v180;
                goto LABEL_154;
              }
              ++v179;
            }
          }
        }
        *(_DWORD *)(v7 + 8) = v140;
LABEL_156:
        *v125 = v121;
        *((_DWORD *)v125 + 2) = 0;
        sub_B69CD0(&v476, v125, &v120[2 * *(unsigned int *)(v7 + 16)], v7, 1);
        v143 = *(unsigned int *)(v7 + 32);
        v472 = 0;
        v469 = 0;
        v456.m128i_i64[0] = v476.m128_u64[0];
        v144 = v143 + 1;
        v470 = 0;
        v473 = v461;
        v479 = &ptr;
        v145 = *(unsigned int *)(v7 + 36);
        v471 = 0;
        v474 = 0;
        v476 = (__m128)(unsigned __int64)v121;
        v477 = 0;
        LODWORD(v478) = 0;
        v480 = 0;
        if ( v143 + 1 > v145 )
        {
          v206 = *(_QWORD *)(v7 + 24);
          v207 = v7 + 24;
          if ( v206 > (unsigned __int64)&v476 || (unsigned __int64)&v476 >= v206 + 48 * v143 )
          {
            sub_B6AD60(v207, v144);
            v146 = *(_QWORD *)(v7 + 24);
            v143 = *(unsigned int *)(v7 + 32);
            v147 = &v476;
          }
          else
          {
            sub_B6AD60(v207, v144);
            v146 = *(_QWORD *)(v7 + 24);
            v143 = *(unsigned int *)(v7 + 32);
            v147 = (__m128 *)((char *)&v476 + v146 - v206);
          }
        }
        else
        {
          v146 = *(_QWORD *)(v7 + 24);
          v147 = &v476;
        }
        v148 = 3 * v143;
        v149 = v147->m128_u64[0];
        v150 = v146 + 16 * v148;
        *(_QWORD *)(v150 + 8) = 0;
        *(_QWORD *)v150 = v149;
        v151 = v147->m128_u64[1];
        *(_QWORD *)(v150 + 16) = 0;
        *(_DWORD *)(v150 + 24) = 0;
        *(_QWORD *)(v150 + 8) = v151;
        LODWORD(v151) = v147[1].m128_i32[0];
        v147->m128_u64[1] = 0;
        *(_DWORD *)(v150 + 16) = v151;
        v152 = v147[1].m128_i32[1];
        v147[1].m128_i32[0] = 0;
        LODWORD(v151) = *(_DWORD *)(v150 + 20);
        *(_DWORD *)(v150 + 20) = v152;
        v153 = v147[1].m128_i32[2];
        v147[1].m128_i32[1] = v151;
        LODWORD(v151) = *(_DWORD *)(v150 + 24);
        *(_DWORD *)(v150 + 24) = v153;
        v147[1].m128_i32[2] = v151;
        *(_QWORD *)(v150 + 40) = 0;
        v154 = v147[2].m128_i32[2];
        *(_QWORD *)(v150 + 32) = v150 + 48;
        if ( v154 )
          sub_B6A7F0(v150 + 32, (__int64)&v147[2]);
        v155 = (unsigned int)v480;
        v156 = v479;
        ++*(_DWORD *)(v7 + 32);
        v157 = &v156[15 * v155];
        if ( v156 != v157 )
        {
          do
          {
            while ( 1 )
            {
              v157 -= 15;
              v158 = (void **)v157[1];
              if ( v158 == v157 + 3 )
                break;
              free(v158);
              if ( v156 == v157 )
                goto LABEL_163;
            }
          }
          while ( v156 != v157 );
LABEL_163:
          v157 = v479;
        }
        if ( v157 != &ptr )
          free(v157);
        operator delete(v476.m128_u64[1], 8LL * (unsigned int)v478, 4);
        operator delete(v469, 8LL * v471, 4);
        v127 = (unsigned int)(*(_DWORD *)(v7 + 32) - 1);
        *(_DWORD *)(v456.m128i_i64[0] + 8) = v127;
LABEL_137:
        v128 = *(_QWORD *)(v7 + 24) + 48 * v127;
        v476.m128_u64[0] = v458;
        v476.m128_i32[2] = v459;
        v477 = v460;
        v129 = *(_QWORD *)(v128 + 32);
        for ( n = v129 + 120LL * *(unsigned int *)(v128 + 40); n != v129; v129 += 120 )
        {
          *(_DWORD *)(v129 + 16) = 0;
          if ( *(_DWORD *)(v129 + 20) )
          {
            v131 = *(__m128i **)(v129 + 8);
          }
          else
          {
            sub_2237220(v129 + 8, v129 + 24, 1, 24);
            v131 = (__m128i *)(*(_QWORD *)(v129 + 8) + 24LL * *(unsigned int *)(v129 + 16));
          }
          *v131 = _mm_load_si128((const __m128i *)&v476);
          v131[1].m128i_i64[0] = v477;
          ++*(_DWORD *)(v129 + 16);
        }
        v132 = sub_B98510(v121);
        if ( v132 != v133 )
        {
          v134 = (unsigned int)v482;
          v456.m128i_i64[0] = v133;
          v109 = HIDWORD(v482);
          v135 = (unsigned int)v482 + 1LL;
          v136 = (__m128i)_mm_loadh_ps((const double *)v456.m128i_i64);
          if ( v135 > HIDWORD(v482) )
          {
            v456 = v136;
            sub_2237220(v463, v463 + 2, v135, 16);
            v134 = (unsigned int)v482;
            v136 = _mm_load_si128(&v456);
          }
          *((__m128i *)ptr + v134) = v136;
          LODWORD(v482) = v482 + 1;
        }
        ++v115;
      }
      while ( (_QWORD *)v457 != v115 );
      v114 = v482;
LABEL_147:
      if ( v114 )
      {
        v109 = (__int64)ptr;
        v137 = (char *)ptr + 16 * v114 - 16;
        v112 = (_QWORD *)*v137;
        v457 = v137[1];
        continue;
      }
      break;
    }
    v210 = *(unsigned int *)(v7 + 16);
    v211 = *(_QWORD **)v7;
    if ( (_DWORD)v210 )
    {
      v212 = (unsigned int)(v210 - 1);
      v213 = ((unsigned int)v458 >> 9) ^ ((unsigned int)v458 >> 4);
      v111 = (unsigned int)v212 & v213;
      v214 = &v211[2 * v111];
      v215 = *v214;
      if ( v458 == *v214 )
      {
LABEL_221:
        sub_B69CD0(&v476, v214, &v211[2 * (unsigned int)v210], v7, 1);
        v220 = *(unsigned int *)(v476.m128_u64[0] + 8);
        goto LABEL_222;
      }
      v286 = 1;
      v287 = nullptr;
      if ( v215 == -4096 )
        goto LABEL_318;
      while ( 1 )
      {
        if ( !v287 && v215 == -8192 )
          v287 = v214;
        v110 = (unsigned int)(v286 + 1);
        v111 = (unsigned int)v212 & (v286 + (_DWORD)v111);
        v214 = &v211[2 * (unsigned int)v111];
        v215 = *v214;
        if ( v458 == *v214 )
          goto LABEL_221;
        if ( v215 == -4096 )
          break;
        ++v286;
      }
      if ( !v287 )
LABEL_318:
        v287 = v214;
      v288 = *(_DWORD *)(v7 + 8) + 1;
      v109 = (unsigned int)(3 * v210);
      if ( 4 * v288 < (unsigned int)v109 )
      {
        v289 = (unsigned int)(v210 - *(_DWORD *)(v7 + 12) - v288);
        if ( (unsigned int)v289 > (unsigned int)v210 >> 3 )
        {
          v290 = *v287;
          goto LABEL_322;
        }
        v331 = (((((((((v212 | (v212 >> 1)) >> 2) | v212 | (v212 >> 1)) >> 4)
                  | ((v212 | (v212 >> 1)) >> 2)
                  | v212
                  | (v212 >> 1)) >> 8)
                | ((((v212 | (v212 >> 1)) >> 2) | v212 | (v212 >> 1)) >> 4)
                | ((v212 | (v212 >> 1)) >> 2)
                | v212
                | (v212 >> 1)) >> 16)
              | ((((((v212 | (v212 >> 1)) >> 2) | v212 | (v212 >> 1)) >> 4)
                | ((v212 | (v212 >> 1)) >> 2)
                | v212
                | (v212 >> 1)) >> 8)
              | ((((v212 | (v212 >> 1)) >> 2) | v212 | (v212 >> 1)) >> 4)
              | ((v212 | (v212 >> 1)) >> 2)
              | v212
              | (v212 >> 1))
             + 1;
        if ( v331 < 0x40 )
          v331 = 64;
        *(_DWORD *)(v7 + 16) = v331;
        v332 = sub_22300B0(16LL * v331, 8, 64, v289, v110, v111);
        *(_QWORD *)v7 = v332;
        if ( v211 )
        {
          v333 = *(unsigned int *)(v7 + 16);
          v334 = 2 * v210;
          *(_QWORD *)(v7 + 8) = 0;
          v335 = v333;
          v456.m128i_i64[0] = (__int64)&v211[v334];
          v336 = (_QWORD *)v332;
          v337 = (_QWORD *)(v332 + 16 * v333);
          if ( (_QWORD *)v332 != v337 )
          {
            do
            {
              *v336 = -4096;
              v336 += 2;
            }
            while ( v337 != v336 );
          }
          v338 = v211;
          v339 = v335 - 1;
          do
          {
            v340 = *v338;
            if ( *v338 != -8192 && v340 != -4096 )
            {
              if ( !v335 )
              {
                *(_QWORD *)&dword_0 = *v338;
                BUG();
              }
              v341 = v339 & (((unsigned int)v340 >> 9) ^ ((unsigned int)v340 >> 4));
              v342 = v332 + 16LL * v341;
              v343 = *(_QWORD *)v342;
              if ( *(_QWORD *)v342 != v340 )
              {
                v440 = 1;
                v441 = 0;
                if ( v343 != -4096 )
                {
                  while ( 1 )
                  {
                    if ( !v441 && v343 == -8192 )
                      v441 = v342;
                    v341 = v339 & (v440 + v341);
                    v342 = v332 + 16LL * v341;
                    v343 = *(_QWORD *)v342;
                    if ( v340 == *(_QWORD *)v342 )
                      break;
                    if ( v343 == -4096 )
                    {
                      if ( v441 )
                        v342 = v441;
                      break;
                    }
                    ++v440;
                  }
                }
              }
              v344 = *((_DWORD *)v338 + 2);
              ++*(_DWORD *)(v7 + 8);
              *(_QWORD *)v342 = v340;
              *(_DWORD *)(v342 + 8) = v344;
            }
            v338 += 2;
          }
          while ( (_QWORD *)v456.m128i_i64[0] != v338 );
          operator delete(v211, v334 * 8, 8);
          v211 = *(_QWORD **)v7;
          v345 = *(_DWORD *)(v7 + 16);
          v288 = *(_DWORD *)(v7 + 8) + 1;
        }
        else
        {
          v436 = *(unsigned int *)(v7 + 16);
          *(_QWORD *)(v7 + 8) = 0;
          v345 = v436;
          v211 = (_QWORD *)(v332 + 16 * v436);
          if ( (_QWORD *)v332 != v211 )
          {
            v437 = (_QWORD *)v332;
            do
            {
              *v437 = -4096;
              v437 += 2;
            }
            while ( v211 != v437 );
            v211 = (_QWORD *)v332;
          }
          v288 = 1;
        }
        if ( v345 )
        {
          v346 = v345 - 1;
          v347 = v346 & v213;
          v287 = &v211[2 * (v346 & v213)];
          v290 = *v287;
          if ( v458 == *v287 )
            goto LABEL_322;
          v348 = 1;
          v328 = nullptr;
          if ( v290 != -4096 )
          {
            while ( 1 )
            {
              if ( v290 == -8192 && !v328 )
                v328 = v287;
              v347 = v346 & (v348 + v347);
              v287 = &v211[2 * v347];
              v290 = *v287;
              if ( v458 == *v287 )
                goto LABEL_322;
              if ( v290 == -4096 )
                goto LABEL_380;
              ++v348;
            }
          }
LABEL_355:
          *(_DWORD *)(v7 + 8) = v288;
          goto LABEL_324;
        }
LABEL_664:
        ++*(_DWORD *)(v7 + 8);
        BUG();
      }
    }
    v308 = (((((((unsigned int)(2 * v210 - 1) | ((unsigned __int64)(unsigned int)(2 * v210 - 1) >> 1)) >> 2)
             | (unsigned int)(2 * v210 - 1)
             | ((unsigned __int64)(unsigned int)(2 * v210 - 1) >> 1)) >> 4)
           | (((unsigned int)(2 * v210 - 1) | ((unsigned __int64)(unsigned int)(2 * v210 - 1) >> 1)) >> 2)
           | (unsigned int)(2 * v210 - 1)
           | ((unsigned __int64)(unsigned int)(2 * v210 - 1) >> 1)) >> 8)
         | (((((unsigned int)(2 * v210 - 1) | ((unsigned __int64)(unsigned int)(2 * v210 - 1) >> 1)) >> 2)
           | (unsigned int)(2 * v210 - 1)
           | ((unsigned __int64)(unsigned int)(2 * v210 - 1) >> 1)) >> 4)
         | (((unsigned int)(2 * v210 - 1) | ((unsigned __int64)(unsigned int)(2 * v210 - 1) >> 1)) >> 2)
         | (unsigned int)(2 * v210 - 1)
         | ((unsigned __int64)(unsigned int)(2 * v210 - 1) >> 1);
    v309 = ((v308 >> 16) | v308) + 1;
    if ( (unsigned int)v309 < 0x40 )
      LODWORD(v309) = 64;
    *(_DWORD *)(v7 + 16) = v309;
    v310 = sub_22300B0(16LL * (unsigned int)v309, 8, 64, v109, v110, v111);
    *(_QWORD *)v7 = v310;
    if ( v211 )
    {
      v311 = *(unsigned int *)(v7 + 16);
      v312 = 2 * v210;
      v313 = (_QWORD *)v310;
      *(_QWORD *)(v7 + 8) = 0;
      v314 = &v211[v312];
      v315 = v311;
      v316 = (_QWORD *)(v310 + 16 * v311);
      if ( (_QWORD *)v310 != v316 )
      {
        do
        {
          *v313 = -4096;
          v313 += 2;
        }
        while ( v316 != v313 );
      }
      v317 = v211;
      for ( ii = v315 - 1; v314 != v317; v317 += 2 )
      {
        v319 = *v317;
        if ( *v317 != -4096 && v319 != -8192 )
        {
          if ( !v315 )
          {
            *(_QWORD *)&dword_0 = *v317;
            BUG();
          }
          v320 = ii & (((unsigned int)v319 >> 9) ^ ((unsigned int)v319 >> 4));
          v321 = v310 + 16LL * v320;
          v322 = *(_QWORD *)v321;
          if ( *(_QWORD *)v321 != v319 )
          {
            v438 = 1;
            v439 = 0;
            if ( v322 != -4096 )
            {
              while ( 1 )
              {
                if ( v322 == -8192 && !v439 )
                  v439 = v321;
                v320 = ii & (v438 + v320);
                v321 = v310 + 16LL * v320;
                v322 = *(_QWORD *)v321;
                if ( v319 == *(_QWORD *)v321 )
                  break;
                if ( v322 == -4096 )
                {
                  if ( v439 )
                    v321 = v439;
                  break;
                }
                ++v438;
              }
            }
          }
          v323 = *((_DWORD *)v317 + 2);
          ++*(_DWORD *)(v7 + 8);
          *(_QWORD *)v321 = v319;
          *(_DWORD *)(v321 + 8) = v323;
        }
      }
      operator delete(v211, v312 * 8, 8);
      v211 = *(_QWORD **)v7;
      v324 = *(_DWORD *)(v7 + 16);
      v288 = *(_DWORD *)(v7 + 8) + 1;
    }
    else
    {
      v351 = *(unsigned int *)(v7 + 16);
      *(_QWORD *)(v7 + 8) = 0;
      v324 = v351;
      v211 = (_QWORD *)(v310 + 16 * v351);
      if ( (_QWORD *)v310 != v211 )
      {
        v352 = (_QWORD *)v310;
        do
        {
          *v352 = -4096;
          v352 += 2;
        }
        while ( v211 != v352 );
        v211 = (_QWORD *)v310;
      }
      v288 = 1;
    }
    if ( !v324 )
      goto LABEL_664;
    v325 = v324 - 1;
    v326 = v325 & (((unsigned int)v458 >> 9) ^ ((unsigned int)v458 >> 4));
    v287 = &v211[2 * v326];
    v290 = *v287;
    if ( v458 == *v287 )
      goto LABEL_322;
    v327 = 1;
    v328 = nullptr;
    if ( v290 == -4096 )
      goto LABEL_355;
    while ( 1 )
    {
      if ( !v328 && v290 == -8192 )
        v328 = v287;
      LODWORD(v326) = v325 & (v327 + v326);
      v287 = &v211[2 * (unsigned int)v326];
      v290 = *v287;
      if ( v458 == *v287 )
        break;
      if ( v290 == -4096 )
      {
LABEL_380:
        if ( !v328 )
          goto LABEL_355;
        v290 = *v328;
        v287 = v328;
        break;
      }
      ++v327;
    }
LABEL_322:
    *(_DWORD *)(v7 + 8) = v288;
    if ( v290 != -4096 )
      --*(_DWORD *)(v7 + 12);
LABEL_324:
    v291 = v458;
    *((_DWORD *)v287 + 2) = 0;
    v292 = *(unsigned int *)(v7 + 16);
    *v287 = v291;
    sub_B69CD0(&v476, v287, &v211[2 * v292], v7, 1);
    v293 = *(unsigned int *)(v7 + 32);
    v472 = 0;
    v294 = v476.m128_u64[0];
    v469 = 0;
    v473 = v461;
    v295 = v293 + 1;
    v479 = &ptr;
    v296 = *(unsigned int *)(v7 + 36);
    v470 = 0;
    v471 = 0;
    v474 = 0;
    v476 = (__m128)(unsigned __int64)v291;
    v477 = 0;
    LODWORD(v478) = 0;
    v480 = 0;
    if ( v293 + 1 > v296 )
    {
      v329 = *(_QWORD *)(v7 + 24);
      v330 = v7 + 24;
      if ( v329 > (unsigned __int64)&v476 || (unsigned __int64)&v476 >= v329 + 48 * v293 )
      {
        sub_B6AD60(v330, v295);
        v297 = *(_QWORD *)(v7 + 24);
        v293 = *(unsigned int *)(v7 + 32);
        v298 = &v476;
      }
      else
      {
        sub_B6AD60(v330, v295);
        v297 = *(_QWORD *)(v7 + 24);
        v293 = *(unsigned int *)(v7 + 32);
        v298 = (__m128 *)((char *)&v476 + v297 - v329);
      }
    }
    else
    {
      v297 = *(_QWORD *)(v7 + 24);
      v298 = &v476;
    }
    v299 = 48 * v293 + v297;
    v300 = v298->m128_u64[0];
    *(_QWORD *)(v299 + 8) = 0;
    *(_QWORD *)v299 = v300;
    v301 = v298->m128_u64[1];
    *(_QWORD *)(v299 + 16) = 0;
    *(_DWORD *)(v299 + 24) = 0;
    *(_QWORD *)(v299 + 8) = v301;
    LODWORD(v301) = v298[1].m128_i32[0];
    v298->m128_u64[1] = 0;
    *(_DWORD *)(v299 + 16) = v301;
    v302 = v298[1].m128_i32[1];
    v298[1].m128_i32[0] = 0;
    LODWORD(v301) = *(_DWORD *)(v299 + 20);
    *(_DWORD *)(v299 + 20) = v302;
    v303 = v298[1].m128_i32[2];
    v298[1].m128_i32[1] = v301;
    LODWORD(v301) = *(_DWORD *)(v299 + 24);
    *(_DWORD *)(v299 + 24) = v303;
    v298[1].m128_i32[2] = v301;
    *(_QWORD *)(v299 + 32) = v299 + 48;
    *(_QWORD *)(v299 + 40) = 0;
    if ( v298[2].m128_i32[2] )
      sub_B6A7F0(v299 + 32, (__int64)&v298[2]);
    v304 = (unsigned int)v480;
    v305 = v479;
    ++*(_DWORD *)(v7 + 32);
    v306 = &v305[15 * v304];
    if ( v305 != v306 )
    {
      do
      {
        while ( 1 )
        {
          v306 -= 15;
          v307 = (void **)v306[1];
          if ( v307 == v306 + 3 )
            break;
          free(v307);
          if ( v305 == v306 )
            goto LABEL_331;
        }
      }
      while ( v305 != v306 );
LABEL_331:
      v306 = v479;
    }
    if ( v306 != &ptr )
      free(v306);
    operator delete(v476.m128_u64[1], 8LL * (unsigned int)v478, 4);
    operator delete(v469, 8LL * v471, 4);
    v220 = (unsigned int)(*(_DWORD *)(v7 + 32) - 1);
    *(_DWORD *)(v294 + 8) = v220;
LABEL_222:
    v24 = v459;
    v221 = *(_QWORD *)(v7 + 24) + 48 * v220;
    v476.m128_i32[2] = v459;
    v476.m128_u64[0] = v458;
    v477 = v460;
    sub_B69E70(v221 + 8, v459, v216, v217, v218, v219, v458, v459, v460);
    if ( ptr != v463 + 2 )
      free(ptr);
LABEL_125:
    result = (__m128 *)(p_ptr->m128_u64[1] & 0xFFFFFFFFFFFFFFF8LL);
    p_ptr = result;
    if ( result )
    {
      v105 = result;
      if ( (result[1].m128_i8[12] & 0x7Fu) - 35 > 3 )
      {
        v76 = result;
        do
        {
          result = (__m128 *)(v76->m128_u64[1] & 0xFFFFFFFFFFFFFFF8LL);
          v76 = result;
          if ( !result )
            return result;
        }
        while ( (result[1].m128_i8[12] & 0x7Fu) - 35 > 3 );
        p_ptr = result;
        v105 = result;
      }
      continue;
    }
    return result;
  }
}
