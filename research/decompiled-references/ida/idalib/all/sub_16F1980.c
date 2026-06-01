void __fastcall sub_16F1980(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        _BYTE *a5,
        char a6,
        __m128i a7,
        double a8)
{
  __int64 *v8; // r14
  __int64 v9; // r12
  __int64 v10; // r13
  __int64 v13; // rax
  unsigned __int16 v14; // cx
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int16 v20; // ax
  int v21; // edx
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // r15
  int v25; // ecx
  unsigned __int64 v26; // rax
  __int64 v27; // rax
  bool v28; // al
  __int64 v29; // rdx
  __int64 v30; // r15
  bool v31; // al
  __int64 v32; // rdx
  __int64 v33; // rdx
  unsigned __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rsi
  unsigned __int8 v37; // r15
  unsigned __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int16 v43; // r15
  __int64 v44; // rax
  bool v45; // al
  unsigned __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // rax
  unsigned int v50; // eax
  __int64 v51; // r8
  __int64 v52; // r9
  int v53; // eax
  int v54; // r15d
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // rax
  void **v59; // rsi
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // rax
  __int64 v67; // rdx
  _QWORD *v68; // rcx
  __int64 v69; // r8
  __int64 v70; // r9
  int v71; // edx
  unsigned int v72; // r15d
  __int64 v73; // rdx
  _QWORD *v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 v77; // rdx
  __int64 v78; // r8
  __int64 v79; // r9
  __int64 v80; // rcx
  __int64 v81; // rax
  __int64 v82; // r8
  __int64 *v83; // rdi
  void *v84; // rdi
  __int64 v85; // rax
  __int64 v86; // rdx
  unsigned int v87; // eax
  __int64 v88; // r9
  __int64 v89; // r8
  __int64 v90; // rax
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // r8
  char v94; // r14
  int v95; // eax
  void *v96; // rdi
  __int64 v97; // rax
  unsigned __int64 v98; // rax
  unsigned __int64 v99; // r15
  __int64 v100; // r15
  unsigned int v101; // r15d
  __int64 v102; // rax
  __int64 v103; // rdx
  int v104; // edx
  __int64 v105; // rax
  __int64 v106; // r8
  __int64 v107; // r9
  _QWORD *v108; // rdi
  __int64 v109; // r15
  __int64 v110; // rdx
  _BOOL8 v111; // rdx
  int v112; // eax
  __int16 v113; // ax
  __int64 v114; // rax
  unsigned __int64 v115; // rdi
  unsigned __int64 v116; // rax
  bool v117; // r14
  __int64 v118; // r12
  __int64 v119; // rdx
  __int64 v120; // rcx
  __int64 v121; // r8
  __int64 v122; // r9
  __int64 v123; // r12
  __int64 v124; // rax
  __int64 v125; // rax
  int v126; // edx
  _WORD *v127; // rdi
  __int64 v128; // rax
  __int64 v129; // r9
  __int64 v130; // rax
  __int64 v131; // r9
  bool v132; // r15
  __int64 v133; // rdx
  __int64 v134; // rcx
  __int64 v135; // r8
  unsigned int v136; // eax
  void *v137; // rdi
  __int64 v138; // rdx
  __int64 v139; // rcx
  __int64 v140; // r8
  __int64 v141; // r13
  __int64 v142; // rax
  __int64 v143; // r13
  __int64 v144; // rax
  __int64 v145; // r9
  __int64 v146; // rax
  __int64 v147; // rdi
  __int64 v148; // rdx
  __int64 v149; // rcx
  __int64 v150; // r8
  __int64 v151; // r9
  unsigned int v152; // r9d
  __int64 v153; // rsi
  __int64 v154; // rcx
  __int64 v155; // r8
  __int64 v156; // r9
  unsigned __int64 v157; // r12
  __int64 v158; // rax
  unsigned __int64 v159; // rax
  __int64 v160; // r14
  unsigned __int64 v161; // rax
  __int64 v162; // r13
  _QWORD *v163; // rax
  __int64 v164; // rdx
  __int64 v165; // rcx
  __int64 v166; // r8
  __int64 v167; // r9
  _QWORD *v168; // rax
  int v169; // eax
  __int64 v170; // r8
  __int64 v171; // r9
  unsigned int v172; // r12d
  __int64 v173; // rdx
  __int64 v174; // rcx
  __int64 v175; // r8
  unsigned int v176; // eax
  __int64 v177; // rdx
  __int64 v178; // rcx
  __int64 v179; // r8
  __int64 v180; // rdx
  __int64 v181; // r13
  __int64 v182; // rax
  __int64 v183; // rax
  __int64 v184; // rax
  const char *v185; // rax
  __int64 v186; // rdx
  const char *v187; // r15
  size_t v188; // rax
  __int32 v189; // edx
  __int64 v190; // rax
  __int64 v191; // r8
  __int64 v192; // rax
  __int64 v193; // rsi
  __int64 v194; // rcx
  void *v195; // rax
  __int64 v196; // rdx
  __int64 v197; // rcx
  __int64 v198; // r8
  unsigned int v199; // eax
  int v200; // eax
  int v201; // r14d
  __int64 v202; // rax
  __int64 v203; // rbp
  __int64 *v204; // r12
  __int64 v205; // rax
  char v206; // al
  __int64 v207; // rbp
  __int64 v208; // rsi
  char v209; // r12
  __int64 v210; // rdx
  __int64 v211; // rcx
  __int64 v212; // r8
  int v213; // eax
  void *v214; // rdi
  int v215; // r12d
  int v216; // eax
  unsigned int v217; // r15d
  void **v218; // rsi
  __int64 v219; // rax
  __int64 v220; // rax
  bool v221; // zf
  __int64 v222; // rax
  __int64 v223; // rdx
  __int64 v224; // rcx
  __int64 v225; // r8
  unsigned int v226; // eax
  void *v227; // rax
  __int64 v228; // rdx
  __int64 v229; // rcx
  __int64 v230; // r8
  unsigned int v231; // eax
  int v232; // r12d
  void **v233; // rax
  const char *v234; // rdx
  size_t v235; // rax
  void **v236; // rdx
  __int64 v237; // r8
  size_t v238; // r14
  unsigned __int64 v239; // rax
  void *v240; // rsi
  void *v241; // rax
  __int64 v242; // rdx
  __int64 v243; // rcx
  __int64 v244; // r8
  unsigned int v245; // eax
  unsigned int v246; // eax
  __int64 v247; // r12
  unsigned __int64 *v248; // rsi
  __int64 v249; // rax
  __int64 v250; // r12
  __int64 v251; // rax
  __int64 v252; // rdx
  __int64 v253; // rcx
  __int64 v254; // rbx
  __int64 v255; // r8
  __int64 v256; // r9
  void *v257; // rax
  _QWORD *v258; // rax
  __int64 v259; // rdx
  __int64 v260; // rcx
  __int64 v261; // r8
  __int64 v262; // r9
  __int64 v263; // r9
  __int64 v264; // rdx
  __int64 v265; // r12
  bool v266; // r12
  __int64 v267; // rdx
  __int64 v268; // rcx
  __int64 v269; // r8
  __int64 v270; // r9
  unsigned __int64 v271; // rax
  __int64 *v272; // rbp
  void *v273; // rax
  __int64 v274; // rdx
  __int64 v275; // rcx
  __int64 v276; // r8
  unsigned int v277; // eax
  __int64 v278; // rdx
  __int64 v279; // rcx
  __int64 v280; // r8
  __int64 v281; // r9
  __int64 v282; // r14
  void *v283; // rax
  _QWORD *v284; // rax
  __int64 v285; // rdx
  __int64 v286; // rcx
  __int64 v287; // r8
  __int64 v288; // r9
  __int64 v289; // r14
  void *v290; // rax
  _QWORD *v291; // rax
  __int64 v292; // rdx
  __int64 v293; // rcx
  __int64 v294; // r8
  __int64 v295; // r9
  __int64 v296; // r14
  void *v297; // rax
  _QWORD *v298; // rax
  void *v299; // rax
  __int64 v300; // rdx
  __int64 v301; // rcx
  __int64 v302; // r8
  unsigned int v303; // eax
  void *v304; // rax
  __int64 v305; // rdx
  __int64 v306; // rcx
  __int64 v307; // r8
  unsigned int v308; // eax
  void **v309; // rdi
  void **v310; // rax
  int v311; // r12d
  bool v312; // al
  unsigned int v313; // r14d
  int v315; // [rsp+0h] [rbp-230h]
  unsigned int v316; // [rsp+Ch] [rbp-224h]
  unsigned __int64 v318; // [rsp+10h] [rbp-220h]
  unsigned int v319; // [rsp+10h] [rbp-220h]
  int v320; // [rsp+10h] [rbp-220h]
  unsigned int v321; // [rsp+10h] [rbp-220h]
  void *v322; // [rsp+10h] [rbp-220h]
  int v323; // [rsp+10h] [rbp-220h]
  __int64 src; // [rsp+18h] [rbp-218h]
  char srca; // [rsp+18h] [rbp-218h]
  void **srcb; // [rsp+18h] [rbp-218h]
  char v328; // [rsp+20h] [rbp-210h]
  __int64 v329; // [rsp+28h] [rbp-208h]
  __int64 v330; // [rsp+28h] [rbp-208h]
  void *v331; // [rsp+28h] [rbp-208h]
  unsigned int v332; // [rsp+30h] [rbp-200h]
  int v333; // [rsp+38h] [rbp-1F8h]
  int v334; // [rsp+40h] [rbp-1F0h]
  __int64 v335; // [rsp+40h] [rbp-1F0h]
  unsigned __int64 v336; // [rsp+48h] [rbp-1E8h]
  __int64 v337; // [rsp+48h] [rbp-1E8h]
  unsigned int v338; // [rsp+50h] [rbp-1E0h]
  unsigned int v339; // [rsp+50h] [rbp-1E0h]
  char v340; // [rsp+5Fh] [rbp-1D1h] BYREF
  __int64 v341; // [rsp+60h] [rbp-1D0h] BYREF
  unsigned __int64 v342; // [rsp+68h] [rbp-1C8h] BYREF
  __int64 v343; // [rsp+70h] [rbp-1C0h] BYREF
  int v344; // [rsp+78h] [rbp-1B8h]
  __int64 v345; // [rsp+7Ch] [rbp-1B4h] BYREF
  int v346; // [rsp+84h] [rbp-1ACh]
  void *v347; // [rsp+88h] [rbp-1A8h] BYREF
  unsigned int v348; // [rsp+90h] [rbp-1A0h]
  char v349; // [rsp+94h] [rbp-19Ch]
  int v350; // [rsp+98h] [rbp-198h]
  void *v351; // [rsp+A8h] [rbp-188h] BYREF
  unsigned __int64 v352; // [rsp+B0h] [rbp-180h]
  char v353; // [rsp+B8h] [rbp-178h]
  void *v354; // [rsp+C8h] [rbp-168h] BYREF
  unsigned __int64 v355; // [rsp+D0h] [rbp-160h]
  int v356; // [rsp+D8h] [rbp-158h] BYREF
  void *ptr; // [rsp+E8h] [rbp-148h] BYREF
  __m128i si128; // [rsp+F0h] [rbp-140h] BYREF
  _BYTE v359[24]; // [rsp+100h] [rbp-130h] BYREF
  void *v360; // [rsp+118h] [rbp-118h] BYREF
  __m128i v361; // [rsp+120h] [rbp-110h] BYREF
  void *v362; // [rsp+130h] [rbp-100h] BYREF
  unsigned int v363; // [rsp+138h] [rbp-F8h]
  char v364; // [rsp+13Ch] [rbp-F4h]
  __int64 v365; // [rsp+140h] [rbp-F0h] BYREF
  void *v366; // [rsp+168h] [rbp-C8h] BYREF
  __m128i v367; // [rsp+170h] [rbp-C0h] BYREF
  void *v368; // [rsp+180h] [rbp-B0h] BYREF
  unsigned __int8 *v369; // [rsp+188h] [rbp-A8h] BYREF
  int v370; // [rsp+190h] [rbp-A0h]
  char v371; // [rsp+1E0h] [rbp-50h]
  unsigned int v372; // [rsp+1E8h] [rbp-48h]
  char v373; // [rsp+1ECh] [rbp-44h]

  if ( ((*(_DWORD *)a2 >> 14) & 0xC) != 0 )
    return;
  v8 = (__int64 *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  v9 = *(_QWORD *)(*(_QWORD *)&byte_8[*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL);
  v10 = *(_QWORD *)(*(_QWORD *)&byte_8[a3 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL);
  if ( v9 == v10 || (*(_BYTE *)(v10 + 17) & 4) != 0 || !(_DWORD)a4 )
    return;
  v316 = a4;
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 7 )
  {
    v87 = sub_C00A40(a2, a2, a3, a4, (__int64)a5);
    sub_168B9F0((__int64)&v366, (__int64 *)(a1 + 8), v87, 0x1983u, 0);
    sub_15F7200(&v366);
  }
  v13 = *(_QWORD *)(*(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v13 + 16) == 13 && ((*(_WORD *)(v13 + 18) >> 3) & 0x1FF) == 0x1B4 )
  {
    v14 = *(_WORD *)a2 & 0x1FF;
    if ( v14 == 9 )
    {
      sub_16CF590(a1, a2, *(_QWORD *)(a2 + 8), a3, v316, 0x1B68u, *(double *)a7.m128i_i64, 0);
      return;
    }
    if ( v14 <= 0x2Au && ((0x4C020000000uLL >> *(_BYTE *)a2) & 1) != 0 )
    {
      sub_16CF590(a1, a2, *(_QWORD *)(a2 + 8), a3, v316, 0x1B65u, *(double *)a7.m128i_i64, 0);
      return;
    }
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 42 || sub_16C4770(v9) )
      sub_16F09D0(a1, a2, 0, 0, v316 | ((unsigned __int64)v316 << 32), *(double *)a7.m128i_i64, a8);
  }
  v15 = a3;
  if ( (unsigned __int8)sub_1A86C10(*(_QWORD *)(a1 + 736), a3) )
  {
    v15 = *(_QWORD *)(a1 + 248);
    if ( sub_F60F80(v9, v15, v16, v17, v18, v19) )
    {
      v86 = *(_QWORD *)(a1 + 248);
      LOWORD(v360) = 0;
      v15 = (__int64)&v360;
      v361.m128i_i8[12] &= ~1u;
      v361.m128i_i64[0] = 0;
      v361.m128i_i32[2] = 0;
      if ( (unsigned __int8)sub_C3F220(a2, (__int64)&v360, v86, 2, 0, v19) )
      {
        if ( (unsigned __int8)sub_142BC90((__int64)&v362, (char *)&dword_0 + 1)
          && (unsigned __int8)sub_142BC90((__int64)&v362, nullptr) )
        {
          v143 = *(_QWORD *)(a1 + 736);
          sub_168B9F0((__int64)&v366, (__int64 *)(a1 + 8), v316, 0x1B4Au, 0);
          sub_C1DEB0(&ptr, (unsigned int)&v360 + 24, 10, v364 ^ 1, 0, 1u, 0);
          v144 = sub_1682AF0((__int64)&v366, (__int64)&ptr);
          sub_1A92140(v143, a2, v144);
          if ( ptr != &si128.m128i_u64[1] )
            operator delete(ptr);
          sub_15F7200(&v366);
        }
        goto LABEL_124;
      }
      if ( v361.m128i_i32[2] > 1u )
        sub_A4F8E0(&v361.m128i_i32[2]);
    }
  }
  v20 = *(_WORD *)a2 & 0x1FF;
  if ( v20 == 42 )
  {
    v15 = v10 & 0xFFFFFFFFFFFFFFF0LL;
    sub_1A8F630(*(_QWORD *)(a1 + 736), v10 & 0xFFFFFFFFFFFFFFF0LL, a2);
  }
  else if ( v20 == 38 )
  {
    v15 = v10 & 0xFFFFFFFFFFFFFFF0LL;
    sub_1A8F7E0(*(_QWORD *)(a1 + 736), v10 & 0xFFFFFFFFFFFFFFF0LL, a2);
  }
  v21 = *(unsigned __int8 *)(v9 + 16);
  if ( (unsigned int)(v21 - 57) <= 1 )
  {
    if ( sub_F58380(v10) )
    {
      if ( sub_1629840(*(__int64 **)(a1 + 632), v10 & 0xFFFFFFFFFFFFFFF0LL, v9 & 0xFFFFFFFFFFFFFFF0LL) )
        return;
      v15 = v10 & 0xFFFFFFFFFFFFFFF0LL;
      if ( sub_1629DB0(*(__int64 **)(a1 + 632), v10 & 0xFFFFFFFFFFFFFFF0LL, v9 & 0xFFFFFFFFFFFFFFF0LL) )
        return;
    }
    if ( sub_F58410(v10) )
    {
      if ( sub_AA90B0(
             *(_QWORD *)(a1 + 248),
             v10 & 0xFFFFFFFFFFFFFFF0LL,
             v9 & 0xFFFFFFFFFFFFFFF0LL,
             v9 & 0xFFFFFFFFFFFFFFF0LL) )
      {
        return;
      }
      v15 = v10 & 0xFFFFFFFFFFFFFFF0LL;
      if ( sub_AB1240(*(__int64 **)(a1 + 248), v10 & 0xFFFFFFFFFFFFFFF0LL, v9 & 0xFFFFFFFFFFFFFFF0LL) )
        return;
    }
    v23 = *(unsigned __int8 *)(v10 + 16);
    if ( v23 == 57 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 89LL) & 1) == 0 )
        goto LABEL_26;
    }
    else
    {
      if ( v23 != 58 )
      {
        if ( !(unsigned __int8)sub_16C5190(*(__int64 **)(a1 + 272), v316) )
          sub_16CF590(a1, a2, *(_QWORD *)(a2 + 8), a3, v316, 0x1B6Cu, *(double *)a7.m128i_i64, 0);
        return;
      }
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 89LL) & 1) == 0 )
        goto LABEL_26;
    }
    v101 = *(_DWORD *)(v10 + 20);
    v102 = v9;
    v103 = (unsigned int)*(unsigned __int8 *)(v9 + 16) - 57;
    if ( (unsigned int)v103 > 1 )
      v102 = sub_F63050(v9, v15, v103, v22);
    if ( v101 < *(_DWORD *)(v102 + 20) )
      sub_16CF590(a1, a2, *(_QWORD *)(a2 + 8), a3, v316, 0x1B3Cu, *(double *)a7.m128i_i64, 0);
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 89LL) & 1) != 0 )
    {
LABEL_27:
      v9 = *(_QWORD *)(*(_QWORD *)(v9 + 32) & 0xFFFFFFFFFFFFFFF0LL);
      LOBYTE(v21) = *(_BYTE *)(v9 + 16);
      v10 = *(_QWORD *)(*(_QWORD *)(v10 + 32) & 0xFFFFFFFFFFFFFFF0LL);
      goto LABEL_28;
    }
LABEL_26:
    v24 = sub_A97D20(*(_QWORD *)(a1 + 248), v9);
    if ( v24 == sub_A97D20(*(_QWORD *)(a1 + 248), v10) )
      return;
    goto LABEL_27;
  }
LABEL_28:
  v25 = *(unsigned __int8 *)(v10 + 16);
  if ( (unsigned int)(v25 - 57) <= 1 )
  {
    v26 = *(_QWORD *)(v10 + 32) & 0xFFFFFFFFFFFFFFF0LL;
    v10 = *(_QWORD *)v26;
    LOBYTE(v25) = *(_BYTE *)(*(_QWORD *)v26 + 16LL);
  }
  if ( (_BYTE)v21 == 14 )
  {
    if ( (_BYTE)v25 != 14 )
    {
      if ( !(unsigned __int8)sub_16C5190(*(__int64 **)(a1 + 272), v316) )
      {
        v85 = *(_QWORD *)(*(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v85 + 16) != 13 || ((*(_WORD *)(v85 + 18) >> 3) & 0x1FF) != 0x1B4 )
          sub_16CF590(
            a1,
            a2,
            *(_QWORD *)(a2 + 8),
            a3,
            v316,
            (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 8) == 0 ? 6985 : 3941,
            *(double *)a7.m128i_i64,
            0);
      }
      return;
    }
    v9 = *(_QWORD *)(*(_QWORD *)(v9 + 32) & 0xFFFFFFFFFFFFFFF0LL);
    v98 = *(_QWORD *)(v10 + 32) & 0xFFFFFFFFFFFFFFF0LL;
    LOBYTE(v21) = *(_BYTE *)(v9 + 16);
    v10 = *(_QWORD *)v98;
    LOBYTE(v25) = *(_BYTE *)(*(_QWORD *)v98 + 16LL);
  }
  if ( (_BYTE)v21 == 13 )
  {
    v27 = 0;
    if ( (_BYTE)v25 == 13 )
      v27 = v10;
    src = v27;
    v28 = sub_F58380(v9);
    v29 = v9;
    if ( v28 )
    {
      v99 = *(_QWORD *)(v8[1] & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL;
      if ( sub_1629840(*(__int64 **)(a1 + 632), v99, v9 & 0xFFFFFFFFFFFFFFF0LL) )
        return;
      if ( sub_1629DB0(*(__int64 **)(a1 + 632), v99, v9 & 0xFFFFFFFFFFFFFFF0LL) )
        return;
      v100 = sub_A97D20(*(_QWORD *)(a1 + 248), v9);
      if ( v100 == sub_A97D20(*(_QWORD *)(a1 + 248), v10) )
        return;
      v29 = *(_QWORD *)(sub_F583D0(v9, *(_QWORD **)(a1 + 248)) & 0xFFFFFFFFFFFFFFF0LL);
    }
    if ( !src )
    {
      if ( (((*(_WORD *)(v9 + 18) >> 3) + 32) & 0x1FFu) > 7 )
      {
        v330 = v9;
        v9 = v29;
        goto LABEL_38;
      }
      goto LABEL_172;
    }
    v329 = v29;
    v30 = src;
    v31 = sub_F58380(src);
    v32 = v329;
    v330 = v9;
    v9 = v32;
    if ( !v31 )
    {
LABEL_37:
      if ( (((*(_WORD *)(v330 + 18) >> 3) + 32) & 0x1FFu) > 7 )
        goto LABEL_38;
      v113 = (*(_WORD *)(src + 18) >> 3) & 0x1FF;
      if ( ((v113 + 32) & 0x1FFu) <= 7 )
      {
        v169 = sub_A63830(*(_QWORD **)(a1 + 248), v330 & 0xFFFFFFFFFFFFFFF0LL, src & 0xFFFFFFFFFFFFFFF0LL);
        if ( v169 > 0 )
        {
          v180 = *(_QWORD *)(a1 + 248);
          v367.m128i_i8[12] &= ~1u;
          LOWORD(v366) = 0;
          v367.m128i_i64[0] = 0;
          v367.m128i_i32[2] = 0;
          if ( !(unsigned __int8)sub_C3D370(a2, (__int64)&v366, v180, 0, v170, v171)
            || (v181 = sub_A62D20(*(_QWORD **)(a1 + 248), v330 & 0xFFFFFFFFFFFFFFF0LL),
                v182 = sub_A62D20(*(_QWORD **)(a1 + 248), src & 0xFFFFFFFFFFFFFFF0LL),
                !(unsigned __int8)sub_16BDD80((__int64)&v367.m128i_i64[1], v182, v181)) )
          {
            if ( !(unsigned __int8)sub_16C5190(*(__int64 **)(a1 + 272), v316) )
              sub_16CF590(a1, a2, *(_QWORD *)(a2 + 8), a3, v316, 0x1B4Fu, *(double *)a7.m128i_i64, 0);
          }
          goto LABEL_79;
        }
        if ( v169 && !(unsigned __int8)sub_16C5190(*(__int64 **)(a1 + 272), v316) )
          sub_16CF590(a1, a2, *(_QWORD *)(a2 + 8), a3, v316, 0x1B4Cu, *(double *)a7.m128i_i64, 0);
        return;
      }
      if ( ((v113 + 76) & 0x1FFu) <= 0x13 )
      {
        v328 = sub_16C5190(*(__int64 **)(a1 + 272), v316);
        if ( v328 )
          return;
        v341 = a3;
        v114 = *(_QWORD *)(*(_QWORD *)(*v8 + 8) & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v114 + 16) == 13 )
          v328 = ((*(_WORD *)(v114 + 18) >> 3) & 0x1FF) == 436;
        v115 = a2;
        v332 = *(_DWORD *)(a1 + 11320);
        srca = v332 > *(_DWORD *)(a1 + 12596);
        v339 = *(_DWORD *)(a1 + 12596);
        v116 = sub_BFBAE0(a2);
        if ( (*(_WORD *)v116 & 0x1FF) == 4 && (unsigned int)(*(_BYTE *)(v116 + 2) >> 3) - 6 <= 1 )
        {
          v115 = *(_QWORD *)(v116 + 16);
          v116 = sub_BFBAE0(v115);
        }
        v117 = (*(_WORD *)a2 & 0x1FF) == 0x3E || (*(_WORD *)v116 & 0x1FF) == 62;
        a7.m128i_i64[0] = 0;
        v118 = sub_21F90B0(v115, v316);
        sub_21FBFD0(&v366, 0.0);
        sub_22023D0(&v354, &v366, v118);
        sub_21F9830(&v366);
        if ( !(unsigned __int8)sub_C3D710(a2, (__int64 *)&v354, *(_QWORD *)(a1 + 248), 2, 0) )
        {
          if ( (unsigned __int8)sub_1A86C10(*(_QWORD *)(a1 + 736), v341) )
          {
            v123 = *(_QWORD *)(a1 + 736);
            sub_168B9F0((__int64)&v366, (__int64 *)(a1 + 8), v316, 0x1B54u, 0);
            v360 = *(void **)(a2 + 8);
            v124 = sub_162B6D0((__int64)&v366, (__int64 *)&v360);
            sub_1A92140(v123, a2, v124);
            sub_15F7200(&v366);
          }
          else
          {
            sub_16CF590(a1, a2, *(_QWORD *)(a2 + 8), v341, v316, 0x1B4Eu, 0.0, srca);
          }
LABEL_171:
          sub_9955A0(&v354);
          goto LABEL_172;
        }
        v340 = 0;
        v209 = sub_F65540(*(_QWORD *)(v341 & 0xFFFFFFFFFFFFFFF0LL), (__int64)&v354, v119, v120, v121, v122);
        LODWORD(v352) = sub_AAC1F0(*(_QWORD *)(a1 + 248), v341, v210, v211, v212);
        if ( (unsigned int)v352 > 0x40 )
          sub_2205470(&v351, 0, 0);
        else
          v351 = nullptr;
        BYTE4(v352) = v209;
        v213 = sub_2202BA0(&v354, &v351, 0, &v340);
        v214 = v354;
        v215 = v213;
        si128 = _mm_load_si128((const __m128i *)&xmmword_23A8E00);
        ptr = v359;
        v216 = sub_21F9100(v354);
        v217 = (59 * v216 + 195) / 0xC4u;
        v331 = (void *)sub_21F90D0(v214, &v351, (59 * v216 + 195) % 0xC4u);
        if ( v354 == v331 )
          sub_2204E00(&v354, &ptr, v217, 3, 1);
        else
          sub_2203EA0(&v354, &ptr, v217, 3, 1);
        v218 = (void **)v341;
        if ( (unsigned __int8)sub_1A86C10(*(_QWORD *)(a1 + 736), v341) )
        {
          v218 = nullptr;
          if ( (unsigned __int8)sub_142BC90((__int64)&v351, nullptr) )
          {
            v218 = (void **)(&dword_0 + 1);
            if ( (unsigned __int8)sub_142BC90((__int64)&v351, (char *)&dword_0 + 1) )
            {
              v265 = *(_QWORD *)(a1 + 736);
              sub_168B9F0((__int64)&v366, (__int64 *)(a1 + 8), v316, 0x1B4Au, 0);
              if ( v371 )
              {
                sub_AEC220(&v369, ptr, si128.m128i_i64[0]);
              }
              else if ( v373 )
              {
                v282 = sub_168B9E0(&v366);
                v283 = (void *)v367.m128i_i64[1];
                if ( v367.m128i_i64[1] )
                  v283 = (void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v367.m128i_i64[1] + 32LL))(v367.m128i_i64[1]);
                v360 = v283;
                v284 = sub_1587BC0(v282, (__int64 *)&v360, v278, v279, v280, v281);
                sub_AEC220((unsigned __int8 **)(*v284 + 32LL * v372 + 8), ptr, si128.m128i_i64[0]);
              }
              sub_1A92140(v265, a2, &v366);
              sub_15F7200(&v366);
              goto LABEL_338;
            }
          }
        }
        if ( v215 )
        {
          if ( v328 != 1 && v215 == 1 )
          {
            sub_16CF590(a1, a2, *(_QWORD *)(a2 + 8), v341, v316, !v117 ? 6994 : 7010, 0.0, srca);
            goto LABEL_338;
          }
        }
        else if ( v340 )
        {
          if ( v117 )
          {
LABEL_338:
            if ( ptr != v359 )
              free(ptr);
            if ( (unsigned int)v352 > 0x40 && v351 )
              operator delete[](v351);
            goto LABEL_171;
          }
LABEL_510:
          sub_16CF590(a1, a2, *(_QWORD *)(a2 + 8), v341, v316, 0x1B4Eu, 0.0, srca);
          goto LABEL_338;
        }
        v232 = 7009;
        if ( v117 )
        {
LABEL_401:
          v360 = &v362;
          v361 = _mm_load_si128((const __m128i *)&xmmword_23A8E00);
          if ( !v328 )
          {
            v218 = &v360;
            sub_220BA90((unsigned int)&v351, (unsigned int)&v360, 10, BYTE4(v352) ^ 1, 0, 1, 0);
            v236 = &v362;
LABEL_409:
            if ( v332 > v339 )
            {
              sub_168B9B0((__int64)&v366, a1 + 8, v232);
              sub_AE9DF0((unsigned __int8 **)&v366, *(_QWORD *)(a2 + 8), 8u);
              v239 = sub_6D5440(&v341);
              sub_AE9DF0((unsigned __int8 **)&v366, v239, 8u);
              sub_AEC220((unsigned __int8 **)&v366, ptr, si128.m128i_i64[0]);
              v240 = v360;
              sub_AEC220((unsigned __int8 **)&v366, v360, v361.m128i_i64[0]);
              v241 = (void *)sub_EEC8C0(a2, (__int64)v240, 0.0);
              LOBYTE(v348) = 1;
              v347 = v241;
              sub_AEC610((__int64 *)&v366, (__int64 *)&v347);
              LOBYTE(v348) = 1;
              LODWORD(v347) = v316;
              HIDWORD(v347) = v316;
              sub_AEC610((__int64 *)&v366, (__int64 *)&v347);
              v245 = sub_C00A40(a2, (__int64)&v347, v242, v243, v244);
              sub_18CAED0(a1, v245, a2, &v366);
              if ( v366 && v367.m128i_i64[0] )
                sub_1580C40(v367.m128i_u64[0], (unsigned __int64)v366);
              goto LABEL_413;
            }
            v246 = sub_C00A40(a2, (__int64)v218, (__int64)v236, v339, v237);
            sub_168B9F0((__int64)&v366, (__int64 *)(a1 + 8), v246, v232, 0);
            v343 = *(_QWORD *)(a2 + 8);
            v247 = sub_162B6D0((__int64)&v366, &v343);
            v248 = &v342;
            v342 = sub_6D5440(&v341);
            v249 = sub_162B6D0(v247, (__int64 *)&v342);
            v250 = v249;
            if ( *(_BYTE *)(v249 + 120) )
            {
              v248 = (unsigned __int64 *)ptr;
              sub_AEC220((unsigned __int8 **)(v249 + 32), ptr, si128.m128i_i64[0]);
            }
            else
            {
              if ( !*(_BYTE *)(v249 + 132) )
              {
LABEL_417:
                v347 = (void *)sub_EEC8C0(a2, (__int64)v248, 0.0);
                v251 = sub_1587DB0(v250, (__int64 *)&v347);
                LODWORD(v345) = v316;
                HIDWORD(v345) = v316;
                sub_1587DB0(v251, &v345);
                sub_15F7200(&v366);
LABEL_413:
                if ( v360 != &v362 )
                  free(v360);
                goto LABEL_338;
              }
              v289 = sub_168B9E0((_QWORD *)v249);
              v290 = *(void **)(v250 + 16);
              if ( v290 )
                v290 = (void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v290 + 32LL))(*(_QWORD *)(v250 + 16));
              v347 = v290;
              v291 = sub_1587BC0(v289, (__int64 *)&v347, v285, v286, v287, v288);
              v248 = (unsigned __int64 *)ptr;
              sub_AEC220(
                (unsigned __int8 **)(*v291 + 32LL * *(unsigned int *)(v250 + 128) + 8),
                ptr,
                si128.m128i_i64[0]);
            }
            if ( *(_BYTE *)(v250 + 120) )
            {
              v248 = (unsigned __int64 *)v360;
              sub_AEC220((unsigned __int8 **)(v250 + 32), v360, v361.m128i_i64[0]);
            }
            else if ( *(_BYTE *)(v250 + 132) )
            {
              v296 = sub_168B9E0((_QWORD *)v250);
              v297 = *(void **)(v250 + 16);
              if ( v297 )
                v297 = (void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v297 + 32LL))(*(_QWORD *)(v250 + 16));
              v347 = v297;
              v298 = sub_1587BC0(v296, (__int64 *)&v347, v292, v293, v294, v295);
              v248 = (unsigned __int64 *)v360;
              sub_AEC220(
                (unsigned __int8 **)(*v298 + 32LL * *(unsigned int *)(v250 + 128) + 8),
                v360,
                v361.m128i_i64[0]);
            }
            goto LABEL_417;
          }
          v233 = &v354;
          if ( v354 == v331 )
            v233 = (void **)v355;
          v234 = "true";
          if ( (*((_BYTE *)v233 + 20) & 7) == 3 )
            v234 = "false";
          srcb = (void **)v234;
          v235 = j__strlen(v234);
          v238 = v235;
          if ( v235 > 0x10 )
          {
            sub_2236E10(&v360, &v362, v235, 1);
            v309 = (void **)((char *)v360 + v361.m128i_i64[0]);
          }
          else
          {
            if ( !v235 )
            {
LABEL_408:
              v361.m128i_i64[0] += v238;
              goto LABEL_409;
            }
            v309 = &v362;
          }
          v218 = srcb;
          memcpy(v309, srcb, v238);
          goto LABEL_408;
        }
        v218 = nullptr;
        if ( (unsigned __int8)sub_AC43F0((__int64)&v351, nullptr) )
        {
          v310 = &v354;
          if ( v354 == v331 )
            v310 = (void **)v355;
          v232 = 6995;
          if ( (*((_BYTE *)v310 + 20) & 7) == 3 )
            goto LABEL_510;
          goto LABEL_401;
        }
        v311 = v352;
        if ( BYTE4(v352) )
        {
          if ( (_DWORD)v352 )
          {
            if ( (unsigned int)v352 <= 0x40 )
              v312 = 0xFFFFFFFFFFFFFFFFLL >> (64 - (unsigned __int8)v352) == (_QWORD)v351;
            else
              v312 = (unsigned int)sub_2206980(&v351) == v311;
            v232 = 6993;
            if ( !v312 )
              goto LABEL_510;
            goto LABEL_401;
          }
        }
        else
        {
          v313 = v352 - 1;
          if ( (unsigned int)v352 <= 0x40 )
          {
            v232 = 6993;
            if ( (void *)((1LL << v313) - 1) != v351 && (void *)(1LL << v313) != v351 )
              goto LABEL_510;
            goto LABEL_401;
          }
          v218 = (void **)(1LL << v313);
          if ( ((1LL << v313) & *((_QWORD *)v351 + (v313 >> 6))) != 0 )
          {
            if ( (unsigned int)sub_22068B0(&v351) != v313 )
              goto LABEL_510;
          }
          else if ( (unsigned int)sub_2206980(&v351) != v313 )
          {
            goto LABEL_510;
          }
        }
        v232 = 6993;
        goto LABEL_401;
      }
LABEL_172:
      v125 = *(_QWORD *)(*(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v125 + 16) == 13
        && ((*(_WORD *)(v125 + 18) >> 3) & 0x1FF) == 0x1B4
        && ((*(_WORD *)a2 + 423) & 0x1FFu) <= 4 )
      {
        v126 = *(_DWORD *)(a2 + 16);
        if ( v126 )
        {
          v127 = *(_WORD **)(a2
                           + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + (unsigned __int64)(unsigned int)(v126 - 1) + 1)
                           + 32);
          if ( (*v127 & 0x1FF) == 0x4F )
          {
            v128 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(sub_BFBAE0((unsigned __int64)v127) + 8)
                                                     & 0xFFFFFFFFFFFFFFF0LL)
                                         + 8LL)
                             & 0xFFFFFFFFFFFFFFF0LL);
            if ( *(_BYTE *)(v128 + 16) == 13 && ((*(_WORD *)(v128 + 18) >> 3) & 0x1FF) == 0x1B4 )
              sub_16CF590(a1, a2, *(_QWORD *)(a2 + 8), a3, v316, 0x1B55u, *(double *)a7.m128i_i64, 0);
          }
        }
      }
      return;
    }
LABEL_88:
    v10 = *(_QWORD *)(sub_F583D0(v30, *(_QWORD **)(a1 + 248)) & 0xFFFFFFFFFFFFFFF0LL);
    if ( !v330 )
      goto LABEL_38;
    goto LABEL_37;
  }
  if ( (_BYTE)v25 != 13 )
  {
    v330 = 0;
    src = 0;
    goto LABEL_38;
  }
  v30 = v10;
  src = v10;
  v330 = 0;
  if ( sub_F58380(v10) )
    goto LABEL_88;
LABEL_38:
  v33 = *(_QWORD *)(*(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v34 = *(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL;
  v35 = *(_QWORD *)v34;
  v36 = *(unsigned __int8 *)(*(_QWORD *)v34 + 16LL);
  if ( *(_BYTE *)(v33 + 16) != 13 || (((*(_WORD *)(v33 + 18) >> 3) + 56) & 0x1FFu) > 0x17 )
  {
    if ( (_BYTE)v36 != 13 )
      goto LABEL_42;
    if ( (((*(_WORD *)(v35 + 18) >> 3) + 56) & 0x1FFu) > 0xB )
      goto LABEL_42;
    if ( !sub_9EC890(v9, v36, v33, v35, v18) )
      goto LABEL_42;
    v146 = *(unsigned int *)(a1 + 4624);
    v367.m128i_i64[0] = 0;
    LOWORD(v366) = 0;
    v367.m128i_i8[12] &= ~1u;
    v367.m128i_i32[2] = 0;
    if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 4616) + 640 * v146 - 640) - 4) <= 1 || *(_BYTE *)(a1 + 2440) )
      goto LABEL_42;
    v36 = (__int64)&v366;
    if ( !(unsigned __int8)sub_C3F220(a2, (__int64)&v366, *(_QWORD *)(a1 + 248), 2, 0, v145) )
      goto LABEL_195;
    LODWORD(v352) = (_DWORD)v369;
    if ( (unsigned int)v369 > 0x40 )
      sub_2205510(&v351);
    else
      v351 = v368;
    v147 = *(_QWORD *)(a1 + 248);
    BYTE4(v352) = BYTE4(v369);
    v36 = (__int64)&v351;
    LODWORD(v360) = sub_AAE100(v147, a3, v33, v35);
    sub_21F6EE0(&v354, &v351, &v360, &v345);
    if ( (_BYTE)v345 )
    {
      sub_168B9B0((__int64)&ptr, a1 + 8, 6989);
      sub_C1DEB0(&v360, (int)&v351, 10, BYTE4(v352) ^ 1, 0, 1u, 0);
      sub_AEC220((unsigned __int8 **)&ptr, v360, v361.m128i_i64[0]);
      sub_AE9DF0((unsigned __int8 **)&ptr, a3, 8u);
      v304 = (void *)sub_EEC8C0(a2, a3, *(double *)a7.m128i_i64);
      LOBYTE(v348) = 1;
      v347 = v304;
      sub_AEC610((__int64 *)&ptr, (__int64 *)&v347);
      LOBYTE(v348) = 1;
      LODWORD(v347) = v316;
      HIDWORD(v347) = v316;
      sub_AEC610((__int64 *)&ptr, (__int64 *)&v347);
      v308 = sub_C00A40(a2, (__int64)&v347, v305, v306, v307);
      sub_18CAED0(a1, v308, a2, &ptr);
      if ( v360 != &v361.m128i_u64[1] )
        operator delete(v360);
      if ( ptr && si128.m128i_i64[0] )
        sub_1580C40(si128.m128i_u64[0], (unsigned __int64)ptr);
      if ( (unsigned int)v355 > 0x40 && v354 )
        operator delete[](v354);
      goto LABEL_76;
    }
    if ( (unsigned int)v355 > 0x40 && v354 )
      operator delete[](v354);
    if ( (unsigned int)v352 <= 0x40 )
      goto LABEL_195;
    v137 = v351;
    if ( !v351 )
      goto LABEL_195;
    goto LABEL_194;
  }
  if ( (_BYTE)v36 == 13 && (((*(_WORD *)(v35 + 18) >> 3) + 56) & 0x1FFu) <= 0xB )
  {
    v190 = *(unsigned int *)(a1 + 4624);
    LOWORD(v366) = 0;
    v191 = 1;
    v367.m128i_i64[0] = 0;
    v192 = *(_QWORD *)(a1 + 4616) + 640 * v190;
    v367.m128i_i32[2] = 0;
    v367.m128i_i8[12] &= ~1u;
    if ( (unsigned int)(*(_DWORD *)(v192 - 640) - 4) > 1 )
      v191 = *(unsigned __int8 *)(a1 + 2440);
    v36 = (__int64)&v366;
    if ( !(unsigned __int8)sub_C3A6B0(a2, (__int64)&v366, *(_QWORD *)(a1 + 248), 2, v191, v19) )
      goto LABEL_195;
    v348 = (unsigned int)v369;
    if ( (unsigned int)v369 > 0x40 )
      sub_2205510(&v347);
    else
      v347 = v368;
    v193 = *(_QWORD *)(a1 + 248);
    v349 = BYTE4(v369);
    v350 = v370;
    sub_AAE300((__int64)&v351, v193, a3, v35);
    sub_AAE2D0((__int64)&v354, *(_QWORD *)(a1 + 248), a3, v194);
    if ( (int)sub_21EE7D0(&v347, &v351) > 0 || (v36 = (__int64)&v354, (int)sub_21EE7D0(&v347, &v354) < 0) )
    {
      sub_168B9B0((__int64)&ptr, a1 + 8, 6989);
      sub_C16B30(&v360, (__int64)&v347);
      sub_AEC220((unsigned __int8 **)&ptr, v360, v361.m128i_i64[0]);
      sub_AE9DF0((unsigned __int8 **)&ptr, a3, 8u);
      LOBYTE(v346) = 1;
      v345 = sub_EEC8C0(a2, a3, *(double *)a7.m128i_i64);
      sub_AEC610((__int64 *)&ptr, &v345);
      LOBYTE(v346) = 1;
      LODWORD(v345) = v316;
      HIDWORD(v345) = v316;
      sub_AEC610((__int64 *)&ptr, &v345);
      v226 = sub_C00A40(a2, (__int64)&v345, v223, v224, v225);
      sub_18CAED0(a1, v226, a2, &ptr);
      if ( v360 != &v361.m128i_u64[1] )
        operator delete(v360);
      if ( ptr && si128.m128i_i64[0] )
        sub_1580C40(si128.m128i_u64[0], (unsigned __int64)ptr);
      if ( (unsigned int)v355 > 0x40 && v354 )
        operator delete[](v354);
      if ( (unsigned int)v352 > 0x40 && v351 )
        operator delete[](v351);
      if ( v348 <= 0x40 )
        goto LABEL_79;
      v84 = v347;
      if ( !v347 )
        goto LABEL_79;
      goto LABEL_78;
    }
    if ( (unsigned int)v355 > 0x40 && v354 )
      operator delete[](v354);
    if ( (unsigned int)v352 > 0x40 && v351 )
      operator delete[](v351);
    if ( v348 <= 0x40 )
      goto LABEL_195;
    v137 = v347;
    if ( !v347 )
      goto LABEL_195;
    goto LABEL_194;
  }
  if ( !sub_9EC890(v10, v36, v33, v35, v18) )
    goto LABEL_42;
  v367.m128i_i8[12] &= ~1u;
  LOWORD(v366) = 0;
  v130 = *(unsigned int *)(a1 + 4624);
  v367.m128i_i64[0] = 0;
  v367.m128i_i32[2] = 0;
  if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 4616) + 640 * v130 - 640) - 4) <= 1 || *(_BYTE *)(a1 + 2440) )
    goto LABEL_42;
  v36 = (__int64)&v366;
  if ( (unsigned __int8)sub_C3A6B0(a2, (__int64)&v366, *(_QWORD *)(a1 + 248), 2, 0, v129) )
  {
    LODWORD(v355) = (_DWORD)v369;
    if ( (unsigned int)v369 > 0x40 )
    {
      v36 = (__int64)&v368;
      sub_2205510(&v354);
    }
    else
    {
      v354 = v368;
    }
    BYTE4(v355) = BYTE4(v369);
    v356 = v370;
    v132 = sub_F65240(v10, v36, v33, v35, v18, v131);
    v136 = sub_AAC1F0(*(_QWORD *)(a1 + 248), a3, v133, v134, v135);
    v36 = (__int64)&v354;
    sub_21F3DA0(&v351, &v354, v136, v132, &v345);
    if ( (_BYTE)v345 )
    {
      sub_168B9B0((__int64)&ptr, a1 + 8, 6989);
      sub_C16B30(&v360, (__int64)&v354);
      sub_AEC220((unsigned __int8 **)&ptr, v360, v361.m128i_i64[0]);
      sub_AE9DF0((unsigned __int8 **)&ptr, a3, 8u);
      v227 = (void *)sub_EEC8C0(a2, a3, *(double *)a7.m128i_i64);
      LOBYTE(v348) = 1;
      v347 = v227;
      sub_AEC610((__int64 *)&ptr, (__int64 *)&v347);
      LOBYTE(v348) = 1;
      LODWORD(v347) = v316;
      HIDWORD(v347) = v316;
      sub_AEC610((__int64 *)&ptr, (__int64 *)&v347);
      v231 = sub_C00A40(a2, (__int64)&v347, v228, v229, v230);
      sub_18CAED0(a1, v231, a2, &ptr);
      if ( v360 != &v361.m128i_u64[1] )
        operator delete(v360);
      if ( ptr && si128.m128i_i64[0] )
        sub_1580C40(si128.m128i_u64[0], (unsigned __int64)ptr);
      if ( (unsigned int)v352 > 0x40 && v351 )
        operator delete[](v351);
      if ( (unsigned int)v355 <= 0x40 )
        goto LABEL_79;
      v84 = v354;
      if ( !v354 )
        goto LABEL_79;
      goto LABEL_78;
    }
    if ( (unsigned int)v352 > 0x40 && v351 )
      operator delete[](v351);
    if ( (unsigned int)v355 > 0x40 )
    {
      v137 = v354;
      if ( v354 )
LABEL_194:
        operator delete[](v137);
    }
  }
LABEL_195:
  if ( v367.m128i_i32[2] > 1u )
    sub_A4F8E0(&v367.m128i_i32[2]);
LABEL_42:
  if ( src != 0 && v330 != 0 )
  {
    LOBYTE(v33) = src != 0 && v330 != 0;
    v37 = sub_9EC890(v330, v36, v33, v35, v18);
    if ( v37 )
    {
      if ( sub_F58060(src) && !a6 )
      {
        if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 4616) + 640LL * *(unsigned int *)(a1 + 4624) - 640) - 4) > 1 )
          v37 = *(_BYTE *)(a1 + 2440);
        v345 = sub_16C8650(*(_QWORD *)(a1 + 248), a2, v37, 1);
        v346 = v104;
        if ( !(_BYTE)v104 )
          return;
        v321 = v345;
        v36 = src & 0xFFFFFFFFFFFFFFF0LL;
        v105 = sub_A62D20(*(_QWORD **)(a1 + 248), src & 0xFFFFFFFFFFFFFFF0LL);
        v338 = sub_21F9100(v105);
        if ( v338 != 0 && v321 > v338 && v321 )
        {
          sub_C3EB00((__int64)&v351, a2, *(_QWORD *)(a1 + 248), nullptr, v106, v107);
          if ( v353 )
          {
            v108 = *(_QWORD **)(a1 + 248);
            v109 = sub_A62D20(v108, src & 0xFFFFFFFFFFFFFFF0LL);
            v322 = (void *)sub_21F90D0(v108, src & 0xFFFFFFFFFFFFFFF0LL, v110);
            if ( (void *)v109 == v322 )
              sub_21FFBD0(&v354, v322);
            else
              sub_21FBA00(&v354, v109);
            v36 = (__int64)&v351;
            v111 = (((*(_WORD *)(v330 + 18) >> 3) + 64) & 0x1FFu) <= 7;
            if ( v322 == v354 )
              v112 = sub_2201FE0(&v354, &v351, v111, 1);
            else
              v112 = sub_21FB140(&v354, &v351, v111, 1);
            if ( v112 )
            {
              v360 = &v362;
              v361 = _mm_load_si128((const __m128i *)&xmmword_23A8D20);
              sub_220BA90((unsigned int)&v351, (unsigned int)&v360, 10, BYTE4(v352) ^ 1, 0, 1, 0);
              a7 = _mm_load_si128((const __m128i *)&xmmword_23A8D20);
              v366 = &v368;
              v367 = a7;
              if ( v322 == v354 )
                sub_2204E00(&v354, &v366, v338, 3, 1);
              else
                sub_2203EA0(&v354, &v366, v338, 3, 1);
              sub_168B9B0((__int64)&ptr, a1 + 8, 7003);
              sub_AEC220((unsigned __int8 **)&ptr, v360, v361.m128i_i64[0]);
              sub_AEC220((unsigned __int8 **)&ptr, v366, v367.m128i_i64[0]);
              sub_AE9DF0((unsigned __int8 **)&ptr, *(_QWORD *)(a2 + 8), 8u);
              sub_AE9DF0((unsigned __int8 **)&ptr, a3, 8u);
              v299 = (void *)sub_EEC8C0(a2, a3, *(double *)a7.m128i_i64);
              LOBYTE(v348) = 1;
              v347 = v299;
              sub_AEC610((__int64 *)&ptr, (__int64 *)&v347);
              LOBYTE(v348) = 1;
              LODWORD(v347) = v316;
              HIDWORD(v347) = v316;
              sub_AEC610((__int64 *)&ptr, (__int64 *)&v347);
              v303 = sub_C00A40(a2, (__int64)&v347, v300, v301, v302);
              sub_18CAED0(a1, v303, a2, &ptr);
              v36 = (__int64)ptr;
              if ( ptr && si128.m128i_i64[0] )
                sub_1580C40(si128.m128i_u64[0], (unsigned __int64)ptr);
              if ( v366 != &v368 )
                free(v366);
              if ( v360 != &v362 )
                free(v360);
            }
            sub_9955A0(&v354);
          }
          else
          {
            v36 = a2;
            sub_16CF590(a1, a2, *(_QWORD *)(a2 + 8), a3, v316, 0x1B5Au, *(double *)a7.m128i_i64, 0);
          }
          sub_98E4B0((__int64)&v351);
        }
      }
    }
  }
  v351 = (void *)a3;
  if ( ((*(_WORD *)a2 + 423) & 0x1FFu) <= 4 )
    goto LABEL_55;
  v38 = sub_BFBAE0(a2);
  v43 = *(_WORD *)v38 & 0x1FF;
  v44 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v38 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v44 + 16) == 13 )
  {
    v45 = ((*(_WORD *)(v44 + 18) >> 3) & 0x1FF) == 488;
    LOBYTE(v347) = v45;
    if ( v43 != 58 && !v45 )
      goto LABEL_55;
  }
  else
  {
    LOBYTE(v347) = 0;
    if ( v43 != 58 )
      goto LABEL_55;
  }
  v46 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*v8 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  if ( (unsigned __int8)v46 > 0x2Au || (v39 = 0x40600000800LL, !_bittest64(&v39, v46)) )
  {
    if ( sub_F61140(*v8, v36, v39, v40, v41, v42) )
    {
      v49 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)((unsigned __int64)v351 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                      & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v49 + 16) != 13 || ((*(_WORD *)(v49 + 18) >> 3) & 0x1FF) != 0x1E8 )
      {
        v318 = *(_QWORD *)(a1 + 264);
        v50 = sub_C00A40(a2, v36, v47, v318, v48);
        if ( (unsigned __int8)sub_FD3830(*(_QWORD *)(v318 + 32), 0x1B64u, v50, v318, v51, v52) != 1 )
        {
          v53 = sub_EEC8C0(a2, 7012, *(double *)a7.m128i_i64);
          v333 = sub_1021F00(*(_QWORD *)(a1 + 272), v53);
          v319 = v333;
          v334 = sub_1021F00(*(_QWORD *)(a1 + 272), v316);
          if ( v43 == 58 && v333 < 0 )
          {
            v185 = sub_13DC5B0(v333, *(__int64 **)(a1 + 272), *(_QWORD *)(a1 + 232), a7, a8);
            v337 = v186;
            v187 = v185;
            v188 = j__strlen("NULL");
            if ( v188 == v337 && (!v188 || !memcmp(v187, "NULL", v188)) )
            {
              v366 = (void *)sub_101FC50(*(_QWORD *)(a1 + 272), v333);
              v367.m128i_i32[0] = v189;
              v319 = (unsigned int)v366;
            }
          }
          v54 = sub_101D5E0(*(unsigned int **)(a1 + 272), v334);
          if ( (unsigned int)sub_101D5E0(*(unsigned int **)(a1 + 272), v319) == v54 )
          {
            sub_168B9F0((__int64)&v366, (__int64 *)(a1 + 8), v319, 0x1B64u, 0);
            v183 = sub_15890D0((__int64)&v366, (unsigned __int8 *)&v347);
            v184 = sub_1605D30(v183, (__int64 *)&v351);
            LODWORD(v354) = v334;
            HIDWORD(v354) = v334;
            v335 = sub_1587DB0(v184, (__int64 *)&v354);
            sub_19E9410(&ptr, a1, v351, v319);
            LODWORD(v345) = v319;
            HIDWORD(v345) = v319;
            LOBYTE(v346) = 1;
            sub_16BA3D0((__int64)&v360, v345, 1, ptr, si128.m128i_i64[0]);
            sub_1589170(v335, &v360);
            if ( v362 != &v365 )
              operator delete(v362);
            if ( ptr != &si128.m128i_u64[1] )
              operator delete(ptr);
            sub_15F7200(&v366);
          }
        }
      }
    }
  }
LABEL_55:
  sub_16C73C0(a1, v10, a2);
  if ( sub_F58030(v9) && sub_F58030(v10) )
  {
    v342 = a3;
    if ( sub_F57F90(v9) && sub_F57FC0(v10) )
      return;
    v361.m128i_i8[12] &= ~1u;
    v89 = 1;
    LOWORD(v360) = 0;
    v90 = *(unsigned int *)(a1 + 4624);
    v361.m128i_i64[0] = 0;
    v361.m128i_i32[2] = 0;
    if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 4616) + 640 * v90 - 640) - 4) > 1 )
      v89 = *(unsigned __int8 *)(a1 + 2440);
    v94 = sub_C3F220(a2, (__int64)&v360, *(_QWORD *)(a1 + 248), 2, v89, v88);
    if ( !v94 )
    {
      v172 = sub_AAC1F0(*(_QWORD *)(a1 + 248), *(_QWORD *)(a2 + 8), v91, v92, v93);
      v176 = sub_AAC1F0(*(_QWORD *)(a1 + 248), v342, v173, v174, v175);
      sub_16CF590(a1, a2, *(_QWORD *)(a2 + 8), v342, v316, v176 < v172 ? 7019 : 7017, *(double *)a7.m128i_i64, 0);
      goto LABEL_124;
    }
    BYTE4(v355) = 1;
    LODWORD(v355) = 32;
    v354 = nullptr;
    if ( v363 <= 0x40 )
    {
      LODWORD(v355) = v363;
      v354 = v362;
    }
    else
    {
      sub_22056A0(&v354, &v362);
    }
    v367.m128i_i32[0] = 64;
    v366 = &dword_7C + 3;
    BYTE4(v355) = v364;
    v367.m128i_i8[4] = 0;
    v315 = sub_98E2D0((__int64 *)&v354, (__int64 *)&v366);
    if ( v367.m128i_i32[0] > 0x40u && v366 )
      operator delete[](v366);
    v367.m128i_i32[0] = 64;
    v366 = &stru_DFF0 + 15;
    v367.m128i_i8[4] = 0;
    v95 = sub_98E2D0((__int64 *)&v354, (__int64 *)&v366);
    if ( v367.m128i_i32[0] > 0x40u && v366 )
    {
      v320 = v95;
      operator delete[](v366);
      v95 = v320;
    }
    if ( v95 > 0 )
    {
      v367.m128i_i32[0] = 64;
      v366 = &stru_DFF0 + 16;
      v367.m128i_i8[4] = 0;
      v200 = sub_98E2D0((__int64 *)&v354, (__int64 *)&v366);
      if ( v367.m128i_i32[0] > 0x40u && v366 )
      {
        v323 = v200;
        operator delete[](v366);
        v200 = v323;
      }
      v94 = 0;
      if ( v200 >= 0 )
      {
        v367.m128i_i32[0] = 64;
        v366 = &stru_FFE8 + 23;
        v367.m128i_i8[4] = 0;
        v201 = sub_98E2D0((__int64 *)&v354, (__int64 *)&v366);
        if ( v367.m128i_i32[0] > 0x40u && v366 )
          operator delete[](v366);
        v94 = v201 <= 0;
      }
    }
    if ( v315 <= 0 || !sub_F57F60(v9) && !sub_F57F60(v10) && v94 )
    {
LABEL_121:
      if ( (unsigned int)v355 > 0x40 )
      {
        v96 = v354;
        if ( v354 )
LABEL_123:
          operator delete[](v96);
      }
LABEL_124:
      if ( v361.m128i_i32[2] > 1u )
        sub_A4F8E0(&v361.m128i_i32[2]);
      return;
    }
    sub_168B9F0((__int64)&v366, (__int64 *)(a1 + 8), v316, 0x1B6Au, 0);
    v347 = *(void **)(a2 + 8);
    v202 = sub_162B6D0((__int64)&v366, (__int64 *)&v347);
    v203 = sub_1605D30(v202, (__int64 *)&v342);
    v343 = *(_QWORD *)(a2 + 8);
    v204 = (__int64 *)(sub_6D5440(&v343) & 0xFFFFFFFFFFFFFFF0LL);
    if ( sub_F57F60(*v204) )
    {
      LODWORD(v205) = (_DWORD)v354;
      if ( BYTE4(v355) )
      {
        if ( (unsigned int)v355 <= 0x40 )
        {
LABEL_319:
          v206 = sub_2219230((unsigned int)v205);
LABEL_320:
          LOBYTE(v341) = v206;
          v207 = sub_1588420(v203, (unsigned __int8 *)&v341);
          if ( BYTE4(v355) )
          {
            LODWORD(v208) = (_DWORD)v354;
            if ( (unsigned int)v355 > 0x40 )
              v208 = *(_QWORD *)v354;
          }
          else if ( (unsigned int)v355 > 0x40 )
          {
            v208 = *(_QWORD *)v354;
          }
          else if ( (_DWORD)v355 )
          {
            v208 = (__int64)((_QWORD)v354 << (64 - (unsigned __int8)v355)) >> (64 - (unsigned __int8)v355);
          }
          else
          {
            LODWORD(v208) = 0;
          }
          sub_AC62E0(&ptr, v208, *(_QWORD *)(a2 + 8));
          if ( *(_BYTE *)(v207 + 120) )
          {
            sub_AEC220((unsigned __int8 **)(v207 + 32), ptr, si128.m128i_i64[0]);
          }
          else if ( *(_BYTE *)(v207 + 132) )
          {
            v254 = sub_168B9E0((_QWORD *)v207);
            v257 = *(void **)(v207 + 16);
            if ( v257 )
              v257 = (void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v257 + 32LL))(*(_QWORD *)(v207 + 16));
            v351 = v257;
            v258 = sub_1587BC0(v254, (__int64 *)&v351, v252, v253, v255, v256);
            sub_AEC220((unsigned __int8 **)(*v258 + 32LL * *(unsigned int *)(v207 + 128) + 8), ptr, si128.m128i_i64[0]);
          }
          if ( ptr != &si128.m128i_u64[1] )
            operator delete(ptr);
          sub_15F7200(&v366);
          goto LABEL_121;
        }
      }
      else if ( (unsigned int)v355 <= 0x40 )
      {
        if ( (_DWORD)v355 )
          v205 = (__int64)((_QWORD)v354 << (64 - (unsigned __int8)v355)) >> (64 - (unsigned __int8)v355);
        else
          LODWORD(v205) = 0;
        goto LABEL_319;
      }
      v205 = *(_QWORD *)v354;
      goto LABEL_319;
    }
    v221 = !sub_F57F90(*v204);
    LODWORD(v222) = (_DWORD)v354;
    if ( !v221 )
    {
      if ( BYTE4(v355) )
      {
        if ( (unsigned int)v355 <= 0x40 )
        {
LABEL_364:
          v206 = sub_2219240((unsigned int)v222);
          goto LABEL_320;
        }
      }
      else if ( (unsigned int)v355 <= 0x40 )
      {
        if ( (_DWORD)v355 )
          v222 = (__int64)((_QWORD)v354 << (64 - (unsigned __int8)v355)) >> (64 - (unsigned __int8)v355);
        else
          LODWORD(v222) = 0;
        goto LABEL_364;
      }
      v222 = *(_QWORD *)v354;
      goto LABEL_364;
    }
    if ( BYTE4(v355) )
    {
      if ( (unsigned int)v355 <= 0x40 )
      {
LABEL_387:
        v206 = sub_2219260((unsigned int)v222);
        goto LABEL_320;
      }
    }
    else if ( (unsigned int)v355 <= 0x40 )
    {
      if ( (_DWORD)v355 )
        v222 = (__int64)((_QWORD)v354 << (64 - (unsigned __int8)v355)) >> (64 - (unsigned __int8)v355);
      else
        LODWORD(v222) = 0;
      goto LABEL_387;
    }
    v222 = *(_QWORD *)v354;
    goto LABEL_387;
  }
  v58 = *(_QWORD *)(*(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v58 + 16) == 13 && ((*(_WORD *)(v58 + 18) >> 3) & 0x1FF) == 0x1B4 )
    sub_16D6F70(a1, a2, a7, a8);
  v59 = *(void ***)&byte_8[v10 & 0xFFFFFFFFFFFFFFF0LL];
  if ( (unsigned int)sub_16BA0C0(*(_QWORD *)&byte_8[v9 & 0xFFFFFFFFFFFFFFF0LL], (__int64)v59, v55, v56, v57) == 2 )
  {
    sub_168B9F0((__int64)&v366, (__int64 *)(a1 + 8), v316, 0x1A00u, 0);
    ptr = (void *)(v9 & 0xFFFFFFFFFFFFFFF0LL);
    v97 = sub_162B6D0((__int64)&v366, (__int64 *)&ptr);
    v59 = &v360;
    v360 = (void *)(v10 & 0xFFFFFFFFFFFFFFF0LL);
    sub_162B6D0(v97, (__int64 *)&v360);
    sub_15F7200(&v366);
  }
  if ( sub_9EC890(v9, (__int64)v59, v60, v61, v62) )
  {
    if ( sub_9EC890(v10, (__int64)v59, v63, v64, v65) )
    {
      v66 = *(_QWORD *)(*(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v66 + 16) != 13 || ((*(_WORD *)(v66 + 18) >> 3) & 0x1FF) != 0x1B4 )
      {
        if ( (unsigned __int8)sub_1A86C10(*(_QWORD *)(a1 + 736), a3)
          && !(unsigned __int8)sub_F57EE0(v9)
          && !sub_BFF300((unsigned __int16 *)a2, 0, v138, v139, v140) )
        {
          v141 = *(_QWORD *)(a1 + 736);
          sub_168B9F0((__int64)&v366, (__int64 *)(a1 + 8), v316, 0x1B58u, 0);
          v360 = *(void **)(a2 + 8);
          v142 = sub_162B6D0((__int64)&v366, (__int64 *)&v360);
          sub_1A92140(v141, a2, v142);
          sub_15F7200(&v366);
          return;
        }
        v67 = 1;
        if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 4616) + 640LL * *(unsigned int *)(a1 + 4624) - 640) - 4) > 1 )
          v67 = *(unsigned __int8 *)(a1 + 2440);
        v343 = sub_16C8650(*(_QWORD *)(a1 + 248), a2, v67, 1);
        v344 = v71;
        if ( (_BYTE)v71 )
        {
          v72 = sub_16C4660(*(_QWORD *)(a1 + 248), v9, BYTE4(v343), v68, v69, v70);
          v336 = sub_16C4660(*(_QWORD *)(a1 + 248), v10, v73, v74, v75, v76);
          v80 = (unsigned int)v343;
          if ( (unsigned int)v336 < (unsigned int)v343 )
          {
            v81 = *(unsigned int *)(a1 + 4624);
            v367.m128i_i64[0] = 0;
            v82 = 1;
            LOWORD(v366) = 0;
            v367.m128i_i8[12] &= ~1u;
            v367.m128i_i32[2] = 0;
            if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 4616) + 640 * v81 - 640) - 4) > 1 )
              v82 = *(unsigned __int8 *)(a1 + 2440);
            if ( !(unsigned __int8)sub_C3F220(a2, (__int64)&v366, *(_QWORD *)(a1 + 248), 2, v82, v79) )
            {
              if ( !(unsigned __int8)sub_16C5190(*(__int64 **)(a1 + 272), v316) )
              {
                if ( (*(_WORD *)a2 & 0x1FF) == 4 && *(_BYTE *)(a2 + 2) >> 3 == 7 )
                {
                  sub_16CF590(a1, a2, *(_QWORD *)(a2 + 8), a3, v316, 0x1B5Eu, *(double *)a7.m128i_i64, 0);
                }
                else if ( (_DWORD)v336 == 32
                       && (unsigned int)sub_AAC1F0(*(_QWORD *)(a1 + 248), *(_QWORD *)(a2 + 8), v177, v178, v179) == 64 )
                {
                  sub_16CF590(a1, a2, *(_QWORD *)(a2 + 8), a3, v316, 0x1B59u, *(double *)a7.m128i_i64, 1);
                }
                else
                {
                  sub_16CF590(a1, a2, *(_QWORD *)(a2 + 8), a3, v316, 0x1B5Cu, *(double *)a7.m128i_i64, 0);
                }
              }
              goto LABEL_79;
            }
            BYTE4(v352) = 1;
            LODWORD(v352) = 32;
            v351 = nullptr;
            if ( (unsigned int)v369 <= 0x40 )
            {
              LODWORD(v352) = (_DWORD)v369;
              v351 = v368;
            }
            else
            {
              sub_22056A0(&v351, &v368);
            }
            v83 = *(__int64 **)(a1 + 272);
            BYTE4(v352) = BYTE4(v369);
            if ( !(unsigned __int8)sub_16C5190(v83, v316) )
            {
              sub_C1DEB0(&ptr, (int)&v351, 10, BYTE4(v352) ^ 1, 0, 1u, 0);
              sub_16BC870(&v360, (__int64)&v351, v336, BYTE4(v336));
              sub_168B9B0((__int64)&v354, a1 + 8, 7005);
              sub_AEC220((unsigned __int8 **)&v354, ptr, si128.m128i_i64[0]);
              sub_AEC220((unsigned __int8 **)&v354, v360, v361.m128i_i64[0]);
              sub_AE9DF0((unsigned __int8 **)&v354, *(_QWORD *)(a2 + 8), 8u);
              sub_AE9DF0((unsigned __int8 **)&v354, a3, 8u);
              v195 = (void *)sub_EEC8C0(a2, a3, *(double *)a7.m128i_i64);
              LOBYTE(v348) = 1;
              v347 = v195;
              sub_AEC610((__int64 *)&v354, (__int64 *)&v347);
              LOBYTE(v348) = 1;
              LODWORD(v347) = v316;
              HIDWORD(v347) = v316;
              sub_AEC610((__int64 *)&v354, (__int64 *)&v347);
              v199 = sub_C00A40(a2, (__int64)&v347, v196, v197, v198);
              sub_18CAED0(a1, v199, a2, &v354);
              if ( v354 && v355 )
                sub_1580C40(v355, (unsigned __int64)v354);
              if ( v360 != &v361.m128i_u64[1] )
                operator delete(v360);
              if ( ptr != &si128.m128i_u64[1] )
                operator delete(ptr);
            }
LABEL_76:
            if ( (unsigned int)v352 <= 0x40 || (v84 = v351) == nullptr )
            {
LABEL_79:
              if ( v367.m128i_i32[2] > 1u )
                sub_A4F8E0(&v367.m128i_i32[2]);
              return;
            }
LABEL_78:
            operator delete[](v84);
            goto LABEL_79;
          }
          if ( (unsigned int)v336 > v72
            && (*(_WORD *)a2 & 0x1FF) == 4
            && *(_BYTE *)(a2 + 2) >> 3 == 7
            && sub_F65360(v9, v10, v77, (unsigned int)v343, v78, v79) )
          {
            if ( sub_F65360(v10, v10, v77, v80, v78, v79) )
            {
              sub_16CF590(a1, a2, *(_QWORD *)(a2 + 8), a3, v316, 0x1B56u, *(double *)a7.m128i_i64, 0);
              return;
            }
            if ( sub_F65140(v10, v10, v259, v260, v261, v262) )
            {
              sub_16CF590(a1, a2, *(_QWORD *)(a2 + 8), a3, v316, 0x1B63u, *(double *)a7.m128i_i64, 0);
              return;
            }
          }
          if ( (_DWORD)v336 != (_DWORD)v343 )
          {
            if ( *(_BYTE *)(v10 + 16) == 47 && *(_BYTE *)(v9 + 16) == 47 || !BYTE4(v336) )
              goto LABEL_233;
            goto LABEL_225;
          }
          if ( BYTE4(v336) )
          {
            if ( *(_BYTE *)(v10 + 16) == 47 && *(_BYTE *)(v9 + 16) == 47 )
              goto LABEL_233;
LABEL_225:
            if ( !BYTE4(v343) )
            {
LABEL_226:
              if ( (unsigned __int8)sub_16C5190(*(__int64 **)(a1 + 272), v316) )
                return;
              if ( v330 )
              {
                if ( (((*(_WORD *)(v330 + 18) >> 3) + 76) & 0x1FFu) <= 0x13
                  && src != 0
                  && v330 != 0
                  && (((*(_WORD *)(src + 18) >> 3) + 76) & 0x1FFu) <= 0x13 )
                {
                  v266 = sub_F65140(v9, v316, v148, v149, v150, v151);
                  if ( v266 == sub_F65140(v10, v316, v267, v268, v269, v270) )
                    return;
                }
              }
              v152 = 7007;
              if ( a5 )
              {
                v152 = 7008;
                *a5 = 1;
              }
              sub_16CF590(a1, a2, *(_QWORD *)(a2 + 8), a3, v316, v152, *(double *)a7.m128i_i64, 0);
            }
LABEL_233:
            v153 = *(_QWORD *)(a1 + 248);
            v157 = sub_BFD410(a2);
            v158 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v157 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
            if ( *(_BYTE *)(v158 + 16) == 13
              && (((*(_WORD *)(v158 + 18) >> 3) + 76) & 0x1FFu) <= 0x13
              && *(_BYTE *)(v10 + 16) == 47 )
            {
              sub_16CF590(a1, a2, *(_QWORD *)(a2 + 8), a3, v316, 0x1B57u, *(double *)a7.m128i_i64, 0);
            }
            else
            {
              v159 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)&byte_8[v157 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL)
                               + 8LL)
                   & 0xFFFFFFFFFFFFFFF0LL;
              v160 = *(_QWORD *)v159;
              if ( *(_BYTE *)(*(_QWORD *)v159 + 16LL) == 47 )
              {
                v161 = *(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL;
                v162 = *(_QWORD *)v161;
                if ( *(_BYTE *)(*(_QWORD *)v161 + 16LL) == 47 )
                {
                  v163 = sub_F60F10(v160, v153, v157 & 0xFFFFFFFFFFFFFFF0LL, v154, v155, v156);
                  if ( v163[5] || (v219 = v163[15], (v219 & 4) == 0) && (v219 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
                  {
                    v168 = sub_F60F10(v162, v153, v164, v165, v166, v167);
                    if ( v168[5] || (v220 = v168[15], (v220 & 4) == 0) && (v220 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
                    {
                      if ( v160 != v162 && !(unsigned __int8)sub_16C5190(*(__int64 **)(a1 + 272), v316) )
                        sub_16CF590(a1, a2, v157, a3, v316, 0x1B4Bu, *(double *)a7.m128i_i64, 0);
                    }
                  }
                }
              }
            }
            return;
          }
          if ( BYTE4(v343) && sub_F65140(v9, v10, v77, v80, v78, v79) )
          {
            v264 = *(_QWORD *)(a1 + 248);
            v361.m128i_i8[12] &= ~1u;
            LOWORD(v360) = 0;
            v361.m128i_i64[0] = 0;
            v361.m128i_i32[2] = 0;
            if ( (unsigned __int8)sub_C3F220(a2, (__int64)&v360, v264, 2, 0, v263)
              && !(unsigned __int8)sub_16C5190(*(__int64 **)(a1 + 272), v316) )
            {
              v348 = v363;
              if ( v363 > 0x40 )
                sub_2205510(&v347);
              else
                v347 = v362;
              v349 = v364;
              v271 = sub_BFBAE0(a2);
              if ( ((*(_WORD *)v271 & 0x1FF) != 0x34
                 || *sub_1021A70(*(_QWORD *)(a1 + 272), *(_DWORD *)(v271 + 28), nullptr) != 48)
                && (!(unsigned __int8)sub_F57EE0(*v8) || *sub_1021A70(*(_QWORD *)(a1 + 272), v316, nullptr) != 123) )
              {
                v272 = (__int64 *)(a1 + 8);
                sub_C1DEB0(&v354, (int)&v347, 10, v349 ^ 1, 0, 1u, 0);
                sub_16BC870(&ptr, (__int64)&v347, v336, 0);
                sub_168B9B0((__int64)&v351, (__int64)v272, 7005);
                sub_AEC220((unsigned __int8 **)&v351, v354, v355);
                sub_AEC220((unsigned __int8 **)&v351, ptr, si128.m128i_i64[0]);
                sub_AE9DF0((unsigned __int8 **)&v351, *(_QWORD *)(a2 + 8), 8u);
                sub_AE9DF0((unsigned __int8 **)&v351, a3, 8u);
                v273 = (void *)sub_EEC8C0(a2, a3, *(double *)a7.m128i_i64);
                v367.m128i_i8[0] = 1;
                v366 = v273;
                sub_AEC610((__int64 *)&v351, (__int64 *)&v366);
                v367.m128i_i8[0] = 1;
                LODWORD(v366) = v316;
                HIDWORD(v366) = v316;
                sub_AEC610((__int64 *)&v351, (__int64 *)&v366);
                v277 = sub_C00A40(a2, (__int64)&v366, v274, v275, v276);
                sub_168CDE0((__int64)&v366, v272, v277, (__int64)&v351, 0);
                sub_15F7200(&v366);
                if ( v351 && v352 )
                  sub_1580C40(v352, (unsigned __int64)v351);
                if ( ptr != &si128.m128i_u64[1] )
                  operator delete(ptr);
                if ( v354 != &v356 )
                  operator delete(v354);
                if ( v348 <= 0x40 )
                  goto LABEL_124;
                v96 = v347;
                if ( !v347 )
                  goto LABEL_124;
                goto LABEL_123;
              }
              if ( v348 > 0x40 && v347 )
                operator delete[](v347);
            }
            if ( v361.m128i_i32[2] > 1u )
              sub_A4F8E0(&v361.m128i_i32[2]);
            if ( *(_BYTE *)(v10 + 16) != 47 )
              goto LABEL_226;
          }
          else if ( *(_BYTE *)(v10 + 16) != 47 )
          {
LABEL_258:
            if ( (_DWORD)v343 == (_DWORD)v336 && BYTE4(v343) )
              goto LABEL_226;
            goto LABEL_233;
          }
          if ( *(_BYTE *)(v9 + 16) == 47 )
            goto LABEL_233;
          goto LABEL_258;
        }
      }
    }
  }
}
