__int64 __fastcall sub_524F50(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int *a4,
        unsigned int a5,
        unsigned int a6,
        __m128 si128,
        __int64 a8)
{
  char **v8; // r13
  char **v9; // r14
  char **v10; // rax
  char **v11; // r12
  _QWORD *v12; // r14
  _QWORD *v13; // rsi
  char **v14; // rax
  char **v15; // r14
  _QWORD *v16; // r13
  _QWORD *v17; // rsi
  char **v18; // rbx
  char **v19; // rbx
  char **v20; // r14
  char **v21; // rbx
  char **v22; // rbx
  char **v23; // r13
  char **exception; // r13
  char **v25; // r13
  char **v26; // r13
  _QWORD *v27; // rax
  __int64 v28; // rax
  unsigned int v29; // ebx
  __int64 v30; // rax
  _DWORD *v31; // r15
  _QWORD *v32; // r15
  _QWORD *v33; // rax
  _QWORD *v34; // rax
  size_t v35; // rbx
  __int64 v36; // rax
  __int64 v37; // rax
  int v38; // ecx
  unsigned int v39; // r12d
  char *v40; // r14
  char *v41; // rax
  __int64 v42; // rdx
  char *v43; // rdi
  char *v44; // rdx
  char *v45; // r12
  int v46; // eax
  char *v47; // rax
  int v48; // edx
  __int64 v49; // rax
  unsigned int *v50; // rax
  size_t v51; // r10
  unsigned int *v52; // rdx
  int v53; // esi
  size_t v54; // r9
  char *v55; // r8
  char *j; // r13
  char *v57; // rdx
  int v58; // edi
  __int64 v59; // rdx
  char *v60; // rsi
  int v61; // eax
  char *v62; // rdx
  int v63; // esi
  __int64 v64; // rsi
  char *v65; // r13
  __m128i *v66; // r13
  int v67; // r12d
  int v68; // ebx
  __int64 v69; // rdi
  __int64 v70; // r12
  char *v71; // r12
  char *v72; // rax
  char *v73; // r14
  int *v74; // rdx
  int v75; // esi
  __int64 v76; // rax
  char *v77; // rax
  unsigned int v78; // ebx
  unsigned int v79; // eax
  unsigned int v80; // r14d
  __int64 v81; // r13
  __int64 v82; // rbx
  unsigned __int64 v83; // r12
  _QWORD *v84; // rax
  __int64 v85; // r13
  unsigned __int64 *v86; // rdx
  unsigned int v87; // eax
  unsigned __int64 *v88; // rcx
  char *v89; // rsi
  unsigned int v90; // eax
  __int64 v91; // rdx
  __int64 v92; // r14
  char *v93; // r13
  const __m128i *v94; // rbx
  size_t v95; // rcx
  __int64 v96; // r12
  __int64 v97; // rdx
  int v98; // esi
  __int64 v99; // rax
  char *v100; // rdi
  char *n; // rax
  int v102; // edx
  __int64 v103; // rax
  unsigned int v104; // edx
  __int64 v105; // rsi
  int v106; // edx
  __int64 v107; // rax
  __m128 *v108; // rax
  signed __int64 v109; // rax
  int v110; // r14d
  __int64 v111; // rax
  __int64 result; // rax
  char *v113; // rbx
  char *v114; // r14
  __int64 v115; // rsi
  bool v116; // zf
  char *v117; // rbx
  __int64 v118; // rax
  __int64 v119; // r12
  char *v120; // r14
  __int64 v121; // rsi
  char *v122; // rbx
  char *v123; // r14
  __int64 v124; // rdi
  __int64 *v125; // rbx
  __int64 *v126; // r14
  __int64 v127; // rsi
  unsigned int v128; // r14d
  size_t v129; // rsi
  unsigned int *v130; // rax
  __int64 v131; // rdx
  int v132; // eax
  int v133; // esi
  __int64 v134; // rsi
  size_t v135; // rax
  __int64 v136; // rdx
  unsigned int v137; // ebx
  __int64 v138; // rax
  unsigned int v139; // esi
  unsigned int v140; // edx
  unsigned int *v141; // rax
  unsigned int v142; // eax
  unsigned int v143; // ebx
  _QWORD *v144; // rax
  __int64 v145; // r11
  char *v146; // r12
  __int64 v147; // r14
  char *v148; // rdx
  char *v149; // rsi
  int v150; // ecx
  __int64 v151; // rax
  __int64 v152; // rdx
  unsigned int v153; // r13d
  __int64 v154; // rax
  __int64 v155; // r13
  int v156; // eax
  __int64 *v157; // r12
  __int64 v158; // rsi
  size_t v159; // rbx
  int v160; // ecx
  __int64 v161; // rax
  signed __int64 v162; // rdx
  __int64 v163; // rax
  unsigned int v164; // r10d
  size_t v165; // r11
  __int64 v166; // r11
  unsigned int v167; // ecx
  char *v168; // rax
  _DWORD *v169; // r14
  int v170; // edx
  _QWORD *v171; // rax
  unsigned int v172; // r8d
  unsigned int v173; // esi
  unsigned int v174; // r8d
  size_t v175; // rsi
  _DWORD *v176; // rax
  char *v177; // rax
  int v178; // edx
  int v179; // ecx
  unsigned int v180; // r8d
  __int64 v181; // rax
  __int64 v182; // r14
  __int64 v183; // r13
  __int64 v184; // r12
  int v185; // edx
  __int64 v186; // rbx
  __int64 v187; // rax
  size_t v188; // rax
  unsigned __int64 v189; // r12
  __int64 v190; // rax
  unsigned __int64 v191; // rbx
  int v192; // ecx
  unsigned __int64 v193; // rdx
  __int64 v194; // rax
  __int64 v195; // rbx
  int v196; // eax
  __int64 v197; // r12
  __int64 v198; // r10
  unsigned int v199; // eax
  unsigned int *v200; // r10
  __int64 v201; // r15
  __int64 v202; // rbx
  unsigned int *v203; // r10
  size_t v204; // rsi
  unsigned __int64 v205; // rdx
  __int64 v206; // rcx
  unsigned int *v207; // r8
  unsigned int v208; // r12d
  unsigned int v209; // r13d
  __int64 v210; // r14
  unsigned int v211; // eax
  __int64 v212; // rsi
  int v213; // eax
  __int64 v214; // rsi
  int v215; // eax
  __int64 v216; // r14
  unsigned int v217; // eax
  unsigned int v218; // esi
  unsigned int v219; // r8d
  unsigned int v220; // eax
  _DWORD *v221; // rax
  __int64 v222; // rsi
  __int64 v223; // rbx
  __int64 v224; // rax
  __int64 v225; // r13
  __int64 v226; // r9
  char *v227; // rbx
  char *v228; // r14
  __int64 v229; // r12
  __m128i *v230; // rbx
  __int64 v231; // rax
  __int64 v232; // rdx
  char *v233; // rax
  unsigned int v234; // eax
  unsigned int v235; // r10d
  __int64 v236; // rax
  int *v237; // rax
  unsigned int *v238; // rcx
  __int64 v239; // rax
  unsigned int *v240; // rax
  __int64 v241; // rax
  int *v242; // rbx
  size_t v243; // r12
  _DWORD *v244; // rax
  _DWORD *v245; // rdi
  int v246; // edx
  int v247; // ecx
  __int64 v248; // rax
  unsigned int v249; // edx
  unsigned int v250; // r13d
  size_t v251; // rsi
  unsigned int *v252; // rax
  size_t v253; // rcx
  __int64 v254; // rax
  __int64 v255; // rax
  unsigned int *v256; // r12
  unsigned int *v257; // r13
  int *v258; // rax
  int *v259; // rbx
  int v260; // edx
  int v261; // ecx
  __int64 v262; // rax
  unsigned int v263; // edx
  unsigned int v264; // r14d
  size_t v265; // rsi
  unsigned int *v266; // rax
  __int64 v267; // r12
  _DWORD *v268; // rax
  __int64 v269; // rax
  int *v270; // rax
  unsigned int v271; // eax
  __int64 v272; // rdx
  int v273; // eax
  unsigned __int64 *v274; // rdx
  unsigned __int64 v275; // r13
  __int64 v276; // r14
  __int64 v277; // rax
  size_t v278; // rcx
  int v279; // edx
  __int64 v280; // rax
  unsigned int v281; // r8d
  size_t v282; // rsi
  _DWORD *v283; // rax
  unsigned int v284; // r14d
  size_t v285; // rsi
  unsigned int *v286; // rax
  __int64 v287; // rdx
  unsigned int v288; // edx
  size_t v289; // rsi
  _DWORD *v290; // rax
  int v291; // r12d
  size_t v292; // rax
  unsigned int v293; // edx
  int *v294; // rcx
  __int64 v295; // rax
  _QWORD *v296; // rax
  unsigned int v297; // ecx
  size_t v298; // rsi
  _DWORD *v299; // rax
  unsigned int v300; // ecx
  size_t v301; // rsi
  _DWORD *v302; // rax
  _QWORD *v303; // rax
  _QWORD *v304; // rax
  __int32 *v305; // rdx
  __int32 *v306; // r13
  unsigned int v307; // esi
  __int64 v308; // rax
  unsigned int v309; // r14d
  int v310; // esi
  int v311; // r11d
  __int64 v312; // rax
  char *v313; // rdi
  char *v314; // rcx
  char *v315; // rax
  int v316; // edx
  _DWORD *v317; // rdx
  int v318; // edx
  unsigned int v319; // r14d
  void *v320; // rdi
  _DWORD *v321; // rax
  __int64 v322; // rcx
  _DWORD *v323; // rdi
  unsigned __int32 m; // eax
  __int64 v325; // rdx
  char *v326; // rcx
  char *v327; // rdx
  unsigned int k; // esi
  __int64 v329; // rax
  char *v330; // rax
  int v331; // ecx
  int v332; // r8d
  __int64 v333; // rax
  unsigned __int64 v334; // r12
  char *v335; // r13
  char *v336; // r14
  unsigned __int64 v337; // rdx
  unsigned __int32 v338; // r14d
  unsigned __int32 v339; // edx
  char *v340; // rax
  size_t v341; // rsi
  _DWORD *v342; // rcx
  unsigned int v343; // r9d
  size_t v344; // rsi
  _DWORD *v345; // rax
  __int64 v346; // rsi
  int v347; // edi
  __int64 v348; // rax
  __int64 v349; // rsi
  __int64 v350; // rdi
  __int64 v351; // rsi
  __int64 v352; // rdi
  size_t v353; // rbx
  unsigned int v354; // r12d
  unsigned int *i; // r8
  __int64 v356; // r14
  unsigned int v357; // eax
  __int64 v358; // rsi
  int v359; // eax
  __int64 v360; // rdx
  int v361; // eax
  __int64 v362; // r13
  unsigned int v363; // eax
  unsigned int v364; // edx
  unsigned int v365; // r14d
  unsigned int v366; // eax
  unsigned int *v367; // rax
  __int64 v368; // rdx
  unsigned int v369; // r9d
  size_t v370; // rsi
  _DWORD *v371; // rax
  __int64 v372; // rsi
  size_t v373; // rdi
  unsigned __int32 v374; // ecx
  unsigned __int32 v375; // edx
  __int32 *v376; // rax
  __m128i *v377; // rsi
  __m128i *v378; // r12
  int v379; // edx
  unsigned int v380; // eax
  _QWORD *v381; // rax
  __int64 v382; // r12
  _QWORD *v383; // rax
  int v384; // r10d
  size_t v385; // rsi
  _QWORD *v386; // rdx
  __int64 v387; // r10
  char *v388; // r12
  char *v389; // rdx
  __int64 v390; // rax
  __int64 v391; // rax
  _QWORD *v392; // rax
  unsigned __int32 v393; // r14d
  unsigned __int32 v394; // edx
  char *v395; // rax
  size_t v396; // rsi
  _DWORD *v397; // rcx
  __int64 v398; // rax
  void *v399; // r13
  int v400; // esi
  _QWORD *v401; // rdx
  signed __int64 v402; // rax
  void *v403; // r14
  __int64 v404; // r13
  int v405; // r12d
  __m128i *v406; // r15
  _QWORD *v407; // rbx
  __int64 v408; // rax
  size_t v409; // [rsp-8h] [rbp-1C8h]
  int v410; // [rsp+0h] [rbp-1C0h]
  __int64 v411; // [rsp+8h] [rbp-1B8h]
  unsigned int v412; // [rsp+10h] [rbp-1B0h]
  unsigned int v413; // [rsp+14h] [rbp-1ACh]
  __int64 v414; // [rsp+20h] [rbp-1A0h]
  __int64 v415; // [rsp+20h] [rbp-1A0h]
  unsigned int v416; // [rsp+28h] [rbp-198h]
  unsigned int v417; // [rsp+2Ch] [rbp-194h]
  __int64 v418; // [rsp+30h] [rbp-190h]
  void *sa; // [rsp+38h] [rbp-188h]
  char *s; // [rsp+38h] [rbp-188h]
  int v421[2]; // [rsp+40h] [rbp-180h] BYREF
  size_t v422; // [rsp+48h] [rbp-178h]
  int v423[2]; // [rsp+50h] [rbp-170h]
  void *v424; // [rsp+58h] [rbp-168h]
  char *v425; // [rsp+60h] [rbp-160h]
  char *v426; // [rsp+68h] [rbp-158h]
  void *ptr; // [rsp+70h] [rbp-150h]
  unsigned int v428; // [rsp+78h] [rbp-148h]
  unsigned int v429; // [rsp+7Ch] [rbp-144h]
  unsigned int *v430; // [rsp+80h] [rbp-140h]
  __int64 v431; // [rsp+88h] [rbp-138h]
  const __m128i **v432; // [rsp+90h] [rbp-130h]
  unsigned int *v433; // [rsp+98h] [rbp-128h]
  int v434[2]; // [rsp+A0h] [rbp-120h]
  __m128i *v435; // [rsp+A8h] [rbp-118h]
  size_t size; // [rsp+B0h] [rbp-110h]
  int v437[2]; // [rsp+B8h] [rbp-108h]
  signed __int64 v438; // [rsp+C0h] [rbp-100h]
  __int64 v439; // [rsp+C8h] [rbp-F8h]
  char v440; // [rsp+DFh] [rbp-E1h] BYREF
  unsigned int v441; // [rsp+E0h] [rbp-E0h] BYREF
  unsigned int v442; // [rsp+E4h] [rbp-DCh] BYREF
  int v443[2]; // [rsp+E8h] [rbp-D8h] BYREF
  __m128i *v444; // [rsp+F0h] [rbp-D0h] BYREF
  __int64 v445; // [rsp+F8h] [rbp-C8h] BYREF
  void *v446; // [rsp+100h] [rbp-C0h] BYREF
  const __m128i *v447; // [rsp+108h] [rbp-B8h] BYREF
  __int64 v448; // [rsp+110h] [rbp-B0h] BYREF
  _QWORD *v449; // [rsp+118h] [rbp-A8h] BYREF
  __int64 v450; // [rsp+120h] [rbp-A0h] BYREF
  __int64 v451; // [rsp+130h] [rbp-90h] BYREF
  int v452[4]; // [rsp+140h] [rbp-80h] BYREF
  size_t v453; // [rsp+150h] [rbp-70h]
  __m128i v454; // [rsp+160h] [rbp-60h] BYREF
  __int64 v455; // [rsp+170h] [rbp-50h]
  __int64 v456; // [rsp+178h] [rbp-48h]
  __int64 v457; // [rsp+180h] [rbp-40h]

  v27 = *(_QWORD **)a1;
  *(_QWORD *)v437 = a1;
  *(_QWORD *)v423 = a2;
  v413 = a3;
  *(_QWORD *)v421 = *v27;
  v28 = *(_QWORD *)(a2 + 40);
  v411 = __PAIR64__(a5, a6);
  v29 = *(_DWORD *)(v28 + 24);
  v418 = v28;
  v30 = *(_QWORD *)(v28 + 16);
  *(_QWORD *)(a1 + 144) = a2;
  v412 = v29;
  v431 = v30;
  LODWORD(v30) = *(_DWORD *)(a2 + 64);
  v440 = 1;
  v429 = v30;
  if ( (_DWORD)v30 != 2 )
  {
    if ( v429 == 1 )
    {
      v188 = *(_QWORD *)(a2 + 80);
      v440 = 0;
      v439 = v188;
      v189 = v188 & 0xFFFFFFFFFFFFFFF8LL;
      v441 = *a4;
      v190 = *(unsigned int *)((v188 & 0xFFFFFFFFFFFFFFF8LL) + 24);
      if ( (_DWORD)v190 )
      {
        v191 = v189 + 8 * v190;
        v31 = nullptr;
        v414 = *(_QWORD *)v421;
        do
        {
          v193 = *(_QWORD *)(v189 + 32);
          if ( *(_WORD *)(v193 + 4) )
          {
            *(_QWORD *)v452 = *(_QWORD *)(v189 + 32);
            ++*(_DWORD *)(v193 + 8);
            v448 = v414;
            v449 = v31;
            sub_51D1F0(&v449, v452);
            v31 = v449;
            v414 = v448;
          }
          else
          {
            if ( v31 )
              v192 = *(v31 - 1);
            else
              v192 = 0;
            sub_51FFF0(*(__int64 *)v437, v441, v193, v192, &v441, v440, a8);
            v440 = 1;
          }
          v189 += 8LL;
        }
        while ( v191 != v189 );
        goto LABEL_5;
      }
    }
    else
    {
      v441 = -1;
      v440 = 0;
    }
    v31 = nullptr;
    v414 = *(_QWORD *)v421;
LABEL_5:
    LODWORD(v432) = 0;
    size = (size_t)&v441;
    goto LABEL_6;
  }
  v195 = *(_QWORD *)(a2 + 88);
  v196 = *a4;
  si128 = 0;
  v197 = 0;
  v198 = *(_QWORD *)(a2 + 80);
  v455 = 0;
  v434[0] = v196;
  v199 = a4[1];
  v439 = v195 & 0xFFFFFFFFFFFFFFF8LL;
  LODWORD(v195) = *(_DWORD *)((v195 & 0xFFFFFFFFFFFFFFF8LL) + 24);
  v200 = (unsigned int *)(v198 & 0xFFFFFFFFFFFFFFF8LL);
  LODWORD(v433) = v199;
  v201 = v200[6];
  LODWORD(v432) = v195;
  v438 = (signed __int64)&v454;
  v456 = *(_QWORD *)v421;
  v457 = 0;
  v430 = (unsigned int *)&v450;
  v454 = 0;
  if ( (_DWORD)v201 )
  {
    while ( 1 )
    {
      v225 = *(_QWORD *)&v200[2 * v197 + 8];
      if ( *(_WORD *)(v225 + 4) == 1 )
      {
        if ( (_DWORD)v432 )
          break;
      }
LABEL_320:
      if ( v201 == ++v197 )
        goto LABEL_289;
    }
    LODWORD(size) = v197;
    while ( 1 )
    {
      v223 = 0;
      do
      {
        v224 = *(_QWORD *)(v439 + 8 * v223 + 32);
        if ( *(_WORD *)(v224 + 4) == 1 && *(_DWORD *)(v225 + 16) == *(_DWORD *)(v224 + 16) )
        {
          v435 = (__m128i *)v200;
          LODWORD(v451) = v223;
          LODWORD(v450) = size;
          sub_51E370((_QWORD *)v438, v430);
          sub_51E370(&v454.m128i_i64[1], (unsigned int *)&v451);
          v200 = (unsigned int *)v435;
        }
        ++v223;
      }
      while ( v223 != (unsigned int)v432 );
      if ( v201 == ++v197 )
        break;
      v225 = *(_QWORD *)&v200[2 * v197 + 8];
      LODWORD(size) = v197;
      if ( *(_WORD *)(v225 + 4) != 1 )
        goto LABEL_320;
    }
  }
LABEL_289:
  size = (size_t)v200;
  *(_QWORD *)v443 = 0;
  sub_51EC10(*(__int64 *)v437, *(__int64 *)v423, v443);
  v202 = *(_QWORD *)v443;
  if ( *(_QWORD *)v443 && *(_DWORD *)(*(_QWORD *)v443 - 4LL) )
  {
    v435 = (__m128i *)size;
    size = (size_t)&v441;
    sub_524610(*(__int64 *)v437, v434[0], (unsigned int)v433, (int **)v438, (int **)v443, &v441, 0, a8);
    v203 = (unsigned int *)v435;
    v204 = v409;
  }
  else
  {
    v435 = (__m128i *)size;
    size = (size_t)&v441;
    v204 = (unsigned int)v434[0];
    sub_520C70(*(__int64 *)v437, v434[0], (unsigned int)v433, (int **)v438, &v441, 0, a8);
    v203 = (unsigned int *)v435;
    if ( !v202 )
    {
      v205 = v435[1].m128i_u32[2];
      v206 = 0;
      if ( (_DWORD)v205 )
        goto LABEL_293;
      v31 = nullptr;
      v234 = *(_DWORD *)(v439 + 24);
      LODWORD(v432) = v234;
      if ( !v234 )
        goto LABEL_565;
LABEL_349:
      LODWORD(v432) = 0;
      v235 = v234;
      v209 = 0;
      v31 = nullptr;
      goto LABEL_539;
    }
  }
  v205 = v203[6];
  v206 = *(unsigned int *)(v202 - 4);
  if ( !(_DWORD)v205 )
  {
    v31 = nullptr;
    v234 = *(_DWORD *)(v439 + 24);
    LODWORD(v432) = v234;
    if ( !v234 )
    {
LABEL_564:
      sub_186B220((void *)(v202 - 8));
      goto LABEL_565;
    }
    goto LABEL_349;
  }
LABEL_293:
  v207 = v203 + 8;
  v31 = nullptr;
  v208 = 0;
  v209 = 0;
LABEL_294:
  if ( v209 < (unsigned int)v206 )
    goto LABEL_341;
  while ( 1 )
  {
    v210 = *(_QWORD *)v207;
    if ( *(_QWORD *)v207 )
      ++*(_DWORD *)(v210 + 8);
    if ( v31 )
    {
      v211 = *(v31 - 1);
      if ( v211 == *(v31 - 2) )
      {
        v343 = (3 * v211 + 1) >> 1;
        v344 = 8 * v343 + 8;
        if ( 8 * v211 + 8 >= (unsigned int)v344 || v211 >= v343 )
        {
LABEL_680:
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0((__int64 *)v452, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v452);
          sub_233E40((__int64)v452);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        LODWORD(v430) = v206;
        LODWORD(v432) = v205;
        v433 = v207;
        v434[0] = (3 * v211 + 1) >> 1;
        v435 = (__m128i *)v203;
        v345 = (_DWORD *)sub_186B300(v31 - 2, v344);
        v346 = (unsigned int)v345[1];
        v31 = v345 + 2;
        v203 = (unsigned int *)v435;
        v207 = v433;
        v205 = (unsigned int)v432;
        v206 = (unsigned int)v430;
        *v345 = v434[0];
        v213 = v346 + 1;
        v204 = (size_t)&v31[2 * v346];
      }
      else
      {
        v212 = v211;
        v213 = v211 + 1;
        v204 = (size_t)&v31[2 * v212];
      }
    }
    else
    {
      LODWORD(v432) = v206;
      LODWORD(v433) = v205;
      *(_QWORD *)v434 = v207;
      v435 = (__m128i *)v203;
      v392 = (_QWORD *)sub_186B270(0x18u);
      v31 = v392 + 1;
      *v392 = 2;
      v203 = (unsigned int *)v435;
      v213 = 1;
      v207 = *(unsigned int **)v434;
      v205 = (unsigned int)v433;
      v204 = (size_t)v31;
      v206 = (unsigned int)v432;
    }
    ++v208;
    *(_QWORD *)v204 = v210;
    *(v31 - 1) = v213;
    if ( v208 == (_DWORD)v205 )
      break;
    if ( v209 >= (unsigned int)v206 )
    {
      while ( 1 )
      {
        v216 = *(_QWORD *)&v203[2 * v208 + 8];
        if ( v216 )
          ++*(_DWORD *)(v216 + 8);
        v217 = *(v31 - 1);
        v218 = *(v31 - 2);
        if ( v218 == v217 )
        {
          LODWORD(v432) = v206;
          LODWORD(v433) = v205;
          v219 = (3 * v218 + 1) >> 1;
          v220 = 8 * v219 + 8;
          *(_QWORD *)v434 = v203;
          if ( 8 * v218 + 8 >= v220 )
            goto LABEL_680;
          LODWORD(v435) = (3 * v218 + 1) >> 1;
          if ( v218 >= v219 )
            goto LABEL_680;
          v221 = (_DWORD *)sub_186B300(v31 - 2, v220);
          v222 = (unsigned int)v221[1];
          v31 = v221 + 2;
          v203 = *(unsigned int **)v434;
          v205 = (unsigned int)v433;
          *v221 = (_DWORD)v435;
          LODWORD(v221) = v222;
          v206 = (unsigned int)v432;
          v204 = (size_t)&v31[2 * v222];
          v215 = (_DWORD)v221 + 1;
        }
        else
        {
          v214 = v217;
          v215 = v217 + 1;
          v204 = (size_t)&v31[2 * v214];
        }
        ++v208;
        *(_QWORD *)v204 = v216;
        *(v31 - 1) = v215;
        if ( v208 >= (unsigned int)v205 )
          goto LABEL_537;
      }
    }
    v207 += 2;
LABEL_341:
    if ( *(_DWORD *)(v202 + 4LL * v209) == v208 )
    {
      ++v208;
      ++v209;
      if ( v208 == (_DWORD)v205 )
        break;
      v207 += 2;
      goto LABEL_294;
    }
  }
  if ( v31 )
LABEL_537:
    LODWORD(v432) = *(v31 - 1);
  else
    LODWORD(v432) = 0;
  v235 = *(_DWORD *)(v439 + 24);
  if ( v235 )
  {
LABEL_539:
    v354 = 0;
    for ( i = (unsigned int *)(v439 + 32); ; i += 2 )
    {
      if ( v209 < (unsigned int)v206 )
        goto LABEL_557;
      do
      {
        v356 = *(_QWORD *)i;
        if ( *(_QWORD *)i )
          ++*(_DWORD *)(v356 + 8);
        if ( v31 )
        {
          v357 = *(v31 - 1);
          if ( v357 == *(v31 - 2) )
          {
            v369 = (3 * v357 + 1) >> 1;
            v370 = 8 * v369 + 8;
            if ( 8 * v357 + 8 >= (unsigned int)v370 || v357 >= v369 )
            {
LABEL_670:
              v8 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0((__int64 *)v452, "Overflow encountered when expanding vector");
              *v8 = (char *)off_1C63128;
              sub_2333C0(v8 + 1, v452);
              sub_233E40((__int64)v452);
              __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            LODWORD(ptr) = v206;
            LODWORD(v430) = v205;
            v433 = i;
            v434[0] = (3 * v357 + 1) >> 1;
            LODWORD(v435) = v235;
            v371 = (_DWORD *)sub_186B300(v31 - 2, v370);
            v372 = (unsigned int)v371[1];
            v31 = v371 + 2;
            v235 = (unsigned int)v435;
            i = v433;
            v205 = (unsigned int)v430;
            v206 = (unsigned int)ptr;
            *v371 = v434[0];
            v359 = v372 + 1;
            v204 = (size_t)&v31[2 * v372];
          }
          else
          {
            v358 = v357;
            v359 = v357 + 1;
            v204 = (size_t)&v31[2 * v358];
          }
        }
        else
        {
          LODWORD(v430) = v206;
          LODWORD(v433) = v205;
          *(_QWORD *)v434 = i;
          LODWORD(v435) = v235;
          v381 = (_QWORD *)sub_186B270(0x18u);
          v31 = v381 + 1;
          *v381 = 2;
          v235 = (unsigned int)v435;
          v359 = 1;
          i = *(unsigned int **)v434;
          v205 = (unsigned int)v433;
          v204 = (size_t)v31;
          v206 = (unsigned int)v430;
        }
        ++v354;
        *(_QWORD *)v204 = v356;
        *(v31 - 1) = v359;
        if ( v354 == v235 )
          goto LABEL_563;
        if ( v209 >= (unsigned int)v206 )
        {
          while ( 1 )
          {
            v204 = v439;
            v362 = *(_QWORD *)(v439 + 8LL * v354 + 32);
            if ( v362 )
              ++*(_DWORD *)(v362 + 8);
            v363 = *(v31 - 1);
            v364 = *(v31 - 2);
            if ( v364 == v363 )
            {
              LODWORD(v435) = v235;
              v365 = (3 * v364 + 1) >> 1;
              v366 = 8 * v365 + 8;
              if ( 8 * v364 + 8 >= v366 || v364 >= v365 )
                goto LABEL_670;
              v204 = v366;
              v367 = (unsigned int *)sub_186B300(v31 - 2, v366);
              v368 = v367[1];
              v31 = v367 + 2;
              *v367 = v365;
              v235 = (unsigned int)v435;
              LODWORD(v367) = v368;
              v205 = (unsigned __int64)&v31[2 * v368];
              v361 = (_DWORD)v367 + 1;
            }
            else
            {
              v360 = v363;
              v361 = v363 + 1;
              v205 = (unsigned __int64)&v31[2 * v360];
            }
            ++v354;
            *(_QWORD *)v205 = v362;
            *(v31 - 1) = v361;
            if ( v354 >= v235 )
              goto LABEL_563;
          }
        }
        i += 2;
LABEL_557:
        v204 = v354 + (unsigned int)v205;
      }
      while ( *(_DWORD *)(v202 + 4LL * v209) != (_DWORD)v204 );
      ++v354;
      ++v209;
      if ( v354 == v235 )
        break;
    }
  }
LABEL_563:
  if ( v202 )
    goto LABEL_564;
LABEL_565:
  sub_52C180(v438, v204, v205, v206);
  v414 = *(_QWORD *)v421;
LABEL_6:
  v449 = v31;
  v430 = (unsigned int *)&v440;
  v448 = v414;
  sub_522550(*(__int64 ***)v437, *(__int64 *)v423, v431, (unsigned int *)size, (__int64)&v448, &v440, si128, a8);
  v32 = v449;
  v415 = v448;
  v33 = (_QWORD *)sub_186B270(0xC0u);
  v424 = v33;
  *v33 = 0;
  v33[2] = 0;
  v33[3] = 0;
  v33[5] = 0;
  v33[6] = 0;
  v33[8] = 0;
  v33[9] = 0;
  v33[11] = 0;
  v33[12] = 0;
  v33[14] = 0;
  v33[15] = 0;
  v33[17] = 0;
  v33[18] = 0;
  v33[20] = 0;
  v33[21] = 0;
  v33[23] = 0;
  v442 = v441;
  if ( !v32 || (v34 = (_QWORD *)*((unsigned int *)v32 - 1), v452[0] = 0, !(_DWORD)v34) )
  {
    v417 = 0;
    v70 = 192;
    v416 = 0;
    v428 = 8;
    goto LABEL_65;
  }
  v438 = (signed __int64)v34;
  v35 = 0;
  v417 = 0;
  v416 = 0;
  v428 = 8;
  ptr = v452;
  while ( 2 )
  {
    v37 = v32[v35];
    LODWORD(v439) = v35;
    if ( !*(_WORD *)(v37 + 4) )
    {
      v454.m128i_i64[0] = v37;
      if ( !v440 )
        sub_51E410(*(__int64 *)v437, v442, &v442, a8);
      v36 = sub_4DAD60(***(_QWORD ***)v437, v442, (unsigned __int64 *)&v454, v439);
      sub_52C6B0(a8, v36);
      v440 = 1;
      goto LABEL_12;
    }
    v38 = *(_DWORD *)(v37 + 16);
    v39 = 2 * v428;
    if ( 3 * v428 < 4 * (v417 + v416) )
    {
      LODWORD(v435) = *(_DWORD *)(v37 + 16);
      *(_QWORD *)v434 = 24LL * v39;
      size = *(_QWORD *)v434;
      v50 = (unsigned int *)sub_186B270(*(size_t *)v434);
      v433 = v50;
      v51 = *(_QWORD *)v434;
      v38 = (int)v435;
      if ( !v39 )
      {
        v54 = v428;
        v40 = (char *)v50;
        LODWORD(size) = -1;
        v55 = (char *)v424 + 24 * v428;
        if ( v424 != v55 )
          goto LABEL_44;
LABEL_56:
        if ( v424 )
        {
          if ( v428 )
          {
            v66 = (__m128i *)v424;
            LODWORD(v426) = v39;
            v67 = v439;
            v439 = v35;
            v68 = v38;
            v435 = (__m128i *)((char *)v424 + 24 * v54);
            do
            {
              while ( 1 )
              {
                v69 = v66[1].m128i_i64[0];
                if ( !v69 )
                  break;
                v66 = (__m128i *)((char *)v66 + 24);
                sub_186B220((void *)(v69 - 8));
                if ( v435 == v66 )
                  goto LABEL_61;
              }
              v66 = (__m128i *)((char *)v66 + 24);
            }
            while ( v66 != v435 );
LABEL_61:
            v38 = v68;
            v35 = v439;
            LODWORD(v439) = v67;
            v39 = (unsigned int)v426;
          }
          LODWORD(v435) = v38;
          sub_186B220(v424);
          v38 = (int)v435;
        }
        v41 = (char *)v433;
        v428 = v39;
        v417 = 0;
        v424 = v433;
        goto LABEL_16;
      }
      v52 = &v50[6 * v39];
      v53 = v439;
      do
      {
        *(_QWORD *)v50 = 0;
        v50 += 6;
        *((_QWORD *)v50 - 1) = 0;
      }
      while ( v50 != v52 );
      v54 = v428;
      LODWORD(v439) = v53;
      LODWORD(size) = v39 - 1;
      v55 = (char *)v424 + 24 * v428;
      v40 = (char *)v433 + v51;
LABEL_44:
      for ( j = (char *)v424 + 16; ; j = v57 )
      {
        if ( *((_DWORD *)j - 3) != 2 )
        {
LABEL_45:
          v57 = j + 24;
          if ( v55 == j + 8 )
            goto LABEL_56;
          continue;
        }
        v58 = *((_DWORD *)j - 4);
        v59 = 24LL * (v58 & (unsigned int)size);
        v60 = (char *)&v433[(unsigned __int64)v59 / 4];
        if ( v51 == v59 )
        {
LABEL_164:
          if ( v433 == (unsigned int *)v60 )
          {
LABEL_277:
            v422 = v54;
            v425 = (char *)v51;
            v426 = v55;
            LODWORD(v435) = v38;
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v62 = (char *)v433;
          v132 = v439;
          while ( *((_DWORD *)v62 + 1) )
          {
            v62 += 24;
            if ( v60 == v62 )
              goto LABEL_277;
          }
          *(_DWORD *)v62 = v58;
          v133 = *((_DWORD *)j - 2);
          LODWORD(v439) = v132;
          *((_DWORD *)v62 + 2) = v133;
          *((_DWORD *)v62 + 1) = 2;
          if ( j == v62 + 16 )
            goto LABEL_45;
          v64 = *((_QWORD *)v62 + 2);
          if ( v64 )
            goto LABEL_54;
        }
        else
        {
          v61 = v439;
          v62 = (char *)&v433[(unsigned __int64)v59 / 4];
          while ( *((_DWORD *)v62 + 1) )
          {
            v62 += 24;
            if ( v62 == v40 )
              goto LABEL_164;
          }
          *(_DWORD *)v62 = v58;
          v63 = *((_DWORD *)j - 2);
          LODWORD(v439) = v61;
          *((_DWORD *)v62 + 2) = v63;
          *((_DWORD *)v62 + 1) = 2;
          if ( j == v62 + 16 )
            goto LABEL_45;
          v64 = *((_QWORD *)v62 + 2);
          if ( v64 )
          {
LABEL_54:
            sa = (void *)v54;
            v422 = v51;
            v425 = v55;
            v426 = v62;
            LODWORD(v435) = v38;
            sub_186B220((void *)(v64 - 8));
            v54 = (size_t)sa;
            v51 = v422;
            v55 = v425;
            v62 = v426;
            v38 = (int)v435;
          }
        }
        *((_QWORD *)v62 + 2) = 0;
        *((_QWORD *)v62 + 2) = *(_QWORD *)j;
        v57 = j + 24;
        v65 = j + 8;
        *((_QWORD *)v65 - 1) = 0;
        if ( v55 == v65 )
          goto LABEL_56;
      }
    }
    LODWORD(size) = v428 - 1;
    *(_QWORD *)v434 = 24LL * v428;
    v40 = (char *)v424 + *(_QWORD *)v434;
    v41 = (char *)v424;
LABEL_16:
    v42 = 24LL * (v38 & (unsigned int)size);
    v43 = &v41[v42];
    if ( v42 == *(_QWORD *)v434 )
    {
      v45 = nullptr;
LABEL_25:
      v47 = (char *)v424;
      if ( v424 == v43 )
      {
LABEL_161:
        sub_1872CE0("");
        sub_1873130(114, 461);
      }
      while ( 1 )
      {
        v48 = *((_DWORD *)v47 + 1);
        if ( v48 == 2 )
        {
          if ( v38 == *(_DWORD *)v47 && v38 == *((_DWORD *)v47 + 2) )
          {
            v45 = v47;
            goto LABEL_39;
          }
        }
        else
        {
          if ( !v48 )
          {
            if ( v45 )
              --v417;
            else
              v45 = v47;
            v49 = *((_QWORD *)v45 + 2);
            *((_DWORD *)v45 + 2) = v38;
            if ( v49 )
              goto LABEL_37;
            goto LABEL_38;
          }
          v45 = v47;
        }
        v47 += 24;
        if ( v43 == v47 )
          goto LABEL_161;
      }
    }
    v44 = &v41[v42];
    v45 = nullptr;
    while ( 1 )
    {
      v46 = *((_DWORD *)v44 + 1);
      if ( v46 != 2 )
        break;
      if ( v38 == *(_DWORD *)v44 && v38 == *((_DWORD *)v44 + 2) )
      {
        v45 = v44;
        goto LABEL_39;
      }
LABEL_20:
      v44 += 24;
      if ( v40 == v44 )
        goto LABEL_25;
    }
    if ( v46 )
    {
      v45 = v44;
      goto LABEL_20;
    }
    if ( v45 )
      --v417;
    else
      v45 = v44;
    v49 = *((_QWORD *)v45 + 2);
    *((_DWORD *)v45 + 2) = v38;
    if ( v49 )
    {
LABEL_37:
      LODWORD(size) = v38;
      sub_186B220((void *)(v49 - 8));
      v38 = size;
    }
LABEL_38:
    *((_QWORD *)v45 + 2) = 0;
    *((_DWORD *)v45 + 1) = 2;
    *(_DWORD *)v45 = v38;
    ++v416;
LABEL_39:
    sub_51E370((_QWORD *)v45 + 2, (unsigned int *)ptr);
LABEL_12:
    ++v35;
    v452[0] = v439 + 1;
    if ( v35 != v438 )
      continue;
    break;
  }
  v70 = 24LL * v428;
LABEL_65:
  v71 = (char *)v424 + v70;
  v72 = (char *)v424;
  if ( v424 != v71 )
  {
    while ( *((_DWORD *)v72 + 1) != 2 )
    {
      v72 += 24;
      if ( v71 == v72 )
        goto LABEL_81;
    }
    v73 = v72;
    if ( v71 != v72 )
    {
      while ( 2 )
      {
        v74 = *((int **)v73 + 2);
        if ( v74 )
        {
          if ( *(v74 - 1) != 1 )
          {
            if ( v429 != 2 )
              goto LABEL_73;
LABEL_153:
            if ( *v74 >= (unsigned int)v432 )
            {
LABEL_73:
              if ( !v440 )
                goto LABEL_156;
              goto LABEL_74;
            }
            if ( v74[*(v74 - 1) - 1] < (unsigned int)v432 )
            {
              if ( !v440 )
                goto LABEL_156;
LABEL_74:
              v75 = *(v74 - 1);
LABEL_75:
              v76 = sub_4DCAE0(v442, v75, v74);
              sub_52C6B0(a8, v76);
              v440 = 1;
            }
          }
          v77 = v73 + 24;
          if ( v73 + 24 == v71 )
            goto LABEL_81;
          while ( *((_DWORD *)v77 + 1) != 2 )
          {
            v77 += 24;
            if ( v71 == v77 )
              goto LABEL_81;
          }
          v73 = v77;
          if ( v71 == v77 )
            goto LABEL_81;
          continue;
        }
        break;
      }
      if ( v429 == 2 )
        goto LABEL_153;
      if ( !v440 )
      {
LABEL_156:
        sub_51E410(*(__int64 *)v437, v442, &v442, a8);
        v74 = *((int **)v73 + 2);
        if ( v74 )
          goto LABEL_74;
      }
      v74 = nullptr;
      v75 = 0;
      goto LABEL_75;
    }
  }
LABEL_81:
  v78 = *(_DWORD *)(*(_QWORD *)v423 + 68LL);
  v79 = *(_DWORD *)(*(_QWORD *)v423 + 56LL);
  v450 = *(_QWORD *)v421;
  LODWORD(v422) = v78;
  v80 = v79;
  if ( v78 >= v79 )
  {
    v451 = *(_QWORD *)v421;
    if ( v429 == v78 )
    {
      s = nullptr;
      v425 = nullptr;
      goto LABEL_94;
    }
    s = nullptr;
    v425 = nullptr;
    if ( v442 != -1 )
    {
      if ( v429 < v78 )
        goto LABEL_263;
      goto LABEL_94;
    }
    goto LABEL_350;
  }
  v81 = (unsigned int)v422;
  v82 = *(_QWORD *)v423 + 8LL * (unsigned int)v422;
  v83 = *(_QWORD *)(v82 + 80) & 0xFFFFFFFFFFFFFFF8LL;
  if ( *(_QWORD *)(v82 + 80) > 7u )
    ++*(_DWORD *)(v83 + 8);
  v84 = (_QWORD *)sub_186B270(0x18u);
  v85 = *(_QWORD *)v423 + 8 * (v80 - 1 - (unsigned int)v422 + v81) + 8;
  v86 = v84 + 1;
  v425 = (char *)(v84 + 1);
  *v84 = 2;
  v87 = 1;
  v88 = v86;
  while ( 1 )
  {
    v82 += 8;
    *v86 = v83;
    *((_DWORD *)v88 - 1) = v87;
    if ( v82 == v85 )
      break;
    while ( 1 )
    {
      v83 = *(_QWORD *)(v82 + 80) & 0xFFFFFFFFFFFFFFF8LL;
      if ( *(_QWORD *)(v82 + 80) > 7u )
        ++*(_DWORD *)(v83 + 8);
      v89 = v425;
      v90 = *((_DWORD *)v425 - 1);
      if ( v90 == *((_DWORD *)v425 - 2) )
        break;
      v91 = v90;
      v87 = v90 + 1;
      v82 += 8;
      *(_QWORD *)&v425[8 * v91] = v83;
      *((_DWORD *)v89 - 1) = v87;
      if ( v82 == v85 )
        goto LABEL_90;
    }
    v128 = (3 * v90 + 1) >> 1;
    v129 = 8 * v128 + 8;
    if ( 8 * v90 + 8 >= (unsigned int)v129 || v90 >= v128 )
    {
      v438 = (signed __int64)&v454;
      v20 = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v454.m128i_i64, "Overflow encountered when expanding vector");
      *v20 = (char *)off_1C63128;
      sub_2333C0(v20 + 1, (_QWORD *)v438);
      sub_233E40(v438);
      __cxa_throw(v20, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v130 = (unsigned int *)sub_186B300(v425 - 8, v129);
    v131 = v130[1];
    v88 = (unsigned __int64 *)(v130 + 2);
    *v130 = v128;
    v425 = (char *)v88;
    LODWORD(v130) = v131;
    v86 = &v88[v131];
    v87 = (_DWORD)v130 + 1;
  }
LABEL_90:
  v451 = *(_QWORD *)v421;
  if ( !v87 )
  {
    if ( v429 == (_DWORD)v422 )
    {
      s = nullptr;
      goto LABEL_94;
    }
    s = nullptr;
    if ( v442 != -1 )
    {
      if ( v429 < (unsigned int)v422 )
        goto LABEL_263;
      goto LABEL_94;
    }
LABEL_350:
    v454.m128i_i64[0] = 0;
    sub_51C670(*(__int64 *)v437, v431, &v454, &v442);
    if ( v454.m128i_i64[0] )
      sub_186B220((void *)(v454.m128i_i64[0] - 8));
    if ( v429 >= (unsigned int)v422 )
    {
LABEL_415:
      if ( v425 )
        goto LABEL_213;
      goto LABEL_94;
    }
LABEL_263:
    while ( 2 )
    {
      v438 = *(_QWORD *)(*(_QWORD *)v423 + 8LL * v429 + 80) & 0xFFFFFFFFFFFFFFF8LL;
      v180 = *(_DWORD *)(v438 + 24);
      v433 = *(unsigned int **)(v438 + 16);
      v181 = ***(_QWORD ***)v437;
      v455 = 0;
      v457 = 0;
      v456 = v181;
      if ( v32 && (v182 = *((unsigned int *)v32 - 1), (_DWORD)v182) )
      {
        v439 = 0;
        v183 = v180;
        v435 = nullptr;
        size = 0;
        while ( 1 )
        {
          v184 = v32[v439];
          if ( *(_WORD *)(v184 + 4) == 1 )
          {
            if ( v180 )
              break;
          }
LABEL_266:
          if ( ++v439 == v182 )
            goto LABEL_361;
        }
        v185 = v439;
        while ( 1 )
        {
          v186 = 0;
          do
          {
            v187 = *(_QWORD *)(v438 + 8 * v186 + 32);
            if ( *(_WORD *)(v187 + 4) == 1 && *(_DWORD *)(v184 + 16) == *(_DWORD *)(v187 + 16) )
            {
              if ( size )
              {
                v236 = *(unsigned int *)(size - 4);
                if ( (_DWORD)v236 == *(_DWORD *)(size - 8) )
                {
                  v300 = (unsigned int)(3 * v236 + 1) >> 1;
                  v301 = 4 * v300 + 8;
                  if ( 4 * (int)v236 + 8 >= (unsigned int)v301 || (unsigned int)v236 >= v300 )
                  {
                    v21 = (char **)__cxa_allocate_exception(0x28u);
                    sub_24ABB0((__int64 *)v452, "Overflow encountered when expanding vector");
                    *v21 = (char *)off_1C63128;
                    sub_2333C0(v21 + 1, v452);
                    sub_233E40((__int64)v452);
                    __cxa_throw(v21, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                  }
                  LODWORD(ptr) = v180;
                  LODWORD(v432) = v185;
                  v434[0] = (unsigned int)(3 * v236 + 1) >> 1;
                  v302 = (_DWORD *)sub_186B300((void *)(size - 8), v301);
                  v185 = (int)v432;
                  size = (size_t)(v302 + 2);
                  v180 = (unsigned int)ptr;
                  *v302 = v434[0];
                  v237 = &v302[v302[1] + 2];
                }
                else
                {
                  v237 = (int *)(size + 4 * v236);
                }
              }
              else
              {
                LODWORD(v432) = v180;
                v434[0] = v185;
                v237 = (int *)(sub_186B270(0x10u) + 8);
                v185 = v434[0];
                v180 = (unsigned int)v432;
                *((_QWORD *)v237 - 1) = 2;
                size = (size_t)v237;
              }
              *v237 = v185;
              v238 = (unsigned int *)v435;
              ++*(_DWORD *)(size - 4);
              if ( v238 )
              {
                v239 = *(v238 - 1);
                if ( (_DWORD)v239 == *(v238 - 2) )
                {
                  v297 = (unsigned int)(3 * v239 + 1) >> 1;
                  v298 = 4 * v297 + 8;
                  if ( 4 * (int)v239 + 8 >= (unsigned int)v298 || (unsigned int)v239 >= v297 )
                  {
                    v22 = (char **)__cxa_allocate_exception(0x28u);
                    sub_24ABB0((__int64 *)v452, "Overflow encountered when expanding vector");
                    *v22 = (char *)off_1C63128;
                    sub_2333C0(v22 + 1, v452);
                    sub_233E40((__int64)v452);
                    __cxa_throw(v22, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                  }
                  LODWORD(ptr) = v180;
                  LODWORD(v432) = v185;
                  v434[0] = (unsigned int)(3 * v239 + 1) >> 1;
                  v299 = (_DWORD *)sub_186B300(&v435[-1].m128i_u64[1], v298);
                  v185 = (int)v432;
                  v435 = (__m128i *)(v299 + 2);
                  v180 = (unsigned int)ptr;
                  *v299 = v434[0];
                  v240 = &v299[v299[1] + 2];
                }
                else
                {
                  v240 = &v238[v239];
                }
              }
              else
              {
                LODWORD(v432) = v180;
                v434[0] = v185;
                v240 = (unsigned int *)(sub_186B270(0x10u) + 8);
                v185 = v434[0];
                v180 = (unsigned int)v432;
                *((_QWORD *)v240 - 1) = 2;
                v435 = (__m128i *)v240;
              }
              *v240 = v186;
              ++v435[-1].m128i_i32[3];
            }
            ++v186;
          }
          while ( v186 != v183 );
          if ( ++v439 == v182 )
            break;
          v184 = v32[v439];
          v185 = v439;
          if ( *(_WORD *)(v184 + 4) != 1 )
            goto LABEL_266;
        }
LABEL_361:
        if ( size )
        {
          v241 = *(unsigned int *)(size - 4);
          if ( (_DWORD)v241 )
          {
            v242 = (int *)size;
            v243 = size + 4 * v241;
            v244 = (_DWORD *)(sub_186B270(0x10u) + 8);
            *((_QWORD *)v244 - 1) = 2;
            v245 = v244;
            v439 = (__int64)v244;
            while ( 1 )
            {
              v246 = *v242++;
              *v244 = v246;
              v247 = *(v245 - 1);
              v248 = (unsigned int)(v247 + 1);
              *(v245 - 1) = v248;
              if ( v242 == (int *)v243 )
                break;
              v249 = *(v245 - 2);
              if ( v249 == (_DWORD)v248 )
              {
                v250 = (3 * v249 + 1) >> 1;
                v251 = 4 * v250 + 8;
                if ( 4 * v247 + 12 >= (unsigned int)v251 || v249 >= v250 )
                {
                  v18 = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0((__int64 *)v452, "Overflow encountered when expanding vector");
                  *v18 = (char *)off_1C63128;
                  sub_2333C0(v18 + 1, v452);
                  sub_233E40((__int64)v452);
                  __cxa_throw(v18, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                }
                v252 = (unsigned int *)sub_186B300(v245 - 2, v251);
                v253 = (size_t)(v252 + 2);
                *v252 = v250;
                v254 = v252[1];
                v439 = v253;
                v245 = (_DWORD *)v253;
                v244 = (_DWORD *)(v253 + 4 * v254);
              }
              else
              {
                v244 = &v245[v248];
              }
            }
            v255 = *(unsigned int *)(size - 4);
            if ( (_DWORD)v255 )
            {
              v256 = (unsigned int *)v435;
              v257 = (unsigned int *)v435 + v255;
              v258 = (int *)(sub_186B270(0x10u) + 8);
              *((_QWORD *)v258 - 1) = 2;
              v259 = v258;
              while ( 1 )
              {
                v260 = *v256++;
                *v258 = v260;
                v261 = *(v259 - 1);
                v262 = (unsigned int)(v261 + 1);
                *(v259 - 1) = v262;
                if ( v256 == v257 )
                  break;
                v263 = *(v259 - 2);
                if ( v263 == (_DWORD)v262 )
                {
                  v264 = (3 * v263 + 1) >> 1;
                  v265 = 4 * v264 + 8;
                  if ( 4 * v261 + 12 >= (unsigned int)v265 || v263 >= v264 )
                  {
                    v19 = (char **)__cxa_allocate_exception(0x28u);
                    sub_24ABB0((__int64 *)v452, "Overflow encountered when expanding vector");
                    *v19 = (char *)off_1C63128;
                    sub_2333C0(v19 + 1, v452);
                    sub_233E40((__int64)v452);
                    __cxa_throw(v19, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                  }
                  v266 = (unsigned int *)sub_186B300(v259 - 2, v265);
                  v259 = (int *)(v266 + 2);
                  *v266 = v264;
                  v258 = (int *)&v266[v266[1] + 2];
                }
                else
                {
                  v258 = &v259[v262];
                }
              }
              v180 = *(_DWORD *)(v438 + 24);
            }
            else
            {
              v259 = nullptr;
              v180 = *(_DWORD *)(v438 + 24);
            }
          }
          else
          {
            v259 = nullptr;
            v439 = 0;
            v180 = *(_DWORD *)(v438 + 24);
          }
LABEL_379:
          if ( v180 )
          {
            v267 = 0;
            *(_QWORD *)v434 = v180;
            v432 = &v447;
            while ( 1 )
            {
              v275 = *(_QWORD *)(v438 + 8 * v267 + 32);
              if ( *(_WORD *)(v275 + 4) != 1 )
                break;
LABEL_389:
              if ( ++v267 == *(_QWORD *)v434 )
                goto LABEL_403;
            }
            v276 = **(_QWORD **)v437;
            sub_654200(**(_QWORD **)v437, 0);
            v277 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v276 + 2968) + 192LL))(*(_QWORD *)(v276 + 2968));
            sub_4C4280(v277, (__int64)v433, v267, v432);
            sub_521500(*(__int64 *)v437, v431, v442, (__int64)v447, v275, &v442, (char *)v430, a8);
            if ( v32 )
            {
              v278 = v439;
              v279 = *((_DWORD *)v32 - 1);
              if ( v439 )
                goto LABEL_393;
            }
            else
            {
              v278 = v439;
              v279 = 0;
              if ( v439 )
              {
LABEL_393:
                v280 = *(unsigned int *)(v278 - 4);
                if ( (_DWORD)v280 == *(_DWORD *)(v278 - 8) )
                {
                  v281 = (unsigned int)(3 * v280 + 1) >> 1;
                  v282 = 4 * v281 + 8;
                  if ( 4 * (int)v280 + 8 >= (unsigned int)v282 || (unsigned int)v280 >= v281 )
                  {
                    v25 = (char **)__cxa_allocate_exception(0x28u);
                    sub_24ABB0((__int64 *)v452, "Overflow encountered when expanding vector");
                    *v25 = (char *)off_1C63128;
                    sub_2333C0(v25 + 1, v452);
                    sub_233E40((__int64)v452);
                    __cxa_throw(v25, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                  }
                  LODWORD(v426) = (unsigned int)(3 * v280 + 1) >> 1;
                  LODWORD(ptr) = v279;
                  v283 = (_DWORD *)sub_186B300((void *)(v439 - 8), v282);
                  v279 = (int)ptr;
                  v439 = (__int64)(v283 + 2);
                  *v283 = (_DWORD)v426;
                  v268 = &v283[v283[1] + 2];
                }
                else
                {
                  v268 = (_DWORD *)(v278 + 4 * v280);
                }
                goto LABEL_382;
              }
            }
            LODWORD(ptr) = v279;
            v296 = (_QWORD *)sub_186B270(0x10u);
            *v296 = 2;
            v268 = v296 + 1;
            v279 = (int)ptr;
            v439 = (__int64)v268;
LABEL_382:
            *v268 = v279;
            ++*(_DWORD *)(v439 - 4);
            if ( v259 )
            {
              v269 = (unsigned int)*(v259 - 1);
              if ( (_DWORD)v269 == *(v259 - 2) )
              {
                v288 = (unsigned int)(3 * v269 + 1) >> 1;
                v289 = 4 * v288 + 8;
                if ( 4 * (int)v269 + 8 >= (unsigned int)v289 || (unsigned int)v269 >= v288 )
                {
                  v23 = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0((__int64 *)v452, "Overflow encountered when expanding vector");
                  *v23 = (char *)off_1C63128;
                  sub_2333C0(v23 + 1, v452);
                  sub_233E40((__int64)v452);
                  ptr = v259 - 2;
                  __cxa_throw(v23, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                }
                LODWORD(v426) = (unsigned int)(3 * v269 + 1) >> 1;
                ptr = v259 - 2;
                v290 = (_DWORD *)sub_186B300(v259 - 2, v289);
                v259 = v290 + 2;
                *v290 = (_DWORD)v426;
                v270 = &v290[v290[1] + 2];
              }
              else
              {
                v270 = &v259[v269];
              }
            }
            else
            {
              v303 = (_QWORD *)sub_186B270(0x10u);
              v259 = (int *)(v303 + 1);
              *v303 = 2;
              v270 = (int *)(v303 + 1);
            }
            *v270 = v267;
            ++*(v259 - 1);
            ++*(_DWORD *)(v275 + 8);
            if ( v32 )
            {
              v271 = *((_DWORD *)v32 - 1);
              if ( v271 == *((_DWORD *)v32 - 2) )
              {
                v284 = (3 * v271 + 1) >> 1;
                v285 = 8 * v284 + 8;
                if ( 8 * v271 + 8 >= (unsigned int)v285 || v271 >= v284 )
                {
                  v26 = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0((__int64 *)v452, "Overflow encountered when expanding vector");
                  *v26 = (char *)off_1C63128;
                  sub_2333C0(v26 + 1, v452);
                  sub_233E40((__int64)v452);
                  ptr = v259 - 2;
                  __cxa_throw(v26, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                }
                ptr = v259 - 2;
                v286 = (unsigned int *)sub_186B300(v32 - 1, v285);
                v287 = v286[1];
                v32 = v286 + 2;
                *v286 = v284;
                LODWORD(v286) = v287;
                v274 = &v32[v287];
                v273 = (_DWORD)v286 + 1;
              }
              else
              {
                v272 = v271;
                v273 = v271 + 1;
                v274 = &v32[v272];
              }
            }
            else
            {
              ptr = v259 - 2;
              v304 = (_QWORD *)sub_186B270(0x18u);
              v32 = v304 + 1;
              v274 = v304 + 1;
              *v304 = 2;
              v273 = 1;
            }
            *v274 = v275;
            *((_DWORD *)v32 - 1) = v273;
            goto LABEL_389;
          }
LABEL_403:
          v291 = *((_DWORD *)sub_51BE80(
                               *(_QWORD **)(*(_QWORD *)v437 + 24LL),
                               *(_DWORD *)(*(_QWORD *)v437 + 32LL),
                               (__int64)v433)
                 + 2);
          if ( v440 )
          {
            v292 = v439;
            if ( v439 )
            {
LABEL_405:
              v293 = *(_DWORD *)(v292 - 4);
              v294 = (int *)v292;
              goto LABEL_406;
            }
          }
          else
          {
            sub_51E410(*(__int64 *)v437, v442, &v442, a8);
            v292 = v439;
            if ( v439 )
              goto LABEL_405;
          }
          v293 = 0;
          v294 = (int *)v292;
LABEL_406:
          v295 = sub_4DD150(v442, v291, v293, v294, v259);
          sub_52C6B0(a8, v295);
          v440 = 1;
          if ( v259 )
            sub_186B220(v259 - 2);
          if ( v439 )
            sub_186B220((void *)(v439 - 8));
          if ( v435 )
            sub_186B220(&v435[-1].m128i_u64[1]);
          if ( size )
            sub_186B220((void *)(size - 8));
          if ( ++v429 >= (unsigned int)v422 )
            goto LABEL_415;
          continue;
        }
        v180 = *(_DWORD *)(v438 + 24);
      }
      else
      {
        v435 = nullptr;
      }
      break;
    }
    size = 0;
    v259 = nullptr;
    v439 = 0;
    goto LABEL_379;
  }
  v134 = v87;
  v135 = sub_15EC1C0(*(_QWORD *)v421, v87);
  size = v135;
  if ( v135 )
    ++*(_DWORD *)(v135 + 8);
  sub_157C960(*(_QWORD *)v437 + 152LL, v134);
  sub_157E9E0(v437[0] + 152, size);
  v136 = *(_QWORD *)(*(_QWORD *)v437 + 176LL);
  if ( !v136 )
  {
    v137 = 1;
    goto LABEL_179;
  }
  v137 = *(_DWORD *)(v136 - 4) + 1;
  if ( *(_DWORD *)(v136 - 4) != -1 )
  {
LABEL_179:
    v138 = sub_186B270(0x18u) + 8;
    *(_QWORD *)(v138 - 8) = 2;
    for ( s = (char *)v138; ; s = (char *)(v141 + 2) )
    {
      v142 = *((_DWORD *)s - 2);
      if ( v142 >= v137 )
        break;
      v139 = (3 * v142 + 1) >> 1;
      v140 = 8 * v139 + 8;
      if ( 8 * v142 + 8 >= v140 || v142 >= v139 )
      {
        v438 = (signed __int64)&v454;
        v9 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v454.m128i_i64, "Overflow encountered when expanding vector");
        *v9 = (char *)off_1C63128;
        sub_2333C0(v9 + 1, (_QWORD *)v438);
        sub_233E40(v438);
        __cxa_throw(v9, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v141 = (unsigned int *)sub_186B300(s - 8, v140);
      *v141 = v139;
    }
    *((_DWORD *)s - 1) = v137;
    memset(s, 0, 8LL * v137);
    v136 = *(_QWORD *)(*(_QWORD *)v437 + 176LL);
    if ( !v136 )
      goto LABEL_207;
    goto LABEL_185;
  }
  s = nullptr;
LABEL_185:
  v143 = 0;
  do
  {
    if ( v143 >= *(_DWORD *)(v136 - 4) )
      break;
    v144 = *(_QWORD **)(v136 + 8LL * v143);
    if ( !v144 )
      goto LABEL_206;
    v145 = 24LL * (v143 & (v428 - 1));
    v146 = (char *)v424 + v145;
    v147 = 24LL * v428;
    v439 = (__int64)v424 + v147;
    if ( v145 != v147 )
    {
      v148 = (char *)v424 + v145;
      v149 = (char *)v424 + v147;
      do
      {
        v150 = *((_DWORD *)v148 + 1);
        if ( v150 == 2 )
        {
          if ( *(_DWORD *)v148 == v143 && *((_DWORD *)v148 + 2) == v143 )
          {
LABEL_195:
            v151 = 0x3FFFFFFFCLL;
            v152 = *((_QWORD *)v148 + 2);
            if ( v152 )
              v151 = 4LL * (unsigned int)(*(_DWORD *)(v152 - 4) - 1);
            v153 = *(_DWORD *)(v152 + v151);
            LODWORD(v447) = v153;
            goto LABEL_198;
          }
        }
        else if ( !v150 )
        {
LABEL_216:
          v439 = (__int64)v149;
          goto LABEL_217;
        }
        v148 += 24;
      }
      while ( v149 != v148 );
      v439 = (__int64)v424 + v147;
    }
    if ( v146 != v424 )
    {
      v149 = (char *)v439;
      v148 = (char *)v424;
      while ( 1 )
      {
        v179 = *((_DWORD *)v148 + 1);
        if ( v179 == 2 )
        {
          if ( *(_DWORD *)v148 == v143 && *((_DWORD *)v148 + 2) == v143 )
            goto LABEL_195;
        }
        else if ( !v179 )
        {
          goto LABEL_216;
        }
        v148 += 24;
        if ( v146 == v148 )
          goto LABEL_216;
      }
    }
LABEL_217:
    *(_QWORD *)v452 = v144;
    *(_QWORD *)v434 = 24LL * (v143 & (v428 - 1));
    LODWORD(v435) = v428 - 1;
    v438 = (signed __int64)v144;
    sub_521C80(
      *(__int64 ***)v437,
      *(__int64 *)v423,
      *(double *)si128.m128_u64,
      0,
      v431,
      v442,
      (__int64 *)v452,
      &v442,
      (char *)v430,
      a8);
    if ( v32 )
      v153 = *((_DWORD *)v32 - 1);
    else
      v153 = 0;
    v162 = v438;
    v435 = *(__m128i **)v434;
    LODWORD(v438) = v428 - 1;
    LODWORD(v447) = v153;
    v163 = sub_15DB5C0(*(_QWORD *)v421, v143, v162);
    v454.m128i_i64[0] = v163;
    v164 = v428 - 1;
    v165 = *(_QWORD *)v434;
    if ( v163 )
      ++*(_DWORD *)(v163 + 8);
    *(_QWORD *)v434 = v165;
    LODWORD(v438) = v164;
    v448 = v415;
    v449 = v32;
    sub_51D1F0(&v449, &v454);
    v32 = v449;
    v415 = v448;
    v166 = *(_QWORD *)v434;
    v167 = 2 * v428;
    LODWORD(v435) = 2 * v428;
    if ( 3 * v428 >= 4 * (v416 + v417) )
      goto LABEL_222;
    v382 = v167;
    v434[0] = v438;
    v439 = 24LL * v167;
    v147 = v439;
    v383 = (_QWORD *)sub_186B270(v439);
    v438 = (signed __int64)v383;
    v384 = v434[0];
    if ( (_DWORD)v435 )
    {
      v385 = v439;
      v386 = &v383[3 * v382];
      do
      {
        *v383 = 0;
        v383 += 3;
        *(v383 - 1) = 0;
      }
      while ( v386 != v383 );
      v439 = v385;
      v434[0] = v384;
      sub_52CE40(v424, v428, v438, (unsigned int)v435);
      v387 = (unsigned int)v434[0];
      if ( !v424 )
        goto LABEL_606;
LABEL_602:
      v388 = (char *)v424;
      v389 = (char *)v424 + 24 * v387 + 24;
      do
      {
        while ( 1 )
        {
          v390 = *((_QWORD *)v388 + 2);
          if ( !v390 )
            break;
          *(_QWORD *)v434 = v389;
          v388 += 24;
          sub_186B220((void *)(v390 - 8));
          v389 = *(char **)v434;
          if ( *(char **)v434 == v388 )
            goto LABEL_605;
        }
        v388 += 24;
      }
      while ( v389 != v388 );
      goto LABEL_605;
    }
    sub_52CE40(v424, v428, v383, 0);
    v387 = (unsigned int)v434[0];
    if ( !v424 )
      goto LABEL_606;
    if ( v428 )
      goto LABEL_602;
LABEL_605:
    sub_186B220(v424);
LABEL_606:
    v417 = 0;
    v428 = (unsigned int)v435;
    v166 = 24LL * (v143 & ((_DWORD)v435 - 1));
    v424 = (void *)v438;
    v146 = (char *)(v438 + v166);
    v439 += v438;
LABEL_222:
    if ( v166 == v147 )
    {
      v169 = nullptr;
LABEL_579:
      v168 = (char *)v424;
      if ( v424 == v146 )
      {
LABEL_595:
        sub_1872CE0("");
        sub_1873130(114, 461);
      }
      while ( 1 )
      {
        v379 = *((_DWORD *)v168 + 1);
        if ( v379 == 2 )
        {
          if ( *(_DWORD *)v168 == v143 && *((_DWORD *)v168 + 2) == v143 )
            goto LABEL_230;
        }
        else
        {
          if ( !v379 )
          {
            if ( v169 )
              --v417;
            else
              v169 = v168;
            v391 = *((_QWORD *)v169 + 2);
            v169[2] = v143;
            if ( v391 )
              goto LABEL_610;
            goto LABEL_611;
          }
          v169 = v168;
        }
        v168 += 24;
        if ( v168 == v146 )
          goto LABEL_595;
      }
    }
    v168 = v146;
    v169 = nullptr;
    while ( 1 )
    {
      v170 = *((_DWORD *)v168 + 1);
      if ( v170 != 2 )
        break;
      if ( *(_DWORD *)v168 == v143 && *((_DWORD *)v168 + 2) == v143 )
      {
LABEL_230:
        v169 = v168;
        goto LABEL_596;
      }
LABEL_226:
      v168 += 24;
      if ( v168 == (char *)v439 )
        goto LABEL_579;
    }
    if ( v170 )
    {
      v169 = v168;
      goto LABEL_226;
    }
    if ( v169 )
      --v417;
    else
      v169 = v168;
    v391 = *((_QWORD *)v169 + 2);
    v169[2] = v143;
    if ( v391 )
LABEL_610:
      sub_186B220((void *)(v391 - 8));
LABEL_611:
    *((_QWORD *)v169 + 2) = 0;
    v169[1] = 2;
    *v169 = v143;
    ++v416;
LABEL_596:
    sub_51E370((_QWORD *)v169 + 2, (unsigned int *)&v447);
LABEL_198:
    v154 = sub_15DB5C0(
             *(_QWORD *)v421,
             v153,
             *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v437 + 48LL) + 8LL * v442) + 8LL * v153));
    v136 = *(_QWORD *)(*(_QWORD *)v437 + 176LL);
    v155 = v154;
    if ( v136 )
      v156 = *(_DWORD *)(v136 - 4);
    else
      v156 = 0;
    v157 = (__int64 *)&s[8 * (v156 - v143)];
    if ( v155 )
      ++*(_DWORD *)(v155 + 8);
    v158 = *v157;
    if ( *v157 )
    {
      v116 = (*(_DWORD *)(v158 + 8))-- == 1;
      if ( v116 )
      {
        sub_15D7BC0(*(_QWORD *)v421, v158);
        v136 = *(_QWORD *)(*(_QWORD *)v437 + 176LL);
      }
    }
    *v157 = v155;
LABEL_206:
    ++v143;
  }
  while ( v136 );
LABEL_207:
  v159 = size;
  if ( size )
  {
    LODWORD(v439) = *(_DWORD *)(size + 8);
    v116 = (_DWORD)v439 == 1;
    *(_DWORD *)(size + 8) = v439 - 1;
    if ( v116 )
      sub_15D7BC0(*(_QWORD *)v421, v159);
  }
  if ( v429 == (_DWORD)v422 )
    goto LABEL_213;
  if ( v442 == -1 )
    goto LABEL_350;
  if ( v429 < (unsigned int)v422 )
    goto LABEL_263;
LABEL_213:
  v160 = *((_DWORD *)v425 - 1);
  if ( v160 )
  {
    if ( v160 == 1 )
    {
      v161 = *(_QWORD *)v425;
      *(_QWORD *)v434 = *(_QWORD *)v425;
    }
    else
    {
      v161 = sub_15E1AF0(v421[0]);
      *(_QWORD *)v434 = v161;
    }
    if ( v161 )
      ++*(_DWORD *)(v161 + 8);
    sub_157E9E0(v437[0] + 152, *(_QWORD *)(*(_QWORD *)v423 + 40LL));
    size = 24LL * v428;
    v228 = (char *)v424;
    v439 = (__int64)v424 + size;
    if ( (char *)v424 + size == v424 )
      goto LABEL_631;
    v227 = (char *)v424 + size;
    while ( *((_DWORD *)v228 + 1) != 2 )
    {
      v228 += 24;
      if ( v228 == v227 )
        goto LABEL_631;
    }
    v439 = (__int64)v424 + size;
    if ( v228 == v227 )
      goto LABEL_631;
    v229 = 0;
    v230 = nullptr;
    v435 = &v454;
    do
    {
      v231 = *((unsigned int *)v228 + 2);
      v232 = *(_QWORD *)(*(_QWORD *)v437 + 176LL);
      v454.m128i_i32[0] = *((_DWORD *)v228 + 2);
      if ( !v232 || (unsigned int)v231 >= *(_DWORD *)(v232 - 4) || !*(_QWORD *)(v232 + 8 * v231) )
      {
        v305 = *((__int32 **)v228 + 2);
        v306 = v305;
        if ( v305 && *(v305 - 1) )
        {
          v307 = 0;
          if ( v230 )
          {
            while ( 1 )
            {
              v308 = v230[-1].m128i_u32[3];
              if ( (_DWORD)v308 == v230[-1].m128i_i32[2] )
                break;
LABEL_435:
              ++v307;
              v230->m128i_i32[v308] = *v306;
              ++v230[-1].m128i_i32[3];
              if ( !v305 || v307 >= *(v305 - 1) )
                goto LABEL_440;
              v306 = &v305[v307];
            }
          }
          LODWORD(v438) = v307;
          v444 = v230;
          sub_2FD3F0((unsigned int **)&v444);
          v230 = v444;
          v305 = *((__int32 **)v228 + 2);
          v308 = v444[-1].m128i_u32[3];
          goto LABEL_435;
        }
LABEL_440:
        v445 = v229;
        sub_51E370(&v445, (unsigned int *)v435);
        v229 = v445;
      }
      v233 = v228 + 24;
      if ( v228 + 24 == (char *)v439 )
        break;
      while ( 1 )
      {
        v228 = v233;
        if ( *((_DWORD *)v233 + 1) == 2 )
          break;
        v233 += 24;
        if ( (char *)v439 == v233 )
          goto LABEL_441;
      }
    }
    while ( v233 != (char *)v439 );
LABEL_441:
    if ( v229 )
    {
      LODWORD(v226) = *(_DWORD *)(v229 - 4);
      LODWORD(v439) = 0;
      v309 = v428 - 1;
      while ( 1 )
      {
        if ( (unsigned int)v439 >= (unsigned int)v226 )
        {
          if ( !v230 || !v230[-1].m128i_i32[3] )
            goto LABEL_533;
          if ( v32 )
            goto LABEL_472;
          v323 = nullptr;
          v326 = (char *)v424 + size;
          if ( v424 == (char *)v424 + size )
          {
LABEL_533:
            sub_186B220((void *)(v229 - 8));
            goto LABEL_496;
          }
LABEL_481:
          v327 = (char *)v424;
          while ( *((_DWORD *)v327 + 1) != 2 )
          {
            v327 += 24;
            if ( v327 == v326 )
              goto LABEL_493;
          }
          while ( v327 != v326 )
          {
            v226 = *((_QWORD *)v327 + 2);
            if ( v226 )
            {
              for ( k = 0;
                    k < *(_DWORD *)(v226 - 4);
                    *(_DWORD *)(v226 + 4 * v329) -= v323[*(unsigned int *)(v226 + 4 * v329)] )
              {
                v329 = k++;
              }
            }
            v330 = v327 + 24;
            if ( v327 + 24 == v326 )
              break;
            while ( 1 )
            {
              v327 = v330;
              if ( *((_DWORD *)v330 + 1) == 2 )
                break;
              v330 += 24;
              if ( v326 == v330 )
                goto LABEL_493;
            }
          }
LABEL_493:
          if ( v323 )
LABEL_494:
            sub_186B220(v323 - 2);
          goto LABEL_495;
        }
        v310 = *(_DWORD *)(v229 + 4LL * (unsigned int)v439);
        v311 = v439;
        v312 = 24LL * (v309 & v310);
        v313 = (char *)v424 + v312;
        v314 = (char *)v424 + size;
        if ( v312 == size )
        {
LABEL_460:
          v315 = (char *)v424;
          if ( v424 != v313 )
          {
            v311 = v439;
            while ( 1 )
            {
              v318 = *((_DWORD *)v315 + 1);
              if ( v318 == 2 )
              {
                if ( v310 == *(_DWORD *)v315 && v310 == *((_DWORD *)v315 + 2) )
                  goto LABEL_451;
              }
              else if ( !v318 )
              {
                goto LABEL_458;
              }
              v315 += 24;
              if ( v313 == v315 )
                goto LABEL_458;
            }
          }
          goto LABEL_455;
        }
        v315 = (char *)v424 + v312;
        while ( 1 )
        {
          v316 = *((_DWORD *)v315 + 1);
          if ( v316 == 2 )
            break;
          if ( !v316 )
          {
LABEL_458:
            LODWORD(v439) = v311;
            goto LABEL_455;
          }
LABEL_447:
          v315 += 24;
          if ( v314 == v315 )
            goto LABEL_460;
        }
        if ( v310 != *(_DWORD *)v315 || v310 != *((_DWORD *)v315 + 2) )
          goto LABEL_447;
LABEL_451:
        v317 = v315 + 24;
        LODWORD(v439) = v311;
        if ( v314 == v315 + 24 )
          v317 = v424;
        --v416;
        if ( !v317[1] )
        {
          *((_DWORD *)v315 + 1) = 0;
          goto LABEL_455;
        }
        *((_DWORD *)v315 + 1) = 1;
        v380 = 64;
        ++v417;
        if ( v416 >= 0x40 )
          v380 = v416;
        if ( v380 < v417 )
        {
          if ( (unsigned __int8)sub_186AF10(v313) )
          {
            LODWORD(v226) = *(_DWORD *)(v229 - 4);
            goto LABEL_455;
          }
          v398 = sub_186B270(size);
          v399 = (void *)v398;
          if ( v428 )
          {
            v400 = v439;
            v401 = (_QWORD *)v398;
            do
            {
              *v401 = 0;
              v401 += 3;
              *(v401 - 1) = 0;
            }
            while ( (_QWORD *)(v398 + 8 * (3LL * v309 + 3)) != v401 );
            LODWORD(v439) = v400;
            v438 = 8 * (3LL * v309 + 3);
            sub_52CE40(v424, v428, v398, v428);
            if ( v424 )
            {
              v402 = v438;
              LODWORD(v435) = v309;
              v403 = v399;
              v404 = v229;
              v405 = v439;
              v438 = (signed __int64)v32;
              v406 = v230;
              v407 = v424;
              v439 = (__int64)v424 + v402;
              do
              {
                while ( 1 )
                {
                  v408 = v407[2];
                  if ( !v408 )
                    break;
                  v407 += 3;
                  sub_186B220((void *)(v408 - 8));
                  if ( (_QWORD *)v439 == v407 )
                    goto LABEL_665;
                }
                v407 += 3;
              }
              while ( (_QWORD *)v439 != v407 );
LABEL_665:
              LODWORD(v439) = v405;
              v230 = v406;
              v229 = v404;
              v399 = v403;
              v32 = (_QWORD *)v438;
              v309 = (unsigned int)v435;
LABEL_666:
              sub_186B220(v424);
            }
          }
          else
          {
            sub_52CE40(v424, 0, v398, 0);
            if ( v424 )
              goto LABEL_666;
          }
          v424 = v399;
          LODWORD(v226) = *(_DWORD *)(v229 - 4);
          v417 = 0;
        }
LABEL_455:
        LODWORD(v439) = v439 + 1;
      }
    }
    if ( !v230 )
    {
LABEL_631:
      v230 = nullptr;
    }
    else if ( v230[-1].m128i_i32[3] )
    {
      if ( v32 )
      {
LABEL_472:
        v319 = *((_DWORD *)v32 - 1);
        if ( v319 )
        {
          v320 = nullptr;
          do
          {
            do
            {
              v446 = v320;
              sub_2FD3F0((unsigned int **)&v446);
              v320 = v446;
            }
            while ( !v446 );
          }
          while ( *((_DWORD *)v446 - 2) < v319 );
          *((_DWORD *)v446 - 1) = v319;
          v321 = memset(v320, 0, 4LL * v319);
          LODWORD(v226) = v230[-1].m128i_i32[3];
          v322 = 0;
          v323 = v321;
          if ( (_DWORD)v226 )
          {
            do
            {
              for ( m = v230->m128i_u32[v322]; m < *(v323 - 1); ++v323[v325] )
                v325 = m++;
              ++v322;
            }
            while ( (unsigned int)v322 < v230[-1].m128i_i32[3] );
          }
          v326 = (char *)v424 + size;
          if ( (char *)v424 + size != v424 )
            goto LABEL_481;
          goto LABEL_494;
        }
        v323 = nullptr;
        v326 = (char *)v424 + size;
        if ( (char *)v424 + size != v424 )
          goto LABEL_481;
LABEL_495:
        if ( v229 )
          goto LABEL_533;
      }
      else
      {
        v326 = (char *)v439;
        v323 = nullptr;
        if ( (void *)v439 != v424 )
          goto LABEL_481;
      }
    }
LABEL_496:
    v439 = **(_QWORD **)v437;
    if ( s )
    {
      v331 = *((_DWORD *)s - 1);
      v332 = (int)s;
    }
    else
    {
      v331 = 0;
      v332 = 0;
    }
    sub_157BE40((int)v452, v439 + 104, v434[0], v331, v332, v226, v410, v411, v412, (int)&v448, v415, v416, v418, s);
    si128 = _mm_loadh_ps((const double *)v421);
    v454 = (__m128i)si128;
    if ( *(_QWORD *)v452 )
      ++*(_DWORD *)(*(_QWORD *)v452 + 8LL);
    if ( v230 && (v333 = v230[-1].m128i_u32[3], (_DWORD)v333) )
    {
      v334 = 4 * v333;
      v335 = &v230->m128i_i8[4];
      v336 = &v230->m128i_i8[4 * v333];
      _BitScanReverse64(&v337, (4 * v333) >> 2);
      sub_51BF20(v230, v336, 2LL * (int)v337);
      if ( v334 > 0x40 )
      {
        v439 = (__int64)v336;
        v378 = v230 + 4;
        do
        {
          v393 = *(_DWORD *)v335;
          if ( *(_DWORD *)v335 < v230->m128i_i32[0] )
          {
            if ( v335 - (char *)v230 <= 4 )
            {
              if ( v335 - (char *)v230 == 4 )
                *(_DWORD *)v335 = v230->m128i_i32[0];
            }
            else
            {
              memmove((char *)v230->m128i_i64 + 4, v230, v335 - (char *)v230);
            }
            v230->m128i_i32[0] = v393;
          }
          else
          {
            v394 = *((_DWORD *)v335 - 1);
            v395 = v335 - 4;
            if ( v393 >= v394 )
            {
              v397 = v335;
            }
            else
            {
              v396 = v439;
              do
              {
                *((_DWORD *)v395 + 1) = v394;
                v397 = v395;
                v394 = *((_DWORD *)v395 - 1);
                v395 -= 4;
              }
              while ( v393 < v394 );
              v439 = v396;
            }
            *v397 = v393;
          }
          v335 += 4;
        }
        while ( v378 != (__m128i *)v335 );
        v373 = v439;
        do
        {
          v374 = v378->m128i_i32[0];
          v375 = v378[-1].m128i_u32[3];
          v376 = &v378[-1].m128i_i32[3];
          if ( v378->m128i_i32[0] >= v375 )
          {
            v377 = v378;
          }
          else
          {
            do
            {
              v376[1] = v375;
              v377 = (__m128i *)v376;
              v375 = *--v376;
            }
            while ( v374 < v375 );
          }
          v378 = (__m128i *)((char *)v378 + 4);
          v377->m128i_i32[0] = v374;
        }
        while ( v378 != (__m128i *)v373 );
      }
      else if ( v334 != 4 )
      {
        v439 = (__int64)v336;
        do
        {
          v338 = *(_DWORD *)v335;
          if ( *(_DWORD *)v335 < v230->m128i_i32[0] )
          {
            if ( v335 - (char *)v230 <= 4 )
            {
              if ( v335 - (char *)v230 == 4 )
                *(_DWORD *)v335 = v230->m128i_i32[0];
            }
            else
            {
              memmove((char *)v230->m128i_i64 + 4, v230, v335 - (char *)v230);
            }
            v230->m128i_i32[0] = v338;
          }
          else
          {
            v339 = *((_DWORD *)v335 - 1);
            v340 = v335 - 4;
            if ( v338 >= v339 )
            {
              v342 = v335;
            }
            else
            {
              v341 = v439;
              do
              {
                *((_DWORD *)v340 + 1) = v339;
                v342 = v340;
                v339 = *((_DWORD *)v340 - 1);
                v340 -= 4;
              }
              while ( v338 < v339 );
              v439 = v341;
            }
            *v342 = v338;
          }
          v335 += 4;
        }
        while ( v335 != (char *)v439 );
      }
      v444 = v230;
      sub_51F0E0(*(__int64 *)v437, v442, &v454, (int **)&v444, &v442, v440, a8);
      v349 = v454.m128i_i64[0];
      v440 = 1;
      if ( !v454.m128i_i64[0] )
      {
        v351 = *(_QWORD *)v452;
        if ( !*(_QWORD *)v452 )
        {
LABEL_528:
          sub_186B220(&v230[-1].m128i_u64[1]);
          goto LABEL_529;
        }
LABEL_525:
        v352 = *(_QWORD *)&v452[2];
        v116 = (*(_DWORD *)(v351 + 8))-- == 1;
        if ( v116 )
          sub_15D7BC0(v352, v351);
LABEL_527:
        if ( v230 )
          goto LABEL_528;
LABEL_529:
        v353 = *(_QWORD *)v434;
        if ( *(_QWORD *)v434 )
        {
          LODWORD(v439) = *(_DWORD *)(*(_QWORD *)v434 + 8LL);
          v116 = (_DWORD)v439 == 1;
          *(_DWORD *)(*(_QWORD *)v434 + 8LL) = v439 - 1;
          if ( v116 )
            sub_15D7BC0(*(_QWORD *)v421, v353);
        }
        goto LABEL_94;
      }
LABEL_522:
      v350 = v454.m128i_i64[1];
      v116 = (*(_DWORD *)(v349 + 8))-- == 1;
      if ( v116 )
        sub_15D7BC0(v350, v349);
    }
    else
    {
      v347 = v442;
      if ( !v440 && v442 != -1 )
      {
        sub_51E410(*(__int64 *)v437, v442, &v442, a8);
        v347 = v442;
      }
      v348 = sub_4DAE50(v347, &v454);
      sub_52C6B0(a8, v348);
      v349 = v454.m128i_i64[0];
      v440 = 1;
      if ( v454.m128i_i64[0] )
        goto LABEL_522;
    }
    v351 = *(_QWORD *)v452;
    if ( *(_QWORD *)v452 )
      goto LABEL_525;
    goto LABEL_527;
  }
LABEL_94:
  v439 = *(_QWORD *)(*(_QWORD *)v437 + 48LL) + 8LL * v413;
  if ( !v412 )
  {
    v94 = nullptr;
    goto LABEL_112;
  }
  v92 = 0;
  *(_QWORD *)v434 = 24LL * v428;
  v93 = (char *)v424 + *(_QWORD *)v434;
  v94 = nullptr;
  v438 = 8LL * v412;
  while ( 2 )
  {
    v95 = v439;
    v96 = *(_QWORD *)(*(_QWORD *)v439 + v92);
    v97 = *(_QWORD *)(v418 + v92 + 32);
    if ( *(_WORD *)(v97 + 4) != 1 )
    {
      size = *(_QWORD *)(v418 + v92 + 32);
      if ( !(unsigned __int8)sub_1625440(**(_QWORD **)v437 + 56LL, size) )
      {
        v10 = (char **)__cxa_allocate_exception(0x28u);
        v438 = (signed __int64)&v454;
        v11 = v10;
        sub_24ABB0(v454.m128i_i64, "could not process non-numeral in Datalog engine");
        v12 = (_QWORD *)v438;
        v13 = (_QWORD *)v438;
        *v11 = (char *)off_1C63128;
        sub_2333C0(v11 + 1, v13);
        sub_233E40((__int64)v12);
        __cxa_throw(v11, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v453 = size;
      v106 = 2;
      if ( v94 )
        goto LABEL_109;
LABEL_233:
      LODWORD(size) = v106;
      v171 = (_QWORD *)sub_186B270(0x38u);
      v94 = (const __m128i *)(v171 + 1);
      *v171 = 2;
      v106 = size;
      v108 = (__m128 *)(v171 + 1);
      goto LABEL_111;
    }
    v98 = *(_DWORD *)(v97 + 16);
    v99 = 24LL * (v98 & (v428 - 1));
    v100 = (char *)v424 + v99;
    if ( v99 != *(_QWORD *)v434 )
    {
      for ( n = (char *)v424 + v99; v93 != n; n += 24 )
      {
        v102 = *((_DWORD *)n + 1);
        if ( v102 == 2 )
        {
          if ( v98 == *(_DWORD *)n && v98 == *((_DWORD *)n + 2) )
          {
            v103 = *((_QWORD *)n + 2);
            if ( !v103 )
              goto LABEL_247;
            goto LABEL_105;
          }
        }
        else if ( !v102 )
        {
LABEL_234:
          v439 = v95;
LABEL_235:
          LODWORD(v453) = v98;
          v106 = 1;
          goto LABEL_108;
        }
      }
    }
    v177 = (char *)v424;
    if ( v424 == v100 )
      goto LABEL_235;
    v95 = v439;
    while ( 2 )
    {
      v178 = *((_DWORD *)v177 + 1);
      if ( v178 != 2 )
      {
        if ( !v178 )
          goto LABEL_234;
LABEL_242:
        v177 += 24;
        if ( v100 == v177 )
          goto LABEL_234;
        continue;
      }
      break;
    }
    if ( v98 != *(_DWORD *)v177 || v98 != *((_DWORD *)v177 + 2) )
      goto LABEL_242;
    v103 = *((_QWORD *)v177 + 2);
    if ( !v103 )
    {
LABEL_247:
      LODWORD(v453) = MEMORY[0x3FFFFFFFC];
      goto LABEL_107;
    }
LABEL_105:
    v104 = *(_DWORD *)(v103 - 4);
    v105 = v104 - 1;
    LODWORD(v453) = *(_DWORD *)(v103 + 4 * v105);
    if ( v104 > 1 )
      *(_DWORD *)(v103 - 4) = v105;
LABEL_107:
    v106 = 0;
LABEL_108:
    if ( !v94 )
      goto LABEL_233;
LABEL_109:
    v107 = v94[-1].m128i_u32[3];
    if ( (_DWORD)v107 == v94[-1].m128i_i32[2] )
    {
      v172 = 3 * v107 + 1;
      v173 = v172 & 0xFFFFFFFE;
      v174 = v172 >> 1;
      v175 = 8 * (v174 + v173) + 8;
      if ( 24 * (int)v107 + 8 >= (unsigned int)v175 || (unsigned int)v107 >= v174 )
      {
        v14 = (char **)__cxa_allocate_exception(0x28u);
        v438 = (signed __int64)&v454;
        v15 = v14;
        sub_24ABB0(v454.m128i_i64, "Overflow encountered when expanding vector");
        v16 = (_QWORD *)v438;
        v17 = (_QWORD *)v438;
        *v15 = (char *)off_1C63128;
        sub_2333C0(v15 + 1, v17);
        sub_233E40((__int64)v16);
        __cxa_throw(v15, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      LODWORD(v435) = v106;
      LODWORD(size) = v174;
      v176 = (_DWORD *)sub_186B300(&v94[-1].m128i_u64[1], v175);
      v94 = (const __m128i *)(v176 + 2);
      v106 = (int)v435;
      *v176 = size;
      v108 = (__m128 *)&v176[6 * v176[1] + 2];
    }
    else
    {
      v108 = (__m128 *)((char *)v94 + 24 * v107);
    }
LABEL_111:
    v452[2] = v106;
    v92 += 8;
    *(_QWORD *)v452 = v96;
    si128 = (__m128)_mm_load_si128((const __m128i *)v452);
    v108[1].m128_u64[0] = v453;
    *v108 = si128;
    v109 = v438;
    ++v94[-1].m128i_i32[3];
    if ( v92 != v109 )
      continue;
    break;
  }
LABEL_112:
  v447 = v94;
  sub_522E10(*(__int64 *)v437, *(__int64 *)v423, v431, v442, &v447, (unsigned int *)&v454, si128, (char *)v430, a8);
  v110 = v454.m128i_i32[0];
  if ( (_BYTE)v411 )
    v111 = sub_4DB010(v454.m128i_i32[0], v413, SHIDWORD(v411));
  else
    v111 = sub_4DAF30(v454.m128i_i32[0], v413, SHIDWORD(v411));
  sub_52C6B0(a8, v111);
  if ( v440 && v110 != -1 )
  {
    v194 = sub_4DAB00(v110);
    sub_52C6B0(a8, v194);
  }
  if ( v94 )
    sub_186B220(&v94[-1].m128i_u64[1]);
  result = *(_QWORD *)v437;
  v113 = s;
  *(_QWORD *)(*(_QWORD *)v437 + 144LL) = 0;
  if ( s )
  {
    v114 = &s[8 * *((unsigned int *)s - 1)];
    if ( s < v114 )
    {
      do
      {
        while ( 1 )
        {
          v115 = *(_QWORD *)v113;
          if ( *(_QWORD *)v113 )
          {
            v116 = (*(_DWORD *)(v115 + 8))-- == 1;
            if ( v116 )
              break;
          }
          v113 += 8;
          if ( v113 >= v114 )
            goto LABEL_126;
        }
        v113 += 8;
        sub_15D7BC0(*(_QWORD *)v421, v115);
      }
      while ( v113 < v114 );
    }
LABEL_126:
    result = sub_186B220(s - 8);
  }
  v117 = v425;
  if ( v425 )
  {
    v118 = *((unsigned int *)v425 - 1);
    if ( v425 < &v425[8 * v118] )
    {
      v119 = *(_QWORD *)v421;
      v120 = &v425[8 * v118];
      do
      {
        while ( 1 )
        {
          v121 = *(_QWORD *)v117;
          if ( *(_QWORD *)v117 )
          {
            v116 = (*(_DWORD *)(v121 + 8))-- == 1;
            if ( v116 )
              break;
          }
          v117 += 8;
          if ( v117 >= v120 )
            goto LABEL_134;
        }
        v117 += 8;
        sub_15D7BC0(v119, v121);
      }
      while ( v117 < v120 );
    }
LABEL_134:
    result = sub_186B220(v425 - 8);
  }
  if ( v424 )
  {
    if ( v428 )
    {
      v122 = (char *)v424;
      v123 = (char *)v424 + 24 * v428;
      do
      {
        while ( 1 )
        {
          v124 = *((_QWORD *)v122 + 2);
          if ( !v124 )
            break;
          v122 += 24;
          sub_186B220((void *)(v124 - 8));
          if ( v122 == v123 )
            goto LABEL_140;
        }
        v122 += 24;
      }
      while ( v123 != v122 );
    }
LABEL_140:
    result = sub_186B220(v424);
  }
  if ( v32 )
  {
    v125 = v32;
    if ( v32 < &v32[*((unsigned int *)v32 - 1)] )
    {
      v126 = &v32[*((unsigned int *)v32 - 1)];
      do
      {
        while ( 1 )
        {
          v127 = *v125;
          if ( *v125 )
          {
            v116 = (*(_DWORD *)(v127 + 8))-- == 1;
            if ( v116 )
              break;
          }
          if ( ++v125 >= v126 )
            return sub_186B220(v32 - 1);
        }
        ++v125;
        sub_15D7BC0(v415, v127);
      }
      while ( v125 < v126 );
    }
    return sub_186B220(v32 - 1);
  }
  return result;
}

