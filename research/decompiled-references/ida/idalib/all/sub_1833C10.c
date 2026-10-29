void __fastcall sub_1833C10(
        __int64 a1,
        __int64 a2,
        __m128i *a3,
        unsigned __int64 a4,
        _BYTE *a5,
        _BYTE *a6,
        __m128 a7,
        __m128i a8)
{
  int v8; // r11d
  char v9; // al
  __int64 *v13; // rsi
  unsigned int v14; // ecx
  __int64 v15; // r12
  bool v16; // r15
  unsigned __int64 v17; // r14
  unsigned int v18; // eax
  unsigned __int64 v19; // r12
  __int64 v20; // r15
  char v21; // al
  _WORD *v22; // r15
  unsigned __int64 v23; // rax
  __int64 v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  _WORD *v29; // rdi
  __int64 k; // r14
  _DWORD *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  _DWORD *v36; // rsi
  __int64 **v37; // rax
  __int64 *v38; // rdx
  __int64 *v39; // rax
  __int64 *v40; // rcx
  _QWORD *v41; // rax
  __int64 v42; // rcx
  __m128i *v43; // r12
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rcx
  bool v49; // zf
  _QWORD *v50; // rax
  const void *v51; // r14
  __int64 v52; // r15
  __int64 v53; // rcx
  __m128i *v54; // r12
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rbx
  __int64 v60; // r12
  _QWORD *v61; // rax
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // rcx
  __m128i *v65; // rbx
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  __m128i *v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  __m128i *v75; // rax
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // r9
  _QWORD *v80; // rax
  __int64 v81; // rcx
  __m128i *v82; // r12
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // r8
  __int64 v86; // r9
  __int64 v87; // rbx
  __int64 v88; // r12
  _QWORD *v89; // rax
  __int64 v90; // r8
  __int64 v91; // r9
  __int64 v92; // rcx
  __m128i *v93; // rbx
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // r8
  __int64 v97; // r9
  __int64 i; // r14
  _DWORD *v99; // rax
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // r8
  __int64 v103; // r9
  _DWORD *v104; // rsi
  __int64 **v105; // rax
  __int64 *v106; // rdx
  __int64 *v107; // rax
  __int64 *v108; // rcx
  _QWORD *v109; // rax
  __int64 v110; // rcx
  __m128i *v111; // r12
  __int64 v112; // rdx
  __int64 v113; // rcx
  __int64 v114; // r8
  __int64 v115; // r9
  __int64 v116; // rcx
  __m128i *v117; // rax
  __int64 v118; // rdx
  __int64 v119; // rcx
  __int64 v120; // r8
  __int64 v121; // r9
  __int64 v122; // rbx
  __int64 v123; // r12
  _QWORD *v124; // rax
  __int64 v125; // r8
  __int64 v126; // r9
  __int64 v127; // rcx
  __m128i *v128; // rbx
  __int64 v129; // rdx
  __int64 v130; // rcx
  __int64 v131; // r8
  __int64 v132; // r9
  __int64 v133; // rax
  __int64 v134; // rdx
  __int64 v135; // rcx
  __int64 v136; // r8
  __int64 v137; // r9
  __int64 v138; // rdi
  __int64 v139; // rbx
  __int64 v140; // r12
  _QWORD *v141; // rax
  __int64 v142; // r8
  __int64 v143; // r9
  __int64 v144; // rcx
  __m128i *v145; // rbx
  __int64 v146; // rdx
  __int64 v147; // rcx
  __int64 v148; // r8
  __int64 v149; // r9
  const void *v150; // rax
  __int64 *v151; // rbx
  __int64 v152; // rdi
  const void *v153; // rax
  __int64 v154; // rdi
  __m128i *v155; // rax
  __int64 v156; // rdx
  __int64 v157; // rcx
  __int64 v158; // r8
  __int64 v159; // r9
  __int64 v160; // rbx
  __int64 v161; // r12
  _QWORD *v162; // rax
  __int64 v163; // r8
  __int64 v164; // r9
  __int64 v165; // rcx
  __m128i *v166; // rbx
  __int64 v167; // rdx
  __int64 v168; // rcx
  __int64 v169; // r8
  __int64 v170; // r9
  _QWORD *v171; // rax
  __int64 v172; // rcx
  __m128i *v173; // r12
  __int64 v174; // rdx
  __int64 v175; // rcx
  __int64 v176; // r8
  __int64 v177; // r9
  __int64 v178; // rbx
  __int64 v179; // r12
  _QWORD *v180; // rax
  __int64 v181; // r8
  __int64 v182; // r9
  __int64 v183; // rcx
  __m128i *v184; // rbx
  __int64 v185; // rdx
  __int64 v186; // rcx
  __int64 v187; // r8
  __int64 v188; // r9
  __int64 v189; // rax
  __int64 v190; // rdx
  __int64 v191; // rax
  __int64 v192; // rbx
  __int64 v193; // r12
  _QWORD *v194; // rax
  __int64 v195; // r8
  __int64 v196; // r9
  __int64 v197; // rcx
  __m128i *v198; // rbx
  __int64 v199; // rdx
  __int64 v200; // rcx
  __int64 v201; // r8
  __int64 v202; // r9
  __int64 v203; // rbx
  __int64 v204; // r12
  _QWORD *v205; // rax
  __int64 v206; // r8
  __int64 v207; // r9
  __int64 v208; // rcx
  __m128i *v209; // rbx
  __int64 v210; // rdx
  __int64 v211; // rcx
  __int64 v212; // r8
  __int64 v213; // r9
  __int64 v214; // rbx
  __int64 v215; // r12
  _QWORD *v216; // rax
  __int64 v217; // r8
  __int64 v218; // r9
  __int64 v219; // rcx
  __m128i *v220; // rbx
  __int64 v221; // rdx
  __int64 v222; // rcx
  __int64 v223; // r8
  __int64 v224; // r9
  __int64 v225; // rax
  __int64 v226; // rcx
  __int64 v227; // r8
  __int64 v228; // r9
  __int64 v229; // r14
  unsigned int *v230; // rax
  __int64 v231; // rdx
  __int64 v232; // rax
  __int64 v233; // rax
  __int64 v234; // rdx
  __int64 v235; // rcx
  __int64 v236; // r8
  __int64 v237; // r9
  _QWORD *v238; // rbx
  __int64 v239; // rcx
  __int64 v240; // r8
  __int64 v241; // r9
  __int64 v242; // r14
  unsigned int *v243; // rax
  __int64 v244; // rdx
  __int64 v245; // rax
  __int64 v246; // rax
  __int64 v247; // rdx
  __int64 v248; // rcx
  __int64 v249; // r8
  __int64 v250; // r9
  _QWORD *v251; // rbx
  _QWORD *v252; // rax
  __int64 v253; // rcx
  __m128i *v254; // r12
  __int64 v255; // rdx
  __int64 v256; // rcx
  __int64 v257; // r8
  __int64 v258; // r9
  __int64 v259; // rbx
  __int64 v260; // r12
  _QWORD *v261; // rax
  __int64 v262; // r8
  __int64 v263; // r9
  __int64 v264; // rcx
  __m128i *v265; // rbx
  __int64 v266; // rdx
  __int64 v267; // rcx
  __int64 v268; // r8
  __int64 v269; // r9
  __int64 v270; // r12
  char v271; // al
  __m128i *v272; // rax
  __int64 v273; // rdx
  __int64 v274; // rcx
  __int64 v275; // r8
  __int64 v276; // r9
  __int64 v277; // rbx
  __int64 v278; // r12
  _QWORD *v279; // rax
  __int64 v280; // r8
  __int64 v281; // r9
  __int64 v282; // rcx
  __m128i *v283; // rbx
  __int64 v284; // rdx
  __int64 v285; // rcx
  __int64 v286; // r8
  __int64 v287; // r9
  _DWORD *v288; // r8
  __int64 v289; // rbx
  __int64 v290; // r12
  _QWORD *v291; // rax
  __int64 v292; // r8
  __int64 v293; // r9
  __int64 v294; // rcx
  __m128i *v295; // rbx
  __int64 v296; // rdx
  __int64 v297; // rcx
  __int64 v298; // r8
  __int64 v299; // r9
  __int64 v300; // rax
  __int64 v301; // rax
  __int64 v302; // rbx
  unsigned int v303; // eax
  unsigned __int8 v304; // al
  __int64 v305; // rax
  __int64 v306; // rdx
  __int64 v307; // rcx
  __int64 v308; // r8
  __int64 v309; // r9
  __int64 v310; // r14
  const void *v311; // rax
  _QWORD *v312; // rax
  char v313; // r14
  __int64 v314; // rbx
  __int64 v315; // r12
  _QWORD *v316; // rax
  __int64 v317; // r8
  __int64 v318; // r9
  __int64 v319; // rcx
  __m128i *v320; // rbx
  __int64 v321; // rdx
  __int64 v322; // rcx
  __int64 v323; // r8
  __int64 v324; // r9
  __int64 v325; // r12
  _QWORD *v326; // rax
  __int64 v327; // r8
  __int64 v328; // r9
  __int64 v329; // rcx
  __m128i *v330; // rbx
  __int64 v331; // rdx
  __int64 v332; // rcx
  __int64 v333; // r8
  __int64 v334; // r9
  __int64 v335; // r12
  _QWORD *v336; // rax
  __int64 v337; // r8
  __int64 v338; // r9
  __int64 v339; // rcx
  __m128i *v340; // rbx
  __int64 v341; // rdx
  __int64 v342; // rcx
  __int64 v343; // r8
  __int64 v344; // r9
  __int64 v345; // rax
  __int64 *v346; // rdx
  __int64 v347; // r14
  _DWORD *v348; // rsi
  __int64 v349; // r8
  __int64 v350; // r9
  char v351; // al
  __int64 v352; // r14
  bool v353; // al
  __int64 j; // r14
  bool v355; // al
  __int64 v356; // rax
  __int64 *v357; // rdx
  __int64 v358; // r14
  _DWORD *v359; // rsi
  __int64 v360; // r8
  __int64 v361; // r9
  char v362; // al
  __m128i *v363; // rax
  __int64 v364; // rdx
  __int64 v365; // rcx
  __int64 v366; // r8
  __int64 v367; // r9
  _QWORD *v368; // rax
  __int64 v369; // rdx
  __int64 v370; // rcx
  __int64 v371; // r8
  __int64 v372; // r9
  __m128i *v373; // rax
  __int64 v374; // rdx
  __int64 v375; // rcx
  __int64 v376; // r8
  __int64 v377; // r9
  __int64 v378; // r12
  __m128i *v379; // r12
  __int64 v380; // rdx
  __int64 v381; // rcx
  __int64 v382; // r8
  __int64 v383; // r9
  int v384; // eax
  __int64 v385; // rax
  __int64 v386; // rax
  __int64 v387; // rax
  __int64 v388; // rbx
  __int64 v389; // rbx
  __int64 v390; // rdx
  __int64 v391; // rcx
  __int64 v392; // r8
  __int64 v393; // r9
  __int64 v394; // r13
  __int64 v395; // rax
  _QWORD *v396; // rax
  __int64 v397; // [rsp+0h] [rbp-148h]
  __int64 v398; // [rsp+0h] [rbp-148h]
  int v400; // [rsp+8h] [rbp-140h]
  bool v401; // [rsp+8h] [rbp-140h]
  int v402; // [rsp+8h] [rbp-140h]
  bool v403; // [rsp+8h] [rbp-140h]
  _DWORD *v405; // [rsp+10h] [rbp-138h]
  _DWORD *v406; // [rsp+10h] [rbp-138h]
  bool v407; // [rsp+1Fh] [rbp-129h]
  _DWORD *v408; // [rsp+20h] [rbp-128h] BYREF
  _DWORD *v409; // [rsp+28h] [rbp-120h]
  _DWORD *v410; // [rsp+30h] [rbp-118h]
  unsigned __int128 v411; // [rsp+40h] [rbp-108h] BYREF
  __int64 v412; // [rsp+50h] [rbp-F8h]
  const void *v413; // [rsp+60h] [rbp-E8h] BYREF
  __int64 v414; // [rsp+68h] [rbp-E0h]
  char v415; // [rsp+70h] [rbp-D8h]
  const void *v416; // [rsp+80h] [rbp-C8h] BYREF
  __int64 v417; // [rsp+88h] [rbp-C0h]
  const void *v418; // [rsp+90h] [rbp-B8h]
  unsigned __int8 *v419; // [rsp+A0h] [rbp-A8h] BYREF
  char v420; // [rsp+F8h] [rbp-50h]
  unsigned int v421; // [rsp+100h] [rbp-48h]
  char v422; // [rsp+104h] [rbp-44h]

  if ( (*(_BYTE *)(a4 + 58) & 1) != 0 )
    return;
  v8 = *(unsigned __int16 *)(*(_QWORD *)(a4 + 72) + 8LL);
  if ( v8 == 419 )
    return;
  v9 = *(_BYTE *)(a4 + 34) & 0xF;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 8) != 0 )
  {
    if ( v9 != 2 && (*(_BYTE *)(a4 + 35) & 1) == 0 )
      goto LABEL_6;
  }
  else if ( v9 != 3 )
  {
    goto LABEL_6;
  }
  if ( !*a5 )
    return;
LABEL_6:
  if ( v8 != 420 && (unsigned __int8)sub_15D85B0(a4, *(_QWORD *)(*(_QWORD *)(a1 + 248) + 17448LL)) )
  {
    if ( !sub_15D8700(a4) )
      goto LABEL_34;
    v16 = sub_15D8720(a4);
    v407 = v16;
    v17 = (unsigned int)sub_15D8260(a4);
    v18 = *(unsigned __int16 *)(a4 + 56);
    if ( v18 > (unsigned int)v17 )
      v18 = v17;
    if ( !v18 || (v397 = (unsigned int)(v17 - 1), (_DWORD)v17 == 1) && v16 )
    {
LABEL_34:
      v24 = (__int64)a3;
      if ( (unsigned __int8)sub_1667020(a1, (__int64)a3, a4, 0) )
        return;
    }
    else
    {
      v19 = 0;
      while ( 1 )
      {
        v20 = *(_QWORD *)(a4 + 8 * v19 + 80);
        v21 = sub_15D8740(a4);
        v22 = (_WORD *)(v20 & 0xFFFFFFFFFFFFFFFCLL);
        if ( (*v22 & 0x1FF) == 0x16 )
          break;
        if ( (*(_DWORD *)v22 & 0x20000) != 0 && !v21 )
        {
          if ( (unsigned __int8)sub_1667020(a1, (__int64)a3, a4, 1) )
            return;
LABEL_403:
          sub_15D8750((void **)a4, a1, (__int64)a3);
          return;
        }
        v23 = *(unsigned __int16 *)(a4 + 56);
        ++v19;
        if ( (unsigned int)v23 > (unsigned int)v17 )
          v23 = v17;
        if ( v23 <= v19 || v19 == v397 && v407 )
          goto LABEL_34;
      }
      v24 = (__int64)a3;
      v313 = v21 ^ 1 | (v397 != v19);
      if ( (unsigned __int8)sub_1667020(a1, (__int64)a3, a4, v313) )
        return;
      if ( v313 )
        goto LABEL_403;
    }
    v29 = *(_WORD **)(a4 + 72);
    switch ( v29[4] )
    {
      case 0:
      case 1:
      case 0x3A:
      case 0x85:
      case 0xAB:
      case 0xB8:
      case 0xBA:
      case 0x12A:
      case 0x12D:
      case 0x137:
      case 0x138:
      case 0x139:
      case 0x140:
      case 0x141:
      case 0x145:
      case 0x15E:
      case 0x163:
      case 0x16A:
      case 0x173:
      case 0x179:
      case 0x191:
        sub_182CF50(
          (__int64 *)a1,
          (__int64)a3,
          (const __m128i *)a4,
          (__m128i)a7,
          *(double *)a8.m128i_i64,
          v26,
          v27,
          v28);
        return;
      case 2:
        sub_16266D0(*(__int64 **)(a1 + 624), (__int64)a3, (const __m128i *)a4);
        return;
      case 3:
        sub_1628000(*(_QWORD **)(a1 + 624), (__int64)a3, (const __m128i *)a4);
        return;
      case 4:
        sub_1625720(*(__int64 **)(a1 + 624), (__int64)a3, (const __m128i *)a4);
        return;
      case 5:
        sub_1628070(*(__int64 **)(a1 + 624), (__int64)a3, (const __m128i *)a4);
        return;
      case 6:
        sub_1627A20(*(__int64 **)(a1 + 624), (__int64)a3, (const __m128i *)a4);
        return;
      case 7:
        sub_1803B60(a1, (__int64)a3, (const __m128i *)a4);
        return;
      case 8:
        sub_162F980(*(__int64 **)(a1 + 632), (__int64)a3, (const __m128i *)a4, v26, v27, v28);
        return;
      case 0xA:
        sub_164D140(*(__int64 **)(a1 + 640), (__int64)a3, (const __m128i *)a4);
        return;
      case 0xB:
        sub_1822450(a1, (__int64)a3, (const __m128i *)a4, (__m128i)a7, *(double *)a8.m128i_i64);
        return;
      case 0xC:
        sub_1825970(a1, (__int64)a3, (const __m128i *)a4, v26);
        return;
      case 0xD:
        if ( (*(_BYTE *)(a4 + 58) & 2) != 0 )
          return;
        if ( (a3[1].m128i_i8[12] & 0x7F) != 0x2B )
          goto LABEL_350;
        v270 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3[3].m128i_i64[0] & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                         & 0xFFFFFFFFFFFFFFF0LL);
        v271 = *(_BYTE *)(v270 + 16);
        switch ( v271 )
        {
          case 13:
            if ( (((*(_WORD *)(v270 + 18) >> 3) + 76) & 0x1FFu) > 0x13 )
              break;
LABEL_484:
            sub_168B9F0((__int64)&v416, (__int64 *)(a1 + 8), *(_DWORD *)(a4 + 24), 0xC89u, 0);
            v413 = *(const void **)(a4 + 24);
            sub_1587DB0((__int64)&v416, (__int64 *)&v413);
            sub_15F7200(&v416);
            return;
          case 47:
            v368 = sub_F60F10(
                     *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3[3].m128i_i64[0] & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                               & 0xFFFFFFFFFFFFFFF0LL),
                     v24,
                     v25,
                     v26,
                     v27,
                     v28);
            if ( ((*((_BYTE *)v368 + 74) & 1) != 0 || (v368[16] & 0xFFFFFFFFFFFFFFF8LL) != 0)
              && *((char *)sub_F60F10(v270, v24, v369, v370, v371, v372) + 76) >= 0 )
            {
              goto LABEL_484;
            }
            break;
          case 10:
            goto LABEL_484;
        }
LABEL_350:
        v416 = nullptr;
        v417 = 0;
        if ( (unsigned __int8)sub_181F2D0(a1, a4, &v416, nullptr, (__m128i)a7, *(double *)a8.m128i_i64) )
        {
          v272 = sub_B33AB0(*(_QWORD *)(a1 + 248), v416, v417, (const __m128i *)a4);
          sub_B8CC60((__int64)a3, (__int64)v272, v273, v274, v275, v276);
        }
        return;
      case 0xE:
        sub_1813D80(a1, a3->m128i_i64, (const __m128i *)a4);
        return;
      case 0xF:
        sub_1813C60(a1, a3->m128i_i64, (const __m128i *)a4);
        return;
      case 0x11:
        sub_181F7D0((_QWORD *)a1, (__int64)a3, (const __m128i *)a4, (__m128i)a7, *(double *)a8.m128i_i64);
        return;
      case 0x12:
        sub_180E220(
          a1,
          (__int64)a3,
          (const __m128i *)a4,
          (_DWORD *)(*(_QWORD *)(a4 + 80) & 0xFFFFFFFFFFFFFFFCLL),
          *(double *)a7.m128_u64);
        return;
      case 0x13:
        sub_181A110(a1, (__int64)a3, (const __m128i *)a4, a7);
        return;
      case 0x14:
        sub_18261A0(a1, (__int64)a3, (const __m128i *)a4, (_DWORD *)(*(_QWORD *)(a4 + 80) & 0xFFFFFFFFFFFFFFFCLL));
        return;
      case 0x15:
        sub_1830870(a1, (__int64)a3, (const __m128i *)a4, *(double *)a7.m128_u64);
        return;
      case 0x17:
      case 0xDA:
        sub_180C560(a1, (__int64)a3, (const __m128i *)a4);
        return;
      case 0x18:
        v133 = (__int64)sub_180DF40(a1, (__int64)a3, (const __m128i *)a4, *(_QWORD *)a4, v27, v28);
        if ( v133 )
          goto LABEL_337;
        return;
      case 0x19:
        sub_180E700(a1, (__int64)a3, (const __m128i *)a4);
        return;
      case 0x1A:
        v133 = sub_15F3660(a1, (const __m128i *)a4);
        if ( v133 )
          goto LABEL_337;
        return;
      case 0x1D:
        sub_18075A0(a1, (__int64)a3, (const __m128i *)a4);
        return;
      case 0x1F:
        sub_1830AB0(a1, (__int64)a3, (const __m128i *)a4);
        return;
      case 0x21:
        sub_162FB70(*(_QWORD *)(a1 + 632), (__int64)a3, (const __m128i *)a4);
        return;
      case 0x24:
        v259 = a1 + 8;
        v260 = sub_168B6C0(v259);
        v261 = (_QWORD *)sub_168B6C0(v259);
        v264 = v261[294];
        v261[304] += 40LL;
        v265 = (__m128i *)((v264 + 7) & 0xFFFFFFFFFFFFFFF8LL);
        if ( v261[295] >= (unsigned __int64)&v265[2].m128i_u64[1] && v264 )
          v261[294] = (char *)v265 + 40;
        else
          v265 = (__m128i *)sub_986170((__int64)(v261 + 294), 40, 40, 3, v262, v263);
        sub_B0AAB0(v265, v260, (const __m128i *)a4);
        sub_B8CC60((__int64)a3, (__int64)v265, v266, v267, v268, v269);
        return;
      case 0x26:
        sub_1631AA0(*(__int64 **)(a1 + 632), (__int64)a3, a4, v26, v27, v28);
        return;
      case 0x2D:
        sub_1813EA0(a1, a3->m128i_i64, (const __m128i *)a4);
        return;
      case 0x2E:
        v288 = nullptr;
        if ( *(_WORD *)(a4 + 56) > 1u )
          v288 = (_DWORD *)(*(_QWORD *)(a4 + 88) & 0xFFFFFFFFFFFFFFFCLL);
        sub_180BD30(
          a1,
          (__int64)a3,
          (const __m128i *)a4,
          (_DWORD *)(*(_QWORD *)(a4 + 80) & 0xFFFFFFFFFFFFFFFCLL),
          v288,
          *(double *)a7.m128_u64);
        return;
      case 0x30:
        sub_18239C0(a1, (__int64)a3, a4);
        return;
      case 0x31:
        v289 = a1 + 8;
        v290 = sub_168B6C0(v289);
        v291 = (_QWORD *)sub_168B6C0(v289);
        v294 = v291[294];
        v291[304] += 40LL;
        v295 = (__m128i *)((v294 + 7) & 0xFFFFFFFFFFFFFFF8LL);
        if ( v291[295] >= (unsigned __int64)&v295[2].m128i_u64[1] && v294 )
          v291[294] = (char *)v295 + 40;
        else
          v295 = (__m128i *)sub_986170((__int64)(v291 + 294), 40, 40, 3, v292, v293);
        sub_B0C8C0(v295, v290, (const __m128i *)a4);
        sub_B8CC60((__int64)a3, (__int64)v295, v296, v297, v298, v299);
        return;
      case 0x33:
        sub_16882F0(*(_QWORD *)(a1 + 648), (__int64)a3, (const __m128i *)a4);
        return;
      case 0x34:
        v277 = a1 + 8;
        v278 = sub_168B6C0(v277);
        v279 = (_QWORD *)sub_168B6C0(v277);
        v282 = v279[294];
        v279[304] += 40LL;
        v283 = (__m128i *)((v282 + 7) & 0xFFFFFFFFFFFFFFF8LL);
        if ( v279[295] >= (unsigned __int64)&v283[2].m128i_u64[1] && v282 )
          v279[294] = (char *)v283 + 40;
        else
          v283 = (__m128i *)sub_986170((__int64)(v279 + 294), 40, 40, 3, v280, v281);
        sub_B0CAA0(v283, v278, (const __m128i *)a4);
        sub_B8CC60((__int64)a3, (__int64)v283, v284, v285, v286, v287);
        return;
      case 0x35:
        sub_1821430(a1, (__int64)a3, (const __m128i *)a4, (__m128i)a7, *(double *)a8.m128i_i64);
        return;
      case 0x38:
        sub_1A91020(*(_QWORD *)(a1 + 736), a3, a4);
        return;
      case 0x39:
        sub_180B230((__int64 *)a1, (__int64)a3, (const __m128i *)a4, v26, v27);
        return;
      case 0x3C:
      case 0xCB:
      case 0xF6:
        v302 = *(_QWORD *)(a1 + 736);
        v303 = sub_1A86AE0(v302, a4);
        sub_1A90D50(v302, a3, a4, v303, 0);
        return;
      case 0x3D:
        if ( *(_WORD *)(a4 + 56) && (v300 = *(_QWORD *)(a4 + 80), (v300 & 2) != 0) )
        {
          v378 = *(_QWORD *)((v300 & 0xFFFFFFFFFFFFFFFCLL) + 8);
          if ( (unsigned __int8)sub_B0D5F0(
                                  (_DWORD *)(*(_QWORD *)(v378 + 16) + 16LL),
                                  **(unsigned int **)(v378 + 16),
                                  &v411) )
          {
            v379 = (__m128i *)sub_1806F50((__int64 *)(*(_QWORD *)(a1 + 248) + 2352LL), 48, 3u);
            sub_B0D5C0(v379, *(_QWORD *)(a1 + 248), (const __m128i *)a4, v411);
            sub_B8CC60((__int64)a3, (__int64)v379, v380, v381, v382, v383);
          }
          else
          {
            sub_168B9F0((__int64)&v416, (__int64 *)(a1 + 8), *(_DWORD *)(a4 + 24), 0x19C0u, 0);
            v387 = sub_15DD120((__int64)&v416, a4);
            v388 = v387;
            if ( *(_BYTE *)(v387 + 120) )
            {
              sub_AE9DF0((unsigned __int8 **)(v387 + 32), v378, 5u);
            }
            else if ( *(_BYTE *)(v387 + 132) )
            {
              v394 = sub_168B9E0((_QWORD *)v387);
              v395 = *(_QWORD *)(v388 + 16);
              if ( v395 )
                v395 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v395 + 32LL))(*(_QWORD *)(v388 + 16));
              v413 = (const void *)v395;
              v396 = sub_1587BC0(v394, (__int64 *)&v413, v390, v391, v392, v393);
              sub_AE9DF0((unsigned __int8 **)(*v396 + 32LL * *(unsigned int *)(v388 + 128) + 8), v378, 5u);
            }
            sub_15F7200(&v416);
          }
        }
        else
        {
          sub_168B9F0((__int64)&v416, (__int64 *)(a1 + 8), *(_DWORD *)(a4 + 24), 0xC57u, 0);
          v301 = sub_15DD120((__int64)&v416, a4);
          LODWORD(v413) = 3;
          sub_180A710(v301, (int *)&v413);
          sub_15F7200(&v416);
        }
        return;
      case 0x3F:
        sub_180E8A0(a1, (__int64)a3, (const __m128i *)a4);
        return;
      case 0x40:
      case 0x41:
      case 0xCE:
      case 0xCF:
      case 0xD0:
      case 0xF8:
      case 0xF9:
        sub_1A90250(*(_QWORD *)(a1 + 736), a3, a4);
        return;
      case 0x43:
      case 0x44:
        sub_1811DC0(a1, (__int64)a3, (const __m128i *)a4, v26, v27, v28);
        return;
      case 0x45:
        sub_1808A90(a1, (__int64)a3, (const __m128i *)a4);
        return;
      case 0x46:
        sub_18082B0(a1, (__int64)a3, (const __m128i *)a4, v26, v27, v28);
        return;
      case 0x49:
        sub_182A270((__int64 *)a1, (__int64)a3, (const __m128i *)a4, v26);
        return;
      case 0x4A:
        if ( a3[1].m128i_i8[12] >= 0 )
        {
          v252 = *(_QWORD **)(a1 + 248);
          v253 = v252[294];
          v252[304] += 40LL;
          v254 = (__m128i *)((v253 + 7) & 0xFFFFFFFFFFFFFFF8LL);
          if ( v252[295] >= (unsigned __int64)&v254[2].m128i_u64[1] && v253 )
            v252[294] = (char *)v254 + 40;
          else
            v254 = (__m128i *)sub_986170((__int64)(v252 + 294), 40, 40, 3, v27, v28);
          sub_B0E4F0(v254, *(_QWORD *)(a1 + 248), (const __m128i *)a4);
          sub_B8CC60((__int64)a3, (__int64)v254, v255, v256, v257, v258);
        }
        return;
      case 0x4D:
        sub_1825F20(a1, (__int64)a3, (const __m128i *)a4, *(double *)a7.m128_u64);
        return;
      case 0x4E:
        sub_181C580(a1, (__int64)a3, (const __m128i *)a4);
        return;
      case 0x4F:
        sub_180B920((__int64 *)a1, (__int64)a3, (const __m128i *)a4, v26, v27, v28);
        return;
      case 0x51:
        sub_181F070(a1, a3, (const __m128i *)a4, (__m128i)a7, *(double *)a8.m128i_i64);
        return;
      case 0x52:
        sub_182EAF0(a1, (__int64)a3, (const __m128i *)a4);
        return;
      case 0x53:
        sub_1808010(a1, (__int64)a3, (const __m128i *)a4, v26, v27, v28);
        return;
      case 0x54:
      case 0xB5:
        sub_1821530(a1, (__int64)a3, (const __m128i *)a4, (__m128i)a7, *(double *)a8.m128i_i64, v26, v27, v28);
        return;
      case 0x55:
        sub_18073F0(a1, a2, (__int64)a3, (const __m128i *)a4, v27, v28);
        return;
      case 0x56:
        sub_1833690((__int64 *)a1, (__int64)a3, (const __m128i *)a4, v26, v27, (__m128i)a7, a8);
        return;
      case 0x59:
        sub_162EDA0(*(_QWORD *)(a1 + 632), (__int64)a3, (const __m128i *)a4);
        return;
      case 0x5B:
        sub_18203A0(a1, (__int64)a3, (const __m128i *)a4, (__m128i)a7, *(double *)a8.m128i_i64);
        return;
      case 0x5C:
        sub_1820C60(a1, (__int64)a3, (const __m128i *)a4, (__m128i)a7, *(double *)a8.m128i_i64);
        return;
      case 0x5E:
        sub_1817920((__int64 *)a1, (__int64)a3, (const __m128i *)a4, v26, v27, v28);
        return;
      case 0x61:
        sub_182B400((__int64 *)a1, (unsigned int *)a3, (const __m128i *)a4);
        return;
      case 0x62:
        sub_18176A0(a1, (__int64)a3, (const __m128i *)a4);
        return;
      case 0x6D:
      case 0x6E:
      case 0x15A:
      case 0x15B:
        sub_1803C00(a1, (__int64)a3, a4);
        return;
      case 0x6F:
      case 0x71:
        sub_18116D0(a1, a3->m128i_i8, (const __m128i *)a4, v26, v27, v28);
        return;
      case 0x73:
        sub_18227A0((__int64 *)a1, (__int64)a3, (const __m128i *)a4, (__m128i)a7, *(double *)a8.m128i_i64);
        return;
      case 0x74:
        sub_182B580(a1, (unsigned int *)a3, (const __m128i *)a4);
        return;
      case 0x75:
        sub_182CF90((__int64 *)a1, (__int64)a3, (const __m128i *)a4, v26, (__m128i)a7, *(double *)a8.m128i_i64);
        return;
      case 0x76:
        sub_182DC20(a1, a3, (const __m128i *)a4, *(double *)a7.m128_u64);
        return;
      case 0x77:
        sub_1821E40(a1, (__int64)a3, (const __m128i *)a4, (__m128i)a7, *(double *)a8.m128i_i64);
        return;
      case 0x7B:
        sub_1822A10(a1, (__int64)a3, (const __m128i *)a4, (__m128i)a7, *(double *)a8.m128i_i64);
        return;
      case 0x7C:
        v408 = nullptr;
        v409 = nullptr;
        if ( (unsigned __int8)sub_181F2D0(a1, a4, &v408, nullptr, (__m128i)a7, *(double *)a8.m128i_i64) )
        {
          v242 = sub_1804C00((__int64)a3, v408, (size_t)v409, v239, v240, v241);
          if ( v242 )
          {
            sub_168B9F0((__int64)&v416, (__int64 *)(a1 + 8), *(_DWORD *)(a4 + 24), 0x13D9u, 0);
            v243 = *(unsigned int **)(*(_QWORD *)a4 + 16LL);
            v244 = *v243;
            v413 = v243 + 4;
            v414 = v244;
            v245 = sub_166BAF0((__int64)&v416, (__int64)&v413);
            v411 = __PAIR128__(**(unsigned int **)(*(_QWORD *)v242 + 16LL), *(_QWORD *)(*(_QWORD *)v242 + 16LL) + 16LL);
            v246 = sub_166BAF0(v245, (__int64)&v411);
            sub_1682BA0(v246, (__int64)&v408);
            sub_15F7200(&v416);
            if ( (a3[1].m128i_i8[13] & 1) != 0 )
            {
              v251 = sub_B8C3D0((__int64)a3, (__int64)&v408, v247, v248, v249, v250);
              sub_18050A0((__int64)v251);
              if ( !*((_DWORD *)v251 + 2) )
                a3[1].m128i_i8[13] &= ~1u;
            }
          }
          else
          {
            v373 = sub_B33C30(*(_QWORD *)(a1 + 248), v408, (__int64)v409, (const __m128i *)a4);
            sub_B8CC60((__int64)a3, (__int64)v373, v374, v375, v376, v377);
          }
        }
        return;
      case 0x7D:
        v408 = nullptr;
        v409 = nullptr;
        if ( (unsigned __int8)sub_181F2D0(a1, a4, &v408, nullptr, (__m128i)a7, *(double *)a8.m128i_i64) )
        {
          v229 = sub_1804DC0((__int64)a3, v408, (size_t)v409, v226, v227, v228);
          if ( v229 )
          {
            sub_168B9F0((__int64)&v416, (__int64 *)(a1 + 8), *(_DWORD *)(a4 + 24), 0x13D9u, 0);
            v230 = *(unsigned int **)(*(_QWORD *)a4 + 16LL);
            v231 = *v230;
            v413 = v230 + 4;
            v414 = v231;
            v232 = sub_166BAF0((__int64)&v416, (__int64)&v413);
            v411 = __PAIR128__(**(unsigned int **)(*(_QWORD *)v229 + 16LL), *(_QWORD *)(*(_QWORD *)v229 + 16LL) + 16LL);
            v233 = sub_166BAF0(v232, (__int64)&v411);
            sub_1682BA0(v233, (__int64)&v408);
            sub_15F7200(&v416);
            if ( (a3[1].m128i_i8[13] & 1) != 0 )
            {
              v238 = sub_B8C3D0((__int64)a3, (__int64)&v408, v234, v235, v236, v237);
              sub_18050A0((__int64)v238);
              if ( !*((_DWORD *)v238 + 2) )
                a3[1].m128i_i8[13] &= ~1u;
            }
          }
          else
          {
            v363 = sub_B33B70(*(_QWORD *)(a1 + 248), v408, (__int64)v409, (const __m128i *)a4);
            sub_B8CC60((__int64)a3, (__int64)v363, v364, v365, v366, v367);
          }
        }
        return;
      case 0x7E:
        sub_1826EB0(a1, (__int64)a3, (const __m128i *)a4);
        return;
      case 0x7F:
        sub_18333F0(a1, (__int64)a3, (const __m128i *)a4, (__m128i)a7, *(double *)a8.m128i_i64);
        return;
      case 0x80:
        sub_180C3D0(a1, (__int64)a3, (const __m128i *)a4);
        return;
      case 0x82:
        if ( (a3[1].m128i_i8[12] & 0x7Fu) - 64 <= 2 )
        {
          v225 = *(unsigned int *)(a1 + 3264);
          if ( v225 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 3268) )
          {
            sub_2237220(a1 + 3256, a1 + 3272, v225 + 1, 8);
            v225 = *(unsigned int *)(a1 + 3264);
          }
          *(_QWORD *)(*(_QWORD *)(a1 + 3256) + 8 * v225) = a3;
          ++*(_DWORD *)(a1 + 3264);
        }
        return;
      case 0x83:
        sub_1807210(a1, (__int64)a3, (const __m128i *)a4);
        return;
      case 0x88:
        sub_182BE50((__int64 *)a1, (__int64)a3, (const __m128i *)a4, *(double *)a7.m128_u64);
        return;
      case 0x89:
        sub_1830E00((__int64 *)a1, (__int64)a3, (const __m128i *)a4, *(double *)a7.m128_u64);
        return;
      case 0x8A:
        sub_182BD50((__int64 *)a1, (__int64)a3, (const __m128i *)a4, *(double *)a7.m128_u64);
        return;
      case 0x8B:
        sub_1821930(a1, (__int64)a3, (const __m128i *)a4, (__m128i)a7, *(double *)a8.m128i_i64);
        return;
      case 0x8C:
        sub_1808170((__int64 *)a1, (__int64)a3, (const __m128i *)a4, v26, v27, v28);
        return;
      case 0x8D:
        sub_18141E0(a1, a3->m128i_i64, (const __m128i *)a4);
        return;
      case 0x8F:
        sub_1808680(a1, (__int64)a3, (const __m128i *)a4, v26, v27, v28);
        return;
      case 0x92:
        v214 = a1 + 8;
        v215 = sub_168B6C0(v214);
        v216 = (_QWORD *)sub_168B6C0(v214);
        v219 = v216[294];
        v216[304] += 40LL;
        v220 = (__m128i *)((v219 + 7) & 0xFFFFFFFFFFFFFFF8LL);
        if ( v216[295] >= (unsigned __int64)&v220[2].m128i_u64[1] && v219 )
          v216[294] = (char *)v220 + 40;
        else
          v220 = (__m128i *)sub_986170((__int64)(v216 + 294), 40, 40, 3, v217, v218);
        sub_B13420(v220, v215, (const __m128i *)a4);
        sub_B8CC60((__int64)a3, (__int64)v220, v221, v222, v223, v224);
        return;
      case 0x94:
        sub_1A08090(*(_QWORD *)(a1 + 680), a3, a4);
        return;
      case 0x95:
        sub_1A08870(*(_QWORD *)(a1 + 680), a3, a4);
        return;
      case 0x96:
        sub_1A09010(*(_QWORD *)(a1 + 680), a3, a4);
        return;
      case 0x99:
        sub_1A06650(*(_QWORD *)(a1 + 680), a3, a4);
        return;
      case 0x9B:
        sub_1A092F0(*(_QWORD *)(a1 + 680), a3, a4);
        return;
      case 0x9C:
        sub_1A091C0(*(_QWORD *)(a1 + 680), a3, a4);
        return;
      case 0x9D:
        v203 = a1 + 8;
        v204 = sub_168B6C0(v203);
        v205 = (_QWORD *)sub_168B6C0(v203);
        v208 = v205[294];
        v205[304] += 40LL;
        v209 = (__m128i *)((v208 + 7) & 0xFFFFFFFFFFFFFFF8LL);
        if ( v205[295] >= (unsigned __int64)&v209[2].m128i_u64[1] && v208 )
          v205[294] = (char *)v209 + 40;
        else
          v209 = (__m128i *)sub_986170((__int64)(v205 + 294), 40, 40, 3, v206, v207);
        sub_B13750(v209, v204, (const __m128i *)a4);
        sub_B8CC60((__int64)a3, (__int64)v209, v210, v211, v212, v213);
        return;
      case 0x9E:
        sub_1A09420(*(_QWORD *)(a1 + 680), a3, a4);
        return;
      case 0x9F:
        sub_1A036D0(*(_QWORD *)(a1 + 680), a3, a4);
        return;
      case 0xA0:
        sub_1A064C0(*(_QWORD *)(a1 + 680), a3, a4);
        return;
      case 0xA1:
        sub_1A08800(*(_QWORD *)(a1 + 680), a3, a4);
        return;
      case 0xA2:
        sub_1A08720(*(_QWORD *)(a1 + 680), a3, a4);
        return;
      case 0xA3:
        sub_1A08350(*(_QWORD *)(a1 + 680), a3, a4);
        return;
      case 0xA5:
        v192 = a1 + 8;
        v193 = sub_168B6C0(v192);
        v194 = (_QWORD *)sub_168B6C0(v192);
        v197 = v194[294];
        v194[304] += 40LL;
        v198 = (__m128i *)((v197 + 7) & 0xFFFFFFFFFFFFFFF8LL);
        if ( v194[295] >= (unsigned __int64)&v198[2].m128i_u64[1] && v197 )
          v194[294] = (char *)v198 + 40;
        else
          v198 = (__m128i *)sub_986170((__int64)(v194 + 294), 40, 40, 3, v195, v196);
        sub_B13C20(v198, v193, (const __m128i *)a4);
        sub_B8CC60((__int64)a3, (__int64)v198, v199, v200, v201, v202);
        return;
      case 0xA7:
        sub_1A8D7A0(*(_QWORD *)(a1 + 736), a3, a4);
        return;
      case 0xA8:
        sub_1A8DDA0(*(_QWORD *)(a1 + 736), a3, a4);
        return;
      case 0xA9:
        sub_1822B70((_QWORD *)a1, (__int64)a3, (const __m128i *)a4, (__m128i)a7, *(double *)a8.m128i_i64);
        return;
      case 0xAA:
        sub_182C1D0((__int64 *)a1, (__int64)a3, (const __m128i *)a4, *(double *)a7.m128_u64);
        return;
      case 0xAC:
        v133 = (__int64)sub_180E570((__int64 *)a1, (__int64)a3, (const __m128i *)a4, v26, v27, v28);
        if ( v133 )
          goto LABEL_337;
        return;
      case 0xAE:
        sub_182D320(a1, (__int64)a3, (const __m128i *)a4, *(double *)a7.m128_u64);
        return;
      case 0xB1:
        sub_181D200(a1, (__int64)a3, (const __m128i *)a4, v26, v27, v28);
        return;
      case 0xB4:
        sub_1813AB0(a1, a3->m128i_i64, (const __m128i *)a4);
        return;
      case 0xB6:
        sub_1825770(a1, (__int64)a3, (const __m128i *)a4, v26);
        return;
      case 0xB9:
        sub_1808E40(a1, (__int64)a3, (const __m128i *)a4);
        return;
      case 0xBB:
        if ( (a3[1].m128i_i8[12] & 0x7Fu) - 34 > 5 )
          goto LABEL_406;
        v189 = *(_QWORD *)(a3[3].m128i_i64[0] & 0xFFFFFFFFFFFFFFF0LL);
        v190 = (unsigned int)*(unsigned __int8 *)(v189 + 16) - 25;
        if ( (unsigned int)v190 > 1 )
          v189 = sub_F63050(v189, v24, v190, v26);
        *(_QWORD *)&v411 = *(_QWORD *)(v189 + 24);
        if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v411 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 16LL)
                             - 42) <= 2u )
        {
LABEL_406:
          v314 = a1 + 8;
          v315 = sub_168B6C0(v314);
          v316 = (_QWORD *)sub_168B6C0(v314);
          v319 = v316[294];
          v316[304] += 40LL;
          v320 = (__m128i *)((v319 + 7) & 0xFFFFFFFFFFFFFFF8LL);
          if ( v316[295] >= (unsigned __int64)&v320[2].m128i_u64[1] && v319 )
            v316[294] = (char *)v320 + 40;
          else
            v320 = (__m128i *)sub_986170((__int64)(v316 + 294), 40, 40, 3, v317, v318);
          sub_B14240(v320, v315, (const __m128i *)a4);
          sub_B8CC60((__int64)a3, (__int64)v320, v321, v322, v323, v324);
        }
        else
        {
          sub_168B9F0((__int64)&v416, (__int64 *)(a1 + 8), *(_DWORD *)(a4 + 24), 0x1A94u, 0);
          v413 = *(const void **)(a4 + 24);
          v191 = sub_1587DB0((__int64)&v416, (__int64 *)&v413);
          sub_1605D30(v191, (__int64 *)&v411);
          sub_15F7200(&v416);
        }
        return;
      case 0xBC:
        sub_1812650((__int64 *)a1, a3, (const __m128i *)a4);
        return;
      case 0xBD:
        sub_181C420((__int64 *)a1, (__int64)a3, (const __m128i *)a4);
        return;
      case 0xC2:
        v178 = a1 + 8;
        v179 = sub_168B6C0(v178);
        v180 = (_QWORD *)sub_168B6C0(v178);
        v183 = v180[294];
        v180[304] += 40LL;
        v184 = (__m128i *)((v183 + 7) & 0xFFFFFFFFFFFFFFF8LL);
        if ( v180[295] >= (unsigned __int64)&v184[2].m128i_u64[1] && v183 )
          v180[294] = (char *)v184 + 40;
        else
          v184 = (__m128i *)sub_986170((__int64)(v180 + 294), 40, 40, 3, v181, v182);
        sub_B144A0(v184, v179, (const __m128i *)a4);
        sub_B8CC60((__int64)a3, (__int64)v184, v185, v186, v187, v188);
        return;
      case 0xC4:
        v133 = (__int64)sub_180D120(a1, (__int64)a3, (const __m128i *)a4, v26, v27, v28);
        if ( v133 )
          goto LABEL_337;
        return;
      case 0xC5:
        sub_182C460(a1, (__int64)a3, (const __m128i *)a4);
        return;
      case 0xC9:
        sub_1825470((__int64 *)a1, (__int64)a3, (const __m128i *)a4);
        return;
      case 0xCD:
        sub_1A8EF90(*(_QWORD *)(a1 + 736), a3, a4);
        return;
      case 0xD1:
        sub_180E9B0(a1, (__int64)a3, (const __m128i *)a4, v26, v27, v28);
        return;
      case 0xD5:
        sub_1824BE0(a1, (__int64)a3, (const __m128i *)a4, v26, v27, v28, (__m128i)a7, *(double *)a8.m128i_i64);
        return;
      case 0xD8:
        v171 = *(_QWORD **)(a1 + 248);
        v172 = v171[294];
        v171[304] += 40LL;
        v173 = (__m128i *)((v172 + 7) & 0xFFFFFFFFFFFFFFF8LL);
        if ( v171[295] >= (unsigned __int64)&v173[2].m128i_u64[1] && v172 )
          v171[294] = (char *)v173 + 40;
        else
          v173 = (__m128i *)sub_986170((__int64)(v171 + 294), 40, 40, 3, v27, v28);
        sub_B14CD0(v173, *(_QWORD *)(a1 + 248), (const __m128i *)a4);
        sub_B8CC60((__int64)a3, (__int64)v173, v174, v175, v176, v177);
        return;
      case 0xDC:
        sub_180BBF0(a1, (__int64)a3, (const __m128i *)a4, v26, v27, v28);
        return;
      case 0xDF:
        sub_180FB40(a1, (__int64)a3, (const __m128i *)a4, v26);
        return;
      case 0xE3:
        sub_1813170(a1, (__int64)a3, (const __m128i *)a4, v26, v27, v28);
        return;
      case 0xE4:
        sub_180EB70(a1, (__int64)a3, (const __m128i *)a4);
        return;
      case 0xE5:
        sub_181ED50(a1, (__int64)a3, (const __m128i *)a4, *(double *)a7.m128_u64, *(double *)a8.m128i_i64);
        return;
      case 0xE6:
        sub_180F2B0(a1, (__int64)a3, (const __m128i *)a4);
        return;
      case 0xE7:
        sub_181F520(a1, (__int64)a3, (const __m128i *)a4, (__m128i)a7, *(double *)a8.m128i_i64);
        return;
      case 0xEC:
        if ( (*(_BYTE *)(a4 + 58) & 2) == 0 )
        {
          v160 = a1 + 8;
          v161 = sub_168B6C0(v160);
          v162 = (_QWORD *)sub_168B6C0(v160);
          v165 = v162[294];
          v162[304] += 40LL;
          v166 = (__m128i *)((v165 + 7) & 0xFFFFFFFFFFFFFFF8LL);
          if ( v162[295] >= (unsigned __int64)&v166[2].m128i_u64[1] && v165 )
            v162[294] = (char *)v166 + 40;
          else
            v166 = (__m128i *)sub_986170((__int64)(v162 + 294), 40, 40, 3, v163, v164);
          sub_B15080(v166, v161, (const __m128i *)a4);
          sub_B8CC60((__int64)a3, (__int64)v166, v167, v168, v169, v170);
        }
        return;
      case 0xEE:
        v155 = sub_B28740(*(_QWORD *)(a1 + 248), (const __m128i *)a4);
        sub_B8CC60((__int64)a3, (__int64)v155, v156, v157, v158, v159);
        return;
      case 0xF2:
        if ( (a3[1].m128i_i8[12] & 0x7F) == 0x2B )
          sub_1832AB0(a1, a3->m128i_i64, (const __m128i *)a4, *(double *)a7.m128_u64);
        else
          sub_1832610(a1, (__int64)a3, (const __m128i *)a4, *(double *)a7.m128_u64);
        return;
      case 0xF3:
        sub_1827340(a1, a3, (const __m128i *)a4, v26, v27);
        return;
      case 0xF5:
        sub_1B06CB0(*(_QWORD *)(a1 + 760), a3, a4);
        return;
      case 0xFA:
        v153 = *(const void **)(a4 + 24);
        v151 = (__int64 *)(a1 + 8);
        v154 = v151[91];
        LODWORD(v413) = 3;
        v416 = v153;
        if ( !(unsigned __int8)sub_1A86B50(v154, a3) )
          goto LABEL_188;
        v335 = sub_168B6C0((__int64)v151);
        v336 = (_QWORD *)sub_168B6C0((__int64)v151);
        v339 = v336[294];
        v336[304] += 40LL;
        v340 = (__m128i *)((v339 + 7) & 0xFFFFFFFFFFFFFFF8LL);
        if ( v336[295] >= (unsigned __int64)&v340[2].m128i_u64[1] && v339 )
          v336[294] = (char *)v340 + 40;
        else
          v340 = (__m128i *)sub_986170((__int64)(v336 + 294), 40, 40, 3, v337, v338);
        sub_B15AD0(v340, v335, (const __m128i *)a4);
        sub_B8CC60((__int64)a3, (__int64)v340, v341, v342, v343, v344);
        return;
      case 0xFB:
        v150 = *(const void **)(a4 + 24);
        v151 = (__int64 *)(a1 + 8);
        v152 = v151[91];
        LODWORD(v413) = 3;
        v416 = v150;
        if ( (unsigned __int8)sub_1A86B50(v152, a3) )
        {
          v325 = sub_168B6C0((__int64)v151);
          v326 = (_QWORD *)sub_168B6C0((__int64)v151);
          v329 = v326[294];
          v326[304] += 40LL;
          v330 = (__m128i *)((v329 + 7) & 0xFFFFFFFFFFFFFFF8LL);
          if ( v326[295] >= (unsigned __int64)&v330[2].m128i_u64[1] && v329 )
            v326[294] = (char *)v330 + 40;
          else
            v330 = (__m128i *)sub_986170((__int64)(v326 + 294), 40, 40, 3, v327, v328);
          sub_B15B00(v330, v325, (const __m128i *)a4);
          sub_B8CC60((__int64)a3, (__int64)v330, v331, v332, v333, v334);
        }
        else
        {
LABEL_188:
          sub_181E260(v151, (__int64)a3, a4, (int *)&v413, (__int64 *)&v416);
        }
        return;
      case 0xFC:
        sub_1A88650(*(_QWORD *)(a1 + 736), a3, a4);
        return;
      case 0xFD:
        sub_1A8DA40(*(_QWORD *)(a1 + 736), a3, a4);
        return;
      case 0xFE:
        sub_1A915D0(*(_QWORD *)(a1 + 736), a3, a4);
        return;
      case 0xFF:
        sub_1A8DC40(*(_QWORD *)(a1 + 736), a3, a4);
        return;
      case 0x101:
        sub_1A88920(*(_QWORD *)(a1 + 736), a3, a4);
        return;
      case 0x102:
        sub_1A91EA0(*(_QWORD *)(a1 + 736), a3, a4);
        return;
      case 0x103:
        v138 = *(_QWORD *)(a1 + 736);
        v139 = a1 + 8;
        sub_1A8F9C0(v138, a3, a4);
        v140 = sub_168B6C0(v139);
        v141 = (_QWORD *)sub_168B6C0(v139);
        v144 = v141[294];
        v141[304] += 40LL;
        v145 = (__m128i *)((v144 + 7) & 0xFFFFFFFFFFFFFFF8LL);
        if ( v141[295] >= (unsigned __int64)&v145[2].m128i_u64[1] && v144 )
          v141[294] = (char *)v145 + 40;
        else
          v145 = (__m128i *)sub_986170((__int64)(v141 + 294), 40, 40, 3, v142, v143);
        sub_B16000(v145, v140, (const __m128i *)a4);
        sub_B8CC60((__int64)a3, (__int64)v145, v146, v147, v148, v149);
        return;
      case 0x105:
        sub_1A8FDE0(*(_QWORD *)(a1 + 736), a3, a4);
        return;
      case 0x106:
        sub_1A8A990(*(_QWORD *)(a1 + 736), a3, a4);
        return;
      case 0x108:
        sub_1A88A50(*(_QWORD *)(a1 + 736), a3, a4);
        return;
      case 0x10B:
        sub_1A92B10(*(_QWORD *)(a1 + 736), a3, a4);
        return;
      case 0x10C:
        sub_1A88790(*(_QWORD *)(a1 + 736), a3, a4);
        return;
      case 0x10F:
        sub_1A900A0(*(_QWORD *)(a1 + 736), a3, a4);
        return;
      case 0x110:
        sub_1A8FB80(*(_QWORD *)(a1 + 736), a3, a4);
        return;
      case 0x112:
        sub_1A8D860(*(_QWORD *)(a1 + 736), a3, a4);
        return;
      case 0x113:
        sub_1A8E170(*(_QWORD *)(a1 + 736), a3, a4);
        return;
      case 0x115:
        sub_1A88560(*(_QWORD *)(a1 + 736), a3, a4);
        return;
      case 0x119:
        sub_1AE2A10(*(_QWORD *)(a1 + 752), a3, a4);
        return;
      case 0x11F:
        sub_1AE3090(*(_QWORD *)(a1 + 752), a3, a4);
        return;
      case 0x121:
        sub_1AD8530(*(_QWORD *)(a1 + 752), a3, a4);
        return;
      case 0x124:
        v133 = (__int64)sub_1810430(a1, a3->m128i_i8, (const __m128i *)a4, v26, v27, v28);
        if ( v133 )
LABEL_337:
          sub_B8CC60((__int64)a3, v133, v134, v135, v136, v137);
        return;
      case 0x126:
      case 0x12E:
        sub_1816690(a1, (__int64)a3, (const __m128i *)a4);
        return;
      case 0x127:
        sub_1831810((__int64 *)a1, (__int64)a3, (const __m128i *)a4, *(double *)a7.m128_u64);
        return;
      case 0x128:
        sub_180FC70(a1, (__int64)a3, (const __m128i *)a4, v26, v27, v28);
        return;
      case 0x129:
        sub_1825FC0(a1, (__int64)a3, (const __m128i *)a4);
        return;
      case 0x12B:
        sub_182E880(a1, (__int64)a3, (const __m128i *)a4, v26, v27, v28, *(double *)a7.m128_u64);
        return;
      case 0x12C:
        sub_182E530(a1, (__int64)a3, (const __m128i *)a4, (__m128i)a7, *(double *)a8.m128i_i64);
        return;
      case 0x135:
        sub_1826A50(a1, (__int64)a3, (const __m128i *)a4);
        return;
      case 0x136:
        sub_180B540(a1, (__int64)a3, (const __m128i *)a4, a7);
        return;
      case 0x13A:
        sub_1833460(a1, a3->m128i_i64, (const __m128i *)a4);
        return;
      case 0x13B:
        sub_18270F0(a1, (__int64)a3, (const __m128i *)a4, v26, v27, v28);
        return;
      case 0x142:
        sub_1812E10(a1, (__int64)a3, (const __m128i *)a4, v26, v27, v28);
        return;
      case 0x143:
        v122 = a1 + 8;
        v123 = sub_168B6C0(v122);
        v124 = (_QWORD *)sub_168B6C0(v122);
        v127 = v124[294];
        v124[304] += 40LL;
        v128 = (__m128i *)((v127 + 7) & 0xFFFFFFFFFFFFFFF8LL);
        if ( v124[295] >= (unsigned __int64)&v128[2].m128i_u64[1] && v127 )
          v124[294] = (char *)v128 + 40;
        else
          v128 = (__m128i *)sub_986170((__int64)(v124 + 294), 40, 40, 3, v125, v126);
        sub_B17C30(v128, v123, (const __m128i *)a4);
        sub_B8CC60((__int64)a3, (__int64)v128, v129, v130, v131, v132);
        return;
      case 0x144:
        sub_1824960(a1, (__int64)a3, (const __m128i *)a4, v26, v27, v28);
        return;
      case 0x148:
        sub_1825A90(a1, (__int64)a3, (const __m128i *)a4, v26);
        return;
      case 0x149:
        v416 = nullptr;
        v417 = 0;
        if ( (unsigned __int8)sub_181F2D0(a1, a4, &v416, nullptr, (__m128i)a7, *(double *)a8.m128i_i64) )
        {
          v117 = sub_B33E70(*(_QWORD *)(a1 + 248), v416, v417, (const __m128i *)a4);
          sub_B8CC60((__int64)a3, (__int64)v117, v118, v119, v120, v121);
        }
        return;
      case 0x14A:
        for ( i = 0; i != 3; ++i )
        {
          v99 = (_DWORD *)sub_1810D80(
                            a1,
                            (_DWORD *)(*(_QWORD *)(a4 + 8 * i + 80) & 0xFFFFFFFFFFFFFFFCLL),
                            (void *)a4,
                            i,
                            *(double *)a7.m128_u64);
          if ( !v99 )
            return;
          (&v408)[i] = v99;
        }
        v416 = (const void *)a1;
        if ( (*v408 & 0x20000) != 0
          || !(unsigned __int8)sub_1806E00((__int64)&v416, (unsigned __int64)v408, v100, v101, v102, v103)
          || (*v409 & 0x20000) != 0
          || !(unsigned __int8)sub_1806E00((__int64)&v416, (unsigned __int64)v409, v100, v101, v102, v103)
          || (v104 = v410, (*v410 & 0x20000) != 0)
          || !(unsigned __int8)sub_1806E00((__int64)&v416, (unsigned __int64)v410, v100, v101, v102, v103) )
        {
          for ( j = 0; j != 3; ++j )
          {
            v104 = (&v408)[j];
            if ( (*v104 & 0x20000) == 0 )
            {
              v398 = *(_QWORD *)(a4 + j * 8 + 80);
              sub_C3EB00((__int64)&v416, (unsigned __int64)v104, *(_QWORD *)(a1 + 248), nullptr, v102, v103);
              if ( (unsigned int)v417 <= 0x40 )
              {
                v355 = v416 == nullptr;
              }
              else
              {
                v402 = v417;
                v355 = v402 == (unsigned int)sub_2206780(&v416);
              }
              v403 = v355;
              sub_98E4B0((__int64)&v416);
              if ( v403 )
                goto LABEL_504;
            }
          }
        }
        if ( (a3[1].m128i_i8[13] & 1) == 0 )
          goto LABEL_141;
        v105 = (__int64 **)sub_B8C3D0((__int64)a3, (__int64)v104, v100, v101, v102, v103);
        v106 = *v105;
        v107 = &(*v105)[*((unsigned int *)v105 + 2)];
        if ( v106 >= v107 )
        {
          do
          {
            if ( v106 == v107 )
              goto LABEL_141;
            v116 = *v107++;
          }
          while ( *(_WORD *)(v116 + 36) != 346 );
        }
        else
        {
          v108 = v106;
          while ( *(_WORD *)(*v108 + 36) != 346 )
          {
            if ( v107 == ++v108 )
              goto LABEL_141;
          }
          if ( v107 == v108 )
          {
LABEL_141:
            v109 = *(_QWORD **)(a1 + 248);
            v110 = v109[294];
            v109[304] += 64LL;
            v111 = (__m128i *)((v110 + 7) & 0xFFFFFFFFFFFFFFF8LL);
            if ( v109[295] >= (unsigned __int64)&v111[4] && v110 )
              v109[294] = v111 + 4;
            else
              v111 = (__m128i *)sub_986170((__int64)(v109 + 294), 64, 64, 3, v102, v103);
            sub_B18220(v111, *(_QWORD *)(a1 + 248), (const __m128i *)a4, (__int64)v408, (__int64)v409, (__int64)v410);
            sub_B8CC60((__int64)a3, (__int64)v111, v112, v113, v114, v115);
            return;
          }
        }
        v356 = *v106;
        if ( *(_WORD *)(*v106 + 36) != 346 )
        {
          v357 = v106 + 1;
          do
            v356 = *v357++;
          while ( *(_WORD *)(v356 + 36) != 346 );
        }
        v358 = 0;
        v411 = (unsigned __int128)_mm_loadu_si128((const __m128i *)(v356 + 40));
        v412 = *(_QWORD *)(v356 + 56);
        while ( 1 )
        {
          v359 = *(_DWORD **)((char *)&v411 + v358 * 8);
          if ( (*v359 & 0x20000) == 0 )
          {
            v406 = (&v408)[v358];
            if ( (*v406 & 0x20000) == 0 )
            {
              sub_C3EB00((__int64)&v413, (unsigned __int64)v359, *(_QWORD *)(a1 + 248), nullptr, v102, v103);
              sub_C3EB00((__int64)&v416, (unsigned __int64)v406, *(_QWORD *)(a1 + 248), nullptr, v360, v361);
              if ( v415 != (_BYTE)v418
                || v415
                && ((unsigned int)v414 <= 0x40 ? (v362 = v413 == v416) : (v362 = sub_2205D70(&v413, &v416)), !v362) )
              {
                sub_98E4B0((__int64)&v416);
                sub_98E4B0((__int64)&v413);
                sub_168B9F0((__int64)&v416, (__int64 *)(a1 + 8), *(_DWORD *)(a4 + 24), 0x1ACBu, 0);
                sub_15DD120((__int64)&v416, a4);
                sub_15F7200(&v416);
                goto LABEL_141;
              }
              sub_98E4B0((__int64)&v416);
              sub_98E4B0((__int64)&v413);
            }
          }
          if ( ++v358 == 3 )
            goto LABEL_141;
        }
      case 0x14B:
        sub_1825870(a1, (__int64)a3, (const __m128i *)a4, v26);
        return;
      case 0x14C:
        sub_18311E0(a1, (__int64)a3, (const __m128i *)a4);
        return;
      case 0x14E:
        sub_18177E0(a1, (__int64)a3, (const __m128i *)a4);
        return;
      case 0x14F:
        sub_180B7D0(a1, (__int64)a3, (const __m128i *)a4);
        return;
      case 0x151:
        sub_19FFC80(*(_QWORD *)(a1 + 680), a3, a4);
        return;
      case 0x153:
        sub_1C74350(*(_QWORD *)(a1 + 800), a3, a4);
        return;
      case 0x154:
        v87 = a1 + 8;
        v88 = sub_168B6C0(v87);
        v89 = (_QWORD *)sub_168B6C0(v87);
        v92 = v89[294];
        v89[304] += 40LL;
        v93 = (__m128i *)((v92 + 7) & 0xFFFFFFFFFFFFFFF8LL);
        if ( v89[295] >= (unsigned __int64)&v93[2].m128i_u64[1] && v92 )
          v89[294] = (char *)v93 + 40;
        else
          v93 = (__m128i *)sub_986170((__int64)(v89 + 294), 40, 40, 3, v90, v91);
        sub_B18ED0(v93, v88, (const __m128i *)a4);
        sub_B8CC60((__int64)a3, (__int64)v93, v94, v95, v96, v97);
        return;
      case 0x156:
        sub_18202C0(a1, (__int64)a3, a4, (__m128i)a7, *(double *)a8.m128i_i64);
        return;
      case 0x158:
        sub_180EC80(a1, a3, (const __m128i *)a4, *(double *)a7.m128_u64, v26, v27, v28);
        return;
      case 0x159:
        sub_1819060(a1, a3, (const __m128i *)a4);
        return;
      case 0x161:
        sub_1822260(
          a1,
          (__int64)a3,
          (const __m128i *)a4,
          *(double *)a7.m128_u64,
          *(double *)a8.m128i_i64,
          v26,
          v27,
          v28);
        return;
      case 0x162:
        sub_1CA67C0(*(_QWORD *)(a1 + 808), a3, a4);
        return;
      case 0x164:
        sub_1CABEE0(*(_QWORD *)(a1 + 808), a3, a4, 4);
        return;
      case 0x165:
        sub_1CA8EF0(*(_QWORD *)(a1 + 808), a3, a4);
        return;
      case 0x166:
        sub_1CA9AC0(*(_QWORD *)(a1 + 808), a3, a4);
        return;
      case 0x167:
        sub_1CA9D20(*(_QWORD *)(a1 + 808), a3, a4);
        return;
      case 0x168:
        sub_1CAB820(*(_QWORD *)(a1 + 808), a3, a4);
        return;
      case 0x16B:
        sub_1CABEE0(*(_QWORD *)(a1 + 808), a3, a4, 3);
        return;
      case 0x16C:
        sub_1CA9E30(*(_QWORD *)(a1 + 808), a3, a4);
        return;
      case 0x16D:
        sub_1CABEE0(*(_QWORD *)(a1 + 808), a3, a4, 2);
        return;
      case 0x16E:
        sub_1CABEE0(*(_QWORD *)(a1 + 808), a3, a4, 1);
        return;
      case 0x16F:
        sub_1CA9BF0(*(_QWORD *)(a1 + 808), a3, a4);
        return;
      case 0x170:
        sub_1CAD230(*(_QWORD *)(a1 + 808), a3, a4);
        return;
      case 0x174:
        sub_181FA50(a1, (__int64)a3, (const __m128i *)a4, (__m128i)a7, *(double *)a8.m128i_i64);
        return;
      case 0x175:
        sub_182A190(a1, (__int64)a3, (const __m128i *)a4, (__m128i)a7, *(double *)a8.m128i_i64);
        return;
      case 0x176:
        sub_1827850((_QWORD *)a1, a3->m128i_i8, (const __m128i *)a4, v26, v27, v28, (__m128i)a7, a8);
        return;
      case 0x177:
        sub_182FF30(a1, (__int64)a3, (const __m128i *)a4, (__m128i)a7, *(double *)a8.m128i_i64);
        return;
      case 0x178:
        sub_18191B0(a1, a3, (const __m128i *)a4);
        return;
      case 0x17A:
        sub_180D5F0(a1, (__int64)a3, (const __m128i *)a4);
        return;
      case 0x17B:
        sub_181D360(a1, (__int64)a3, (const __m128i *)a4, v26, v27, v28);
        return;
      case 0x17D:
        sub_1813FA0(a1, a3->m128i_i64, (const __m128i *)a4);
        return;
      case 0x180:
        sub_180F820(a1, (__int64)a3, (const __m128i *)a4);
        return;
      case 0x182:
        sub_180F620(a1, (__int64)a3, (const __m128i *)a4);
        return;
      case 0x183:
        sub_181FC60(a1, (__int64)a3, (const __m128i *)a4, 1, (__m128i)a7, *(double *)a8.m128i_i64);
        return;
      case 0x185:
        v49 = *(_WORD *)(a4 + 56) == 1;
        v416 = nullptr;
        v417 = 0;
        if ( !v49 || (unsigned __int8)sub_181F2D0(a1, a4, &v416, nullptr, (__m128i)a7, *(double *)a8.m128i_i64) )
        {
          v50 = *(_QWORD **)(a1 + 248);
          v51 = v416;
          v52 = v417;
          v53 = v50[294];
          v50[304] += 64LL;
          v54 = (__m128i *)((v53 + 7) & 0xFFFFFFFFFFFFFFF8LL);
          if ( v50[295] >= (unsigned __int64)&v54[4] && v53 )
            v50[294] = v54 + 4;
          else
            v54 = (__m128i *)sub_986170((__int64)(v50 + 294), 64, 64, 3, v27, v28);
          sub_B30430(v54, *(_QWORD *)(a1 + 248), (const __m128i *)a4, v51, v52);
          sub_B8CC60((__int64)a3, (__int64)v54, v55, v56, v57, v58);
        }
        return;
      case 0x186:
        v80 = *(_QWORD **)(a1 + 248);
        v81 = v80[294];
        v80[304] += 40LL;
        v82 = (__m128i *)((v81 + 7) & 0xFFFFFFFFFFFFFFF8LL);
        if ( v80[295] >= (unsigned __int64)&v82[2].m128i_u64[1] && v81 )
          v80[294] = (char *)v82 + 40;
        else
          v82 = (__m128i *)sub_986170((__int64)(v80 + 294), 40, 40, 3, v27, v28);
        sub_B1A9E0(v82, *(_QWORD *)(a1 + 248), (const __m128i *)a4);
        sub_B8CC60((__int64)a3, (__int64)v82, v83, v84, v85, v86);
        return;
      case 0x188:
        v75 = sub_B2C7A0(*(_QWORD *)(a1 + 248), (const __m128i *)a4);
        sub_B8CC60((__int64)a3, (__int64)v75, v76, v77, v78, v79);
        return;
      case 0x189:
        sub_180AAA0((__int64 *)a1, (__int64)a3, (const __m128i *)a4, v26, v27, v28);
        return;
      case 0x18A:
        v416 = nullptr;
        v417 = 0;
        if ( (unsigned __int8)sub_181F2D0(a1, a4, &v416, nullptr, (__m128i)a7, *(double *)a8.m128i_i64) )
        {
          v70 = sub_B33DB0(*(_QWORD *)(a1 + 248), v416, v417, (const __m128i *)a4);
          sub_B8CC60((__int64)a3, (__int64)v70, v71, v72, v73, v74);
        }
        return;
      case 0x18C:
        v59 = a1 + 8;
        v60 = sub_168B6C0(v59);
        v61 = (_QWORD *)sub_168B6C0(v59);
        v64 = v61[294];
        v61[304] += 40LL;
        v65 = (__m128i *)((v64 + 7) & 0xFFFFFFFFFFFFFFF8LL);
        if ( v61[295] >= (unsigned __int64)&v65[2].m128i_u64[1] && v64 )
          v61[294] = (char *)v65 + 40;
        else
          v65 = (__m128i *)sub_986170((__int64)(v61 + 294), 40, 40, 3, v62, v63);
        sub_B1AB80(v65, v60, (const __m128i *)a4);
        sub_B8CC60((__int64)a3, (__int64)v65, v66, v67, v68, v69);
        return;
      case 0x18D:
        sub_18210D0((__int64 *)a1, (__int64)a3, (const __m128i *)a4, (__m128i)a7, *(double *)a8.m128i_i64);
        return;
      case 0x18E:
        sub_182D430((__int64 *)a1, a3->m128i_i64, (const __m128i *)a4, v26, v27, v28);
        return;
      case 0x18F:
        sub_1812910(a1, (__int64)a3, a4, v26, v27, v28);
        return;
      case 0x190:
        sub_180AF50(a1, (__int64)a3, (const __m128i *)a4);
        return;
      case 0x193:
        sub_181FC60(a1, (__int64)a3, (const __m128i *)a4, 0, (__m128i)a7, *(double *)a8.m128i_i64);
        return;
      case 0x195:
        sub_181FEC0((__int64 *)a1, (__int64)a3, (const __m128i *)a4, (__m128i)a7, *(double *)a8.m128i_i64);
        return;
      case 0x197:
        sub_180F980(a1, a3, (const __m128i *)a4, v26, v27, v28);
        return;
      case 0x198:
        sub_181F590(a1, (__int64)a3, (const __m128i *)a4, (__m128i)a7, *(double *)a8.m128i_i64);
        return;
      case 0x199:
        sub_1E98690(*(_QWORD *)(a1 + 824), a3, a4);
        return;
      case 0x19B:
        sub_1E966D0(*(_QWORD *)(a1 + 824), a3, a4);
        return;
      case 0x19C:
        sub_1E976B0(*(_QWORD *)(a1 + 824), a3, a4);
        return;
      case 0x19D:
        for ( k = 0; k != 3; ++k )
        {
          v31 = (_DWORD *)sub_1810D80(
                            a1,
                            (_DWORD *)(*(_QWORD *)(a4 + 8 * k + 80) & 0xFFFFFFFFFFFFFFFCLL),
                            (void *)a4,
                            k,
                            *(double *)a7.m128_u64);
          if ( !v31 )
            return;
          (&v408)[k] = v31;
        }
        v416 = (const void *)a1;
        if ( (*v408 & 0x20000) != 0
          || !(unsigned __int8)sub_1806E00((__int64)&v416, (unsigned __int64)v408, v32, v33, v34, v35)
          || (*v409 & 0x20000) != 0
          || !(unsigned __int8)sub_1806E00((__int64)&v416, (unsigned __int64)v409, v32, v33, v34, v35)
          || (v36 = v410, (*v410 & 0x20000) != 0)
          || !(unsigned __int8)sub_1806E00((__int64)&v416, (unsigned __int64)v410, v32, v33, v34, v35) )
        {
          v352 = 0;
          while ( 1 )
          {
            v36 = (&v408)[v352];
            if ( (*v36 & 0x20000) == 0 )
            {
              v398 = *(_QWORD *)(a4 + v352 * 8 + 80);
              sub_C3EB00((__int64)&v416, (unsigned __int64)v36, *(_QWORD *)(a1 + 248), nullptr, v34, v35);
              if ( (unsigned int)v417 <= 0x40 )
              {
                v353 = v416 == nullptr;
              }
              else
              {
                v400 = v417;
                v353 = v400 == (unsigned int)sub_2206780(&v416);
              }
              v401 = v353;
              sub_98E4B0((__int64)&v416);
              if ( v401 )
                break;
            }
            if ( ++v352 == 3 )
              goto LABEL_50;
          }
LABEL_504:
          sub_168B9F0((__int64)&v416, (__int64 *)(a1 + 8), *(_DWORD *)(a4 + 24), 0xC52u, 0);
          v389 = sub_15DD120((__int64)&v416, a4);
          v413 = (const void *)sub_EEC8C0(v398 & 0xFFFFFFFFFFFFFFFCLL, a4, *(double *)a7.m128_u64);
          sub_1587DB0(v389, (__int64 *)&v413);
          sub_15F7200(&v416);
          return;
        }
LABEL_50:
        if ( (a3[1].m128i_i8[13] & 1) == 0 )
          goto LABEL_55;
        v37 = (__int64 **)sub_B8C3D0((__int64)a3, (__int64)v36, v32, v33, v34, v35);
        v38 = *v37;
        v39 = &(*v37)[*((unsigned int *)v37 + 2)];
        if ( v38 >= v39 )
        {
          do
          {
            if ( v38 == v39 )
              goto LABEL_55;
            v48 = *v39++;
          }
          while ( *(_WORD *)(v48 + 36) != 405 );
        }
        else
        {
          v40 = v38;
          while ( *(_WORD *)(*v40 + 36) != 405 )
          {
            if ( v39 == ++v40 )
              goto LABEL_55;
          }
          if ( v40 == v39 )
          {
LABEL_55:
            v41 = *(_QWORD **)(a1 + 248);
            v42 = v41[294];
            v41[304] += 64LL;
            v43 = (__m128i *)((v42 + 7) & 0xFFFFFFFFFFFFFFF8LL);
            if ( v41[295] >= (unsigned __int64)&v43[4] && v42 )
              v41[294] = v43 + 4;
            else
              v43 = (__m128i *)sub_986170((__int64)(v41 + 294), 64, 64, 3, v34, v35);
            sub_B1B710(v43, *(_QWORD *)(a1 + 248), (const __m128i *)a4, (__int64)v408, (__int64)v409, (__int64)v410);
            sub_B8CC60((__int64)a3, (__int64)v43, v44, v45, v46, v47);
            return;
          }
        }
        v345 = *v38;
        if ( *(_WORD *)(*v38 + 36) != 405 )
        {
          v346 = v38 + 1;
          do
            v345 = *v346++;
          while ( *(_WORD *)(v345 + 36) != 405 );
        }
        v347 = 0;
        v411 = (unsigned __int128)_mm_loadu_si128((const __m128i *)(v345 + 40));
        v412 = *(_QWORD *)(v345 + 56);
        while ( 1 )
        {
          v348 = *(_DWORD **)((char *)&v411 + v347 * 8);
          if ( (*v348 & 0x20000) == 0 )
          {
            v405 = (&v408)[v347];
            if ( (*v405 & 0x20000) == 0 )
            {
              sub_C3EB00((__int64)&v413, (unsigned __int64)v348, *(_QWORD *)(a1 + 248), nullptr, v34, v35);
              sub_C3EB00((__int64)&v416, (unsigned __int64)v405, *(_QWORD *)(a1 + 248), nullptr, v349, v350);
              if ( v415 != (_BYTE)v418
                || v415
                && ((unsigned int)v414 <= 0x40 ? (v351 = v413 == v416) : (v351 = sub_2205D70(&v413, &v416)), !v351) )
              {
                sub_98E4B0((__int64)&v416);
                sub_98E4B0((__int64)&v413);
                sub_168B9F0((__int64)&v416, (__int64 *)(a1 + 8), *(_DWORD *)(a4 + 24), 0x1ACBu, 0);
                sub_15DD120((__int64)&v416, a4);
                sub_15F7200(&v416);
                goto LABEL_55;
              }
              sub_98E4B0((__int64)&v416);
              sub_98E4B0((__int64)&v413);
            }
          }
          if ( ++v347 == 3 )
            goto LABEL_55;
        }
      case 0x19E:
        sub_1E9FF30(*(_QWORD *)(a1 + 832), a3, a4);
        return;
      case 0x1A0:
        sub_1830D20(a1, (__int64)a3, (const __m128i *)a4);
        return;
      case 0x1A1:
        sub_1821640(a1, (__int64)a3, (const __m128i *)a4, (__m128i)a7, *(double *)a8.m128i_i64);
        return;
      default:
        if ( (*(unsigned int (__fastcall **)(_WORD *, __int64, __m128i *, unsigned __int64))(*(_QWORD *)v29 + 88LL))(
               v29,
               a1,
               a3,
               a4) )
        {
          return;
        }
        sub_15D85A0(a4);
        if ( !(unsigned __int8)sub_15D8590(a4) )
          goto LABEL_497;
        if ( !*a6 && ((unsigned __int8)((*(_BYTE *)(a4 + 34) & 0xF) - 2) <= 1u || (*(_BYTE *)(a4 + 35) & 3) != 0) )
        {
          if ( sub_15D8670(a4) && ((v304 = a3[1].m128i_i8[12] & 0x7F, (unsigned int)v304 - 34 <= 0x11) || v304 == 65) )
          {
            if ( sub_F96350(a4) )
            {
              sub_168B9F0((__int64)&v416, (__int64 *)(a1 + 8), *(_DWORD *)(a4 + 24), 0x1D1Au, 0);
              v305 = sub_15DD120((__int64)&v416, a4);
              LODWORD(v413) = a3[1].m128i_i32[2];
              sub_180D980(v305, (int *)&v413);
              sub_15F7200(&v416);
            }
          }
          else
          {
            v384 = *(unsigned __int16 *)(*(_QWORD *)(a4 + 72) + 8LL);
            if ( v384 != 402 && v384 != 326 && v384 != 217 )
            {
LABEL_497:
              sub_168B9F0((__int64)&v416, (__int64 *)(a1 + 8), *(_DWORD *)(a4 + 24), 0xC75u, 0);
              v385 = sub_15DD120((__int64)&v416, a4);
              LOBYTE(v411) = (*(_BYTE *)(a4 + 35) & 2) != 0;
              v386 = sub_1588420(v385, (unsigned __int8 *)&v411);
              LODWORD(v413) = a3[1].m128i_i32[2];
              sub_180D980(v386, (int *)&v413);
              sub_15F7200(&v416);
            }
          }
        }
        return;
    }
  }
  if ( (*(_BYTE *)(a4 + 35) & 2) != 0 )
  {
    v13 = (__int64 *)(a1 + 8);
    v14 = 30;
  }
  else
  {
    if ( (*(_BYTE *)(a4 + 34) & 0xF) != 4 )
    {
      sub_1815810((__int64 *)a1, a4);
      return;
    }
    v13 = (__int64 *)(a1 + 8);
    v14 = 7477;
  }
  sub_168B9F0((__int64)&v416, v13, *(_DWORD *)(a4 + 24), v14, 0);
  v15 = *(_QWORD *)a4;
  if ( v420 )
  {
    sub_AE9DF0(&v419, *(_QWORD *)a4, 5u);
  }
  else if ( v422 )
  {
    v310 = sub_168B9E0(&v416);
    v311 = v418;
    if ( v418 )
      v311 = (const void *)(*(__int64 (__fastcall **)(const void *))(*(_QWORD *)v418 + 32LL))(v418);
    v413 = v311;
    v312 = sub_1587BC0(v310, (__int64 *)&v413, v306, v307, v308, v309);
    sub_AE9DF0((unsigned __int8 **)(*v312 + 32LL * v421 + 8), v15, 5u);
  }
  v413 = *(const void **)(a4 + 24);
  sub_1587DB0((__int64)&v416, (__int64 *)&v413);
  sub_15F7200(&v416);
}
