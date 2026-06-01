void __fastcall sub_135B850(__int64 a1, int a2, __int64 a3, __int64 a4, unsigned __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 v8; // rbp
  unsigned int v9; // esi
  int v10; // eax
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  __int64 v13; // r12
  __int64 v14; // rbp
  unsigned __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  _QWORD *v18; // r15
  __int64 v19; // r11
  __int64 v20; // r14
  _QWORD *j; // rax
  __int64 k; // r12
  unsigned __int64 v23; // r13
  int v24; // edx
  __int64 v25; // r8
  unsigned __int64 v26; // rax
  __int64 v27; // rax
  unsigned __int64 v28; // rsi
  int v29; // ecx
  int v30; // edx
  int v31; // r10d
  __int64 v32; // r9
  unsigned int v33; // ecx
  __int64 v34; // r15
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rsi
  __int64 v37; // rdi
  unsigned __int64 v38; // rdi
  __int64 v39; // rsi
  char v40; // al
  unsigned __int64 *v41; // rcx
  unsigned __int64 v42; // rax
  unsigned __int64 *v43; // r13
  unsigned __int64 *v44; // rdi
  int v45; // eax
  bool v46; // zf
  unsigned __int64 v47; // rcx
  __int64 v48; // rax
  unsigned __int64 v49; // rbp
  unsigned __int64 v50; // rax
  __int64 v51; // rax
  unsigned __int64 v52; // rdx
  int v53; // eax
  unsigned __int64 v54; // rdx
  unsigned __int64 v55; // rax
  unsigned __int64 v56; // rsi
  unsigned __int64 *v57; // r13
  unsigned int v58; // eax
  __int64 v59; // r14
  unsigned __int64 v60; // rdx
  unsigned __int64 v61; // rdi
  __int64 v62; // r8
  __int64 v63; // rax
  unsigned __int64 **v64; // r13
  unsigned __int64 v65; // r12
  unsigned __int64 *v66; // rbp
  __int64 v67; // r13
  unsigned __int64 v68; // rax
  __int64 v69; // rax
  unsigned __int64 v70; // rdx
  int v71; // ecx
  unsigned __int64 v72; // rdx
  int v73; // r10d
  unsigned int v74; // ecx
  unsigned __int64 v75; // rax
  unsigned __int64 v76; // rsi
  __int64 v77; // rdi
  __int64 v78; // rdi
  unsigned __int64 v79; // rax
  __int64 v80; // rax
  unsigned __int64 v81; // rsi
  int v82; // eax
  int v83; // eax
  int v84; // r10d
  unsigned __int64 v85; // rsi
  unsigned __int64 v86; // r8
  __int64 v87; // r9
  __int64 v88; // r9
  unsigned __int64 v89; // rax
  __int64 v90; // rax
  __m128i *v91; // rax
  __int64 *v92; // r15
  __int64 v93; // rdx
  __int64 v94; // r11
  unsigned __int64 *v95; // r10
  int v96; // r9d
  __int64 v97; // rdx
  unsigned __int64 v98; // rcx
  __m128i v99; // xmm0
  unsigned __int64 *v100; // r13
  unsigned __int64 v101; // r14
  unsigned __int64 v102; // rdx
  __int64 v103; // rax
  int v104; // edx
  unsigned int v105; // edx
  unsigned __int64 *v106; // rcx
  unsigned __int64 v107; // rax
  unsigned __int64 v108; // rsi
  __int64 v109; // rdi
  unsigned __int64 v110; // rdi
  __int64 v111; // rsi
  char v112; // al
  unsigned __int64 *v113; // rcx
  unsigned __int64 v114; // rdx
  unsigned __int64 v115; // rcx
  unsigned __int64 v116; // r12
  __int64 v117; // rax
  _QWORD *v118; // r13
  unsigned __int64 v119; // rsi
  unsigned __int64 v120; // r8
  char v121; // dl
  __int64 v122; // rax
  int v123; // edx
  _QWORD *v124; // rax
  int v125; // r14d
  unsigned __int64 v126; // rax
  __int64 v127; // rax
  unsigned __int64 v128; // rcx
  int v129; // ecx
  int v130; // edx
  unsigned __int64 v131; // rax
  unsigned __int64 v132; // rdi
  __int64 v133; // rsi
  __int64 v134; // rsi
  __int64 v135; // rdx
  unsigned __int64 *v136; // rax
  char v137; // al
  __int64 v138; // rdx
  __int64 v139; // rdx
  unsigned __int64 v140; // rcx
  __m128i v141; // xmm0
  unsigned __int64 v142; // rcx
  __int64 v143; // rax
  unsigned __int64 v144; // rbp
  unsigned __int64 v145; // rax
  __int64 v146; // rax
  __m128i *v147; // rax
  __int64 *v148; // r15
  __int64 v149; // rdx
  __int64 v150; // r11
  unsigned __int64 *v151; // r9
  int v152; // r10d
  __int64 v153; // rdx
  unsigned __int64 v154; // rcx
  __m128i v155; // xmm0
  unsigned __int64 v156; // r14
  unsigned __int64 v157; // rdx
  __int64 v158; // rax
  int v159; // edx
  unsigned int v160; // edx
  unsigned __int64 v161; // rax
  unsigned __int64 v162; // rsi
  __int64 v163; // rdi
  unsigned __int64 v164; // rdi
  __int64 v165; // rsi
  char v166; // al
  unsigned __int64 *v167; // rcx
  unsigned __int64 v168; // rax
  void *v169; // r13
  unsigned int v170; // r8d
  void *v171; // rax
  void *v172; // rdi
  unsigned __int64 v173; // rax
  int v174; // eax
  unsigned __int64 v175; // rax
  __int64 v176; // rax
  _QWORD *v177; // rax
  __int64 v178; // r11
  __int64 v179; // r14
  _QWORD *i; // rdx
  __int64 v181; // r12
  unsigned __int64 v182; // r13
  int v183; // edx
  __int64 v184; // r8
  unsigned __int64 v185; // rax
  __int64 v186; // rax
  unsigned __int64 v187; // rcx
  int v188; // ecx
  int v189; // edx
  int v190; // r10d
  __int64 v191; // r9
  unsigned int v192; // ecx
  __int64 v193; // r15
  unsigned __int64 v194; // rax
  unsigned __int64 v195; // rsi
  __int64 v196; // rdi
  unsigned __int64 v197; // rdi
  __int64 v198; // rsi
  char v199; // al
  unsigned __int64 v200; // rax
  void *v201; // r9
  void *v202; // r13
  unsigned int v203; // r8d
  void *v204; // rdi
  unsigned int v205; // eax
  __m128i *v206; // rax
  __int64 v207; // rdx
  unsigned __int64 *v208; // r9
  int v209; // r10d
  __int64 v210; // rdx
  unsigned __int64 v211; // rcx
  __m128i si128; // xmm0
  unsigned __int64 *v213; // r13
  unsigned __int64 v214; // r14
  unsigned __int64 v215; // rdx
  __int64 v216; // rax
  int v217; // edx
  unsigned int v218; // edx
  unsigned __int64 *v219; // rcx
  unsigned __int64 v220; // rax
  unsigned __int64 v221; // rsi
  __int64 v222; // rdi
  unsigned __int64 v223; // rdi
  __int64 v224; // rsi
  char v225; // al
  unsigned __int64 *v226; // rcx
  unsigned __int64 v227; // rax
  __int64 v228; // rcx
  unsigned int v229; // eax
  __m128i *v230; // rax
  __int64 v231; // rdx
  unsigned __int64 *v232; // r9
  int v233; // r10d
  __int64 v234; // rdx
  unsigned __int64 v235; // rcx
  __m128i v236; // xmm0
  unsigned __int64 *v237; // r13
  unsigned __int64 v238; // r14
  unsigned __int64 v239; // rdx
  __int64 v240; // rax
  int v241; // edx
  unsigned int v242; // edx
  unsigned __int64 *v243; // rcx
  unsigned __int64 v244; // rax
  unsigned __int64 v245; // rsi
  __int64 v246; // rdi
  unsigned __int64 v247; // rdi
  __int64 v248; // rsi
  char v249; // al
  unsigned __int64 *v250; // rcx
  unsigned __int64 v251; // rax
  unsigned __int64 v252; // rdx
  __int64 v253; // rdx
  unsigned __int64 v254; // rdi
  int v255; // edx
  __int64 *v256; // r11
  __int64 v257; // r10
  int v258; // edi
  __int64 v259; // r9
  unsigned __int64 v260; // rdx
  _QWORD *v261; // rsi
  _QWORD *v262; // rdx
  unsigned __int64 v263; // rcx
  unsigned __int64 v264; // rdi
  unsigned __int64 v265; // rdi
  unsigned __int64 v266; // rdx
  __int64 *v267; // rdi
  __int64 v268; // rcx
  _DWORD *v269; // rax
  _DWORD *v270; // rdx
  int v271; // eax
  int v272; // eax
  __int64 v273; // rdx
  __int64 v274; // rdx
  unsigned __int64 v275; // rcx
  __m128i v276; // xmm0
  __int64 v277; // rdx
  __int64 v278; // rdx
  __m128i v279; // xmm0
  __int64 v280; // rdx
  __int64 v281; // rdx
  __m128i v282; // xmm0
  unsigned __int64 v283; // rsi
  unsigned __int64 v284; // rcx
  unsigned __int64 v285; // rcx
  unsigned __int64 v286; // rdi
  unsigned __int64 v287; // rdx
  unsigned __int64 v288; // rcx
  unsigned __int64 v289; // rdx
  unsigned __int64 v290; // rax
  unsigned __int64 v291; // rdx
  unsigned __int64 v292; // rax
  unsigned __int64 v293; // rdx
  unsigned __int64 v294; // rax
  size_t v295; // rcx
  void *v296; // rdx
  size_t v297; // rdx
  const void *v298; // rsi
  const void *v299; // rax
  char v300; // al
  __int64 v301; // [rsp+0h] [rbp-98h]
  __int64 v302; // [rsp+8h] [rbp-90h]
  unsigned __int64 *v303; // [rsp+8h] [rbp-90h]
  unsigned __int64 v304; // [rsp+8h] [rbp-90h]
  unsigned __int64 *v305; // [rsp+8h] [rbp-90h]
  __int64 v306; // [rsp+8h] [rbp-90h]
  __int64 v307; // [rsp+8h] [rbp-90h]
  __int64 v308; // [rsp+8h] [rbp-90h]
  unsigned __int64 *v309; // [rsp+8h] [rbp-90h]
  unsigned __int64 *v310; // [rsp+8h] [rbp-90h]
  unsigned int v311; // [rsp+8h] [rbp-90h]
  unsigned int v312; // [rsp+8h] [rbp-90h]
  unsigned int v313; // [rsp+8h] [rbp-90h]
  unsigned int v314; // [rsp+8h] [rbp-90h]
  int v315; // [rsp+8h] [rbp-90h]
  int v316; // [rsp+10h] [rbp-88h]
  int v317; // [rsp+10h] [rbp-88h]
  unsigned int v318; // [rsp+10h] [rbp-88h]
  int v319; // [rsp+10h] [rbp-88h]
  int v320; // [rsp+10h] [rbp-88h]
  int v321; // [rsp+10h] [rbp-88h]
  int v322; // [rsp+10h] [rbp-88h]
  __int64 v323; // [rsp+10h] [rbp-88h]
  __int64 v324; // [rsp+10h] [rbp-88h]
  __int64 v325; // [rsp+10h] [rbp-88h]
  __int64 v326; // [rsp+10h] [rbp-88h]
  int v327; // [rsp+10h] [rbp-88h]
  unsigned int v328; // [rsp+18h] [rbp-80h]
  int v329; // [rsp+18h] [rbp-80h]
  int v330; // [rsp+18h] [rbp-80h]
  int v331; // [rsp+18h] [rbp-80h]
  unsigned int v332; // [rsp+18h] [rbp-80h]
  int v333; // [rsp+18h] [rbp-80h]
  int v334; // [rsp+18h] [rbp-80h]
  unsigned __int64 v335; // [rsp+18h] [rbp-80h]
  __int64 v336; // [rsp+20h] [rbp-78h]
  unsigned __int64 *v337; // [rsp+20h] [rbp-78h]
  unsigned __int64 v338; // [rsp+20h] [rbp-78h]
  unsigned __int64 *v339; // [rsp+20h] [rbp-78h]
  __int64 v340; // [rsp+20h] [rbp-78h]
  unsigned __int64 *v341; // [rsp+20h] [rbp-78h]
  unsigned __int64 *v342; // [rsp+20h] [rbp-78h]
  unsigned int v343; // [rsp+20h] [rbp-78h]
  int v344; // [rsp+28h] [rbp-70h]
  __int64 v345; // [rsp+28h] [rbp-70h]
  unsigned int v346; // [rsp+28h] [rbp-70h]
  __int64 v347; // [rsp+28h] [rbp-70h]
  int v348; // [rsp+28h] [rbp-70h]
  __int64 v349; // [rsp+28h] [rbp-70h]
  unsigned int v350; // [rsp+28h] [rbp-70h]
  __int64 v351; // [rsp+30h] [rbp-68h]
  unsigned __int64 *v352; // [rsp+30h] [rbp-68h]
  unsigned __int64 *v353; // [rsp+30h] [rbp-68h]
  __int64 v354; // [rsp+30h] [rbp-68h]
  unsigned __int64 *v355; // [rsp+30h] [rbp-68h]
  __int64 v356; // [rsp+30h] [rbp-68h]
  int v357; // [rsp+38h] [rbp-60h]
  int v358; // [rsp+38h] [rbp-60h]
  int v359; // [rsp+38h] [rbp-60h]
  unsigned __int64 *v360; // [rsp+38h] [rbp-60h]
  unsigned int v361; // [rsp+44h] [rbp-54h]
  unsigned int v362; // [rsp+44h] [rbp-54h]
  unsigned int v363; // [rsp+44h] [rbp-54h]
  int v364; // [rsp+44h] [rbp-54h]
  unsigned __int64 v365; // [rsp+48h] [rbp-50h] BYREF
  unsigned __int64 v366; // [rsp+50h] [rbp-48h] BYREF
  unsigned __int64 *v367[8]; // [rsp+58h] [rbp-40h] BYREF

  v365 = a6;
  if ( !a6 )
    return;
  v6 = *(_QWORD *)(a1 + 8);
  v8 = *(_QWORD *)(v6 + 88);
  if ( a2 < 0 )
    a2 = sub_10212A0(*(_QWORD *)(v6 + 88), a2);
  v9 = a2 & 0x7FFFFFFF;
  if ( v9 >= *(_DWORD *)(v8 + 476) && v9 < *(_DWORD *)(v8 + 480) )
    v10 = *(_DWORD *)(v8 + 472);
  else
    v10 = sub_101D590(v8, v9);
  LOBYTE(v367[0]) = 0;
  if ( (unsigned int)(v10 + 1) <= 1 )
    return;
  if ( v10 >= 0 )
  {
    v11 = *(_QWORD *)(v8 + 184) + 24LL * (unsigned int)v10;
    goto LABEL_10;
  }
  v116 = (unsigned int)(-2 - v10);
  v117 = *(_QWORD *)(*(_QWORD *)(v8 + 320) + 8LL * ((unsigned int)(-2 - v10) >> 6));
  if ( !_bittest64(&v117, v116) )
  {
    v11 = sub_101F930(v8, v116, v367);
    v121 = (char)v367[0];
    goto LABEL_162;
  }
  v118 = (_QWORD *)(*(_QWORD *)(v8 + 272) + 8 * ((unsigned __int64)(int)v116 >> 5));
  if ( !*v118 )
  {
    v267 = (__int64 *)(*(_QWORD *)(v8 + 288) & 0xFFFFFFFFFFFFFFF8LL);
    v268 = *v267;
    v267[10] += 768;
    v269 = (_DWORD *)((v268 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( v267[1] >= (unsigned __int64)(v269 + 192) && v268 )
      *v267 = (__int64)(v269 + 192);
    else
      v269 = (_DWORD *)sub_986170((__int64)v267, 768, 768, 3, a5, a6);
    *v118 = v269;
    v270 = v269 + 192;
    do
    {
      *v269 = 0;
      v269 += 6;
      *((_OWORD *)v269 - 1) = 0;
      *((_QWORD *)v269 - 1) = 0;
    }
    while ( v269 != v270 );
    v121 = (char)v367[0];
    v11 = *v118 + 24 * (v116 & 0x1F);
LABEL_162:
    if ( v121 )
      return;
    goto LABEL_10;
  }
  v11 = *v118 + 24 * (v116 & 0x1F);
LABEL_10:
  if ( !v11 )
    return;
  if ( *(char *)(v11 + 3) < 0 )
    return;
  v12 = *(_QWORD *)((*(_QWORD *)(v11 + 16) & 0xFFFFFFFFFFFFFFF8LL) + 8);
  v366 = v12;
  if ( !v12 )
    return;
  v13 = *(unsigned int *)(a1 + 136);
  v14 = *(_QWORD *)(a1 + 120);
  v301 = a1 + 120;
  if ( !(_DWORD)v13 )
    goto LABEL_14;
  v50 = v12;
  while ( 1 )
  {
    v51 = *(_QWORD *)(v50 + 8);
    if ( !v51 )
    {
LABEL_63:
      v53 = -1916529075;
      goto LABEL_65;
    }
    v52 = v51 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v51 & 4) == 0 )
      break;
    v50 = v51 & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v52 )
      goto LABEL_63;
  }
  v54 = HIDWORD(v52);
  v55 = 0x9DDFEA08EB382D69LL * (v54 ^ (((8 * v51) & 0x7FFFFFFC0LL) - 0xAE502812AA7333LL));
  v53 = -348639895
      * (((unsigned int)((0x9DDFEA08EB382D69LL * (v55 ^ v54 ^ (v55 >> 47))) >> 32) >> 15)
       ^ (-348639895 * (v55 ^ v54 ^ (v55 >> 47))));
LABEL_65:
  v56 = (unsigned int)(v13 - 1);
  a6 = 1;
  v57 = nullptr;
  v58 = v56 & v53;
  v59 = v14 + 40LL * v58;
  v60 = *(_QWORD *)v59;
  if ( *(_QWORD *)v59 == v12 )
  {
LABEL_78:
    v63 = *(unsigned int *)(v59 + 16);
    v12 = *(unsigned int *)(v59 + 20);
    v64 = (unsigned __int64 **)(v59 + 8);
    v65 = v365;
    if ( v12 < v63 + 1 )
    {
      sub_2237220(v59 + 8, v59 + 24, v63 + 1, 8);
      v63 = *(unsigned int *)(v59 + 16);
    }
    goto LABEL_80;
  }
  while ( v12 != -4096 && v12 != -8192 )
  {
    if ( v60 == -4096 )
      goto LABEL_268;
    if ( v60 == -8192 )
      goto LABEL_477;
    v61 = v12;
    do
    {
      v62 = *(_QWORD *)(v61 + 8);
      if ( !v62 )
      {
        v61 = 0;
        break;
      }
      v61 = v62 & 0xFFFFFFFFFFFFFFF8LL;
    }
    while ( (v62 & 4) != 0 && v61 );
    while ( 1 )
    {
      a5 = *(_QWORD *)(v60 + 8);
      if ( !a5 )
        break;
      v60 = a5 & 0xFFFFFFFFFFFFFFF8LL;
      a5 &= 4u;
      if ( !(_DWORD)a5 || !v60 )
        goto LABEL_77;
    }
    v60 = 0;
LABEL_77:
    if ( v60 == v61 )
      goto LABEL_78;
LABEL_409:
    v58 = v56 & (a6 + v58);
    v59 = v14 + 40LL * v58;
    v60 = *(_QWORD *)v59;
    if ( v12 == *(_QWORD *)v59 )
      goto LABEL_78;
    a6 = (unsigned int)(a6 + 1);
  }
  if ( v60 != -4096 )
  {
    if ( v60 != -8192 )
      goto LABEL_409;
LABEL_477:
    if ( !v57 )
      v57 = (unsigned __int64 *)v59;
    goto LABEL_409;
  }
LABEL_268:
  v174 = *(_DWORD *)(a1 + 128);
  if ( !v57 )
    v57 = (unsigned __int64 *)v59;
  v125 = v174 + 1;
  if ( 4 * (v174 + 1) < (unsigned int)(3 * v13) )
  {
    if ( (int)v13 - *(_DWORD *)(a1 + 132) - v125 > (unsigned int)v13 >> 3 )
      goto LABEL_187;
    v175 = (((v56 >> 1) | v56 | (((v56 >> 1) | v56) >> 2)) >> 4) | (v56 >> 1) | v56 | (((v56 >> 1) | v56) >> 2);
    v176 = ((((v175 >> 8) | v175) >> 16) | (v175 >> 8) | v175) + 1;
    if ( (unsigned int)v176 < 0x40 )
      LODWORD(v176) = 64;
    *(_DWORD *)(a1 + 136) = v176;
    v177 = (_QWORD *)sub_22300B0(40LL * (unsigned int)v176, 8, 64, v12, a5, a6);
    *(_QWORD *)(a1 + 120) = v177;
    if ( !v14 )
    {
      v260 = *(unsigned int *)(a1 + 136);
      *(_QWORD *)(a1 + 128) = 0;
      v12 = v260;
      v261 = &v177[5 * v260];
      if ( v177 != v261 )
      {
        v262 = v177;
        do
        {
          *v262 = -4096;
          v262 += 5;
        }
        while ( v261 != v262 );
      }
      v125 = 1;
      goto LABEL_311;
    }
    *(_QWORD *)(a1 + 128) = 0;
    v178 = 40 * v13;
    v179 = v14 + 40 * v13;
    for ( i = &v177[5 * *(unsigned int *)(a1 + 136)]; i != v177; v177 += 5 )
      *v177 = -4096;
    v181 = v14;
    while ( 1 )
    {
      v182 = *(_QWORD *)v181;
      if ( *(_QWORD *)v181 != -4096 && v182 != -8192 )
      {
        v183 = *(_DWORD *)(a1 + 136);
        if ( !v183 )
        {
          *(_QWORD *)&dword_0 = *(_QWORD *)v181;
          BUG();
        }
        v184 = *(_QWORD *)(a1 + 120);
        v185 = *(_QWORD *)v181;
        while ( 1 )
        {
          v186 = *(_QWORD *)(v185 + 8);
          if ( !v186 )
          {
LABEL_285:
            v188 = -1916529075;
            goto LABEL_286;
          }
          v187 = v186 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (v186 & 4) == 0 )
            break;
          v185 = v186 & 0xFFFFFFFFFFFFFFF8LL;
          if ( !v187 )
            goto LABEL_285;
        }
        v285 = HIDWORD(v187);
        v286 = 0x9DDFEA08EB382D69LL * (v285 ^ (((8 * v186) & 0x7FFFFFFC0LL) - 0xAE502812AA7333LL));
        v188 = -348639895
             * ((-348639895 * ((v286 >> 47) ^ v285 ^ v286))
              ^ ((unsigned int)((0x9DDFEA08EB382D69LL * ((v286 >> 47) ^ v285 ^ v286)) >> 32) >> 15));
LABEL_286:
        v189 = v183 - 1;
        v190 = 1;
        v191 = 0;
        v192 = v189 & v188;
        v193 = v184 + 40LL * v192;
        v194 = *(_QWORD *)v193;
        if ( v182 != *(_QWORD *)v193 )
        {
          while ( v194 != -4096 )
          {
            if ( v194 != -8192 )
            {
              v195 = v182;
              do
              {
                v196 = *(_QWORD *)(v195 + 8);
                if ( !v196 )
                  break;
                v195 = v196 & 0xFFFFFFFFFFFFFFF8LL;
                if ( (v196 & 4) == 0 )
                  break;
              }
              while ( v195 );
              v197 = v196 & 0xFFFFFFFFFFFFFFF8LL;
              do
              {
                v198 = *(_QWORD *)(v194 + 8);
                if ( !v198 )
                  break;
                v194 = v198 & 0xFFFFFFFFFFFFFFF8LL;
                if ( (v198 & 4) == 0 )
                  break;
              }
              while ( v194 );
              if ( v197 == (v198 & 0xFFFFFFFFFFFFFFF8LL) )
                goto LABEL_305;
            }
            v354 = v178;
            v348 = v190;
            v340 = v191;
            v332 = v192;
            v320 = v189;
            v307 = v184;
            v199 = sub_FEE490(*(_QWORD *)v193, 0xFFFFFFFFFFFFE000LL);
            v191 = v340;
            v184 = v307;
            v189 = v320;
            v178 = v354;
            if ( !v340 && v199 )
              v191 = v193;
            v192 = v320 & (v348 + v332);
            v193 = v307 + 40LL * v192;
            v194 = *(_QWORD *)v193;
            if ( v182 == *(_QWORD *)v193 )
              goto LABEL_305;
            v190 = v348 + 1;
          }
          if ( v191 )
            v193 = v191;
        }
LABEL_305:
        v200 = *(_QWORD *)v181;
        v201 = (void *)(v193 + 24);
        v202 = (void *)(v181 + 24);
        *(_QWORD *)(v193 + 8) = v193 + 24;
        *(_QWORD *)v193 = v200;
        *(_QWORD *)(v193 + 16) = 0x200000000LL;
        v203 = *(_DWORD *)(v181 + 16);
        if ( !v203 )
        {
          v204 = *(void **)(v181 + 8);
          goto LABEL_307;
        }
        v204 = *(void **)(v181 + 8);
        if ( v193 + 8 == v181 + 8 )
          goto LABEL_307;
        if ( v204 == v202 )
        {
          if ( v203 <= 2uLL )
          {
            v297 = 8LL * v203;
            v298 = (const void *)(v181 + 24);
            goto LABEL_475;
          }
          v325 = v178;
          v313 = *(_DWORD *)(v181 + 16);
          sub_2237220(v193 + 8, v193 + 24, v203, 8);
          v299 = *(const void **)(v181 + 8);
          v201 = *(void **)(v193 + 8);
          v203 = v313;
          v297 = 8LL * *(unsigned int *)(v181 + 16);
          v298 = v299;
          v178 = v325;
          if ( v297 )
          {
LABEL_475:
            v324 = v178;
            v312 = v203;
            memcpy(v201, v298, v297);
            v299 = *(const void **)(v181 + 8);
            v178 = v324;
            v203 = v312;
          }
          *(_DWORD *)(v193 + 16) = v203;
          v204 = (void *)v299;
          *(_DWORD *)(v181 + 16) = 0;
LABEL_307:
          ++*(_DWORD *)(a1 + 128);
          if ( v204 != v202 )
          {
            v308 = v178;
            free(v204);
            v178 = v308;
          }
          goto LABEL_309;
        }
        *(_DWORD *)(v193 + 16) = v203;
        v272 = *(_DWORD *)(v181 + 20);
        *(_QWORD *)(v193 + 8) = v204;
        *(_DWORD *)(v193 + 20) = v272;
        *(_QWORD *)(v181 + 8) = v202;
        *(_DWORD *)(v181 + 20) = 0;
        *(_DWORD *)(v181 + 16) = 0;
        ++*(_DWORD *)(a1 + 128);
      }
LABEL_309:
      v181 += 40;
      if ( v179 == v181 )
      {
        operator delete(v14, v178, 8);
        v177 = *(_QWORD **)(a1 + 120);
        v12 = *(unsigned int *)(a1 + 136);
        v125 = *(_DWORD *)(a1 + 128) + 1;
LABEL_311:
        if ( !(_DWORD)v12 )
        {
          v135 = 0x10102464C457FLL;
          v57 = nullptr;
          goto LABEL_188;
        }
        v252 = v366;
        do
        {
          v253 = *(_QWORD *)(v252 + 8);
          if ( !v253 )
            break;
          v254 = v253 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (v253 & 4) == 0 )
          {
            v265 = HIDWORD(v254);
            a5 = 0x9DDFEA08EB382D69LL;
            v266 = 0x9DDFEA08EB382D69LL * (v265 ^ (((8 * v253) & 0x7FFFFFFC0LL) - 0xAE502812AA7333LL));
            v255 = -348639895
                 * (((unsigned int)((0x9DDFEA08EB382D69LL * (v266 ^ v265 ^ (v266 >> 47))) >> 32) >> 15)
                  ^ (-348639895 * (v266 ^ v265 ^ (v266 >> 47))));
            goto LABEL_416;
          }
          v252 = v253 & 0xFFFFFFFFFFFFFFF8LL;
        }
        while ( v254 );
        v255 = -1916529075;
LABEL_416:
        v12 = (unsigned int)(v12 - 1);
        v256 = nullptr;
        v257 = (unsigned int)v12 & v255;
        v57 = &v177[5 * v257];
        v258 = 1;
        v135 = *v57;
        if ( v366 == *v57 )
          goto LABEL_188;
        while ( 2 )
        {
          if ( v366 == -4096 || v366 == -8192 )
          {
            if ( v135 == -4096 )
            {
LABEL_489:
              if ( v256 )
              {
                v135 = *v256;
                v57 = (unsigned __int64 *)v256;
                goto LABEL_188;
              }
              *(_DWORD *)(a1 + 128) = v125;
              goto LABEL_190;
            }
            if ( v135 != -8192 )
              goto LABEL_493;
          }
          else
          {
            if ( v135 == -4096 )
              goto LABEL_489;
            if ( v135 != -8192 )
            {
              a5 = v366;
              do
              {
                v259 = *(_QWORD *)(a5 + 8);
                if ( !v259 )
                {
                  a5 = 0;
                  break;
                }
                a5 = v259 & 0xFFFFFFFFFFFFFFF8LL;
              }
              while ( (v259 & 4) != 0 && a5 );
              while ( 1 )
              {
                a6 = *(_QWORD *)(v135 + 8);
                if ( !a6 )
                  break;
                v135 = a6 & 0xFFFFFFFFFFFFFFF8LL;
                a6 &= 4u;
                if ( !(_DWORD)a6 || !v135 )
                  goto LABEL_428;
              }
              v135 = 0;
LABEL_428:
              if ( v135 == a5 )
              {
                *(_DWORD *)(a1 + 128) = v125;
                goto LABEL_189;
              }
              goto LABEL_493;
            }
          }
          if ( !v256 )
            v256 = (__int64 *)v57;
LABEL_493:
          a5 = (unsigned int)(v258 + 1);
          LODWORD(v257) = v12 & (v258 + v257);
          v57 = &v177[5 * (unsigned int)v257];
          v135 = *v57;
          if ( v366 == *v57 )
            goto LABEL_188;
          ++v258;
          continue;
        }
      }
    }
  }
LABEL_14:
  v15 = (((((((unsigned int)(2 * v13 - 1) | ((unsigned __int64)(unsigned int)(2 * v13 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * v13 - 1)
          | ((unsigned __int64)(unsigned int)(2 * v13 - 1) >> 1)) >> 4)
        | (((unsigned int)(2 * v13 - 1) | ((unsigned __int64)(unsigned int)(2 * v13 - 1) >> 1)) >> 2)
        | (unsigned int)(2 * v13 - 1)
        | ((unsigned __int64)(unsigned int)(2 * v13 - 1) >> 1)) >> 8)
      | (((((unsigned int)(2 * v13 - 1) | ((unsigned __int64)(unsigned int)(2 * v13 - 1) >> 1)) >> 2)
        | (unsigned int)(2 * v13 - 1)
        | ((unsigned __int64)(unsigned int)(2 * v13 - 1) >> 1)) >> 4)
      | (((unsigned int)(2 * v13 - 1) | ((unsigned __int64)(unsigned int)(2 * v13 - 1) >> 1)) >> 2)
      | (unsigned int)(2 * v13 - 1)
      | ((unsigned __int64)(unsigned int)(2 * v13 - 1) >> 1);
  v16 = ((v15 >> 16) | v15) + 1;
  if ( (unsigned int)v16 < 0x40 )
    LODWORD(v16) = 64;
  *(_DWORD *)(a1 + 136) = v16;
  v17 = sub_22300B0(40LL * (unsigned int)v16, 8, 64, v12, a5, a6);
  v18 = (_QWORD *)v17;
  *(_QWORD *)(a1 + 120) = v17;
  if ( v14 )
  {
    *(_QWORD *)(a1 + 128) = 0;
    v19 = 40 * v13;
    v20 = v14 + 40 * v13;
    for ( j = (_QWORD *)(v17 + 40LL * *(unsigned int *)(a1 + 136)); j != v18; v18 += 5 )
      *v18 = -4096;
    if ( v14 != v20 )
    {
      for ( k = v14; v20 != k; k += 40 )
      {
        v23 = *(_QWORD *)k;
        if ( *(_QWORD *)k != -4096 && v23 != -8192 )
        {
          v24 = *(_DWORD *)(a1 + 136);
          if ( !v24 )
          {
            *(_QWORD *)&dword_0 = *(_QWORD *)k;
            BUG();
          }
          v25 = *(_QWORD *)(a1 + 120);
          v26 = *(_QWORD *)k;
          while ( 1 )
          {
            v27 = *(_QWORD *)(v26 + 8);
            if ( !v27 )
            {
LABEL_28:
              v29 = -1916529075;
              goto LABEL_29;
            }
            v28 = v27 & 0xFFFFFFFFFFFFFFF8LL;
            if ( (v27 & 4) == 0 )
              break;
            v26 = v27 & 0xFFFFFFFFFFFFFFF8LL;
            if ( !v28 )
              goto LABEL_28;
          }
          v283 = HIDWORD(v28);
          v284 = 0x9DDFEA08EB382D69LL * (v283 ^ (((8 * v27) & 0x7FFFFFFC0LL) - 0xAE502812AA7333LL));
          v29 = -348639895
              * ((-348639895 * ((v284 >> 47) ^ v283 ^ v284))
               ^ ((unsigned int)((0x9DDFEA08EB382D69LL * ((v284 >> 47) ^ v283 ^ v284)) >> 32) >> 15));
LABEL_29:
          v30 = v24 - 1;
          v31 = 1;
          v32 = 0;
          v33 = v30 & v29;
          v34 = v25 + 40LL * v33;
          v35 = *(_QWORD *)v34;
          if ( *(_QWORD *)v34 != v23 )
          {
            while ( v35 != -4096 )
            {
              if ( v35 != -8192 )
              {
                v36 = v23;
                do
                {
                  v37 = *(_QWORD *)(v36 + 8);
                  if ( !v37 )
                    break;
                  v36 = v37 & 0xFFFFFFFFFFFFFFF8LL;
                  if ( (v37 & 4) == 0 )
                    break;
                }
                while ( v36 );
                v38 = v37 & 0xFFFFFFFFFFFFFFF8LL;
                do
                {
                  v39 = *(_QWORD *)(v35 + 8);
                  if ( !v39 )
                    break;
                  v35 = v39 & 0xFFFFFFFFFFFFFFF8LL;
                  if ( (v39 & 4) == 0 )
                    break;
                }
                while ( v35 );
                if ( v38 == (v39 & 0xFFFFFFFFFFFFFFF8LL) )
                  goto LABEL_255;
              }
              v351 = v19;
              v344 = v31;
              v336 = v32;
              v328 = v33;
              v316 = v30;
              v302 = v25;
              v40 = sub_FEE490(*(_QWORD *)v34, 0xFFFFFFFFFFFFE000LL);
              v32 = v336;
              v25 = v302;
              v30 = v316;
              v19 = v351;
              if ( !v336 && v40 )
                v32 = v34;
              v33 = v316 & (v344 + v328);
              v34 = v302 + 40LL * v33;
              v35 = *(_QWORD *)v34;
              if ( *(_QWORD *)v34 == v23 )
                goto LABEL_255;
              v31 = v344 + 1;
            }
            if ( v32 )
              v34 = v32;
          }
LABEL_255:
          v168 = *(_QWORD *)k;
          v169 = (void *)(k + 24);
          *(_QWORD *)(v34 + 16) = 0x200000000LL;
          v170 = *(_DWORD *)(k + 16);
          *(_QWORD *)v34 = v168;
          v171 = (void *)(v34 + 24);
          *(_QWORD *)(v34 + 8) = v34 + 24;
          if ( !v170 )
          {
            v172 = *(void **)(k + 8);
LABEL_257:
            ++*(_DWORD *)(a1 + 128);
            if ( v169 != v172 )
            {
              v306 = v19;
              free(v172);
              v19 = v306;
            }
            continue;
          }
          v172 = *(void **)(k + 8);
          if ( v34 + 8 == k + 8 )
            goto LABEL_257;
          if ( v169 == v172 )
          {
            v295 = 8LL * v170;
            if ( v170 <= 2uLL
              || (v326 = v19,
                  v314 = v170,
                  sub_2237220(v34 + 8, v34 + 24, v170, 8),
                  v296 = *(void **)(k + 8),
                  v171 = *(void **)(v34 + 8),
                  v170 = v314,
                  v295 = 8LL * *(unsigned int *)(k + 16),
                  v172 = v296,
                  v19 = v326,
                  v295) )
            {
              v323 = v19;
              v311 = v170;
              memcpy(v171, v172, v295);
              v296 = *(void **)(k + 8);
              v19 = v323;
              v170 = v311;
            }
            *(_DWORD *)(v34 + 16) = v170;
            v172 = v296;
            *(_DWORD *)(k + 16) = 0;
            goto LABEL_257;
          }
          *(_DWORD *)(v34 + 16) = v170;
          v271 = *(_DWORD *)(k + 20);
          *(_QWORD *)(v34 + 8) = v172;
          *(_DWORD *)(v34 + 20) = v271;
          *(_QWORD *)(k + 8) = v169;
          *(_DWORD *)(k + 20) = 0;
          *(_DWORD *)(k + 16) = 0;
          ++*(_DWORD *)(a1 + 128);
        }
      }
    }
    operator delete(v14, v19, 8);
    v18 = *(_QWORD **)(a1 + 120);
    v123 = *(_DWORD *)(a1 + 136);
    v125 = *(_DWORD *)(a1 + 128) + 1;
  }
  else
  {
    v122 = *(unsigned int *)(a1 + 136);
    *(_QWORD *)(a1 + 128) = 0;
    v123 = v122;
    v12 = (unsigned __int64)&v18[5 * v122];
    if ( v18 != (_QWORD *)v12 )
    {
      v124 = v18;
      do
      {
        *v124 = -4096;
        v124 += 5;
      }
      while ( (_QWORD *)v12 != v124 );
    }
    v125 = 1;
  }
  v57 = nullptr;
  if ( !v123 )
    goto LABEL_187;
  v126 = v366;
  while ( 1 )
  {
    v127 = *(_QWORD *)(v126 + 8);
    if ( !v127 )
    {
LABEL_173:
      v129 = -1916529075;
      goto LABEL_174;
    }
    v128 = v127 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v127 & 4) == 0 )
      break;
    v126 = v127 & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v128 )
      goto LABEL_173;
  }
  v263 = HIDWORD(v128);
  v264 = 0x9DDFEA08EB382D69LL * (v263 ^ (((8 * v127) & 0x7FFFFFFC0LL) - 0xAE502812AA7333LL));
  v129 = -348639895
       * ((-348639895 * ((v264 >> 47) ^ v263 ^ v264))
        ^ ((unsigned int)((0x9DDFEA08EB382D69LL * ((v264 >> 47) ^ v263 ^ v264)) >> 32) >> 15));
LABEL_174:
  v130 = v123 - 1;
  a6 = 1;
  a5 = 0;
  v12 = v130 & (unsigned int)v129;
  v57 = &v18[5 * (unsigned int)v12];
  v131 = *v57;
  if ( v366 == *v57 )
    goto LABEL_187;
  while ( v366 != -4096 && v366 != -8192 )
  {
    if ( v131 == -4096 )
      goto LABEL_483;
    if ( v131 != -8192 )
    {
      v132 = v366;
      do
      {
        v133 = *(_QWORD *)(v132 + 8);
        if ( !v133 )
        {
          v132 = 0;
          break;
        }
        v132 = v133 & 0xFFFFFFFFFFFFFFF8LL;
      }
      while ( (v133 & 4) != 0 && v132 );
      while ( 1 )
      {
        v134 = *(_QWORD *)(v131 + 8);
        if ( !v134 )
          break;
        v131 = v134 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v134 & 4) == 0 || !v131 )
          goto LABEL_186;
      }
      v131 = 0;
LABEL_186:
      if ( v131 == v132 )
        goto LABEL_187;
    }
LABEL_500:
    v343 = a6;
    v335 = a5;
    v327 = v130;
    v315 = v12;
    v300 = sub_FEE490(*v57, 0xFFFFFFFFFFFFE000LL);
    a5 = v335;
    v130 = v327;
    a6 = v343;
    if ( !v335 && v300 )
      a5 = (unsigned __int64)v57;
    v12 = v327 & (v343 + v315);
    v57 = &v18[5 * (unsigned int)v12];
    v131 = *v57;
    if ( v366 == *v57 )
      goto LABEL_187;
    a6 = v343 + 1;
  }
  if ( v131 != -4096 )
    goto LABEL_500;
LABEL_483:
  if ( a5 )
    v57 = (unsigned __int64 *)a5;
LABEL_187:
  v135 = *v57;
LABEL_188:
  *(_DWORD *)(a1 + 128) = v125;
  if ( v135 != -4096 )
LABEL_189:
    --*(_DWORD *)(a1 + 132);
LABEL_190:
  *v57 = v366;
  v136 = v57 + 3;
  v65 = v365;
  v64 = (unsigned __int64 **)(v57 + 1);
  *v64 = v136;
  v64[1] = (unsigned __int64 *)0x200000000LL;
  v63 = 0;
LABEL_80:
  (*v64)[v63] = v65;
  v66 = *(unsigned __int64 **)(a1 + 80);
  ++*((_DWORD *)v64 + 2);
  v67 = *(unsigned int *)(a1 + 96);
  if ( !(_DWORD)v67 )
  {
    v367[0] = nullptr;
    goto LABEL_119;
  }
  v68 = v365;
  while ( 1 )
  {
    v69 = *(_QWORD *)(v68 + 8);
    if ( !v69 )
    {
LABEL_85:
      v71 = -1916529075;
      goto LABEL_86;
    }
    v70 = v69 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v69 & 4) == 0 )
      break;
    v68 = v69 & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v70 )
      goto LABEL_85;
  }
  v114 = HIDWORD(v70);
  v115 = 0x9DDFEA08EB382D69LL * (v114 ^ (((8 * v69) & 0x7FFFFFFC0LL) - 0xAE502812AA7333LL));
  v71 = -348639895
      * ((-348639895 * ((v115 >> 47) ^ v114 ^ v115))
       ^ ((unsigned int)((0x9DDFEA08EB382D69LL * ((v115 >> 47) ^ v114 ^ v115)) >> 32) >> 15));
LABEL_86:
  v72 = (unsigned int)(v67 - 1);
  v73 = 1;
  a5 = 0;
  v74 = v72 & v71;
  a6 = (__int64)&v66[v74];
  v75 = *(_QWORD *)a6;
  if ( v365 == *(_QWORD *)a6 )
    goto LABEL_99;
  while ( 2 )
  {
    if ( v365 != -4096 && v365 != -8192 )
    {
      if ( v75 == -4096 )
        break;
      if ( v75 != -8192 )
      {
        v76 = v365;
        do
        {
          v77 = *(_QWORD *)(v76 + 8);
          if ( !v77 )
          {
            v76 = 0;
            break;
          }
          v76 = v77 & 0xFFFFFFFFFFFFFFF8LL;
        }
        while ( (v77 & 4) != 0 && v76 );
        while ( 1 )
        {
          v78 = *(_QWORD *)(v75 + 8);
          if ( !v78 )
            break;
          v75 = v78 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (v78 & 4) == 0 || !v75 )
            goto LABEL_98;
        }
        v75 = 0;
LABEL_98:
        if ( v76 == v75 )
          goto LABEL_99;
      }
      goto LABEL_192;
    }
    if ( v75 != -4096 )
    {
LABEL_192:
      v346 = v72;
      v338 = a5;
      v330 = v73;
      v318 = v74;
      v304 = a6;
      v137 = sub_FEE490(*(_QWORD *)a6, 0xFFFFFFFFFFFFE000LL);
      a5 = v338;
      v72 = v346;
      if ( !v338 && v137 )
        a5 = v304;
      v74 = v346 & (v330 + v318);
      a6 = (__int64)&v66[v74];
      v75 = *(_QWORD *)a6;
      if ( v365 == *(_QWORD *)a6 )
        goto LABEL_99;
      v73 = v330 + 1;
      continue;
    }
    break;
  }
  if ( !a5 )
    a5 = a6;
  v12 = (unsigned int)(*(_DWORD *)(a1 + 88) + 1);
  v367[0] = (unsigned __int64 *)a5;
  if ( 4 * (int)v12 < (unsigned int)(3 * v67) )
  {
    if ( (int)v67 - *(_DWORD *)(a1 + 92) - (int)v12 <= (unsigned int)v67 >> 3 )
    {
      v205 = (((((((((v72 | (v72 >> 1)) >> 2) | v72 | (v72 >> 1)) >> 4) | ((v72 | (v72 >> 1)) >> 2) | v72 | (v72 >> 1)) >> 8)
              | ((((v72 | (v72 >> 1)) >> 2) | v72 | (v72 >> 1)) >> 4)
              | ((v72 | (v72 >> 1)) >> 2)
              | v72
              | (v72 >> 1)) >> 16)
            | ((((((v72 | (v72 >> 1)) >> 2) | v72 | (v72 >> 1)) >> 4) | ((v72 | (v72 >> 1)) >> 2) | v72 | (v72 >> 1)) >> 8)
            | ((((v72 | (v72 >> 1)) >> 2) | v72 | (v72 >> 1)) >> 4)
            | ((v72 | (v72 >> 1)) >> 2)
            | v72
            | (v72 >> 1))
           + 1;
      if ( v205 < 0x40 )
        v205 = 64;
      *(_DWORD *)(a1 + 96) = v205;
      v206 = (__m128i *)sub_22300B0(8LL * v205, 8, 64, v12, a5, a6);
      v92 = (__int64 *)v206;
      *(_QWORD *)(a1 + 80) = v206;
      if ( v66 )
      {
        v207 = *(unsigned int *)(a1 + 96);
        v94 = 8 * v67;
        *(_QWORD *)(a1 + 88) = 0;
        v208 = &v66[v67];
        v209 = v207;
        v210 = 8 * v207;
        if ( v206 != (__m128i *)&v206->m128i_i8[v210] )
        {
          v211 = ((unsigned __int64)(v210 - 8) >> 3) + 1;
          if ( v210 == 8 )
            goto LABEL_327;
          si128 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
          do
            *v206++ = si128;
          while ( v206 != (__m128i *)&v92[2 * (v211 >> 1)] );
          v206 = (__m128i *)&v92[v211 & 0xFFFFFFFFFFFFFFFELL];
          if ( (v211 & 0xFFFFFFFFFFFFFFFELL) != v211 )
LABEL_327:
            v206->m128i_i64[0] = -4096;
        }
        v213 = v66;
        do
        {
          v214 = *v213;
          if ( *v213 != -4096 && v214 != -8192 )
          {
            if ( !v209 )
            {
              *(_QWORD *)&dword_0 = *v213;
              BUG();
            }
            v215 = *v213;
            while ( 1 )
            {
              v216 = *(_QWORD *)(v215 + 8);
              if ( !v216 )
              {
LABEL_336:
                v217 = -1916529075;
                goto LABEL_337;
              }
              v215 = v216 & 0xFFFFFFFFFFFFFFF8LL;
              if ( (v216 & 4) == 0 )
                break;
              if ( !v215 )
                goto LABEL_336;
            }
            v291 = HIDWORD(v215);
            v292 = 0x9DDFEA08EB382D69LL * (v291 ^ (((8 * v216) & 0x7FFFFFFC0LL) - 0xAE502812AA7333LL));
            v217 = -348639895
                 * ((-348639895 * (v292 ^ v291 ^ (v292 >> 47)))
                  ^ ((unsigned int)((0x9DDFEA08EB382D69LL * (v292 ^ v291 ^ (v292 >> 47))) >> 32) >> 15));
LABEL_337:
            v321 = 1;
            v218 = (v209 - 1) & v217;
            v333 = v209 - 1;
            v309 = nullptr;
            v219 = (unsigned __int64 *)&v92[v218];
            v220 = *v219;
            if ( *v219 != v214 )
            {
              while ( v220 != -4096 )
              {
                if ( v220 != -8192 )
                {
                  v221 = v214;
                  do
                  {
                    v222 = *(_QWORD *)(v221 + 8);
                    if ( !v222 )
                      break;
                    v221 = v222 & 0xFFFFFFFFFFFFFFF8LL;
                    if ( (v222 & 4) == 0 )
                      break;
                  }
                  while ( v221 );
                  v223 = v222 & 0xFFFFFFFFFFFFFFF8LL;
                  do
                  {
                    v224 = *(_QWORD *)(v220 + 8);
                    if ( !v224 )
                      break;
                    v220 = v224 & 0xFFFFFFFFFFFFFFF8LL;
                    if ( (v224 & 4) == 0 )
                      break;
                  }
                  while ( v220 );
                  if ( v223 == (v224 & 0xFFFFFFFFFFFFFFF8LL) )
                    goto LABEL_357;
                }
                v363 = v218;
                v359 = v209;
                v355 = v208;
                v349 = v94;
                v341 = v219;
                v225 = sub_FEE490(*v219, 0xFFFFFFFFFFFFE000LL);
                v94 = v349;
                v208 = v355;
                v209 = v359;
                if ( !v309 )
                {
                  v226 = v341;
                  if ( !v225 )
                    v226 = nullptr;
                  v309 = v226;
                }
                v218 = v333 & (v321 + v363);
                v219 = (unsigned __int64 *)&v92[v218];
                v220 = *v219;
                if ( v214 == *v219 )
                  goto LABEL_357;
                ++v321;
              }
              if ( v309 )
                v219 = v309;
            }
LABEL_357:
            v227 = *v213;
            ++*(_DWORD *)(a1 + 88);
            *v219 = v227;
          }
          ++v213;
        }
        while ( v208 != v213 );
        goto LABEL_265;
      }
      v277 = *(unsigned int *)(a1 + 96);
      *(_QWORD *)(a1 + 88) = 0;
      v278 = 8 * v277;
      if ( v206 != (__m128i *)&v206->m128i_i8[v278] )
      {
        v140 = ((unsigned __int64)(v278 - 8) >> 3) + 1;
        if ( v278 != 8 )
        {
          v279 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
          do
            *v206++ = v279;
          while ( v206 != (__m128i *)&v92[2 * (v140 >> 1)] );
          goto LABEL_207;
        }
        goto LABEL_208;
      }
      goto LABEL_209;
    }
    goto LABEL_210;
  }
LABEL_119:
  v89 = (((((((unsigned int)(2 * v67 - 1) | ((unsigned __int64)(unsigned int)(2 * v67 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * v67 - 1)
          | ((unsigned __int64)(unsigned int)(2 * v67 - 1) >> 1)) >> 4)
        | (((unsigned int)(2 * v67 - 1) | ((unsigned __int64)(unsigned int)(2 * v67 - 1) >> 1)) >> 2)
        | (unsigned int)(2 * v67 - 1)
        | ((unsigned __int64)(unsigned int)(2 * v67 - 1) >> 1)) >> 8)
      | (((((unsigned int)(2 * v67 - 1) | ((unsigned __int64)(unsigned int)(2 * v67 - 1) >> 1)) >> 2)
        | (unsigned int)(2 * v67 - 1)
        | ((unsigned __int64)(unsigned int)(2 * v67 - 1) >> 1)) >> 4)
      | (((unsigned int)(2 * v67 - 1) | ((unsigned __int64)(unsigned int)(2 * v67 - 1) >> 1)) >> 2)
      | (unsigned int)(2 * v67 - 1)
      | ((unsigned __int64)(unsigned int)(2 * v67 - 1) >> 1);
  v90 = ((v89 >> 16) | v89) + 1;
  if ( (unsigned int)v90 < 0x40 )
    LODWORD(v90) = 64;
  *(_DWORD *)(a1 + 96) = v90;
  v91 = (__m128i *)sub_22300B0(8LL * (unsigned int)v90, 8, 64, v12, a5, a6);
  v92 = (__int64 *)v91;
  *(_QWORD *)(a1 + 80) = v91;
  if ( v66 )
  {
    v93 = *(unsigned int *)(a1 + 96);
    v94 = 8 * v67;
    *(_QWORD *)(a1 + 88) = 0;
    v95 = &v66[v67];
    v96 = v93;
    v97 = 8 * v93;
    if ( v91 != (__m128i *)&v91->m128i_i8[v97] )
    {
      v98 = ((unsigned __int64)(v97 - 8) >> 3) + 1;
      if ( v97 == 8 )
        goto LABEL_127;
      v99 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
      do
        *v91++ = v99;
      while ( v91 != (__m128i *)&v92[2 * (v98 >> 1)] );
      v91 = (__m128i *)&v92[v98 & 0xFFFFFFFFFFFFFFFELL];
      if ( (v98 & 0xFFFFFFFFFFFFFFFELL) != v98 )
LABEL_127:
        v91->m128i_i64[0] = -4096;
    }
    if ( v66 != v95 )
    {
      v100 = v66;
      do
      {
        v101 = *v100;
        if ( *v100 != -4096 && v101 != -8192 )
        {
          if ( !v96 )
          {
            *(_QWORD *)&dword_0 = *v100;
            BUG();
          }
          v102 = *v100;
          while ( 1 )
          {
            v103 = *(_QWORD *)(v102 + 8);
            if ( !v103 )
            {
LABEL_137:
              v104 = -1916529075;
              goto LABEL_138;
            }
            v102 = v103 & 0xFFFFFFFFFFFFFFF8LL;
            if ( (v103 & 4) == 0 )
              break;
            if ( !v102 )
              goto LABEL_137;
          }
          v287 = HIDWORD(v102);
          v288 = 0x9DDFEA08EB382D69LL * (v287 ^ (((8 * v103) & 0x7FFFFFFC0LL) - 0xAE502812AA7333LL));
          v104 = -348639895
               * ((-348639895 * ((v288 >> 47) ^ v287 ^ v288))
                ^ ((unsigned int)((0x9DDFEA08EB382D69LL * ((v288 >> 47) ^ v287 ^ v288)) >> 32) >> 15));
LABEL_138:
          v317 = 1;
          v105 = (v96 - 1) & v104;
          v329 = v96 - 1;
          v303 = nullptr;
          v106 = (unsigned __int64 *)&v92[v105];
          v107 = *v106;
          if ( *v106 != v101 )
          {
            while ( v107 != -4096 )
            {
              if ( v107 != -8192 )
              {
                v108 = v101;
                do
                {
                  v109 = *(_QWORD *)(v108 + 8);
                  if ( !v109 )
                    break;
                  v108 = v109 & 0xFFFFFFFFFFFFFFF8LL;
                  if ( (v109 & 4) == 0 )
                    break;
                }
                while ( v108 );
                v110 = v109 & 0xFFFFFFFFFFFFFFF8LL;
                do
                {
                  v111 = *(_QWORD *)(v107 + 8);
                  if ( !v111 )
                    break;
                  v107 = v111 & 0xFFFFFFFFFFFFFFF8LL;
                  if ( (v111 & 4) == 0 )
                    break;
                }
                while ( v107 );
                if ( v110 == (v111 & 0xFFFFFFFFFFFFFFF8LL) )
                  goto LABEL_263;
              }
              v361 = v105;
              v357 = v96;
              v352 = v95;
              v345 = v94;
              v337 = v106;
              v112 = sub_FEE490(*v106, 0xFFFFFFFFFFFFE000LL);
              v94 = v345;
              v95 = v352;
              v96 = v357;
              if ( !v303 )
              {
                v113 = v337;
                if ( !v112 )
                  v113 = nullptr;
                v303 = v113;
              }
              v105 = v329 & (v317 + v361);
              v106 = (unsigned __int64 *)&v92[v105];
              v107 = *v106;
              if ( *v106 == v101 )
                goto LABEL_263;
              ++v317;
            }
            if ( v303 )
              v106 = v303;
          }
LABEL_263:
          v173 = *v100;
          ++*(_DWORD *)(a1 + 88);
          *v106 = v173;
        }
        ++v100;
      }
      while ( v95 != v100 );
    }
LABEL_265:
    operator delete(v66, v94, 8);
  }
  else
  {
    v138 = *(unsigned int *)(a1 + 96);
    *(_QWORD *)(a1 + 88) = 0;
    v139 = 8 * v138;
    if ( v91 != (__m128i *)&v91->m128i_i8[v139] )
    {
      v140 = ((unsigned __int64)(v139 - 8) >> 3) + 1;
      if ( v139 == 8 )
        goto LABEL_208;
      v141 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
      do
        *v91++ = v141;
      while ( &v92[2 * (v140 >> 1)] != (__int64 *)v91 );
LABEL_207:
      v92 += v140 & 0xFFFFFFFFFFFFFFFELL;
      if ( (v140 & 0xFFFFFFFFFFFFFFFELL) != v140 )
LABEL_208:
        *v92 = -4096;
    }
  }
LABEL_209:
  sub_FF2870((__int64 *)(a1 + 80), &v365, v367);
  a5 = (unsigned __int64)v367[0];
  LODWORD(v12) = *(_DWORD *)(a1 + 88) + 1;
LABEL_210:
  v46 = *(_QWORD *)a5 == -4096;
  *(_DWORD *)(a1 + 88) = v12;
  if ( !v46 )
    --*(_DWORD *)(a1 + 92);
  v142 = *(unsigned int *)(a1 + 116);
  *(_QWORD *)a5 = v365;
  v143 = *(unsigned int *)(a1 + 112);
  v144 = v365;
  if ( v143 + 1 > v142 )
  {
    sub_2237220(a1 + 104, v301, v143 + 1, 8);
    v143 = *(unsigned int *)(a1 + 112);
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 104) + 8 * v143) = v144;
  v67 = *(unsigned int *)(a1 + 96);
  ++*(_DWORD *)(a1 + 112);
  v66 = *(unsigned __int64 **)(a1 + 80);
  if ( !(_DWORD)v67 )
  {
    v367[0] = nullptr;
    goto LABEL_216;
  }
  v72 = (unsigned int)(v67 - 1);
LABEL_99:
  v79 = v366;
  while ( 1 )
  {
    v80 = *(_QWORD *)(v79 + 8);
    if ( !v80 )
    {
LABEL_103:
      v82 = -1916529075;
      goto LABEL_104;
    }
    v81 = v80 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v80 & 4) == 0 )
      break;
    v79 = v80 & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v81 )
      goto LABEL_103;
  }
  v119 = HIDWORD(v81);
  v120 = 0x9DDFEA08EB382D69LL * (v119 ^ (((8 * v80) & 0x7FFFFFFC0LL) - 0xAE502812AA7333LL));
  v82 = -348639895
      * ((-348639895 * ((v120 >> 47) ^ v119 ^ v120))
       ^ ((unsigned int)((0x9DDFEA08EB382D69LL * ((v120 >> 47) ^ v119 ^ v120)) >> 32) >> 15));
LABEL_104:
  v83 = v72 & v82;
  v84 = 1;
  v44 = nullptr;
  a5 = (unsigned __int64)&v66[v83];
  v85 = *(_QWORD *)a5;
  if ( v366 == *(_QWORD *)a5 )
    return;
  while ( 2 )
  {
    if ( v366 != -4096 && v366 != -8192 )
    {
      if ( v85 == -4096 )
        goto LABEL_362;
      if ( v85 != -8192 )
      {
        v86 = v366;
        do
        {
          v87 = *(_QWORD *)(v86 + 8);
          if ( !v87 )
          {
            v86 = 0;
            break;
          }
          v86 = v87 & 0xFFFFFFFFFFFFFFF8LL;
        }
        while ( (v87 & 4) != 0 && v86 );
        while ( 1 )
        {
          v88 = *(_QWORD *)(v85 + 8);
          if ( !v88 )
            break;
          v85 = v88 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (v88 & 4) == 0 || !v85 )
            goto LABEL_116;
        }
        v85 = 0;
LABEL_116:
        if ( v85 == v86 )
          return;
        goto LABEL_201;
      }
LABEL_199:
      if ( !v44 )
        v44 = (unsigned __int64 *)a5;
LABEL_201:
      a6 = (unsigned int)(v84 + 1);
      v83 = v72 & (v84 + v83);
      a5 = (unsigned __int64)&v66[v83];
      v85 = *(_QWORD *)a5;
      if ( v366 == *(_QWORD *)a5 )
        return;
      ++v84;
      continue;
    }
    break;
  }
  if ( v85 != -4096 )
  {
    if ( v85 == -8192 )
      goto LABEL_199;
    goto LABEL_201;
  }
LABEL_362:
  v142 = (unsigned int)(3 * v67);
  if ( !v44 )
    v44 = (unsigned __int64 *)a5;
  v45 = *(_DWORD *)(a1 + 88) + 1;
  v367[0] = v44;
  if ( 4 * v45 < (unsigned int)v142 )
  {
    v228 = (unsigned int)v67 >> 3;
    if ( (int)v67 - (v45 + *(_DWORD *)(a1 + 92)) <= (unsigned int)v228 )
    {
      v229 = ((((((((v72 >> 1) | v72 | (((v72 >> 1) | v72) >> 2)) >> 4) | (v72 >> 1) | v72 | (((v72 >> 1) | v72) >> 2)) >> 8)
              | (((v72 >> 1) | v72 | (((v72 >> 1) | v72) >> 2)) >> 4)
              | (v72 >> 1)
              | v72
              | (((v72 >> 1) | v72) >> 2)) >> 16)
            | (((((v72 >> 1) | v72 | (((v72 >> 1) | v72) >> 2)) >> 4) | (v72 >> 1) | v72 | (((v72 >> 1) | v72) >> 2)) >> 8)
            | (((v72 >> 1) | v72 | (((v72 >> 1) | v72) >> 2)) >> 4)
            | (v72 >> 1)
            | v72
            | (((v72 >> 1) | v72) >> 2))
           + 1;
      if ( v229 < 0x40 )
        v229 = 64;
      *(_DWORD *)(a1 + 96) = v229;
      v230 = (__m128i *)sub_22300B0(8LL * v229, 8, 64, v228, a5, a6);
      v148 = (__int64 *)v230;
      *(_QWORD *)(a1 + 80) = v230;
      if ( v66 )
      {
        v231 = *(unsigned int *)(a1 + 96);
        v150 = 8 * v67;
        *(_QWORD *)(a1 + 88) = 0;
        v232 = &v66[v67];
        v233 = v231;
        v234 = 8 * v231;
        if ( v230 != (__m128i *)&v230->m128i_i8[v234] )
        {
          v235 = ((unsigned __int64)(v234 - 8) >> 3) + 1;
          if ( v234 == 8 )
            goto LABEL_374;
          v236 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
          do
            *v230++ = v236;
          while ( &v148[2 * (v235 >> 1)] != (__int64 *)v230 );
          v230 = (__m128i *)&v148[v235 & 0xFFFFFFFFFFFFFFFELL];
          if ( (v235 & 0xFFFFFFFFFFFFFFFELL) != v235 )
LABEL_374:
            v230->m128i_i64[0] = -4096;
        }
        v237 = v66;
        do
        {
          v238 = *v237;
          if ( *v237 != -4096 && v238 != -8192 )
          {
            if ( !v233 )
            {
              *(_QWORD *)&dword_0 = *v237;
              BUG();
            }
            v239 = *v237;
            while ( 1 )
            {
              v240 = *(_QWORD *)(v239 + 8);
              if ( !v240 )
              {
LABEL_383:
                v241 = -1916529075;
                goto LABEL_384;
              }
              v239 = v240 & 0xFFFFFFFFFFFFFFF8LL;
              if ( (v240 & 4) == 0 )
                break;
              if ( !v239 )
                goto LABEL_383;
            }
            v293 = HIDWORD(v239);
            v294 = 0x9DDFEA08EB382D69LL * (v293 ^ (((8 * v240) & 0x7FFFFFFC0LL) - 0xAE502812AA7333LL));
            v241 = -348639895
                 * ((-348639895 * (v294 ^ v293 ^ (v294 >> 47)))
                  ^ ((unsigned int)((0x9DDFEA08EB382D69LL * (v294 ^ v293 ^ (v294 >> 47))) >> 32) >> 15));
LABEL_384:
            v322 = 1;
            v242 = (v233 - 1) & v241;
            v334 = v233 - 1;
            v310 = nullptr;
            v243 = (unsigned __int64 *)&v148[v242];
            v244 = *v243;
            if ( v238 != *v243 )
            {
              while ( v244 != -4096 )
              {
                if ( v244 != -8192 )
                {
                  v245 = v238;
                  do
                  {
                    v246 = *(_QWORD *)(v245 + 8);
                    if ( !v246 )
                      break;
                    v245 = v246 & 0xFFFFFFFFFFFFFFF8LL;
                    if ( (v246 & 4) == 0 )
                      break;
                  }
                  while ( v245 );
                  v247 = v246 & 0xFFFFFFFFFFFFFFF8LL;
                  do
                  {
                    v248 = *(_QWORD *)(v244 + 8);
                    if ( !v248 )
                      break;
                    v244 = v248 & 0xFFFFFFFFFFFFFFF8LL;
                    if ( (v248 & 4) == 0 )
                      break;
                  }
                  while ( v244 );
                  if ( v247 == (v248 & 0xFFFFFFFFFFFFFFF8LL) )
                    goto LABEL_404;
                }
                v364 = v233;
                v360 = v232;
                v356 = v150;
                v350 = v242;
                v342 = v243;
                v249 = sub_FEE490(*v243, 0xFFFFFFFFFFFFE000LL);
                v150 = v356;
                v232 = v360;
                v233 = v364;
                if ( !v310 )
                {
                  v250 = v342;
                  if ( !v249 )
                    v250 = nullptr;
                  v310 = v250;
                }
                v242 = v334 & (v322 + v350);
                v243 = (unsigned __int64 *)&v148[v242];
                v244 = *v243;
                if ( *v243 == v238 )
                  goto LABEL_404;
                ++v322;
              }
              if ( v310 )
                v243 = v310;
            }
LABEL_404:
            v251 = *v237;
            ++*(_DWORD *)(a1 + 88);
            *v243 = v251;
          }
          ++v237;
        }
        while ( v232 != v237 );
        goto LABEL_50;
      }
      v280 = *(unsigned int *)(a1 + 96);
      *(_QWORD *)(a1 + 88) = 0;
      v281 = 8 * v280;
      if ( v230 != (__m128i *)&v230->m128i_i8[v281] )
      {
        v275 = ((unsigned __int64)(v281 - 8) >> 3) + 1;
        if ( v281 != 8 )
        {
          v282 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
          do
            *v230++ = v282;
          while ( v230 != (__m128i *)&v148[2 * (v275 >> 1)] );
          goto LABEL_452;
        }
        goto LABEL_453;
      }
      goto LABEL_51;
    }
    goto LABEL_52;
  }
LABEL_216:
  v145 = (((((((unsigned int)(2 * v67 - 1) | ((unsigned __int64)(unsigned int)(2 * v67 - 1) >> 1)) >> 2)
           | (unsigned int)(2 * v67 - 1)
           | ((unsigned __int64)(unsigned int)(2 * v67 - 1) >> 1)) >> 4)
         | (((unsigned int)(2 * v67 - 1) | ((unsigned __int64)(unsigned int)(2 * v67 - 1) >> 1)) >> 2)
         | (unsigned int)(2 * v67 - 1)
         | ((unsigned __int64)(unsigned int)(2 * v67 - 1) >> 1)) >> 8)
       | (((((unsigned int)(2 * v67 - 1) | ((unsigned __int64)(unsigned int)(2 * v67 - 1) >> 1)) >> 2)
         | (unsigned int)(2 * v67 - 1)
         | ((unsigned __int64)(unsigned int)(2 * v67 - 1) >> 1)) >> 4)
       | (((unsigned int)(2 * v67 - 1) | ((unsigned __int64)(unsigned int)(2 * v67 - 1) >> 1)) >> 2)
       | (unsigned int)(2 * v67 - 1)
       | ((unsigned __int64)(unsigned int)(2 * v67 - 1) >> 1);
  v146 = ((v145 >> 16) | v145) + 1;
  if ( (unsigned int)v146 < 0x40 )
    LODWORD(v146) = 64;
  *(_DWORD *)(a1 + 96) = v146;
  v147 = (__m128i *)sub_22300B0(8LL * (unsigned int)v146, 8, 64, v142, a5, a6);
  v148 = (__int64 *)v147;
  *(_QWORD *)(a1 + 80) = v147;
  if ( v66 )
  {
    v149 = *(unsigned int *)(a1 + 96);
    v150 = 8 * v67;
    *(_QWORD *)(a1 + 88) = 0;
    v151 = &v66[v67];
    v152 = v149;
    v153 = 8 * v149;
    if ( v147 != (__m128i *)&v147->m128i_i8[v153] )
    {
      v154 = ((unsigned __int64)(v153 - 8) >> 3) + 1;
      if ( v153 == 8 )
        goto LABEL_224;
      v155 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
      do
        *v147++ = v155;
      while ( &v148[2 * (v154 >> 1)] != (__int64 *)v147 );
      v147 = (__m128i *)&v148[v154 & 0xFFFFFFFFFFFFFFFELL];
      if ( (v154 & 0xFFFFFFFFFFFFFFFELL) != v154 )
LABEL_224:
        v147->m128i_i64[0] = -4096;
    }
    if ( v151 != v66 )
    {
      v43 = v66;
      do
      {
        v156 = *v43;
        if ( *v43 != -4096 && v156 != -8192 )
        {
          if ( !v152 )
          {
            *(_QWORD *)&dword_0 = *v43;
            BUG();
          }
          v157 = *v43;
          while ( 1 )
          {
            v158 = *(_QWORD *)(v157 + 8);
            if ( !v158 )
            {
LABEL_234:
              v159 = -1916529075;
              goto LABEL_235;
            }
            v157 = v158 & 0xFFFFFFFFFFFFFFF8LL;
            if ( (v158 & 4) == 0 )
              break;
            if ( !v157 )
              goto LABEL_234;
          }
          v289 = HIDWORD(v157);
          v290 = 0x9DDFEA08EB382D69LL * (v289 ^ (((8 * v158) & 0x7FFFFFFC0LL) - 0xAE502812AA7333LL));
          v159 = -348639895
               * ((-348639895 * (v290 ^ v289 ^ (v290 >> 47)))
                ^ ((unsigned int)((0x9DDFEA08EB382D69LL * (v290 ^ v289 ^ (v290 >> 47))) >> 32) >> 15));
LABEL_235:
          v319 = 1;
          v160 = (v152 - 1) & v159;
          v331 = v152 - 1;
          v305 = nullptr;
          v41 = (unsigned __int64 *)&v148[v160];
          v161 = *v41;
          if ( *v41 != v156 )
          {
            while ( v161 != -4096 )
            {
              if ( v161 != -8192 )
              {
                v162 = v156;
                do
                {
                  v163 = *(_QWORD *)(v162 + 8);
                  if ( !v163 )
                    break;
                  v162 = v163 & 0xFFFFFFFFFFFFFFF8LL;
                  if ( (v163 & 4) == 0 )
                    break;
                }
                while ( v162 );
                v164 = v163 & 0xFFFFFFFFFFFFFFF8LL;
                do
                {
                  v165 = *(_QWORD *)(v161 + 8);
                  if ( !v165 )
                    break;
                  v161 = v165 & 0xFFFFFFFFFFFFFFF8LL;
                  if ( (v165 & 4) == 0 )
                    break;
                }
                while ( v161 );
                if ( v164 == (v165 & 0xFFFFFFFFFFFFFFF8LL) )
                  goto LABEL_48;
              }
              v362 = v160;
              v358 = v152;
              v353 = v151;
              v347 = v150;
              v339 = v41;
              v166 = sub_FEE490(*v41, 0xFFFFFFFFFFFFE000LL);
              v150 = v347;
              v151 = v353;
              v152 = v358;
              if ( !v305 )
              {
                v167 = v339;
                if ( !v166 )
                  v167 = nullptr;
                v305 = v167;
              }
              v160 = v331 & (v319 + v362);
              v41 = (unsigned __int64 *)&v148[v160];
              v161 = *v41;
              if ( *v41 == v156 )
                goto LABEL_48;
              ++v319;
            }
            if ( v305 )
              v41 = v305;
          }
LABEL_48:
          v42 = *v43;
          ++*(_DWORD *)(a1 + 88);
          *v41 = v42;
        }
        ++v43;
      }
      while ( v151 != v43 );
    }
LABEL_50:
    operator delete(v66, v150, 8);
  }
  else
  {
    v273 = *(unsigned int *)(a1 + 96);
    *(_QWORD *)(a1 + 88) = 0;
    v274 = 8 * v273;
    if ( v147 != (__m128i *)&v147->m128i_i8[v274] )
    {
      v275 = ((unsigned __int64)(v274 - 8) >> 3) + 1;
      if ( v274 == 8 )
        goto LABEL_453;
      v276 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
      do
        *v147++ = v276;
      while ( v147 != (__m128i *)&v148[2 * (v275 >> 1)] );
LABEL_452:
      v148 += v275 & 0xFFFFFFFFFFFFFFFELL;
      if ( (v275 & 0xFFFFFFFFFFFFFFFELL) != v275 )
LABEL_453:
        *v148 = -4096;
    }
  }
LABEL_51:
  sub_FF2870((__int64 *)(a1 + 80), &v366, v367);
  v44 = v367[0];
  v45 = *(_DWORD *)(a1 + 88) + 1;
LABEL_52:
  v46 = *v44 == -4096;
  *(_DWORD *)(a1 + 88) = v45;
  if ( !v46 )
    --*(_DWORD *)(a1 + 92);
  v47 = *(unsigned int *)(a1 + 116);
  *v44 = v366;
  v48 = *(unsigned int *)(a1 + 112);
  v49 = v366;
  if ( v48 + 1 > v47 )
  {
    sub_2237220(a1 + 104, v301, v48 + 1, 8);
    v48 = *(unsigned int *)(a1 + 112);
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 104) + 8 * v48) = v49;
  ++*(_DWORD *)(a1 + 112);
}
