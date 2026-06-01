__int64 *__fastcall sub_512570(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v3; // r12d
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rbp
  __int64 v7; // r13
  unsigned int v8; // eax
  void *v9; // r15
  __int64 v10; // rcx
  unsigned int v11; // edx
  __int64 v12; // r14
  int v13; // eax
  int v14; // eax
  unsigned int v15; // eax
  __int64 v16; // rcx
  unsigned int v17; // edx
  __int64 v18; // r15
  __m128i *v19; // rdi
  __int32 v20; // eax
  int v21; // eax
  void *v22; // r13
  void *v23; // r13
  void *v24; // rbx
  _QWORD *v26; // rbx
  __int64 v27; // rdi
  __int64 v28; // rdi
  __int64 v29; // rdi
  __int64 *v30; // r12
  __int64 v31; // rbp
  __int64 v32; // rax
  __int64 v33; // r13
  void *v34; // r14
  void *v35; // r14
  __int64 v36; // rsi
  void *v37; // rbp
  void *v38; // rbx
  __int64 *result; // rax
  unsigned int v40; // eax
  void *v41; // r15
  __int64 v42; // rdx
  unsigned int v43; // ecx
  __int64 v44; // r14
  int v45; // eax
  int v46; // eax
  unsigned int v47; // eax
  __int64 v48; // rdx
  unsigned int v49; // ecx
  __int64 v50; // r15
  __m128i *v51; // rdi
  __int32 v52; // eax
  int v53; // eax
  void *v54; // r15
  void *v55; // r15
  void *v56; // r15
  unsigned int v57; // r13d
  unsigned int v58; // eax
  __int64 v59; // rcx
  unsigned int v60; // edx
  unsigned int v61; // eax
  __int64 v62; // rdx
  unsigned int v63; // ecx
  void *v64; // r15
  void *v65; // r15
  int *v66; // rsi
  int v67; // edx
  int v68; // ecx
  int v69; // r8d
  int v70; // r9d
  __int64 v71; // rax
  unsigned int v72; // edx
  __int64 v73; // rdi
  void *v74; // r13
  void *v75; // r13
  void *v76; // r13
  _QWORD *v77; // rsi
  unsigned int v78; // eax
  void *v79; // r15
  __int64 v80; // rdx
  unsigned int v81; // ecx
  const __m128i *v82; // r14
  __int32 v83; // eax
  __int32 v84; // eax
  __int32 v85; // eax
  void *v86; // r15
  __int32 v87; // eax
  __m128i v88; // xmm0
  __int64 v89; // rsi
  unsigned int v90; // eax
  __int64 v91; // rdx
  unsigned int v92; // ecx
  void *v93; // r15
  const __m128i *v94; // r14
  __int32 v95; // eax
  __int32 v96; // eax
  __int32 v97; // eax
  void *v98; // r15
  __int32 v99; // eax
  __m128i v100; // xmm0
  __int64 v101; // r13
  void *v102; // r15
  void *v103; // r15
  void *v104; // r13
  void *v105; // r13
  unsigned int v106; // r13d
  unsigned int v107; // eax
  __int64 v108; // rcx
  unsigned int v109; // edx
  unsigned int v110; // eax
  __int64 v111; // rdx
  unsigned int v112; // ecx
  void *v113; // r15
  void *v114; // r15
  int *v115; // rsi
  int v116; // edx
  int v117; // ecx
  int v118; // r8d
  int v119; // r9d
  __int64 v120; // rax
  unsigned int v121; // edx
  __int64 v122; // rax
  unsigned int v123; // r15d
  unsigned int v124; // eax
  __int64 v125; // rcx
  unsigned int v126; // edx
  unsigned int v127; // eax
  __int64 v128; // rdx
  unsigned int v129; // ecx
  void *v130; // r13
  void *v131; // r13
  int v132; // esi
  int v133; // edx
  int v134; // ecx
  int v135; // r8d
  int v136; // r9d
  __int64 v137; // rax
  unsigned int v138; // edx
  __int64 v139; // rax
  void *v140; // r13
  void *v141; // r13
  void *v142; // r13
  void *v143; // rbx
  int v144; // edx
  int v145; // ecx
  int v146; // r8d
  int v147; // r9d
  void *v148; // r15
  void *v149; // r14
  __int32 v150; // eax
  void *v151; // r14
  void *v152; // r14
  unsigned int v153; // r14d
  unsigned int v154; // eax
  __int64 v155; // rcx
  unsigned int v156; // edx
  unsigned int v157; // eax
  __int64 v158; // rdx
  unsigned int v159; // ecx
  void *v160; // r15
  void *v161; // r15
  int *v162; // rsi
  int v163; // edx
  int v164; // ecx
  int v165; // r8d
  int v166; // r9d
  __int64 v167; // rax
  unsigned int v168; // edx
  __int64 v169; // rax
  void *v170; // r14
  void *v171; // r14
  void *v172; // r14
  unsigned int v173; // r13d
  unsigned int v174; // eax
  __int64 v175; // rcx
  unsigned int v176; // edx
  unsigned int v177; // eax
  __int64 v178; // rdx
  unsigned int v179; // ecx
  void *v180; // r14
  void *v181; // r14
  int *v182; // rsi
  int v183; // edx
  int v184; // ecx
  int v185; // r8d
  int v186; // r9d
  __int64 v187; // rax
  unsigned int v188; // edx
  __int64 v189; // rax
  void *v190; // r13
  void *v191; // r13
  unsigned int v192; // r13d
  unsigned int v193; // eax
  __int64 v194; // rcx
  unsigned int v195; // edx
  unsigned int v196; // eax
  __int64 v197; // rdx
  unsigned int v198; // ecx
  void *v199; // r15
  void *v200; // r15
  int *v201; // rsi
  int v202; // edx
  int v203; // ecx
  int v204; // r8d
  int v205; // r9d
  __int64 v206; // rax
  unsigned int v207; // edx
  __int64 v208; // rax
  void *v209; // r13
  void *v210; // r13
  void *v211; // r13
  void *v212; // r15
  void *v213; // r15
  void *v214; // r15
  unsigned int v215; // r13d
  unsigned int v216; // eax
  __int64 v217; // rcx
  unsigned int v218; // edx
  unsigned int v219; // eax
  __int64 v220; // rdx
  unsigned int v221; // ecx
  void *v222; // r15
  void *v223; // r15
  int *v224; // rsi
  int v225; // edx
  int v226; // ecx
  int v227; // r8d
  int v228; // r9d
  __int64 v229; // rax
  unsigned int v230; // edx
  __int64 v231; // rax
  void *v232; // r15
  void *v233; // r14
  void *v234; // r14
  void *v235; // r14
  unsigned int v236; // r14d
  unsigned int v237; // eax
  __int64 v238; // rdx
  unsigned int v239; // ecx
  unsigned int v240; // eax
  __int64 v241; // rdx
  unsigned int v242; // ecx
  void *v243; // r15
  void *v244; // r15
  int *v245; // rsi
  int v246; // edx
  int v247; // ecx
  int v248; // r8d
  int v249; // r9d
  __int64 v250; // rax
  unsigned int v251; // edx
  __int64 v252; // rax
  void *v253; // r14
  void *v254; // r14
  void *v255; // r14
  unsigned int v256; // r13d
  unsigned int v257; // eax
  __int64 v258; // rdx
  unsigned int v259; // ecx
  unsigned int v260; // eax
  __int64 v261; // rdx
  unsigned int v262; // ecx
  void *v263; // r14
  void *v264; // r14
  int *v265; // rsi
  int v266; // edx
  int v267; // ecx
  int v268; // r8d
  int v269; // r9d
  __int64 v270; // rax
  unsigned int v271; // edx
  __int64 v272; // rax
  unsigned int v273; // r13d
  unsigned int v274; // eax
  __int64 v275; // rdx
  unsigned int v276; // ecx
  unsigned int v277; // eax
  __int64 v278; // rdx
  unsigned int v279; // ecx
  void *v280; // r15
  void *v281; // r15
  int *v282; // rsi
  int v283; // edx
  int v284; // ecx
  int v285; // r8d
  int v286; // r9d
  __int64 v287; // rax
  unsigned int v288; // edx
  __int64 v289; // rax
  void *v290; // r13
  void *v291; // r13
  void *v292; // r13
  void *v293; // r13
  void *v294; // r13
  int *v295; // [rsp+0h] [rbp-348h]
  __m128i *v296; // [rsp+8h] [rbp-340h]
  int *v297; // [rsp+10h] [rbp-338h]
  __int64 *v298; // [rsp+18h] [rbp-330h]
  __int64 v299; // [rsp+20h] [rbp-328h]
  int *v300; // [rsp+28h] [rbp-320h]
  void *v301; // [rsp+28h] [rbp-320h]
  void *v302; // [rsp+28h] [rbp-320h]
  int v303[2]; // [rsp+30h] [rbp-318h]
  int *v304; // [rsp+38h] [rbp-310h]
  void *v305; // [rsp+40h] [rbp-308h]
  int v306; // [rsp+48h] [rbp-300h]
  int *v307; // [rsp+50h] [rbp-2F8h]
  int *v308; // [rsp+58h] [rbp-2F0h]
  int v309; // [rsp+60h] [rbp-2E8h]
  bool v310; // [rsp+66h] [rbp-2E2h] BYREF
  char v311; // [rsp+67h] [rbp-2E1h] BYREF
  unsigned int v312; // [rsp+68h] [rbp-2E0h] BYREF
  int v313; // [rsp+6Ch] [rbp-2DCh] BYREF
  int v314[2]; // [rsp+70h] [rbp-2D8h] BYREF
  int v315[2]; // [rsp+78h] [rbp-2D0h]
  int v316[2]; // [rsp+80h] [rbp-2C8h] BYREF
  int v317[2]; // [rsp+88h] [rbp-2C0h]
  char v318[4]; // [rsp+90h] [rbp-2B8h] BYREF
  char v319; // [rsp+94h] [rbp-2B4h]
  __int64 v320; // [rsp+98h] [rbp-2B0h]
  int v321; // [rsp+A0h] [rbp-2A8h] BYREF
  char v322; // [rsp+A4h] [rbp-2A4h]
  __int64 v323; // [rsp+A8h] [rbp-2A0h]
  int v324; // [rsp+B0h] [rbp-298h] BYREF
  __int64 v325; // [rsp+B8h] [rbp-290h] BYREF
  __int64 v326; // [rsp+C0h] [rbp-288h]
  __int64 v327; // [rsp+C8h] [rbp-280h] BYREF
  __int64 v328; // [rsp+D0h] [rbp-278h]
  __m128i v329; // [rsp+E0h] [rbp-268h] BYREF
  __int64 v330; // [rsp+F0h] [rbp-258h] BYREF
  __int64 v331; // [rsp+F8h] [rbp-250h] BYREF
  _QWORD v332[2]; // [rsp+100h] [rbp-248h] BYREF
  __int32 v333; // [rsp+110h] [rbp-238h]
  _QWORD v334[2]; // [rsp+118h] [rbp-230h] BYREF
  _QWORD v335[2]; // [rsp+128h] [rbp-220h] BYREF
  __int16 v336; // [rsp+138h] [rbp-210h]
  __m128i v337; // [rsp+140h] [rbp-208h]
  __m128i v338; // [rsp+150h] [rbp-1F8h] BYREF
  __int64 v339; // [rsp+160h] [rbp-1E8h] BYREF
  __int64 v340; // [rsp+168h] [rbp-1E0h]
  _QWORD v341[2]; // [rsp+170h] [rbp-1D8h] BYREF
  __int32 v342; // [rsp+180h] [rbp-1C8h]
  _QWORD v343[2]; // [rsp+188h] [rbp-1C0h] BYREF
  _QWORD v344[2]; // [rsp+198h] [rbp-1B0h] BYREF
  __int16 v345; // [rsp+1A8h] [rbp-1A0h]
  __m128i v346; // [rsp+1B0h] [rbp-198h]
  __m128i v347; // [rsp+1C0h] [rbp-188h] BYREF
  int v348[2]; // [rsp+1D0h] [rbp-178h] BYREF
  __int64 v349; // [rsp+1D8h] [rbp-170h]
  int v350[6]; // [rsp+1E0h] [rbp-168h] BYREF
  _BYTE v351[16]; // [rsp+1F8h] [rbp-150h] BYREF
  int v352[10]; // [rsp+208h] [rbp-140h] BYREF
  int v353[2]; // [rsp+230h] [rbp-118h] BYREF
  __int64 v354; // [rsp+238h] [rbp-110h]
  __int64 v355; // [rsp+240h] [rbp-108h]
  char v356[16]; // [rsp+260h] [rbp-E8h] BYREF
  char v357[24]; // [rsp+270h] [rbp-D8h] BYREF
  char v358[16]; // [rsp+288h] [rbp-C0h] BYREF
  char v359[40]; // [rsp+298h] [rbp-B0h] BYREF
  void *v360; // [rsp+2C0h] [rbp-88h]
  __int64 v361; // [rsp+2D0h] [rbp-78h]
  __int64 v362; // [rsp+2D8h] [rbp-70h]
  char v363[40]; // [rsp+2E0h] [rbp-68h] BYREF
  void *ptr; // [rsp+308h] [rbp-40h]

  *(_QWORD *)v303 = a2;
  v306 = a1;
  v304 = v353;
  sub_511520((__int64)v353, *(_QWORD *)(a1 + 8), (_QWORD *)(a1 + 16), 0);
  v299 = sub_4D6490(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL));
  v2 = *(_QWORD *)(a2 + 8);
  v3 = 0;
  v297 = &v313;
  if ( v2 )
  {
    while ( 1 )
    {
      if ( v3 >= *(_DWORD *)(v2 - 4) )
        goto LABEL_25;
      v4 = sub_15D1F10(*(_QWORD *)(v2 + 8LL * v3));
      sub_15DB5C0(v299, v3, v4);
      v5 = sub_15E1B70(v299);
      v6 = v5;
      if ( v5 )
        ++*(_DWORD *)(v5 + 8);
      v7 = v354;
      v295 = v314;
      *(_QWORD *)v314 = 0;
      *(_QWORD *)v315 = 0;
      *(_QWORD *)v316 = 1;
      *(_QWORD *)v317 = 0;
      if ( sub_50D970(v354, v5, &v312, (__int64)v314, v297) )
        break;
      v310 = 0;
      if ( sub_50DB00(v7, v6, (int *)&v312, (__int64)v314, v297, &v310) )
      {
        v40 = v312;
        if ( v312 == -1 )
        {
          sub_B28C00(&v338, v7 + 40, v314, 0, 0, 0);
          v256 = v313;
          v257 = v313;
          do
          {
            v258 = v257;
            v259 = v257;
            v257 = *(_DWORD *)(*((_QWORD *)ptr + 2) + 4LL * v257);
          }
          while ( v259 != v257 );
          v296 = &v347;
          sub_50CC90(&v347, v354, (const __m128i *)(112 * v258 + *(_QWORD *)v360), &v338, &v329);
          v260 = v256;
          do
          {
            v261 = v260;
            v262 = v260;
            v260 = *(_DWORD *)(*((_QWORD *)ptr + 2) + 4LL * v260);
          }
          while ( v262 != v260 );
          sub_B291A0(*(_QWORD *)v360 + 112 * v261, &v347);
          v263 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v351);
          sub_182CBA0(v263, v352);
          v264 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v348);
          v265 = v350;
          sub_182CBA0(v264, v350);
          if ( v329.m128i_i8[0] )
            goto LABEL_248;
          do
          {
            v270 = v256;
            v271 = v256;
            v256 = *(_DWORD *)(*((_QWORD *)ptr + 2) + 4LL * v256);
          }
          while ( v271 != v256 );
          v272 = *(_QWORD *)v360 + 112 * v270;
          LODWORD(v265) = v272 + 8;
          if ( (unsigned __int8)sub_B286B0(v272 + 48, v272 + 8) )
LABEL_248:
            sub_5165E0(
              (int)v304,
              (int)v265,
              v266,
              v267,
              v268,
              v269,
              (int)v314,
              (int)&v347,
              (int)v297,
              v298,
              v299,
              (int)v300,
              v303[0],
              (int)v304,
              (int)v305,
              v306,
              (int)v307,
              (int)v308,
              v309,
              v312,
              v314[0],
              v315[0],
              v316[0],
              v317[0],
              v318[0]);
          goto LABEL_162;
        }
        v41 = qword_1C7F2C0;
        if ( v313 != -1 )
        {
          do
          {
            v42 = v40;
            v43 = v40;
            v40 = *(_DWORD *)(*((_QWORD *)ptr + 2) + 4LL * v40);
          }
          while ( v43 != v40 );
          v44 = *(_QWORD *)v360 + 112 * v42;
          v45 = *(_DWORD *)(v44 + 48);
          v325 = 0;
          v326 = 0;
          v324 = v45;
          v327 = 1;
          v328 = 0;
          if ( (*(_BYTE *)(v44 + 60) & 1) != 0 )
          {
            sub_182C690(qword_1C7F2C0, &v325, v44 + 56);
            if ( (*(_BYTE *)(v44 + 76) & 1) != 0 )
              goto LABEL_199;
LABEL_54:
            v46 = *(_DWORD *)(v44 + 72);
            BYTE4(v327) &= ~1u;
            LODWORD(v327) = v46;
          }
          else
          {
            LODWORD(v325) = *(_DWORD *)(v44 + 56);
            if ( (*(_BYTE *)(v44 + 76) & 1) == 0 )
              goto LABEL_54;
LABEL_199:
            sub_182C690(v41, &v327, v44 + 72);
          }
          v47 = v313;
          do
          {
            v48 = v47;
            v49 = v47;
            v47 = *(_DWORD *)(*((_QWORD *)ptr + 2) + 4LL * v47);
          }
          while ( v49 != v47 );
          v50 = *(_QWORD *)v360 + 112 * v48;
          v51 = (__m128i *)qword_1C7F2C0;
          v52 = *(_DWORD *)(v50 + 8);
          v329.m128i_i64[1] = 0;
          v330 = 0;
          v329.m128i_i32[0] = v52;
          v331 = 1;
          v332[0] = 0;
          if ( (*(_BYTE *)(v50 + 20) & 1) != 0 )
          {
            v296 = (__m128i *)qword_1C7F2C0;
            sub_182C690(qword_1C7F2C0, &v329.m128i_u64[1], v50 + 16);
            v51 = v296;
          }
          else
          {
            v329.m128i_i32[2] = *(_DWORD *)(v50 + 16);
          }
          if ( (*(_BYTE *)(v50 + 36) & 1) != 0 )
          {
            sub_182C690(v51, &v331, v50 + 32);
          }
          else
          {
            v53 = *(_DWORD *)(v50 + 32);
            BYTE4(v331) &= ~1u;
            LODWORD(v331) = v53;
          }
          v298 = &v325;
          if ( v324 == 1 )
          {
            v347 = 0u;
            v232 = qword_1C7F2C0;
            *(_QWORD *)v348 = 1;
            v349 = 0;
            if ( (v314[1] & 1) != 0 )
              sub_182C690(qword_1C7F2C0, &v347, v314);
            else
              v347.m128i_i32[0] = v314[0];
            if ( (v316[1] & 1) != 0 )
            {
              sub_182C690(v232, v348, v316);
            }
            else
            {
              LOBYTE(v348[1]) &= ~1u;
              v348[0] = v316[0];
            }
            v233 = qword_1C7F2C0;
            if ( (_DWORD)v325 )
            {
              if ( v347.m128i_i32[0] )
              {
                if ( (v348[1] & 1) != 0 || v348[0] != 1 || (v327 & 0x100000000LL) != 0 || (_DWORD)v327 != 1 )
                {
                  v296 = &v347;
                  v298 = &v325;
                  sub_1851D20(qword_1C7F2C0, &v347, &v325, &v347);
                }
                else
                {
                  v296 = &v347;
                  v298 = &v325;
                  sub_1831A80(qword_1C7F2C0, &v347, &v325, &v347);
                  sub_182CBA0(v233, v348);
                  LOBYTE(v348[1]) &= ~1u;
                  v348[0] = 1;
                }
              }
              else
              {
                if ( (v325 & 0x100000000LL) != 0 )
                {
                  v298 = &v325;
                  v296 = &v347;
                  sub_182C690(qword_1C7F2C0, &v347, &v325);
                }
                else
                {
                  v347.m128i_i32[0] = v325;
                  v296 = &v347;
                  v347.m128i_i8[4] &= ~1u;
                  v298 = &v325;
                }
                if ( (v327 & 0x100000000LL) != 0 )
                {
                  sub_182C690(v233, v348, &v327);
                }
                else
                {
                  LOBYTE(v348[1]) &= ~1u;
                  v348[0] = v327;
                }
              }
            }
            else
            {
              if ( (v347.m128i_i8[4] & 1) != 0 )
              {
                v296 = &v347;
                sub_182C690(qword_1C7F2C0, &v347, &v347);
              }
              else
              {
                v347.m128i_i8[4] &= ~1u;
                v296 = &v347;
              }
              if ( (v348[1] & 1) != 0 )
                sub_182C690(v233, v348, v348);
              else
                LOBYTE(v348[1]) &= ~1u;
              v298 = &v325;
            }
            v319 &= 0xFCu;
            v234 = qword_1C7F2C0;
            v322 &= 0xFCu;
            *(_DWORD *)v318 = 0;
            v320 = 0;
            v321 = 1;
            v323 = 0;
            if ( (v347.m128i_i8[4] & 1) != 0 )
              sub_182C690(qword_1C7F2C0, v318, &v347);
            else
              *(_DWORD *)v318 = v347.m128i_i32[0];
            if ( (v348[1] & 1) != 0 )
            {
              v300 = v348;
              sub_182C690(v234, &v321, v348);
            }
            else
            {
              v322 &= ~1u;
              v321 = v348[0];
              v300 = v348;
            }
            v235 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, &v347);
            sub_182CBA0(v235, v348);
            v305 = v318;
            sub_B28C00(&v338, v7 + 40, v318, 0, 0, 0);
            v236 = v313;
            v237 = v313;
            do
            {
              v238 = v237;
              v239 = v237;
              v237 = *(_DWORD *)(*((_QWORD *)ptr + 2) + 4LL * v237);
            }
            while ( v239 != v237 );
            sub_50CC90(&v347, v354, (const __m128i *)(112 * v238 + *(_QWORD *)v360), &v338, &v311);
            v240 = v236;
            do
            {
              v241 = v240;
              v242 = v240;
              v240 = *(_DWORD *)(*((_QWORD *)ptr + 2) + 4LL * v240);
            }
            while ( v242 != v240 );
            sub_B291A0(*(_QWORD *)v360 + 112 * v241, &v347);
            v243 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v351);
            sub_182CBA0(v243, v352);
            v244 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v348);
            v245 = v350;
            sub_182CBA0(v244, v350);
            if ( v311 )
              goto LABEL_227;
            do
            {
              v250 = v236;
              v251 = v236;
              v236 = *(_DWORD *)(*((_QWORD *)ptr + 2) + 4LL * v236);
            }
            while ( v251 != v236 );
            v252 = *(_QWORD *)v360 + 112 * v250;
            LODWORD(v245) = v252 + 8;
            if ( (unsigned __int8)sub_B286B0(v252 + 48, v252 + 8) )
LABEL_227:
              sub_5165E0(
                (int)v304,
                (int)v245,
                v246,
                v247,
                v248,
                v249,
                (int)v314,
                (int)&v347,
                (int)v297,
                &v325,
                v299,
                (int)v348,
                v303[0],
                (int)v304,
                (int)v318,
                v306,
                (int)v307,
                (int)v308,
                v309,
                v312,
                v314[0],
                v315[0],
                v316[0],
                v317[0],
                v318[0]);
            v253 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v343);
            sub_182CBA0(v253, v344);
            v254 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, &v339);
            sub_182CBA0(v254, v341);
            v255 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v305);
            sub_182CBA0(v255, &v321);
          }
          if ( v329.m128i_i32[0] != 1 )
          {
LABEL_20:
            v22 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, &v329.m128i_u64[1]);
            sub_182CBA0(v22, &v331);
            v23 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v298);
            sub_182CBA0(v23, &v327);
            goto LABEL_21;
          }
          v347 = 0u;
          v212 = qword_1C7F2C0;
          *(_QWORD *)v348 = 1;
          v349 = 0;
          if ( (v329.m128i_i8[12] & 1) != 0 )
            sub_182C690(qword_1C7F2C0, &v347, &v329.m128i_u64[1]);
          else
            v347.m128i_i32[0] = v329.m128i_i32[2];
          if ( (v331 & 0x100000000LL) != 0 )
          {
            sub_182C690(v212, v348, &v331);
          }
          else
          {
            LOBYTE(v348[1]) &= ~1u;
            v348[0] = v331;
          }
          if ( (v348[1] & 1) != 0 || v348[0] != 1 || (v316[1] & 1) != 0 || v316[0] != 1 )
          {
            v296 = &v347;
            sub_1852000(qword_1C7F2C0, &v347, v295);
          }
          else
          {
            v302 = qword_1C7F2C0;
            v296 = &v347;
            sub_1832A70(qword_1C7F2C0, &v347, v295);
            sub_182CBA0(v302, v348);
            LOBYTE(v348[1]) &= ~1u;
            v348[0] = 1;
          }
          v319 &= 0xFCu;
          v213 = qword_1C7F2C0;
          v322 &= 0xFCu;
          *(_DWORD *)v318 = 0;
          v320 = 0;
          v321 = 1;
          v323 = 0;
          if ( (v347.m128i_i8[4] & 1) != 0 )
            sub_182C690(qword_1C7F2C0, v318, &v347);
          else
            *(_DWORD *)v318 = v347.m128i_i32[0];
          if ( (v348[1] & 1) != 0 )
          {
            v300 = v348;
            sub_182C690(v213, &v321, v348);
          }
          else
          {
            v322 &= ~1u;
            v321 = v348[0];
            v300 = v348;
          }
          v214 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v347);
          sub_182CBA0(v214, v348);
          v305 = v318;
          sub_B28C00(&v338, v7 + 40, v318, 0, 1, 0);
          v215 = v312;
          v216 = v312;
          do
          {
            v217 = v216;
            v218 = v216;
            v216 = *(_DWORD *)(*((_QWORD *)ptr + 2) + 4LL * v216);
          }
          while ( v218 != v216 );
          sub_50CC90(&v347, v354, (const __m128i *)(*(_QWORD *)v360 + 112 * v217), &v338, &v311);
          v219 = v215;
          do
          {
            v220 = v219;
            v221 = v219;
            v219 = *(_DWORD *)(*((_QWORD *)ptr + 2) + 4LL * v219);
          }
          while ( v221 != v219 );
          sub_B291A0(*(_QWORD *)v360 + 112 * v220, &v347);
          v222 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v351);
          sub_182CBA0(v222, v352);
          v223 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v348);
          v224 = v350;
          sub_182CBA0(v223, v350);
          if ( v311 )
            goto LABEL_196;
          do
          {
            v229 = v215;
            v230 = v215;
            v215 = *(_DWORD *)(*((_QWORD *)ptr + 2) + 4LL * v215);
          }
          while ( v230 != v215 );
          v231 = *(_QWORD *)v360 + 112 * v229;
          LODWORD(v224) = v231 + 8;
          if ( (unsigned __int8)sub_B286B0(v231 + 48, v231 + 8) )
LABEL_196:
            sub_5165E0(
              (int)v304,
              (int)v224,
              v225,
              v226,
              v227,
              v228,
              (int)v295,
              (int)&v347,
              (int)v297,
              v298,
              v299,
              (int)v348,
              v303[0],
              (int)v304,
              (int)v318,
              v306,
              (int)v307,
              (int)v308,
              v309,
              v312,
              v314[0],
              v315[0],
              v316[0],
              v317[0],
              v318[0]);
LABEL_82:
          v74 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v343);
          sub_182CBA0(v74, v344);
          v75 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v339);
          sub_182CBA0(v75, v341);
          v76 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v305);
          sub_182CBA0(v76, &v321);
          goto LABEL_20;
        }
        v329.m128i_i8[4] &= 0xFCu;
        BYTE4(v330) &= 0xFCu;
        v329.m128i_i32[0] = 0;
        v329.m128i_i64[1] = 0;
        LODWORD(v330) = 1;
        v331 = 0;
        if ( (v314[1] & 1) != 0 )
          sub_182C690(qword_1C7F2C0, &v329, v314);
        else
          v329.m128i_i32[0] = v314[0];
        if ( (v316[1] & 1) != 0 )
        {
          sub_182C690(v41, &v330, v316);
        }
        else
        {
          BYTE4(v330) &= ~1u;
          LODWORD(v330) = v316[0];
        }
        sub_1831620(qword_1C7F2C0, &v329);
        sub_B28C00(&v338, v7 + 40, &v329, 0, 1, 0);
        v273 = v312;
        v274 = v312;
        do
        {
          v275 = v274;
          v276 = v274;
          v274 = *(_DWORD *)(*((_QWORD *)ptr + 2) + 4LL * v274);
        }
        while ( v276 != v274 );
        v296 = &v347;
        sub_50CC90(&v347, v354, (const __m128i *)(112 * v275 + *(_QWORD *)v360), &v338, &v324);
        v277 = v273;
        do
        {
          v278 = v277;
          v279 = v277;
          v277 = *(_DWORD *)(*((_QWORD *)ptr + 2) + 4LL * v277);
        }
        while ( v279 != v277 );
        sub_B291A0(*(_QWORD *)v360 + 112 * v278, &v347);
        v280 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v351);
        sub_182CBA0(v280, v352);
        v281 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v348);
        v282 = v350;
        sub_182CBA0(v281, v350);
        if ( (_BYTE)v324 )
          goto LABEL_262;
        do
        {
          v287 = v273;
          v288 = v273;
          v273 = *(_DWORD *)(*((_QWORD *)ptr + 2) + 4LL * v273);
        }
        while ( v288 != v273 );
        v289 = *(_QWORD *)v360 + 112 * v287;
        LODWORD(v282) = v289 + 8;
        if ( (unsigned __int8)sub_B286B0(v289 + 48, v289 + 8) )
LABEL_262:
          sub_5165E0(
            (int)v304,
            (int)v282,
            v283,
            v284,
            v285,
            v286,
            (int)v314,
            (int)&v347,
            (int)v297,
            v298,
            v299,
            (int)v300,
            v303[0],
            (int)v304,
            (int)v305,
            v306,
            (int)v307,
            (int)v308,
            v309,
            v312,
            v314[0],
            v315[0],
            v316[0],
            v317[0],
            v318[0]);
        goto LABEL_175;
      }
      LODWORD(v77) = v6;
      if ( !sub_50E090(v7, v6, &v312, (__int64)v314, v297) )
        goto LABEL_129;
      v78 = v312;
      if ( v312 == -1 )
      {
        sub_B28AA0(&v347, v7 + 40, v314, 0, 0);
        sub_50E7C0((__int64)v304, v313, &v347);
        v293 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v351);
        sub_182CBA0(v293, v352);
        v294 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v348);
        sub_182CBA0(v294, v350);
      }
      else
      {
        v79 = qword_1C7F2C0;
        if ( v313 != -1 )
        {
          do
          {
            v80 = v78;
            v81 = v78;
            v78 = *(_DWORD *)(*((_QWORD *)ptr + 2) + 4LL * v78);
          }
          while ( v81 != v78 );
          v82 = (const __m128i *)(*(_QWORD *)v360 + 112 * v80);
          v329.m128i_i64[0] = v82->m128i_i64[0];
          v83 = v82->m128i_i32[2];
          v330 = 0;
          v329.m128i_i32[2] = v83;
          v331 = 0;
          v332[0] = 1;
          v332[1] = 0;
          if ( (v82[1].m128i_i8[4] & 1) != 0 )
            sub_182C690(qword_1C7F2C0, &v330, &v82[1]);
          else
            LODWORD(v330) = v82[1].m128i_i32[0];
          if ( (v82[2].m128i_i8[4] & 1) != 0 )
          {
            sub_182C690(v79, v332, &v82[2]);
          }
          else
          {
            v84 = v82[2].m128i_i32[0];
            BYTE4(v332[0]) &= ~1u;
            LODWORD(v332[0]) = v84;
          }
          v85 = v82[3].m128i_i32[0];
          v86 = qword_1C7F2C0;
          v334[0] = 0;
          v334[1] = 0;
          v333 = v85;
          v335[0] = 1;
          v335[1] = 0;
          if ( (v82[3].m128i_i8[12] & 1) != 0 )
            sub_182C690(qword_1C7F2C0, v334, &v82[3].m128i_u64[1]);
          else
            LODWORD(v334[0]) = v82[3].m128i_i32[2];
          if ( (v82[4].m128i_i8[12] & 1) != 0 )
          {
            sub_182C690(v86, v335, &v82[4].m128i_u64[1]);
          }
          else
          {
            v87 = v82[4].m128i_i32[2];
            BYTE4(v335[0]) &= ~1u;
            LODWORD(v335[0]) = v87;
          }
          v88 = _mm_loadu_si128(v82 + 6);
          v336 = v82[5].m128i_i16[4];
          v89 = *((_QWORD *)ptr + 2);
          v90 = v313;
          v337 = v88;
          do
          {
            v91 = v90;
            v92 = v90;
            v90 = *(_DWORD *)(v89 + 4LL * v90);
          }
          while ( v92 != v90 );
          v93 = qword_1C7F2C0;
          v94 = (const __m128i *)(*(_QWORD *)v360 + 112 * v91);
          v338.m128i_i64[0] = v94->m128i_i64[0];
          v95 = v94->m128i_i32[2];
          v339 = 0;
          v338.m128i_i32[2] = v95;
          v340 = 0;
          v341[0] = 1;
          v341[1] = 0;
          if ( (v94[1].m128i_i8[4] & 1) != 0 )
            sub_182C690(qword_1C7F2C0, &v339, &v94[1]);
          else
            LODWORD(v339) = v94[1].m128i_i32[0];
          if ( (v94[2].m128i_i8[4] & 1) != 0 )
          {
            sub_182C690(v93, v341, &v94[2]);
          }
          else
          {
            v96 = v94[2].m128i_i32[0];
            BYTE4(v341[0]) &= ~1u;
            LODWORD(v341[0]) = v96;
          }
          v97 = v94[3].m128i_i32[0];
          v98 = qword_1C7F2C0;
          v343[0] = 0;
          v343[1] = 0;
          v342 = v97;
          v344[0] = 1;
          v344[1] = 0;
          if ( (v94[3].m128i_i8[12] & 1) != 0 )
            sub_182C690(qword_1C7F2C0, v343, &v94[3].m128i_u64[1]);
          else
            LODWORD(v343[0]) = v94[3].m128i_i32[2];
          if ( (v94[4].m128i_i8[12] & 1) != 0 )
          {
            sub_182C690(v98, v344, &v94[4].m128i_u64[1]);
          }
          else
          {
            v99 = v94[4].m128i_i32[2];
            BYTE4(v344[0]) &= ~1u;
            LODWORD(v344[0]) = v99;
          }
          v100 = _mm_loadu_si128(v94 + 6);
          v101 = v7 + 40;
          v345 = v94[5].m128i_i16[4];
          v296 = &v347;
          v346 = v100;
          sub_B28AA0(&v347, v101, v314, 0, 0);
          sub_B29360(&v329, &v347);
          v102 = qword_1C7F2C0;
          v298 = (__int64 *)v351;
          sub_182CBA0(qword_1C7F2C0, v351);
          v305 = v352;
          sub_182CBA0(v102, v352);
          v103 = qword_1C7F2C0;
          v300 = v348;
          sub_182CBA0(qword_1C7F2C0, v348);
          v307 = v350;
          sub_182CBA0(v103, v350);
          sub_B28AA0(&v347, v101, v314, 0, 0);
          sub_B29A40(&v338, &v347);
          v104 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v351);
          sub_182CBA0(v104, v352);
          v105 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v348);
          sub_182CBA0(v105, v350);
          v106 = v312;
          v107 = v312;
          do
          {
            v108 = v107;
            v109 = v107;
            v107 = *(_DWORD *)(*((_QWORD *)ptr + 2) + 4LL * v107);
          }
          while ( v109 != v107 );
          v308 = &v324;
          sub_50CC90(&v347, v354, (const __m128i *)(*(_QWORD *)v360 + 112 * v108), &v338, &v324);
          v110 = v106;
          do
          {
            v111 = v110;
            v112 = v110;
            v110 = *(_DWORD *)(*((_QWORD *)ptr + 2) + 4LL * v110);
          }
          while ( v112 != v110 );
          sub_B291A0(*(_QWORD *)v360 + 112 * v111, &v347);
          v113 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v351);
          sub_182CBA0(v113, v352);
          v114 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v348);
          v115 = v350;
          sub_182CBA0(v114, v350);
          if ( (_BYTE)v324 )
            goto LABEL_119;
          do
          {
            v120 = v106;
            v121 = v106;
            v106 = *(_DWORD *)(*((_QWORD *)ptr + 2) + 4LL * v106);
          }
          while ( v121 != v106 );
          v122 = *(_QWORD *)v360 + 112 * v120;
          LODWORD(v115) = v122 + 8;
          if ( (unsigned __int8)sub_B286B0(v122 + 48, v122 + 8) )
LABEL_119:
            sub_5165E0(
              (int)v304,
              (int)v115,
              v116,
              v117,
              v118,
              v119,
              (int)v314,
              (int)&v347,
              (int)v297,
              v351,
              v299,
              (int)v348,
              v303[0],
              (int)v304,
              (int)v352,
              v306,
              (int)v350,
              (int)&v324,
              v309,
              v312,
              v314[0],
              v315[0],
              v316[0],
              v317[0],
              v318[0]);
          v123 = v313;
          v124 = v313;
          do
          {
            v125 = v124;
            v126 = v124;
            v124 = *(_DWORD *)(*((_QWORD *)ptr + 2) + 4LL * v124);
          }
          while ( v126 != v124 );
          sub_50CC90(v296, v354, (const __m128i *)(*(_QWORD *)v360 + 112 * v125), &v329, v308);
          v127 = v123;
          do
          {
            v128 = v127;
            v129 = v127;
            v127 = *(_DWORD *)(*((_QWORD *)ptr + 2) + 4LL * v127);
          }
          while ( v129 != v127 );
          sub_B291A0(*(_QWORD *)v360 + 112 * v128, v296);
          v130 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v298);
          sub_182CBA0(v130, v305);
          v131 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v300);
          v132 = (int)v307;
          sub_182CBA0(v131, v307);
          if ( (_BYTE)v324 )
            goto LABEL_127;
          do
          {
            v137 = v123;
            v138 = v123;
            v123 = *(_DWORD *)(*((_QWORD *)ptr + 2) + 4LL * v123);
          }
          while ( v138 != v123 );
          v139 = *(_QWORD *)v360 + 112 * v137;
          v132 = v139 + 8;
          if ( (unsigned __int8)sub_B286B0(v139 + 48, v139 + 8) )
LABEL_127:
            sub_5165E0(
              (int)v304,
              v132,
              v133,
              v134,
              v135,
              v136,
              (int)v295,
              (int)v296,
              (int)v297,
              v298,
              v299,
              (int)v300,
              v303[0],
              (int)v304,
              (int)v305,
              v306,
              (int)v307,
              (int)v308,
              v309,
              v312,
              v314[0],
              v315[0],
              v316[0],
              v317[0],
              v318[0]);
          v140 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v343);
          sub_182CBA0(v140, v344);
          v141 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v339);
          sub_182CBA0(v141, v341);
          v142 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v334);
          sub_182CBA0(v142, v335);
          v143 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v330);
          v77 = v332;
          sub_182CBA0(v143, v332);
LABEL_129:
          if ( v6 == *(_QWORD *)(sub_4D6490(*(_QWORD *)(v354 + 24)) + 864) )
            sub_5165E0(
              (int)v304,
              (int)v77,
              v144,
              v145,
              v146,
              v147,
              (int)v295,
              (int)v296,
              (int)v297,
              v298,
              v299,
              (int)v300,
              v303[0],
              (int)v304,
              (int)v305,
              v306,
              (int)v307,
              (int)v308,
              v309,
              v312,
              v314[0],
              v315[0],
              v316[0],
              v317[0],
              v318[0]);
          goto LABEL_21;
        }
        v338.m128i_i8[4] &= 0xFCu;
        BYTE4(v339) &= 0xFCu;
        v338.m128i_i32[0] = 0;
        v338.m128i_i64[1] = 0;
        LODWORD(v339) = 1;
        v340 = 0;
        if ( (v314[1] & 1) != 0 )
          sub_182C690(qword_1C7F2C0, &v338, v314);
        else
          v338.m128i_i32[0] = v314[0];
        if ( (v316[1] & 1) != 0 )
        {
          sub_182C690(v79, &v339, v316);
        }
        else
        {
          BYTE4(v339) &= ~1u;
          LODWORD(v339) = v316[0];
        }
        sub_1831620(qword_1C7F2C0, &v338);
        sub_B28AA0(&v347, v7 + 40, &v338, 0, 0);
        sub_50E7C0((__int64)v304, v312, &v347);
        v290 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v351);
        sub_182CBA0(v290, v352);
        v291 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v348);
        sub_182CBA0(v291, v350);
        v292 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v338);
        sub_182CBA0(v292, &v339);
      }
LABEL_21:
      v24 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v295);
      sub_182CBA0(v24, v316);
      if ( v6 )
      {
        if ( (*(_DWORD *)(v6 + 8))-- == 1 )
          sub_15D7BC0(v299, v6);
      }
      ++v3;
      v2 = *(_QWORD *)(*(_QWORD *)v303 + 8LL);
      if ( !v2 )
        goto LABEL_25;
    }
    v8 = v312;
    if ( v312 == -1 )
    {
      sub_B28C00(&v338, v7 + 40, v314, 1, 0, 0);
      v173 = v313;
      v174 = v313;
      do
      {
        v175 = v174;
        v176 = v174;
        v174 = *(_DWORD *)(*((_QWORD *)ptr + 2) + 4LL * v174);
      }
      while ( v176 != v174 );
      v296 = &v347;
      sub_50CC90(&v347, v354, (const __m128i *)(*(_QWORD *)v360 + 112 * v175), &v338, &v329);
      v177 = v173;
      do
      {
        v178 = v177;
        v179 = v177;
        v177 = *(_DWORD *)(*((_QWORD *)ptr + 2) + 4LL * v177);
      }
      while ( v179 != v177 );
      sub_B291A0(*(_QWORD *)v360 + 112 * v178, &v347);
      v180 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v351);
      sub_182CBA0(v180, v352);
      v181 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v348);
      v182 = v350;
      sub_182CBA0(v181, v350);
      if ( v329.m128i_i8[0] )
        goto LABEL_161;
      do
      {
        v187 = v173;
        v188 = v173;
        v173 = *(_DWORD *)(*((_QWORD *)ptr + 2) + 4LL * v173);
      }
      while ( v188 != v173 );
      v189 = *(_QWORD *)v360 + 112 * v187;
      LODWORD(v182) = v189 + 8;
      if ( (unsigned __int8)sub_B286B0(v189 + 48, v189 + 8) )
LABEL_161:
        sub_5165E0(
          (int)v304,
          (int)v182,
          v183,
          v184,
          v185,
          v186,
          (int)v314,
          (int)&v347,
          (int)v297,
          v298,
          v299,
          (int)v300,
          v303[0],
          (int)v304,
          (int)v305,
          v306,
          (int)v307,
          (int)v308,
          v309,
          v312,
          v314[0],
          v315[0],
          v316[0],
          v317[0],
          v318[0]);
LABEL_162:
      v190 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v343);
      sub_182CBA0(v190, v344);
      v191 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v339);
      sub_182CBA0(v191, v341);
      goto LABEL_21;
    }
    v9 = qword_1C7F2C0;
    if ( v313 != -1 )
    {
      do
      {
        v10 = v8;
        v11 = v8;
        v8 = *(_DWORD *)(*((_QWORD *)ptr + 2) + 4LL * v8);
      }
      while ( v11 != v8 );
      v12 = *(_QWORD *)v360 + 112 * v10;
      v13 = *(_DWORD *)(v12 + 48);
      v325 = 0;
      v326 = 0;
      v324 = v13;
      v327 = 1;
      v328 = 0;
      if ( (*(_BYTE *)(v12 + 60) & 1) != 0 )
        sub_182C690(qword_1C7F2C0, &v325, v12 + 56);
      else
        LODWORD(v325) = *(_DWORD *)(v12 + 56);
      if ( (*(_BYTE *)(v12 + 76) & 1) != 0 )
      {
        sub_182C690(v9, &v327, v12 + 72);
      }
      else
      {
        v14 = *(_DWORD *)(v12 + 72);
        BYTE4(v327) &= ~1u;
        LODWORD(v327) = v14;
      }
      v15 = v313;
      do
      {
        v16 = v15;
        v17 = v15;
        v15 = *(_DWORD *)(*((_QWORD *)ptr + 2) + 4LL * v15);
      }
      while ( v17 != v15 );
      v18 = *(_QWORD *)v360 + 112 * v16;
      v19 = (__m128i *)qword_1C7F2C0;
      v20 = *(_DWORD *)(v18 + 8);
      v329.m128i_i64[1] = 0;
      v330 = 0;
      v329.m128i_i32[0] = v20;
      v331 = 1;
      v332[0] = 0;
      if ( (*(_BYTE *)(v18 + 20) & 1) != 0 )
      {
        v296 = (__m128i *)qword_1C7F2C0;
        sub_182C690(qword_1C7F2C0, &v329.m128i_u64[1], v18 + 16);
        v19 = v296;
        if ( (*(_BYTE *)(v18 + 36) & 1) != 0 )
          goto LABEL_84;
LABEL_17:
        v21 = *(_DWORD *)(v18 + 32);
        BYTE4(v331) &= ~1u;
        LODWORD(v331) = v21;
      }
      else
      {
        v329.m128i_i32[2] = *(_DWORD *)(v18 + 16);
        if ( (*(_BYTE *)(v18 + 36) & 1) == 0 )
          goto LABEL_17;
LABEL_84:
        sub_182C690(v19, &v331, v18 + 32);
      }
      v298 = &v325;
      if ( v324 != 1 )
      {
LABEL_19:
        if ( v329.m128i_i32[0] != 1 )
          goto LABEL_20;
        v347 = 0u;
        v54 = qword_1C7F2C0;
        *(_QWORD *)v348 = 1;
        v349 = 0;
        if ( (v329.m128i_i8[12] & 1) != 0 )
        {
          sub_182C690(qword_1C7F2C0, &v347, &v329.m128i_u64[1]);
          if ( (v331 & 0x100000000LL) != 0 )
            goto LABEL_89;
LABEL_66:
          LOBYTE(v348[1]) &= ~1u;
          v348[0] = v331;
        }
        else
        {
          v347.m128i_i32[0] = v329.m128i_i32[2];
          if ( (v331 & 0x100000000LL) == 0 )
            goto LABEL_66;
LABEL_89:
          sub_182C690(v54, v348, &v331);
        }
        if ( (v348[1] & 1) != 0 || v348[0] != 1 || (v316[1] & 1) != 0 || v316[0] != 1 )
        {
          v296 = &v347;
          sub_1852000(qword_1C7F2C0, &v347, v295);
        }
        else
        {
          v301 = qword_1C7F2C0;
          v296 = &v347;
          sub_1832A70(qword_1C7F2C0, &v347, v295);
          sub_182CBA0(v301, v348);
          LOBYTE(v348[1]) &= ~1u;
          v348[0] = 1;
        }
        v319 &= 0xFCu;
        v55 = qword_1C7F2C0;
        v322 &= 0xFCu;
        *(_DWORD *)v318 = 0;
        v320 = 0;
        v321 = 1;
        v323 = 0;
        if ( (v347.m128i_i8[4] & 1) != 0 )
          sub_182C690(qword_1C7F2C0, v318, &v347);
        else
          *(_DWORD *)v318 = v347.m128i_i32[0];
        if ( (v348[1] & 1) != 0 )
        {
          v300 = v348;
          sub_182C690(v55, &v321, v348);
        }
        else
        {
          v322 &= ~1u;
          v321 = v348[0];
          v300 = v348;
        }
        v56 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v347);
        sub_182CBA0(v56, v348);
        v305 = v318;
        sub_B28C00(&v338, v7 + 40, v318, 1, 1, 0);
        v57 = v312;
        v58 = v312;
        do
        {
          v59 = v58;
          v60 = v58;
          v58 = *(_DWORD *)(*((_QWORD *)ptr + 2) + 4LL * v58);
        }
        while ( v60 != v58 );
        sub_50CC90(&v347, v354, (const __m128i *)(*(_QWORD *)v360 + 112 * v59), &v338, &v311);
        v61 = v57;
        do
        {
          v62 = v61;
          v63 = v61;
          v61 = *(_DWORD *)(*((_QWORD *)ptr + 2) + 4LL * v61);
        }
        while ( v63 != v61 );
        sub_B291A0(*(_QWORD *)v360 + 112 * v62, &v347);
        v64 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v351);
        sub_182CBA0(v64, v352);
        v65 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v348);
        v66 = v350;
        sub_182CBA0(v65, v350);
        if ( v311 )
          goto LABEL_81;
        do
        {
          v71 = v57;
          v72 = v57;
          v57 = *(_DWORD *)(*((_QWORD *)ptr + 2) + 4LL * v57);
        }
        while ( v72 != v57 );
        v73 = *(_QWORD *)v360 + 112 * v71;
        LODWORD(v66) = v73 + 8;
        if ( (unsigned __int8)sub_B286B0(v73 + 48, v73 + 8) )
LABEL_81:
          sub_5165E0(
            (int)v304,
            (int)v66,
            v67,
            v68,
            v69,
            v70,
            (int)v295,
            (int)&v347,
            (int)v297,
            v298,
            v299,
            (int)v348,
            v303[0],
            (int)v304,
            (int)v318,
            v306,
            (int)v307,
            (int)v308,
            v309,
            v312,
            v314[0],
            v315[0],
            v316[0],
            v317[0],
            v318[0]);
        goto LABEL_82;
      }
      v347 = 0u;
      v148 = qword_1C7F2C0;
      *(_QWORD *)v348 = 1;
      v349 = 0;
      if ( (v314[1] & 1) != 0 )
        sub_182C690(qword_1C7F2C0, &v347, v314);
      else
        v347.m128i_i32[0] = v314[0];
      if ( (v316[1] & 1) != 0 )
      {
        sub_182C690(v148, v348, v316);
        v150 = v325;
        v149 = qword_1C7F2C0;
        if ( (_DWORD)v325 )
          goto LABEL_136;
      }
      else
      {
        LOBYTE(v348[1]) &= ~1u;
        v149 = qword_1C7F2C0;
        v348[0] = v316[0];
        v150 = v325;
        if ( (_DWORD)v325 )
        {
LABEL_136:
          if ( v347.m128i_i32[0] )
          {
            if ( (v348[1] & 1) != 0 || v348[0] != 1 || (v327 & 0x100000000LL) != 0 || (_DWORD)v327 != 1 )
            {
              v296 = &v347;
              v298 = &v325;
              sub_1851D20(v149, &v347, &v325, &v347);
            }
            else
            {
              v296 = &v347;
              v298 = &v325;
              sub_1831A80(v149, &v347, &v325, &v347);
              sub_182CBA0(v149, v348);
              LOBYTE(v348[1]) &= ~1u;
              v348[0] = 1;
            }
          }
          else
          {
            if ( (v325 & 0x100000000LL) != 0 )
            {
              v298 = &v325;
              v296 = &v347;
              sub_182C690(v149, &v347, &v325);
            }
            else
            {
              v347.m128i_i32[0] = v150;
              v296 = &v347;
              v347.m128i_i8[4] &= ~1u;
              v298 = &v325;
            }
            if ( (v327 & 0x100000000LL) != 0 )
            {
              sub_182C690(v149, v348, &v327);
            }
            else
            {
              LOBYTE(v348[1]) &= ~1u;
              v348[0] = v327;
            }
          }
LABEL_140:
          v319 &= 0xFCu;
          v151 = qword_1C7F2C0;
          v322 &= 0xFCu;
          *(_DWORD *)v318 = 0;
          v320 = 0;
          v321 = 1;
          v323 = 0;
          if ( (v347.m128i_i8[4] & 1) != 0 )
            sub_182C690(qword_1C7F2C0, v318, &v347);
          else
            *(_DWORD *)v318 = v347.m128i_i32[0];
          if ( (v348[1] & 1) != 0 )
          {
            v300 = v348;
            sub_182C690(v151, &v321, v348);
          }
          else
          {
            v322 &= ~1u;
            v321 = v348[0];
            v300 = v348;
          }
          v152 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v347);
          sub_182CBA0(v152, v348);
          v305 = v318;
          sub_B28C00(&v338, v7 + 40, v318, 1, 0, 0);
          v153 = v313;
          v154 = v313;
          do
          {
            v155 = v154;
            v156 = v154;
            v154 = *(_DWORD *)(*((_QWORD *)ptr + 2) + 4LL * v154);
          }
          while ( v156 != v154 );
          sub_50CC90(&v347, v354, (const __m128i *)(*(_QWORD *)v360 + 112 * v155), &v338, &v311);
          v157 = v153;
          do
          {
            v158 = v157;
            v159 = v157;
            v157 = *(_DWORD *)(*((_QWORD *)ptr + 2) + 4LL * v157);
          }
          while ( v159 != v157 );
          sub_B291A0(*(_QWORD *)v360 + 112 * v158, &v347);
          v160 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v351);
          sub_182CBA0(v160, v352);
          v161 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v348);
          v162 = v350;
          sub_182CBA0(v161, v350);
          if ( v311 )
            goto LABEL_151;
          do
          {
            v167 = v153;
            v168 = v153;
            v153 = *(_DWORD *)(*((_QWORD *)ptr + 2) + 4LL * v153);
          }
          while ( v168 != v153 );
          v169 = *(_QWORD *)v360 + 112 * v167;
          LODWORD(v162) = v169 + 8;
          if ( (unsigned __int8)sub_B286B0(v169 + 48, v169 + 8) )
LABEL_151:
            sub_5165E0(
              (int)v304,
              (int)v162,
              v163,
              v164,
              v165,
              v166,
              (int)v314,
              (int)&v347,
              (int)v297,
              &v325,
              v299,
              (int)v348,
              v303[0],
              (int)v304,
              (int)v318,
              v306,
              (int)v307,
              (int)v308,
              v309,
              v312,
              v314[0],
              v315[0],
              v316[0],
              v317[0],
              v318[0]);
          v170 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v343);
          sub_182CBA0(v170, v344);
          v171 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v339);
          sub_182CBA0(v171, v341);
          v172 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v305);
          sub_182CBA0(v172, &v321);
          goto LABEL_19;
        }
      }
      if ( (v347.m128i_i8[4] & 1) != 0 )
      {
        v296 = &v347;
        sub_182C690(v149, &v347, &v347);
      }
      else
      {
        v347.m128i_i8[4] &= ~1u;
        v296 = &v347;
      }
      if ( (v348[1] & 1) != 0 )
        sub_182C690(v149, v348, v348);
      else
        LOBYTE(v348[1]) &= ~1u;
      v298 = &v325;
      goto LABEL_140;
    }
    v329.m128i_i8[4] &= 0xFCu;
    BYTE4(v330) &= 0xFCu;
    v329.m128i_i32[0] = 0;
    v329.m128i_i64[1] = 0;
    LODWORD(v330) = 1;
    v331 = 0;
    if ( (v314[1] & 1) != 0 )
      sub_182C690(qword_1C7F2C0, &v329, v314);
    else
      v329.m128i_i32[0] = v314[0];
    if ( (v316[1] & 1) != 0 )
    {
      sub_182C690(v9, &v330, v316);
    }
    else
    {
      BYTE4(v330) &= ~1u;
      LODWORD(v330) = v316[0];
    }
    sub_1831620(qword_1C7F2C0, &v329);
    sub_B28C00(&v338, v7 + 40, &v329, 1, 1, 0);
    v192 = v312;
    v193 = v312;
    do
    {
      v194 = v193;
      v195 = v193;
      v193 = *(_DWORD *)(*((_QWORD *)ptr + 2) + 4LL * v193);
    }
    while ( v195 != v193 );
    v296 = &v347;
    sub_50CC90(&v347, v354, (const __m128i *)(*(_QWORD *)v360 + 112 * v194), &v338, &v324);
    v196 = v192;
    do
    {
      v197 = v196;
      v198 = v196;
      v196 = *(_DWORD *)(*((_QWORD *)ptr + 2) + 4LL * v196);
    }
    while ( v198 != v196 );
    sub_B291A0(*(_QWORD *)v360 + 112 * v197, &v347);
    v199 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v351);
    sub_182CBA0(v199, v352);
    v200 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v348);
    v201 = v350;
    sub_182CBA0(v200, v350);
    if ( (_BYTE)v324 )
      goto LABEL_174;
    do
    {
      v206 = v192;
      v207 = v192;
      v192 = *(_DWORD *)(*((_QWORD *)ptr + 2) + 4LL * v192);
    }
    while ( v207 != v192 );
    v208 = *(_QWORD *)v360 + 112 * v206;
    LODWORD(v201) = v208 + 8;
    if ( (unsigned __int8)sub_B286B0(v208 + 48, v208 + 8) )
LABEL_174:
      sub_5165E0(
        (int)v304,
        (int)v201,
        v202,
        v203,
        v204,
        v205,
        (int)v314,
        (int)&v347,
        (int)v297,
        v298,
        v299,
        (int)v300,
        v303[0],
        (int)v304,
        (int)v305,
        v306,
        (int)v307,
        (int)v308,
        v309,
        v312,
        v314[0],
        v315[0],
        v316[0],
        v317[0],
        v318[0]);
LABEL_175:
    v209 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v343);
    sub_182CBA0(v209, v344);
    v210 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v339);
    sub_182CBA0(v210, v341);
    v211 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v329);
    sub_182CBA0(v211, &v330);
    goto LABEL_21;
  }
LABEL_25:
  sub_5194E0(v306);
  v26 = ptr;
  *(_QWORD *)v353 = qword_1C66E88;
  if ( ptr )
  {
    v27 = *((_QWORD *)ptr + 4);
    if ( v27 )
      sub_186B220((void *)(v27 - 8));
    v28 = v26[3];
    if ( v28 )
      sub_186B220((void *)(v28 - 8));
    v29 = v26[2];
    if ( v29 )
      sub_186B220((void *)(v29 - 8));
    sub_186B220(v26);
  }
  v30 = (__int64 *)v360;
  if ( v360 )
  {
    v31 = *(_QWORD *)v360;
    if ( *(_QWORD *)v360 )
    {
      v32 = *(unsigned int *)(v31 - 4);
      if ( (_DWORD)v32 )
      {
        v33 = v31 + 112 * v32;
        do
        {
          v34 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v31 + 56);
          sub_182CBA0(v34, v31 + 72);
          v35 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v31 + 16);
          v36 = v31 + 32;
          v31 += 112;
          sub_182CBA0(v35, v36);
        }
        while ( v31 != v33 );
        v31 = *v30;
      }
      sub_186B220((void *)(v31 - 8));
    }
    sub_186B220(v30);
  }
  sub_180C0E0(v363);
  if ( v362 )
    sub_186B220((void *)(v362 - 8));
  if ( v361 )
    sub_186B220((void *)(v361 - 8));
  v37 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v358);
  sub_182CBA0(v37, v359);
  v38 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v356);
  sub_182CBA0(v38, v357);
  result = qword_1C665B0;
  *(_QWORD *)v353 = qword_1C665B0;
  if ( v355 )
    return (__int64 *)sub_186B220((void *)(v355 - 8));
  return result;
}

