__int64 __fastcall CoinFactorization::pivot<int>(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        int a5,
        __int64 a6,
        char *s,
        int a8,
        __int64 a9,
        int a10)
{
  __int64 v10; // rax
  bool v14; // cc
  __int64 v15; // r13
  __int64 v16; // rdi
  __int64 v17; // r9
  __int64 v18; // r15
  __int64 v19; // r14
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // rbx
  __int64 v23; // rbp
  int *v24; // rsi
  __int64 v25; // rsi
  int v26; // esi
  _DWORD *v27; // rdi
  int v28; // edx
  __int64 v29; // rsi
  unsigned int v30; // r9d
  unsigned __int64 v31; // rax
  __int64 v32; // rax
  int v33; // ecx
  unsigned int v34; // esi
  unsigned int v35; // ecx
  __int64 v36; // rax
  unsigned int v37; // r8d
  __int64 v38; // rcx
  __int64 v39; // rdi
  int *v40; // rax
  unsigned int v41; // r8d
  __int64 v42; // rdi
  unsigned int v43; // edi
  unsigned int v44; // esi
  int v45; // eax
  int v46; // edx
  unsigned int v47; // edi
  int v48; // esi
  int v49; // ecx
  __int64 v50; // rdi
  __int64 v51; // rax
  int *v52; // r8
  unsigned __int64 v53; // r9
  unsigned __int64 v54; // rax
  unsigned int v55; // edx
  int v56; // eax
  unsigned int v57; // edi
  int *v58; // rsi
  unsigned int v59; // r9d
  __int64 v60; // rax
  __int64 v61; // r8
  unsigned int v62; // edx
  int v63; // edi
  int v64; // eax
  int v65; // ecx
  int v66; // esi
  __int64 v67; // rax
  __int64 v68; // rdi
  int v69; // eax
  int v70; // edx
  __int64 v72; // rcx
  int v73; // esi
  int v74; // eax
  __int64 v75; // r8
  __int64 v76; // rcx
  __int64 v77; // rdx
  __int64 v78; // xmm0_8
  _DWORD *v79; // rdi
  __int64 v80; // rax
  int v81; // ebx
  __int64 v82; // rax
  _DWORD *v83; // rdx
  __int64 v84; // rax
  int v85; // r10d
  __int64 v86; // rax
  int v87; // ecx
  __m128d v88; // xmm1
  __int64 v89; // rax
  int v90; // edx
  __int64 v91; // rax
  __int64 v92; // rdi
  __int64 v93; // r8
  __int64 v94; // r9
  __int64 v95; // r10
  __int64 v96; // rdx
  __int64 v97; // xmm0_8
  _DWORD *v98; // rsi
  __int64 v99; // rax
  int v100; // r14d
  __int64 v101; // rax
  _DWORD *v102; // rdx
  __int64 v103; // rax
  unsigned __int64 v104; // rax
  int v105; // r8d
  unsigned int v106; // esi
  __m128d v107; // xmm2
  int v108; // ecx
  unsigned int v109; // edx
  __int64 v110; // rdi
  __int64 v111; // rax
  __int64 v112; // rax
  int v113; // r8d
  __int64 v114; // rax
  __m128d v115; // xmm7
  __m128d v116; // xmm5
  __int64 v117; // rbx
  int *v118; // rax
  __int64 v119; // rax
  int v120; // r9d
  int v121; // edx
  __int64 v122; // rdi
  __int64 v123; // rax
  __m128d v124; // xmm3
  __int64 v125; // rsi
  int v126; // ecx
  __int64 v127; // rax
  __int64 v128; // r11
  int v129; // edx
  int v130; // ebp
  __m128d v131; // xmm2
  __int64 v132; // rsi
  __int64 v133; // r11
  int v134; // r13d
  __m128d v135; // xmm0
  int v136; // ecx
  __int64 v137; // r10
  __int64 v138; // rax
  double *v139; // r8
  _DWORD *v140; // rdi
  __m128d v141; // xmm0
  __int64 *v142; // rcx
  int *v143; // rsi
  int v144; // eax
  __int64 v145; // xmm0_8
  int v146; // ecx
  __int64 v147; // rcx
  __int64 v148; // r13
  __int64 v149; // r11
  double v150; // xmm4_8
  __int64 v151; // rcx
  __int64 v152; // rdi
  int v153; // esi
  __m128d v154; // xmm1
  double v155; // xmm1_8
  __m128d v156; // xmm0
  int v157; // r8d
  char *v158; // rsi
  __int64 *v159; // rax
  __int64 *v160; // rcx
  int *v161; // rdx
  __int64 v162; // xmm0_8
  int v163; // esi
  int *v164; // rcx
  __int64 v165; // rax
  __int64 v166; // rdx
  __int64 v167; // rdi
  __int64 v168; // r10
  __int64 v169; // r11
  __int64 v170; // rcx
  _DWORD *v171; // r9
  __int64 v172; // rsi
  int *v173; // rax
  int v174; // r8d
  int v175; // esi
  int v176; // r8d
  int *v177; // rdi
  __int64 v178; // rax
  _DWORD *v179; // rdx
  int v180; // eax
  __int64 v181; // rbp
  int v182; // r13d
  __int64 v183; // r11
  __int64 v184; // rbx
  int v185; // r11d
  char v186; // cl
  unsigned int *v187; // rdi
  int v188; // esi
  int v189; // edx
  unsigned int v190; // eax
  __int64 v191; // r13
  int *v192; // r15
  int *v193; // r8
  int v194; // edi
  __int64 v195; // rsi
  int *v196; // r14
  int v197; // eax
  int v198; // edx
  int *v199; // rdx
  int v200; // eax
  int v201; // r9d
  int *v202; // rsi
  unsigned int *v203; // rdi
  unsigned int v204; // edx
  int v205; // r9d
  __int64 v206; // r8
  int v207; // eax
  __int64 v208; // rcx
  __int64 v209; // rdx
  __int64 v210; // rsi
  __int64 v211; // r14
  __int64 v212; // rdi
  __int64 v213; // rsi
  int v214; // r9d
  int *v215; // rdi
  _DWORD *v216; // r13
  __int64 v217; // rcx
  __int64 v218; // rax
  __int64 v219; // rbx
  char v220; // cl
  unsigned int *v221; // rdi
  int v222; // esi
  int v223; // eax
  unsigned int v224; // edx
  __int64 v225; // r8
  __int64 v226; // r15
  int *v227; // r9
  int v228; // r11d
  __int64 v229; // rdi
  int v230; // esi
  int *v231; // rax
  int v232; // esi
  int v233; // r10d
  int *v234; // rdx
  unsigned int *v235; // rdi
  unsigned int v236; // eax
  int v237; // r8d
  __int64 v238; // r10
  int v239; // esi
  int v240; // r11d
  __int64 v241; // r9
  __int64 v242; // rax
  __int64 v243; // rcx
  __int64 v244; // rdx
  _DWORD *v245; // rsi
  int v246; // ecx
  __int64 v247; // rax
  __int64 v248; // rcx
  __int64 v249; // rdx
  int *v250; // rsi
  _DWORD *v251; // rcx
  __int64 v252; // rdx
  __int64 v253; // r14
  __int64 v254; // rcx
  __int64 v255; // r15
  __int64 v256; // rax
  __int64 v257; // r9
  __int64 v258; // rdx
  int v259; // esi
  __int64 v260; // rbx
  __int64 v261; // rax
  int *v262; // rdi
  int *v263; // rax
  int v264; // esi
  __int64 v265; // rdx
  __int64 v266; // rsi
  _DWORD *v267; // r8
  __int64 v268; // rdx
  int v269; // r10d
  __int64 v270; // rdx
  _DWORD *v271; // rsi
  __int64 v272; // rdx
  _QWORD *v273; // rcx
  _DWORD *v274; // rdi
  __int64 v275; // rax
  __int64 v276; // rsi
  __int64 v277; // r11
  int v278; // ebp
  double v279; // xmm0_8
  int v280; // ecx
  __int64 v281; // r10
  __int64 v282; // rax
  int v283; // eax
  int *v284; // r8
  int v285; // ecx
  __int64 v286; // rax
  __int64 v287; // rcx
  unsigned __int64 v288; // rdx
  __int64 v289; // rcx
  __int64 v290; // rcx
  __int64 v291; // r9
  __int64 v292; // rax
  __int64 v293; // rdx
  __int64 v294; // rbx
  __int64 v295; // rbp
  __int64 v296; // r15
  __int64 v297; // xmm0_8
  _DWORD *v298; // rdi
  __int64 v299; // rax
  int v300; // r8d
  __int64 v301; // rax
  _DWORD *v302; // rcx
  __int64 v303; // rax
  int v304; // r11d
  unsigned __int64 v305; // rdx
  int v306; // [rsp+0h] [rbp-148h]
  int v307; // [rsp+0h] [rbp-148h]
  int v308; // [rsp+0h] [rbp-148h]
  int v309[2]; // [rsp+0h] [rbp-148h]
  int v310; // [rsp+0h] [rbp-148h]
  int v311; // [rsp+0h] [rbp-148h]
  int v312[2]; // [rsp+0h] [rbp-148h]
  int v313; // [rsp+8h] [rbp-140h]
  int v314[2]; // [rsp+8h] [rbp-140h]
  char *v315; // [rsp+8h] [rbp-140h]
  int v316[2]; // [rsp+8h] [rbp-140h]
  int v317; // [rsp+8h] [rbp-140h]
  int v319; // [rsp+10h] [rbp-138h]
  int *v320; // [rsp+10h] [rbp-138h]
  __int64 v321; // [rsp+10h] [rbp-138h]
  int v322; // [rsp+10h] [rbp-138h]
  int v323; // [rsp+18h] [rbp-130h]
  __int64 v324; // [rsp+18h] [rbp-130h]
  int v325; // [rsp+18h] [rbp-130h]
  int v326; // [rsp+18h] [rbp-130h]
  __int64 v327; // [rsp+20h] [rbp-128h]
  int v328; // [rsp+28h] [rbp-120h]
  unsigned int v329; // [rsp+28h] [rbp-120h]
  int v330; // [rsp+28h] [rbp-120h]
  int *v331; // [rsp+28h] [rbp-120h]
  int *v332; // [rsp+28h] [rbp-120h]
  __int64 v333; // [rsp+28h] [rbp-120h]
  _DWORD *v334; // [rsp+30h] [rbp-118h]
  int *v335; // [rsp+30h] [rbp-118h]
  int v336; // [rsp+30h] [rbp-118h]
  __int64 v337; // [rsp+30h] [rbp-118h]
  __int64 v338; // [rsp+30h] [rbp-118h]
  int *v339; // [rsp+30h] [rbp-118h]
  __int64 v340; // [rsp+38h] [rbp-110h]
  int *v341; // [rsp+40h] [rbp-108h]
  int v342[2]; // [rsp+48h] [rbp-100h]
  int v343; // [rsp+48h] [rbp-100h]
  int v344; // [rsp+48h] [rbp-100h]
  int v345; // [rsp+48h] [rbp-100h]
  int v346; // [rsp+48h] [rbp-100h]
  char v347; // [rsp+48h] [rbp-100h]
  __int64 v348; // [rsp+50h] [rbp-F8h]
  _DWORD *v349; // [rsp+58h] [rbp-F0h]
  int *v350; // [rsp+58h] [rbp-F0h]
  __int64 v351; // [rsp+58h] [rbp-F0h]
  __int64 v352; // [rsp+60h] [rbp-E8h]
  __int64 v353; // [rsp+60h] [rbp-E8h]
  __int64 *v354; // [rsp+60h] [rbp-E8h]
  __int64 v355; // [rsp+60h] [rbp-E8h]
  __int64 v356; // [rsp+60h] [rbp-E8h]
  int v357; // [rsp+68h] [rbp-E0h]
  int v358[2]; // [rsp+68h] [rbp-E0h]
  unsigned int v359; // [rsp+70h] [rbp-D8h]
  __int64 v360; // [rsp+70h] [rbp-D8h]
  int v361; // [rsp+70h] [rbp-D8h]
  __int64 v362; // [rsp+70h] [rbp-D8h]
  int *v363; // [rsp+78h] [rbp-D0h]
  char *v364; // [rsp+78h] [rbp-D0h]
  __int64 v365; // [rsp+78h] [rbp-D0h]
  __int64 v366; // [rsp+80h] [rbp-C8h]
  __int64 v367; // [rsp+88h] [rbp-C0h]
  __int64 v368; // [rsp+90h] [rbp-B8h]
  __int64 v370; // [rsp+A8h] [rbp-A0h]
  __int64 v371; // [rsp+B0h] [rbp-98h]
  __int64 v372; // [rsp+B0h] [rbp-98h]
  __int64 v373; // [rsp+B8h] [rbp-90h]
  __m128d v374; // [rsp+D0h] [rbp-78h]
  __int64 v375; // [rsp+E0h] [rbp-68h]
  __int64 v376; // [rsp+F0h] [rbp-58h]
  int v377; // [rsp+F8h] [rbp-50h]
  int v378; // [rsp+FCh] [rbp-4Ch]
  int v380; // [rsp+104h] [rbp-44h]

  v10 = 0;
  v14 = *(_DWORD *)(a1 + 512) <= -2;
  v15 = *(_QWORD *)(a1 + 504);
  v16 = *(_QWORD *)(a1 + 648);
  v17 = *(_QWORD *)(a1 + 232);
  v18 = *(_QWORD *)(a1 + 600);
  v19 = *(_QWORD *)(a1 + 624);
  v20 = *(_QWORD *)(a1 + 184);
  if ( v14 )
    v15 = 0;
  v21 = *(_QWORD *)(a1 + 208);
  v22 = *(_QWORD *)(a1 + 712);
  v23 = *(_QWORD *)(a1 + 736);
  if ( *(int *)(a1 + 656) <= -2 )
    v16 = 0;
  v366 = v16;
  if ( *(int *)(a1 + 240) <= -2 )
    v17 = 0;
  v370 = v17;
  if ( *(int *)(a1 + 608) <= -2 )
    v18 = 0;
  if ( *(int *)(a1 + 632) <= -2 )
    v19 = 0;
  if ( *(int *)(a1 + 192) <= -2 )
    v20 = 0;
  v327 = v20;
  if ( *(int *)(a1 + 216) <= -2 )
    v21 = 0;
  v340 = v21;
  if ( *(int *)(a1 + 720) <= -2 )
    v22 = 0;
  v24 = *(int **)(a1 + 448);
  if ( *(int *)(a1 + 744) <= -2 )
    v23 = 0;
  if ( *(int *)(a1 + 456) <= -2 )
    v24 = nullptr;
  v341 = v24;
  v25 = *(_QWORD *)(a1 + 400);
  if ( *(int *)(a1 + 408) <= -2 )
    v25 = 0;
  v348 = v25;
  if ( *(int *)(a1 + 432) > -2 )
    v10 = *(_QWORD *)(a1 + 424);
  *(_QWORD *)v342 = v10;
  v376 = 4LL * a2;
  v334 = (_DWORD *)(v376 + v21);
  v380 = *(_DWORD *)(v376 + v21);
  v26 = *(_DWORD *)(v16 + 4LL * a3);
  v27 = (_DWORD *)(v17 + 4LL * a3);
  v28 = *(_DWORD *)(v20 + v376);
  v378 = v380 - 1;
  v323 = v26;
  v349 = v27;
  v306 = v380 - 1 + v28;
  v377 = *v27;
  v313 = v380 + v28;
  v357 = *v27 - 1;
  if ( a5 < 0 )
  {
    if ( v28 >= *v334 + v28 || (v284 = (int *)(v15 + 4LL * v28), v285 = *v284, a3 == *v284) )
    {
      a5 = v28;
      v48 = 0;
    }
    else
    {
      v286 = 1;
      do
      {
        v48 = v286;
        v341[v286 - 1] = v285;
        a5 = v28 + v286;
        if ( (unsigned int)v378 + 1LL == v286 )
          break;
        v285 = v284[v286++];
      }
      while ( a3 != v285 );
    }
  }
  else
  {
    if ( v28 < a5 )
    {
      v29 = v28;
      v30 = a5 - v28;
      v352 = 4LL * v28;
      v31 = v15 + v352;
      if ( ((unsigned __int64)v341 >= v15 + v352 + 16 || v15 + v352 >= (unsigned __int64)(v341 + 4)) && v30 > 0xC )
      {
        v32 = -(int)(v31 >> 2) & 3;
        if ( (int)v32 + 3 > (unsigned int)(a5 - 1 - v28) )
        {
          v43 = 0;
        }
        else
        {
          v328 = 0;
          if ( (_DWORD)v32 )
          {
            *v341 = *(_DWORD *)(v15 + 4LL * v28);
            if ( (_DWORD)v32 == 1 )
            {
              ++v28;
              v328 = 1;
            }
            else
            {
              v341[1] = *(_DWORD *)(v15 + 4LL * (v28 + 1));
              v33 = v28 + 2;
              if ( (_DWORD)v32 == 2 )
              {
                v28 += 2;
                v328 = 2;
              }
              else
              {
                v28 += 3;
                v328 = 3;
                v341[2] = *(_DWORD *)(v15 + 4LL * v33);
              }
            }
          }
          v34 = 0;
          v35 = v30 - v32;
          v36 = v32;
          v37 = v35;
          v359 = v35;
          v38 = 0;
          v39 = v36 * 4 + v352;
          v40 = &v341[v36];
          v41 = v37 >> 2;
          v42 = v15 + v39;
          do
          {
            ++v34;
            *(__m128i *)&v40[v38] = _mm_load_si128((const __m128i *)(v42 + v38 * 4));
            v38 += 4;
          }
          while ( v34 < v41 );
          v28 += v359 & 0xFFFFFFFC;
          v43 = (v359 & 0xFFFFFFFC) + v328;
          v29 = v28;
          if ( (v359 & 0xFFFFFFFC) == v359 )
            goto LABEL_43;
        }
        v341[v43] = *(_DWORD *)(v15 + 4 * v29);
        if ( a5 > v28 + 1 )
        {
          v341[v43 + 1] = *(_DWORD *)(v15 + 4LL * (v28 + 1));
          if ( a5 > v28 + 2 )
          {
            v341[v43 + 2] = *(_DWORD *)(v15 + 4LL * (v28 + 2));
            if ( a5 > v28 + 3 )
            {
              v44 = v43 + 4;
              v341[v43 + 3] = *(_DWORD *)(v15 + 4LL * (v28 + 3));
              v45 = v28 + 4;
              if ( a5 > v28 + 4 )
              {
                v46 = v28 + 5;
                v47 = v43 + 5;
                v341[v44] = *(_DWORD *)(v15 + 4LL * v45);
                if ( a5 > v46 )
                  v341[v47] = *(_DWORD *)(v15 + 4LL * v46);
              }
            }
          }
        }
      }
      else
      {
        v287 = (unsigned int)(a5 - 1 - v28);
        v288 = 0;
        v289 = 4 * v287 + 4;
        do
        {
          v341[v288 / 4] = *(_DWORD *)(v31 + v288);
          v288 += 4LL;
        }
        while ( v289 != v288 );
      }
LABEL_43:
      v48 = v30;
      goto LABEL_44;
    }
    v48 = 0;
  }
LABEL_44:
  v49 = a5 + 1;
  if ( v313 <= a5 + 1 )
    goto LABEL_62;
  v50 = v48;
  v329 = v306 - a5;
  v51 = 4 * (a5 + 1LL);
  v52 = &v341[v48];
  v53 = v15 + v51 + 16;
  v54 = v15 + v51;
  if ( v54 < (unsigned __int64)&v341[v48 + 4] && (unsigned __int64)v52 < v53 || v329 <= 0xC )
  {
    v305 = 0;
    do
    {
      v52[v305 / 4] = *(_DWORD *)(v54 + v305);
      v305 += 4LL;
    }
    while ( 4LL * (unsigned int)(v306 - 1 - a5) + 4 != v305 );
    goto LABEL_62;
  }
  v55 = -(int)(v54 >> 2) & 3;
  if ( v55 + 3 > v306 - 1 - a5 )
    goto LABEL_56;
  v307 = v48;
  if ( v55 )
  {
    v307 = v48 + 1;
    v56 = *(_DWORD *)(v15 + 4LL * v49);
    v49 = a5 + 2;
    v341[v48] = v56;
    if ( v55 != 1 )
    {
      v307 = v48 + 2;
      v341[v48 + 1] = *(_DWORD *)(v15 + 4LL * v49);
      v49 = a5 + 3;
      if ( v55 != 2 )
      {
        v307 = v48 + 3;
        v341[v48 + 2] = *(_DWORD *)(v15 + 4LL * v49);
        v49 = a5 + 4;
      }
    }
  }
  v57 = v329 - v55;
  v58 = &v341[v48 + v55];
  v59 = (v329 - v55) >> 2;
  v60 = 0;
  v61 = v15 + 4 * (v55 + a5 + 1LL);
  v62 = 0;
  do
  {
    ++v62;
    *(__m128i *)&v58[v60] = _mm_load_si128((const __m128i *)(v61 + v60 * 4));
    v60 += 4;
  }
  while ( v62 < v59 );
  v49 += v57 & 0xFFFFFFFC;
  v48 = (v57 & 0xFFFFFFFC) + v307;
  if ( (v57 & 0xFFFFFFFC) != v57 )
  {
    v50 = v48;
LABEL_56:
    v341[v50] = *(_DWORD *)(v15 + 4LL * v49);
    if ( v49 + 1 < v313 )
    {
      v341[v48 + 1] = *(_DWORD *)(v15 + 4LL * (v49 + 1));
      if ( v313 > v49 + 2 )
      {
        v341[v48 + 2] = *(_DWORD *)(v15 + 4LL * (v49 + 2));
        if ( v313 > v49 + 3 )
        {
          v63 = v48 + 4;
          v341[v48 + 3] = *(_DWORD *)(v15 + 4LL * (v49 + 3));
          v64 = v49 + 4;
          if ( v313 > v49 + 4 )
          {
            v65 = v49 + 5;
            v66 = v48 + 5;
            v341[v63] = *(_DWORD *)(v15 + 4LL * v64);
            if ( v313 > v65 )
              v341[v66] = *(_DWORD *)(v15 + 4LL * v65);
          }
        }
      }
    }
  }
LABEL_62:
  v67 = *(int *)(v376 + v348);
  v68 = *(int *)(v376 + *(_QWORD *)v342);
  *(_DWORD *)(v348 + 4 * v68) = v67;
  *(_DWORD *)(*(_QWORD *)v342 + 4 * v67) = v68;
  *(_DWORD *)(v376 + v348) = *(_DWORD *)(a1 + 56);
  *(_DWORD *)(v376 + *(_QWORD *)v342) = -2;
  *v334 = 0;
  v69 = *(_DWORD *)(a1 + 704);
  v70 = v69 + v357;
  v308 = v69;
  if ( v69 + v357 <= *(_DWORD *)(a1 + 708) )
  {
    v72 = *(_QWORD *)(a1 + 760);
    v73 = *(_DWORD *)(a1 + 704);
    if ( *(int *)(a1 + 768) <= -2 )
      v72 = 0;
    v343 = v357 + v323;
    v330 = v357 + v323 + 1;
    *(_DWORD *)(v72 + 4LL * *(int *)(a1 + 60)) = v69;
    v74 = *(_DWORD *)(a1 + 60) + 1;
    *(_DWORD *)(a1 + 60) = v74;
    *(_DWORD *)(v72 + 4LL * v74) = v70;
    *(_DWORD *)(a1 + 704) += v357;
    if ( a4 < 0 )
    {
      v86 = v323;
      if ( v323 >= v330 || (v339 = (int *)(v19 + 4LL * v323), v290 = *v339, a2 == (_DWORD)v290) )
      {
        v87 = v323;
        v85 = v308;
        *(_QWORD *)v314 = v308;
      }
      else
      {
        v356 = v22;
        v291 = v18 + 8LL * v323;
        v292 = v323 + 1LL;
        v362 = v23;
        v365 = v18;
        v293 = 0;
        *(_QWORD *)v314 = v73;
        v326 = v323 + 1;
        v372 = a6;
        v294 = v22 + 8LL * v73;
        v295 = v23 + 4LL * v73;
        v296 = v292;
        do
        {
          v297 = *(_QWORD *)(v291 + 8 * v293);
          *(_DWORD *)(v295 + 4 * v293) = v290;
          v85 = v73 + 1 + v293;
          v298 = (_DWORD *)(v340 + 4 * v290);
          *(_QWORD *)(v294 + 8 * v293) = v297;
          *(_DWORD *)(a9 + 4 * v290) = v293;
          v299 = *(int *)(v327 + 4 * v290);
          v300 = v299 + *v298;
          v301 = 4 * v299;
          v302 = (_DWORD *)(v15 + v301);
          if ( a3 != *(_DWORD *)(v15 + v301) )
          {
            v303 = v15 + v301 + 4;
            do
            {
              v302 = (_DWORD *)v303;
              v303 += 4;
            }
            while ( *(_DWORD *)(v303 - 4) != a3 );
          }
          v304 = v326 + v293;
          *v302 = *(_DWORD *)(v15 + 4LL * v300 - 4);
          --*v298;
          v86 = v296 + v293;
          if ( v357 == v293 )
            break;
          v290 = v339[++v293];
        }
        while ( a2 != (_DWORD)v290 );
        v322 = v304;
        v22 = v356;
        v23 = v362;
        v18 = v365;
        a6 = v372;
        v87 = v322;
      }
    }
    else if ( v323 >= a4 )
    {
      v87 = a4;
      v85 = v73;
      *(_QWORD *)v314 = v73;
      v86 = a4;
    }
    else
    {
      v75 = v22 + 8LL * v308;
      *(_QWORD *)v314 = v308;
      v76 = 0;
      v353 = v22;
      do
      {
        v77 = *(int *)(v19 + 4LL * v323 + 4 * v76);
        v78 = *(_QWORD *)(v18 + 8LL * v323 + 8 * v76);
        v79 = (_DWORD *)(v340 + 4 * v77);
        *(_DWORD *)(a9 + 4 * v77) = v76;
        *(_DWORD *)(v23 + 4LL * v308 + 4 * v76) = v77;
        v80 = *(int *)(v327 + 4 * v77);
        *(_QWORD *)(v75 + 8 * v76) = v78;
        v81 = v80 + *v79;
        v82 = 4 * v80;
        v83 = (_DWORD *)(v15 + v82);
        if ( a3 != *(_DWORD *)(v15 + v82) )
        {
          v84 = v15 + v82 + 4;
          do
          {
            v83 = (_DWORD *)v84;
            v84 += 4;
          }
          while ( *(_DWORD *)(v84 - 4) != a3 );
        }
        ++v76;
        *v83 = *(_DWORD *)(v15 + 4LL * v81 - 4);
        --*v79;
      }
      while ( (unsigned int)(a4 - 1 - v323) + 1LL != v76 );
      v22 = v353;
      v85 = a4 + v308 - v323;
      v86 = a4;
      v87 = a4;
    }
    v88 = (__m128d)0x3FF0000000000000uLL;
    v88.m128d_f64[0] = 1.0 / *(double *)(v18 + 8 * v86);
    v89 = *(_QWORD *)(a1 + 552);
    if ( *(int *)(a1 + 560) <= -2 )
      v89 = 0;
    *(double *)(v89 + 8LL * *(int *)(a1 + 56)) = v88.m128d_f64[0];
    v90 = v87 + 1;
    if ( v330 > v87 + 1 )
    {
      v91 = v85;
      v92 = v85 + 1LL;
      v324 = v19;
      v93 = v92 + (unsigned int)(v343 - 1 - v87);
      v94 = v18 + -8LL * v85 + 8LL * v90;
      v95 = v19 + -4LL * v85 + 4LL * v90;
      while ( 1 )
      {
        v96 = *(int *)(v95 + 4 * v91);
        v97 = *(_QWORD *)(v94 + 8 * v91);
        v98 = (_DWORD *)(v340 + 4 * v96);
        *(_DWORD *)(a9 + 4 * v96) = v91 - v308;
        *(_DWORD *)(v23 + 4 * v91) = v96;
        *(_QWORD *)(v22 + 8 * v91) = v97;
        v99 = *(int *)(v327 + 4 * v96);
        v100 = v99 + *v98;
        v101 = 4 * v99;
        v102 = (_DWORD *)(v15 + v101);
        if ( a3 != *(_DWORD *)(v15 + v101) )
        {
          v103 = v15 + v101 + 4;
          do
          {
            v102 = (_DWORD *)v103;
            v103 += 4;
          }
          while ( *(_DWORD *)(v103 - 4) != a3 );
        }
        *v102 = *(_DWORD *)(v15 + 4LL * v100 - 4);
        --*v98;
        v91 = v92;
        if ( v93 == v92 )
          break;
        ++v92;
      }
      v19 = v324;
    }
    *(_DWORD *)(a9 + 4LL * a2) = a10;
    *v349 = 0;
    v373 = v23 + 4LL * *(_QWORD *)v314;
    v375 = v22 + 8LL * *(_QWORD *)v314;
    if ( v357 > 0 )
    {
      v104 = ((unsigned __int64)(v22 + 8LL * *(_QWORD *)v314) >> 3) & 1;
      v105 = 0;
      if ( (unsigned int)(v377 - 2) <= 1 )
        goto LABEL_93;
      if ( (_DWORD)v104 )
      {
        v105 = 1;
        *(double *)(v22 + 8LL * *(_QWORD *)v314) = *(double *)(v22 + 8LL * *(_QWORD *)v314) * v88.m128d_f64[0];
      }
      v106 = 0;
      v107 = _mm_unpacklo_pd(v88, v88);
      v108 = v357 - v104;
      v109 = (unsigned int)(v357 - v104) >> 1;
      v110 = v22 + 8 * (*(_QWORD *)v314 + v104);
      v111 = 0;
      do
      {
        ++v106;
        *(__m128d *)(v110 + v111) = _mm_mul_pd(*(__m128d *)(v110 + v111), v107);
        v111 += 16;
      }
      while ( v106 < v109 );
      v105 += v108 & 0xFFFFFFFE;
      if ( (v108 & 0xFFFFFFFE) != v108 )
      {
LABEL_93:
        v112 = v105;
        v113 = v105 + 1;
        *(double *)(v375 + 8 * v112) = *(double *)(v375 + 8 * v112) * v88.m128d_f64[0];
        if ( v113 < v357 )
          *(double *)(v375 + 8LL * v113) = v88.m128d_f64[0] * *(double *)(v375 + 8LL * v113);
      }
    }
    if ( a8 * v378 > 0 )
    {
      *(_QWORD *)v309 = a6;
      memset(s, 0, 4LL * (unsigned int)(a8 * v378 - 1) + 4);
      a6 = *(_QWORD *)v309;
    }
    v325 = v378 * v357;
    v114 = 0;
    if ( *(int *)(a1 + 360) > -2 )
      v114 = *(_QWORD *)(a1 + 352);
    v371 = v114;
    if ( v378 <= 0 )
      goto LABEL_153;
    v115 = (__m128d)_mm_loadl_epi64((const __m128i *)&xmmword_289DB0);
    v360 = v15;
    v331 = v341;
    v116 = v115;
    v310 = a10 + 1;
    v117 = a6;
    v315 = s;
    v118 = v341;
    while ( 1 )
    {
      v119 = *v118;
      v344 = v119;
      v368 = v119;
      v367 = 4 * v119;
      v120 = *(_DWORD *)(4 * v119 + v366);
      v363 = (int *)(4 * v119 + v366);
      v335 = (int *)(4 * v119 + v370);
      v121 = v120 + *v335;
      v122 = 4LL * v120;
      v123 = 8LL * v120;
      v354 = (__int64 *)(v18 + v123);
      v124 = (__m128d)*(unsigned __int64 *)(v18 + v123);
      v350 = (int *)(v19 + v122);
      v125 = *(int *)(v19 + v122);
      v126 = *(_DWORD *)(a9 + 4 * v125);
      v319 = v120 + 1;
      if ( v126 == v310 )
      {
        v273 = (_QWORD *)(v18 + v123 + 8);
        v274 = (_DWORD *)(v19 + v122 + 4);
        v144 = v120 + 2;
        v131 = _mm_and_pd(v124, (__m128d)xmmword_289DB0);
        if ( v121 > v120 + 1 )
        {
          v275 = v120 + 1;
          v129 = v120 + 1;
          v276 = v275 + 1;
          v124.m128d_f64[0] = 0.0;
          v277 = v275 + 1 + (unsigned int)(*v335 - 2);
          while ( 1 )
          {
            v278 = *(_DWORD *)(v19 + 4 * v275);
            v279 = *(double *)(v18 + 8 * v275);
            v280 = *(_DWORD *)(a9 + 4LL * v278);
            v281 = 4LL * v129;
            v282 = 8LL * v129;
            v139 = (double *)(v18 + v282);
            v140 = (_DWORD *)(v19 + v281);
            if ( v310 == v280 )
            {
              ++v129;
              *v140 = v278;
              *v139 = v279;
              v140 = (_DWORD *)(v19 + v281 + 4);
              v139 = (double *)(v18 + v282 + 8);
              v275 = v276;
              if ( v277 == v276 )
                goto LABEL_257;
            }
            else
            {
              if ( a10 == v280 )
              {
                v124.m128d_f64[0] = v279;
              }
              else
              {
                --v325;
                *(double *)(v117 + 8LL * v280) = v279;
                *(_DWORD *)&v315[4 * (v280 >> 5)] |= 1 << v280;
              }
              v275 = v276;
              if ( v277 == v276 )
              {
LABEL_257:
                v130 = v120;
LABEL_114:
                v142 = v354;
                v143 = v350;
                v144 = v129 + 1;
                goto LABEL_115;
              }
            }
            ++v276;
          }
        }
        *v273 = *(_QWORD *)&v124.m128d_f64[0];
        v129 = v120 + 1;
        *v274 = v125;
        v124.m128d_f64[0] = 0.0;
      }
      else
      {
        if ( a10 != v126 )
        {
          *(double *)(v117 + 8LL * v126) = v124.m128d_f64[0];
          --v325;
          v124.m128d_f64[0] = 0.0;
          *(_DWORD *)&v315[4 * (v126 >> 5)] |= 1 << v126;
        }
        if ( v121 > v319 )
        {
          v127 = v319;
          v128 = (unsigned int)(v121 - v120 - 2);
          v129 = v120;
          v130 = -1;
          v131 = 0;
          v132 = v319 + 1LL;
          v133 = v132 + v128;
          while ( 1 )
          {
            v134 = *(_DWORD *)(v19 + 4 * v127);
            v135 = (__m128d)*(unsigned __int64 *)(v18 + 8 * v127);
            v136 = *(_DWORD *)(a9 + 4LL * v134);
            v137 = 4LL * v129;
            v138 = 8LL * v129;
            v139 = (double *)(v18 + v138);
            v140 = (_DWORD *)(v19 + v137);
            if ( v136 == v310 )
            {
              *v140 = v134;
              *v139 = v135.m128d_f64[0];
              v140 = (_DWORD *)(v19 + v137 + 4);
              v141 = _mm_and_pd(v135, v115);
              v139 = (double *)(v18 + v138 + 8);
              v127 = v132;
              v14 = v141.m128d_f64[0] <= v131.m128d_f64[0];
              v141.m128d_f64[0] = fmax(v141.m128d_f64[0], v131.m128d_f64[0]);
              if ( !v14 )
                v130 = v129;
              ++v129;
              v131 = v141;
              if ( v133 == v132 )
                goto LABEL_114;
            }
            else
            {
              if ( a10 == v136 )
              {
                v124.m128d_f64[0] = v135.m128d_f64[0];
              }
              else
              {
                --v325;
                *(double *)(v117 + 8LL * v136) = v135.m128d_f64[0];
                *(_DWORD *)&v315[4 * (v136 >> 5)] |= 1 << v136;
              }
              v127 = v132;
              if ( v133 == v132 )
                goto LABEL_114;
            }
            ++v132;
          }
        }
        v140 = (_DWORD *)(v19 + v122);
        v139 = (double *)(v18 + v123);
        v144 = v120 + 1;
        v129 = v120;
        v130 = -1;
        v131 = 0;
        v142 = v354;
        v143 = v350;
LABEL_115:
        v145 = *v142;
        v146 = *v143;
        *(_QWORD *)v139 = v145;
        *v140 = v146;
        if ( v120 != v130 )
          goto LABEL_116;
      }
      v130 = v129;
LABEL_116:
      *v354 = *(_QWORD *)&v124.m128d_f64[0];
      *v350 = a2;
      v147 = *(_QWORD *)(a1 + 256);
      *v335 = v144 - v319;
      if ( *(int *)(a1 + 264) <= -2 )
        v147 = 0;
      ++*(_DWORD *)(v147 + v367);
      ++*v363;
      if ( v357 > *(_DWORD *)(v366 + 4LL * *(int *)(v371 + 4 * v368))
                - v144
                - *(_DWORD *)(v147 + 4LL * *(int *)(v371 + 4 * v368)) )
      {
        v374 = v116;
        if ( !(unsigned __int8)CoinFactorization::getColumnSpace((CoinFactorization *)a1, v344, v357) )
          return 0;
        v116 = v374;
        v283 = v130 + *v363 - v319;
        v319 = *v363;
        v131 = (__m128d)*(unsigned __int64 *)&v131.m128d_f64[0];
        if ( v130 >= 0 )
          v130 = v283;
        v144 = *v363 + *v335;
      }
      v148 = *(_QWORD *)(a1 + 304);
      v149 = 0;
      v150 = *(double *)(a1 + 8);
      if ( *(int *)(a1 + 312) > -2 )
        v149 = *(_QWORD *)(a1 + 304);
      if ( v357 > 0 )
      {
        v151 = 0;
        v152 = (unsigned int)(v377 - 2) + 1LL;
        do
        {
          while ( 1 )
          {
            v155 = *(double *)(v375 + 8 * v151);
            v156 = (__m128d)*(unsigned __int64 *)(v117 + 8 * v151);
            *(_QWORD *)(v117 + 8 * v151) = 0;
            v156.m128d_f64[0] = v156.m128d_f64[0] - v155 * v124.m128d_f64[0];
            v154 = _mm_and_pd(v156, v116);
            if ( v154.m128d_f64[0] <= v150 )
              break;
            v153 = *(_DWORD *)(v373 + 4 * v151);
            *(double *)(v18 + 8LL * v144) = v156.m128d_f64[0];
            *(_DWORD *)(v19 + 4LL * v144) = v153;
            if ( v154.m128d_f64[0] > v131.m128d_f64[0] )
              v130 = v144;
            else
              v154 = v131;
            v131 = v154;
            ++v144;
LABEL_126:
            if ( v152 == ++v151 )
              goto LABEL_130;
          }
          v157 = 1 << v151;
          --v325;
          v158 = &v315[4 * ((int)v151 >> 5)];
          if ( ((1 << v151) & *(_DWORD *)v158) != 0 )
          {
            v266 = *(int *)(v373 + 4 * v151);
            v267 = (_DWORD *)(v340 + 4 * v266);
            v268 = *(int *)(v327 + 4 * v266);
            v269 = v268 + *v267;
            v270 = 4 * v268;
            v271 = (_DWORD *)(v270 + v360);
            if ( v344 != *(_DWORD *)(v270 + v360) )
            {
              v272 = v360 + v270 + 4;
              do
              {
                v271 = (_DWORD *)v272;
                v272 += 4;
              }
              while ( *(_DWORD *)(v272 - 4) != v344 );
            }
            *v271 = *(_DWORD *)(v360 + 4LL * v269 - 4);
            --*v267;
            goto LABEL_126;
          }
          ++v151;
          *(_DWORD *)v158 |= v157;
        }
        while ( v152 != v151 );
      }
LABEL_130:
      *v335 = v144 - v319;
      if ( v130 >= 0 )
      {
        v159 = (__int64 *)(v18 + 8LL * v319);
        v160 = (__int64 *)(v18 + 8LL * v130);
        v161 = (int *)(v19 + 4LL * v130);
        v162 = *v160;
        v163 = *v161;
        *v160 = *v159;
        v164 = (int *)(v19 + 4LL * v319);
        *v161 = *v164;
        *v159 = v162;
        *v164 = v163;
      }
      v165 = 4LL * (*(_DWORD *)(a1 + 32) + v344);
      if ( *(_DWORD *)(v149 + v165) != -2 )
      {
        v166 = 0;
        v167 = *(_QWORD *)(a1 + 280);
        v168 = 0;
        v169 = 0;
        v170 = *(_QWORD *)(a1 + 328);
        if ( *(int *)(a1 + 312) > -2 )
          v168 = v148;
        v171 = (_DWORD *)(v168 + v165);
        v172 = *(int *)(v168 + 4LL * (*(_DWORD *)(a1 + 32) + v344));
        if ( *(int *)(a1 + 288) > -2 )
          v169 = *(_QWORD *)(a1 + 280);
        if ( *(int *)(a1 + 336) > -2 )
          v166 = *(_QWORD *)(a1 + 328);
        v173 = (int *)(v166 + v165);
        v174 = *v173;
        if ( *v173 < 0 )
          *(_DWORD *)(v169 + 4LL * (-2 - v174)) = v172;
        else
          *(_DWORD *)(v168 + 4LL * v174) = v172;
        if ( (int)v172 >= 0 )
          *(_DWORD *)(v166 + 4 * v172) = v174;
        *v171 = -2;
        *v173 = -2;
        v175 = *(_DWORD *)(a1 + 32) + v344;
        v176 = *v335;
        if ( *(int *)(a1 + 312) <= -2 )
          v148 = 0;
        if ( *(int *)(a1 + 288) <= -2 )
          v167 = 0;
        if ( *(int *)(a1 + 336) <= -2 )
          v170 = 0;
        v177 = (int *)(v167 + 4LL * v176);
        v178 = *v177;
        *(_DWORD *)(v170 + 4LL * v175) = -2 - v176;
        v179 = (_DWORD *)(v148 + 4LL * v175);
        *v177 = v175;
        if ( (int)v178 < 0 )
        {
          *v179 = -1;
        }
        else
        {
          *v179 = v178;
          *(_DWORD *)(v170 + 4 * v178) = v175;
        }
      }
      v118 = ++v331;
      v315 += 4 * a8;
      if ( &v341[v380 - 2 + 1] == v331 )
      {
        v15 = v360;
LABEL_153:
        v180 = v357 >> 5;
        if ( v357 >> 5 )
        {
          v181 = v15;
          v182 = v380 - 1;
          v345 = 0;
          v183 = 4LL * a8;
          v364 = &s[4 * (v180 - 1) + 4];
          do
          {
            *(_QWORD *)v316 = 0;
            v184 = v183;
            v185 = v182;
            do
            {
              v186 = v316[0];
              v311 = *(_DWORD *)(v373 + 4LL * v345 + 4LL * *(_QWORD *)v316);
              if ( v185 <= 0 )
              {
                v189 = 0;
              }
              else
              {
                v187 = (unsigned int *)s;
                v188 = 0;
                v189 = 0;
                do
                {
                  v190 = *v187;
                  ++v188;
                  v187 = (unsigned int *)((char *)v187 + v184);
                  v189 += ((v190 >> SLOBYTE(v316[0])) & 1) == 0;
                }
                while ( v188 != v185 );
              }
              v191 = 4LL * v311;
              v192 = (int *)(v327 + v191);
              v193 = (int *)(v327 + 4LL * *(int *)(v348 + v191));
              v194 = *(_DWORD *)(v327 + v191);
              v195 = *v193;
              v196 = (int *)(v340 + v191);
              v197 = *(_DWORD *)(v340 + v191);
              v198 = v197 + v189;
              if ( *v193 - v194 < v198 )
              {
                v361 = v185;
                if ( !(unsigned __int8)CoinFactorization::getRowSpace((CoinFactorization *)a1, v311, v198) )
                  return 0;
                v194 = *v192;
                v197 = *v196;
                v185 = v361;
                v186 = v316[0];
                v193 = (int *)(v327 + 4LL * *(int *)(v348 + 4LL * v311));
                v195 = *v193;
              }
              v199 = (int *)(v181 + 4 * v195);
              v200 = v194 + v197;
              v201 = *v199;
              if ( v185 > 0 )
              {
                v202 = v341;
                v203 = (unsigned int *)s;
                v336 = *v199;
                do
                {
                  v204 = *v203;
                  v205 = *v202++;
                  v203 = (unsigned int *)((char *)v203 + v184);
                  *(_DWORD *)(v181 + 4LL * v200) = v205;
                  v200 += ((v204 >> v186) & 1) == 0;
                }
                while ( &v341[v380 - 2 + 1] != v202 );
                v201 = v336;
                v199 = (int *)(v181 + 4LL * *v193);
              }
              *v199 = v201;
              v206 = *(_QWORD *)(a1 + 280);
              *(_DWORD *)(a9 + 4LL * v311) = a10 + 1;
              v207 = v200 - *v192;
              v208 = 0;
              v209 = *(_QWORD *)(a1 + 304);
              v210 = 0;
              *v196 = v207;
              v211 = 0;
              if ( *(int *)(a1 + 312) > -2 )
                v211 = v209;
              v212 = *(int *)(v211 + 4LL * v311);
              if ( *(int *)(a1 + 288) > -2 )
                v210 = v206;
              v337 = v210;
              v213 = *(_QWORD *)(a1 + 328);
              if ( *(int *)(a1 + 336) > -2 )
                v208 = *(_QWORD *)(a1 + 328);
              v214 = *(_DWORD *)(v208 + 4LL * v311);
              if ( v214 < 0 )
                *(_DWORD *)(v337 + 4LL * (-2 - v214)) = v212;
              else
                *(_DWORD *)(v211 + 4LL * v214) = v212;
              if ( (int)v212 >= 0 )
                *(_DWORD *)(v208 + 4 * v212) = v214;
              *(_DWORD *)(v211 + 4LL * v311) = -2;
              *(_DWORD *)(v208 + 4LL * v311) = -2;
              if ( *(int *)(a1 + 312) <= -2 )
                v209 = 0;
              if ( *(int *)(a1 + 288) <= -2 )
                v206 = 0;
              if ( *(int *)(a1 + 336) <= -2 )
                v213 = 0;
              v215 = (int *)(v206 + 4LL * v207);
              v216 = (_DWORD *)(v209 + v191);
              v217 = *v215;
              *(_DWORD *)(v213 + 4LL * v311) = -2 - v207;
              *v215 = v311;
              if ( (int)v217 < 0 )
              {
                *v216 = -1;
              }
              else
              {
                *v216 = v217;
                *(_DWORD *)(v213 + 4 * v217) = v311;
              }
              v180 = v345 + v316[0] + 1;
              ++*(_QWORD *)v316;
            }
            while ( *(_QWORD *)v316 != 32 );
            s += 4;
            v182 = v185;
            v183 = v184;
            v345 = v180;
          }
          while ( s != v364 );
          v15 = v181;
        }
        else
        {
          v364 = s;
        }
        if ( v357 <= v180 )
        {
          v255 = *(_QWORD *)(a1 + 280);
          v253 = *(_QWORD *)(a1 + 328);
          v346 = a10 + 1;
          v321 = *(_QWORD *)(a1 + 304);
          v254 = v321;
        }
        else
        {
          *(_QWORD *)v312 = 0;
          v355 = (unsigned int)(v377 - 2 - v180) + 1LL;
          *(_QWORD *)v358 = v373 + 4LL * v180;
          v218 = 0;
          v219 = 4LL * a8;
          do
          {
            v220 = v218;
            v317 = *(_DWORD *)(*(_QWORD *)v358 + 4 * v218);
            if ( v378 <= 0 )
            {
              v223 = 0;
            }
            else
            {
              v221 = (unsigned int *)v364;
              v222 = 0;
              v223 = 0;
              do
              {
                v224 = *v221;
                ++v222;
                v221 = (unsigned int *)((char *)v221 + v219);
                v223 += ((v224 >> v220) & 1) == 0;
              }
              while ( v222 != v378 );
            }
            v225 = v317;
            v226 = 4LL * v317;
            v227 = (int *)(v327 + 4LL * *(int *)(v348 + v226));
            v228 = *(_DWORD *)(v226 + v327);
            v320 = (int *)(v226 + v327);
            v229 = *v227;
            v332 = (int *)(v226 + v340);
            v230 = *(_DWORD *)(v226 + v340);
            if ( (int)v229 - v228 < v230 + v223 )
            {
              v347 = v220;
              if ( !(unsigned __int8)CoinFactorization::getRowSpace((CoinFactorization *)a1, v317, v230 + v223) )
                return 0;
              v225 = v317;
              v228 = *v320;
              v230 = *v332;
              v227 = (int *)(v327 + 4LL * *(int *)(v348 + 4LL * v317));
              v220 = v347;
              v229 = *v227;
            }
            v231 = (int *)(v15 + 4 * v229);
            v232 = v228 + v230;
            v233 = *v231;
            if ( v378 > 0 )
            {
              v234 = v341;
              v235 = (unsigned int *)v364;
              v338 = v225;
              do
              {
                v236 = *v235;
                v237 = *v234++;
                v235 = (unsigned int *)((char *)v235 + v219);
                *(_DWORD *)(v15 + 4LL * v232) = v237;
                v232 += ((v236 >> v220) & 1) == 0;
              }
              while ( &v341[v380 - 2 + 1] != v234 );
              v225 = v338;
              v231 = (int *)(v15 + 4LL * *v227);
            }
            *v231 = v233;
            v238 = *(_QWORD *)(a1 + 280);
            *(_DWORD *)(a9 + 4 * v225) = a10 + 1;
            v346 = a10 + 1;
            v239 = v232 - *v320;
            *v332 = v239;
            v240 = v239;
            v241 = *(_QWORD *)(a1 + 304);
            v321 = v241;
            v242 = 0;
            v243 = 0;
            if ( *(int *)(a1 + 312) <= -2 )
              v241 = 0;
            v244 = *(int *)(v241 + 4LL * v317);
            if ( *(int *)(a1 + 288) > -2 )
              v243 = v238;
            v351 = v243;
            if ( *(int *)(a1 + 336) > -2 )
              v242 = *(_QWORD *)(a1 + 328);
            v333 = *(_QWORD *)(a1 + 328);
            v245 = (_DWORD *)(v242 + v226);
            v246 = *(_DWORD *)(v242 + 4LL * v317);
            if ( v246 < 0 )
              *(_DWORD *)(v351 + 4LL * (-2 - v246)) = v244;
            else
              *(_DWORD *)(v241 + 4LL * v246) = v244;
            if ( (int)v244 >= 0 )
              *(_DWORD *)(v242 + 4 * v244) = v246;
            *(_DWORD *)(v241 + 4LL * v317) = -2;
            v247 = 0;
            *v245 = -2;
            v248 = v321;
            v249 = 0;
            if ( *(int *)(a1 + 312) <= -2 )
              v248 = 0;
            if ( *(int *)(a1 + 288) > -2 )
              v249 = v238;
            v250 = (int *)(v249 + 4LL * v240);
            if ( *(int *)(a1 + 336) > -2 )
              v247 = v333;
            v251 = (_DWORD *)(v226 + v248);
            v252 = *v250;
            *(_DWORD *)(v247 + 4 * v225) = -2 - v240;
            *v250 = v317;
            if ( (int)v252 < 0 )
            {
              *v251 = -1;
            }
            else
            {
              *v251 = v252;
              *(_DWORD *)(v247 + 4 * v252) = v317;
            }
            v218 = ++*(_QWORD *)v312;
          }
          while ( v355 != *(_QWORD *)v312 );
          v253 = v333;
          v254 = v321;
          v255 = v238;
        }
        *(_DWORD *)(a9 + 4LL * a2) = v346;
        v256 = 0;
        v257 = 0;
        if ( *(int *)(a1 + 312) <= -2 )
          v254 = 0;
        v258 = *(int *)(v254 + 4LL * a2);
        if ( *(int *)(a1 + 288) > -2 )
          v257 = v255;
        if ( *(int *)(a1 + 336) > -2 )
          v256 = v253;
        v259 = *(_DWORD *)(v256 + 4LL * a2);
        if ( v259 < 0 )
          *(_DWORD *)(v257 + 4LL * (-2 - v259)) = v258;
        else
          *(_DWORD *)(v254 + 4LL * v259) = v258;
        if ( (int)v258 >= 0 )
          *(_DWORD *)(v256 + 4 * v258) = v259;
        *(_DWORD *)(v254 + 4LL * a2) = -2;
        *(_DWORD *)(v256 + 4LL * a2) = -2;
        v260 = v321;
        if ( *(int *)(a1 + 312) <= -2 )
          v260 = 0;
        if ( *(int *)(a1 + 288) <= -2 )
          v255 = 0;
        if ( *(int *)(a1 + 336) <= -2 )
          v253 = 0;
        v261 = 4LL * (*(_DWORD *)(a1 + 32) + a3);
        v262 = (int *)(v260 + v261);
        v263 = (int *)(v253 + v261);
        v264 = *v263;
        v265 = *v262;
        if ( *v263 < 0 )
          *(_DWORD *)(v255 + 4LL * (-2 - v264)) = v265;
        else
          *(_DWORD *)(v260 + 4LL * v264) = v265;
        if ( (int)v265 >= 0 )
          *(_DWORD *)(v253 + 4 * v265) = v264;
        *v262 = -2;
        *v263 = -2;
        *(_DWORD *)(a1 + 72) += v325;
        return 1;
      }
    }
  }
  if ( (*(_BYTE *)(a1 + 496) & 4) != 0 )
    puts("more memory needed in middle of invert");
  return 0;
}

