__int64 __fastcall CoinFactorization::pivot<unsigned short>(
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
  CoinFactorization *v10; // r12
  __int64 v13; // r13
  __int64 v14; // rcx
  __int64 v15; // r9
  __int64 v16; // r15
  __int64 v17; // r14
  __int64 v18; // r10
  __int64 v19; // r8
  bool v20; // cc
  __int64 v21; // rdi
  __int64 v22; // r8
  __int64 v23; // rbp
  int *v24; // r8
  __int64 v25; // r8
  int v26; // ecx
  _DWORD *v27; // rax
  int v28; // edx
  int v29; // r10d
  __int64 v30; // rsi
  unsigned int v31; // r9d
  unsigned __int64 v32; // rax
  __int64 v33; // rax
  int v34; // ecx
  __int64 v35; // rcx
  unsigned int v36; // esi
  __int64 v37; // rax
  unsigned int v38; // r8d
  unsigned int v39; // esi
  __int64 v40; // rdi
  int *v41; // rax
  unsigned int v42; // r8d
  __int64 v43; // rdi
  unsigned int v44; // edi
  unsigned int v45; // esi
  int v46; // eax
  int v47; // edx
  unsigned int v48; // edi
  int v49; // esi
  int v50; // ecx
  __int64 v51; // rdi
  __int64 v52; // rax
  int *v53; // r8
  unsigned __int64 v54; // r9
  unsigned __int64 v55; // rax
  unsigned int v56; // edx
  int v57; // r10d
  int v58; // eax
  unsigned int v59; // edi
  int *v60; // rsi
  unsigned int v61; // r9d
  __int64 v62; // rax
  __int64 v63; // r8
  unsigned int v64; // edx
  int v65; // edi
  int v66; // eax
  int v67; // ecx
  int v68; // esi
  __int64 v69; // rax
  __int64 v70; // rdi
  int v71; // ebp
  __int64 v73; // rcx
  int v74; // eax
  __int64 v75; // r10
  __int64 v76; // r8
  __int64 v77; // rcx
  __int64 v78; // rdx
  __int64 v79; // xmm0_8
  _DWORD *v80; // rdi
  __int64 v81; // rax
  int v82; // ebp
  __int64 v83; // rax
  _DWORD *v84; // rdx
  __int64 v85; // rax
  int v86; // r10d
  __int64 v87; // rax
  __m128d v88; // xmm1
  __int64 v89; // rax
  int v90; // edx
  __int16 v91; // r8
  __int64 v92; // rbp
  __int64 v93; // rax
  __int64 v94; // r10
  __int64 v95; // r11
  __int64 v96; // r9
  __int64 v97; // rcx
  __int64 v98; // rdx
  __int64 v99; // xmm0_8
  _DWORD *v100; // rdi
  __int64 v101; // rax
  int v102; // r14d
  __int64 v103; // rax
  _DWORD *v104; // rdx
  __int64 v105; // rax
  unsigned __int64 v106; // rax
  int v107; // r8d
  unsigned int v108; // esi
  __m128d v109; // xmm2
  int v110; // ecx
  unsigned int v111; // edx
  __int64 v112; // rdi
  __int64 v113; // rax
  __int64 v114; // rax
  int v115; // r8d
  __int64 v116; // rax
  __m128d v117; // xmm7
  CoinFactorization *v118; // r13
  __m128d v119; // xmm5
  int *v120; // rax
  __int64 v121; // rax
  int v122; // r10d
  __int64 v123; // r8
  int v124; // edx
  __int64 v125; // rax
  int v126; // edx
  __m128d v127; // xmm3
  int v128; // esi
  int v129; // edi
  __int16 v130; // cx
  __int64 v131; // rax
  int v132; // esi
  int v133; // ebp
  __m128d v134; // xmm2
  __int64 v135; // rdi
  __int64 v136; // r13
  int v137; // r12d
  __m128d v138; // xmm0
  int v139; // edx
  __int64 v140; // r11
  __int64 v141; // rax
  double *v142; // r9
  _DWORD *v143; // r8
  __int16 v144; // cx
  __m128d v145; // xmm0
  double *v146; // rcx
  int v147; // eax
  __int64 v148; // rcx
  __int64 v149; // r12
  __int64 v150; // r11
  double v151; // xmm4_8
  __int64 v152; // rcx
  __int64 v153; // rdi
  int v154; // esi
  __m128d v155; // xmm1
  double v156; // xmm1_8
  __m128d v157; // xmm0
  int v158; // r8d
  char *v159; // rsi
  __int64 *v160; // rax
  __int64 *v161; // rcx
  int *v162; // rdx
  __int64 v163; // xmm0_8
  int v164; // esi
  int *v165; // rcx
  __int64 v166; // rax
  __int64 v167; // rdx
  __int64 v168; // rdi
  __int64 v169; // r10
  __int64 v170; // r11
  __int64 v171; // rcx
  _DWORD *v172; // r9
  __int64 v173; // rsi
  int *v174; // rax
  int v175; // r8d
  int v176; // esi
  int v177; // r8d
  int *v178; // rdi
  __int64 v179; // rax
  _DWORD *v180; // rdx
  int v181; // eax
  __int64 v182; // rbp
  int v183; // r13d
  __int64 v184; // r11
  __int64 v185; // rbx
  int v186; // r11d
  char v187; // cl
  unsigned int *v188; // rdi
  int v189; // esi
  int v190; // edx
  unsigned int v191; // eax
  __int64 v192; // r13
  int *v193; // r15
  int *v194; // r8
  int v195; // edi
  __int64 v196; // rsi
  int *v197; // r14
  int v198; // eax
  int v199; // edx
  int *v200; // rdx
  int v201; // eax
  int v202; // r9d
  int *v203; // rsi
  unsigned int *v204; // rdi
  unsigned int v205; // edx
  int v206; // r9d
  int v207; // eax
  __int64 v208; // r8
  __int64 v209; // rcx
  __int64 v210; // rdx
  __int64 v211; // r14
  __int64 v212; // rsi
  __int64 v213; // rdi
  __int64 v214; // rsi
  int v215; // r9d
  int *v216; // rdi
  _DWORD *v217; // r13
  __int64 v218; // rcx
  __int64 v219; // rax
  __int64 v220; // rbx
  char v221; // cl
  unsigned int *v222; // rdi
  int v223; // esi
  int v224; // eax
  unsigned int v225; // edx
  __int64 v226; // r8
  __int64 v227; // r15
  int *v228; // r9
  int v229; // r11d
  __int64 v230; // rdi
  int v231; // esi
  int *v232; // rax
  int v233; // esi
  int v234; // r10d
  int *v235; // rdx
  unsigned int *v236; // rdi
  unsigned int v237; // eax
  int v238; // r8d
  __int64 v239; // r10
  int v240; // esi
  int v241; // r11d
  __int64 v242; // r9
  __int64 v243; // rax
  __int64 v244; // rcx
  __int64 v245; // rdx
  _DWORD *v246; // rsi
  int v247; // ecx
  __int64 v248; // rax
  __int64 v249; // rcx
  __int64 v250; // rdx
  int *v251; // rsi
  _DWORD *v252; // rcx
  __int64 v253; // rdx
  __int64 v254; // r14
  __int64 v255; // rcx
  __int64 v256; // r15
  __int64 v257; // rax
  __int64 v258; // r9
  __int64 v259; // rdx
  int v260; // esi
  __int64 v261; // rbx
  __int64 v262; // rax
  int *v263; // rdi
  int *v264; // rax
  int v265; // esi
  __int64 v266; // rdx
  __int64 v267; // rsi
  _DWORD *v268; // r8
  __int64 v269; // rdx
  int v270; // r10d
  __int64 v271; // rdx
  _DWORD *v272; // rsi
  __int64 v273; // rdx
  _QWORD *v274; // rcx
  __int64 v275; // rax
  __int64 v276; // rdi
  __int64 v277; // rbp
  int v278; // r12d
  double v279; // xmm0_8
  int v280; // edx
  __int64 v281; // r11
  __int64 v282; // rax
  __int16 v283; // cx
  int v284; // eax
  int *v285; // r8
  int v286; // ecx
  __int64 v287; // rax
  __int64 v288; // rcx
  unsigned __int64 v289; // rdx
  __int64 v290; // rcx
  int *v291; // r11
  __int64 v292; // rcx
  __int64 v293; // r9
  __int64 v294; // r15
  __int64 v295; // rdx
  int v296; // edi
  __int64 v297; // rbp
  int v298; // r14d
  __int64 v299; // xmm0_8
  _DWORD *v300; // rdi
  __int64 v301; // rax
  int v302; // r8d
  __int64 v303; // rax
  _DWORD *v304; // rcx
  __int64 v305; // rax
  int v306; // ebx
  unsigned __int64 v307; // rdx
  int v308; // [rsp+8h] [rbp-150h]
  int v309; // [rsp+8h] [rbp-150h]
  int v310; // [rsp+8h] [rbp-150h]
  int v311[2]; // [rsp+8h] [rbp-150h]
  char *v313; // [rsp+10h] [rbp-148h]
  int v314[2]; // [rsp+10h] [rbp-148h]
  int v315; // [rsp+10h] [rbp-148h]
  int v316[2]; // [rsp+10h] [rbp-148h]
  __int64 v317; // [rsp+18h] [rbp-140h]
  int v318; // [rsp+18h] [rbp-140h]
  int *v319; // [rsp+18h] [rbp-140h]
  __int64 v320; // [rsp+18h] [rbp-140h]
  int v321; // [rsp+20h] [rbp-138h]
  __int64 v322; // [rsp+20h] [rbp-138h]
  int v323; // [rsp+20h] [rbp-138h]
  int v324; // [rsp+20h] [rbp-138h]
  __int64 v325; // [rsp+28h] [rbp-130h]
  __int64 v326; // [rsp+30h] [rbp-128h]
  int *v327; // [rsp+30h] [rbp-128h]
  int *v328; // [rsp+30h] [rbp-128h]
  __int64 v329; // [rsp+30h] [rbp-128h]
  int v330; // [rsp+38h] [rbp-120h]
  unsigned int v331; // [rsp+38h] [rbp-120h]
  __int64 v332; // [rsp+38h] [rbp-120h]
  int *v333; // [rsp+38h] [rbp-120h]
  int v334; // [rsp+38h] [rbp-120h]
  __int64 v335; // [rsp+38h] [rbp-120h]
  __int64 v336; // [rsp+38h] [rbp-120h]
  __int64 v337; // [rsp+40h] [rbp-118h]
  int *v338; // [rsp+48h] [rbp-110h]
  _DWORD *v339; // [rsp+50h] [rbp-108h]
  int v340; // [rsp+50h] [rbp-108h]
  int v341; // [rsp+50h] [rbp-108h]
  int v342; // [rsp+50h] [rbp-108h]
  __int16 v343; // [rsp+50h] [rbp-108h]
  __int64 v344; // [rsp+58h] [rbp-100h]
  __int64 v345; // [rsp+60h] [rbp-F8h]
  _DWORD *v346; // [rsp+60h] [rbp-F8h]
  __int64 v347; // [rsp+60h] [rbp-F8h]
  char v348; // [rsp+60h] [rbp-F8h]
  _DWORD *v349; // [rsp+68h] [rbp-F0h]
  double *v350; // [rsp+68h] [rbp-F0h]
  __int64 v351; // [rsp+68h] [rbp-F0h]
  int v352; // [rsp+70h] [rbp-E8h]
  int v353[2]; // [rsp+70h] [rbp-E8h]
  __int64 v354; // [rsp+78h] [rbp-E0h]
  int v355; // [rsp+78h] [rbp-E0h]
  unsigned int v356; // [rsp+80h] [rbp-D8h]
  int v357; // [rsp+80h] [rbp-D8h]
  __int64 v358; // [rsp+80h] [rbp-D8h]
  int v359; // [rsp+80h] [rbp-D8h]
  __int16 v360; // [rsp+80h] [rbp-D8h]
  int *v361; // [rsp+88h] [rbp-D0h]
  char *v362; // [rsp+88h] [rbp-D0h]
  __int64 v363; // [rsp+88h] [rbp-D0h]
  __int64 v364; // [rsp+90h] [rbp-C8h]
  __int64 v365; // [rsp+98h] [rbp-C0h]
  __int64 v366; // [rsp+98h] [rbp-C0h]
  __int64 v367; // [rsp+A0h] [rbp-B8h]
  __int64 v369; // [rsp+B8h] [rbp-A0h]
  __int64 v370; // [rsp+C0h] [rbp-98h]
  __int64 v371; // [rsp+C0h] [rbp-98h]
  __int64 v372; // [rsp+C8h] [rbp-90h]
  __m128d v373; // [rsp+E0h] [rbp-78h]
  __int64 v374; // [rsp+F0h] [rbp-68h]
  CoinFactorization *v375; // [rsp+F8h] [rbp-60h]
  int v376; // [rsp+100h] [rbp-58h]
  int v377; // [rsp+104h] [rbp-54h]
  __int64 v378; // [rsp+108h] [rbp-50h]
  int v380; // [rsp+114h] [rbp-44h]
  _WORD *v381; // [rsp+118h] [rbp-40h]

  v10 = (CoinFactorization *)a1;
  v13 = *(_QWORD *)(a1 + 504);
  v14 = *(_QWORD *)(a1 + 648);
  v15 = *(_QWORD *)(a1 + 232);
  v16 = *(_QWORD *)(a1 + 600);
  v17 = *(_QWORD *)(a1 + 624);
  v18 = *(_QWORD *)(a1 + 184);
  if ( *(int *)(a1 + 512) <= -2 )
    v13 = 0;
  v19 = *(_QWORD *)(a1 + 712);
  if ( *(int *)(a1 + 656) <= -2 )
    v14 = 0;
  v364 = v14;
  if ( *(int *)(a1 + 240) <= -2 )
    v15 = 0;
  v369 = v15;
  if ( *(int *)(a1 + 608) <= -2 )
    v16 = 0;
  if ( *(int *)(a1 + 632) <= -2 )
    v17 = 0;
  v20 = *(_DWORD *)(a1 + 192) <= -2;
  v21 = *(_QWORD *)(a1 + 208);
  if ( v20 )
    v18 = 0;
  v325 = v18;
  if ( *((int *)v10 + 54) <= -2 )
    v21 = 0;
  v337 = v21;
  if ( *((int *)v10 + 180) <= -2 )
    v19 = 0;
  v317 = v19;
  v22 = *((_QWORD *)v10 + 92);
  v23 = *((_QWORD *)v10 + 53);
  v345 = a2;
  if ( *((int *)v10 + 186) <= -2 )
    v22 = 0;
  v326 = v22;
  v24 = *((int **)v10 + 56);
  if ( *((int *)v10 + 114) <= -2 )
    v24 = nullptr;
  v338 = v24;
  v25 = *((_QWORD *)v10 + 50);
  if ( *((int *)v10 + 102) <= -2 )
    v25 = 0;
  v344 = v25;
  if ( *((int *)v10 + 108) <= -2 )
    v23 = 0;
  v378 = 4LL * a2;
  v339 = (_DWORD *)(v378 + v21);
  v380 = *(_DWORD *)(v378 + v21);
  v26 = *(_DWORD *)(v14 + 4LL * a3);
  v27 = (_DWORD *)(v15 + 4LL * a3);
  v28 = *(_DWORD *)(v18 + v378);
  v377 = v380 - 1;
  v349 = v27;
  v29 = v380 - 1 + v28;
  v321 = v26;
  v376 = *v27;
  v352 = *v27 - 1;
  v308 = v380 + v28;
  if ( a5 < 0 )
  {
    if ( v28 >= *v339 + v28 || (v285 = (int *)(v13 + 4LL * v28), v286 = *v285, a3 == *v285) )
    {
      a5 = v28;
      v49 = 0;
    }
    else
    {
      v287 = 1;
      do
      {
        v49 = v287;
        v338[v287 - 1] = v286;
        a5 = v28 + v287;
        if ( (unsigned int)v377 + 1LL == v287 )
          break;
        v286 = v285[v287++];
      }
      while ( a3 != v286 );
      v29 = v377 + v28;
    }
  }
  else
  {
    if ( v28 < a5 )
    {
      v30 = v28;
      v31 = a5 - v28;
      v354 = 4LL * v28;
      v32 = v13 + v354;
      if ( ((unsigned __int64)v338 >= v13 + v354 + 16 || v13 + v354 >= (unsigned __int64)(v338 + 4)) && v31 > 0xC )
      {
        v33 = -(int)(v32 >> 2) & 3;
        if ( (int)v33 + 3 > (unsigned int)(a5 - 1 - v28) )
        {
          v44 = 0;
        }
        else
        {
          v330 = 0;
          if ( (_DWORD)v33 )
          {
            *v338 = *(_DWORD *)(v13 + 4LL * v28);
            if ( (_DWORD)v33 == 1 )
            {
              ++v28;
              v330 = 1;
            }
            else
            {
              v338[1] = *(_DWORD *)(v13 + 4LL * (v28 + 1));
              v34 = v28 + 2;
              if ( (_DWORD)v33 == 2 )
              {
                v28 += 2;
                v330 = 2;
              }
              else
              {
                v28 += 3;
                v330 = 3;
                v338[2] = *(_DWORD *)(v13 + 4LL * v34);
              }
            }
          }
          v35 = 0;
          v36 = v31 - v33;
          v37 = v33;
          v38 = v36;
          v356 = v36;
          v39 = 0;
          v40 = v37 * 4 + v354;
          v41 = &v338[v37];
          v42 = v38 >> 2;
          v43 = v13 + v40;
          do
          {
            ++v39;
            *(__m128i *)&v41[v35] = _mm_load_si128((const __m128i *)(v43 + v35 * 4));
            v35 += 4;
          }
          while ( v39 < v42 );
          v28 += v356 & 0xFFFFFFFC;
          v44 = (v356 & 0xFFFFFFFC) + v330;
          v30 = v28;
          if ( (v356 & 0xFFFFFFFC) == v356 )
            goto LABEL_43;
        }
        v338[v44] = *(_DWORD *)(v13 + 4 * v30);
        if ( a5 > v28 + 1 )
        {
          v338[v44 + 1] = *(_DWORD *)(v13 + 4LL * (v28 + 1));
          if ( a5 > v28 + 2 )
          {
            v338[v44 + 2] = *(_DWORD *)(v13 + 4LL * (v28 + 2));
            if ( a5 > v28 + 3 )
            {
              v45 = v44 + 4;
              v338[v44 + 3] = *(_DWORD *)(v13 + 4LL * (v28 + 3));
              v46 = v28 + 4;
              if ( a5 > v28 + 4 )
              {
                v47 = v28 + 5;
                v48 = v44 + 5;
                v338[v45] = *(_DWORD *)(v13 + 4LL * v46);
                if ( a5 > v47 )
                  v338[v48] = *(_DWORD *)(v13 + 4LL * v47);
              }
            }
          }
        }
      }
      else
      {
        v288 = (unsigned int)(a5 - 1 - v28);
        v289 = 0;
        v290 = 4 * v288 + 4;
        do
        {
          v338[v289 / 4] = *(_DWORD *)(v32 + v289);
          v289 += 4LL;
        }
        while ( v290 != v289 );
      }
LABEL_43:
      v49 = v31;
      goto LABEL_44;
    }
    v49 = 0;
  }
LABEL_44:
  v50 = a5 + 1;
  if ( v308 <= a5 + 1 )
    goto LABEL_62;
  v51 = v49;
  v331 = v29 - a5;
  v52 = 4 * (a5 + 1LL);
  v53 = &v338[v49];
  v54 = v13 + v52 + 16;
  v55 = v13 + v52;
  if ( v55 < (unsigned __int64)&v338[v49 + 4] && (unsigned __int64)v53 < v54 || v331 <= 0xC )
  {
    v307 = 0;
    do
    {
      v53[v307 / 4] = *(_DWORD *)(v55 + v307);
      v307 += 4LL;
    }
    while ( 4LL * (unsigned int)(v29 - 1 - a5) + 4 != v307 );
    goto LABEL_62;
  }
  v56 = -(int)(v55 >> 2) & 3;
  if ( v56 + 3 > v29 - 1 - a5 )
    goto LABEL_56;
  v57 = v49;
  if ( v56 )
  {
    v57 = v49 + 1;
    v58 = *(_DWORD *)(v13 + 4LL * v50);
    v50 = a5 + 2;
    v338[v49] = v58;
    if ( v56 != 1 )
    {
      v338[v57] = *(_DWORD *)(v13 + 4LL * v50);
      v50 = a5 + 3;
      v57 = v49 + 2;
      if ( v56 != 2 )
      {
        v57 = v49 + 3;
        v338[v49 + 2] = *(_DWORD *)(v13 + 4LL * v50);
        v50 = a5 + 4;
      }
    }
  }
  v59 = v331 - v56;
  v60 = &v338[v49 + v56];
  v61 = (v331 - v56) >> 2;
  v62 = 0;
  v63 = v13 + 4 * (v56 + a5 + 1LL);
  v64 = 0;
  do
  {
    ++v64;
    *(__m128i *)&v60[v62] = _mm_load_si128((const __m128i *)(v63 + v62 * 4));
    v62 += 4;
  }
  while ( v64 < v61 );
  v50 += v59 & 0xFFFFFFFC;
  v49 = (v59 & 0xFFFFFFFC) + v57;
  if ( (v59 & 0xFFFFFFFC) != v59 )
  {
    v51 = v49;
LABEL_56:
    v338[v51] = *(_DWORD *)(v13 + 4LL * v50);
    if ( v50 + 1 < v308 )
    {
      v338[v49 + 1] = *(_DWORD *)(v13 + 4LL * (v50 + 1));
      if ( v308 > v50 + 2 )
      {
        v338[v49 + 2] = *(_DWORD *)(v13 + 4LL * (v50 + 2));
        if ( v308 > v50 + 3 )
        {
          v65 = v49 + 4;
          v338[v49 + 3] = *(_DWORD *)(v13 + 4LL * (v50 + 3));
          v66 = v50 + 4;
          if ( v308 > v50 + 4 )
          {
            v67 = v50 + 5;
            v68 = v49 + 5;
            v338[v65] = *(_DWORD *)(v13 + 4LL * v66);
            if ( v308 > v67 )
              v338[v68] = *(_DWORD *)(v13 + 4LL * v67);
          }
        }
      }
    }
  }
LABEL_62:
  v69 = *(int *)(v378 + v344);
  v70 = *(int *)(v23 + v378);
  *(_DWORD *)(v344 + 4 * v70) = v69;
  *(_DWORD *)(v23 + 4 * v69) = v70;
  *(_DWORD *)(v378 + v344) = *((_DWORD *)v10 + 14);
  *(_DWORD *)(v23 + v378) = -2;
  *v339 = 0;
  v71 = *((_DWORD *)v10 + 176);
  if ( v352 + v71 <= *((_DWORD *)v10 + 177) )
  {
    v73 = *((_QWORD *)v10 + 95);
    if ( *((int *)v10 + 192) <= -2 )
      v73 = 0;
    v355 = v352 + v321;
    v340 = v352 + v321 + 1;
    *(_DWORD *)(v73 + 4LL * *((int *)v10 + 15)) = v71;
    v74 = *((_DWORD *)v10 + 15) + 1;
    *((_DWORD *)v10 + 15) = v74;
    *(_DWORD *)(v73 + 4LL * v74) = v352 + v71;
    *((_DWORD *)v10 + 176) += v352;
    if ( a4 < 0 )
    {
      v87 = v321;
      if ( v321 >= v340 || (v291 = (int *)(v17 + 4LL * v321), v292 = *v291, a2 == (_DWORD)v292) )
      {
        v86 = v71;
        a4 = v321;
        v332 = v71;
      }
      else
      {
        v332 = v71;
        v324 = v321 + 1;
        v293 = v16 + 8 * v87;
        v360 = v71;
        v363 = v16;
        v366 = v17;
        v371 = a6;
        v294 = v87 + 1;
        v295 = 0;
        *(_QWORD *)v316 = v317 + 8LL * v71;
        v296 = v71 + 1;
        v297 = v326 + 4LL * v71;
        v298 = v296;
        do
        {
          v299 = *(_QWORD *)(v293 + 8 * v295);
          *(_DWORD *)(v297 + 4 * v295) = v292;
          v86 = v298 + v295;
          *(_QWORD *)(*(_QWORD *)v316 + 8 * v295) = v299;
          *(_WORD *)(a9 + 2 * v292) = v295;
          v300 = (_DWORD *)(v337 + 4 * v292);
          v301 = *(int *)(v325 + 4 * v292);
          v302 = v301 + *v300;
          v303 = 4 * v301;
          v304 = (_DWORD *)(v13 + v303);
          if ( a3 != *(_DWORD *)(v13 + v303) )
          {
            v305 = v13 + v303 + 4;
            do
            {
              v304 = (_DWORD *)v305;
              v305 += 4;
            }
            while ( *(_DWORD *)(v305 - 4) != a3 );
          }
          v306 = v324 + v295;
          *v304 = *(_DWORD *)(v13 + 4LL * v302 - 4);
          --*v300;
          v87 = v294 + v295;
          if ( v352 == v295 )
            break;
          v292 = v291[++v295];
        }
        while ( a2 != (_DWORD)v292 );
        a4 = v306;
        LOWORD(v71) = v360;
        v16 = v363;
        v17 = v366;
        a6 = v371;
      }
    }
    else if ( v321 >= a4 )
    {
      v86 = v71;
      v332 = v71;
      v87 = a4;
    }
    else
    {
      v332 = v71;
      v75 = v326 + 4LL * v71;
      v76 = v317 + 8LL * v71;
      v77 = 0;
      v357 = v71;
      do
      {
        v78 = *(int *)(v17 + 4LL * v321 + 4 * v77);
        v79 = *(_QWORD *)(v16 + 8LL * v321 + 8 * v77);
        v80 = (_DWORD *)(v337 + 4 * v78);
        *(_WORD *)(a9 + 2 * v78) = v77;
        *(_DWORD *)(v75 + 4 * v77) = v78;
        v81 = *(int *)(v325 + 4 * v78);
        *(_QWORD *)(v76 + 8 * v77) = v79;
        v82 = v81 + *v80;
        v83 = 4 * v81;
        v84 = (_DWORD *)(v13 + v83);
        if ( a3 != *(_DWORD *)(v13 + v83) )
        {
          v85 = v13 + v83 + 4;
          do
          {
            v84 = (_DWORD *)v85;
            v85 += 4;
          }
          while ( *(_DWORD *)(v85 - 4) != a3 );
        }
        ++v77;
        *v84 = *(_DWORD *)(v13 + 4LL * v82 - 4);
        --*v80;
      }
      while ( (unsigned int)(a4 - 1 - v321) + 1LL != v77 );
      LOWORD(v71) = v357;
      v86 = v357 + a4 - v321;
      v87 = a4;
    }
    v88 = (__m128d)0x3FF0000000000000uLL;
    v88.m128d_f64[0] = 1.0 / *(double *)(v16 + 8 * v87);
    v89 = *((_QWORD *)v10 + 69);
    if ( *((int *)v10 + 140) <= -2 )
      v89 = 0;
    *(double *)(v89 + 8LL * *((int *)v10 + 14)) = v88.m128d_f64[0];
    v90 = a4 + 1;
    if ( v340 > a4 + 1 )
    {
      v91 = v86 - v71;
      v92 = v17 + 4LL * v90;
      v322 = v17;
      v93 = v86;
      v94 = v16 + 8LL * v90;
      v95 = v326 + 4 * v93;
      v96 = v317 + 8 * v93;
      v97 = 0;
      do
      {
        v98 = *(int *)(v92 + v97);
        v99 = *(_QWORD *)(v94 + 2 * v97);
        v100 = (_DWORD *)(v337 + 4 * v98);
        *(_WORD *)(a9 + 2 * v98) = v91;
        *(_DWORD *)(v95 + v97) = v98;
        v101 = *(int *)(v325 + 4 * v98);
        *(_QWORD *)(v96 + 2 * v97) = v99;
        v102 = v101 + *v100;
        v103 = 4 * v101;
        v104 = (_DWORD *)(v13 + v103);
        if ( a3 != *(_DWORD *)(v13 + v103) )
        {
          v105 = v13 + v103 + 4;
          do
          {
            v104 = (_DWORD *)v105;
            v105 += 4;
          }
          while ( *(_DWORD *)(v105 - 4) != a3 );
        }
        ++v91;
        v97 += 4;
        *v104 = *(_DWORD *)(v13 + 4LL * v102 - 4);
        --*v100;
      }
      while ( 4LL * (unsigned int)(v355 - 1 - a4) + 4 != v97 );
      v17 = v322;
    }
    *(_WORD *)(a9 + 2 * v345) = a10;
    v381 = (_WORD *)(a9 + 2 * v345);
    *v349 = 0;
    v372 = v326 + 4 * v332;
    v374 = v317 + 8 * v332;
    if ( v352 > 0 )
    {
      v106 = ((unsigned __int64)(v317 + 8 * v332) >> 3) & 1;
      v107 = 0;
      if ( (unsigned int)(v376 - 2) <= 1 )
        goto LABEL_92;
      if ( (_DWORD)v106 )
      {
        v107 = 1;
        *(double *)(v317 + 8 * v332) = *(double *)(v317 + 8 * v332) * v88.m128d_f64[0];
      }
      v108 = 0;
      v109 = _mm_unpacklo_pd(v88, v88);
      v110 = v352 - v106;
      v111 = (unsigned int)(v352 - v106) >> 1;
      v112 = v317 + 8 * (v332 + v106);
      v113 = 0;
      do
      {
        ++v108;
        *(__m128d *)(v112 + v113) = _mm_mul_pd(*(__m128d *)(v112 + v113), v109);
        v113 += 16;
      }
      while ( v108 < v111 );
      v107 += v110 & 0xFFFFFFFE;
      if ( (v110 & 0xFFFFFFFE) != v110 )
      {
LABEL_92:
        v114 = v107;
        v115 = v107 + 1;
        *(double *)(v374 + 8 * v114) = *(double *)(v374 + 8 * v114) * v88.m128d_f64[0];
        if ( v115 < v352 )
          *(double *)(v374 + 8LL * v115) = v88.m128d_f64[0] * *(double *)(v374 + 8LL * v115);
      }
    }
    if ( a8 * v377 > 0 )
      memset(s, 0, 4LL * (unsigned int)(a8 * v377 - 1) + 4);
    v323 = v377 * v352;
    v116 = 0;
    if ( *((int *)v10 + 90) > -2 )
      v116 = *((_QWORD *)v10 + 44);
    v370 = v116;
    if ( v377 <= 0 )
      goto LABEL_153;
    v117 = (__m128d)_mm_loadl_epi64((const __m128i *)&xmmword_289DB0);
    v358 = v13;
    v118 = v10;
    v119 = v117;
    v327 = v338;
    v309 = a10 + 1;
    v313 = s;
    v120 = v338;
    while ( 1 )
    {
      v121 = *v120;
      v341 = v121;
      v367 = v121;
      v365 = 4 * v121;
      v122 = *(_DWORD *)(4 * v121 + v364);
      v361 = (int *)(4 * v121 + v364);
      v123 = 4LL * v122;
      v124 = *(_DWORD *)(4 * v121 + v369);
      v333 = (int *)(4 * v121 + v369);
      v125 = 8LL * v122;
      v318 = v122 + 1;
      v126 = v122 + v124;
      v346 = (_DWORD *)(v17 + v123);
      v350 = (double *)(v16 + v125);
      v127 = (__m128d)*(unsigned __int64 *)(v16 + v125);
      v128 = *(unsigned __int16 *)(a9 + 2LL * *(int *)(v17 + v123));
      v129 = *(_DWORD *)(v17 + v123);
      v130 = *(_WORD *)(a9 + 2LL * v129);
      if ( v128 == v309 )
      {
        v274 = (_QWORD *)(v16 + v125 + 8);
        v147 = v122 + 2;
        v134 = _mm_and_pd(v127, (__m128d)xmmword_289DB0);
        if ( v126 > v122 + 1 )
        {
          v132 = v122 + 1;
          v275 = v122 + 1;
          v127.m128d_f64[0] = 0.0;
          v276 = v275 + 1;
          v277 = v275 + 1 + (unsigned int)(v126 - v122 - 2);
          while ( 1 )
          {
            v278 = *(_DWORD *)(v17 + 4 * v275);
            v279 = *(double *)(v16 + 8 * v275);
            v280 = *(unsigned __int16 *)(a9 + 2LL * v278);
            v281 = 4LL * v132;
            v282 = 8LL * v132;
            v142 = (double *)(v16 + v282);
            v143 = (_DWORD *)(v17 + v281);
            v283 = *(_WORD *)(a9 + 2LL * v278);
            if ( v309 == v280 )
            {
              ++v132;
              *v143 = v278;
              *v142 = v279;
              v143 = (_DWORD *)(v17 + v281 + 4);
              v142 = (double *)(v16 + v282 + 8);
              v275 = v276;
              if ( v277 == v276 )
                goto LABEL_255;
            }
            else
            {
              if ( a10 == v280 )
              {
                v127.m128d_f64[0] = v279;
              }
              else
              {
                --v323;
                *(double *)(a6 + 8LL * (unsigned __int16)v280) = v279;
                *(_DWORD *)&v313[4 * (v280 >> 5)] |= 1 << v283;
              }
              v275 = v276;
              if ( v277 == v276 )
              {
LABEL_255:
                v133 = v122;
LABEL_114:
                v146 = v350;
                v147 = v132 + 1;
                goto LABEL_115;
              }
            }
            ++v276;
          }
        }
        *v274 = *(_QWORD *)&v127.m128d_f64[0];
        *(_DWORD *)(v17 + v123 + 4) = v129;
        v132 = v122 + 1;
        v127.m128d_f64[0] = 0.0;
      }
      else
      {
        if ( a10 != v128 )
        {
          --v323;
          *(double *)(a6 + 8LL * (unsigned __int16)v128) = v127.m128d_f64[0];
          v127.m128d_f64[0] = 0.0;
          *(_DWORD *)&v313[4 * (v128 >> 5)] |= 1 << v130;
        }
        if ( v126 > v318 )
        {
          v131 = v318;
          v132 = v122;
          v375 = v118;
          v133 = -1;
          v134 = 0;
          v135 = v318 + 1LL;
          v136 = (unsigned int)(v126 - v122 - 2) + v135;
          while ( 1 )
          {
            v137 = *(_DWORD *)(v17 + 4 * v131);
            v138 = (__m128d)*(unsigned __int64 *)(v16 + 8 * v131);
            v139 = *(unsigned __int16 *)(a9 + 2LL * v137);
            v140 = 4LL * v132;
            v141 = 8LL * v132;
            v142 = (double *)(v16 + v141);
            v143 = (_DWORD *)(v17 + v140);
            v144 = *(_WORD *)(a9 + 2LL * v137);
            if ( v139 == v309 )
            {
              *v143 = v137;
              *v142 = v138.m128d_f64[0];
              v143 = (_DWORD *)(v17 + v140 + 4);
              v145 = _mm_and_pd(v138, v117);
              v142 = (double *)(v16 + v141 + 8);
              v131 = v135;
              v20 = v145.m128d_f64[0] <= v134.m128d_f64[0];
              v145.m128d_f64[0] = fmax(v145.m128d_f64[0], v134.m128d_f64[0]);
              if ( !v20 )
                v133 = v132;
              ++v132;
              v134 = v145;
              if ( v136 == v135 )
              {
LABEL_113:
                v118 = v375;
                goto LABEL_114;
              }
            }
            else
            {
              if ( a10 == v139 )
              {
                v127.m128d_f64[0] = v138.m128d_f64[0];
              }
              else
              {
                --v323;
                *(double *)(a6 + 8LL * (unsigned __int16)v139) = v138.m128d_f64[0];
                *(_DWORD *)&v313[4 * (v139 >> 5)] |= 1 << v144;
              }
              v131 = v135;
              if ( v136 == v135 )
                goto LABEL_113;
            }
            ++v135;
          }
        }
        v142 = (double *)(v16 + v125);
        v147 = v122 + 1;
        v143 = (_DWORD *)(v17 + v123);
        v132 = v122;
        v133 = -1;
        v134 = 0;
        v146 = v350;
LABEL_115:
        *v142 = *v146;
        *v143 = *v346;
        if ( v122 != v133 )
          goto LABEL_116;
      }
      v133 = v132;
LABEL_116:
      *v350 = v127.m128d_f64[0];
      *v346 = a2;
      v148 = *((_QWORD *)v118 + 32);
      *v333 = v147 - v318;
      if ( *((int *)v118 + 66) <= -2 )
        v148 = 0;
      ++*(_DWORD *)(v148 + v365);
      ++*v361;
      if ( v352 > *(_DWORD *)(v364 + 4LL * *(int *)(v370 + 4 * v367))
                - v147
                - *(_DWORD *)(v148 + 4LL * *(int *)(v370 + 4 * v367)) )
      {
        v373 = v119;
        if ( !(unsigned __int8)CoinFactorization::getColumnSpace(v118, v341, v352) )
          return 0;
        v119 = v373;
        v284 = v133 + *v361 - v318;
        v318 = *v361;
        v134 = (__m128d)*(unsigned __int64 *)&v134.m128d_f64[0];
        if ( v133 >= 0 )
          v133 = v284;
        v147 = *v361 + *v333;
      }
      v149 = *((_QWORD *)v118 + 38);
      v150 = 0;
      v151 = *((double *)v118 + 1);
      if ( *((int *)v118 + 78) > -2 )
        v150 = *((_QWORD *)v118 + 38);
      if ( v352 > 0 )
      {
        v152 = 0;
        v153 = (unsigned int)(v376 - 2) + 1LL;
        do
        {
          while ( 1 )
          {
            v156 = *(double *)(v374 + 8 * v152);
            v157 = (__m128d)*(unsigned __int64 *)(a6 + 8 * v152);
            *(_QWORD *)(a6 + 8 * v152) = 0;
            v157.m128d_f64[0] = v157.m128d_f64[0] - v156 * v127.m128d_f64[0];
            v155 = _mm_and_pd(v157, v119);
            if ( v155.m128d_f64[0] <= v151 )
              break;
            v154 = *(_DWORD *)(v372 + 4 * v152);
            *(double *)(v16 + 8LL * v147) = v157.m128d_f64[0];
            *(_DWORD *)(v17 + 4LL * v147) = v154;
            if ( v155.m128d_f64[0] > v134.m128d_f64[0] )
              v133 = v147;
            else
              v155 = v134;
            v134 = v155;
            ++v147;
LABEL_126:
            if ( v153 == ++v152 )
              goto LABEL_130;
          }
          v158 = 1 << v152;
          --v323;
          v159 = &v313[4 * ((int)v152 >> 5)];
          if ( ((1 << v152) & *(_DWORD *)v159) != 0 )
          {
            v267 = *(int *)(v372 + 4 * v152);
            v268 = (_DWORD *)(v337 + 4 * v267);
            v269 = *(int *)(v325 + 4 * v267);
            v270 = v269 + *v268;
            v271 = 4 * v269;
            v272 = (_DWORD *)(v271 + v358);
            if ( v341 != *(_DWORD *)(v271 + v358) )
            {
              v273 = v358 + v271 + 4;
              do
              {
                v272 = (_DWORD *)v273;
                v273 += 4;
              }
              while ( *(_DWORD *)(v273 - 4) != v341 );
            }
            *v272 = *(_DWORD *)(v358 + 4LL * v270 - 4);
            --*v268;
            goto LABEL_126;
          }
          ++v152;
          *(_DWORD *)v159 |= v158;
        }
        while ( v153 != v152 );
      }
LABEL_130:
      *v333 = v147 - v318;
      if ( v133 >= 0 )
      {
        v160 = (__int64 *)(v16 + 8LL * v318);
        v161 = (__int64 *)(v16 + 8LL * v133);
        v162 = (int *)(v17 + 4LL * v133);
        v163 = *v161;
        v164 = *v162;
        *v161 = *v160;
        v165 = (int *)(v17 + 4LL * v318);
        *v162 = *v165;
        *v160 = v163;
        *v165 = v164;
      }
      v166 = 4LL * (*((_DWORD *)v118 + 8) + v341);
      if ( *(_DWORD *)(v150 + v166) != -2 )
      {
        v167 = 0;
        v168 = *((_QWORD *)v118 + 35);
        v169 = 0;
        v170 = 0;
        v171 = *((_QWORD *)v118 + 41);
        if ( *((int *)v118 + 78) > -2 )
          v169 = v149;
        v172 = (_DWORD *)(v169 + v166);
        v173 = *(int *)(v169 + 4LL * (*((_DWORD *)v118 + 8) + v341));
        if ( *((int *)v118 + 72) > -2 )
          v170 = *((_QWORD *)v118 + 35);
        if ( *((int *)v118 + 84) > -2 )
          v167 = *((_QWORD *)v118 + 41);
        v174 = (int *)(v167 + v166);
        v175 = *v174;
        if ( *v174 < 0 )
          *(_DWORD *)(v170 + 4LL * (-2 - v175)) = v173;
        else
          *(_DWORD *)(v169 + 4LL * v175) = v173;
        if ( (int)v173 >= 0 )
          *(_DWORD *)(v167 + 4 * v173) = v175;
        *v172 = -2;
        *v174 = -2;
        v176 = *((_DWORD *)v118 + 8) + v341;
        v177 = *v333;
        if ( *((int *)v118 + 78) <= -2 )
          v149 = 0;
        if ( *((int *)v118 + 72) <= -2 )
          v168 = 0;
        if ( *((int *)v118 + 84) <= -2 )
          v171 = 0;
        v178 = (int *)(v168 + 4LL * v177);
        v179 = *v178;
        *(_DWORD *)(v171 + 4LL * v176) = -2 - v177;
        v180 = (_DWORD *)(v149 + 4LL * v176);
        *v178 = v176;
        if ( (int)v179 < 0 )
        {
          *v180 = -1;
        }
        else
        {
          *v180 = v179;
          *(_DWORD *)(v171 + 4 * v179) = v176;
        }
      }
      v120 = ++v327;
      v313 += 4 * a8;
      if ( &v338[v380 - 2 + 1] == v327 )
      {
        v10 = v118;
        v13 = v358;
LABEL_153:
        v181 = v352 >> 5;
        if ( v352 >> 5 )
        {
          v182 = v13;
          v183 = v380 - 1;
          v342 = 0;
          v184 = 4LL * a8;
          v362 = &s[4 * (v181 - 1) + 4];
          do
          {
            *(_QWORD *)v314 = 0;
            v185 = v184;
            v186 = v183;
            do
            {
              v187 = v314[0];
              v310 = *(_DWORD *)(v372 + 4LL * v342 + 4LL * *(_QWORD *)v314);
              if ( v186 <= 0 )
              {
                v190 = 0;
              }
              else
              {
                v188 = (unsigned int *)s;
                v189 = 0;
                v190 = 0;
                do
                {
                  v191 = *v188;
                  ++v189;
                  v188 = (unsigned int *)((char *)v188 + v185);
                  v190 += ((v191 >> SLOBYTE(v314[0])) & 1) == 0;
                }
                while ( v189 != v186 );
              }
              v192 = 4LL * v310;
              v193 = (int *)(v325 + v192);
              v194 = (int *)(v325 + 4LL * *(int *)(v344 + v192));
              v195 = *(_DWORD *)(v325 + v192);
              v196 = *v194;
              v197 = (int *)(v337 + v192);
              v198 = *(_DWORD *)(v337 + v192);
              v199 = v198 + v190;
              if ( *v194 - v195 < v199 )
              {
                v359 = v186;
                if ( !(unsigned __int8)CoinFactorization::getRowSpace(v10, v310, v199) )
                  return 0;
                v195 = *v193;
                v198 = *v197;
                v186 = v359;
                v187 = v314[0];
                v194 = (int *)(v325 + 4LL * *(int *)(v344 + 4LL * v310));
                v196 = *v194;
              }
              v200 = (int *)(v182 + 4 * v196);
              v201 = v195 + v198;
              v202 = *v200;
              if ( v186 > 0 )
              {
                v203 = v338;
                v204 = (unsigned int *)s;
                v334 = *v200;
                do
                {
                  v205 = *v204;
                  v206 = *v203++;
                  v204 = (unsigned int *)((char *)v204 + v185);
                  *(_DWORD *)(v182 + 4LL * v201) = v206;
                  v201 += ((v205 >> v187) & 1) == 0;
                }
                while ( &v338[v380 - 2 + 1] != v203 );
                v202 = v334;
                v200 = (int *)(v182 + 4LL * *v194);
              }
              *v200 = v202;
              v207 = v201 - *v193;
              v208 = *((_QWORD *)v10 + 35);
              *(_WORD *)(a9 + 2LL * v310) = a10 + 1;
              *v197 = v207;
              v209 = 0;
              v210 = *((_QWORD *)v10 + 38);
              v211 = 0;
              v212 = 0;
              if ( *((int *)v10 + 78) > -2 )
                v211 = *((_QWORD *)v10 + 38);
              v213 = *(int *)(v211 + 4LL * v310);
              if ( *((int *)v10 + 72) > -2 )
                v212 = v208;
              v335 = v212;
              v214 = *((_QWORD *)v10 + 41);
              if ( *((int *)v10 + 84) > -2 )
                v209 = *((_QWORD *)v10 + 41);
              v215 = *(_DWORD *)(v209 + 4LL * v310);
              if ( v215 < 0 )
                *(_DWORD *)(v335 + 4LL * (-2 - v215)) = v213;
              else
                *(_DWORD *)(v211 + 4LL * v215) = v213;
              if ( (int)v213 >= 0 )
                *(_DWORD *)(v209 + 4 * v213) = v215;
              *(_DWORD *)(v211 + 4LL * v310) = -2;
              *(_DWORD *)(v209 + 4LL * v310) = -2;
              if ( *((int *)v10 + 78) <= -2 )
                v210 = 0;
              if ( *((int *)v10 + 72) <= -2 )
                v208 = 0;
              if ( *((int *)v10 + 84) <= -2 )
                v214 = 0;
              v216 = (int *)(v208 + 4LL * v207);
              v217 = (_DWORD *)(v210 + v192);
              v218 = *v216;
              *(_DWORD *)(v214 + 4LL * v310) = -2 - v207;
              *v216 = v310;
              if ( (int)v218 < 0 )
              {
                *v217 = -1;
              }
              else
              {
                *v217 = v218;
                *(_DWORD *)(v214 + 4 * v218) = v310;
              }
              v181 = v342 + v314[0] + 1;
              ++*(_QWORD *)v314;
            }
            while ( *(_QWORD *)v314 != 32 );
            s += 4;
            v183 = v186;
            v184 = v185;
            v342 = v181;
          }
          while ( s != v362 );
          v13 = v182;
        }
        else
        {
          v362 = s;
        }
        if ( v352 <= v181 )
        {
          v256 = *((_QWORD *)v10 + 35);
          v254 = *((_QWORD *)v10 + 41);
          v343 = a10 + 1;
          v320 = *((_QWORD *)v10 + 38);
          v255 = v320;
        }
        else
        {
          *(_QWORD *)v311 = 0;
          v351 = (unsigned int)(v376 - 2 - v181) + 1LL;
          *(_QWORD *)v353 = v372 + 4LL * v181;
          v219 = 0;
          v220 = 4LL * a8;
          do
          {
            v221 = v219;
            v315 = *(_DWORD *)(*(_QWORD *)v353 + 4 * v219);
            if ( v377 <= 0 )
            {
              v224 = 0;
            }
            else
            {
              v222 = (unsigned int *)v362;
              v223 = 0;
              v224 = 0;
              do
              {
                v225 = *v222;
                ++v223;
                v222 = (unsigned int *)((char *)v222 + v220);
                v224 += ((v225 >> v221) & 1) == 0;
              }
              while ( v223 != v377 );
            }
            v226 = v315;
            v227 = 4LL * v315;
            v228 = (int *)(v325 + 4LL * *(int *)(v344 + v227));
            v229 = *(_DWORD *)(v227 + v325);
            v319 = (int *)(v227 + v325);
            v230 = *v228;
            v328 = (int *)(v227 + v337);
            v231 = *(_DWORD *)(v227 + v337);
            if ( (int)v230 - v229 < v231 + v224 )
            {
              v348 = v221;
              if ( !(unsigned __int8)CoinFactorization::getRowSpace(v10, v315, v231 + v224) )
                return 0;
              v226 = v315;
              v229 = *v319;
              v231 = *v328;
              v228 = (int *)(v325 + 4LL * *(int *)(v344 + 4LL * v315));
              v221 = v348;
              v230 = *v228;
            }
            v232 = (int *)(v13 + 4 * v230);
            v233 = v229 + v231;
            v234 = *v232;
            if ( v377 > 0 )
            {
              v235 = v338;
              v236 = (unsigned int *)v362;
              v336 = v226;
              do
              {
                v237 = *v236;
                v238 = *v235++;
                v236 = (unsigned int *)((char *)v236 + v220);
                *(_DWORD *)(v13 + 4LL * v233) = v238;
                v233 += ((v237 >> v221) & 1) == 0;
              }
              while ( &v338[v380 - 2 + 1] != v235 );
              v226 = v336;
              v232 = (int *)(v13 + 4LL * *v228);
            }
            *v232 = v234;
            v239 = *((_QWORD *)v10 + 35);
            *(_WORD *)(a9 + 2 * v226) = a10 + 1;
            v343 = a10 + 1;
            v240 = v233 - *v319;
            *v328 = v240;
            v241 = v240;
            v242 = *((_QWORD *)v10 + 38);
            v320 = v242;
            v243 = 0;
            v244 = 0;
            if ( *((int *)v10 + 78) <= -2 )
              v242 = 0;
            v245 = *(int *)(v242 + 4LL * v315);
            if ( *((int *)v10 + 72) > -2 )
              v244 = v239;
            v347 = v244;
            if ( *((int *)v10 + 84) > -2 )
              v243 = *((_QWORD *)v10 + 41);
            v329 = *((_QWORD *)v10 + 41);
            v246 = (_DWORD *)(v243 + v227);
            v247 = *(_DWORD *)(v243 + 4LL * v315);
            if ( v247 < 0 )
              *(_DWORD *)(v347 + 4LL * (-2 - v247)) = v245;
            else
              *(_DWORD *)(v242 + 4LL * v247) = v245;
            if ( (int)v245 >= 0 )
              *(_DWORD *)(v243 + 4 * v245) = v247;
            *(_DWORD *)(v242 + 4LL * v315) = -2;
            v248 = 0;
            *v246 = -2;
            v249 = v320;
            v250 = 0;
            if ( *((int *)v10 + 78) <= -2 )
              v249 = 0;
            if ( *((int *)v10 + 72) > -2 )
              v250 = v239;
            v251 = (int *)(v250 + 4LL * v241);
            if ( *((int *)v10 + 84) > -2 )
              v248 = v329;
            v252 = (_DWORD *)(v227 + v249);
            v253 = *v251;
            *(_DWORD *)(v248 + 4 * v226) = -2 - v241;
            *v251 = v315;
            if ( (int)v253 < 0 )
            {
              *v252 = -1;
            }
            else
            {
              *v252 = v253;
              *(_DWORD *)(v248 + 4 * v253) = v315;
            }
            v219 = ++*(_QWORD *)v311;
          }
          while ( v351 != *(_QWORD *)v311 );
          v254 = v329;
          v255 = v320;
          v256 = v239;
        }
        *v381 = v343;
        v257 = 0;
        v258 = 0;
        if ( *((int *)v10 + 78) <= -2 )
          v255 = 0;
        v259 = *(int *)(v255 + v378);
        if ( *((int *)v10 + 72) > -2 )
          v258 = v256;
        if ( *((int *)v10 + 84) > -2 )
          v257 = v254;
        v260 = *(_DWORD *)(v257 + v378);
        if ( v260 < 0 )
          *(_DWORD *)(v258 + 4LL * (-2 - v260)) = v259;
        else
          *(_DWORD *)(v255 + 4LL * v260) = v259;
        if ( (int)v259 >= 0 )
          *(_DWORD *)(v257 + 4 * v259) = v260;
        *(_DWORD *)(v255 + v378) = -2;
        *(_DWORD *)(v257 + v378) = -2;
        v261 = v320;
        if ( *((int *)v10 + 78) <= -2 )
          v261 = 0;
        if ( *((int *)v10 + 72) <= -2 )
          v256 = 0;
        if ( *((int *)v10 + 84) <= -2 )
          v254 = 0;
        v262 = 4LL * (*((_DWORD *)v10 + 8) + a3);
        v263 = (int *)(v261 + v262);
        v264 = (int *)(v254 + v262);
        v265 = *v264;
        v266 = *v263;
        if ( *v264 < 0 )
          *(_DWORD *)(v256 + 4LL * (-2 - v265)) = v266;
        else
          *(_DWORD *)(v261 + 4LL * v265) = v266;
        if ( (int)v266 >= 0 )
          *(_DWORD *)(v254 + 4 * v266) = v265;
        *v263 = -2;
        *v264 = -2;
        *((_DWORD *)v10 + 18) += v323;
        return 1;
      }
    }
  }
  if ( (*((_BYTE *)v10 + 496) & 4) != 0 )
    puts("more memory needed in middle of invert");
  return 0;
}

