void __fastcall sub_E24970(
        __int64 a1,
        unsigned __int16 *a2,
        unsigned __int16 *a3,
        __int64 a4,
        unsigned __int64 a5,
        __int64 a6)
{
  unsigned __int16 *v6; // r15
  unsigned int v7; // r14d
  __int64 v8; // r13
  __int64 v10; // rax
  __m128 v11; // xmm0
  __int64 v12; // rdi
  _BYTE *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r12
  void **v16; // rdi
  __int64 v17; // rax
  void *v18; // rcx
  __int64 v19; // r15
  unsigned __int64 v20; // rsi
  unsigned __int64 v21; // rdx
  __int64 v22; // rax
  void *v23; // r14
  __int64 v24; // rdx
  __int64 v25; // rdi
  _BYTE *v26; // rax
  __int64 v27; // rax
  void *v28; // rcx
  __int64 v29; // rsi
  unsigned __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rdi
  _BYTE *v33; // rax
  __int64 v34; // rdi
  _BYTE *v35; // rax
  __int64 v36; // rax
  unsigned __int64 v37; // r12
  int v38; // ecx
  int v39; // r8d
  int v40; // r9d
  const char *v41; // rax
  size_t v42; // rdx
  const char *v43; // rbp
  unsigned __int64 v44; // r8
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 **v48; // rbp
  __int64 **v49; // r12
  __int64 *v50; // rax
  _BYTE *v51; // rax
  __int64 v52; // rcx
  unsigned __int64 v53; // r8
  void *v54; // rdi
  unsigned int v55; // eax
  __int64 v56; // rbp
  unsigned int v57; // r12d
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  unsigned int v61; // eax
  __int64 v62; // rax
  void *v63; // rax
  unsigned __int64 v64; // rax
  unsigned __int16 *v65; // rdx
  __int64 v66; // r8
  unsigned __int16 *v67; // r13
  __int64 v68; // rbp
  __int64 v69; // r12
  __int64 v70; // rsi
  unsigned __int64 v71; // rax
  __int64 v72; // rdi
  char v73; // al
  _BYTE *v74; // rdx
  _BYTE *v75; // rax
  __int64 v76; // rbp
  unsigned int v77; // eax
  unsigned __int64 v78; // rax
  __int64 v79; // r8
  unsigned __int64 v80; // rax
  __int64 v81; // rdx
  __int64 v82; // rdx
  unsigned __int16 *v83; // rcx
  unsigned __int64 v84; // rax
  unsigned int v85; // r13d
  unsigned __int64 v86; // rax
  unsigned __int16 *v87; // r12
  __int64 v88; // rbp
  __int64 v89; // rsi
  __int64 v90; // rbx
  unsigned int v91; // r12d
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // r8
  unsigned int v95; // eax
  __int64 v96; // rax
  __int64 v97; // rax
  _QWORD *v98; // r12
  void *v99; // r13
  __int64 v100; // rcx
  unsigned __int64 v101; // rax
  unsigned __int64 v102; // rdx
  __int64 v103; // rax
  __int64 v104; // rdi
  unsigned __int64 v105; // rsi
  __int64 v106; // rcx
  __int64 v107; // r8
  int v108; // r12d
  __int64 v109; // rdi
  _BYTE *v110; // rax
  __int64 v111; // rdi
  _BYTE *v112; // rax
  __int64 v113; // rdx
  unsigned __int16 *v114; // rbp
  unsigned __int16 *v115; // r13
  __int64 v116; // r14
  _BYTE *v117; // rax
  __int64 v118; // rdx
  __int64 v119; // rcx
  unsigned __int64 v120; // r8
  __int64 v121; // rdx
  __int64 v122; // rcx
  unsigned __int64 v123; // r8
  __int64 v124; // rdx
  __int64 v125; // rcx
  __int64 v126; // r8
  _QWORD *v127; // rsi
  __int64 v128; // rbp
  int v129; // ebp
  __int64 v130; // rsi
  unsigned __int64 v131; // r13
  __int64 v132; // rbp
  __int64 v133; // rax
  __int64 v134; // rdx
  __int64 v135; // rax
  __int64 v136; // rsi
  _WORD **v137; // rax
  _WORD **j; // rsi
  __int64 v139; // rbp
  __int64 v140; // r12
  __int64 *v141; // rbp
  __int64 *v142; // r12
  __int64 v143; // rsi
  _BYTE *v144; // rax
  size_t v145; // rax
  size_t v146; // rax
  size_t v147; // rax
  unsigned __int64 v148; // rbp
  unsigned __int16 v149; // ax
  unsigned __int64 *v150; // rdx
  unsigned __int64 *v151; // rbp
  bool v152; // zf
  unsigned __int64 *v153; // rax
  size_t v154; // rax
  _DWORD *v155; // rbp
  _DWORD *i; // r12
  __int64 v157; // rdi
  __int64 v158; // rax
  __int64 v159; // rax
  __m128i si128; // xmm1
  _QWORD *v161; // rax
  void **v162; // rdi
  __int64 v163; // rax
  void *v164; // rcx
  __int64 v165; // r12
  unsigned __int64 v166; // rsi
  unsigned __int64 v167; // rdx
  __int64 v168; // rcx
  unsigned __int64 v169; // r8
  __int64 v170; // r8
  __int64 v171; // rcx
  unsigned __int16 *v172; // rbp
  int v173; // edx
  int v174; // ecx
  int v175; // r8d
  int v176; // r9d
  __int64 v177; // r12
  __int64 v178; // rdi
  _BYTE *v179; // rax
  __int64 v180; // rdx
  _BYTE *v181; // rax
  __int64 v182; // rdi
  char v183; // dl
  _BYTE *v184; // rax
  _BYTE *v185; // rax
  int v186; // ebp
  __int64 v187; // rdi
  char v188; // r12
  __int64 v189; // rdx
  __int64 v190; // rcx
  unsigned __int64 v191; // r8
  __int16 v192; // ax
  unsigned __int64 v193; // rdi
  unsigned __int64 v194; // rax
  _BYTE *v195; // rax
  __int64 v196; // rcx
  unsigned __int64 v197; // r8
  __int64 v198; // rbp
  __int64 v199; // rax
  __int64 v200; // rdx
  __int64 v201; // rcx
  __int64 v202; // r8
  __int64 v203; // r9
  unsigned __int64 v204; // rax
  __int64 v205; // rdx
  __int64 v206; // rcx
  unsigned __int64 v207; // r8
  __int64 v208; // r10
  unsigned __int16 *v209; // r10
  __int64 v210; // r8
  __int64 v211; // r12
  unsigned __int64 v212; // rdi
  __int64 v213; // rbp
  __int64 v214; // r13
  char v215; // al
  __int64 v216; // rsi
  _DWORD *v217; // rax
  __int64 v218; // rdi
  const char *v219; // rsi
  int v220; // edi
  __int64 v221; // rsi
  __int64 v222; // rsi
  __int64 v223; // rax
  __int64 v224; // rdi
  const char *v225; // rsi
  __int64 v226; // rcx
  unsigned __int64 v227; // r8
  __int64 v228; // rax
  const char **v229; // rbp
  __int64 v230; // r12
  __int64 v231; // rdi
  _BYTE *v232; // rax
  __int64 v233; // rdx
  __int64 v234; // rax
  __int64 v235; // rdi
  __int64 v236; // rsi
  unsigned __int16 v237; // ax
  __int64 *v238; // rbp
  __int64 *v239; // r12
  __int64 v240; // rsi
  _BYTE *v241; // rax
  __int64 v242; // rdi
  _BYTE *v243; // rax
  __int64 v244; // rdx
  _BYTE *v245; // rax
  _BYTE *v246; // rax
  size_t v247; // rax
  const char *v248; // rax
  size_t v249; // rdx
  size_t v250; // rbp
  const char *v251; // r12
  __int64 v252; // rax
  __int64 v253; // rax
  size_t v254; // rax
  size_t v255; // rax
  __int64 v256; // rdi
  __int64 v257; // rdi
  unsigned int v258; // eax
  __int64 v259; // rsi
  _QWORD *v260; // rbp
  __int64 v261; // rsi
  size_t v262; // rax
  __int64 v263; // rdi
  _BYTE *v264; // rax
  __int64 v265; // rbp
  size_t v266; // rax
  __int64 v267; // rdx
  __int64 v268; // rcx
  unsigned __int64 v269; // r8
  __int64 v270; // rax
  const char *v271; // rsi
  __int64 v272; // rdi
  __int64 v273; // rax
  __int64 v274; // rbp
  char v275; // al
  int v276; // r12d
  int v277; // eax
  unsigned int v278; // eax
  int v279; // r12d
  __int64 v280; // rdx
  __int64 v281; // rcx
  unsigned __int64 v282; // r8
  __int64 v283; // rdi
  _BYTE *v284; // rax
  int v285; // ebp
  __int64 v286; // rsi
  _BYTE *v287; // rax
  __int64 v288; // rdx
  unsigned int v289; // eax
  __int64 *v290; // rbp
  __int64 *v291; // r13
  __int64 v292; // rsi
  __int64 v293; // rdx
  __int64 v294; // rcx
  unsigned __int64 v295; // r8
  __int64 v296; // rdi
  _BYTE *v297; // rax
  __int64 v298; // rsi
  __int64 v299; // rdx
  __int64 v300; // rcx
  __int64 v301; // r8
  unsigned __int16 *v302; // rbp
  unsigned __int16 *v303; // r12
  __int64 v304; // r13
  _BYTE *v305; // rax
  __int64 v306; // rdx
  unsigned __int16 *v307; // rdx
  __int64 v308; // rdx
  unsigned __int16 *v309; // rdx
  __int64 v310; // rsi
  size_t v311; // rax
  __int64 v312; // rdx
  __int64 v313; // rcx
  __int64 v314; // r8
  unsigned __int64 v315; // rax
  __int64 v316; // rdx
  __int64 v317; // rcx
  unsigned __int64 v318; // r8
  __int64 v319; // rdi
  _BYTE *v320; // rax
  __int64 v321; // rbp
  unsigned int v322; // r12d
  __int64 v323; // rdx
  __int64 v324; // rcx
  __int64 v325; // r8
  unsigned int v326; // eax
  __int64 v327; // rax
  __int64 v328; // rdi
  _BYTE *v329; // rax
  const char *v330; // rsi
  unsigned __int64 v331; // rbp
  __int64 v332; // rdx
  __int64 v333; // rcx
  unsigned __int64 v334; // r8
  _BYTE *v335; // rax
  __int64 v336; // rdx
  __int64 v337; // rcx
  __int64 v338; // r8
  __int64 v339; // rsi
  _BYTE *v340; // rax
  unsigned __int16 *v341; // rbp
  __int64 v342; // r13
  __int64 v343; // rdx
  __int64 v344; // rcx
  unsigned __int64 v345; // r8
  unsigned __int64 v346; // rbp
  __int64 v347; // rdx
  __int64 v348; // rcx
  unsigned __int64 v349; // r8
  __int64 v350; // rbp
  char v351; // al
  int v352; // eax
  __int64 *v353; // rbp
  __int64 v354; // r13
  __int64 v355; // rsi
  size_t v356; // rax
  __int64 v357; // rdx
  _QWORD *v358; // rdx
  int v359; // eax
  __int64 v360; // rax
  unsigned __int64 v361; // rax
  __int64 v362; // rdx
  __int64 v363; // rcx
  unsigned __int64 v364; // r8
  __int64 v365; // rax
  __int64 v366; // rdx
  __int64 v367; // rcx
  __int64 v368; // rax
  __int64 v369; // rbx
  __int64 v370; // r14
  __int64 v371; // rbx
  void *v372; // rdi
  __int64 v373; // rdx
  unsigned __int64 v374; // rax
  __int64 *v375; // rbp
  __int64 *v376; // r13
  __int64 v377; // rsi
  __int128 v378; // [rsp-20h] [rbp-118h]
  __int64 v379; // [rsp-10h] [rbp-108h]
  char *v380; // [rsp+0h] [rbp-F8h] BYREF
  __int64 v381; // [rsp+8h] [rbp-F0h]
  char v382; // [rsp+10h] [rbp-E8h]
  char v383; // [rsp+17h] [rbp-E1h] BYREF
  unsigned __int16 *v384; // [rsp+18h] [rbp-E0h] BYREF
  __int64 v385; // [rsp+20h] [rbp-D8h] BYREF
  __m128 *v386; // [rsp+28h] [rbp-D0h] BYREF
  __m128 v387; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v388; // [rsp+40h] [rbp-B8h]
  void *v389[2]; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v390; // [rsp+60h] [rbp-98h]
  void *v391[2]; // [rsp+70h] [rbp-88h] BYREF
  __int64 v392; // [rsp+80h] [rbp-78h]

  v6 = a2;
  v7 = (unsigned int)a3;
  v8 = 0;
  BYTE4(v381) = a4;
  v380 = &v383;
  v10 = *a2;
  v383 = 1;
  v388 = a1;
  LOWORD(v10) = v10 & 0x1FF;
  v385 = a1;
  v11 = _mm_loadh_ps((const double *)&v380);
  v386 = &v387;
  v387 = v11;
  while ( 2 )
  {
    LOWORD(v10) = (v10 + 509) & 0x1FF;
    switch ( v10 )
    {
      case 0LL:
      case 7LL:
      case 8LL:
      case 10LL:
      case 14LL:
      case 15LL:
      case 24LL:
      case 25LL:
      case 26LL:
      case 27LL:
      case 28LL:
      case 29LL:
      case 30LL:
      case 31LL:
      case 32LL:
      case 33LL:
      case 34LL:
      case 35LL:
      case 36LL:
      case 38LL:
      case 39LL:
      case 54LL:
      case 61LL:
      case 62LL:
      case 63LL:
      case 71LL:
      case 73LL:
      case 74LL:
      case 85LL:
      case 90LL:
      case 114LL:
      case 117LL:
      case 118LL:
      case 119LL:
        sub_E14540((__int64)&v387);
        if ( *(_BYTE *)(a1 + 17) )
          goto LABEL_29;
        v56 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
        v57 = sub_E161F0(*(_QWORD *)(v56 + 32), 4, "cannot yet mangle expression type %0", 36);
        v61 = sub_BDCD00((unsigned __int64)v6, 4, v58, v59, v60);
        sub_FA3370(v391, v56, v61, v57);
        v62 = sub_EC59F0(v6);
        sub_AC60B0((unsigned __int8 **)v391, v62, 1u);
        v63 = (void *)sub_EC8B80(v6);
        LOBYTE(v389[1]) = 1;
        v389[0] = v63;
        sub_AC88D0((__int64 *)v391, (__int64 *)v389);
        sub_AC6300((__int64)v391);
        return;
      case 1LL:
        sub_E14540((__int64)&v387);
        v55 = sub_BD5A60(*((_BYTE *)v6 + 2) >> 3);
        sub_E16500((__int64 *)(a1 + 8), v55, 1);
        sub_E24970(a1, *((_QWORD *)v6 + 2), 0xFFFFFFFFLL, 0);
        goto LABEL_29;
      case 2LL:
        v384 = v6;
        if ( (*(_DWORD *)v6 & 0x8000) != 0 )
        {
          sub_E14540((__int64)&v387);
          v389[1] = (void *)a1;
          v389[0] = &v384;
          switch ( (*((_BYTE *)v384 + 2) >> 3) & 0xF )
          {
            case 0:
              v328 = *(_QWORD *)(a1 + 8);
              v329 = *(_BYTE **)(v328 + 32);
              if ( (unsigned __int64)v329 >= *(_QWORD *)(v328 + 24) )
              {
                sub_2257CD0(v328, 115);
              }
              else
              {
                *(_QWORD *)(v328 + 32) = v329 + 1;
                *v329 = 115;
              }
              goto LABEL_346;
            case 1:
            case 2:
            case 5:
            case 6:
            case 7:
            case 8:
              v321 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
              v322 = sub_E161F0(*(_QWORD *)(v321 + 32), 4, "cannot yet mangle %0 expression", 31);
              v326 = sub_BDCD00((unsigned __int64)v6, 4, v323, v324, v325);
              sub_FA3370(v391, v321, v326, v322);
              v327 = sub_10A9100((*((_BYTE *)v384 + 2) >> 3) & 0xF, v321);
              sub_AC60B0((unsigned __int8 **)v391, v327, 1u);
              sub_AC6300((__int64)v391);
              return;
            case 3:
              goto LABEL_344;
            case 4:
              if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 8LL) + 2320LL) + 212LL) <= 0x5Fu )
              {
LABEL_344:
                v319 = *(_QWORD *)(a1 + 8);
                v320 = *(_BYTE **)(v319 + 32);
                if ( (unsigned __int64)v320 >= *(_QWORD *)(v319 + 24) )
                {
                  sub_2257CD0(v319, 97);
                }
                else
                {
                  *(_QWORD *)(v319 + 32) = v320 + 1;
                  *v320 = 97;
                }
LABEL_346:
                sub_E28ED0(v389, &v389[1]);
                goto LABEL_29;
              }
              v330 = "__alignof__";
              v331 = j__strlen("__alignof__");
              if ( !v331 )
              {
                v330 = (const char *)sub_10A9100(4, "__alignof__");
                if ( v330 )
                  v331 = strlen(v330);
              }
              sub_E157C0(*(_QWORD *)(a1 + 8), v330, v331);
              if ( *((char *)v384 + 2) < 0 )
                sub_E1BE40(a1, **((_QWORD **)v384 + 2), v332, v333, v334);
              else
                sub_E2E9D0(a1, *((_QWORD *)v384 + 2));
              v32 = *(_QWORD *)(a1 + 8);
              v335 = *(_BYTE **)(v32 + 32);
              if ( (unsigned __int64)v335 < *(_QWORD *)(v32 + 24) )
              {
                *(_QWORD *)(v32 + 32) = v335 + 1;
                *v335 = 69;
                goto LABEL_29;
              }
              break;
            default:
              goto LABEL_29;
          }
          goto LABEL_342;
        }
        if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          goto LABEL_50;
        v350 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
        v351 = *(_BYTE *)(v350 + 16);
        switch ( v351 )
        {
          case 13:
            if ( (((*(_WORD *)(v350 + 18) >> 3) + 76) & 0x1FFu) <= 0x13 )
              break;
LABEL_50:
            v8 = *((_QWORD *)v6 + 1);
            goto LABEL_51;
          case 47:
            v365 = sub_F3D1D0(
                     *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL),
                     a2,
                     a3,
                     a4,
                     a5);
            if ( (*(_BYTE *)(v365 + 74) & 1) == 0 && (*(_QWORD *)(v365 + 128) & 0xFFFFFFFFFFFFFFF8LL) == 0
              || *(char *)(sub_F3D1D0(v350, a2, v366, v367, a5) + 76) < 0 )
            {
              v6 = v384;
              goto LABEL_50;
            }
            break;
          case 10:
            break;
          default:
            goto LABEL_50;
        }
        v6 = v384;
LABEL_51:
        sub_C19F20((__int64)v391, (unsigned __int64)v6, *(_QWORD *)(*(_QWORD *)a1 + 8LL), 0, a5, a6);
        sub_E234C0(a1, v8, (__int64)v391, v52, v53);
        if ( LODWORD(v391[1]) > 0x40 )
        {
          v54 = v391[0];
          if ( v391[0] )
LABEL_196:
            operator delete[](v54);
        }
        goto LABEL_29;
      case 3LL:
        sub_E14540((__int64)&v387);
        v41 = (const char *)sub_10A90D0((unsigned __int8)(v6[1] >> 3));
        v42 = 0;
        v43 = v41;
        if ( v41 )
          v42 = j__strlen(v41);
        sub_E157C0(*(_QWORD *)(a1 + 8), v43, v42);
        v45 = *((unsigned int *)v6 + 1);
        v46 = (((unsigned __int8)BYTE3(*(_QWORD *)v6) >> 3) ^ 1) & 1;
        v47 = 7 * v46;
        v48 = (__int64 **)&v6[28 * v46 + 12];
        v49 = &v48[v45];
        while ( v49 != v48 )
        {
          v50 = *v48++;
          sub_E1BE40(a1, *v50, v47, v45, v44);
        }
        v32 = *(_QWORD *)(a1 + 8);
        v51 = *(_BYTE **)(v32 + 32);
        if ( (unsigned __int64)v51 >= *(_QWORD *)(v32 + 24) )
          goto LABEL_342;
        *(_QWORD *)(v32 + 32) = v51 + 1;
        *v51 = 69;
        goto LABEL_29;
      case 4LL:
        sub_E14540((__int64)&v387);
        sub_971800(*(_QWORD *)(a1 + 8), "_SUBSTPACK_");
        goto LABEL_29;
      case 5LL:
        a3 = *((unsigned __int16 **)v6 + 2);
        v10 = *a3;
        LOWORD(v10) = v10 & 0x1FF;
        if ( (_WORD)v10 == 61 )
        {
          v36 = *(_QWORD *)a1;
          v380 = *((char **)v6 + 2);
          v37 = sub_C71C80((__int64)v6, *(_QWORD *)(v36 + 8));
          sub_BD3DC0((__int64)v391, (__int64)v380, (__int64)v380, v38, v39, v40, (int)v380, v381, v382);
          sub_E2FEE0(a1, v37, v391, 0, 1);
          if ( LODWORD(v391[0]) > 1 )
            sub_A2BBA0((int *)v391);
          goto LABEL_29;
        }
        v6 = *((unsigned __int16 **)v6 + 2);
        continue;
      case 6LL:
        v178 = *(_QWORD *)(a1 + 8);
        v179 = *(_BYTE **)(v178 + 32);
        if ( (unsigned __int64)v179 >= *(_QWORD *)(v178 + 24) )
        {
          sub_2257CD0(v178, 76);
        }
        else
        {
          v180 = (__int64)(v179 + 1);
          *(_QWORD *)(v178 + 32) = v179 + 1;
          *v179 = 76;
        }
        sub_E1BE40(a1, *((_QWORD *)v6 + 1), v180, a4, a5);
        v32 = *(_QWORD *)(a1 + 8);
        v181 = *(_BYTE **)(v32 + 32);
        if ( (unsigned __int64)v181 >= *(_QWORD *)(v32 + 24) )
          goto LABEL_342;
        *(_QWORD *)(v32 + 32) = v181 + 1;
        *v181 = 69;
        goto LABEL_29;
      case 9LL:
        sub_E14540((__int64)&v387);
        if ( (*(_DWORD *)v6 & 0x20000) == 0 || !*((_DWORD *)v6 + 7) )
        {
          sub_971800(*(_QWORD *)(a1 + 8), "sZ");
          v274 = *((_QWORD *)v6 + 4);
          v275 = *(_BYTE *)(v274 + 28) & 0x7F;
          switch ( v275 )
          {
            case 'C':
              v276 = sub_B9A870(*((_QWORD *)v6 + 4));
              v277 = sub_B9A850(v274);
              sub_E146C0((__int64 *)(a1 + 8), (_DWORD *)(a1 + 36), v277, v276);
              break;
            case '/':
              sub_E146C0(
                (__int64 *)(a1 + 8),
                (_DWORD *)(a1 + 36),
                *(_DWORD *)(v274 + 68) & 0xFFFFF,
                *(_WORD *)(v274 + 70) >> 4);
              break;
            case 'D':
              sub_E146C0(
                (__int64 *)(a1 + 8),
                (_DWORD *)(a1 + 36),
                *(_DWORD *)(v274 + 64) & 0xFFFFF,
                *(_WORD *)(v274 + 66) >> 4);
              break;
            default:
              sub_E27E20(a1, *((_QWORD *)v6 + 4));
              break;
          }
          goto LABEL_29;
        }
        v172 = v6 + 20;
        sub_971800(*(_QWORD *)(a1 + 8), "sP");
        v177 = (__int64)&v6[12 * *((unsigned int *)v6 + 7) + 20];
        if ( (unsigned __int16 *)v177 != v6 + 20 )
        {
          do
          {
            v379 = *((_QWORD *)v172 + 2);
            *((_QWORD *)&v378 + 1) = *((_QWORD *)v172 + 1);
            v172 += 12;
            *(_QWORD *)&v378 = *((_QWORD *)v172 - 3);
            sub_E2B990(a1, 0, v173, v174, v175, v176, v378, v379);
          }
          while ( (unsigned __int16 *)v177 != v172 );
        }
        goto LABEL_175;
      case 11LL:
        sub_E14540((__int64)&v387);
        sub_971800(*(_QWORD *)(a1 + 8), "u33__builtin_sycl_unique_stable_name");
        sub_E1BE40(a1, **((_QWORD **)v6 + 4), v118, v119, v120);
        sub_971800(*(_QWORD *)(a1 + 8), "E");
        goto LABEL_29;
      case 12LL:
        sub_E14540((__int64)&v387);
        v104 = *(_QWORD *)(a1 + 8);
        if ( *((_DWORD *)v6 + 8) )
        {
          v105 = (unsigned __int64)"rQ";
          sub_971800(v104, "rQ");
          v108 = *(_DWORD *)(a1 + 44);
          *(_DWORD *)(a1 + 44) = (v108 & 0xFFFFFFFE) + 2;
          if ( *((_DWORD *)v6 + 4) )
          {
            v341 = v6 + 24;
            v342 = (__int64)&v6[4 * *((unsigned int *)v6 + 4) + 24];
            do
            {
              v341 += 4;
              v105 = sub_A52120(*(_QWORD **)(*(_QWORD *)a1 + 8LL), *(_QWORD *)(*((_QWORD *)v341 - 1) + 48LL));
              sub_E1BE40(a1, v105, v343, v344, v345);
            }
            while ( (unsigned __int16 *)v342 != v341 );
          }
          else
          {
            v109 = *(_QWORD *)(a1 + 8);
            v110 = *(_BYTE **)(v109 + 32);
            if ( (unsigned __int64)v110 >= *(_QWORD *)(v109 + 24) )
            {
              v105 = 118;
              sub_2257CD0(v109, 118);
            }
            else
            {
              *(_QWORD *)(v109 + 32) = v110 + 1;
              *v110 = 118;
            }
          }
          v111 = *(_QWORD *)(a1 + 8);
          v112 = *(_BYTE **)(v111 + 32);
          if ( (unsigned __int64)v112 >= *(_QWORD *)(v111 + 24) )
          {
            v105 = 95;
            sub_2257CD0(v111, 95);
          }
          else
          {
            v113 = (__int64)(v112 + 1);
            *(_QWORD *)(v111 + 32) = v112 + 1;
            *v112 = 95;
          }
          *(_DWORD *)(a1 + 44) |= 1u;
          v114 = &v6[4 * *((unsigned int *)v6 + 4) + 24];
          v115 = &v114[4 * *((unsigned int *)v6 + 5)];
          while ( v115 != v114 )
          {
            v116 = *(_QWORD *)v114;
            v114 += 4;
            v105 = (unsigned int)sub_BDCD00((unsigned __int64)v6, v105, v113, v106, v107);
            sub_E33B10(a1, v105, v116);
          }
          v32 = *(_QWORD *)(a1 + 8);
          *(_DWORD *)(a1 + 44) = v108;
          v117 = *(_BYTE **)(v32 + 32);
          if ( (unsigned __int64)v117 < *(_QWORD *)(v32 + 24) )
          {
            *(_QWORD *)(v32 + 32) = v117 + 1;
            *v117 = 69;
            goto LABEL_29;
          }
        }
        else
        {
          v298 = (__int64)"rq";
          sub_971800(v104, "rq");
          v302 = &v6[4 * *((unsigned int *)v6 + 4) + 24];
          v303 = &v302[4 * *((unsigned int *)v6 + 5)];
          while ( v303 != v302 )
          {
            v304 = *(_QWORD *)v302;
            v302 += 4;
            v298 = (unsigned int)sub_BDCD00((unsigned __int64)v6, v298, v299, v300, v301);
            sub_E33B10(a1, v298, v304);
          }
          v32 = *(_QWORD *)(a1 + 8);
          v305 = *(_BYTE **)(v32 + 32);
          if ( (unsigned __int64)v305 < *(_QWORD *)(v32 + 24) )
          {
            *(_QWORD *)(v32 + 32) = v305 + 1;
            *v305 = 69;
            goto LABEL_29;
          }
        }
        goto LABEL_342;
      case 17LL:
      case 113LL:
        v6 = *((unsigned __int16 **)v6 + 3);
        v10 = *v6;
        LOWORD(v10) = v10 & 0x1FF;
        continue;
      case 19LL:
        sub_E14540((__int64)&v387);
        sub_971800(*(_QWORD *)(a1 + 8), "sp");
        sub_E24970(a1, *((_QWORD *)v6 + 3), 0xFFFFFFFFLL, 0);
        goto LABEL_29;
      case 20LL:
        sub_E14540((__int64)&v387);
        v84 = *(_QWORD *)v6;
        if ( (*(_QWORD *)v6 & 0x80000) != 0
          && ((v306 = *((unsigned int *)v6 + 1), (*v6 & 0x1FF) != 0x18)
            ? (v307 = &v6[4 * v306 + 40])
            : (v307 = &v6[4 * v306 + 32]),
              *(_DWORD *)v307) )
        {
          if ( (v84 & 0x80000) == 0 )
            BUG();
          v85 = *((_DWORD *)v307 + 3);
        }
        else
        {
          v85 = 0;
        }
        v86 = v84 >> 16;
        if ( (v86 & 8) == 0 )
          goto LABEL_83;
        v288 = *((unsigned int *)v6 + 1);
        if ( (*v6 & 0x1FF) == 0x18 )
        {
          if ( *(_DWORD *)&v6[4 * v288 + 32] )
          {
            v87 = &v6[8 * ((v86 & 8) != 0) + 32 + 4 * v288];
            goto LABEL_84;
          }
        }
        else if ( *(_DWORD *)&v6[4 * v288 + 40] )
        {
          v87 = &v6[8 * ((v86 & 8) != 0) + 40 + 4 * v288];
LABEL_84:
          v88 = *((_QWORD *)v6 + 5);
          v380 = *((char **)v6 + 2);
          LODWORD(v381) = HIWORD(*(_DWORD *)v6);
          if ( !(unsigned __int8)sub_C71B10((__int64)v6) )
          {
            v89 = *((_QWORD *)v6 + 7);
            if ( v89 )
              sub_E27FE0(a1, v89, (v381 & 0x10) != 0);
          }
          sub_E33D40(a1, v88, v380, v87, v85, v7, v380);
          goto LABEL_29;
        }
LABEL_83:
        v87 = nullptr;
        goto LABEL_84;
      case 21LL:
        sub_E14540((__int64)&v387);
        v78 = *(_QWORD *)v6;
        if ( (*(_QWORD *)v6 & 0x80000) != 0
          && ((v308 = *((unsigned int *)v6 + 1), (*v6 & 0x1FF) != 0x18)
            ? (v309 = &v6[4 * v308 + 40])
            : (v309 = &v6[4 * v308 + 32]),
              *(_DWORD *)v309) )
        {
          if ( (v78 & 0x80000) == 0 )
            BUG();
          v79 = *((unsigned int *)v309 + 3);
        }
        else
        {
          v79 = 0;
        }
        v80 = v78 >> 16;
        if ( (v80 & 8) == 0 )
          goto LABEL_282;
        v81 = *((unsigned int *)v6 + 1);
        if ( (*v6 & 0x1FF) == 0x18 )
        {
          v82 = 4 * v81;
          if ( *(_DWORD *)&v6[v82 + 32] )
          {
            v83 = &v6[8 * ((v80 & 8) != 0) + 32 + v82];
            goto LABEL_79;
          }
        }
        else
        {
          v357 = 4 * v81;
          if ( *(_DWORD *)&v6[v357 + 40] )
          {
            v83 = &v6[8 * ((v80 & 8) != 0) + 40 + v357];
LABEL_79:
            sub_E33D40(a1, *((_QWORD *)v6 + 5), *((_QWORD *)v6 + 2), v83, v79, v7, v380);
            goto LABEL_29;
          }
        }
LABEL_282:
        v83 = nullptr;
        goto LABEL_79;
      case 22LL:
        v76 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
        v77 = sub_E161F0(*(_QWORD *)(v76 + 32), 4, "cannot yet mangle OpenACC Asterisk Size expression", 50);
        sub_FA3370(v391, v76, 0, v77);
        sub_AC6300((__int64)v391);
        return;
      case 37LL:
        sub_971800(*(_QWORD *)(a1 + 8), "Lb");
        v72 = *(_QWORD *)(a1 + 8);
        v73 = 49 - (*((_BYTE *)v6 + 16) == 0);
        v74 = *(_BYTE **)(v72 + 32);
        if ( (unsigned __int64)v74 >= *(_QWORD *)(v72 + 24) )
        {
          sub_2257CD0(v72, 49 - (unsigned int)(*((_BYTE *)v6 + 16) == 0));
        }
        else
        {
          *(_QWORD *)(v72 + 32) = v74 + 1;
          *v74 = v73;
        }
        v32 = *(_QWORD *)(a1 + 8);
        v75 = *(_BYTE **)(v32 + 32);
        if ( (unsigned __int64)v75 >= *(_QWORD *)(v32 + 24) )
          goto LABEL_342;
        *(_QWORD *)(v32 + 32) = v75 + 1;
        *v75 = 69;
        goto LABEL_29;
      case 43LL:
        sub_E14540((__int64)&v387);
        v64 = *(_QWORD *)v6;
        if ( (*(_QWORD *)v6 & 0x400000LL) != 0
          && (v65 = &v6[8 * ((*(_QWORD *)v6 & 0x100000LL) != 0) + 4 * ((*(_QWORD *)v6 & 0x200000LL) != 0)],
              *((_DWORD *)v65 + 12)) )
        {
          v66 = *((unsigned int *)v65 + 15);
        }
        else
        {
          v66 = 0;
        }
        if ( (v64 & 0x400000) != 0
          && (v310 = 4LL * ((v64 & 0x200000) != 0), *(_DWORD *)&v6[8 * ((v64 & 0x100000) != 0) + 24 + v310]) )
        {
          v67 = &v6[8 * ((v64 & 0x100000) != 0) + 24 + 8 * (unsigned __int64)((v64 & 0x400000) != 0) + v310];
        }
        else
        {
          v67 = nullptr;
        }
        v68 = 0;
        v69 = *(_QWORD *)(*((_QWORD *)v6 + 3) + 40LL);
        if ( (v64 & 0x100000) != 0 )
          v68 = *((_QWORD *)v6 + 6);
        v70 = *((_QWORD *)v6 + 2);
        v71 = v64 >> 16;
        if ( v70 )
        {
          LODWORD(v380) = v66;
          sub_E27FE0(a1, v70, (v71 & 8) != 0);
          v66 = (unsigned int)v380;
        }
        sub_E33D40(a1, v68, v69, v67, v66, v7, v380);
        goto LABEL_29;
      case 44LL:
        sub_E14540((__int64)&v387);
        sub_971800(*(_QWORD *)(a1 + 8), "ixix");
        sub_E24970(a1, *((_QWORD *)v6 + 2), 0xFFFFFFFFLL, 0);
        sub_E24970(a1, *((_QWORD *)v6 + 3), 0xFFFFFFFFLL, 0);
        sub_E24970(a1, *((_QWORD *)v6 + 4), 0xFFFFFFFFLL, 0);
        goto LABEL_29;
      case 45LL:
        v208 = *((_QWORD *)v6 + 2);
        if ( (v208 & 4) != 0 )
        {
          v6 = *(unsigned __int16 **)((v208 & 0xFFFFFFFFFFFFFFF8LL) + 40);
          v10 = *v6;
        }
        else
        {
          v209 = (unsigned __int16 *)(v208 & 0xFFFFFFFFFFFFFFF8LL);
          v10 = *v209;
          v6 = v209;
        }
        LOWORD(v10) = v10 & 0x1FF;
        continue;
      case 48LL:
        sub_971800(*(_QWORD *)(a1 + 8), "L");
        v198 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
        v199 = sub_C715F0((__int64)v6);
        v204 = sub_A56C90(v198, v199, v200, v201, v202, v203);
        sub_E1BE40(a1, v204, v205, v206, v207);
        sub_971800(*(_QWORD *)(a1 + 8), "E");
        goto LABEL_29;
      case 49LL:
        sub_E14970((__int64)v391, *((_QWORD *)v6 + 2), *((_DWORD *)v6 + 6));
        LODWORD(v389[1]) = v391[1];
        v389[0] = v391[0];
        BYTE4(v389[1]) = (unsigned __int8)sub_F41400(*(_QWORD *)(*((_QWORD *)v6 + 1) & 0xFFFFFFFFFFFFFFF0LL)) == 0;
        sub_E234C0(a1, *((_QWORD *)v6 + 1), (__int64)v389, v196, v197);
        if ( LODWORD(v389[1]) > 0x40 )
        {
          v54 = v389[0];
          if ( v389[0] )
            goto LABEL_196;
        }
        goto LABEL_29;
      case 50LL:
        sub_E14540((__int64)&v387);
        sub_971800(*(_QWORD *)(a1 + 8), "il");
        sub_E28730(a1);
        sub_971800(*(_QWORD *)(a1 + 8), "E");
        goto LABEL_29;
      case 52LL:
        v12 = *(_QWORD *)(a1 + 8);
        v13 = *(_BYTE **)(v12 + 32);
        if ( (unsigned __int64)v13 >= *(_QWORD *)(v12 + 24) )
        {
          sub_2257CD0(v12, 76);
        }
        else
        {
          v14 = (__int64)(v13 + 1);
          *(_QWORD *)(v12 + 32) = v13 + 1;
          *v13 = 76;
        }
        sub_E1BE40(a1, *((_QWORD *)v6 + 1), v14, a4, a5);
        v15 = *((_QWORD *)v6 + 2);
        if ( (*(_WORD *)v15 & 0x1FF) == 0x3E )
        {
          v16 = (void **)(*(_BYTE *)(v15 + 2) >> 3);
          v17 = sub_21D4FB0(v16);
          v18 = *(void **)(v15 + 16);
          v19 = v17;
          v20 = *(unsigned int *)(v15 + 24);
          v21 = (v20 + 63) >> 6;
          if ( v21 > 1 )
          {
            v16 = v391;
            sub_21E18D0(v391, v20, v21, v18);
          }
          else
          {
            LODWORD(v391[1]) = *(_DWORD *)(v15 + 24);
            if ( (unsigned int)v20 > 0x40 )
            {
              v20 = (unsigned __int64)v18;
              v16 = v391;
              sub_21E1730(v391, v18, 0);
            }
            else
            {
              v391[0] = v18;
            }
          }
          v22 = sub_21D5390(v16, v20, v21);
          v23 = (void *)v22;
          if ( v19 == v22 )
            sub_21DC060(v389, v22, v391);
          else
            sub_21DBA90(v389, v19, v391);
          if ( LODWORD(v391[1]) > 0x40 && v391[0] )
            operator delete[](v391[0]);
          if ( v389[0] == v23 )
            sub_21DBE90(v391, v23);
          else
            sub_21D7CC0(v391, v389[0]);
          sub_E149C0((_QWORD *)(a1 + 8), v391, v24);
          sub_971860(v391);
          sub_971860(v389);
          v25 = *(_QWORD *)(a1 + 8);
          v26 = *(_BYTE **)(v25 + 32);
          if ( (unsigned __int64)v26 >= *(_QWORD *)(v25 + 24) )
          {
            sub_2257CD0(v25, 95);
          }
          else
          {
            *(_QWORD *)(v25 + 32) = v26 + 1;
            *v26 = 95;
          }
          v27 = sub_21D4FB0(*(_BYTE *)(v15 + 2) >> 3);
          v28 = *(void **)(v15 + 16);
          v29 = *(unsigned int *)(v15 + 24);
          v30 = (unsigned __int64)(v29 + 63) >> 6;
          if ( v30 > 1 )
          {
            v380 = (char *)v27;
            sub_21E18D0(v389, v29, v30, v28);
            v27 = (__int64)v380;
          }
          else
          {
            LODWORD(v389[1]) = *(_DWORD *)(v15 + 24);
            if ( (unsigned int)v29 > 0x40 )
            {
              v380 = (char *)v27;
              sub_21E1730(v389, v28, 0);
              v27 = (__int64)v380;
            }
            else
            {
              v389[0] = v28;
            }
          }
          if ( v23 == (void *)v27 )
            sub_21DC060(v391, v23, v389);
          else
            sub_21DBA90(v391, v27, v389);
          if ( LODWORD(v389[1]) > 0x40 && v389[0] )
            operator delete[](v389[0]);
          sub_E149C0((_QWORD *)(a1 + 8), v391, v31);
          sub_971860(v391);
        }
        else
        {
          sub_971800(*(_QWORD *)(a1 + 8), "0_");
          sub_E14970((__int64)v391, *(_QWORD *)(*((_QWORD *)v6 + 2) + 16LL), *(_DWORD *)(*((_QWORD *)v6 + 2) + 24LL));
          LODWORD(v389[1]) = v391[1];
          v389[0] = v391[0];
          BYTE4(v389[1]) = (unsigned __int8)sub_F41400(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 2) + 8LL)
                                                                 & 0xFFFFFFFFFFFFFFF0LL)) == 0;
          sub_E147D0((_QWORD *)(a1 + 8), (__int64)v389);
          if ( LODWORD(v389[1]) > 0x40 && v389[0] )
            operator delete[](v389[0]);
        }
        v32 = *(_QWORD *)(a1 + 8);
        v33 = *(_BYTE **)(v32 + 32);
        if ( (unsigned __int64)v33 >= *(_QWORD *)(v32 + 24) )
          goto LABEL_342;
        *(_QWORD *)(v32 + 32) = v33 + 1;
        *v33 = 69;
        goto LABEL_29;
      case 55LL:
        LODWORD(v391[1]) = 32;
        v391[0] = nullptr;
        BYTE4(v391[1]) = 1;
        sub_E234C0(a1, *((_QWORD *)v6 + 1), (__int64)v391, a4, a5);
        if ( LODWORD(v391[1]) > 0x40 )
        {
          v54 = v391[0];
          if ( v391[0] )
            goto LABEL_196;
        }
        goto LABEL_29;
      case 56LL:
        sub_E14540((__int64)&v387);
        sub_971800(*(_QWORD *)(a1 + 8), "v110_SUBSTPACK");
        sub_E2E820(&v385, &v386, *((_QWORD *)v6 + 2));
        goto LABEL_29;
      case 57LL:
      case 58LL:
      case 96LL:
        goto LABEL_36;
      case 59LL:
        v162 = (void **)(*((_BYTE *)v6 + 2) >> 3);
        v163 = sub_21D4FB0(v162);
        v164 = *((void **)v6 + 2);
        v165 = v163;
        v166 = *((unsigned int *)v6 + 6);
        v167 = (v166 + 63) >> 6;
        if ( v167 > 1 )
        {
          v162 = v389;
          sub_21E18D0(v389, v166, v167, v164);
        }
        else
        {
          LODWORD(v389[1]) = *((_DWORD *)v6 + 6);
          if ( (unsigned int)v166 > 0x40 )
          {
            v166 = (unsigned __int64)v164;
            v162 = v389;
            sub_21E1730(v389, v164, 0);
          }
          else
          {
            v389[0] = v164;
          }
        }
        if ( v165 == sub_21D5390(v162, v166, v167) )
          sub_21DC060(v391, v165, v389);
        else
          sub_21DBA90(v391, v165, v389);
        if ( LODWORD(v389[1]) > 0x40 && v389[0] )
          operator delete[](v389[0]);
        sub_E23440(a1, *((_QWORD *)v6 + 1), v391, v168, v169);
        sub_971860(v391);
        goto LABEL_29;
      case 60LL:
        sub_E15AA0(*(_QWORD *)a1);
        goto LABEL_29;
      case 65LL:
        sub_E14540((__int64)&v387);
        v155 = *((_DWORD **)v6 + 3);
        for ( i = &v155[6 * (v6[10] >> 1)]; i != v155; v155 += 6 )
        {
          v157 = *(_QWORD *)(a1 + 8);
          if ( *v155 )
          {
            if ( *v155 == 1 )
            {
              sub_971800(v157, "dx");
              v159 = sub_BDF6B0((__int64)v6, (__int64)v155);
            }
            else
            {
              sub_971800(v157, "dX");
              v158 = sub_BDF6C0((__int64)v6, (__int64)v155);
              sub_E24970(a1, v158, 0xFFFFFFFFLL, 0);
              v159 = sub_BDF6D0((__int64)v6, (__int64)v155);
            }
            sub_E24970(a1, v159, 0xFFFFFFFFLL, 0);
          }
          else
          {
            sub_971800(v157, "di");
            v273 = sub_BDCBF0((__int64)v155);
            sub_E15750(*(_QWORD *)(a1 + 8), v273);
          }
        }
        sub_EC6110(v391, v6);
        si128 = _mm_load_si128((const __m128i *)v391);
        v390 = v392;
        *(__m128i *)v389 = si128;
        v161 = (_QWORD *)si128.m128i_i64[0];
        if ( (si128.m128i_i8[8] & 3) != 0 )
          v161 = (_QWORD *)sub_ECEDF0(v389);
        sub_E24970(a1, *v161, 0xFFFFFFFFLL, 0);
        goto LABEL_29;
      case 66LL:
        sub_E14540((__int64)&v387);
        if ( (*(_DWORD *)v6 & 0x80000) != 0 )
        {
          v170 = *((unsigned int *)v6 + 14);
          v171 = 0;
          if ( (_DWORD)v170 )
          {
            v170 = *((unsigned int *)v6 + 17);
            v171 = (__int64)&v6[8 * ((*(_DWORD *)v6 & 0x80000) != 0) + 28];
          }
        }
        else
        {
          v170 = 0;
          v171 = 0;
        }
        sub_E33D40(a1, *((_QWORD *)v6 + 2), *((_QWORD *)v6 + 4), v171, v170, v7, v380);
        goto LABEL_29;
      case 67LL:
      case 70LL:
        sub_E14540((__int64)&v387);
        sub_971800(*(_QWORD *)(a1 + 8), "v18co_await");
        sub_E24970(a1, *((_QWORD *)v6 + 3), 0xFFFFFFFFLL, 0);
        goto LABEL_29;
      case 68LL:
        sub_E2E820(&v385, &v386, *((_QWORD *)v6 + 2));
        goto LABEL_29;
      case 69LL:
        sub_E14540((__int64)&v387);
        sub_971800(*(_QWORD *)(a1 + 8), "v18co_yield");
        sub_E24970(a1, *((_QWORD *)v6 + 3), 0xFFFFFFFFLL, 0);
        goto LABEL_29;
      case 72LL:
        if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 8LL) + 2320LL) + 212LL) > 0x9Fu )
        {
          sub_E14540((__int64)&v387);
          sub_E33D40(
            a1,
            **((_QWORD **)v6 + 2),
            *(_QWORD *)(*((_QWORD *)v6 + 2) + 24LL),
            *(_QWORD *)(*((_QWORD *)v6 + 2) + 64LL) + 16LL,
            *(unsigned int *)(*(_QWORD *)(*((_QWORD *)v6 + 2) + 64LL) + 8LL),
            0xFFFFFFFFLL,
            v380);
        }
        else
        {
          sub_971800(*(_QWORD *)(a1 + 8), "L_Z");
          sub_E33550(
            a1,
            *(_QWORD *)(*((_QWORD *)v6 + 2) + 56LL),
            *((_QWORD *)v6 + 3) + 40LL,
            *(unsigned int *)(*((_QWORD *)v6 + 3) + 36LL));
          v32 = *(_QWORD *)(a1 + 8);
          v246 = *(_BYTE **)(v32 + 32);
          if ( (unsigned __int64)v246 >= *(_QWORD *)(v32 + 24) )
            goto LABEL_342;
          *(_QWORD *)(v32 + 32) = v246 + 1;
          *v246 = 69;
        }
        goto LABEL_29;
      case 75LL:
        v242 = *(_QWORD *)(a1 + 8);
        v243 = *(_BYTE **)(v242 + 32);
        if ( (unsigned __int64)v243 >= *(_QWORD *)(v242 + 24) )
        {
          sub_2257CD0(v242, 76);
        }
        else
        {
          v244 = (__int64)(v243 + 1);
          *(_QWORD *)(v242 + 32) = v243 + 1;
          *v243 = 76;
        }
        sub_E1BE40(a1, *((_QWORD *)v6 + 1), v244, a4, a5);
        sub_2257BD0(*(_QWORD *)(a1 + 8), *((unsigned int *)v6 + 4));
        v32 = *(_QWORD *)(a1 + 8);
        v245 = *(_BYTE **)(v32 + 32);
        if ( (unsigned __int64)v245 >= *(_QWORD *)(v32 + 24) )
          goto LABEL_342;
        *(_QWORD *)(v32 + 32) = v245 + 1;
        *v245 = 69;
        goto LABEL_29;
      case 76LL:
        v8 = *((_QWORD *)v6 + 1);
LABEL_36:
        v6 = *((unsigned __int16 **)v6 + 2);
        v10 = *v6;
        LOWORD(v10) = v10 & 0x1FF;
        continue;
      case 77LL:
        sub_E14540((__int64)&v387);
        v248 = sub_C770E0((__int64)v6);
        v250 = v249;
        v251 = v248;
        v252 = sub_971800(*(_QWORD *)(a1 + 8), "v1U");
        v253 = sub_2257BD0(v252, v250);
        sub_9717A0(v253, v251, v250);
        v254 = j__strlen("cv");
        sub_E28F80(a1, v6, "cv", v254);
        goto LABEL_29;
      case 78LL:
        sub_E14540((__int64)&v387);
        v247 = j__strlen("sc");
        sub_E28F80(a1, v6, "sc", v247);
        goto LABEL_29;
      case 79LL:
        sub_E14540((__int64)&v387);
        v255 = j__strlen("rc");
        sub_E28F80(a1, v6, "rc", v255);
        goto LABEL_29;
      case 80LL:
        sub_E14540((__int64)&v387);
        v154 = j__strlen("dc");
        sub_E28F80(a1, v6, "dc", v154);
        goto LABEL_29;
      case 81LL:
        sub_E14540((__int64)&v387);
        v147 = j__strlen("cc");
        sub_E28F80(a1, v6, "cc", v147);
        goto LABEL_29;
      case 82LL:
        sub_E14540((__int64)&v387);
        v146 = j__strlen("ac");
        sub_E28F80(a1, v6, "ac", v146);
        goto LABEL_29;
      case 83LL:
        sub_E14540((__int64)&v387);
        v148 = sub_BD7BC0(*((_QWORD *)v6 + 2));
        v149 = *(_WORD *)v148 & 0x1FF;
        if ( (unsigned int)v149 - 113 <= 1 && (!*(_DWORD *)(v148 + 28) || !*(_DWORD *)(v148 + 24)) )
        {
          v150 = (unsigned __int64 *)(v148 + 48);
          v151 = (unsigned __int64 *)(v148 + 40);
          v152 = v149 == 114;
          v153 = v150;
          if ( !v152 )
            v153 = v151;
          v148 = sub_BD7BC0(*v153);
          v149 = *(_WORD *)v148 & 0x1FF;
        }
        if ( v149 == 99 )
          v149 = *(_WORD *)sub_BD7BC0(*(_QWORD *)(v148 + 16)) & 0x1FF;
        if ( v149 == 53 )
          goto LABEL_106;
        v311 = j__strlen("cv");
        sub_E28F80(a1, v6, "cv", v311);
        goto LABEL_29;
      case 84LL:
        sub_E14540((__int64)&v387);
        v145 = j__strlen("cv");
        sub_E28F80(a1, v6, "cv", v145);
        goto LABEL_29;
      case 86LL:
      case 87LL:
      case 89LL:
        sub_E14540((__int64)&v387);
        v132 = *((_QWORD *)v6 + 4);
        v133 = sub_BD7CB0(v132);
        if ( v132 == v133 || (*(_WORD *)v133 & 0x1FF) != 0x18 || *(_QWORD *)(v133 + 40) )
          goto LABEL_119;
        if ( !*(_DWORD *)(v133 + 4) )
          goto LABEL_389;
        v373 = *(_QWORD *)((*(_QWORD *)(v133 + 64) & 0xFFFFFFFFFFFFFFF8LL) + 16);
        v374 = v373 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v373 & 4) != 0 )
          v374 = *(_QWORD *)v374;
        if ( (*(_BYTE *)(v374 + 8) & 0x7F) == 0x3E )
          v374 = sub_B6AD60(v374);
        if ( ((*(_BYTE *)(v374 + 8) + 70) & 0x7Fu) <= 3 )
LABEL_119:
          sub_971800(*(_QWORD *)(a1 + 8), "cl");
        else
LABEL_389:
          sub_971800(*(_QWORD *)(a1 + 8), "cp");
        v134 = *((unsigned int *)v6 + 4);
        v135 = 8 * (((v6[1] & 8) != 0) + 1LL) + 32;
        v136 = v135 + 8 * v134;
        v137 = (_WORD **)((char *)v6 + v135);
        for ( j = (_WORD **)((char *)v6 + v136); j != v137; ++v137 )
        {
          if ( (**v137 & 0x1FF) == 0x16 )
            v134 = 0xFFFFFFFFLL;
        }
        sub_E24970(a1, *((_QWORD *)v6 + 4), v134, 0);
        v139 = 8 * (((v6[1] & 8) != 0) + 1LL) + 32;
        v140 = v139 + 8LL * *((unsigned int *)v6 + 4);
        v141 = (__int64 *)((char *)v6 + v139);
        v142 = (__int64 *)((char *)v6 + v140);
        while ( v142 != v141 )
        {
          v143 = *v141++;
          sub_E24970(a1, v143, 0xFFFFFFFFLL, 0);
        }
        v32 = *(_QWORD *)(a1 + 8);
        v144 = *(_BYTE **)(v32 + 32);
        if ( *(_QWORD *)(v32 + 24) <= (unsigned __int64)v144 )
          goto LABEL_342;
        *(_QWORD *)(v32 + 32) = v144 + 1;
        *v144 = 69;
        goto LABEL_29;
      case 88LL:
        sub_E14540((__int64)&v387);
        v129 = *((_DWORD *)v6 + 4);
        v130 = (*((_BYTE *)v6 + 3) >> 1) & 0x3F;
        if ( (_DWORD)v130 != 41 )
          sub_E16500((__int64 *)(a1 + 8), v130, v129);
        if ( v129 )
        {
          v131 = 0;
          do
          {
            v131 += 8LL;
            sub_E24970(a1, *(_QWORD *)&v6[4 * ((v6[1] & 8) != 0) + 16 + v131 / 2], 0xFFFFFFFFLL, 0);
          }
          while ( 8LL * (unsigned int)(v129 - 1) + 8 != v131 );
        }
        goto LABEL_29;
      case 91LL:
        sub_E14540((__int64)&v387);
        v127 = *(_QWORD **)(*(_QWORD *)a1 + 8LL);
        if ( *(_BYTE *)(v127[290] + 212LL) <= 0x5Fu )
        {
          v128 = *((_QWORD *)v6 + 2);
          if ( (v128 & 4) != 0 )
          {
            v346 = sub_C70130((__int64)v6, v127, v124, v125, v126);
            sub_971800(*(_QWORD *)(a1 + 8), "u8__uuidoft");
            sub_E1BE40(a1, v346, v347, v348, v349);
          }
          else
          {
            sub_971800(*(_QWORD *)(a1 + 8), "u8__uuidofz");
            sub_E24970(a1, v128 & 0xFFFFFFFFFFFFFFF8LL, 0xFFFFFFFFLL, 0);
          }
          goto LABEL_29;
        }
        sub_971800(*(_QWORD *)(a1 + 8), "u8__uuidof");
        v339 = *((_QWORD *)v6 + 2);
        if ( (v339 & 4) != 0 )
        {
          v361 = sub_C70130((__int64)v6, *(_QWORD **)(*(_QWORD *)a1 + 8LL), v336, v337, v338);
          sub_E1BE40(a1, v361, v362, v363, v364);
        }
        else
        {
          sub_E2E9D0(a1, v339 & 0xFFFFFFFFFFFFFFF8LL);
        }
        v32 = *(_QWORD *)(a1 + 8);
        v340 = *(_BYTE **)(v32 + 32);
        if ( *(_QWORD *)(v32 + 24) > (unsigned __int64)v340 )
        {
          *(_QWORD *)(v32 + 32) = v340 + 1;
          *v340 = 69;
          goto LABEL_29;
        }
        goto LABEL_342;
      case 92LL:
        sub_E14540((__int64)&v387);
        if ( (v6[8] & 4) != 0 )
        {
LABEL_106:
          sub_971800(*(_QWORD *)(a1 + 8), "tl");
          sub_E1BE40(a1, *((_QWORD *)v6 + 1), v121, v122, v123);
          sub_E28730(a1);
          sub_971800(*(_QWORD *)(a1 + 8), "E");
        }
        else
        {
          v279 = *((_DWORD *)v6 + 1);
          sub_971800(*(_QWORD *)(a1 + 8), "cv");
          sub_E1BE40(a1, *((_QWORD *)v6 + 1), v280, v281, v282);
          if ( v279 == 1 )
          {
            sub_E24970(a1, *((_QWORD *)v6 + 4), 0xFFFFFFFFLL, 0);
          }
          else
          {
            v283 = *(_QWORD *)(a1 + 8);
            v284 = *(_BYTE **)(v283 + 32);
            if ( (unsigned __int64)v284 >= *(_QWORD *)(v283 + 24) )
            {
              sub_2257CD0(v283, 95);
            }
            else
            {
              *(_QWORD *)(v283 + 32) = v284 + 1;
              *v284 = 95;
            }
            v285 = 0;
            if ( v279 )
            {
              do
              {
                v286 = *(_QWORD *)&v6[4 * v285++ + 16];
                sub_E24970(a1, v286, 0xFFFFFFFFLL, 0);
              }
              while ( v285 != v279 );
            }
            v32 = *(_QWORD *)(a1 + 8);
            v287 = *(_BYTE **)(v32 + 32);
            if ( (unsigned __int64)v287 >= *(_QWORD *)(v32 + 24) )
            {
LABEL_342:
              sub_2257CD0(v32, 69);
            }
            else
            {
              *(_QWORD *)(v32 + 32) = v287 + 1;
              *v287 = 69;
            }
          }
        }
        goto LABEL_29;
      case 93LL:
        sub_E14540((__int64)&v387);
        v257 = *(_QWORD *)(a1 + 8);
        if ( (v6[8] & 4) != 0 )
        {
          sub_971800(v257, "ti");
          v315 = sub_C70080((__int64)v6, *(_QWORD **)(*(_QWORD *)a1 + 8LL), v312, v313, v314);
          sub_E1BE40(a1, v315, v316, v317, v318);
        }
        else
        {
          sub_971800(v257, "te");
          sub_E24970(a1, *((_QWORD *)v6 + 2) & 0xFFFFFFFFFFFFFFF8LL, 0xFFFFFFFFLL, 0);
        }
        goto LABEL_29;
      case 94LL:
        sub_E14540((__int64)&v387);
        v256 = *(_QWORD *)(a1 + 8);
        if ( *((_QWORD *)v6 + 2) )
        {
          sub_971800(v256, "tw");
          sub_E24970(a1, *((_QWORD *)v6 + 2), 0xFFFFFFFFLL, 0);
        }
        else
        {
          sub_971800(v256, "tr");
        }
        goto LABEL_29;
      case 95LL:
        sub_E14540((__int64)&v387);
        sub_971800(*(_QWORD *)(a1 + 8), "fpT");
        goto LABEL_29;
      case 97LL:
        sub_E14540((__int64)&v387);
        sub_971800(*(_QWORD *)(a1 + 8), "cv");
        sub_E1BE40(a1, *((_QWORD *)v6 + 1), v267, v268, v269);
        sub_971800(*(_QWORD *)(a1 + 8), "_E");
        goto LABEL_29;
      case 98LL:
        sub_E14540((__int64)&v387);
        sub_C6FDE0((__int64)v391, (__int64)v6);
        v258 = sub_BD7030((int)v391[0]);
        sub_E16500((__int64 *)(a1 + 8), v258, 2);
        sub_E24970(a1, v391[1], 0xFFFFFFFFLL, 0);
        sub_E24970(a1, v392, 0xFFFFFFFFLL, 0);
        goto LABEL_29;
      case 99LL:
        sub_E14540((__int64)&v387);
        v259 = *((_QWORD *)v6 + 2);
        if ( v259 )
          sub_E27FE0(a1, v259, v6[12] & 1);
        v260 = *((_QWORD **)v6 + 6);
        v261 = *((_QWORD *)v6 + 4);
        if ( v260 )
        {
          if ( v261 )
          {
            sub_E2B5E0(a1, v261, 1);
            v262 = j__strlen(&byte_22CD811);
            sub_E2B320(a1, *v260, &byte_22CD811, v262);
            v263 = *(_QWORD *)(a1 + 8);
            v264 = *(_BYTE **)(v263 + 32);
            if ( *(_QWORD *)(v263 + 24) > (unsigned __int64)v264 )
            {
LABEL_266:
              *(_QWORD *)(v263 + 32) = v264 + 1;
              *v264 = 69;
              goto LABEL_267;
            }
          }
          else
          {
            sub_971800(*(_QWORD *)(a1 + 8), "sr");
            v356 = j__strlen(&byte_22CD811);
            if ( (unsigned __int8)sub_E2B320(a1, *v260, &byte_22CD811, v356) )
              goto LABEL_267;
            v263 = *(_QWORD *)(a1 + 8);
            v264 = *(_BYTE **)(v263 + 32);
            if ( *(_QWORD *)(v263 + 24) > (unsigned __int64)v264 )
              goto LABEL_266;
          }
          sub_2257CD0(v263, 69);
        }
        else if ( v261 )
        {
          sub_E2B5E0(a1, v261, 0);
        }
LABEL_267:
        sub_971800(*(_QWORD *)(a1 + 8), "dn");
        v265 = sub_C703D0((__int64)v6);
        v266 = j__strlen(&byte_22CD811);
        sub_E2B320(a1, v265, &byte_22CD811, v266);
LABEL_29:
        if ( BYTE4(v381) && !v383 )
        {
          v34 = *(_QWORD *)(a1 + 8);
          v35 = *(_BYTE **)(v34 + 32);
          if ( (unsigned __int64)v35 >= *(_QWORD *)(v34 + 24) )
          {
            sub_2257CD0(v34, 69);
          }
          else
          {
            *(_QWORD *)(v34 + 32) = v35 + 1;
            *v35 = 69;
          }
        }
        return;
      case 101LL:
        sub_971800(*(_QWORD *)(a1 + 8), "LDnE");
        goto LABEL_29;
      case 102LL:
        sub_E14540((__int64)&v387);
        sub_971800(*(_QWORD *)(a1 + 8), "nx");
        sub_E24970(a1, *((_QWORD *)v6 + 2), 0xFFFFFFFFLL, 0);
        goto LABEL_29;
      case 103LL:
        sub_E14540((__int64)&v387);
        v223 = *(_QWORD *)v6;
        if ( (*(_QWORD *)v6 & 0x80000) != 0 )
        {
          sub_971800(*(_QWORD *)(a1 + 8), "gs");
          v223 = *(_QWORD *)v6;
        }
        v224 = *(_QWORD *)(a1 + 8);
        v225 = "na";
        if ( (v223 & 0x100000) == 0 )
          v225 = "nw";
        sub_971800(v224, v225);
        v228 = ((*(_QWORD *)v6 >> 20) & 1) + ((*(_QWORD *)v6 >> 24) & 1);
        v229 = (const char **)&v6[4 * v228 + 28];
        v230 = (__int64)&v6[4 * v228 + 28 + 4 * *((unsigned int *)v6 + 1)];
        while ( (const char **)v230 != v229 )
        {
          v225 = *v229++;
          sub_E24970(a1, v225, 0xFFFFFFFFLL, 0);
        }
        v231 = *(_QWORD *)(a1 + 8);
        v232 = *(_BYTE **)(v231 + 32);
        if ( *(_QWORD *)(v231 + 24) <= (unsigned __int64)v232 )
        {
          v225 = (_BYTE *)(&qword_58 + 7);
          sub_2257CD0(v231, 95);
        }
        else
        {
          v233 = (__int64)(v232 + 1);
          *(_QWORD *)(v231 + 32) = v232 + 1;
          *v232 = 95;
        }
        v234 = *(_QWORD *)(*((_QWORD *)v6 + 1) & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v234 + 16) != 42 )
          v234 = sub_F3F310(*(_QWORD *)(*((_QWORD *)v6 + 1) & 0xFFFFFFFFFFFFFFF0LL), v225, v233, v226);
        sub_E1BE40(a1, *(_QWORD *)(v234 + 32), v233, v226, v227);
        if ( (*(_QWORD *)v6 & 0x1000000LL) != 0 )
        {
          v235 = *(_QWORD *)(a1 + 8);
          if ( ((*((_BYTE *)v6 + 3) >> 1) & 3) == 2 )
            sub_971800(v235, "il");
          else
            sub_971800(v235, "pi");
          if ( (*(_QWORD *)v6 & 0x1000000) == 0 )
            BUG();
          v236 = *(_QWORD *)&v6[4 * ((*(_QWORD *)v6 >> 20) & 1LL) + 28];
          v237 = *(_WORD *)v236 & 0x1FF;
          if ( (unsigned int)v237 - 113 > 1 )
          {
            if ( v237 == 19 )
            {
              v352 = *(_DWORD *)(v236 + 4);
              if ( v352 )
              {
                v353 = (__int64 *)(v236 + 24);
                v354 = v236 + 8LL * (unsigned int)(v352 - 1) + 32;
                do
                {
                  v355 = *v353++;
                  sub_E24970(a1, v355, 0xFFFFFFFFLL, 0);
                }
                while ( (__int64 *)v354 != v353 );
              }
            }
            else if ( ((*((_BYTE *)v6 + 3) >> 1) & 3) == 2 && v237 == 53 )
            {
              sub_E28730(a1);
            }
            else
            {
              sub_E24970(a1, v236, 0xFFFFFFFFLL, 0);
            }
          }
          else
          {
            v238 = (__int64 *)(v236 + 40);
            if ( v237 == 114 )
              v238 = (__int64 *)(v236 + 48);
            v239 = &v238[*(unsigned int *)(v236 + 32)];
            while ( v239 != v238 )
            {
              v240 = *v238++;
              sub_E24970(a1, v240, 0xFFFFFFFFLL, 0);
            }
          }
        }
        v32 = *(_QWORD *)(a1 + 8);
        v241 = *(_BYTE **)(v32 + 32);
        if ( *(_QWORD *)(v32 + 24) <= (unsigned __int64)v241 )
          goto LABEL_342;
        *(_QWORD *)(v32 + 32) = v241 + 1;
        *v241 = 69;
        goto LABEL_29;
      case 105LL:
        sub_E14540((__int64)&v387);
        v217 = *((_DWORD **)v6 + 5);
        if ( v217 )
        {
          v218 = *(_QWORD *)(a1 + 8);
          if ( (*v217 & 0x4000) != 0 )
          {
            v219 = "fR";
            if ( !*((_QWORD *)v6 + 6) )
              v219 = "fr";
          }
          else
          {
            v219 = "fL";
          }
        }
        else
        {
          v218 = *(_QWORD *)(a1 + 8);
          v219 = "fl";
        }
        sub_971800(v218, v219);
        v220 = *((_DWORD *)v6 + 1);
        if ( v220 )
        {
          v289 = sub_BD7030(v220);
          sub_E16500((__int64 *)(a1 + 8), v289, 2);
        }
        else
        {
          sub_971800(*(_QWORD *)(a1 + 8), "ds");
        }
        v221 = *((_QWORD *)v6 + 5);
        if ( v221 )
          sub_E24970(a1, v221, 0xFFFFFFFFLL, 0);
        v222 = *((_QWORD *)v6 + 6);
        if ( v222 )
          sub_E24970(a1, v222, 0xFFFFFFFFLL, 0);
        goto LABEL_29;
      case 106LL:
        sub_E14540((__int64)&v387);
        if ( (*(_QWORD *)v6 & 0x100000LL) != 0 )
        {
          v210 = *((unsigned int *)v6 + 18);
          v211 = 0;
          if ( (_DWORD)v210 )
          {
            v210 = *((unsigned int *)v6 + 21);
            v211 = (__int64)&v6[8 * ((*(_QWORD *)v6 & 0x100000LL) != 0) + 36];
          }
        }
        else
        {
          v210 = 0;
          v211 = 0;
        }
        v212 = *((_QWORD *)v6 + 2);
        v213 = *(_QWORD *)v6 >> 16;
        v214 = *((_QWORD *)v6 + 6);
        v380 = *((char **)v6 + 4);
        if ( v212 )
        {
          LODWORD(v381) = v210;
          v215 = sub_BDA5C0(v212);
          v210 = (unsigned int)v381;
          if ( !v215 )
          {
            v216 = *((_QWORD *)v6 + 2);
            if ( v216 )
            {
              sub_E27FE0(a1, v216, (v213 & 8) != 0);
              v210 = (unsigned int)v381;
            }
          }
        }
        sub_E33D40(a1, v380, v214, v211, v210, v7, v380);
        goto LABEL_29;
      case 107LL:
        sub_E14540((__int64)&v387);
        v270 = *(_QWORD *)v6;
        if ( (*(_QWORD *)v6 & 0x80000) != 0 )
        {
          sub_971800(*(_QWORD *)(a1 + 8), "gs");
          v270 = *(_QWORD *)v6;
        }
        v271 = "da";
        v272 = *(_QWORD *)(a1 + 8);
        if ( (v270 & 0x100000) == 0 )
          v271 = "dl";
        sub_971800(v272, v271);
        sub_E24970(a1, *((_QWORD *)v6 + 3), 0xFFFFFFFFLL, 0);
        goto LABEL_29;
      case 108LL:
        v6 = (unsigned __int16 *)sub_C70F80(v6);
        v10 = *v6;
        LOWORD(v10) = v10 & 0x1FF;
        continue;
      case 109LL:
        v6 = (unsigned __int16 *)sub_C70F40((__int64)v6);
        v10 = *v6;
        LOWORD(v10) = v10 & 0x1FF;
        continue;
      case 110LL:
        if ( (*(_QWORD *)v6 & 0x200000LL) != 0 && (*(_QWORD *)v6 & 0x400000LL) == 0 )
        {
          v375 = (__int64 *)(v6 + 20);
          sub_E14540((__int64)&v387);
          sub_971800(*(_QWORD *)(a1 + 8), "il");
          if ( (*v6 & 0x1FF) == 0x72 )
            v375 = (__int64 *)(v6 + 24);
          v376 = &v375[*((unsigned int *)v6 + 8)];
          while ( v376 != v375 )
          {
            v377 = *v375++;
            sub_E24970(a1, v377, 0xFFFFFFFFLL, 0);
          }
LABEL_175:
          sub_971800(*(_QWORD *)(a1 + 8), "E");
          goto LABEL_29;
        }
        v6 = *((unsigned __int16 **)v6 + 5);
        v10 = *v6;
        LOWORD(v10) = v10 & 0x1FF;
        continue;
      case 111LL:
        sub_E14540((__int64)&v387);
        v186 = *((_DWORD *)v6 + 8);
        v187 = *(_QWORD *)(a1 + 8);
        if ( (*(_QWORD *)v6 & 0x200000LL) != 0 )
        {
          v188 = 1;
          sub_971800(v187, "tl");
          sub_E1BE40(a1, *((_QWORD *)v6 + 1), v189, v190, v191);
        }
        else
        {
          sub_971800(v187, "cv");
          sub_E1BE40(a1, *((_QWORD *)v6 + 1), v293, v294, v295);
          if ( v186 == 1 )
          {
            v188 = 0;
          }
          else
          {
            v296 = *(_QWORD *)(a1 + 8);
            v297 = *(_BYTE **)(v296 + 32);
            v188 = 1;
            if ( (unsigned __int64)v297 >= *(_QWORD *)(v296 + 24) )
            {
              sub_2257CD0(v296, 95);
            }
            else
            {
              *(_QWORD *)(v296 + 32) = v297 + 1;
              *v297 = 95;
            }
          }
        }
        v192 = *v6 & 0x1FF;
        if ( (*(_QWORD *)v6 & 0x400000LL) != 0 )
        {
          if ( v192 == 114 )
            v193 = *((_QWORD *)v6 + 6);
          else
            v193 = *((_QWORD *)v6 + 5);
          v194 = sub_BD7BC0(v193);
          sub_BD7BC0(*(_QWORD *)(v194 + 16));
          sub_E28730(a1);
        }
        else
        {
          v290 = (__int64 *)(v6 + 20);
          if ( v192 == 114 )
            v290 = (__int64 *)(v6 + 24);
          v291 = &v290[*((unsigned int *)v6 + 8)];
          while ( v291 != v290 )
          {
            v292 = *v290++;
            sub_E24970(a1, v292, 0xFFFFFFFFLL, 0);
          }
        }
        if ( !v188 )
          goto LABEL_29;
        v32 = *(_QWORD *)(a1 + 8);
        v195 = *(_BYTE **)(v32 + 32);
        if ( (unsigned __int64)v195 >= *(_QWORD *)(v32 + 24) )
          goto LABEL_342;
        *(_QWORD *)(v32 + 32) = v195 + 1;
        *v195 = 69;
        goto LABEL_29;
      case 112LL:
        sub_971800(*(_QWORD *)(a1 + 8), "Lb");
        v182 = *(_QWORD *)(a1 + 8);
        v183 = 49 - ((*(_QWORD *)v6 & 0x80000LL) == 0);
        v184 = *(_BYTE **)(v182 + 32);
        if ( (unsigned __int64)v184 >= *(_QWORD *)(v182 + 24) )
        {
          sub_2257CD0(v182, 49 - (unsigned int)((*(_QWORD *)v6 & 0x80000LL) == 0));
        }
        else
        {
          *(_QWORD *)(v182 + 32) = v184 + 1;
          *v184 = v183;
        }
        v32 = *(_QWORD *)(a1 + 8);
        v185 = *(_BYTE **)(v32 + 32);
        if ( (unsigned __int64)v185 >= *(_QWORD *)(v32 + 24) )
          goto LABEL_342;
        *(_QWORD *)(v32 + 32) = v185 + 1;
        *v185 = 69;
        goto LABEL_29;
      case 115LL:
      case 116LL:
        sub_E14540((__int64)&v387);
        if ( ((v6[1] >> 3) & 0x3F) != 0 )
        {
          v278 = sub_BD7030((v6[1] >> 3) & 0x3F);
          sub_E16500((__int64 *)(a1 + 8), v278, 2);
        }
        else
        {
          sub_971800(*(_QWORD *)(a1 + 8), "ds");
        }
        sub_E24970(a1, *((_QWORD *)v6 + 2), 0xFFFFFFFFLL, 0);
        sub_E24970(a1, *((_QWORD *)v6 + 3), 0xFFFFFFFFLL, 0);
        goto LABEL_29;
      case 120LL:
        sub_E14540((__int64)&v387);
        sub_971800(*(_QWORD *)(a1 + 8), "ix");
        sub_E24970(a1, *((_QWORD *)v6 + 2), 0xFFFFFFFFLL, 0);
        sub_E24970(a1, *((_QWORD *)v6 + 3), 0xFFFFFFFFLL, 0);
        goto LABEL_29;
      case 125LL:
        sub_E14540((__int64)&v387);
        sub_E16500((__int64 *)(a1 + 8), 44, 3);
        sub_E24970(a1, *((_QWORD *)v6 + 3), 0xFFFFFFFFLL, 0);
        sub_E24970(a1, *((_QWORD *)v6 + 4), v7, 0);
        sub_E24970(a1, *((_QWORD *)v6 + 5), v7, 0);
        goto LABEL_29;
      case 126LL:
        sub_E14540((__int64)&v387);
        v90 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
        v91 = sub_E161F0(*(_QWORD *)(v90 + 32), 4, "?: operator with omitted middle operand cannot be mangled", 57);
        v95 = sub_BDCD00((unsigned __int64)v6, 4, v92, v93, v94);
        sub_FA3370(v391, v90, v95, v91);
        v96 = sub_EC59F0(v6);
        sub_AC60B0((unsigned __int8 **)v391, v96, 1u);
        v97 = sub_EC8B80(v6);
        v98 = v391[0];
        v99 = (void *)v97;
        if ( v391[0] )
        {
          v100 = *((unsigned int *)v391[0] + 106);
          v101 = *((unsigned int *)v391[0] + 107);
          v102 = v100 + 1;
          goto LABEL_91;
        }
        v358 = v391[1];
        v359 = *((_DWORD *)v391[1] + 3744);
        if ( !v359 )
        {
          v360 = operator new(0x3A0u);
          v102 = 1;
          v100 = 0;
          v98 = (_QWORD *)v360;
          *(_BYTE *)v360 = 0;
          *(_QWORD *)(v360 + 96) = v360 + 112;
          *(_QWORD *)(v360 + 128) = v360 + 144;
          *(_QWORD *)(v360 + 160) = v360 + 176;
          *(_QWORD *)(v360 + 192) = v360 + 208;
          *(_QWORD *)(v360 + 224) = v360 + 240;
          *(_QWORD *)(v360 + 256) = v360 + 272;
          *(_QWORD *)(v360 + 288) = v360 + 304;
          *(_QWORD *)(v360 + 320) = v360 + 336;
          *(_QWORD *)(v360 + 352) = v360 + 368;
          *(_QWORD *)(v360 + 384) = v360 + 400;
          *(_QWORD *)(v360 + 416) = v360 + 432;
          *(_QWORD *)(v360 + 104) = 0;
          *(_BYTE *)(v360 + 112) = 0;
          *(_QWORD *)(v360 + 136) = 0;
          *(_BYTE *)(v360 + 144) = 0;
          *(_QWORD *)(v360 + 168) = 0;
          *(_BYTE *)(v360 + 176) = 0;
          *(_QWORD *)(v360 + 200) = 0;
          *(_BYTE *)(v360 + 208) = 0;
          *(_QWORD *)(v360 + 232) = 0;
          *(_BYTE *)(v360 + 240) = 0;
          *(_QWORD *)(v360 + 264) = 0;
          *(_BYTE *)(v360 + 272) = 0;
          *(_QWORD *)(v360 + 296) = 0;
          *(_BYTE *)(v360 + 304) = 0;
          *(_QWORD *)(v360 + 328) = 0;
          *(_BYTE *)(v360 + 336) = 0;
          *(_QWORD *)(v360 + 360) = 0;
          *(_BYTE *)(v360 + 368) = 0;
          *(_QWORD *)(v360 + 392) = 0;
          *(_BYTE *)(v360 + 400) = 0;
          *(_QWORD *)(v360 + 424) = 0x800000000LL;
          *(_QWORD *)(v360 + 528) = v360 + 544;
          *(_QWORD *)(v360 + 536) = 0x600000000LL;
          v101 = 8;
          goto LABEL_404;
        }
        v368 = (unsigned int)(v359 - 1);
        *((_DWORD *)v391[1] + 3744) = v368;
        v98 = (_QWORD *)v358[v368 + 1856];
        v369 = *((unsigned int *)v98 + 134);
        v370 = v98[66];
        *(_BYTE *)v98 = 0;
        *((_DWORD *)v98 + 106) = 0;
        v371 = v370 + (v369 << 6);
        while ( v370 != v371 )
        {
          while ( 1 )
          {
            v371 -= 64;
            v372 = *(void **)(v371 + 24);
            if ( v372 == (void *)(v371 + 40) )
              break;
            operator delete(v372);
            if ( v370 == v371 )
              goto LABEL_436;
          }
        }
LABEL_436:
        v100 = *((unsigned int *)v98 + 106);
        v101 = *((unsigned int *)v98 + 107);
        *((_DWORD *)v98 + 134) = 0;
        v102 = v100 + 1;
LABEL_404:
        v391[0] = v98;
LABEL_91:
        v389[0] = v99;
        LOBYTE(v389[1]) = 1;
        if ( v102 > v101 )
        {
          sub_22134E0(v98 + 52, v98 + 54, v102, 12);
          v100 = *((unsigned int *)v98 + 106);
        }
        v103 = v98[52] + 12 * v100;
        *(void **)v103 = v389[0];
        *(_DWORD *)(v103 + 8) = v389[1];
        ++*((_DWORD *)v98 + 106);
        sub_AC6300((__int64)v391);
        return;
      default:
        goto LABEL_29;
    }
  }
}

