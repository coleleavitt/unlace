void __fastcall sub_1891290(
        __int64 *a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128i a7,
        __m128 a8)
{
  __int64 *v9; // rbx
  __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 *v14; // r13
  __int64 *v15; // rbp
  __int64 v16; // rsi
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 *v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 *v22; // r13
  __int64 *v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 *v28; // rdi
  unsigned __int64 v29; // rax
  __int64 v30; // rdx
  __int64 *v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rax
  __int64 v35; // r13
  int v36; // eax
  int v37; // eax
  bool v38; // zf
  const char *v39; // rax
  char *v40; // r15
  int v41; // eax
  unsigned __int8 **v42; // r15
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // r14
  int v48; // eax
  unsigned __int64 v49; // rsi
  bool v50; // sf
  __m128 v51; // xmm0
  unsigned __int64 v52; // rax
  char v53; // r15
  __int64 v54; // rax
  unsigned __int64 v55; // r13
  unsigned __int8 v56; // al
  __int64 v57; // rdx
  unsigned __int64 v58; // rdx
  __int64 v59; // rax
  int *v60; // r8
  unsigned __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // r14
  unsigned int v65; // r13d
  unsigned __int64 v66; // rax
  unsigned __int64 v67; // rdx
  unsigned __int64 *v68; // r14
  unsigned __int64 *v69; // r13
  __int64 v70; // r15
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 *v75; // r12
  __int64 v76; // rax
  __int64 v77; // rsi
  int v78; // eax
  __int64 *v79; // r15
  int v80; // r13d
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // r8
  __int64 v84; // r9
  char v85; // r12
  __int64 *v86; // rdi
  __int64 v87; // rdx
  char v88; // r13
  char v89; // r14
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // r8
  __int64 v93; // r9
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // r8
  __int64 v97; // r9
  __int64 v98; // r14
  __int64 v99; // rdx
  char v100; // al
  char v101; // al
  unsigned __int64 v102; // rax
  __int64 *v103; // r15
  bool v104; // al
  __int64 v105; // rdx
  int v106; // r12d
  __int64 v107; // rax
  _DWORD *v108; // rax
  __int64 v109; // r8
  __int64 v110; // r9
  _BYTE *v111; // rdx
  unsigned __int8 **v112; // r14
  __int64 *v113; // r12
  _BYTE *v114; // r13
  int v115; // ecx
  __int64 v116; // r9
  unsigned int v117; // edi
  int *v118; // rsi
  _BYTE *v119; // rdx
  char v120; // al
  __int64 v121; // r10
  char v122; // r15
  __int64 v123; // rdx
  __int64 v124; // rcx
  __int64 v125; // r8
  __int64 v126; // r9
  __int64 v127; // rdx
  __int64 v128; // rcx
  __int64 v129; // r8
  __int64 v130; // r9
  __int64 v131; // rdx
  __int64 v132; // rcx
  __int64 v133; // r8
  __int64 v134; // r9
  __int64 *v135; // r12
  unsigned __int8 **v136; // r15
  unsigned __int64 *v137; // rax
  __int64 *v138; // rdx
  unsigned __int64 v139; // rcx
  __int64 *v140; // rax
  __int64 v141; // rcx
  __int64 *v142; // rdi
  __int64 v143; // rax
  __int64 v144; // rcx
  __int64 v145; // r8
  int *v146; // r9
  int *v147; // r14
  unsigned __int64 v148; // r12
  char *v149; // rax
  __int64 v150; // rax
  __int64 v151; // r15
  char *v152; // rax
  __int64 v153; // rdx
  unsigned int v154; // esi
  __int64 v155; // rcx
  int v156; // edx
  char *v157; // rdx
  __int64 v158; // rdx
  __int64 v159; // rcx
  unsigned int v160; // eax
  unsigned __int64 v161; // r9
  int v162; // eax
  unsigned int v163; // r8d
  void *v164; // rax
  __int64 v165; // rax
  _BYTE *v166; // rdx
  int v167; // r11d
  int *v168; // r10
  unsigned int v169; // esi
  __int64 v170; // rcx
  __int64 v171; // r8
  __int64 v172; // r9
  _BYTE *v173; // rbx
  __int64 v174; // rsi
  _BYTE *v175; // rbp
  _BYTE *v176; // rdi
  size_t v177; // rdx
  const void *v178; // rsi
  __int64 *v179; // rax
  __int64 **v180; // rax
  __int64 *v181; // rax
  __int64 *v182; // rax
  __int64 *v183; // rax
  __int64 **v184; // rax
  __int64 v185; // r13
  int v186; // eax
  unsigned __int8 **v187; // r15
  __int64 v188; // rdx
  __int64 v189; // rcx
  __int64 v190; // r8
  __int64 v191; // r9
  unsigned __int64 v192; // rax
  unsigned __int64 v193; // r14
  bool v194; // al
  __int64 *v195; // rsi
  unsigned int v196; // edx
  unsigned __int8 **v197; // r15
  __int64 v198; // rdx
  __int64 v199; // rcx
  __int64 v200; // r8
  __int64 v201; // r9
  __int64 v202; // rdx
  unsigned __int64 v203; // rax
  __int64 *v204; // rax
  __int64 *v205; // rax
  __int64 *v206; // rbp
  __int64 *v207; // rbp
  __int64 v208; // rsi
  __int64 v209; // rax
  unsigned __int64 v210; // r13
  unsigned __int64 v211; // r14
  char v212; // al
  unsigned __int8 **v213; // r15
  __int64 v214; // rax
  unsigned __int8 **v215; // rdi
  unsigned __int64 v216; // rax
  __int64 v217; // rdx
  __int64 v218; // rcx
  __int64 v219; // r8
  __int64 v220; // r9
  __int64 v221; // rdx
  __int64 v222; // rcx
  __int64 v223; // r8
  __int64 v224; // r9
  _QWORD *v225; // r14
  bool v226; // r13
  __int64 (__fastcall *v227)(__int64); // rax
  __int64 v228; // rax
  char v229; // al
  char v230; // al
  unsigned __int64 v231; // rax
  __int64 v232; // rdx
  __int64 v233; // rcx
  __int64 v234; // r8
  __int64 v235; // r9
  __int64 v236; // rdx
  __int64 v237; // rcx
  __int64 v238; // rdi
  unsigned __int64 v239; // r14
  unsigned __int64 v240; // rax
  __int64 v241; // rcx
  unsigned __int64 v242; // r15
  __int64 v243; // r13
  __int64 *v244; // r15
  __int64 v245; // rdi
  int v246; // r13d
  __int64 v247; // rbx
  unsigned __int8 v248; // al
  __int64 *v249; // rbp
  __int64 v250; // rax
  unsigned __int64 v251; // rax
  unsigned __int64 v252; // rdx
  __int64 v253; // rdx
  __int64 *v254; // rax
  __int64 v255; // r8
  __int64 v256; // r9
  __int64 v257; // rdx
  __int64 *v258; // rcx
  __int64 *v259; // rax
  __int64 *v260; // rax
  __int64 v261; // rdx
  unsigned __int64 v262; // rcx
  __int64 *v263; // rax
  unsigned __int64 *v264; // rax
  __int64 *v265; // rdx
  unsigned __int64 v266; // rcx
  unsigned __int64 v267; // rax
  char *v268; // rax
  __int64 v269; // rcx
  __int64 v270; // r13
  unsigned int v271; // r12d
  __int64 v272; // rdx
  __int64 v273; // rcx
  unsigned __int8 **v274; // r14
  __int64 v275; // rax
  __int64 v276; // rax
  __int64 v277; // rdx
  char v278; // al
  unsigned __int8 **v279; // r14
  __int64 v280; // rax
  __int64 **v281; // rax
  __int64 *v282; // r13
  __int64 v283; // rax
  __int64 v284; // r14
  unsigned __int8 **v285; // r15
  __int64 **v286; // rax
  __int64 *v287; // rax
  __int64 v288; // rcx
  char *v289; // rax
  __int64 v290; // rcx
  __int64 v291; // r13
  unsigned int v292; // r12d
  __int64 v293; // rdx
  char v294; // al
  __int64 v295; // rax
  __int64 *v296; // rax
  __int64 v297; // rcx
  __int64 *v298; // rax
  __int64 *v299; // rdi
  __int64 *v300; // rax
  __int64 *v301; // rax
  __int64 v302; // rdx
  unsigned __int64 v303; // rax
  unsigned __int64 v304; // r13
  __int64 v305; // rdi
  __int64 (__fastcall *v306)(__int64); // rax
  __int64 v307; // rax
  __int64 v308; // rdi
  unsigned __int64 v309; // rax
  __int64 v310; // rdx
  unsigned __int8 v311; // r15
  unsigned __int8 **v312; // r15
  unsigned __int8 **v313; // r14
  __int64 v314; // rax
  __int64 v315; // rsi
  __int64 v316; // rdx
  __int64 v317; // rcx
  __int64 v318; // r8
  __int64 v319; // r9
  unsigned __int8 **v320; // r14
  __int64 v321; // rax
  __int64 v322; // rdx
  __int64 v323; // rcx
  __int64 v324; // r8
  __int64 v325; // r9
  char *v326; // rax
  _QWORD *v327; // rax
  _QWORD *v328; // rax
  unsigned __int8 **v329; // r14
  __int64 v330; // rax
  __int64 v331; // rax
  unsigned __int8 **v332; // r14
  __int64 v333; // rax
  __int64 v334; // rax
  __int64 **v335; // rax
  __int64 v336; // rdx
  __int64 v337; // rcx
  __int64 v338; // r8
  __int64 v339; // r9
  char *v340; // rax
  _QWORD *v341; // rax
  unsigned __int8 **v342; // r14
  __int64 *v343; // r12
  __int64 v344; // rax
  unsigned __int8 **v345; // [rsp+0h] [rbp-308h] BYREF
  void **v346; // [rsp+8h] [rbp-300h] BYREF
  unsigned __int64 v347; // [rsp+10h] [rbp-2F8h]
  unsigned __int8 *p_ptr; // [rsp+18h] [rbp-2F0h]
  int *v349; // [rsp+20h] [rbp-2E8h]
  int *v350; // [rsp+28h] [rbp-2E0h]
  int v351; // [rsp+34h] [rbp-2D4h]
  unsigned __int64 v352; // [rsp+38h] [rbp-2D0h]
  __int64 *v353; // [rsp+40h] [rbp-2C8h] BYREF
  __int64 v354; // [rsp+48h] [rbp-2C0h] BYREF
  char v355; // [rsp+57h] [rbp-2B1h] BYREF
  __int64 *v356; // [rsp+58h] [rbp-2B0h] BYREF
  __m128 v357; // [rsp+60h] [rbp-2A8h] BYREF
  __int64 *v358; // [rsp+70h] [rbp-298h]
  unsigned __int8 *v359; // [rsp+78h] [rbp-290h]
  __int64 *v360; // [rsp+80h] [rbp-288h]
  void *v361[4]; // [rsp+90h] [rbp-278h] BYREF
  void *v362[4]; // [rsp+B0h] [rbp-258h] BYREF
  void *v363[4]; // [rsp+D0h] [rbp-238h] BYREF
  void *v364[4]; // [rsp+F0h] [rbp-218h] BYREF
  __m128 v365; // [rsp+110h] [rbp-1F8h] BYREF
  __int64 *v366; // [rsp+120h] [rbp-1E8h]
  char *v367; // [rsp+128h] [rbp-1E0h]
  __int64 *v368; // [rsp+130h] [rbp-1D8h]
  void *ptr; // [rsp+140h] [rbp-1C8h] BYREF
  __int64 v370; // [rsp+148h] [rbp-1C0h]
  char *v371; // [rsp+180h] [rbp-188h] BYREF
  unsigned __int8 **v372; // [rsp+188h] [rbp-180h]
  __int64 v373; // [rsp+190h] [rbp-178h]
  void *v374; // [rsp+198h] [rbp-170h]
  int v375; // [rsp+1A8h] [rbp-160h]
  __int64 *v376; // [rsp+1B0h] [rbp-158h]
  __int64 v377; // [rsp+1B8h] [rbp-150h]
  int v378; // [rsp+1D0h] [rbp-138h]
  __int64 *v379; // [rsp+1D8h] [rbp-130h]
  __int64 v380; // [rsp+1E0h] [rbp-128h]
  int v381; // [rsp+1F8h] [rbp-110h]
  __int64 *v382; // [rsp+200h] [rbp-108h]
  __int64 v383; // [rsp+208h] [rbp-100h]
  __m128i v384; // [rsp+220h] [rbp-E8h] BYREF
  unsigned __int64 v385; // [rsp+230h] [rbp-D8h]
  char v386; // [rsp+238h] [rbp-D0h]
  char v387; // [rsp+298h] [rbp-70h]
  unsigned int v388; // [rsp+2A0h] [rbp-68h]
  char v389; // [rsp+2A4h] [rbp-64h]

  v354 = a2;
  v353 = a3;
  if ( !a3 )
    return;
  v9 = a1;
  sub_7052B0((__int64 *)(a3[13] + 96), a3[13], (__int64)a3, a4, a5, a6);
  if ( (*(_BYTE *)(a3[16] + 1) & 8) != 0 )
  {
    v14 = v353;
    if ( *((char *)v353 + 28) < 0 )
    {
      v15 = (__int64 *)&v371;
      v345 = (unsigned __int8 **)&v384;
      p_ptr = (unsigned __int8 *)&ptr;
      goto LABEL_5;
    }
    v345 = (unsigned __int8 **)v353;
    a7 = (__m128i)_mm_loadh_ps((const double *)&v345);
    v384 = a7;
    v250 = v353[6];
    if ( v250 )
    {
      v251 = v250 & 0xFFFFFFFFFFFFFFF0LL;
      v252 = v251;
    }
    else
    {
      v251 = sub_A7AA70(a1[31], (__int64)v353, v10, v11, v12, v13);
      v14 = v353;
      v252 = v251 & 0xFFFFFFFFFFFFFFF0LL;
    }
    v253 = *(_QWORD *)(v252 + 8);
    v386 = 0;
    v385 = v253 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v253 | (unsigned __int8)v251) & 7;
    v345 = (unsigned __int8 **)&v384;
    sub_1866D00((__int64)&v384, (__int64)v14);
  }
  else
  {
    v345 = (unsigned __int8 **)&v384;
  }
  v14 = v353;
  if ( *((char *)v353 + 28) >= 0 )
  {
    v122 = sub_B8E180((unsigned __int64)(v353 + 8));
    if ( !v122 )
    {
      v206 = v353;
      sub_7052B0((__int64 *)(v353[13] + 96), v353[13], v10, v11, v12, v13);
      if ( *(char *)v206[16] >= 0 )
      {
        v207 = v353;
        v208 = v353[13];
        sub_7052B0((__int64 *)(v208 + 96), v208, v10, v11, v12, v13);
        v14 = v353;
        if ( (*(_BYTE *)v207[16] & 1) != 0 )
          goto LABEL_112;
        v209 = v353[16];
        if ( v209 )
        {
          if ( (*(_BYTE *)(v209 + 10) & 0x20) != 0 )
            goto LABEL_112;
        }
        v210 = sub_B7E900((__int64)v353, v208, v10, v11, v12, v13);
        if ( v210 )
        {
          v15 = (__int64 *)&v371;
          v211 = v210;
          p_ptr = (unsigned __int8 *)&ptr;
LABEL_249:
          v212 = *(_BYTE *)(v211 + 68);
          v10 = v212 & 0xC;
          if ( ((_BYTE)v10 == 12 || (v212 & 0xC) == 0) && ((v212 & 1) == 0 || *(_QWORD *)(v211 + 40)) )
          {
            v10 = *(_QWORD *)(v211 + 48);
            v11 = v10 & 0xFFFFFFFFFFFFFFF0LL;
            if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                              & 0xFFFFFFFFFFFFFFF0LL)
                                                  + 16LL)
               - 43 > 1 )
            {
              if ( (v10 & 1) == 0 && (byte_8[*(_QWORD *)(v211 + 48) & 0xFFFFFFFFFFFFFFF0LL] & 1) == 0 )
                goto LABEL_257;
              v10 &= 0xFFFFFFFFFFFFFFF0LL;
              v308 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v10 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
              v309 = *(unsigned __int8 *)(v308 + 16);
              if ( (_BYTE)v309 == 13 )
              {
                if ( (((*(_WORD *)(v308 + 18) >> 3) + 76) & 0x1FFu) > 0x34 )
                  goto LABEL_257;
              }
              else if ( (_BYTE)v309 == 47 )
              {
                v328 = sub_F60F10(v308, v208, v10, v11, v12, v13);
                if ( (*((_BYTE *)v328 + 74) & 1) == 0 && (v328[16] & 0xFFFFFFFFFFFFFFF8LL) == 0 )
                  goto LABEL_257;
              }
              else
              {
                if ( (unsigned __int8)v309 > 0x2Au )
                  goto LABEL_257;
                v208 = 0x40600004C00LL;
                if ( !_bittest64(&v208, v309) )
                  goto LABEL_257;
              }
            }
            if ( !v122 )
            {
              sub_168B9F0((__int64)v345, v9 + 1, *((_DWORD *)v353 + 6), 0x1BD8u, 0);
              v311 = *((_BYTE *)v353 + 73) >> 5;
              if ( v387 )
              {
                sub_AE9DF0(v345 + 4, *((_BYTE *)v353 + 73) >> 5, 2u);
              }
              else if ( v389 )
              {
                v346 = (void **)sub_168B9E0(v345);
                v340 = (char *)v385;
                if ( v385 )
                  v340 = (char *)(*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v385 + 32LL))(v385);
                v371 = v340;
                v341 = sub_1587BC0((__int64)v346, (__int64 *)&v371, v336, v337, v338, v339);
                sub_AE9DF0((unsigned __int8 **)(*v341 + 32LL * v388 + 8), v311, 2u);
              }
              v312 = v345;
              sub_185AB80((__int64)v345, (__int64 *)&v353);
              sub_15F7200(v312);
            }
            v213 = v345;
            sub_168B9F0((__int64)v345, v9 + 1, *(_DWORD *)(v211 + 24), 0x18C5u, 0);
            LOBYTE(ptr) = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v211 + 48)
                                                                                               & 0xFFFFFFFFFFFFFFF0LL)
                                                                                   + 8LL)
                                                                       & 0xFFFFFFFFFFFFFFF0LL)
                                                           + 16LL)
                        - 43 <= 1;
            v214 = sub_1588420((__int64)v213, p_ptr);
            v208 = (__int64)&v371;
            v371 = *(char **)(v211 + 40);
            sub_15894B0(v214, (__int64 *)&v371);
            v215 = v213;
            v122 = 1;
            sub_15F7200(v215);
          }
LABEL_257:
          while ( 1 )
          {
            v216 = *(_QWORD *)(v211 + 8) & 0xFFFFFFFFFFFFFFF8LL;
            v211 = v216;
            if ( !v216 )
              break;
            if ( (*(_BYTE *)(v216 + 28) & 0x7Fu) - 49 <= 2 )
              goto LABEL_249;
          }
          v14 = v353;
          goto LABEL_5;
        }
      }
    }
    v14 = v353;
  }
LABEL_112:
  v15 = (__int64 *)&v371;
  p_ptr = (unsigned __int8 *)&ptr;
LABEL_5:
  v16 = v14[5];
  if ( (v16 & 7) != 0 || (v16 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
    goto LABEL_7;
  v242 = sub_B94670((unsigned __int64)(v14 + 8), v16, v10, v11, v12, v13);
  if ( !v242 )
    goto LABEL_299;
  v346 = (void **)&v371;
  v347 = (unsigned __int64)v9;
  while ( 1 )
  {
    v243 = v242;
    v244 = (__int64 *)(v242 & 0xFFFFFFFFFFFFFFF8LL);
    v245 = (__int64)v244;
    v246 = (v243 >> 2) & 1;
    if ( v246 )
    {
      v245 = 0;
      if ( v244 )
        v245 = *v244;
    }
    v247 = sub_16C47B0(v245);
    v248 = *(_BYTE *)(v247 + 28) & 0x7F;
    v10 = (unsigned int)v248 - 49;
    if ( (unsigned int)v10 <= 2 || v248 == 28 )
      break;
LABEL_294:
    if ( v248 == 32 )
      goto LABEL_345;
    if ( v246 )
    {
      if ( v244 )
      {
        v242 = v244[1];
        if ( v242 )
          continue;
      }
    }
    v15 = (__int64 *)v346;
    v9 = (__int64 *)v347;
    goto LABEL_299;
  }
  v249 = v353;
  sub_7052B0((__int64 *)(v353[13] + 96), v353[13], v10, v11, v12, v13);
  if ( (*(_BYTE *)v249[16] & 1) == 0 )
  {
    v248 = *(_BYTE *)(v247 + 28) & 0x7F;
    goto LABEL_294;
  }
LABEL_345:
  v283 = (__int64)v244;
  v284 = v247;
  v9 = (__int64 *)v347;
  v15 = (__int64 *)v346;
  if ( v246 && v244 )
    v283 = *v244;
  v285 = v345;
  sub_168B9F0((__int64)v345, (__int64 *)(v347 + 8), *(_DWORD *)(v283 + 24), 0x1038u, 0);
  v371 = *(char **)(v284 + 40);
  sub_15894B0((__int64)v285, v15);
  sub_15F7200(v285);
LABEL_299:
  v14 = v353;
LABEL_7:
  v17 = v14[13];
  sub_7052B0((__int64 *)(v17 + 96), v17, v10, v11, v12, v13);
  if ( (*(_BYTE *)(v14[16] + 1) & 4) == 0 || (unsigned __int8)sub_B8E180((unsigned __int64)(v353 + 8)) )
    goto LABEL_8;
  v192 = sub_B97300((__int64)v353);
  v193 = v192;
  if ( !v192 )
  {
    v298 = v353;
    v299 = v353;
    if ( (*((_BYTE *)v353 + 29) & 1) != 0 )
      goto LABEL_387;
    v195 = v9 + 1;
    goto LABEL_450;
  }
  v194 = sub_AED5B0(v192);
  v22 = v353;
  if ( v194 || (*(_BYTE *)(v193 + 29) & 0x60) != 0 )
    goto LABEL_9;
  if ( (*((_BYTE *)v353 + 29) & 1) == 0 )
  {
    v195 = v9 + 1;
    goto LABEL_225;
  }
  v299 = v353;
LABEL_387:
  v300 = sub_B8C3D0((__int64)v299, v17, v18, (__int64)v19, v20, v21);
  v18 = *v300;
  v19 = (__int64 *)(*v300 + 8LL * *((unsigned int *)v300 + 2));
  if ( *v300 >= (unsigned __int64)v19 )
  {
    if ( (__int64 *)v18 == v19 )
      goto LABEL_391;
    if ( *(_WORD *)(*v19 + 36) == 214 )
      goto LABEL_8;
    v335 = (__int64 **)(v19 + 1);
    while ( (__int64 **)v18 != v335 )
    {
      v19 = *v335++;
      if ( *((_WORD *)v19 + 18) == 214 )
        goto LABEL_8;
    }
LABEL_391:
    v195 = v9 + 1;
    if ( v193 )
    {
LABEL_225:
      v196 = *(_DWORD *)(v193 + 24);
LABEL_226:
      v197 = v345;
      sub_168B9F0((__int64)v345, v195, v196, 0x1BE8u, 0);
      v371 = (char *)sub_A7A9D0(v9[31], (__int64)v353, v198, v199, v200, v201);
      sub_162B6D0((__int64)v197, v15);
      sub_15F7200(v197);
      goto LABEL_8;
    }
    v298 = v353;
LABEL_450:
    v196 = *((_DWORD *)v298 + 6);
    goto LABEL_226;
  }
  v301 = (__int64 *)*v300;
  while ( 1 )
  {
    v18 = *v301;
    if ( *(_WORD *)(*v301 + 36) == 214 )
      break;
    if ( v19 == ++v301 )
      goto LABEL_391;
  }
  if ( v19 == v301 )
    goto LABEL_391;
LABEL_8:
  v22 = v353;
LABEL_9:
  v23 = (__int64 *)v22[13];
  sub_7052B0(v23 + 12, (__int64)v23, v18, (__int64)v19, v20, v21);
  if ( (*(_BYTE *)(v22[16] + 1) & 8) != 0 )
  {
    v185 = sub_183EFF0((__int64)v353, (__int64)v23, v24, v25, v26, v27);
    if ( v185 )
    {
      sub_168B9F0((__int64)v345, v9 + 1, *((_DWORD *)v353 + 6), 0x194Cu, 0);
      if ( (*(_BYTE *)(v185 + 34) & 0xF0) == 0xF0 )
        v186 = sub_FA77D0(v185);
      else
        v186 = *(_BYTE *)(v185 + 34) >> 4;
      v187 = v345;
      LOBYTE(v371) = v186 == 1;
      sub_1588420((__int64)v345, (unsigned __int8 *)v15);
      sub_15F7200(v187);
      v23 = v353;
      sub_18666B0((__int64)v9, (__int64)v353, v188, v189, v190, v191);
    }
  }
  v28 = v353;
  if ( (*((_BYTE *)v353 + 29) & 1) != 0 )
  {
    v183 = sub_B8C3D0((__int64)v353, (__int64)v23, v24, v25, v26, v27);
    v30 = *v183;
    v31 = (__int64 *)(*v183 + 8LL * *((unsigned int *)v183 + 2));
    if ( *v183 < (unsigned __int64)v31 )
    {
      v204 = (__int64 *)*v183;
      while ( 1 )
      {
        v30 = *v204;
        if ( *(_WORD *)(*v204 + 36) == 214 )
          break;
        if ( v31 == ++v204 )
        {
          v28 = v353;
          goto LABEL_11;
        }
      }
      v28 = v353;
      if ( v31 == v204 )
        goto LABEL_11;
    }
    else
    {
      v28 = v353;
      if ( (__int64 *)v30 == v31 )
        goto LABEL_11;
      if ( *(_WORD *)(*v31 + 36) != 214 )
      {
        v184 = (__int64 **)(v31 + 1);
        while ( (__int64 **)v30 != v184 )
        {
          v31 = *v184++;
          if ( *((_WORD *)v31 + 18) == 214 )
            goto LABEL_25;
        }
        goto LABEL_11;
      }
    }
  }
  else
  {
LABEL_11:
    v29 = sub_B97300((__int64)v28);
    if ( v29 )
    {
      v34 = sub_183EFF0(v29, (__int64)v23, v30, (__int64)v31, v32, v33);
      v35 = v34;
      if ( v34 )
      {
        sub_168B9F0((__int64)v345, v9 + 1, *(_DWORD *)(v34 + 24), 0x1AEEu, 0);
        if ( (*(_BYTE *)(v35 + 34) & 0xF0) == 0xF0 )
          v36 = sub_FA77D0(v35);
        else
          v36 = *(_BYTE *)(v35 + 34) >> 4;
        LOBYTE(ptr) = v36 == 1;
        v346 = (void **)sub_1588420((__int64)v345, p_ptr);
        if ( (*(_BYTE *)(v35 + 34) & 0xF0) == 0xF0 )
          v37 = sub_FA77D0(v35);
        else
          v37 = *(_BYTE *)(v35 + 34) >> 4;
        v38 = v37 == 1;
        v39 = " final";
        if ( v38 )
          v39 = " sealed";
        v40 = (char *)v39;
        v347 = j__strlen(v39);
        v41 = sub_15F0EF0((__int64)v9, *((_DWORD *)v353 + 6), 0, a7, *(double *)a8.m128_u64);
        sub_9EC740((__int64)v15, v41, v40, v347, 0);
        sub_1589170((__int64)v346, v15);
        if ( v374 != v15 + 5 )
          operator delete(v374);
        v42 = v345;
        sub_15F7200(v345);
        sub_168B9F0((__int64)v42, v9 + 1, *((_DWORD *)v353 + 6), 0x175Eu, 0);
        v371 = (char *)sub_A7A9D0(v9[31], (__int64)v353, v43, v44, v45, v46);
        v47 = sub_162B6D0((__int64)v42, v15);
        if ( (*(_BYTE *)(v35 + 34) & 0xF0) == 0xF0 )
          v48 = sub_FA77D0(v35);
        else
          v48 = *(_BYTE *)(v35 + 34) >> 4;
        v23 = (__int64 *)p_ptr;
        LOBYTE(ptr) = v48 == 1;
        sub_1588420(v47, p_ptr);
        sub_15F7200(v345);
      }
    }
    v28 = v353;
  }
LABEL_25:
  if ( (*((_BYTE *)v28 + 29) & 1) != 0 )
  {
    v179 = sub_B8C3D0((__int64)v28, (__int64)v23, v30, (__int64)v31, v32, v33);
    v30 = *v179;
    v31 = (__int64 *)(*v179 + 8LL * *((unsigned int *)v179 + 2));
    if ( *v179 < (unsigned __int64)v31 )
    {
      v205 = (__int64 *)*v179;
      while ( 1 )
      {
        v30 = *v205;
        if ( *(_WORD *)(*v205 + 36) == 381 )
          break;
        if ( v31 == ++v205 )
          goto LABEL_202;
      }
      if ( v31 == v205 )
      {
LABEL_202:
        v28 = v353;
        if ( (*((_BYTE *)v353 + 29) & 1) == 0 )
          goto LABEL_26;
        v181 = sub_B8C3D0((__int64)v353, (__int64)v23, v30, (__int64)v31, v32, v33);
        v30 = *v181;
        v31 = (__int64 *)(*v181 + 8LL * *((unsigned int *)v181 + 2));
        if ( *v181 >= (unsigned __int64)v31 )
        {
          if ( (__int64 *)v30 != v31 )
          {
            if ( *(_WORD *)(*v31 + 36) == 381 )
            {
LABEL_342:
              v282 = v353;
              v355 = 1;
              sub_7052B0((__int64 *)(v353[13] + 96), v353[13], v30, (__int64)v31, v32, v33);
              v30 = v282[16];
              *(_DWORD *)(v30 + 4) = *(_DWORD *)(v30 + 4) & 0xFFF81FFF | 0x4C000;
              v28 = v353;
              goto LABEL_27;
            }
            v281 = (__int64 **)(v31 + 1);
            while ( 1 )
            {
              v31 = (__int64 *)v281;
              if ( (__int64 **)v30 == v281 )
                break;
              v31 = *v281++;
              if ( *((_WORD *)v31 + 18) == 381 )
                goto LABEL_342;
            }
          }
        }
        else
        {
          v182 = (__int64 *)*v181;
          while ( 1 )
          {
            v30 = *v182;
            if ( *(_WORD *)(*v182 + 36) == 381 )
              break;
            if ( v31 == ++v182 )
              goto LABEL_207;
          }
          if ( v31 != v182 )
            goto LABEL_342;
        }
LABEL_207:
        v355 = 0;
        v28 = v353;
        goto LABEL_27;
      }
    }
    else
    {
      if ( (__int64 *)v30 == v31 )
        goto LABEL_202;
      if ( *(_WORD *)(*v31 + 36) != 381 )
      {
        v180 = (__int64 **)(v31 + 1);
        do
        {
          v31 = (__int64 *)v180;
          if ( (__int64 **)v30 == v180 )
            goto LABEL_202;
          v31 = *v180++;
        }
        while ( *((_WORD *)v31 + 18) != 381 );
      }
    }
    v23 = v353;
    sub_1882C10((__int64)v9, (__int64)v353, v30, (__int64)v31, v32, v33);
    goto LABEL_202;
  }
LABEL_26:
  v355 = 0;
LABEL_27:
  v49 = (unsigned __int64)p_ptr;
  v356 = v9;
  v358 = v9;
  v359 = p_ptr;
  ptr = p_ptr + 16;
  v370 = 0x500000000LL;
  v50 = *((char *)v28 + 28) < 0;
  v360 = &v354;
  if ( !v50 && (*((_BYTE *)v28 + 29) & 1) != 0 )
  {
    v254 = sub_B8C3D0((__int64)v28, (__int64)p_ptr, v30, (__int64)v31, v32, v33);
    v257 = *v254;
    v258 = (__int64 *)(*v254 + 8LL * *((unsigned int *)v254 + 2));
    if ( *v254 >= (unsigned __int64)v258 )
    {
      v28 = v353;
      if ( (__int64 *)v257 == v258 )
        goto LABEL_29;
      if ( *(_WORD *)(*v258 + 36) != 393 )
      {
        v286 = (__int64 **)(v258 + 1);
        while ( (__int64 **)v257 != v286 )
        {
          v258 = *v286++;
          if ( *((_WORD *)v258 + 18) == 393 )
            goto LABEL_354;
        }
        goto LABEL_29;
      }
    }
    else
    {
      v259 = (__int64 *)*v254;
      while ( 1 )
      {
        v257 = *v259;
        if ( *(_WORD *)(*v259 + 36) == 393 )
          break;
        if ( v258 == ++v259 )
          goto LABEL_311;
      }
      v28 = v353;
      if ( v258 == v259 )
        goto LABEL_29;
    }
LABEL_354:
    v49 = (unsigned __int64)v28;
    sub_1864810((__int64)v9, (__int64)v28, v257, (__int64)v258, v255, v256);
LABEL_311:
    v28 = v353;
  }
LABEL_29:
  v366 = v9;
  v346 = (void **)&v353;
  v367 = &v355;
  v368 = (__int64 *)&v356;
  v51 = _mm_loadh_ps((const double *)&v346);
  v365 = v51;
  v52 = sub_B97300((__int64)v28);
  if ( v52 )
  {
    v49 = v52;
    sub_1890BE0((__int64 *)&v365, v52, v51, a8);
  }
  v53 = 0;
  v54 = sub_B8E970((__int64)(v353 + 8));
  LOBYTE(v346) = 0;
  v55 = v54;
  if ( !v54 )
    goto LABEL_55;
  while ( 2 )
  {
    while ( 2 )
    {
      v56 = *(_BYTE *)(v55 + 28) & 0x7F;
      if ( (unsigned int)v56 - 35 <= 3 )
      {
        if ( (unsigned __int8)sub_B8E180((unsigned __int64)(v353 + 8)) )
          goto LABEL_34;
        if ( !sub_B979F0((_QWORD *)v55) )
        {
          v49 = v55;
          sub_1864870((__int64)v9, v55, v123, v124, v125, v126);
        }
        if ( (*(_BYTE *)(v55 + 29) & 1) == 0 )
        {
LABEL_116:
          if ( (unsigned int)sub_B984E0(v55) )
          {
            v53 = 1;
          }
          else if ( (*(_BYTE *)(v55 + 82) & 4) != 0 && sub_B9CEB0((__int64)v353, v49, v127, v128, v129, v130) )
          {
            v49 = (unsigned __int64)(v9 + 1);
            sub_168B9F0((__int64)v345, v9 + 1, *(_DWORD *)(v55 + 24), 0x1D42u, 0);
            if ( v387 )
            {
              v49 = v55;
              sub_AE9DF0(v345 + 4, v55, 0xAu);
            }
            else if ( v389 )
            {
              v347 = sub_168B9E0(v345);
              v326 = (char *)v385;
              if ( v385 )
                v326 = (char *)(*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v385 + 32LL))(v385);
              v371 = v326;
              v327 = sub_1587BC0(v347, v15, v322, v323, v324, v325);
              v49 = v55;
              sub_AE9DF0((unsigned __int8 **)(*v327 + 32LL * v388 + 8), v55, 0xAu);
            }
            sub_15F7200(v345);
          }
          goto LABEL_34;
        }
        v137 = sub_B8C3D0(v55, v49, v123, v124, v125, v126);
        v138 = (__int64 *)*v137;
        v139 = *v137 + 8LL * *((unsigned int *)v137 + 2);
        if ( *v137 < v139 )
        {
          v203 = *v137;
          while ( *(_WORD *)(*(_QWORD *)v203 + 36LL) != 322 )
          {
            v203 += 8LL;
            if ( v139 == v203 )
              goto LABEL_116;
          }
          if ( v139 == v203 )
            goto LABEL_116;
        }
        else
        {
          if ( v138 == (__int64 *)v139 )
            goto LABEL_116;
          if ( *(_WORD *)(*(_QWORD *)v139 + 36LL) != 322 )
          {
            v140 = (__int64 *)(v139 + 8);
            while ( v138 != v140 )
            {
              v141 = *v140++;
              if ( *(_WORD *)(v141 + 36) == 322 )
                goto LABEL_234;
            }
            goto LABEL_116;
          }
        }
LABEL_234:
        LOBYTE(v346) = 1;
LABEL_34:
        if ( (*(_BYTE *)(v55 + 28) & 0x7F) != 0x24 )
        {
          v49 = v55;
          sub_1890BE0((__int64 *)&v365, v55, v51, a8);
        }
LABEL_36:
        v55 = *(_QWORD *)(v55 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v55 )
          goto LABEL_47;
        continue;
      }
      break;
    }
    if ( v56 != 86 )
      goto LABEL_36;
    v57 = *(_QWORD *)(v55 + 40);
    if ( !v57 )
      goto LABEL_36;
    if ( (v57 & 4) != 0 )
      goto LABEL_36;
    v58 = v57 & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v58 || (*(_BYTE *)(v58 + 28) & 0x7Fu) - 34 > 5 || *(char *)(v58 + 28) < 0 || (*(_BYTE *)(v58 + 83) & 4) == 0 )
      goto LABEL_36;
    v347 = v58;
    v59 = sub_183C740((__int64)v358, (_DWORD *)v58);
    v60 = (int *)v347;
    if ( (unsigned __int8)(BYTE1(v59) - 3) <= 1u )
    {
      v240 = (unsigned __int64)v359;
      v241 = *((unsigned int *)v359 + 2);
      v49 = *((unsigned int *)v359 + 3);
      if ( v241 + 1 > v49 )
      {
        v49 = (unsigned __int64)(v359 + 16);
        v349 = (int *)v347;
        v347 = (unsigned __int64)v359;
        sub_2237220(v359, v359 + 16, v241 + 1, 8);
        v240 = v347;
        v60 = v349;
        v241 = *(unsigned int *)(v347 + 8);
      }
      *(_QWORD *)(*(_QWORD *)v240 + 8 * v241) = v60;
      ++*(_DWORD *)(v240 + 8);
      goto LABEL_36;
    }
    v49 = *v360;
    sub_1890970((__int64)v358, *v360, v347, v51, *(double *)a8.m128_u64);
    v55 = *(_QWORD *)(v55 + 8) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v55 )
      continue;
    break;
  }
LABEL_47:
  if ( v53 )
  {
    v64 = sub_183A900((__int64)v353);
    if ( v64 )
    {
      v65 = (unsigned __int8)v346;
LABEL_50:
      while ( 1 )
      {
        sub_186DA30((__int64)v9, v64, v65, v61, v62, v63);
        v66 = *(_QWORD *)(v64 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        v64 = v66;
        if ( !v66 )
          break;
        if ( (*(_BYTE *)(v66 + 28) & 0x7Fu) - 35 > 3 )
        {
          while ( 1 )
          {
            v67 = *(_QWORD *)(v64 + 8) & 0xFFFFFFFFFFFFFFF8LL;
            v64 = v67;
            if ( !v67 )
              goto LABEL_55;
            if ( (*(_BYTE *)(v67 + 28) & 0x7Fu) - 35 <= 3 )
              goto LABEL_50;
          }
        }
      }
    }
  }
LABEL_55:
  v68 = (unsigned __int64 *)ptr;
  v69 = (unsigned __int64 *)((char *)ptr + 8 * (unsigned int)v370);
  if ( ptr != v69 )
  {
    do
    {
      v70 = *v68;
      sub_1890970((__int64)v9, v354, *v68, v51, *(double *)a8.m128_u64);
      if ( (*(_BYTE *)(v70 + 28) & 0x7Fu) - 35 <= 3 )
        sub_18885B0((__int64 *)&v356, v70);
      ++v68;
    }
    while ( v69 != v68 );
  }
  if ( (unsigned __int8)sub_B78D70((__int64)v353, v9[31]) )
  {
    v75 = v353;
    if ( (*(_BYTE *)(*(_QWORD *)(v9[31] + 2320) + 14LL) & 0x20) != 0 )
      goto LABEL_61;
    sub_7052B0((__int64 *)(v353[13] + 96), v353[13], v71, v72, v73, v74);
    if ( (*(_BYTE *)(v75[16] + 1) & 4) != 0
      || (v135 = v353,
          sub_7052B0((__int64 *)(v353[13] + 96), v353[13], v131, v132, v133, v134),
          *(_DWORD *)(v135[16] + 16)) )
    {
      v136 = v345;
      sub_168B9F0((__int64)v345, v9 + 1, *((_DWORD *)v353 + 6), 0x1A85u, 0);
      sub_15F7200(v136);
    }
  }
  v75 = v353;
LABEL_61:
  sub_1861810((__int64)v9, (__int64)v75, v71, v72, v73, v74);
  sub_183C660((__int64)v9, (__int64)v353);
  v76 = v9[31];
  v77 = *(_BYTE *)(*(_QWORD *)(v76 + 2320) + 212LL) <= 0x1Fu;
  v78 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v76 + 17448) + 768LL))(*(_QWORD *)(v76 + 17448), v77);
  v79 = v353;
  v80 = v78;
  v85 = sub_B8E180((unsigned __int64)(v353 + 8));
  if ( v85 )
  {
    v103 = v353;
    v104 = 1;
    v85 = 0;
    if ( ((*((_BYTE *)v353 + 76) >> 4) & 3) == 2 )
      goto LABEL_85;
    goto LABEL_84;
  }
  if ( *((char *)v79 + 28) < 0 )
    goto LABEL_228;
  v77 = v79[13];
  v86 = (__int64 *)(v77 + 96);
  if ( v80 == 1 )
  {
    sub_7052B0(v86, v77, v81, v82, v83, v84);
    if ( (*(_BYTE *)(v79[16] + 6) & 4) == 0 )
      goto LABEL_228;
    v77 = v79[13];
    sub_7052B0((__int64 *)(v77 + 96), v77, v202, v82, v83, v84);
    if ( (*(_BYTE *)(v79[16] + 7) & 4) != 0 )
      goto LABEL_228;
    v77 = v79[13];
    sub_7052B0((__int64 *)(v77 + 96), v77, v302, v82, v83, v84);
    if ( (*(_BYTE *)(v79[16] + 5) & 0x40) == 0 )
      goto LABEL_228;
    v103 = v353;
    v104 = 0;
    v85 = 1;
    if ( ((*((_BYTE *)v353 + 76) >> 4) & 3) == 2 )
      goto LABEL_85;
    goto LABEL_84;
  }
  if ( v80 == 2 )
  {
    sub_7052B0(v86, v77, v81, v82, v83, v84);
    if ( (*(_BYTE *)(v79[16] + 9) & 2) != 0 )
    {
      v225 = (_QWORD *)sub_183A950((__int64)v79);
      if ( v225 )
      {
        LOBYTE(v347) = 0;
        LOBYTE(v346) = 0;
LABEL_262:
        v384.m128i_i32[0] = 0;
        v226 = sub_B98FE0((__int64)v225, v345, v221, v222);
        if ( v226 )
        {
          v227 = *(__int64 (__fastcall **)(__int64))(*v225 + 32LL);
          v228 = v227 == sub_B94CC0 ? sub_B709C0((__int64)v225) : v227((__int64)v225);
          if ( (*(_BYTE *)(v228 + 82) & 0x40) == 0 )
          {
            v221 = v225[10] >> 24;
            if ( (v221 & 0x10) == 0 )
            {
              v229 = (char)v346;
              if ( (BYTE2(v225[10]) & 0x80u) != 0 )
                v229 = v226;
              v221 = (v225[10] >> 24) & 1LL;
              LOBYTE(v346) = v229;
              v230 = v347;
              if ( (_DWORD)v221 )
                v230 = v226;
              LOBYTE(v347) = v230;
            }
          }
        }
        while ( 1 )
        {
          v231 = v225[1] & 0xFFFFFFFFFFFFFFF8LL;
          v225 = (_QWORD *)v231;
          if ( !v231 )
            break;
          if ( (*(_BYTE *)(v231 + 28) & 0x7F) == 0x26 )
            goto LABEL_262;
        }
LABEL_274:
        v77 = v79[13];
        sub_7052B0((__int64 *)(v77 + 96), v77, v221, v222, v223, v224);
        if ( (*(_BYTE *)(v79[16] + 9) & 0x20) != 0 )
        {
          v303 = sub_B97300((__int64)v79);
          v304 = v303;
          if ( v303 )
          {
            v305 = v303;
            v306 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v303 + 32LL);
            v307 = v306 == sub_B94CD0 ? sub_B709C0(v305) : v306(v305);
            if ( (*(_BYTE *)(v307 + 82) & 0x40) == 0 && (*(_BYTE *)(v304 + 83) & 1) != 0 )
            {
LABEL_404:
              if ( (_BYTE)v347 )
              {
                v103 = v353;
                v85 = v347;
                v104 = 0;
                if ( ((*((_BYTE *)v353 + 76) >> 4) & 3) == 2 )
                  goto LABEL_85;
                goto LABEL_84;
              }
            }
          }
        }
        else
        {
          v77 = v79[13];
          sub_7052B0((__int64 *)(v77 + 96), v77, v232, v233, v234, v235);
          if ( (*(_BYTE *)(v79[16] + 4) & 0x40) == 0 )
          {
            v77 = v79[13];
            sub_7052B0((__int64 *)(v77 + 96), v77, v236, v237, v83, v84);
            if ( (*(_BYTE *)(v79[16] + 6) & 4) != 0 )
              goto LABEL_404;
          }
        }
        v238 = v9[31];
        v105 = *(_QWORD *)(v238 + 17448);
        if ( (_BYTE)v346 )
        {
          v77 = v79[6];
          v239 = (unsigned int)(*(_DWORD *)(v105 + 248) - 3) < 3 ? 128LL : 64LL;
          if ( v239 < sub_A97D20(v238, v77) )
            goto LABEL_228;
          v103 = v353;
          v85 = (char)v346;
          v104 = 0;
          if ( ((*((_BYTE *)v353 + 76) >> 4) & 3) == 2 )
            goto LABEL_85;
          goto LABEL_84;
        }
        v103 = v353;
        v85 = 0;
        v104 = 1;
        v82 = (*((_BYTE *)v353 + 76) >> 4) & 3;
        if ( (_BYTE)v82 != 2 )
          goto LABEL_84;
        goto LABEL_86;
      }
    }
    else
    {
      sub_7052B0((__int64 *)(v79[13] + 96), v79[13], v217, v218, v219, v220);
      if ( (*(_BYTE *)(v79[16] + 4) & 4) == 0 )
      {
        sub_7052B0((__int64 *)(v79[13] + 96), v79[13], v221, v222, v223, v224);
        v315 = v79[13];
        LOBYTE(v346) = *(_BYTE *)(v79[16] + 5) & 1;
        sub_7052B0((__int64 *)(v315 + 96), v315, v316, v317, v318, v319);
        LOBYTE(v347) = (*(_DWORD *)(v79[16] + 4) & 0x4000) != 0;
        goto LABEL_274;
      }
    }
    LOBYTE(v347) = 0;
    LOBYTE(v346) = 0;
    goto LABEL_274;
  }
  sub_7052B0(v86, v77, v81, v82, v83, v84);
  if ( (*(_BYTE *)(v79[16] + 9) & 2) == 0 )
  {
    v77 = v79[13];
    sub_7052B0((__int64 *)(v77 + 96), v77, v87, v82, v83, v84);
    if ( (*(_BYTE *)(v79[16] + 4) & 4) == 0 )
    {
      v77 = v79[13];
      sub_7052B0((__int64 *)(v77 + 96), v77, v87, v82, v83, v84);
      if ( (*(_BYTE *)(v79[16] + 5) & 0x40) != 0 )
      {
        v88 = 1;
        goto LABEL_67;
      }
LABEL_228:
      v103 = v353;
      v104 = 1;
      if ( ((*((_BYTE *)v353 + 76) >> 4) & 3) == 2 )
      {
LABEL_85:
        v105 = *(_QWORD *)(v9[31] + 17448);
        goto LABEL_86;
      }
LABEL_84:
      *((_BYTE *)v103 + 76) = *((_BYTE *)v103 + 76) & 0xCF | (16 * (v104 & 3));
      goto LABEL_85;
    }
  }
  v88 = 0;
LABEL_67:
  if ( (*(_BYTE *)(v9[29] + 1) & 0x10) != 0 )
  {
    v89 = sub_B9C060((__int64)v79, v77, v87, v82, v83, v84);
    if ( v89 )
    {
      sub_7052B0((__int64 *)(v79[13] + 96), v79[13], v87, v82, v83, v84);
      if ( (*(_BYTE *)(v79[16] + 4) & 8) == 0 )
      {
        v77 = v79[13];
        sub_7052B0((__int64 *)(v77 + 96), v77, v87, v82, v83, v84);
        if ( (*(_BYTE *)(v79[16] + 9) & 4) == 0 && !(unsigned __int8)sub_B9C060((__int64)v79, v77, v310, v82, v83, v84) )
          goto LABEL_228;
        v77 = v79[13];
        sub_7052B0((__int64 *)(v77 + 96), v77, v310, v82, v83, v84);
        if ( *(char *)(v79[16] + 5) >= 0 )
          goto LABEL_228;
        v88 = v89;
      }
    }
  }
  v77 = v79[13];
  sub_7052B0((__int64 *)(v77 + 96), v77, v87, v82, v83, v84);
  if ( (*(_BYTE *)(v79[16] + 9) & 0x20) == 0 )
  {
    v77 = v79[13];
    sub_7052B0((__int64 *)(v77 + 96), v77, v90, v91, v92, v93);
    if ( (*(_BYTE *)(v79[16] + 4) & 0x40) == 0 )
    {
      v77 = v79[13];
      sub_7052B0((__int64 *)(v77 + 96), v77, v94, v95, v96, v97);
      if ( (*(_BYTE *)(v79[16] + 6) & 4) == 0 )
        goto LABEL_228;
    }
  }
  v98 = sub_183A900((__int64)v79);
  if ( v98 )
  {
LABEL_72:
    if ( (*(_BYTE *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v98 + 32LL))(v98) + 82) & 0x40) == 0
      && (*(_BYTE *)(v98 + 83) & 0x10) == 0 )
    {
      v100 = *(_BYTE *)(v98 + 28) & 0x7F;
      if ( v100 == 38 )
      {
        v77 = (__int64)v345;
        v101 = sub_B990E0(v98, v345, v99, v82);
        if ( !v101 )
        {
          v100 = *(_BYTE *)(v98 + 28) & 0x7F;
          goto LABEL_77;
        }
        v88 = v101;
      }
      else
      {
LABEL_77:
        if ( v100 != 36 )
          goto LABEL_81;
      }
      if ( (*(_BYTE *)(v98 + 83) & 1) != 0 )
        goto LABEL_81;
      v103 = v353;
      if ( ((*((_BYTE *)v353 + 76) >> 4) & 3) == 2 )
        goto LABEL_85;
      v104 = 1;
      goto LABEL_84;
    }
LABEL_81:
    while ( 1 )
    {
      v102 = *(_QWORD *)(v98 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      v98 = v102;
      if ( !v102 )
        break;
      if ( (*(_BYTE *)(v102 + 28) & 0x7Fu) - 35 <= 3 )
        goto LABEL_72;
    }
  }
  v103 = v353;
  if ( ((*((_BYTE *)v353 + 76) >> 4) & 3) != 2 )
  {
    v85 = v88;
    v104 = v88 == 0;
    goto LABEL_84;
  }
  v85 = v88;
  v105 = *(_QWORD *)(v9[31] + 17448);
LABEL_86:
  if ( *(_DWORD *)(v105 + 340) == 10 )
  {
    *((_BYTE *)v103 + 76) |= 8u;
    v107 = v9[29];
    if ( (*(_BYTE *)(v107 + 157) & 0x10) == 0 )
      goto LABEL_90;
LABEL_195:
    v77 = *((unsigned int *)v353 + 14);
    sub_1884910((__int64)v9, v77, v353, 0, v83, v84);
    v107 = v9[29];
    goto LABEL_90;
  }
  v77 = v103[13];
  sub_7052B0((__int64 *)(v77 + 96), v77, v105, v82, v83, v84);
  if ( (*(_BYTE *)(v103[16] + 5) & 0x10) == 0 )
  {
    v82 = (__int64)v353;
    v106 = v85 & 1;
    v105 = (unsigned int)(8 * v106);
    *((_BYTE *)v353 + 76) = (8 * v106) | *((_BYTE *)v353 + 76) & 0xF7;
  }
  v107 = v9[29];
  if ( (*(_BYTE *)(v107 + 157) & 0x10) != 0 )
    goto LABEL_195;
LABEL_90:
  if ( (*(_BYTE *)(v107 + 60) & 0x10) == 0 || (*((_BYTE *)v353 + 29) & 1) == 0 )
    goto LABEL_92;
  v260 = sub_B8C3D0((__int64)v353, v77, v105, v82, v83, v84);
  v261 = *v260;
  v262 = *v260 + 8LL * *((unsigned int *)v260 + 2);
  if ( *v260 >= v262 )
  {
    if ( v261 != v262 )
    {
      if ( *(_WORD *)(*(_QWORD *)v262 + 36LL) == 161 )
        goto LABEL_367;
      v287 = (__int64 *)(v262 + 8);
      while ( 1 )
      {
        v262 = (unsigned __int64)v287;
        if ( (__int64 *)v261 == v287 )
          break;
        v288 = *v287++;
        if ( *(_WORD *)(v288 + 36) == 161 )
          goto LABEL_367;
      }
    }
LABEL_316:
    if ( (*((_BYTE *)v353 + 29) & 1) == 0 )
      goto LABEL_92;
    v264 = sub_B8C3D0((__int64)v353, v77, v261, v262, v83, v84);
    v265 = (__int64 *)*v264;
    v266 = *v264 + 8LL * *((unsigned int *)v264 + 2);
    if ( *v264 >= v266 )
    {
      if ( v265 == (__int64 *)v266 )
        goto LABEL_92;
      if ( *(_WORD *)(*(_QWORD *)v266 + 36LL) == 162 )
      {
LABEL_322:
        v357.m128_i8[0] = 0;
        v364[0] = &v357;
        v363[0] = v353;
        v268 = (char *)sub_B97230((__int64)v353);
        v371 = v268;
        if ( !v268 )
        {
          if ( (*((_BYTE *)v363[0] + 28) & 0x7Fu) - 60 > 1 )
          {
            v342 = v345;
            v343 = v9 + 1;
            sub_168B9F0((__int64)v345, v9 + 1, *((_DWORD *)v363[0] + 6), 0xDEAu, 0);
            LODWORD(v362[0]) = 1;
LABEL_481:
            v350 = (int *)v362;
            v344 = sub_1587D10((__int64)v342, (int *)v362);
            v347 = (unsigned __int64)v363;
            sub_185AB80(v344, (__int64 *)v363);
            sub_15F7200(v342);
            sub_168B9F0((__int64)v342, v343, *((_DWORD *)v363[0] + 6), 0x16E9u, 0);
            sub_185AB80((__int64)v342, (__int64 *)v363);
            sub_15F7200(v342);
            v346 = v364;
            v349 = (int *)v361;
            goto LABEL_93;
          }
          v268 = (char *)sub_BBF290((__int64)v363[0]);
          v371 = v268;
        }
        v270 = *((_QWORD *)v268 + 7);
        v271 = *(_DWORD *)(v270 + 20) & 0x1FFFFFFF;
        if ( v271 == 3 )
        {
          v350 = (int *)v362;
          v346 = v364;
        }
        else
        {
          v346 = v364;
          sub_186B1F0(v364, (__int64)v9, (__int64)v268);
          v320 = v345;
          sub_168B9F0((__int64)v345, v9 + 1, *((_DWORD *)v371 + 6), 0x16E8u, 0);
          v321 = sub_1852D00((__int64)v320, v15);
          LODWORD(v362[0]) = 3;
          v77 = (__int64)v362;
          v350 = (int *)v362;
          sub_1587D10(v321, (int *)v362);
          sub_15F7200(v320);
          if ( !v271 )
            goto LABEL_442;
        }
        if ( (*(_BYTE *)(*(_QWORD *)(v270 + 24) + 28LL) & 0x7F) == 0x43 )
        {
          v349 = (int *)v361;
        }
        else
        {
          sub_186B1F0(v346, (__int64)v9, (__int64)v371);
          v332 = v345;
          sub_168B9F0((__int64)v345, v9 + 1, *((_DWORD *)v371 + 6), 0x16E7u, 0);
          v333 = sub_1852D00((__int64)v332, v15);
          LODWORD(v362[0]) = 0;
          v334 = sub_1587D10(v333, v350);
          LODWORD(v361[0]) = 0;
          v77 = (__int64)v361;
          v349 = (int *)v361;
          sub_1587D10(v334, (int *)v361);
          sub_15F7200(v332);
        }
        if ( v271 <= 1 )
          goto LABEL_377;
        v272 = *(_QWORD *)(v270 + 32);
        if ( (*(_BYTE *)(v272 + 28) & 0x7F) != 0x2F
          || !sub_C1C400(*(_QWORD *)(*(_QWORD *)(v272 + 48) & 0xFFFFFFFFFFFFFFF0LL), v77, v272, v269, v83) )
        {
          sub_186B1F0(v346, (__int64)v9, (__int64)v371);
          v274 = v345;
          sub_168B9F0((__int64)v345, v9 + 1, *((_DWORD *)v371 + 6), 0x16E7u, 0);
          v275 = sub_1852D00((__int64)v274, v15);
          LODWORD(v362[0]) = 1;
          v276 = sub_1587D10(v275, v350);
          v77 = (__int64)v349;
          LODWORD(v361[0]) = 1;
          sub_1587D10(v276, v349);
          sub_15F7200(v274);
        }
        if ( v271 == 2 )
          goto LABEL_377;
        v277 = *(_QWORD *)(v270 + 40);
        if ( (*(_BYTE *)(v277 + 28) & 0x7F) != 0x2F
          || (v278 = sub_C1C400(*(_QWORD *)(*(_QWORD *)(v277 + 48) & 0xFFFFFFFFFFFFFFF0LL), v77, v277, v273, v83),
              v347 = (unsigned __int64)v363,
              !v278) )
        {
          sub_186B1F0(v346, (__int64)v9, (__int64)v371);
          v279 = v345;
          sub_168B9F0((__int64)v345, v9 + 1, *((_DWORD *)v371 + 6), 0x16E7u, 0);
          v280 = sub_1852D00((__int64)v279, v15);
          LODWORD(v362[0]) = 2;
          goto LABEL_376;
        }
        goto LABEL_93;
      }
      v296 = (__int64 *)(v266 + 8);
      while ( v265 != v296 )
      {
        v297 = *v296++;
        if ( *(_WORD *)(v297 + 36) == 162 )
          goto LABEL_322;
      }
    }
    else
    {
      v267 = *v264;
      while ( *(_WORD *)(*(_QWORD *)v267 + 36LL) != 162 )
      {
        v267 += 8LL;
        if ( v266 == v267 )
          goto LABEL_92;
      }
      if ( v266 != v267 )
        goto LABEL_322;
    }
LABEL_92:
    v350 = (int *)v362;
    v347 = (unsigned __int64)v363;
    v346 = v364;
    v349 = (int *)v361;
    goto LABEL_93;
  }
  v263 = (__int64 *)*v260;
  while ( 1 )
  {
    v261 = *v263;
    if ( *(_WORD *)(*v263 + 36) == 161 )
      break;
    if ( (__int64 *)v262 == ++v263 )
      goto LABEL_316;
  }
  if ( (__int64 *)v262 == v263 )
    goto LABEL_316;
LABEL_367:
  v357.m128_i8[0] = 0;
  v364[0] = &v357;
  v363[0] = v353;
  v289 = (char *)sub_B97230((__int64)v353);
  v371 = v289;
  if ( v289 )
    goto LABEL_368;
  if ( (*((_BYTE *)v363[0] + 28) & 0x7Fu) - 60 > 1 )
  {
    v342 = v345;
    v343 = v9 + 1;
    sub_168B9F0((__int64)v345, v9 + 1, *((_DWORD *)v363[0] + 6), 0xDEAu, 0);
    LODWORD(v362[0]) = 0;
    goto LABEL_481;
  }
  v289 = (char *)sub_BBF290((__int64)v363[0]);
  v371 = v289;
LABEL_368:
  v291 = *((_QWORD *)v289 + 7);
  v292 = *(_DWORD *)(v291 + 20) & 0x1FFFFFFF;
  if ( v292 == 2 )
  {
    v350 = (int *)v362;
    v346 = v364;
    goto LABEL_370;
  }
  v346 = v364;
  sub_186B360(v364, (__int64)v9, (__int64)v289);
  v313 = v345;
  sub_168B9F0((__int64)v345, v9 + 1, *((_DWORD *)v371 + 6), 0x16E8u, 0);
  v314 = sub_1852D00((__int64)v313, v15);
  LODWORD(v362[0]) = 2;
  v77 = (__int64)v362;
  v350 = (int *)v362;
  sub_1587D10(v314, (int *)v362);
  sub_15F7200(v313);
  if ( !v292 )
  {
LABEL_442:
    v347 = (unsigned __int64)v363;
    v349 = (int *)v361;
    goto LABEL_93;
  }
LABEL_370:
  if ( (*(_BYTE *)(*(_QWORD *)(v291 + 24) + 28LL) & 0x7F) == 0x43 )
  {
    v349 = (int *)v361;
  }
  else
  {
    sub_186B360(v346, (__int64)v9, (__int64)v371);
    v329 = v345;
    sub_168B9F0((__int64)v345, v9 + 1, *((_DWORD *)v371 + 6), 0x16E7u, 0);
    v330 = sub_1852D00((__int64)v329, v15);
    LODWORD(v362[0]) = 0;
    v331 = sub_1587D10(v330, v350);
    LODWORD(v361[0]) = 0;
    v77 = (__int64)v361;
    v349 = (int *)v361;
    sub_1587D10(v331, (int *)v361);
    sub_15F7200(v329);
  }
  if ( v292 <= 1 )
    goto LABEL_377;
  v293 = *(_QWORD *)(v291 + 32);
  if ( (*(_BYTE *)(v293 + 28) & 0x7F) != 0x2F
    || (v294 = sub_C1C400(*(_QWORD *)(*(_QWORD *)(v293 + 48) & 0xFFFFFFFFFFFFFFF0LL), v77, v293, v290, v83),
        v347 = (unsigned __int64)v363,
        !v294) )
  {
    sub_186B360(v346, (__int64)v9, (__int64)v371);
    v279 = v345;
    sub_168B9F0((__int64)v345, v9 + 1, *((_DWORD *)v371 + 6), 0x16E7u, 0);
    v280 = sub_1852D00((__int64)v279, v15);
    LODWORD(v362[0]) = 1;
LABEL_376:
    v295 = sub_1587D10(v280, v350);
    LODWORD(v361[0]) = 1;
    sub_1587D10(v295, v349);
    sub_15F7200(v279);
LABEL_377:
    v347 = (unsigned __int64)v363;
  }
LABEL_93:
  v372 = (unsigned __int8 **)(v15 + 3);
  v384.m128i_i8[0] &= ~1u;
  v362[0] = v350 + 4;
  v376 = v15 + 8;
  v363[0] = (void *)(v347 + 16);
  v379 = v15 + 13;
  v361[0] = v349 + 4;
  v364[0] = v346 + 2;
  v382 = v15 + 18;
  v361[1] = (void *)0x200000000LL;
  LODWORD(v371) = 1;
  v373 = 0x200000000LL;
  v362[1] = (void *)0x200000000LL;
  v375 = 3;
  v377 = 0x200000000LL;
  v363[1] = (void *)0x200000000LL;
  v378 = 2;
  v380 = 0x200000000LL;
  v364[1] = (void *)0x200000000LL;
  v381 = 3;
  v383 = 0x200000000LL;
  v108 = (_DWORD *)sub_22300B0(320, 8, v15 + 18, v347, v83, v84);
  v38 = (v384.m128i_i8[0] & 1) == 0;
  v384.m128i_i64[0] = v384.m128i_i8[0] & 1;
  v384.m128i_i64[1] = (__int64)v108;
  v111 = v108 + 80;
  LODWORD(v385) = 8;
  if ( !v38 )
  {
    v111 = v345 + 21;
    v108 = v345 + 1;
  }
  do
  {
    *v108 = 0x7FFFFFFF;
    v108 += 10;
  }
  while ( v108 != (_DWORD *)v111 );
  v112 = v345;
  v113 = v15;
  v114 = v345 + 1;
  while ( 2 )
  {
    v120 = v384.m128i_i8[0] & 1;
    if ( (v384.m128i_i8[0] & 1) != 0 )
    {
      v115 = *(_DWORD *)v113;
      v116 = 160;
      v117 = *(_DWORD *)v113 & 3;
      v118 = (int *)&v114[40 * v117];
      v119 = v114;
      v109 = (unsigned int)*v118;
      if ( *(_DWORD *)v113 == (_DWORD)v109 )
        goto LABEL_98;
      v110 = 3;
      goto LABEL_174;
    }
    v121 = (unsigned int)v385;
    if ( !(_DWORD)v385 )
    {
      v357.m128_u64[0] = 0;
      v158 = v384.m128i_u32[0];
      v159 = ((unsigned __int32)v384.m128i_i32[0] >> 1) + 1;
      goto LABEL_164;
    }
    v115 = *(_DWORD *)v113;
    v110 = (unsigned int)(v385 - 1);
    v119 = (_BYTE *)v384.m128i_i64[1];
    v117 = v110 & (37 * *(_DWORD *)v113);
    v118 = (int *)(v384.m128i_i64[1] + 40LL * v117);
    v109 = (unsigned int)*v118;
    if ( (_DWORD)v109 == *(_DWORD *)v113 )
    {
LABEL_103:
      v116 = 40 * v121;
      goto LABEL_98;
    }
LABEL_174:
    v167 = 1;
    v168 = nullptr;
    if ( (_DWORD)v109 != 0x7FFFFFFF )
    {
      while ( 1 )
      {
        if ( !v168 && (_DWORD)v109 == 0x80000000 )
          v168 = v118;
        v117 = v110 & (v167 + v117);
        v351 = v167 + 1;
        v118 = (int *)&v119[40 * v117];
        v109 = (unsigned int)*v118;
        if ( (_DWORD)v109 == v115 )
          break;
        if ( (_DWORD)v109 == 0x7FFFFFFF )
        {
          if ( v168 )
            v118 = v168;
          goto LABEL_175;
        }
        v167 = v351;
      }
      if ( !v120 )
      {
        v119 = (_BYTE *)v384.m128i_i64[1];
        v121 = (unsigned int)v385;
        goto LABEL_103;
      }
      v116 = 160;
      v119 = v114;
LABEL_98:
      sub_1881530(&v357, v118, (int *)&v119[v116], (__int64)v112, 1);
      goto LABEL_99;
    }
LABEL_175:
    v158 = v384.m128i_u32[0];
    v357.m128_u64[0] = (unsigned __int64)v118;
    v159 = ((unsigned __int32)v384.m128i_i32[0] >> 1) + 1;
    if ( !v120 )
    {
      LODWORD(v121) = v385;
LABEL_164:
      if ( 4 * (int)v159 >= (unsigned int)(3 * v121) )
        goto LABEL_177;
      goto LABEL_165;
    }
    LODWORD(v121) = 4;
    if ( (unsigned int)(4 * v159) >= 0xC )
    {
LABEL_177:
      v169 = 2 * v121;
      goto LABEL_178;
    }
LABEL_165:
    v160 = v121 - v384.m128i_i32[1] - v159;
    v159 = (unsigned int)v121 >> 3;
    if ( v160 <= (unsigned int)v159 )
    {
      v169 = v121;
LABEL_178:
      sub_18816B0((__int64)v112, v169, v158, v159, v109, v110);
      sub_1840030((__int64)v112, (int *)v113, &v357);
      LODWORD(v158) = v384.m128i_i32[0];
    }
    v161 = v357.m128_u64[0];
    v384.m128i_i32[0] = (2 * ((unsigned int)v158 >> 1) + 2) | v158 & 1;
    if ( *(_DWORD *)v357.m128_u64[0] != 0x7FFFFFFF )
      --v384.m128i_i32[1];
    v162 = *(_DWORD *)v113;
    *(_QWORD *)(v357.m128_u64[0] + 16) = 0x200000000LL;
    v163 = *((_DWORD *)v113 + 4);
    *(_DWORD *)v161 = v162;
    v164 = (void *)(v161 + 24);
    *(_QWORD *)(v161 + 8) = v161 + 24;
    if ( v163 && (__int64 *)(v161 + 8) != v113 + 1 )
    {
      v177 = 8LL * v163;
      if ( v163 <= 2uLL
        || (v352 = v161,
            v351 = v163,
            sub_2237220(v161 + 8, v161 + 24, v163, 8),
            v161 = v352,
            v163 = v351,
            v177 = 8LL * *((unsigned int *)v113 + 4),
            v164 = *(void **)(v352 + 8),
            v177) )
      {
        v178 = (const void *)v113[1];
        v352 = v161;
        v351 = v163;
        memcpy(v164, v178, v177);
        v161 = v352;
        *(_DWORD *)(v352 + 16) = v351;
      }
      else
      {
        *(_DWORD *)(v352 + 16) = v351;
      }
    }
    if ( (v384.m128i_i8[0] & 1) != 0 )
    {
      v165 = 160;
      v166 = v114;
    }
    else
    {
      v166 = (_BYTE *)v384.m128i_i64[1];
      v165 = 40LL * (unsigned int)v385;
    }
    sub_1881530(&v357, (int *)v161, (int *)&v166[v165], (__int64)v112, 1);
LABEL_99:
    v113 += 5;
    if ( v113 != v15 + 20 )
      continue;
    break;
  }
  do
  {
    while ( 1 )
    {
      v113 -= 5;
      v142 = (__int64 *)v113[1];
      if ( v142 != v113 + 3 )
        break;
      if ( v113 == v15 )
        goto LABEL_139;
    }
    free(v142);
  }
  while ( v113 != v15 );
LABEL_139:
  if ( v364[0] != v346 + 2 )
    free(v364[0]);
  if ( v363[0] != (void *)(v347 + 16) )
    free(v363[0]);
  if ( v362[0] != v350 + 4 )
    free(v362[0]);
  if ( v361[0] != v349 + 4 )
    free(v361[0]);
  v143 = sub_B8E970((__int64)(v353 + 8));
  v147 = (int *)v347;
  v148 = v143;
  if ( v143 )
  {
    while ( 1 )
    {
      v150 = sub_B8BF30(v148);
      v151 = v150;
      if ( !v150 || !sub_B74C70(v150) )
        goto LABEL_152;
      LODWORD(v363[0]) = sub_B77890(v151);
      if ( (unsigned __int8)sub_1840030((__int64)v345, v147, v346) )
      {
        v146 = (int *)v364[0];
        v144 = *((unsigned int *)v364[0] + 4);
        v149 = (char *)v364[0] + 8;
        if ( v144 + 1 > (unsigned __int64)*((unsigned int *)v364[0] + 5) )
        {
          v349 = (int *)v364[0];
          v347 = (unsigned __int64)v364[0] + 8;
          sub_2237220(v149, (char *)v364[0] + 24, v144 + 1, 8);
          v146 = v349;
          v149 = (char *)v347;
          v144 = (unsigned int)v349[4];
        }
        goto LABEL_151;
      }
      v152 = (char *)v364[0];
      v371 = (char *)v364[0];
      v153 = ((unsigned __int32)v384.m128i_i32[0] >> 1) + 1;
      if ( (v384.m128i_i8[0] & 1) != 0 )
      {
        v155 = 12;
        v154 = 4;
      }
      else
      {
        v154 = v385;
        v155 = (unsigned int)(3 * v385);
      }
      if ( 4 * (int)v153 >= (unsigned int)v155 )
        break;
      v155 = v154 >> 3;
      if ( v154 - ((_DWORD)v153 + v384.m128i_i32[1]) <= (unsigned int)v155 )
        goto LABEL_282;
LABEL_160:
      v384.m128i_i32[0] = v384.m128i_i8[0] & 1 | (2 * v153);
      if ( *(_DWORD *)v152 != 0x7FFFFFFF )
        --v384.m128i_i32[1];
      v156 = (int)v363[0];
      v144 = 0;
      *((_QWORD *)v152 + 2) = 0x200000000LL;
      *(_DWORD *)v152 = v156;
      v157 = v152 + 24;
      v149 = v152 + 8;
      *(_QWORD *)v149 = v157;
LABEL_151:
      *(_QWORD *)(*(_QWORD *)v149 + 8 * v144) = v151;
      ++*((_DWORD *)v149 + 2);
LABEL_152:
      v148 = *(_QWORD *)(v148 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v148 )
        goto LABEL_179;
    }
    v154 *= 2;
LABEL_282:
    sub_18816B0((__int64)v345, v154, v153, v155, v145, (__int64)v146);
    sub_1840030((__int64)v345, v147, v15);
    v152 = v371;
    LODWORD(v153) = ((unsigned __int32)v384.m128i_i32[0] >> 1) + 1;
    goto LABEL_160;
  }
LABEL_179:
  v371 = (char *)v9;
  v372 = v345;
  v373 = (__int64)v353;
  sub_1881DB0(v15, 1, 2, v144, v145, (__int64)v146);
  sub_1881DB0(v15, 3, 4, v170, v171, v172);
  if ( (v384.m128i_i8[0] & 1) != 0 )
  {
    v175 = v345 + 21;
    v173 = v345 + 1;
  }
  else
  {
    v173 = (_BYTE *)v384.m128i_i64[1];
    v174 = 40LL * (unsigned int)v385;
    if ( !(_DWORD)v385 || (v175 = (_BYTE *)(v384.m128i_i64[1] + v174), v384.m128i_i64[1] + v174 == v384.m128i_i64[1]) )
    {
LABEL_191:
      operator delete(v173, v174, 8);
      goto LABEL_105;
    }
  }
  do
  {
    if ( (unsigned int)(*(_DWORD *)v173 + 0x7FFFFFFF) <= 0xFFFFFFFD )
    {
      v176 = *((_BYTE **)v173 + 1);
      if ( v176 != v173 + 24 )
        free(v176);
    }
    v173 += 40;
  }
  while ( v173 != v175 );
  if ( (v384.m128i_i8[0] & 1) == 0 )
  {
    v173 = (_BYTE *)v384.m128i_i64[1];
    v174 = 40LL * (unsigned int)v385;
    goto LABEL_191;
  }
LABEL_105:
  if ( ptr != p_ptr + 16 )
    free(ptr);
}
