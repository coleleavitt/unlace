unsigned __int16 *__fastcall sub_19DEE70(
        __int64 *a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned int a4,
        _QWORD *a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        unsigned int a9,
        unsigned int *a10,
        unsigned __int64 a11,
        unsigned int a12,
        __int64 *a13,
        __int64 a14,
        char a15)
{
  _QWORD *v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned int *v23; // r15
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // r13
  unsigned __int64 v27; // rax
  unsigned __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  size_t v33; // rax
  __int64 v34; // r15
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  unsigned int v42; // eax
  char v43; // al
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // r13
  __int64 v58; // r8
  __int64 v59; // r9
  bool v60; // sf
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rax
  bool v65; // r15
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rsi
  __int64 v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // rsi
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // rdi
  __int64 v80; // rax
  __int64 v81; // rdi
  __int64 v82; // rax
  unsigned __int64 v83; // rax
  unsigned __int64 v84; // rax
  __int64 v85; // rcx
  __int64 v86; // r8
  __int64 v87; // r9
  unsigned __int64 v88; // rax
  unsigned __int64 v89; // rax
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // r8
  __int64 v93; // r9
  unsigned int v94; // ecx
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // r8
  __int64 v98; // r9
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // r8
  __int64 v102; // rdi
  __int64 v103; // rax
  __int64 v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // r8
  __int64 v107; // r9
  int v108; // eax
  __int64 v109; // r13
  __int64 v110; // rdx
  __int64 v111; // r8
  __int64 v112; // r9
  unsigned __int64 v113; // rax
  unsigned int v114; // ecx
  __int64 v115; // rax
  __int64 v116; // rdx
  __int64 v117; // rcx
  __int64 v118; // r8
  __int64 v119; // r9
  __int64 v120; // rax
  int v121; // eax
  __int64 v122; // rdx
  __int64 v123; // rcx
  __int64 v124; // r8
  __int64 v125; // r9
  __int64 v126; // rdi
  __int64 v127; // rdi
  unsigned __int64 v128; // rdx
  unsigned __int64 v129; // rcx
  __int64 v130; // r8
  __int64 v131; // rdx
  __int64 v132; // rdx
  __int64 v133; // rcx
  __int64 v134; // r8
  __int64 v135; // rdx
  __int64 v136; // r8
  unsigned __int64 v137; // rax
  const char *v138; // rax
  signed __int64 v139; // rdx
  signed __int64 v140; // r8
  char *v141; // rcx
  __int64 v142; // rsi
  __int64 v143; // rdx
  __int64 v144; // rcx
  __int64 v145; // r8
  __int64 v146; // r9
  __int64 v147; // rdx
  __int64 v148; // rcx
  __int64 v149; // r8
  __int64 v150; // rdx
  __int64 v151; // rcx
  __int64 v152; // r8
  char v153; // r13
  __int64 v154; // rdi
  __int64 v155; // rdx
  __int64 v156; // rcx
  __int64 v157; // rcx
  __int64 v158; // r8
  __int64 v159; // r9
  unsigned __int64 v160; // rax
  __int64 v161; // rcx
  __int64 v162; // r8
  unsigned int v163; // eax
  __int64 v164; // rax
  unsigned int v165; // eax
  __int64 v166; // rax
  unsigned __int64 v167; // rax
  __int64 v168; // rdx
  __int64 v169; // rcx
  __int64 v170; // r8
  __int64 v171; // r9
  unsigned __int64 v172; // rax
  unsigned __int64 v173; // rax
  __int64 v174; // rbx
  __int64 v175; // rax
  unsigned int v176; // eax
  unsigned __int64 v177; // rax
  __int64 v178; // r8
  __int64 v179; // r9
  __int64 v180; // rdi
  __int64 v181; // rax
  unsigned int v182; // eax
  __int64 v183; // rdx
  __int64 v184; // rcx
  __int64 v185; // r8
  __int64 v186; // rdx
  size_t v187; // rax
  unsigned __int64 v188; // r9
  __int64 v189; // rax
  __int64 v190; // rsi
  unsigned __int64 v191; // rax
  __int64 v192; // rdx
  __int64 v193; // rcx
  __int64 v194; // r8
  __int64 v195; // r9
  unsigned __int64 v196; // r10
  int v197; // eax
  __int64 v198; // rdx
  __int64 v199; // rcx
  __int64 v200; // r8
  __int64 v201; // r9
  __int64 v202; // r10
  __int64 v203; // rax
  unsigned __int64 v204; // rax
  unsigned __int64 v205; // rax
  __int64 v206; // r13
  __int64 v207; // rcx
  __int64 v208; // r8
  __int64 v209; // r9
  unsigned __int64 v210; // r10
  __int64 v211; // rdx
  unsigned __int64 v212; // rax
  __int64 v213; // rcx
  __int64 v214; // rax
  __int64 v215; // rax
  unsigned __int64 v216; // rax
  char *v217; // rax
  signed __int64 v218; // rdx
  __int64 v219; // rdx
  __int64 v220; // rcx
  __int64 v221; // r8
  __int64 v222; // r9
  __int64 v223; // rax
  __int64 v224; // rdx
  __int64 v225; // rcx
  __int64 v226; // r8
  __int64 v227; // r9
  __int64 v228; // rcx
  __int64 v229; // r8
  __int64 v230; // r9
  __int64 v231; // r13
  void *v232; // rdi
  __int64 v233; // rdx
  __int64 v234; // r8
  unsigned int v235; // eax
  __int64 v236; // rax
  __int64 v237; // r13
  __int64 v238; // rdi
  unsigned __int64 v239; // r12
  unsigned int v240; // eax
  __int64 v241; // rax
  __int64 v242; // rdx
  __int64 v243; // rcx
  __int64 v244; // r13
  __int64 v245; // rax
  unsigned __int64 v246; // rcx
  unsigned __int64 v247; // rdi
  __int64 v248; // rax
  __int64 *v249; // r15
  __int64 v250; // rax
  __int64 v251; // rax
  __int64 v252; // rdx
  __int64 v253; // rcx
  __int64 v254; // r8
  __int64 v255; // rax
  __int64 v256; // rdx
  __int64 v257; // rcx
  __int64 v258; // r8
  __int64 v259; // r13
  __int64 v260; // rax
  __int64 v261; // rsi
  __int64 v262; // rdx
  __int64 v263; // rdx
  __int64 v264; // rcx
  __int64 v265; // r8
  __int64 v266; // rax
  __int64 v267; // rdx
  __int64 v268; // rcx
  __int64 v269; // r8
  unsigned int v270; // eax
  __int64 v271; // rcx
  __int64 v272; // r8
  __int64 v273; // r9
  __int64 v274; // rcx
  __int64 v275; // r8
  __int64 v276; // r9
  unsigned __int64 *v277; // rax
  __int64 *v278; // rdx
  unsigned __int64 v279; // rcx
  unsigned __int64 v280; // rax
  __int64 v281; // rax
  unsigned __int64 *v282; // rax
  __int64 *v283; // rdx
  unsigned __int64 v284; // rcx
  unsigned __int64 v285; // rax
  __int64 *v286; // rcx
  __int64 v287; // rax
  __int64 *v288; // rcx
  __int64 v289; // rax
  __int64 v290; // rax
  __int64 v291; // rax
  __int64 v292; // rax
  unsigned int v293; // edx
  unsigned __int64 *v294; // rax
  __int64 v295; // rdx
  __int64 v296; // rcx
  __int64 v297; // r8
  __int64 v298; // rax
  __int64 v299; // rdx
  __int64 v300; // rcx
  __int64 v301; // r8
  __int64 v302; // rax
  __int64 v303; // rax
  __int64 v304; // rcx
  __int64 v305; // rdx
  __int64 v306; // rdx
  __int64 v307; // rcx
  __int64 v308; // r8
  __int64 v309; // r9
  __int64 v310; // rax
  _QWORD *v311; // rax
  __int64 v312; // [rsp-10h] [rbp-208h]
  unsigned __int64 v313; // [rsp+8h] [rbp-1F0h]
  __int64 v314; // [rsp+8h] [rbp-1F0h]
  __int64 v315; // [rsp+8h] [rbp-1F0h]
  unsigned int v316; // [rsp+14h] [rbp-1E4h]
  unsigned __int64 v317; // [rsp+28h] [rbp-1D0h]
  __int64 v318; // [rsp+28h] [rbp-1D0h]
  _QWORD *v319; // [rsp+30h] [rbp-1C8h]
  __int64 v320; // [rsp+38h] [rbp-1C0h]
  unsigned int v321; // [rsp+40h] [rbp-1B8h]
  unsigned __int64 v322; // [rsp+40h] [rbp-1B8h]
  __int64 *v323; // [rsp+40h] [rbp-1B8h]
  unsigned int v324; // [rsp+4Ch] [rbp-1ACh]
  unsigned __int64 v325; // [rsp+50h] [rbp-1A8h]
  __int64 v326; // [rsp+50h] [rbp-1A8h]
  __int64 v327; // [rsp+58h] [rbp-1A0h]
  __int64 v328; // [rsp+58h] [rbp-1A0h]
  _QWORD *v329; // [rsp+58h] [rbp-1A0h]
  __int64 v330; // [rsp+58h] [rbp-1A0h]
  unsigned __int64 *v331; // [rsp+58h] [rbp-1A0h]
  __int64 v332; // [rsp+60h] [rbp-198h]
  __int64 v333; // [rsp+68h] [rbp-190h]
  unsigned __int64 v334; // [rsp+68h] [rbp-190h]
  __int64 v335; // [rsp+70h] [rbp-188h]
  _QWORD *v336; // [rsp+90h] [rbp-168h] BYREF
  __int64 v337[2]; // [rsp+98h] [rbp-160h] BYREF
  unsigned int v338; // [rsp+A8h] [rbp-150h] BYREF
  int v339; // [rsp+ACh] [rbp-14Ch] BYREF
  unsigned __int64 v340; // [rsp+B0h] [rbp-148h] BYREF
  __int64 v341[2]; // [rsp+BCh] [rbp-13Ch] BYREF
  char v342; // [rsp+CCh] [rbp-12Ch]
  __int64 v343; // [rsp+D0h] [rbp-128h] BYREF
  char v344; // [rsp+D8h] [rbp-120h]
  unsigned __int64 v345; // [rsp+E0h] [rbp-118h] BYREF
  char v346; // [rsp+E8h] [rbp-110h]
  void *v347; // [rsp+F0h] [rbp-108h] BYREF
  __int64 v348; // [rsp+F8h] [rbp-100h]
  __int64 v349; // [rsp+100h] [rbp-F8h] BYREF
  void *v350; // [rsp+108h] [rbp-F0h]
  _BYTE v351[24]; // [rsp+118h] [rbp-E0h] BYREF
  void *ptr; // [rsp+130h] [rbp-C8h] BYREF
  __int64 v353; // [rsp+138h] [rbp-C0h]
  _QWORD v354[2]; // [rsp+140h] [rbp-B8h] BYREF
  unsigned __int8 *v355; // [rsp+150h] [rbp-A8h] BYREF
  char v356; // [rsp+1A8h] [rbp-50h]
  unsigned int v357; // [rsp+1B0h] [rbp-48h]
  char v358; // [rsp+1B4h] [rbp-44h]

  v18 = (_QWORD *)a2;
  v337[0] = a3;
  v336 = a5;
  LODWORD(v320) = a12;
  v316 = a9;
  v319 = (_QWORD *)sub_168B6C0((__int64)a1);
  if ( a4 )
  {
    v338 = a4;
    LODWORD(v341[0]) = a4;
    HIDWORD(v341[0]) = a4;
  }
  else
  {
    v338 = sub_EEB7E0(a2, a2, *(double *)a7.m128_u64);
    v341[0] = sub_EEC8C0(a2, a2, *(double *)a7.m128_u64);
  }
  if ( !a11 || (v23 = a10, !*a10) )
  {
    v23 = &v338;
    v325 = 1;
    v324 = v338;
    if ( a9 )
      goto LABEL_6;
LABEL_17:
    sub_168B9F0((__int64)&ptr, a1, v338, 0x105Eu, 0);
    v33 = j__strlen("[");
    sub_9EC740((__int64)&v347, v338, "[", v33, 0);
    a2 = (unsigned __int64)&v347;
    sub_1589170((__int64)&ptr, &v347);
    if ( v350 != v351 )
      operator delete(v350);
    sub_15F7200(&ptr);
    v316 = v338;
    if ( !v18 )
      goto LABEL_20;
    goto LABEL_7;
  }
  v325 = a11;
  v324 = *a10;
  if ( !a9 )
    goto LABEL_17;
LABEL_6:
  if ( !a2 )
    goto LABEL_20;
LABEL_7:
  v24 = v18[1];
  v25 = *(_QWORD *)(v24 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v25 + 16) == 13 && ((*(_WORD *)(v25 + 18) >> 3) & 0x1FFu) > 0x1F1 )
  {
    v26 = *a1;
    if ( v24 == v319[2388] )
    {
      v160 = sub_A8A430(v319, a2, v24, v20, v21, v22);
      v27 = sub_18F0490(v26, (unsigned __int64)v18, v160, v161, v162, *(double *)a7.m128_u64, *(double *)a8.m128_u64);
    }
    else
    {
      v27 = sub_1907C70(*a1, v18, (__m128i)a7, a8, v24, v20, v21, v22);
    }
    v18 = (_QWORD *)(v27 & 0xFFFFFFFFFFFFFFFELL);
    if ( v27 == 1 )
      return (_WORD *)(&dword_0 + 1);
  }
  if ( (*(_DWORD *)v18 & 0x10000) != 0 )
    return (unsigned __int16 *)sub_C9B780(
                                 v319,
                                 v319[2384],
                                 0,
                                 v316,
                                 (__int64)v18,
                                 (__int64)v336,
                                 (__int64)a10,
                                 a11,
                                 0,
                                 (__int64)a13,
                                 (unsigned int)a14,
                                 a12,
                                 a15);
  a2 = (unsigned __int64)v18;
  v29 = sub_19179A0(*a1, v18, 1u, v20, v21, v22, a7, a8);
  if ( v29 == 1 )
    return (_WORD *)(&dword_0 + 1);
  v18 = (_QWORD *)(v29 & 0xFFFFFFFFFFFFFFFELL);
  v337[0] = *(_QWORD *)((v29 & 0xFFFFFFFFFFFFFFFELL) + 8);
  if ( !(unsigned __int8)sub_F6AE00(*(_QWORD *)(v337[0] & 0xFFFFFFFFFFFFFFF0LL), a2, v30, v31, v32) )
  {
    if ( (*(_BYTE *)(sub_168B6E0((__int64)a1) + 107) & 4) == 0
      && (sub_A8A430(v319, a2, v95, v96, v97, v98) & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    {
      v102 = *(_QWORD *)(v337[0] & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v102 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 42
        || sub_9EC890(v102, a2, v99, v100, v101) )
      {
        sub_168B9F0((__int64)&ptr, a1, v338, 0x19D9u, 0);
        v103 = sub_1605D30((__int64)&ptr, v337);
        sub_15884C0(v103, v341);
        sub_15F7200(&ptr);
        if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v337[0] & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                      + 16LL) == 42 )
        {
          v109 = *a1;
          v113 = sub_A8A430(v319, (__int64)v341, v104, v105, v106, v107);
          v114 = 40;
        }
        else
        {
          v108 = sub_BFE6E0((__int64)v18, (unsigned __int64)v319, 1, *(double *)a7.m128_u64);
          v109 = *a1;
          v321 = v108 == 0 ? 21 : 13;
          v113 = sub_A8A430(v319, (__int64)v319, v110, v321, v111, v112);
          v114 = v321;
        }
        a2 = (unsigned __int64)v18;
        v115 = sub_160A600(
                 v109,
                 (unsigned __int64)v18,
                 v113,
                 v114,
                 0,
                 0,
                 *(double *)a7.m128_u64,
                 *(double *)a8.m128_u64,
                 0);
        v22 = v312;
        v18 = (_QWORD *)(v115 & 0xFFFFFFFFFFFFFFFELL);
        goto LABEL_150;
      }
    }
    if ( (*(_BYTE *)(sub_168B6E0((__int64)a1) + 1) & 8) != 0 )
    {
      if ( (unsigned __int8)sub_1E63CF0(*a1, v338, v18[1], 1, 3966) )
        return (_WORD *)(&dword_0 + 1);
      a2 = (unsigned __int64)v18;
      v172 = sub_1BFF9E0(*a1, v18);
      if ( v172 > 1 )
      {
        v18 = (_QWORD *)(v172 & 0xFFFFFFFFFFFFFFFELL);
LABEL_150:
        v337[0] = v18[1];
      }
    }
  }
LABEL_20:
  if ( a6 )
    goto LABEL_21;
  v343 = 0;
  v153 = sub_F67DF0(*(_QWORD *)(v337[0] & 0xFFFFFFFFFFFFFFF0LL), (__int64)v319, &v343, v20, v21);
  if ( v153 )
    goto LABEL_119;
  v154 = *(_QWORD *)(v337[0] & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v154 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 11 )
    goto LABEL_119;
  if ( v18 )
  {
    if ( !sub_F6AC10(*(_QWORD *)(v18[1] & 0xFFFFFFFFFFFFFFF0LL), (__int64)v319, v150, v151, v152) )
    {
      v154 = *(_QWORD *)(v337[0] & 0xFFFFFFFFFFFFFFF0LL);
      goto LABEL_114;
    }
LABEL_119:
    a2 = (unsigned __int64)v336;
    ptr = v354;
    v353 = 0x400000000LL;
    sub_1897660(a1, (__int64)v336, (__int64)&ptr, 1, 1, v343);
    v21 = (unsigned int)v353;
    if ( (_DWORD)v353 )
    {
      v327 = *(_QWORD *)ptr;
      a6 = sub_1C0C700(*a1);
      a2 = (unsigned __int64)v336;
      if ( !a6 )
        a6 = v327;
      if ( !(unsigned __int8)sub_18A38F0(
                               (__int64)a1,
                               v336,
                               (unsigned __int64 *)a6,
                               (v320 << 32) | v316,
                               v153,
                               (__int64)&ptr) )
      {
        a2 = a6;
        sub_18F5260(*a1, a6, (int *)v23, v325, 0, 0, (__m128i)a7, *(double *)a8.m128_u64, 0, 0, 0);
      }
    }
    if ( ptr != v354 )
      free(ptr);
    v34 = a6;
    goto LABEL_123;
  }
LABEL_114:
  if ( !sub_F68680(v154, (__int64)v319)
    && !sub_19CF8C0(*(_QWORD *)(v337[0] & 0xFFFFFFFFFFFFFFF0LL), (__int64)v319, v155, v156) )
  {
    v223 = sub_F675E0(*(_QWORD *)(v337[0] & 0xFFFFFFFFFFFFFFF0LL));
    v332 = v223;
    if ( v223 )
    {
      v231 = sub_19CF3D0((__int64)v336, v223, 1, v225, v226, v227);
      if ( !v231 )
      {
        a2 = v332;
        v231 = sub_19CF3D0((__int64)v336, v332, 0, v228, v229, v230);
        if ( !v231 )
          goto LABEL_221;
      }
      a2 = v231;
      if ( (unsigned __int8)sub_18F5260(*a1, v231, (int *)v23, v325, 0, 0, (__m128i)a7, *(double *)a8.m128_u64, 0, 0, 0) )
        return (_WORD *)(&dword_0 + 1);
      a6 = v231;
      goto LABEL_21;
    }
    v251 = sub_F67AB0(*(_QWORD *)(v337[0] & 0xFFFFFFFFFFFFFFF0LL), (__int64)v319, v224, v225, v226);
    if ( !v251 )
    {
      sub_168B9F0((__int64)&ptr, a1, v338, 0xCE9u, 0);
      v281 = sub_1605D30((__int64)&ptr, v337);
      sub_15884C0(v281, v341);
      sub_15F7200(&ptr);
      return (_WORD *)(&dword_0 + 1);
    }
    v333 = v251;
    v255 = sub_A5E7C0(v251, (__int64)v319, v252, v253, v254);
    v259 = sub_9C7D40(v255, (__int64)v319, v256, v257, v258);
    v330 = *a1;
    v260 = sub_168B6E0((__int64)a1);
    v261 = v338;
    v262 = *(_QWORD *)(v333 + 32);
    LODWORD(v260) = (*(_BYTE *)(v260 + 107) & 4) == 0 ? 0x10B3 : 0;
    ptr = off_2BC64B0;
    LODWORD(v353) = v260 + 3041;
    v354[0] = v341;
    if ( (unsigned __int8)sub_1E63C20(v330, v338, v262, 1, &ptr) )
    {
      if ( (*(_BYTE *)(sub_168B6E0((__int64)a1) + 107) & 4) != 0 )
        return (_WORD *)(&dword_0 + 1);
      v266 = sub_A5E7C0(v333, v261, v263, v264, v265);
      v332 = sub_9C7D40(v266, v261, v267, v268, v269);
      if ( v18 )
        v270 = sub_EEB7E0((unsigned __int64)v18, v261, *(double *)a7.m128_u64);
      else
        v270 = a4;
      sub_168B9F0((__int64)&ptr, a1, v270, 0x18C0u, 0);
      sub_15F7200(&ptr);
    }
    else
    {
      v328 = sub_BAD910(v259, (__int64)v336, 1, 0, 1, 0);
      if ( v328 )
        goto LABEL_260;
    }
    v328 = sub_19CF3D0((__int64)v336, v333, 1, v271, v272, v273);
    if ( !v328 )
    {
      a2 = (unsigned __int64)&v336;
      v328 = sub_BADBA0(v259, (__int64)&v336, 1, v274, v275, v276);
      if ( !v328 )
      {
        if ( (*(_BYTE *)(sub_168B6E0((__int64)a1) + 107) & 4) != 0 )
        {
          sub_168B9F0((__int64)&ptr, a1, v324, 0xBD6u, 0);
          v345 = *(_QWORD *)(v333 + 32);
          v290 = sub_162B6D0((__int64)&ptr, (__int64 *)&v345);
          v291 = sub_19D3F70(v290, (__int64 *)&v336);
          v292 = sub_15884C0(v291, v341);
          v293 = a10[a11 - 1];
          LODWORD(v347) = *a10;
          HIDWORD(v347) = v293;
          sub_1587DB0(v292, (__int64 *)&v347);
          sub_15F7200(&ptr);
          return (_WORD *)(&dword_0 + 1);
        }
        if ( v18 )
        {
          a2 = (unsigned __int64)v18;
          if ( (unsigned __int8)sub_19D0110((__int64)a1, (unsigned __int64)v18) )
            goto LABEL_221;
        }
        if ( *(_BYTE *)(sub_A5E7C0(v333, a2, v19, v20, v21) + 19) >> 2 )
          goto LABEL_221;
        a2 = (unsigned __int64)v336;
        v347 = &v349;
        v348 = 0x400000000LL;
        sub_1897660(a1, (__int64)v336, (__int64)&v347, 1, 0, 0);
        if ( !(_DWORD)v348 )
        {
          v232 = v347;
          if ( v347 == &v349 )
            goto LABEL_221;
          goto LABEL_220;
        }
        v331 = *(unsigned __int64 **)v347;
        v294 = (unsigned __int64 *)sub_1C0C700(*a1);
        if ( !v294 )
          v294 = v331;
        a2 = (unsigned __int64)v336;
        v328 = (__int64)v294;
        sub_18A38F0((__int64)a1, v336, v294, (v320 << 32) | v316, 1, (__int64)&v347);
        if ( !v332 )
        {
          sub_168B9F0((__int64)&ptr, a1, v324, 0x1BAFu, 0);
          v298 = sub_A5E7C0(v333, (__int64)a1, v295, v296, v297);
          v302 = *(_QWORD *)(sub_9C7D40(v298, (__int64)a1, v299, v300, v301) + 40);
          if ( (v302 & 7) != 0 )
            v334 = 0;
          else
            v334 = v302 & 0xFFFFFFFFFFFFFFF8LL;
          if ( v356 )
          {
            sub_AE9DF0(&v355, v334, 5u);
          }
          else if ( v358 )
          {
            v335 = sub_168B9E0(&ptr);
            v310 = v354[0];
            if ( v354[0] )
              v310 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v354[0] + 32LL))(v354[0]);
            v345 = v310;
            v311 = sub_1587BC0(v335, (__int64 *)&v345, v306, v307, v308, v309);
            sub_AE9DF0((unsigned __int8 **)(*v311 + 32LL * v357 + 8), v334, 5u);
          }
          v303 = sub_19D3F70((__int64)&ptr, (__int64 *)&v336);
          a2 = (unsigned __int64)v341;
          sub_15884C0(v303, v341);
          sub_15F7200(&ptr);
          v232 = v347;
          if ( v347 == &v349 )
            goto LABEL_260;
LABEL_220:
          free(v232);
          if ( !v328 )
            goto LABEL_221;
          goto LABEL_260;
        }
        v232 = v347;
        if ( v347 != &v349 )
          goto LABEL_220;
      }
    }
LABEL_260:
    a2 = v328;
    if ( (unsigned __int8)sub_18F5260(
                            *a1,
                            v328,
                            (int *)v23,
                            v325,
                            v332,
                            0,
                            (__m128i)a7,
                            *(double *)a8.m128_u64,
                            0,
                            0,
                            0) )
      return (_WORD *)(&dword_0 + 1);
    a6 = v328;
    goto LABEL_21;
  }
  if ( !sub_F68680(*(_QWORD *)(v337[0] & 0xFFFFFFFFFFFFFFF0LL), (__int64)v319) )
  {
    a2 = sub_F67680(*(_QWORD *)(v337[0] & 0xFFFFFFFFFFFFFFF0LL));
    v34 = sub_19CF3D0((__int64)v336, a2, 0, v157, v158, v159);
    if ( v34 )
    {
LABEL_118:
      a6 = v34;
      goto LABEL_21;
    }
    v20 = sub_19CF3D0((__int64)v336, a2, 1, v20, v21, v22);
    v326 = v20;
    if ( v20 )
    {
      v237 = *a1;
      v238 = *(_QWORD *)(*(_QWORD *)(*a1 + 736) + 88LL);
      if ( v238 )
      {
        v239 = *(_QWORD *)(v20 + 16) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)(v20 + 16) & 4) != 0 )
          v239 = *(_QWORD *)v239;
        if ( (*(_BYTE *)(v239 + 8) & 0x7F) == 0x13 && v239 != 48 )
        {
          v329 = sub_E935B0(v238, 0);
          v240 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)(v239 - 48) + 16LL))(v239 - 48);
          v241 = sub_1A5B7C0(v237, *(_QWORD *)(v237 + 192), v329, v240, 0, 0);
          v244 = v241;
          if ( v241 )
          {
            if ( (*(_BYTE *)(v241 + 28) & 0x7F) == 0x14 )
            {
              if ( !*(_QWORD *)(v241 + 120) )
                sub_A794E0((__int64 *)(*(_QWORD *)(v241 + 96) + 88LL), *(_QWORD *)(v241 + 96), v242, v243, v21, v22);
              v245 = *(_QWORD *)(v244 + 120);
              v246 = v245 & 0xFFFFFFFFFFFFFFF8LL;
              if ( (v245 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
              {
                v247 = *(_QWORD *)(v244 + 120) & 0xFFFFFFFFFFFFFFF8LL;
                if ( (*(_BYTE *)(v246 + 72) & 1) == 0 )
                {
                  a2 = *(unsigned int *)(v246 + 48);
                  if ( (_DWORD)a2 )
                  {
LABEL_239:
                    v246 = *(_QWORD *)(v247 + 40) + 8 * a2;
                    v323 = (__int64 *)v246;
                    goto LABEL_240;
                  }
                  goto LABEL_309;
                }
                sub_BA8900(v244);
                v245 = *(_QWORD *)(v244 + 120);
                v247 = v245 & 0xFFFFFFFFFFFFFFF8LL;
                a2 = *(unsigned int *)((v245 & 0xFFFFFFFFFFFFFFF8LL) + 48);
                if ( (_DWORD)a2 )
                  goto LABEL_239;
                if ( !v245 )
                {
                  sub_A794E0((__int64 *)(*(_QWORD *)(v244 + 96) + 88LL), *(_QWORD *)(v244 + 96), v242, v304, v21, v22);
                  v245 = *(_QWORD *)(v244 + 120);
                }
                v246 = v245 & 0xFFFFFFFFFFFFFFF8LL;
                if ( (v245 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
                {
LABEL_309:
                  if ( (*(_BYTE *)(v246 + 72) & 1) != 0 )
                  {
                    sub_BA8900(v244);
                    v245 = *(_QWORD *)(v244 + 120);
                  }
                  a2 = *(unsigned int *)((v245 & 0xFFFFFFFFFFFFFFF8LL) + 24);
                  v246 = *(_QWORD *)((v245 & 0xFFFFFFFFFFFFFFF8LL) + 16) + 8 * a2;
                  v323 = (__int64 *)v246;
LABEL_240:
                  if ( *(_QWORD *)(v244 + 120) )
                    goto LABEL_241;
                  goto LABEL_308;
                }
              }
              if ( !*(_QWORD *)(v244 + 120) )
              {
                v323 = nullptr;
LABEL_308:
                a2 = *(_QWORD *)(v244 + 96);
                sub_A794E0((__int64 *)(a2 + 88), a2, v242, v246, v21, v22);
                v245 = *(_QWORD *)(v244 + 120);
LABEL_241:
                v20 = v245 & 0xFFFFFFFFFFFFFFF8LL;
                if ( (v245 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
                  goto LABEL_245;
                a2 = v245 & 0xFFFFFFFFFFFFFFF8LL;
                if ( (*(_BYTE *)(v20 + 72) & 1) != 0 )
                {
                  sub_BA8900(v244);
                  v245 = *(_QWORD *)(v244 + 120);
                  a2 = v245 & 0xFFFFFFFFFFFFFFF8LL;
                  if ( *(_DWORD *)((v245 & 0xFFFFFFFFFFFFFFF8LL) + 48) )
                    goto LABEL_244;
                  if ( !v245 )
                  {
                    a2 = *(_QWORD *)(v244 + 96);
                    sub_A794E0((__int64 *)(a2 + 88), a2, v305, v20, v21, v22);
                    v245 = *(_QWORD *)(v244 + 120);
                  }
                  v20 = v245 & 0xFFFFFFFFFFFFFFF8LL;
                  if ( (v245 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
                  {
LABEL_245:
                    if ( (__int64 *)v34 != v323 )
                    {
                      v19 = *(_QWORD *)v34;
                      v248 = *(_QWORD *)(v239 + 48);
                      v249 = (__int64 *)(v34 + 8);
                      if ( v248 == *(_QWORD *)(v19 + 96) )
                      {
LABEL_290:
                        v34 = v326;
                        goto LABEL_118;
                      }
                      while ( v323 != v249 )
                      {
                        v19 = *v249++;
                        if ( *(_QWORD *)(v19 + 96) == v248 )
                          goto LABEL_290;
                      }
                    }
                    goto LABEL_250;
                  }
                }
                else if ( *(_DWORD *)(v20 + 48) )
                {
LABEL_244:
                  v34 = *(_QWORD *)(a2 + 40);
                  goto LABEL_245;
                }
                if ( (*(_BYTE *)(v20 + 72) & 1) != 0 )
                {
                  sub_BA8900(v244);
                  v245 = *(_QWORD *)(v244 + 120);
                }
                v34 = *(_QWORD *)((v245 & 0xFFFFFFFFFFFFFFF8LL) + 16);
                goto LABEL_245;
              }
            }
          }
        }
      }
LABEL_250:
      sub_168B9F0((__int64)&ptr, a1, v324, 0x1B8Fu, 0);
      v34 = v326;
      v347 = *(void **)(v326 + 40);
      v250 = sub_19D6730((__int64)&ptr, (__int64 *)&v347);
      sub_19D3F70(v250, (__int64 *)&v336);
      sub_15F7200(&ptr);
      sub_168B9F0((__int64)&ptr, a1, *(_DWORD *)(v326 + 24), 0x17CAu, 0);
      a2 = (unsigned __int64)&v347;
      v347 = *(void **)(v326 + 40);
      sub_15894B0((__int64)&ptr, (__int64 *)&v347);
      sub_15F7200(&ptr);
      goto LABEL_118;
    }
    goto LABEL_221;
  }
  v204 = sub_15F1670(*a1);
  if ( !v204
    || (v205 = sub_BA85D0(v204), (v206 = v205) == 0)
    || (v210 = sub_BAD910(v205, (__int64)v336, 0, 0, 1, 0)) == 0
    && (v210 = sub_BADBA0(v206, (__int64)&v336, 0, v207, v208, v209)) == 0 )
  {
    if ( !v18 || (a2 = (unsigned __int64)v18, !(unsigned __int8)sub_19D0110((__int64)a1, (unsigned __int64)v18)) )
    {
      v34 = 0;
      a2 = (unsigned __int64)v336;
      v347 = &v349;
      v348 = 0x400000000LL;
      sub_1897660(a1, (__int64)v336, (__int64)&v347, 0, 1, 0);
      if ( (_DWORD)v348 )
      {
        v34 = *(_QWORD *)v347;
        v211 = *(_QWORD *)(*(_QWORD *)v347 + 56LL);
        if ( (v211 & 0x20000) != 0 )
        {
          v212 = *(_QWORD *)(v34 + 16) & 0xFFFFFFFFFFFFFFF8LL;
          if ( (*(_QWORD *)(v34 + 16) & 4) != 0 )
            v212 = *(_QWORD *)v212;
          v213 = *(_BYTE *)(v212 + 8) & 0x7F;
          if ( (_BYTE)v213 == 20 && v212 != 48 && sub_BAB630(v212 - 48, a2, v211, v213, v21, v22) )
          {
            sub_168B9F0((__int64)&ptr, a1, v324, 0x1CB0u, 0);
            v214 = sub_19D3F70((__int64)&ptr, (__int64 *)&v336);
            v345 = __PAIR64__(a12, v316);
            sub_1587DB0(v214, (__int64 *)&v345);
            sub_15F7200(&ptr);
          }
        }
        a2 = (unsigned __int64)v336;
        v215 = sub_1C0C700(*a1);
        if ( v215 )
          v34 = v215;
      }
      if ( v347 != &v349 )
        free(v347);
LABEL_123:
      if ( v34 )
        goto LABEL_118;
      a6 = 0;
LABEL_24:
      if ( sub_9C7DB0(*(_QWORD *)(v337[0] & 0xFFFFFFFFFFFFFFF0LL), a2, v19, v20, v21) && !a15 )
      {
        v42 = sub_C00A40((unsigned __int64)v18, a2, v39, v40, v41);
        a2 = (unsigned __int64)a1;
        sub_168B9F0((__int64)&ptr, a1, v42, 0x1BB2u, 0);
        sub_15F7200(&ptr);
      }
      goto LABEL_27;
    }
LABEL_221:
    v34 = 0;
    goto LABEL_24;
  }
  a2 = v210;
  v322 = v210;
  if ( (unsigned __int8)sub_18F5260(*a1, v210, (int *)v23, v325, 0, 0, (__m128i)a7, *(double *)a8.m128_u64, 0, 0, 0) )
    return (_WORD *)(&dword_0 + 1);
  a6 = v322;
LABEL_21:
  v34 = 0;
  if ( (unsigned int)sub_BA8080(a6, a2, v19, v20, v21, v22) == 3 )
    v34 = sub_15F2530(*a1);
  if ( !(unsigned __int8)sub_BA7E40(a6, a2, v35, v36, v37, v38) )
    goto LABEL_24;
  if ( !sub_9C7DB0(*(_QWORD *)(v337[0] & 0xFFFFFFFFFFFFFFF0LL), a2, v19, v20, v21) )
  {
    if ( !sub_A5EA70(*(_QWORD *)(v337[0] & 0xFFFFFFFFFFFFFFF0LL), a2, v132, v133, v134) || a15 )
      goto LABEL_101;
LABEL_135:
    if ( !sub_BFEF10((unsigned __int64)v18) || (*(_BYTE *)(sub_168B6E0((__int64)a1) + 107) & 4) == 0 )
    {
      v165 = sub_C00A40((unsigned __int64)v18, a2, v39, v40, v41);
      sub_168B9F0((__int64)&ptr, a1, v165, 0x1045u, 0);
      if ( sub_BFEF10((unsigned __int64)v18) )
      {
        v216 = sub_BA85D0(a6);
        v217 = (char *)sub_995750(v216);
        v342 = 1;
        v341[1] = v341[0];
        sub_19CF590((__int64)&v347, v341[0], 1, v217, v218);
        sub_168ED20((__int64 *)&ptr, (char *)&v347, v219, v220, v221, v222);
        if ( v350 != v351 )
          operator delete(v350);
      }
      sub_15F7200(&ptr);
      sub_168B9F0((__int64)&ptr, a1, *(_DWORD *)(a6 + 24), 0x171Eu, 0);
      a2 = (unsigned __int64)&v347;
      v347 = *(void **)(a6 + 40);
      sub_15894B0((__int64)&ptr, (__int64 *)&v347);
      sub_15F7200(&ptr);
    }
    goto LABEL_101;
  }
  if ( a15 )
  {
    sub_A5EA70(*(_QWORD *)(v337[0] & 0xFFFFFFFFFFFFFFF0LL), a2, v132, v133, v134);
    goto LABEL_101;
  }
  v182 = sub_C00A40((unsigned __int64)v18, a2, v132, v133, v134);
  sub_168B9F0((__int64)&ptr, a1, v182, 0x1047u, 0);
  sub_15F7200(&ptr);
  sub_168B9F0((__int64)&ptr, a1, *(_DWORD *)(a6 + 24), 0x171Eu, 0);
  a2 = (unsigned __int64)&v347;
  v347 = *(void **)(a6 + 40);
  sub_15894B0((__int64)&ptr, (__int64 *)&v347);
  sub_15F7200(&ptr);
  if ( sub_A5EA70(*(_QWORD *)(v337[0] & 0xFFFFFFFFFFFFFFF0LL), (__int64)&v347, v183, v184, v185) )
    goto LABEL_135;
LABEL_101:
  if ( a4 )
  {
    sub_168B9F0((__int64)&ptr, a1, a4, 0x1046u, 0);
    if ( sub_A5EA70(
           *(_QWORD *)(v337[0] & 0xFFFFFFFFFFFFFFF0LL),
           (__int64)a1,
           v135,
           v337[0] & 0xFFFFFFFFFFFFFFF0LL,
           v136) )
    {
      v137 = sub_BA85D0(a6);
      v138 = sub_995750(v137);
      v344 = 1;
      LODWORD(v343) = a4;
      v140 = v139;
      v141 = (char *)v138;
      HIDWORD(v343) = a4;
      v142 = v343;
    }
    else
    {
      v187 = j__strlen("self");
      LODWORD(v345) = a4;
      v141 = "self";
      HIDWORD(v345) = a4;
      v140 = v187;
      v142 = v345;
      v346 = 1;
    }
    sub_19CF590((__int64)&v347, v142, 1, v141, v140);
    sub_168ED20((__int64 *)&ptr, (char *)&v347, v143, v144, v145, v146);
    if ( v350 != v351 )
      operator delete(v350);
    sub_15F7200(&ptr);
    sub_168B9F0((__int64)&ptr, a1, *(_DWORD *)(a6 + 24), 0x171Eu, 0);
    a2 = (unsigned __int64)&v347;
    v347 = *(void **)(a6 + 40);
    sub_15894B0((__int64)&ptr, (__int64 *)&v347);
    sub_15F7200(&ptr);
  }
LABEL_27:
  if ( v34 )
  {
    v43 = *(_BYTE *)(v34 + 9);
    if ( (v43 & 0x20) != 0 )
    {
      if ( a4 )
      {
        v44 = sub_F67AB0(*(_QWORD *)(v337[0] & 0xFFFFFFFFFFFFFFF0LL), a2, v39, v40, v41);
        if ( v44 )
        {
          v48 = sub_A5E7C0(v44, a2, v45, v46, v47);
          v52 = sub_9C7D40(v48, a2, v49, v50, v51);
          v57 = v52;
          if ( v52 )
          {
            if ( !sub_BAC370(v52, a2, v53, v54, v55, v56) && !sub_BAE8D0(v57, a2)
              || (a2 = (unsigned __int64)v336, sub_BAE9A0(v57, (__int64)v336, nullptr, v40, v58, v59)) )
            {
              v60 = *(char *)(v34 + 9) < 0;
              *(_BYTE *)(v34 + 9) &= ~0x40u;
              if ( !v60 )
                goto LABEL_35;
LABEL_66:
              a2 = (unsigned __int64)a1;
              sub_168B9F0((__int64)&ptr, a1, v324, 0x1C25u, 0);
              sub_15F7200(&ptr);
              goto LABEL_35;
            }
          }
        }
        v347 = nullptr;
        v167 = sub_15F1670(*a1);
        sub_BAEBF0(v167, (__int64 *)&v347, v168, v169, v170, v171);
        v94 = 7179;
      }
      else
      {
        a2 = (unsigned __int64)v18;
        if ( !(unsigned __int8)sub_19D0110((__int64)a1, (unsigned __int64)v18) )
        {
          if ( *(char *)(v34 + 9) >= 0 )
            goto LABEL_35;
          goto LABEL_140;
        }
        v347 = nullptr;
        v89 = sub_15F1670(*a1);
        sub_BAEBF0(v89, (__int64 *)&v347, v90, v91, v92, v93);
        v94 = 7180;
      }
      sub_168B9F0((__int64)&ptr, a1, v324, v94, 0);
      sub_15F7200(&ptr);
      a2 = (unsigned __int64)a1;
      sub_168B9F0((__int64)&ptr, a1, *((_DWORD *)v347 + 6), 0x1807u, 0);
      sub_15F7200(&ptr);
      v43 = *(_BYTE *)(v34 + 9);
    }
    if ( v43 >= 0 )
      goto LABEL_35;
    if ( a4 )
      goto LABEL_66;
LABEL_140:
    a2 = (unsigned __int64)v18;
    if ( (unsigned __int8)sub_19D0110((__int64)a1, (unsigned __int64)v18) )
      *(_BYTE *)(v34 + 10) &= ~1u;
  }
LABEL_35:
  v340 = 0;
  v339 = 0;
  v61 = *(_QWORD *)(v337[0] & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v61 + 16) == 34 )
    goto LABEL_36;
  v131 = *(_QWORD *)(*(_QWORD *)(v61 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v131 + 16) != 34 )
    goto LABEL_44;
  v61 = sub_F63050(*(_QWORD *)(v337[0] & 0xFFFFFFFFFFFFFFF0LL), a2, v131, v40);
  if ( v61 )
  {
LABEL_36:
    v62 = *(_QWORD *)(*(_QWORD *)(v61 + 32) & 0xFFFFFFFFFFFFFFF0LL);
    v63 = (unsigned int)*(unsigned __int8 *)(v62 + 16) - 35;
    if ( (unsigned int)v63 > 1 )
    {
      v62 = sub_F63050(v62, a2, v63, v40);
      if ( *(_BYTE *)(v62 + 19) >> 2 )
        goto LABEL_40;
    }
    else if ( *(_BYTE *)(v62 + 19) >> 2 )
    {
      goto LABEL_40;
    }
    v64 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v62 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v64 + 16) == 13 )
    {
      v65 = 1;
      if ( ((*(_WORD *)(v64 + 18) >> 3) & 0x1FF) == 0x1EA )
        goto LABEL_45;
    }
  }
LABEL_40:
  v66 = *(_QWORD *)(v337[0] & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v66 + 16) == 34
    || (v186 = *(_QWORD *)(*(_QWORD *)(v66 + 8) & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(v186 + 16) == 34)
    && (v66 = sub_F63050(*(_QWORD *)(v337[0] & 0xFFFFFFFFFFFFFFF0LL), a2, v186, v40)) != 0 )
  {
    v67 = *(_QWORD *)(*(_QWORD *)(v66 + 32) & 0xFFFFFFFFFFFFFFF0LL);
    v68 = (unsigned int)*(unsigned __int8 *)(v67 + 16) - 35;
    if ( (unsigned int)v68 > 1 )
      v67 = sub_F63050(v67, a2, v68, v40);
    if ( *(_BYTE *)(v67 + 19) >> 2 )
    {
      v166 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v67 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                       & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v166 + 16) == 13 )
      {
        v65 = ((*(_WORD *)(v166 + 18) >> 3) & 0x1FF) == 490;
        goto LABEL_45;
      }
    }
  }
LABEL_44:
  v65 = 0;
LABEL_45:
  v69 = (__int64)v18;
  if ( sub_19DDEC0(
         a1,
         (__int64)v18,
         v337[0],
         (__int64)a13,
         (unsigned int)a14,
         (__int64)v336,
         a7,
         a8,
         a10,
         a11,
         a6,
         v65,
         a4 != 0,
         v316,
         v341[0],
         &v340,
         &v339) )
  {
    return (_WORD *)(&dword_0 + 1);
  }
  if ( !a6 )
  {
    if ( (*(_BYTE *)(sub_168B6E0((__int64)a1) + 107) & 4) == 0 )
      goto LABEL_50;
    v163 = sub_FDEF00((__int64)v336);
    goto LABEL_127;
  }
  v70 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a6 + 80) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v70 + 16) != 13 || ((*(_WORD *)(v70 + 18) >> 3) & 0x1FF) != 0x1B3 )
  {
    v69 = v316;
    if ( (unsigned __int8)sub_1E63CF0(*a1, v316, *(_QWORD *)(a6 + 80), 1, 3936) )
      return (_WORD *)(&dword_0 + 1);
  }
  if ( (*(_BYTE *)(sub_168B6E0((__int64)a1) + 107) & 4) == 0 )
    goto LABEL_50;
  v163 = sub_BA8080(a6, v69, v71, v72, v73, v74);
LABEL_127:
  if ( v163 <= 0xE )
  {
    v164 = 1LL << v163;
    if ( (v164 & 0xEC0) != 0 )
    {
      sub_168B9F0((__int64)&ptr, a1, v324, 0xBCFu, 0);
      v203 = sub_19D3F70((__int64)&ptr, (__int64 *)&v336);
      sub_15884C0(v203, v341);
      sub_15F7200(&ptr);
    }
    else
    {
      if ( (v164 & 0x4000) == 0 )
      {
        if ( (v164 & 8) != 0 && a6 )
          sub_1896B90(a1, a6, v337[0]);
        goto LABEL_50;
      }
      if ( (_DWORD)a14 && a6 )
      {
        v188 = sub_BFB9F0(*a13);
        if ( (*(_WORD *)v188 & 0x1FF) == 0x1E )
        {
          v317 = v188;
          v314 = *(_QWORD *)(v188 + 16);
          v189 = sub_EEC8C0(v188, (unsigned int)a14, *(double *)a7.m128_u64);
          v190 = v314;
          v191 = sub_1897840((__int64)a1, v314, v189, 0, 1);
          v195 = v317;
          v196 = v191;
          if ( !v191 )
          {
            v236 = sub_EEC8C0(v317, v314, *(double *)a7.m128_u64);
            v190 = v314;
            v196 = sub_1897840((__int64)a1, v314, v236, 0, 0);
            if ( !v196 )
              goto LABEL_50;
          }
          v315 = v196;
          v197 = sub_BA8080(v196, v190, v192, v193, v194, v195);
          v202 = v315;
          if ( (unsigned int)(v197 - 1) > 4 )
          {
            if ( (*(_BYTE *)(v315 + 29) & 1) == 0 )
              goto LABEL_50;
            v277 = sub_B8C3D0(v315, v190, v198, v199, v200, v201);
            v202 = v315;
            v278 = (__int64 *)*v277;
            v279 = *v277 + 8LL * *((unsigned int *)v277 + 2);
            if ( *v277 >= v279 )
            {
              if ( v278 == (__int64 *)v279 )
                goto LABEL_50;
              if ( *(_WORD *)(*(_QWORD *)v279 + 36LL) != 71 )
              {
                v288 = (__int64 *)(v279 + 8);
                while ( v278 != v288 )
                {
                  v289 = *v288++;
                  if ( *(_WORD *)(v289 + 36) == 71 )
                    goto LABEL_182;
                }
                goto LABEL_50;
              }
            }
            else
            {
              v280 = *v277;
              while ( *(_WORD *)(*(_QWORD *)v280 + 36LL) != 71 )
              {
                v280 += 8LL;
                if ( v279 == v280 )
                  goto LABEL_50;
              }
              if ( v279 == v280 )
                goto LABEL_50;
            }
          }
          else if ( (*(_BYTE *)(v315 + 29) & 1) != 0 )
          {
            v282 = sub_B8C3D0(v315, v190, v198, v199, v200, v201);
            v202 = v315;
            v283 = (__int64 *)*v282;
            v284 = *v282 + 8LL * *((unsigned int *)v282 + 2);
            if ( *v282 >= v284 )
            {
              if ( v283 != (__int64 *)v284 )
              {
                if ( *(_WORD *)(*(_QWORD *)v284 + 36LL) == 266 )
                  goto LABEL_50;
                v286 = (__int64 *)(v284 + 8);
                while ( v286 != v283 )
                {
                  v287 = *v286++;
                  if ( *(_WORD *)(v287 + 36) == 266 )
                    goto LABEL_50;
                }
              }
            }
            else
            {
              v285 = *v282;
              while ( *(_WORD *)(*(_QWORD *)v285 + 36LL) != 266 )
              {
                v285 += 8LL;
                if ( v284 == v285 )
                  goto LABEL_182;
              }
              if ( v284 != v285 )
                goto LABEL_50;
            }
          }
LABEL_182:
          v318 = v202;
          sub_168B9F0((__int64)&ptr, a1, v324, 0xBDEu, 0);
          sub_15F7200(&ptr);
          sub_168B9F0((__int64)&ptr, a1, *(_DWORD *)(v318 + 24), 0x17CAu, 0);
          v347 = *(void **)(v318 + 40);
          sub_15894B0((__int64)&ptr, (__int64 *)&v347);
          sub_15F7200(&ptr);
        }
        else
        {
          sub_168B9F0((__int64)&ptr, a1, v324, 0x1966u, 0);
          sub_15F7200(&ptr);
          v235 = sub_C00A40(*a13, (__int64)a1, v233, (__int64)a13, v234);
          sub_168B9F0((__int64)&ptr, a1, v235, 0x1934u, 0);
          sub_15F7200(&ptr);
        }
      }
    }
  }
LABEL_50:
  sub_19D6D30(*a1, a6, (__int64)v336, (__int64)a13, a14);
  if ( a4 )
  {
    v75 = v340;
    v313 = sub_C9BAE0(
             v319,
             v340,
             v339,
             v316,
             a4,
             1,
             v337[0],
             (__int64)v336,
             (__int64)a10,
             a11,
             a6,
             (__int64)a13,
             (unsigned int)a14,
             a12,
             a15);
  }
  else
  {
    v75 = v340;
    v313 = sub_C9B780(
             v319,
             v340,
             v339,
             v316,
             (__int64)v18,
             (__int64)v336,
             (__int64)a10,
             a11,
             a6,
             (__int64)a13,
             (unsigned int)a14,
             a12,
             a15);
    if ( !a15 )
    {
      v75 = v313;
      sub_19DA280((_QWORD *)*a1, v313, v147, v148, v149, *(double *)a7.m128_u64);
    }
  }
  if ( !a6 )
    goto LABEL_80;
  if ( !v18 )
    goto LABEL_78;
  if ( !(unsigned __int8)sub_19D0110((__int64)a1, (unsigned __int64)v18) )
    goto LABEL_78;
  v79 = *(_QWORD *)(v337[0] & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v79 + 16) != 34 )
  {
    v79 = sub_19CD690(v79, (__int64)v18, v76, v77);
    if ( !v79 )
      goto LABEL_78;
  }
  v80 = sub_A5E7C0(v79, (__int64)v18, v76, v77, v78);
  v81 = *a1;
  v82 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v80 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v82 + 16) != 13 || ((*(_WORD *)(v82 + 18) >> 3) & 0x1FF) != 0x1EA )
    goto LABEL_79;
  v83 = sub_15F1670(v81);
  if ( v83 )
  {
    v65 = 1;
    v84 = sub_BA85D0(v83);
    v88 = sub_A82070((__int64)v319, v84, 0, v85, v86, v87);
    v81 = *a1;
    v337[0] = v88;
  }
  else
  {
LABEL_78:
    v81 = *a1;
  }
LABEL_79:
  v75 = v324;
  sub_19D67E0(v81, v324, a6, a13, (unsigned int)a14, v337[0], v65);
LABEL_80:
  if ( (*(_BYTE *)(sub_168B6E0((__int64)a1) + 107) & 4) != 0 )
  {
    if ( (*(_BYTE *)(v313 + 27) & 1) != 0 )
    {
      v121 = sub_BA8080(*(_QWORD *)(v313 + 16), v75, v116, v117, v118, v119);
    }
    else
    {
      v120 = sub_C9AC10(v313);
      v121 = sub_FDEF00(v120);
    }
    if ( v121 == 3 )
    {
      if ( a4 || (v75 = (__int64)v18, (unsigned __int8)sub_19D0110((__int64)a1, (unsigned __int64)v18)) )
      {
        v126 = *(_QWORD *)(*a1 + 544);
        if ( (*(_BYTE *)(v126 + 8) & 0x7F) == 0x12 )
        {
          v127 = v126 - 48;
          if ( v127 )
          {
            if ( (unsigned int)sub_BA8080(v127, v75, v122, v123, v124, v125) == 3 )
            {
              *(_BYTE *)(v313 + 27) |= 2u;
              return (unsigned __int16 *)v313;
            }
          }
        }
      }
    }
    sub_1A8EC70(a1, v313);
  }
  if ( (*(_BYTE *)(sub_168B6E0((__int64)a1) + 107) & 0x10) != 0 && a15 != 1 )
  {
    if ( a6 )
    {
      v173 = sub_BACEB0(a6, 1);
      v174 = v173;
      if ( v173 )
      {
        if ( (*(_BYTE *)(v173 + 73) & 2) != 0
          || ((unsigned __int8)v336 & 3) == 1
          && (v175 = *(_QWORD *)&byte_8[v340 & 0xFFFFFFFFFFFFFFF0LL], (v175 & 8) != 0)
          && (*((_BYTE *)&qword_18 + (v175 & 0xFFFFFFFFFFFFFFF0LL)) & 0xC0) != 0 )
        {
          v176 = *(_DWORD *)(*(_QWORD *)(*a1 + 4616) + 640LL * *(unsigned int *)(*a1 + 4624) - 640);
          if ( v176 > 1 && v176 != 3 )
          {
            v177 = sub_168B6D0((__int64)a1);
            if ( (unsigned __int8)sub_FD3830(*(_QWORD *)(v177 + 32), 0x1968u, v316, v177, v178, v179) != 1 )
            {
              v180 = 0;
              v181 = *(unsigned int *)(*a1 + 40);
              if ( (_DWORD)v181 )
                v180 = *(_QWORD *)(*(_QWORD *)(*a1 + 32) + 8 * v181 - 8);
              sub_15EFA50(v180, v313, v174);
            }
          }
        }
      }
    }
  }
  *(double *)a7.m128_u64 = sub_1A917A0(a1, v313);
  return sub_19A3E40(*a1, (unsigned __int16 *)v313, v128, v129, v130, a7, a8);
}
