__m128 *__fastcall sub_B47B70(__int64 a1, __int64 a2, char a3, unsigned __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // r14
  __int64 (*v8)(); // rax
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
  __int64 v46; // rbp
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
  __int64 *v102; // r12
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
  __int64 *v164; // rdi
  _QWORD *v165; // rdx
  int v166; // r10d
  _QWORD *v167; // rcx
  __int64 *v168; // rdx
  int m; // r9d
  __int64 v170; // r13
  unsigned int v171; // esi
  __int64 v172; // rcx
  __int64 v173; // r8
  int v174; // esi
  int v175; // esi
  int v176; // edi
  unsigned int v177; // edx
  int v178; // r9d
  __int64 *v179; // r8
  unsigned __int64 v180; // rax
  unsigned __int64 v181; // rax
  __int64 v182; // rax
  _QWORD *v183; // rax
  __int64 v184; // rdx
  _QWORD *v185; // r11
  _QWORD *v186; // rdi
  __int64 v187; // r9
  _QWORD *k; // rdx
  unsigned int v189; // ecx
  _QWORD *v190; // rax
  int v191; // r10d
  __int64 v192; // r13
  unsigned int v193; // ebp
  __int64 v194; // rdx
  unsigned int v195; // esi
  _QWORD *v196; // rcx
  __int64 v197; // r8
  int v198; // edx
  unsigned int v199; // eax
  int v200; // edx
  int v201; // edx
  unsigned int v202; // r13d
  int v203; // r8d
  __int64 *v204; // rdi
  unsigned __int64 v205; // r13
  __int64 v206; // rdi
  __int64 v207; // r12
  _QWORD *v208; // rdx
  __int64 v209; // rbp
  _QWORD *v210; // rbx
  unsigned __int64 v211; // rdx
  unsigned int v212; // r15d
  __int64 *v213; // rsi
  __int64 v214; // rcx
  __int64 v215; // rdx
  unsigned __int64 v216; // rcx
  __int64 v217; // r8
  __int64 v218; // r9
  __int64 v219; // rax
  __int64 v220; // rdi
  __int64 v221; // r12
  void *v222; // rbx
  __int64 v223; // rax
  __int64 v224; // rdx
  __int64 v225; // r8
  __int64 v226; // r9
  _QWORD *v227; // rax
  void *v228; // rsi
  __m128 *v229; // r14
  __int64 v230; // rdx
  _DWORD *v231; // rbx
  __int64 v232; // rsi
  unsigned __int64 v233; // rax
  __int64 v234; // rax
  __m128 *v235; // rsi
  __int64 v236; // rax
  unsigned __int64 v237; // rdx
  unsigned __int64 v238; // rdx
  __int32 v239; // ecx
  __int32 v240; // ecx
  __int32 v241; // r8d
  __int64 v242; // rdx
  __m128 *v243; // r12
  __m128 *v244; // rbp
  unsigned __int16 *v245; // rdi
  unsigned int v246; // eax
  __int64 v247; // rax
  __int64 v248; // rdx
  __int64 v249; // r11
  int v250; // r13d
  _QWORD *v251; // rdx
  _QWORD *v252; // rcx
  _QWORD *v253; // r8
  __int64 v254; // rsi
  unsigned int v255; // ecx
  __int64 v256; // rdx
  __int64 v257; // rdi
  int v258; // ecx
  int v259; // edx
  int v260; // edi
  unsigned int v261; // r12d
  int v262; // edx
  _QWORD *v263; // r8
  unsigned __int64 v264; // rax
  __int64 v265; // rax
  __int64 v266; // rax
  __int64 v267; // rdx
  _QWORD *v268; // rcx
  _QWORD *v269; // r12
  int v270; // r11d
  _QWORD *v271; // rdx
  _QWORD *v272; // r8
  __int64 v273; // rsi
  unsigned int v274; // ecx
  __int64 v275; // rdx
  __int64 v276; // rdi
  int v277; // ecx
  int v278; // edx
  int v279; // r9d
  unsigned int v280; // edi
  int v281; // edx
  unsigned __int64 v282; // rbp
  __int64 v283; // rdi
  int v284; // edi
  __int64 *v285; // rax
  int v286; // esi
  __int64 v287; // rcx
  __int64 v288; // rcx
  __int64 v289; // r15
  __int64 v290; // rdx
  __int64 v291; // rdx
  unsigned __int64 v292; // rbp
  __int64 v293; // rsi
  unsigned __int64 v294; // rax
  __int64 v295; // rax
  __m128 *v296; // rsi
  __int64 v297; // rax
  unsigned __int64 v298; // rdx
  unsigned __int64 v299; // rdx
  __int32 v300; // ecx
  __int32 v301; // ecx
  __int64 v302; // rdx
  void **v303; // r13
  void **v304; // r12
  void **v305; // rdi
  unsigned __int64 v306; // rax
  __int64 v307; // rax
  __int64 v308; // rax
  __int64 v309; // rdx
  _QWORD *v310; // rcx
  _QWORD *v311; // r13
  int v312; // r11d
  _QWORD *v313; // rdx
  _QWORD *v314; // r10
  int ii; // r12d
  __int64 v316; // r15
  unsigned int v317; // ecx
  __int64 v318; // rdx
  __int64 v319; // rsi
  int v320; // ecx
  int v321; // edi
  int v322; // edi
  __int64 v323; // r10
  int v324; // edx
  __int64 *v325; // r8
  unsigned __int64 v326; // r12
  __int64 v327; // rdi
  unsigned int v328; // eax
  __int64 v329; // rax
  __int64 v330; // rdx
  int v331; // r11d
  _QWORD *v332; // rcx
  _QWORD *v333; // rdx
  _QWORD *v334; // r10
  int v335; // r12d
  __int64 v336; // r13
  unsigned int v337; // ecx
  __int64 v338; // rdx
  __int64 v339; // rsi
  int v340; // ecx
  int v341; // edi
  int v342; // edi
  unsigned int v343; // r10d
  int v344; // edx
  __int64 v345; // rbx
  _QWORD *v346; // rcx
  __int64 v347; // rbx
  _QWORD *v348; // rdx
  __int64 v349; // r14
  unsigned __int64 v350; // rax
  __int64 v351; // rax
  __int64 v352; // rax
  __int64 v353; // rdx
  __int64 *v354; // r13
  _QWORD *v355; // rcx
  int v356; // r11d
  _QWORD *v357; // rdx
  __int64 *v358; // r8
  int j; // r14d
  __int64 v360; // r12
  unsigned int v361; // ecx
  _QWORD *v362; // rdx
  __int64 v363; // rdi
  __int64 v364; // rcx
  _QWORD *v365; // rdi
  int v366; // edx
  __int32 v367; // esi
  int v368; // r8d
  __int64 v369; // r9
  __int64 *v370; // rax
  __int64 v371; // rcx
  __int64 v372; // rdi
  __int64 v373; // rdi
  __int64 v374; // rax
  unsigned __int64 v375; // rax
  __int64 v376; // rax
  __int64 v377; // rax
  __int64 v378; // rdx
  _QWORD *v379; // rcx
  __int64 v380; // r13
  int v381; // r12d
  __int64 *v382; // r11
  _QWORD *v383; // rdx
  __int64 *v384; // r8
  __int64 v385; // rcx
  unsigned __int32 v386; // esi
  __int64 v387; // rdx
  __int64 v388; // rdi
  int v389; // ecx
  __int64 *v390; // rdi
  int v391; // ecx
  int v392; // edx
  __int64 *v393; // rax
  int v394; // ecx
  __int64 *v395; // r10
  __int64 v396; // rbx
  _QWORD *v397; // rcx
  int v398; // r10d
  __int64 v399; // r9
  int v400; // r10d
  __int64 v401; // r9
  __int64 v402; // rcx
  unsigned __int64 v403; // rax
  __int64 v404; // rax
  __int64 v405; // rdx
  __int64 v406; // r13
  int v407; // r12d
  _QWORD *v408; // rdx
  _QWORD *v409; // rcx
  __int64 *v410; // r8
  int v411; // r11d
  __int64 v412; // rcx
  unsigned int v413; // esi
  __int64 v414; // rdx
  __int64 v415; // rdi
  int v416; // ecx
  __int64 *v417; // rdi
  int v418; // ecx
  unsigned int v419; // r11d
  int v420; // ecx
  int v421; // r10d
  __int64 v422; // r9
  __int64 v423; // rdi
  __int64 *v424; // rdx
  int v425; // edx
  __int64 *v426; // r10
  __int64 v427; // rdi
  _QWORD *v428; // rcx
  __int32 v429; // r10d
  _QWORD *v430; // r9
  __int64 v431; // rbx
  _QWORD *v432; // rdx
  int v433; // r8d
  __int64 v434; // rdi
  int v435; // r8d
  __int64 v436; // rdi
  int v437; // ecx
  __int64 v438; // rdx
  __int64 v439; // rcx
  __int64 v440; // rdi
  __int64 *v441; // rdx
  int v442; // r10d
  __int64 v443; // r9
  int v444; // edi
  int v445; // edi
  __int64 v446; // r8
  unsigned int v447; // r13d
  int v448; // edx
  __int64 *v449; // r9
  __int64 v450; // [rsp-10h] [rbp-168h]
  __m128i v451; // [rsp+0h] [rbp-158h] BYREF
  __int64 v452; // [rsp+10h] [rbp-148h] BYREF
  __int64 v453; // [rsp+18h] [rbp-140h]
  unsigned __int32 v454; // [rsp+24h] [rbp-134h]
  unsigned __int64 v455; // [rsp+28h] [rbp-130h]
  char *v456; // [rsp+30h] [rbp-128h]
  __m128 *p_ptr; // [rsp+38h] [rbp-120h]
  void **v458; // [rsp+40h] [rbp-118h]
  unsigned __int64 v459; // [rsp+48h] [rbp-110h]
  __int64 *v460; // [rsp+50h] [rbp-108h]
  __int64 v461; // [rsp+58h] [rbp-100h]
  _QWORD *v462; // [rsp+60h] [rbp-F8h]
  __int64 *v463; // [rsp+68h] [rbp-F0h]
  __int64 v464; // [rsp+70h] [rbp-E8h] BYREF
  __int64 v465; // [rsp+78h] [rbp-E0h]
  unsigned int v466; // [rsp+80h] [rbp-D8h]
  int v467; // [rsp+84h] [rbp-D4h]
  char *v468; // [rsp+88h] [rbp-D0h]
  __int64 v469; // [rsp+90h] [rbp-C8h]
  char v470; // [rsp+98h] [rbp-C0h] BYREF
  __m128 v471; // [rsp+A0h] [rbp-B8h] BYREF
  unsigned __int64 v472; // [rsp+B0h] [rbp-A8h]
  __int64 *v473; // [rsp+B8h] [rbp-A0h]
  void **v474; // [rsp+C0h] [rbp-98h]
  __int64 v475; // [rsp+C8h] [rbp-90h] BYREF
  void *ptr; // [rsp+D0h] [rbp-88h] BYREF
  __int64 v477; // [rsp+D8h] [rbp-80h]
  __m128 v478; // [rsp+E0h] [rbp-78h] BYREF
  __m128 *v479; // [rsp+F0h] [rbp-68h]
  __int64 v480; // [rsp+F8h] [rbp-60h]

  v7 = a5;
  v456 = (char *)a2;
  v455 = a4;
  if ( a3 )
  {
    v454 = 0;
    goto LABEL_8;
  }
  v8 = *(__int64 (**)())(*(_QWORD *)a2 + 32LL);
  if ( v8 == sub_9DD400 )
  {
    v9 = sub_B4CD20(a2);
    v11 = *(unsigned int *)(a1 + 16);
    v12 = *(__int64 **)a1;
    v13 = v9;
    if ( !(_DWORD)v11 )
      goto LABEL_412;
  }
  else
  {
    v374 = ((__int64 (__fastcall *)(__int64))v8)(a2);
    v11 = *(unsigned int *)(a1 + 16);
    v12 = *(__int64 **)a1;
    v13 = v374;
    if ( !(_DWORD)v11 )
      goto LABEL_412;
  }
  a5 = (unsigned int)(v11 - 1);
  v451.m128i_i32[0] = ((unsigned int)v13 >> 9) ^ ((unsigned int)v13 >> 4);
  a6 = (unsigned int)a5 & v451.m128i_i32[0];
  v14 = &v12[2 * a6];
  v15 = *v14;
  if ( v13 != *v14 )
  {
    a2 = 1;
    v393 = nullptr;
    if ( v15 == -4096 )
      goto LABEL_489;
    while ( 1 )
    {
      if ( v15 == -8192 && !v393 )
        v393 = v14;
      a6 = (unsigned int)a5 & ((_DWORD)a2 + (_DWORD)a6);
      v14 = &v12[2 * (unsigned int)a6];
      v15 = *v14;
      if ( v13 == *v14 )
        goto LABEL_5;
      if ( v15 == -4096 )
        break;
      a2 = (unsigned int)(a2 + 1);
    }
    if ( !v393 )
LABEL_489:
      v393 = v14;
    v392 = *(_DWORD *)(a1 + 8) + 1;
    v10 = (unsigned int)(3 * v11);
    if ( 4 * v392 < (unsigned int)v10 )
    {
      v402 = (unsigned int)(v11 - *(_DWORD *)(a1 + 12) - v392);
      if ( (unsigned int)v402 > (unsigned int)v11 >> 3 )
      {
        a2 = *v393;
        goto LABEL_493;
      }
      v403 = ((((((((((unsigned int)a5 | ((unsigned __int64)(unsigned int)a5 >> 1)) >> 2)
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
      if ( (unsigned int)v403 < 0x40 )
        LODWORD(v403) = 64;
      *(_DWORD *)(a1 + 16) = v403;
      v404 = sub_220C370(16LL * (unsigned int)v403, 8, 64, v402, a5, a6);
      *(_QWORD *)a1 = v404;
      if ( v12 )
      {
        v405 = *(unsigned int *)(a1 + 16);
        *(_QWORD *)(a1 + 8) = 0;
        v406 = 2 * v11;
        v407 = v405;
        v408 = (_QWORD *)(v404 + 16 * v405);
        v452 = (__int64)&v12[v406];
        v409 = (_QWORD *)v404;
        if ( (_QWORD *)v404 != v408 )
        {
          do
          {
            *v409 = -4096;
            v409 += 2;
          }
          while ( v408 != v409 );
        }
        v410 = v12;
        v411 = v407 - 1;
        do
        {
          v412 = *v410;
          if ( *v410 != -8192 && v412 != -4096 )
          {
            if ( !v407 )
            {
              *(_QWORD *)&dword_0 = *v410;
              BUG();
            }
            v413 = v411 & (((unsigned int)v412 >> 9) ^ ((unsigned int)v412 >> 4));
            v414 = v404 + 16LL * v413;
            v415 = *(_QWORD *)v414;
            if ( v412 != *(_QWORD *)v414 )
            {
              v421 = 1;
              v422 = 0;
              if ( v415 != -4096 )
              {
                while ( 1 )
                {
                  if ( v415 == -8192 && !v422 )
                    v422 = v414;
                  v413 = v411 & (v421 + v413);
                  LODWORD(v453) = v421 + 1;
                  v414 = v404 + 16LL * v413;
                  v415 = *(_QWORD *)v414;
                  if ( v412 == *(_QWORD *)v414 )
                    break;
                  if ( v415 == -4096 )
                  {
                    if ( v422 )
                      v414 = v422;
                    break;
                  }
                  v421 = v453;
                }
              }
            }
            *(_QWORD *)v414 = v412;
            v416 = *((_DWORD *)v410 + 2);
            ++*(_DWORD *)(a1 + 8);
            *(_DWORD *)(v414 + 8) = v416;
          }
          v410 += 2;
        }
        while ( (__int64 *)v452 != v410 );
        operator delete();
        v417 = *(__int64 **)a1;
        v418 = *(_DWORD *)(a1 + 16);
        v392 = *(_DWORD *)(a1 + 8) + 1;
      }
      else
      {
        v423 = *(unsigned int *)(a1 + 16);
        *(_QWORD *)(a1 + 8) = 0;
        v418 = v423;
        v417 = (__int64 *)(v404 + 16 * v423);
        if ( (__int64 *)v404 != v417 )
        {
          v424 = (__int64 *)v404;
          do
          {
            *v424 = -4096;
            v424 += 2;
          }
          while ( v417 != v424 );
          v417 = (__int64 *)v404;
        }
        v392 = 1;
      }
      if ( v418 )
      {
        a5 = (unsigned int)(v418 - 1);
        v419 = a5 & v451.m128i_i32[0];
        v393 = &v417[2 * ((unsigned int)a5 & v451.m128i_i32[0])];
        a2 = *v393;
        if ( v13 == *v393 )
        {
LABEL_493:
          *(_DWORD *)(a1 + 8) = v392;
          if ( a2 != -4096 )
            --*(_DWORD *)(a1 + 12);
          goto LABEL_495;
        }
        v420 = 1;
        a6 = 0;
        if ( a2 != -4096 )
        {
          while ( 1 )
          {
            if ( !a6 && a2 == -8192 )
              a6 = (__int64)v393;
            v419 = a5 & (v420 + v419);
            v393 = &v417[2 * v419];
            a2 = *v393;
            if ( v13 == *v393 )
              goto LABEL_493;
            if ( a2 == -4096 )
            {
              if ( !a6 )
                break;
              a2 = *(_QWORD *)a6;
              v393 = (__int64 *)a6;
              goto LABEL_493;
            }
            ++v420;
          }
        }
LABEL_512:
        *(_DWORD *)(a1 + 8) = v392;
LABEL_495:
        *v393 = v13;
        v16 = (unsigned __int32 *)(v393 + 1);
        *v16 = 0;
        v454 = 1;
        goto LABEL_6;
      }
      goto LABEL_670;
    }
LABEL_412:
    v375 = (((((((unsigned int)(2 * v11 - 1) | ((unsigned __int64)(unsigned int)(2 * v11 - 1) >> 1)) >> 2)
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
    v376 = ((v375 >> 16) | v375) + 1;
    if ( (unsigned int)v376 < 0x40 )
      LODWORD(v376) = 64;
    *(_DWORD *)(a1 + 16) = v376;
    v377 = sub_220C370(16LL * (unsigned int)v376, 8, 64, v10, a5, a6);
    *(_QWORD *)a1 = v377;
    if ( v12 )
    {
      v378 = *(unsigned int *)(a1 + 16);
      v379 = (_QWORD *)v377;
      v380 = 2 * v11;
      *(_QWORD *)(a1 + 8) = 0;
      v381 = v378;
      v382 = &v12[v380];
      v383 = (_QWORD *)(v377 + 16 * v378);
      if ( (_QWORD *)v377 != v383 )
      {
        do
        {
          *v379 = -4096;
          v379 += 2;
        }
        while ( v383 != v379 );
      }
      v384 = v12;
      for ( v451.m128i_i32[0] = v381 - 1; v382 != v384; v384 += 2 )
      {
        v385 = *v384;
        if ( *v384 != -8192 && v385 != -4096 )
        {
          if ( !v381 )
          {
            *(_QWORD *)&dword_0 = *v384;
            BUG();
          }
          v386 = v451.m128i_i32[0] & (((unsigned int)v385 >> 9) ^ ((unsigned int)v385 >> 4));
          v387 = v377 + 16LL * v386;
          v388 = *(_QWORD *)v387;
          if ( v385 != *(_QWORD *)v387 )
          {
            v442 = 1;
            v443 = 0;
            if ( v388 != -4096 )
            {
              while ( 1 )
              {
                if ( v388 == -8192 && !v443 )
                  v443 = v387;
                v386 = v451.m128i_i32[0] & (v442 + v386);
                LODWORD(v452) = v442 + 1;
                v387 = v377 + 16LL * v386;
                v388 = *(_QWORD *)v387;
                if ( v385 == *(_QWORD *)v387 )
                  break;
                if ( v388 == -4096 )
                {
                  if ( v443 )
                    v387 = v443;
                  break;
                }
                v442 = v452;
              }
            }
          }
          *(_QWORD *)v387 = v385;
          v389 = *((_DWORD *)v384 + 2);
          ++*(_DWORD *)(a1 + 8);
          *(_DWORD *)(v387 + 8) = v389;
        }
      }
      operator delete();
      v390 = *(__int64 **)a1;
      v391 = *(_DWORD *)(a1 + 16);
      v392 = *(_DWORD *)(a1 + 8) + 1;
    }
    else
    {
      v440 = *(unsigned int *)(a1 + 16);
      *(_QWORD *)(a1 + 8) = 0;
      v391 = v440;
      v390 = (__int64 *)(v377 + 16 * v440);
      if ( (__int64 *)v377 != v390 )
      {
        v441 = (__int64 *)v377;
        do
        {
          *v441 = -4096;
          v441 += 2;
        }
        while ( v390 != v441 );
        v390 = (__int64 *)v377;
      }
      v392 = 1;
    }
    if ( v391 )
    {
      a5 = (unsigned int)(v391 - 1);
      a6 = (unsigned int)a5 & (((unsigned int)v13 >> 9) ^ ((unsigned int)v13 >> 4));
      v393 = &v390[2 * a6];
      a2 = *v393;
      if ( v13 == *v393 )
        goto LABEL_493;
      v394 = 1;
      v395 = nullptr;
      if ( a2 != -4096 )
      {
        while ( 1 )
        {
          if ( a2 == -8192 && !v395 )
            v395 = v393;
          a6 = (unsigned int)a5 & (v394 + (_DWORD)a6);
          v393 = &v390[2 * (unsigned int)a6];
          a2 = *v393;
          if ( v13 == *v393 )
            goto LABEL_493;
          if ( a2 == -4096 )
          {
            if ( !v395 )
              goto LABEL_512;
            a2 = *v395;
            v393 = v395;
            goto LABEL_493;
          }
          ++v394;
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
  v454 = *((_DWORD *)v14 + 2) + 1;
LABEL_6:
  *v16 = v454;
LABEL_8:
  v17 = *((_QWORD *)v456 + 13);
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
          v80 = sub_962430((__int64)(v20 + 294), 24, 24, 3, a5, a6);
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
  v21 = *((_QWORD *)v456 + 16);
  if ( (*(_BYTE *)(v21 + 24) & 1) != 0 )
    v22 = sub_B72C40(v21, a2, v18);
  else
    v22 = *(_QWORD *)(v21 + 24);
  v23 = *((_QWORD *)v456 + 13);
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
        v28 = *((_QWORD *)v456 + 16);
        v29 = 3LL * *(unsigned int *)(v28 + 16);
        v30 = v22 + 24LL * *(unsigned int *)(v28 + 16);
        v459 = v30;
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
          v87 = sub_962430((__int64)(v27 + 294), 24, 24, 3, a5, a6);
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
  v28 = *((_QWORD *)v456 + 16);
  v23 = *((_QWORD *)v456 + 13);
  v30 = *(_QWORD *)(v23 + 96);
  v24 = v30;
  v29 = v30 & 0xFFFFFFFFFFFFFFFELL;
  v459 = v22 + 24LL * *(unsigned int *)(v28 + 16);
  if ( (v30 & 1) != 0 || (v27 = (_QWORD *)(v30 & 0xFFFFFFFFFFFFFFFCLL), (v30 & 0xFFFFFFFFFFFFFFFCLL) == 0) )
  {
    if ( !v29 )
    {
LABEL_24:
      v28 = *((_QWORD *)v456 + 16);
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
        v34 = sub_962430((__int64)(v27 + 294), 24, 24, 3, a5, a6);
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
    v453 = sub_B72C40(v28, v24, v29);
  else
    v453 = *(_QWORD *)(v28 + 24);
  if ( v453 == v459 )
    goto LABEL_68;
  v452 = a1;
  v35 = v7;
  v460 = &v464;
  v463 = &v475;
  do
  {
    v36 = *(_QWORD *)(**(_QWORD **)(v453 + 16) & 0xFFFFFFFFFFFFFFF0LL);
    if ( (*(_BYTE *)(v36 + 8) & 0xF) != 0 )
      v36 = sub_F411C0(**(_QWORD **)(v453 + 16));
    v37 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(v36 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(*v37 + 16LL) == 48 )
    {
      v38 = sub_F3D1D0(*v37, v24, v29, v30, a5);
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
          if ( !(_DWORD)v45 && (*(_BYTE *)(v453 + 12) & 1) == 0 )
          {
            v24 = v41;
            sub_B47B70(v452, v41, 0, v455, v35);
            goto LABEL_66;
          }
          v464 = 0;
          v465 = 0;
          v466 = 0;
          v468 = (char *)(v460 + 5);
          v469 = 0;
          if ( (*(_BYTE *)(v453 + 12) & 1) == 0 )
          {
            v46 = (__int64)v460;
            sub_B47B70(v452, v41, 0, v455, v460);
LABEL_44:
            v47 = 3LL * *(unsigned int *)(v46 + 32);
            v451.m128i_i64[0] = *(_QWORD *)(v46 + 24);
            v458 = (void **)(v451.m128i_i64[0] + 16 * v47);
            if ( v458 != (void **)v451.m128i_i64[0] )
              goto LABEL_45;
LABEL_54:
            v70 = (__int64 *)v468;
            v71 = (__int64 *)&v468[48 * (unsigned int)v469];
            if ( v468 != (char *)v71 )
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
                operator delete();
              }
              while ( v70 != v71 );
              v71 = (__int64 *)v468;
            }
            goto LABEL_63;
          }
          v97 = *(_DWORD *)(v452 + 40);
          v98 = *(__int64 **)(v452 + 24);
          if ( !v97 )
            goto LABEL_392;
          v45 = (v97 - 1) & (((unsigned int)v41 >> 9) ^ ((unsigned int)v41 >> 4));
          v99 = &v98[2 * v45];
          v100 = *v99;
          if ( v41 == *v99 )
          {
LABEL_112:
            v101 = v99[1];
            v102 = v99 + 1;
            if ( v101 )
            {
              v103 = *(_QWORD *)(v101 + 24);
              v104 = 3LL * *(unsigned int *)(v101 + 32);
              v451.m128i_i64[0] = v103;
              v458 = (void **)(v103 + 16 * v104);
              if ( v458 == (void **)v103 )
              {
                v71 = (__int64 *)&v468[48 * (unsigned int)v469];
LABEL_63:
                if ( v71 != v460 + 5 )
                  free(v71);
                v24 = 16LL * v466;
                operator delete();
                goto LABEL_66;
              }
LABEL_45:
              p_ptr = (__m128 *)&ptr;
              while ( 1 )
              {
                v48 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v451.m128i_i64[0] + 32LL))(*(_QWORD *)v451.m128i_i64[0]);
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
                sub_B45F90(p_ptr, v58, &v53[2 * (unsigned int)v52], v35, 1);
                v63 = *((unsigned int *)ptr + 2);
LABEL_49:
                v64 = *(unsigned int *)(v451.m128i_i64[0] + 40);
                v65 = *(_QWORD *)(v451.m128i_i64[0] + 32);
                v66 = *(_QWORD *)(v35 + 24) + 48 * v63 + 8;
                for ( i = v65 + 120 * v64; i != v65; v65 += 120 )
                {
                  v68 = *(_QWORD *)(v65 + 8);
                  v69 = v68 + 24LL * *(unsigned int *)(v65 + 16);
                  while ( v69 != v68 )
                  {
                    v450 = *(_QWORD *)(v68 + 16);
                    v68 += 24;
                    sub_B46130(
                      v66,
                      *(_DWORD *)v65,
                      v64,
                      v60,
                      v61,
                      v62,
                      *(_QWORD *)(v68 - 24),
                      *(_QWORD *)(v68 - 16),
                      v450);
                  }
                }
                v451.m128i_i64[0] += 48;
                if ( (void **)v451.m128i_i64[0] == v458 )
                  goto LABEL_54;
              }
              v50 = 1;
              v227 = nullptr;
              if ( v59 == (void *)-4096LL )
                goto LABEL_255;
              while ( 1 )
              {
                if ( v59 == (void *)-8192LL && !v227 )
                  v227 = v58;
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
              if ( !v227 )
LABEL_255:
                v227 = v58;
              v49 = (unsigned int)(*(_DWORD *)(v35 + 8) + 1);
              if ( 4 * (int)v49 >= (unsigned int)(3 * v52) )
              {
LABEL_291:
                v264 = (((((((unsigned int)(2 * v52 - 1) | ((unsigned __int64)(unsigned int)(2 * v52 - 1) >> 1)) >> 2)
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
                v265 = ((v264 >> 16) | v264) + 1;
                if ( (unsigned int)v265 < 0x40 )
                  LODWORD(v265) = 64;
                *(_DWORD *)(v35 + 16) = v265;
                v266 = sub_220C370(16LL * (unsigned int)v265, 8, 64, v49, v50, v51);
                *(_QWORD *)v35 = v266;
                if ( v53 )
                {
                  v267 = *(unsigned int *)(v35 + 16);
                  *(_QWORD *)(v35 + 8) = 0;
                  v268 = (_QWORD *)v266;
                  v269 = &v53[2 * v52];
                  v270 = v267;
                  v271 = (_QWORD *)(v266 + 16 * v267);
                  if ( (_QWORD *)v266 != v271 )
                  {
                    do
                    {
                      *v268 = -4096;
                      v268 += 2;
                    }
                    while ( v271 != v268 );
                  }
                  v272 = v53;
                  for ( LODWORD(v461) = v270 - 1; v269 != v272; v272 += 2 )
                  {
                    v273 = *v272;
                    if ( *v272 != -4096 && v273 != -8192 )
                    {
                      if ( !v270 )
                      {
                        *(_QWORD *)&dword_0 = *v272;
                        BUG();
                      }
                      v274 = v461 & (((unsigned int)v273 >> 9) ^ ((unsigned int)v273 >> 4));
                      v275 = v266 + 16LL * v274;
                      v276 = *(_QWORD *)v275;
                      if ( *(_QWORD *)v275 != v273 )
                      {
                        v400 = 1;
                        v401 = 0;
                        if ( v276 != -4096 )
                        {
                          while ( 1 )
                          {
                            if ( !v401 && v276 == -8192 )
                              v401 = v275;
                            v274 = v461 & (v400 + v274);
                            v275 = v266 + 16LL * v274;
                            v276 = *(_QWORD *)v275;
                            if ( v273 == *(_QWORD *)v275 )
                              break;
                            if ( v276 == -4096 )
                            {
                              if ( v401 )
                                v275 = v401;
                              break;
                            }
                            ++v400;
                          }
                        }
                      }
                      v277 = *((_DWORD *)v272 + 2);
                      ++*(_DWORD *)(v35 + 8);
                      *(_QWORD *)v275 = v273;
                      *(_DWORD *)(v275 + 8) = v277;
                    }
                  }
                  operator delete();
                  v53 = *(_QWORD **)v35;
                  v278 = *(_DWORD *)(v35 + 16);
                  LODWORD(v49) = *(_DWORD *)(v35 + 8) + 1;
                }
                else
                {
                  v345 = *(unsigned int *)(v35 + 16);
                  *(_QWORD *)(v35 + 8) = 0;
                  v278 = v345;
                  v53 = (_QWORD *)(v266 + 16 * v345);
                  if ( (_QWORD *)v266 != v53 )
                  {
                    v346 = (_QWORD *)v266;
                    do
                    {
                      *v346 = -4096;
                      v346 += 2;
                    }
                    while ( v53 != v346 );
                    v53 = (_QWORD *)v266;
                  }
                  LODWORD(v49) = 1;
                }
                if ( !v278 )
                {
LABEL_672:
                  ++*(_DWORD *)(v35 + 8);
                  BUG();
                }
                v279 = v278 - 1;
                v280 = (v278 - 1) & (((unsigned int)v54 >> 9) ^ ((unsigned int)v54 >> 4));
                v227 = &v53[2 * v280];
                v228 = (void *)*v227;
                if ( v54 == (void *)*v227 )
                  goto LABEL_259;
                v281 = 1;
                v263 = nullptr;
                if ( v228 != (void *)-4096LL )
                {
                  while ( 1 )
                  {
                    if ( !v263 && v228 == (void *)-8192LL )
                      v263 = v227;
                    v280 = v279 & (v281 + v280);
                    v227 = &v53[2 * v280];
                    v228 = (void *)*v227;
                    if ( v54 == (void *)*v227 )
                      goto LABEL_259;
                    if ( v228 == (void *)-4096LL )
                    {
LABEL_485:
                      if ( !v263 )
                        break;
                      v228 = (void *)*v263;
                      v227 = v263;
                      goto LABEL_259;
                    }
                    ++v281;
                  }
                }
              }
              else
              {
                if ( (int)v52 - *(_DWORD *)(v35 + 12) - (int)v49 > (unsigned int)v52 >> 3 )
                {
                  v228 = (void *)*v227;
LABEL_259:
                  *(_DWORD *)(v35 + 8) = v49;
                  if ( v228 != (void *)-4096LL )
                    --*(_DWORD *)(v35 + 12);
                  goto LABEL_261;
                }
                v246 = (((((((((v55 | (v55 >> 1)) >> 2) | v55 | (v55 >> 1)) >> 4)
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
                if ( v246 < 0x40 )
                  v246 = 64;
                *(_DWORD *)(v35 + 16) = v246;
                v247 = sub_220C370(16LL * v246, 8, 64, v49, v50, v51);
                *(_QWORD *)v35 = v247;
                if ( v53 )
                {
                  v248 = *(unsigned int *)(v35 + 16);
                  *(_QWORD *)(v35 + 8) = 0;
                  v249 = 2 * v52;
                  v250 = v248;
                  v251 = (_QWORD *)(v247 + 16 * v248);
                  v462 = &v53[v249];
                  v252 = (_QWORD *)v247;
                  if ( (_QWORD *)v247 != v251 )
                  {
                    do
                    {
                      *v252 = -4096;
                      v252 += 2;
                    }
                    while ( v251 != v252 );
                  }
                  v253 = v53;
                  LODWORD(v461) = v250 - 1;
                  do
                  {
                    v254 = *v253;
                    if ( *v253 != -4096 && v254 != -8192 )
                    {
                      if ( !v250 )
                      {
                        *(_QWORD *)&dword_0 = *v253;
                        BUG();
                      }
                      v255 = v461 & (((unsigned int)v254 >> 9) ^ ((unsigned int)v254 >> 4));
                      v256 = v247 + 16LL * v255;
                      v257 = *(_QWORD *)v256;
                      if ( v254 != *(_QWORD *)v256 )
                      {
                        v398 = 1;
                        v399 = 0;
                        if ( v257 != -4096 )
                        {
                          while ( 1 )
                          {
                            if ( !v399 && v257 == -8192 )
                              v399 = v256;
                            v255 = v461 & (v398 + v255);
                            v256 = v247 + 16LL * v255;
                            v257 = *(_QWORD *)v256;
                            if ( v254 == *(_QWORD *)v256 )
                              break;
                            if ( v257 == -4096 )
                            {
                              if ( v399 )
                                v256 = v399;
                              break;
                            }
                            ++v398;
                          }
                        }
                      }
                      v258 = *((_DWORD *)v253 + 2);
                      ++*(_DWORD *)(v35 + 8);
                      *(_QWORD *)v256 = v254;
                      *(_DWORD *)(v256 + 8) = v258;
                    }
                    v253 += 2;
                  }
                  while ( v462 != v253 );
                  operator delete();
                  v53 = *(_QWORD **)v35;
                  v259 = *(_DWORD *)(v35 + 16);
                  LODWORD(v49) = *(_DWORD *)(v35 + 8) + 1;
                }
                else
                {
                  v396 = *(unsigned int *)(v35 + 16);
                  *(_QWORD *)(v35 + 8) = 0;
                  v259 = v396;
                  v53 = (_QWORD *)(v247 + 16 * v396);
                  if ( (_QWORD *)v247 != v53 )
                  {
                    v397 = (_QWORD *)v247;
                    do
                    {
                      *v397 = -4096;
                      v397 += 2;
                    }
                    while ( v53 != v397 );
                    v53 = (_QWORD *)v247;
                  }
                  LODWORD(v49) = 1;
                }
                if ( !v259 )
                  goto LABEL_672;
                v260 = v259 - 1;
                v261 = (v259 - 1) & v56;
                v227 = &v53[2 * v261];
                v228 = (void *)*v227;
                if ( v54 == (void *)*v227 )
                  goto LABEL_259;
                v262 = 1;
                v263 = nullptr;
                if ( v228 != (void *)-4096LL )
                {
                  while ( 1 )
                  {
                    if ( v228 == (void *)-8192LL && !v263 )
                      v263 = v227;
                    v261 = v260 & (v262 + v261);
                    v227 = &v53[2 * v261];
                    v228 = (void *)*v227;
                    if ( v54 == (void *)*v227 )
                      goto LABEL_259;
                    if ( v228 == (void *)-4096LL )
                      goto LABEL_485;
                    ++v262;
                  }
                }
              }
              *(_DWORD *)(v35 + 8) = v49;
LABEL_261:
              v229 = p_ptr;
              *v227 = v54;
              *((_DWORD *)v227 + 2) = 0;
              sub_B45F90(v229, v227, &v53[2 * *(unsigned int *)(v35 + 16)], v35, 1);
              v230 = *(unsigned int *)(v35 + 32);
              v231 = ptr;
              v471 = 0u;
              v473 = v463;
              v232 = v230 + 1;
              v479 = v229 + 3;
              v233 = *(unsigned int *)(v35 + 36);
              v472 = 0;
              v474 = nullptr;
              ptr = v54;
              v477 = 0;
              v478.m128_u64[0] = 0;
              v478.m128_i32[2] = 0;
              v480 = 0;
              if ( v230 + 1 > v233 )
              {
                v282 = *(_QWORD *)(v35 + 24);
                v283 = v35 + 24;
                if ( v282 > (unsigned __int64)p_ptr || (unsigned __int64)p_ptr >= v282 + 48 * v230 )
                {
                  sub_B47020(v283, v232);
                  v234 = *(_QWORD *)(v35 + 24);
                  v230 = *(unsigned int *)(v35 + 32);
                  v235 = p_ptr;
                }
                else
                {
                  sub_B47020(v283, v232);
                  v234 = *(_QWORD *)(v35 + 24);
                  v230 = *(unsigned int *)(v35 + 32);
                  v235 = (__m128 *)((char *)p_ptr + v234 - v282);
                }
              }
              else
              {
                v234 = *(_QWORD *)(v35 + 24);
                v235 = v229;
              }
              v236 = 48 * v230 + v234;
              v237 = v235->m128_u64[0];
              *(_QWORD *)(v236 + 8) = 0;
              *(_QWORD *)v236 = v237;
              v238 = v235->m128_u64[1];
              *(_QWORD *)(v236 + 16) = 0;
              *(_DWORD *)(v236 + 24) = 0;
              *(_QWORD *)(v236 + 8) = v238;
              LODWORD(v238) = v235[1].m128_i32[0];
              v235->m128_u64[1] = 0;
              *(_DWORD *)(v236 + 16) = v238;
              v239 = v235[1].m128_i32[1];
              v235[1].m128_i32[0] = 0;
              LODWORD(v238) = *(_DWORD *)(v236 + 20);
              *(_DWORD *)(v236 + 20) = v239;
              v240 = v235[1].m128_i32[2];
              v235[1].m128_i32[1] = v238;
              LODWORD(v238) = *(_DWORD *)(v236 + 24);
              *(_DWORD *)(v236 + 24) = v240;
              v235[1].m128_i32[2] = v238;
              *(_QWORD *)(v236 + 40) = 0;
              v241 = v235[2].m128_i32[2];
              *(_QWORD *)(v236 + 32) = v236 + 48;
              if ( v241 )
                sub_B46AB0(v236 + 32, (__int64)&v235[2]);
              v242 = (unsigned int)v480;
              v243 = v479;
              ++*(_DWORD *)(v35 + 32);
              v244 = (__m128 *)((char *)v243 + 120 * v242);
              if ( v243 != v244 )
              {
                do
                {
                  while ( 1 )
                  {
                    v244 = (__m128 *)((char *)v244 - 120);
                    v245 = (unsigned __int16 *)v244->m128_u64[1];
                    if ( v245 == &v244[1].m128_u16[4] )
                      break;
                    free(v245);
                    if ( v243 == v244 )
                      goto LABEL_268;
                  }
                }
                while ( v243 != v244 );
LABEL_268:
                v244 = v479;
              }
              if ( v244 != &p_ptr[3] )
                free(v244);
              operator delete();
              operator delete();
              v63 = (unsigned int)(*(_DWORD *)(v35 + 32) - 1);
              v231[2] = v63;
              goto LABEL_49;
            }
LABEL_410:
            v373 = v452;
            v46 = operator new(0x28u);
            *(_QWORD *)v46 = 0;
            *(_QWORD *)(v46 + 8) = 0;
            *(_DWORD *)(v46 + 16) = 0;
            *(_QWORD *)(v46 + 24) = v46 + 40;
            *(_QWORD *)(v46 + 32) = 0;
            *v102 = v46;
            sub_B47B70(v373, v41, 1, v41, v46);
            goto LABEL_44;
          }
          v437 = 1;
          v370 = nullptr;
          if ( v100 == -4096 )
            goto LABEL_613;
          while ( 1 )
          {
            if ( !v370 && v100 == -8192 )
              v370 = v99;
            a5 = (unsigned int)(v437 + 1);
            v45 = (v97 - 1) & (v437 + (_DWORD)v45);
            v99 = &v98[2 * (unsigned int)v45];
            v100 = *v99;
            if ( v41 == *v99 )
              goto LABEL_112;
            if ( v100 == -4096 )
              break;
            ++v437;
          }
          if ( !v370 )
LABEL_613:
            v370 = v99;
          v367 = *(_DWORD *)(v452 + 32) + 1;
          v451.m128i_i32[0] = *(_DWORD *)(v452 + 32);
          v30 = (unsigned int)(4 * v367);
          if ( (unsigned int)v30 < 3 * v97 )
          {
            v438 = v97 - *(_DWORD *)(v452 + 36) - v367;
            v439 = v97 >> 3;
            if ( (unsigned int)v438 > (unsigned int)v439 )
            {
              v371 = *v370;
LABEL_407:
              v372 = v452;
              *(_DWORD *)(v452 + 32) = v367;
              if ( v371 != -4096 )
                --*(_DWORD *)(v372 + 36);
              goto LABEL_409;
            }
            sub_B46E10(v452 + 24, v97, v438, v439, a5, v45);
            v444 = *(_DWORD *)(v452 + 40);
            if ( !v444 )
              goto LABEL_667;
            v445 = v444 - 1;
            v446 = *(_QWORD *)(v452 + 24);
            v447 = v445 & (((unsigned int)v41 >> 9) ^ ((unsigned int)v41 >> 4));
            v451.m128i_i32[0] = *(_DWORD *)(v452 + 32);
            v367 = v451.m128i_i32[0] + 1;
            v370 = (__int64 *)(v446 + 16LL * v447);
            v371 = *v370;
            if ( v41 == *v370 )
              goto LABEL_407;
            v448 = 1;
            v449 = nullptr;
            if ( v371 != -4096 )
            {
              while ( 1 )
              {
                if ( !v449 && v371 == -8192 )
                  v449 = v370;
                v447 = v445 & (v448 + v447);
                v370 = (__int64 *)(v446 + 16LL * v447);
                v371 = *v370;
                if ( v41 == *v370 )
                  goto LABEL_407;
                if ( v371 == -4096 )
                {
                  if ( !v449 )
                    break;
                  v371 = *v449;
                  v370 = v449;
                  goto LABEL_407;
                }
                ++v448;
              }
            }
          }
          else
          {
LABEL_392:
            v349 = v452;
            v350 = (((((((2 * v97 - 1) | ((unsigned __int64)(2 * v97 - 1) >> 1)) >> 2)
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
            v351 = ((v350 >> 16) | v350) + 1;
            if ( (unsigned int)v351 < 0x40 )
              LODWORD(v351) = 64;
            *(_DWORD *)(v452 + 40) = v351;
            v352 = sub_220C370(16LL * (unsigned int)v351, 8, 64, v30, a5, v45);
            *(_QWORD *)(v349 + 24) = v352;
            if ( v98 )
            {
              v353 = *(unsigned int *)(v452 + 40);
              *(_QWORD *)(v452 + 32) = 0;
              v354 = &v98[2 * v97];
              v355 = (_QWORD *)v352;
              v356 = v353;
              v357 = (_QWORD *)(v352 + 16 * v353);
              if ( (_QWORD *)v352 != v357 )
              {
                do
                {
                  *v355 = -4096;
                  v355 += 2;
                }
                while ( v357 != v355 );
              }
              v358 = v98;
              for ( j = v356 - 1; v354 != v358; v358 += 2 )
              {
                v360 = *v358;
                if ( *v358 != -8192 && v360 != -4096 )
                {
                  if ( !v356 )
                  {
                    *(_QWORD *)&dword_0 = *v358;
                    BUG();
                  }
                  v361 = j & (((unsigned int)v360 >> 9) ^ ((unsigned int)v360 >> 4));
                  v362 = (_QWORD *)(v352 + 16LL * v361);
                  v363 = *v362;
                  if ( v360 != *v362 )
                  {
                    v429 = 1;
                    v430 = nullptr;
                    if ( v363 != -4096 )
                    {
                      while ( 1 )
                      {
                        if ( !v430 && v363 == -8192 )
                          v430 = v362;
                        v361 = j & (v429 + v361);
                        v451.m128i_i32[0] = v429 + 1;
                        v362 = (_QWORD *)(v352 + 16LL * v361);
                        v363 = *v362;
                        if ( v360 == *v362 )
                          break;
                        if ( v363 == -4096 )
                        {
                          if ( v430 )
                            v362 = v430;
                          break;
                        }
                        v429 = v451.m128i_i32[0];
                      }
                    }
                  }
                  v364 = v358[1];
                  *v362 = v360;
                  v362[1] = v364;
                  ++*(_DWORD *)(v452 + 32);
                }
              }
              operator delete();
              v365 = *(_QWORD **)(v452 + 24);
              v366 = *(_DWORD *)(v452 + 40);
              v451.m128i_i32[0] = *(_DWORD *)(v452 + 32);
              v367 = v451.m128i_i32[0] + 1;
            }
            else
            {
              v427 = *(unsigned int *)(v452 + 40);
              *(_QWORD *)(v452 + 32) = 0;
              v366 = v427;
              v365 = (_QWORD *)(v352 + 16 * v427);
              if ( (_QWORD *)v352 != v365 )
              {
                v428 = (_QWORD *)v352;
                do
                {
                  *v428 = -4096;
                  v428 += 2;
                }
                while ( v365 != v428 );
                v365 = (_QWORD *)v352;
              }
              v367 = 1;
            }
            if ( !v366 )
            {
LABEL_667:
              ++*(_DWORD *)(v452 + 32);
              BUG();
            }
            v368 = v366 - 1;
            v369 = (v366 - 1) & (((unsigned int)v41 >> 9) ^ ((unsigned int)v41 >> 4));
            v370 = &v365[2 * v369];
            v371 = *v370;
            if ( v41 == *v370 )
              goto LABEL_407;
            v425 = 1;
            v426 = nullptr;
            if ( v371 != -4096 )
            {
              while ( 1 )
              {
                if ( !v426 && v371 == -8192 )
                  v426 = v370;
                LODWORD(v369) = v368 & (v425 + v369);
                v370 = &v365[2 * (unsigned int)v369];
                v371 = *v370;
                if ( v41 == *v370 )
                  goto LABEL_407;
                if ( v371 == -4096 )
                {
                  if ( !v426 )
                    break;
                  v371 = *v426;
                  v370 = v426;
                  goto LABEL_407;
                }
                ++v425;
              }
            }
          }
          *(_DWORD *)(v452 + 32) = v367;
LABEL_409:
          *v370 = v41;
          v102 = v370 + 1;
          v370[1] = 0;
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
            v96 = sub_962430(v30 + 2352, 24, 24, 3, a5, v39);
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
    v453 += 24;
  }
  while ( v453 != v459 );
  v7 = v35;
LABEL_68:
  result = (__m128 *)sub_B6AC30(v456 + 64);
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
  v456 = &v470;
  while ( 2 )
  {
    v106 = (*(__int64 (__fastcall **)(__m128 *, __int64, __m128 *))(v105->m128_u64[0] + 32))(v105, v24, v76);
    if ( (*(_QWORD *)(v106 + 80) & 0x40000LL) == 0
      && ((*(_QWORD *)(v106 + 80) >> 16) & 8) == 0
      && !(unsigned int)sub_B747A0(v106) )
    {
      goto LABEL_125;
    }
    v453 = (*(__int64 (__fastcall **)(__m128 *))(p_ptr->m128_u64[0] + 32))(p_ptr);
    v107 = sub_B747D0(v453);
    v112 = (_QWORD *)v107;
    v452 = v108;
    if ( v108 == v107 )
    {
      v222 = (void *)v453;
      v471.m128_u64[0] = v453;
      v223 = sub_B47200(v7, (unsigned __int64 *)&v471, v108, v109, v110, (unsigned __int64 *)v111);
      v24 = v454;
      ptr = v222;
      LODWORD(v477) = v454;
      v478.m128_u64[0] = v455;
      sub_B46130(v223, v454, v224, v455, v225, v226, (__int64)v222, v454, v455);
      goto LABEL_125;
    }
    v451.m128i_i64[0] = v107;
    v458 = &ptr;
    v113 = _mm_loadh_ps((const double *)&v452);
    ptr = &v478;
    v114 = 1;
    HIDWORD(v477) = 4;
    v478 = v113;
    while ( 2 )
    {
      --v114;
      v115 = v112;
      LODWORD(v477) = v114;
      if ( v112 == (_QWORD *)v452 )
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
          sub_B45F90(&v471, v125, &v120[2 * v119], v7, 1);
          v127 = *(unsigned int *)(v471.m128_u64[0] + 8);
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
          v451.m128i_i32[0] = *(_DWORD *)(v7 + 16);
          v180 = (((v123 >> 1) | v123) >> 2) | (v123 >> 1) | v123;
          v181 = (((v180 >> 4) | v180) >> 8) | (v180 >> 4) | v180;
          v182 = ((v181 >> 16) | v181) + 1;
          if ( (unsigned int)v182 < 0x40 )
            LODWORD(v182) = 64;
          *(_DWORD *)(v7 + 16) = v182;
          v183 = (_QWORD *)sub_220C370(16LL * (unsigned int)v182, 8, v119, 64, v141, v118);
          v184 = v451.m128i_u32[0];
          v185 = v183;
          *(_QWORD *)v7 = v183;
          if ( v120 )
          {
            *(_QWORD *)(v7 + 8) = 0;
            v451.m128i_i64[0] = 16 * v184;
            v186 = &v120[2 * v184];
            v187 = *(unsigned int *)(v7 + 16);
            for ( k = &v183[2 * v187]; k != v183; v183 += 2 )
              *v183 = -4096;
            v189 = v122;
            v190 = v120;
            v191 = v187 - 1;
            v192 = v121;
            v193 = v189;
            do
            {
              v194 = *v190;
              if ( *v190 != -4096 && v194 != -8192 )
              {
                if ( !(_DWORD)v187 )
                {
                  *(_QWORD *)&dword_0 = *v190;
                  BUG();
                }
                v195 = v191 & (((unsigned int)v194 >> 9) ^ ((unsigned int)v194 >> 4));
                v196 = &v185[2 * v195];
                v197 = *v196;
                if ( *v196 != v194 && v197 != -4096 )
                {
                  LODWORD(v460) = 1;
                  v459 = 0;
                  v461 = (__int64)v190;
                  while ( 1 )
                  {
                    if ( !v459 )
                    {
                      if ( v197 != -8192 )
                        v196 = (_QWORD *)v459;
                      v459 = (unsigned __int64)v196;
                    }
                    v195 = v191 & ((_DWORD)v460 + v195);
                    v196 = &v185[2 * v195];
                    v197 = *v196;
                    if ( v194 == *v196 )
                    {
                      v190 = (_QWORD *)v461;
                      goto LABEL_196;
                    }
                    if ( v197 == -4096 )
                      break;
                    LODWORD(v460) = (_DWORD)v460 + 1;
                  }
                  v190 = (_QWORD *)v461;
                  if ( v459 )
                    v196 = (_QWORD *)v459;
                }
LABEL_196:
                *v196 = v194;
                v198 = *((_DWORD *)v190 + 2);
                ++*(_DWORD *)(v7 + 8);
                *((_DWORD *)v196 + 2) = v198;
              }
              v190 += 2;
            }
            while ( v186 != v190 );
            v199 = v193;
            v121 = v192;
            v122 = v199;
            operator delete();
            v120 = *(_QWORD **)v7;
            v200 = *(_DWORD *)(v7 + 16);
            v140 = *(_DWORD *)(v7 + 8) + 1;
          }
          else
          {
            v221 = *(unsigned int *)(v7 + 16);
            *(_QWORD *)(v7 + 8) = 0;
            v200 = v221;
            v120 = &v183[2 * v221];
            if ( v183 != v120 )
            {
              do
              {
                *v183 = -4096;
                v183 += 2;
              }
              while ( v120 != v183 );
              v120 = v185;
            }
            v140 = 1;
          }
          if ( !v200 )
            goto LABEL_671;
          v201 = v200 - 1;
          v202 = v201 & v122;
          v125 = &v120[2 * v202];
          v142 = *v125;
          if ( v121 == *v125 )
            goto LABEL_154;
          v203 = 1;
          v204 = nullptr;
          if ( v142 != -4096 )
          {
            while ( 1 )
            {
              if ( v142 == -8192 && !v204 )
                v204 = v125;
              v202 = v201 & (v203 + v202);
              v125 = &v120[2 * v202];
              v142 = *v125;
              if ( v121 == *v125 )
                goto LABEL_154;
              if ( v142 == -4096 )
              {
                if ( !v204 )
                  break;
                v142 = *v204;
                v125 = v204;
                goto LABEL_154;
              }
              ++v203;
            }
          }
        }
        else
        {
LABEL_169:
          v451.m128i_i32[0] = *(_DWORD *)(v7 + 16);
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
          v161 = sub_220C370(16LL * (unsigned int)v160, 8, v119, 64, v117, v118);
          v162 = v451.m128i_u32[0];
          *(_QWORD *)v7 = v161;
          if ( v120 )
          {
            v163 = *(unsigned int *)(v7 + 16);
            *(_QWORD *)(v7 + 8) = 0;
            v164 = &v120[2 * v162];
            v165 = (_QWORD *)v161;
            v166 = v163;
            v167 = (_QWORD *)(v161 + 16 * v163);
            if ( (_QWORD *)v161 != v167 )
            {
              do
              {
                *v165 = -4096;
                v165 += 2;
              }
              while ( v167 != v165 );
            }
            v168 = v120;
            for ( m = v166 - 1; v164 != v168; v168 += 2 )
            {
              v170 = *v168;
              if ( *v168 != -4096 && v170 != -8192 )
              {
                if ( !v166 )
                {
                  *(_QWORD *)&dword_0 = *v168;
                  BUG();
                }
                v171 = m & (((unsigned int)v170 >> 9) ^ ((unsigned int)v170 >> 4));
                v172 = v161 + 16LL * v171;
                v173 = *(_QWORD *)v172;
                if ( *(_QWORD *)v172 != v170 && v173 != -4096 )
                {
                  LODWORD(v459) = 1;
                  v451.m128i_i64[0] = 0;
                  v460 = v168;
                  while ( 1 )
                  {
                    if ( v173 == -8192 )
                    {
                      if ( v451.m128i_i64[0] )
                        v172 = v451.m128i_i64[0];
                      v451.m128i_i64[0] = v172;
                    }
                    v171 = m & (v459 + v171);
                    v172 = v161 + 16LL * v171;
                    v173 = *(_QWORD *)v172;
                    if ( v170 == *(_QWORD *)v172 )
                    {
                      v168 = v460;
                      goto LABEL_179;
                    }
                    if ( v173 == -4096 )
                      break;
                    LODWORD(v459) = v459 + 1;
                  }
                  v168 = v460;
                  if ( v451.m128i_i64[0] )
                    v172 = v451.m128i_i64[0];
                }
LABEL_179:
                v174 = *((_DWORD *)v168 + 2);
                ++*(_DWORD *)(v7 + 8);
                *(_QWORD *)v172 = v170;
                *(_DWORD *)(v172 + 8) = v174;
              }
            }
            operator delete();
            v120 = *(_QWORD **)v7;
            v175 = *(_DWORD *)(v7 + 16);
            v140 = *(_DWORD *)(v7 + 8) + 1;
          }
          else
          {
            v207 = *(unsigned int *)(v7 + 16);
            *(_QWORD *)(v7 + 8) = 0;
            v175 = v207;
            v120 = (_QWORD *)(v161 + 16 * v207);
            if ( (_QWORD *)v161 != v120 )
            {
              v208 = (_QWORD *)v161;
              do
              {
                *v208 = -4096;
                v208 += 2;
              }
              while ( v120 != v208 );
              v120 = (_QWORD *)v161;
            }
            v140 = 1;
          }
          if ( !v175 )
          {
LABEL_671:
            ++*(_DWORD *)(v7 + 8);
            BUG();
          }
          v176 = v175 - 1;
          v177 = (v175 - 1) & (((unsigned int)v121 >> 9) ^ ((unsigned int)v121 >> 4));
          v125 = &v120[2 * v177];
          v142 = *v125;
          if ( v121 == *v125 )
            goto LABEL_154;
          v178 = 1;
          v179 = nullptr;
          if ( v142 != -4096 )
          {
            while ( 1 )
            {
              if ( !v179 && v142 == -8192 )
                v179 = v125;
              v177 = v176 & (v178 + v177);
              v125 = &v120[2 * v177];
              v142 = *v125;
              if ( v121 == *v125 )
                goto LABEL_154;
              if ( v142 == -4096 )
              {
                if ( !v179 )
                  break;
                v142 = *v179;
                v125 = v179;
                goto LABEL_154;
              }
              ++v178;
            }
          }
        }
        *(_DWORD *)(v7 + 8) = v140;
LABEL_156:
        *v125 = v121;
        *((_DWORD *)v125 + 2) = 0;
        sub_B45F90(&v471, v125, &v120[2 * *(unsigned int *)(v7 + 16)], v7, 1);
        v143 = *(unsigned int *)(v7 + 32);
        v467 = 0;
        v464 = 0;
        v451.m128i_i64[0] = v471.m128_u64[0];
        v144 = v143 + 1;
        v465 = 0;
        v468 = v456;
        v474 = &ptr;
        v145 = *(unsigned int *)(v7 + 36);
        v466 = 0;
        v469 = 0;
        v471 = (__m128)(unsigned __int64)v121;
        v472 = 0;
        LODWORD(v473) = 0;
        v475 = 0;
        if ( v143 + 1 > v145 )
        {
          v205 = *(_QWORD *)(v7 + 24);
          v206 = v7 + 24;
          if ( v205 > (unsigned __int64)&v471 || (unsigned __int64)&v471 >= v205 + 48 * v143 )
          {
            sub_B47020(v206, v144);
            v146 = *(_QWORD *)(v7 + 24);
            v143 = *(unsigned int *)(v7 + 32);
            v147 = &v471;
          }
          else
          {
            sub_B47020(v206, v144);
            v146 = *(_QWORD *)(v7 + 24);
            v143 = *(unsigned int *)(v7 + 32);
            v147 = (__m128 *)((char *)&v471 + v146 - v205);
          }
        }
        else
        {
          v146 = *(_QWORD *)(v7 + 24);
          v147 = &v471;
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
          sub_B46AB0(v150 + 32, (__int64)&v147[2]);
        v155 = (unsigned int)v475;
        v156 = v474;
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
          v157 = v474;
        }
        if ( v157 != &ptr )
          free(v157);
        operator delete();
        operator delete();
        v127 = (unsigned int)(*(_DWORD *)(v7 + 32) - 1);
        *(_DWORD *)(v451.m128i_i64[0] + 8) = v127;
LABEL_137:
        v128 = *(_QWORD *)(v7 + 24) + 48 * v127;
        v471.m128_u64[0] = v453;
        v471.m128_i32[2] = v454;
        v472 = v455;
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
            sub_22134E0(v129 + 8, v129 + 24, 1, 24);
            v131 = (__m128i *)(*(_QWORD *)(v129 + 8) + 24LL * *(unsigned int *)(v129 + 16));
          }
          *v131 = _mm_load_si128((const __m128i *)&v471);
          v131[1].m128i_i64[0] = v472;
          ++*(_DWORD *)(v129 + 16);
        }
        v132 = sub_B747D0(v121);
        if ( v132 != v133 )
        {
          v134 = (unsigned int)v477;
          v451.m128i_i64[0] = v133;
          v109 = HIDWORD(v477);
          v135 = (unsigned int)v477 + 1LL;
          v136 = (__m128i)_mm_loadh_ps((const double *)v451.m128i_i64);
          if ( v135 > HIDWORD(v477) )
          {
            v451 = v136;
            sub_22134E0(v458, v458 + 2, v135, 16);
            v134 = (unsigned int)v477;
            v136 = _mm_load_si128(&v451);
          }
          *((__m128i *)ptr + v134) = v136;
          LODWORD(v477) = v477 + 1;
        }
        ++v115;
      }
      while ( (_QWORD *)v452 != v115 );
      v114 = v477;
LABEL_147:
      if ( v114 )
      {
        v109 = (__int64)ptr;
        v137 = (char *)ptr + 16 * v114 - 16;
        v112 = (_QWORD *)*v137;
        v452 = v137[1];
        continue;
      }
      break;
    }
    v209 = *(unsigned int *)(v7 + 16);
    v210 = *(_QWORD **)v7;
    if ( (_DWORD)v209 )
    {
      v211 = (unsigned int)(v209 - 1);
      v212 = ((unsigned int)v453 >> 9) ^ ((unsigned int)v453 >> 4);
      v111 = (unsigned int)v211 & v212;
      v213 = &v210[2 * v111];
      v214 = *v213;
      if ( v453 == *v213 )
      {
LABEL_221:
        sub_B45F90(&v471, v213, &v210[2 * (unsigned int)v209], v7, 1);
        v219 = *(unsigned int *)(v471.m128_u64[0] + 8);
        goto LABEL_222;
      }
      v284 = 1;
      v285 = nullptr;
      if ( v214 == -4096 )
        goto LABEL_318;
      while ( 1 )
      {
        if ( !v285 && v214 == -8192 )
          v285 = v213;
        v110 = (unsigned int)(v284 + 1);
        v111 = (unsigned int)v211 & (v284 + (_DWORD)v111);
        v213 = &v210[2 * (unsigned int)v111];
        v214 = *v213;
        if ( v453 == *v213 )
          goto LABEL_221;
        if ( v214 == -4096 )
          break;
        ++v284;
      }
      if ( !v285 )
LABEL_318:
        v285 = v213;
      v286 = *(_DWORD *)(v7 + 8) + 1;
      v109 = (unsigned int)(3 * v209);
      if ( 4 * v286 < (unsigned int)v109 )
      {
        v287 = (unsigned int)(v209 - *(_DWORD *)(v7 + 12) - v286);
        if ( (unsigned int)v287 > (unsigned int)v209 >> 3 )
        {
          v288 = *v285;
          goto LABEL_322;
        }
        v328 = (((((((((v211 | (v211 >> 1)) >> 2) | v211 | (v211 >> 1)) >> 4)
                  | ((v211 | (v211 >> 1)) >> 2)
                  | v211
                  | (v211 >> 1)) >> 8)
                | ((((v211 | (v211 >> 1)) >> 2) | v211 | (v211 >> 1)) >> 4)
                | ((v211 | (v211 >> 1)) >> 2)
                | v211
                | (v211 >> 1)) >> 16)
              | ((((((v211 | (v211 >> 1)) >> 2) | v211 | (v211 >> 1)) >> 4)
                | ((v211 | (v211 >> 1)) >> 2)
                | v211
                | (v211 >> 1)) >> 8)
              | ((((v211 | (v211 >> 1)) >> 2) | v211 | (v211 >> 1)) >> 4)
              | ((v211 | (v211 >> 1)) >> 2)
              | v211
              | (v211 >> 1))
             + 1;
        if ( v328 < 0x40 )
          v328 = 64;
        *(_DWORD *)(v7 + 16) = v328;
        v329 = sub_220C370(16LL * v328, 8, 64, v287, v110, v111);
        *(_QWORD *)v7 = v329;
        if ( v210 )
        {
          v330 = *(unsigned int *)(v7 + 16);
          *(_QWORD *)(v7 + 8) = 0;
          v331 = v330;
          v451.m128i_i64[0] = (__int64)&v210[2 * v209];
          v332 = (_QWORD *)v329;
          v333 = (_QWORD *)(v329 + 16 * v330);
          if ( (_QWORD *)v329 != v333 )
          {
            do
            {
              *v332 = -4096;
              v332 += 2;
            }
            while ( v333 != v332 );
          }
          v334 = v210;
          v335 = v331 - 1;
          do
          {
            v336 = *v334;
            if ( *v334 != -8192 && v336 != -4096 )
            {
              if ( !v331 )
              {
                *(_QWORD *)&dword_0 = *v334;
                BUG();
              }
              v337 = v335 & (((unsigned int)v336 >> 9) ^ ((unsigned int)v336 >> 4));
              v338 = v329 + 16LL * v337;
              v339 = *(_QWORD *)v338;
              if ( *(_QWORD *)v338 != v336 )
              {
                v435 = 1;
                v436 = 0;
                if ( v339 != -4096 )
                {
                  while ( 1 )
                  {
                    if ( !v436 && v339 == -8192 )
                      v436 = v338;
                    v337 = v335 & (v435 + v337);
                    v338 = v329 + 16LL * v337;
                    v339 = *(_QWORD *)v338;
                    if ( v336 == *(_QWORD *)v338 )
                      break;
                    if ( v339 == -4096 )
                    {
                      if ( v436 )
                        v338 = v436;
                      break;
                    }
                    ++v435;
                  }
                }
              }
              v340 = *((_DWORD *)v334 + 2);
              ++*(_DWORD *)(v7 + 8);
              *(_QWORD *)v338 = v336;
              *(_DWORD *)(v338 + 8) = v340;
            }
            v334 += 2;
          }
          while ( (_QWORD *)v451.m128i_i64[0] != v334 );
          operator delete();
          v210 = *(_QWORD **)v7;
          v341 = *(_DWORD *)(v7 + 16);
          v286 = *(_DWORD *)(v7 + 8) + 1;
        }
        else
        {
          v431 = *(unsigned int *)(v7 + 16);
          *(_QWORD *)(v7 + 8) = 0;
          v341 = v431;
          v210 = (_QWORD *)(v329 + 16 * v431);
          if ( (_QWORD *)v329 != v210 )
          {
            v432 = (_QWORD *)v329;
            do
            {
              *v432 = -4096;
              v432 += 2;
            }
            while ( v210 != v432 );
            v210 = (_QWORD *)v329;
          }
          v286 = 1;
        }
        if ( v341 )
        {
          v342 = v341 - 1;
          v343 = v342 & v212;
          v285 = &v210[2 * (v342 & v212)];
          v288 = *v285;
          if ( v453 == *v285 )
            goto LABEL_322;
          v344 = 1;
          v325 = nullptr;
          if ( v288 != -4096 )
          {
            while ( 1 )
            {
              if ( v288 == -8192 && !v325 )
                v325 = v285;
              v343 = v342 & (v344 + v343);
              v285 = &v210[2 * v343];
              v288 = *v285;
              if ( v453 == *v285 )
                goto LABEL_322;
              if ( v288 == -4096 )
                goto LABEL_380;
              ++v344;
            }
          }
LABEL_355:
          *(_DWORD *)(v7 + 8) = v286;
          goto LABEL_324;
        }
LABEL_664:
        ++*(_DWORD *)(v7 + 8);
        BUG();
      }
    }
    v306 = (((((((unsigned int)(2 * v209 - 1) | ((unsigned __int64)(unsigned int)(2 * v209 - 1) >> 1)) >> 2)
             | (unsigned int)(2 * v209 - 1)
             | ((unsigned __int64)(unsigned int)(2 * v209 - 1) >> 1)) >> 4)
           | (((unsigned int)(2 * v209 - 1) | ((unsigned __int64)(unsigned int)(2 * v209 - 1) >> 1)) >> 2)
           | (unsigned int)(2 * v209 - 1)
           | ((unsigned __int64)(unsigned int)(2 * v209 - 1) >> 1)) >> 8)
         | (((((unsigned int)(2 * v209 - 1) | ((unsigned __int64)(unsigned int)(2 * v209 - 1) >> 1)) >> 2)
           | (unsigned int)(2 * v209 - 1)
           | ((unsigned __int64)(unsigned int)(2 * v209 - 1) >> 1)) >> 4)
         | (((unsigned int)(2 * v209 - 1) | ((unsigned __int64)(unsigned int)(2 * v209 - 1) >> 1)) >> 2)
         | (unsigned int)(2 * v209 - 1)
         | ((unsigned __int64)(unsigned int)(2 * v209 - 1) >> 1);
    v307 = ((v306 >> 16) | v306) + 1;
    if ( (unsigned int)v307 < 0x40 )
      LODWORD(v307) = 64;
    *(_DWORD *)(v7 + 16) = v307;
    v308 = sub_220C370(16LL * (unsigned int)v307, 8, 64, v109, v110, v111);
    *(_QWORD *)v7 = v308;
    if ( v210 )
    {
      v309 = *(unsigned int *)(v7 + 16);
      v310 = (_QWORD *)v308;
      *(_QWORD *)(v7 + 8) = 0;
      v311 = &v210[2 * v209];
      v312 = v309;
      v313 = (_QWORD *)(v308 + 16 * v309);
      if ( (_QWORD *)v308 != v313 )
      {
        do
        {
          *v310 = -4096;
          v310 += 2;
        }
        while ( v313 != v310 );
      }
      v314 = v210;
      for ( ii = v312 - 1; v311 != v314; v314 += 2 )
      {
        v316 = *v314;
        if ( *v314 != -4096 && v316 != -8192 )
        {
          if ( !v312 )
          {
            *(_QWORD *)&dword_0 = *v314;
            BUG();
          }
          v317 = ii & (((unsigned int)v316 >> 9) ^ ((unsigned int)v316 >> 4));
          v318 = v308 + 16LL * v317;
          v319 = *(_QWORD *)v318;
          if ( *(_QWORD *)v318 != v316 )
          {
            v433 = 1;
            v434 = 0;
            if ( v319 != -4096 )
            {
              while ( 1 )
              {
                if ( v319 == -8192 && !v434 )
                  v434 = v318;
                v317 = ii & (v433 + v317);
                v318 = v308 + 16LL * v317;
                v319 = *(_QWORD *)v318;
                if ( v316 == *(_QWORD *)v318 )
                  break;
                if ( v319 == -4096 )
                {
                  if ( v434 )
                    v318 = v434;
                  break;
                }
                ++v433;
              }
            }
          }
          v320 = *((_DWORD *)v314 + 2);
          ++*(_DWORD *)(v7 + 8);
          *(_QWORD *)v318 = v316;
          *(_DWORD *)(v318 + 8) = v320;
        }
      }
      operator delete();
      v210 = *(_QWORD **)v7;
      v321 = *(_DWORD *)(v7 + 16);
      v286 = *(_DWORD *)(v7 + 8) + 1;
    }
    else
    {
      v347 = *(unsigned int *)(v7 + 16);
      *(_QWORD *)(v7 + 8) = 0;
      v321 = v347;
      v210 = (_QWORD *)(v308 + 16 * v347);
      if ( (_QWORD *)v308 != v210 )
      {
        v348 = (_QWORD *)v308;
        do
        {
          *v348 = -4096;
          v348 += 2;
        }
        while ( v210 != v348 );
        v210 = (_QWORD *)v308;
      }
      v286 = 1;
    }
    if ( !v321 )
      goto LABEL_664;
    v322 = v321 - 1;
    v323 = v322 & (((unsigned int)v453 >> 9) ^ ((unsigned int)v453 >> 4));
    v285 = &v210[2 * v323];
    v288 = *v285;
    if ( v453 == *v285 )
      goto LABEL_322;
    v324 = 1;
    v325 = nullptr;
    if ( v288 == -4096 )
      goto LABEL_355;
    while ( 1 )
    {
      if ( !v325 && v288 == -8192 )
        v325 = v285;
      LODWORD(v323) = v322 & (v324 + v323);
      v285 = &v210[2 * (unsigned int)v323];
      v288 = *v285;
      if ( v453 == *v285 )
        break;
      if ( v288 == -4096 )
      {
LABEL_380:
        if ( !v325 )
          goto LABEL_355;
        v288 = *v325;
        v285 = v325;
        break;
      }
      ++v324;
    }
LABEL_322:
    *(_DWORD *)(v7 + 8) = v286;
    if ( v288 != -4096 )
      --*(_DWORD *)(v7 + 12);
LABEL_324:
    v289 = v453;
    *((_DWORD *)v285 + 2) = 0;
    v290 = *(unsigned int *)(v7 + 16);
    *v285 = v289;
    sub_B45F90(&v471, v285, &v210[2 * v290], v7, 1);
    v291 = *(unsigned int *)(v7 + 32);
    v467 = 0;
    v292 = v471.m128_u64[0];
    v464 = 0;
    v468 = v456;
    v293 = v291 + 1;
    v474 = &ptr;
    v294 = *(unsigned int *)(v7 + 36);
    v465 = 0;
    v466 = 0;
    v469 = 0;
    v471 = (__m128)(unsigned __int64)v289;
    v472 = 0;
    LODWORD(v473) = 0;
    v475 = 0;
    if ( v291 + 1 > v294 )
    {
      v326 = *(_QWORD *)(v7 + 24);
      v327 = v7 + 24;
      if ( v326 > (unsigned __int64)&v471 || (unsigned __int64)&v471 >= v326 + 48 * v291 )
      {
        sub_B47020(v327, v293);
        v295 = *(_QWORD *)(v7 + 24);
        v291 = *(unsigned int *)(v7 + 32);
        v296 = &v471;
      }
      else
      {
        sub_B47020(v327, v293);
        v295 = *(_QWORD *)(v7 + 24);
        v291 = *(unsigned int *)(v7 + 32);
        v296 = (__m128 *)((char *)&v471 + v295 - v326);
      }
    }
    else
    {
      v295 = *(_QWORD *)(v7 + 24);
      v296 = &v471;
    }
    v297 = 48 * v291 + v295;
    v298 = v296->m128_u64[0];
    *(_QWORD *)(v297 + 8) = 0;
    *(_QWORD *)v297 = v298;
    v299 = v296->m128_u64[1];
    *(_QWORD *)(v297 + 16) = 0;
    *(_DWORD *)(v297 + 24) = 0;
    *(_QWORD *)(v297 + 8) = v299;
    LODWORD(v299) = v296[1].m128_i32[0];
    v296->m128_u64[1] = 0;
    *(_DWORD *)(v297 + 16) = v299;
    v300 = v296[1].m128_i32[1];
    v296[1].m128_i32[0] = 0;
    LODWORD(v299) = *(_DWORD *)(v297 + 20);
    *(_DWORD *)(v297 + 20) = v300;
    v301 = v296[1].m128_i32[2];
    v296[1].m128_i32[1] = v299;
    LODWORD(v299) = *(_DWORD *)(v297 + 24);
    *(_DWORD *)(v297 + 24) = v301;
    v296[1].m128_i32[2] = v299;
    *(_QWORD *)(v297 + 32) = v297 + 48;
    *(_QWORD *)(v297 + 40) = 0;
    if ( v296[2].m128_i32[2] )
      sub_B46AB0(v297 + 32, (__int64)&v296[2]);
    v302 = (unsigned int)v475;
    v303 = v474;
    ++*(_DWORD *)(v7 + 32);
    v304 = &v303[15 * v302];
    if ( v303 != v304 )
    {
      do
      {
        while ( 1 )
        {
          v304 -= 15;
          v305 = (void **)v304[1];
          if ( v305 == v304 + 3 )
            break;
          free(v305);
          if ( v303 == v304 )
            goto LABEL_331;
        }
      }
      while ( v303 != v304 );
LABEL_331:
      v304 = v474;
    }
    if ( v304 != &ptr )
      free(v304);
    operator delete();
    operator delete();
    v219 = (unsigned int)(*(_DWORD *)(v7 + 32) - 1);
    *(_DWORD *)(v292 + 8) = v219;
LABEL_222:
    v24 = v454;
    v220 = *(_QWORD *)(v7 + 24) + 48 * v219;
    v471.m128_i32[2] = v454;
    v471.m128_u64[0] = v453;
    v472 = v455;
    sub_B46130(v220 + 8, v454, v215, v216, v217, v218, v453, v454, v455);
    if ( ptr != v458 + 2 )
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

