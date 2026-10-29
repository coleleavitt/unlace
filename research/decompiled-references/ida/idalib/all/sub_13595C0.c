void __fastcall sub_13595C0(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        unsigned __int64 a9)
{
  __int64 v9; // rax
  __int64 v11; // rbp
  unsigned int v12; // esi
  int v13; // eax
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  __int64 v16; // r12
  __int64 v17; // rbp
  unsigned __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  _QWORD *v21; // r15
  __int64 v22; // r11
  __int64 v23; // r14
  _QWORD *j; // rax
  __int64 k; // r12
  unsigned __int64 v26; // r13
  int v27; // edx
  __int64 v28; // r8
  unsigned __int64 v29; // rax
  __int64 v30; // rax
  unsigned __int64 v31; // rsi
  int v32; // ecx
  int v33; // edx
  int v34; // r10d
  __int64 v35; // r9
  unsigned int v36; // ecx
  __int64 v37; // r15
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rsi
  __int64 v40; // rdi
  unsigned __int64 v41; // rdi
  __int64 v42; // rsi
  char v43; // al
  unsigned __int64 *v44; // rcx
  unsigned __int64 v45; // rax
  unsigned __int64 *v46; // r13
  unsigned __int64 *v47; // rdi
  int v48; // eax
  bool v49; // zf
  unsigned __int64 v50; // rcx
  __int64 v51; // rax
  unsigned __int64 v52; // rbp
  unsigned __int64 v53; // rax
  __int64 v54; // rax
  unsigned __int64 v55; // rdx
  int v56; // eax
  unsigned __int64 v57; // rdx
  unsigned __int64 v58; // rax
  unsigned __int64 v59; // rsi
  unsigned __int64 *v60; // r13
  unsigned int v61; // eax
  __int64 v62; // r14
  unsigned __int64 v63; // rdx
  unsigned __int64 v64; // rdi
  __int64 v65; // r8
  __int64 v66; // rax
  unsigned __int64 **v67; // r13
  __int64 v68; // r12
  unsigned __int64 *v69; // rbp
  __int64 v70; // r13
  __int64 v71; // r14
  unsigned __int64 v72; // rax
  __int64 v73; // rax
  unsigned __int64 v74; // rdx
  int v75; // ecx
  unsigned __int64 v76; // rdx
  int v77; // r10d
  unsigned int v78; // ecx
  unsigned __int64 v79; // rax
  unsigned __int64 v80; // rsi
  __int64 v81; // rdi
  __int64 v82; // rdi
  unsigned __int64 v83; // rax
  __int64 v84; // rax
  unsigned __int64 v85; // rsi
  int v86; // eax
  int v87; // eax
  int v88; // r10d
  unsigned __int64 v89; // rsi
  unsigned __int64 v90; // r8
  __int64 v91; // r9
  __int64 v92; // r9
  unsigned __int64 v93; // rax
  __int64 v94; // rax
  __m128i *v95; // rax
  __int64 *v96; // r15
  __int64 v97; // rdx
  __int64 v98; // r11
  unsigned __int64 *v99; // r10
  int v100; // r9d
  __int64 v101; // rdx
  unsigned __int64 v102; // rcx
  __m128i v103; // xmm0
  unsigned __int64 *v104; // r13
  unsigned __int64 v105; // r14
  unsigned __int64 v106; // rdx
  __int64 v107; // rax
  int v108; // edx
  unsigned int v109; // edx
  unsigned __int64 *v110; // rcx
  unsigned __int64 v111; // rax
  unsigned __int64 v112; // rsi
  __int64 v113; // rdi
  unsigned __int64 v114; // rdi
  __int64 v115; // rsi
  char v116; // al
  unsigned __int64 *v117; // rcx
  unsigned __int64 v118; // rdx
  unsigned __int64 v119; // rcx
  unsigned __int64 v120; // r12
  __int64 v121; // rax
  _QWORD *v122; // r13
  unsigned __int64 v123; // rsi
  unsigned __int64 v124; // r8
  char v125; // dl
  __int64 v126; // rax
  int v127; // edx
  _QWORD *v128; // rax
  int v129; // r14d
  unsigned __int64 v130; // rax
  __int64 v131; // rax
  unsigned __int64 v132; // rcx
  int v133; // ecx
  int v134; // edx
  unsigned __int64 v135; // rax
  unsigned __int64 v136; // rdi
  __int64 v137; // rsi
  __int64 v138; // rsi
  __int64 v139; // rdx
  unsigned __int64 *v140; // rax
  char v141; // al
  __int64 v142; // rdx
  __int64 v143; // rdx
  unsigned __int64 v144; // rcx
  __m128i v145; // xmm0
  unsigned __int64 v146; // rcx
  __int64 v147; // rax
  __int64 v148; // rbp
  unsigned __int64 v149; // rax
  __int64 v150; // rax
  __m128i *v151; // rax
  __int64 *v152; // r15
  __int64 v153; // rdx
  __int64 v154; // r11
  unsigned __int64 *v155; // r9
  int v156; // r10d
  __int64 v157; // rdx
  unsigned __int64 v158; // rcx
  __m128i v159; // xmm0
  unsigned __int64 v160; // r14
  unsigned __int64 v161; // rdx
  __int64 v162; // rax
  int v163; // edx
  unsigned int v164; // edx
  unsigned __int64 v165; // rax
  unsigned __int64 v166; // rsi
  __int64 v167; // rdi
  unsigned __int64 v168; // rdi
  __int64 v169; // rsi
  char v170; // al
  unsigned __int64 *v171; // rcx
  unsigned __int64 v172; // rax
  void *v173; // r13
  unsigned int v174; // r8d
  void *v175; // rax
  void *v176; // rdi
  unsigned __int64 v177; // rax
  int v178; // eax
  unsigned __int64 v179; // rax
  __int64 v180; // rax
  _QWORD *v181; // rax
  __int64 v182; // r11
  __int64 v183; // r14
  _QWORD *i; // rdx
  __int64 v185; // r12
  unsigned __int64 v186; // r13
  int v187; // edx
  __int64 v188; // r8
  unsigned __int64 v189; // rax
  __int64 v190; // rax
  unsigned __int64 v191; // rcx
  int v192; // ecx
  int v193; // edx
  int v194; // r10d
  __int64 v195; // r9
  unsigned int v196; // ecx
  __int64 v197; // r15
  unsigned __int64 v198; // rax
  unsigned __int64 v199; // rsi
  __int64 v200; // rdi
  unsigned __int64 v201; // rdi
  __int64 v202; // rsi
  char v203; // al
  unsigned __int64 v204; // rax
  void *v205; // r9
  void *v206; // r13
  unsigned int v207; // r8d
  void *v208; // rdi
  unsigned int v209; // eax
  __m128i *v210; // rax
  __int64 v211; // rdx
  unsigned __int64 *v212; // r9
  int v213; // r10d
  __int64 v214; // rdx
  unsigned __int64 v215; // rcx
  __m128i si128; // xmm0
  unsigned __int64 *v217; // r13
  unsigned __int64 v218; // r14
  unsigned __int64 v219; // rdx
  __int64 v220; // rax
  int v221; // edx
  unsigned int v222; // edx
  unsigned __int64 *v223; // rcx
  unsigned __int64 v224; // rax
  unsigned __int64 v225; // rsi
  __int64 v226; // rdi
  unsigned __int64 v227; // rdi
  __int64 v228; // rsi
  char v229; // al
  unsigned __int64 *v230; // rcx
  unsigned __int64 v231; // rax
  __int64 v232; // rcx
  unsigned int v233; // eax
  __m128i *v234; // rax
  __int64 v235; // rdx
  unsigned __int64 *v236; // r9
  int v237; // r10d
  __int64 v238; // rdx
  unsigned __int64 v239; // rcx
  __m128i v240; // xmm0
  unsigned __int64 *v241; // r13
  unsigned __int64 v242; // r14
  unsigned __int64 v243; // rdx
  __int64 v244; // rax
  int v245; // edx
  unsigned int v246; // edx
  unsigned __int64 *v247; // rcx
  unsigned __int64 v248; // rax
  unsigned __int64 v249; // rsi
  __int64 v250; // rdi
  unsigned __int64 v251; // rdi
  __int64 v252; // rsi
  char v253; // al
  unsigned __int64 *v254; // rcx
  unsigned __int64 v255; // rax
  unsigned __int64 v256; // rdx
  __int64 v257; // rdx
  unsigned __int64 v258; // rdi
  int v259; // edx
  __int64 *v260; // r11
  __int64 v261; // r10
  int v262; // edi
  __int64 v263; // r9
  unsigned __int64 v264; // rdx
  _QWORD *v265; // rsi
  _QWORD *v266; // rdx
  unsigned __int64 v267; // rcx
  unsigned __int64 v268; // rdi
  unsigned __int64 v269; // rdi
  unsigned __int64 v270; // rdx
  __int64 *v271; // rdi
  __int64 v272; // rcx
  _DWORD *v273; // rax
  _DWORD *v274; // rdx
  int v275; // eax
  int v276; // eax
  __int64 v277; // rdx
  __int64 v278; // rdx
  unsigned __int64 v279; // rcx
  __m128i v280; // xmm0
  __int64 v281; // rdx
  __int64 v282; // rdx
  __m128i v283; // xmm0
  __int64 v284; // rdx
  __int64 v285; // rdx
  __m128i v286; // xmm0
  unsigned __int64 v287; // rsi
  unsigned __int64 v288; // rcx
  unsigned __int64 v289; // rcx
  unsigned __int64 v290; // rdi
  unsigned __int64 v291; // rdx
  unsigned __int64 v292; // rcx
  unsigned __int64 v293; // rdx
  unsigned __int64 v294; // rax
  unsigned __int64 v295; // rdx
  unsigned __int64 v296; // rax
  unsigned __int64 v297; // rdx
  unsigned __int64 v298; // rax
  size_t v299; // rcx
  void *v300; // rdx
  size_t v301; // rdx
  const void *v302; // rsi
  const void *v303; // rax
  char v304; // al
  __int64 v305; // [rsp+8h] [rbp-90h]
  __int64 v306; // [rsp+10h] [rbp-88h]
  unsigned __int64 *v307; // [rsp+10h] [rbp-88h]
  unsigned __int64 v308; // [rsp+10h] [rbp-88h]
  unsigned __int64 *v309; // [rsp+10h] [rbp-88h]
  __int64 v310; // [rsp+10h] [rbp-88h]
  __int64 v311; // [rsp+10h] [rbp-88h]
  __int64 v312; // [rsp+10h] [rbp-88h]
  unsigned __int64 *v313; // [rsp+10h] [rbp-88h]
  unsigned __int64 *v314; // [rsp+10h] [rbp-88h]
  unsigned int v315; // [rsp+10h] [rbp-88h]
  unsigned int v316; // [rsp+10h] [rbp-88h]
  unsigned int v317; // [rsp+10h] [rbp-88h]
  unsigned int v318; // [rsp+10h] [rbp-88h]
  int v319; // [rsp+10h] [rbp-88h]
  int v320; // [rsp+18h] [rbp-80h]
  int v321; // [rsp+18h] [rbp-80h]
  unsigned int v322; // [rsp+18h] [rbp-80h]
  int v323; // [rsp+18h] [rbp-80h]
  int v324; // [rsp+18h] [rbp-80h]
  int v325; // [rsp+18h] [rbp-80h]
  int v326; // [rsp+18h] [rbp-80h]
  __int64 v327; // [rsp+18h] [rbp-80h]
  __int64 v328; // [rsp+18h] [rbp-80h]
  __int64 v329; // [rsp+18h] [rbp-80h]
  __int64 v330; // [rsp+18h] [rbp-80h]
  int v331; // [rsp+18h] [rbp-80h]
  unsigned int v332; // [rsp+20h] [rbp-78h]
  int v333; // [rsp+20h] [rbp-78h]
  int v334; // [rsp+20h] [rbp-78h]
  int v335; // [rsp+20h] [rbp-78h]
  unsigned int v336; // [rsp+20h] [rbp-78h]
  int v337; // [rsp+20h] [rbp-78h]
  int v338; // [rsp+20h] [rbp-78h]
  unsigned __int64 v339; // [rsp+20h] [rbp-78h]
  __int64 v340; // [rsp+28h] [rbp-70h]
  unsigned __int64 *v341; // [rsp+28h] [rbp-70h]
  unsigned __int64 v342; // [rsp+28h] [rbp-70h]
  unsigned __int64 *v343; // [rsp+28h] [rbp-70h]
  __int64 v344; // [rsp+28h] [rbp-70h]
  unsigned __int64 *v345; // [rsp+28h] [rbp-70h]
  unsigned __int64 *v346; // [rsp+28h] [rbp-70h]
  unsigned int v347; // [rsp+28h] [rbp-70h]
  int v348; // [rsp+30h] [rbp-68h]
  __int64 v349; // [rsp+30h] [rbp-68h]
  unsigned int v350; // [rsp+30h] [rbp-68h]
  __int64 v351; // [rsp+30h] [rbp-68h]
  int v352; // [rsp+30h] [rbp-68h]
  __int64 v353; // [rsp+30h] [rbp-68h]
  unsigned int v354; // [rsp+30h] [rbp-68h]
  __int64 v355; // [rsp+38h] [rbp-60h]
  unsigned __int64 *v356; // [rsp+38h] [rbp-60h]
  unsigned __int64 *v357; // [rsp+38h] [rbp-60h]
  __int64 v358; // [rsp+38h] [rbp-60h]
  unsigned __int64 *v359; // [rsp+38h] [rbp-60h]
  __int64 v360; // [rsp+38h] [rbp-60h]
  int v361; // [rsp+40h] [rbp-58h]
  int v362; // [rsp+40h] [rbp-58h]
  int v363; // [rsp+40h] [rbp-58h]
  unsigned __int64 *v364; // [rsp+40h] [rbp-58h]
  unsigned int v365; // [rsp+4Ch] [rbp-4Ch]
  unsigned int v366; // [rsp+4Ch] [rbp-4Ch]
  unsigned int v367; // [rsp+4Ch] [rbp-4Ch]
  int v368; // [rsp+4Ch] [rbp-4Ch]
  unsigned __int64 v369; // [rsp+50h] [rbp-48h] BYREF
  unsigned __int64 *v370[8]; // [rsp+58h] [rbp-40h] BYREF

  if ( !a9 )
    return;
  v9 = *(_QWORD *)(a1 + 8);
  v11 = *(_QWORD *)(v9 + 88);
  if ( a2 < 0 )
    a2 = sub_10212A0(*(_QWORD *)(v9 + 88), a2);
  v12 = a2 & 0x7FFFFFFF;
  if ( v12 >= *(_DWORD *)(v11 + 476) && v12 < *(_DWORD *)(v11 + 480) )
    v13 = *(_DWORD *)(v11 + 472);
  else
    v13 = sub_101D590(v11, v12);
  LOBYTE(v370[0]) = 0;
  if ( (unsigned int)(v13 + 1) <= 1 )
    return;
  if ( v13 >= 0 )
  {
    v14 = *(_QWORD *)(v11 + 184) + 24LL * (unsigned int)v13;
    goto LABEL_10;
  }
  v120 = (unsigned int)(-2 - v13);
  v121 = *(_QWORD *)(*(_QWORD *)(v11 + 320) + 8LL * ((unsigned int)(-2 - v13) >> 6));
  if ( !_bittest64(&v121, v120) )
  {
    v14 = sub_101F930(v11, v120, v370);
    v125 = (char)v370[0];
    goto LABEL_162;
  }
  v122 = (_QWORD *)(*(_QWORD *)(v11 + 272) + 8 * ((unsigned __int64)(int)v120 >> 5));
  if ( !*v122 )
  {
    v271 = (__int64 *)(*(_QWORD *)(v11 + 288) & 0xFFFFFFFFFFFFFFF8LL);
    v272 = *v271;
    v271[10] += 768;
    v273 = (_DWORD *)((v272 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( v271[1] >= (unsigned __int64)(v273 + 192) && v272 )
      *v271 = (__int64)(v273 + 192);
    else
      v273 = (_DWORD *)sub_986170((__int64)v271, 768, 768, 3, a5, a6);
    *v122 = v273;
    v274 = v273 + 192;
    do
    {
      *v273 = 0;
      v273 += 6;
      *((_OWORD *)v273 - 1) = 0;
      *((_QWORD *)v273 - 1) = 0;
    }
    while ( v273 != v274 );
    v125 = (char)v370[0];
    v14 = *v122 + 24 * (v120 & 0x1F);
LABEL_162:
    if ( v125 )
      return;
    goto LABEL_10;
  }
  v14 = *v122 + 24 * (v120 & 0x1F);
LABEL_10:
  if ( !v14 )
    return;
  if ( *(char *)(v14 + 3) < 0 )
    return;
  v15 = *(_QWORD *)((*(_QWORD *)(v14 + 16) & 0xFFFFFFFFFFFFFFF8LL) + 8);
  v369 = v15;
  if ( !v15 )
    return;
  v16 = *(unsigned int *)(a1 + 136);
  v17 = *(_QWORD *)(a1 + 120);
  v305 = a1 + 120;
  if ( !(_DWORD)v16 )
    goto LABEL_14;
  v53 = v15;
  while ( 1 )
  {
    v54 = *(_QWORD *)(v53 + 8);
    if ( !v54 )
    {
LABEL_63:
      v56 = -1916529075;
      goto LABEL_65;
    }
    v55 = v54 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v54 & 4) == 0 )
      break;
    v53 = v54 & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v55 )
      goto LABEL_63;
  }
  v57 = HIDWORD(v55);
  v58 = 0x9DDFEA08EB382D69LL * (v57 ^ (((8 * v54) & 0x7FFFFFFC0LL) - 0xAE502812AA7333LL));
  v56 = -348639895
      * (((unsigned int)((0x9DDFEA08EB382D69LL * (v58 ^ v57 ^ (v58 >> 47))) >> 32) >> 15)
       ^ (-348639895 * (v58 ^ v57 ^ (v58 >> 47))));
LABEL_65:
  v59 = (unsigned int)(v16 - 1);
  a6 = 1;
  v60 = nullptr;
  v61 = v59 & v56;
  v62 = v17 + 40LL * v61;
  v63 = *(_QWORD *)v62;
  if ( *(_QWORD *)v62 == v15 )
  {
LABEL_78:
    v66 = *(unsigned int *)(v62 + 16);
    v15 = *(unsigned int *)(v62 + 20);
    v67 = (unsigned __int64 **)(v62 + 8);
    v68 = a9;
    if ( v15 < v66 + 1 )
    {
      sub_2237220(v62 + 8, v62 + 24, v66 + 1, 8);
      v66 = *(unsigned int *)(v62 + 16);
    }
    goto LABEL_80;
  }
  while ( v15 != -4096 && v15 != -8192 )
  {
    if ( v63 == -4096 )
      goto LABEL_268;
    if ( v63 == -8192 )
      goto LABEL_477;
    v64 = v15;
    do
    {
      v65 = *(_QWORD *)(v64 + 8);
      if ( !v65 )
      {
        v64 = 0;
        break;
      }
      v64 = v65 & 0xFFFFFFFFFFFFFFF8LL;
    }
    while ( (v65 & 4) != 0 && v64 );
    while ( 1 )
    {
      a5 = *(_QWORD *)(v63 + 8);
      if ( !a5 )
        break;
      v63 = a5 & 0xFFFFFFFFFFFFFFF8LL;
      a5 &= 4u;
      if ( !(_DWORD)a5 || !v63 )
        goto LABEL_77;
    }
    v63 = 0;
LABEL_77:
    if ( v63 == v64 )
      goto LABEL_78;
LABEL_409:
    v61 = v59 & (a6 + v61);
    v62 = v17 + 40LL * v61;
    v63 = *(_QWORD *)v62;
    if ( v15 == *(_QWORD *)v62 )
      goto LABEL_78;
    a6 = (unsigned int)(a6 + 1);
  }
  if ( v63 != -4096 )
  {
    if ( v63 != -8192 )
      goto LABEL_409;
LABEL_477:
    if ( !v60 )
      v60 = (unsigned __int64 *)v62;
    goto LABEL_409;
  }
LABEL_268:
  v178 = *(_DWORD *)(a1 + 128);
  if ( !v60 )
    v60 = (unsigned __int64 *)v62;
  v129 = v178 + 1;
  if ( 4 * (v178 + 1) < (unsigned int)(3 * v16) )
  {
    if ( (int)v16 - *(_DWORD *)(a1 + 132) - v129 > (unsigned int)v16 >> 3 )
      goto LABEL_187;
    v179 = (((v59 >> 1) | v59 | (((v59 >> 1) | v59) >> 2)) >> 4) | (v59 >> 1) | v59 | (((v59 >> 1) | v59) >> 2);
    v180 = ((((v179 >> 8) | v179) >> 16) | (v179 >> 8) | v179) + 1;
    if ( (unsigned int)v180 < 0x40 )
      LODWORD(v180) = 64;
    *(_DWORD *)(a1 + 136) = v180;
    v181 = (_QWORD *)sub_22300B0(40LL * (unsigned int)v180, 8, 64, v15, a5, a6);
    *(_QWORD *)(a1 + 120) = v181;
    if ( !v17 )
    {
      v264 = *(unsigned int *)(a1 + 136);
      *(_QWORD *)(a1 + 128) = 0;
      v15 = v264;
      v265 = &v181[5 * v264];
      if ( v181 != v265 )
      {
        v266 = v181;
        do
        {
          *v266 = -4096;
          v266 += 5;
        }
        while ( v265 != v266 );
      }
      v129 = 1;
      goto LABEL_311;
    }
    *(_QWORD *)(a1 + 128) = 0;
    v182 = 40 * v16;
    v183 = v17 + 40 * v16;
    for ( i = &v181[5 * *(unsigned int *)(a1 + 136)]; i != v181; v181 += 5 )
      *v181 = -4096;
    v185 = v17;
    while ( 1 )
    {
      v186 = *(_QWORD *)v185;
      if ( *(_QWORD *)v185 != -4096 && v186 != -8192 )
      {
        v187 = *(_DWORD *)(a1 + 136);
        if ( !v187 )
        {
          *(_QWORD *)&dword_0 = *(_QWORD *)v185;
          BUG();
        }
        v188 = *(_QWORD *)(a1 + 120);
        v189 = *(_QWORD *)v185;
        while ( 1 )
        {
          v190 = *(_QWORD *)(v189 + 8);
          if ( !v190 )
          {
LABEL_285:
            v192 = -1916529075;
            goto LABEL_286;
          }
          v191 = v190 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (v190 & 4) == 0 )
            break;
          v189 = v190 & 0xFFFFFFFFFFFFFFF8LL;
          if ( !v191 )
            goto LABEL_285;
        }
        v289 = HIDWORD(v191);
        v290 = 0x9DDFEA08EB382D69LL * (v289 ^ (((8 * v190) & 0x7FFFFFFC0LL) - 0xAE502812AA7333LL));
        v192 = -348639895
             * ((-348639895 * ((v290 >> 47) ^ v289 ^ v290))
              ^ ((unsigned int)((0x9DDFEA08EB382D69LL * ((v290 >> 47) ^ v289 ^ v290)) >> 32) >> 15));
LABEL_286:
        v193 = v187 - 1;
        v194 = 1;
        v195 = 0;
        v196 = v193 & v192;
        v197 = v188 + 40LL * v196;
        v198 = *(_QWORD *)v197;
        if ( v186 != *(_QWORD *)v197 )
        {
          while ( v198 != -4096 )
          {
            if ( v198 != -8192 )
            {
              v199 = v186;
              do
              {
                v200 = *(_QWORD *)(v199 + 8);
                if ( !v200 )
                  break;
                v199 = v200 & 0xFFFFFFFFFFFFFFF8LL;
                if ( (v200 & 4) == 0 )
                  break;
              }
              while ( v199 );
              v201 = v200 & 0xFFFFFFFFFFFFFFF8LL;
              do
              {
                v202 = *(_QWORD *)(v198 + 8);
                if ( !v202 )
                  break;
                v198 = v202 & 0xFFFFFFFFFFFFFFF8LL;
                if ( (v202 & 4) == 0 )
                  break;
              }
              while ( v198 );
              if ( v201 == (v202 & 0xFFFFFFFFFFFFFFF8LL) )
                goto LABEL_305;
            }
            v358 = v182;
            v352 = v194;
            v344 = v195;
            v336 = v196;
            v324 = v193;
            v311 = v188;
            v203 = sub_FEE490(*(_QWORD *)v197, 0xFFFFFFFFFFFFE000LL);
            v195 = v344;
            v188 = v311;
            v193 = v324;
            v182 = v358;
            if ( !v344 && v203 )
              v195 = v197;
            v196 = v324 & (v352 + v336);
            v197 = v311 + 40LL * v196;
            v198 = *(_QWORD *)v197;
            if ( v186 == *(_QWORD *)v197 )
              goto LABEL_305;
            v194 = v352 + 1;
          }
          if ( v195 )
            v197 = v195;
        }
LABEL_305:
        v204 = *(_QWORD *)v185;
        v205 = (void *)(v197 + 24);
        v206 = (void *)(v185 + 24);
        *(_QWORD *)(v197 + 8) = v197 + 24;
        *(_QWORD *)v197 = v204;
        *(_QWORD *)(v197 + 16) = 0x200000000LL;
        v207 = *(_DWORD *)(v185 + 16);
        if ( !v207 )
        {
          v208 = *(void **)(v185 + 8);
          goto LABEL_307;
        }
        v208 = *(void **)(v185 + 8);
        if ( v197 + 8 == v185 + 8 )
          goto LABEL_307;
        if ( v208 == v206 )
        {
          if ( v207 <= 2uLL )
          {
            v301 = 8LL * v207;
            v302 = (const void *)(v185 + 24);
            goto LABEL_475;
          }
          v329 = v182;
          v317 = *(_DWORD *)(v185 + 16);
          sub_2237220(v197 + 8, v197 + 24, v207, 8);
          v303 = *(const void **)(v185 + 8);
          v205 = *(void **)(v197 + 8);
          v207 = v317;
          v301 = 8LL * *(unsigned int *)(v185 + 16);
          v302 = v303;
          v182 = v329;
          if ( v301 )
          {
LABEL_475:
            v328 = v182;
            v316 = v207;
            memcpy(v205, v302, v301);
            v303 = *(const void **)(v185 + 8);
            v182 = v328;
            v207 = v316;
          }
          *(_DWORD *)(v197 + 16) = v207;
          v208 = (void *)v303;
          *(_DWORD *)(v185 + 16) = 0;
LABEL_307:
          ++*(_DWORD *)(a1 + 128);
          if ( v208 != v206 )
          {
            v312 = v182;
            free(v208);
            v182 = v312;
          }
          goto LABEL_309;
        }
        *(_DWORD *)(v197 + 16) = v207;
        v276 = *(_DWORD *)(v185 + 20);
        *(_QWORD *)(v197 + 8) = v208;
        *(_DWORD *)(v197 + 20) = v276;
        *(_QWORD *)(v185 + 8) = v206;
        *(_DWORD *)(v185 + 20) = 0;
        *(_DWORD *)(v185 + 16) = 0;
        ++*(_DWORD *)(a1 + 128);
      }
LABEL_309:
      v185 += 40;
      if ( v183 == v185 )
      {
        operator delete(v17, v182, 8);
        v181 = *(_QWORD **)(a1 + 120);
        v15 = *(unsigned int *)(a1 + 136);
        v129 = *(_DWORD *)(a1 + 128) + 1;
LABEL_311:
        if ( !(_DWORD)v15 )
        {
          v139 = 0x10102464C457FLL;
          v60 = nullptr;
          goto LABEL_188;
        }
        v256 = v369;
        do
        {
          v257 = *(_QWORD *)(v256 + 8);
          if ( !v257 )
            break;
          v258 = v257 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (v257 & 4) == 0 )
          {
            v269 = HIDWORD(v258);
            a5 = 0x9DDFEA08EB382D69LL;
            v270 = 0x9DDFEA08EB382D69LL * (v269 ^ (((8 * v257) & 0x7FFFFFFC0LL) - 0xAE502812AA7333LL));
            v259 = -348639895
                 * (((unsigned int)((0x9DDFEA08EB382D69LL * (v270 ^ v269 ^ (v270 >> 47))) >> 32) >> 15)
                  ^ (-348639895 * (v270 ^ v269 ^ (v270 >> 47))));
            goto LABEL_416;
          }
          v256 = v257 & 0xFFFFFFFFFFFFFFF8LL;
        }
        while ( v258 );
        v259 = -1916529075;
LABEL_416:
        v15 = (unsigned int)(v15 - 1);
        v260 = nullptr;
        v261 = (unsigned int)v15 & v259;
        v60 = &v181[5 * v261];
        v262 = 1;
        v139 = *v60;
        if ( v369 == *v60 )
          goto LABEL_188;
        while ( 2 )
        {
          if ( v369 == -4096 || v369 == -8192 )
          {
            if ( v139 == -4096 )
            {
LABEL_489:
              if ( v260 )
              {
                v139 = *v260;
                v60 = (unsigned __int64 *)v260;
                goto LABEL_188;
              }
              *(_DWORD *)(a1 + 128) = v129;
              goto LABEL_190;
            }
            if ( v139 != -8192 )
              goto LABEL_493;
          }
          else
          {
            if ( v139 == -4096 )
              goto LABEL_489;
            if ( v139 != -8192 )
            {
              a5 = v369;
              do
              {
                v263 = *(_QWORD *)(a5 + 8);
                if ( !v263 )
                {
                  a5 = 0;
                  break;
                }
                a5 = v263 & 0xFFFFFFFFFFFFFFF8LL;
              }
              while ( (v263 & 4) != 0 && a5 );
              while ( 1 )
              {
                a6 = *(_QWORD *)(v139 + 8);
                if ( !a6 )
                  break;
                v139 = a6 & 0xFFFFFFFFFFFFFFF8LL;
                a6 &= 4u;
                if ( !(_DWORD)a6 || !v139 )
                  goto LABEL_428;
              }
              v139 = 0;
LABEL_428:
              if ( v139 == a5 )
              {
                *(_DWORD *)(a1 + 128) = v129;
                goto LABEL_189;
              }
              goto LABEL_493;
            }
          }
          if ( !v260 )
            v260 = (__int64 *)v60;
LABEL_493:
          a5 = (unsigned int)(v262 + 1);
          LODWORD(v261) = v15 & (v262 + v261);
          v60 = &v181[5 * (unsigned int)v261];
          v139 = *v60;
          if ( v369 == *v60 )
            goto LABEL_188;
          ++v262;
          continue;
        }
      }
    }
  }
LABEL_14:
  v18 = (((((((unsigned int)(2 * v16 - 1) | ((unsigned __int64)(unsigned int)(2 * v16 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * v16 - 1)
          | ((unsigned __int64)(unsigned int)(2 * v16 - 1) >> 1)) >> 4)
        | (((unsigned int)(2 * v16 - 1) | ((unsigned __int64)(unsigned int)(2 * v16 - 1) >> 1)) >> 2)
        | (unsigned int)(2 * v16 - 1)
        | ((unsigned __int64)(unsigned int)(2 * v16 - 1) >> 1)) >> 8)
      | (((((unsigned int)(2 * v16 - 1) | ((unsigned __int64)(unsigned int)(2 * v16 - 1) >> 1)) >> 2)
        | (unsigned int)(2 * v16 - 1)
        | ((unsigned __int64)(unsigned int)(2 * v16 - 1) >> 1)) >> 4)
      | (((unsigned int)(2 * v16 - 1) | ((unsigned __int64)(unsigned int)(2 * v16 - 1) >> 1)) >> 2)
      | (unsigned int)(2 * v16 - 1)
      | ((unsigned __int64)(unsigned int)(2 * v16 - 1) >> 1);
  v19 = ((v18 >> 16) | v18) + 1;
  if ( (unsigned int)v19 < 0x40 )
    LODWORD(v19) = 64;
  *(_DWORD *)(a1 + 136) = v19;
  v20 = sub_22300B0(40LL * (unsigned int)v19, 8, 64, v15, a5, a6);
  v21 = (_QWORD *)v20;
  *(_QWORD *)(a1 + 120) = v20;
  if ( v17 )
  {
    *(_QWORD *)(a1 + 128) = 0;
    v22 = 40 * v16;
    v23 = v17 + 40 * v16;
    for ( j = (_QWORD *)(v20 + 40LL * *(unsigned int *)(a1 + 136)); j != v21; v21 += 5 )
      *v21 = -4096;
    if ( v17 != v23 )
    {
      for ( k = v17; v23 != k; k += 40 )
      {
        v26 = *(_QWORD *)k;
        if ( *(_QWORD *)k != -4096 && v26 != -8192 )
        {
          v27 = *(_DWORD *)(a1 + 136);
          if ( !v27 )
          {
            *(_QWORD *)&dword_0 = *(_QWORD *)k;
            BUG();
          }
          v28 = *(_QWORD *)(a1 + 120);
          v29 = *(_QWORD *)k;
          while ( 1 )
          {
            v30 = *(_QWORD *)(v29 + 8);
            if ( !v30 )
            {
LABEL_28:
              v32 = -1916529075;
              goto LABEL_29;
            }
            v31 = v30 & 0xFFFFFFFFFFFFFFF8LL;
            if ( (v30 & 4) == 0 )
              break;
            v29 = v30 & 0xFFFFFFFFFFFFFFF8LL;
            if ( !v31 )
              goto LABEL_28;
          }
          v287 = HIDWORD(v31);
          v288 = 0x9DDFEA08EB382D69LL * (v287 ^ (((8 * v30) & 0x7FFFFFFC0LL) - 0xAE502812AA7333LL));
          v32 = -348639895
              * ((-348639895 * ((v288 >> 47) ^ v287 ^ v288))
               ^ ((unsigned int)((0x9DDFEA08EB382D69LL * ((v288 >> 47) ^ v287 ^ v288)) >> 32) >> 15));
LABEL_29:
          v33 = v27 - 1;
          v34 = 1;
          v35 = 0;
          v36 = v33 & v32;
          v37 = v28 + 40LL * v36;
          v38 = *(_QWORD *)v37;
          if ( *(_QWORD *)v37 != v26 )
          {
            while ( v38 != -4096 )
            {
              if ( v38 != -8192 )
              {
                v39 = v26;
                do
                {
                  v40 = *(_QWORD *)(v39 + 8);
                  if ( !v40 )
                    break;
                  v39 = v40 & 0xFFFFFFFFFFFFFFF8LL;
                  if ( (v40 & 4) == 0 )
                    break;
                }
                while ( v39 );
                v41 = v40 & 0xFFFFFFFFFFFFFFF8LL;
                do
                {
                  v42 = *(_QWORD *)(v38 + 8);
                  if ( !v42 )
                    break;
                  v38 = v42 & 0xFFFFFFFFFFFFFFF8LL;
                  if ( (v42 & 4) == 0 )
                    break;
                }
                while ( v38 );
                if ( v41 == (v42 & 0xFFFFFFFFFFFFFFF8LL) )
                  goto LABEL_255;
              }
              v355 = v22;
              v348 = v34;
              v340 = v35;
              v332 = v36;
              v320 = v33;
              v306 = v28;
              v43 = sub_FEE490(*(_QWORD *)v37, 0xFFFFFFFFFFFFE000LL);
              v35 = v340;
              v28 = v306;
              v33 = v320;
              v22 = v355;
              if ( !v340 && v43 )
                v35 = v37;
              v36 = v320 & (v348 + v332);
              v37 = v306 + 40LL * v36;
              v38 = *(_QWORD *)v37;
              if ( *(_QWORD *)v37 == v26 )
                goto LABEL_255;
              v34 = v348 + 1;
            }
            if ( v35 )
              v37 = v35;
          }
LABEL_255:
          v172 = *(_QWORD *)k;
          v173 = (void *)(k + 24);
          *(_QWORD *)(v37 + 16) = 0x200000000LL;
          v174 = *(_DWORD *)(k + 16);
          *(_QWORD *)v37 = v172;
          v175 = (void *)(v37 + 24);
          *(_QWORD *)(v37 + 8) = v37 + 24;
          if ( !v174 )
          {
            v176 = *(void **)(k + 8);
LABEL_257:
            ++*(_DWORD *)(a1 + 128);
            if ( v173 != v176 )
            {
              v310 = v22;
              free(v176);
              v22 = v310;
            }
            continue;
          }
          v176 = *(void **)(k + 8);
          if ( v37 + 8 == k + 8 )
            goto LABEL_257;
          if ( v173 == v176 )
          {
            v299 = 8LL * v174;
            if ( v174 <= 2uLL
              || (v330 = v22,
                  v318 = v174,
                  sub_2237220(v37 + 8, v37 + 24, v174, 8),
                  v300 = *(void **)(k + 8),
                  v175 = *(void **)(v37 + 8),
                  v174 = v318,
                  v299 = 8LL * *(unsigned int *)(k + 16),
                  v176 = v300,
                  v22 = v330,
                  v299) )
            {
              v327 = v22;
              v315 = v174;
              memcpy(v175, v176, v299);
              v300 = *(void **)(k + 8);
              v22 = v327;
              v174 = v315;
            }
            *(_DWORD *)(v37 + 16) = v174;
            v176 = v300;
            *(_DWORD *)(k + 16) = 0;
            goto LABEL_257;
          }
          *(_DWORD *)(v37 + 16) = v174;
          v275 = *(_DWORD *)(k + 20);
          *(_QWORD *)(v37 + 8) = v176;
          *(_DWORD *)(v37 + 20) = v275;
          *(_QWORD *)(k + 8) = v173;
          *(_DWORD *)(k + 20) = 0;
          *(_DWORD *)(k + 16) = 0;
          ++*(_DWORD *)(a1 + 128);
        }
      }
    }
    operator delete(v17, v22, 8);
    v21 = *(_QWORD **)(a1 + 120);
    v127 = *(_DWORD *)(a1 + 136);
    v129 = *(_DWORD *)(a1 + 128) + 1;
  }
  else
  {
    v126 = *(unsigned int *)(a1 + 136);
    *(_QWORD *)(a1 + 128) = 0;
    v127 = v126;
    v15 = (unsigned __int64)&v21[5 * v126];
    if ( v21 != (_QWORD *)v15 )
    {
      v128 = v21;
      do
      {
        *v128 = -4096;
        v128 += 5;
      }
      while ( (_QWORD *)v15 != v128 );
    }
    v129 = 1;
  }
  v60 = nullptr;
  if ( !v127 )
    goto LABEL_187;
  v130 = v369;
  while ( 1 )
  {
    v131 = *(_QWORD *)(v130 + 8);
    if ( !v131 )
    {
LABEL_173:
      v133 = -1916529075;
      goto LABEL_174;
    }
    v132 = v131 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v131 & 4) == 0 )
      break;
    v130 = v131 & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v132 )
      goto LABEL_173;
  }
  v267 = HIDWORD(v132);
  v268 = 0x9DDFEA08EB382D69LL * (v267 ^ (((8 * v131) & 0x7FFFFFFC0LL) - 0xAE502812AA7333LL));
  v133 = -348639895
       * ((-348639895 * ((v268 >> 47) ^ v267 ^ v268))
        ^ ((unsigned int)((0x9DDFEA08EB382D69LL * ((v268 >> 47) ^ v267 ^ v268)) >> 32) >> 15));
LABEL_174:
  v134 = v127 - 1;
  a6 = 1;
  a5 = 0;
  v15 = v134 & (unsigned int)v133;
  v60 = &v21[5 * (unsigned int)v15];
  v135 = *v60;
  if ( v369 == *v60 )
    goto LABEL_187;
  while ( v369 != -4096 && v369 != -8192 )
  {
    if ( v135 == -4096 )
      goto LABEL_483;
    if ( v135 != -8192 )
    {
      v136 = v369;
      do
      {
        v137 = *(_QWORD *)(v136 + 8);
        if ( !v137 )
        {
          v136 = 0;
          break;
        }
        v136 = v137 & 0xFFFFFFFFFFFFFFF8LL;
      }
      while ( (v137 & 4) != 0 && v136 );
      while ( 1 )
      {
        v138 = *(_QWORD *)(v135 + 8);
        if ( !v138 )
          break;
        v135 = v138 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v138 & 4) == 0 || !v135 )
          goto LABEL_186;
      }
      v135 = 0;
LABEL_186:
      if ( v135 == v136 )
        goto LABEL_187;
    }
LABEL_500:
    v347 = a6;
    v339 = a5;
    v331 = v134;
    v319 = v15;
    v304 = sub_FEE490(*v60, 0xFFFFFFFFFFFFE000LL);
    a5 = v339;
    v134 = v331;
    a6 = v347;
    if ( !v339 && v304 )
      a5 = (unsigned __int64)v60;
    v15 = v331 & (v347 + v319);
    v60 = &v21[5 * (unsigned int)v15];
    v135 = *v60;
    if ( v369 == *v60 )
      goto LABEL_187;
    a6 = v347 + 1;
  }
  if ( v135 != -4096 )
    goto LABEL_500;
LABEL_483:
  if ( a5 )
    v60 = (unsigned __int64 *)a5;
LABEL_187:
  v139 = *v60;
LABEL_188:
  *(_DWORD *)(a1 + 128) = v129;
  if ( v139 != -4096 )
LABEL_189:
    --*(_DWORD *)(a1 + 132);
LABEL_190:
  *v60 = v369;
  v140 = v60 + 3;
  v68 = a9;
  v67 = (unsigned __int64 **)(v60 + 1);
  *v67 = v140;
  v67[1] = (unsigned __int64 *)0x200000000LL;
  v66 = 0;
LABEL_80:
  (*v67)[v66] = v68;
  v69 = *(unsigned __int64 **)(a1 + 80);
  ++*((_DWORD *)v67 + 2);
  v70 = *(unsigned int *)(a1 + 96);
  if ( !(_DWORD)v70 )
  {
    v370[0] = nullptr;
    goto LABEL_119;
  }
  v71 = a9;
  v72 = a9;
  while ( 1 )
  {
    v73 = *(_QWORD *)(v72 + 8);
    if ( !v73 )
    {
LABEL_85:
      v75 = -1916529075;
      goto LABEL_86;
    }
    v74 = v73 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v73 & 4) == 0 )
      break;
    v72 = v73 & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v74 )
      goto LABEL_85;
  }
  v118 = HIDWORD(v74);
  v119 = 0x9DDFEA08EB382D69LL * (v118 ^ (((8 * v73) & 0x7FFFFFFC0LL) - 0xAE502812AA7333LL));
  v75 = -348639895
      * ((-348639895 * ((v119 >> 47) ^ v118 ^ v119))
       ^ ((unsigned int)((0x9DDFEA08EB382D69LL * ((v119 >> 47) ^ v118 ^ v119)) >> 32) >> 15));
LABEL_86:
  v76 = (unsigned int)(v70 - 1);
  v77 = 1;
  a5 = 0;
  v78 = v76 & v75;
  a6 = (__int64)&v69[v78];
  v79 = *(_QWORD *)a6;
  if ( a9 == *(_QWORD *)a6 )
    goto LABEL_99;
  while ( 2 )
  {
    if ( v71 != -4096 && v71 != -8192 )
    {
      if ( v79 == -4096 )
        break;
      if ( v79 != -8192 )
      {
        v80 = v71;
        do
        {
          v81 = *(_QWORD *)(v80 + 8);
          if ( !v81 )
          {
            v80 = 0;
            break;
          }
          v80 = v81 & 0xFFFFFFFFFFFFFFF8LL;
        }
        while ( (v81 & 4) != 0 && v80 );
        while ( 1 )
        {
          v82 = *(_QWORD *)(v79 + 8);
          if ( !v82 )
            break;
          v79 = v82 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (v82 & 4) == 0 || !v79 )
            goto LABEL_98;
        }
        v79 = 0;
LABEL_98:
        if ( v80 == v79 )
          goto LABEL_99;
      }
      goto LABEL_192;
    }
    if ( v79 != -4096 )
    {
LABEL_192:
      v350 = v76;
      v342 = a5;
      v334 = v77;
      v322 = v78;
      v308 = a6;
      v141 = sub_FEE490(*(_QWORD *)a6, 0xFFFFFFFFFFFFE000LL);
      a5 = v342;
      v76 = v350;
      if ( !v342 && v141 )
        a5 = v308;
      v78 = v350 & (v334 + v322);
      a6 = (__int64)&v69[v78];
      v79 = *(_QWORD *)a6;
      if ( v71 == *(_QWORD *)a6 )
        goto LABEL_99;
      v77 = v334 + 1;
      continue;
    }
    break;
  }
  if ( !a5 )
    a5 = a6;
  v15 = (unsigned int)(*(_DWORD *)(a1 + 88) + 1);
  v370[0] = (unsigned __int64 *)a5;
  if ( 4 * (int)v15 < (unsigned int)(3 * v70) )
  {
    if ( (int)v70 - *(_DWORD *)(a1 + 92) - (int)v15 <= (unsigned int)v70 >> 3 )
    {
      v209 = (((((((((v76 | (v76 >> 1)) >> 2) | v76 | (v76 >> 1)) >> 4) | ((v76 | (v76 >> 1)) >> 2) | v76 | (v76 >> 1)) >> 8)
              | ((((v76 | (v76 >> 1)) >> 2) | v76 | (v76 >> 1)) >> 4)
              | ((v76 | (v76 >> 1)) >> 2)
              | v76
              | (v76 >> 1)) >> 16)
            | ((((((v76 | (v76 >> 1)) >> 2) | v76 | (v76 >> 1)) >> 4) | ((v76 | (v76 >> 1)) >> 2) | v76 | (v76 >> 1)) >> 8)
            | ((((v76 | (v76 >> 1)) >> 2) | v76 | (v76 >> 1)) >> 4)
            | ((v76 | (v76 >> 1)) >> 2)
            | v76
            | (v76 >> 1))
           + 1;
      if ( v209 < 0x40 )
        v209 = 64;
      *(_DWORD *)(a1 + 96) = v209;
      v210 = (__m128i *)sub_22300B0(8LL * v209, 8, 64, v15, a5, a6);
      v96 = (__int64 *)v210;
      *(_QWORD *)(a1 + 80) = v210;
      if ( v69 )
      {
        v211 = *(unsigned int *)(a1 + 96);
        v98 = 8 * v70;
        *(_QWORD *)(a1 + 88) = 0;
        v212 = &v69[v70];
        v213 = v211;
        v214 = 8 * v211;
        if ( v210 != (__m128i *)&v210->m128i_i8[v214] )
        {
          v215 = ((unsigned __int64)(v214 - 8) >> 3) + 1;
          if ( v214 == 8 )
            goto LABEL_327;
          si128 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
          do
            *v210++ = si128;
          while ( v210 != (__m128i *)&v96[2 * (v215 >> 1)] );
          v210 = (__m128i *)&v96[v215 & 0xFFFFFFFFFFFFFFFELL];
          if ( (v215 & 0xFFFFFFFFFFFFFFFELL) != v215 )
LABEL_327:
            v210->m128i_i64[0] = -4096;
        }
        v217 = v69;
        do
        {
          v218 = *v217;
          if ( *v217 != -4096 && v218 != -8192 )
          {
            if ( !v213 )
            {
              *(_QWORD *)&dword_0 = *v217;
              BUG();
            }
            v219 = *v217;
            while ( 1 )
            {
              v220 = *(_QWORD *)(v219 + 8);
              if ( !v220 )
              {
LABEL_336:
                v221 = -1916529075;
                goto LABEL_337;
              }
              v219 = v220 & 0xFFFFFFFFFFFFFFF8LL;
              if ( (v220 & 4) == 0 )
                break;
              if ( !v219 )
                goto LABEL_336;
            }
            v295 = HIDWORD(v219);
            v296 = 0x9DDFEA08EB382D69LL * (v295 ^ (((8 * v220) & 0x7FFFFFFC0LL) - 0xAE502812AA7333LL));
            v221 = -348639895
                 * ((-348639895 * (v296 ^ v295 ^ (v296 >> 47)))
                  ^ ((unsigned int)((0x9DDFEA08EB382D69LL * (v296 ^ v295 ^ (v296 >> 47))) >> 32) >> 15));
LABEL_337:
            v325 = 1;
            v222 = (v213 - 1) & v221;
            v337 = v213 - 1;
            v313 = nullptr;
            v223 = (unsigned __int64 *)&v96[v222];
            v224 = *v223;
            if ( *v223 != v218 )
            {
              while ( v224 != -4096 )
              {
                if ( v224 != -8192 )
                {
                  v225 = v218;
                  do
                  {
                    v226 = *(_QWORD *)(v225 + 8);
                    if ( !v226 )
                      break;
                    v225 = v226 & 0xFFFFFFFFFFFFFFF8LL;
                    if ( (v226 & 4) == 0 )
                      break;
                  }
                  while ( v225 );
                  v227 = v226 & 0xFFFFFFFFFFFFFFF8LL;
                  do
                  {
                    v228 = *(_QWORD *)(v224 + 8);
                    if ( !v228 )
                      break;
                    v224 = v228 & 0xFFFFFFFFFFFFFFF8LL;
                    if ( (v228 & 4) == 0 )
                      break;
                  }
                  while ( v224 );
                  if ( v227 == (v228 & 0xFFFFFFFFFFFFFFF8LL) )
                    goto LABEL_357;
                }
                v367 = v222;
                v363 = v213;
                v359 = v212;
                v353 = v98;
                v345 = v223;
                v229 = sub_FEE490(*v223, 0xFFFFFFFFFFFFE000LL);
                v98 = v353;
                v212 = v359;
                v213 = v363;
                if ( !v313 )
                {
                  v230 = v345;
                  if ( !v229 )
                    v230 = nullptr;
                  v313 = v230;
                }
                v222 = v337 & (v325 + v367);
                v223 = (unsigned __int64 *)&v96[v222];
                v224 = *v223;
                if ( v218 == *v223 )
                  goto LABEL_357;
                ++v325;
              }
              if ( v313 )
                v223 = v313;
            }
LABEL_357:
            v231 = *v217;
            ++*(_DWORD *)(a1 + 88);
            *v223 = v231;
          }
          ++v217;
        }
        while ( v212 != v217 );
        goto LABEL_265;
      }
      v281 = *(unsigned int *)(a1 + 96);
      *(_QWORD *)(a1 + 88) = 0;
      v282 = 8 * v281;
      if ( v210 != (__m128i *)&v210->m128i_i8[v282] )
      {
        v144 = ((unsigned __int64)(v282 - 8) >> 3) + 1;
        if ( v282 != 8 )
        {
          v283 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
          do
            *v210++ = v283;
          while ( v210 != (__m128i *)&v96[2 * (v144 >> 1)] );
          goto LABEL_207;
        }
        goto LABEL_208;
      }
      goto LABEL_209;
    }
    goto LABEL_210;
  }
LABEL_119:
  v93 = (((((((unsigned int)(2 * v70 - 1) | ((unsigned __int64)(unsigned int)(2 * v70 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * v70 - 1)
          | ((unsigned __int64)(unsigned int)(2 * v70 - 1) >> 1)) >> 4)
        | (((unsigned int)(2 * v70 - 1) | ((unsigned __int64)(unsigned int)(2 * v70 - 1) >> 1)) >> 2)
        | (unsigned int)(2 * v70 - 1)
        | ((unsigned __int64)(unsigned int)(2 * v70 - 1) >> 1)) >> 8)
      | (((((unsigned int)(2 * v70 - 1) | ((unsigned __int64)(unsigned int)(2 * v70 - 1) >> 1)) >> 2)
        | (unsigned int)(2 * v70 - 1)
        | ((unsigned __int64)(unsigned int)(2 * v70 - 1) >> 1)) >> 4)
      | (((unsigned int)(2 * v70 - 1) | ((unsigned __int64)(unsigned int)(2 * v70 - 1) >> 1)) >> 2)
      | (unsigned int)(2 * v70 - 1)
      | ((unsigned __int64)(unsigned int)(2 * v70 - 1) >> 1);
  v94 = ((v93 >> 16) | v93) + 1;
  if ( (unsigned int)v94 < 0x40 )
    LODWORD(v94) = 64;
  *(_DWORD *)(a1 + 96) = v94;
  v95 = (__m128i *)sub_22300B0(8LL * (unsigned int)v94, 8, 64, v15, a5, a6);
  v96 = (__int64 *)v95;
  *(_QWORD *)(a1 + 80) = v95;
  if ( v69 )
  {
    v97 = *(unsigned int *)(a1 + 96);
    v98 = 8 * v70;
    *(_QWORD *)(a1 + 88) = 0;
    v99 = &v69[v70];
    v100 = v97;
    v101 = 8 * v97;
    if ( v95 != (__m128i *)&v95->m128i_i8[v101] )
    {
      v102 = ((unsigned __int64)(v101 - 8) >> 3) + 1;
      if ( v101 == 8 )
        goto LABEL_127;
      v103 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
      do
        *v95++ = v103;
      while ( v95 != (__m128i *)&v96[2 * (v102 >> 1)] );
      v95 = (__m128i *)&v96[v102 & 0xFFFFFFFFFFFFFFFELL];
      if ( (v102 & 0xFFFFFFFFFFFFFFFELL) != v102 )
LABEL_127:
        v95->m128i_i64[0] = -4096;
    }
    if ( v69 != v99 )
    {
      v104 = v69;
      do
      {
        v105 = *v104;
        if ( *v104 != -4096 && v105 != -8192 )
        {
          if ( !v100 )
          {
            *(_QWORD *)&dword_0 = *v104;
            BUG();
          }
          v106 = *v104;
          while ( 1 )
          {
            v107 = *(_QWORD *)(v106 + 8);
            if ( !v107 )
            {
LABEL_137:
              v108 = -1916529075;
              goto LABEL_138;
            }
            v106 = v107 & 0xFFFFFFFFFFFFFFF8LL;
            if ( (v107 & 4) == 0 )
              break;
            if ( !v106 )
              goto LABEL_137;
          }
          v291 = HIDWORD(v106);
          v292 = 0x9DDFEA08EB382D69LL * (v291 ^ (((8 * v107) & 0x7FFFFFFC0LL) - 0xAE502812AA7333LL));
          v108 = -348639895
               * ((-348639895 * ((v292 >> 47) ^ v291 ^ v292))
                ^ ((unsigned int)((0x9DDFEA08EB382D69LL * ((v292 >> 47) ^ v291 ^ v292)) >> 32) >> 15));
LABEL_138:
          v321 = 1;
          v109 = (v100 - 1) & v108;
          v333 = v100 - 1;
          v307 = nullptr;
          v110 = (unsigned __int64 *)&v96[v109];
          v111 = *v110;
          if ( *v110 != v105 )
          {
            while ( v111 != -4096 )
            {
              if ( v111 != -8192 )
              {
                v112 = v105;
                do
                {
                  v113 = *(_QWORD *)(v112 + 8);
                  if ( !v113 )
                    break;
                  v112 = v113 & 0xFFFFFFFFFFFFFFF8LL;
                  if ( (v113 & 4) == 0 )
                    break;
                }
                while ( v112 );
                v114 = v113 & 0xFFFFFFFFFFFFFFF8LL;
                do
                {
                  v115 = *(_QWORD *)(v111 + 8);
                  if ( !v115 )
                    break;
                  v111 = v115 & 0xFFFFFFFFFFFFFFF8LL;
                  if ( (v115 & 4) == 0 )
                    break;
                }
                while ( v111 );
                if ( v114 == (v115 & 0xFFFFFFFFFFFFFFF8LL) )
                  goto LABEL_263;
              }
              v365 = v109;
              v361 = v100;
              v356 = v99;
              v349 = v98;
              v341 = v110;
              v116 = sub_FEE490(*v110, 0xFFFFFFFFFFFFE000LL);
              v98 = v349;
              v99 = v356;
              v100 = v361;
              if ( !v307 )
              {
                v117 = v341;
                if ( !v116 )
                  v117 = nullptr;
                v307 = v117;
              }
              v109 = v333 & (v321 + v365);
              v110 = (unsigned __int64 *)&v96[v109];
              v111 = *v110;
              if ( *v110 == v105 )
                goto LABEL_263;
              ++v321;
            }
            if ( v307 )
              v110 = v307;
          }
LABEL_263:
          v177 = *v104;
          ++*(_DWORD *)(a1 + 88);
          *v110 = v177;
        }
        ++v104;
      }
      while ( v99 != v104 );
    }
LABEL_265:
    operator delete(v69, v98, 8);
  }
  else
  {
    v142 = *(unsigned int *)(a1 + 96);
    *(_QWORD *)(a1 + 88) = 0;
    v143 = 8 * v142;
    if ( v95 != (__m128i *)&v95->m128i_i8[v143] )
    {
      v144 = ((unsigned __int64)(v143 - 8) >> 3) + 1;
      if ( v143 == 8 )
        goto LABEL_208;
      v145 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
      do
        *v95++ = v145;
      while ( &v96[2 * (v144 >> 1)] != (__int64 *)v95 );
LABEL_207:
      v96 += v144 & 0xFFFFFFFFFFFFFFFELL;
      if ( (v144 & 0xFFFFFFFFFFFFFFFELL) != v144 )
LABEL_208:
        *v96 = -4096;
    }
  }
LABEL_209:
  sub_FF2870((__int64 *)(a1 + 80), &a9, v370);
  a5 = (unsigned __int64)v370[0];
  LODWORD(v15) = *(_DWORD *)(a1 + 88) + 1;
LABEL_210:
  v49 = *(_QWORD *)a5 == -4096;
  *(_DWORD *)(a1 + 88) = v15;
  if ( !v49 )
    --*(_DWORD *)(a1 + 92);
  v146 = *(unsigned int *)(a1 + 116);
  *(_QWORD *)a5 = a9;
  v147 = *(unsigned int *)(a1 + 112);
  v148 = a9;
  if ( v147 + 1 > v146 )
  {
    sub_2237220(a1 + 104, v305, v147 + 1, 8);
    v147 = *(unsigned int *)(a1 + 112);
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 104) + 8 * v147) = v148;
  v70 = *(unsigned int *)(a1 + 96);
  ++*(_DWORD *)(a1 + 112);
  v69 = *(unsigned __int64 **)(a1 + 80);
  if ( !(_DWORD)v70 )
  {
    v370[0] = nullptr;
    goto LABEL_216;
  }
  v76 = (unsigned int)(v70 - 1);
LABEL_99:
  v83 = v369;
  while ( 1 )
  {
    v84 = *(_QWORD *)(v83 + 8);
    if ( !v84 )
    {
LABEL_103:
      v86 = -1916529075;
      goto LABEL_104;
    }
    v85 = v84 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v84 & 4) == 0 )
      break;
    v83 = v84 & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v85 )
      goto LABEL_103;
  }
  v123 = HIDWORD(v85);
  v124 = 0x9DDFEA08EB382D69LL * (v123 ^ (((8 * v84) & 0x7FFFFFFC0LL) - 0xAE502812AA7333LL));
  v86 = -348639895
      * ((-348639895 * ((v124 >> 47) ^ v123 ^ v124))
       ^ ((unsigned int)((0x9DDFEA08EB382D69LL * ((v124 >> 47) ^ v123 ^ v124)) >> 32) >> 15));
LABEL_104:
  v87 = v76 & v86;
  v88 = 1;
  v47 = nullptr;
  a5 = (unsigned __int64)&v69[v87];
  v89 = *(_QWORD *)a5;
  if ( v369 == *(_QWORD *)a5 )
    return;
  while ( 2 )
  {
    if ( v369 != -4096 && v369 != -8192 )
    {
      if ( v89 == -4096 )
        goto LABEL_362;
      if ( v89 != -8192 )
      {
        v90 = v369;
        do
        {
          v91 = *(_QWORD *)(v90 + 8);
          if ( !v91 )
          {
            v90 = 0;
            break;
          }
          v90 = v91 & 0xFFFFFFFFFFFFFFF8LL;
        }
        while ( (v91 & 4) != 0 && v90 );
        while ( 1 )
        {
          v92 = *(_QWORD *)(v89 + 8);
          if ( !v92 )
            break;
          v89 = v92 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (v92 & 4) == 0 || !v89 )
            goto LABEL_116;
        }
        v89 = 0;
LABEL_116:
        if ( v89 == v90 )
          return;
        goto LABEL_201;
      }
LABEL_199:
      if ( !v47 )
        v47 = (unsigned __int64 *)a5;
LABEL_201:
      a6 = (unsigned int)(v88 + 1);
      v87 = v76 & (v88 + v87);
      a5 = (unsigned __int64)&v69[v87];
      v89 = *(_QWORD *)a5;
      if ( v369 == *(_QWORD *)a5 )
        return;
      ++v88;
      continue;
    }
    break;
  }
  if ( v89 != -4096 )
  {
    if ( v89 == -8192 )
      goto LABEL_199;
    goto LABEL_201;
  }
LABEL_362:
  v146 = (unsigned int)(3 * v70);
  if ( !v47 )
    v47 = (unsigned __int64 *)a5;
  v48 = *(_DWORD *)(a1 + 88) + 1;
  v370[0] = v47;
  if ( 4 * v48 < (unsigned int)v146 )
  {
    v232 = (unsigned int)v70 >> 3;
    if ( (int)v70 - (v48 + *(_DWORD *)(a1 + 92)) <= (unsigned int)v232 )
    {
      v233 = ((((((((v76 >> 1) | v76 | (((v76 >> 1) | v76) >> 2)) >> 4) | (v76 >> 1) | v76 | (((v76 >> 1) | v76) >> 2)) >> 8)
              | (((v76 >> 1) | v76 | (((v76 >> 1) | v76) >> 2)) >> 4)
              | (v76 >> 1)
              | v76
              | (((v76 >> 1) | v76) >> 2)) >> 16)
            | (((((v76 >> 1) | v76 | (((v76 >> 1) | v76) >> 2)) >> 4) | (v76 >> 1) | v76 | (((v76 >> 1) | v76) >> 2)) >> 8)
            | (((v76 >> 1) | v76 | (((v76 >> 1) | v76) >> 2)) >> 4)
            | (v76 >> 1)
            | v76
            | (((v76 >> 1) | v76) >> 2))
           + 1;
      if ( v233 < 0x40 )
        v233 = 64;
      *(_DWORD *)(a1 + 96) = v233;
      v234 = (__m128i *)sub_22300B0(8LL * v233, 8, 64, v232, a5, a6);
      v152 = (__int64 *)v234;
      *(_QWORD *)(a1 + 80) = v234;
      if ( v69 )
      {
        v235 = *(unsigned int *)(a1 + 96);
        v154 = 8 * v70;
        *(_QWORD *)(a1 + 88) = 0;
        v236 = &v69[v70];
        v237 = v235;
        v238 = 8 * v235;
        if ( v234 != (__m128i *)&v234->m128i_i8[v238] )
        {
          v239 = ((unsigned __int64)(v238 - 8) >> 3) + 1;
          if ( v238 == 8 )
            goto LABEL_374;
          v240 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
          do
            *v234++ = v240;
          while ( &v152[2 * (v239 >> 1)] != (__int64 *)v234 );
          v234 = (__m128i *)&v152[v239 & 0xFFFFFFFFFFFFFFFELL];
          if ( (v239 & 0xFFFFFFFFFFFFFFFELL) != v239 )
LABEL_374:
            v234->m128i_i64[0] = -4096;
        }
        v241 = v69;
        do
        {
          v242 = *v241;
          if ( *v241 != -4096 && v242 != -8192 )
          {
            if ( !v237 )
            {
              *(_QWORD *)&dword_0 = *v241;
              BUG();
            }
            v243 = *v241;
            while ( 1 )
            {
              v244 = *(_QWORD *)(v243 + 8);
              if ( !v244 )
              {
LABEL_383:
                v245 = -1916529075;
                goto LABEL_384;
              }
              v243 = v244 & 0xFFFFFFFFFFFFFFF8LL;
              if ( (v244 & 4) == 0 )
                break;
              if ( !v243 )
                goto LABEL_383;
            }
            v297 = HIDWORD(v243);
            v298 = 0x9DDFEA08EB382D69LL * (v297 ^ (((8 * v244) & 0x7FFFFFFC0LL) - 0xAE502812AA7333LL));
            v245 = -348639895
                 * ((-348639895 * (v298 ^ v297 ^ (v298 >> 47)))
                  ^ ((unsigned int)((0x9DDFEA08EB382D69LL * (v298 ^ v297 ^ (v298 >> 47))) >> 32) >> 15));
LABEL_384:
            v326 = 1;
            v246 = (v237 - 1) & v245;
            v338 = v237 - 1;
            v314 = nullptr;
            v247 = (unsigned __int64 *)&v152[v246];
            v248 = *v247;
            if ( v242 != *v247 )
            {
              while ( v248 != -4096 )
              {
                if ( v248 != -8192 )
                {
                  v249 = v242;
                  do
                  {
                    v250 = *(_QWORD *)(v249 + 8);
                    if ( !v250 )
                      break;
                    v249 = v250 & 0xFFFFFFFFFFFFFFF8LL;
                    if ( (v250 & 4) == 0 )
                      break;
                  }
                  while ( v249 );
                  v251 = v250 & 0xFFFFFFFFFFFFFFF8LL;
                  do
                  {
                    v252 = *(_QWORD *)(v248 + 8);
                    if ( !v252 )
                      break;
                    v248 = v252 & 0xFFFFFFFFFFFFFFF8LL;
                    if ( (v252 & 4) == 0 )
                      break;
                  }
                  while ( v248 );
                  if ( v251 == (v252 & 0xFFFFFFFFFFFFFFF8LL) )
                    goto LABEL_404;
                }
                v368 = v237;
                v364 = v236;
                v360 = v154;
                v354 = v246;
                v346 = v247;
                v253 = sub_FEE490(*v247, 0xFFFFFFFFFFFFE000LL);
                v154 = v360;
                v236 = v364;
                v237 = v368;
                if ( !v314 )
                {
                  v254 = v346;
                  if ( !v253 )
                    v254 = nullptr;
                  v314 = v254;
                }
                v246 = v338 & (v326 + v354);
                v247 = (unsigned __int64 *)&v152[v246];
                v248 = *v247;
                if ( *v247 == v242 )
                  goto LABEL_404;
                ++v326;
              }
              if ( v314 )
                v247 = v314;
            }
LABEL_404:
            v255 = *v241;
            ++*(_DWORD *)(a1 + 88);
            *v247 = v255;
          }
          ++v241;
        }
        while ( v236 != v241 );
        goto LABEL_50;
      }
      v284 = *(unsigned int *)(a1 + 96);
      *(_QWORD *)(a1 + 88) = 0;
      v285 = 8 * v284;
      if ( v234 != (__m128i *)&v234->m128i_i8[v285] )
      {
        v279 = ((unsigned __int64)(v285 - 8) >> 3) + 1;
        if ( v285 != 8 )
        {
          v286 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
          do
            *v234++ = v286;
          while ( v234 != (__m128i *)&v152[2 * (v279 >> 1)] );
          goto LABEL_452;
        }
        goto LABEL_453;
      }
      goto LABEL_51;
    }
    goto LABEL_52;
  }
LABEL_216:
  v149 = (((((((unsigned int)(2 * v70 - 1) | ((unsigned __int64)(unsigned int)(2 * v70 - 1) >> 1)) >> 2)
           | (unsigned int)(2 * v70 - 1)
           | ((unsigned __int64)(unsigned int)(2 * v70 - 1) >> 1)) >> 4)
         | (((unsigned int)(2 * v70 - 1) | ((unsigned __int64)(unsigned int)(2 * v70 - 1) >> 1)) >> 2)
         | (unsigned int)(2 * v70 - 1)
         | ((unsigned __int64)(unsigned int)(2 * v70 - 1) >> 1)) >> 8)
       | (((((unsigned int)(2 * v70 - 1) | ((unsigned __int64)(unsigned int)(2 * v70 - 1) >> 1)) >> 2)
         | (unsigned int)(2 * v70 - 1)
         | ((unsigned __int64)(unsigned int)(2 * v70 - 1) >> 1)) >> 4)
       | (((unsigned int)(2 * v70 - 1) | ((unsigned __int64)(unsigned int)(2 * v70 - 1) >> 1)) >> 2)
       | (unsigned int)(2 * v70 - 1)
       | ((unsigned __int64)(unsigned int)(2 * v70 - 1) >> 1);
  v150 = ((v149 >> 16) | v149) + 1;
  if ( (unsigned int)v150 < 0x40 )
    LODWORD(v150) = 64;
  *(_DWORD *)(a1 + 96) = v150;
  v151 = (__m128i *)sub_22300B0(8LL * (unsigned int)v150, 8, 64, v146, a5, a6);
  v152 = (__int64 *)v151;
  *(_QWORD *)(a1 + 80) = v151;
  if ( v69 )
  {
    v153 = *(unsigned int *)(a1 + 96);
    v154 = 8 * v70;
    *(_QWORD *)(a1 + 88) = 0;
    v155 = &v69[v70];
    v156 = v153;
    v157 = 8 * v153;
    if ( v151 != (__m128i *)&v151->m128i_i8[v157] )
    {
      v158 = ((unsigned __int64)(v157 - 8) >> 3) + 1;
      if ( v157 == 8 )
        goto LABEL_224;
      v159 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
      do
        *v151++ = v159;
      while ( &v152[2 * (v158 >> 1)] != (__int64 *)v151 );
      v151 = (__m128i *)&v152[v158 & 0xFFFFFFFFFFFFFFFELL];
      if ( (v158 & 0xFFFFFFFFFFFFFFFELL) != v158 )
LABEL_224:
        v151->m128i_i64[0] = -4096;
    }
    if ( v155 != v69 )
    {
      v46 = v69;
      do
      {
        v160 = *v46;
        if ( *v46 != -4096 && v160 != -8192 )
        {
          if ( !v156 )
          {
            *(_QWORD *)&dword_0 = *v46;
            BUG();
          }
          v161 = *v46;
          while ( 1 )
          {
            v162 = *(_QWORD *)(v161 + 8);
            if ( !v162 )
            {
LABEL_234:
              v163 = -1916529075;
              goto LABEL_235;
            }
            v161 = v162 & 0xFFFFFFFFFFFFFFF8LL;
            if ( (v162 & 4) == 0 )
              break;
            if ( !v161 )
              goto LABEL_234;
          }
          v293 = HIDWORD(v161);
          v294 = 0x9DDFEA08EB382D69LL * (v293 ^ (((8 * v162) & 0x7FFFFFFC0LL) - 0xAE502812AA7333LL));
          v163 = -348639895
               * ((-348639895 * (v294 ^ v293 ^ (v294 >> 47)))
                ^ ((unsigned int)((0x9DDFEA08EB382D69LL * (v294 ^ v293 ^ (v294 >> 47))) >> 32) >> 15));
LABEL_235:
          v323 = 1;
          v164 = (v156 - 1) & v163;
          v335 = v156 - 1;
          v309 = nullptr;
          v44 = (unsigned __int64 *)&v152[v164];
          v165 = *v44;
          if ( *v44 != v160 )
          {
            while ( v165 != -4096 )
            {
              if ( v165 != -8192 )
              {
                v166 = v160;
                do
                {
                  v167 = *(_QWORD *)(v166 + 8);
                  if ( !v167 )
                    break;
                  v166 = v167 & 0xFFFFFFFFFFFFFFF8LL;
                  if ( (v167 & 4) == 0 )
                    break;
                }
                while ( v166 );
                v168 = v167 & 0xFFFFFFFFFFFFFFF8LL;
                do
                {
                  v169 = *(_QWORD *)(v165 + 8);
                  if ( !v169 )
                    break;
                  v165 = v169 & 0xFFFFFFFFFFFFFFF8LL;
                  if ( (v169 & 4) == 0 )
                    break;
                }
                while ( v165 );
                if ( v168 == (v169 & 0xFFFFFFFFFFFFFFF8LL) )
                  goto LABEL_48;
              }
              v366 = v164;
              v362 = v156;
              v357 = v155;
              v351 = v154;
              v343 = v44;
              v170 = sub_FEE490(*v44, 0xFFFFFFFFFFFFE000LL);
              v154 = v351;
              v155 = v357;
              v156 = v362;
              if ( !v309 )
              {
                v171 = v343;
                if ( !v170 )
                  v171 = nullptr;
                v309 = v171;
              }
              v164 = v335 & (v323 + v366);
              v44 = (unsigned __int64 *)&v152[v164];
              v165 = *v44;
              if ( *v44 == v160 )
                goto LABEL_48;
              ++v323;
            }
            if ( v309 )
              v44 = v309;
          }
LABEL_48:
          v45 = *v46;
          ++*(_DWORD *)(a1 + 88);
          *v44 = v45;
        }
        ++v46;
      }
      while ( v155 != v46 );
    }
LABEL_50:
    operator delete(v69, v154, 8);
  }
  else
  {
    v277 = *(unsigned int *)(a1 + 96);
    *(_QWORD *)(a1 + 88) = 0;
    v278 = 8 * v277;
    if ( v151 != (__m128i *)&v151->m128i_i8[v278] )
    {
      v279 = ((unsigned __int64)(v278 - 8) >> 3) + 1;
      if ( v278 == 8 )
        goto LABEL_453;
      v280 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
      do
        *v151++ = v280;
      while ( v151 != (__m128i *)&v152[2 * (v279 >> 1)] );
LABEL_452:
      v152 += v279 & 0xFFFFFFFFFFFFFFFELL;
      if ( (v279 & 0xFFFFFFFFFFFFFFFELL) != v279 )
LABEL_453:
        *v152 = -4096;
    }
  }
LABEL_51:
  sub_FF2870((__int64 *)(a1 + 80), &v369, v370);
  v47 = v370[0];
  v48 = *(_DWORD *)(a1 + 88) + 1;
LABEL_52:
  v49 = *v47 == -4096;
  *(_DWORD *)(a1 + 88) = v48;
  if ( !v49 )
    --*(_DWORD *)(a1 + 92);
  v50 = *(unsigned int *)(a1 + 116);
  *v47 = v369;
  v51 = *(unsigned int *)(a1 + 112);
  v52 = v369;
  if ( v51 + 1 > v50 )
  {
    sub_2237220(a1 + 104, v305, v51 + 1, 8);
    v51 = *(unsigned int *)(a1 + 112);
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 104) + 8 * v51) = v52;
  ++*(_DWORD *)(a1 + 112);
}
