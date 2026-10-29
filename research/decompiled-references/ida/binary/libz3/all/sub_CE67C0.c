__int64 __fastcall sub_CE67C0(__int64 a1)
{
  char **v1; // r12
  __int64 v2; // rdx
  char **v3; // r15
  __int64 v4; // rdx
  char **v5; // r12
  __int64 v6; // rdx
  char **v7; // r15
  __int64 v8; // rdx
  char **v9; // r12
  __int64 v10; // rdx
  char **v11; // r15
  __int64 v12; // rdx
  char **v13; // r12
  __int64 v14; // rdx
  char **v15; // r15
  __int64 v16; // rdx
  char **v17; // r12
  __int64 v18; // rdx
  char **exception; // r13
  __int64 v20; // rdx
  __int64 v22; // rax
  __int64 result; // rax
  __int64 v24; // r14
  __int64 v25; // rax
  __int64 v26; // r13
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  int v31; // r8d
  int v32; // r9d
  __int64 v33; // rdi
  __int64 v34; // rax
  int v35; // r8d
  int v36; // r9d
  void *v37; // rdi
  __int64 v38; // rax
  int v39; // r8d
  int v40; // r9d
  __int64 v41; // rdi
  __int64 v42; // rax
  int v43; // r8d
  int v44; // r9d
  __m128i v45; // xmm0
  __int64 v46; // rdi
  __int64 v47; // rax
  int v48; // r8d
  int v49; // r9d
  __int64 v50; // rdi
  __int64 v51; // rax
  int v52; // r8d
  int v53; // r9d
  __int64 v54; // rdi
  __int64 v55; // rax
  int v56; // r8d
  int v57; // r9d
  __int64 v58; // rdi
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  __m128i v64; // xmm3
  __int64 v65; // rdi
  __int64 v66; // rax
  __int64 v67; // rdi
  __int64 v68; // rax
  __int64 v69; // r14
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // r12
  _DWORD *v73; // rdx
  unsigned int v74; // eax
  __int64 v75; // rcx
  int v76; // eax
  _DWORD *v77; // rcx
  __int64 v78; // r14
  __int64 v79; // rax
  __int64 v80; // r13
  __int64 v81; // rax
  __int64 v82; // r15
  __int64 v83; // rax
  __int64 v84; // r14
  bool v85; // zf
  __int64 v86; // rax
  __int64 v87; // r15
  _DWORD *v88; // rdx
  unsigned int v89; // eax
  __int64 v90; // rcx
  int v91; // eax
  _DWORD *v92; // rcx
  __int64 v93; // rax
  __int64 v94; // r12
  _DWORD *v95; // rdx
  unsigned int v96; // eax
  __int64 v97; // rcx
  int v98; // eax
  _DWORD *v99; // rcx
  __int64 v100; // r15
  __int64 v101; // rax
  __int64 v102; // rax
  __int64 v103; // r15
  _DWORD *v104; // rdx
  unsigned int v105; // eax
  __int64 v106; // rcx
  int v107; // eax
  _DWORD *v108; // rcx
  __int64 v109; // r14
  __int64 v110; // rax
  __int64 v111; // r12
  __int64 v112; // rax
  __int64 v113; // r13
  __int64 v114; // rax
  __int64 v115; // r14
  __int64 v116; // rax
  __int64 v117; // r12
  _DWORD *v118; // rdx
  unsigned int v119; // eax
  __int64 v120; // rcx
  int v121; // eax
  _DWORD *v122; // rcx
  __int64 v123; // rdi
  __int64 v124; // rax
  __int64 v125; // rax
  __int64 v126; // r13
  _DWORD *v127; // rdx
  unsigned int v128; // eax
  __int64 v129; // rcx
  int v130; // eax
  _DWORD *v131; // rcx
  __int64 v132; // r14
  __int64 v133; // rax
  __int64 v134; // r12
  __int64 v135; // rax
  __int64 v136; // r15
  __int64 v137; // rax
  __int64 v138; // r14
  __int64 v139; // rax
  __int64 v140; // r12
  _DWORD *v141; // rdx
  unsigned int v142; // eax
  __int64 v143; // rcx
  int v144; // eax
  _DWORD *v145; // rcx
  __int64 v146; // rdi
  __int64 v147; // rax
  __int64 v148; // rax
  __int64 v149; // r13
  _DWORD *v150; // rdx
  unsigned int v151; // eax
  __int64 v152; // rcx
  int v153; // eax
  _DWORD *v154; // rcx
  __int64 v155; // r14
  __int64 v156; // rax
  __int64 v157; // r12
  __int64 v158; // rax
  __int64 v159; // r15
  __int64 v160; // rax
  __int64 v161; // r14
  __int64 v162; // rax
  __int64 v163; // r12
  _DWORD *v164; // rdx
  unsigned int v165; // eax
  __int64 v166; // rcx
  int v167; // eax
  _DWORD *v168; // rcx
  __int64 v169; // rdi
  __int64 v170; // rax
  __int64 v171; // r15
  __int64 v172; // rax
  __int64 v173; // r13
  _DWORD *v174; // rdx
  unsigned int v175; // eax
  __int64 v176; // rcx
  _DWORD *v177; // rcx
  unsigned int v178; // r13d
  size_t v179; // rsi
  unsigned int *v180; // rax
  __int64 v181; // rcx
  unsigned int v182; // r12d
  size_t v183; // rsi
  unsigned int *v184; // rax
  __int64 v185; // rcx
  unsigned int v186; // edi
  size_t v187; // rsi
  unsigned int *v188; // rax
  __int64 v189; // rcx
  unsigned int v190; // r12d
  size_t v191; // rsi
  unsigned int *v192; // rax
  __int64 v193; // rcx
  unsigned int v194; // edi
  size_t v195; // rsi
  unsigned int *v196; // rax
  __int64 v197; // rcx
  unsigned int v198; // r12d
  size_t v199; // rsi
  unsigned int *v200; // rax
  __int64 v201; // rcx
  unsigned int v202; // edi
  size_t v203; // rsi
  unsigned int *v204; // rax
  __int64 v205; // rcx
  unsigned int v206; // r12d
  size_t v207; // rsi
  unsigned int *v208; // rax
  __int64 v209; // rcx
  unsigned int v210; // edi
  size_t v211; // rsi
  unsigned int *v212; // rax
  __int64 v213; // rcx
  unsigned int v214; // r12d
  size_t v215; // rsi
  unsigned int *v216; // rax
  __int64 v217; // rcx
  _QWORD *v218; // rax
  _QWORD *v219; // rax
  _QWORD *v220; // rax
  _QWORD *v221; // rax
  _QWORD *v222; // rax
  _QWORD *v223; // rax
  _QWORD *v224; // rax
  _QWORD *v225; // rax
  _QWORD *v226; // rax
  _QWORD *v227; // rax
  int v228; // [rsp+0h] [rbp-2B0h]
  int v229; // [rsp+0h] [rbp-2B0h]
  int v230; // [rsp+0h] [rbp-2B0h]
  int v231; // [rsp+0h] [rbp-2B0h]
  int v232; // [rsp+0h] [rbp-2B0h]
  int v233; // [rsp+0h] [rbp-2B0h]
  int v234; // [rsp+0h] [rbp-2B0h]
  __int64 v235; // [rsp+0h] [rbp-2B0h]
  int v236; // [rsp+8h] [rbp-2A8h]
  int v237; // [rsp+8h] [rbp-2A8h]
  int v238; // [rsp+8h] [rbp-2A8h]
  int v239; // [rsp+8h] [rbp-2A8h]
  int v240; // [rsp+8h] [rbp-2A8h]
  int v241; // [rsp+8h] [rbp-2A8h]
  int v242; // [rsp+8h] [rbp-2A8h]
  __int64 v243; // [rsp+8h] [rbp-2A8h]
  int v244; // [rsp+10h] [rbp-2A0h]
  int v245; // [rsp+10h] [rbp-2A0h]
  int v246; // [rsp+10h] [rbp-2A0h]
  int v247; // [rsp+10h] [rbp-2A0h]
  int v248; // [rsp+10h] [rbp-2A0h]
  int v249; // [rsp+10h] [rbp-2A0h]
  int v250; // [rsp+10h] [rbp-2A0h]
  __int64 v251; // [rsp+10h] [rbp-2A0h]
  int v252; // [rsp+18h] [rbp-298h]
  int v253; // [rsp+18h] [rbp-298h]
  int v254; // [rsp+18h] [rbp-298h]
  int v255; // [rsp+18h] [rbp-298h]
  int v256; // [rsp+18h] [rbp-298h]
  int v257; // [rsp+18h] [rbp-298h]
  int v258; // [rsp+18h] [rbp-298h]
  __int64 v259; // [rsp+18h] [rbp-298h]
  int v260; // [rsp+20h] [rbp-290h]
  int v261; // [rsp+20h] [rbp-290h]
  int v262; // [rsp+20h] [rbp-290h]
  int v263; // [rsp+20h] [rbp-290h]
  int v264; // [rsp+20h] [rbp-290h]
  int v265; // [rsp+20h] [rbp-290h]
  int v266; // [rsp+20h] [rbp-290h]
  __int64 v267; // [rsp+20h] [rbp-290h]
  char v268; // [rsp+28h] [rbp-288h]
  char v269; // [rsp+28h] [rbp-288h]
  char v270; // [rsp+28h] [rbp-288h]
  char v271; // [rsp+28h] [rbp-288h]
  char v272; // [rsp+28h] [rbp-288h]
  char v273; // [rsp+28h] [rbp-288h]
  __int64 v274; // [rsp+28h] [rbp-288h]
  int v275; // [rsp+30h] [rbp-280h]
  int v276; // [rsp+30h] [rbp-280h]
  int v277; // [rsp+30h] [rbp-280h]
  int v278; // [rsp+30h] [rbp-280h]
  int v279; // [rsp+30h] [rbp-280h]
  int v280; // [rsp+30h] [rbp-280h]
  __int64 v281; // [rsp+30h] [rbp-280h]
  int v282; // [rsp+38h] [rbp-278h]
  int v283; // [rsp+38h] [rbp-278h]
  int v284; // [rsp+38h] [rbp-278h]
  int v285; // [rsp+38h] [rbp-278h]
  int v286; // [rsp+38h] [rbp-278h]
  int v287; // [rsp+38h] [rbp-278h]
  __int64 v288; // [rsp+38h] [rbp-278h]
  int v289; // [rsp+40h] [rbp-270h]
  int v290; // [rsp+40h] [rbp-270h]
  int v291; // [rsp+40h] [rbp-270h]
  int v292; // [rsp+40h] [rbp-270h]
  int v293; // [rsp+40h] [rbp-270h]
  int v294; // [rsp+40h] [rbp-270h]
  __int64 v295; // [rsp+40h] [rbp-270h]
  void *v296; // [rsp+48h] [rbp-268h]
  void *v297; // [rsp+48h] [rbp-268h]
  void *v298; // [rsp+48h] [rbp-268h]
  void *v299; // [rsp+48h] [rbp-268h]
  void *v300; // [rsp+48h] [rbp-268h]
  void *v301; // [rsp+48h] [rbp-268h]
  __int64 v302; // [rsp+48h] [rbp-268h]
  __int64 v303; // [rsp+50h] [rbp-260h]
  __int64 v304; // [rsp+58h] [rbp-258h]
  __int64 v305; // [rsp+60h] [rbp-250h]
  __int64 v306; // [rsp+68h] [rbp-248h]
  __int64 v307; // [rsp+70h] [rbp-240h]
  int v308; // [rsp+78h] [rbp-238h]
  int v309; // [rsp+78h] [rbp-238h]
  int v310; // [rsp+78h] [rbp-238h]
  int v311; // [rsp+78h] [rbp-238h]
  __int64 v312; // [rsp+88h] [rbp-228h]
  __int64 v313; // [rsp+90h] [rbp-220h]
  int v314[2]; // [rsp+98h] [rbp-218h]
  __int64 v315; // [rsp+A0h] [rbp-210h]
  __int64 v316; // [rsp+A8h] [rbp-208h]
  __int64 v317; // [rsp+B0h] [rbp-200h]
  int v318; // [rsp+B0h] [rbp-200h]
  __int64 v319; // [rsp+B0h] [rbp-200h]
  __int64 v320; // [rsp+B0h] [rbp-200h]
  __int64 v321; // [rsp+B0h] [rbp-200h]
  __int64 v322; // [rsp+B8h] [rbp-1F8h]
  __int64 v323; // [rsp+C0h] [rbp-1F0h]
  __int64 v324; // [rsp+C8h] [rbp-1E8h]
  __int64 v325; // [rsp+D0h] [rbp-1E0h]
  __int64 v326; // [rsp+D8h] [rbp-1D8h]
  __int64 v327; // [rsp+E0h] [rbp-1D0h]
  __int64 v328; // [rsp+E8h] [rbp-1C8h]
  __int64 v329; // [rsp+F0h] [rbp-1C0h]
  __int64 v330; // [rsp+F8h] [rbp-1B8h]
  __int64 v331; // [rsp+100h] [rbp-1B0h]
  __int64 v332; // [rsp+108h] [rbp-1A8h]
  __int64 v333; // [rsp+110h] [rbp-1A0h]
  __int64 v334; // [rsp+118h] [rbp-198h]
  int v335[2]; // [rsp+120h] [rbp-190h]
  int v336[2]; // [rsp+130h] [rbp-180h]
  __int64 v337; // [rsp+138h] [rbp-178h]
  __int64 v338; // [rsp+148h] [rbp-168h]
  __m128i v339; // [rsp+150h] [rbp-160h] BYREF
  __int64 v340; // [rsp+160h] [rbp-150h] BYREF
  __int64 v341; // [rsp+168h] [rbp-148h] BYREF
  int v342[2]; // [rsp+170h] [rbp-140h] BYREF
  int v343[2]; // [rsp+178h] [rbp-138h] BYREF
  __m128i v344; // [rsp+180h] [rbp-130h] BYREF
  int v345[2]; // [rsp+190h] [rbp-120h] BYREF
  __int64 v346; // [rsp+198h] [rbp-118h]
  int v347[2]; // [rsp+1A0h] [rbp-110h] BYREF
  __int64 v348; // [rsp+1A8h] [rbp-108h]
  int v349[2]; // [rsp+1B0h] [rbp-100h] BYREF
  __int64 v350; // [rsp+1B8h] [rbp-F8h]
  int v351[4]; // [rsp+1C0h] [rbp-F0h] BYREF
  int v352[2]; // [rsp+1D0h] [rbp-E0h] BYREF
  __int64 v353; // [rsp+1D8h] [rbp-D8h]
  int v354[2]; // [rsp+1E0h] [rbp-D0h] BYREF
  __int64 v355; // [rsp+1E8h] [rbp-C8h]
  int v356[2]; // [rsp+1F0h] [rbp-C0h] BYREF
  __int64 v357; // [rsp+1F8h] [rbp-B8h]
  __m128i v358; // [rsp+200h] [rbp-B0h] BYREF
  __int64 v359; // [rsp+210h] [rbp-A0h]
  char v360[8]; // [rsp+220h] [rbp-90h] BYREF
  char v361[8]; // [rsp+228h] [rbp-88h] BYREF
  char v362[16]; // [rsp+230h] [rbp-80h] BYREF
  __int64 v363; // [rsp+240h] [rbp-70h]
  __int64 v364; // [rsp+248h] [rbp-68h]
  __int64 v365; // [rsp+250h] [rbp-60h]
  __int64 v366; // [rsp+258h] [rbp-58h]
  __int64 v367[10]; // [rsp+260h] [rbp-50h] BYREF

  v22 = *(_QWORD *)(a1 + 96);
  if ( !v22 || (result = *(unsigned int *)(v22 - 4), !(_DWORD)result) )
  {
    v24 = *(_QWORD *)(a1 + 16);
    v307 = v24;
    sub_180C5A0(v367, "A");
    v25 = sub_15D4E60(v24, v367, 0, 0);
    v331 = v25;
    v339 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v25, (__m128i)(unsigned __int64)v25);
    if ( v25 )
      ++*(_DWORD *)(v25 + 8);
    v306 = *(_QWORD *)(a1 + 16);
    v26 = *(_QWORD *)(v306 + 840);
    sub_180C5A0(v367, "?R");
    v344 = _mm_load_si128(&v339);
    v27 = sub_15E3510(v306, v367, 2, &v344, v26, 0);
    *(_QWORD *)v336 = v27;
    if ( v27 )
      ++*(_DWORD *)(v27 + 8);
    v305 = *(_QWORD *)(a1 + 16);
    v28 = sub_15DB5C0(v305, 0, v331);
    v334 = v28;
    if ( v28 )
      ++*(_DWORD *)(v28 + 8);
    v304 = *(_QWORD *)(a1 + 16);
    v29 = sub_15DB5C0(v304, 1, v331);
    v333 = v29;
    if ( v29 )
      ++*(_DWORD *)(v29 + 8);
    v303 = *(_QWORD *)(a1 + 16);
    v30 = sub_15DB5C0(v303, 2, v331);
    v330 = v30;
    if ( v30 )
      ++*(_DWORD *)(v30 + 8);
    v33 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)v345 = v334;
    *(_QWORD *)v335 = v33;
    v346 = v333;
    v34 = sub_15DC610(v33, v336[0], 2, (int)v345, v31, v32, v228, v236, v244, v252, v260, v268, v275, v282, v289, v296);
    v337 = v34;
    if ( v34 )
      ++*(_DWORD *)(v34 + 8);
    v37 = *(void **)(a1 + 16);
    *(_QWORD *)v347 = v333;
    v348 = v330;
    v38 = sub_15DC610(
            (int)v37,
            v336[0],
            2,
            (int)v347,
            v35,
            v36,
            v229,
            v237,
            v245,
            v253,
            v261,
            v269,
            v276,
            v283,
            v290,
            v37);
    v332 = v38;
    if ( v38 )
      ++*(_DWORD *)(v38 + 8);
    v41 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)v349 = v334;
    v350 = v330;
    v42 = sub_15DC610(v41, v336[0], 2, (int)v349, v39, v40, v230, v238, v246, v254, v262, v270, v277, v284, v41, v297);
    v327 = v42;
    v45 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v334, (__m128i)(unsigned __int64)v334);
    if ( v42 )
      ++*(_DWORD *)(v42 + 8);
    v46 = *(_QWORD *)(a1 + 16);
    *(__m128i *)v351 = v45;
    v47 = sub_15DC610(v46, v336[0], 2, (int)v351, v43, v44, v231, v239, v247, v255, v263, v271, v278, v46, v291, v298);
    v325 = v47;
    if ( v47 )
      ++*(_DWORD *)(v47 + 8);
    v50 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)v352 = v333;
    *(_QWORD *)v314 = v50;
    v353 = v334;
    v51 = sub_15DC610(v50, v336[0], 2, (int)v352, v48, v49, v232, v240, v248, v256, v264, v272, v279, v285, v292, v299);
    v328 = v51;
    if ( v51 )
      ++*(_DWORD *)(v51 + 8);
    v54 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)v354 = v330;
    v355 = v333;
    v55 = sub_15DC610(v54, v336[0], 2, (int)v354, v52, v53, v233, v241, v249, v257, v265, v273, v54, v286, v293, v300);
    v329 = v55;
    if ( v55 )
      ++*(_DWORD *)(v55 + 8);
    v58 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)v356 = v330;
    v357 = v334;
    v59 = sub_15DC610(v58, v336[0], 2, (int)v356, v56, v57, v234, v242, v250, v258, v266, v58, v280, v287, v294, v301);
    v322 = v59;
    if ( v59 )
      ++*(_DWORD *)(v59 + 8);
    v267 = *(_QWORD *)(a1 + 16);
    v60 = sub_15E1A70(v267);
    v323 = v60;
    if ( v60 )
      ++*(_DWORD *)(v60 + 8);
    v259 = *(_QWORD *)(a1 + 16);
    v61 = sub_15E1A70(v259);
    v324 = v61;
    if ( v61 )
      ++*(_DWORD *)(v61 + 8);
    v251 = *(_QWORD *)(a1 + 16);
    v62 = sub_15E1A70(v251);
    v312 = v62;
    if ( v62 )
      ++*(_DWORD *)(v62 + 8);
    v243 = *(_QWORD *)(a1 + 16);
    v63 = sub_15E1A70(v243);
    v313 = v63;
    if ( v63 )
      ++*(_DWORD *)(v63 + 8);
    v64 = _mm_load_si128(&v339);
    v359 = v331;
    v339.m128i_i64[0] = (__int64)v360;
    v358 = v64;
    sub_180C5A0(v360, "x");
    sub_180C5A0(v361, "y");
    sub_180C5A0(v362, "z");
    v65 = *(_QWORD *)(a1 + 16);
    v326 = v65;
    *(_QWORD *)v342 = v337;
    v66 = sub_15E1EC0(v65, 1, (int)v342);
    v315 = v66;
    if ( v66 )
      ++*(_DWORD *)(v66 + 8);
    v67 = *(_QWORD *)(a1 + 16);
    v235 = v67;
    *(_QWORD *)v343 = v325;
    v68 = sub_15E1EC0(v67, 1, (int)v343);
    v316 = v68;
    if ( v68 )
      ++*(_DWORD *)(v68 + 8);
    v340 = v315;
    v341 = v68;
    v69 = *(_QWORD *)(a1 + 16);
    sub_15E1A70(v69);
    sub_15E1A70(*(_QWORD *)(a1 + 16));
    v70 = sub_15E1BF0(v69);
    v317 = v70;
    if ( v70 )
      ++*(_DWORD *)(v70 + 8);
    v71 = sub_15DB6A0(
            *(_QWORD *)(a1 + 16),
            0,
            3,
            &v358,
            v339.m128i_i64[0],
            v70,
            0,
            &qword_18D6CD0,
            &qword_18D6CD0,
            1,
            &v340,
            0,
            0);
    v72 = v71;
    if ( v71 )
      ++*(_DWORD *)(v71 + 8);
    v338 = a1 + 32;
    sub_DBBCD0(a1 + 32, v71);
    v73 = *(_DWORD **)(a1 + 96);
    if ( v73 )
    {
      v74 = *(v73 - 1);
      if ( v74 == *(v73 - 2) )
      {
        v178 = (3 * v74 + 1) >> 1;
        v179 = 4 * v178 + 8;
        if ( 4 * v74 + 8 >= (unsigned int)v179 || v74 >= v178 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_1643DA(v367, "Overflow encountered when expanding vector", v20);
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v367);
          sub_233E40((__int64)v367);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v180 = (unsigned int *)sub_186B300(v73 - 2, v179);
        v181 = v180[1];
        v73 = v180 + 2;
        *v180 = v178;
        *(_QWORD *)(a1 + 96) = v180 + 2;
        LODWORD(v180) = v181;
        v77 = &v73[v181];
        v76 = (_DWORD)v180 + 1;
      }
      else
      {
        v75 = v74;
        v76 = v74 + 1;
        v77 = &v73[v75];
      }
    }
    else
    {
      v227 = (_QWORD *)sub_186B270(0x10u);
      v73 = v227 + 1;
      *v227 = 2;
      v76 = 1;
      *(_QWORD *)(a1 + 96) = v73;
      v77 = v73;
    }
    *v77 = 1;
    *(v73 - 1) = v76;
    v78 = *(_QWORD *)(a1 + 16);
    v79 = sub_15E1B70(v335[0]);
    v80 = v79;
    if ( v79 )
      ++*(_DWORD *)(v79 + 8);
    v81 = sub_15E1A70(v335[0]);
    v82 = v81;
    if ( v81 )
      ++*(_DWORD *)(v81 + 8);
    v83 = sub_15E1B70(v78);
    v84 = v83;
    if ( v83 )
      ++*(_DWORD *)(v83 + 8);
    if ( v317 )
    {
      v308 = *(_DWORD *)(v317 + 8);
      *(_DWORD *)(v317 + 8) = v308 - 1;
      if ( v308 == 1 )
        sub_15D7BC0(v326, v317);
    }
    if ( v82 )
    {
      v85 = (*(_DWORD *)(v82 + 8))-- == 1;
      if ( v85 )
        sub_15D7BC0(*(_QWORD *)v335, v82);
    }
    if ( v80 )
    {
      v85 = (*(_DWORD *)(v80 + 8))-- == 1;
      if ( v85 )
        sub_15D7BC0(*(_QWORD *)v335, v80);
    }
    v86 = sub_15DB6A0(
            *(_QWORD *)(a1 + 16),
            0,
            3,
            &v358,
            v339.m128i_i64[0],
            v84,
            0,
            &qword_18D6CD0,
            &qword_18D6CD0,
            1,
            &v340,
            0,
            0);
    v87 = v86;
    if ( v86 )
      ++*(_DWORD *)(v86 + 8);
    if ( v72 )
    {
      v85 = (*(_DWORD *)(v72 + 8))-- == 1;
      if ( v85 )
        sub_15D7BC0(v326, v72);
    }
    sub_DBBCD0(v338, v87);
    v88 = *(_DWORD **)(a1 + 96);
    if ( v88 )
    {
      v89 = *(v88 - 1);
      if ( v89 == *(v88 - 2) )
      {
        v214 = (3 * v89 + 1) >> 1;
        v215 = 4 * v214 + 8;
        if ( 4 * v89 + 8 >= (unsigned int)v215 || v89 >= v214 )
        {
          v17 = (char **)__cxa_allocate_exception(0x28u);
          sub_1643DA(v367, "Overflow encountered when expanding vector", v18);
          *v17 = (char *)off_1C63128;
          sub_2333C0(v17 + 1, v367);
          sub_233E40((__int64)v367);
          __cxa_throw(v17, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v216 = (unsigned int *)sub_186B300(v88 - 2, v215);
        v217 = v216[1];
        v88 = v216 + 2;
        *v216 = v214;
        *(_QWORD *)(a1 + 96) = v216 + 2;
        LODWORD(v216) = v217;
        v92 = &v88[v217];
        v91 = (_DWORD)v216 + 1;
      }
      else
      {
        v90 = v89;
        v91 = v89 + 1;
        v92 = &v88[v90];
      }
    }
    else
    {
      v226 = (_QWORD *)sub_186B270(0x10u);
      v88 = v226 + 1;
      *v226 = 2;
      v91 = 1;
      *(_QWORD *)(a1 + 96) = v88;
      v92 = v88;
    }
    *v92 = 1;
    *(v88 - 1) = v91;
    if ( v325 != v84 )
    {
      if ( v84 )
      {
        v85 = (*(_DWORD *)(v84 + 8))-- == 1;
        if ( v85 )
          sub_15D7BC0(v326, v84);
      }
      if ( v325 )
        ++*(_DWORD *)(v325 + 8);
      v84 = v325;
    }
    v93 = sub_15DB6A0(
            *(_QWORD *)(a1 + 16),
            0,
            1,
            &v358,
            v339.m128i_i64[0],
            v84,
            0,
            &qword_18D6CD0,
            &qword_18D6CD0,
            1,
            &v341,
            0,
            0);
    v94 = v93;
    if ( v93 )
      ++*(_DWORD *)(v93 + 8);
    if ( v87 )
    {
      v318 = *(_DWORD *)(v87 + 8);
      *(_DWORD *)(v87 + 8) = v318 - 1;
      if ( v318 == 1 )
        sub_15D7BC0(v326, v87);
    }
    sub_DBBCD0(v338, v94);
    v95 = *(_DWORD **)(a1 + 96);
    if ( v95 )
    {
      v96 = *(v95 - 1);
      if ( v96 == *(v95 - 2) )
      {
        v210 = (3 * v96 + 1) >> 1;
        v211 = 4 * v210 + 8;
        if ( 4 * v96 + 8 >= (unsigned int)v211 || v96 >= v210 )
        {
          v15 = (char **)__cxa_allocate_exception(0x28u);
          sub_1643DA(v367, "Overflow encountered when expanding vector", v16);
          *v15 = (char *)off_1C63128;
          sub_2333C0(v15 + 1, v367);
          sub_233E40((__int64)v367);
          __cxa_throw(v15, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v212 = (unsigned int *)sub_186B300(v95 - 2, v211);
        v213 = v212[1];
        v95 = v212 + 2;
        *v212 = v210;
        *(_QWORD *)(a1 + 96) = v212 + 2;
        LODWORD(v212) = v213;
        v99 = &v95[v213];
        v98 = (_DWORD)v212 + 1;
      }
      else
      {
        v97 = v96;
        v98 = v96 + 1;
        v99 = &v95[v97];
      }
    }
    else
    {
      v219 = (_QWORD *)sub_186B270(0x10u);
      v95 = v219 + 1;
      *v219 = 2;
      v98 = 1;
      *(_QWORD *)(a1 + 96) = v95;
      v99 = v95;
    }
    *v99 = 2;
    v100 = *(_QWORD *)(a1 + 16);
    *(v95 - 1) = v98;
    sub_15E1B70(v100);
    v101 = sub_15E1BF0(v100);
    v319 = v101;
    if ( v101 )
      ++*(_DWORD *)(v101 + 8);
    if ( v84 )
    {
      v85 = (*(_DWORD *)(v84 + 8))-- == 1;
      if ( v85 )
        sub_15D7BC0(v326, v84);
    }
    v102 = sub_15DB6A0(
             *(_QWORD *)(a1 + 16),
             0,
             2,
             &v358,
             v339.m128i_i64[0],
             v319,
             0,
             &qword_18D6CD0,
             &qword_18D6CD0,
             1,
             &v340,
             0,
             0);
    v103 = v102;
    if ( v102 )
      ++*(_DWORD *)(v102 + 8);
    if ( v94 )
    {
      v85 = (*(_DWORD *)(v94 + 8))-- == 1;
      if ( v85 )
        sub_15D7BC0(v326, v94);
    }
    sub_DBBCD0(v338, v103);
    v104 = *(_DWORD **)(a1 + 96);
    if ( v104 )
    {
      v105 = *(v104 - 1);
      if ( v105 == *(v104 - 2) )
      {
        v206 = (3 * v105 + 1) >> 1;
        v207 = 4 * v206 + 8;
        if ( 4 * v105 + 8 >= (unsigned int)v207 || v105 >= v206 )
        {
          v13 = (char **)__cxa_allocate_exception(0x28u);
          sub_1643DA(v367, "Overflow encountered when expanding vector", v14);
          *v13 = (char *)off_1C63128;
          sub_2333C0(v13 + 1, v367);
          sub_233E40((__int64)v367);
          __cxa_throw(v13, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v208 = (unsigned int *)sub_186B300(v104 - 2, v207);
        v209 = v208[1];
        v104 = v208 + 2;
        *v208 = v206;
        *(_QWORD *)(a1 + 96) = v208 + 2;
        LODWORD(v208) = v209;
        v108 = &v104[v209];
        v107 = (_DWORD)v208 + 1;
      }
      else
      {
        v106 = v105;
        v107 = v105 + 1;
        v108 = &v104[v106];
      }
    }
    else
    {
      v218 = (_QWORD *)sub_186B270(0x10u);
      v104 = v218 + 1;
      *v218 = 2;
      v107 = 1;
      *(_QWORD *)(a1 + 96) = v104;
      v108 = v104;
    }
    *v108 = 4;
    v109 = *(_QWORD *)(a1 + 16);
    *(v104 - 1) = v107;
    sub_15E1B70(v109);
    v110 = sub_15E1B70(v335[0]);
    v111 = v110;
    if ( v110 )
      ++*(_DWORD *)(v110 + 8);
    v112 = sub_15E1A70(v335[0]);
    v113 = v112;
    if ( v112 )
      ++*(_DWORD *)(v112 + 8);
    v114 = sub_15E1B70(v109);
    v115 = v114;
    if ( v114 )
      ++*(_DWORD *)(v114 + 8);
    if ( v319 )
    {
      v309 = *(_DWORD *)(v319 + 8);
      *(_DWORD *)(v319 + 8) = v309 - 1;
      if ( v309 == 1 )
        sub_15D7BC0(v326, v319);
    }
    if ( v113 )
    {
      v85 = (*(_DWORD *)(v113 + 8))-- == 1;
      if ( v85 )
        sub_15D7BC0(*(_QWORD *)v335, v113);
    }
    if ( v111 )
    {
      v85 = (*(_DWORD *)(v111 + 8))-- == 1;
      if ( v85 )
        sub_15D7BC0(*(_QWORD *)v335, v111);
    }
    v116 = sub_15DB6A0(
             *(_QWORD *)(a1 + 16),
             0,
             2,
             &v358,
             v339.m128i_i64[0],
             v115,
             0,
             &qword_18D6CD0,
             &qword_18D6CD0,
             1,
             &v340,
             0,
             0);
    v117 = v116;
    if ( v116 )
      ++*(_DWORD *)(v116 + 8);
    if ( v103 )
    {
      v85 = (*(_DWORD *)(v103 + 8))-- == 1;
      if ( v85 )
        sub_15D7BC0(v326, v103);
    }
    sub_DBBCD0(v338, v117);
    v118 = *(_DWORD **)(a1 + 96);
    if ( v118 )
    {
      v119 = *(v118 - 1);
      if ( v119 == *(v118 - 2) )
      {
        v202 = (3 * v119 + 1) >> 1;
        v203 = 4 * v202 + 8;
        if ( 4 * v119 + 8 >= (unsigned int)v203 || v119 >= v202 )
        {
          v11 = (char **)__cxa_allocate_exception(0x28u);
          sub_1643DA(v367, "Overflow encountered when expanding vector", v12);
          *v11 = (char *)off_1C63128;
          sub_2333C0(v11 + 1, v367);
          sub_233E40((__int64)v367);
          __cxa_throw(v11, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v204 = (unsigned int *)sub_186B300(v118 - 2, v203);
        v205 = v204[1];
        v118 = v204 + 2;
        *v204 = v202;
        *(_QWORD *)(a1 + 96) = v204 + 2;
        LODWORD(v204) = v205;
        v122 = &v118[v205];
        v121 = (_DWORD)v204 + 1;
      }
      else
      {
        v120 = v119;
        v121 = v119 + 1;
        v122 = &v118[v120];
      }
    }
    else
    {
      v225 = (_QWORD *)sub_186B270(0x10u);
      v118 = v225 + 1;
      *v225 = 2;
      v121 = 1;
      *(_QWORD *)(a1 + 96) = v118;
      v122 = v118;
    }
    *v122 = 4;
    v123 = *(_QWORD *)(a1 + 16);
    *(v118 - 1) = v121;
    v363 = v324;
    v364 = v312;
    v365 = v332;
    v366 = v329;
    v124 = sub_15E1AF0(v123);
    v320 = v124;
    if ( v124 )
      ++*(_DWORD *)(v124 + 8);
    if ( v115 )
    {
      v85 = (*(_DWORD *)(v115 + 8))-- == 1;
      if ( v85 )
        sub_15D7BC0(v326, v115);
    }
    v125 = sub_15DB6A0(
             *(_QWORD *)(a1 + 16),
             0,
             3,
             &v358,
             v339.m128i_i64[0],
             v320,
             0,
             &qword_18D6CD0,
             &qword_18D6CD0,
             1,
             &v340,
             0,
             0);
    v126 = v125;
    if ( v125 )
      ++*(_DWORD *)(v125 + 8);
    if ( v117 )
    {
      v85 = (*(_DWORD *)(v117 + 8))-- == 1;
      if ( v85 )
        sub_15D7BC0(v326, v117);
    }
    sub_DBBCD0(v338, v126);
    v127 = *(_DWORD **)(a1 + 96);
    if ( v127 )
    {
      v128 = *(v127 - 1);
      if ( v128 == *(v127 - 2) )
      {
        v198 = (3 * v128 + 1) >> 1;
        v199 = 4 * v198 + 8;
        if ( 4 * v128 + 8 >= (unsigned int)v199 || v128 >= v198 )
        {
          v9 = (char **)__cxa_allocate_exception(0x28u);
          sub_1643DA(v367, "Overflow encountered when expanding vector", v10);
          *v9 = (char *)off_1C63128;
          sub_2333C0(v9 + 1, v367);
          sub_233E40((__int64)v367);
          __cxa_throw(v9, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v200 = (unsigned int *)sub_186B300(v127 - 2, v199);
        v201 = v200[1];
        v127 = v200 + 2;
        *v200 = v198;
        *(_QWORD *)(a1 + 96) = v200 + 2;
        LODWORD(v200) = v201;
        v131 = &v127[v201];
        v130 = (_DWORD)v200 + 1;
      }
      else
      {
        v129 = v128;
        v130 = v128 + 1;
        v131 = &v127[v129];
      }
    }
    else
    {
      v224 = (_QWORD *)sub_186B270(0x10u);
      v127 = v224 + 1;
      *v224 = 2;
      v130 = 1;
      *(_QWORD *)(a1 + 96) = v127;
      v131 = v127;
    }
    *v131 = 8;
    *(v127 - 1) = v130;
    v132 = *(_QWORD *)(a1 + 16);
    v133 = sub_15E1B70(v314[0]);
    v134 = v133;
    if ( v133 )
      ++*(_DWORD *)(v133 + 8);
    v135 = sub_15E1A70(v314[0]);
    v136 = v135;
    if ( v135 )
      ++*(_DWORD *)(v135 + 8);
    v137 = sub_15E1BF0(v132);
    v138 = v137;
    if ( v137 )
      ++*(_DWORD *)(v137 + 8);
    if ( v320 )
    {
      v310 = *(_DWORD *)(v320 + 8);
      *(_DWORD *)(v320 + 8) = v310 - 1;
      if ( v310 == 1 )
        sub_15D7BC0(v326, v320);
    }
    if ( v136 )
    {
      v85 = (*(_DWORD *)(v136 + 8))-- == 1;
      if ( v85 )
        sub_15D7BC0(*(_QWORD *)v314, v136);
    }
    if ( v134 )
    {
      v85 = (*(_DWORD *)(v134 + 8))-- == 1;
      if ( v85 )
        sub_15D7BC0(*(_QWORD *)v314, v134);
    }
    v139 = sub_15DB6A0(
             *(_QWORD *)(a1 + 16),
             0,
             3,
             &v358,
             v339.m128i_i64[0],
             v138,
             0,
             &qword_18D6CD0,
             &qword_18D6CD0,
             1,
             &v340,
             0,
             0);
    v140 = v139;
    if ( v139 )
      ++*(_DWORD *)(v139 + 8);
    if ( v126 )
    {
      v85 = (*(_DWORD *)(v126 + 8))-- == 1;
      if ( v85 )
        sub_15D7BC0(v326, v126);
    }
    sub_DBBCD0(v338, v140);
    v141 = *(_DWORD **)(a1 + 96);
    if ( v141 )
    {
      v142 = *(v141 - 1);
      if ( v142 == *(v141 - 2) )
      {
        v194 = (3 * v142 + 1) >> 1;
        v195 = 4 * v194 + 8;
        if ( 4 * v142 + 8 >= (unsigned int)v195 || v142 >= v194 )
        {
          v7 = (char **)__cxa_allocate_exception(0x28u);
          sub_1643DA(v367, "Overflow encountered when expanding vector", v8);
          *v7 = (char *)off_1C63128;
          sub_2333C0(v7 + 1, v367);
          sub_233E40((__int64)v367);
          __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v196 = (unsigned int *)sub_186B300(v141 - 2, v195);
        v197 = v196[1];
        v141 = v196 + 2;
        *v196 = v194;
        *(_QWORD *)(a1 + 96) = v196 + 2;
        LODWORD(v196) = v197;
        v145 = &v141[v197];
        v144 = (_DWORD)v196 + 1;
      }
      else
      {
        v143 = v142;
        v144 = v142 + 1;
        v145 = &v141[v143];
      }
    }
    else
    {
      v223 = (_QWORD *)sub_186B270(0x10u);
      v141 = v223 + 1;
      *v223 = 2;
      v144 = 1;
      *(_QWORD *)(a1 + 96) = v141;
      v145 = v141;
    }
    *v145 = 8;
    v146 = *(_QWORD *)(a1 + 16);
    *(v141 - 1) = v144;
    v367[0] = v323;
    v367[1] = v313;
    v367[2] = v332;
    v367[3] = v329;
    v147 = sub_15E1AF0(v146);
    v321 = v147;
    if ( v147 )
      ++*(_DWORD *)(v147 + 8);
    if ( v138 )
    {
      v85 = (*(_DWORD *)(v138 + 8))-- == 1;
      if ( v85 )
        sub_15D7BC0(v326, v138);
    }
    v148 = sub_15DB6A0(
             *(_QWORD *)(a1 + 16),
             0,
             3,
             &v358,
             v339.m128i_i64[0],
             v321,
             0,
             &qword_18D6CD0,
             &qword_18D6CD0,
             1,
             &v340,
             0,
             0);
    v149 = v148;
    if ( v148 )
      ++*(_DWORD *)(v148 + 8);
    if ( v140 )
    {
      v85 = (*(_DWORD *)(v140 + 8))-- == 1;
      if ( v85 )
        sub_15D7BC0(v326, v140);
    }
    sub_DBBCD0(v338, v149);
    v150 = *(_DWORD **)(a1 + 96);
    if ( v150 )
    {
      v151 = *(v150 - 1);
      if ( v151 == *(v150 - 2) )
      {
        v190 = (3 * v151 + 1) >> 1;
        v191 = 4 * v190 + 8;
        if ( 4 * v151 + 8 >= (unsigned int)v191 || v151 >= v190 )
        {
          v5 = (char **)__cxa_allocate_exception(0x28u);
          sub_1643DA(v367, "Overflow encountered when expanding vector", v6);
          *v5 = (char *)off_1C63128;
          sub_2333C0(v5 + 1, v367);
          sub_233E40((__int64)v367);
          __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v192 = (unsigned int *)sub_186B300(v150 - 2, v191);
        v193 = v192[1];
        v150 = v192 + 2;
        *v192 = v190;
        *(_QWORD *)(a1 + 96) = v192 + 2;
        LODWORD(v192) = v193;
        v154 = &v150[v193];
        v153 = (_DWORD)v192 + 1;
      }
      else
      {
        v152 = v151;
        v153 = v151 + 1;
        v154 = &v150[v152];
      }
    }
    else
    {
      v222 = (_QWORD *)sub_186B270(0x10u);
      v150 = v222 + 1;
      *v222 = 2;
      v153 = 1;
      *(_QWORD *)(a1 + 96) = v150;
      v154 = v150;
    }
    *v154 = 16;
    *(v150 - 1) = v153;
    v155 = *(_QWORD *)(a1 + 16);
    v156 = sub_15E1B70(v335[0]);
    v157 = v156;
    if ( v156 )
      ++*(_DWORD *)(v156 + 8);
    v158 = sub_15E1A70(v335[0]);
    v159 = v158;
    if ( v158 )
      ++*(_DWORD *)(v158 + 8);
    v160 = sub_15E1BF0(v155);
    v161 = v160;
    if ( v160 )
      ++*(_DWORD *)(v160 + 8);
    if ( v321 )
    {
      v311 = *(_DWORD *)(v321 + 8);
      *(_DWORD *)(v321 + 8) = v311 - 1;
      if ( v311 == 1 )
        sub_15D7BC0(v326, v321);
    }
    if ( v159 )
    {
      v85 = (*(_DWORD *)(v159 + 8))-- == 1;
      if ( v85 )
        sub_15D7BC0(*(_QWORD *)v335, v159);
    }
    if ( v157 )
    {
      v85 = (*(_DWORD *)(v157 + 8))-- == 1;
      if ( v85 )
        sub_15D7BC0(*(_QWORD *)v335, v157);
    }
    v162 = sub_15DB6A0(
             *(_QWORD *)(a1 + 16),
             0,
             3,
             &v358,
             v339.m128i_i64[0],
             v161,
             0,
             &qword_18D6CD0,
             &qword_18D6CD0,
             1,
             &v340,
             0,
             0);
    v163 = v162;
    if ( v162 )
      ++*(_DWORD *)(v162 + 8);
    if ( v149 )
    {
      v85 = (*(_DWORD *)(v149 + 8))-- == 1;
      if ( v85 )
        sub_15D7BC0(v326, v149);
    }
    sub_DBBCD0(v338, v163);
    v164 = *(_DWORD **)(a1 + 96);
    if ( v164 )
    {
      v165 = *(v164 - 1);
      if ( v165 == *(v164 - 2) )
      {
        v186 = (3 * v165 + 1) >> 1;
        v187 = 4 * v186 + 8;
        if ( 4 * v165 + 8 >= (unsigned int)v187 || v165 >= v186 )
        {
          v3 = (char **)__cxa_allocate_exception(0x28u);
          sub_1643DA(v367, "Overflow encountered when expanding vector", v4);
          *v3 = (char *)off_1C63128;
          sub_2333C0(v3 + 1, v367);
          sub_233E40((__int64)v367);
          __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v188 = (unsigned int *)sub_186B300(v164 - 2, v187);
        v189 = v188[1];
        v164 = v188 + 2;
        *v188 = v186;
        *(_QWORD *)(a1 + 96) = v188 + 2;
        LODWORD(v188) = v189;
        v168 = &v164[v189];
        v167 = (_DWORD)v188 + 1;
      }
      else
      {
        v166 = v165;
        v167 = v165 + 1;
        v168 = &v164[v166];
      }
    }
    else
    {
      v220 = (_QWORD *)sub_186B270(0x10u);
      v164 = v220 + 1;
      *v220 = 2;
      v167 = 1;
      *(_QWORD *)(a1 + 96) = v164;
      v168 = v164;
    }
    *v168 = 16;
    v169 = *(_QWORD *)(a1 + 16);
    *(v164 - 1) = v167;
    v170 = sub_15E1B70(v169);
    v171 = v170;
    if ( v170 )
      ++*(_DWORD *)(v170 + 8);
    if ( v161 )
    {
      v85 = (*(_DWORD *)(v161 + 8))-- == 1;
      if ( v85 )
        sub_15D7BC0(v326, v161);
    }
    v172 = sub_15DB6A0(
             *(_QWORD *)(a1 + 16),
             0,
             2,
             &v358,
             v339.m128i_i64[0],
             v171,
             0,
             &qword_18D6CD0,
             &qword_18D6CD0,
             1,
             &v340,
             0,
             0);
    v173 = v172;
    if ( v172 )
      ++*(_DWORD *)(v172 + 8);
    if ( v163 )
    {
      v85 = (*(_DWORD *)(v163 + 8))-- == 1;
      if ( v85 )
        sub_15D7BC0(v326, v163);
    }
    sub_DBBCD0(v338, v173);
    v174 = *(_DWORD **)(a1 + 96);
    if ( v174 )
    {
      v175 = *(v174 - 1);
      if ( v175 == *(v174 - 2) )
      {
        v182 = (3 * v175 + 1) >> 1;
        v183 = 4 * v182 + 8;
        if ( 4 * v175 + 8 >= (unsigned int)v183 || v175 >= v182 )
        {
          v1 = (char **)__cxa_allocate_exception(0x28u);
          sub_1643DA(v367, "Overflow encountered when expanding vector", v2);
          *v1 = (char *)off_1C63128;
          sub_2333C0(v1 + 1, v367);
          sub_233E40((__int64)v367);
          __cxa_throw(v1, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v184 = (unsigned int *)sub_186B300(v174 - 2, v183);
        v185 = v184[1];
        v174 = v184 + 2;
        *v184 = v182;
        *(_QWORD *)(a1 + 96) = v184 + 2;
        LODWORD(v184) = v185;
        v177 = &v174[v185];
        result = (unsigned int)((_DWORD)v184 + 1);
      }
      else
      {
        v176 = v175;
        result = v175 + 1;
        v177 = &v174[v176];
      }
    }
    else
    {
      v221 = (_QWORD *)sub_186B270(0x10u);
      v174 = v221 + 1;
      *v221 = 2;
      result = 1;
      *(_QWORD *)(a1 + 96) = v174;
      v177 = v174;
    }
    *v177 = 32;
    *(v174 - 1) = result;
    if ( v316 )
    {
      v339.m128i_i32[0] = *(_DWORD *)(v316 + 8);
      v85 = v339.m128i_i32[0] == 1;
      result = (unsigned int)(v339.m128i_i32[0] - 1);
      *(_DWORD *)(v316 + 8) = result;
      if ( v85 )
        result = sub_15D7BC0(v235, v316);
    }
    if ( v315 )
    {
      v339.m128i_i32[0] = *(_DWORD *)(v315 + 8);
      v85 = v339.m128i_i32[0] == 1;
      result = (unsigned int)(v339.m128i_i32[0] - 1);
      *(_DWORD *)(v315 + 8) = result;
      if ( v85 )
        result = sub_15D7BC0(v326, v315);
    }
    if ( v173 )
    {
      v85 = (*(_DWORD *)(v173 + 8))-- == 1;
      if ( v85 )
        result = sub_15D7BC0(v326, v173);
    }
    if ( v171 )
    {
      v339.m128i_i32[0] = *(_DWORD *)(v171 + 8);
      v85 = v339.m128i_i32[0] == 1;
      result = (unsigned int)(v339.m128i_i32[0] - 1);
      *(_DWORD *)(v171 + 8) = result;
      if ( v85 )
        result = sub_15D7BC0(v326, v171);
    }
    if ( v313 )
    {
      v339.m128i_i32[0] = *(_DWORD *)(v313 + 8);
      v85 = v339.m128i_i32[0] == 1;
      result = (unsigned int)(v339.m128i_i32[0] - 1);
      *(_DWORD *)(v313 + 8) = result;
      if ( v85 )
        result = sub_15D7BC0(v243, v313);
    }
    if ( v312 )
    {
      v339.m128i_i32[0] = *(_DWORD *)(v312 + 8);
      v85 = v339.m128i_i32[0] == 1;
      result = (unsigned int)(v339.m128i_i32[0] - 1);
      *(_DWORD *)(v312 + 8) = result;
      if ( v85 )
        result = sub_15D7BC0(v251, v312);
    }
    if ( v324 )
    {
      v339.m128i_i32[0] = *(_DWORD *)(v324 + 8);
      v85 = v339.m128i_i32[0] == 1;
      result = (unsigned int)(v339.m128i_i32[0] - 1);
      *(_DWORD *)(v324 + 8) = result;
      if ( v85 )
        result = sub_15D7BC0(v259, v324);
    }
    if ( v323 )
    {
      v339.m128i_i32[0] = *(_DWORD *)(v323 + 8);
      v85 = v339.m128i_i32[0] == 1;
      result = (unsigned int)(v339.m128i_i32[0] - 1);
      *(_DWORD *)(v323 + 8) = result;
      if ( v85 )
        result = sub_15D7BC0(v267, v323);
    }
    if ( v322 )
    {
      v339.m128i_i32[0] = *(_DWORD *)(v322 + 8);
      v85 = v339.m128i_i32[0] == 1;
      result = (unsigned int)(v339.m128i_i32[0] - 1);
      *(_DWORD *)(v322 + 8) = result;
      if ( v85 )
        result = sub_15D7BC0(v274, v322);
    }
    if ( v329 )
    {
      v339.m128i_i32[0] = *(_DWORD *)(v329 + 8);
      v85 = v339.m128i_i32[0] == 1;
      result = (unsigned int)(v339.m128i_i32[0] - 1);
      *(_DWORD *)(v329 + 8) = result;
      if ( v85 )
        result = sub_15D7BC0(v281, v329);
    }
    if ( v328 )
    {
      v339.m128i_i32[0] = *(_DWORD *)(v328 + 8);
      v85 = v339.m128i_i32[0] == 1;
      result = (unsigned int)(v339.m128i_i32[0] - 1);
      *(_DWORD *)(v328 + 8) = result;
      if ( v85 )
        result = sub_15D7BC0(*(_QWORD *)v314, v328);
    }
    if ( v325 )
    {
      v339.m128i_i32[0] = *(_DWORD *)(v325 + 8);
      v85 = v339.m128i_i32[0] == 1;
      result = (unsigned int)(v339.m128i_i32[0] - 1);
      *(_DWORD *)(v325 + 8) = result;
      if ( v85 )
        result = sub_15D7BC0(v288, v325);
    }
    if ( v327 )
    {
      v339.m128i_i32[0] = *(_DWORD *)(v327 + 8);
      v85 = v339.m128i_i32[0] == 1;
      result = (unsigned int)(v339.m128i_i32[0] - 1);
      *(_DWORD *)(v327 + 8) = result;
      if ( v85 )
        result = sub_15D7BC0(v295, v327);
    }
    if ( v332 )
    {
      v339.m128i_i32[0] = *(_DWORD *)(v332 + 8);
      v85 = v339.m128i_i32[0] == 1;
      result = (unsigned int)(v339.m128i_i32[0] - 1);
      *(_DWORD *)(v332 + 8) = result;
      if ( v85 )
        result = sub_15D7BC0(v302, v332);
    }
    if ( v337 )
    {
      v339.m128i_i32[0] = *(_DWORD *)(v337 + 8);
      v85 = v339.m128i_i32[0] == 1;
      result = (unsigned int)(v339.m128i_i32[0] - 1);
      *(_DWORD *)(v337 + 8) = result;
      if ( v85 )
        result = sub_15D7BC0(*(_QWORD *)v335, v337);
    }
    if ( v330 )
    {
      v339.m128i_i32[0] = *(_DWORD *)(v330 + 8);
      v85 = v339.m128i_i32[0] == 1;
      result = (unsigned int)(v339.m128i_i32[0] - 1);
      *(_DWORD *)(v330 + 8) = result;
      if ( v85 )
        result = sub_15D7BC0(v303, v330);
    }
    if ( v333 )
    {
      v339.m128i_i32[0] = *(_DWORD *)(v333 + 8);
      v85 = v339.m128i_i32[0] == 1;
      result = (unsigned int)(v339.m128i_i32[0] - 1);
      *(_DWORD *)(v333 + 8) = result;
      if ( v85 )
        result = sub_15D7BC0(v304, v333);
    }
    if ( v334 )
    {
      v339.m128i_i32[0] = *(_DWORD *)(v334 + 8);
      v85 = v339.m128i_i32[0] == 1;
      result = (unsigned int)(v339.m128i_i32[0] - 1);
      *(_DWORD *)(v334 + 8) = result;
      if ( v85 )
        result = sub_15D7BC0(v305, v334);
    }
    if ( *(_QWORD *)v336 )
    {
      v339.m128i_i32[0] = *(_DWORD *)(*(_QWORD *)v336 + 8LL);
      v85 = v339.m128i_i32[0] == 1;
      result = (unsigned int)(v339.m128i_i32[0] - 1);
      *(_DWORD *)(*(_QWORD *)v336 + 8LL) = result;
      if ( v85 )
        result = sub_15D7BC0(v306, *(_QWORD *)v336);
    }
    if ( v331 )
    {
      v339.m128i_i32[0] = *(_DWORD *)(v331 + 8);
      v85 = v339.m128i_i32[0] == 1;
      result = (unsigned int)(v339.m128i_i32[0] - 1);
      *(_DWORD *)(v331 + 8) = result;
      if ( v85 )
        return sub_15D7BC0(v307, v331);
    }
  }
  return result;
}

