__int64 __fastcall sub_1B0B640(
        unsigned int a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 a4,
        _QWORD *a5,
        __int64 a6,
        double a7,
        __m128 a8,
        __int64 a9,
        __int64 a10)
{
  _QWORD *v11; // rbp
  bool v13; // cc
  unsigned int v14; // r14d
  unsigned int v15; // eax
  unsigned int v16; // r14d
  unsigned int v17; // r15d
  void **v18; // r13
  unsigned __int64 v19; // rax
  __int64 v21; // rdx
  unsigned __int64 *v22; // rsi
  __int64 v23; // rcx
  __int64 v24; // r8
  unsigned int v25; // r15d
  void *v26; // rdx
  unsigned int *v27; // rsi
  unsigned int *v28; // rcx
  unsigned int *i; // rdx
  unsigned int *v30; // rdi
  __int64 v31; // r10
  __m128 v32; // xmm0
  __m128 v33; // xmm0
  __m128 v34; // xmm0
  char v35; // al
  __int64 v36; // rax
  char v37; // r15
  __int64 v38; // rbx
  __int64 v39; // r12
  __int64 v40; // rax
  unsigned __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // r12
  __int64 v44; // rax
  unsigned __int64 v45; // rax
  __int64 *v46; // rax
  __int64 v47; // rsi
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // r8
  unsigned __int64 v51; // r12
  __int64 v52; // rdx
  unsigned __int64 v53; // r14
  unsigned __int64 v54; // r13
  __int64 v55; // r15
  char *v56; // rax
  unsigned __int64 v57; // r12
  _QWORD *v58; // rbx
  unsigned int v59; // eax
  unsigned __int64 v60; // rbx
  unsigned __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  _QWORD *v67; // rbx
  unsigned __int64 v68; // rbx
  unsigned __int64 *v69; // r12
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  unsigned int v73; // eax
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 v77; // rsi
  _QWORD *v78; // rbx
  size_t v79; // rax
  _QWORD *v80; // rbx
  __int64 v81; // rdx
  __int64 v82; // rcx
  unsigned int v83; // eax
  unsigned int v84; // ebx
  __int64 v85; // rdx
  __int64 v86; // rcx
  size_t v87; // rax
  __int64 v88; // rax
  size_t v89; // rax
  size_t v90; // rax
  __int64 v91; // rax
  __int64 v92; // rdx
  __int64 v93; // rax
  size_t v94; // rax
  unsigned __int64 *v95; // rax
  unsigned __int64 *v96; // rdx
  __int64 v97; // rax
  __int64 v98; // rdx
  __int64 v99; // rcx
  __int64 v100; // r8
  unsigned int v101; // eax
  __int64 v102; // rax
  __int64 v103; // rax
  __int64 v104; // rcx
  __int64 v105; // r8
  size_t v106; // rax
  __int64 v107; // r12
  __int64 v108; // rsi
  __int64 v109; // rdx
  _QWORD *v110; // r9
  unsigned __int64 v111; // rsi
  __int64 v112; // rcx
  __int64 v113; // r8
  char v114; // al
  __int64 v115; // rdx
  __int64 v116; // rcx
  __int64 v117; // r8
  __int64 v118; // r9
  char v119; // r12
  char *v120; // rax
  __int64 v121; // rdx
  char *v122; // rcx
  __int64 v123; // rdx
  char *v124; // rdx
  unsigned __int64 v125; // rdx
  unsigned __int64 v126; // rbx
  __int64 v127; // rax
  __int64 v128; // rdx
  __int64 v129; // rax
  __int64 v130; // rcx
  __int64 v131; // r8
  char v132; // al
  __int64 v133; // rdx
  unsigned int v134; // ecx
  __int64 v135; // rsi
  char v136; // al
  char v137; // al
  unsigned int v138; // ecx
  _QWORD *v139; // rbx
  unsigned int v140; // ebx
  __int64 v141; // rax
  unsigned __int64 v142; // rax
  __int64 v143; // rax
  __int64 v144; // rcx
  __int64 v145; // r8
  unsigned __int64 v146; // rsi
  __int64 v147; // rdx
  unsigned __int64 v148; // r15
  unsigned __int64 v149; // rax
  __int64 v150; // rax
  __int64 v151; // rcx
  __int64 v152; // r8
  unsigned __int64 v153; // rax
  __int64 v154; // rcx
  __int64 v155; // r8
  __int64 v156; // rcx
  __int64 v157; // r8
  __int64 v158; // rax
  unsigned __int64 v159; // rsi
  __int64 v160; // rcx
  __int64 v161; // r8
  _WORD *v162; // rbx
  __int64 v163; // rsi
  __int64 v164; // rcx
  __int64 *v165; // rax
  unsigned __int64 v166; // rax
  __int64 v167; // rax
  __int64 v168; // rax
  unsigned __int64 v169; // rsi
  __int64 v170; // rcx
  __int64 v171; // r8
  unsigned __int64 v172; // rax
  unsigned __int64 v173; // rax
  unsigned __int64 v174; // rax
  unsigned __int64 v175; // rax
  unsigned __int64 v176; // rax
  unsigned __int64 v177; // rax
  unsigned __int64 v178; // rax
  __int64 j; // r15
  unsigned int v180; // ebx
  char *v181; // r13
  __int64 v182; // rax
  unsigned int v183; // r10d
  __int64 v184; // r12
  char *v185; // r15
  unsigned __int64 v186; // rax
  __int64 v187; // r13
  unsigned int v188; // ebp
  unsigned int v189; // ebx
  _QWORD *v190; // r9
  unsigned int v191; // ebx
  char *v192; // r13
  __int64 v193; // r15
  void *v194; // rdi
  unsigned int v195; // eax
  __int64 v196; // rdx
  __int64 v197; // rcx
  __int64 v198; // r8
  unsigned int v199; // eax
  int v200; // eax
  __int64 v201; // r12
  __int64 v202; // rax
  unsigned __int64 v203; // rax
  unsigned __int64 v204; // r12
  __int64 v205; // rsi
  __int64 v206; // rdx
  __int64 v207; // rcx
  __int64 v208; // r8
  __int64 v209; // r9
  __int64 v210; // rdx
  __int64 v211; // rdx
  _QWORD *v212; // r9
  __int64 v213; // rax
  __int64 v214; // rcx
  __int64 v215; // r8
  __int64 v216; // rdx
  __int64 v217; // rcx
  size_t v218; // rax
  __int64 v219; // rax
  size_t v220; // rax
  unsigned __int64 v221; // r12
  __int64 v222; // rax
  __int64 v223; // rax
  __int64 v224; // rax
  __int64 v225; // rcx
  __int64 v226; // r8
  unsigned __int64 v227; // rax
  __int64 v228; // r12
  __int64 v229; // rax
  __int64 v230; // rdx
  unsigned __int64 v231; // rbx
  __int64 v232; // r8
  __int64 v233; // r9
  bool v234; // r12
  __int32 v235; // ebx
  __int64 v236; // rsi
  int v237; // eax
  bool v238; // bl
  unsigned __int64 v239; // rax
  __int64 v240; // rdx
  __int64 v241; // rdx
  __int64 v242; // rcx
  __int64 v243; // rax
  __int64 v244; // rax
  __int64 v245; // rcx
  __int64 v246; // r8
  __int64 v247; // rax
  __int64 v248; // rdx
  __int64 v249; // rcx
  __int64 v250; // rdx
  __int64 v251; // rcx
  __m128 v252; // xmm4
  __m128 v253; // xmm0
  __int64 v254; // rax
  void **v255; // rsi
  void (__fastcall *v256)(__int64, __int64); // rdi
  __int64 v257; // rdx
  __int64 v258; // rcx
  __int64 v259; // r8
  __int64 v260; // r9
  __int64 v261; // rax
  __m128i si128; // xmm1
  __m128i v263; // xmm3
  __m128i v264; // xmm0
  __m128i v265; // xmm2
  __int64 v266; // rax
  __int64 v267; // rax
  __int64 v268; // r12
  __int64 v269; // rax
  __int64 v270; // rdx
  __int64 v271; // rsi
  __int64 v272; // rcx
  __int64 v273; // r8
  int v274; // eax
  unsigned __int64 v275; // rax
  unsigned __int64 v276; // r11
  __int64 v277; // rdx
  __int64 v278; // r8
  unsigned __int64 v279; // r12
  unsigned __int64 v280; // rax
  bool v281; // zf
  unsigned int v282; // eax
  unsigned __int64 v283; // rax
  unsigned __int64 v284; // rcx
  unsigned __int64 v285; // rdx
  int v286; // edx
  int v287; // eax
  __int32 v288; // eax
  unsigned __int64 v289; // rdx
  int v290; // edx
  int v291; // eax
  __int64 v292; // rdx
  __int64 v293; // rcx
  __int64 v294; // rax
  __int64 v295; // rcx
  __int64 v296; // r8
  unsigned __int64 v297; // r15
  __int64 v298; // rax
  __int64 v299; // rax
  __int64 v300; // rcx
  __int64 v301; // r8
  unsigned __int64 v302; // r15
  unsigned __int64 v303; // rax
  __int64 v304; // rcx
  __int64 v305; // r8
  __int64 v306; // [rsp+0h] [rbp-448h]
  __int64 v307; // [rsp+0h] [rbp-448h]
  __int64 v308; // [rsp+0h] [rbp-448h]
  unsigned __int64 v309; // [rsp+0h] [rbp-448h]
  __int64 v310; // [rsp+8h] [rbp-440h]
  __int64 v311; // [rsp+8h] [rbp-440h]
  unsigned int v313; // [rsp+10h] [rbp-438h]
  void **v314; // [rsp+10h] [rbp-438h]
  __m128i v315; // [rsp+10h] [rbp-438h]
  __m128 v316; // [rsp+20h] [rbp-428h] BYREF
  __m128i v317; // [rsp+30h] [rbp-418h] BYREF
  unsigned __int64 v318; // [rsp+48h] [rbp-400h] BYREF
  __int64 v319; // [rsp+50h] [rbp-3F8h] BYREF
  void **v320; // [rsp+58h] [rbp-3F0h]
  unsigned __int64 *v321; // [rsp+60h] [rbp-3E8h]
  __int64 v322; // [rsp+68h] [rbp-3E0h] BYREF
  void (__fastcall *v323)(__int64, __int64); // [rsp+70h] [rbp-3D8h]
  __int64 v324; // [rsp+78h] [rbp-3D0h]
  __int64 v325; // [rsp+80h] [rbp-3C8h]
  unsigned __int64 v326; // [rsp+88h] [rbp-3C0h]
  unsigned __int64 v327; // [rsp+90h] [rbp-3B8h]
  unsigned __int64 v328; // [rsp+98h] [rbp-3B0h]
  __m128 v329; // [rsp+A0h] [rbp-3A8h] BYREF
  __int64 v330; // [rsp+B0h] [rbp-398h]
  __int64 v331; // [rsp+B8h] [rbp-390h]
  __int64 v332; // [rsp+C0h] [rbp-388h] BYREF
  __int64 v333; // [rsp+C8h] [rbp-380h]
  __int64 v334; // [rsp+D0h] [rbp-378h]
  __int64 v335; // [rsp+D8h] [rbp-370h]
  __int64 v336; // [rsp+E0h] [rbp-368h]
  unsigned __int64 v337; // [rsp+E8h] [rbp-360h]
  __int64 v338; // [rsp+F0h] [rbp-358h] BYREF
  __int64 v339; // [rsp+F8h] [rbp-350h]
  __int64 v340; // [rsp+100h] [rbp-348h] BYREF
  unsigned __int64 v341; // [rsp+108h] [rbp-340h]
  unsigned __int64 v342; // [rsp+110h] [rbp-338h] BYREF
  __int64 v343; // [rsp+118h] [rbp-330h]
  __int64 v344; // [rsp+120h] [rbp-328h]
  __int64 v345; // [rsp+128h] [rbp-320h]
  __int64 v346; // [rsp+130h] [rbp-318h]
  __int64 v347; // [rsp+138h] [rbp-310h]
  unsigned __int64 v348; // [rsp+140h] [rbp-308h]
  unsigned __int64 v349; // [rsp+148h] [rbp-300h]
  __int64 v350[2]; // [rsp+150h] [rbp-2F8h] BYREF
  void *v351; // [rsp+160h] [rbp-2E8h] BYREF
  __int64 v352; // [rsp+168h] [rbp-2E0h]
  int v353; // [rsp+170h] [rbp-2D8h]
  char *v354; // [rsp+178h] [rbp-2D0h]
  __int64 v355; // [rsp+180h] [rbp-2C8h]
  char v356; // [rsp+188h] [rbp-2C0h] BYREF
  void *ptr[2]; // [rsp+190h] [rbp-2B8h] BYREF
  int v358; // [rsp+1A0h] [rbp-2A8h]
  char v359; // [rsp+1A4h] [rbp-2A4h]
  char v360; // [rsp+1A8h] [rbp-2A0h] BYREF
  unsigned __int64 v361; // [rsp+1D0h] [rbp-278h] BYREF
  __m128 v362; // [rsp+1D8h] [rbp-270h] BYREF
  void *v363; // [rsp+1E8h] [rbp-260h]
  __m128 v364; // [rsp+1F0h] [rbp-258h]
  __int64 v365; // [rsp+200h] [rbp-248h]
  void **v366; // [rsp+208h] [rbp-240h]
  __m128 v367; // [rsp+210h] [rbp-238h]
  void *v368; // [rsp+220h] [rbp-228h] BYREF
  __int64 v369; // [rsp+228h] [rbp-220h]
  unsigned int v370; // [rsp+230h] [rbp-218h] BYREF
  char v371; // [rsp+234h] [rbp-214h]
  unsigned int *v372; // [rsp+238h] [rbp-210h] BYREF
  unsigned int v373; // [rsp+240h] [rbp-208h]

  v11 = a5;
  v13 = *(_DWORD *)(a5[29] + 64LL) <= 0x31u;
  v317.m128i_i64[0] = a4;
  v319 = a6;
  v316.m128_i8[0] = 0;
  if ( !v13 )
    v316.m128_i8[0] = sub_FFF0D0(a1) ^ 1;
  v359 = 1;
  v318 = (unsigned __int64)ptr;
  ptr[0] = &v360;
  ptr[1] = &byte_4;
  v358 = 0;
  if ( !a2 )
  {
    v16 = 1;
LABEL_21:
    if ( !a3 )
      goto LABEL_11;
    goto LABEL_22;
  }
  v371 &= ~1u;
  LOWORD(v368) = 0;
  v369 = 0;
  v370 = 0;
  if ( (*(_DWORD *)a2 & 0x20000) != 0
    || !(unsigned __int8)sub_C3F220((unsigned __int64)a2, (__int64)&v368, v11[31], 0, 0, a6) )
  {
    sub_1AF2490(a10, 1u);
    if ( v370 > 1 )
      sub_A4F8E0((int *)&v370);
    goto LABEL_16;
  }
  v14 = v373;
  if ( v373 <= 0x40 )
  {
    v16 = (unsigned int)v372;
  }
  else
  {
    v15 = v14 - sub_2206780(&v372);
    v16 = -1;
    if ( v15 <= 0x40 )
      v16 = *v372;
  }
  v362.m128_u64[0] = 16777472;
  v361 = (unsigned __int64)off_2C64D60;
  v362.m128_u64[1] = v318;
  sub_BC97E0((__int64 *)&v361, v317.m128i_i64[0]);
  if ( v370 <= 1 )
    goto LABEL_21;
  sub_A4F8E0((int *)&v370);
  if ( !a3 )
  {
LABEL_11:
    v17 = 1;
    v351 = nullptr;
    v320 = &v351;
    if ( v16 )
      v17 = v16;
    v18 = &v368;
    v369 = 0x400000000LL;
    v354 = &v356;
    v19 = v17;
    v321 = &v361;
    v352 = 0;
    v353 = 0;
    v355 = 0;
    v368 = &v370;
    v322 = (__int64)v350;
LABEL_36:
    v27 = &v370;
    v28 = &v370;
    if ( v19 > 4 )
    {
      v323 = (void (__fastcall *)(__int64, __int64))v19;
      sub_2237220(&v368, &v370, v19, 120);
      v19 = (unsigned __int64)v323;
      v28 = (unsigned int *)v368;
      v27 = (unsigned int *)((char *)v368 + 120 * (unsigned int)v369);
    }
    for ( i = &v28[30 * v19]; i != v27; *(_OWORD *)(v27 - 15) = 0 )
    {
      v30 = v27;
      v27 += 30;
      memset(v30, 0, 0x78u);
    }
    LODWORD(v369) = v17;
    goto LABEL_41;
  }
LABEL_22:
  v362.m128_i8[12] &= ~1u;
  LOWORD(v361) = 0;
  v362.m128_u64[0] = 0;
  v362.m128_i32[2] = 0;
  if ( (*(_DWORD *)a3 & 0x20000) != 0
    || (v21 = v11[31],
        v22 = &v361,
        v321 = &v361,
        !(unsigned __int8)sub_C3F220((unsigned __int64)a3, (__int64)&v361, v21, 0, 0, 0)) )
  {
    sub_1AF2490(a10, 1u);
    if ( v362.m128_i32[2] > 1u )
      sub_A4F8E0(&v362.m128_i32[2]);
LABEL_16:
    v16 = 1;
    goto LABEL_17;
  }
  v25 = v364.m128_i32[0];
  LODWORD(v352) = v364.m128_i32[0];
  if ( v364.m128_i32[0] <= 0x40u )
  {
    v351 = v363;
    BYTE4(v352) = v364.m128_i8[4];
    v320 = &v351;
LABEL_26:
    v26 = v351;
    goto LABEL_27;
  }
  v22 = v321 + 3;
  v320 = &v351;
  sub_2205510(&v351);
  v25 = v352;
  BYTE4(v352) = v364.m128_i8[4];
  if ( (unsigned int)v352 <= 0x40 )
    goto LABEL_26;
  v23 = v25 - (unsigned int)sub_2206780(&v351);
  if ( (unsigned int)v23 > 0x40 )
  {
    v194 = v351;
    v18 = &v368;
    v322 = (__int64)v350;
LABEL_153:
    if ( !v194 )
    {
      v19 = 0xFFFFFFFFLL;
      v17 = -1;
      goto LABEL_33;
    }
    v17 = -1;
    goto LABEL_159;
  }
  v26 = *(void **)v351;
LABEL_27:
  v18 = &v368;
  if ( v16 > (unsigned __int64)v26 )
  {
    v195 = sub_C00A40((unsigned __int64)a3, (__int64)v22, (__int64)v26, v23, v24);
    sub_168B9F0((__int64)&v368, v11 + 1, v195, 0x122Eu, 0);
    v350[0] = sub_EEC8C0((unsigned __int64)a3, (__int64)(v11 + 1), a7);
    v322 = (__int64)v350;
    sub_1587DB0((__int64)&v368, v350);
    sub_15F7200(&v368);
    v199 = sub_C00A40((unsigned __int64)a2, (__int64)v350, v196, v197, v198);
    sub_168B9F0((__int64)&v368, v11 + 1, v199, 0x16C6u, 0);
    v350[0] = sub_EEC8C0((unsigned __int64)a2, (__int64)(v11 + 1), a7);
    sub_1587DB0((__int64)&v368, v350);
    sub_15F7200(&v368);
    v25 = v352;
  }
  else
  {
    v322 = (__int64)v350;
  }
  if ( v25 <= 0x40 )
  {
    v17 = (unsigned int)v351;
    if ( v16 > (unsigned int)v351 )
      v17 = v16;
    v19 = v17;
    goto LABEL_33;
  }
  v200 = sub_2206780(v320);
  v194 = v351;
  if ( v25 - v200 > 0x40 )
    goto LABEL_153;
  v17 = *(_DWORD *)v351;
LABEL_159:
  operator delete[](v194);
  if ( v16 >= v17 )
    v17 = v16;
  v19 = v17;
LABEL_33:
  if ( v362.m128_i32[2] > 1u )
  {
    v323 = (void (__fastcall *)(__int64, __int64))v19;
    sub_A4F8E0((int *)v321 + 4);
    v19 = (unsigned __int64)v323;
  }
  v353 = 0;
  v351 = nullptr;
  v352 = 0;
  v354 = (char *)(v320 + 5);
  v355 = 0;
  v368 = &v370;
  v369 = 0x400000000LL;
  if ( v19 )
    goto LABEL_36;
LABEL_41:
  v31 = v322;
  v322 = (__int64)a2;
  v323 = (void (__fastcall *)(__int64, __int64))sub_1AFF300;
  v32 = _mm_loadh_ps((const double *)&v319);
  v350[1] = (__int64)v320;
  v362 = v32;
  v322 = (__int64)a3;
  v324 = v31;
  LODWORD(v361) = a1;
  v33 = _mm_loadh_ps((const double *)&v322);
  v322 = (__int64)v320;
  v364 = v33;
  v350[0] = (__int64)v11;
  v34 = _mm_loadh_ps((const double *)&v318);
  v363 = (void *)__PAIR64__(v16, v17);
  v367 = v34;
  v365 = a9;
  v366 = &v368;
  v35 = sub_FFF0D0(a1);
  v36 = sub_EE9D60(v317.m128i_i64[0], v35 ^ 1u);
  if ( !(unsigned __int8)sub_EF5A40(
                           v36,
                           v316.m128_i8[0],
                           v17,
                           (unsigned __int8 (__fastcall *)(__int64, _QWORD, __int64))sub_1B4D170,
                           (__int64)v321,
                           (__int64)v323,
                           v323,
                           v324) )
    goto LABEL_143;
  sub_1AF2490(a10, v16);
  v37 = sub_B8E180(v11[68]);
  if ( !v37 )
  {
    v322 = *((_QWORD *)v368 + 1);
    v38 = *((_QWORD *)v368 + 2);
    v39 = *(_QWORD *)(v38 + 8);
    v40 = sub_BFB840(v38);
    v41 = sub_1BFA490(v11, v40, v39, 3, 1) & 0xFFFFFFFFFFFFFFFELL;
    if ( !v41 )
    {
      v201 = *(_QWORD *)(v38 + 8);
      v202 = sub_BFB840(v38);
      v203 = sub_1BFA490(v11, v202, v201, 3, 1) & 0xFFFFFFFFFFFFFFFELL;
      if ( v203 )
        sub_1AE7FA0(0x40u, v203, (__int64)v11);
      goto LABEL_144;
    }
    v42 = sub_1AE7FA0(0x20u, v41, (__int64)v11);
    v43 = *(_QWORD *)(v38 + 8);
    v318 = v42;
    v44 = sub_BFB840(v38);
    v45 = sub_1BFA490(v11, v44, v43, 3, 1) & 0xFFFFFFFFFFFFFFFELL;
    if ( v45 )
    {
      v326 = sub_1AE7FA0(0x40u, v45, (__int64)v11);
      LOBYTE(v327) = v318 > 1 && v326 > 1;
      if ( (_BYTE)v327 )
      {
        v46 = (__int64 *)(*(_QWORD *)(v38 + 8) & 0xFFFFFFFFFFFFFFF0LL);
        v323 = (void (__fastcall *)(__int64, __int64))v11[31];
        v47 = *v46;
        LOBYTE(v325) = (unsigned __int64)sub_A97D20((__int64)v323, *v46) <= 0x1F;
        v48 = sub_1AE5FF0(v319);
        v316.m128_u64[0] = v48;
        if ( v48 )
          v316.m128_u64[0] = *(_QWORD *)(v48 + 1008);
        v51 = v322;
        v319 = v322;
        if ( v16 <= 1 )
        {
          if ( (*(_BYTE *)(v11[29] + 88LL) & 1) != 0 )
            goto LABEL_60;
          v322 = v318;
          v318 = v326;
        }
        else
        {
          v52 = v16 - 2;
          v329.m128_i32[0] = v16;
          v53 = v326;
          v330 = (__int64)&v368;
          v54 = v318;
          LOBYTE(v328) = 0;
          v55 = 120;
          v319 = 120 * v52 + 240;
          do
          {
            v56 = (char *)v368 + v55;
            if ( v51 >= 2 )
            {
              v57 = v51 & 0xFFFFFFFFFFFFFFFELL;
              v58 = *((_QWORD **)v56 + 1);
              v59 = sub_C00A40(v57, v47, v52, v49, v50);
              v51 = sub_1929BB0((__int64)v11, v316.m128_i64[0], v59, 0x13u, v57, v58, v34, a8, 0);
              v49 = v306;
              v47 = v310;
              v56 = (char *)v368 + v55;
            }
            v60 = *((_QWORD *)v56 + 2);
            LODWORD(v318) = sub_C00A40(v60, v47, v52, v49, v50);
            v47 = *(_QWORD *)(*(_QWORD *)(v60 + 8) & 0xFFFFFFFFFFFFFFF0LL);
            v61 = sub_A97D20((__int64)v323, v47);
            LOBYTE(v325) = (v61 <= 0x1F) & v325;
            if ( v54 >= 2 )
            {
              v322 = *(_QWORD *)(v60 + 8);
              v62 = sub_BFB840(v60);
              v63 = sub_1BFA490(v11, v62, v322, 3, 1);
              v47 = v316.m128_u64[0];
              v54 = sub_1929BB0(
                      (__int64)v11,
                      v316.m128_i64[0],
                      (unsigned int)v318,
                      2u,
                      v54 & 0xFFFFFFFFFFFFFFFELL,
                      (_QWORD *)(v63 & 0xFFFFFFFFFFFFFFFELL),
                      v34,
                      a8,
                      0);
              v52 = v310;
            }
            if ( v53 >= 2 )
            {
              v322 = *(_QWORD *)(v60 + 8);
              v64 = sub_BFB840(v60);
              v65 = sub_1BFA490(v11, v64, v322, 3, 1);
              v47 = v316.m128_u64[0];
              v53 = sub_1929BB0(
                      (__int64)v11,
                      v316.m128_i64[0],
                      (unsigned int)v318,
                      2u,
                      v53 & 0xFFFFFFFFFFFFFFFELL,
                      (_QWORD *)(v65 & 0xFFFFFFFFFFFFFFFELL),
                      v34,
                      a8,
                      0);
            }
            v55 += 120;
          }
          while ( v319 != v55 );
          v66 = v11[29];
          v67 = (_QWORD *)v54;
          v318 = v54;
          v326 = v53;
          v18 = (void **)v330;
          v37 = v328;
          v319 = v51;
          v16 = v329.m128_i32[0];
          if ( (*(_BYTE *)(v66 + 88) & 1) != 0 )
          {
LABEL_60:
            v68 = v318 & 0xFFFFFFFFFFFFFFFELL;
            v69 = *(unsigned __int64 **)((v318 & 0xFFFFFFFFFFFFFFFELL) + 8);
            v325 = (__int64)v69;
            v321 = v69;
            if ( sub_FFE5D0(a1) )
            {
              v69 = (unsigned __int64 *)sub_A64980(v11[31], 64, 0);
              v321 = (unsigned __int64 *)sub_A64980(v11[31], 64, 1);
            }
            if ( v318 <= 1 )
              goto LABEL_143;
            v322 = sub_18C1B30((__int64)v11, 0, 1) & 0xFFFFFFFFFFFFFFFELL;
            v73 = sub_C00A40(v68, 0, v70, v71, v72);
            v328 = sub_1929BB0((__int64)v11, v316.m128_i64[0], v73, 6u, v68, (_QWORD *)v322, v34, a8, 0);
            if ( v328 <= 1 )
              goto LABEL_143;
            v77 = v11[31];
            v78 = (_QWORD *)(v328 & 0xFFFFFFFFFFFFFFFELL);
            if ( !(unsigned __int8)sub_C3EA40(v328 & 0xFFFFFFFFFFFFFFFELL, v77, nullptr, v74, v75, v76) )
            {
              v79 = j__strlen(".capture_expr.");
              v328 = sub_1B00390(v11, v78, (__int64)v320, ".capture_expr.", v79, v34, a8);
              v80 = (_QWORD *)(sub_18C1B30((__int64)v11, 0, 1) & 0xFFFFFFFFFFFFFFFELL);
              v318 = v328 & 0xFFFFFFFFFFFFFFFELL;
              v83 = sub_C00A40(v328 & 0xFFFFFFFFFFFFFFFELL, 0, v81, v82, v328 & 0xFFFFFFFFFFFFFFFELL);
              v77 = v316.m128_u64[0];
              v318 = sub_1929BB0((__int64)v11, v316.m128_i64[0], v83, 5u, v318, v80, v34, a8, 0);
              if ( v318 <= 1 )
                goto LABEL_143;
            }
            v84 = *((_DWORD *)v368 + 15);
            if ( sub_FFE580(a1)
              || sub_FFE5D0(a1)
              || sub_FFED80(a1, v77, v85, v86)
              || (unsigned __int8)sub_FFEEE0(a1, v77, v240)
              || (unsigned __int8)sub_FFF0D0(a1) )
            {
              v87 = j__strlen(".omp.lb");
              v322 = sub_1AFE760(v11, v84, (__int64)v69, ".omp.lb", v87, 0);
              v333 = sub_1AE9760((__int64)v11, v322, (__int64)v69, v84);
              v88 = sub_18C1B30((__int64)v11, v84, 0);
              sub_17ED4C0(
                (__int64)v11,
                v322,
                v88 & 0xFFFFFFFFFFFFFFFELL,
                0,
                *(double *)v34.m128_u64,
                *(double *)a8.m128_u64);
              v89 = j__strlen(".omp.ub");
              v329.m128_u64[0] = sub_1AFE760(v11, v84, (__int64)v69, ".omp.ub", v89, 0);
              v326 = sub_1AE9760((__int64)v11, v329.m128_i64[0], (__int64)v69, v84);
              v322 = v328 & 0xFFFFFFFFFFFFFFFELL;
              sub_17ED4C0(
                (__int64)v11,
                v329.m128_i64[0],
                v328 & 0xFFFFFFFFFFFFFFFELL,
                0,
                *(double *)v34.m128_u64,
                *(double *)a8.m128_u64);
              v329.m128_u64[0] = sub_A64980(v11[31], 32, 1);
              v90 = j__strlen(".omp.is_last");
              v91 = sub_1AFE760(v11, v84, v329.m128_i64[0], ".omp.is_last", v90, 0);
              v92 = v329.m128_u64[0];
              v329.m128_u64[0] = v91;
              v339 = sub_1AE9760((__int64)v11, v91, v92, v84);
              v93 = sub_18C1B30((__int64)v11, v84, 0);
              sub_17ED4C0(
                (__int64)v11,
                v329.m128_i64[0],
                v93 & 0xFFFFFFFFFFFFFFFELL,
                0,
                *(double *)v34.m128_u64,
                *(double *)a8.m128_u64);
              v94 = j__strlen(".omp.stride");
              v95 = (unsigned __int64 *)sub_1AFE760(v11, v84, (__int64)v321, ".omp.stride", v94, 0);
              v96 = v321;
              v321 = v95;
              v334 = sub_1AE9760((__int64)v11, (__int64)v95, (__int64)v96, v84);
              v97 = sub_18C1B30((__int64)v11, v84, 1);
              sub_17ED4C0(
                (__int64)v11,
                (__int64)v321,
                v97 & 0xFFFFFFFFFFFFFFFELL,
                0,
                *(double *)v34.m128_u64,
                *(double *)a8.m128_u64);
              v321 = (unsigned __int64 *)(v326 & 0xFFFFFFFFFFFFFFFELL);
              v329.m128_u64[0] = sub_1929BB0(
                                   (__int64)v11,
                                   v316.m128_i64[0],
                                   v84,
                                   0xBu,
                                   v326 & 0xFFFFFFFFFFFFFFFELL,
                                   (_QWORD *)v322,
                                   v34,
                                   a8,
                                   0)
                               & 0xFFFFFFFFFFFFFFFELL;
              v101 = sub_C00A40(v322, v316.m128_i64[0], v98, v99, v100);
              v102 = sub_1923BC0((__int64)v11, v101, v84, v329.m128_u64[0], v322, (__int64)v321, v34, a8);
              v103 = sub_1929BB0(
                       (__int64)v11,
                       v316.m128_i64[0],
                       v84,
                       0x15u,
                       (__int64)v321,
                       (_QWORD *)(v102 & 0xFFFFFFFFFFFFFFFELL),
                       v34,
                       a8,
                       0);
              v340 = sub_1AF29F0((__int64)v11, v103 & 0xFFFFFFFFFFFFFFFELL, 0, v104, v105, v34, a8);
              if ( (unsigned __int8)sub_FFF090(a1) )
              {
                v218 = j__strlen(".omp.comb.lb");
                v321 = (unsigned __int64 *)sub_1AFE760(v11, v84, (__int64)v69, ".omp.comb.lb", v218, 0);
                v331 = sub_1AE9760((__int64)v11, (__int64)v321, (__int64)v69, v84);
                v219 = sub_18C1B30((__int64)v11, v84, 0);
                sub_17ED4C0(
                  (__int64)v11,
                  (__int64)v321,
                  v219 & 0xFFFFFFFFFFFFFFFELL,
                  0,
                  *(double *)v34.m128_u64,
                  *(double *)a8.m128_u64);
                v220 = j__strlen(".omp.comb.ub");
                v321 = (unsigned __int64 *)sub_1AFE760(v11, v84, (__int64)v69, ".omp.comb.ub", v220, 0);
                v330 = sub_1AE9760((__int64)v11, (__int64)v321, (__int64)v69, v84);
                v221 = v330 & 0xFFFFFFFFFFFFFFFELL;
                sub_17ED4C0((__int64)v11, (__int64)v321, v322, 0, *(double *)v34.m128_u64, *(double *)a8.m128_u64);
                v222 = sub_1929BB0((__int64)v11, v316.m128_i64[0], v84, 0xBu, v221, (_QWORD *)v322, v34, a8, 0);
                v223 = sub_1923BC0((__int64)v11, v84, v84, v222 & 0xFFFFFFFFFFFFFFFELL, v322, v221, v34, a8);
                v224 = sub_1929BB0(
                         (__int64)v11,
                         v316.m128_i64[0],
                         v84,
                         0x15u,
                         v221,
                         (_QWORD *)(v223 & 0xFFFFFFFFFFFFFFFELL),
                         v34,
                         a8,
                         0);
                v336 = sub_1AF29F0((__int64)v11, v224 & 0xFFFFFFFFFFFFFFFELL, 0, v225, v226, v34, a8);
                v227 = sub_EEE250(v317.m128i_i64[0]);
                v228 = *(_QWORD *)(v227 + 112);
                v229 = sub_1AE9760(
                         (__int64)v11,
                         *(_QWORD *)(v227 + 104),
                         *(_QWORD *)(*(_QWORD *)(v227 + 104) + 48LL),
                         v84);
                v230 = *(_QWORD *)(v228 + 48);
                v335 = v229;
                v332 = sub_1AE9760((__int64)v11, v228, v230, v84);
              }
              else
              {
                v336 = 0;
                v332 = 0;
                v335 = 0;
                v330 = 0;
                v331 = 0;
              }
            }
            else
            {
              v336 = 0;
              v332 = 0;
              v335 = 0;
              v330 = 0;
              v331 = 0;
              v340 = 0;
              v334 = 0;
              v339 = 0;
              v326 = 0;
              v333 = 0;
            }
            v106 = j__strlen(".omp.iv");
            v107 = v325;
            v108 = sub_1AFE760(v11, v84, v325, ".omp.iv", v106, 0);
            v329.m128_u64[0] = sub_1AE9760((__int64)v11, v108, v107, v84);
            if ( sub_FFE580(a1)
              || (unsigned __int8)sub_FFEEE0(a1, v108, v109)
              || sub_FFE5D0(a1)
              || sub_FFED80(a1, v108, v216, v217)
              || (unsigned __int8)sub_FFF0D0(a1) )
            {
              v110 = (_QWORD *)(v333 & 0xFFFFFFFFFFFFFFFELL);
            }
            else
            {
              v110 = (_QWORD *)(sub_18C1B30((__int64)v11, 0, 0) & 0xFFFFFFFFFFFFFFFELL);
            }
            v322 = v329.m128_u64[0] & 0xFFFFFFFFFFFFFFFELL;
            v111 = sub_1929BB0(
                     (__int64)v11,
                     v316.m128_i64[0],
                     v84,
                     0x15u,
                     v329.m128_u64[0] & 0xFFFFFFFFFFFFFFFELL,
                     v110,
                     v34,
                     a8,
                     0)
                 & 0xFFFFFFFFFFFFFFFELL;
            v347 = sub_1AF29F0((__int64)v11, v111, 0, v112, v113, v34, a8);
            v114 = sub_FFF090(a1);
            v118 = v307;
            v343 = 0;
            if ( v114 )
            {
              if ( sub_FFE580(a1)
                || (unsigned __int8)sub_FFEEE0(a1, v111, v211)
                || sub_FFE5D0(a1)
                || sub_FFED80(a1, v111, v250, v251) )
              {
                v212 = (_QWORD *)(v331 & 0xFFFFFFFFFFFFFFFELL);
              }
              else
              {
                v212 = (_QWORD *)(sub_18C1B30((__int64)v11, 0, 0) & 0xFFFFFFFFFFFFFFFELL);
              }
              v213 = sub_1929BB0((__int64)v11, v316.m128_i64[0], v84, 0x15u, v322, v212, v34, a8, 0);
              v343 = sub_1AF29F0((__int64)v11, v213 & 0xFFFFFFFFFFFFFFFELL, 0, v214, v215, v34, a8);
              v111 = v309;
            }
            v119 = sub_F65540(*(_QWORD *)(v325 & 0xFFFFFFFFFFFFFFF0LL), v111, v115, v116, v117, v118);
            if ( !v119 )
              goto LABEL_173;
            v120 = (char *)v368;
            v111 = 0xEEEEEEEEEEEEEEEFLL;
            v121 = 120LL * (unsigned int)v369;
            v122 = (char *)v368 + v121;
            v123 = (__int64)(0xEEEEEEEEEEEEEEEFLL * (v121 >> 3)) >> 2;
            if ( v123 )
            {
              if ( !*(_BYTE *)v368 )
                goto LABEL_172;
              if ( !*((_BYTE *)v368 + 120) )
              {
                v120 = (char *)v368 + 120;
                goto LABEL_172;
              }
              if ( !*((_BYTE *)v368 + 240) )
              {
                v120 = (char *)v368 + 240;
                goto LABEL_172;
              }
              if ( !*((_BYTE *)v368 + 360) )
              {
                v120 = (char *)v368 + 360;
                goto LABEL_172;
              }
              v111 = (unsigned __int64)v368;
              v124 = (char *)v368 + 480 * v123;
              while ( 1 )
              {
                v120 += 480;
                if ( v120 == v124 )
                  break;
                if ( !*v120 )
                  goto LABEL_172;
                if ( !v120[120] )
                {
                  v120 = (char *)(v111 + 600);
                  goto LABEL_172;
                }
                if ( !v120[240] )
                {
                  v120 = (char *)(v111 + 720);
                  goto LABEL_172;
                }
                if ( !v120[360] )
                {
                  v120 = (char *)(v111 + 840);
                  goto LABEL_172;
                }
                v111 = (unsigned __int64)v120;
              }
            }
            v111 = 0xEEEEEEEEEEEEEEEFLL;
            v125 = 0xEEEEEEEEEEEEEEEFLL * ((v122 - v120) >> 3);
            if ( v125 != 2 )
            {
              if ( v125 != 3 )
              {
                if ( v125 != 1 )
                  goto LABEL_89;
LABEL_258:
                if ( *v120 )
                  goto LABEL_89;
                goto LABEL_172;
              }
              if ( !*v120 )
              {
LABEL_172:
                if ( v122 != v120 )
                {
LABEL_173:
                  LODWORD(v325) = sub_EEB7E0(v317.m128i_u64[0], v111, *(double *)v34.m128_u64);
                  v321 = (unsigned __int64 *)(v326 & 0xFFFFFFFFFFFFFFFELL);
                  if ( !sub_FFE580(a1) )
                  {
                    if ( (unsigned __int8)sub_FFEEE0(a1, v111, v210) || sub_FFE5D0(a1) )
                    {
                      v37 = 0;
                      v326 = (unsigned __int64)v321;
                      goto LABEL_267;
                    }
                    v119 = sub_FFED80(a1, v111, v241, v242);
                    v326 = (unsigned __int64)v321;
                    if ( v119 )
                    {
LABEL_267:
                      v134 = 12;
                      goto LABEL_91;
                    }
LABEL_204:
                    if ( !(unsigned __int8)sub_FFF0D0(a1) )
                    {
                      v135 = v316.m128_u64[0];
                      v346 = sub_1929BB0(
                               (__int64)v11,
                               v316.m128_i64[0],
                               (unsigned int)v325,
                               0xAu,
                               v322,
                               (_QWORD *)(v318 & 0xFFFFFFFFFFFFFFFELL),
                               v34,
                               a8,
                               0);
LABEL_92:
                      v136 = sub_FFF090(a1);
                      v345 = 0;
                      if ( v136 )
                      {
                        v135 = v316.m128_u64[0];
                        v345 = sub_1929BB0(
                                 (__int64)v11,
                                 v316.m128_i64[0],
                                 (unsigned int)v325,
                                 0xAu,
                                 v322,
                                 (_QWORD *)(v318 & 0xFFFFFFFFFFFFFFFELL),
                                 v34,
                                 a8,
                                 0);
                      }
                      v137 = sub_FFF090(a1);
                      v344 = 0;
                      if ( v137 )
                      {
                        v138 = 12;
                        v139 = (_QWORD *)(v330 & 0xFFFFFFFFFFFFFFFELL);
                        if ( v119 )
                        {
                          v243 = sub_18C1B30((__int64)v11, 0, 1);
                          v244 = sub_1929BB0(
                                   (__int64)v11,
                                   v316.m128_i64[0],
                                   (unsigned int)v325,
                                   5u,
                                   (__int64)v139,
                                   (_QWORD *)(v243 & 0xFFFFFFFFFFFFFFFELL),
                                   v34,
                                   a8,
                                   0);
                          v247 = sub_1AF29F0((__int64)v11, v244 & 0xFFFFFFFFFFFFFFFELL, 0, v245, v246, v34, a8);
                          v138 = 10;
                          v139 = (_QWORD *)(v247 & 0xFFFFFFFFFFFFFFFELL);
                        }
                        v135 = v316.m128_u64[0];
                        v344 = sub_1929BB0(
                                 (__int64)v11,
                                 v316.m128_i64[0],
                                 (unsigned int)v325,
                                 v138,
                                 v322,
                                 v139,
                                 v34,
                                 a8,
                                 0);
                      }
                      v140 = sub_EEB7E0(v317.m128i_u64[0], v135, *(double *)v34.m128_u64);
                      v141 = sub_18C1B30((__int64)v11, v140, 1);
                      v142 = sub_1929BB0(
                               (__int64)v11,
                               v316.m128_i64[0],
                               v140,
                               5u,
                               v322,
                               (_QWORD *)(v141 & 0xFFFFFFFFFFFFFFFELL),
                               v34,
                               a8,
                               0);
                      if ( v142 > 1 )
                      {
                        v143 = sub_1929BB0(
                                 (__int64)v11,
                                 v316.m128_i64[0],
                                 v140,
                                 0x15u,
                                 v322,
                                 (_QWORD *)(v142 & 0xFFFFFFFFFFFFFFFELL),
                                 v34,
                                 a8,
                                 0);
                        v348 = sub_1AF29F0((__int64)v11, v143 & 0xFFFFFFFFFFFFFFFELL, 0, v144, v145, v34, a8);
                        v146 = v308;
                        if ( v348 > 1 )
                        {
                          if ( !sub_FFE580(a1)
                            && !sub_FFE5D0(a1)
                            && !(unsigned __int8)sub_FFEEE0(a1, v308, v147)
                            && !sub_FFED80(a1, v308, v292, v293)
                            && !(unsigned __int8)sub_FFF0D0(a1) )
                          {
                            v327 = 0;
                            v337 = 0;
                            v342 = 0;
                            v341 = 0;
                            goto LABEL_108;
                          }
                          v327 = v334 & 0xFFFFFFFFFFFFFFFELL;
                          v148 = v333 & 0xFFFFFFFFFFFFFFFELL;
                          v149 = sub_1929BB0(
                                   (__int64)v11,
                                   v316.m128_i64[0],
                                   v140,
                                   5u,
                                   v333 & 0xFFFFFFFFFFFFFFFELL,
                                   (_QWORD *)(v334 & 0xFFFFFFFFFFFFFFFELL),
                                   v34,
                                   a8,
                                   0);
                          if ( v149 > 1 )
                          {
                            v150 = sub_1929BB0(
                                     (__int64)v11,
                                     v316.m128_i64[0],
                                     v140,
                                     0x15u,
                                     v148,
                                     (_QWORD *)(v149 & 0xFFFFFFFFFFFFFFFELL),
                                     v34,
                                     a8,
                                     0);
                            v341 = sub_1AF29F0((__int64)v11, v150 & 0xFFFFFFFFFFFFFFFELL, 0, v151, v152, v34, a8);
                            if ( v341 > 1 )
                            {
                              v153 = sub_1929BB0(
                                       (__int64)v11,
                                       v316.m128_i64[0],
                                       v140,
                                       5u,
                                       (__int64)v321,
                                       (_QWORD *)v327,
                                       v34,
                                       a8,
                                       0);
                              if ( v153 > 1 )
                              {
                                v146 = sub_1929BB0(
                                         (__int64)v11,
                                         v316.m128_i64[0],
                                         v140,
                                         0x15u,
                                         (__int64)v321,
                                         (_QWORD *)(v153 & 0xFFFFFFFFFFFFFFFELL),
                                         v34,
                                         a8,
                                         0)
                                     & 0xFFFFFFFFFFFFFFFELL;
                                v342 = sub_1AF29F0((__int64)v11, v146, 0, v154, v155, v34, a8);
                                if ( v342 > 1 )
                                {
                                  if ( !(unsigned __int8)sub_FFF090(a1) )
                                  {
                                    v327 = 0;
                                    v337 = 0;
LABEL_108:
                                    LODWORD(v338) = sub_EEB7E0(v317.m128i_u64[0], v146, *(double *)v34.m128_u64);
                                    if ( !(unsigned __int8)sub_FFF090(a1) )
                                    {
                                      v325 = 0;
                                      v338 = 0;
                                      v326 = 0;
                                      goto LABEL_114;
                                    }
                                    sub_1929BB0(
                                      (__int64)v11,
                                      v316.m128_i64[0],
                                      (unsigned int)v325,
                                      v119 == 0 ? 12 : 10,
                                      v322,
                                      (_QWORD *)v326,
                                      v34,
                                      a8,
                                      0);
                                    v158 = sub_1929BB0(
                                             (__int64)v11,
                                             v316.m128_i64[0],
                                             (unsigned int)v338,
                                             5u,
                                             v322,
                                             (_QWORD *)(v334 & 0xFFFFFFFFFFFFFFFELL),
                                             v34,
                                             a8,
                                             0);
                                    v159 = sub_1929BB0(
                                             (__int64)v11,
                                             v316.m128_i64[0],
                                             (unsigned int)v338,
                                             0x15u,
                                             v322,
                                             (_QWORD *)(v158 & 0xFFFFFFFFFFFFFFFELL),
                                             v34,
                                             a8,
                                             0)
                                         & 0xFFFFFFFFFFFFFFFELL;
                                    v326 = sub_1AF29F0((__int64)v11, v159, 0, v160, v161, v34, a8);
                                    v313 = sub_EEB7E0(v317.m128i_u64[0], v159, *(double *)v34.m128_u64);
                                    v162 = (_WORD *)(v332 & 0xFFFFFFFFFFFFFFFELL);
                                    v163 = v321[1];
                                    v164 = *(_QWORD *)&byte_8[*(_QWORD *)((v332 & 0xFFFFFFFFFFFFFFFELL) + 8)
                                                            & 0xFFFFFFFFFFFFFFF0LL];
                                    if ( (*(_QWORD *)&byte_8[v163 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
                                        | ((unsigned __int8)v163
                                         | (unsigned __int8)*(_QWORD *)&byte_8[v163 & 0xFFFFFFFFFFFFFFF0LL])
                                        & 7) == (v164 & 0xFFFFFFFFFFFFFFF8LL
                                               | ((unsigned __int8)v164
                                                | (unsigned __int8)*(_QWORD *)((v332 & 0xFFFFFFFFFFFFFFFELL) + 8))
                                               & 7) )
                                    {
                                      v166 = v332;
                                      goto LABEL_111;
                                    }
                                    v165 = sub_A81910((_QWORD *)v11[31], v163, 0);
                                    v166 = sub_16B2590(
                                             (__int64)v11,
                                             v313,
                                             v165,
                                             v313,
                                             v162,
                                             v34,
                                             *(double *)a8.m128_u64);
                                    if ( v166 > 1 )
                                    {
LABEL_111:
                                      v317.m128i_i64[0] = v166 & 0xFFFFFFFFFFFFFFFELL;
                                      v167 = sub_1929BB0(
                                               (__int64)v11,
                                               v316.m128_i64[0],
                                               v313,
                                               0xBu,
                                               (__int64)v321,
                                               (_QWORD *)(v166 & 0xFFFFFFFFFFFFFFFELL),
                                               v34,
                                               a8,
                                               0);
                                      v168 = sub_1923BC0(
                                               (__int64)v11,
                                               v313,
                                               v313,
                                               v167 & 0xFFFFFFFFFFFFFFFELL,
                                               v317.m128i_i64[0],
                                               (__int64)v321,
                                               v34,
                                               a8);
                                      v169 = sub_1929BB0(
                                               (__int64)v11,
                                               v316.m128_i64[0],
                                               (unsigned int)v338,
                                               0x15u,
                                               (__int64)v321,
                                               (_QWORD *)(v168 & 0xFFFFFFFFFFFFFFFELL),
                                               v34,
                                               a8,
                                               0)
                                           & 0xFFFFFFFFFFFFFFFELL;
                                      v338 = sub_1AF29F0((__int64)v11, v169, 0, v170, v171, v34, a8);
                                      if ( v119 )
                                      {
                                        v294 = sub_18C1B30((__int64)v11, 0, 1);
                                        v169 = sub_1929BB0(
                                                 (__int64)v11,
                                                 v316.m128_i64[0],
                                                 (unsigned int)v325,
                                                 5u,
                                                 (__int64)v162,
                                                 (_QWORD *)(v294 & 0xFFFFFFFFFFFFFFFELL),
                                                 v34,
                                                 a8,
                                                 0)
                                             & 0xFFFFFFFFFFFFFFFELL;
                                        v162 = (_WORD *)(sub_1AF29F0((__int64)v11, v169, 0, v295, v296, v34, a8)
                                                       & 0xFFFFFFFFFFFFFFFELL);
                                      }
                                      v325 = sub_1929BB0(
                                               (__int64)v11,
                                               v316.m128_i64[0],
                                               (unsigned int)v325,
                                               v119 == 0 ? 12 : 10,
                                               v322,
                                               v162,
                                               v34,
                                               a8,
                                               0);
                                      v157 = v169;
LABEL_114:
                                      v172 = *(unsigned int *)(a10 + 160);
                                      if ( v16 != v172 )
                                      {
                                        if ( v16 < v172 )
                                          *(_DWORD *)(a10 + 160) = v16;
                                        else
                                          sub_1AE8220(a10 + 152, v16);
                                      }
                                      v173 = *(unsigned int *)(a10 + 256);
                                      if ( v16 != v173 )
                                      {
                                        if ( v16 < v173 )
                                          *(_DWORD *)(a10 + 256) = v16;
                                        else
                                          sub_1AE8220(a10 + 248, v16);
                                      }
                                      v174 = *(unsigned int *)(a10 + 304);
                                      if ( v16 != v174 )
                                      {
                                        if ( v16 < v174 )
                                          *(_DWORD *)(a10 + 304) = v16;
                                        else
                                          sub_1AE8220(a10 + 296, v16);
                                      }
                                      v175 = *(unsigned int *)(a10 + 352);
                                      if ( v16 != v175 )
                                      {
                                        if ( v16 < v175 )
                                          *(_DWORD *)(a10 + 352) = v16;
                                        else
                                          sub_1AE8220(a10 + 344, v16);
                                      }
                                      v176 = *(unsigned int *)(a10 + 400);
                                      if ( v16 != v176 )
                                      {
                                        if ( v16 < v176 )
                                          *(_DWORD *)(a10 + 400) = v16;
                                        else
                                          sub_1AE8220(a10 + 392, v16);
                                      }
                                      v177 = *(unsigned int *)(a10 + 448);
                                      if ( v16 != v177 )
                                      {
                                        if ( v16 < v177 )
                                          *(_DWORD *)(a10 + 448) = v16;
                                        else
                                          sub_1AE8220(a10 + 440, v16);
                                      }
                                      v178 = *(unsigned int *)(a10 + 496);
                                      if ( v16 != v178 )
                                      {
                                        if ( v16 < v178 )
                                          *(_DWORD *)(a10 + 496) = v16;
                                        else
                                          sub_1AE8220(a10 + 488, v16);
                                      }
                                      v314 = v18;
                                      for ( j = 0; (unsigned int)j < v16; j = v193 + 1 )
                                      {
                                        v180 = *((_DWORD *)v368 + 30 * j + 19);
                                        v181 = (char *)v368 + 120 * j;
                                        v182 = sub_18C1B30((__int64)v11, 0, 1);
                                        v183 = j + 1;
                                        v317.m128i_i64[0] = j;
                                        v184 = 120LL * (unsigned int)(j + 1);
                                        v185 = v181;
                                        v186 = v182 & 0xFFFFFFFFFFFFFFFELL;
                                        v187 = (__int64)v11;
                                        v188 = v180;
                                        v189 = v183;
                                        while ( v189 != v16 )
                                        {
                                          ++v189;
                                          LODWORD(v349) = v183;
                                          v190 = *(_QWORD **)((char *)v368 + v184 + 16);
                                          v184 += 120;
                                          v186 = sub_1929BB0(
                                                   v187,
                                                   v316.m128_i64[0],
                                                   v188,
                                                   2u,
                                                   v186 & 0xFFFFFFFFFFFFFFFELL,
                                                   v190,
                                                   v34,
                                                   a8,
                                                   0);
                                          v183 = v349;
                                        }
                                        v191 = v188;
                                        v11 = (_QWORD *)v187;
                                        v192 = v185;
                                        v193 = v317.m128i_i64[0];
                                        if ( v183 < v16 )
                                        {
                                          v317.m128i_i64[0] = v186 & 0xFFFFFFFFFFFFFFFELL;
                                          v283 = sub_1929BB0(
                                                   (__int64)v11,
                                                   v316.m128_i64[0],
                                                   v191,
                                                   3u,
                                                   v329.m128_u64[0] & 0xFFFFFFFFFFFFFFFELL,
                                                   (_QWORD *)(v186 & 0xFFFFFFFFFFFFFFFELL),
                                                   v34,
                                                   a8,
                                                   0);
                                          v268 = v283;
                                          if ( v283 <= 1 )
                                            goto LABEL_142;
                                          v267 = sub_1929BB0(
                                                   (__int64)v11,
                                                   v316.m128_i64[0],
                                                   v191,
                                                   2u,
                                                   v283 & 0xFFFFFFFFFFFFFFFELL,
                                                   v317.m128i_i64[0],
                                                   v34,
                                                   a8,
                                                   0);
                                        }
                                        else
                                        {
                                          if ( v329.m128_u64[0] <= 1 )
                                            goto LABEL_142;
                                          v267 = v329.m128_u64[0];
                                          v268 = v329.m128_u64[0];
                                        }
                                        v269 = sub_1929BB0(
                                                 (__int64)v11,
                                                 v316.m128_i64[0],
                                                 v191,
                                                 6u,
                                                 v329.m128_u64[0] & 0xFFFFFFFFFFFFFFFELL,
                                                 (_QWORD *)(v267 & 0xFFFFFFFFFFFFFFFELL),
                                                 v34,
                                                 a8,
                                                 0);
                                        v270 = *((_QWORD *)v192 + 3);
                                        v329.m128_u64[0] = v269;
                                        v271 = *(_QWORD *)(v270 + 16);
                                        v317.m128i_i64[0] = v270;
                                        v349 = v271;
                                        v274 = sub_C00A40(v270, v271, v270, v272, v273);
                                        v317.m128i_i64[0] = sub_1AE6AB0(
                                                              (__int64)v11,
                                                              v349,
                                                              *(_QWORD *)(v317.m128i_i64[0] + 8),
                                                              v274,
                                                              1);
                                        v275 = *((_QWORD *)v192 + 5) & 0xFFFFFFFFFFFFFFFELL;
                                        if ( !v192[104]
                                          && (v275 = sub_1B00390(
                                                       v11,
                                                       (_QWORD *)(*((_QWORD *)v192 + 5) & 0xFFFFFFFFFFFFFFFELL),
                                                       (__int64)v320,
                                                       ".capture_expr.",
                                                       0xEu,
                                                       v34,
                                                       a8),
                                              v275 == 1)
                                          || !v275
                                          || (v276 = v317.m128i_i64[0] & 0xFFFFFFFFFFFFFFFELL,
                                              v277 = *(_QWORD *)((v317.m128i_i64[0] & 0xFFFFFFFFFFFFFFFELL) + 8),
                                              v278 = *(_QWORD *)&byte_8[*(_QWORD *)((v275 & 0xFFFFFFFFFFFFFFFELL) + 8)
                                                                      & 0xFFFFFFFFFFFFFFF0LL],
                                              (v278 & 0xFFFFFFFFFFFFFFF8LL
                                             | ((unsigned __int8)v278
                                              | (unsigned __int8)*(_QWORD *)((v275 & 0xFFFFFFFFFFFFFFFELL) + 8))
                                             & 7) != (((unsigned __int8)v277
                                                     | (unsigned __int8)*(_QWORD *)&byte_8[v277 & 0xFFFFFFFFFFFFFFF0LL])
                                                    & 7
                                                    | *(_QWORD *)&byte_8[v277 & 0xFFFFFFFFFFFFFFF0LL]
                                                    & 0xFFFFFFFFFFFFFFF8LL))
                                          && (v349 = v317.m128i_i64[0] & 0xFFFFFFFFFFFFFFFELL,
                                              v275 = sub_1BFA490(v11, v275 & 0xFFFFFFFFFFFFFFFELL, v277, 3, 1),
                                              v276 = v349,
                                              v275 <= 1)
                                          || (v349 = sub_1929BB0(
                                                       (__int64)v11,
                                                       v316.m128_i64[0],
                                                       v191,
                                                       0x15u,
                                                       v276,
                                                       (_QWORD *)(v275 & 0xFFFFFFFFFFFFFFFELL),
                                                       v34,
                                                       a8,
                                                       0),
                                              v349 <= 1)
                                          || (v279 = sub_1B005B0(
                                                       (__int64)v11,
                                                       v316.m128_i64[0],
                                                       v191,
                                                       v317.m128i_u64[0],
                                                       *((_QWORD *)v192 + 5),
                                                       v268,
                                                       v34,
                                                       a8,
                                                       *((_QWORD *)v192 + 6),
                                                       v192[56],
                                                       v192[104],
                                                       (__int64)v320),
                                              v279 <= 1)
                                          || (v280 = sub_1B005B0(
                                                       (__int64)v11,
                                                       v316.m128_i64[0],
                                                       v191,
                                                       v317.m128i_u64[0],
                                                       *((_QWORD *)v192 + 5),
                                                       *((_QWORD *)v192 + 2),
                                                       v34,
                                                       a8,
                                                       *((_QWORD *)v192 + 6),
                                                       v192[56],
                                                       v192[104],
                                                       (__int64)v320),
                                              v280 <= 1) )
                                        {
LABEL_142:
                                          v18 = v314;
                                          goto LABEL_143;
                                        }
                                        v156 = 8 * v193;
                                        *(_QWORD *)(*(_QWORD *)(a10 + 152) + 8 * v193) = *((_QWORD *)v192 + 3);
                                        *(_QWORD *)(*(_QWORD *)(a10 + 200) + 8 * v193) = *((_QWORD *)v192 + 4);
                                        v281 = v192[104] == 0;
                                        *(_QWORD *)(*(_QWORD *)(a10 + 248) + 8 * v193) = v349 & 0xFFFFFFFFFFFFFFFELL;
                                        *(_QWORD *)(*(_QWORD *)(a10 + 296) + 8 * v193) = v279 & 0xFFFFFFFFFFFFFFFELL;
                                        *(_QWORD *)(*(_QWORD *)(a10 + 344) + 8 * v193) = v280 & 0xFFFFFFFFFFFFFFFELL;
                                        *(_QWORD *)(*(_QWORD *)(a10 + 392) + 8 * v193) = 0;
                                        *(_QWORD *)(*(_QWORD *)(a10 + 440) + 8 * v193) = 0;
                                        *(_QWORD *)(*(_QWORD *)(a10 + 488) + 8 * v193) = 0;
                                        if ( !v281 || v192[105] )
                                        {
                                          v282 = *((_DWORD *)v192 + 27) - 1;
                                          *(_QWORD *)(*(_QWORD *)(a10 + 392) + 8 * v193) = *(_QWORD *)(*(_QWORD *)(a10 + 152) + 8LL * v282);
                                          *(_QWORD *)(*(_QWORD *)(a10 + 440) + 8 * v193) = *(_QWORD *)(*(_QWORD *)(a10 + 248) + 8LL * v282);
                                          *(_QWORD *)(*(_QWORD *)(a10 + 488) + 8 * v193) = *((_QWORD *)v192 + 14);
                                        }
                                      }
                                      v18 = v314;
                                      *(_QWORD *)a10 = v322;
                                      v252 = _mm_loadh_ps((const double *)&v338);
                                      v253 = _mm_loadh_ps((const double *)&v342);
                                      v329 = _mm_loadh_ps((const double *)&v340);
                                      v317 = (__m128i)v253;
                                      *(_QWORD *)(a10 + 8) = v328 & 0xFFFFFFFFFFFFFFFELL;
                                      v316 = _mm_loadh_ps((const double *)&v332);
                                      v315 = (__m128i)v252;
                                      *(_QWORD *)(a10 + 16) = v318 & 0xFFFFFFFFFFFFFFFELL;
                                      v254 = sub_1AF29F0((__int64)v11, 0, 0, v156, v157, v253, a8);
                                      v255 = v320;
                                      v256 = v323;
                                      *(_QWORD *)(a10 + 24) = v254 & 0xFFFFFFFFFFFFFFFELL;
                                      *(_QWORD *)(a10 + 32) = v319 & 0xFFFFFFFFFFFFFFFELL;
                                      v261 = sub_1AEDEF0(v256, (__int64)v255, v257, v258, v259, v260);
                                      si128 = _mm_load_si128((const __m128i *)&xmmword_23AA750);
                                      v263 = _mm_load_si128((const __m128i *)&v329);
                                      v264 = _mm_load_si128(&v317);
                                      *(_QWORD *)(a10 + 536) = v261;
                                      v265 = _mm_load_si128((const __m128i *)&v316);
                                      *(_QWORD *)(a10 + 40) = v346 & 0xFFFFFFFFFFFFFFFELL;
                                      *(_QWORD *)(a10 + 48) = v347 & 0xFFFFFFFFFFFFFFFELL;
                                      *(_QWORD *)(a10 + 56) = v348 & 0xFFFFFFFFFFFFFFFELL;
                                      *(_QWORD *)(a10 + 72) = v333 & 0xFFFFFFFFFFFFFFFELL;
                                      *(_QWORD *)(a10 + 80) = v321;
                                      *(_QWORD *)(a10 + 64) = v339 & 0xFFFFFFFFFFFFFFFELL;
                                      *(__m128i *)(a10 + 88) = _mm_and_si128(v263, si128);
                                      *(__m128i *)(a10 + 104) = _mm_and_si128(v264, si128);
                                      *(__m128i *)(a10 + 120) = _mm_and_si128(v265, si128);
                                      v266 = v331;
                                      *(__m128i *)(a10 + 136) = _mm_and_si128(si128, v315);
                                      *(_QWORD *)(a10 + 544) = v266 & 0xFFFFFFFFFFFFFFFELL;
                                      *(_QWORD *)(a10 + 552) = v330 & 0xFFFFFFFFFFFFFFFELL;
                                      *(_QWORD *)(a10 + 560) = v336 & 0xFFFFFFFFFFFFFFFELL;
                                      *(_QWORD *)(a10 + 568) = v343 & 0xFFFFFFFFFFFFFFFELL;
                                      *(_QWORD *)(a10 + 576) = v344 & 0xFFFFFFFFFFFFFFFELL;
                                      *(_QWORD *)(a10 + 584) = v337 & 0xFFFFFFFFFFFFFFFELL;
                                      *(_QWORD *)(a10 + 592) = v327 & 0xFFFFFFFFFFFFFFFELL;
                                      *(_QWORD *)(a10 + 600) = v345 & 0xFFFFFFFFFFFFFFFELL;
                                      *(_QWORD *)(a10 + 608) = v325 & 0xFFFFFFFFFFFFFFFELL;
                                      goto LABEL_144;
                                    }
                                    goto LABEL_143;
                                  }
                                  v297 = v331 & 0xFFFFFFFFFFFFFFFELL;
                                  v298 = sub_1929BB0(
                                           (__int64)v11,
                                           v316.m128_i64[0],
                                           v140,
                                           5u,
                                           v331 & 0xFFFFFFFFFFFFFFFELL,
                                           (_QWORD *)v327,
                                           v34,
                                           a8,
                                           0);
                                  v299 = sub_1929BB0(
                                           (__int64)v11,
                                           v316.m128_i64[0],
                                           v140,
                                           0x15u,
                                           v297,
                                           (_QWORD *)(v298 & 0xFFFFFFFFFFFFFFFELL),
                                           v34,
                                           a8,
                                           0);
                                  v337 = sub_1AF29F0((__int64)v11, v299 & 0xFFFFFFFFFFFFFFFELL, 0, v300, v301, v34, a8);
                                  if ( v337 > 1 )
                                  {
                                    v302 = v330 & 0xFFFFFFFFFFFFFFFELL;
                                    v303 = sub_1929BB0(
                                             (__int64)v11,
                                             v316.m128_i64[0],
                                             v140,
                                             5u,
                                             v330 & 0xFFFFFFFFFFFFFFFELL,
                                             (_QWORD *)v327,
                                             v34,
                                             a8,
                                             0);
                                    if ( v303 > 1 )
                                    {
                                      v146 = sub_1929BB0(
                                               (__int64)v11,
                                               v316.m128_i64[0],
                                               v140,
                                               0x15u,
                                               v302,
                                               (_QWORD *)(v303 & 0xFFFFFFFFFFFFFFFELL),
                                               v34,
                                               a8,
                                               0)
                                           & 0xFFFFFFFFFFFFFFFELL;
                                      v327 = sub_1AF29F0((__int64)v11, v146, 0, v304, v305, v34, a8);
                                      if ( v327 > 1 )
                                        goto LABEL_108;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
LABEL_143:
                      v16 = 0;
                      goto LABEL_144;
                    }
                    if ( v119 )
                      goto LABEL_206;
                    goto LABEL_267;
                  }
                  v134 = 12;
                  v326 = (unsigned __int64)v321;
LABEL_91:
                  v119 = v37;
                  v135 = v316.m128_u64[0];
                  v346 = sub_1929BB0(
                           (__int64)v11,
                           v316.m128_i64[0],
                           (unsigned int)v325,
                           v134,
                           v322,
                           (_QWORD *)v326,
                           v34,
                           a8,
                           0);
                  goto LABEL_92;
                }
LABEL_89:
                LODWORD(v325) = sub_EEB7E0(v317.m128i_u64[0], v111, *(double *)v34.m128_u64);
                v126 = v326 & 0xFFFFFFFFFFFFFFFELL;
                v321 = (unsigned __int64 *)(v326 & 0xFFFFFFFFFFFFFFFELL);
                v127 = sub_18C1B30((__int64)v11, 0, 1);
                v311 = v128;
                v129 = sub_1929BB0(
                         (__int64)v11,
                         v316.m128_i64[0],
                         (unsigned int)v325,
                         5u,
                         v126,
                         (_QWORD *)(v127 & 0xFFFFFFFFFFFFFFFELL),
                         v34,
                         a8,
                         0);
                v326 = sub_1AF29F0((__int64)v11, v129 & 0xFFFFFFFFFFFFFFFELL, 0, v130, v131, v34, a8)
                     & 0xFFFFFFFFFFFFFFFELL;
                v132 = sub_FFE580(a1);
                if ( !v132 )
                {
                  v132 = sub_FFEEE0(a1, v311, v133);
                  if ( !v132 )
                  {
                    v132 = sub_FFE5D0(a1);
                    if ( !v132 )
                    {
                      if ( sub_FFED80(a1, v311, v248, v249) )
                      {
LABEL_206:
                        v37 = v327;
                        v134 = 10;
                        goto LABEL_91;
                      }
                      goto LABEL_204;
                    }
                  }
                }
                v37 = v132;
                v134 = 10;
                goto LABEL_91;
              }
              v120 += 120;
            }
            if ( *v120 )
            {
              v120 += 120;
              goto LABEL_258;
            }
            goto LABEL_172;
          }
          if ( (unsigned __int64)v67 <= 1 )
          {
            v318 = v326;
            goto LABEL_60;
          }
          v322 = (__int64)v67;
          v318 = v326;
        }
        v204 = v322 & 0xFFFFFFFFFFFFFFFELL;
        v205 = *(_QWORD *)(*(_QWORD *)((v322 & 0xFFFFFFFFFFFFFFFELL) + 8) & 0xFFFFFFFFFFFFFFF0LL);
        if ( sub_A97D20((__int64)v323, v205) == 32 )
        {
          if ( v16 == 1 || (_BYTE)v325 )
          {
            v318 = v322;
          }
          else
          {
            v231 = v326 & 0xFFFFFFFFFFFFFFFELL;
            v234 = sub_F65320(*(_QWORD *)(*(_QWORD *)(v204 + 8) & 0xFFFFFFFFFFFFFFF0LL), v205, v206, v207, v208, v209);
            if ( v231 )
            {
              sub_C3EB00((__int64)v321, v231, v11[31], nullptr, v232, v233);
              if ( v362.m128_i8[8] )
              {
                v235 = v362.m128_i32[0];
                if ( v234 )
                {
                  v236 = 1LL << (v362.m128_i8[0] - 1);
                  if ( v362.m128_i32[0] <= 0x40u )
                  {
                    if ( (v236 & v361) != 0 )
                    {
                      if ( v362.m128_i32[0] )
                      {
                        _BitScanReverse64(&v284, ~(v361 << (64 - v362.m128_i8[0])));
                        v237 = v284 ^ 0x3F;
                        if ( v361 << (64 - v362.m128_i8[0]) == -1 )
                          v237 = 64;
                      }
                      else
                      {
                        v237 = 0;
                      }
                    }
                    else
                    {
                      _BitScanReverse64(&v289, v361);
                      v290 = v289 ^ 0x3F;
                      v291 = 64;
                      if ( v361 )
                        v291 = v290;
                      v237 = v291 + v362.m128_i32[0] - 64;
                    }
                  }
                  else if ( (v236 & *(_QWORD *)(v361 + 8LL * ((unsigned int)(v362.m128_i32[0] - 1) >> 6))) != 0 )
                  {
                    v237 = sub_2206800(v321);
                  }
                  else
                  {
                    v237 = sub_2206780(v321);
                  }
                  v238 = (unsigned int)(v235 + 1 - v237) <= 0x20;
                }
                else
                {
                  if ( v362.m128_i32[0] > 0x40u )
                  {
                    v288 = sub_2206780(v321);
                  }
                  else
                  {
                    _BitScanReverse64(&v285, v361);
                    v286 = v285 ^ 0x3F;
                    v287 = 64;
                    if ( v361 )
                      v287 = v286;
                    v288 = v287 + v362.m128_i32[0] - 64;
                  }
                  v238 = (unsigned int)(v235 - v288) <= 0x20;
                }
                sub_98E4B0((__int64)v321);
                v239 = v322;
                if ( !v238 )
                  v239 = v326;
                v318 = v239;
              }
              else
              {
                sub_98E4B0((__int64)v321);
              }
            }
          }
        }
        goto LABEL_60;
      }
    }
  }
LABEL_144:
  if ( v368 != v18 + 2 )
    free(v368);
  sub_1AF4310((__int64)v320);
LABEL_17:
  if ( !v359 )
    free(ptr[0]);
  return v16;
}
