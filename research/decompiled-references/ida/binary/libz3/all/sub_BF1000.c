__int64 __fastcall sub_BF1000(
        __int64 a1,
        unsigned int a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        __m128 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        int a14)
{
  char **v14; // r12
  char **v15; // rbp
  char **v16; // r12
  char **exception; // r12
  char **v18; // r14
  char **v19; // rbx
  char **v20; // r12
  char **v21; // r14
  char **v22; // rbp
  char **v23; // r12
  char **v24; // r12
  char **v25; // r12
  char **v26; // r12
  __int64 v27; // r12
  __int64 v28; // rax
  const __m128i *v29; // r15
  __int64 v30; // rax
  unsigned int *v31; // rax
  unsigned int v32; // ebx
  __int64 v33; // rax
  char *v34; // rax
  __int64 v35; // rsi
  char *v36; // rdi
  __int64 v37; // rax
  __int64 i; // rdx
  __int64 v39; // rbp
  unsigned __int8 v40; // r13
  _QWORD *v41; // rbx
  __int64 *v42; // rbp
  _QWORD *v43; // r15
  __int64 v44; // rsi
  __int64 v45; // rdi
  bool v46; // zf
  _QWORD *v47; // rbx
  _QWORD *v48; // r15
  __int64 v49; // rsi
  __int64 v50; // rdi
  _QWORD *v51; // rbx
  _QWORD *v52; // r15
  __int64 v53; // rsi
  __int64 v54; // rsi
  __int64 v55; // rdi
  __int64 *v56; // r15
  int v57; // r9d
  unsigned int *v58; // r15
  __int64 v59; // rdx
  unsigned int v60; // eax
  unsigned int *v61; // rdi
  __m128 v62; // xmm0
  __int64 v63; // rax
  __int64 *v64; // r12
  __int64 *v65; // rbp
  __int64 *v66; // rbx
  __int64 *v67; // r13
  __int64 v68; // rsi
  __int64 v69; // rdi
  __int64 *v70; // rbx
  __int64 *v71; // r13
  __int64 v72; // rsi
  __int64 v73; // rdi
  __int64 v75; // rdx
  _DWORD *v76; // r14
  unsigned int v77; // r13d
  __int64 v78; // rcx
  int v79; // eax
  _QWORD *v80; // rcx
  __int64 v81; // rbx
  unsigned int v82; // eax
  unsigned int v83; // r15d
  unsigned int v84; // edx
  unsigned int *v85; // rax
  __int64 v86; // rdx
  _QWORD *v87; // rcx
  __int64 v88; // rdx
  __int64 v89; // rbx
  unsigned int v90; // r15d
  __int64 v91; // r13
  unsigned int v92; // eax
  unsigned int v93; // eax
  __int64 v94; // rcx
  int v95; // eax
  __m128i *v96; // rcx
  _QWORD *v97; // rdx
  _QWORD *v98; // r15
  _DWORD *v99; // rbx
  _DWORD *v100; // rbp
  _DWORD *v101; // rax
  int v102; // r8d
  _DWORD *v103; // rax
  int v104; // ecx
  unsigned int v105; // eax
  __int64 v106; // rbp
  __int64 v107; // rbx
  __int64 v108; // rax
  char *v109; // rax
  char v110; // al
  _QWORD *v111; // r13
  _QWORD *v112; // r14
  __int64 v113; // rsi
  __int64 v114; // rdi
  _QWORD *v115; // r13
  _QWORD *v116; // r14
  __int64 v117; // rsi
  __int64 v118; // rdi
  int v119; // ecx
  int v120; // r8d
  int v121; // r9d
  __int64 v122; // rdx
  _DWORD *v123; // rbp
  unsigned int v124; // r14d
  __int64 v125; // rbx
  unsigned int v126; // eax
  __int64 v127; // rcx
  int v128; // eax
  _QWORD *v129; // rcx
  __int64 v130; // rcx
  _DWORD *v131; // rbx
  unsigned __int32 k; // edx
  __int64 v133; // r14
  unsigned int v134; // eax
  __int64 *v135; // rcx
  unsigned int v136; // eax
  __int64 v137; // rdx
  int v138; // eax
  __m128i *v139; // rdx
  unsigned int v140; // ecx
  size_t v141; // rsi
  _DWORD *v142; // rax
  __int64 v143; // rsi
  __int32 v144; // edx
  _QWORD *v145; // rsi
  int v146; // eax
  unsigned int v147; // edx
  size_t v148; // rsi
  __int64 v149; // rax
  unsigned int v150; // r14d
  size_t v151; // rdi
  __int64 v152; // rdx
  __int64 v153; // rcx
  __int64 v154; // r13
  __int64 *v155; // rax
  __int64 v156; // rsi
  int v157; // r10d
  __int64 *v158; // r8
  __int64 v159; // rdi
  __int64 v160; // rdi
  __int64 v161; // rdi
  __int64 *v162; // r13
  __int64 *v163; // rbx
  __int64 v164; // r14
  __int64 *v165; // rbp
  __int64 *v166; // r12
  __int64 v167; // rsi
  __int64 v168; // rdi
  __int64 *v169; // rbp
  __int64 *v170; // r12
  __int64 v171; // rsi
  __int64 v172; // rdi
  _DWORD *v173; // rdx
  __int64 v174; // rdx
  int v175; // eax
  _QWORD *v176; // rax
  _QWORD *v177; // rax
  _QWORD *v178; // rax
  unsigned int v179; // edx
  size_t v180; // rsi
  _DWORD *v181; // rax
  __int64 v182; // rsi
  _QWORD *v183; // rsi
  int v184; // eax
  unsigned int v185; // r13d
  unsigned int v186; // edx
  unsigned int *v187; // rax
  char *v188; // rcx
  __int64 v189; // rax
  __int64 v190; // rax
  __int64 *v191; // rbx
  __int64 v192; // rax
  __int64 v193; // rcx
  _QWORD *v194; // rdx
  unsigned int v195; // r14d
  __int64 v196; // r8
  unsigned int v197; // eax
  __int64 v198; // rsi
  int v199; // eax
  __int64 *v200; // rsi
  __int64 v201; // rax
  __int64 v202; // rcx
  _QWORD *v203; // rdx
  unsigned int v204; // r14d
  __int64 v205; // r8
  unsigned int v206; // eax
  __int64 v207; // rsi
  int v208; // eax
  __int64 *v209; // rsi
  __int64 *v210; // r15
  __int64 *v211; // rcx
  _DWORD *v212; // rbp
  __int64 v213; // rax
  __int64 *j; // rbx
  __int64 v215; // rax
  __int64 v216; // rsi
  _QWORD *v217; // rcx
  unsigned int v218; // r14d
  __int64 v219; // r13
  unsigned int v220; // eax
  __int64 v221; // rdx
  int v222; // eax
  _QWORD *v223; // rdx
  __int64 v224; // rax
  __int64 v225; // rsi
  _QWORD *v226; // rcx
  unsigned int v227; // r14d
  __int64 v228; // r13
  unsigned int v229; // eax
  __int64 v230; // rdx
  int v231; // eax
  _QWORD *v232; // rdx
  unsigned __int32 v233; // edx
  _DWORD *v234; // r14
  __int64 v235; // rdx
  __int64 v236; // rbx
  __int64 *v237; // rax
  _DWORD *v238; // rcx
  int v239; // edi
  __int64 *v240; // rsi
  __int64 v241; // r8
  __int64 v242; // r8
  __int64 v243; // r8
  __int64 *v244; // rbx
  __int64 *v245; // rbp
  __int64 *v246; // r12
  __int64 *v247; // r13
  __int64 v248; // rsi
  __int64 v249; // rdi
  __int64 *v250; // r12
  __int64 *v251; // r13
  __int64 v252; // rsi
  __int64 v253; // rdi
  _DWORD *v254; // rdx
  __int64 v255; // rbx
  unsigned int v256; // edx
  _DWORD *v257; // r13
  __int64 v258; // rdx
  __int64 v259; // r10
  __int64 *v260; // rax
  _DWORD *v261; // rcx
  __int64 *v262; // rdi
  __int64 v263; // rsi
  __int64 v264; // rsi
  __int64 v265; // rsi
  __int64 *v266; // rbp
  __int64 *v267; // rbx
  __int64 v268; // r15
  __int64 *v269; // r12
  __int64 *v270; // r13
  __int64 v271; // rsi
  __int64 v272; // rdi
  __int64 *v273; // r12
  __int64 *v274; // r13
  __int64 v275; // rsi
  __int64 v276; // rdi
  __int64 v277; // rcx
  __int64 v278; // rdx
  int v279; // eax
  __int64 v280; // r15
  __m128 v281; // xmm1
  __int64 v282; // r12
  __m128 v283; // xmm0
  __int64 v284; // r13
  unsigned __int64 v285; // rbx
  unsigned __int64 v286; // rbp
  _QWORD *v287; // r14
  __m128i v288; // xmm1
  size_t v289; // rdi
  _QWORD *v290; // rax
  unsigned int *v291; // rsi
  char *v292; // rcx
  size_t v293; // rdx
  _DWORD *v294; // rbp
  __int64 v295; // r13
  unsigned __int64 v296; // r15
  _QWORD *v297; // r14
  unsigned int v298; // eax
  __int64 *v299; // r12
  __int64 *v300; // rbp
  __int64 *v301; // rbx
  __int64 *v302; // r13
  __int64 v303; // rsi
  __int64 v304; // rdi
  __int64 *v305; // rbx
  __int64 *v306; // r13
  __int64 v307; // rsi
  __int64 v308; // rdi
  _QWORD *v309; // rax
  unsigned __int32 v310; // edx
  _DWORD *v311; // r15
  _DWORD *v312; // rdx
  __int64 v313; // r8
  __int64 *v314; // rax
  int v315; // edi
  __int64 *v316; // rsi
  __int64 v317; // rcx
  __int64 v318; // rcx
  __int64 v319; // rcx
  __int64 v320; // r8
  __int64 v321; // rax
  __int64 *v322; // r12
  __int64 v323; // r14
  __int64 *v324; // rbp
  __int64 *v325; // rbx
  __int64 *v326; // r13
  __int64 v327; // rsi
  __int64 v328; // rdi
  __int64 *v329; // rbx
  __int64 *v330; // r13
  __int64 v331; // rsi
  __int64 v332; // rdi
  __int64 v333; // rcx
  unsigned int v334; // edx
  size_t v335; // rsi
  __int32 *v336; // rax
  __int32 v337; // edx
  unsigned int v338; // edx
  size_t v339; // rsi
  __int32 *v340; // rax
  __int32 v341; // edx
  _QWORD *v342; // rax
  _QWORD *v343; // rax
  unsigned int v344; // r15d
  unsigned int v345; // ecx
  unsigned int *v346; // rax
  __int64 v347; // rcx
  unsigned int v348; // r15d
  unsigned int v349; // ecx
  unsigned int *v350; // rax
  __int64 v351; // rcx
  _QWORD *v352; // rcx
  _QWORD *v353; // rbx
  _QWORD *v354; // rax
  _QWORD *v355; // rdx
  _QWORD *v356; // rdx
  __m128 v357; // xmm7
  _QWORD *v358; // rax
  _QWORD *v359; // rax
  int v360; // [rsp+0h] [rbp-148h]
  int v361; // [rsp+0h] [rbp-148h]
  unsigned int v362; // [rsp+8h] [rbp-140h]
  __int64 *v363; // [rsp+8h] [rbp-140h]
  int v364; // [rsp+8h] [rbp-140h]
  __m128i v365; // [rsp+10h] [rbp-138h] BYREF
  _DWORD *v366; // [rsp+20h] [rbp-128h]
  __int64 v367; // [rsp+28h] [rbp-120h]
  __int64 v368; // [rsp+30h] [rbp-118h]
  __m128i v369; // [rsp+38h] [rbp-110h] BYREF
  int v370[2]; // [rsp+48h] [rbp-100h]
  int v371[2]; // [rsp+50h] [rbp-F8h]
  _QWORD *v372; // [rsp+58h] [rbp-F0h]
  unsigned int *v373; // [rsp+60h] [rbp-E8h] BYREF
  void *src; // [rsp+68h] [rbp-E0h]
  unsigned int v375; // [rsp+74h] [rbp-D4h]
  const __m128i *v376; // [rsp+78h] [rbp-D0h]
  __int64 v377; // [rsp+80h] [rbp-C8h]
  _DWORD *v378; // [rsp+88h] [rbp-C0h]
  __int64 v379; // [rsp+90h] [rbp-B8h]
  unsigned __int8 v380; // [rsp+9Bh] [rbp-ADh]
  unsigned int v381; // [rsp+9Ch] [rbp-ACh]
  _BYTE v382[9]; // [rsp+A7h] [rbp-A1h] BYREF
  char v383; // [rsp+B0h] [rbp-98h] BYREF
  __m128 v384; // [rsp+D0h] [rbp-78h] BYREF
  __m128 v385; // [rsp+E0h] [rbp-68h]
  _QWORD *v386; // [rsp+F0h] [rbp-58h] BYREF
  char *v387; // [rsp+F8h] [rbp-50h]
  unsigned int *v388; // [rsp+100h] [rbp-48h]

  v27 = a1;
  v28 = *(_QWORD *)(a1 + 336);
  v381 = a2;
  v29 = (const __m128i *)(*(_QWORD *)(a1 + 320) + 56LL * *(unsigned int *)(v28 + 4LL * a2));
  v30 = v29[3].m128i_i64[0];
  v376 = v29;
  v373 = (unsigned int *)v30;
  v31 = (unsigned int *)v29[2].m128i_i64[1];
  src = v31;
  if ( v31 )
  {
    v32 = *(v31 - 1);
    v33 = *(v31 - 2);
    v362 = v33;
    v34 = (char *)sub_186B270(4 * v33 + 8);
    v35 = v29[2].m128i_i64[1];
    v36 = v34;
    v34 += 8;
    *((_QWORD *)v34 - 1) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v362), _mm_cvtsi32_si128(v32)).m128i_u64[0];
    src = v34;
    if ( v35 )
    {
      v37 = 4LL * *(unsigned int *)(v35 - 4);
      if ( v37 )
      {
        for ( i = 0; i != v37; i += 4 )
          *(_DWORD *)&v36[i + 8] = *(_DWORD *)(v35 + i);
      }
    }
    v39 = v376[2].m128i_i64[0];
    if ( !v39 )
    {
      sub_186B220(v36);
      return 0;
    }
  }
  else
  {
    v39 = v29[2].m128i_i64[0];
    if ( !v39 )
      return 0;
  }
  v375 = 0;
  v40 = 0;
  *(_QWORD *)v370 = v27 + 4072;
  *(_QWORD *)v371 = v27 + 4088;
  v363 = nullptr;
  v367 = (__int64)&v382[1];
  while ( v375 < *(_DWORD *)(v39 - 4) )
  {
    v41 = *(_QWORD **)(v27 + 4080);
    v365.m128i_i64[1] = 32LL * v375;
    v42 = (__int64 *)(v365.m128i_i64[1] + v39);
    if ( v41 )
    {
      v43 = &v41[*((unsigned int *)v41 - 1)];
      if ( v41 >= v43 )
        goto LABEL_17;
      do
      {
        while ( 1 )
        {
          v44 = *v41;
          if ( *v41 )
          {
            v45 = *(_QWORD *)(v27 + 4072);
            v46 = (*(_DWORD *)(v44 + 8))-- == 1;
            if ( v46 )
              break;
          }
          if ( ++v41 >= v43 )
            goto LABEL_16;
        }
        v368 = v367;
        sub_15D7BC0(v45, v44);
        ++v41;
      }
      while ( v41 < v43 );
LABEL_16:
      v41 = *(_QWORD **)(v27 + 4080);
      if ( v41 )
LABEL_17:
        *((_DWORD *)v41 - 1) = 0;
    }
    v47 = *(_QWORD **)(v27 + 4096);
    if ( v47 )
    {
      v48 = &v47[*((unsigned int *)v47 - 1)];
      if ( v47 >= v48 )
        goto LABEL_26;
      do
      {
        while ( 1 )
        {
          v49 = *v47;
          if ( *v47 )
          {
            v50 = *(_QWORD *)(v27 + 4088);
            v46 = (*(_DWORD *)(v49 + 8))-- == 1;
            if ( v46 )
              break;
          }
          if ( ++v47 >= v48 )
            goto LABEL_25;
        }
        v368 = v367;
        sub_15D7BC0(v50, v49);
        ++v47;
      }
      while ( v47 < v48 );
LABEL_25:
      v47 = *(_QWORD **)(v27 + 4096);
      if ( v47 )
LABEL_26:
        *((_DWORD *)v47 - 1) = 0;
    }
    v51 = *(_QWORD **)(v27 + 4144);
    if ( v51 )
    {
      v52 = &v51[2 * *((unsigned int *)v51 - 1)];
      if ( v51 >= v52 )
        goto LABEL_38;
      do
      {
        while ( 1 )
        {
          v54 = *v51;
          v55 = *(_QWORD *)(v27 + 4136);
          if ( *v51 )
          {
            v46 = (*(_DWORD *)(v54 + 8))-- == 1;
            if ( v46 )
            {
              v368 = v367;
              sub_15D7BC0(v55, v54);
              v55 = *(_QWORD *)(v27 + 4136);
            }
          }
          v53 = v51[1];
          if ( v53 )
          {
            v46 = (*(_DWORD *)(v53 + 8))-- == 1;
            if ( v46 )
              break;
          }
          v51 += 2;
          if ( v51 >= v52 )
            goto LABEL_37;
        }
        v368 = v367;
        sub_15D7BC0(v55, v53);
        v51 += 2;
      }
      while ( v51 < v52 );
LABEL_37:
      v51 = *(_QWORD **)(v27 + 4144);
      if ( v51 )
LABEL_38:
        *((_DWORD *)v51 - 1) = 0;
    }
    v56 = (__int64 *)v367;
    memset(v382, 0, sizeof(v382));
    v368 = v367;
    if ( !(unsigned __int8)sub_BC92C0(v27, (__int64)v42, *(__int64 *)v370, (__int64 *)v367, v382, a14) )
      goto LABEL_50;
    v380 = sub_BC92C0(v27, (__int64)(v42 + 2), *(__int64 *)v371, v56, v382, v57);
    if ( !v380 )
      goto LABEL_50;
    v58 = *(unsigned int **)&v382[1];
    if ( *(_QWORD *)&v382[1] )
    {
      if ( !v373 || *(unsigned int **)&v382[1] == v373 )
      {
        v373 = *(unsigned int **)&v382[1];
      }
      else
      {
        v59 = sub_180C100(*(_QWORD *)(v27 + 120), 24);
        v60 = *v58;
        v61 = v373;
        v62 = _mm_loadh_ps((const double *)&v373);
        v373 = (unsigned int *)v59;
        *v58 = (v60 + 1) & 0x3FFFFFFF | v60 & 0xC0000000;
        *v61 = (*v61 + 1) & 0x3FFFFFFF | *v61 & 0xC0000000;
        *(_QWORD *)v59 = 0;
        *(__m128 *)(v59 + 8) = v62;
      }
    }
    if ( !(unsigned __int8)sub_15781F0((int)v27 + 1224, v370[0], v371[0], (int)v27 + 4136, (int)v382) )
      goto LABEL_51;
    v380 = v382[0];
    if ( v382[0] )
    {
      if ( !v40 && v375 )
      {
        v210 = (__int64 *)v376[2].m128i_i64[0];
        if ( v363 )
        {
          v211 = v363;
          v212 = nullptr;
          v213 = *((unsigned int *)v363 - 1);
          if ( (_DWORD)v213 == *((_DWORD *)v363 - 2) )
            goto LABEL_262;
LABEL_241:
          j = &v211[4 * v213];
          goto LABEL_242;
        }
        v309 = (_QWORD *)sub_186B270(0x48u);
        *v309 = 2;
        v212 = nullptr;
        v363 = v309 + 1;
        for ( j = v309 + 1; ; j = (__int64 *)&v254[v255] )
        {
LABEL_242:
          v215 = *v210;
          j[1] = 0;
          v216 = v210[1];
          *j = v215;
          if ( v216 )
          {
            v217 = nullptr;
            v218 = 0;
            do
            {
              if ( v218 >= *(_DWORD *)(v216 - 4) )
                break;
              v219 = *(_QWORD *)(v216 + 8LL * v218);
              if ( v219 )
                ++*(_DWORD *)(v219 + 8);
              if ( v217 )
              {
                v220 = *((_DWORD *)v217 - 1);
                if ( v220 == *((_DWORD *)v217 - 2) )
                {
                  v338 = (3 * v220 + 1) >> 1;
                  v339 = 8 * v338 + 8;
                  if ( 8 * v220 + 8 >= (unsigned int)v339 || v220 >= v338 )
                  {
                    exception = (char **)__cxa_allocate_exception(0x28u);
                    sub_24ABB0((__int64 *)&v384, "Overflow encountered when expanding vector");
                    *exception = (char *)off_1C63128;
                    sub_2333C0(exception + 1, &v384);
                    sub_233E40((__int64)&v384);
                    __cxa_throw(
                      exception,
                      (struct type_info *)&`typeinfo for'default_exception,
                      (void (*)(void *))sub_230E50);
                  }
                  v365.m128i_i32[0] = (3 * v220 + 1) >> 1;
                  v340 = (__int32 *)sub_186B300(v217 - 1, v339);
                  v341 = v365.m128i_i32[0];
                  v217 = v340 + 2;
                  j[1] = (__int64)(v340 + 2);
                  v216 = v210[1];
                  *v340 = v341;
                  LODWORD(v340) = v340[1];
                  v223 = &v217[(unsigned int)v340];
                  v222 = (_DWORD)v340 + 1;
                }
                else
                {
                  v221 = v220;
                  v222 = v220 + 1;
                  v223 = &v217[v221];
                }
              }
              else
              {
                v343 = (_QWORD *)sub_186B270(0x18u);
                v217 = v343 + 1;
                *v343 = 2;
                v222 = 1;
                j[1] = (__int64)v217;
                v223 = v217;
                v216 = v210[1];
              }
              *v223 = v219;
              ++v218;
              *((_DWORD *)v217 - 1) = v222;
            }
            while ( v216 );
          }
          v224 = v210[2];
          j[3] = 0;
          v225 = v210[3];
          j[2] = v224;
          if ( v225 )
          {
            v226 = nullptr;
            v227 = 0;
            do
            {
              if ( v227 >= *(_DWORD *)(v225 - 4) )
                break;
              v228 = *(_QWORD *)(v225 + 8LL * v227);
              if ( v228 )
                ++*(_DWORD *)(v228 + 8);
              if ( v226 )
              {
                v229 = *((_DWORD *)v226 - 1);
                if ( v229 == *((_DWORD *)v226 - 2) )
                {
                  v334 = (3 * v229 + 1) >> 1;
                  v335 = 8 * v334 + 8;
                  if ( 8 * v229 + 8 >= (unsigned int)v335 || v229 >= v334 )
                  {
                    v16 = (char **)__cxa_allocate_exception(0x28u);
                    sub_24ABB0((__int64 *)&v384, "Overflow encountered when expanding vector");
                    *v16 = (char *)off_1C63128;
                    sub_2333C0(v16 + 1, &v384);
                    sub_233E40((__int64)&v384);
                    __cxa_throw(v16, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                  }
                  v365.m128i_i32[0] = (3 * v229 + 1) >> 1;
                  v336 = (__int32 *)sub_186B300(v226 - 1, v335);
                  v337 = v365.m128i_i32[0];
                  v226 = v336 + 2;
                  j[3] = (__int64)(v336 + 2);
                  v225 = v210[3];
                  *v336 = v337;
                  LODWORD(v336) = v336[1];
                  v232 = &v226[(unsigned int)v336];
                  v231 = (_DWORD)v336 + 1;
                }
                else
                {
                  v230 = v229;
                  v231 = v229 + 1;
                  v232 = &v226[v230];
                }
              }
              else
              {
                v342 = (_QWORD *)sub_186B270(0x18u);
                v226 = v342 + 1;
                *v342 = 2;
                v231 = 1;
                j[3] = (__int64)v226;
                v232 = v226;
                v225 = v210[3];
              }
              *v232 = v228;
              ++v227;
              *((_DWORD *)v226 - 1) = v231;
            }
            while ( v225 );
          }
          v212 += 8;
          ++*((_DWORD *)v363 - 1);
          if ( (_DWORD *)v365.m128i_i64[1] == v212 )
            break;
          v211 = v363;
          v213 = *((unsigned int *)v363 - 1);
          v210 = (__int64 *)((char *)v212 + v376[2].m128i_i64[0]);
          if ( (_DWORD)v213 != *((_DWORD *)v363 - 2) )
            goto LABEL_241;
LABEL_262:
          v365.m128i_i32[0] = (unsigned int)(3 * v213 + 1) >> 1;
          v233 = 32 * v365.m128i_i32[0] + 8;
          if ( 32 * (int)v213 + 8 >= v233 || (unsigned int)v213 >= (unsigned int)(3 * v213 + 1) >> 1 )
          {
            v22 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0((__int64 *)&v384, "Overflow encountered when expanding vector");
            *v22 = (char *)off_1C63128;
            sub_2333C0(v22 + 1, &v384);
            sub_233E40((__int64)&v384);
            __cxa_throw(v22, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v234 = (_DWORD *)sub_186B270(v233);
          v235 = (__int64)(v234 + 2);
          v236 = *((unsigned int *)v363 - 1);
          v237 = v363;
          v238 = v234 + 2;
          v234[1] = v236;
          v239 = v236;
          v240 = &v363[4 * v236];
          if ( v240 != v363 )
          {
            do
            {
              v241 = *v237;
              v237 += 4;
              v238 += 8;
              *((_QWORD *)v238 - 4) = v241;
              v242 = *(v237 - 3);
              *(v237 - 3) = 0;
              *((_QWORD *)v238 - 3) = v242;
              *((_QWORD *)v238 - 2) = *(v237 - 2);
              v243 = *(v237 - 1);
              *(v237 - 1) = 0;
              *((_QWORD *)v238 - 1) = v243;
            }
            while ( v237 != v240 );
          }
          v244 = &v363[4 * v236];
          if ( v239 )
          {
            v369.m128i_i64[0] = (__int64)(v234 + 2);
            v369.m128i_i64[1] = v27;
            v366 = v212;
            v245 = v363;
            do
            {
              v246 = (__int64 *)v245[3];
              if ( v246 )
              {
                v247 = &v246[*((unsigned int *)v246 - 1)];
                if ( v246 >= v247 )
                  goto LABEL_276;
                do
                {
                  while ( 1 )
                  {
                    v248 = *v246;
                    if ( *v246 )
                    {
                      v249 = v245[2];
                      v46 = (*(_DWORD *)(v248 + 8))-- == 1;
                      if ( v46 )
                        break;
                    }
                    if ( ++v246 >= v247 )
                      goto LABEL_275;
                  }
                  sub_15D7BC0(v249, v248);
                  ++v246;
                }
                while ( v246 < v247 );
LABEL_275:
                v246 = (__int64 *)v245[3];
                if ( v246 )
LABEL_276:
                  sub_186B220(v246 - 1);
              }
              v250 = (__int64 *)v245[1];
              if ( v250 )
              {
                v251 = &v250[*((unsigned int *)v250 - 1)];
                if ( v250 >= v251 )
                  goto LABEL_285;
                do
                {
                  while ( 1 )
                  {
                    v252 = *v250;
                    if ( *v250 )
                    {
                      v253 = *v245;
                      v46 = (*(_DWORD *)(v252 + 8))-- == 1;
                      if ( v46 )
                        break;
                    }
                    if ( ++v250 >= v251 )
                      goto LABEL_284;
                  }
                  sub_15D7BC0(v253, v252);
                  ++v250;
                }
                while ( v250 < v251 );
LABEL_284:
                v250 = (__int64 *)v245[1];
                if ( v250 )
LABEL_285:
                  sub_186B220(v250 - 1);
              }
              v245 += 4;
            }
            while ( v245 != v244 );
            v212 = v366;
            v27 = v369.m128i_i64[1];
            v235 = v369.m128i_i64[0];
          }
          v366 = (_DWORD *)v235;
          sub_186B220(v363 - 1);
          v254 = v366;
          v255 = 8LL * (unsigned int)v234[1];
          v363 = (__int64 *)v366;
          *v234 = v365.m128i_i32[0];
        }
      }
      v75 = *(_QWORD *)(v27 + 4080);
      if ( !v75 || !*(_DWORD *)(v75 - 4) )
      {
        v88 = *(_QWORD *)(v27 + 4096);
        if ( v88 && *(_DWORD *)(v88 - 4) )
        {
          v76 = nullptr;
          v365.m128i_i64[0] = *(_QWORD *)(v27 + 4072);
LABEL_94:
          v89 = 0;
          v365.m128i_i64[1] = *(_QWORD *)(v27 + 4088);
          if ( v88 )
          {
            v90 = 0;
            v369.m128i_i64[0] = (__int64)&v383;
            while ( v90 < *(_DWORD *)(v88 - 4) )
            {
              while ( 1 )
              {
                v91 = *(_QWORD *)(v88 + 8LL * v90);
                if ( v91 )
                  ++*(_DWORD *)(v91 + 8);
                if ( !v89 )
                {
                  v353 = (_QWORD *)sub_186B270(0x18u);
                  *v353 = 2;
                  v88 = *(_QWORD *)(v27 + 4096);
                  v184 = 1;
                  v89 = (__int64)(v353 + 1);
                  v183 = (_QWORD *)v89;
                  goto LABEL_208;
                }
                v92 = *(_DWORD *)(v89 - 4);
                if ( v92 == *(_DWORD *)(v89 - 8) )
                  break;
                ++v90;
                *(_QWORD *)(v89 + 8LL * v92) = v91;
                *(_DWORD *)(v89 - 4) = v92 + 1;
                if ( v90 >= *(_DWORD *)(v88 - 4) )
                  goto LABEL_102;
              }
              v179 = (3 * v92 + 1) >> 1;
              v180 = 8 * v179 + 8;
              if ( 8 * v92 + 8 >= (unsigned int)v180 || v92 >= v179 )
              {
                v25 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0((__int64 *)&v384, "Overflow encountered when expanding vector");
                *v25 = (char *)off_1C63128;
                sub_2333C0(v25 + 1, &v384);
                sub_233E40((__int64)&v384);
                __cxa_throw(v25, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              LODWORD(v366) = (3 * v92 + 1) >> 1;
              v181 = (_DWORD *)sub_186B300((void *)(v89 - 8), v180);
              v182 = (unsigned int)v181[1];
              v89 = (__int64)(v181 + 2);
              *v181 = (_DWORD)v366;
              LODWORD(v181) = v182;
              v88 = *(_QWORD *)(v27 + 4096);
              v183 = (_QWORD *)(v89 + 8 * v182);
              v184 = (_DWORD)v181 + 1;
LABEL_208:
              *v183 = v91;
              *(_DWORD *)(v89 - 4) = v184;
              if ( !v88 )
                break;
              ++v90;
            }
          }
LABEL_102:
          if ( v363 )
          {
            v93 = *((_DWORD *)v363 - 1);
            if ( v93 == *((_DWORD *)v363 - 2) )
            {
              LODWORD(v366) = (3 * v93 + 1) >> 1;
              v256 = 32 * (_DWORD)v366 + 8;
              if ( 32 * v93 + 8 >= v256 || v93 >= (3 * v93 + 1) >> 1 )
              {
                v26 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0((__int64 *)&v384, "Overflow encountered when expanding vector");
                *v26 = (char *)off_1C63128;
                sub_2333C0(v26 + 1, &v384);
                sub_233E40((__int64)&v384);
                __cxa_throw(v26, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v257 = (_DWORD *)sub_186B270(v256);
              v258 = (__int64)(v257 + 2);
              v259 = *((unsigned int *)v363 - 1);
              v260 = v363;
              v261 = v257 + 2;
              v257[1] = v259;
              v262 = &v363[4 * v259];
              if ( v262 != v363 )
              {
                do
                {
                  v263 = *v260;
                  v260 += 4;
                  v261 += 8;
                  *((_QWORD *)v261 - 4) = v263;
                  v264 = *(v260 - 3);
                  *(v260 - 3) = 0;
                  *((_QWORD *)v261 - 3) = v264;
                  *((_QWORD *)v261 - 2) = *(v260 - 2);
                  v265 = *(v260 - 1);
                  *(v260 - 1) = 0;
                  *((_QWORD *)v261 - 1) = v265;
                }
                while ( v260 != v262 );
              }
              v266 = &v363[4 * v259];
              if ( (_DWORD)v259 )
              {
                v369.m128i_i64[1] = (__int64)v257;
                v372 = v257 + 2;
                v369.m128i_i64[0] = v89;
                v267 = v363;
                v268 = v27;
                do
                {
                  v269 = (__int64 *)v267[3];
                  if ( v269 )
                  {
                    v270 = &v269[*((unsigned int *)v269 - 1)];
                    if ( v269 >= v270 )
                      goto LABEL_303;
                    do
                    {
                      while ( 1 )
                      {
                        v271 = *v269;
                        if ( *v269 )
                        {
                          v272 = v267[2];
                          v46 = (*(_DWORD *)(v271 + 8))-- == 1;
                          if ( v46 )
                            break;
                        }
                        if ( ++v269 >= v270 )
                          goto LABEL_302;
                      }
                      sub_15D7BC0(v272, v271);
                      ++v269;
                    }
                    while ( v269 < v270 );
LABEL_302:
                    v269 = (__int64 *)v267[3];
                    if ( v269 )
LABEL_303:
                      sub_186B220(v269 - 1);
                  }
                  v273 = (__int64 *)v267[1];
                  if ( v273 )
                  {
                    v274 = &v273[*((unsigned int *)v273 - 1)];
                    if ( v273 >= v274 )
                      goto LABEL_312;
                    do
                    {
                      while ( 1 )
                      {
                        v275 = *v273;
                        if ( *v273 )
                        {
                          v276 = *v267;
                          v46 = (*(_DWORD *)(v275 + 8))-- == 1;
                          if ( v46 )
                            break;
                        }
                        if ( ++v273 >= v274 )
                          goto LABEL_311;
                      }
                      sub_15D7BC0(v276, v275);
                      ++v273;
                    }
                    while ( v273 < v274 );
LABEL_311:
                    v273 = (__int64 *)v267[1];
                    if ( v273 )
LABEL_312:
                      sub_186B220(v273 - 1);
                  }
                  v267 += 4;
                }
                while ( v266 != v267 );
                v257 = (_DWORD *)v369.m128i_i64[1];
                v89 = v369.m128i_i64[0];
                v27 = v268;
                v258 = (__int64)v372;
              }
              v369.m128i_i64[0] = v258;
              sub_186B220(v363 - 1);
              v277 = (unsigned int)v257[1];
              v278 = v369.m128i_i64[0];
              *v257 = (_DWORD)v366;
              v279 = v277;
              v363 = (__int64 *)v278;
              v96 = (__m128i *)(v278 + 32 * v277);
              v95 = v279 + 1;
            }
            else
            {
              v94 = v93;
              v95 = v93 + 1;
              v96 = (__m128i *)&v363[4 * v94];
            }
          }
          else
          {
            v358 = (_QWORD *)sub_186B270(0x48u);
            *v358 = 2;
            v363 = v358 + 1;
            v96 = (__m128i *)(v358 + 1);
            v95 = 1;
          }
          *v96 = _mm_unpacklo_epi64(_mm_loadl_epi64(&v365), (__m128i)(unsigned __int64)v76);
          v96[1] = _mm_unpacklo_epi64(
                     _mm_loadl_epi64((const __m128i *)&v365.m128i_u64[1]),
                     (__m128i)(unsigned __int64)v89);
          *((_DWORD *)v363 - 1) = v95;
        }
        v97 = *(_QWORD **)(v27 + 4144);
        if ( v97 )
        {
          v372 = &v97[2 * *((unsigned int *)v97 - 1)];
          if ( v372 != v97 )
          {
            v98 = v97;
            v365.m128i_i64[0] = (__int64)&v384;
            do
            {
              while ( 1 )
              {
                v99 = (_DWORD *)*v98;
                v100 = (_DWORD *)v98[1];
                v101 = *(_DWORD **)(sub_15D1F10(*v98) + 24);
                if ( v101 )
                {
                  if ( *(_DWORD *)(v27 + 1720) == *v101 )
                  {
                    v104 = v101[1];
                    if ( !v104 )
                      break;
                  }
                }
                v103 = *(_DWORD **)(sub_15D1F10(v99) + 24);
                if ( v103 )
                {
                  if ( *(_DWORD *)(v27 + 1720) == *v103 && v103[1] == 1 )
                    break;
                }
                if ( v99 == v100 )
                  goto LABEL_119;
                v105 = sub_966380(v27, v99, v100);
                v106 = *(_QWORD *)(v27 + 16);
                v107 = v105;
                (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v106 + 7488) + 48LL))(
                  *(_QWORD *)(v106 + 7488),
                  *(_QWORD *)(*(_QWORD *)(v106 + 8840) + 8LL * (v105 >> 1)));
                (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v106 + 7488) + 64LL))(*(_QWORD *)(v106 + 7488));
                if ( src )
                {
                  v108 = *((unsigned int *)src - 1);
                  if ( (_DWORD)v108 == *((_DWORD *)src - 2) )
                  {
                    v185 = (unsigned int)(3 * v108 + 1) >> 1;
                    v186 = 4 * v185 + 8;
                    if ( 4 * (int)v108 + 8 >= v186 || (unsigned int)v108 >= v185 )
                    {
                      v14 = (char **)__cxa_allocate_exception(0x28u);
                      sub_24ABB0((__int64 *)&v384, "Overflow encountered when expanding vector");
                      *v14 = (char *)off_1C63128;
                      sub_2333C0(v14 + 1, &v384);
                      sub_233E40((__int64)&v384);
                      __cxa_throw(
                        v14,
                        (struct type_info *)&`typeinfo for'default_exception,
                        (void (*)(void *))sub_230E50);
                    }
                    v187 = (unsigned int *)sub_186B300((char *)src - 8, v186);
                    v188 = (char *)(v187 + 2);
                    *v187 = v185;
                    v189 = v187[1];
                    src = v188;
                    v109 = &v188[4 * v189];
                  }
                  else
                  {
                    v109 = (char *)src + 4 * v108;
                  }
                }
                else
                {
                  v354 = (_QWORD *)sub_186B270(0x10u);
                  *v354 = 2;
                  v109 = (char *)(v354 + 1);
                  src = v109;
                }
                *(_DWORD *)v109 = v107;
                ++*((_DWORD *)src - 1);
                v110 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v27 + 16) + 8848LL) + v107);
                if ( v110 == -1 )
                  goto LABEL_215;
                if ( v110 )
                {
LABEL_119:
                  v98 += 2;
                  if ( v372 == v98 )
                    goto LABEL_120;
                }
                else
                {
                  *(_BYTE *)(v27 + 4170) = 1;
                  v98 += 2;
                  if ( v372 == v98 )
                    goto LABEL_120;
                }
              }
              v111 = *(_QWORD **)(v27 + 4080);
              if ( v111 )
              {
                v112 = &v111[*((unsigned int *)v111 - 1)];
                if ( v111 >= v112 )
                  goto LABEL_130;
                do
                {
                  while ( 1 )
                  {
                    v113 = *v111;
                    if ( *v111 )
                    {
                      v114 = *(_QWORD *)(v27 + 4072);
                      v46 = (*(_DWORD *)(v113 + 8))-- == 1;
                      if ( v46 )
                        break;
                    }
                    if ( ++v111 >= v112 )
                      goto LABEL_129;
                  }
                  sub_15D7BC0(v114, v113);
                  ++v111;
                }
                while ( v111 < v112 );
LABEL_129:
                v111 = *(_QWORD **)(v27 + 4080);
                if ( v111 )
LABEL_130:
                  *((_DWORD *)v111 - 1) = 0;
              }
              v115 = *(_QWORD **)(v27 + 4096);
              if ( v115 )
              {
                v116 = &v115[*((unsigned int *)v115 - 1)];
                if ( v115 >= v116 )
                  goto LABEL_139;
                do
                {
                  while ( 1 )
                  {
                    v117 = *v115;
                    if ( *v115 )
                    {
                      v118 = *(_QWORD *)(v27 + 4088);
                      v46 = (*(_DWORD *)(v117 + 8))-- == 1;
                      if ( v46 )
                        break;
                    }
                    if ( ++v115 >= v116 )
                      goto LABEL_138;
                  }
                  sub_15D7BC0(v118, v117);
                  ++v115;
                }
                while ( v115 < v116 );
LABEL_138:
                v115 = *(_QWORD **)(v27 + 4096);
                if ( v115 )
LABEL_139:
                  *((_DWORD *)v115 - 1) = 0;
              }
              sub_1642120(
                v27 + 1728,
                (int)v99,
                v370[0],
                v104,
                v102,
                a14,
                v360,
                (int)v363,
                v365.m128i_i32[0],
                (void *)v365.m128i_i64[1],
                (int)v366,
                v367,
                v368,
                v369.m128i_i32[0],
                v369.m128i_i32[2],
                v370[0],
                v371[0],
                (int)v372,
                (int)v373,
                src);
              sub_1642120(
                v27 + 1728,
                (int)v100,
                v371[0],
                v119,
                v120,
                v121,
                v361,
                v364,
                v365.m128i_i32[0],
                (void *)v365.m128i_i64[1],
                (int)v366,
                v367,
                v368,
                v369.m128i_i32[0],
                v369.m128i_i32[2],
                v370[0],
                v371[0],
                (int)v372,
                (int)v373,
                src);
              v122 = *(_QWORD *)(v27 + 4080);
              v123 = nullptr;
              v369.m128i_i64[0] = *(_QWORD *)(v27 + 4072);
              if ( v122 )
              {
                v124 = 0;
                do
                {
                  if ( v124 >= *(_DWORD *)(v122 - 4) )
                    break;
                  v125 = *(_QWORD *)(v122 + 8LL * v124);
                  if ( v125 )
                    ++*(_DWORD *)(v125 + 8);
                  if ( v123 )
                  {
                    v126 = *(v123 - 1);
                    if ( v126 == *(v123 - 2) )
                    {
                      v147 = (3 * v126 + 1) >> 1;
                      v148 = 8 * v147 + 8;
                      if ( 8 * v126 + 8 >= (unsigned int)v148 || v126 >= v147 )
                      {
                        v20 = (char **)__cxa_allocate_exception(0x28u);
                        sub_24ABB0((__int64 *)&v384, "Overflow encountered when expanding vector");
                        *v20 = (char *)off_1C63128;
                        sub_2333C0(v20 + 1, &v384);
                        sub_233E40((__int64)&v384);
                        __cxa_throw(
                          v20,
                          (struct type_info *)&`typeinfo for'default_exception,
                          (void (*)(void *))sub_230E50);
                      }
                      v365.m128i_i32[2] = (3 * v126 + 1) >> 1;
                      v149 = sub_186B300(v123 - 2, v148);
                      v123 = (_DWORD *)(v149 + 8);
                      *(_DWORD *)v149 = v365.m128i_i32[2];
                      LODWORD(v149) = *(_DWORD *)(v149 + 4);
                      v129 = &v123[2 * (unsigned int)v149];
                      v122 = *(_QWORD *)(v27 + 4080);
                      v128 = v149 + 1;
                    }
                    else
                    {
                      v127 = v126;
                      v128 = v126 + 1;
                      v129 = &v123[2 * v127];
                    }
                  }
                  else
                  {
                    v177 = (_QWORD *)sub_186B270(0x18u);
                    v122 = *(_QWORD *)(v27 + 4080);
                    *v177 = 2;
                    v129 = v177 + 1;
                    v128 = 1;
                    v123 = v129;
                  }
                  *v129 = v125;
                  ++v124;
                  *(v123 - 1) = v128;
                }
                while ( v122 );
              }
              v130 = *(_QWORD *)(v27 + 4096);
              v131 = nullptr;
              v369.m128i_i64[1] = *(_QWORD *)(v27 + 4088);
              if ( v130 )
              {
                for ( k = 0; k < *(_DWORD *)(v130 - 4); k = v144 + 1 )
                {
                  while ( 1 )
                  {
                    v133 = *(_QWORD *)(v130 + 8LL * k);
                    if ( v133 )
                      ++*(_DWORD *)(v133 + 8);
                    if ( !v131 )
                    {
                      v365.m128i_i32[2] = k;
                      v176 = (_QWORD *)sub_186B270(0x18u);
                      v131 = v176 + 1;
                      v144 = v365.m128i_i32[2];
                      v145 = v176 + 1;
                      *v176 = 2;
                      v130 = *(_QWORD *)(v27 + 4096);
                      v146 = 1;
                      goto LABEL_165;
                    }
                    v134 = *(v131 - 1);
                    if ( v134 == *(v131 - 2) )
                      break;
                    ++k;
                    *(_QWORD *)&v131[2 * v134] = v133;
                    *(v131 - 1) = v134 + 1;
                    if ( k >= *(_DWORD *)(v130 - 4) )
                      goto LABEL_157;
                  }
                  v140 = (3 * v134 + 1) >> 1;
                  v141 = 8 * v140 + 8;
                  if ( 8 * v134 + 8 >= (unsigned int)v141 || v134 >= v140 )
                  {
                    v18 = (char **)__cxa_allocate_exception(0x28u);
                    sub_24ABB0((__int64 *)&v384, "Overflow encountered when expanding vector");
                    *v18 = (char *)off_1C63128;
                    sub_2333C0(v18 + 1, &v384);
                    sub_233E40((__int64)&v384);
                    __cxa_throw(v18, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                  }
                  LODWORD(v366) = k;
                  v365.m128i_i32[2] = (3 * v134 + 1) >> 1;
                  v142 = (_DWORD *)sub_186B300(v131 - 2, v141);
                  v143 = (unsigned int)v142[1];
                  v131 = v142 + 2;
                  v144 = (int)v366;
                  *v142 = v365.m128i_i32[2];
                  LODWORD(v142) = v143;
                  v130 = *(_QWORD *)(v27 + 4096);
                  v145 = &v131[2 * v143];
                  v146 = (_DWORD)v142 + 1;
LABEL_165:
                  *v145 = v133;
                  *(v131 - 1) = v146;
                  if ( !v130 )
                    break;
                }
              }
LABEL_157:
              v135 = v363;
              if ( v363 )
              {
                v136 = *((_DWORD *)v363 - 1);
                if ( v136 == *((_DWORD *)v363 - 2) )
                {
                  v150 = (3 * v136 + 1) >> 1;
                  v365.m128i_i32[2] = v150;
                  v151 = 32 * v150 + 8;
                  if ( 32 * v136 + 8 >= (unsigned int)v151 || v136 >= v150 )
                  {
                    v21 = (char **)__cxa_allocate_exception(0x28u);
                    sub_24ABB0((__int64 *)&v384, "Overflow encountered when expanding vector");
                    *v21 = (char *)off_1C63128;
                    sub_2333C0(v21 + 1, &v384);
                    sub_233E40((__int64)&v384);
                    __cxa_throw(v21, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                  }
                  v152 = sub_186B270(v151);
                  v153 = v152 + 8;
                  v154 = *((unsigned int *)v363 - 1);
                  v155 = v363;
                  v156 = v152 + 8;
                  *(_DWORD *)(v152 + 4) = v154;
                  v157 = v154;
                  v158 = &v363[4 * v154];
                  if ( v158 != v363 )
                  {
                    do
                    {
                      v159 = *v155;
                      v155 += 4;
                      v156 += 32;
                      *(_QWORD *)(v156 - 32) = v159;
                      v160 = *(v155 - 3);
                      *(v155 - 3) = 0;
                      *(_QWORD *)(v156 - 24) = v160;
                      *(_QWORD *)(v156 - 16) = *(v155 - 2);
                      v161 = *(v155 - 1);
                      *(v155 - 1) = 0;
                      *(_QWORD *)(v156 - 8) = v161;
                    }
                    while ( v158 != v155 );
                  }
                  v162 = &v363[4 * v154];
                  if ( v157 )
                  {
                    v377 = v152;
                    v378 = v123;
                    v379 = v27;
                    v366 = v131;
                    v163 = v363;
                    v164 = v152 + 8;
                    do
                    {
                      v165 = (__int64 *)v163[3];
                      if ( v165 )
                      {
                        v166 = &v165[*((unsigned int *)v165 - 1)];
                        if ( v165 >= v166 )
                          goto LABEL_184;
                        do
                        {
                          while ( 1 )
                          {
                            v167 = *v165;
                            if ( *v165 )
                            {
                              v168 = v163[2];
                              v46 = (*(_DWORD *)(v167 + 8))-- == 1;
                              if ( v46 )
                                break;
                            }
                            if ( ++v165 >= v166 )
                              goto LABEL_183;
                          }
                          sub_15D7BC0(v168, v167);
                          ++v165;
                        }
                        while ( v165 < v166 );
LABEL_183:
                        v165 = (__int64 *)v163[3];
                        if ( v165 )
LABEL_184:
                          sub_186B220(v165 - 1);
                      }
                      v169 = (__int64 *)v163[1];
                      if ( v169 )
                      {
                        v170 = &v169[*((unsigned int *)v169 - 1)];
                        if ( v169 >= v170 )
                          goto LABEL_193;
                        do
                        {
                          while ( 1 )
                          {
                            v171 = *v169;
                            if ( *v169 )
                            {
                              v172 = *v163;
                              v46 = (*(_DWORD *)(v171 + 8))-- == 1;
                              if ( v46 )
                                break;
                            }
                            if ( ++v169 >= v170 )
                              goto LABEL_192;
                          }
                          sub_15D7BC0(v172, v171);
                          ++v169;
                        }
                        while ( v169 < v170 );
LABEL_192:
                        v169 = (__int64 *)v163[1];
                        if ( v169 )
LABEL_193:
                          sub_186B220(v169 - 1);
                      }
                      v163 += 4;
                    }
                    while ( v163 != v162 );
                    v131 = v366;
                    v152 = v377;
                    v153 = v164;
                    v123 = v378;
                    v27 = v379;
                  }
                  v366 = (_DWORD *)v152;
                  v377 = v153;
                  sub_186B220(v363 - 1);
                  v173 = v366;
                  v135 = (__int64 *)v377;
                  *v366 = v365.m128i_i32[2];
                  v174 = (unsigned int)v173[1];
                  v363 = v135;
                  v175 = v174;
                  v139 = (__m128i *)&v135[4 * v174];
                  v138 = v175 + 1;
                }
                else
                {
                  v137 = v136;
                  v138 = v136 + 1;
                  v139 = (__m128i *)&v363[4 * v137];
                }
              }
              else
              {
                v178 = (_QWORD *)sub_186B270(0x48u);
                *v178 = 2;
                v363 = v178 + 1;
                v139 = (__m128i *)(v178 + 1);
                v135 = v178 + 1;
                v138 = 1;
              }
              v98 += 2;
              *v139 = _mm_unpacklo_epi64(_mm_loadl_epi64(&v369), (__m128i)(unsigned __int64)v123);
              v139[1] = _mm_unpacklo_epi64(
                          _mm_loadl_epi64((const __m128i *)&v369.m128i_u64[1]),
                          (__m128i)(unsigned __int64)v131);
              *((_DWORD *)v135 - 1) = v138;
            }
            while ( v372 != v98 );
          }
        }
LABEL_120:
        v40 = v380;
        goto LABEL_48;
      }
      v76 = nullptr;
      v77 = 0;
      v365.m128i_i64[0] = *(_QWORD *)(v27 + 4072);
      v365.m128i_i64[1] = (__int64)&v383;
      while ( 1 )
      {
LABEL_82:
        if ( v77 >= *(_DWORD *)(v75 - 4) )
        {
LABEL_90:
          v88 = *(_QWORD *)(v27 + 4096);
          goto LABEL_94;
        }
        v81 = *(_QWORD *)(v75 + 8LL * v77);
        if ( v81 )
          ++*(_DWORD *)(v81 + 8);
        if ( !v76 )
          break;
        v82 = *(v76 - 1);
        if ( v82 != *(v76 - 2) )
        {
          v78 = v82;
          v79 = v82 + 1;
          v80 = &v76[2 * v78];
          goto LABEL_81;
        }
        v83 = (3 * v82 + 1) >> 1;
        v84 = 8 * v83 + 8;
        if ( 8 * v82 + 8 >= v84 || v82 >= v83 )
        {
          v19 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0((__int64 *)&v384, "Overflow encountered when expanding vector");
          *v19 = (char *)off_1C63128;
          sub_2333C0(v19 + 1, &v384);
          sub_233E40((__int64)&v384);
          __cxa_throw(v19, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v85 = (unsigned int *)sub_186B300(v76 - 2, v84);
        v86 = v85[1];
        v76 = v85 + 2;
        *v85 = v83;
        ++v77;
        LODWORD(v85) = v86;
        v87 = &v76[2 * v86];
        v75 = *(_QWORD *)(v27 + 4080);
        *v87 = v81;
        *(v76 - 1) = (_DWORD)v85 + 1;
        if ( !v75 )
          goto LABEL_90;
      }
      v352 = (_QWORD *)sub_186B270(0x18u);
      *v352 = 2;
      v75 = *(_QWORD *)(v27 + 4080);
      v79 = 1;
      v80 = v352 + 1;
      v76 = v80;
LABEL_81:
      *v80 = v81;
      ++v77;
      *(v76 - 1) = v79;
      if ( !v75 )
        goto LABEL_90;
      goto LABEL_82;
    }
    if ( v40 )
    {
      if ( v363 )
      {
        v190 = *((unsigned int *)v363 - 1);
        if ( (_DWORD)v190 == *((_DWORD *)v363 - 2) )
        {
          v365.m128i_i32[0] = (unsigned int)(3 * v190 + 1) >> 1;
          v310 = 32 * v365.m128i_i32[0] + 8;
          if ( 32 * (int)v190 + 8 >= v310 || (unsigned int)v190 >= (unsigned int)(3 * v190 + 1) >> 1 )
          {
            v15 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0((__int64 *)&v384, "Overflow encountered when expanding vector");
            *v15 = (char *)off_1C63128;
            sub_2333C0(v15 + 1, &v384);
            sub_233E40((__int64)&v384);
            __cxa_throw(v15, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v311 = (_DWORD *)sub_186B270(v310);
          v312 = v311 + 2;
          v313 = *((unsigned int *)v363 - 1);
          v365.m128i_i64[1] = (__int64)(v311 + 2);
          v314 = v363;
          v311[1] = v313;
          v315 = v313;
          v316 = &v363[4 * v313];
          if ( v316 != v363 )
          {
            do
            {
              v317 = *v314;
              v314 += 4;
              v312 += 8;
              *((_QWORD *)v312 - 4) = v317;
              v318 = *(v314 - 3);
              *(v314 - 3) = 0;
              *((_QWORD *)v312 - 3) = v318;
              *((_QWORD *)v312 - 2) = *(v314 - 2);
              v319 = *(v314 - 1);
              *(v314 - 1) = 0;
              *((_QWORD *)v312 - 1) = v319;
            }
            while ( v314 != v316 );
          }
          v320 = 4 * v313;
          if ( v315 )
          {
            LOBYTE(v366) = v40;
            v321 = v27;
            v322 = v363;
            v369.m128i_i64[0] = (__int64)v42;
            v323 = v321;
            v324 = &v363[v320];
            do
            {
              v325 = (__int64 *)v322[3];
              if ( v325 )
              {
                v326 = &v325[*((unsigned int *)v325 - 1)];
                if ( v325 >= v326 )
                  goto LABEL_373;
                do
                {
                  while ( 1 )
                  {
                    v327 = *v325;
                    if ( *v325 )
                    {
                      v328 = v322[2];
                      v46 = (*(_DWORD *)(v327 + 8))-- == 1;
                      if ( v46 )
                        break;
                    }
                    if ( ++v325 >= v326 )
                      goto LABEL_372;
                  }
                  sub_15D7BC0(v328, v327);
                  ++v325;
                }
                while ( v325 < v326 );
LABEL_372:
                v325 = (__int64 *)v322[3];
                if ( v325 )
LABEL_373:
                  sub_186B220(v325 - 1);
              }
              v329 = (__int64 *)v322[1];
              if ( v329 )
              {
                v330 = &v329[*((unsigned int *)v329 - 1)];
                if ( v329 >= v330 )
                  goto LABEL_382;
                do
                {
                  while ( 1 )
                  {
                    v331 = *v329;
                    if ( *v329 )
                    {
                      v332 = *v322;
                      v46 = (*(_DWORD *)(v331 + 8))-- == 1;
                      if ( v46 )
                        break;
                    }
                    if ( ++v329 >= v330 )
                      goto LABEL_381;
                  }
                  sub_15D7BC0(v332, v331);
                  ++v329;
                }
                while ( v329 < v330 );
LABEL_381:
                v329 = (__int64 *)v322[1];
                if ( v329 )
LABEL_382:
                  sub_186B220(v329 - 1);
              }
              v322 += 4;
            }
            while ( v324 != v322 );
            v40 = (unsigned __int8)v366;
            v42 = (__int64 *)v369.m128i_i64[0];
            v27 = v323;
          }
          sub_186B220(v363 - 1);
          v333 = v365.m128i_i64[1];
          *v311 = v365.m128i_i32[0];
          v363 = (__int64 *)v333;
          v191 = (__int64 *)(v333 + 32LL * (unsigned int)v311[1]);
        }
        else
        {
          v191 = &v363[4 * v190];
        }
      }
      else
      {
        v359 = (_QWORD *)sub_186B270(0x48u);
        *v359 = 2;
        v363 = v359 + 1;
        v191 = v359 + 1;
      }
      v192 = *v42;
      v191[1] = 0;
      v193 = v42[1];
      *v191 = v192;
      if ( v193 )
      {
        v194 = nullptr;
        v195 = 0;
        do
        {
          if ( v195 >= *(_DWORD *)(v193 - 4) )
            break;
          v196 = *(_QWORD *)(v193 + 8LL * v195);
          if ( v196 )
            ++*(_DWORD *)(v196 + 8);
          if ( v194 )
          {
            v197 = *((_DWORD *)v194 - 1);
            if ( v197 == *((_DWORD *)v194 - 2) )
            {
              v348 = (3 * v197 + 1) >> 1;
              v349 = 8 * v348 + 8;
              if ( 8 * v197 + 8 >= v349 || v197 >= v348 )
              {
                v24 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0((__int64 *)&v384, "Overflow encountered when expanding vector");
                *v24 = (char *)off_1C63128;
                sub_2333C0(v24 + 1, &v384);
                sub_233E40((__int64)&v384);
                __cxa_throw(v24, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v365.m128i_i64[0] = v196;
              v350 = (unsigned int *)sub_186B300(v194 - 1, v349);
              v351 = v350[1];
              v194 = v350 + 2;
              v196 = v365.m128i_i64[0];
              *v350 = v348;
              v191[1] = (__int64)(v350 + 2);
              LODWORD(v350) = v351;
              v200 = &v194[v351];
              v193 = v42[1];
              v199 = (_DWORD)v350 + 1;
            }
            else
            {
              v198 = v197;
              v199 = v197 + 1;
              v200 = &v194[v198];
            }
          }
          else
          {
            v365.m128i_i64[0] = v196;
            v356 = (_QWORD *)sub_186B270(0x18u);
            *v356 = 2;
            v196 = v365.m128i_i64[0];
            v199 = 1;
            v194 = v356 + 1;
            v191[1] = (__int64)v194;
            v200 = v194;
            v193 = v42[1];
          }
          *v200 = v196;
          ++v195;
          *((_DWORD *)v194 - 1) = v199;
        }
        while ( v193 );
      }
      v201 = v42[2];
      v191[3] = 0;
      v202 = v42[3];
      v191[2] = v201;
      if ( v202 )
      {
        v203 = nullptr;
        v204 = 0;
        do
        {
          if ( v204 >= *(_DWORD *)(v202 - 4) )
            break;
          v205 = *(_QWORD *)(v202 + 8LL * v204);
          if ( v205 )
            ++*(_DWORD *)(v205 + 8);
          if ( v203 )
          {
            v206 = *((_DWORD *)v203 - 1);
            if ( v206 == *((_DWORD *)v203 - 2) )
            {
              v344 = (3 * v206 + 1) >> 1;
              v345 = 8 * v344 + 8;
              if ( 8 * v206 + 8 >= v345 || v206 >= v344 )
              {
                v23 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0((__int64 *)&v384, "Overflow encountered when expanding vector");
                *v23 = (char *)off_1C63128;
                sub_2333C0(v23 + 1, &v384);
                sub_233E40((__int64)&v384);
                __cxa_throw(v23, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v365.m128i_i64[0] = v205;
              v346 = (unsigned int *)sub_186B300(v203 - 1, v345);
              v347 = v346[1];
              v203 = v346 + 2;
              v205 = v365.m128i_i64[0];
              *v346 = v344;
              v191[3] = (__int64)(v346 + 2);
              LODWORD(v346) = v347;
              v209 = &v203[v347];
              v202 = v42[3];
              v208 = (_DWORD)v346 + 1;
            }
            else
            {
              v207 = v206;
              v208 = v206 + 1;
              v209 = &v203[v207];
            }
          }
          else
          {
            v365.m128i_i64[0] = v205;
            v355 = (_QWORD *)sub_186B270(0x18u);
            *v355 = 2;
            v205 = v365.m128i_i64[0];
            v208 = 1;
            v203 = v355 + 1;
            v191[3] = (__int64)v203;
            v209 = v203;
            v202 = v42[3];
          }
          *v209 = v205;
          ++v204;
          *((_DWORD *)v203 - 1) = v208;
        }
        while ( v202 );
      }
      ++*((_DWORD *)v363 - 1);
    }
LABEL_48:
    ++v375;
    v39 = v376[2].m128i_i64[0];
    if ( !v39 )
      break;
  }
  if ( v40 )
  {
    v280 = v27 + 304;
    v281 = (__m128)_mm_loadu_si128(v376);
    v282 = v281.m128_u64[0];
    if ( v281.m128_u64[0] )
      ++*(_DWORD *)(v281.m128_u64[0] + 8);
    v283 = (__m128)_mm_loadu_si128(v376 + 1);
    v284 = v283.m128_u64[0];
    if ( v283.m128_u64[0] )
      ++*(_DWORD *)(v283.m128_u64[0] + 8);
    if ( v363 )
    {
      v386 = nullptr;
      v387 = nullptr;
      *(_QWORD *)&v382[1] = v363;
      v368 = (__int64)&v382[1];
      v384 = v281;
      v385 = v283;
      sub_BF3E00(&v386, &v382[1]);
      v285 = v384.m128_u64[1];
      v282 = v384.m128_u64[0];
      v286 = v385.m128_u64[1];
      v284 = v385.m128_u64[0];
      v287 = v386;
    }
    else
    {
      v357 = _mm_movehl_ps(a10, v281);
      v287 = nullptr;
      v285 = v357.m128_u64[0];
      v286 = _mm_movehl_ps(v357, v283).m128_u64[0];
    }
    if ( src )
    {
      v288 = _mm_cvtsi32_si128(*((_DWORD *)src - 1));
      v289 = 4LL * *((unsigned int *)src - 2) + 8;
      v365.m128i_i32[0] = *((_DWORD *)src - 2);
      v365.m128i_i32[2] = _mm_cvtsi128_si32(v288);
      v290 = (_QWORD *)sub_186B270(v289);
      v291 = (unsigned int *)src;
      v292 = (char *)(v290 + 1);
      *v290 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v365.m128i_u32[0]), _mm_cvtsi32_si128(v365.m128i_u32[2])).m128i_u64[0];
      v293 = 4LL * *(v291 - 1);
      if ( v293 )
        v292 = (char *)memcpy(v292, v291, v293);
    }
    else
    {
      v292 = nullptr;
    }
    v385.m128_u64[0] = v284;
    v384.m128_u64[0] = v282;
    v388 = v373;
    v384.m128_u64[1] = v285;
    v385.m128_u64[1] = v286;
    v386 = v287;
    v387 = v292;
    sub_BF3500(v280, v381, &v384);
    v294 = (_DWORD *)v384.m128_u64[0];
    v295 = v385.m128_i64[1];
    v296 = v385.m128_u64[0];
    v365.m128i_i64[0] = v384.m128_i64[1];
    v297 = v386;
    if ( v387 )
      sub_186B220(v387 - 8);
    if ( v297 )
    {
      v298 = *((_DWORD *)v297 - 1);
      if ( v298 )
      {
        v365.m128i_i64[1] = v295;
        v299 = v297;
        v366 = v294;
        v300 = &v297[4 * v298];
        do
        {
          v301 = (__int64 *)v299[3];
          if ( v301 )
          {
            v302 = &v301[*((unsigned int *)v301 - 1)];
            if ( v301 >= v302 )
              goto LABEL_338;
            do
            {
              while ( 1 )
              {
                v303 = *v301;
                if ( *v301 )
                {
                  v304 = v299[2];
                  v46 = (*(_DWORD *)(v303 + 8))-- == 1;
                  if ( v46 )
                    break;
                }
                if ( ++v301 >= v302 )
                  goto LABEL_337;
              }
              sub_15D7BC0(v304, v303);
              ++v301;
            }
            while ( v301 < v302 );
LABEL_337:
            v301 = (__int64 *)v299[3];
            if ( v301 )
LABEL_338:
              sub_186B220(v301 - 1);
          }
          v305 = (__int64 *)v299[1];
          if ( v305 )
          {
            v306 = &v305[*((unsigned int *)v305 - 1)];
            if ( v305 >= v306 )
              goto LABEL_347;
            do
            {
              while ( 1 )
              {
                v307 = *v305;
                if ( *v305 )
                {
                  v308 = *v299;
                  v46 = (*(_DWORD *)(v307 + 8))-- == 1;
                  if ( v46 )
                    break;
                }
                if ( ++v305 >= v306 )
                  goto LABEL_346;
              }
              sub_15D7BC0(v308, v307);
              ++v305;
            }
            while ( v305 < v306 );
LABEL_346:
            v305 = (__int64 *)v299[1];
            if ( v305 )
LABEL_347:
              sub_186B220(v305 - 1);
          }
          v299 += 4;
        }
        while ( v299 != v300 );
        v295 = v365.m128i_i64[1];
        v294 = v366;
      }
      sub_186B220(v297 - 1);
    }
    if ( v296 )
    {
      v46 = (*(_DWORD *)(v296 + 8))-- == 1;
      if ( v46 )
        sub_15D7BC0(v295, v296);
    }
    if ( v294 )
    {
      v46 = v294[2]-- == 1;
      if ( v46 )
        sub_15D7BC0(v365.m128i_i64[0], v294);
    }
  }
LABEL_50:
  v380 = 0;
LABEL_51:
  if ( src )
LABEL_215:
    sub_186B220((char *)src - 8);
  if ( v363 )
  {
    v63 = *((unsigned int *)v363 - 1);
    if ( (_DWORD)v63 )
    {
      v64 = v363;
      v65 = &v363[4 * v63];
      do
      {
        v66 = (__int64 *)v64[3];
        if ( v66 )
        {
          v67 = &v66[*((unsigned int *)v66 - 1)];
          if ( v66 >= v67 )
            goto LABEL_63;
          do
          {
            while ( 1 )
            {
              v68 = *v66;
              if ( *v66 )
              {
                v69 = v64[2];
                v46 = (*(_DWORD *)(v68 + 8))-- == 1;
                if ( v46 )
                  break;
              }
              if ( ++v66 >= v67 )
                goto LABEL_62;
            }
            sub_15D7BC0(v69, v68);
            ++v66;
          }
          while ( v66 < v67 );
LABEL_62:
          v66 = (__int64 *)v64[3];
          if ( v66 )
LABEL_63:
            sub_186B220(v66 - 1);
        }
        v70 = (__int64 *)v64[1];
        if ( v70 )
        {
          v71 = &v70[*((unsigned int *)v70 - 1)];
          if ( v70 >= v71 )
            goto LABEL_72;
          do
          {
            while ( 1 )
            {
              v72 = *v70;
              if ( *v70 )
              {
                v73 = *v64;
                v46 = (*(_DWORD *)(v72 + 8))-- == 1;
                if ( v46 )
                  break;
              }
              if ( ++v70 >= v71 )
                goto LABEL_71;
            }
            sub_15D7BC0(v73, v72);
            ++v70;
          }
          while ( v70 < v71 );
LABEL_71:
          v70 = (__int64 *)v64[1];
          if ( v70 )
LABEL_72:
            sub_186B220(v70 - 1);
        }
        v64 += 4;
      }
      while ( v64 != v65 );
    }
    sub_186B220(v363 - 1);
  }
  return v380;
}

