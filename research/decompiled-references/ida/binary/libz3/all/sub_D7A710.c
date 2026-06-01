void __fastcall sub_D7A710(__int64 a1, __int64 a2, __int64 a3, __int64 a4, void *a5, __int64 *a6)
{
  char **v6; // rbx
  void *v7; // r14
  _QWORD *v8; // rsi
  char **v9; // r14
  char **v10; // rdi
  char **v11; // rbx
  void *v12; // r14
  char **v13; // r14
  char **v14; // rdi
  char **v15; // rbx
  void *v16; // r14
  char **exception; // rbx
  void *v18; // r14
  _QWORD *v19; // rsi
  char **v20; // rbx
  void *v21; // r14
  _QWORD *v22; // rsi
  char **v23; // r14
  char **v24; // rdi
  char **v25; // rbx
  void *v26; // r14
  _DWORD *v30; // r15
  int v31; // eax
  int v32; // r8d
  int v33; // r9d
  bool v34; // zf
  __int16 v35; // ax
  _DWORD *v36; // rdx
  _DWORD *v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  int v40; // ecx
  int v41; // r8d
  int v42; // r9d
  __int64 v43; // rdi
  __int64 v44; // rax
  void *v45; // r15
  void *v46; // rdi
  int v47; // ecx
  int v48; // r8d
  int v49; // r9d
  __int64 v50; // rdi
  __int64 v51; // rax
  void *v52; // r15
  __int64 v53; // rax
  int v54; // r9d
  int v55; // eax
  int v56; // r8d
  int v57; // r9d
  __int64 v58; // rax
  __int64 v59; // r15
  int v60; // eax
  __int64 v61; // rax
  __int64 v62; // r15
  __int64 v63; // r15
  int v64; // r13d
  int v65; // eax
  int v66; // r8d
  int v67; // r9d
  __int64 v68; // rax
  __int64 v69; // r13
  __m128 v70; // xmm0
  __int64 v71; // rax
  __m128i si128; // xmm0
  __int64 v73; // r12
  __int64 v74; // rax
  __int64 v75; // r12
  _QWORD *v76; // rdx
  unsigned int v77; // eax
  __int64 v78; // rcx
  int v79; // eax
  __int64 *v80; // rcx
  __int64 v81; // rsi
  __int64 v82; // rax
  __int64 v83; // rax
  __int64 v84; // r12
  _QWORD *v85; // rdx
  unsigned int v86; // eax
  __int64 v87; // rcx
  int v88; // eax
  __int64 *v89; // rcx
  int v90; // esi
  __int64 v91; // rax
  _QWORD *v92; // rax
  __int64 v93; // r12
  _QWORD *v94; // r13
  _QWORD *v95; // rax
  void *v96; // r12
  __int64 v97; // rax
  _QWORD *v98; // rax
  void *v99; // r12
  void *v100; // r12
  void *v101; // r12
  void *v102; // rdi
  void *v103; // r12
  void *v104; // r12
  void *v105; // r12
  void *v106; // r12
  _QWORD *v107; // rax
  void *v108; // r12
  void *v109; // r12
  void *v110; // rdi
  void *v111; // r12
  void *v112; // r12
  int v113; // edx
  __int64 v114; // rdx
  char v115; // cl
  __int64 v116; // rdx
  char v117; // cl
  void *v118; // r12
  void *v119; // r12
  __int64 v120; // rax
  __int64 v121; // rsi
  int v122; // ecx
  int v123; // r8d
  int v124; // r9d
  __int64 v125; // rdi
  _DWORD *v126; // rax
  void *v127; // r12
  int v128; // ecx
  int v129; // r8d
  int v130; // r9d
  __int64 v131; // rdi
  __int64 v132; // rax
  void *v133; // r12
  __int64 v134; // r15
  _DWORD *v135; // rax
  __int64 v136; // rdi
  __int64 v137; // rax
  __int64 v138; // r15
  __int64 v139; // r12
  __int64 v140; // rax
  __int64 v141; // r12
  _DWORD *v142; // rdx
  unsigned int v143; // eax
  unsigned int v144; // ecx
  __int64 v145; // rsi
  unsigned int v146; // eax
  __int64 *v147; // rsi
  __int64 v148; // r13
  __int64 v149; // rdi
  __int64 v150; // rax
  __int64 v151; // rdi
  __int64 v152; // rax
  __int64 v153; // r13
  __int64 v154; // rax
  __int64 v155; // r14
  _QWORD *v156; // rdx
  unsigned int v157; // eax
  __int64 v158; // rcx
  int v159; // eax
  __int64 *v160; // rcx
  void *v161; // rdi
  __int64 v162; // rbx
  __int64 v163; // rbx
  void **v164; // r14
  void *v165; // rbx
  void *v166; // rbx
  void *v167; // rbx
  __int64 v168; // rbx
  unsigned int v169; // r13d
  size_t v170; // rsi
  unsigned int *v171; // rax
  unsigned int v172; // r13d
  size_t v173; // rsi
  unsigned int *v174; // rax
  __int64 v175; // rcx
  unsigned int v176; // r8d
  size_t v177; // rsi
  _DWORD *v178; // rax
  __int64 v179; // rcx
  int v180; // r8d
  unsigned int v181; // r13d
  size_t v182; // rsi
  unsigned int *v183; // rax
  __int64 v184; // rcx
  unsigned int v185; // r13d
  size_t v186; // rsi
  unsigned int *v187; // rax
  __int64 v188; // rcx
  void *v189; // rdi
  _QWORD *v190; // rax
  _QWORD *v191; // rax
  _QWORD *v192; // rax
  _QWORD *v193; // rax
  int v194; // r8d
  __int64 v195; // r13
  void *v196; // rdi
  unsigned int v197; // r12d
  __int64 v198; // rax
  __int64 v199; // r12
  __int64 v200; // rax
  __int64 v201; // rdi
  __int64 v202; // r15
  __int64 v203; // rax
  __int64 v204; // rbx
  __int64 v205; // rax
  void *v206; // rax
  __int64 v207; // rax
  __int64 v208; // r12
  __int64 v209; // rax
  __int64 v210; // r13
  _DWORD *v211; // rax
  __int64 v212; // rdi
  __int64 v213; // rax
  _DWORD *v214; // rax
  void *v215; // rdi
  __int64 v216; // rax
  __int64 v217; // rax
  __int64 v218; // r12
  __int64 v219; // rdi
  __int64 v220; // rax
  __int64 v221; // rax
  __int64 v222; // r15
  void *v223; // rdi
  _DWORD *v224; // rax
  __int64 v225; // rax
  __int64 v226; // rdi
  __int64 v227; // rax
  __int64 v228; // rax
  __int64 v229; // r12
  void *v230; // rdi
  __int64 v231; // rax
  _DWORD *v232; // rax
  __int64 v233; // rdi
  _DWORD *v234; // rax
  _DWORD *v235; // rax
  void *v236; // rdi
  __int64 v237; // rax
  __int64 v238; // rax
  __int64 v239; // rdi
  __int64 v240; // rax
  __int64 v241; // r12
  int v242; // r9d
  int v243; // r9d
  int v244; // r9d
  int v245; // r9d
  int v246; // [rsp-10h] [rbp-2F0h]
  int v247; // [rsp-8h] [rbp-2E8h]
  int v248; // [rsp-8h] [rbp-2E8h]
  int v249; // [rsp-8h] [rbp-2E8h]
  int v250; // [rsp+0h] [rbp-2E0h]
  int v251; // [rsp+0h] [rbp-2E0h]
  int v252; // [rsp+0h] [rbp-2E0h]
  int v253; // [rsp+0h] [rbp-2E0h]
  int v254; // [rsp+0h] [rbp-2E0h]
  int v255; // [rsp+0h] [rbp-2E0h]
  int v256; // [rsp+8h] [rbp-2D8h]
  int v257; // [rsp+8h] [rbp-2D8h]
  int v258; // [rsp+8h] [rbp-2D8h]
  int v259; // [rsp+8h] [rbp-2D8h]
  int v260; // [rsp+8h] [rbp-2D8h]
  int v261; // [rsp+8h] [rbp-2D8h]
  __int64 v262; // [rsp+8h] [rbp-2D8h]
  int v263; // [rsp+10h] [rbp-2D0h]
  int v264; // [rsp+10h] [rbp-2D0h]
  int v265; // [rsp+10h] [rbp-2D0h]
  int v266; // [rsp+10h] [rbp-2D0h]
  int v267; // [rsp+10h] [rbp-2D0h]
  int v268; // [rsp+10h] [rbp-2D0h]
  int v269; // [rsp+18h] [rbp-2C8h]
  int v270; // [rsp+18h] [rbp-2C8h]
  int v271; // [rsp+18h] [rbp-2C8h]
  int v272; // [rsp+18h] [rbp-2C8h]
  int v273; // [rsp+18h] [rbp-2C8h]
  int v274; // [rsp+18h] [rbp-2C8h]
  __int64 v275; // [rsp+18h] [rbp-2C8h]
  int v276; // [rsp+20h] [rbp-2C0h]
  int v277; // [rsp+20h] [rbp-2C0h]
  int v278; // [rsp+20h] [rbp-2C0h]
  int v279; // [rsp+20h] [rbp-2C0h]
  int v280; // [rsp+20h] [rbp-2C0h]
  int v281; // [rsp+20h] [rbp-2C0h]
  __int64 v282; // [rsp+20h] [rbp-2C0h]
  __int64 v283; // [rsp+20h] [rbp-2C0h]
  __int64 v284; // [rsp+28h] [rbp-2B8h] BYREF
  __int64 v285; // [rsp+30h] [rbp-2B0h]
  __int64 v286; // [rsp+38h] [rbp-2A8h]
  int v287[2]; // [rsp+40h] [rbp-2A0h]
  void *v288; // [rsp+48h] [rbp-298h]
  __int64 v289; // [rsp+50h] [rbp-290h]
  void *v290; // [rsp+58h] [rbp-288h]
  _DWORD *v291; // [rsp+60h] [rbp-280h]
  void *v292; // [rsp+68h] [rbp-278h]
  void *v293; // [rsp+70h] [rbp-270h]
  int v294[2]; // [rsp+78h] [rbp-268h] BYREF
  void *v295[2]; // [rsp+80h] [rbp-260h] BYREF
  void *v296; // [rsp+90h] [rbp-250h]
  __int64 v297; // [rsp+98h] [rbp-248h]
  void *v298; // [rsp+A0h] [rbp-240h]
  int v299[2]; // [rsp+A8h] [rbp-238h]
  void *v300; // [rsp+B0h] [rbp-230h]
  void **v301; // [rsp+B8h] [rbp-228h]
  __m128i v302; // [rsp+D0h] [rbp-210h] BYREF
  __int64 v303; // [rsp+E0h] [rbp-200h] BYREF
  __int64 v304; // [rsp+E8h] [rbp-1F8h]
  __int64 v305; // [rsp+F0h] [rbp-1F0h] BYREF
  __int64 v306; // [rsp+F8h] [rbp-1E8h]
  __m128 v307; // [rsp+100h] [rbp-1E0h] BYREF
  __int64 v308; // [rsp+110h] [rbp-1D0h] BYREF
  __int64 v309; // [rsp+118h] [rbp-1C8h]
  __int64 v310; // [rsp+120h] [rbp-1C0h] BYREF
  __int64 v311; // [rsp+128h] [rbp-1B8h]
  __int64 v312; // [rsp+130h] [rbp-1B0h] BYREF
  __int64 v313; // [rsp+138h] [rbp-1A8h]
  __int64 v314; // [rsp+140h] [rbp-1A0h] BYREF
  __int64 v315; // [rsp+148h] [rbp-198h]
  __int64 v316; // [rsp+150h] [rbp-190h] BYREF
  __int64 v317; // [rsp+158h] [rbp-188h]
  __int64 v318; // [rsp+160h] [rbp-180h] BYREF
  __int64 v319; // [rsp+168h] [rbp-178h]
  void *v320; // [rsp+170h] [rbp-170h] BYREF
  _DWORD *v321; // [rsp+178h] [rbp-168h]
  __int64 v322; // [rsp+180h] [rbp-160h] BYREF
  __int64 v323; // [rsp+188h] [rbp-158h]
  __int64 v324; // [rsp+190h] [rbp-150h]
  __int64 v325; // [rsp+198h] [rbp-148h]
  __int64 v326; // [rsp+1A0h] [rbp-140h] BYREF
  __int64 v327; // [rsp+1A8h] [rbp-138h]
  __int64 v328; // [rsp+1B0h] [rbp-130h] BYREF
  __int64 v329; // [rsp+1B8h] [rbp-128h]
  __int64 v330; // [rsp+1C0h] [rbp-120h] BYREF
  __int64 v331; // [rsp+1C8h] [rbp-118h] BYREF
  __int64 v332; // [rsp+1D0h] [rbp-110h] BYREF
  __int64 v333; // [rsp+1D8h] [rbp-108h]
  __int64 v334; // [rsp+1E0h] [rbp-100h]
  __int64 v335; // [rsp+1F0h] [rbp-F0h] BYREF
  __int64 v336; // [rsp+1F8h] [rbp-E8h] BYREF
  __int64 v337; // [rsp+200h] [rbp-E0h] BYREF
  __int64 v338; // [rsp+208h] [rbp-D8h]
  __int64 v339; // [rsp+210h] [rbp-D0h]
  _QWORD *v340; // [rsp+220h] [rbp-C0h] BYREF
  __int64 v341; // [rsp+228h] [rbp-B8h] BYREF
  __int64 v342; // [rsp+230h] [rbp-B0h] BYREF
  __int64 v343; // [rsp+238h] [rbp-A8h]
  __int64 v344; // [rsp+240h] [rbp-A0h]
  _QWORD *v345; // [rsp+250h] [rbp-90h] BYREF
  __int64 v346; // [rsp+258h] [rbp-88h] BYREF
  __int64 v347; // [rsp+260h] [rbp-80h] BYREF
  __int64 v348; // [rsp+268h] [rbp-78h]
  __int64 v349; // [rsp+270h] [rbp-70h]
  __int64 v350; // [rsp+280h] [rbp-60h] BYREF
  __int64 v351; // [rsp+288h] [rbp-58h] BYREF
  __int64 v352; // [rsp+290h] [rbp-50h] BYREF
  __int64 v353; // [rsp+298h] [rbp-48h]
  __int64 v354; // [rsp+2A0h] [rbp-40h]

  v30 = *(_DWORD **)(a4 + 32);
  v298 = a5;
  v301 = (void **)(a1 + 432);
  v291 = v30;
  LODWORD(v290) = sub_15C5540((int)a1 + 432, a3, a3, a4, (_DWORD)a5, (_DWORD)a6);
  v31 = sub_15C5560(a1 + 432, a3);
  v34 = *((_WORD *)v30 + 2) == 0;
  LODWORD(v296) = v31;
  v35 = *((_WORD *)v298 + 2);
  if ( v34 && (v36 = *(_DWORD **)(*((_QWORD *)v30 + 2) + 24LL)) != nullptr && *v36 == *(_DWORD *)(a1 + 232) && !v36[1] )
  {
    if ( v35 )
      goto LABEL_7;
    v37 = *(_DWORD **)(*((_QWORD *)v298 + 2) + 24LL);
    if ( !v37 || *v37 != 5 )
      goto LABEL_7;
    if ( !v37[1] )
    {
      v335 = 0;
      v336 = 0;
      v337 = 1;
      v338 = 0;
      v293 = &v335;
      sub_1673B50(a1 + 232, (_DWORD)v291, (unsigned int)&v335, (unsigned int)&v326, v32, v33);
      v301 = &qword_1C7F2C0;
      switch ( sub_182D020(qword_1C7F2C0, &v335) )
      {
        case 0LL:
          v194 = 0;
          break;
        case 1LL:
          v194 = 1;
          break;
        case 2LL:
          v194 = 2;
          break;
        case 3LL:
          v194 = 3;
          break;
        case 4LL:
          v194 = 4;
          break;
        default:
          sub_1872CE0("");
          sub_1873130(114, 2702);
      }
      LODWORD(v300) = v194;
      v340 = nullptr;
      v341 = 0;
      v342 = 1;
      v343 = 0;
      v295[0] = &v340;
      sub_1666AE0(a1 + 456, v298, &v340, &v322);
      if ( (_DWORD)v340 )
      {
        v350 = *(_QWORD *)(a1 + 496);
        sub_181A6B0(&v351);
        sub_1823E40(
          *(_QWORD *)(a1 + 440) + 24LL,
          &v351,
          (unsigned int)v290,
          (unsigned int)v296,
          (unsigned int)v300,
          v295[0]);
        v195 = *(_QWORD *)(a1 + 8);
        v298 = (void *)sub_D81BF0(a1 + 232, (unsigned __int64)SBYTE3(v351) >> 63, 1);
        if ( v298 )
          ++*((_DWORD *)v298 + 2);
        v345 = nullptr;
        v196 = *v301;
        v347 = 1;
        v197 = (_DWORD)v296 - 1;
        v346 = 0;
        v348 = 0;
        *(_QWORD *)v299 = &v352;
        v296 = &v345;
        sub_D81ED0(v196);
        v198 = sub_1674520(a1 + 232, &v345, v197);
        v199 = v198;
        if ( v198 )
          ++*(_DWORD *)(v198 + 8);
        sub_25A130((char *)v296);
        v200 = sub_D81BF0(a1 + 232, v354, (unsigned int)v290);
        v301 = (void **)v200;
        if ( v200 )
        {
          v200 = (__int64)v301;
          ++*((_DWORD *)v301 + 2);
        }
        v330 = 0;
        v331 = v195;
        sub_D65A70((_QWORD *)a1, v200, &v330);
        v201 = *(_QWORD *)(a1 + 432);
        v300 = (void *)v330;
        v202 = v331;
        v203 = sub_15E1BF0(v201);
        v204 = v203;
        if ( v203 )
          ++*(_DWORD *)(v203 + 8);
        sub_D50200(*a6, a6[1]);
        *a6 = v204;
        sub_D50200((__int64)v301, v195);
        sub_D50200((__int64)v300, v202);
        sub_D50200(v199, v195);
        sub_D50200((__int64)v298, v195);
        sub_182EF00(*(_QWORD *)(v350 + 728), *(_QWORD *)v299);
      }
      else
      {
        sub_D518E0(a1, *(_QWORD *)(a2 + 40), a6);
      }
      sub_25A130((char *)v295[0]);
      sub_25A130((char *)v293);
      return;
    }
  }
  else
  {
    if ( v35 )
      goto LABEL_7;
    v37 = *(_DWORD **)(*((_QWORD *)v298 + 2) + 24LL);
    if ( !v37 || *v37 != 5 )
      goto LABEL_7;
  }
  if ( !v37[1] )
  {
    v322 = 0;
    v323 = 0;
    v324 = 1;
    v325 = 0;
    v292 = &v322;
    sub_1666AE0(a1 + 456, v298, &v322, &v308);
    v350 = 0;
    v351 = 0;
    v352 = 1;
    v353 = 0;
    v300 = &v350;
    if ( !(unsigned __int8)sub_1666AE0(a1 + 456, v298, &v350, &v345) || (_DWORD)v350 )
    {
      sub_25A130((char *)v300);
      v205 = *(_QWORD *)(a1 + 8);
      v310 = 0;
      v311 = v205;
      v312 = 0;
      v313 = v205;
      v314 = 0;
      v315 = v205;
      v316 = 0;
      v317 = v205;
      v318 = 0;
      v319 = v205;
      sub_D54E20(a1, (__int64)v291, 1u, &v310);
      sub_D54E20(a1, (__int64)v291, 0, &v312);
      sub_D54E20(a1, (__int64)v291, 2u, &v314);
      sub_D504D0(a1, (int)v291, &v316);
      sub_D54E20(a1, (__int64)v291, 4u, &v318);
      v330 = *(_QWORD *)(a1 + 496);
      sub_181A6B0(&v331);
      v335 = *(_QWORD *)(a1 + 496);
      v301 = (void **)&v336;
      sub_181A6B0(&v336);
      v340 = *(_QWORD **)(a1 + 496);
      sub_181A6B0(&v341);
      v345 = *(_QWORD **)(a1 + 496);
      v300 = &v346;
      sub_181A6B0(&v346);
      v350 = *(_QWORD *)(a1 + 496);
      sub_181A6B0(&v351);
      sub_1823E40(*(_QWORD *)(a1 + 440) + 24LL, &v331, (unsigned int)v290, (unsigned int)v296, 1, v292);
      sub_1823E40(*(_QWORD *)(a1 + 440) + 24LL, &v336, (unsigned int)v290, (unsigned int)v296, 0, v292);
      sub_1823E40(*(_QWORD *)(a1 + 440) + 24LL, &v341, (unsigned int)v290, (unsigned int)v296, 2, v292);
      sub_1823E40(*(_QWORD *)(a1 + 440) + 24LL, &v346, (unsigned int)v290, (unsigned int)v296, 3, v292);
      sub_1823E40(*(_QWORD *)(a1 + 440) + 24LL, &v351, (unsigned int)v290, (unsigned int)v296, 4, v292);
      v206 = *(void **)(a1 + 8);
      v297 = a1 + 232;
      v300 = v206;
      v207 = sub_D81BF0(a1 + 232, (unsigned __int64)SBYTE3(v331) >> 63, 1);
      v208 = v207;
      if ( v207 )
        ++*(_DWORD *)(v207 + 8);
      v326 = 0;
      v327 = 0;
      LODWORD(v289) = (_DWORD)v296 - 1;
      v328 = 1;
      v298 = &v326;
      v329 = 0;
      v301 = &qword_1C7F2C0;
      sub_D81ED0(qword_1C7F2C0);
      v209 = sub_1674520(v297, &v326, (unsigned int)((_DWORD)v296 - 1));
      v210 = v209;
      if ( v209 )
        ++*(_DWORD *)(v209 + 8);
      sub_25A130((char *)v298);
      v211 = (_DWORD *)sub_D81BF0(v297, v334, (unsigned int)v290);
      v295[0] = v211;
      if ( v211 )
        ++v211[2];
      v320 = nullptr;
      v321 = v300;
      *(_QWORD *)v287 = &v320;
      sub_D65A70((_QWORD *)a1, (__int64)v211, (__int64 *)&v320);
      v212 = *(_QWORD *)(a1 + 432);
      v293 = v320;
      v291 = v321;
      v213 = sub_15E1BF0(v212);
      v284 = v213;
      if ( v213 )
        ++*(_DWORD *)(v213 + 8);
      v214 = (_DWORD *)sub_D81BF0(v297, (unsigned __int64)SBYTE3(v336) >> 63, 1);
      v296 = v214;
      if ( v214 )
        ++v214[2];
      sub_D50200(v208, (__int64)v300);
      v326 = 0;
      v327 = 0;
      v215 = *v301;
      v328 = 1;
      v329 = 0;
      sub_D81ED0(v215);
      v216 = sub_1674520(v297, v298, (unsigned int)v289);
      *(_QWORD *)v294 = v216;
      if ( v216 )
        ++*(_DWORD *)(v216 + 8);
      sub_D50200(v210, (__int64)v300);
      sub_25A130((char *)v298);
      v217 = sub_D81BF0(v297, v339, (unsigned int)v290);
      v218 = v217;
      if ( v217 )
        ++*(_DWORD *)(v217 + 8);
      sub_D50200((__int64)v295[0], (__int64)v300);
      sub_D65A70((_QWORD *)a1, v218, *(__int64 **)v287);
      v219 = *(_QWORD *)(a1 + 432);
      v293 = v320;
      v291 = v321;
      v220 = sub_15E1BF0(v219);
      v285 = v220;
      if ( v220 )
        ++*(_DWORD *)(v220 + 8);
      v221 = sub_D81BF0(v297, (unsigned __int64)SBYTE3(v341) >> 63, 1);
      v222 = v221;
      if ( v221 )
        ++*(_DWORD *)(v221 + 8);
      sub_D50200((__int64)v296, (__int64)v300);
      v326 = 0;
      v327 = 0;
      v328 = 1;
      v223 = *v301;
      v329 = 0;
      sub_D81ED0(v223);
      v224 = (_DWORD *)sub_1674520(v297, v298, (unsigned int)v289);
      v296 = v224;
      if ( v224 )
        ++v224[2];
      sub_D50200(*(__int64 *)v294, (__int64)v300);
      sub_25A130((char *)v298);
      v225 = sub_D81BF0(v297, v344, (unsigned int)v290);
      *(_QWORD *)v299 = v225;
      if ( v225 )
        ++*(_DWORD *)(v225 + 8);
      sub_D50200(v218, (__int64)v300);
      sub_D65A70((_QWORD *)a1, *(__int64 *)v299, *(__int64 **)v287);
      v226 = *(_QWORD *)(a1 + 432);
      v293 = v320;
      v291 = v321;
      v227 = sub_15E1BF0(v226);
      v286 = v227;
      if ( v227 )
        ++*(_DWORD *)(v227 + 8);
      v228 = sub_D81BF0(v297, (unsigned __int64)SBYTE3(v346) >> 63, 1);
      v229 = v228;
      if ( v228 )
        ++*(_DWORD *)(v228 + 8);
      sub_D50200(v222, (__int64)v300);
      v326 = 0;
      v327 = 0;
      v328 = 1;
      v230 = *v301;
      v329 = 0;
      sub_D81ED0(v230);
      v231 = sub_1674520(v297, v298, (unsigned int)v289);
      v283 = v231;
      if ( v231 )
        ++*(_DWORD *)(v231 + 8);
      sub_D50200((__int64)v296, (__int64)v300);
      sub_25A130((char *)v298);
      v232 = (_DWORD *)sub_D81BF0(v297, v349, (unsigned int)v290);
      v295[0] = v232;
      if ( v232 )
        ++v232[2];
      sub_D50200(*(__int64 *)v299, (__int64)v300);
      sub_D65A70((_QWORD *)a1, (__int64)v295[0], *(__int64 **)v287);
      v233 = *(_QWORD *)(a1 + 432);
      v293 = v320;
      v291 = v321;
      v234 = (_DWORD *)sub_15E1BF0(v233);
      v288 = v234;
      if ( v234 )
        ++v234[2];
      v235 = (_DWORD *)sub_D81BF0(v297, (unsigned __int64)SBYTE3(v351) >> 63, 1);
      v296 = v235;
      if ( v235 )
        ++v235[2];
      sub_D50200(v229, (__int64)v300);
      v326 = 0;
      v327 = 0;
      v236 = *v301;
      *(_QWORD *)v299 = &v352;
      v328 = 1;
      v329 = 0;
      sub_D81ED0(v236);
      v237 = sub_1674520(v297, v298, (unsigned int)v289);
      *(_QWORD *)v294 = v237;
      if ( v237 )
        ++*(_DWORD *)(v237 + 8);
      sub_D50200(v283, (__int64)v300);
      sub_25A130((char *)v298);
      v238 = sub_D81BF0(v297, v354, (unsigned int)v290);
      v301 = (void **)v238;
      if ( v238 )
        ++*(_DWORD *)(v238 + 8);
      sub_D50200((__int64)v295[0], (__int64)v300);
      sub_D65A70((_QWORD *)a1, (__int64)v301, *(__int64 **)v287);
      v239 = *(_QWORD *)(a1 + 432);
      v293 = v320;
      v291 = v321;
      v240 = sub_15E1BF0(v239);
      v241 = v240;
      if ( v240 )
        ++*(_DWORD *)(v240 + 8);
      sub_D50200(*a6, a6[1]);
      *a6 = v241;
      sub_D51DB0(a1, v316, (__int64)v288, v241, a6, v242);
      sub_D51DB0(a1, v314, v286, *a6, a6, v243);
      sub_D51DB0(a1, v312, v285, *a6, a6, v244);
      sub_D51DB0(a1, v310, v284, *a6, a6, v245);
      sub_D50200((__int64)v301, (__int64)v300);
      sub_D50200((__int64)v293, (__int64)v291);
      sub_D50200(*(__int64 *)v294, (__int64)v300);
      sub_D50200((__int64)v296, (__int64)v300);
      sub_D50200((__int64)v288, (__int64)v300);
      sub_D50200(v286, (__int64)v300);
      sub_D50200(v285, (__int64)v300);
      sub_D50200(v284, (__int64)v300);
      sub_182EF00(*(_QWORD *)(v350 + 728), *(_QWORD *)v299);
      sub_182EF00(v345[91], &v347);
      sub_182EF00(v340[91], &v342);
      sub_182EF00(*(_QWORD *)(v335 + 728), &v337);
      sub_182EF00(*(_QWORD *)(v330 + 728), &v332);
      sub_D50200(v318, v319);
      sub_D50200(v316, v317);
      sub_D50200(v314, v315);
      sub_D50200(v312, v313);
      sub_D50200(v310, v311);
    }
    else
    {
      sub_25A130((char *)&v350);
      sub_D518E0(a1, *(_QWORD *)(a2 + 40), a6);
    }
    sub_25A130((char *)v292);
    return;
  }
LABEL_7:
  v301 = (void **)(a1 + 256);
  v297 = *(_QWORD *)(a1 + 8);
  v38 = sub_D50430(a1 + 232, 1u);
  v269 = v38;
  if ( v38 )
    ++*(_DWORD *)(v38 + 8);
  sub_D50200(0, v297);
  v39 = sub_D50390(a1 + 232, 1u);
  v276 = v39;
  if ( v39 )
    ++*(_DWORD *)(v39 + 8);
  sub_D50200(0, v297);
  v350 = 0;
  v351 = 0;
  v301 = &qword_1C7F2C0;
  v352 = 1;
  v353 = 0;
  *(_QWORD *)v299 = &v352;
  sub_182CBA0(qword_1C7F2C0, &v352);
  v43 = *(_QWORD *)(a1 + 264);
  BYTE4(v352) &= ~1u;
  LODWORD(v352) = 1;
  if ( !v43 )
  {
    v300 = &v350;
    sub_16669E0(a1 + 256);
    v43 = *(_QWORD *)(a1 + 264);
  }
  v300 = &v350;
  v44 = sub_166A700(v43, (unsigned int)&v350, 0, v40, v41, v42);
  v285 = v44;
  if ( v44 )
    ++*(_DWORD *)(v44 + 8);
  sub_D50200(0, v297);
  v45 = *v301;
  sub_182CBA0(*v301, v300);
  sub_182CBA0(v45, *(_QWORD *)v299);
  v350 = 2;
  v351 = 0;
  v46 = *v301;
  v352 = 1;
  v353 = 0;
  sub_182CBA0(v46, *(_QWORD *)v299);
  v50 = *(_QWORD *)(a1 + 264);
  BYTE4(v352) &= ~1u;
  LODWORD(v352) = 1;
  if ( !v50 )
  {
    sub_16669E0(a1 + 256);
    v50 = *(_QWORD *)(a1 + 264);
  }
  v51 = sub_166A700(v50, (_DWORD)v300, 0, v47, v48, v49);
  v256 = v51;
  if ( v51 )
    ++*(_DWORD *)(v51 + 8);
  sub_D50200(0, v297);
  v52 = *v301;
  sub_182CBA0(*v301, v300);
  sub_182CBA0(v52, *(_QWORD *)v299);
  v53 = *(_QWORD *)(a1 + 8);
  v303 = 0;
  v294[0] = v53;
  v304 = v53;
  v305 = 0;
  v306 = v53;
  LODWORD(v52) = sub_1674700(a1 + 232, 1);
  sub_180C5A0(&v320, "fpa2bv_to_fp_real_sgn");
  v54 = (int)v52;
  LODWORD(v52) = v294[0];
  v55 = sub_15E3D10(
          v294[0],
          (int)&v320,
          (int)&qword_18D6CD0,
          0,
          0,
          v54,
          1,
          v247,
          v250,
          v256,
          v263,
          v269,
          v276,
          v284,
          v285,
          v286,
          (int)&v320,
          (int)v288,
          v289,
          (int)v290,
          (int)v291,
          (int)v292,
          (int)v293,
          v294[0],
          (int)v295[0],
          (int)v295[1],
          (int)v296,
          v297,
          (int)v298,
          *(void **)v299,
          (int)v300,
          (__int64)v301);
  v58 = sub_15DC610((int)v52, v55, 0, 0, v56, v57, v251, v257, v264, v270, v277, v284, v285, v286, v287[0], v288);
  v289 = v58;
  if ( v58 )
    ++*(_DWORD *)(v58 + 8);
  sub_D50200(0, *(__int64 *)v294);
  v59 = *(_QWORD *)(a1 + 8);
  LODWORD(v295[0]) = sub_1674700(a1 + 232, (unsigned int)((_DWORD)v296 + 4));
  sub_180C5A0(&v322, "fpa2bv_to_fp_real_sig");
  v60 = sub_15E3D10(
          v59,
          (int)&v322,
          (int)&qword_18D6CD0,
          0,
          0,
          (int)v295[0],
          1,
          v248,
          v252,
          v258,
          v265,
          v271,
          v278,
          v284,
          v285,
          v286,
          v287[0],
          (int)v288,
          v289,
          (int)v290,
          (int)v291,
          (int)&v322,
          (int)v293,
          v294[0],
          (int)v295[0],
          (int)v295[1],
          (int)v296,
          v297,
          (int)v298,
          *(void **)v299,
          (int)v300,
          (__int64)v301);
  v61 = sub_15DC610(v59, v60, 0, 0, v246, v249, v253, v259, v266, v272, v279, v284, v285, v286, v287[0], v288);
  v62 = v61;
  if ( v61 )
    ++*(_DWORD *)(v61 + 8);
  sub_D50200(v303, v304);
  v303 = v62;
  v63 = *(_QWORD *)(a1 + 8);
  v64 = sub_1674700(a1 + 232, (unsigned int)((_DWORD)v290 + 2));
  sub_180C5A0(v300, "fpa2bv_to_fp_real_exp");
  v65 = sub_15E3D10(
          v63,
          (int)v300,
          (int)&qword_18D6CD0,
          0,
          0,
          v64,
          1,
          v249,
          v254,
          v260,
          v267,
          v273,
          v280,
          v284,
          v285,
          v286,
          v287[0],
          (int)v288,
          v289,
          (int)v290,
          (int)v291,
          (int)v292,
          (int)v293,
          v294[0],
          (int)v295[0],
          (int)v295[1],
          (int)v296,
          v297,
          (int)v298,
          *(void **)v299,
          (int)v300,
          (__int64)v301);
  v68 = sub_15DC610(v63, v65, 0, 0, v66, v67, v255, v261, v268, v274, v281, v284, v285, v286, v287[0], v288);
  v69 = v68;
  v70 = _mm_loadh_ps((const double *)v294);
  if ( v68 )
    ++*(_DWORD *)(v68 + 8);
  *(__m128 *)v295 = v70;
  sub_D50200(v305, v306);
  v71 = *(_QWORD *)(a1 + 8);
  si128 = _mm_load_si128((const __m128i *)v295);
  v305 = v69;
  v284 = v71;
  v302 = si128;
  ++v291[2];
  v307 = _mm_loadh_ps((const double *)&v284);
  sub_D66E50((_QWORD *)a1, a3, (__int64 *)&v307, v302.m128i_i64, &v303, &v305, a6);
  v73 = *(_QWORD *)(a1 + 8);
  sub_15E1A70(*(_QWORD *)(a1 + 432));
  v74 = sub_15E1B70(v73);
  v75 = v74;
  if ( v74 )
    ++*(_DWORD *)(v74 + 8);
  v76 = *(_QWORD **)(a1 + 632);
  if ( v76 )
  {
    v77 = *((_DWORD *)v76 - 1);
    if ( v77 == *((_DWORD *)v76 - 2) )
    {
      v185 = (3 * v77 + 1) >> 1;
      v186 = 8 * v185 + 8;
      if ( 8 * v77 + 8 >= (unsigned int)v186 || v77 >= v185 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0((__int64 *)v300, "Overflow encountered when expanding vector");
        v18 = v300;
        v19 = v300;
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v19);
        sub_233E40((__int64)v18);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v187 = (unsigned int *)sub_186B300(v76 - 1, v186);
      v188 = v187[1];
      v76 = v187 + 2;
      *v187 = v185;
      *(_QWORD *)(a1 + 632) = v187 + 2;
      LODWORD(v187) = v188;
      v80 = &v76[v188];
      v79 = (_DWORD)v187 + 1;
    }
    else
    {
      v78 = v77;
      v79 = v77 + 1;
      v80 = &v76[v78];
    }
  }
  else
  {
    v191 = (_QWORD *)sub_186B270(0x18u);
    v76 = v191 + 1;
    *v191 = 2;
    v79 = 1;
    *(_QWORD *)(a1 + 632) = v76;
    v80 = v76;
  }
  *v80 = v75;
  v81 = *a6;
  *((_DWORD *)v76 - 1) = v79;
  v82 = *(_QWORD *)(a1 + 8);
  v308 = 0;
  v309 = v82;
  sub_D5BB00(a1, v81, &v308);
  v83 = sub_15E1A70(*(_QWORD *)(a1 + 8));
  v84 = v83;
  if ( v83 )
    ++*(_DWORD *)(v83 + 8);
  v85 = *(_QWORD **)(a1 + 632);
  if ( v85 )
  {
    v86 = *((_DWORD *)v85 - 1);
    if ( v86 == *((_DWORD *)v85 - 2) )
    {
      v181 = (3 * v86 + 1) >> 1;
      v182 = 8 * v181 + 8;
      if ( 8 * v86 + 8 >= (unsigned int)v182 || v86 >= v181 )
      {
        v20 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0((__int64 *)v300, "Overflow encountered when expanding vector");
        v21 = v300;
        v22 = v300;
        *v20 = (char *)off_1C63128;
        sub_2333C0(v20 + 1, v22);
        sub_233E40((__int64)v21);
        __cxa_throw(v20, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v183 = (unsigned int *)sub_186B300(v85 - 1, v182);
      v184 = v183[1];
      v85 = v183 + 2;
      *v183 = v181;
      *(_QWORD *)(a1 + 632) = v183 + 2;
      LODWORD(v183) = v184;
      v89 = &v85[v184];
      v88 = (_DWORD)v183 + 1;
    }
    else
    {
      v87 = v86;
      v88 = v86 + 1;
      v89 = &v85[v87];
    }
  }
  else
  {
    v190 = (_QWORD *)sub_186B270(0x18u);
    v85 = v190 + 1;
    *v190 = 2;
    v88 = 1;
    *(_QWORD *)(a1 + 632) = v85;
    v89 = v85;
  }
  *v89 = v84;
  v90 = (int)v290;
  *((_DWORD *)v85 - 1) = v88;
  v91 = *(_QWORD *)(a1 + 496);
  v326 = 0;
  v327 = 0;
  v328 = 1;
  v329 = 0;
  v330 = 0;
  v331 = 0;
  v332 = 1;
  v333 = 0;
  v92 = sub_D58CA0((__int64 *)(v91 + 736), v90 - 1);
  v93 = *(_QWORD *)(a1 + 504);
  v94 = v92;
  if ( !(unsigned __int8)sub_182F2C0(v93, v92) || (unsigned __int64)sub_182F340(v93, v94) > 0xFFFFFFFE )
  {
    v6 = (char **)__cxa_allocate_exception(0x28u);
    sub_24ABB0((__int64 *)v300, "exponents requiring more than 32 bits are not supported");
    v7 = v300;
    v8 = v300;
    *v6 = (char *)off_1C63128;
    sub_2333C0(v6 + 1, v8);
    sub_233E40((__int64)v7);
    __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  LODWORD(v290) = sub_182F340(*(_QWORD *)(a1 + 504), v94);
  v95 = sub_D59FE0((__int64 *)(*(_QWORD *)(a1 + 496) + 736LL), (int)v296 - 1);
  v347 = 1;
  v345 = nullptr;
  v346 = 0;
  v96 = *v301;
  v348 = 0;
  if ( (*((_BYTE *)v95 + 4) & 1) != 0 )
    sub_182C690(v96, &v345, v95);
  else
    LODWORD(v345) = *(_DWORD *)v95;
  sub_182CBA0(v96, &v347);
  v97 = *(_QWORD *)(a1 + 496);
  LODWORD(v347) = 1;
  BYTE4(v347) &= ~1u;
  v98 = sub_D58CA0((__int64 *)(v97 + 736), (unsigned int)v296);
  v340 = nullptr;
  v341 = 0;
  v342 = 1;
  v99 = *v301;
  v343 = 0;
  if ( (*((_BYTE *)v98 + 4) & 1) != 0 )
    sub_182C690(v99, &v340, v98);
  else
    LODWORD(v340) = *(_DWORD *)v98;
  sub_182CBA0(v99, &v342);
  BYTE4(v342) &= ~1u;
  LODWORD(v342) = 1;
  v350 = 0;
  v100 = *v301;
  v351 = 0;
  v352 = 1;
  v353 = 0;
  if ( (BYTE4(v340) & 1) != 0 )
  {
    v295[0] = &v340;
    sub_182C690(v100, v300, &v340);
  }
  else
  {
    LODWORD(v350) = (_DWORD)v340;
    v295[0] = &v340;
  }
  if ( (v342 & 0x100000000LL) != 0 )
  {
    sub_182C690(v100, *(_QWORD *)v299, &v342);
  }
  else
  {
    BYTE4(v352) &= ~1u;
    LODWORD(v352) = v342;
  }
  v101 = *v301;
  if ( (_DWORD)v350 && ((BYTE4(v345) & 1) != 0 || (_DWORD)v345 != 1 || (v347 & 0x100000000LL) != 0 || (_DWORD)v347 != 1) )
  {
    v102 = *v301;
    v296 = &v345;
    sub_1831650(v102, v300, &v347);
    v296 = &v345;
    sub_1831650(v101, *(_QWORD *)v299, &v345);
    if ( (int)v352 < 0 )
    {
      sub_1831620(v101, v300);
      sub_1831620(v101, *(_QWORD *)v299);
    }
    v293 = &v335;
    v335 = 0;
    v336 = 0;
    sub_1832C70(v101, v300, *(_QWORD *)v299, &v335);
    if ( (v335 & 0x100000000LL) != 0 || (_DWORD)v335 != 1 )
    {
      sub_1833EB0(v101, v300, v293, v300);
      sub_1833EB0(v101, *(_QWORD *)v299, v293, *(_QWORD *)v299);
    }
    sub_182CBA0(v101, v293);
  }
  else
  {
    if ( (v350 & 0x100000000LL) != 0 )
    {
      v189 = *v301;
      v296 = &v345;
      sub_182C690(v189, v300, v300);
    }
    else
    {
      BYTE4(v350) &= ~1u;
    }
    if ( (v352 & 0x100000000LL) != 0 )
    {
      v296 = &v345;
      sub_182C690(v101, *(_QWORD *)v299, *(_QWORD *)v299);
    }
    else
    {
      BYTE4(v352) &= ~1u;
    }
    v296 = &v345;
  }
  BYTE4(v335) &= 0xFCu;
  BYTE4(v337) &= 0xFCu;
  LODWORD(v335) = 0;
  v103 = *v301;
  v336 = 0;
  LODWORD(v337) = 1;
  v338 = 0;
  if ( (v350 & 0x100000000LL) != 0 )
    sub_182C690(v103, &v335, v300);
  else
    LODWORD(v335) = v350;
  if ( (v352 & 0x100000000LL) != 0 )
  {
    sub_182C690(v103, &v337, *(_QWORD *)v299);
  }
  else
  {
    BYTE4(v337) &= ~1u;
    LODWORD(v337) = v352;
  }
  v104 = *v301;
  sub_182CBA0(*v301, v300);
  sub_182CBA0(v104, *(_QWORD *)v299);
  v105 = *v301;
  sub_182CBA0(*v301, v295[0]);
  sub_182CBA0(v105, &v342);
  v106 = *v301;
  sub_182CBA0(*v301, v296);
  sub_182CBA0(v106, &v347);
  v107 = sub_D59FE0((__int64 *)(*(_QWORD *)(a1 + 496) + 736LL), (unsigned int)v290);
  v340 = nullptr;
  v341 = 0;
  v342 = 1;
  v108 = *v301;
  v343 = 0;
  if ( (*((_BYTE *)v107 + 4) & 1) != 0 )
    sub_182C690(v108, v295[0], v107);
  else
    LODWORD(v340) = *(_DWORD *)v107;
  sub_182CBA0(v108, &v342);
  BYTE4(v342) &= ~1u;
  LODWORD(v342) = 1;
  v350 = 0;
  v109 = *v301;
  v351 = 0;
  v352 = 1;
  v353 = 0;
  if ( (v335 & 0x100000000LL) != 0 )
  {
    v293 = &v335;
    sub_182C690(v109, v300, &v335);
  }
  else
  {
    LODWORD(v350) = v335;
    v293 = &v335;
  }
  if ( (v337 & 0x100000000LL) != 0 )
  {
    sub_182C690(v109, *(_QWORD *)v299, &v337);
  }
  else
  {
    BYTE4(v352) &= ~1u;
    LODWORD(v352) = v337;
  }
  v110 = *v301;
  if ( (v352 & 0x100000000LL) != 0 || (_DWORD)v352 != 1 || (v342 & 0x100000000LL) != 0 || (_DWORD)v342 != 1 )
  {
    sub_1848FF0(v110, v300, v295[0]);
  }
  else
  {
    v290 = *v301;
    sub_1831650(v110, v300, v295[0]);
    sub_182CBA0(v290, *(_QWORD *)v299);
    BYTE4(v352) &= ~1u;
    LODWORD(v352) = 1;
  }
  BYTE4(v347) &= 0xFCu;
  BYTE4(v345) &= 0xFCu;
  LODWORD(v345) = 0;
  v111 = *v301;
  v346 = 0;
  LODWORD(v347) = 1;
  v348 = 0;
  if ( (v350 & 0x100000000LL) != 0 )
    sub_182C690(v111, v296, v300);
  else
    LODWORD(v345) = v350;
  if ( (v352 & 0x100000000LL) != 0 )
  {
    sub_182C690(v111, &v347, *(_QWORD *)v299);
  }
  else
  {
    BYTE4(v347) &= ~1u;
    LODWORD(v347) = v352;
  }
  v112 = *v301;
  sub_182CBA0(*v301, v300);
  sub_182CBA0(v112, *(_QWORD *)v299);
  v113 = (int)v345;
  LODWORD(v345) = v330;
  LODWORD(v330) = v113;
  v114 = v346;
  v346 = v331;
  v331 = v114;
  v115 = BYTE4(v345) & 1;
  LOBYTE(v114) = BYTE4(v330) & 0xFC | BYTE4(v345) & 2;
  BYTE4(v345) = BYTE4(v330) & 1 | BYTE4(v345) & 0xFC | BYTE4(v330) & 2;
  BYTE4(v330) = v115 | v114;
  LODWORD(v114) = v347;
  LODWORD(v347) = v332;
  LODWORD(v332) = v114;
  v116 = v348;
  v348 = v333;
  v333 = v116;
  v117 = BYTE4(v347) & 1;
  LOBYTE(v116) = BYTE4(v332) & 0xFC | BYTE4(v347) & 2;
  BYTE4(v347) = BYTE4(v332) & 1 | BYTE4(v347) & 0xFC | BYTE4(v332) & 2;
  BYTE4(v332) = v117 | v116;
  v118 = *v301;
  sub_182CBA0(*v301, v296);
  sub_182CBA0(v118, &v347);
  v119 = *v301;
  sub_182CBA0(*v301, v295[0]);
  sub_182CBA0(v119, &v342);
  v120 = *(_QWORD *)(a1 + 8);
  v121 = *a6;
  v310 = 0;
  v311 = v120;
  v312 = 0;
  v313 = v120;
  sub_D63CE0(a1, v121, &v310);
  sub_D63E40(a1, *a6, &v312);
  v125 = *(_QWORD *)(a1 + 264);
  v290 = *(void **)(a1 + 8);
  if ( !v125 )
  {
    sub_16669E0(a1 + 256);
    v125 = *(_QWORD *)(a1 + 264);
  }
  v126 = (_DWORD *)sub_166A700(v125, (unsigned int)&v330, 0, v122, v123, v124);
  v288 = v126;
  if ( v126 )
    ++v126[2];
  sub_D50200(0, (__int64)v290);
  BYTE4(v350) &= 0xFCu;
  BYTE4(v352) &= 0xFCu;
  LODWORD(v350) = 0;
  v127 = *v301;
  v351 = 0;
  LODWORD(v352) = 1;
  v353 = 0;
  if ( (v330 & 0x100000000LL) != 0 )
    sub_182C690(v127, v300, &v330);
  else
    LODWORD(v350) = v330;
  if ( (v332 & 0x100000000LL) != 0 )
  {
    sub_182C690(v127, *(_QWORD *)v299, &v332);
  }
  else
  {
    BYTE4(v352) &= ~1u;
    LODWORD(v352) = v332;
  }
  sub_1831620(*v301, v300);
  v131 = *(_QWORD *)(a1 + 264);
  if ( !v131 )
  {
    sub_16669E0(a1 + 256);
    v131 = *(_QWORD *)(a1 + 264);
  }
  v132 = sub_166A700(v131, (_DWORD)v300, 0, v128, v129, v130);
  v286 = v132;
  if ( v132 )
    ++*(_DWORD *)(v132 + 8);
  sub_D50200(0, (__int64)v290);
  v133 = *v301;
  sub_182CBA0(*v301, v300);
  sub_182CBA0(v133, *(_QWORD *)v299);
  v134 = (__int64)v291;
  v135 = *(_DWORD **)(a1 + 8);
  v314 = 0;
  v315 = (__int64)v135;
  v316 = 0;
  v317 = (__int64)v135;
  v318 = 0;
  v319 = (__int64)v135;
  v320 = nullptr;
  v321 = v135;
  v322 = 0;
  v323 = (__int64)v135;
  sub_D54E20(a1, (__int64)v291, 1u, &v314);
  sub_D54E20(a1, v134, 0, &v316);
  sub_D54E20(a1, v134, 2u, &v318);
  sub_D504D0(a1, v134, *(__int64 **)v287);
  sub_D54E20(a1, v134, 4u, (__int64 *)v292);
  v136 = *(_QWORD *)(a1 + 256);
  *(_QWORD *)v299 = *(_QWORD *)(a1 + 8);
  LODWORD(v134) = v299[0];
  sub_15E1B70(v136);
  sub_15E1B70(v134);
  v137 = sub_15E1B70(v299[0]);
  v138 = v137;
  if ( v137 )
    ++*(_DWORD *)(v137 + 8);
  sub_D50200(0, *(__int64 *)v299);
  v139 = *(_QWORD *)(a1 + 8);
  sub_15E1B70(*(_QWORD *)(a1 + 256));
  sub_15E1B70(v139);
  v140 = sub_15E1B70(v139);
  v141 = v140;
  if ( v140 )
    ++*(_DWORD *)(v140 + 8);
  sub_D50200(0, *(__int64 *)v299);
  if ( v138 )
    ++*(_DWORD *)(v138 + 8);
  v142 = *(_DWORD **)(a1 + 632);
  if ( v142 )
  {
    v143 = *(v142 - 1);
    v144 = *(v142 - 2);
    if ( v143 == v144 )
    {
      v172 = (3 * v143 + 1) >> 1;
      v173 = 8 * v172 + 8;
      if ( 8 * v143 + 8 >= (unsigned int)v173 || v143 >= v172 )
      {
        v9 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0((__int64 *)v300, "Overflow encountered when expanding vector");
        v10 = v9 + 1;
        v11 = v9;
        *v9 = (char *)off_1C63128;
        v12 = v300;
        sub_2333C0(v10, v300);
        sub_233E40((__int64)v12);
        __cxa_throw(v11, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v174 = (unsigned int *)sub_186B300(v142 - 2, v173);
      v175 = v174[1];
      v142 = v174 + 2;
      *v174 = v172;
      *(_QWORD *)(a1 + 632) = v174 + 2;
      LODWORD(v174) = v175;
      v147 = (__int64 *)&v142[2 * v175];
      v144 = v172;
      v146 = (_DWORD)v174 + 1;
    }
    else
    {
      v145 = v143;
      v146 = v143 + 1;
      v147 = (__int64 *)&v142[2 * v145];
    }
    *v147 = v138;
    *(v142 - 1) = v146;
    if ( !v141 )
      goto LABEL_94;
    goto LABEL_93;
  }
  v193 = (_QWORD *)sub_186B270(0x18u);
  v142 = v193 + 1;
  v193[1] = v138;
  *v193 = 0x100000002LL;
  v146 = 1;
  *(_QWORD *)(a1 + 632) = v142;
  if ( v141 )
  {
LABEL_93:
    ++*(_DWORD *)(v141 + 8);
    v146 = *(v142 - 1);
    v144 = *(v142 - 2);
LABEL_94:
    if ( v144 == v146 )
    {
      v169 = (3 * v144 + 1) >> 1;
      v170 = 8 * v169 + 8;
      if ( 8 * v144 + 8 >= (unsigned int)v170 || v144 >= v169 )
      {
        v23 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0((__int64 *)v300, "Overflow encountered when expanding vector");
        v24 = v23 + 1;
        v25 = v23;
        *v23 = (char *)off_1C63128;
        v26 = v300;
        sub_2333C0(v24, v300);
        sub_233E40((__int64)v26);
        __cxa_throw(v25, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v171 = (unsigned int *)sub_186B300(v142 - 2, v170);
      v142 = v171 + 2;
      *v171 = v169;
      v146 = v171[1];
      *(_QWORD *)(a1 + 632) = v142;
    }
  }
  v148 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)&v142[2 * v146] = v141;
  v149 = *a6;
  *(v142 - 1) = v146 + 1;
  v150 = sub_15D1F10(v149);
  v340 = nullptr;
  v341 = v148;
  sub_D518E0(a1, v150, (__int64 *)v295[0]);
  v151 = *a6;
  v292 = v340;
  *(_QWORD *)v287 = v341;
  v152 = sub_15D1F10(v151);
  v345 = nullptr;
  v346 = v148;
  sub_D51670(a1, v152, (__int64 *)v296);
  v153 = v346;
  v295[0] = *(void **)(a1 + 8);
  v296 = v345;
  sub_15E1B70((int)v295[0]);
  sub_15E1B70(*(_QWORD *)(a1 + 8));
  sub_15E1B70((int)v295[0]);
  sub_15E1B70(*(_QWORD *)(a1 + 8));
  v154 = sub_15E1B70((int)v295[0]);
  v155 = v154;
  if ( v154 )
    ++*(_DWORD *)(v154 + 8);
  v156 = *(_QWORD **)(a1 + 632);
  if ( v156 )
  {
    v157 = *((_DWORD *)v156 - 1);
    if ( v157 == *((_DWORD *)v156 - 2) )
    {
      v176 = (3 * v157 + 1) >> 1;
      v177 = 8 * v176 + 8;
      if ( 8 * v157 + 8 >= (unsigned int)v177 || v157 >= v176 )
      {
        v13 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0((__int64 *)v300, "Overflow encountered when expanding vector");
        v14 = v13 + 1;
        v15 = v13;
        *v13 = (char *)off_1C63128;
        v16 = v300;
        sub_2333C0(v14, v300);
        sub_233E40((__int64)v16);
        __cxa_throw(v15, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      LODWORD(v300) = (3 * v157 + 1) >> 1;
      v178 = (_DWORD *)sub_186B300(v156 - 1, v177);
      v179 = (unsigned int)v178[1];
      v180 = (int)v300;
      v156 = v178 + 2;
      *(_QWORD *)(a1 + 632) = v178 + 2;
      *v178 = v180;
      LODWORD(v178) = v179;
      v160 = &v156[v179];
      v159 = (_DWORD)v178 + 1;
    }
    else
    {
      v158 = v157;
      v159 = v157 + 1;
      v160 = &v156[v158];
    }
  }
  else
  {
    v192 = (_QWORD *)sub_186B270(0x18u);
    v156 = v192 + 1;
    *v192 = 2;
    v159 = 1;
    *(_QWORD *)(a1 + 632) = v156;
    v160 = v156;
  }
  *v160 = v155;
  v161 = v296;
  *((_DWORD *)v156 - 1) = v159;
  sub_D50200((__int64)v161, v153);
  sub_D50200((__int64)v292, *(__int64 *)v287);
  v162 = *(_QWORD *)v299;
  sub_D50200(v141, *(__int64 *)v299);
  sub_D50200(v138, v162);
  sub_D50200(v322, v323);
  sub_D50200((__int64)v320, (__int64)v321);
  sub_D50200(v318, v319);
  sub_D50200(v316, v317);
  sub_D50200(v314, v315);
  v163 = (__int64)v290;
  sub_D50200(v286, (__int64)v290);
  sub_D50200((__int64)v288, v163);
  sub_D50200(v312, v313);
  sub_D50200(v310, v311);
  v164 = v301;
  v165 = *v301;
  sub_182CBA0(*v301, v293);
  sub_182CBA0(v165, &v337);
  v166 = *v164;
  sub_182CBA0(*v164, &v330);
  sub_182CBA0(v166, &v332);
  v167 = *v164;
  sub_182CBA0(*v164, &v326);
  sub_182CBA0(v167, &v328);
  sub_D50200(v308, v309);
  sub_D50200((__int64)v291, v284);
  sub_D50200(v305, v306);
  sub_D50200(v303, v304);
  sub_D50200(v289, *(__int64 *)v294);
  v168 = v297;
  sub_D50200(v262, v297);
  sub_D50200(v285, v168);
  sub_D50200(v282, v168);
  sub_D50200(v275, v168);
}

