__int64 __fastcall sub_1E8C260(
        __m128 *a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  __int64 v8; // r13
  unsigned int v10; // ebp
  _QWORD *v12; // r14
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // eax
  __int64 v24; // rax
  char v25; // dl
  unsigned int v26; // eax
  __int64 v27; // r9
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rax
  unsigned __int64 v34; // rax
  __int64 v35; // rdi
  __int64 v36; // rax
  unsigned __int64 v37; // rax
  __int64 v38; // rdi
  __int64 v39; // rbx
  unsigned __int64 v40; // rax
  int v41; // r8d
  char v42; // al
  int v43; // eax
  unsigned __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rax
  unsigned __int64 v48; // rax
  int v49; // eax
  int v50; // eax
  __int64 v51; // rbx
  __int64 v52; // rax
  __int16 v53; // ax
  __int64 v54; // rax
  int v55; // eax
  __int64 v56; // rax
  int v57; // eax
  int v58; // eax
  int v59; // eax
  int v60; // eax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // rcx
  __int64 v68; // rsi
  __int64 v69; // rdx
  __int64 v70; // rdi
  __int64 v71; // rsi
  __int64 v72; // rax
  _QWORD *v73; // rax
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // r9
  __int64 v78; // rbp
  _QWORD *v79; // rax
  int v80; // eax
  char v81; // al
  __int64 v82; // rdx
  char v83; // al
  __int64 v84; // r12
  unsigned __int64 v85; // r13
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // r8
  __int64 v89; // r9
  __int64 v90; // rdi
  char v91; // al
  _QWORD *v92; // rax
  __int64 v93; // rcx
  __int64 v94; // r8
  int v95; // eax
  int v96; // eax
  int v97; // eax
  int v98; // eax
  _QWORD *v99; // rax
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // r8
  __int64 v103; // r9
  _QWORD *v104; // rbx
  int v105; // eax
  _QWORD *v106; // rax
  __int64 v107; // rdx
  __int64 v108; // rcx
  __int64 v109; // r8
  __int64 v110; // r9
  _QWORD *v111; // rbx
  __int64 v112; // rdx
  __int64 v113; // rcx
  __int64 v114; // r8
  __int64 v115; // r9
  __int64 v116; // rdx
  __int64 v117; // rcx
  __int64 v118; // r8
  __int64 v119; // r9
  int v120; // eax
  int v121; // r8d
  int v122; // edx
  int v123; // eax
  _QWORD *v124; // rax
  __int64 v125; // rdx
  __int64 v126; // rcx
  __int64 v127; // r8
  __int64 v128; // r9
  _QWORD *v129; // rbx
  _QWORD *v130; // rax
  unsigned __int64 v131; // rax
  __int64 v132; // rax
  __int64 v133; // rdx
  __int64 v134; // rcx
  __int64 v135; // r8
  __int64 v136; // rdi
  __int64 v137; // rsi
  unsigned __int64 v138; // rax
  __int64 v139; // rdx
  __int64 v140; // rcx
  __int64 v141; // r8
  __int64 v142; // r9
  _QWORD *v143; // rax
  __int64 v144; // rdx
  __int64 v145; // rcx
  __int64 v146; // r8
  __int64 v147; // r9
  _QWORD *v148; // rbx
  __int64 v149; // rsi
  unsigned __int64 v150; // rax
  __int64 v151; // rdx
  __int64 v152; // rcx
  __int64 v153; // r8
  __int64 v154; // r9
  _QWORD *v155; // rax
  __int64 v156; // rdx
  __int64 v157; // rcx
  __int64 v158; // r8
  __int64 v159; // r9
  __int64 v160; // rbx
  __int64 v161; // rdx
  __int64 v162; // rcx
  __int64 v163; // r8
  __int64 v164; // r9
  __int64 v165; // rdx
  __int64 v166; // rcx
  __int64 v167; // r8
  __int64 v168; // r9
  __int64 v169; // rdi
  _QWORD *v170; // rax
  __int64 v171; // rdx
  __int64 v172; // rcx
  __int64 v173; // r8
  __int64 v174; // r9
  __int64 v175; // rbx
  __int64 v176; // rsi
  __int64 v177; // rdx
  __int64 v178; // rcx
  __int64 v179; // r8
  __int64 v180; // r9
  __int64 v181; // rdx
  __int64 v182; // rcx
  __int64 v183; // r8
  __int64 v184; // r9
  _QWORD *v185; // rax
  __int64 v186; // rdx
  __int64 v187; // rcx
  __int64 v188; // r8
  __int64 v189; // r9
  __int64 v190; // rbx
  __int64 v191; // rsi
  __int64 v192; // rdx
  __int64 v193; // rcx
  __int64 v194; // r8
  __int64 v195; // r9
  __int64 v196; // rdx
  __int64 v197; // rcx
  __int64 v198; // r8
  int v199; // eax
  __int64 v200; // rsi
  unsigned __int64 v201; // rax
  __int64 v202; // rdx
  __int64 v203; // rcx
  __int64 v204; // r8
  __int64 v205; // r9
  _QWORD *v206; // rax
  __int64 v207; // rdx
  __int64 v208; // rcx
  __int64 v209; // r8
  __int64 v210; // r9
  __int64 v211; // r12
  __int64 v212; // rdx
  __int64 v213; // rcx
  __int64 v214; // r8
  __int64 v215; // r9
  __int64 v216; // rsi
  unsigned __int64 v217; // r12
  __int64 v218; // rax
  unsigned __int64 v219; // r12
  __int64 v220; // r14
  __int64 v221; // r15
  __int64 v222; // rcx
  __int64 *v223; // rax
  __int64 v224; // rdx
  __int64 v225; // rax
  __int64 v226; // r15
  __int64 v227; // rdx
  __int64 v228; // rcx
  __int64 v229; // r8
  __int64 v230; // rdi
  int v231; // eax
  __int64 v232; // rdx
  __int64 v233; // rcx
  __int64 v234; // r8
  __int64 v235; // r9
  _QWORD *v236; // rax
  __int64 v237; // rdx
  __int64 v238; // rcx
  __int64 v239; // r8
  __int64 v240; // r9
  __int64 v241; // r12
  __int64 v242; // rsi
  __int64 v243; // rdx
  __int64 v244; // rcx
  __int64 v245; // r8
  __int64 v246; // r9
  unsigned __int64 v247; // r12
  __int64 v248; // rax
  unsigned __int64 v249; // r12
  __int64 v250; // r14
  __int64 v251; // rax
  __int64 v252; // rdx
  __int64 v253; // r15
  __int64 v254; // rcx
  __int64 *v255; // rax
  __int64 v256; // rdx
  __int64 v257; // rax
  __int64 v258; // r15
  unsigned __int64 v259; // rax
  __int64 v260; // rdx
  unsigned __int64 v261; // rcx
  __int64 v262; // r8
  __int64 v263; // r9
  __int64 v264; // rdx
  __int64 v265; // rcx
  __int64 v266; // r8
  __int64 *v267; // rax
  __int64 v268; // rsi
  __int64 v269; // rcx
  __int64 v270; // r8
  __int64 v271; // r9
  __int64 v272; // rdx
  __int64 *v273; // rbx
  __int64 v274; // rcx
  __int64 v275; // r8
  __int64 v276; // r9
  int v277; // eax
  _QWORD *v278; // rax
  __int64 v279; // rbp
  unsigned __int64 v280; // r12
  __int64 v281; // rdx
  __int64 v282; // rcx
  __int64 v283; // r8
  __int64 v284; // r9
  __int64 v285; // rdx
  __int64 v286; // rcx
  __int64 v287; // r8
  __int64 v288; // r9
  __int64 v289; // rdx
  __int64 v290; // rcx
  __int64 v291; // r8
  __int64 v292; // r9
  __int64 v293; // rdx
  __int64 v294; // rcx
  __int64 v295; // r8
  __int64 v296; // r9
  __int64 v297; // rsi
  __int64 v298; // rdx
  __int64 v299; // rcx
  __int64 v300; // r8
  __int64 v301; // r9
  __int64 v302; // rsi
  unsigned __int64 v303; // rax
  __int64 v304; // rdx
  __int64 v305; // rcx
  __int64 v306; // r8
  __int64 v307; // r9
  _QWORD *v308; // rax
  __int64 v309; // rdx
  __int64 v310; // rcx
  __int64 v311; // r8
  __int64 v312; // r9
  __int64 v313; // rbx
  __int64 v314; // rdx
  __int64 v315; // rcx
  __int64 v316; // r8
  __int64 v317; // r9
  __int64 v318; // rdx
  __int64 v319; // rcx
  __int64 v320; // r8
  __int64 v321; // r9
  __int64 v322; // rsi
  __int64 v323; // rdx
  __int64 v324; // rcx
  __int64 v325; // r8
  __int64 v326; // r9
  __int64 v327; // rdx
  __int64 v328; // rcx
  __int64 v329; // r8
  __int64 v330; // r9
  __int64 v331; // rsi
  unsigned __int64 v332; // rax
  __int64 v333; // rdx
  __int64 v334; // rcx
  __int64 v335; // r8
  __int64 v336; // r9
  _QWORD *v337; // rax
  __int64 v338; // rdx
  __int64 v339; // rcx
  __int64 v340; // r8
  __int64 v341; // r9
  __int64 v342; // rbx
  __int64 v343; // rdx
  __int64 v344; // rcx
  __int64 v345; // r8
  __int64 v346; // r9
  __int64 v347; // rdi
  unsigned __int64 v348; // rdx
  unsigned __int64 v349; // rcx
  __int64 v350; // r8
  __int64 v351; // r9
  __int64 *v352; // rax
  unsigned __int64 v353; // rdx
  __int64 v354; // rcx
  unsigned __int64 v355; // rax
  __int64 v356; // rdx
  __int64 v357; // rcx
  __int64 v358; // r8
  __int64 v359; // r9
  _QWORD *v360; // rax
  _QWORD *v361; // rsi
  unsigned __int64 v362; // rax
  unsigned __int64 v363; // r12
  __int64 v364; // rdx
  __int64 v365; // rcx
  unsigned __int64 v366; // rax
  __int64 v367; // rdi
  __int64 v368; // rax
  _QWORD *v369; // rax
  __int64 v370; // rdx
  __int64 v371; // rcx
  __int64 v372; // r8
  __int64 v373; // r9
  unsigned __int64 *v374; // rax
  unsigned __int64 v375; // rcx
  unsigned __int64 v376; // rdx
  unsigned __int64 v377; // rax
  __int64 *v378; // rax
  __int64 v379; // rdx
  __int64 v380; // rcx
  __int64 v381; // rdx
  __int64 v382; // rdx
  unsigned int v383; // eax
  unsigned __int64 v384; // rax
  __int64 v385; // rdx
  __int64 v386; // rcx
  __int64 v387; // r8
  __int64 v388; // r9
  __int64 v389; // rdx
  __int64 v390; // rcx
  __int64 v391; // r8
  __int64 v392; // r9
  __int64 v393; // rdx
  __int64 v394; // rcx
  __int64 v395; // r8
  __int64 v396; // r9
  __int64 v397; // rdx
  __int64 v398; // rcx
  __int64 v399; // r8
  __int64 v400; // r9
  __int64 v401; // rdx
  __int64 v402; // rcx
  __int64 v403; // rbx
  __int64 v404; // r8
  __int64 v405; // r9
  __int64 v406; // rax
  _QWORD *v407; // rax
  __int64 v408; // rsi
  __int64 v409; // rdx
  __int64 v410; // rcx
  __int64 v411; // r8
  __int64 v412; // r9
  int v413; // eax
  unsigned __int64 v414; // rdx
  __int64 v415; // rcx
  __int64 v416; // [rsp+8h] [rbp-100h]
  __int64 v417; // [rsp+8h] [rbp-100h]
  unsigned __int8 v418; // [rsp+10h] [rbp-F8h]
  unsigned __int8 v419; // [rsp+1Fh] [rbp-E9h]
  __int64 v420; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v421; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v422[2]; // [rsp+30h] [rbp-D8h] BYREF
  void *v423; // [rsp+40h] [rbp-C8h] BYREF
  __int64 *v424; // [rsp+48h] [rbp-C0h]
  __int64 v425; // [rsp+50h] [rbp-B8h]
  unsigned __int8 *v426; // [rsp+60h] [rbp-A8h] BYREF
  char v427; // [rsp+B8h] [rbp-50h]
  unsigned int v428; // [rsp+C0h] [rbp-48h]
  char v429; // [rsp+C4h] [rbp-44h]

  v10 = a3;
  v12 = (_QWORD *)a1[15].m128_u64[1];
  v420 = *a4;
  switch ( (int)a2 )
  {
    case 0:
      goto LABEL_3;
    case 1:
    case 22:
      v369 = sub_F63270(*(_QWORD *)(v420 & 0xFFFFFFFFFFFFFFF0LL), a2, a3, (__int64)a4, a5, a6);
      if ( !v369 || (*((_BYTE *)v369 + 29) & 1) == 0 )
        goto LABEL_3;
      v374 = sub_B8C3D0((__int64)v369, a2, v370, v371, v372, v373);
      v375 = *v374;
      v376 = *v374 + 8LL * *((unsigned int *)v374 + 2);
      if ( *v374 < v376 )
      {
        v377 = *v374;
        while ( 1 )
        {
          v375 = v377;
          if ( *(_WORD *)(*(_QWORD *)v377 + 36LL) == 214 )
            goto LABEL_270;
          v377 += 8LL;
          if ( v376 == v377 )
            goto LABEL_3;
        }
      }
      if ( v375 != v376 )
      {
        if ( *(_WORD *)(*(_QWORD *)v376 + 36LL) == 214 )
        {
LABEL_270:
          LOBYTE(v8) = v375 != v376;
          return (unsigned int)v8;
        }
        v384 = v376 + 8;
        while ( 1 )
        {
          v376 = v384;
          if ( v375 == v384 )
            break;
          v384 += 8LL;
          if ( *(_WORD *)(*(_QWORD *)v376 + 36LL) == 214 )
            goto LABEL_270;
        }
      }
LABEL_3:
      LODWORD(v8) = 0;
      return (unsigned int)v8;
    case 2:
    case 3:
    case 4:
      v347 = *(_QWORD *)(v420 & 0xFFFFFFFFFFFFFFF0LL);
      if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v347 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43 <= 1 )
        goto LABEL_15;
      LODWORD(v8) = a2;
      if ( sub_F6ACC0(v347, a2, a3, (__int64)a4, a5) )
      {
        v352 = (__int64 *)(v420 & 0xFFFFFFFFFFFFFFF0LL);
        v348 = *(_QWORD *)&byte_8[v420 & 0xFFFFFFFFFFFFFFF0LL];
        if ( (v348 & 8) != 0 )
        {
          v349 = v348 & 0xFFFFFFFFFFFFFFF0LL;
          v348 = ((*(__int64 *)((char *)&qword_18
                              + (*(_QWORD *)&byte_8[v420 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL))
                 | *(_QWORD *)&byte_8[v420 & 0xFFFFFFFFFFFFFFF0LL] & 7uLL) >> 6)
               & 7;
          if ( (_DWORD)v348 == 4 )
            goto LABEL_15;
        }
      }
      else
      {
        v352 = (__int64 *)(v420 & 0xFFFFFFFFFFFFFFF0LL);
      }
      if ( !sub_F62670(*v352, nullptr, v348, v349, v350, v351)
        && (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v420 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                        & 0xFFFFFFFFFFFFFFF0LL)
                                            + 16LL)
         - 25 > 1
        && ((_DWORD)a2 != 3 || !(unsigned int)sub_F65A30(v420, 0, v353, v354)) )
      {
        v355 = sub_A71450((__int64)v12, v420);
        v360 = sub_F63270(*(_QWORD *)(v355 & 0xFFFFFFFFFFFFFFF0LL), v420, v356, v357, v358, v359);
        if ( !v360 )
          goto LABEL_15;
        v361 = v360;
        v362 = sub_1A69EF0((__int64 *)a1, (__int64)v360);
        v363 = v362;
        if ( v362 )
        {
          if ( (*(_BYTE *)((*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v362 + 32LL))(v362) + 82) & 0x40) == 0
            && ((*(_BYTE *)(v12[290] + 46LL) & 0x20) == 0 || (*(_BYTE *)(v363 + 29) & 0x60) == 0) )
          {
            if ( (_DWORD)v8 != 4 )
              goto LABEL_15;
            v366 = *(_QWORD *)(v363 + 48) & 0xFFFFFFFFFFFFFFF0LL;
            v367 = *(_QWORD *)v366;
            if ( *(_BYTE *)(*(_QWORD *)v366 + 16LL) != 26 )
              v367 = sub_F63050(v367, v361, v364, v365);
            v368 = sub_18B0530((__int64)a1, v10, v367, *(double *)a7.m128_u64, a8);
            if ( v368 )
            {
              LOBYTE(v8) = (unsigned int)sub_F63060(v368) == 0;
              return (unsigned int)v8;
            }
          }
        }
      }
      goto LABEL_3;
    case 5:
      LODWORD(v8) = sub_F65CA0(&v420, (__int64)v12, a3, (unsigned __int64)a4, a5, a6);
      if ( (_BYTE)v8 )
        goto LABEL_15;
      v378 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(sub_A71450((__int64)v12, v420) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                       & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(*v378 + 16) == 48 )
        LODWORD(v8) = sub_1E85930(
                        *v378,
                        a1,
                        v10,
                        (__int64)v12,
                        (__int64)sub_B9F9E0,
                        0,
                        (__int64)sub_BA1990,
                        0,
                        (__int64 (__fastcall *)(unsigned __int64))sub_B98360);
      return (unsigned int)v8;
    case 6:
      if ( (unsigned __int8)sub_F65CA0(&v420, (__int64)v12, a3, (unsigned __int64)a4, a5, a6) )
        goto LABEL_15;
      v331 = v420;
      v332 = sub_A71450((__int64)v12, v420);
      v337 = sub_F63270(*(_QWORD *)(v332 & 0xFFFFFFFFFFFFFFF0LL), v331, v333, v334, v335, v336);
      v342 = (__int64)v337;
      if ( !v337 || !sub_B9F9E0((__int64)v337, v331, v338, v339, v340, v341) )
        goto LABEL_3;
      LODWORD(v8) = !sub_BA1990(v342, v331, v343, v344, v345, v346);
      return (unsigned int)v8;
    case 7:
      if ( (unsigned __int8)sub_F65CA0(&v420, (__int64)v12, a3, (unsigned __int64)a4, a5, a6) )
        goto LABEL_15;
      v302 = v420;
      v303 = sub_A71450((__int64)v12, v420);
      v308 = sub_F63270(*(_QWORD *)(v303 & 0xFFFFFFFFFFFFFFF0LL), v302, v304, v305, v306, v307);
      v313 = (__int64)v308;
      if ( !v308 )
        goto LABEL_3;
      sub_7052B0((__int64 *)(v308[13] + 96LL), v308[13], v309, v310, v311, v312);
      if ( (*(_BYTE *)(*(_QWORD *)(v313 + 128) + 9LL) & 4) == 0 )
      {
        sub_7052B0((__int64 *)(*(_QWORD *)(v313 + 104) + 96LL), *(_QWORD *)(v313 + 104), v314, v315, v316, v317);
        if ( (*(_BYTE *)(*(_QWORD *)(v313 + 128) + 9LL) & 4) != 0 )
          goto LABEL_3;
        sub_7052B0((__int64 *)(*(_QWORD *)(v313 + 104) + 96LL), *(_QWORD *)(v313 + 104), v385, v386, v387, v388);
        if ( (**(_BYTE **)(v313 + 128) & 4) != 0 )
          goto LABEL_3;
        sub_7052B0((__int64 *)(*(_QWORD *)(v313 + 104) + 96LL), *(_QWORD *)(v313 + 104), v389, v390, v391, v392);
        if ( (**(_BYTE **)(v313 + 128) & 0x10) != 0 )
          goto LABEL_3;
        sub_7052B0((__int64 *)(*(_QWORD *)(v313 + 104) + 96LL), *(_QWORD *)(v313 + 104), v393, v394, v395, v396);
        if ( (**(_BYTE **)(v313 + 128) & 0x20) != 0 )
          goto LABEL_3;
        sub_7052B0((__int64 *)(*(_QWORD *)(v313 + 104) + 96LL), *(_QWORD *)(v313 + 104), v397, v398, v399, v400);
        if ( (**(_BYTE **)(v313 + 128) & 0x40) != 0 )
          goto LABEL_3;
      }
      sub_7052B0((__int64 *)(*(_QWORD *)(v313 + 104) + 96LL), *(_QWORD *)(v313 + 104), v314, v315, v316, v317);
      if ( (*(_BYTE *)(*(_QWORD *)(v313 + 128) + 5LL) & 2) == 0 )
        goto LABEL_3;
      v322 = *(_QWORD *)(v313 + 104);
      sub_7052B0((__int64 *)(v322 + 96), v322, v318, v319, v320, v321);
      if ( (*(_BYTE *)(*(_QWORD *)(v313 + 128) + 6LL) & 0x20) != 0 )
        goto LABEL_3;
      if ( !(unsigned __int8)sub_B9C060(v313, v322, v323, v324, v325, v326) )
        goto LABEL_15;
      sub_7052B0((__int64 *)(*(_QWORD *)(v313 + 104) + 96LL), *(_QWORD *)(v313 + 104), v327, v328, v329, v330);
      LODWORD(v8) = (*(_WORD *)(*(_QWORD *)(v313 + 128) + 4LL) & 0x200) != 0;
      return (unsigned int)v8;
    case 8:
      v268 = (__int64)a4;
      sub_1E8B590((__int64)a1, a4, 0xE4u, a7);
      v272 = *a4;
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*a4 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                    + 16LL) == 7 )
      {
        v422[0] = *a4;
        v422[1] = (__int64)(a4 + 1);
        v383 = sub_F6CCB0(v422, a7);
        v268 = (__int64)&a1->m128_i64[1];
        sub_168B9F0((__int64)&v423, &a1->m128_i64[1], v383, 0xC44u, 0);
        if ( v427 )
        {
          v268 = 228;
          sub_AE9DF0(&v426, 228, 4u);
        }
        else if ( v429 )
        {
          v403 = sub_168B9E0(&v423);
          v406 = v425;
          if ( v425 )
            v406 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v425 + 32LL))(v425);
          v421 = v406;
          v407 = sub_1587BC0(v403, &v421, v401, v402, v404, v405);
          v268 = 228;
          sub_AE9DF0((unsigned __int8 **)(*v407 + 32LL * v428 + 8), 228, 4u);
        }
        sub_15F7200(&v423);
      }
      v273 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(v420 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
      if ( sub_F61140(*v273, v268, v272, v269, v270, v271) )
        goto LABEL_15;
      v277 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*v273 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
      if ( (unsigned __int8)(v277 - 2) <= 4u || (unsigned __int8)(v277 - 57) <= 1u )
        goto LABEL_15;
      v278 = sub_F63270(*v273, v268, (unsigned int)(v277 - 2), v274, v275, v276);
      v279 = (__int64)v278;
      if ( !v278 )
        goto LABEL_3;
      v280 = sub_B97300((__int64)v278);
      if ( sub_F61BB0(*v273, v268, v281, v282, v283, v284) )
      {
        if ( !v280 )
        {
          v13 = *(_QWORD *)(v279 + 104);
          sub_7052B0((__int64 *)(v13 + 96), v13, v285, v286, v287, v288);
          if ( (*(_BYTE *)(*(_QWORD *)(v279 + 128) + 5LL) & 0x10) == 0 )
            goto LABEL_3;
          goto LABEL_199;
        }
        if ( !(unsigned __int8)sub_B967A0(v280, v268, v285, v286) )
          goto LABEL_15;
        v13 = *(_QWORD *)(v279 + 104);
        sub_7052B0((__int64 *)(v13 + 96), v13, v289, v290, v291, v292);
        if ( (*(_BYTE *)(*(_QWORD *)(v279 + 128) + 5LL) & 0x10) == 0 )
          goto LABEL_3;
        goto LABEL_198;
      }
      v13 = *(_QWORD *)(v279 + 104);
      sub_7052B0((__int64 *)(v13 + 96), v13, v285, v286, v287, v288);
      if ( (*(_BYTE *)(*(_QWORD *)(v279 + 128) + 5LL) & 0x10) == 0 )
        goto LABEL_3;
      if ( v280 )
      {
LABEL_198:
        if ( (*(_BYTE *)((*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v280 + 32LL))(v280) + 82) & 0x40) != 0 )
          goto LABEL_3;
      }
LABEL_199:
      if ( !(unsigned __int8)sub_F62280(v279, v13, v14, v15, v16, v17) )
      {
        v297 = *(_QWORD *)(v279 + 104);
        sub_7052B0((__int64 *)(v297 + 96), v297, v293, v294, v295, v296);
        if ( (*(_BYTE *)(*(_QWORD *)(v279 + 128) + 5LL) & 1) == 0 )
        {
          LODWORD(v8) = sub_1E88000(v279, v297, v298, v299, v300, v301);
          return (unsigned int)v8;
        }
      }
LABEL_15:
      LODWORD(v8) = 1;
      return (unsigned int)v8;
    case 9:
      v259 = sub_A71450((__int64)v12, v420);
      if ( (v259 & 1) != 0
        || (byte_8[v259 & 0xFFFFFFFFFFFFFFF0LL] & 1) != 0
        || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v420 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                        & 0xFFFFFFFFFFFFFFF0LL)
                                            + 16LL)
         - 43 <= 1 )
      {
        goto LABEL_3;
      }
      if ( (unsigned __int8)sub_F65CA0(&v420, (__int64)v12, v260, v261, v262, v263)
        || sub_F6ACC0(*(_QWORD *)(v420 & 0xFFFFFFFFFFFFFFF0LL), (__int64)v12, v264, v265, v266) )
      {
        goto LABEL_15;
      }
      v267 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(v420 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(*v267 + 16) != 48 )
        goto LABEL_3;
      LODWORD(v8) = sub_1E85930(
                      *v267,
                      a1,
                      v10,
                      (__int64)v12,
                      (__int64)sub_1E86BE0,
                      0,
                      (__int64)sub_1E86C10,
                      0,
                      (__int64 (__fastcall *)(unsigned __int64))sub_B98230);
      return (unsigned int)v8;
    case 10:
      if ( (unsigned __int8)sub_F65CA0(&v420, (__int64)v12, a3, (unsigned __int64)a4, a5, a6) )
        goto LABEL_15;
      v230 = *(_QWORD *)(v420 & 0xFFFFFFFFFFFFFFF0LL);
      if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v230 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43 <= 1 )
        goto LABEL_15;
      LOBYTE(v231) = sub_F6ACC0(v230, (__int64)v12, v227, v228, v229);
      LODWORD(v8) = v231;
      if ( (_BYTE)v231 )
        goto LABEL_15;
      v236 = sub_F63270(*(_QWORD *)(v420 & 0xFFFFFFFFFFFFFFF0LL), (__int64)v12, v232, v233, v234, v235);
      v241 = (__int64)v236;
      if ( !v236 )
        goto LABEL_3;
      v242 = v236[13];
      sub_7052B0((__int64 *)(v242 + 96), v242, v237, v238, v239, v240);
      if ( (*(_BYTE *)(*(_QWORD *)(v241 + 128) + 5LL) & 1) != 0 && !sub_1E86D30(v241, v242, v243, v244, v245, v246) )
        goto LABEL_15;
      v419 = 0;
      v247 = sub_1A3D890((__int64)a1, v241, v243, v244, v245, v246);
      if ( !v247 )
        goto LABEL_246;
      while ( 2 )
      {
        v248 = v247;
        v249 = v247 & 0xFFFFFFFFFFFFFFF8LL;
        LODWORD(v248) = (v248 >> 2) & 1;
        v250 = (unsigned int)v248;
        if ( (_DWORD)v248 )
        {
          if ( v249 )
          {
            v417 = *(_QWORD *)v249;
            v251 = sub_16C47B0(*(_QWORD *)v249);
            v253 = v251;
            if ( (*(_BYTE *)(v251 + 28) & 0x7F) == 0x47
              || (*(_BYTE *)(v417 + 28) & 0x7F) == 0x51
              || !sub_B98FE0(v251, &v423, v252, v417) )
            {
              goto LABEL_180;
            }
            goto LABEL_173;
          }
          v253 = sub_16C47B0(0);
          if ( (*(_BYTE *)(v253 + 28) & 0x7F) == 0x47 )
            break;
        }
        else
        {
          v253 = sub_16C47B0(v249);
          if ( (*(_BYTE *)(v253 + 28) & 0x7F) == 0x47 || (*(_BYTE *)(v249 + 28) & 0x7F) == 0x51 )
            break;
        }
        if ( !sub_B98FE0(v253, &v423, v379, v380) )
          break;
LABEL_173:
        v255 = (__int64 *)(*(_QWORD *)(v253 + 48) & 0xFFFFFFFFFFFFFFF0LL);
        v256 = *v255;
        if ( *(_BYTE *)(*v255 + 16) != 26 )
          v256 = sub_F63050(*v255, &v423, v256, v254);
        v257 = sub_18B0530((__int64)a1, v10, v256, *(double *)a7.m128_u64, a8);
        v258 = v257;
        if ( !v257 || (unsigned int)sub_F63060(v257) || *(_WORD *)(v258 + 22) > 1u )
          return (unsigned int)v8;
        v419 = 1;
        if ( v250 && v249 )
        {
LABEL_180:
          v247 = *(_QWORD *)(v249 + 8);
          if ( !v247 )
            break;
          continue;
        }
        break;
      }
LABEL_246:
      LODWORD(v8) = v419;
      return (unsigned int)v8;
    case 11:
      if ( (unsigned __int8)sub_F65CA0(&v420, (__int64)v12, a3, (unsigned __int64)a4, a5, a6) )
        goto LABEL_15;
      LOBYTE(v199) = sub_F6ACC0(*(_QWORD *)(v420 & 0xFFFFFFFFFFFFFFF0LL), (__int64)v12, v196, v197, v198);
      LODWORD(v8) = v199;
      if ( (_BYTE)v199 )
        goto LABEL_15;
      v200 = v420;
      v201 = sub_A71450((__int64)v12, v420);
      v206 = sub_F63270(*(_QWORD *)(v201 & 0xFFFFFFFFFFFFFFF0LL), v200, v202, v203, v204, v205);
      v211 = (__int64)v206;
      if ( !v206 )
        goto LABEL_3;
      if ( (unsigned __int8)sub_F62280((__int64)v206, v200, v207, v208, v209, v210)
        && !sub_1E86C60(v211, v200, v212, v213, v214, v215) )
      {
        goto LABEL_15;
      }
      v216 = v211;
      v418 = 0;
      v217 = sub_1A3D890((__int64)a1, v211, v212, v213, v214, v215);
      if ( !v217 )
        goto LABEL_242;
      while ( 2 )
      {
        v218 = v217;
        v219 = v217 & 0xFFFFFFFFFFFFFFF8LL;
        LODWORD(v218) = (v218 >> 2) & 1;
        v220 = (unsigned int)v218;
        if ( (_DWORD)v218 )
        {
          if ( v219 )
          {
            v416 = *(_QWORD *)v219;
            v221 = sub_16C47B0(*(_QWORD *)v219);
            if ( (*(_BYTE *)(v221 + 28) & 0x7F) == 0x47
              || (*(_BYTE *)(v416 + 28) & 0x7F) == 0x51
              || !sub_B98FC0(v221, v216) )
            {
              goto LABEL_159;
            }
            goto LABEL_152;
          }
          v221 = sub_16C47B0(0);
          if ( (*(_BYTE *)(v221 + 28) & 0x7F) == 0x47 )
            break;
        }
        else
        {
          v221 = sub_16C47B0(v219);
          if ( (*(_BYTE *)(v221 + 28) & 0x7F) == 0x47 || (*(_BYTE *)(v219 + 28) & 0x7F) == 0x51 )
            break;
        }
        if ( !sub_B98FC0(v221, v216) )
          break;
LABEL_152:
        v223 = (__int64 *)(*(_QWORD *)(v221 + 48) & 0xFFFFFFFFFFFFFFF0LL);
        v224 = *v223;
        if ( *(_BYTE *)(*v223 + 16) != 26 )
          v224 = sub_F63050(*v223, v216, v224, v222);
        v216 = v10;
        v225 = sub_18B0530((__int64)a1, v10, v224, *(double *)a7.m128_u64, a8);
        v226 = v225;
        if ( !v225 || (unsigned int)sub_F63060(v225) || *(_WORD *)(v226 + 22) )
          return (unsigned int)v8;
        v418 = 1;
        if ( v220 && v219 )
        {
LABEL_159:
          v217 = *(_QWORD *)(v219 + 8);
          if ( !v217 )
            break;
          continue;
        }
        break;
      }
LABEL_242:
      LODWORD(v8) = v418;
      return (unsigned int)v8;
    case 12:
      if ( (v420 & 1) != 0 || (byte_8[v420 & 0xFFFFFFFFFFFFFFF0LL] & 1) != 0 )
        goto LABEL_3;
      if ( (unsigned __int8)sub_F65CA0(&v420, (__int64)v12, a3, (unsigned __int64)a4, a5, a6) )
        goto LABEL_15;
      v185 = sub_F63270(*(_QWORD *)(v420 & 0xFFFFFFFFFFFFFFF0LL), (__int64)v12, v181, v182, v183, v184);
      v190 = (__int64)v185;
      if ( !v185 )
        goto LABEL_3;
      v191 = v185[13];
      sub_7052B0((__int64 *)(v191 + 96), v191, v186, v187, v188, v189);
      if ( (*(_BYTE *)(*(_QWORD *)(v190 + 128) + 5LL) & 4) == 0 )
        goto LABEL_3;
      LODWORD(v8) = !sub_1E86C10(v190, v191, v192, v193, v194, v195);
      return (unsigned int)v8;
    case 13:
      if ( (unsigned __int8)sub_F65CA0(&v420, (__int64)v12, a3, (unsigned __int64)a4, a5, a6) )
        goto LABEL_15;
      v169 = *(_QWORD *)(v420 & 0xFFFFFFFFFFFFFFF0LL);
      if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v169 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43 <= 1 )
        goto LABEL_15;
      v170 = sub_F63270(v169, (__int64)v12, v165, v166, v167, v168);
      v175 = (__int64)v170;
      if ( !v170 )
        goto LABEL_3;
      v176 = v170[13];
      sub_7052B0((__int64 *)(v176 + 96), v176, v171, v172, v173, v174);
      if ( (*(_BYTE *)(*(_QWORD *)(v175 + 128) + 5LL) & 1) == 0 )
        goto LABEL_3;
      LODWORD(v8) = !sub_1E86D30(v175, v176, v177, v178, v179, v180);
      return (unsigned int)v8;
    case 14:
      if ( (unsigned __int8)sub_F65CA0(&v420, (__int64)v12, a3, (unsigned __int64)a4, a5, a6) )
        goto LABEL_15;
      v149 = v420;
      v150 = sub_A71450((__int64)v12, v420);
      v155 = sub_F63270(*(_QWORD *)(v150 & 0xFFFFFFFFFFFFFFF0LL), v149, v151, v152, v153, v154);
      v160 = (__int64)v155;
      if ( !v155 || !(unsigned __int8)sub_F62280((__int64)v155, v149, v156, v157, v158, v159) )
        goto LABEL_3;
      LODWORD(v8) = !sub_1E86C60(v160, v149, v161, v162, v163, v164);
      return (unsigned int)v8;
    case 15:
      if ( (unsigned __int8)sub_F65CA0(&v420, (__int64)v12, a3, (unsigned __int64)a4, a5, a6) )
        goto LABEL_15;
      v136 = *(_QWORD *)(v420 & 0xFFFFFFFFFFFFFFF0LL);
      if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v136 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43 <= 1
        || sub_F6ACC0(v136, (__int64)v12, v133, v134, v135)
        && (*(_QWORD *)&byte_8[v420 & 0xFFFFFFFFFFFFFFF0LL] & 8) != 0
        && (((*(__int64 *)((char *)&qword_18 + (*(_QWORD *)&byte_8[v420 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL))
            | *(_QWORD *)&byte_8[v420 & 0xFFFFFFFFFFFFFFF0LL] & 7uLL) >> 6)
          & 7) == 4 )
      {
        goto LABEL_15;
      }
      v137 = v420;
      v138 = sub_A71450((__int64)v12, v420);
      v143 = sub_F63270(*(_QWORD *)(v138 & 0xFFFFFFFFFFFFFFF0LL), v137, v139, v140, v141, v142);
      v148 = v143;
      if ( !v143 )
        goto LABEL_3;
      sub_7052B0((__int64 *)(v143[13] + 96LL), v143[13], v144, v145, v146, v147);
      LODWORD(v8) = (*(_WORD *)(v148[16] + 4LL) & 0x1000) != 0;
      return (unsigned int)v8;
    case 16:
      v130 = sub_F63270(*(_QWORD *)(v420 & 0xFFFFFFFFFFFFFFF0LL), a2, a3, (__int64)a4, a5, a6);
      if ( !v130 )
        goto LABEL_3;
      v131 = sub_1A69EF0((__int64 *)a1, (__int64)v130);
      if ( !v131 )
        goto LABEL_3;
      v132 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v131 + 32LL))(v131);
      if ( (*(_QWORD *)(v132 + 80) & 0x40000LL) != 0 || ((*(_QWORD *)(v132 + 80) >> 16) & 8) != 0 )
        goto LABEL_15;
      LOBYTE(v8) = (unsigned int)sub_B984E0(v132) != 0;
      return (unsigned int)v8;
    case 17:
      v124 = sub_F63270(*(_QWORD *)(v420 & 0xFFFFFFFFFFFFFFF0LL), a2, a3, (__int64)a4, a5, a6);
      v129 = v124;
      if ( !v124 || *((_BYTE *)v124 + 73) >> 5 == 2 )
        goto LABEL_3;
      sub_7052B0((__int64 *)(v124[13] + 96LL), v124[13], v125, v126, v127, v128);
      LODWORD(v8) = (*(_BYTE *)(v129[16] + 1LL) & 8) != 0;
      return (unsigned int)v8;
    case 18:
      if ( sub_F61BB0(*(_QWORD *)(v420 & 0xFFFFFFFFFFFFFFF0LL), a2, a3, (__int64)a4, a5, a6) )
        goto LABEL_15;
      v122 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v420 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                            & 0xFFFFFFFFFFFFFFF0LL)
                                + 16LL);
      v123 = v122 - 57;
      LOBYTE(v121) = (unsigned __int8)(v122 - 57) <= 1u;
      LOBYTE(v123) = (_BYTE)v122 == 14;
      LODWORD(v8) = v123 | v121;
      return (unsigned int)v8;
    case 19:
      if ( sub_F612B0(*(_QWORD *)(v420 & 0xFFFFFFFFFFFFFFF0LL), a2, a3, (__int64)a4, a5, a6)
        || sub_F612F0(*(_QWORD *)(v420 & 0xFFFFFFFFFFFFFFF0LL), a2, v112, v113, v114, v115) )
      {
        goto LABEL_15;
      }
      LOBYTE(v120) = sub_F61390(*(_QWORD *)(v420 & 0xFFFFFFFFFFFFFFF0LL), a2, v116, v117, v118, v119);
      LODWORD(v8) = v120;
      return (unsigned int)v8;
    case 20:
      v106 = sub_F63270(*(_QWORD *)(v420 & 0xFFFFFFFFFFFFFFF0LL), a2, a3, (__int64)a4, a5, a6);
      v111 = v106;
      if ( !v106 || *((_BYTE *)v106 + 73) >> 5 == 2 )
        goto LABEL_3;
      sub_7052B0((__int64 *)(v106[13] + 96LL), v106[13], v107, v108, v109, v110);
      LODWORD(v8) = (*(_BYTE *)(v111[16] + 1LL) & 2) != 0;
      return (unsigned int)v8;
    case 21:
      LOBYTE(v8) = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v420 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                        & 0xFFFFFFFFFFFFFFF0LL)
                            + 16LL) == 47;
      return (unsigned int)v8;
    case 23:
      LOBYTE(v105) = sub_F67430(*(_QWORD *)(v420 & 0xFFFFFFFFFFFFFFF0LL), (__int64)v12, a3, (__int64)a4, a5, a6);
      LODWORD(v8) = v105;
      return (unsigned int)v8;
    case 24:
      LODWORD(v8) = sub_F65CA0(&v420, (__int64)v12, a3, (unsigned __int64)a4, a5, a6);
      return (unsigned int)v8;
    case 25:
      v99 = sub_F63270(*(_QWORD *)(v420 & 0xFFFFFFFFFFFFFFF0LL), a2, a3, (__int64)a4, a5, a6);
      v104 = v99;
      if ( !v99 || *((_BYTE *)v99 + 73) >> 5 == 2 )
        goto LABEL_3;
      sub_7052B0((__int64 *)(v99[13] + 96LL), v99[13], v100, v101, v102, v103);
      LODWORD(v8) = (*(_BYTE *)(v104[16] + 1LL) & 4) != 0;
      return (unsigned int)v8;
    case 26:
      LODWORD(v8) = sub_F67B70(*(_QWORD *)(v420 & 0xFFFFFFFFFFFFFFF0LL), a2, a3, (__int64)a4, a5, a6);
      return (unsigned int)v8;
    case 27:
      LODWORD(v8) = sub_F62A90(&v420, (__int64)v12);
      return (unsigned int)v8;
    case 28:
      LOBYTE(v98) = sub_F62A70(&v420, (__int64)v12);
      LODWORD(v8) = v98;
      return (unsigned int)v8;
    case 29:
      LOBYTE(v97) = sub_F61420(*(_QWORD *)(v420 & 0xFFFFFFFFFFFFFFF0LL), a2, a3, (__int64)a4, a5, a6);
      LODWORD(v8) = v97;
      return (unsigned int)v8;
    case 30:
      LOBYTE(v96) = sub_AAEA30((__int64)v12, v420, 1u, (__int64)a4, a5);
      LODWORD(v8) = v96;
      return (unsigned int)v8;
    case 31:
      v82 = *(_QWORD *)&byte_8[v420 & 0xFFFFFFFFFFFFFFF0LL];
      v83 = v82 | v420;
      v82 &= 0xFFFFFFFFFFFFFFF8LL;
      v84 = v82 | v83 & 7;
      v85 = v82 & 0xFFFFFFFFFFFFFFF0LL;
      if ( sub_F62670(*(_QWORD *)(v82 & 0xFFFFFFFFFFFFFFF0LL), nullptr, v82, (__int64)a4, a5, a6) )
        goto LABEL_3;
      v90 = *(_QWORD *)v85;
      if ( (*(_BYTE *)(*(_QWORD *)v85 + 17LL) & 4) != 0 )
        goto LABEL_3;
      v91 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v90 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
      if ( v91 == 47 )
        goto LABEL_3;
      if ( (unsigned __int8)(v91 - 2) <= 4u )
        goto LABEL_3;
      v92 = sub_F63270(v90, 0, v86, v87, v88, v89);
      if ( v92 )
      {
        if ( !sub_1E877D0(a1, (__int64)v92, v10, a7, a8) )
          goto LABEL_3;
      }
      LOBYTE(v95) = sub_AAEA30(a1[15].m128_i64[1], v84, 0, v93, v94);
      LODWORD(v8) = v95;
      return (unsigned int)v8;
    case 32:
      if ( (unsigned __int8)sub_1E8B590((__int64)a1, a4, 0x113u, a7) )
        goto LABEL_3;
      v54 = sub_A72040(v12, v420);
      if ( v54 && (unsigned int)*(unsigned __int8 *)(v54 + 16) - 2 <= 1 )
      {
LABEL_50:
        sub_A5DAD0((__int64)&v423, v54);
        LOBYTE(v55) = sub_9954A0((__int64)&v423, nullptr);
        LODWORD(v8) = v55 ^ 1;
        if ( (unsigned int)v424 > 0x40 && v423 )
          operator delete[](v423);
        return (unsigned int)v8;
      }
      v81 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v420 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                     + 16LL);
      LOBYTE(v8) = v81 != 5;
      if ( (unsigned __int8)(v81 - 2) <= 4u )
        return (unsigned int)v8;
      goto LABEL_3;
    case 33:
      if ( (unsigned __int8)sub_1E8B590((__int64)a1, a4, 0x114u, a7) )
        goto LABEL_3;
      LOBYTE(v8) = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v420 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                        & 0xFFFFFFFFFFFFFFF0LL)
                            + 16LL) == 5;
      return (unsigned int)v8;
    case 34:
      LODWORD(v8) = sub_F60F40(*(_QWORD *)(v420 & 0xFFFFFFFFFFFFFFF0LL), a2, a3, (__int64)a4, a5, a6);
      return (unsigned int)v8;
    case 35:
      v79 = sub_F63270(*(_QWORD *)(v420 & 0xFFFFFFFFFFFFFFF0LL), a2, a3, (__int64)a4, a5, a6);
      if ( v79
        && !(v420 & 7 | (v420 >> 3) & 1)
        && !(*(_QWORD *)&byte_8[v420 & 0xFFFFFFFFFFFFFFF0LL] & 7LL
           | (*(__int64 *)&byte_8[v420 & 0xFFFFFFFFFFFFFFF0LL] >> 3) & 1) )
      {
        goto LABEL_72;
      }
      LODWORD(v8) = 0;
      sub_168B9F0((__int64)&v423, &a1->m128_i64[1], v10, 0xD25u, 0);
      sub_1605D30((__int64)&v423, &v420);
      sub_15F7200(&v423);
      return (unsigned int)v8;
    case 36:
      LOBYTE(v80) = sub_1E8C160(a1, v420, a7, a8);
      LODWORD(v8) = v80;
      return (unsigned int)v8;
    case 37:
      v422[0] = v420;
      v423 = (void *)sub_A71450((__int64)v12, v420);
      if ( sub_F62670(*(_QWORD *)((unsigned __int64)v423 & 0xFFFFFFFFFFFFFFF0LL), nullptr, v61, v62, v63, v64) )
        goto LABEL_3;
      v67 = *(_QWORD *)((unsigned __int64)v423 & 0xFFFFFFFFFFFFFFF0LL);
      v68 = *(_QWORD *)(*(_QWORD *)(v67 + 8) & 0xFFFFFFFFFFFFFFF0LL);
      v69 = *(unsigned __int8 *)(v68 + 16);
      if ( (unsigned int)(v69 - 43) <= 1
        || (unsigned __int8)(v69 - 25) <= 1u
        || (_BYTE)v69 == 13 && ((*(_WORD *)(v68 + 18) >> 3) & 0x1FF) == 0x1B3 )
      {
        goto LABEL_3;
      }
      v70 = a1[15].m128_i64[1];
      v71 = v422[0];
      v72 = *(_QWORD *)(v70 + 2320);
      if ( (*(_BYTE *)(v72 + 16) & 1) == 0 && *(char *)(v72 + 15) >= 0 )
        goto LABEL_69;
      if ( (unsigned __int8)sub_A976E0(v70, v422[0], v69, v67, v65) )
        goto LABEL_3;
      v67 = *(_QWORD *)((unsigned __int64)v423 & 0xFFFFFFFFFFFFFFF0LL);
LABEL_69:
      v73 = sub_F63270(v67, v422[0], v69, v67, v65, v66);
      v78 = (__int64)v73;
      if ( v73 )
      {
        v71 = v73[13];
        sub_7052B0((__int64 *)(v71 + 96), v71, v74, v75, v76, v77);
        if ( (*(_BYTE *)(*(_QWORD *)(v78 + 128) + 1LL) & 4) == 0 )
        {
          v71 = v78;
          if ( sub_1E8C0F0(a1, v78, v74, v75, v76, v77, a7, a8) )
            goto LABEL_15;
        }
      }
      v79 = sub_F63240(*(_QWORD *)((unsigned __int64)v423 & 0xFFFFFFFFFFFFFFF0LL), v71, v74, v75, v76, v77);
      if ( v79 )
      {
LABEL_72:
        LOBYTE(v8) = (*((_BYTE *)v79 + 76) & 0x30) == 0;
        return (unsigned int)v8;
      }
      v408 = a1[15].m128_i64[1];
      if ( sub_F62A70((__int64 *)&v423, v408) )
        goto LABEL_15;
      v413 = sub_F67900(v422, v408, v409, v410, v411, v412);
      if ( v413 )
        LOBYTE(v8) = v413 == 2;
      else
        LOBYTE(v8) = (unsigned int)sub_F65A30(v422[0], v408, v414, v415) == 0;
      return (unsigned int)v8;
    case 38:
      LODWORD(v8) = sub_F655E0(&v420, (__int64)v12, a3, (__int64)a4, a5, a6);
      return (unsigned int)v8;
    case 39:
      LOBYTE(v60) = sub_1E8BFD0(a1, v420, a7, a8, a3, (__int64)a4, a5);
      LODWORD(v8) = v60;
      return (unsigned int)v8;
    case 40:
    case 64:
      if ( sub_F62670(*(_QWORD *)(v420 & 0xFFFFFFFFFFFFFFF0LL), nullptr, a3, (__int64)a4, a5, a6) )
        goto LABEL_3;
      LOBYTE(v23) = sub_19F6F00(a1[42].m128_i64[1], v420, v19, v20, v21, v22);
      LODWORD(v8) = v23;
      return (unsigned int)v8;
    case 41:
      if ( sub_F610C0(*(_QWORD *)(v420 & 0xFFFFFFFFFFFFFFF0LL), a2, a3, (__int64)a4, a5, a6) )
        goto LABEL_13;
      goto LABEL_3;
    case 42:
      LOBYTE(v59) = sub_F58060(*(_QWORD *)(v420 & 0xFFFFFFFFFFFFFFF0LL));
      LODWORD(v8) = v59;
      return (unsigned int)v8;
    case 43:
      LOBYTE(v58) = sub_F60F80(*(_QWORD *)(v420 & 0xFFFFFFFFFFFFFFF0LL), (__int64)v12, a3, (__int64)a4, a5, a6);
      LODWORD(v8) = v58;
      return (unsigned int)v8;
    case 44:
      LOBYTE(v57) = sub_F62670(*(_QWORD *)(v420 & 0xFFFFFFFFFFFFFFF0LL), nullptr, a3, (__int64)a4, a5, a6);
      LODWORD(v8) = v57 ^ 1;
      return (unsigned int)v8;
    case 45:
      v56 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v420 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v56 + 16) != 13 )
        goto LABEL_3;
      LOBYTE(v8) = ((*(_WORD *)(v56 + 18) >> 3) & 0x1FF) == 435;
      return (unsigned int)v8;
    case 46:
      v54 = sub_A72040(v12, v420);
      if ( v54 && (unsigned int)*(unsigned __int8 *)(v54 + 16) - 2 <= 1 )
        goto LABEL_50;
      LOBYTE(v8) = (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v420 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                          & 0xFFFFFFFFFFFFFFF0LL)
                                              + 16LL)
                                   - 2) <= 4u;
      return (unsigned int)v8;
    case 47:
      LOBYTE(v8) = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v420 & 0xFFFFFFFFFFFFFFF0LL)
                                                                            + 8LL)
                                                                & 0xFFFFFFFFFFFFFFF0LL)
                                                    + 16LL)
                 - 25 <= 1;
      return (unsigned int)v8;
    case 48:
      LOBYTE(v8) = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v420 & 0xFFFFFFFFFFFFFFF0LL)
                                                                            + 8LL)
                                                                & 0xFFFFFFFFFFFFFFF0LL)
                                                    + 16LL)
                 - 43 <= 1;
      return (unsigned int)v8;
    case 49:
      LOBYTE(v8) = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v420 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                        & 0xFFFFFFFFFFFFFFF0LL)
                            + 16LL) == 43;
      return (unsigned int)v8;
    case 50:
      LOBYTE(v8) = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v420 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                        & 0xFFFFFFFFFFFFFFF0LL)
                            + 16LL) == 44;
      return (unsigned int)v8;
    case 51:
      v51 = *(_QWORD *)(v420 & 0xFFFFFFFFFFFFFFF0LL);
      v52 = *(_QWORD *)(*(_QWORD *)(v51 + 8) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v52 + 16) == 13 )
      {
        v53 = (*(_WORD *)(v52 + 18) >> 3) & 0x1FF;
        if ( v53 == 435 || v53 == 488 )
          goto LABEL_15;
      }
      if ( !sub_F610C0(*(_QWORD *)(v420 & 0xFFFFFFFFFFFFFFF0LL), a2, a3, (__int64)a4, a5, a6) )
        goto LABEL_3;
      LOBYTE(v8) = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v51 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 47;
      return (unsigned int)v8;
    case 52:
      LOBYTE(v50) = sub_19A1E30(*(_QWORD *)(v420 & 0xFFFFFFFFFFFFFFF0LL));
      LODWORD(v8) = v50;
      return (unsigned int)v8;
    case 53:
      LOBYTE(v43) = sub_F6ACC0(*(_QWORD *)(v420 & 0xFFFFFFFFFFFFFFF0LL), a2, a3, (__int64)a4, a5);
      LODWORD(v8) = v43;
      if ( !(_BYTE)v43 )
        goto LABEL_37;
      v47 = *(_QWORD *)&byte_8[v420 & 0xFFFFFFFFFFFFFFF0LL];
      if ( (v47 & 8) == 0 )
        goto LABEL_15;
      v44 = v47 & 0xFFFFFFFFFFFFFFF0LL;
      v48 = ((*(__int64 *)((char *)&qword_18 + (*(_QWORD *)&byte_8[v420 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL))
            | *(_QWORD *)&byte_8[v420 & 0xFFFFFFFFFFFFFFF0LL] & 7uLL) >> 6)
          & 7;
      if ( (unsigned int)v48 <= 1 )
        return (unsigned int)v8;
      if ( (unsigned int)v48 <= 4 )
        goto LABEL_3;
LABEL_37:
      LOBYTE(v49) = sub_F61140(*(_QWORD *)(v420 & 0xFFFFFFFFFFFFFFF0LL), a2, v420 & 0xFFFFFFFFFFFFFFF0LL, v44, v45, v46);
      LODWORD(v8) = v49;
      return (unsigned int)v8;
    case 54:
      v39 = *(_QWORD *)(v420 & 0xFFFFFFFFFFFFFFF0LL);
      v40 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v39 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
      if ( (unsigned __int8)v40 <= 0x30u )
      {
        a3 = 0x11C000600007CLL;
        if ( _bittest64(&a3, v40) )
          goto LABEL_15;
      }
      if ( sub_F61420(*(_QWORD *)(v420 & 0xFFFFFFFFFFFFFFF0LL), a2, a3, (__int64)a4, a5, a6) )
        goto LABEL_15;
      v42 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v39 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
      LOBYTE(v41) = v42 == 47;
      LODWORD(v8) = (v42 == 33) | v41;
      return (unsigned int)v8;
    case 55:
      LOBYTE(v8) = (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v420 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                         & 0xFFFFFFFFFFFFFFF0LL)
                             + 16LL)
                  & 0xF7) == 34;
      return (unsigned int)v8;
    case 56:
      v33 = *(_QWORD *)(v420 & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v33 + 16) != 33 )
      {
        v382 = *(_QWORD *)(*(_QWORD *)(v33 + 8) & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v382 + 16) != 33 )
          goto LABEL_3;
        v33 = sub_F63050(*(_QWORD *)(v420 & 0xFFFFFFFFFFFFFFF0LL), a2, v382, a4);
        if ( !v33 )
          goto LABEL_3;
      }
      LODWORD(v8) = 0;
      v34 = *(_QWORD *)(v33 + 32) & 0xFFFFFFFFFFFFFFF0LL;
      v35 = *(_QWORD *)v34;
      if ( *(_BYTE *)(*(_QWORD *)v34 + 16LL) != 26 )
      {
        LODWORD(v8) = 1;
        if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v35 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26 )
          LOBYTE(v8) = sub_F63050(v35, a2, a3, a4) == 0;
      }
      return (unsigned int)v8;
    case 57:
      v36 = *(_QWORD *)(v420 & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v36 + 16) != 33 )
      {
        v381 = *(_QWORD *)(*(_QWORD *)(v36 + 8) & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v381 + 16) != 33 )
          goto LABEL_3;
        v36 = sub_F63050(*(_QWORD *)(v420 & 0xFFFFFFFFFFFFFFF0LL), a2, v381, a4);
        if ( !v36 )
          goto LABEL_3;
      }
      LODWORD(v8) = 1;
      v37 = *(_QWORD *)(v36 + 32) & 0xFFFFFFFFFFFFFFF0LL;
      v38 = *(_QWORD *)v37;
      if ( *(_BYTE *)(*(_QWORD *)v37 + 16LL) != 26 )
      {
        LODWORD(v8) = 0;
        if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v38 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26 )
          LOBYTE(v8) = sub_F63050(v38, a2, a3, a4) != 0;
      }
      return (unsigned int)v8;
    case 58:
      LOBYTE(v8) = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v420 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                        & 0xFFFFFFFFFFFFFFF0LL)
                            + 16LL) == 33;
      return (unsigned int)v8;
    case 59:
      if ( (v420 & 1) != 0 )
        goto LABEL_15;
      LODWORD(v8) = *(_QWORD *)&byte_8[v420 & 0xFFFFFFFFFFFFFFF0LL] & 1;
      return (unsigned int)v8;
    case 60:
      if ( (v420 & 4) != 0 )
        goto LABEL_15;
      return (*(_QWORD *)&byte_8[v420 & 0xFFFFFFFFFFFFFFF0LL] >> 2) & 1LL;
    case 61:
      if ( sub_F58060(*(_QWORD *)(v420 & 0xFFFFFFFFFFFFFFF0LL)) )
        goto LABEL_15;
      if ( !sub_F65140(*(_QWORD *)(v420 & 0xFFFFFFFFFFFFFFF0LL), a2, v29, v30, v31, v32) )
        goto LABEL_3;
LABEL_13:
      LOBYTE(v8) = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v420 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                        & 0xFFFFFFFFFFFFFFF0LL)
                            + 16LL) != 47;
      return (unsigned int)v8;
    case 62:
      if ( sub_F65360(*(_QWORD *)(v420 & 0xFFFFFFFFFFFFFFF0LL), a2, a3, (__int64)a4, a5, a6) )
        goto LABEL_13;
      goto LABEL_3;
    case 63:
      v24 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v420 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
      v25 = *(_BYTE *)(v24 + 16);
      if ( v25 == 13 )
      {
        if ( ((*(_WORD *)(v24 + 18) >> 3) & 0x1FF) == 0x1B3 )
          goto LABEL_10;
      }
      else if ( v25 == 5 )
      {
        goto LABEL_10;
      }
      v423 = (void *)*a4;
      v424 = a4 + 1;
      v26 = sub_F6CCB0((__int64 *)&v423, a7);
      if ( (unsigned __int8)sub_1E63CF0((__int64)a1, v26, v420, (__int64 *)((char *)&dword_0 + 1), 3968, v27) )
        goto LABEL_3;
LABEL_10:
      if ( (unsigned __int8)sub_1E8B590((__int64)a1, a4, 0x16Cu, a7) )
        goto LABEL_3;
      LOBYTE(v28) = sub_F64A40(*(_QWORD *)(v420 & 0xFFFFFFFFFFFFFFF0LL), (__int64)a4);
      LODWORD(v8) = v28;
      return (unsigned int)v8;
  }
}
