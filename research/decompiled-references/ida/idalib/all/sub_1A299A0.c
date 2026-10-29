__int64 __fastcall sub_1A299A0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        __int64 *a9,
        __int64 a10,
        unsigned int *a11,
        _QWORD *a12,
        unsigned int *a13,
        int a14,
        unsigned int a15)
{
  unsigned __int64 v15; // r15
  __int64 v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // r14
  unsigned __int64 v20; // r13
  _QWORD *v21; // rax
  int v22; // r12d
  __int64 v23; // rdi
  char v24; // al
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  unsigned __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // r12
  unsigned __int64 v35; // r14
  void *v36; // rdi
  __int64 v37; // r12
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rax
  __int64 v40; // rdi
  __int64 v41; // rsi
  int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // rcx
  unsigned __int64 v45; // r9
  unsigned int v46; // r11d
  __int64 v47; // r8
  char v48; // al
  unsigned int v49; // r14d
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  int v54; // eax
  unsigned __int64 v55; // rax
  __int64 v56; // rdx
  unsigned __int64 v57; // r14
  unsigned __int64 v58; // rax
  __int64 v59; // r15
  char v60; // bp
  unsigned __int64 v61; // rbx
  __int64 v62; // rax
  unsigned __int64 v63; // rax
  unsigned __int64 v64; // rax
  unsigned int v65; // r14d
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  unsigned int v70; // eax
  void **v71; // rsi
  __int64 v72; // r8
  _DWORD *v73; // r13
  unsigned int v74; // edx
  unsigned int v75; // eax
  unsigned int v76; // edx
  unsigned int v77; // r12d
  int v78; // r14d
  __int64 v79; // r13
  _WORD *v80; // rax
  _DWORD *v81; // rax
  unsigned __int8 v82; // cl
  __int64 v83; // r12
  __int64 v84; // r12
  _QWORD *v85; // rax
  unsigned __int8 v86; // cl
  bool v88; // zf
  unsigned __int64 v89; // rax
  __int64 v90; // r8
  __int64 v91; // r9
  unsigned __int64 v92; // rax
  __int64 v93; // r8
  __int64 v94; // r9
  __int64 v95; // rax
  void *v96; // rdx
  unsigned __int64 v97; // r13
  void *v98; // rax
  unsigned __int64 v99; // rax
  __int64 v100; // rcx
  __int64 v101; // r8
  void **v102; // rsi
  __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // r8
  __int64 *v106; // r12
  __int64 v107; // rdx
  __int64 v108; // rcx
  __int64 v109; // r8
  __int64 v110; // rdx
  __int64 v111; // rcx
  __int64 v112; // r8
  _QWORD *v113; // r14
  __int64 v114; // rcx
  __int64 v115; // r8
  __int64 v116; // r9
  void **v117; // rax
  __int64 v118; // rsi
  __int64 v119; // rax
  __int64 v120; // r8
  __int64 v121; // r9
  _DWORD *v122; // rax
  __int16 v123; // ax
  unsigned int v124; // r14d
  unsigned int v125; // r13d
  int v126; // eax
  __int64 v127; // rsi
  __int64 v128; // rdi
  __int64 v129; // rax
  __int64 v130; // rdi
  __int64 v131; // r8
  __int64 v132; // r9
  unsigned __int64 v133; // rdx
  void *v134; // rax
  unsigned int v135; // r14d
  char v136; // r15
  int v137; // eax
  void *v138; // rax
  int v139; // eax
  unsigned int v140; // eax
  void *v141; // rax
  char v142; // r13
  int v143; // ebp
  unsigned int v144; // r12d
  __int64 v145; // rax
  unsigned __int64 v146; // rax
  __int64 v147; // rax
  unsigned __int64 v148; // rax
  __int64 v149; // r14
  unsigned __int64 v150; // r14
  __int64 v151; // rax
  __int64 v152; // rax
  __int64 v153; // rdx
  unsigned int v154; // eax
  unsigned __int64 v155; // rdx
  unsigned __int64 v156; // rax
  int v157; // eax
  unsigned int v158; // edx
  __int64 v159; // rax
  __int64 v160; // rax
  unsigned int v161; // ecx
  __int64 v162; // rax
  __int64 v163; // rdx
  _WORD *v164; // rax
  __int64 *v165; // r13
  unsigned __int64 v166; // rax
  unsigned int v167; // eax
  unsigned __int64 v168; // rax
  __int64 v169; // rbx
  unsigned int v170; // eax
  __int64 v171; // rbp
  __int64 v172; // r12
  unsigned __int8 v173; // r11
  void *v174; // rax
  __int64 v175; // rdi
  __int64 v176; // rcx
  __int64 v177; // r8
  __int64 v178; // r9
  __int64 v179; // rax
  unsigned __int8 v180; // al
  __int64 v181; // r8
  __int64 v182; // r9
  int v183; // r14d
  _QWORD *v184; // rcx
  __int64 v185; // r14
  __int64 v186; // rdx
  __int64 v187; // rcx
  _DWORD *v188; // r13
  __int64 v189; // r9
  __int64 v190; // rsi
  unsigned __int64 v191; // rax
  char v192; // r13
  unsigned int v193; // r14d
  _DWORD *v194; // rax
  unsigned __int8 v195; // cl
  void *v196; // rax
  unsigned __int8 v197; // cl
  unsigned __int64 v198; // rdx
  unsigned __int64 v199; // rax
  int v200; // eax
  int v201; // eax
  __int64 v202; // r13
  __m128i *v203; // rax
  __int64 v204; // r8
  __int64 v205; // r11
  __int64 v206; // r8
  unsigned __int64 v207; // rcx
  void **v208; // r9
  unsigned __int64 v209; // rdx
  __int64 v210; // rbx
  __int64 v211; // rbp
  const __m128i *v212; // rsi
  __int64 v213; // rdx
  __int64 v214; // rax
  const __m128i *v215; // r8
  void *v216; // rsi
  const __m128i *v217; // rcx
  __int64 v218; // rdx
  void *v219; // r14
  unsigned int v220; // eax
  __int64 v221; // r8
  __int64 v222; // r9
  __int64 v223; // rdx
  __int64 v224; // rcx
  __int64 v225; // r8
  __int64 v226; // r9
  unsigned __int64 v227; // r9
  int v228; // eax
  int v229; // r8d
  int v230; // r9d
  __int64 v231; // rax
  unsigned __int8 v232; // dl
  __int64 v233; // rax
  unsigned __int64 *v234; // r14
  unsigned __int64 v235; // rbx
  unsigned __int64 v236; // rax
  __int64 v237; // rcx
  __int64 v238; // rax
  void *v239; // rdi
  void *v240; // rdi
  void *v241; // rdi
  void **v242; // rax
  void **v243; // rsi
  int v244; // r9d
  __int64 v245; // r12
  _WORD *v246; // rax
  _WORD *v247; // rax
  void *v248; // rcx
  unsigned __int64 v249; // rcx
  void **p_s; // rdi
  unsigned __int64 v251; // rax
  void **v252; // rdx
  void **v253; // rax
  __int64 v254; // rax
  __m128i si128; // xmm3
  __int64 *v256; // rax
  _QWORD *v257; // r12
  __int64 *v258; // r14
  unsigned __int64 v259; // rax
  unsigned int v260; // eax
  __int64 v261; // rax
  __int64 v262; // rax
  unsigned int v263; // eax
  __int64 v264; // r14
  unsigned int v265; // eax
  __int64 v266; // rax
  __int64 v267; // rbx
  __int64 v268; // [rsp+0h] [rbp-2158h]
  __int64 v269; // [rsp+8h] [rbp-2150h]
  unsigned __int64 v270; // [rsp+10h] [rbp-2148h]
  bool v271; // [rsp+10h] [rbp-2148h]
  unsigned __int8 v272; // [rsp+10h] [rbp-2148h]
  unsigned __int8 v273; // [rsp+10h] [rbp-2148h]
  unsigned __int8 v274; // [rsp+10h] [rbp-2148h]
  unsigned __int8 v275; // [rsp+10h] [rbp-2148h]
  unsigned __int8 v276; // [rsp+10h] [rbp-2148h]
  unsigned __int8 v277; // [rsp+10h] [rbp-2148h]
  unsigned __int8 v278; // [rsp+10h] [rbp-2148h]
  char v279; // [rsp+10h] [rbp-2148h]
  char v280; // [rsp+18h] [rbp-2140h]
  int v281[2]; // [rsp+18h] [rbp-2140h]
  char v282; // [rsp+18h] [rbp-2140h]
  unsigned __int8 v283; // [rsp+18h] [rbp-2140h]
  unsigned __int8 v284; // [rsp+18h] [rbp-2140h]
  unsigned __int8 v285; // [rsp+18h] [rbp-2140h]
  char v286; // [rsp+18h] [rbp-2140h]
  unsigned __int8 v287; // [rsp+18h] [rbp-2140h]
  __int64 v288; // [rsp+18h] [rbp-2140h]
  int v289[2]; // [rsp+18h] [rbp-2140h]
  int v290; // [rsp+18h] [rbp-2140h]
  char v291; // [rsp+18h] [rbp-2140h]
  int v292; // [rsp+18h] [rbp-2140h]
  int v293; // [rsp+20h] [rbp-2138h]
  unsigned int v294; // [rsp+24h] [rbp-2134h]
  _QWORD *v295; // [rsp+28h] [rbp-2130h]
  int v296; // [rsp+28h] [rbp-2130h]
  __int64 *v297; // [rsp+30h] [rbp-2128h]
  int v298[2]; // [rsp+38h] [rbp-2120h]
  int v299[2]; // [rsp+38h] [rbp-2120h]
  int v300[2]; // [rsp+38h] [rbp-2120h]
  int v301[2]; // [rsp+38h] [rbp-2120h]
  __int64 v302; // [rsp+38h] [rbp-2120h]
  unsigned __int64 v303; // [rsp+38h] [rbp-2120h]
  _DWORD *v304; // [rsp+40h] [rbp-2118h]
  __int64 v305; // [rsp+48h] [rbp-2110h]
  int v306[2]; // [rsp+50h] [rbp-2108h]
  int v307; // [rsp+50h] [rbp-2108h]
  unsigned int v308; // [rsp+50h] [rbp-2108h]
  __int64 v309; // [rsp+50h] [rbp-2108h]
  unsigned __int64 v310; // [rsp+50h] [rbp-2108h]
  _QWORD *v311; // [rsp+50h] [rbp-2108h]
  int v312[2]; // [rsp+50h] [rbp-2108h]
  __int64 v313; // [rsp+58h] [rbp-2100h]
  _QWORD *v314; // [rsp+58h] [rbp-2100h]
  int v315[2]; // [rsp+58h] [rbp-2100h]
  int v316[2]; // [rsp+58h] [rbp-2100h]
  int v317[2]; // [rsp+58h] [rbp-2100h]
  __int64 *v318; // [rsp+58h] [rbp-2100h]
  void **v319; // [rsp+60h] [rbp-20F8h]
  _QWORD *v320; // [rsp+60h] [rbp-20F8h]
  int v321[2]; // [rsp+60h] [rbp-20F8h]
  unsigned int v322; // [rsp+60h] [rbp-20F8h]
  int v323[2]; // [rsp+60h] [rbp-20F8h]
  int v324[2]; // [rsp+68h] [rbp-20F0h]
  int v325[2]; // [rsp+68h] [rbp-20F0h]
  void **v326; // [rsp+70h] [rbp-20E8h]
  unsigned __int64 v327; // [rsp+78h] [rbp-20E0h]
  unsigned __int64 v328; // [rsp+78h] [rbp-20E0h]
  int v329; // [rsp+80h] [rbp-20D8h]
  __int64 v330; // [rsp+80h] [rbp-20D8h]
  unsigned __int8 v331; // [rsp+88h] [rbp-20D0h]
  unsigned int v332; // [rsp+8Ch] [rbp-20CCh]
  int v333; // [rsp+90h] [rbp-20C8h]
  int v334; // [rsp+98h] [rbp-20C0h]
  int v335; // [rsp+A0h] [rbp-20B8h]
  __int64 v336; // [rsp+A8h] [rbp-20B0h] BYREF
  void *v337; // [rsp+B0h] [rbp-20A8h] BYREF
  unsigned int v338; // [rsp+B8h] [rbp-20A0h]
  char v339; // [rsp+BCh] [rbp-209Ch]
  void *v340; // [rsp+C0h] [rbp-2098h] BYREF
  unsigned int v341; // [rsp+C8h] [rbp-2090h]
  char v342; // [rsp+CCh] [rbp-208Ch]
  void *v343; // [rsp+D0h] [rbp-2088h] BYREF
  unsigned int v344; // [rsp+D8h] [rbp-2080h]
  char v345; // [rsp+DCh] [rbp-207Ch]
  void *v346[2]; // [rsp+E0h] [rbp-2078h] BYREF
  int v347[4]; // [rsp+F0h] [rbp-2068h] BYREF
  int v348[2]; // [rsp+100h] [rbp-2058h]
  int v349; // [rsp+108h] [rbp-2050h]
  void *v350[2]; // [rsp+110h] [rbp-2048h] BYREF
  void *s; // [rsp+120h] [rbp-2038h] BYREF
  int v352; // [rsp+128h] [rbp-2030h]
  int v353; // [rsp+130h] [rbp-2028h]
  int v354; // [rsp+138h] [rbp-2020h]
  char v355; // [rsp+140h] [rbp-2018h]
  int v356; // [rsp+148h] [rbp-2010h]
  void *v357; // [rsp+150h] [rbp-2008h]
  __int64 v358; // [rsp+158h] [rbp-2000h]
  void *v359; // [rsp+160h] [rbp-1FF8h]
  int v360; // [rsp+168h] [rbp-1FF0h]
  void *ptr[2]; // [rsp+170h] [rbp-1FE8h] BYREF
  void *v362; // [rsp+180h] [rbp-1FD8h] BYREF
  int v363; // [rsp+188h] [rbp-1FD0h]
  int v364[2]; // [rsp+190h] [rbp-1FC8h]
  int v365; // [rsp+198h] [rbp-1FC0h]
  int v366; // [rsp+1A0h] [rbp-1FB8h]
  int v367; // [rsp+1A8h] [rbp-1FB0h]
  int v368; // [rsp+1B0h] [rbp-1FA8h]
  int v369; // [rsp+1B8h] [rbp-1FA0h]
  int v370; // [rsp+1C0h] [rbp-1F98h]
  int v371; // [rsp+1C8h] [rbp-1F90h]
  __int64 v372; // [rsp+1D0h] [rbp-1F88h]
  int v373; // [rsp+1D8h] [rbp-1F80h]
  char v374; // [rsp+1E0h] [rbp-1F78h]

  v15 = a3;
  v17 = a1;
  v18 = a15;
  v304 = (_DWORD *)a2;
  v294 = a5;
  v331 = a14;
  v297 = (__int64 *)a6;
  LODWORD(v305) = a15;
  if ( (_DWORD)a5 == *(_WORD *)(a4 + 20) >> 1 )
  {
    if ( *(_DWORD *)(a4 + 16) )
    {
      v78 = *(unsigned __int8 *)(a1 + 8);
      v79 = *a11;
      v80 = *(_WORD **)(*(_QWORD *)(a3 + 16) + 8 * v79);
      if ( v80 && (*v80 & 0x1FF) == 0x44 )
        a4 = *(_QWORD *)(*(_QWORD *)(a3 + 16) + 8 * v79);
      v81 = (_DWORD *)sub_1A0B2F0(a4);
      *(_QWORD *)(*(_QWORD *)(v15 + 16) + 8 * v79) = v81;
      if ( v81 )
      {
        v82 = ((*(_DWORD *)v15 >> 14) | (*v81 >> 14)) & 0x1F;
        *(_BYTE *)(v15 + 1) = (v82 << 6) | *(_BYTE *)(v15 + 1) & 0x3F;
        *(_BYTE *)(v15 + 2) = *(_BYTE *)(v15 + 2) & 0xF8 | (v82 >> 2);
      }
      sub_1A27C60(a1, (__m128i *)a2, v15, *v297, a11, (__int64)a12, a7, a8, a13, 1);
      v83 = *(_QWORD *)(*(_QWORD *)(v15 + 16) + 8 * v79);
      if ( sub_1A0B2F0(a4) != v83 )
      {
        v84 = *(_QWORD *)(*(_QWORD *)(v15 + 16) + 8 * v79);
        sub_EE9E50((__m128 *)ptr, a4);
        s = v362;
        *(__m128i *)v350 = _mm_load_si128((const __m128i *)ptr);
        if ( ((__int64)v350[1] & 3) != 0 )
          v85 = (_QWORD *)sub_EF2B30((__int64)v350);
        else
          v85 = v350[0];
        *v85 = v84;
      }
      *(_QWORD *)(*(_QWORD *)(v15 + 16) + 8 * v79) = a4;
      v86 = ((*(_DWORD *)v15 >> 14) | (*(_DWORD *)a4 >> 14)) & 0x1F;
      *(_BYTE *)(v15 + 1) = (v86 << 6) | *(_BYTE *)(v15 + 1) & 0x3F;
      *(_BYTE *)(v15 + 2) = *(_BYTE *)(v15 + 2) & 0xF8 | (v86 >> 2);
      return (*(unsigned __int8 *)(a1 + 8) ^ 1 | v78) ^ 1u;
    }
    else
    {
      v346[0] = (void *)sub_1A0B2F0(a4);
      v124 = sub_EEC140((unsigned __int64)v346[0]);
      v125 = sub_EEB7E0((unsigned __int64)v346[0], a2, *(double *)a7.m128_u64);
      v126 = sub_C009D0(a4);
      v350[1] = (void *)__PAIR64__(v124, v125);
      v127 = *(_QWORD *)a1;
      HIDWORD(v350[0]) = v126;
      LOWORD(v350[0]) = 1;
      sub_1A19220((__int64)ptr, v127, (__int64)v304, (__m128i *)v350, (__int64)v346, 1, a7, a8, 1u, 1u);
      if ( a12 )
      {
        v128 = *(_QWORD *)a1;
        if ( *(_BYTE *)(v17 + 9) )
          v129 = sub_1A0A760(v128, v17 + 24);
        else
          v129 = sub_1A1D600(
                   (unsigned int)ptr,
                   *(_QWORD *)v17,
                   (_DWORD)v304,
                   (unsigned int)v350,
                   (unsigned int)v346,
                   1,
                   0);
        sub_1A11640((_BYTE *)v17, (__int64)a12, a13, (_DWORD *)(v129 & 0xFFFFFFFFFFFFFFFELL), *(double *)a7.m128_u64);
      }
      v130 = *(_QWORD *)(v17 + 32);
      ++*a11;
      if ( v130 )
        sub_A6A4A0(v130, *v297);
      v271 = LODWORD(ptr[0]) == 0;
      sub_1A0BB10((__int64)ptr);
      return v271;
    }
  }
  v19 = 24LL * (unsigned int)a5;
  v20 = v19 + *(_QWORD *)(a4 + 24);
  if ( !(_DWORD)a5 )
  {
    v21 = *(_QWORD **)(a1 + 16);
    v22 = *(_DWORD *)v20;
    if ( !v21 )
      v21 = a12;
    v270 = (unsigned __int64)v21;
    goto LABEL_6;
  }
  if ( a12 )
  {
    v77 = *a13;
    a3 = a12[2];
    if ( *a13 >= (unsigned int)((a12[3] - a3) >> 3) || (v270 = *(_QWORD *)(a3 + 8LL * v77)) == 0 )
    {
      v145 = a12[7];
      if ( !v145 || (v145 & 2) != 0 || (v146 = v145 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
      {
        v162 = sub_C03390(a4);
        if ( *(_DWORD *)v20 )
        {
          v163 = *(unsigned int *)(v20 + 12);
        }
        else
        {
          v163 = *(unsigned int *)(v20 + 16);
          if ( !(_DWORD)v163 )
            v163 = *(unsigned int *)(v20 + 20);
        }
        v164 = sub_1A116B0(
                 (_BYTE *)a1,
                 v15,
                 *a11,
                 *v297,
                 (__int64)a12,
                 v77,
                 *(double *)a7.m128_u64,
                 (v162 << 32) | v163);
        v22 = *(_DWORD *)v20;
        v270 = (unsigned __int64)v164;
        v18 = v268;
        a2 = v269;
        goto LABEL_6;
      }
      v270 = v146;
    }
    if ( (*(_WORD *)v270 & 0x1FF) != 0x35 )
    {
      v160 = sub_C03390(a4);
      if ( *(_DWORD *)v20 )
      {
        v161 = *(_DWORD *)(v20 + 12);
      }
      else
      {
        v161 = *(_DWORD *)(v20 + 16);
        if ( !v161 )
          v161 = *(_DWORD *)(v20 + 20);
      }
      a2 = v270;
      sub_1A11410((_BYTE *)a1, v270, (v160 << 32) | v161, 0, 0, *(double *)a7.m128_u64);
      v22 = *(_DWORD *)v20;
      if ( *(_BYTE *)(a1 + 9) )
      {
        v270 = 0;
        goto LABEL_6;
      }
      a2 = v270;
      if ( (*(_WORD *)v270 & 0x1FF) == 0x43 )
      {
        v270 = *(_QWORD *)(v270 + 24);
        goto LABEL_6;
      }
      if ( v22 )
      {
        v244 = *(_DWORD *)(v20 + 12);
      }
      else
      {
        v244 = *(_DWORD *)(v20 + 16);
        if ( !v244 )
          v244 = *(_DWORD *)(v20 + 20);
      }
      v296 = v244;
      v290 = sub_C03390(a4);
      v245 = sub_EEE9A0(32, *(_QWORD **)(*(_QWORD *)a1 + 248LL), 8u);
      sub_C0B4F0(v245, *(_QWORD *)(*(_QWORD *)a1 + 248LL), v296, v270, v290);
      a2 = *(_QWORD *)(*(_QWORD *)a1 + 248LL);
      sub_C0B210((__int64)a12, (_QWORD *)a2, *a13, (_DWORD *)v245);
      v270 = *(_QWORD *)(v245 + 24);
    }
    v22 = *(_DWORD *)v20;
  }
  else
  {
LABEL_147:
    v22 = *(_DWORD *)v20;
    v270 = 0;
  }
LABEL_6:
  if ( !v22 )
  {
    v23 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*v297 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    v24 = *(_BYTE *)(v23 + 16);
    if ( v24 == 48 )
    {
      v295 = sub_F60F10(v23, a2, a3, v18, a5, a6);
    }
    else
    {
      if ( v24 != 29 )
        goto LABEL_240;
      v295 = sub_F61460(v23, a2, a3, v18, a5, a6);
    }
    if ( v295 )
    {
      v29 = *(_QWORD *)(v20 + 8);
      if ( (v29 & 1) != 0 )
      {
        v337 = nullptr;
      }
      else
      {
        v337 = *(void **)(v20 + 8);
        if ( v29 )
          goto LABEL_12;
      }
      v174 = (void *)sub_C00930(v20);
      a2 = (__int64)v295;
      v175 = *(_QWORD *)v17;
      v340 = v174;
      v179 = sub_183C500(v175, (__int64)v295, (__int64)v174, v176, v177, v178);
      *(_QWORD *)v299 = v179;
      if ( !v179 )
        goto LABEL_399;
      a2 = v179;
      v180 = *(_BYTE *)(v179 + 28) & 0x7F;
      v25 = (unsigned int)v180 - 49;
      if ( (unsigned int)v25 <= 2 )
      {
        v337 = (void *)a2;
        goto LABEL_12;
      }
      if ( v180 == 32 )
      {
        v202 = *(_QWORD *)v17;
        if ( *(_BYTE *)(v17 + 9) )
        {
          p_s = &s;
          v292 = *(unsigned __int16 *)(a4 + 22);
          v251 = (unsigned int)(v292 - 1);
          v350[0] = &s;
          v350[1] = (void *)0x400000000LL;
          if ( v292 != 1 )
          {
            v252 = &s;
            if ( v251 > 4 )
            {
              LODWORD(v319) = v292 - 1;
              sub_2237220(v350, &s, v251, 8);
              v252 = (void **)v350[0];
              v251 = (unsigned int)(v292 - 1);
              p_s = (void **)((char *)v350[0] + 8 * LODWORD(v350[1]));
            }
            v253 = &v252[v251];
            if ( v253 != p_s )
              memset(p_s, 0, 8 * ((unsigned __int64)((char *)v253 - (char *)p_s - 8) >> 3) + 8);
            LODWORD(v350[1]) = v292 - 1;
            v254 = 0;
            do
            {
              *(_QWORD *)((char *)v350[0] + v254) = *(_QWORD *)(a4 + v254 + 40);
              v254 += 8;
            }
            while ( 8LL * (unsigned int)(v292 - 2) + 8 != v254 );
          }
          sub_EE9E50((__m128 *)ptr, a4);
          si128 = _mm_load_si128((const __m128i *)ptr);
          *(_QWORD *)v347 = v362;
          *(__m128i *)v346 = si128;
          v256 = (__int64 *)si128.m128i_i64[0];
          if ( (si128.m128i_i8[8] & 3) != 0 )
            v256 = (__int64 *)sub_EF2B30((__int64)v346);
          a4 = sub_C0D0A0(
                 *(_QWORD **)(v202 + 248),
                 *(_QWORD *)(a4 + 24),
                 *(_WORD *)(a4 + 20) >> 1,
                 (__int64)v350[0],
                 LODWORD(v350[1]),
                 *(unsigned int *)(a4 + 16),
                 *(_BYTE *)(a4 + 20) & 1,
                 *v256);
          if ( v350[0] != &s )
            free(v350[0]);
          v202 = *(_QWORD *)v17;
        }
        ptr[1] = (void *)0x400000000LL;
        v203 = (__m128i *)&v362;
        ptr[0] = &v362;
        v204 = *(_QWORD *)(*(_QWORD *)v299 + 56LL);
        v205 = v204 + 8LL * *(unsigned int *)(*(_QWORD *)v299 + 64LL);
        if ( v204 == v205 )
        {
          v218 = 0;
          v217 = (const __m128i *)&v362;
        }
        else
        {
          v206 = v204 + 8;
          v207 = 4;
          v208 = &v362;
          v209 = 1;
          if ( v205 != v206 )
          {
            v319 = (void **)v17;
            v210 = v205;
            *(_QWORD *)v324 = a4;
            v211 = v206;
            do
            {
              LODWORD(v350[0]) = 0;
              v212 = (const __m128i *)v350;
              v350[1] = &dword_0 + 1;
              s = nullptr;
              if ( v207 < v209 )
              {
                v326 = v208;
                if ( v208 > v350 || v203 <= (__m128i *)v350 )
                {
                  sub_2237220(ptr, &v362, v209, 24);
                  v212 = (const __m128i *)v350;
                  v203 = (__m128i *)((char *)ptr[0] + 24 * LODWORD(ptr[1]));
                }
                else
                {
                  sub_2237220(ptr, &v362, v209, 24);
                  v212 = (const __m128i *)((char *)ptr[0] + (char *)v350 - (char *)v326);
                  v203 = (__m128i *)((char *)ptr[0] + 24 * LODWORD(ptr[1]));
                }
              }
              v211 += 8;
              *v203 = _mm_loadu_si128(v212);
              v203[1].m128i_i64[0] = v212[1].m128i_i64[0];
              v213 = *(_QWORD *)(v211 - 16);
              v208 = (void **)ptr[0];
              v207 = HIDWORD(ptr[1]);
              ++LODWORD(ptr[1]);
              v214 = LODWORD(ptr[1]);
              *((_QWORD *)ptr[0] + 3 * LODWORD(ptr[1]) - 2) = v213;
              v209 = v214 + 1;
              v203 = (__m128i *)&v208[3 * v214];
            }
            while ( v210 != v211 );
            v205 = v210;
            v17 = (__int64)v319;
            a4 = *(_QWORD *)v324;
          }
          v215 = (const __m128i *)v350;
          v314 = (_QWORD *)(v205 - 8);
          v216 = *(void **)(*(_QWORD *)(a4 + 24) + v19 + 16);
          LODWORD(v350[0]) = 0;
          v350[1] = &dword_0 + 1;
          s = v216;
          if ( v207 < v209 )
          {
            *(_QWORD *)v324 = v208;
            if ( v208 > v350 || (v319 = v350, v203 <= (__m128i *)v350) )
            {
              sub_2237220(ptr, &v362, v209, 24);
              v215 = (const __m128i *)v350;
              v203 = (__m128i *)((char *)ptr[0] + 24 * LODWORD(ptr[1]));
            }
            else
            {
              sub_2237220(ptr, &v362, v209, 24);
              v215 = (const __m128i *)((char *)ptr[0] + (unsigned __int64)v350 - *(_QWORD *)v324);
              v203 = (__m128i *)((char *)ptr[0] + 24 * LODWORD(ptr[1]));
            }
          }
          *v203 = _mm_loadu_si128(v215);
          v203[1].m128i_i64[0] = v215[1].m128i_i64[0];
          v217 = (const __m128i *)ptr[0];
          ++LODWORD(ptr[1]);
          v218 = 3LL * LODWORD(ptr[1]);
          *(_QWORD *)((char *)ptr[0] + v218 * 8 - 16) = *v314;
        }
        a2 = *(_QWORD *)(v202 + 248);
        sub_C0DAF0(a4, (_QWORD *)a2, v294, v217, (__int64)&v217->m128i_i64[v218]);
        if ( ptr[0] != &v362 )
          free(ptr[0]);
        v20 = *(_QWORD *)(a4 + 24) + v19;
        v219 = **(void ***)(*(_QWORD *)v299 + 56LL);
        v337 = v219;
      }
      else
      {
LABEL_399:
        v219 = v337;
      }
      if ( !v219 )
      {
        if ( *(_BYTE *)(v17 + 9) )
          goto LABEL_72;
        v288 = *(_QWORD *)v17;
        v220 = sub_C009D0(a4);
        if ( (unsigned __int8)sub_184F250(v288, v220, (__int64)v295, (__int64)v340, v221, v222) )
          goto LABEL_72;
        v227 = sub_B94670((unsigned __int64)(v295 + 8), (__int64)v340, v223, v224, v225, v226);
        v311 = (_QWORD *)(v227 & 0xFFFFFFFFFFFFFFF8LL);
        if ( (v227 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
        {
          v279 = v227;
          sub_168B9F0((__int64)ptr, (__int64 *)(*(_QWORD *)v17 + 8LL), *(_DWORD *)(v20 + 20), 0xEE2u, 0);
          sub_17AE460((__int64)ptr, (__int64 *)&v340);
          sub_15F7200(ptr);
          v257 = v311;
          if ( (v279 & 4) != 0 )
            v257 = (_QWORD *)*v311;
          sub_168B9F0((__int64)ptr, (__int64 *)(*(_QWORD *)v17 + 8LL), *((_DWORD *)v257 + 6), 0x175Du, 0);
          sub_15F7200(ptr);
          goto LABEL_72;
        }
        a7 = 0;
        v346[1] = (void *)0x101010101LL;
        v346[0] = &off_2BC71B0;
        *(_OWORD *)v347 = 0;
        *(_QWORD *)v348 = v295;
        *(_QWORD *)v315 = *(_QWORD *)v17;
        v228 = *(_DWORD *)(v20 + 20);
        ptr[0] = v340;
        LODWORD(ptr[1]) = v228;
        sub_B85890(&v362, (__int64)v340);
        sub_1A6BD60(
          (unsigned int)v350,
          v315[0],
          (unsigned int)ptr,
          3,
          0,
          0,
          (__int64)v346,
          1,
          (__int64)(v295 + 8),
          0,
          0,
          1);
        if ( !v350[0] )
        {
          v265 = *(_DWORD *)(v20 + 20);
          if ( !v265 )
            v265 = sub_BFB1C0(v15);
          sub_168B9F0((__int64)ptr, (__int64 *)(*(_QWORD *)v17 + 8LL), v265, 0xEE3u, 0);
          v266 = sub_17AE460((__int64)ptr, (__int64 *)&v340);
          v267 = sub_1605D30(v266, v297);
          v343 = (void *)sub_EEC8C0(a4, (__int64)v297, 0.0);
          sub_1587DB0(v267, (__int64 *)&v343);
          sub_15F7200(ptr);
          ++*a11;
          sub_17A1D90(v350);
          return 1;
        }
        *(_QWORD *)v300 = *(_QWORD *)v17;
        sub_168B9B0((__int64)ptr, *(_QWORD *)v17 + 8LL, 3812);
        sub_AE9DF0((unsigned __int8 **)ptr, (__int64)v340, 5u);
        sub_AE9DF0((unsigned __int8 **)ptr, *v297, 8u);
        sub_1A60AF0(
          v300[0],
          (int)v350,
          (int)ptr,
          1,
          v229,
          v230,
          v270,
          (int)ptr,
          v293,
          (int)v295,
          (int)v297,
          v300[0],
          (int)v304,
          v305,
          (int)v350,
          v315[0],
          (int)v319,
          v324[0],
          (int)v326,
          v327,
          v329,
          a14,
          v333,
          v334,
          v335,
          v336,
          (int)v337,
          v338,
          (int)v340,
          v341,
          (int)v343,
          v344,
          (int)v346[0],
          (int)v346[1],
          v347[0],
          v347[2],
          v348[0],
          v349,
          (int)v350[0],
          (int)v350[1],
          (int)s,
          v352,
          v353,
          v354,
          v355,
          v356,
          (int)v357,
          v358,
          v359,
          v360,
          (char)ptr[0],
          (int)ptr[1],
          (int)v362,
          v363,
          v364[0],
          v365,
          v366,
          v367,
          v368,
          v369,
          v370,
          v371,
          v372,
          v373,
          v374);
        a2 = (__int64)ptr[0];
        if ( ptr[0] && ptr[1] )
          sub_1580C40((unsigned __int64)ptr[1], (unsigned __int64)ptr[0]);
        if ( v352 )
        {
          v231 = *(_QWORD *)s;
          if ( *(_QWORD *)s
            && ((v232 = *(_BYTE *)(v231 + 28) & 0x7F, ((v232 + 52) & 0x7Fu) > 1) && (unsigned int)v232 - 53 > 1
             || (v231 = sub_B72ED0(*(_QWORD *)s)) != 0) )
          {
            v25 = (*(_BYTE *)(v231 + 28) & 0x7Fu) - 49;
            if ( (unsigned int)v25 <= 2 )
              v219 = (void *)v231;
          }
          else
          {
            v219 = nullptr;
          }
        }
        v233 = v358;
        v26 = (__int64)v357;
        v337 = v219;
        *(_BYTE *)(v17 + 8) = 1;
        *(_QWORD *)v289 = v233;
        if ( v233 != v26 )
        {
          *(_QWORD *)v301 = v17;
          v234 = (unsigned __int64 *)v26;
          do
          {
            v235 = *v234;
            if ( *v234 )
            {
              v236 = v234[1];
              if ( v236 )
              {
                if ( v235 < v236 || v235 > v236 + 14848 )
                {
                  v237 = *(_QWORD *)(v235 + 528);
                  v238 = v237 + ((unsigned __int64)*(unsigned int *)(v235 + 536) << 6);
                  while ( v237 != v238 )
                  {
                    while ( 1 )
                    {
                      v238 -= 64;
                      v239 = *(void **)(v238 + 24);
                      if ( v239 == (void *)(v238 + 40) )
                        break;
                      *(_QWORD *)v323 = v238;
                      *(_QWORD *)v316 = v237;
                      operator delete(v239);
                      v237 = *(_QWORD *)v316;
                      v238 = *(_QWORD *)v323;
                      if ( *(_QWORD *)v316 == *(_QWORD *)v323 )
                        goto LABEL_383;
                    }
                  }
LABEL_383:
                  v240 = *(void **)(v235 + 528);
                  if ( v240 != (void *)(v235 + 544) )
                    free(v240);
                  v241 = *(void **)(v235 + 416);
                  if ( v241 != (void *)(v235 + 432) )
                    free(v241);
                  v242 = (void **)(v235 + 384);
                  v243 = (void **)(v235 + 64);
                  do
                  {
                    while ( *v242 != v242 + 2 )
                    {
                      *(_QWORD *)v317 = v242;
                      operator delete(*v242);
                      v242 = (void **)(*(_QWORD *)v317 - 32LL);
                      if ( (void **)(*(_QWORD *)v317 - 32LL) == v243 )
                        goto LABEL_390;
                    }
                    v242 -= 4;
                  }
                  while ( v242 != v243 );
LABEL_390:
                  a2 = 928;
                  operator delete((void *)v235, 0x3A0u);
                }
                else
                {
                  v26 = *(unsigned int *)(v236 + 14976);
                  a2 = (unsigned int)(v26 + 1);
                  *(_DWORD *)(v236 + 14976) = a2;
                  *(_QWORD *)(v236 + 8 * v26 + 14848) = v235;
                }
              }
            }
            v234 += 3;
          }
          while ( *(unsigned __int64 **)v289 != v234 );
          v17 = *(_QWORD *)v301;
        }
        if ( v357 )
          operator delete(v357);
        if ( s != (void *)(*(_QWORD *)v312 + 32LL) )
          free(s);
      }
LABEL_12:
      if ( (*((_BYTE *)v295 + 28) & 0x7Fu) - 59 <= 2 )
      {
        a2 = v295[13];
        sub_7052B0((__int64 *)(a2 + 96), a2, v25, v26, v27, v28);
        v22 = *(_DWORD *)(v295[16] + 16LL);
      }
      LODWORD(v343) = v22;
      v30 = sub_B7E900((__int64)v295, a2, v25, v26, v27, v28);
      v34 = (__int64)v337;
      v35 = v30;
      if ( v30 )
      {
        v36 = v337;
LABEL_16:
        if ( (*(_BYTE *)(v35 + 68) & 1) == 0 || *(_QWORD *)(v35 + 40) )
        {
          if ( !v36 )
          {
LABEL_22:
            LODWORD(v343) = (_DWORD)v343 + 1;
            goto LABEL_24;
          }
          if ( (void *)v35 == v36 )
          {
            v34 = (__int64)v36;
          }
          else
          {
            v37 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v36 + 32LL))(v36);
            if ( v37 != (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v35 + 32LL))(v35) )
            {
              v36 = v337;
              goto LABEL_22;
            }
            v34 = v35;
          }
          v337 = (void *)v34;
LABEL_27:
          if ( (*(_BYTE *)(v34 + 28) & 0x7Fu) - 49 <= 2 )
            goto LABEL_32;
          while ( 1 )
          {
            v39 = *(_QWORD *)(v34 + 8) & 0xFFFFFFFFFFFFFFF8LL;
            v34 = v39;
            if ( !v39 )
              break;
            if ( (*(_BYTE *)(v39 + 28) & 0x7Fu) - 49 <= 2 )
              goto LABEL_32;
          }
LABEL_31:
          v34 = 0;
LABEL_32:
          if ( *((_BYTE *)v295 + 73) >> 5 == 2 )
          {
            LODWORD(v343) = 0;
            if ( v270 )
            {
              v147 = *(_QWORD *)(v270 + 56);
              if ( v147 )
              {
                if ( (v147 & 2) != 0 )
                {
                  v148 = v147 & 0xFFFFFFFFFFFFFFFCLL;
                  if ( v148 )
                  {
                    if ( !v34
                      || v148 != v34
                      && (v149 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v148 + 32LL))(v148),
                          v149 != (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v34 + 32LL))(v34)) )
                    {
                      v150 = **(_QWORD **)(v270 + 16);
                      v151 = *(_QWORD *)v17;
                      if ( v150 )
                      {
                        v283 = ((*(_BYTE *)(*(_QWORD *)(v151 + 232) + 1LL) >> 3) ^ 1) & 1;
                        v152 = sub_C03390(a4);
                        if ( *(_DWORD *)v20 )
                        {
                          v153 = *(unsigned int *)(v20 + 12);
                        }
                        else
                        {
                          v153 = *(unsigned int *)(v20 + 16);
                          if ( !(_DWORD)v153 )
                            v153 = *(unsigned int *)(v20 + 20);
                        }
                        sub_1A11410((_BYTE *)v17, v150, (v152 << 32) | v153, 1, v283, *(double *)a7.m128_u64);
                        v151 = *(_QWORD *)v17;
                      }
                      sub_C0B170((_QWORD *)v270, *(_QWORD **)(v151 + 248), 0, v31, v32, v33);
                    }
                  }
                }
              }
              v31 = v270;
              *(_QWORD *)(v270 + 56) = v34 | 2;
            }
          }
          v40 = *(_QWORD *)v17;
          v41 = v34;
          if ( *(_BYTE *)(v17 + 9) )
          {
            LOBYTE(v42) = sub_18C0C50(v40, v34, *(_BYTE *)(v17 + 10), v31, v32, v33);
            v46 = v42 ^ 1;
          }
          else
          {
            LODWORD(ptr[0]) = *(_DWORD *)(v20 + 20);
            v46 = sub_18F5260(v40, v34, (int *)ptr, 1u, 0, 0, (__m128i)a7, *(double *)a8.m128_u64, 0, 0, 0);
          }
          if ( (_BYTE)v46 )
          {
            ++*a11;
            return v46;
          }
          v47 = v294;
          v48 = *(_BYTE *)(v17 + 9);
          if ( !v294 )
          {
            if ( v48 )
              goto LABEL_58;
            if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v17 + 232LL) + 1LL) & 8) == 0 || !a9 )
            {
LABEL_57:
              *(_QWORD *)(v20 + 8) = v34;
LABEL_58:
              v71 = (void **)v270;
              if ( v270
                && (unsigned int)v343 >= (unsigned int)((__int64)(*(_QWORD *)(v270 + 24) - *(_QWORD *)(v270 + 16)) >> 3) )
              {
                v286 = v46;
                v71 = *(void ***)(*(_QWORD *)v17 + 248LL);
                sub_C0B170((_QWORD *)v270, v71, (_DWORD)v343 + 1, v44, v47, v45);
                LOBYTE(v46) = v286;
              }
              v72 = v294 + 1;
              if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v34 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                        & 0xFFFFFFFFFFFFFFF0LL)
                            + 16LL) != 5 )
              {
                v350[0] = *(void **)(v34 + 48);
                LODWORD(v346[0]) = (_DWORD)v343;
                LODWORD(ptr[0]) = 6;
                ptr[1] = v304;
                v284 = v46;
                v362 = *(void **)(v34 + 48);
                v363 = 0;
                *(_QWORD *)v364 = v34;
                LOWORD(v365) = 0;
                v154 = sub_1A299A0(
                         v17,
                         (unsigned int)ptr,
                         v15,
                         a4,
                         v72,
                         (unsigned int)v350,
                         0,
                         0,
                         (__int64)a11,
                         v270,
                         (__int64)v346,
                         v331,
                         0);
                v46 = v284;
                if ( (_BYTE)v154 )
                  return v154;
                goto LABEL_231;
              }
              if ( *(_WORD *)(a4 + 20) >> 1 != (_DWORD)v72 )
              {
                if ( !*(_BYTE *)(v17 + 9) )
                {
                  v73 = (_DWORD *)(*(_QWORD *)(a4 + 24) + 24 * v72);
                  if ( *v73 )
                  {
                    v74 = v73[3];
                  }
                  else
                  {
                    v74 = v73[4];
                    if ( !v74 )
                      v74 = v73[5];
                  }
                  sub_168B9F0((__int64)ptr, (__int64 *)(*(_QWORD *)v17 + 8LL), v74, 0xE5Cu, 0);
                  v75 = sub_C03390(a4);
                  if ( *v73 )
                  {
                    v76 = v73[3];
                  }
                  else
                  {
                    v76 = v73[4];
                    if ( !v76 )
                      v76 = v73[5];
                  }
                  v350[0] = (void *)__PAIR64__(v75, v76);
                  sub_1587DB0((__int64)ptr, (__int64 *)v350);
                  sub_15F7200(ptr);
                  sub_168B9F0((__int64)ptr, (__int64 *)(*(_QWORD *)v17 + 8LL), *(_DWORD *)(v34 + 24), 0x1761u, 0);
                  v71 = v350;
                  v350[0] = (void *)v34;
                  sub_1A0FAB0((__int64)ptr, (__int64 *)v350);
                  sub_15F7200(ptr);
                }
                if ( *(_BYTE *)(v17 + 8)
                  || (*(_WORD *)sub_1A0B2F0(a4) & 0x1FF) == 0x35
                  || (*(_WORD *)sub_1A0B2F0(a4) & 0x1FF) == 9 )
                {
                  goto LABEL_72;
                }
                goto LABEL_274;
              }
              if ( !*(_BYTE *)(v17 + 8) )
              {
                v291 = v46;
                v246 = (_WORD *)sub_1A0B2F0(a4);
                LOBYTE(v46) = v291;
                if ( (*v246 & 0x1FF) != 0x35 )
                {
                  v247 = (_WORD *)sub_1A0B2F0(a4);
                  LOBYTE(v46) = v291;
                  if ( (*v247 & 0x1FF) != 9 )
                  {
LABEL_274:
                    if ( !*(_BYTE *)(v17 + 9) )
                    {
                      v165 = (__int64 *)(*(_QWORD *)v17 + 8LL);
                      v166 = sub_1A0B2F0(a4);
                      v167 = sub_EEB7E0(v166, (__int64)v71, *(double *)a7.m128_u64);
                      sub_168B9F0((__int64)ptr, v165, v167, 0xEF2u, 0);
                      v168 = sub_1A0B2F0(a4);
                      v350[0] = (void *)sub_EEC8C0(v168, (__int64)v165, *(double *)a7.m128_u64);
                      sub_1587DB0((__int64)ptr, (__int64 *)v350);
                      sub_15F7200(ptr);
                      sub_168B9F0((__int64)ptr, (__int64 *)(*(_QWORD *)v17 + 8LL), *(_DWORD *)(v34 + 24), 0x1761u, 0);
                      v350[0] = (void *)v34;
                      sub_1A0FAB0((__int64)ptr, (__int64 *)v350);
                      sub_15F7200(ptr);
                    }
                    goto LABEL_72;
                  }
                }
              }
              v287 = v46;
              v191 = sub_1A0B2F0(a4);
              if ( !(unsigned __int8)sub_1A12E60((_BYTE *)v17, v304, v191, v34, v305, *(double *)a7.m128_u64) )
              {
                v192 = *(_BYTE *)(v17 + 8);
                LODWORD(v350[0]) = (_DWORD)v343;
                v193 = *a11;
                v194 = (_DWORD *)sub_1A0B2F0(a4);
                *(_QWORD *)(*(_QWORD *)(v15 + 16) + 8LL * *a11) = v194;
                if ( v194 )
                {
                  v195 = ((*v194 >> 14) | (*(_DWORD *)v15 >> 14)) & 0x1F;
                  *(_BYTE *)(v15 + 1) = (v195 << 6) | *(_BYTE *)(v15 + 1) & 0x3F;
                  *(_BYTE *)(v15 + 2) = *(_BYTE *)(v15 + 2) & 0xF8 | (v195 >> 2);
                }
                LODWORD(ptr[0]) = 6;
                ptr[1] = v304;
                v196 = *(void **)(v34 + 48);
                v363 = 0;
                v362 = v196;
                LOWORD(v365) = 0;
                *(_QWORD *)v364 = v34;
                sub_1A27C60(v17, (__m128i *)ptr, v15, *(_QWORD *)(v34 + 48), a11, v270, a7, a8, (unsigned int *)v350, 0);
                *(_QWORD *)(*(_QWORD *)(v15 + 16) + 8LL * v193) = a4;
                v197 = ((*(_DWORD *)a4 >> 14) | (*(_DWORD *)v15 >> 14)) & 0x1F;
                *(_BYTE *)(v15 + 1) = (v197 << 6) | *(_BYTE *)(v15 + 1) & 0x3F;
                *(_BYTE *)(v15 + 2) = *(_BYTE *)(v15 + 2) & 0xF8 | (v197 >> 2);
                v46 = v287;
                if ( *(_BYTE *)(v17 + 8) == 1 && !v192 )
                {
                  v198 = *(_QWORD *)(v34 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                  if ( v198 && (*(_BYTE *)(v198 + 28) & 0x7Fu) - 49 > 2 )
                  {
                    do
                    {
                      v199 = *(_QWORD *)(v198 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                      v198 = v199;
                    }
                    while ( v199 && (*(_BYTE *)(v199 + 28) & 0x7Fu) - 49 > 2 );
                  }
                  v200 = (_DWORD)v343 + 1;
                  if ( a9 )
                    *a9 = v198;
                  *a13 = v200;
                  return 1;
                }
LABEL_231:
                v155 = *(_QWORD *)(v34 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                if ( v155 )
                {
                  if ( (*(_BYTE *)(v155 + 28) & 0x7Fu) - 49 <= 2 )
                  {
LABEL_307:
                    v157 = (_DWORD)v343 + 1;
                    LODWORD(v343) = (_DWORD)v343 + 1;
                    if ( !v294 )
                    {
                      if ( (*(_BYTE *)(v155 + 68) & 1) != 0 && !*(_QWORD *)(v155 + 40) )
                      {
                        v155 = *(_QWORD *)(v155 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                        if ( v155 )
                        {
                          if ( (*(_BYTE *)(v155 + 28) & 0x7Fu) - 49 > 2 )
                          {
                            do
                            {
                              v249 = *(_QWORD *)(v155 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                              v155 = v249;
                            }
                            while ( v249 && (*(_BYTE *)(v249 + 28) & 0x7Fu) - 49 > 2 );
                          }
                        }
                      }
                      goto LABEL_310;
                    }
LABEL_237:
                    v46 = 0;
                    if ( v331 )
                    {
                      v46 = *(unsigned __int8 *)(v17 + 8);
                      if ( *((_BYTE *)v295 + 73) >> 5 != 2 )
                      {
                        v285 = *(_BYTE *)(v17 + 8);
                        sub_1A28520(
                          (_QWORD **)v17,
                          v304,
                          v15,
                          *v297,
                          0,
                          0,
                          a7,
                          a8,
                          v155,
                          0,
                          a11,
                          (_QWORD *)v270,
                          (unsigned int *)&v343,
                          0);
                        return (*(unsigned __int8 *)(v17 + 8) ^ 1 | v285) ^ 1u;
                      }
                    }
                    return v46;
                  }
                  while ( 1 )
                  {
                    v156 = *(_QWORD *)(v155 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                    v155 = v156;
                    if ( !v156 )
                      break;
                    if ( (*(_BYTE *)(v156 + 28) & 0x7Fu) - 49 <= 2 )
                      goto LABEL_307;
                  }
                }
                v155 = 0;
                v157 = (_DWORD)v343 + 1;
                LODWORD(v343) = (_DWORD)v343 + 1;
                if ( !v294 )
                {
LABEL_310:
                  if ( a9 )
                    *a9 = v155;
                  *a13 = v157;
                  return v46;
                }
                goto LABEL_237;
              }
LABEL_72:
              ++*a11;
              return 1;
            }
            if ( !*a9
              || (v49 = sub_C1D4D0(*a9, v34, v43, v44, v294, v45),
                  v54 = sub_C1D4D0(v34, v34, v50, v51, v52, v53),
                  LOBYTE(v46) = 0,
                  v49 > v54 + 1) )
            {
              v280 = v46;
              v346[0] = nullptr;
              v55 = sub_B7E900((__int64)v295, v34, v43, v44, v47, v45);
              LOBYTE(v46) = v280;
              v57 = v55;
              if ( v55 )
              {
                v58 = v15;
                v44 = a4;
                v59 = v17;
                v60 = v280;
                v61 = v58;
LABEL_44:
                if ( (*(_BYTE *)(v57 + 68) & 1) != 0 && !*(_QWORD *)(v57 + 40) )
                {
LABEL_51:
                  while ( 1 )
                  {
                    v63 = *(_QWORD *)(v57 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                    v57 = v63;
                    if ( !v63 )
                      break;
                    if ( (*(_BYTE *)(v63 + 28) & 0x7Fu) - 49 <= 2 )
                      goto LABEL_44;
                  }
                }
                else
                {
                  v41 = *a9;
                  if ( !*a9
                    || (*(_QWORD *)v306 = *a9, v41 != v57)
                    && (*(_QWORD *)v298 = v44,
                        v41 = *a9,
                        *(_QWORD *)v281 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v57 + 32LL))(v57),
                        v62 = (*(__int64 (__fastcall **)(int *))(**(_QWORD **)v306 + 32LL))(*(int **)v306),
                        v44 = *(_QWORD *)v298,
                        *(_QWORD *)v281 != v62) )
                  {
                    v346[0] = (void *)v57;
                    goto LABEL_51;
                  }
                }
                v64 = v61;
                LOBYTE(v46) = v60;
                v17 = v59;
                a4 = v44;
                v15 = v64;
              }
              if ( v346[0] )
              {
                v282 = v46;
                v65 = sub_C1D4D0((__int64)v346[0], v41, v56, v44, v47, v45);
                v70 = sub_C1D4D0((__int64)v337, v41, v66, v67, v68, v69);
                LOBYTE(v46) = v282;
                if ( v65 > v70 )
                {
                  v258 = (__int64 *)(*(_QWORD *)v17 + 8LL);
                  v259 = sub_1A0B2F0(a4);
                  v260 = sub_EEB7E0(v259, v41, *(double *)a7.m128_u64);
                  sub_168B9F0((__int64)ptr, v258, v260, 0x159Fu, 0);
                  v261 = sub_185C9E0((__int64)ptr, (__int64 *)&v337);
                  v302 = sub_185C9E0(v261, (__int64 *)v346);
                  v350[0] = (void *)sub_EEC8C0(a4, (__int64)v346, *(double *)a7.m128_u64);
                  sub_1587DB0(v302, (__int64 *)v350);
                  sub_15F7200(ptr);
                  LOBYTE(v46) = v282;
                  if ( v270 )
                  {
                    v44 = *(_QWORD *)(v270 + 16);
                    v262 = *a13 - 1;
                    if ( (unsigned int)v262 <= (unsigned int)((*(_QWORD *)(v270 + 24) - v44) >> 3) )
                    {
                      v45 = *(_QWORD *)(v44 + 8 * v262);
                      if ( v45 )
                      {
                        v303 = *(_QWORD *)(v44 + 8 * v262);
                        v318 = (__int64 *)(*(_QWORD *)v17 + 8LL);
                        v263 = sub_EEB7E0(v45, (__int64)v318, *(double *)a7.m128_u64);
                        sub_168B9F0((__int64)ptr, v318, v263, 0x188Fu, 0);
                        v264 = sub_185C9E0((__int64)ptr, (__int64 *)v346);
                        v350[0] = (void *)sub_EEC8C0(v303, (__int64)v346, *(double *)a7.m128_u64);
                        sub_1587DB0(v264, (__int64 *)v350);
                        sub_15F7200(ptr);
                        LOBYTE(v46) = v282;
                      }
                    }
                  }
                }
              }
            }
            v48 = *(_BYTE *)(v17 + 9);
          }
          if ( v48 )
            goto LABEL_58;
          goto LABEL_57;
        }
LABEL_24:
        while ( 1 )
        {
          v38 = *(_QWORD *)(v35 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          v35 = v38;
          if ( !v38 )
            break;
          if ( (*(_BYTE *)(v38 + 28) & 0x7Fu) - 49 <= 2 )
            goto LABEL_16;
        }
        v34 = (__int64)v36;
      }
      if ( !v34 )
        goto LABEL_31;
      goto LABEL_27;
    }
LABEL_240:
    v158 = *(_DWORD *)(v20 + 16);
    if ( !v158 )
      v158 = *(_DWORD *)(v20 + 20);
    if ( !*(_BYTE *)(v17 + 9) )
    {
      sub_168B9F0((__int64)ptr, (__int64 *)(*(_QWORD *)v17 + 8LL), v158, 0xEE1u, 0);
      LODWORD(v350[0]) = (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v17 + 232LL) + 1LL) & 8) != 0;
      v159 = sub_1588370((__int64)ptr, (unsigned int *)v350);
      sub_1605D30(v159, v297);
      sub_15F7200(ptr);
    }
    goto LABEL_72;
  }
  v305 = sub_A72040(*(_QWORD **)(*(_QWORD *)v17 + 248LL), *v297);
  if ( !v305 )
  {
    if ( !*(_BYTE *)(v17 + 9) )
    {
      sub_168B9F0((__int64)ptr, (__int64 *)(*(_QWORD *)v17 + 8LL), *(_DWORD *)(v20 + 12), 0xBFBu, 0);
      sub_1605D30((__int64)ptr, v297);
      sub_15F7200(ptr);
    }
    goto LABEL_72;
  }
  v88 = *(_DWORD *)v20 == 1;
  v338 = 1;
  v337 = nullptr;
  v339 = 0;
  v341 = 1;
  v340 = nullptr;
  v342 = 0;
  if ( v88 )
  {
    v97 = sub_C033F0(a4, v20);
    sub_C3DC60((__int64)ptr, v97, *(_QWORD *)(*(_QWORD *)v17 + 248LL), 0, v131, v132);
    v326 = &v337;
    sub_C18DB0((__int64)&v337, (__int64)ptr);
    if ( LODWORD(ptr[1]) > 0x40 && ptr[0] )
      operator delete[](ptr[0]);
    if ( v341 <= 0x40 && v338 <= 0x40 )
    {
      v341 = v338;
      v340 = v337;
    }
    else
    {
      sub_22056A0(&v340, &v337);
    }
    v342 = v339;
  }
  else
  {
    v89 = sub_C03400(a4, v20);
    sub_C3DC60((__int64)ptr, v89, *(_QWORD *)(*(_QWORD *)v17 + 248LL), 0, v90, v91);
    v326 = &v337;
    sub_C18DB0((__int64)&v337, (__int64)ptr);
    if ( LODWORD(ptr[1]) > 0x40 && ptr[0] )
      operator delete[](ptr[0]);
    v92 = sub_C03410(a4, v20);
    sub_C3DC60((__int64)ptr, v92, *(_QWORD *)(*(_QWORD *)v17 + 248LL), 0, v93, v94);
    sub_C18DB0((__int64)&v340, (__int64)ptr);
    if ( LODWORD(ptr[1]) > 0x40 && ptr[0] )
      operator delete[](ptr[0]);
    v95 = sub_C03410(a4, v20);
    v96 = v337;
    v97 = v95;
    if ( v338 > 0x40 )
      v96 = *(void **)v337;
    v98 = v340;
    if ( v341 > 0x40 )
      v98 = *(void **)v340;
    if ( v98 != v96 )
    {
      v99 = sub_1A0B2F0(a4);
      if ( (unsigned __int8)sub_C01160(v99, *(_QWORD *)(*(_QWORD *)v17 + 248LL), 1, v100, v101) )
      {
        if ( !*(_BYTE *)(v17 + 9) )
          *(_BYTE *)(*(_QWORD *)(v17 + 16) + 2LL) |= 8u;
      }
    }
  }
  if ( (unsigned int)*(unsigned __int8 *)(v305 + 16) - 2 > 1 )
  {
    v144 = sub_F56FC0(*(_QWORD **)(*(_QWORD *)v17 + 248LL));
    sub_C16870((__int64)ptr, (__int64)&v337, v144);
    sub_C18DB0((__int64)&v337, (__int64)ptr);
    if ( LODWORD(ptr[1]) > 0x40 && ptr[0] )
      operator delete[](ptr[0]);
    sub_C16870((__int64)ptr, (__int64)&v340, v144);
    v102 = ptr;
    sub_C18DB0((__int64)&v340, (__int64)ptr);
    if ( LODWORD(ptr[1]) > 0x40 && ptr[0] )
      operator delete[](ptr[0]);
    v339 = 1;
    v342 = 1;
LABEL_122:
    if ( !v270 )
      goto LABEL_172;
    if ( !(unsigned __int8)sub_BFD4B0((_QWORD *)v270, (__int64)v102, v103, v104, v105) )
      goto LABEL_168;
    v106 = *(__int64 **)(*(_QWORD *)v17 + 248LL);
    if ( *(_BYTE *)(v17 + 9) )
    {
      v270 = 0;
      goto LABEL_173;
    }
    v20 = sub_BFBAE0(**(_QWORD **)(v270 + 16));
    v313 = *(_QWORD *)(v305 + 32);
    v330 = v313;
    if ( sub_A62E10((__int64)v106, v313, v107, v108, v109) )
      v330 = sub_AAF890(v106, v313, v110, v111, v112);
    v332 = sub_A97D20((__int64)v106, *(_QWORD *)(v330 & 0xFFFFFFFFFFFFFFF0LL));
    if ( (*(_WORD *)v20 & 0x1FF) == 9 )
    {
      LODWORD(v113) = *(_DWORD *)(v20 + 16);
      sub_A5DAD0((__int64)ptr, v305);
      v307 = (int)ptr[1];
      if ( LODWORD(ptr[1]) <= 0x40 )
      {
        if ( (void *)(unsigned int)v113 <= ptr[0] )
        {
LABEL_132:
          a2 = (__int64)v106;
          sub_C0B170((_QWORD *)v270, v106, (unsigned int)v113, v114, v115, v116);
          if ( !(_DWORD)v113 )
            goto LABEL_168;
          v117 = (void **)(unsigned int)((_DWORD)v113 - 1);
          *(_QWORD *)v324 = v17;
          v19 = 0;
          v17 = v330;
          v319 = v117;
          v329 = a4;
          a4 = v332;
          v327 = v15;
          while ( 1 )
          {
            v15 = (unsigned int)v19;
            v123 = (*(_WORD *)(v20 + 2) >> 6) & 7;
            if ( ((*(_WORD *)(v20 + 2) >> 6) & 7) == 2 )
            {
              a3 = *(unsigned int *)(v20 + 4);
              v118 = *(unsigned __int16 *)(v20 + 2 * v19 + 4 * a3 + 20);
              LODWORD(ptr[1]) = v332;
              if ( v332 <= 0x40 )
                goto LABEL_136;
            }
            else
            {
              if ( (_BYTE)v123 == 4 )
              {
                v118 = *(unsigned int *)(v20 + 4 * (v19 + *(unsigned int *)(v20 + 4)) + 20);
              }
              else
              {
                if ( (_BYTE)v123 != 1 )
                  goto LABEL_147;
                v118 = *(unsigned __int8 *)(v19 + v20 + 4LL * *(unsigned int *)(v20 + 4) + 20);
              }
              LODWORD(ptr[1]) = v332;
              if ( v332 <= 0x40 )
              {
LABEL_136:
                ptr[0] = (void *)v118;
                goto LABEL_137;
              }
            }
            sub_2205470(ptr, v118, 0);
LABEL_137:
            v308 = sub_C00A40(v20, v118, a3, v18, a5);
            v119 = sub_EEE9A0(32, v106, 8u);
            v120 = v308;
            v309 = v119;
            sub_C0CA00(v119, v106, (__int64)ptr, v17, v120, v121);
            v122 = (_DWORD *)v309;
            if ( v17 != v313 )
              v122 = (_DWORD *)sub_C0A3E0(v106, v313, 27, v309, 0, 0, 0);
            a2 = (__int64)v106;
            sub_C0B210(v270, v106, v19, v122);
            if ( LODWORD(ptr[1]) > 0x40 && ptr[0] )
              operator delete[](ptr[0]);
            if ( v319 == (void **)v19 )
            {
              v17 = *(_QWORD *)v324;
              v15 = v327;
              LODWORD(a4) = v329;
              goto LABEL_168;
            }
            ++v19;
          }
        }
      }
      else
      {
        if ( v307 - (unsigned int)sub_2206780(ptr) > 0x40 || (unsigned __int64)(unsigned int)v113 <= *(_QWORD *)ptr[0] )
        {
          if ( ptr[0] )
            operator delete[](ptr[0]);
          goto LABEL_132;
        }
        operator delete[](ptr[0]);
      }
      v113 = *(_QWORD **)(v305 + 40);
      if ( (*(_BYTE *)(v305 + 19) & 2) != 0 )
      {
        if ( *((_DWORD *)v113 + 2) <= 0x40u )
          v113 = (_QWORD *)*v113;
        else
          v113 = *(_QWORD **)*v113;
      }
      goto LABEL_132;
    }
    ptr[1] = nullptr;
    LOBYTE(v362) = 0;
    ptr[0] = &v362;
    sub_AADCB0(v106, **(_QWORD **)(v20 + 16), ptr, 0, nullptr);
    v320 = ptr[1];
    sub_A5DAD0((__int64)v350, v305);
    v183 = (int)v350[1];
    v184 = v320;
    if ( LODWORD(v350[1]) > 0x40 )
    {
      v201 = sub_2206780(v350);
      v184 = v320;
      if ( (unsigned int)(v183 - v201) > 0x40 || (unsigned __int64)v320 <= *(_QWORD *)v350[0] )
      {
        if ( v350[0] )
        {
          operator delete[](v350[0]);
          v184 = v320;
        }
LABEL_295:
        *(_QWORD *)v321 = v184;
        v185 = 0;
        sub_C0B170((_QWORD *)v270, v106, (unsigned int)v184, (__int64)v184, v181, v182);
        v187 = *(_QWORD *)v321;
        *(_QWORD *)v325 = (unsigned int)(v321[0] - 1);
        if ( v321[0] )
        {
          v328 = v20;
          while ( 1 )
          {
            v190 = *((char *)ptr[0] + v185);
            LODWORD(v350[1]) = v332;
            if ( v332 <= 0x40 )
              v350[0] = (void *)v190;
            else
              sub_2205470(v350, v190, 0);
            v322 = sub_C00A40(v328, v190, v186, v187, a5);
            v188 = (_DWORD *)sub_EEE9A0(32, v106, 8u);
            sub_C0CA00((__int64)v188, v106, (__int64)v350, v330, v322, v189);
            if ( v330 != v313 )
              v188 = (_DWORD *)sub_C0A3E0(v106, v313, 27, (__int64)v188, 0, 0, 0);
            sub_C0B210(v270, v106, v185, v188);
            if ( LODWORD(v350[1]) > 0x40 && v350[0] )
              operator delete[](v350[0]);
            if ( *(_QWORD *)v325 == v185 )
              break;
            ++v185;
          }
        }
        if ( ptr[0] != &v362 )
          operator delete(ptr[0]);
LABEL_168:
        v133 = (unsigned __int64)v340;
        if ( v341 > 0x40 )
          v133 = *(_QWORD *)v340;
        v106 = *(__int64 **)(*(_QWORD *)v17 + 248LL);
        if ( (unsigned int)((__int64)(*(_QWORD *)(v270 + 24) - *(_QWORD *)(v270 + 16)) >> 3) > v133 )
        {
LABEL_173:
          LODWORD(v134) = (_DWORD)v337;
          if ( v338 > 0x40 )
            v134 = *(void **)v337;
          LODWORD(v346[0]) = (_DWORD)v134;
          v135 = *a11;
          sub_1A0B470((__int64)ptr, v106, 0, (__int64)v304);
          v310 = v15;
          while ( 1 )
          {
            v136 = v339;
            if ( v339 )
            {
              v137 = sub_2205DB0(&v337, &v340);
              LOBYTE(v137) = v137 <= 0;
              if ( !(_BYTE)v137 )
                goto LABEL_187;
            }
            else
            {
              v137 = sub_2205E20(&v337, &v340);
              LOBYTE(v137) = v137 <= 0;
              if ( !(_BYTE)v137 )
              {
LABEL_187:
                v142 = v136;
                v46 = v137;
                if ( v294 )
                {
                  if ( (_BYTE)a14 )
                  {
                    v143 = *(unsigned __int8 *)(v17 + 8);
                    LODWORD(v350[1]) = v338;
                    if ( v338 > 0x40 )
                    {
                      sub_2205510(v350);
                      v142 = v339;
                    }
                    else
                    {
                      v350[0] = v337;
                    }
                    BYTE4(v350[1]) = v142;
                    sub_1A1AE40(
                      (unsigned int *)v17,
                      v304,
                      v310,
                      v297,
                      (__int64)v350,
                      0,
                      a7,
                      a8,
                      a11,
                      (_QWORD *)v270,
                      (int *)v346);
                    if ( LODWORD(v350[1]) > 0x40 && v350[0] )
                      operator delete[](v350[0]);
                    v46 = (*(unsigned __int8 *)(v17 + 8) ^ 1 | v143) ^ 1;
                  }
                }
                else
                {
                  if ( a10 )
                  {
                    if ( *(_DWORD *)(a10 + 8) <= 0x40u && v338 <= 0x40 )
                    {
                      v248 = v337;
                      *(_DWORD *)(a10 + 8) = v338;
                      *(_QWORD *)a10 = v248;
                    }
                    else
                    {
                      v278 = v137;
                      sub_22056A0(a10, &v337);
                      v46 = v278;
                      v142 = v339;
                    }
                    *(_BYTE *)(a10 + 12) = v142;
                  }
                  *a13 = (unsigned int)v346[0];
                }
                goto LABEL_195;
              }
            }
            v138 = *(void **)(v305 + 32);
            *a11 = v135;
            v350[0] = v138;
            v364[0] = (int)v346[0];
            v139 = 0;
            if ( (_BYTE)a14 )
            {
              if ( v338 <= 0x40 )
                LOBYTE(v139) = v337 == v340;
              else
                LOBYTE(v139) = sub_2205D70(&v337, &v340);
              v139 = (unsigned __int8)v139;
            }
            v140 = sub_1A299A0(
                     v17,
                     (unsigned int)ptr,
                     v310,
                     a4,
                     v294 + 1,
                     (unsigned int)v350,
                     0,
                     0,
                     (__int64)a11,
                     v270,
                     (__int64)v346,
                     v139,
                     0);
            if ( (_BYTE)v140 )
            {
              v46 = v140;
              goto LABEL_195;
            }
            sub_2205900(&v337);
            LODWORD(v141) = (_DWORD)v337;
            if ( v338 > 0x40 )
              v141 = *(void **)v337;
            LODWORD(v346[0]) = (_DWORD)v141;
          }
        }
        sub_C0B170((_QWORD *)v270, *(_QWORD **)(*(_QWORD *)v17 + 248LL), v133 + 1, v270, a5, a6);
LABEL_172:
        v106 = *(__int64 **)(*(_QWORD *)v17 + 248LL);
        goto LABEL_173;
      }
      operator delete[](v350[0]);
    }
    else if ( v320 <= v350[0] )
    {
      goto LABEL_295;
    }
    v184 = *(_QWORD **)(v305 + 40);
    if ( (*(_BYTE *)(v305 + 19) & 2) != 0 )
    {
      if ( *((_DWORD *)v184 + 2) <= 0x40u )
        v184 = (_QWORD *)*v184;
      else
        v184 = *(_QWORD **)*v184;
    }
    goto LABEL_295;
  }
  sub_A5DAD0((__int64)ptr, v305);
  v345 = 0;
  v344 = (unsigned int)ptr[1];
  v343 = ptr[0];
  if ( v339 )
  {
    sub_2206D90(ptr, &v337, LODWORD(ptr[1]));
    BYTE4(v350[1]) = 1;
  }
  else
  {
    sub_2206DE0(ptr, &v337, LODWORD(ptr[1]));
    BYTE4(v350[1]) = 0;
  }
  LODWORD(v350[1]) = ptr[1];
  v350[0] = ptr[0];
  sub_C18DB0((__int64)&v337, (__int64)v350);
  if ( LODWORD(v350[1]) > 0x40 && v350[0] )
    operator delete[](v350[0]);
  v339 = v345;
  if ( v342 )
  {
    sub_2206D90(ptr, &v340, v344);
    BYTE4(v350[1]) = 1;
  }
  else
  {
    sub_2206DE0(ptr, &v340, v344);
    BYTE4(v350[1]) = 0;
  }
  LODWORD(v350[1]) = ptr[1];
  v350[0] = ptr[0];
  sub_C18DB0((__int64)&v340, (__int64)v350);
  if ( LODWORD(v350[1]) > 0x40 && v350[0] )
    operator delete[](v350[0]);
  v102 = &v343;
  v342 = v345;
  if ( v345 )
    v46 = (int)sub_2205DB0(&v340, &v343) >= 0;
  else
    v46 = (int)sub_2205E20(&v340, &v343) >= 0;
  if ( !(_BYTE)v46 )
  {
    if ( v344 > 0x40 && v343 )
      operator delete[](v343);
    goto LABEL_122;
  }
  if ( !*(_BYTE *)(v17 + 9) )
  {
    v169 = *(_QWORD *)v17;
    v275 = v46;
    v170 = sub_EEB7E0(v97, (__int64)&v343, *(double *)a7.m128_u64);
    sub_168B9F0((__int64)ptr, (__int64 *)(v169 + 8), v170, 0xBFCu, 0);
    sub_C1DEB0(v346, (int)&v340, 10, v342 ^ 1, 0, 1u, 0);
    v171 = sub_1682AF0((__int64)ptr, (__int64)v346);
    sub_C1DEB0(v350, (int)&v343, 10, v345 ^ 1, 0, 1u, 0);
    v172 = sub_1682AF0(v171, (__int64)v350);
    v336 = sub_EEC8C0(v97, (__int64)v350, *(double *)a7.m128_u64);
    sub_1587DB0(v172, &v336);
    v173 = v275;
    if ( v350[0] != &s )
    {
      operator delete(v350[0]);
      v173 = v275;
    }
    if ( v346[0] != v347 )
    {
      v276 = v173;
      operator delete(v346[0]);
      v173 = v276;
    }
    v277 = v173;
    sub_15F7200(ptr);
    v46 = v277;
  }
  ++*a11;
  if ( v344 > 0x40 && v343 )
  {
    v274 = v46;
    operator delete[](v343);
    v46 = v274;
  }
LABEL_195:
  if ( v341 > 0x40 && v340 )
  {
    v272 = v46;
    operator delete[](v340);
    v46 = v272;
  }
  if ( v338 > 0x40 && v337 )
  {
    v273 = v46;
    operator delete[](v337);
    return v273;
  }
  return v46;
}
