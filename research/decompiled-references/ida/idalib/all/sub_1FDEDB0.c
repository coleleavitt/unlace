__int64 __fastcall sub_1FDEDB0(
        __int64 a1,
        _BYTE *a2,
        __int64 *a3,
        unsigned int a4,
        int a5,
        __int64 a6,
        unsigned int a7,
        __int64 a8,
        __int64 a9,
        __m128i a10,
        int a11,
        void (__fastcall *a12)(_BYTE *, __int64, _QWORD),
        unsigned int **a13,
        _QWORD *a14)
{
  char v19; // al
  __int64 *v20; // rcx
  __int64 *v21; // rsi
  unsigned __int64 v22; // rax
  __int64 v23; // rdx
  int v24; // edi
  __int64 v25; // r8
  int v26; // edi
  unsigned int v27; // eax
  __int64 *v28; // rdx
  __int64 v29; // r9
  unsigned int *v30; // r15
  __int64 *v31; // rdi
  __int64 i; // rax
  unsigned __int64 v33; // rax
  unsigned int *v34; // rax
  __int64 *v35; // rcx
  __int64 *v36; // r8
  _BYTE *v37; // rax
  __int64 *v38; // rax
  __int64 v39; // rcx
  unsigned int v40; // eax
  unsigned int v41; // esi
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rdi
  unsigned __int64 v47; // rdi
  __int64 v48; // rax
  __int64 v49; // r12
  __int64 v50; // rsi
  __int64 (__fastcall *v51)(__int64, __int64, __int64, __int64, __int64, __int64, _QWORD, _QWORD, _QWORD, __int64); // r13
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rsi
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 *v65; // r13
  unsigned __int64 v66; // r12
  __int64 v67; // rax
  __int64 v68; // rdx
  __int64 *v69; // r14
  unsigned __int64 v70; // rsi
  unsigned int v71; // edi
  __int64 *v72; // rax
  __int64 *v73; // rcx
  __int64 v74; // r14
  __int64 *v75; // rcx
  __int64 *v76; // r12
  unsigned __int64 v77; // rdi
  int v78; // edx
  __int64 *v79; // rsi
  __int64 v80; // rax
  __int64 v81; // r8
  __int64 v82; // r9
  __int64 v83; // r14
  __int64 v84; // rcx
  __int64 *v85; // r12
  unsigned __int64 v86; // rdi
  int v87; // edx
  __int64 *v88; // rsi
  unsigned int *v89; // rax
  unsigned int v90; // eax
  __int64 v91; // rax
  unsigned __int64 v92; // rdi
  unsigned __int64 v93; // rdx
  int v94; // ecx
  void **v95; // rsi
  void **v96; // rax
  void *v97; // rdx
  unsigned int v98; // ebx
  size_t v100; // r8
  char *v101; // rcx
  __int64 v102; // rdx
  unsigned __int64 v103; // rax
  __int64 v104; // rax
  _QWORD *v105; // rax
  __int64 v106; // rdx
  _QWORD *v107; // r10
  __int64 *v108; // r9
  __int64 v109; // r8
  _QWORD *mm; // rdx
  __int64 *v111; // rax
  int nn; // r11d
  __int64 v113; // rdx
  unsigned int v114; // esi
  __int64 *v115; // rcx
  __int64 v116; // rdi
  int v117; // edx
  int v118; // ecx
  int v119; // edx
  unsigned int v120; // r12d
  __int64 v121; // rsi
  __int64 *v122; // rdi
  unsigned int v123; // eax
  __int64 v124; // rax
  __int64 v125; // rax
  int v126; // eax
  unsigned __int64 v127; // r8
  __int64 v128; // r9
  __int64 v129; // r13
  __int64 v130; // rcx
  __int64 *v131; // rbx
  int v132; // eax
  __int64 *v133; // rsi
  __int64 v134; // rdx
  unsigned __int64 v135; // r8
  __int64 v136; // r9
  __int64 v137; // r13
  __int64 v138; // rcx
  __int64 *v139; // rbx
  int v140; // edx
  unsigned int **v141; // rsi
  unsigned int *v142; // rax
  __int64 *v143; // rdx
  __int64 v144; // rax
  size_t *v145; // rdx
  __int64 v146; // rsi
  _BYTE *v147; // rdi
  _QWORD *v148; // rbx
  __int64 v149; // rdx
  __int64 v150; // rax
  __int64 v151; // rax
  __int64 v152; // rax
  int v153; // edx
  __int64 v154; // r10
  unsigned __int64 v155; // rax
  __int64 v156; // rax
  __int64 v157; // rax
  __int64 v158; // rsi
  __int64 v159; // r10
  __int64 *v160; // r14
  int v161; // r13d
  __int64 v162; // rsi
  __m128i *v163; // rdx
  unsigned __int64 v164; // rdi
  __m128i v165; // xmm0
  __int64 *v166; // rdx
  int v167; // r11d
  __int64 *v168; // r9
  __int64 v169; // rsi
  unsigned int v170; // ecx
  __int64 *v171; // rdi
  __int64 v172; // r8
  int v173; // eax
  int v174; // edi
  __int64 v175; // rdx
  __int64 v176; // rax
  __int64 v177; // rax
  unsigned __int64 v178; // rdx
  __int64 v179; // rax
  __int64 v180; // rdi
  unsigned __int64 v181; // rax
  unsigned __int64 v182; // rcx
  unsigned __int64 v183; // r14
  __int64 v184; // rdi
  __int64 *v185; // rbp
  __int64 *v186; // rdx
  unsigned __int64 v187; // r8
  __int64 v188; // rdx
  __m128i v189; // xmm0
  unsigned __int64 v190; // rsi
  __int64 *v191; // rcx
  _QWORD *v192; // rsi
  __int64 v193; // rdx
  __int64 *v194; // r13
  void *v195; // r15
  __int32 v196; // edx
  __int64 v197; // rax
  bool v198; // zf
  __int64 v199; // rdx
  __int64 *v200; // r11
  __int64 v201; // r8
  unsigned __int64 v202; // rdi
  __int64 v203; // rax
  unsigned __int64 v204; // rax
  __int64 v205; // rax
  _QWORD *v206; // rax
  __int64 v207; // rdx
  int v208; // r10d
  _QWORD *v209; // r12
  __int64 *v210; // r9
  __int64 v211; // r8
  _QWORD *jj; // rdx
  __int64 *v213; // rax
  int v214; // r11d
  unsigned int v215; // esi
  __int64 *v216; // rcx
  __int64 v217; // rdi
  int v218; // edx
  int v219; // edx
  unsigned int v220; // r10d
  __int64 v221; // rsi
  __int64 v222; // rax
  __int64 *v223; // r8
  __int64 v224; // r8
  __int64 *v225; // r8
  int v226; // eax
  __int64 v227; // r8
  unsigned int *v228; // rdx
  __int64 v229; // rax
  unsigned __int64 v230; // rax
  __int64 v231; // rax
  __int64 v232; // rax
  __int64 v233; // rsi
  __int64 v234; // r10
  __int64 *v235; // r14
  int v236; // r13d
  __int64 v237; // rsi
  __m128i *v238; // rdx
  unsigned __int64 v239; // rdi
  __m128i v240; // xmm0
  __int64 *v241; // rdx
  int i2; // r11d
  unsigned int v243; // edi
  __int64 *v244; // r8
  __int64 v245; // r9
  int v246; // edi
  unsigned __int64 v247; // rax
  __int64 v248; // rax
  __m128i *v249; // rax
  __m128i *v250; // r10
  __int64 v251; // rdx
  __int64 *v252; // r11
  int v253; // r9d
  __int64 v254; // rdx
  unsigned __int64 v255; // rsi
  __m128i v256; // xmm0
  __int64 *v257; // rax
  int v258; // r14d
  unsigned int v259; // esi
  __int64 *v260; // rdi
  __int64 v261; // r8
  int v262; // r13d
  int v263; // r9d
  unsigned int **v264; // r8
  unsigned __int64 v265; // rax
  __int64 v266; // rax
  __m128i *v267; // rax
  __m128i *v268; // r10
  __int64 v269; // rdx
  __int64 *v270; // r11
  int v271; // r9d
  __int64 v272; // rdx
  unsigned __int64 v273; // rsi
  __m128i v274; // xmm0
  __int64 *v275; // rax
  int v276; // r14d
  __int64 *v277; // r8
  unsigned int v278; // ecx
  __int64 *v279; // rsi
  __int64 v280; // rdi
  int v281; // r13d
  int v282; // r9d
  __int64 *v283; // r8
  unsigned __int64 v284; // rcx
  __int64 v285; // rax
  __int64 v286; // rcx
  _QWORD *i1; // rcx
  __int64 v288; // rcx
  _QWORD *kk; // rcx
  __int64 v290; // rdx
  __int64 v291; // rsi
  __int64 v292; // rsi
  __m128i *v293; // rdx
  unsigned __int64 v294; // rdi
  __m128i v295; // xmm0
  __int64 v296; // rsi
  __int64 v297; // rsi
  __m128i *v298; // rdx
  unsigned __int64 v299; // rdi
  __m128i v300; // xmm0
  __int64 v301; // rdx
  __int64 v302; // rdx
  unsigned __int64 v303; // rsi
  __m128i v304; // xmm0
  __m128i *v305; // rdx
  __int64 v306; // rdx
  __int64 v307; // rdx
  unsigned __int64 v308; // rsi
  __m128i v309; // xmm0
  __m128i *v310; // rdx
  int v311; // r10d
  unsigned int **v312; // rdi
  int v313; // eax
  __int64 v314; // rax
  int v315; // r10d
  __int64 *v316; // rdi
  int v317; // eax
  __int64 v318; // rax
  unsigned __int64 v319; // rax
  __int64 v320; // rax
  __m128i *v321; // rax
  __int64 v322; // rdi
  __int64 *v323; // r8
  int v324; // r9d
  __int64 v325; // rdi
  __m128i *v326; // rdx
  unsigned __int64 v327; // rsi
  __m128i v328; // xmm0
  __int64 *v329; // rdx
  int v330; // edi
  __int64 *v331; // r10
  __int64 v332; // r11
  int v333; // esi
  unsigned int **v334; // rdx
  int k; // eax
  unsigned int *v336; // r8
  unsigned __int64 v337; // rax
  __int64 v338; // rax
  __m128i *v339; // rax
  __int64 v340; // rdi
  __int64 v341; // r9
  __int64 *v342; // r8
  int v343; // r14d
  __int64 v344; // rdi
  __m128i *v345; // rdx
  unsigned __int64 v346; // rsi
  __m128i v347; // xmm0
  __int64 *v348; // rdx
  __int64 v349; // r13
  int v350; // ecx
  __int64 *v351; // rdi
  __int64 v352; // r10
  int v353; // esi
  __int64 *v354; // rdx
  int ii; // eax
  __int64 v356; // r8
  __int64 v357; // rax
  __m128i *v358; // rax
  __int64 v359; // rdi
  __int64 *v360; // r10
  int v361; // r9d
  __int64 v362; // rdi
  __m128i *v363; // rdx
  unsigned __int64 v364; // rsi
  __m128i v365; // xmm0
  __int64 *v366; // rdx
  __int64 v367; // r14
  int v368; // ecx
  __int64 *v369; // rdi
  __int64 v370; // r8
  int v371; // eax
  int m; // r12d
  __int64 v373; // rsi
  __int64 v374; // rax
  __m128i *v375; // rax
  __int64 v376; // rdi
  __int64 *v377; // r9
  int v378; // r13d
  __int64 v379; // rdi
  __m128i *v380; // rdx
  unsigned __int64 v381; // rsi
  __m128i si128; // xmm0
  __int64 *v383; // rdx
  int v384; // ecx
  __int64 *v385; // rdi
  __int64 v386; // r8
  int v387; // eax
  int j; // r12d
  unsigned int *v389; // rsi
  int v390; // r11d
  unsigned int **v391; // r9
  int v392; // r11d
  __int64 *v393; // r9
  __int64 v394; // rsi
  __int64 v395; // rsi
  __m128i *v396; // rdi
  unsigned __int64 v397; // rdx
  __m128i v398; // xmm0
  __int64 v399; // rsi
  __int64 v400; // rsi
  __m128i *v401; // rdi
  unsigned __int64 v402; // rdx
  __m128i v403; // xmm0
  __int64 v404; // rsi
  __int64 v405; // rsi
  __m128i *v406; // rdi
  unsigned __int64 v407; // rdx
  __m128i v408; // xmm0
  __int64 v409; // rsi
  __int64 v410; // rsi
  __m128i *v411; // rdi
  unsigned __int64 v412; // rdx
  __m128i v413; // xmm0
  int v414; // r12d
  __int64 *v415; // r11
  int v416; // r13d
  __int64 *v417; // r12
  int v418; // eax
  int v419; // r13d
  __int64 *v420; // r11
  int v421; // eax
  int v422; // r11d
  __int64 *v423; // r10
  int v424; // r12d
  int v425; // r12d
  __int64 v426; // [rsp+20h] [rbp-D8h]
  __int64 v427; // [rsp+30h] [rbp-C8h] BYREF
  __m128 *v428; // [rsp+38h] [rbp-C0h] BYREF
  unsigned __int64 v429; // [rsp+40h] [rbp-B8h]
  __int64 *v430; // [rsp+48h] [rbp-B0h]
  __int64 *v431; // [rsp+50h] [rbp-A8h]
  __int64 *v432; // [rsp+58h] [rbp-A0h]
  __int64 *v433; // [rsp+68h] [rbp-90h] BYREF
  void *v434; // [rsp+70h] [rbp-88h] BYREF
  __int64 v435; // [rsp+78h] [rbp-80h] BYREF
  __m128 v436; // [rsp+80h] [rbp-78h] BYREF
  char v437; // [rsp+90h] [rbp-68h]
  _BYTE n[24]; // [rsp+A0h] [rbp-58h] BYREF
  __int64 v439; // [rsp+B8h] [rbp-40h]

  LODWORD(v427) = a5;
  v433 = nullptr;
  *a13 = nullptr;
  v19 = (a4 & 0xFFFFFFFB) == 1;
  if ( a6 )
    v19 &= (*(_DWORD *)(a6 + 4) & 0xFFFFFFFB) == 1;
  if ( !v19 )
  {
    if ( !(unsigned __int8)sub_1FDE2A0(a1, a2, (size_t)a3, a8, a9, (__int64 *)&v433) )
      goto LABEL_5;
    v100 = 67;
    v101 = "module file has a different size or modification time than expected";
LABEL_63:
    v98 = 3;
    sub_99BDC0(a14, 0, a14[1], v101, v100);
    return v98;
  }
  if ( (unsigned __int8)sub_1FDE2A0(a1, a2, (size_t)a3, a8, 0, (__int64 *)&v433) )
  {
    v100 = 46;
    v101 = "module file has a different size than expected";
    goto LABEL_63;
  }
LABEL_5:
  v20 = v433;
  v21 = v433;
  if ( !v433 )
  {
    v98 = 2;
    sub_99BDC0(a14, 0, a14[1], "module file not found", 0x15u);
    return v98;
  }
  while ( 1 )
  {
    v22 = v21[1];
    if ( !v22 )
      break;
    v22 &= 0xFFFFFFFFFFFFFFF8LL;
    v23 = v21[1] & 4;
    v21 = (__int64 *)v22;
    if ( !v23 || !v22 )
      goto LABEL_9;
  }
  v21 = nullptr;
LABEL_9:
  v24 = *(_DWORD *)(a1 + 112);
  v25 = *(_QWORD *)(a1 + 96);
  if ( v24 )
  {
    v26 = v24 - 1;
    v27 = v26 & (((unsigned int)v22 >> 4) ^ ((unsigned int)v22 >> 9));
    v28 = (__int64 *)(v25 + 16LL * v27);
    v29 = *v28;
    if ( v21 != (__int64 *)*v28 )
    {
      v153 = 1;
      if ( v29 == -4096 )
        goto LABEL_18;
      while ( 1 )
      {
        v29 = (unsigned int)(v153 + 1);
        v27 = v26 & (v27 + v153);
        v28 = (__int64 *)(v25 + 16LL * v27);
        v154 = *v28;
        if ( (__int64 *)*v28 == v21 )
          break;
        v153 = v29;
        if ( v154 == -4096 )
          goto LABEL_18;
      }
    }
    v30 = (unsigned int *)v28[1];
    if ( v30 )
    {
      if ( a4 )
        goto LABEL_98;
      v31 = v433;
      v28 = *((__int64 **)v30 + 2);
      for ( i = v433[1]; i; i = *(_QWORD *)(v33 + 8) )
      {
        if ( (i & 4) == 0 )
          break;
        v33 = i & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v33 )
          break;
        v31 = (__int64 *)v33;
      }
      if ( v28 == (__int64 *)*v31 )
      {
        v428 = (__m128 *)v433;
        if ( !v28
          || (v21 = *((__int64 **)v30 + 1), v126 = memcmp(v31 + 4, v21, (size_t)v28), v20 = (__int64 *)v428, !v126) )
        {
LABEL_98:
          v98 = 3;
          if ( (unsigned __int8)sub_1FDECF0(
                                  a14,
                                  (__int64)v21,
                                  (__int64)v28,
                                  (__int64)v20,
                                  v25,
                                  v29,
                                  (__int128)_mm_loadu_si128((const __m128i *)v30 + 14),
                                  v30[60],
                                  (__int128)_mm_loadu_si128(&a10),
                                  a11) )
            return v98;
          *a13 = v30;
          if ( !a6 )
          {
            if ( !*((_BYTE *)v30 + 408) )
              v30[203] = v427;
            *((_BYTE *)v30 + 408) = 1;
            return 0;
          }
          v129 = v30[814];
          v130 = (__int64)(v30 + 810);
          v131 = *((__int64 **)v30 + 405);
          if ( !(_DWORD)v129 )
            goto LABEL_460;
          v127 = (unsigned int)(v129 - 1);
          v132 = v127 & (((unsigned int)a6 >> 9) ^ ((unsigned int)a6 >> 4));
          v133 = &v131[v132];
          v134 = *v133;
          if ( a6 == *v133 )
          {
LABEL_102:
            sub_1F000E0((__m128 *)n, v133, &v131[v129], v130, 1);
LABEL_103:
            v137 = *(unsigned int *)(a6 + 3296);
            v138 = a6 + 3280;
            v139 = *(__int64 **)(a6 + 3280);
            if ( !(_DWORD)v137 )
              goto LABEL_439;
            v135 = (unsigned int)(v137 - 1);
            v140 = v135 & (((unsigned int)v30 >> 9) ^ ((unsigned int)v30 >> 4));
            v141 = (unsigned int **)&v139[v140];
            v142 = *v141;
            if ( v30 == *v141 )
            {
LABEL_105:
              v143 = &v139[v137];
              v98 = 0;
              sub_1F000E0((__m128 *)n, v141, v143, v138, 1);
              return v98;
            }
            v311 = 1;
            v312 = nullptr;
            if ( v142 == (unsigned int *)-4096LL )
              goto LABEL_372;
            while ( 1 )
            {
              if ( !v312 && v142 == (unsigned int *)-8192LL )
                v312 = v141;
              v136 = (unsigned int)(v311 + 1);
              v140 = v135 & (v311 + v140);
              v141 = (unsigned int **)&v139[v140];
              v142 = *v141;
              if ( v30 == *v141 )
                goto LABEL_105;
              if ( v142 == (unsigned int *)-4096LL )
                break;
              ++v311;
            }
            if ( !v312 )
LABEL_372:
              v312 = v141;
            v313 = *(_DWORD *)(a6 + 3288) + 1;
            if ( 4 * v313 < (unsigned int)(3 * v137) )
            {
              if ( (int)v137 - *(_DWORD *)(a6 + 3292) - v313 > (unsigned int)v137 >> 3 )
              {
LABEL_375:
                v198 = *v312 + 1024 == nullptr;
                *(_DWORD *)(a6 + 3288) = v313;
                if ( !v198 )
                  --*(_DWORD *)(a6 + 3292);
                *v312 = v30;
                sub_1F000E0((__m128 *)n, v312, &v139[v137], v138, 1);
                v314 = *(unsigned int *)(a6 + 3312);
                if ( v314 + 1 > (unsigned __int64)*(unsigned int *)(a6 + 3316) )
                {
                  sub_2237220(a6 + 3304, a6 + 3320, v314 + 1, 8);
                  v314 = *(unsigned int *)(a6 + 3312);
                }
                v98 = 0;
                *(_QWORD *)(*(_QWORD *)(a6 + 3304) + 8 * v314) = v30;
                ++*(_DWORD *)(a6 + 3312);
                return v98;
              }
              v427 = a6 + 3280;
              v374 = (((((((((v135 | (v135 >> 1)) >> 2) | v135 | (v135 >> 1)) >> 4)
                        | ((v135 | (v135 >> 1)) >> 2)
                        | v135
                        | (v135 >> 1)) >> 8)
                      | ((((v135 | (v135 >> 1)) >> 2) | v135 | (v135 >> 1)) >> 4)
                      | ((v135 | (v135 >> 1)) >> 2)
                      | v135
                      | (v135 >> 1)) >> 16)
                    | ((((((v135 | (v135 >> 1)) >> 2) | v135 | (v135 >> 1)) >> 4)
                      | ((v135 | (v135 >> 1)) >> 2)
                      | v135
                      | (v135 >> 1)) >> 8)
                    | ((((v135 | (v135 >> 1)) >> 2) | v135 | (v135 >> 1)) >> 4)
                    | ((v135 | (v135 >> 1)) >> 2)
                    | v135
                    | (v135 >> 1))
                   + 1;
              if ( (unsigned int)v374 < 0x40 )
                LODWORD(v374) = 64;
              *(_DWORD *)(a6 + 3296) = v374;
              v375 = (__m128i *)sub_22300B0(8LL * (unsigned int)v374, 8, 64, v138, v135, v136);
              v138 = v427;
              *(_QWORD *)(a6 + 3280) = v375;
              if ( v139 )
              {
                v376 = *(unsigned int *)(a6 + 3296);
                *(_QWORD *)(a6 + 3288) = 0;
                v428 = (__m128 *)(8 * v137);
                v377 = &v139[v137];
                v378 = v376;
                v379 = 8 * v376;
                if ( v375 != (__m128i *)&v375->m128i_i8[v379] )
                {
                  v380 = v375;
                  v381 = ((unsigned __int64)(v379 - 8) >> 3) + 1;
                  if ( v379 == 8 )
                    goto LABEL_514;
                  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
                  do
                    *v380++ = si128;
                  while ( v380 != &v375[v381 >> 1] );
                  v380 = (__m128i *)((char *)v375 + 8 * (v381 & 0xFFFFFFFFFFFFFFFELL));
                  if ( (v381 & 0xFFFFFFFFFFFFFFFELL) != v381 )
LABEL_514:
                    v380->m128i_i64[0] = -4096;
                }
                v430 = (__int64 *)v138;
                v383 = v139;
                LODWORD(v427) = v378 - 1;
                do
                {
                  v169 = *v383;
                  if ( *v383 != -4096 && v169 != -8192 )
                  {
                    if ( !v378 )
                      goto LABEL_719;
                    v384 = v427 & (((unsigned int)v169 >> 9) ^ ((unsigned int)v169 >> 4));
                    v385 = &v375->m128i_i64[v384];
                    v386 = *v385;
                    if ( v169 != *v385 )
                    {
                      v422 = 1;
                      v423 = nullptr;
                      if ( v386 != -4096 )
                      {
                        while ( 1 )
                        {
                          if ( v386 == -8192 && !v423 )
                            v423 = v385;
                          v384 = v427 & (v422 + v384);
                          LODWORD(v429) = v422 + 1;
                          v385 = &v375->m128i_i64[v384];
                          v386 = *v385;
                          if ( v169 == *v385 )
                            break;
                          if ( v386 == -4096 )
                          {
                            if ( v423 )
                              v385 = v423;
                            break;
                          }
                          v422 = v429;
                        }
                      }
                    }
                    *v385 = v169;
                    ++*(_DWORD *)(a6 + 3288);
                  }
                  ++v383;
                }
                while ( v377 != v383 );
                v427 = (__int64)v430;
                operator delete(v139, v428, 8);
                v138 = (__int64)v430;
              }
              else
              {
                v409 = *(unsigned int *)(a6 + 3296);
                *(_QWORD *)(a6 + 3288) = 0;
                v410 = 8 * v409;
                if ( v375 != (__m128i *)&v375->m128i_i8[v410] )
                {
                  v411 = v375;
                  v412 = ((unsigned __int64)(v410 - 8) >> 3) + 1;
                  if ( v410 == 8 )
                    goto LABEL_574;
                  v413 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
                  do
                    *v411++ = v413;
                  while ( v411 != &v375[v412 >> 1] );
                  v375 = (__m128i *)((char *)v375 + 8 * (v412 & 0xFFFFFFFFFFFFFFFELL));
                  if ( (v412 & 0xFFFFFFFFFFFFFFFELL) != v412 )
LABEL_574:
                    v375->m128i_i64[0] = -4096;
                }
              }
              v137 = *(unsigned int *)(a6 + 3296);
              if ( !(_DWORD)v137 )
                goto LABEL_718;
              v139 = *(__int64 **)(a6 + 3280);
              v387 = 1;
              v334 = nullptr;
              for ( j = (v137 - 1) & (((unsigned int)v30 >> 9) ^ ((unsigned int)v30 >> 4)); ; j = (v137 - 1) & v425 )
              {
                v312 = (unsigned int **)&v139[j];
                v389 = *v312;
                if ( v30 == *v312 )
                  break;
                if ( v389 == (unsigned int *)-4096LL )
                  goto LABEL_527;
                if ( v389 != (unsigned int *)-8192LL || v334 )
                  v312 = v334;
                v425 = v387 + j;
                v334 = v312;
                ++v387;
              }
            }
            else
            {
LABEL_439:
              v427 = a6 + 3280;
              v319 = (((((((unsigned int)(2 * v137 - 1) | ((unsigned __int64)(unsigned int)(2 * v137 - 1) >> 1)) >> 2)
                       | (unsigned int)(2 * v137 - 1)
                       | ((unsigned __int64)(unsigned int)(2 * v137 - 1) >> 1)) >> 4)
                     | (((unsigned int)(2 * v137 - 1) | ((unsigned __int64)(unsigned int)(2 * v137 - 1) >> 1)) >> 2)
                     | (unsigned int)(2 * v137 - 1)
                     | ((unsigned __int64)(unsigned int)(2 * v137 - 1) >> 1)) >> 8)
                   | (((((unsigned int)(2 * v137 - 1) | ((unsigned __int64)(unsigned int)(2 * v137 - 1) >> 1)) >> 2)
                     | (unsigned int)(2 * v137 - 1)
                     | ((unsigned __int64)(unsigned int)(2 * v137 - 1) >> 1)) >> 4)
                   | (((unsigned int)(2 * v137 - 1) | ((unsigned __int64)(unsigned int)(2 * v137 - 1) >> 1)) >> 2)
                   | (unsigned int)(2 * v137 - 1)
                   | ((unsigned __int64)(unsigned int)(2 * v137 - 1) >> 1);
              v320 = ((v319 >> 16) | v319) + 1;
              if ( (unsigned int)v320 < 0x40 )
                LODWORD(v320) = 64;
              *(_DWORD *)(a6 + 3296) = v320;
              v321 = (__m128i *)sub_22300B0(8LL * (unsigned int)v320, 8, 64, v138, v135, v136);
              v138 = v427;
              *(_QWORD *)(a6 + 3280) = v321;
              if ( v139 )
              {
                v322 = *(unsigned int *)(a6 + 3296);
                *(_QWORD *)(a6 + 3288) = 0;
                v428 = (__m128 *)(8 * v137);
                v323 = &v139[v137];
                v324 = v322;
                v325 = 8 * v322;
                if ( v321 != (__m128i *)&v321->m128i_i8[v325] )
                {
                  v326 = v321;
                  v327 = ((unsigned __int64)(v325 - 8) >> 3) + 1;
                  if ( v325 == 8 )
                    goto LABEL_447;
                  v328 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
                  do
                    *v326++ = v328;
                  while ( v326 != &v321[v327 >> 1] );
                  v326 = (__m128i *)((char *)v321 + 8 * (v327 & 0xFFFFFFFFFFFFFFFELL));
                  if ( (v327 & 0xFFFFFFFFFFFFFFFELL) != v327 )
LABEL_447:
                    v326->m128i_i64[0] = -4096;
                }
                v329 = v139;
                for ( LODWORD(v427) = v324 - 1; v323 != v329; ++v329 )
                {
                  v169 = *v329;
                  if ( *v329 != -8192 && v169 != -4096 )
                  {
                    if ( !v324 )
                      goto LABEL_719;
                    v330 = v427 & (((unsigned int)v169 >> 9) ^ ((unsigned int)v169 >> 4));
                    v331 = &v321->m128i_i64[v330];
                    v332 = *v331;
                    if ( v169 != *v331 )
                    {
                      v416 = 1;
                      v417 = nullptr;
                      if ( v332 != -4096 )
                      {
                        while ( 1 )
                        {
                          if ( v332 == -8192 && !v417 )
                            v417 = v331;
                          v330 = v427 & (v416 + v330);
                          LODWORD(v429) = v416 + 1;
                          v331 = &v321->m128i_i64[v330];
                          v332 = *v331;
                          if ( v169 == *v331 )
                            break;
                          if ( v332 == -4096 )
                          {
                            if ( v417 )
                              v331 = v417;
                            break;
                          }
                          v416 = v429;
                        }
                      }
                    }
                    *v331 = v169;
                    ++*(_DWORD *)(a6 + 3288);
                  }
                }
                v427 = v138;
                operator delete(v139, v428, 8);
                v138 = v427;
              }
              else
              {
                v394 = *(unsigned int *)(a6 + 3296);
                *(_QWORD *)(a6 + 3288) = 0;
                v395 = 8 * v394;
                if ( v321 != (__m128i *)&v321->m128i_i8[v395] )
                {
                  v396 = v321;
                  v397 = ((unsigned __int64)(v395 - 8) >> 3) + 1;
                  if ( v395 == 8 )
                    goto LABEL_552;
                  v398 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
                  do
                    *v396++ = v398;
                  while ( &v321[v397 >> 1] != v396 );
                  v321 = (__m128i *)((char *)v321 + 8 * (v397 & 0xFFFFFFFFFFFFFFFELL));
                  if ( (v397 & 0xFFFFFFFFFFFFFFFELL) != v397 )
LABEL_552:
                    v321->m128i_i64[0] = -4096;
                }
              }
              v137 = *(unsigned int *)(a6 + 3296);
              if ( !(_DWORD)v137 )
                goto LABEL_718;
              v333 = 1;
              v139 = *(__int64 **)(a6 + 3280);
              v334 = nullptr;
              for ( k = (v137 - 1) & (((unsigned int)v30 >> 9) ^ ((unsigned int)v30 >> 4)); ; k = (v137 - 1) & v418 )
              {
                v312 = (unsigned int **)&v139[k];
                v336 = *v312;
                if ( v30 == *v312 )
                  break;
                if ( v336 == (unsigned int *)-4096LL )
                {
LABEL_527:
                  v313 = *(_DWORD *)(a6 + 3288) + 1;
                  if ( v334 )
                    v312 = v334;
                  goto LABEL_375;
                }
                if ( v334 || v336 != (unsigned int *)-8192LL )
                  v312 = v334;
                v418 = v333 + k;
                v334 = v312;
                ++v333;
              }
            }
            v313 = *(_DWORD *)(a6 + 3288) + 1;
            goto LABEL_375;
          }
          v315 = 1;
          v316 = nullptr;
          if ( v134 == -4096 )
            goto LABEL_381;
          while ( 1 )
          {
            if ( v134 == -8192 && !v316 )
              v316 = v133;
            v128 = (unsigned int)(v315 + 1);
            v132 = v127 & (v315 + v132);
            v133 = &v131[v132];
            v134 = *v133;
            if ( a6 == *v133 )
              goto LABEL_102;
            if ( v134 == -4096 )
              break;
            ++v315;
          }
          if ( !v316 )
LABEL_381:
            v316 = v133;
          v317 = v30[812] + 1;
          if ( 4 * v317 < (unsigned int)(3 * v129) )
          {
            if ( (unsigned int)v129 - v30[813] - v317 > (unsigned int)v129 >> 3 )
            {
LABEL_384:
              v198 = *v316 == -4096;
              v30[812] = v317;
              if ( !v198 )
                --v30[813];
              *v316 = a6;
              sub_1F000E0((__m128 *)n, v316, &v131[v129], v130, 1);
              v318 = v30[818];
              if ( v318 + 1 > (unsigned __int64)v30[819] )
              {
                sub_2237220(v30 + 816, v30 + 820, v318 + 1, 8);
                v318 = v30[818];
              }
              *(_QWORD *)(*((_QWORD *)v30 + 408) + 8 * v318) = a6;
              ++v30[818];
              goto LABEL_103;
            }
            v427 = (__int64)(v30 + 810);
            v357 = (((((((((v127 | (v127 >> 1)) >> 2) | v127 | (v127 >> 1)) >> 4)
                      | ((v127 | (v127 >> 1)) >> 2)
                      | v127
                      | (v127 >> 1)) >> 8)
                    | ((((v127 | (v127 >> 1)) >> 2) | v127 | (v127 >> 1)) >> 4)
                    | ((v127 | (v127 >> 1)) >> 2)
                    | v127
                    | (v127 >> 1)) >> 16)
                  | ((((((v127 | (v127 >> 1)) >> 2) | v127 | (v127 >> 1)) >> 4)
                    | ((v127 | (v127 >> 1)) >> 2)
                    | v127
                    | (v127 >> 1)) >> 8)
                  | ((((v127 | (v127 >> 1)) >> 2) | v127 | (v127 >> 1)) >> 4)
                  | ((v127 | (v127 >> 1)) >> 2)
                  | v127
                  | (v127 >> 1))
                 + 1;
            if ( (unsigned int)v357 < 0x40 )
              LODWORD(v357) = 64;
            v30[814] = v357;
            v358 = (__m128i *)sub_22300B0(8LL * (unsigned int)v357, 8, 64, v130, v127, v128);
            v130 = v427;
            *((_QWORD *)v30 + 405) = v358;
            if ( v131 )
            {
              v359 = v30[814];
              *((_QWORD *)v30 + 406) = 0;
              v428 = (__m128 *)(8 * v129);
              v360 = &v131[v129];
              v361 = v359;
              v362 = 8 * v359;
              if ( v358 != (__m128i *)&v358->m128i_i8[v362] )
              {
                v363 = v358;
                v364 = ((unsigned __int64)(v362 - 8) >> 3) + 1;
                if ( v362 == 8 )
                  goto LABEL_490;
                v365 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
                do
                  *v363++ = v365;
                while ( v363 != &v358[v364 >> 1] );
                v363 = (__m128i *)((char *)v358 + 8 * (v364 & 0xFFFFFFFFFFFFFFFELL));
                if ( (v364 & 0xFFFFFFFFFFFFFFFELL) != v364 )
LABEL_490:
                  v363->m128i_i64[0] = -4096;
              }
              v366 = v131;
              v367 = v130;
              LODWORD(v427) = v361 - 1;
              do
              {
                v169 = *v366;
                if ( *v366 != -8192 && v169 != -4096 )
                {
                  if ( !v361 )
                    goto LABEL_719;
                  v368 = v427 & (((unsigned int)v169 >> 9) ^ ((unsigned int)v169 >> 4));
                  v369 = &v358->m128i_i64[v368];
                  v370 = *v369;
                  if ( v169 != *v369 )
                  {
                    v419 = 1;
                    v420 = nullptr;
                    if ( v370 != -4096 )
                    {
                      while ( 1 )
                      {
                        if ( !v420 && v370 == -8192 )
                          v420 = v369;
                        v368 = v427 & (v419 + v368);
                        LODWORD(v429) = v419 + 1;
                        v369 = &v358->m128i_i64[v368];
                        v370 = *v369;
                        if ( v169 == *v369 )
                          break;
                        if ( v370 == -4096 )
                        {
                          if ( v420 )
                            v369 = v420;
                          break;
                        }
                        v419 = v429;
                      }
                    }
                  }
                  *v369 = v169;
                  ++v30[812];
                }
                ++v366;
              }
              while ( v360 != v366 );
              v427 = v367;
              operator delete(v131, v428, 8);
              v130 = v367;
            }
            else
            {
              v404 = v30[814];
              *((_QWORD *)v30 + 406) = 0;
              v405 = 8 * v404;
              if ( v358 != (__m128i *)&v358->m128i_i8[v405] )
              {
                v406 = v358;
                v407 = ((unsigned __int64)(v405 - 8) >> 3) + 1;
                if ( v405 == 8 )
                  goto LABEL_568;
                v408 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
                do
                  *v406++ = v408;
                while ( v406 != &v358[v407 >> 1] );
                v358 = (__m128i *)((char *)v358 + 8 * (v407 & 0xFFFFFFFFFFFFFFFELL));
                if ( (v407 & 0xFFFFFFFFFFFFFFFELL) != v407 )
LABEL_568:
                  v358->m128i_i64[0] = -4096;
              }
            }
            v129 = v30[814];
            if ( (_DWORD)v129 )
            {
              v131 = *((__int64 **)v30 + 405);
              v371 = 1;
              v354 = nullptr;
              for ( m = (v129 - 1) & (((unsigned int)a6 >> 9) ^ ((unsigned int)a6 >> 4)); ; m = (v129 - 1) & v424 )
              {
                v316 = &v131[m];
                v373 = *v316;
                if ( a6 == *v316 )
                  break;
                if ( v373 == -4096 )
                  goto LABEL_503;
                if ( v373 != -8192 || v354 )
                  v316 = v354;
                v424 = v371 + m;
                v354 = v316;
                ++v371;
              }
LABEL_481:
              v317 = v30[812] + 1;
              goto LABEL_384;
            }
          }
          else
          {
LABEL_460:
            v427 = (__int64)(v30 + 810);
            v337 = (((((((unsigned int)(2 * v129 - 1) | ((unsigned __int64)(unsigned int)(2 * v129 - 1) >> 1)) >> 2)
                     | (unsigned int)(2 * v129 - 1)
                     | ((unsigned __int64)(unsigned int)(2 * v129 - 1) >> 1)) >> 4)
                   | (((unsigned int)(2 * v129 - 1) | ((unsigned __int64)(unsigned int)(2 * v129 - 1) >> 1)) >> 2)
                   | (unsigned int)(2 * v129 - 1)
                   | ((unsigned __int64)(unsigned int)(2 * v129 - 1) >> 1)) >> 8)
                 | (((((unsigned int)(2 * v129 - 1) | ((unsigned __int64)(unsigned int)(2 * v129 - 1) >> 1)) >> 2)
                   | (unsigned int)(2 * v129 - 1)
                   | ((unsigned __int64)(unsigned int)(2 * v129 - 1) >> 1)) >> 4)
                 | (((unsigned int)(2 * v129 - 1) | ((unsigned __int64)(unsigned int)(2 * v129 - 1) >> 1)) >> 2)
                 | (unsigned int)(2 * v129 - 1)
                 | ((unsigned __int64)(unsigned int)(2 * v129 - 1) >> 1);
            v338 = ((v337 >> 16) | v337) + 1;
            if ( (unsigned int)v338 < 0x40 )
              LODWORD(v338) = 64;
            v30[814] = v338;
            v339 = (__m128i *)sub_22300B0(8LL * (unsigned int)v338, 8, 64, v130, v127, v128);
            v130 = v427;
            *((_QWORD *)v30 + 405) = v339;
            if ( v131 )
            {
              v340 = v30[814];
              v341 = 8 * v129;
              *((_QWORD *)v30 + 406) = 0;
              v342 = &v131[v129];
              v343 = v340;
              v344 = 8 * v340;
              if ( v339 != (__m128i *)&v339->m128i_i8[v344] )
              {
                v345 = v339;
                v346 = ((unsigned __int64)(v344 - 8) >> 3) + 1;
                if ( v344 == 8 )
                  goto LABEL_468;
                v347 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
                do
                  *v345++ = v347;
                while ( &v339[v346 >> 1] != v345 );
                v345 = (__m128i *)((char *)v339 + 8 * (v346 & 0xFFFFFFFFFFFFFFFELL));
                if ( (v346 & 0xFFFFFFFFFFFFFFFELL) != v346 )
LABEL_468:
                  v345->m128i_i64[0] = -4096;
              }
              v348 = v131;
              v349 = v130;
              LODWORD(v427) = v343 - 1;
              if ( v131 != v342 )
              {
                do
                {
                  v169 = *v348;
                  if ( *v348 != -8192 && v169 != -4096 )
                  {
                    if ( !v343 )
                      goto LABEL_719;
                    v350 = v427 & (((unsigned int)v169 >> 9) ^ ((unsigned int)v169 >> 4));
                    v351 = &v339->m128i_i64[v350];
                    v352 = *v351;
                    if ( v169 != *v351 )
                    {
                      v414 = 1;
                      v415 = nullptr;
                      if ( v352 != -4096 )
                      {
                        while ( 1 )
                        {
                          if ( v352 == -8192 && !v415 )
                            v415 = v351;
                          v350 = v427 & (v414 + v350);
                          LODWORD(v428) = v414 + 1;
                          v351 = &v339->m128i_i64[v350];
                          v352 = *v351;
                          if ( v169 == *v351 )
                            break;
                          if ( v352 == -4096 )
                          {
                            if ( v415 )
                              v351 = v415;
                            break;
                          }
                          v414 = (int)v428;
                        }
                      }
                    }
                    *v351 = v169;
                    ++v30[812];
                  }
                  ++v348;
                }
                while ( v342 != v348 );
                v130 = v349;
              }
              v427 = v130;
              operator delete(v131, v341, 8);
              v130 = v427;
            }
            else
            {
              v399 = v30[814];
              *((_QWORD *)v30 + 406) = 0;
              v400 = 8 * v399;
              if ( v339 != (__m128i *)&v339->m128i_i8[v400] )
              {
                v401 = v339;
                v402 = ((unsigned __int64)(v400 - 8) >> 3) + 1;
                if ( v400 == 8 )
                  goto LABEL_558;
                v403 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
                do
                  *v401++ = v403;
                while ( v401 != &v339[v402 >> 1] );
                v339 = (__m128i *)((char *)v339 + 8 * (v402 & 0xFFFFFFFFFFFFFFFELL));
                if ( (v402 & 0xFFFFFFFFFFFFFFFELL) != v402 )
LABEL_558:
                  v339->m128i_i64[0] = -4096;
              }
            }
            v129 = v30[814];
            if ( (_DWORD)v129 )
            {
              v131 = *((__int64 **)v30 + 405);
              v353 = 1;
              v354 = nullptr;
              for ( ii = (v129 - 1) & (((unsigned int)a6 >> 9) ^ ((unsigned int)a6 >> 4)); ; ii = (v129 - 1) & v421 )
              {
                v316 = &v131[ii];
                v356 = *v316;
                if ( a6 == *v316 )
                  break;
                if ( v356 == -4096 )
                {
LABEL_503:
                  v317 = v30[812] + 1;
                  if ( v354 )
                    v316 = v354;
                  goto LABEL_384;
                }
                if ( v354 || v356 != -8192 )
                  v316 = v354;
                v421 = v353 + ii;
                v354 = v316;
                ++v353;
              }
              goto LABEL_481;
            }
          }
LABEL_716:
          ++v30[812];
          BUG();
        }
      }
    }
  }
LABEL_18:
  v428 = (__m128 *)v20;
  v34 = (unsigned int *)operator new(0xD88u);
  v35 = (__int64 *)v428;
  v36 = (__int64 *)(v34 + 6);
  v30 = v34;
  v34[1] = a4;
  v34 += 14;
  *((_QWORD *)v34 - 6) = v36;
  *((_QWORD *)v34 - 5) = 0;
  *((_BYTE *)v34 - 32) = 0;
  *((_QWORD *)v30 + 5) = v34;
  *((_QWORD *)v30 + 9) = v30 + 22;
  *((_QWORD *)v30 + 13) = v30 + 30;
  *((_QWORD *)v30 + 17) = v30 + 38;
  *((_QWORD *)v30 + 22) = v30 + 48;
  *((_QWORD *)v30 + 33) = v30 + 70;
  *((_QWORD *)v30 + 27) = v35;
  *((_QWORD *)v30 + 34) = 0x600000000LL;
  *((_QWORD *)v30 + 42) = v30 + 88;
  *((_QWORD *)v30 + 43) = 0x600000000LL;
  *((_QWORD *)v30 + 6) = 0;
  *((_BYTE *)v30 + 56) = 0;
  *((_QWORD *)v30 + 10) = 0;
  *((_BYTE *)v30 + 88) = 0;
  *((_QWORD *)v30 + 14) = 0;
  *((_BYTE *)v30 + 120) = 0;
  *((_QWORD *)v30 + 18) = 0;
  *((_BYTE *)v30 + 152) = 0;
  v30[42] = 0;
  *((_QWORD *)v30 + 23) = 0;
  *((_BYTE *)v30 + 192) = 0;
  v30[52] = 0;
  *((_OWORD *)v30 + 14) = 0;
  v30[60] = 0;
  *(_OWORD *)(v30 + 61) = 0;
  v30[65] = 0;
  v30[82] = 0;
  v30[100] = 0;
  *((_QWORD *)v30 + 66) = v30 + 136;
  v30[103] = a7;
  *((_QWORD *)v30 + 62) = 0x200000000LL;
  *((_QWORD *)v30 + 112) = 0x200000000LL;
  *((_BYTE *)v30 + 408) = 0;
  *((_QWORD *)v30 + 52) = 0;
  *((_QWORD *)v30 + 53) = 0;
  *((_QWORD *)v30 + 54) = 0;
  *((_QWORD *)v30 + 55) = 0;
  *((_QWORD *)v30 + 56) = 0;
  *((_QWORD *)v30 + 57) = 0;
  *((_QWORD *)v30 + 58) = 0;
  *((_QWORD *)v30 + 59) = 0;
  *((_QWORD *)v30 + 60) = 0;
  *((_QWORD *)v30 + 61) = 0;
  *((_QWORD *)v30 + 63) = 0;
  *((_QWORD *)v30 + 64) = 0;
  *((_QWORD *)v30 + 65) = 0;
  *((_QWORD *)v30 + 67) = 0x800000000LL;
  *((_QWORD *)v30 + 100) = 0;
  *((_QWORD *)v30 + 101) = 0;
  v30[204] = 0;
  *((_QWORD *)v30 + 103) = 0;
  *((_QWORD *)v30 + 104) = 0;
  *((_QWORD *)v30 + 105) = 0;
  *((_QWORD *)v30 + 106) = 0;
  *((_QWORD *)v30 + 107) = 0;
  *((_QWORD *)v30 + 108) = 0;
  *((_QWORD *)v30 + 109) = 0;
  *((_QWORD *)v30 + 110) = 0;
  *((_QWORD *)v30 + 111) = 0;
  *((_QWORD *)v30 + 113) = 0;
  *((_QWORD *)v30 + 116) = v30 + 236;
  *((_QWORD *)v30 + 169) = v30 + 342;
  *((_QWORD *)v30 + 165) = 0x200000000LL;
  *((_QWORD *)v30 + 114) = 0;
  *((_QWORD *)v30 + 115) = 0;
  *((_QWORD *)v30 + 117) = 0x800000000LL;
  *((_QWORD *)v30 + 150) = 0;
  *((_QWORD *)v30 + 151) = 0;
  *((_QWORD *)v30 + 152) = 0;
  *((_QWORD *)v30 + 153) = 0;
  *((_QWORD *)v30 + 154) = 0;
  *((_QWORD *)v30 + 155) = 0;
  *((_QWORD *)v30 + 156) = 0;
  *((_QWORD *)v30 + 157) = 0;
  *((_QWORD *)v30 + 158) = 0;
  v30[318] = 0;
  *((_QWORD *)v30 + 160) = 0;
  *((_QWORD *)v30 + 161) = 0;
  *((_QWORD *)v30 + 162) = 0;
  *((_QWORD *)v30 + 163) = 0;
  *((_QWORD *)v30 + 164) = 0;
  *((_QWORD *)v30 + 166) = 0;
  *((_QWORD *)v30 + 167) = 0;
  *((_QWORD *)v30 + 168) = 0;
  *((_QWORD *)v30 + 170) = 0x800000000LL;
  *((_QWORD *)v30 + 203) = 0;
  *((_QWORD *)v30 + 204) = 0;
  *((_QWORD *)v30 + 205) = 0;
  v30[412] = 0;
  *((_QWORD *)v30 + 207) = 0;
  *((_QWORD *)v30 + 208) = 0;
  v30[418] = 0;
  *((_QWORD *)v30 + 210) = 0;
  *((_QWORD *)v30 + 225) = v30 + 454;
  *((_QWORD *)v30 + 264) = v30 + 532;
  *((_QWORD *)v30 + 221) = 0x200000000LL;
  *((_QWORD *)v30 + 265) = 0x200000000LL;
  *((_QWORD *)v30 + 273) = 0x200000000LL;
  *((_QWORD *)v30 + 211) = 0;
  *((_QWORD *)v30 + 212) = 0;
  *((_QWORD *)v30 + 213) = 0;
  *((_QWORD *)v30 + 214) = 0;
  *((_QWORD *)v30 + 215) = 0;
  *((_QWORD *)v30 + 216) = 0;
  *((_QWORD *)v30 + 217) = 0;
  *((_QWORD *)v30 + 218) = 0;
  *((_QWORD *)v30 + 219) = 0;
  *((_QWORD *)v30 + 220) = 0;
  *((_QWORD *)v30 + 222) = 0;
  *((_QWORD *)v30 + 223) = 0;
  *((_QWORD *)v30 + 224) = 0;
  *((_QWORD *)v30 + 226) = 0x800000000LL;
  *((_QWORD *)v30 + 259) = 0;
  v30[520] = 0;
  *((_QWORD *)v30 + 261) = 0;
  *((_QWORD *)v30 + 262) = 0;
  v30[526] = 0;
  *((_QWORD *)v30 + 268) = 0;
  *((_QWORD *)v30 + 269) = 0;
  *((_QWORD *)v30 + 270) = 0;
  *((_QWORD *)v30 + 271) = 0;
  *((_QWORD *)v30 + 272) = 0;
  *((_QWORD *)v30 + 274) = 0;
  *((_QWORD *)v30 + 275) = 0;
  *((_QWORD *)v30 + 276) = 0;
  *((_QWORD *)v30 + 277) = v30 + 558;
  *((_QWORD *)v30 + 314) = v30 + 632;
  *((_QWORD *)v30 + 315) = 0x200000000LL;
  *((_QWORD *)v30 + 326) = 0x200000000LL;
  *((_QWORD *)v30 + 333) = 0x200000000LL;
  *((_QWORD *)v30 + 342) = 0x200000000LL;
  *((_QWORD *)v30 + 325) = v30 + 654;
  *((_QWORD *)v30 + 346) = v30 + 696;
  *((_QWORD *)v30 + 278) = 0x800000000LL;
  *((_QWORD *)v30 + 311) = 0;
  *((_QWORD *)v30 + 312) = 0;
  v30[626] = 0;
  *((_QWORD *)v30 + 318) = 0;
  *((_QWORD *)v30 + 319) = 0;
  *((_QWORD *)v30 + 320) = 0;
  *((_QWORD *)v30 + 321) = 0;
  *((_QWORD *)v30 + 322) = 0;
  *((_QWORD *)v30 + 323) = 0;
  *((_QWORD *)v30 + 324) = 0;
  v30[658] = 0;
  *((_QWORD *)v30 + 330) = 0;
  v30[662] = 0;
  *((_QWORD *)v30 + 332) = v30 + 668;
  *((_QWORD *)v30 + 336) = 0;
  *((_QWORD *)v30 + 337) = 0;
  *((_QWORD *)v30 + 338) = 0;
  *((_QWORD *)v30 + 339) = 0;
  *((_QWORD *)v30 + 340) = 0;
  *((_QWORD *)v30 + 341) = 0;
  *((_QWORD *)v30 + 343) = 0;
  *((_QWORD *)v30 + 344) = 0;
  *((_QWORD *)v30 + 345) = 0;
  *((_QWORD *)v30 + 347) = 0x800000000LL;
  *((_QWORD *)v30 + 380) = 0;
  *((_QWORD *)v30 + 389) = v30 + 782;
  *((_QWORD *)v30 + 390) = 0x100000000LL;
  *((_QWORD *)v30 + 395) = v30 + 794;
  v429 = (unsigned __int64)(v30 + 820);
  *((_QWORD *)v30 + 408) = v30 + 820;
  *((_QWORD *)v30 + 413) = v30 + 830;
  *((_QWORD *)v30 + 415) = v30 + 834;
  *((_QWORD *)v30 + 416) = 0x1000000000LL;
  LODWORD(v34) = *(_DWORD *)(a1 + 8);
  *((_QWORD *)v30 + 381) = 0;
  *v30 = (unsigned int)v34;
  v37 = &n[16];
  v30[764] = 0;
  *((_QWORD *)v30 + 383) = 0;
  v30[768] = 0;
  *((_QWORD *)v30 + 385) = 0;
  v30[772] = 0;
  *((_QWORD *)v30 + 387) = 0;
  v30[776] = 0;
  v30[784] = 0;
  *((_QWORD *)v30 + 393) = 0;
  *((_QWORD *)v30 + 394) = 0;
  *((_QWORD *)v30 + 396) = 0x800000000LL;
  *((_QWORD *)v30 + 405) = 0;
  *((_QWORD *)v30 + 406) = 0;
  v30[814] = 0;
  *((_QWORD *)v30 + 409) = 0;
  *((_QWORD *)v30 + 410) = 0;
  *((_QWORD *)v30 + 411) = 0;
  v30[824] = 0;
  *((_QWORD *)v30 + 414) = 0;
  v434 = v30;
  *(_QWORD *)n = &n[16];
  if ( !a2 )
  {
    n[16] = 0;
    v102 = 0;
LABEL_66:
    *((_QWORD *)v30 + 2) = v102;
    *((_BYTE *)v36 + v102) = 0;
    v38 = *(__int64 **)n;
    goto LABEL_26;
  }
  if ( (unsigned __int64)a3 > 0xF )
  {
    if ( (__int64)a3 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    v428 = (__m128 *)v36;
    v37 = (_BYTE *)operator new((unsigned __int64)a3 + 1);
    *(_QWORD *)&n[16] = a3;
    v36 = (__int64 *)v428;
    *(_QWORD *)n = v37;
LABEL_130:
    v428 = (__m128 *)v36;
    memcpy(v37, a2, (size_t)a3);
    v37 = *(_BYTE **)n;
    v36 = (__int64 *)v428;
    goto LABEL_22;
  }
  if ( a3 == (__int64 *)((char *)&dword_0 + 1) )
  {
    n[16] = *a2;
    goto LABEL_22;
  }
  if ( a3 )
    goto LABEL_130;
LABEL_22:
  *(_QWORD *)&n[8] = a3;
  *((_BYTE *)a3 + (_QWORD)v37) = 0;
  v38 = *((__int64 **)v30 + 1);
  if ( *(_BYTE **)n == &n[16] )
  {
    v102 = *(_QWORD *)&n[8];
    v36 = *((__int64 **)v30 + 1);
    if ( *(_QWORD *)&n[8] )
    {
      if ( *(_QWORD *)&n[8] == 1 )
        *(_BYTE *)v36 = n[16];
      else
        memcpy(*((void **)v30 + 1), *(const void **)n, *(size_t *)&n[8]);
      v102 = *(_QWORD *)&n[8];
      v36 = *((__int64 **)v30 + 1);
    }
    goto LABEL_66;
  }
  if ( v36 == v38 )
  {
    v428 = *(__m128 **)&n[16];
    *((_QWORD *)v30 + 1) = *(_QWORD *)n;
    *((__m128 *)v30 + 1) = _mm_loadh_ps((const double *)&v428);
  }
  else
  {
    v428 = *(__m128 **)&n[16];
    v39 = *((_QWORD *)v30 + 3);
    *((_QWORD *)v30 + 1) = *(_QWORD *)n;
    *((__m128 *)v30 + 1) = _mm_loadh_ps((const double *)&v428);
    if ( v38 )
    {
      *(_QWORD *)n = v38;
      *(_QWORD *)&n[16] = v39;
      goto LABEL_26;
    }
  }
  v38 = (__int64 *)&n[16];
  *(_QWORD *)n = &n[16];
LABEL_26:
  *(_QWORD *)&n[8] = 0;
  *(_BYTE *)v38 = 0;
  if ( *(_BYTE **)n != &n[16] )
    operator delete(*(void **)n);
  v40 = v427;
  v41 = v30[1];
  *((_QWORD *)v30 + 160) = 0;
  v30[203] = v40;
  if ( !v41 )
    *((_QWORD *)v30 + 160) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 128) + 16LL))(
                               *(_QWORD *)(a1 + 128),
                               *((_QWORD *)v30 + 1),
                               *((_QWORD *)v30 + 2));
  sub_1FDE590(&v435, a1, a2, (size_t)a3);
  v42 = **(_QWORD **)(a1 + 128);
  if ( !v435 )
  {
    v150 = (*(__int64 (**)(void))(v42 + 32))();
    v151 = sub_1FD8800(v150, (__int64)a2, (__int64)a3);
    if ( v151 )
    {
      *((_QWORD *)v30 + 52) = v151;
      v47 = (unsigned __int64)v433;
      while ( 1 )
      {
        v152 = *(_QWORD *)(v47 + 8);
        if ( !v152 )
          goto LABEL_67;
        v47 = v152 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v152 & 4) == 0 || !v47 )
          goto LABEL_37;
      }
    }
    v144 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 128) + 32LL))(*(_QWORD *)(a1 + 128));
    if ( sub_1FD8950(v144, (__int64)a2, (__int64)a3) )
    {
      v202 = (unsigned __int64)v433;
      while ( 1 )
      {
        v203 = *(_QWORD *)(v202 + 8);
        if ( !v203 )
          break;
        v202 = v203 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v203 & 4) == 0 || !v202 )
          goto LABEL_201;
      }
      v202 = 0;
LABEL_201:
      sub_FD6430(v202);
      v98 = 3;
      goto LABEL_117;
    }
    v145 = *((size_t **)v30 + 27);
    v146 = *(_QWORD *)(a1 + 120);
    v428 = &v436;
    sub_FD8750((__int64)&v436, v146, v145, 1u, 0, 1, 0, 0);
    if ( (v437 & 1) == 0 )
    {
      v177 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 128) + 32LL))(
               *(_QWORD *)(a1 + 128),
               v146,
               v426);
      v178 = v436.m128_u64[0];
      v436.m128_u64[0] = 0;
      *(_QWORD *)n = v178;
      v179 = sub_1FD8A40(v177, (__int64 *)a2, a3, (__int64 *)n);
      v180 = *(_QWORD *)n;
      *((_QWORD *)v30 + 52) = v179;
      if ( v180 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v180 + 8LL))(v180);
      sub_FC2AF0((__int64 *)v428);
      goto LABEL_38;
    }
    (*(void (__fastcall **)(_BYTE *, unsigned __int64, _QWORD))(*(_QWORD *)v436.m128_u64[1] + 32LL))(
      n,
      v436.m128_u64[1],
      v436.m128_u32[0]);
    v147 = (_BYTE *)*a14;
    if ( *(_BYTE **)n == &n[16] )
    {
      v290 = *(_QWORD *)&n[8];
      if ( *(_QWORD *)&n[8] )
      {
        if ( *(_QWORD *)&n[8] == 1 )
          *v147 = n[16];
        else
          memcpy(v147, *(const void **)n, *(size_t *)&n[8]);
        v290 = *(_QWORD *)&n[8];
        v147 = (_BYTE *)*a14;
      }
      a14[1] = v290;
      v147[v290] = 0;
      v147 = *(_BYTE **)n;
      goto LABEL_114;
    }
    v148 = a14;
    if ( v147 == (_BYTE *)(a14 + 2) )
    {
      v427 = *(_QWORD *)&n[16];
      *a14 = *(_QWORD *)n;
      *(__m128 *)(v148 + 1) = _mm_loadh_ps((const double *)&v427);
    }
    else
    {
      v427 = *(_QWORD *)&n[16];
      v149 = a14[2];
      *a14 = *(_QWORD *)n;
      *(__m128 *)(v148 + 1) = _mm_loadh_ps((const double *)&v427);
      if ( v147 )
      {
        *(_QWORD *)n = v147;
        *(_QWORD *)&n[16] = v149;
LABEL_114:
        *(_QWORD *)&n[8] = 0;
        *v147 = 0;
        if ( *(_BYTE **)n != &n[16] )
          operator delete(*(void **)n);
        v98 = 2;
        sub_FC2AF0((__int64 *)v428);
LABEL_117:
        if ( v435 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v435 + 8LL))(v435);
        goto LABEL_119;
      }
    }
    v147 = &n[16];
    *(_QWORD *)n = &n[16];
    goto LABEL_114;
  }
  v43 = (*(__int64 (**)(void))(v42 + 32))();
  v44 = v435;
  v435 = 0;
  *(_QWORD *)n = v44;
  v45 = sub_1FD8C30(v43, a2, (size_t)a3, (__int64 *)n);
  v46 = *(_QWORD *)n;
  *((_QWORD *)v30 + 52) = v45;
  if ( v46 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 8LL))(v46);
  v47 = (unsigned __int64)v433;
  while ( 1 )
  {
    v48 = *(_QWORD *)(v47 + 8);
    if ( !v48 )
      break;
    v47 = v48 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v48 & 4) == 0 || !v47 )
      goto LABEL_37;
  }
LABEL_67:
  v47 = 0;
LABEL_37:
  sub_FD6430(v47);
LABEL_38:
  if ( v435 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v435 + 8LL))(v435);
  v49 = *(_QWORD *)(a1 + 136);
  v50 = *((_QWORD *)v30 + 52);
  v51 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64, _QWORD, _QWORD, _QWORD, __int64))(*(_QWORD *)v49 + 24LL);
  sub_2231100(n, v50);
  *((_QWORD *)v30 + 56) = v51(v49, v50, v52, v53, v54, v55, *(_QWORD *)n, *(_QWORD *)&n[8], *(_QWORD *)&n[16], v439);
  memset(n, 0, 20);
  v58 = a10.m128i_i64[0];
  *((_QWORD *)v30 + 57) = v59;
  if ( *(_QWORD *)n ^ v58 | *(_QWORD *)&n[8] ^ a10.m128i_i64[1] || a11 )
  {
    v60 = *((_QWORD *)v30 + 56);
    a12(n, v60, *((_QWORD *)v30 + 57));
    if ( (unsigned __int8)sub_1FDECF0(
                            a14,
                            v60,
                            v61,
                            v62,
                            v63,
                            v64,
                            (__int128)_mm_load_si128((const __m128i *)n),
                            *(int *)&n[16],
                            (__int128)_mm_loadu_si128(&a10),
                            a11) )
    {
      v98 = 3;
LABEL_119:
      sub_1FD9450((__int64)v30);
      operator delete(v30, 0xD88u);
      return v98;
    }
  }
  v65 = v433;
  do
  {
    v66 = v65[1];
    if ( !v66 )
    {
      v68 = *(unsigned int *)(a1 + 112);
      v65 = nullptr;
      v69 = *(__int64 **)(a1 + 96);
      if ( !(_DWORD)v68 )
        goto LABEL_69;
LABEL_48:
      v70 = (unsigned int)(v68 - 1);
      v71 = v70 & (((unsigned int)v66 >> 9) ^ ((unsigned int)v66 >> 4));
      v72 = &v69[2 * v71];
      v73 = (__int64 *)*v72;
      if ( (__int64 *)*v72 == v65 )
        goto LABEL_49;
      v57 = 1;
      v200 = nullptr;
      if ( v73 != (__int64 *)-4096LL )
      {
        while ( 1 )
        {
          if ( !v200 && v73 == (__int64 *)-8192LL )
            v200 = v72;
          v56 = (unsigned int)(v57 + 1);
          v71 = v70 & (v57 + v71);
          v72 = &v69[2 * v71];
          v73 = (__int64 *)*v72;
          if ( (__int64 *)*v72 == v65 )
            goto LABEL_49;
          if ( v73 == (__int64 *)-4096LL )
            break;
          v57 = (unsigned int)v56;
        }
        if ( v200 )
          v72 = v200;
      }
      v118 = *(_DWORD *)(a1 + 104) + 1;
      v56 = (unsigned int)(4 * v118);
      if ( (unsigned int)v56 >= 3 * (int)v68 )
        goto LABEL_69;
      v201 = (unsigned int)v68 >> 3;
      if ( (int)v68 - *(_DWORD *)(a1 + 108) - v118 > (unsigned int)v201 )
      {
        v56 = *v72;
        goto LABEL_194;
      }
      LODWORD(v430) = ((unsigned int)v66 >> 9) ^ ((unsigned int)v66 >> 4);
      LODWORD(v428) = v68;
      v204 = (((v70 >> 1) | v70 | (((v70 >> 1) | v70) >> 2)) >> 4) | (v70 >> 1) | v70 | (((v70 >> 1) | v70) >> 2);
      v205 = ((((v204 >> 8) | v204) >> 16) | (v204 >> 8) | v204) + 1;
      if ( (unsigned int)v205 < 0x40 )
        LODWORD(v205) = 64;
      *(_DWORD *)(a1 + 112) = v205;
      v206 = (_QWORD *)sub_22300B0(16LL * (unsigned int)v205, 8, v68, 64, v201, v57);
      v207 = (unsigned int)v428;
      v208 = (int)v430;
      v209 = v206;
      *(_QWORD *)(a1 + 96) = v206;
      if ( v69 )
      {
        *(_QWORD *)(a1 + 104) = 0;
        v428 = (__m128 *)(16 * v207);
        v210 = &v69[2 * v207];
        v211 = *(unsigned int *)(a1 + 112);
        for ( jj = &v206[2 * v211]; jj != v206; v206 += 2 )
          *v206 = -4096;
        v213 = v69;
        v214 = v211 - 1;
        do
        {
          v113 = *v213;
          if ( *v213 != -4096 && v113 != -8192 )
          {
            if ( !(_DWORD)v211 )
              goto LABEL_715;
            v215 = v214 & (((unsigned int)v113 >> 9) ^ ((unsigned int)v113 >> 4));
            v216 = &v209[2 * v215];
            v217 = *v216;
            if ( *v216 != v113 && v217 != -4096 )
            {
              LODWORD(v431) = 1;
              v430 = nullptr;
              v432 = v213;
              while ( 1 )
              {
                if ( !v430 )
                {
                  if ( v217 != -8192 )
                    v216 = v430;
                  v430 = v216;
                }
                v215 = v214 & ((_DWORD)v431 + v215);
                v216 = &v209[2 * v215];
                v217 = *v216;
                if ( v113 == *v216 )
                {
                  v213 = v432;
                  goto LABEL_212;
                }
                if ( v217 == -4096 )
                  break;
                LODWORD(v431) = (_DWORD)v431 + 1;
              }
              v213 = v432;
              if ( v430 )
                v216 = v430;
            }
LABEL_212:
            *v216 = v113;
            v216[1] = v213[1];
            ++*(_DWORD *)(a1 + 104);
          }
          v213 += 2;
        }
        while ( v210 != v213 );
        LODWORD(v430) = v208;
        operator delete(v69, v428, 8);
        v209 = *(_QWORD **)(a1 + 96);
        v218 = *(_DWORD *)(a1 + 112);
        v208 = (int)v430;
        v118 = *(_DWORD *)(a1 + 104) + 1;
      }
      else
      {
        v288 = *(unsigned int *)(a1 + 112);
        *(_QWORD *)(a1 + 104) = 0;
        v218 = v288;
        for ( kk = &v206[2 * v288]; kk != v206; v206 += 2 )
          *v206 = -4096;
        v118 = 1;
      }
      if ( v218 )
      {
        v219 = v218 - 1;
        v56 = (__int64)v65;
        v220 = v219 & v208;
        v72 = &v209[2 * v220];
        v221 = *v72;
        if ( (__int64 *)*v72 == v65 )
          goto LABEL_194;
        v56 = 1;
        v122 = nullptr;
        if ( v221 != -4096 )
        {
          while ( 1 )
          {
            if ( !v122 && v221 == -8192 )
              v122 = v72;
            v57 = (unsigned int)(v56 + 1);
            v220 = v219 & (v56 + v220);
            v72 = &v209[2 * v220];
            v221 = *v72;
            if ( (__int64 *)*v72 == v65 )
              goto LABEL_222;
            if ( v221 == -4096 )
              goto LABEL_627;
            v56 = (unsigned int)v57;
          }
        }
LABEL_85:
        *(_DWORD *)(a1 + 104) = v118;
        goto LABEL_196;
      }
LABEL_717:
      ++*(_DWORD *)(a1 + 104);
      BUG();
    }
    v66 &= 0xFFFFFFFFFFFFFFF8LL;
    v67 = v65[1] & 4;
    v65 = (__int64 *)v66;
  }
  while ( v67 && v66 );
  v68 = *(unsigned int *)(a1 + 112);
  v69 = *(__int64 **)(a1 + 96);
  if ( (_DWORD)v68 )
    goto LABEL_48;
LABEL_69:
  LODWORD(v428) = v68;
  v103 = (((((((unsigned int)(2 * v68 - 1) | ((unsigned __int64)(unsigned int)(2 * v68 - 1) >> 1)) >> 2)
           | (unsigned int)(2 * v68 - 1)
           | ((unsigned __int64)(unsigned int)(2 * v68 - 1) >> 1)) >> 4)
         | (((unsigned int)(2 * v68 - 1) | ((unsigned __int64)(unsigned int)(2 * v68 - 1) >> 1)) >> 2)
         | (unsigned int)(2 * v68 - 1)
         | ((unsigned __int64)(unsigned int)(2 * v68 - 1) >> 1)) >> 8)
       | (((((unsigned int)(2 * v68 - 1) | ((unsigned __int64)(unsigned int)(2 * v68 - 1) >> 1)) >> 2)
         | (unsigned int)(2 * v68 - 1)
         | ((unsigned __int64)(unsigned int)(2 * v68 - 1) >> 1)) >> 4)
       | (((unsigned int)(2 * v68 - 1) | ((unsigned __int64)(unsigned int)(2 * v68 - 1) >> 1)) >> 2)
       | (unsigned int)(2 * v68 - 1)
       | ((unsigned __int64)(unsigned int)(2 * v68 - 1) >> 1);
  v104 = ((v103 >> 16) | v103) + 1;
  if ( (unsigned int)v104 < 0x40 )
    LODWORD(v104) = 64;
  *(_DWORD *)(a1 + 112) = v104;
  v105 = (_QWORD *)sub_22300B0(16LL * (unsigned int)v104, 8, v68, 64, v56, v57);
  v106 = (unsigned int)v428;
  v107 = v105;
  *(_QWORD *)(a1 + 96) = v105;
  if ( v69 )
  {
    *(_QWORD *)(a1 + 104) = 0;
    v428 = (__m128 *)(16 * v106);
    v108 = &v69[2 * v106];
    v109 = *(unsigned int *)(a1 + 112);
    for ( mm = &v105[2 * v109]; mm != v105; v105 += 2 )
      *v105 = -4096;
    v111 = v69;
    for ( nn = v109 - 1; v108 != v111; v111 += 2 )
    {
      v113 = *v111;
      if ( *v111 != -4096 && v113 != -8192 )
      {
        if ( !(_DWORD)v109 )
        {
LABEL_715:
          *(_QWORD *)&dword_0 = v113;
          BUG();
        }
        v114 = nn & (((unsigned int)v113 >> 9) ^ ((unsigned int)v113 >> 4));
        v115 = &v107[2 * v114];
        v116 = *v115;
        if ( *v115 != v113 && v116 != -4096 )
        {
          LODWORD(v431) = 1;
          v430 = nullptr;
          v432 = v111;
          while ( 1 )
          {
            if ( !v430 )
            {
              if ( v116 != -8192 )
                v115 = v430;
              v430 = v115;
            }
            v114 = nn & ((_DWORD)v431 + v114);
            v115 = &v107[2 * v114];
            v116 = *v115;
            if ( v113 == *v115 )
            {
              v111 = v432;
              goto LABEL_79;
            }
            if ( v116 == -4096 )
              break;
            LODWORD(v431) = (_DWORD)v431 + 1;
          }
          v111 = v432;
          if ( v430 )
            v115 = v430;
        }
LABEL_79:
        *v115 = v113;
        v115[1] = v111[1];
        ++*(_DWORD *)(a1 + 104);
      }
    }
    operator delete(v69, v428, 8);
    v107 = *(_QWORD **)(a1 + 96);
    v117 = *(_DWORD *)(a1 + 112);
    v118 = *(_DWORD *)(a1 + 104) + 1;
  }
  else
  {
    v286 = *(unsigned int *)(a1 + 112);
    *(_QWORD *)(a1 + 104) = 0;
    v117 = v286;
    for ( i1 = &v105[2 * v286]; i1 != v105; v105 += 2 )
      *v105 = -4096;
    v118 = 1;
  }
  if ( !v117 )
    goto LABEL_717;
  v119 = v117 - 1;
  v56 = (__int64)v65;
  v120 = v119 & (((unsigned int)v66 >> 4) ^ ((unsigned int)v66 >> 9));
  v72 = &v107[2 * v120];
  v121 = *v72;
  if ( (__int64 *)*v72 != v65 )
  {
    v56 = 1;
    v122 = nullptr;
    if ( v121 == -4096 )
      goto LABEL_85;
    while ( 1 )
    {
      if ( v121 == -8192 && !v122 )
        v122 = v72;
      v57 = (unsigned int)(v56 + 1);
      v120 = v119 & (v56 + v120);
      v72 = &v107[2 * v120];
      v121 = *v72;
      if ( (__int64 *)*v72 == v65 )
        break;
      if ( v121 == -4096 )
      {
LABEL_627:
        if ( !v122 )
          goto LABEL_85;
        v56 = *v122;
        v72 = v122;
        goto LABEL_194;
      }
      v56 = (unsigned int)v57;
    }
LABEL_222:
    v56 = (__int64)v65;
  }
LABEL_194:
  *(_DWORD *)(a1 + 104) = v118;
  if ( v56 != -4096 )
    --*(_DWORD *)(a1 + 108);
LABEL_196:
  *v72 = (__int64)v65;
  v72[1] = 0;
LABEL_49:
  v72[1] = (__int64)v30;
  *a13 = v30;
  if ( !a6 )
  {
    if ( !*((_BYTE *)v30 + 408) )
      v30[203] = v427;
    v123 = v30[1];
    *((_BYTE *)v30 + 408) = 1;
    if ( v123 > 1 && v123 != 5 )
    {
      v124 = *(unsigned int *)(a1 + 40);
      if ( *(unsigned int *)(a1 + 44) >= (unsigned __int64)(v124 + 1) )
      {
        *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v124) = v30;
      }
      else
      {
        sub_2237220(a1 + 32, a1 + 48, v124 + 1, 8);
        *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL * *(unsigned int *)(a1 + 40)) = v30;
      }
      ++*(_DWORD *)(a1 + 40);
    }
    v125 = *(unsigned int *)(a1 + 72);
    if ( v125 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 76) )
    {
      sub_2237220(a1 + 64, a1 + 80, v125 + 1, 8);
      v125 = *(unsigned int *)(a1 + 72);
    }
    *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8 * v125) = v30;
    ++*(_DWORD *)(a1 + 72);
    goto LABEL_58;
  }
  v74 = v30[814];
  v75 = (__int64 *)(v30 + 810);
  v76 = *((__int64 **)v30 + 405);
  if ( !(_DWORD)v74 )
    goto LABEL_137;
  v77 = (unsigned int)(v74 - 1);
  v78 = v77 & (((unsigned int)a6 >> 9) ^ ((unsigned int)a6 >> 4));
  v79 = &v76[v78];
  v80 = *v79;
  if ( a6 == *v79 )
  {
LABEL_52:
    v428 = &v436;
    sub_1F000E0(&v436, v79, &v76[v74], (__int64)v75, 1);
    goto LABEL_53;
  }
  v57 = 1;
  v223 = nullptr;
  if ( v80 != -4096 )
  {
    while ( 1 )
    {
      if ( !v223 && v80 == -8192 )
        v223 = v79;
      v78 = v77 & (v57 + v78);
      v79 = &v76[v78];
      v80 = *v79;
      if ( a6 == *v79 )
        goto LABEL_52;
      if ( v80 == -4096 )
        break;
      v57 = (unsigned int)(v57 + 1);
    }
    if ( v223 )
      v79 = v223;
  }
  v173 = v30[812] + 1;
  v56 = (unsigned int)(4 * v173);
  if ( (unsigned int)v56 >= 3 * (int)v74 )
  {
LABEL_137:
    v427 = (__int64)(v30 + 810);
    v155 = (((((((unsigned int)(2 * v74 - 1) | ((unsigned __int64)(unsigned int)(2 * v74 - 1) >> 1)) >> 2)
             | (unsigned int)(2 * v74 - 1)
             | ((unsigned __int64)(unsigned int)(2 * v74 - 1) >> 1)) >> 4)
           | (((unsigned int)(2 * v74 - 1) | ((unsigned __int64)(unsigned int)(2 * v74 - 1) >> 1)) >> 2)
           | (unsigned int)(2 * v74 - 1)
           | ((unsigned __int64)(unsigned int)(2 * v74 - 1) >> 1)) >> 8)
         | (((((unsigned int)(2 * v74 - 1) | ((unsigned __int64)(unsigned int)(2 * v74 - 1) >> 1)) >> 2)
           | (unsigned int)(2 * v74 - 1)
           | ((unsigned __int64)(unsigned int)(2 * v74 - 1) >> 1)) >> 4)
         | (((unsigned int)(2 * v74 - 1) | ((unsigned __int64)(unsigned int)(2 * v74 - 1) >> 1)) >> 2)
         | (unsigned int)(2 * v74 - 1)
         | ((unsigned __int64)(unsigned int)(2 * v74 - 1) >> 1);
    v156 = ((v155 >> 16) | v155) + 1;
    if ( (unsigned int)v156 < 0x40 )
      LODWORD(v156) = 64;
    v30[814] = v156;
    v157 = sub_22300B0(8LL * (unsigned int)v156, 8, 64, v75, v56, v57);
    v75 = (__int64 *)v427;
    *((_QWORD *)v30 + 405) = v157;
    if ( v76 )
    {
      v158 = v30[814];
      v159 = 8 * v74;
      *((_QWORD *)v30 + 406) = 0;
      v160 = &v76[v74];
      v161 = v158;
      v162 = 8 * v158;
      if ( v157 != v157 + v162 )
      {
        v163 = (__m128i *)v157;
        v164 = ((unsigned __int64)(v162 - 8) >> 3) + 1;
        if ( v162 == 8 )
          goto LABEL_145;
        v165 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
        do
          *v163++ = v165;
        while ( (__m128i *)(v157 + 16 * (v164 >> 1)) != v163 );
        v163 = (__m128i *)(v157 + 8 * (v164 & 0xFFFFFFFFFFFFFFFELL));
        if ( (v164 & 0xFFFFFFFFFFFFFFFELL) != v164 )
LABEL_145:
          v163->m128i_i64[0] = -4096;
      }
      v166 = v76;
      v167 = v161 - 1;
      v168 = v75;
      if ( v76 != v160 )
      {
        do
        {
          v169 = *v166;
          if ( *v166 != -8192 && v169 != -4096 )
          {
            if ( !v161 )
            {
LABEL_719:
              *(_QWORD *)&dword_0 = v169;
              BUG();
            }
            v170 = v167 & (((unsigned int)v169 >> 9) ^ ((unsigned int)v169 >> 4));
            v171 = (__int64 *)(v157 + 8LL * v170);
            v172 = *v171;
            if ( v169 != *v171 && v172 != -4096 )
            {
              LODWORD(v428) = 1;
              v427 = 0;
              v430 = v166;
              while ( 1 )
              {
                if ( v172 == -8192 )
                {
                  if ( v427 )
                    v171 = (__int64 *)v427;
                  v427 = (__int64)v171;
                }
                v170 = v167 & ((_DWORD)v428 + v170);
                v171 = (__int64 *)(v157 + 8LL * v170);
                v172 = *v171;
                if ( v169 == *v171 )
                {
                  v166 = v430;
                  goto LABEL_151;
                }
                if ( v172 == -4096 )
                  break;
                LODWORD(v428) = (_DWORD)v428 + 1;
              }
              v166 = v430;
              if ( v427 )
                v171 = (__int64 *)v427;
            }
LABEL_151:
            *v171 = v169;
            ++v30[812];
          }
          ++v166;
        }
        while ( v160 != v166 );
        v75 = v168;
      }
      v427 = (__int64)v75;
      operator delete(v76, v159, 8);
      v76 = *((__int64 **)v30 + 405);
      v74 = v30[814];
      v75 = (__int64 *)v427;
      v173 = v30[812] + 1;
    }
    else
    {
      v291 = v30[814];
      *((_QWORD *)v30 + 406) = 0;
      v74 = v291;
      v292 = 8 * v291;
      v76 = (__int64 *)(v157 + v292);
      if ( v157 == v157 + v292 )
      {
        v173 = 1;
      }
      else
      {
        v293 = (__m128i *)v157;
        v294 = ((unsigned __int64)(v292 - 8) >> 3) + 1;
        if ( v292 == 8 )
          goto LABEL_323;
        v295 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
        do
          *v293++ = v295;
        while ( v293 != (__m128i *)(v157 + 16 * (v294 >> 1)) );
        v293 = (__m128i *)(v157 + 8 * (v294 & 0xFFFFFFFFFFFFFFFELL));
        if ( (v294 & 0xFFFFFFFFFFFFFFFELL) != v294 )
LABEL_323:
          v293->m128i_i64[0] = -4096;
        v76 = (__int64 *)v157;
        v173 = 1;
      }
    }
    if ( !(_DWORD)v74 )
      goto LABEL_716;
    v174 = (v74 - 1) & (((unsigned int)a6 >> 9) ^ ((unsigned int)a6 >> 4));
    v79 = &v76[v174];
    v175 = *v79;
    if ( a6 != *v79 )
    {
      v392 = 1;
      v393 = nullptr;
      if ( v175 == -4096 )
        goto LABEL_301;
      while ( 1 )
      {
        if ( v175 == -8192 && !v393 )
          v393 = v79;
        v174 = (v74 - 1) & (v392 + v174);
        v79 = &v76[v174];
        v175 = *v79;
        if ( a6 == *v79 )
          break;
        if ( v175 == -4096 )
        {
          if ( !v393 )
            goto LABEL_301;
          v175 = *v393;
          v79 = v393;
          break;
        }
        ++v392;
      }
    }
LABEL_157:
    v30[812] = v173;
    if ( v175 != -4096 )
      --v30[813];
    goto LABEL_159;
  }
  v224 = (unsigned int)v74 >> 3;
  if ( (unsigned int)v74 - v30[813] - v173 > (unsigned int)v224 )
  {
    v175 = *v79;
    goto LABEL_157;
  }
  v427 = (__int64)(v30 + 810);
  v265 = (v77 >> 1) | v77 | (((v77 >> 1) | v77) >> 2);
  v266 = ((((((v265 >> 4) | v265) >> 8) | (v265 >> 4) | v265) >> 16) | (((v265 >> 4) | v265) >> 8) | (v265 >> 4) | v265)
       + 1;
  if ( (unsigned int)v266 < 0x40 )
    LODWORD(v266) = 64;
  v30[814] = v266;
  v267 = (__m128i *)sub_22300B0(8LL * (unsigned int)v266, 8, 64, v75, v224, v57);
  v75 = (__int64 *)v427;
  v268 = v267;
  *((_QWORD *)v30 + 405) = v267;
  if ( v76 )
  {
    v269 = v30[814];
    *((_QWORD *)v30 + 406) = 0;
    v427 = 8 * v74;
    v270 = &v76[v74];
    v271 = v269;
    v272 = 8 * v269;
    if ( v267 != (__m128i *)&v267->m128i_i8[v272] )
    {
      v273 = ((unsigned __int64)(v272 - 8) >> 3) + 1;
      if ( v272 == 8 )
        goto LABEL_289;
      v274 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
      do
        *v267++ = v274;
      while ( v267 != &v268[v273 >> 1] );
      v267 = (__m128i *)((char *)v268 + 8 * (v273 & 0xFFFFFFFFFFFFFFFELL));
      if ( (v273 & 0xFFFFFFFFFFFFFFFELL) != v273 )
LABEL_289:
        v267->m128i_i64[0] = -4096;
    }
    v275 = v76;
    v276 = v271 - 1;
    v277 = v75;
    do
    {
      v113 = *v275;
      if ( *v275 != -8192 && v113 != -4096 )
      {
        if ( !v271 )
          goto LABEL_715;
        v278 = v276 & (((unsigned int)v113 >> 9) ^ ((unsigned int)v113 >> 4));
        v279 = &v268->m128i_i64[v278];
        v280 = *v279;
        if ( v113 != *v279 && v280 != -4096 )
        {
          LODWORD(v430) = 1;
          v428 = nullptr;
          v431 = v275;
          while ( 1 )
          {
            if ( v280 == -8192 )
            {
              if ( v428 )
                v279 = (__int64 *)v428;
              v428 = (__m128 *)v279;
            }
            v278 = v276 & ((_DWORD)v430 + v278);
            v279 = &v268->m128i_i64[v278];
            v280 = *v279;
            if ( v113 == *v279 )
            {
              v275 = v431;
              goto LABEL_295;
            }
            if ( v280 == -4096 )
              break;
            LODWORD(v430) = (_DWORD)v430 + 1;
          }
          v275 = v431;
          if ( v428 )
            v279 = (__int64 *)v428;
        }
LABEL_295:
        *v279 = v113;
        ++v30[812];
      }
      ++v275;
    }
    while ( v270 != v275 );
    v428 = (__m128 *)v277;
    operator delete(v76, v427, 8);
    v75 = (__int64 *)v428;
    v76 = *((__int64 **)v30 + 405);
    v74 = v30[814];
    v173 = v30[812] + 1;
  }
  else
  {
    v306 = v30[814];
    *((_QWORD *)v30 + 406) = 0;
    v74 = v306;
    v307 = v306;
    v76 = &v267->m128i_i64[v307];
    if ( v267 == (__m128i *)&v267->m128i_i8[v307 * 8] )
    {
      v173 = 1;
    }
    else
    {
      v308 = ((unsigned __int64)(v307 * 8 - 8) >> 3) + 1;
      if ( v307 == 1 )
        goto LABEL_344;
      v309 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
      v310 = &v267[v308 >> 1];
      do
        *v267++ = v309;
      while ( v267 != v310 );
      v267 = (__m128i *)((char *)v268 + 8 * (v308 & 0xFFFFFFFFFFFFFFFELL));
      if ( (v308 & 0xFFFFFFFFFFFFFFFELL) != v308 )
LABEL_344:
        v267->m128i_i64[0] = -4096;
      v76 = (__int64 *)v268;
      v173 = 1;
    }
  }
  if ( !(_DWORD)v74 )
    goto LABEL_716;
  v281 = (v74 - 1) & (((unsigned int)a6 >> 9) ^ ((unsigned int)a6 >> 4));
  v79 = &v76[v281];
  v175 = *v79;
  if ( a6 == *v79 )
    goto LABEL_157;
  v282 = 1;
  v283 = nullptr;
  if ( v175 != -4096 )
  {
    while ( 1 )
    {
      if ( !v283 && v175 == -8192 )
        v283 = v79;
      v281 = (v74 - 1) & (v282 + v281);
      v79 = &v76[v281];
      v175 = *v79;
      if ( a6 == *v79 )
        goto LABEL_157;
      if ( v175 == -4096 )
      {
        if ( !v283 )
          break;
        v175 = *v283;
        v79 = v283;
        goto LABEL_157;
      }
      ++v282;
    }
  }
LABEL_301:
  v30[812] = v173;
LABEL_159:
  *v79 = a6;
  v428 = &v436;
  sub_1F000E0(&v436, v79, &v76[v74], (__int64)v75, 1);
  v176 = v30[818];
  if ( v176 + 1 > (unsigned __int64)v30[819] )
  {
    sub_2237220(v30 + 816, v429, v176 + 1, 8);
    v176 = v30[818];
  }
  *(_QWORD *)(*((_QWORD *)v30 + 408) + 8 * v176) = a6;
  ++v30[818];
LABEL_53:
  v83 = *(unsigned int *)(a6 + 3296);
  v84 = a6 + 3280;
  v85 = *(__int64 **)(a6 + 3280);
  if ( (_DWORD)v83 )
  {
    v86 = (unsigned int)(v83 - 1);
    v87 = v86 & (((unsigned int)v30 >> 9) ^ ((unsigned int)v30 >> 4));
    v88 = &v85[v87];
    v89 = (unsigned int *)*v88;
    if ( (unsigned int *)*v88 == v30 )
    {
LABEL_55:
      sub_1F000E0(v428, v88, &v85[v83], v84, 1);
      goto LABEL_56;
    }
    v82 = 1;
    v225 = nullptr;
    if ( v89 != (unsigned int *)-4096LL )
    {
      while ( 1 )
      {
        if ( !v225 && v89 == (unsigned int *)-8192LL )
          v225 = v88;
        v87 = v86 & (v82 + v87);
        v88 = &v85[v87];
        v89 = (unsigned int *)*v88;
        if ( v30 == (unsigned int *)*v88 )
          goto LABEL_55;
        if ( v89 == (unsigned int *)-4096LL )
          break;
        v82 = (unsigned int)(v82 + 1);
      }
      if ( v225 )
        v88 = v225;
    }
    v226 = *(_DWORD *)(a6 + 3288) + 1;
    v81 = (unsigned int)(4 * v226);
    if ( (unsigned int)v81 < 3 * (int)v83 )
    {
      v227 = (unsigned int)v83 >> 3;
      if ( (int)v83 - *(_DWORD *)(a6 + 3292) - v226 > (unsigned int)v227 )
      {
        v228 = (unsigned int *)*v88;
        goto LABEL_234;
      }
      v427 = a6 + 3280;
      v247 = (v86 >> 1) | v86 | (((v86 >> 1) | v86) >> 2);
      v248 = ((((((v247 >> 4) | v247) >> 8) | (v247 >> 4) | v247) >> 16)
            | (((v247 >> 4) | v247) >> 8)
            | (v247 >> 4)
            | v247)
           + 1;
      if ( (unsigned int)v248 < 0x40 )
        LODWORD(v248) = 64;
      *(_DWORD *)(a6 + 3296) = v248;
      v249 = (__m128i *)sub_22300B0(8LL * (unsigned int)v248, 8, 64, v84, v227, v82);
      v84 = v427;
      v250 = v249;
      *(_QWORD *)(a6 + 3280) = v249;
      if ( v85 )
      {
        v251 = *(unsigned int *)(a6 + 3296);
        *(_QWORD *)(a6 + 3288) = 0;
        v427 = 8 * v83;
        v252 = &v85[v83];
        v253 = v251;
        v254 = 8 * v251;
        if ( v249 != (__m128i *)&v249->m128i_i8[v254] )
        {
          v255 = ((unsigned __int64)(v254 - 8) >> 3) + 1;
          if ( v254 == 8 )
            goto LABEL_268;
          v256 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
          do
            *v249++ = v256;
          while ( &v250[v255 >> 1] != v249 );
          v249 = (__m128i *)((char *)v250 + 8 * (v255 & 0xFFFFFFFFFFFFFFFELL));
          if ( (v255 & 0xFFFFFFFFFFFFFFFELL) != v255 )
LABEL_268:
            v249->m128i_i64[0] = -4096;
        }
        v257 = v85;
        v258 = v253 - 1;
        do
        {
          v113 = *v257;
          if ( *v257 != -4096 && v113 != -8192 )
          {
            if ( !v253 )
              goto LABEL_715;
            v259 = v258 & (((unsigned int)v113 >> 9) ^ ((unsigned int)v113 >> 4));
            v260 = &v250->m128i_i64[v259];
            v261 = *v260;
            if ( *v260 != v113 && v261 != -4096 )
            {
              LODWORD(v430) = 1;
              v429 = 0;
              v431 = v257;
              while ( 1 )
              {
                if ( !v429 )
                {
                  if ( v261 != -8192 )
                    v260 = (__int64 *)v429;
                  v429 = (unsigned __int64)v260;
                }
                v259 = v258 & ((_DWORD)v430 + v259);
                v260 = &v250->m128i_i64[v259];
                v261 = *v260;
                if ( v113 == *v260 )
                {
                  v257 = v431;
                  goto LABEL_274;
                }
                if ( v261 == -4096 )
                  break;
                LODWORD(v430) = (_DWORD)v430 + 1;
              }
              v257 = v431;
              if ( v429 )
                v260 = (__int64 *)v429;
            }
LABEL_274:
            *v260 = v113;
            ++*(_DWORD *)(a6 + 3288);
          }
          ++v257;
        }
        while ( v252 != v257 );
        v429 = v84;
        operator delete(v85, v427, 8);
        v84 = v429;
        v85 = *(__int64 **)(a6 + 3280);
        v83 = *(unsigned int *)(a6 + 3296);
        v226 = *(_DWORD *)(a6 + 3288) + 1;
      }
      else
      {
        v301 = *(unsigned int *)(a6 + 3296);
        *(_QWORD *)(a6 + 3288) = 0;
        v83 = v301;
        v302 = v301;
        v85 = &v249->m128i_i64[v302];
        if ( v249 == (__m128i *)&v249->m128i_i8[v302 * 8] )
        {
          v226 = 1;
        }
        else
        {
          v303 = ((unsigned __int64)(v302 * 8 - 8) >> 3) + 1;
          if ( v302 == 1 )
            goto LABEL_337;
          v304 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
          v305 = &v249[v303 >> 1];
          do
            *v249++ = v304;
          while ( v249 != v305 );
          v249 = (__m128i *)((char *)v250 + 8 * (v303 & 0xFFFFFFFFFFFFFFFELL));
          if ( (v303 & 0xFFFFFFFFFFFFFFFELL) != v303 )
LABEL_337:
            v249->m128i_i64[0] = -4096;
          v85 = (__int64 *)v250;
          v226 = 1;
        }
      }
      if ( (_DWORD)v83 )
      {
        v262 = (v83 - 1) & (((unsigned int)v30 >> 9) ^ ((unsigned int)v30 >> 4));
        v88 = &v85[v262];
        v228 = (unsigned int *)*v88;
        if ( (unsigned int *)*v88 != v30 )
        {
          v263 = 1;
          v264 = nullptr;
          if ( v228 == (unsigned int *)-4096LL )
            goto LABEL_280;
          while ( 1 )
          {
            if ( v228 == (unsigned int *)-8192LL && !v264 )
              v264 = (unsigned int **)v88;
            v262 = (v83 - 1) & (v263 + v262);
            v88 = &v85[v262];
            v228 = (unsigned int *)*v88;
            if ( v30 == (unsigned int *)*v88 )
              break;
            if ( v228 == (unsigned int *)-4096LL )
            {
              if ( !v264 )
                goto LABEL_280;
              v228 = *v264;
              v88 = (__int64 *)v264;
              break;
            }
            ++v263;
          }
LABEL_234:
          *(_DWORD *)(a6 + 3288) = v226;
          if ( v228 != (unsigned int *)-4096LL )
            --*(_DWORD *)(a6 + 3292);
          goto LABEL_236;
        }
LABEL_259:
        v228 = v30;
        goto LABEL_234;
      }
LABEL_718:
      ++*(_DWORD *)(a6 + 3288);
      BUG();
    }
  }
  v427 = a6 + 3280;
  v230 = (((((((unsigned int)(2 * v83 - 1) | ((unsigned __int64)(unsigned int)(2 * v83 - 1) >> 1)) >> 2)
           | (unsigned int)(2 * v83 - 1)
           | ((unsigned __int64)(unsigned int)(2 * v83 - 1) >> 1)) >> 4)
         | (((unsigned int)(2 * v83 - 1) | ((unsigned __int64)(unsigned int)(2 * v83 - 1) >> 1)) >> 2)
         | (unsigned int)(2 * v83 - 1)
         | ((unsigned __int64)(unsigned int)(2 * v83 - 1) >> 1)) >> 8)
       | (((((unsigned int)(2 * v83 - 1) | ((unsigned __int64)(unsigned int)(2 * v83 - 1) >> 1)) >> 2)
         | (unsigned int)(2 * v83 - 1)
         | ((unsigned __int64)(unsigned int)(2 * v83 - 1) >> 1)) >> 4)
       | (((unsigned int)(2 * v83 - 1) | ((unsigned __int64)(unsigned int)(2 * v83 - 1) >> 1)) >> 2)
       | (unsigned int)(2 * v83 - 1)
       | ((unsigned __int64)(unsigned int)(2 * v83 - 1) >> 1);
  v231 = ((v230 >> 16) | v230) + 1;
  if ( (unsigned int)v231 < 0x40 )
    LODWORD(v231) = 64;
  *(_DWORD *)(a6 + 3296) = v231;
  v232 = sub_22300B0(8LL * (unsigned int)v231, 8, 64, v84, v81, v82);
  v84 = v427;
  *(_QWORD *)(a6 + 3280) = v232;
  if ( v85 )
  {
    v233 = *(unsigned int *)(a6 + 3296);
    v234 = 8 * v83;
    *(_QWORD *)(a6 + 3288) = 0;
    v235 = &v85[v83];
    v236 = v233;
    v237 = 8 * v233;
    if ( v232 != v232 + v237 )
    {
      v238 = (__m128i *)v232;
      v239 = ((unsigned __int64)(v237 - 8) >> 3) + 1;
      if ( v237 == 8 )
        goto LABEL_248;
      v240 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
      do
        *v238++ = v240;
      while ( (__m128i *)(v232 + 16 * (v239 >> 1)) != v238 );
      v238 = (__m128i *)(v232 + 8 * (v239 & 0xFFFFFFFFFFFFFFFELL));
      if ( (v239 & 0xFFFFFFFFFFFFFFFELL) != v239 )
LABEL_248:
        v238->m128i_i64[0] = -4096;
    }
    v241 = v85;
    for ( i2 = v236 - 1; v235 != v241; ++v241 )
    {
      v169 = *v241;
      if ( *v241 != -4096 && v169 != -8192 )
      {
        if ( !v236 )
          goto LABEL_719;
        v243 = i2 & (((unsigned int)v169 >> 9) ^ ((unsigned int)v169 >> 4));
        v244 = (__int64 *)(v232 + 8LL * v243);
        v245 = *v244;
        if ( *v244 != v169 && v245 != -4096 )
        {
          LODWORD(v429) = 1;
          v427 = 0;
          v430 = v241;
          while ( 1 )
          {
            if ( v245 == -8192 )
            {
              if ( v427 )
                v244 = (__int64 *)v427;
              v427 = (__int64)v244;
            }
            v243 = i2 & (v429 + v243);
            v244 = (__int64 *)(v232 + 8LL * v243);
            v245 = *v244;
            if ( v169 == *v244 )
            {
              v241 = v430;
              goto LABEL_254;
            }
            if ( v245 == -4096 )
              break;
            LODWORD(v429) = v429 + 1;
          }
          v241 = v430;
          if ( v427 )
            v244 = (__int64 *)v427;
        }
LABEL_254:
        *v244 = v169;
        ++*(_DWORD *)(a6 + 3288);
      }
    }
    v427 = v84;
    operator delete(v85, v234, 8);
    v85 = *(__int64 **)(a6 + 3280);
    v83 = *(unsigned int *)(a6 + 3296);
    v84 = v427;
    v226 = *(_DWORD *)(a6 + 3288) + 1;
  }
  else
  {
    v296 = *(unsigned int *)(a6 + 3296);
    *(_QWORD *)(a6 + 3288) = 0;
    v83 = v296;
    v297 = 8 * v296;
    v85 = (__int64 *)(v232 + v297);
    if ( v232 == v232 + v297 )
    {
      v226 = 1;
    }
    else
    {
      v298 = (__m128i *)v232;
      v299 = ((unsigned __int64)(v297 - 8) >> 3) + 1;
      if ( v297 == 8 )
        goto LABEL_330;
      v300 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
      do
        *v298++ = v300;
      while ( v298 != (__m128i *)(v232 + 16 * (v299 >> 1)) );
      v298 = (__m128i *)(v232 + 8 * (v299 & 0xFFFFFFFFFFFFFFFELL));
      if ( (v299 & 0xFFFFFFFFFFFFFFFELL) != v299 )
LABEL_330:
        v298->m128i_i64[0] = -4096;
      v85 = (__int64 *)v232;
      v226 = 1;
    }
  }
  if ( !(_DWORD)v83 )
    goto LABEL_718;
  v246 = (v83 - 1) & (((unsigned int)v30 >> 9) ^ ((unsigned int)v30 >> 4));
  v88 = &v85[v246];
  v228 = (unsigned int *)*v88;
  if ( (unsigned int *)*v88 == v30 )
    goto LABEL_259;
  v390 = 1;
  v391 = nullptr;
  if ( v228 != (unsigned int *)-4096LL )
  {
    while ( 1 )
    {
      if ( !v391 && v228 == (unsigned int *)-8192LL )
        v391 = (unsigned int **)v88;
      v246 = (v83 - 1) & (v390 + v246);
      v88 = &v85[v246];
      v228 = (unsigned int *)*v88;
      if ( v30 == (unsigned int *)*v88 )
        goto LABEL_234;
      if ( v228 == (unsigned int *)-4096LL )
      {
        if ( !v391 )
          break;
        v228 = *v391;
        v88 = (__int64 *)v391;
        goto LABEL_234;
      }
      ++v390;
    }
  }
LABEL_280:
  *(_DWORD *)(a6 + 3288) = v226;
LABEL_236:
  *v88 = (__int64)v30;
  sub_1F000E0(v428, v88, &v85[v83], v84, 1);
  v229 = *(unsigned int *)(a6 + 3312);
  if ( v229 + 1 > (unsigned __int64)*(unsigned int *)(a6 + 3316) )
  {
    sub_2237220(a6 + 3304, a6 + 3320, v229 + 1, 8);
    v229 = *(unsigned int *)(a6 + 3312);
  }
  *(_QWORD *)(*(_QWORD *)(a6 + 3304) + 8 * v229) = v30;
  ++*(_DWORD *)(a6 + 3312);
LABEL_56:
  v90 = v30[1];
  if ( v90 != 5 && v90 > 1 )
  {
    v222 = *(unsigned int *)(a1 + 40);
    if ( *(unsigned int *)(a1 + 44) < (unsigned __int64)(v222 + 1) )
    {
      sub_2237220(a1 + 32, a1 + 48, v222 + 1, 8);
      *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL * *(unsigned int *)(a1 + 40)) = v30;
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v222) = v30;
    }
    ++*(_DWORD *)(a1 + 40);
  }
LABEL_58:
  v91 = *(unsigned int *)(a1 + 8);
  v92 = *(_QWORD *)a1;
  v93 = v91 + 1;
  v94 = *(_DWORD *)(a1 + 8);
  v95 = (void **)(*(_QWORD *)a1 + 8 * v91);
  v96 = &v434;
  if ( v93 > *(unsigned int *)(a1 + 12) )
  {
    v427 = -1;
    LOBYTE(v428) = 0;
    if ( v92 <= (unsigned __int64)&v434 && v95 > &v434 )
    {
      LOBYTE(v428) = 1;
      v427 = (__int64)((__int64)&v434 - v92) >> 3;
    }
    v429 = a1 + 16;
    v181 = sub_2237400(a1, a1 + 16, v93, 8, &v436);
    v182 = *(_QWORD *)a1;
    v183 = v181;
    v184 = 8LL * *(unsigned int *)(a1 + 8);
    v185 = (__int64 *)(*(_QWORD *)a1 + v184);
    if ( *(__int64 **)a1 != v185 )
    {
      v186 = *(__int64 **)a1;
      if ( (v181 >= v182 + 16 || v182 >= v181 + 16) && (unsigned __int64)v185 - v182 - 8 > 0x10 )
      {
        v187 = (((unsigned __int64)v185 - v182 - 8) >> 3) + 1;
        v188 = 0;
        do
        {
          v189 = _mm_loadu_si128((const __m128i *)(v182 + v188));
          *(_OWORD *)(v182 + v188) = 0;
          *(__m128i *)(v181 + v188) = v189;
          v188 += 16;
        }
        while ( v188 != 16 * (v187 >> 1) );
        v190 = 8 * (v187 & 0xFFFFFFFFFFFFFFFELL);
        v191 = (__int64 *)(v190 + v182);
        v192 = (_QWORD *)(v181 + v190);
        if ( (v187 & 0xFFFFFFFFFFFFFFFELL) != v187 )
        {
          v193 = *v191;
          *v191 = 0;
          *v192 = v193;
        }
      }
      else
      {
        v284 = v181;
        do
        {
          v285 = *v186;
          *v186++ = 0;
          v284 += 8LL;
          *(_QWORD *)(v284 - 8) = v285;
        }
        while ( v185 != v186 );
      }
      v194 = *(__int64 **)a1;
      v185 = (__int64 *)(*(_QWORD *)a1 + v184);
      if ( *(__int64 **)a1 != v185 )
      {
        do
        {
          while ( 1 )
          {
            v195 = (void *)*--v185;
            if ( !*v185 )
              break;
            sub_1FD9450(*v185);
            operator delete(v195, 0xD88u);
            if ( v194 == v185 )
              goto LABEL_181;
          }
        }
        while ( v194 != v185 );
LABEL_181:
        v185 = *(__int64 **)a1;
      }
    }
    v196 = v436.m128_i32[0];
    if ( v185 != (__int64 *)v429 )
    {
      v429 = v436.m128_u64[0];
      free(v185);
      v196 = v429;
    }
    v197 = v427;
    v198 = (_BYTE)v428 == 0;
    *(_DWORD *)(a1 + 12) = v196;
    v199 = *(unsigned int *)(a1 + 8);
    *(_QWORD *)a1 = v183;
    v96 = (void **)(v183 + 8 * v197);
    v94 = v199;
    v95 = (void **)(v183 + 8 * v199);
    if ( v198 )
      v96 = &v434;
  }
  v97 = *v96;
  *v96 = nullptr;
  v30 = (unsigned int *)v434;
  *v95 = v97;
  *(_DWORD *)(a1 + 8) = v94 + 1;
  v98 = 1;
  if ( v30 )
    goto LABEL_119;
  return v98;
}
