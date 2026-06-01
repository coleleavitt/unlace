void __fastcall sub_E486B0(__int64 a1, unsigned __int16 *a2, unsigned __int16 *a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int16 *v6; // r15
  unsigned int v7; // r14d
  __int64 v8; // r13
  __int64 v10; // rax
  __m128 v11; // xmm0
  __int64 v12; // rdi
  _BYTE *v13; // rax
  __int64 v14; // r12
  void **v15; // rdi
  __int64 v16; // rax
  void *v17; // rcx
  __int64 v18; // r15
  unsigned __int64 v19; // rsi
  unsigned __int64 v20; // rdx
  __int64 v21; // rax
  void *v22; // r14
  __int64 v23; // rdx
  __int64 v24; // rdi
  _BYTE *v25; // rax
  __int64 v26; // rax
  void *v27; // rcx
  __int64 v28; // rsi
  unsigned __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rdi
  _BYTE *v32; // rax
  __int64 v33; // rdi
  _BYTE *v34; // rax
  __int64 v35; // rax
  unsigned __int64 v36; // r12
  int v37; // ecx
  int v38; // r8d
  int v39; // r9d
  const char *v40; // rax
  size_t v41; // rdx
  const char *v42; // rbp
  unsigned __int16 *v43; // rbp
  unsigned __int16 *v44; // r12
  _QWORD *v45; // rax
  _BYTE *v46; // rax
  void *v47; // rdi
  unsigned int v48; // eax
  __int64 v49; // rbp
  unsigned int v50; // r12d
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  unsigned int v54; // eax
  __int64 v55; // rax
  void *v56; // rax
  unsigned __int64 v57; // rax
  unsigned __int16 *v58; // rdx
  __int64 v59; // r8
  unsigned __int16 *v60; // r13
  __int64 v61; // rbp
  __int64 v62; // r12
  __int64 v63; // rsi
  unsigned __int64 v64; // rax
  __int64 v65; // rdi
  char v66; // al
  _BYTE *v67; // rdx
  _BYTE *v68; // rax
  __int64 v69; // rbp
  unsigned int v70; // eax
  unsigned __int64 v71; // rax
  __int64 v72; // r8
  unsigned __int64 v73; // rax
  __int64 v74; // rdx
  __int64 v75; // rdx
  unsigned __int16 *v76; // rcx
  unsigned __int64 v77; // rax
  unsigned int v78; // r13d
  unsigned __int64 v79; // rax
  unsigned __int16 *v80; // r12
  __int64 v81; // rbp
  __int64 v82; // rsi
  __int64 v83; // rbx
  unsigned int v84; // r12d
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // r8
  unsigned int v88; // eax
  __int64 v89; // rax
  __int64 v90; // rax
  _QWORD *v91; // r12
  void *v92; // r13
  __int64 v93; // rcx
  unsigned __int64 v94; // rax
  unsigned __int64 v95; // rdx
  __int64 v96; // rax
  __int64 v97; // rdi
  unsigned __int64 v98; // rsi
  __int64 v99; // rcx
  __int64 v100; // r8
  int v101; // r12d
  __int64 v102; // rdi
  _BYTE *v103; // rax
  __int64 v104; // rdi
  _BYTE *v105; // rax
  __int64 v106; // rdx
  unsigned __int16 *v107; // rbp
  unsigned __int16 *v108; // r13
  __int64 v109; // r14
  _BYTE *v110; // rax
  __int64 v111; // rdx
  __int64 v112; // rcx
  __int64 v113; // r8
  _QWORD *v114; // rsi
  __int64 v115; // rbp
  int v116; // ebp
  __int64 v117; // rsi
  unsigned __int64 v118; // r13
  __int64 v119; // rbp
  __int64 v120; // rax
  __int64 v121; // rdx
  __int64 v122; // rax
  __int64 v123; // rsi
  _WORD **v124; // rax
  _WORD **j; // rsi
  __int64 v126; // rbp
  __int64 v127; // r12
  __int64 *v128; // rbp
  __int64 *v129; // r12
  __int64 v130; // rsi
  _BYTE *v131; // rax
  size_t v132; // rax
  size_t v133; // rax
  size_t v134; // rax
  unsigned __int64 v135; // rbp
  unsigned __int16 v136; // ax
  unsigned __int64 *v137; // rdx
  unsigned __int64 *v138; // rbp
  bool v139; // zf
  unsigned __int64 *v140; // rax
  size_t v141; // rax
  _DWORD *v142; // rbp
  _DWORD *i; // r12
  __int64 v144; // rdi
  __int64 v145; // rax
  __int64 v146; // rax
  __m128i si128; // xmm1
  _QWORD *v148; // rax
  void **v149; // rdi
  __int64 v150; // rax
  void *v151; // rcx
  __int64 v152; // r12
  unsigned __int64 v153; // rsi
  unsigned __int64 v154; // rdx
  __int64 v155; // r8
  __int64 v156; // rcx
  unsigned __int16 *v157; // rbp
  int v158; // edx
  int v159; // ecx
  int v160; // r8d
  int v161; // r9d
  __int64 v162; // r12
  __int64 v163; // rdi
  _BYTE *v164; // rax
  _BYTE *v165; // rax
  __int64 v166; // rdi
  char v167; // dl
  _BYTE *v168; // rax
  _BYTE *v169; // rax
  int v170; // ebp
  __int64 v171; // rdi
  char v172; // r12
  __int16 v173; // ax
  unsigned __int64 v174; // rdi
  unsigned __int64 v175; // rax
  _BYTE *v176; // rax
  __int64 v177; // rbp
  __int64 v178; // rax
  __int64 v179; // rdx
  __int64 v180; // rcx
  __int64 v181; // r8
  __int64 v182; // r9
  unsigned __int64 v183; // rax
  __int64 v184; // r10
  unsigned __int16 *v185; // r10
  __int64 v186; // r8
  __int64 v187; // r12
  unsigned __int64 v188; // rdi
  __int64 v189; // rbp
  __int64 v190; // r13
  char v191; // al
  __int64 v192; // rsi
  _DWORD *v193; // rax
  __int64 v194; // rdi
  const char *v195; // rsi
  int v196; // edi
  __int64 v197; // rsi
  __int64 v198; // rsi
  __int64 v199; // rax
  __int64 v200; // rdi
  const char *v201; // rsi
  __int64 v202; // rcx
  __int64 v203; // rax
  const char **v204; // rbp
  __int64 v205; // r12
  __int64 v206; // rdi
  _BYTE *v207; // rax
  _BYTE *v208; // rdx
  __int64 v209; // rax
  __int64 v210; // rdi
  __int64 v211; // rsi
  unsigned __int16 v212; // ax
  __int64 *v213; // rbp
  __int64 *v214; // r12
  __int64 v215; // rsi
  _BYTE *v216; // rax
  __int64 v217; // rdi
  _BYTE *v218; // rax
  _BYTE *v219; // rax
  _BYTE *v220; // rax
  size_t v221; // rax
  const char *v222; // rax
  size_t v223; // rdx
  size_t v224; // rbp
  const char *v225; // r12
  __int64 v226; // rax
  __int64 v227; // rax
  size_t v228; // rax
  size_t v229; // rax
  __int64 v230; // rdi
  __int64 v231; // rdi
  unsigned int v232; // eax
  __int64 v233; // rsi
  _QWORD *v234; // rbp
  __int64 v235; // rsi
  size_t v236; // rax
  __int64 v237; // rdi
  _BYTE *v238; // rax
  __int64 v239; // rbp
  size_t v240; // rax
  __int64 v241; // rax
  const char *v242; // rsi
  __int64 v243; // rdi
  __int64 v244; // rax
  __int64 v245; // rbp
  char v246; // al
  int v247; // r12d
  int v248; // eax
  unsigned int v249; // eax
  int v250; // r12d
  __int64 v251; // rdi
  _BYTE *v252; // rax
  int v253; // ebp
  __int64 v254; // rsi
  _BYTE *v255; // rax
  __int64 v256; // rdx
  unsigned int v257; // eax
  __int64 *v258; // rbp
  __int64 *v259; // r13
  __int64 v260; // rsi
  __int64 v261; // rdi
  _BYTE *v262; // rax
  __int64 v263; // rsi
  __int64 v264; // rdx
  __int64 v265; // rcx
  __int64 v266; // r8
  unsigned __int16 *v267; // rbp
  unsigned __int16 *v268; // r12
  __int64 v269; // r13
  _BYTE *v270; // rax
  __int64 v271; // rdx
  unsigned __int16 *v272; // rdx
  __int64 v273; // rdx
  unsigned __int16 *v274; // rdx
  __int64 v275; // rsi
  size_t v276; // rax
  __int64 v277; // rdx
  __int64 v278; // rcx
  __int64 v279; // r8
  unsigned __int64 v280; // rax
  __int64 v281; // rdi
  _BYTE *v282; // rax
  __int64 v283; // rbp
  unsigned int v284; // r12d
  __int64 v285; // rdx
  __int64 v286; // rcx
  __int64 v287; // r8
  unsigned int v288; // eax
  __int64 v289; // rax
  __int64 v290; // rdi
  _BYTE *v291; // rax
  const char *v292; // rsi
  unsigned __int64 v293; // rbp
  _BYTE *v294; // rax
  __int64 v295; // rdx
  __int64 v296; // rcx
  __int64 v297; // r8
  __int64 v298; // rsi
  _BYTE *v299; // rax
  unsigned __int16 *v300; // rbp
  __int64 v301; // r13
  unsigned __int64 v302; // rbp
  __int64 v303; // rbp
  char v304; // al
  int v305; // eax
  __int64 *v306; // rbp
  __int64 v307; // r13
  __int64 v308; // rsi
  size_t v309; // rax
  __int64 v310; // rdx
  _QWORD *v311; // rdx
  int v312; // eax
  _BYTE *v313; // rax
  unsigned __int64 v314; // rax
  __int64 v315; // rax
  __int64 v316; // rdx
  __int64 v317; // rcx
  __int64 v318; // rax
  __int64 v319; // rbx
  __int64 v320; // r14
  __int64 v321; // rbx
  void *v322; // rdi
  __int64 v323; // rdx
  unsigned __int64 v324; // rax
  __int64 *v325; // rbp
  __int64 *v326; // r13
  __int64 v327; // rsi
  __int128 v328; // [rsp-20h] [rbp-118h]
  __int64 v329; // [rsp-10h] [rbp-108h]
  char *v330; // [rsp+0h] [rbp-F8h] BYREF
  __int64 v331; // [rsp+8h] [rbp-F0h]
  char v332; // [rsp+10h] [rbp-E8h]
  char v333; // [rsp+17h] [rbp-E1h] BYREF
  unsigned __int16 *v334; // [rsp+18h] [rbp-E0h] BYREF
  __int64 v335; // [rsp+20h] [rbp-D8h] BYREF
  __m128 *v336; // [rsp+28h] [rbp-D0h] BYREF
  __m128 v337; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v338; // [rsp+40h] [rbp-B8h]
  void *v339[2]; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v340; // [rsp+60h] [rbp-98h]
  void *v341[2]; // [rsp+70h] [rbp-88h] BYREF
  __int64 v342; // [rsp+80h] [rbp-78h]

  v6 = a2;
  v7 = (unsigned int)a3;
  v8 = 0;
  BYTE4(v331) = a4;
  v330 = &v333;
  v10 = *a2;
  v333 = 1;
  v338 = a1;
  LOWORD(v10) = v10 & 0x1FF;
  v335 = a1;
  v11 = _mm_loadh_ps((const double *)&v330);
  v336 = &v337;
  v337 = v11;
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
        sub_E38280((__int64)&v337);
        if ( *(_BYTE *)(a1 + 17) )
          goto LABEL_29;
        v49 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
        v50 = sub_E39F30(*(_QWORD *)(v49 + 32), 4, "cannot yet mangle expression type %0", 36);
        v54 = sub_C00A40((unsigned __int64)v6, 4, v51, v52, v53);
        sub_FC70B0(v341, v49, v54, v50);
        v55 = sub_EE9730(v6);
        sub_AE9DF0((unsigned __int8 **)v341, v55, 1u);
        v56 = (void *)sub_EEC8C0(v6);
        LOBYTE(v339[1]) = 1;
        v339[0] = v56;
        sub_AEC610((__int64 *)v341, (__int64 *)v339);
        sub_AEA040((__int64)v341);
        return;
      case 1LL:
        sub_E38280((__int64)&v337);
        v48 = sub_BF97A0(*((_BYTE *)v6 + 2) >> 3);
        sub_E3A240((__int64 *)(a1 + 8), v48, 1);
        sub_E486B0(a1, *((_QWORD *)v6 + 2), 0xFFFFFFFFLL, 0);
        goto LABEL_29;
      case 2LL:
        v334 = v6;
        if ( (*(_DWORD *)v6 & 0x8000) != 0 )
        {
          sub_E38280((__int64)&v337);
          v339[1] = (void *)a1;
          v339[0] = &v334;
          switch ( (*((_BYTE *)v334 + 2) >> 3) & 0xF )
          {
            case 0:
              v290 = *(_QWORD *)(a1 + 8);
              v291 = *(_BYTE **)(v290 + 32);
              if ( (unsigned __int64)v291 >= *(_QWORD *)(v290 + 24) )
              {
                sub_227BA10(v290, 115);
              }
              else
              {
                *(_QWORD *)(v290 + 32) = v291 + 1;
                *v291 = 115;
              }
              goto LABEL_346;
            case 1:
            case 2:
            case 5:
            case 6:
            case 7:
            case 8:
              v283 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
              v284 = sub_E39F30(*(_QWORD *)(v283 + 32), 4, "cannot yet mangle %0 expression", 31);
              v288 = sub_C00A40((unsigned __int64)v6, 4, v285, v286, v287);
              sub_FC70B0(v341, v283, v288, v284);
              v289 = sub_10CCE40((*((_BYTE *)v334 + 2) >> 3) & 0xF, v283);
              sub_AE9DF0((unsigned __int8 **)v341, v289, 1u);
              sub_AEA040((__int64)v341);
              return;
            case 3:
              goto LABEL_344;
            case 4:
              if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 8LL) + 2320LL) + 212LL) <= 0x5Fu )
              {
LABEL_344:
                v281 = *(_QWORD *)(a1 + 8);
                v282 = *(_BYTE **)(v281 + 32);
                if ( (unsigned __int64)v282 >= *(_QWORD *)(v281 + 24) )
                {
                  sub_227BA10(v281, 97);
                }
                else
                {
                  *(_QWORD *)(v281 + 32) = v282 + 1;
                  *v282 = 97;
                }
LABEL_346:
                sub_E4CC10(v339, &v339[1]);
                goto LABEL_29;
              }
              v292 = "__alignof__";
              v293 = j__strlen("__alignof__");
              if ( !v293 )
              {
                v292 = (const char *)sub_10CCE40(4, "__alignof__");
                if ( v292 )
                  v293 = strlen(v292);
              }
              sub_E39500(*(_QWORD *)(a1 + 8), v292, v293);
              if ( *((char *)v334 + 2) < 0 )
                sub_E3FB80(a1, **((_QWORD **)v334 + 2));
              else
                sub_E52710(a1, *((_QWORD *)v334 + 2));
              v31 = *(_QWORD *)(a1 + 8);
              v294 = *(_BYTE **)(v31 + 32);
              if ( (unsigned __int64)v294 < *(_QWORD *)(v31 + 24) )
              {
                *(_QWORD *)(v31 + 32) = v294 + 1;
                *v294 = 69;
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
        v303 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
        v304 = *(_BYTE *)(v303 + 16);
        switch ( v304 )
        {
          case 13:
            if ( (((*(_WORD *)(v303 + 18) >> 3) + 76) & 0x1FFu) <= 0x13 )
              break;
LABEL_50:
            v8 = *((_QWORD *)v6 + 1);
            goto LABEL_51;
          case 47:
            v315 = sub_F60F10(
                     *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL),
                     a2,
                     a3,
                     a4,
                     a5);
            if ( (*(_BYTE *)(v315 + 74) & 1) == 0 && (*(_QWORD *)(v315 + 128) & 0xFFFFFFFFFFFFFFF8LL) == 0
              || *(char *)(sub_F60F10(v303, a2, v316, v317, a5) + 76) < 0 )
            {
              v6 = v334;
              goto LABEL_50;
            }
            break;
          case 10:
            break;
          default:
            goto LABEL_50;
        }
        v6 = v334;
LABEL_51:
        sub_C3DC60((__int64)v341, (unsigned __int64)v6, *(_QWORD *)(*(_QWORD *)a1 + 8LL), 0, a5, a6);
        sub_E47200(a1, v8, (__int64)v341);
        if ( LODWORD(v341[1]) > 0x40 )
        {
          v47 = v341[0];
          if ( v341[0] )
LABEL_196:
            operator delete[](v47);
        }
        goto LABEL_29;
      case 3LL:
        sub_E38280((__int64)&v337);
        v40 = (const char *)sub_10CCE10((unsigned __int8)(v6[1] >> 3));
        v41 = 0;
        v42 = v40;
        if ( v40 )
          v41 = j__strlen(v40);
        sub_E39500(*(_QWORD *)(a1 + 8), v42, v41);
        v43 = &v6[28 * ((((unsigned __int8)BYTE3(*(_QWORD *)v6) >> 3) ^ 1) & 1) + 12];
        v44 = &v43[4 * *((unsigned int *)v6 + 1)];
        while ( v44 != v43 )
        {
          v45 = *(_QWORD **)v43;
          v43 += 4;
          sub_E3FB80(a1, *v45);
        }
        v31 = *(_QWORD *)(a1 + 8);
        v46 = *(_BYTE **)(v31 + 32);
        if ( (unsigned __int64)v46 >= *(_QWORD *)(v31 + 24) )
          goto LABEL_342;
        *(_QWORD *)(v31 + 32) = v46 + 1;
        *v46 = 69;
        goto LABEL_29;
      case 4LL:
        sub_E38280((__int64)&v337);
        sub_995540(*(_QWORD *)(a1 + 8), "_SUBSTPACK_");
        goto LABEL_29;
      case 5LL:
        a3 = *((unsigned __int16 **)v6 + 2);
        v10 = *a3;
        LOWORD(v10) = v10 & 0x1FF;
        if ( (_WORD)v10 == 61 )
        {
          v35 = *(_QWORD *)a1;
          v330 = *((char **)v6 + 2);
          v36 = sub_C959C0((__int64)v6, *(_QWORD *)(v35 + 8));
          sub_BF7B00((__int64)v341, (__int64)v330, (__int64)v330, v37, v38, v39, (int)v330, v331, v332);
          sub_E53C20(a1, v36, v341, 0, 1);
          if ( LODWORD(v341[0]) > 1 )
            sub_A4F8E0((int *)v341);
          goto LABEL_29;
        }
        v6 = *((unsigned __int16 **)v6 + 2);
        continue;
      case 6LL:
        v163 = *(_QWORD *)(a1 + 8);
        v164 = *(_BYTE **)(v163 + 32);
        if ( (unsigned __int64)v164 >= *(_QWORD *)(v163 + 24) )
        {
          sub_227BA10(v163, 76);
        }
        else
        {
          *(_QWORD *)(v163 + 32) = v164 + 1;
          *v164 = 76;
        }
        sub_E3FB80(a1, *((_QWORD *)v6 + 1));
        v31 = *(_QWORD *)(a1 + 8);
        v165 = *(_BYTE **)(v31 + 32);
        if ( (unsigned __int64)v165 >= *(_QWORD *)(v31 + 24) )
          goto LABEL_342;
        *(_QWORD *)(v31 + 32) = v165 + 1;
        *v165 = 69;
        goto LABEL_29;
      case 9LL:
        sub_E38280((__int64)&v337);
        if ( (*(_DWORD *)v6 & 0x20000) == 0 || !*((_DWORD *)v6 + 7) )
        {
          sub_995540(*(_QWORD *)(a1 + 8), "sZ");
          v245 = *((_QWORD *)v6 + 4);
          v246 = *(_BYTE *)(v245 + 28) & 0x7F;
          switch ( v246 )
          {
            case 'C':
              v247 = sub_BBE5B0(*((_QWORD *)v6 + 4));
              v248 = sub_BBE590(v245);
              sub_E38400((__int64 *)(a1 + 8), (_DWORD *)(a1 + 36), v248, v247);
              break;
            case '/':
              sub_E38400(
                (__int64 *)(a1 + 8),
                (_DWORD *)(a1 + 36),
                *(_DWORD *)(v245 + 68) & 0xFFFFF,
                *(_WORD *)(v245 + 70) >> 4);
              break;
            case 'D':
              sub_E38400(
                (__int64 *)(a1 + 8),
                (_DWORD *)(a1 + 36),
                *(_DWORD *)(v245 + 64) & 0xFFFFF,
                *(_WORD *)(v245 + 66) >> 4);
              break;
            default:
              sub_E4BB60(a1, *((_QWORD *)v6 + 4));
              break;
          }
          goto LABEL_29;
        }
        v157 = v6 + 20;
        sub_995540(*(_QWORD *)(a1 + 8), "sP");
        v162 = (__int64)&v6[12 * *((unsigned int *)v6 + 7) + 20];
        if ( (unsigned __int16 *)v162 != v6 + 20 )
        {
          do
          {
            v329 = *((_QWORD *)v157 + 2);
            *((_QWORD *)&v328 + 1) = *((_QWORD *)v157 + 1);
            v157 += 12;
            *(_QWORD *)&v328 = *((_QWORD *)v157 - 3);
            sub_E4F6D0(a1, 0, v158, v159, v160, v161, v328, v329);
          }
          while ( (unsigned __int16 *)v162 != v157 );
        }
        goto LABEL_175;
      case 11LL:
        sub_E38280((__int64)&v337);
        sub_995540(*(_QWORD *)(a1 + 8), "u33__builtin_sycl_unique_stable_name");
        sub_E3FB80(a1, **((_QWORD **)v6 + 4));
        sub_995540(*(_QWORD *)(a1 + 8), "E");
        goto LABEL_29;
      case 12LL:
        sub_E38280((__int64)&v337);
        v97 = *(_QWORD *)(a1 + 8);
        if ( *((_DWORD *)v6 + 8) )
        {
          v98 = (unsigned __int64)"rQ";
          sub_995540(v97, "rQ");
          v101 = *(_DWORD *)(a1 + 44);
          *(_DWORD *)(a1 + 44) = (v101 & 0xFFFFFFFE) + 2;
          if ( *((_DWORD *)v6 + 4) )
          {
            v300 = v6 + 24;
            v301 = (__int64)&v6[4 * *((unsigned int *)v6 + 4) + 24];
            do
            {
              v300 += 4;
              v98 = sub_A75E60(*(_QWORD **)(*(_QWORD *)a1 + 8LL), *(_QWORD *)(*((_QWORD *)v300 - 1) + 48LL));
              sub_E3FB80(a1, v98);
            }
            while ( (unsigned __int16 *)v301 != v300 );
          }
          else
          {
            v102 = *(_QWORD *)(a1 + 8);
            v103 = *(_BYTE **)(v102 + 32);
            if ( (unsigned __int64)v103 >= *(_QWORD *)(v102 + 24) )
            {
              v98 = 118;
              sub_227BA10(v102, 118);
            }
            else
            {
              *(_QWORD *)(v102 + 32) = v103 + 1;
              *v103 = 118;
            }
          }
          v104 = *(_QWORD *)(a1 + 8);
          v105 = *(_BYTE **)(v104 + 32);
          if ( (unsigned __int64)v105 >= *(_QWORD *)(v104 + 24) )
          {
            v98 = 95;
            sub_227BA10(v104, 95);
          }
          else
          {
            v106 = (__int64)(v105 + 1);
            *(_QWORD *)(v104 + 32) = v105 + 1;
            *v105 = 95;
          }
          *(_DWORD *)(a1 + 44) |= 1u;
          v107 = &v6[4 * *((unsigned int *)v6 + 4) + 24];
          v108 = &v107[4 * *((unsigned int *)v6 + 5)];
          while ( v108 != v107 )
          {
            v109 = *(_QWORD *)v107;
            v107 += 4;
            v98 = (unsigned int)sub_C00A40((unsigned __int64)v6, v98, v106, v99, v100);
            sub_E57850(a1, v98, v109);
          }
          v31 = *(_QWORD *)(a1 + 8);
          *(_DWORD *)(a1 + 44) = v101;
          v110 = *(_BYTE **)(v31 + 32);
          if ( (unsigned __int64)v110 < *(_QWORD *)(v31 + 24) )
          {
            *(_QWORD *)(v31 + 32) = v110 + 1;
            *v110 = 69;
            goto LABEL_29;
          }
        }
        else
        {
          v263 = (__int64)"rq";
          sub_995540(v97, "rq");
          v267 = &v6[4 * *((unsigned int *)v6 + 4) + 24];
          v268 = &v267[4 * *((unsigned int *)v6 + 5)];
          while ( v268 != v267 )
          {
            v269 = *(_QWORD *)v267;
            v267 += 4;
            v263 = (unsigned int)sub_C00A40((unsigned __int64)v6, v263, v264, v265, v266);
            sub_E57850(a1, v263, v269);
          }
          v31 = *(_QWORD *)(a1 + 8);
          v270 = *(_BYTE **)(v31 + 32);
          if ( (unsigned __int64)v270 < *(_QWORD *)(v31 + 24) )
          {
            *(_QWORD *)(v31 + 32) = v270 + 1;
            *v270 = 69;
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
        sub_E38280((__int64)&v337);
        sub_995540(*(_QWORD *)(a1 + 8), "sp");
        sub_E486B0(a1, *((_QWORD *)v6 + 3), 0xFFFFFFFFLL, 0);
        goto LABEL_29;
      case 20LL:
        sub_E38280((__int64)&v337);
        v77 = *(_QWORD *)v6;
        if ( (*(_QWORD *)v6 & 0x80000) != 0
          && ((v271 = *((unsigned int *)v6 + 1), (*v6 & 0x1FF) != 0x18)
            ? (v272 = &v6[4 * v271 + 40])
            : (v272 = &v6[4 * v271 + 32]),
              *(_DWORD *)v272) )
        {
          if ( (v77 & 0x80000) == 0 )
            BUG();
          v78 = *((_DWORD *)v272 + 3);
        }
        else
        {
          v78 = 0;
        }
        v79 = v77 >> 16;
        if ( (v79 & 8) == 0 )
          goto LABEL_83;
        v256 = *((unsigned int *)v6 + 1);
        if ( (*v6 & 0x1FF) == 0x18 )
        {
          if ( *(_DWORD *)&v6[4 * v256 + 32] )
          {
            v80 = &v6[8 * ((v79 & 8) != 0) + 32 + 4 * v256];
            goto LABEL_84;
          }
        }
        else if ( *(_DWORD *)&v6[4 * v256 + 40] )
        {
          v80 = &v6[8 * ((v79 & 8) != 0) + 40 + 4 * v256];
LABEL_84:
          v81 = *((_QWORD *)v6 + 5);
          v330 = *((char **)v6 + 2);
          LODWORD(v331) = HIWORD(*(_DWORD *)v6);
          if ( !(unsigned __int8)sub_C95850((__int64)v6) )
          {
            v82 = *((_QWORD *)v6 + 7);
            if ( v82 )
              sub_E4BD20(a1, v82, (v331 & 0x10) != 0);
          }
          sub_E57A80(a1, v81, v330, v80, v78, v7, v330);
          goto LABEL_29;
        }
LABEL_83:
        v80 = nullptr;
        goto LABEL_84;
      case 21LL:
        sub_E38280((__int64)&v337);
        v71 = *(_QWORD *)v6;
        if ( (*(_QWORD *)v6 & 0x80000) != 0
          && ((v273 = *((unsigned int *)v6 + 1), (*v6 & 0x1FF) != 0x18)
            ? (v274 = &v6[4 * v273 + 40])
            : (v274 = &v6[4 * v273 + 32]),
              *(_DWORD *)v274) )
        {
          if ( (v71 & 0x80000) == 0 )
            BUG();
          v72 = *((unsigned int *)v274 + 3);
        }
        else
        {
          v72 = 0;
        }
        v73 = v71 >> 16;
        if ( (v73 & 8) == 0 )
          goto LABEL_282;
        v74 = *((unsigned int *)v6 + 1);
        if ( (*v6 & 0x1FF) == 0x18 )
        {
          v75 = 4 * v74;
          if ( *(_DWORD *)&v6[v75 + 32] )
          {
            v76 = &v6[8 * ((v73 & 8) != 0) + 32 + v75];
            goto LABEL_79;
          }
        }
        else
        {
          v310 = 4 * v74;
          if ( *(_DWORD *)&v6[v310 + 40] )
          {
            v76 = &v6[8 * ((v73 & 8) != 0) + 40 + v310];
LABEL_79:
            sub_E57A80(a1, *((_QWORD *)v6 + 5), *((_QWORD *)v6 + 2), v76, v72, v7, v330);
            goto LABEL_29;
          }
        }
LABEL_282:
        v76 = nullptr;
        goto LABEL_79;
      case 22LL:
        v69 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
        v70 = sub_E39F30(*(_QWORD *)(v69 + 32), 4, "cannot yet mangle OpenACC Asterisk Size expression", 50);
        sub_FC70B0(v341, v69, 0, v70);
        sub_AEA040((__int64)v341);
        return;
      case 37LL:
        sub_995540(*(_QWORD *)(a1 + 8), "Lb");
        v65 = *(_QWORD *)(a1 + 8);
        v66 = 49 - (*((_BYTE *)v6 + 16) == 0);
        v67 = *(_BYTE **)(v65 + 32);
        if ( (unsigned __int64)v67 >= *(_QWORD *)(v65 + 24) )
        {
          sub_227BA10(v65, 49 - (unsigned int)(*((_BYTE *)v6 + 16) == 0));
        }
        else
        {
          *(_QWORD *)(v65 + 32) = v67 + 1;
          *v67 = v66;
        }
        v31 = *(_QWORD *)(a1 + 8);
        v68 = *(_BYTE **)(v31 + 32);
        if ( (unsigned __int64)v68 >= *(_QWORD *)(v31 + 24) )
          goto LABEL_342;
        *(_QWORD *)(v31 + 32) = v68 + 1;
        *v68 = 69;
        goto LABEL_29;
      case 43LL:
        sub_E38280((__int64)&v337);
        v57 = *(_QWORD *)v6;
        if ( (*(_QWORD *)v6 & 0x400000LL) != 0
          && (v58 = &v6[8 * ((*(_QWORD *)v6 & 0x100000LL) != 0) + 4 * ((*(_QWORD *)v6 & 0x200000LL) != 0)],
              *((_DWORD *)v58 + 12)) )
        {
          v59 = *((unsigned int *)v58 + 15);
        }
        else
        {
          v59 = 0;
        }
        if ( (v57 & 0x400000) != 0
          && (v275 = 4LL * ((v57 & 0x200000) != 0), *(_DWORD *)&v6[8 * ((v57 & 0x100000) != 0) + 24 + v275]) )
        {
          v60 = &v6[8 * ((v57 & 0x100000) != 0) + 24 + 8 * (unsigned __int64)((v57 & 0x400000) != 0) + v275];
        }
        else
        {
          v60 = nullptr;
        }
        v61 = 0;
        v62 = *(_QWORD *)(*((_QWORD *)v6 + 3) + 40LL);
        if ( (v57 & 0x100000) != 0 )
          v61 = *((_QWORD *)v6 + 6);
        v63 = *((_QWORD *)v6 + 2);
        v64 = v57 >> 16;
        if ( v63 )
        {
          LODWORD(v330) = v59;
          sub_E4BD20(a1, v63, (v64 & 8) != 0);
          v59 = (unsigned int)v330;
        }
        sub_E57A80(a1, v61, v62, v60, v59, v7, v330);
        goto LABEL_29;
      case 44LL:
        sub_E38280((__int64)&v337);
        sub_995540(*(_QWORD *)(a1 + 8), "ixix");
        sub_E486B0(a1, *((_QWORD *)v6 + 2), 0xFFFFFFFFLL, 0);
        sub_E486B0(a1, *((_QWORD *)v6 + 3), 0xFFFFFFFFLL, 0);
        sub_E486B0(a1, *((_QWORD *)v6 + 4), 0xFFFFFFFFLL, 0);
        goto LABEL_29;
      case 45LL:
        v184 = *((_QWORD *)v6 + 2);
        if ( (v184 & 4) != 0 )
        {
          v6 = *(unsigned __int16 **)((v184 & 0xFFFFFFFFFFFFFFF8LL) + 40);
          v10 = *v6;
        }
        else
        {
          v185 = (unsigned __int16 *)(v184 & 0xFFFFFFFFFFFFFFF8LL);
          v10 = *v185;
          v6 = v185;
        }
        LOWORD(v10) = v10 & 0x1FF;
        continue;
      case 48LL:
        sub_995540(*(_QWORD *)(a1 + 8), "L");
        v177 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
        v178 = sub_C95330((__int64)v6);
        v183 = sub_A7A9D0(v177, v178, v179, v180, v181, v182);
        sub_E3FB80(a1, v183);
        sub_995540(*(_QWORD *)(a1 + 8), "E");
        goto LABEL_29;
      case 49LL:
        sub_E386B0((__int64)v341, *((_QWORD *)v6 + 2), *((_DWORD *)v6 + 6));
        LODWORD(v339[1]) = v341[1];
        v339[0] = v341[0];
        BYTE4(v339[1]) = (unsigned __int8)sub_F65140(*(_QWORD *)(*((_QWORD *)v6 + 1) & 0xFFFFFFFFFFFFFFF0LL)) == 0;
        sub_E47200(a1, *((_QWORD *)v6 + 1), (__int64)v339);
        if ( LODWORD(v339[1]) > 0x40 )
        {
          v47 = v339[0];
          if ( v339[0] )
            goto LABEL_196;
        }
        goto LABEL_29;
      case 50LL:
        sub_E38280((__int64)&v337);
        sub_995540(*(_QWORD *)(a1 + 8), "il");
        sub_E4C470(a1);
        sub_995540(*(_QWORD *)(a1 + 8), "E");
        goto LABEL_29;
      case 52LL:
        v12 = *(_QWORD *)(a1 + 8);
        v13 = *(_BYTE **)(v12 + 32);
        if ( (unsigned __int64)v13 >= *(_QWORD *)(v12 + 24) )
        {
          sub_227BA10(v12, 76);
        }
        else
        {
          *(_QWORD *)(v12 + 32) = v13 + 1;
          *v13 = 76;
        }
        sub_E3FB80(a1, *((_QWORD *)v6 + 1));
        v14 = *((_QWORD *)v6 + 2);
        if ( (*(_WORD *)v14 & 0x1FF) == 0x3E )
        {
          v15 = (void **)(*(_BYTE *)(v14 + 2) >> 3);
          v16 = sub_21F8CF0(v15);
          v17 = *(void **)(v14 + 16);
          v18 = v16;
          v19 = *(unsigned int *)(v14 + 24);
          v20 = (v19 + 63) >> 6;
          if ( v20 > 1 )
          {
            v15 = v341;
            sub_2205610(v341, v19, v20, v17);
          }
          else
          {
            LODWORD(v341[1]) = *(_DWORD *)(v14 + 24);
            if ( (unsigned int)v19 > 0x40 )
            {
              v19 = (unsigned __int64)v17;
              v15 = v341;
              sub_2205470(v341, v17, 0);
            }
            else
            {
              v341[0] = v17;
            }
          }
          v21 = sub_21F90D0(v15, v19, v20);
          v22 = (void *)v21;
          if ( v18 == v21 )
            sub_21FFDA0(v339, v21, v341);
          else
            sub_21FF7D0(v339, v18, v341);
          if ( LODWORD(v341[1]) > 0x40 && v341[0] )
            operator delete[](v341[0]);
          if ( v339[0] == v22 )
            sub_21FFBD0(v341, v22);
          else
            sub_21FBA00(v341, v339[0]);
          sub_E38700((_QWORD *)(a1 + 8), v341, v23);
          sub_9955A0(v341);
          sub_9955A0(v339);
          v24 = *(_QWORD *)(a1 + 8);
          v25 = *(_BYTE **)(v24 + 32);
          if ( (unsigned __int64)v25 >= *(_QWORD *)(v24 + 24) )
          {
            sub_227BA10(v24, 95);
          }
          else
          {
            *(_QWORD *)(v24 + 32) = v25 + 1;
            *v25 = 95;
          }
          v26 = sub_21F8CF0(*(_BYTE *)(v14 + 2) >> 3);
          v27 = *(void **)(v14 + 16);
          v28 = *(unsigned int *)(v14 + 24);
          v29 = (unsigned __int64)(v28 + 63) >> 6;
          if ( v29 > 1 )
          {
            v330 = (char *)v26;
            sub_2205610(v339, v28, v29, v27);
            v26 = (__int64)v330;
          }
          else
          {
            LODWORD(v339[1]) = *(_DWORD *)(v14 + 24);
            if ( (unsigned int)v28 > 0x40 )
            {
              v330 = (char *)v26;
              sub_2205470(v339, v27, 0);
              v26 = (__int64)v330;
            }
            else
            {
              v339[0] = v27;
            }
          }
          if ( v22 == (void *)v26 )
            sub_21FFDA0(v341, v22, v339);
          else
            sub_21FF7D0(v341, v26, v339);
          if ( LODWORD(v339[1]) > 0x40 && v339[0] )
            operator delete[](v339[0]);
          sub_E38700((_QWORD *)(a1 + 8), v341, v30);
          sub_9955A0(v341);
        }
        else
        {
          sub_995540(*(_QWORD *)(a1 + 8), "0_");
          sub_E386B0((__int64)v341, *(_QWORD *)(*((_QWORD *)v6 + 2) + 16LL), *(_DWORD *)(*((_QWORD *)v6 + 2) + 24LL));
          LODWORD(v339[1]) = v341[1];
          v339[0] = v341[0];
          BYTE4(v339[1]) = (unsigned __int8)sub_F65140(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 2) + 8LL)
                                                                 & 0xFFFFFFFFFFFFFFF0LL)) == 0;
          sub_E38510((_QWORD *)(a1 + 8), (__int64)v339);
          if ( LODWORD(v339[1]) > 0x40 && v339[0] )
            operator delete[](v339[0]);
        }
        v31 = *(_QWORD *)(a1 + 8);
        v32 = *(_BYTE **)(v31 + 32);
        if ( (unsigned __int64)v32 >= *(_QWORD *)(v31 + 24) )
          goto LABEL_342;
        *(_QWORD *)(v31 + 32) = v32 + 1;
        *v32 = 69;
        goto LABEL_29;
      case 55LL:
        LODWORD(v341[1]) = 32;
        v341[0] = nullptr;
        BYTE4(v341[1]) = 1;
        sub_E47200(a1, *((_QWORD *)v6 + 1), (__int64)v341);
        if ( LODWORD(v341[1]) > 0x40 )
        {
          v47 = v341[0];
          if ( v341[0] )
            goto LABEL_196;
        }
        goto LABEL_29;
      case 56LL:
        sub_E38280((__int64)&v337);
        sub_995540(*(_QWORD *)(a1 + 8), "v110_SUBSTPACK");
        sub_E52560(&v335, &v336, *((_QWORD *)v6 + 2));
        goto LABEL_29;
      case 57LL:
      case 58LL:
      case 96LL:
        goto LABEL_36;
      case 59LL:
        v149 = (void **)(*((_BYTE *)v6 + 2) >> 3);
        v150 = sub_21F8CF0(v149);
        v151 = *((void **)v6 + 2);
        v152 = v150;
        v153 = *((unsigned int *)v6 + 6);
        v154 = (v153 + 63) >> 6;
        if ( v154 > 1 )
        {
          v149 = v339;
          sub_2205610(v339, v153, v154, v151);
        }
        else
        {
          LODWORD(v339[1]) = *((_DWORD *)v6 + 6);
          if ( (unsigned int)v153 > 0x40 )
          {
            v153 = (unsigned __int64)v151;
            v149 = v339;
            sub_2205470(v339, v151, 0);
          }
          else
          {
            v339[0] = v151;
          }
        }
        if ( v152 == sub_21F90D0(v149, v153, v154) )
          sub_21FFDA0(v341, v152, v339);
        else
          sub_21FF7D0(v341, v152, v339);
        if ( LODWORD(v339[1]) > 0x40 && v339[0] )
          operator delete[](v339[0]);
        sub_E47180(a1, *((_QWORD *)v6 + 1), v341);
        sub_9955A0(v341);
        goto LABEL_29;
      case 60LL:
        sub_E397E0(*(_QWORD *)a1);
        goto LABEL_29;
      case 65LL:
        sub_E38280((__int64)&v337);
        v142 = *((_DWORD **)v6 + 3);
        for ( i = &v142[6 * (v6[10] >> 1)]; i != v142; v142 += 6 )
        {
          v144 = *(_QWORD *)(a1 + 8);
          if ( *v142 )
          {
            if ( *v142 == 1 )
            {
              sub_995540(v144, "dx");
              v146 = sub_C033F0((__int64)v6, (__int64)v142);
            }
            else
            {
              sub_995540(v144, "dX");
              v145 = sub_C03400((__int64)v6, (__int64)v142);
              sub_E486B0(a1, v145, 0xFFFFFFFFLL, 0);
              v146 = sub_C03410((__int64)v6, (__int64)v142);
            }
            sub_E486B0(a1, v146, 0xFFFFFFFFLL, 0);
          }
          else
          {
            sub_995540(v144, "di");
            v244 = sub_C00930((__int64)v142);
            sub_E39490(*(_QWORD *)(a1 + 8), v244);
          }
        }
        sub_EE9E50(v341, v6);
        si128 = _mm_load_si128((const __m128i *)v341);
        v340 = v342;
        *(__m128i *)v339 = si128;
        v148 = (_QWORD *)si128.m128i_i64[0];
        if ( (si128.m128i_i8[8] & 3) != 0 )
          v148 = (_QWORD *)sub_EF2B30(v339);
        sub_E486B0(a1, *v148, 0xFFFFFFFFLL, 0);
        goto LABEL_29;
      case 66LL:
        sub_E38280((__int64)&v337);
        if ( (*(_DWORD *)v6 & 0x80000) != 0 )
        {
          v155 = *((unsigned int *)v6 + 14);
          v156 = 0;
          if ( (_DWORD)v155 )
          {
            v155 = *((unsigned int *)v6 + 17);
            v156 = (__int64)&v6[8 * ((*(_DWORD *)v6 & 0x80000) != 0) + 28];
          }
        }
        else
        {
          v155 = 0;
          v156 = 0;
        }
        sub_E57A80(a1, *((_QWORD *)v6 + 2), *((_QWORD *)v6 + 4), v156, v155, v7, v330);
        goto LABEL_29;
      case 67LL:
      case 70LL:
        sub_E38280((__int64)&v337);
        sub_995540(*(_QWORD *)(a1 + 8), "v18co_await");
        sub_E486B0(a1, *((_QWORD *)v6 + 3), 0xFFFFFFFFLL, 0);
        goto LABEL_29;
      case 68LL:
        sub_E52560(&v335, &v336, *((_QWORD *)v6 + 2));
        goto LABEL_29;
      case 69LL:
        sub_E38280((__int64)&v337);
        sub_995540(*(_QWORD *)(a1 + 8), "v18co_yield");
        sub_E486B0(a1, *((_QWORD *)v6 + 3), 0xFFFFFFFFLL, 0);
        goto LABEL_29;
      case 72LL:
        if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 8LL) + 2320LL) + 212LL) > 0x9Fu )
        {
          sub_E38280((__int64)&v337);
          sub_E57A80(
            a1,
            **((_QWORD **)v6 + 2),
            *(_QWORD *)(*((_QWORD *)v6 + 2) + 24LL),
            *(_QWORD *)(*((_QWORD *)v6 + 2) + 64LL) + 16LL,
            *(unsigned int *)(*(_QWORD *)(*((_QWORD *)v6 + 2) + 64LL) + 8LL),
            0xFFFFFFFFLL,
            v330);
        }
        else
        {
          sub_995540(*(_QWORD *)(a1 + 8), "L_Z");
          sub_E57290(
            a1,
            *(_QWORD *)(*((_QWORD *)v6 + 2) + 56LL),
            *((_QWORD *)v6 + 3) + 40LL,
            *(unsigned int *)(*((_QWORD *)v6 + 3) + 36LL));
          v31 = *(_QWORD *)(a1 + 8);
          v220 = *(_BYTE **)(v31 + 32);
          if ( (unsigned __int64)v220 >= *(_QWORD *)(v31 + 24) )
            goto LABEL_342;
          *(_QWORD *)(v31 + 32) = v220 + 1;
          *v220 = 69;
        }
        goto LABEL_29;
      case 75LL:
        v217 = *(_QWORD *)(a1 + 8);
        v218 = *(_BYTE **)(v217 + 32);
        if ( (unsigned __int64)v218 >= *(_QWORD *)(v217 + 24) )
        {
          sub_227BA10(v217, 76);
        }
        else
        {
          *(_QWORD *)(v217 + 32) = v218 + 1;
          *v218 = 76;
        }
        sub_E3FB80(a1, *((_QWORD *)v6 + 1));
        sub_227B910(*(_QWORD *)(a1 + 8), *((unsigned int *)v6 + 4));
        v31 = *(_QWORD *)(a1 + 8);
        v219 = *(_BYTE **)(v31 + 32);
        if ( (unsigned __int64)v219 >= *(_QWORD *)(v31 + 24) )
          goto LABEL_342;
        *(_QWORD *)(v31 + 32) = v219 + 1;
        *v219 = 69;
        goto LABEL_29;
      case 76LL:
        v8 = *((_QWORD *)v6 + 1);
LABEL_36:
        v6 = *((unsigned __int16 **)v6 + 2);
        v10 = *v6;
        LOWORD(v10) = v10 & 0x1FF;
        continue;
      case 77LL:
        sub_E38280((__int64)&v337);
        v222 = sub_C9AE20((__int64)v6);
        v224 = v223;
        v225 = v222;
        v226 = sub_995540(*(_QWORD *)(a1 + 8), "v1U");
        v227 = sub_227B910(v226, v224);
        sub_9954E0(v227, v225, v224);
        v228 = j__strlen("cv");
        sub_E4CCC0(a1, v6, "cv", v228);
        goto LABEL_29;
      case 78LL:
        sub_E38280((__int64)&v337);
        v221 = j__strlen("sc");
        sub_E4CCC0(a1, v6, "sc", v221);
        goto LABEL_29;
      case 79LL:
        sub_E38280((__int64)&v337);
        v229 = j__strlen("rc");
        sub_E4CCC0(a1, v6, "rc", v229);
        goto LABEL_29;
      case 80LL:
        sub_E38280((__int64)&v337);
        v141 = j__strlen("dc");
        sub_E4CCC0(a1, v6, "dc", v141);
        goto LABEL_29;
      case 81LL:
        sub_E38280((__int64)&v337);
        v134 = j__strlen("cc");
        sub_E4CCC0(a1, v6, "cc", v134);
        goto LABEL_29;
      case 82LL:
        sub_E38280((__int64)&v337);
        v133 = j__strlen("ac");
        sub_E4CCC0(a1, v6, "ac", v133);
        goto LABEL_29;
      case 83LL:
        sub_E38280((__int64)&v337);
        v135 = sub_BFB900(*((_QWORD *)v6 + 2));
        v136 = *(_WORD *)v135 & 0x1FF;
        if ( (unsigned int)v136 - 113 <= 1 && (!*(_DWORD *)(v135 + 28) || !*(_DWORD *)(v135 + 24)) )
        {
          v137 = (unsigned __int64 *)(v135 + 48);
          v138 = (unsigned __int64 *)(v135 + 40);
          v139 = v136 == 114;
          v140 = v137;
          if ( !v139 )
            v140 = v138;
          v135 = sub_BFB900(*v140);
          v136 = *(_WORD *)v135 & 0x1FF;
        }
        if ( v136 == 99 )
          v136 = *(_WORD *)sub_BFB900(*(_QWORD *)(v135 + 16)) & 0x1FF;
        if ( v136 == 53 )
          goto LABEL_106;
        v276 = j__strlen("cv");
        sub_E4CCC0(a1, v6, "cv", v276);
        goto LABEL_29;
      case 84LL:
        sub_E38280((__int64)&v337);
        v132 = j__strlen("cv");
        sub_E4CCC0(a1, v6, "cv", v132);
        goto LABEL_29;
      case 86LL:
      case 87LL:
      case 89LL:
        sub_E38280((__int64)&v337);
        v119 = *((_QWORD *)v6 + 4);
        v120 = sub_BFB9F0(v119);
        if ( v119 == v120 || (*(_WORD *)v120 & 0x1FF) != 0x18 || *(_QWORD *)(v120 + 40) )
          goto LABEL_119;
        if ( !*(_DWORD *)(v120 + 4) )
          goto LABEL_389;
        v323 = *(_QWORD *)((*(_QWORD *)(v120 + 64) & 0xFFFFFFFFFFFFFFF8LL) + 16);
        v324 = v323 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v323 & 4) != 0 )
          v324 = *(_QWORD *)v324;
        if ( (*(_BYTE *)(v324 + 8) & 0x7F) == 0x3E )
          v324 = sub_B8EAA0(v324);
        if ( ((*(_BYTE *)(v324 + 8) + 70) & 0x7Fu) <= 3 )
LABEL_119:
          sub_995540(*(_QWORD *)(a1 + 8), "cl");
        else
LABEL_389:
          sub_995540(*(_QWORD *)(a1 + 8), "cp");
        v121 = *((unsigned int *)v6 + 4);
        v122 = 8 * (((v6[1] & 8) != 0) + 1LL) + 32;
        v123 = v122 + 8 * v121;
        v124 = (_WORD **)((char *)v6 + v122);
        for ( j = (_WORD **)((char *)v6 + v123); j != v124; ++v124 )
        {
          if ( (**v124 & 0x1FF) == 0x16 )
            v121 = 0xFFFFFFFFLL;
        }
        sub_E486B0(a1, *((_QWORD *)v6 + 4), v121, 0);
        v126 = 8 * (((v6[1] & 8) != 0) + 1LL) + 32;
        v127 = v126 + 8LL * *((unsigned int *)v6 + 4);
        v128 = (__int64 *)((char *)v6 + v126);
        v129 = (__int64 *)((char *)v6 + v127);
        while ( v129 != v128 )
        {
          v130 = *v128++;
          sub_E486B0(a1, v130, 0xFFFFFFFFLL, 0);
        }
        v31 = *(_QWORD *)(a1 + 8);
        v131 = *(_BYTE **)(v31 + 32);
        if ( *(_QWORD *)(v31 + 24) <= (unsigned __int64)v131 )
          goto LABEL_342;
        *(_QWORD *)(v31 + 32) = v131 + 1;
        *v131 = 69;
        goto LABEL_29;
      case 88LL:
        sub_E38280((__int64)&v337);
        v116 = *((_DWORD *)v6 + 4);
        v117 = (*((_BYTE *)v6 + 3) >> 1) & 0x3F;
        if ( (_DWORD)v117 != 41 )
          sub_E3A240((__int64 *)(a1 + 8), v117, v116);
        if ( v116 )
        {
          v118 = 0;
          do
          {
            v118 += 8LL;
            sub_E486B0(a1, *(_QWORD *)&v6[4 * ((v6[1] & 8) != 0) + 16 + v118 / 2], 0xFFFFFFFFLL, 0);
          }
          while ( 8LL * (unsigned int)(v116 - 1) + 8 != v118 );
        }
        goto LABEL_29;
      case 91LL:
        sub_E38280((__int64)&v337);
        v114 = *(_QWORD **)(*(_QWORD *)a1 + 8LL);
        if ( *(_BYTE *)(v114[290] + 212LL) <= 0x5Fu )
        {
          v115 = *((_QWORD *)v6 + 2);
          if ( (v115 & 4) != 0 )
          {
            v302 = sub_C93E70((__int64)v6, v114, v111, v112, v113);
            sub_995540(*(_QWORD *)(a1 + 8), "u8__uuidoft");
            sub_E3FB80(a1, v302);
          }
          else
          {
            sub_995540(*(_QWORD *)(a1 + 8), "u8__uuidofz");
            sub_E486B0(a1, v115 & 0xFFFFFFFFFFFFFFF8LL, 0xFFFFFFFFLL, 0);
          }
          goto LABEL_29;
        }
        sub_995540(*(_QWORD *)(a1 + 8), "u8__uuidof");
        v298 = *((_QWORD *)v6 + 2);
        if ( (v298 & 4) != 0 )
        {
          v314 = sub_C93E70((__int64)v6, *(_QWORD **)(*(_QWORD *)a1 + 8LL), v295, v296, v297);
          sub_E3FB80(a1, v314);
        }
        else
        {
          sub_E52710(a1, v298 & 0xFFFFFFFFFFFFFFF8LL);
        }
        v31 = *(_QWORD *)(a1 + 8);
        v299 = *(_BYTE **)(v31 + 32);
        if ( *(_QWORD *)(v31 + 24) > (unsigned __int64)v299 )
        {
          *(_QWORD *)(v31 + 32) = v299 + 1;
          *v299 = 69;
          goto LABEL_29;
        }
        goto LABEL_342;
      case 92LL:
        sub_E38280((__int64)&v337);
        if ( (v6[8] & 4) != 0 )
        {
LABEL_106:
          sub_995540(*(_QWORD *)(a1 + 8), "tl");
          sub_E3FB80(a1, *((_QWORD *)v6 + 1));
          sub_E4C470(a1);
          sub_995540(*(_QWORD *)(a1 + 8), "E");
        }
        else
        {
          v250 = *((_DWORD *)v6 + 1);
          sub_995540(*(_QWORD *)(a1 + 8), "cv");
          sub_E3FB80(a1, *((_QWORD *)v6 + 1));
          if ( v250 == 1 )
          {
            sub_E486B0(a1, *((_QWORD *)v6 + 4), 0xFFFFFFFFLL, 0);
          }
          else
          {
            v251 = *(_QWORD *)(a1 + 8);
            v252 = *(_BYTE **)(v251 + 32);
            if ( (unsigned __int64)v252 >= *(_QWORD *)(v251 + 24) )
            {
              sub_227BA10(v251, 95);
            }
            else
            {
              *(_QWORD *)(v251 + 32) = v252 + 1;
              *v252 = 95;
            }
            v253 = 0;
            if ( v250 )
            {
              do
              {
                v254 = *(_QWORD *)&v6[4 * v253++ + 16];
                sub_E486B0(a1, v254, 0xFFFFFFFFLL, 0);
              }
              while ( v253 != v250 );
            }
            v31 = *(_QWORD *)(a1 + 8);
            v255 = *(_BYTE **)(v31 + 32);
            if ( (unsigned __int64)v255 >= *(_QWORD *)(v31 + 24) )
            {
LABEL_342:
              sub_227BA10(v31, 69);
            }
            else
            {
              *(_QWORD *)(v31 + 32) = v255 + 1;
              *v255 = 69;
            }
          }
        }
        goto LABEL_29;
      case 93LL:
        sub_E38280((__int64)&v337);
        v231 = *(_QWORD *)(a1 + 8);
        if ( (v6[8] & 4) != 0 )
        {
          sub_995540(v231, "ti");
          v280 = sub_C93DC0((__int64)v6, *(_QWORD **)(*(_QWORD *)a1 + 8LL), v277, v278, v279);
          sub_E3FB80(a1, v280);
        }
        else
        {
          sub_995540(v231, "te");
          sub_E486B0(a1, *((_QWORD *)v6 + 2) & 0xFFFFFFFFFFFFFFF8LL, 0xFFFFFFFFLL, 0);
        }
        goto LABEL_29;
      case 94LL:
        sub_E38280((__int64)&v337);
        v230 = *(_QWORD *)(a1 + 8);
        if ( *((_QWORD *)v6 + 2) )
        {
          sub_995540(v230, "tw");
          sub_E486B0(a1, *((_QWORD *)v6 + 2), 0xFFFFFFFFLL, 0);
        }
        else
        {
          sub_995540(v230, "tr");
        }
        goto LABEL_29;
      case 95LL:
        sub_E38280((__int64)&v337);
        sub_995540(*(_QWORD *)(a1 + 8), "fpT");
        goto LABEL_29;
      case 97LL:
        sub_E38280((__int64)&v337);
        sub_995540(*(_QWORD *)(a1 + 8), "cv");
        sub_E3FB80(a1, *((_QWORD *)v6 + 1));
        sub_995540(*(_QWORD *)(a1 + 8), "_E");
        goto LABEL_29;
      case 98LL:
        sub_E38280((__int64)&v337);
        sub_C93B20((__int64)v341, (__int64)v6);
        v232 = sub_BFAD70((int)v341[0]);
        sub_E3A240((__int64 *)(a1 + 8), v232, 2);
        sub_E486B0(a1, v341[1], 0xFFFFFFFFLL, 0);
        sub_E486B0(a1, v342, 0xFFFFFFFFLL, 0);
        goto LABEL_29;
      case 99LL:
        sub_E38280((__int64)&v337);
        v233 = *((_QWORD *)v6 + 2);
        if ( v233 )
          sub_E4BD20(a1, v233, v6[12] & 1);
        v234 = *((_QWORD **)v6 + 6);
        v235 = *((_QWORD *)v6 + 4);
        if ( v234 )
        {
          if ( v235 )
          {
            sub_E4F320(a1, v235, 1);
            v236 = j__strlen(&byte_22F0C30);
            sub_E4F060(a1, *v234, &byte_22F0C30, v236);
            v237 = *(_QWORD *)(a1 + 8);
            v238 = *(_BYTE **)(v237 + 32);
            if ( *(_QWORD *)(v237 + 24) > (unsigned __int64)v238 )
            {
LABEL_266:
              *(_QWORD *)(v237 + 32) = v238 + 1;
              *v238 = 69;
              goto LABEL_267;
            }
          }
          else
          {
            sub_995540(*(_QWORD *)(a1 + 8), "sr");
            v309 = j__strlen(&byte_22F0C30);
            if ( (unsigned __int8)sub_E4F060(a1, *v234, &byte_22F0C30, v309) )
              goto LABEL_267;
            v237 = *(_QWORD *)(a1 + 8);
            v238 = *(_BYTE **)(v237 + 32);
            if ( *(_QWORD *)(v237 + 24) > (unsigned __int64)v238 )
              goto LABEL_266;
          }
          sub_227BA10(v237, 69);
        }
        else if ( v235 )
        {
          sub_E4F320(a1, v235, 0);
        }
LABEL_267:
        sub_995540(*(_QWORD *)(a1 + 8), "dn");
        v239 = sub_C94110((__int64)v6);
        v240 = j__strlen(&byte_22F0C30);
        sub_E4F060(a1, v239, &byte_22F0C30, v240);
LABEL_29:
        if ( BYTE4(v331) && !v333 )
        {
          v33 = *(_QWORD *)(a1 + 8);
          v34 = *(_BYTE **)(v33 + 32);
          if ( (unsigned __int64)v34 >= *(_QWORD *)(v33 + 24) )
          {
            sub_227BA10(v33, 69);
          }
          else
          {
            *(_QWORD *)(v33 + 32) = v34 + 1;
            *v34 = 69;
          }
        }
        return;
      case 101LL:
        sub_995540(*(_QWORD *)(a1 + 8), "LDnE");
        goto LABEL_29;
      case 102LL:
        sub_E38280((__int64)&v337);
        sub_995540(*(_QWORD *)(a1 + 8), "nx");
        sub_E486B0(a1, *((_QWORD *)v6 + 2), 0xFFFFFFFFLL, 0);
        goto LABEL_29;
      case 103LL:
        sub_E38280((__int64)&v337);
        v199 = *(_QWORD *)v6;
        if ( (*(_QWORD *)v6 & 0x80000) != 0 )
        {
          sub_995540(*(_QWORD *)(a1 + 8), "gs");
          v199 = *(_QWORD *)v6;
        }
        v200 = *(_QWORD *)(a1 + 8);
        v201 = "na";
        if ( (v199 & 0x100000) == 0 )
          v201 = "nw";
        sub_995540(v200, v201);
        v203 = ((*(_QWORD *)v6 >> 20) & 1) + ((*(_QWORD *)v6 >> 24) & 1);
        v204 = (const char **)&v6[4 * v203 + 28];
        v205 = (__int64)&v6[4 * v203 + 28 + 4 * *((unsigned int *)v6 + 1)];
        while ( (const char **)v205 != v204 )
        {
          v201 = *v204++;
          sub_E486B0(a1, v201, 0xFFFFFFFFLL, 0);
        }
        v206 = *(_QWORD *)(a1 + 8);
        v207 = *(_BYTE **)(v206 + 32);
        if ( *(_QWORD *)(v206 + 24) <= (unsigned __int64)v207 )
        {
          v201 = (_BYTE *)(&qword_58 + 7);
          sub_227BA10(v206, 95);
        }
        else
        {
          v208 = v207 + 1;
          *(_QWORD *)(v206 + 32) = v207 + 1;
          *v207 = 95;
        }
        v209 = *(_QWORD *)(*((_QWORD *)v6 + 1) & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v209 + 16) != 42 )
          v209 = sub_F63050(*(_QWORD *)(*((_QWORD *)v6 + 1) & 0xFFFFFFFFFFFFFFF0LL), v201, v208, v202);
        sub_E3FB80(a1, *(_QWORD *)(v209 + 32));
        if ( (*(_QWORD *)v6 & 0x1000000LL) != 0 )
        {
          v210 = *(_QWORD *)(a1 + 8);
          if ( ((*((_BYTE *)v6 + 3) >> 1) & 3) == 2 )
            sub_995540(v210, "il");
          else
            sub_995540(v210, "pi");
          if ( (*(_QWORD *)v6 & 0x1000000) == 0 )
            BUG();
          v211 = *(_QWORD *)&v6[4 * ((*(_QWORD *)v6 >> 20) & 1LL) + 28];
          v212 = *(_WORD *)v211 & 0x1FF;
          if ( (unsigned int)v212 - 113 > 1 )
          {
            if ( v212 == 19 )
            {
              v305 = *(_DWORD *)(v211 + 4);
              if ( v305 )
              {
                v306 = (__int64 *)(v211 + 24);
                v307 = v211 + 8LL * (unsigned int)(v305 - 1) + 32;
                do
                {
                  v308 = *v306++;
                  sub_E486B0(a1, v308, 0xFFFFFFFFLL, 0);
                }
                while ( (__int64 *)v307 != v306 );
              }
            }
            else if ( ((*((_BYTE *)v6 + 3) >> 1) & 3) == 2 && v212 == 53 )
            {
              sub_E4C470(a1);
            }
            else
            {
              sub_E486B0(a1, v211, 0xFFFFFFFFLL, 0);
            }
          }
          else
          {
            v213 = (__int64 *)(v211 + 40);
            if ( v212 == 114 )
              v213 = (__int64 *)(v211 + 48);
            v214 = &v213[*(unsigned int *)(v211 + 32)];
            while ( v214 != v213 )
            {
              v215 = *v213++;
              sub_E486B0(a1, v215, 0xFFFFFFFFLL, 0);
            }
          }
        }
        v31 = *(_QWORD *)(a1 + 8);
        v216 = *(_BYTE **)(v31 + 32);
        if ( *(_QWORD *)(v31 + 24) <= (unsigned __int64)v216 )
          goto LABEL_342;
        *(_QWORD *)(v31 + 32) = v216 + 1;
        *v216 = 69;
        goto LABEL_29;
      case 105LL:
        sub_E38280((__int64)&v337);
        v193 = *((_DWORD **)v6 + 5);
        if ( v193 )
        {
          v194 = *(_QWORD *)(a1 + 8);
          if ( (*v193 & 0x4000) != 0 )
          {
            v195 = "fR";
            if ( !*((_QWORD *)v6 + 6) )
              v195 = "fr";
          }
          else
          {
            v195 = "fL";
          }
        }
        else
        {
          v194 = *(_QWORD *)(a1 + 8);
          v195 = "fl";
        }
        sub_995540(v194, v195);
        v196 = *((_DWORD *)v6 + 1);
        if ( v196 )
        {
          v257 = sub_BFAD70(v196);
          sub_E3A240((__int64 *)(a1 + 8), v257, 2);
        }
        else
        {
          sub_995540(*(_QWORD *)(a1 + 8), "ds");
        }
        v197 = *((_QWORD *)v6 + 5);
        if ( v197 )
          sub_E486B0(a1, v197, 0xFFFFFFFFLL, 0);
        v198 = *((_QWORD *)v6 + 6);
        if ( v198 )
          sub_E486B0(a1, v198, 0xFFFFFFFFLL, 0);
        goto LABEL_29;
      case 106LL:
        sub_E38280((__int64)&v337);
        if ( (*(_QWORD *)v6 & 0x100000LL) != 0 )
        {
          v186 = *((unsigned int *)v6 + 18);
          v187 = 0;
          if ( (_DWORD)v186 )
          {
            v186 = *((unsigned int *)v6 + 21);
            v187 = (__int64)&v6[8 * ((*(_QWORD *)v6 & 0x100000LL) != 0) + 36];
          }
        }
        else
        {
          v186 = 0;
          v187 = 0;
        }
        v188 = *((_QWORD *)v6 + 2);
        v189 = *(_QWORD *)v6 >> 16;
        v190 = *((_QWORD *)v6 + 6);
        v330 = *((char **)v6 + 4);
        if ( v188 )
        {
          LODWORD(v331) = v186;
          v191 = sub_BFE300(v188);
          v186 = (unsigned int)v331;
          if ( !v191 )
          {
            v192 = *((_QWORD *)v6 + 2);
            if ( v192 )
            {
              sub_E4BD20(a1, v192, (v189 & 8) != 0);
              v186 = (unsigned int)v331;
            }
          }
        }
        sub_E57A80(a1, v330, v190, v187, v186, v7, v330);
        goto LABEL_29;
      case 107LL:
        sub_E38280((__int64)&v337);
        v241 = *(_QWORD *)v6;
        if ( (*(_QWORD *)v6 & 0x80000) != 0 )
        {
          sub_995540(*(_QWORD *)(a1 + 8), "gs");
          v241 = *(_QWORD *)v6;
        }
        v242 = "da";
        v243 = *(_QWORD *)(a1 + 8);
        if ( (v241 & 0x100000) == 0 )
          v242 = "dl";
        sub_995540(v243, v242);
        sub_E486B0(a1, *((_QWORD *)v6 + 3), 0xFFFFFFFFLL, 0);
        goto LABEL_29;
      case 108LL:
        v6 = (unsigned __int16 *)sub_C94CC0(v6);
        v10 = *v6;
        LOWORD(v10) = v10 & 0x1FF;
        continue;
      case 109LL:
        v6 = (unsigned __int16 *)sub_C94C80((__int64)v6);
        v10 = *v6;
        LOWORD(v10) = v10 & 0x1FF;
        continue;
      case 110LL:
        if ( (*(_QWORD *)v6 & 0x200000LL) != 0 && (*(_QWORD *)v6 & 0x400000LL) == 0 )
        {
          v325 = (__int64 *)(v6 + 20);
          sub_E38280((__int64)&v337);
          sub_995540(*(_QWORD *)(a1 + 8), "il");
          if ( (*v6 & 0x1FF) == 0x72 )
            v325 = (__int64 *)(v6 + 24);
          v326 = &v325[*((unsigned int *)v6 + 8)];
          while ( v326 != v325 )
          {
            v327 = *v325++;
            sub_E486B0(a1, v327, 0xFFFFFFFFLL, 0);
          }
LABEL_175:
          sub_995540(*(_QWORD *)(a1 + 8), "E");
          goto LABEL_29;
        }
        v6 = *((unsigned __int16 **)v6 + 5);
        v10 = *v6;
        LOWORD(v10) = v10 & 0x1FF;
        continue;
      case 111LL:
        sub_E38280((__int64)&v337);
        v170 = *((_DWORD *)v6 + 8);
        v171 = *(_QWORD *)(a1 + 8);
        if ( (*(_QWORD *)v6 & 0x200000LL) != 0 )
        {
          v172 = 1;
          sub_995540(v171, "tl");
          sub_E3FB80(a1, *((_QWORD *)v6 + 1));
        }
        else
        {
          sub_995540(v171, "cv");
          sub_E3FB80(a1, *((_QWORD *)v6 + 1));
          if ( v170 == 1 )
          {
            v172 = 0;
          }
          else
          {
            v261 = *(_QWORD *)(a1 + 8);
            v262 = *(_BYTE **)(v261 + 32);
            v172 = 1;
            if ( (unsigned __int64)v262 >= *(_QWORD *)(v261 + 24) )
            {
              sub_227BA10(v261, 95);
            }
            else
            {
              *(_QWORD *)(v261 + 32) = v262 + 1;
              *v262 = 95;
            }
          }
        }
        v173 = *v6 & 0x1FF;
        if ( (*(_QWORD *)v6 & 0x400000LL) != 0 )
        {
          if ( v173 == 114 )
            v174 = *((_QWORD *)v6 + 6);
          else
            v174 = *((_QWORD *)v6 + 5);
          v175 = sub_BFB900(v174);
          sub_BFB900(*(_QWORD *)(v175 + 16));
          sub_E4C470(a1);
        }
        else
        {
          v258 = (__int64 *)(v6 + 20);
          if ( v173 == 114 )
            v258 = (__int64 *)(v6 + 24);
          v259 = &v258[*((unsigned int *)v6 + 8)];
          while ( v259 != v258 )
          {
            v260 = *v258++;
            sub_E486B0(a1, v260, 0xFFFFFFFFLL, 0);
          }
        }
        if ( !v172 )
          goto LABEL_29;
        v31 = *(_QWORD *)(a1 + 8);
        v176 = *(_BYTE **)(v31 + 32);
        if ( (unsigned __int64)v176 >= *(_QWORD *)(v31 + 24) )
          goto LABEL_342;
        *(_QWORD *)(v31 + 32) = v176 + 1;
        *v176 = 69;
        goto LABEL_29;
      case 112LL:
        sub_995540(*(_QWORD *)(a1 + 8), "Lb");
        v166 = *(_QWORD *)(a1 + 8);
        v167 = 49 - ((*(_QWORD *)v6 & 0x80000LL) == 0);
        v168 = *(_BYTE **)(v166 + 32);
        if ( (unsigned __int64)v168 >= *(_QWORD *)(v166 + 24) )
        {
          sub_227BA10(v166, 49 - (unsigned int)((*(_QWORD *)v6 & 0x80000LL) == 0));
        }
        else
        {
          *(_QWORD *)(v166 + 32) = v168 + 1;
          *v168 = v167;
        }
        v31 = *(_QWORD *)(a1 + 8);
        v169 = *(_BYTE **)(v31 + 32);
        if ( (unsigned __int64)v169 >= *(_QWORD *)(v31 + 24) )
          goto LABEL_342;
        *(_QWORD *)(v31 + 32) = v169 + 1;
        *v169 = 69;
        goto LABEL_29;
      case 115LL:
      case 116LL:
        sub_E38280((__int64)&v337);
        if ( ((v6[1] >> 3) & 0x3F) != 0 )
        {
          v249 = sub_BFAD70((v6[1] >> 3) & 0x3F);
          sub_E3A240((__int64 *)(a1 + 8), v249, 2);
        }
        else
        {
          sub_995540(*(_QWORD *)(a1 + 8), "ds");
        }
        sub_E486B0(a1, *((_QWORD *)v6 + 2), 0xFFFFFFFFLL, 0);
        sub_E486B0(a1, *((_QWORD *)v6 + 3), 0xFFFFFFFFLL, 0);
        goto LABEL_29;
      case 120LL:
        sub_E38280((__int64)&v337);
        sub_995540(*(_QWORD *)(a1 + 8), "ix");
        sub_E486B0(a1, *((_QWORD *)v6 + 2), 0xFFFFFFFFLL, 0);
        sub_E486B0(a1, *((_QWORD *)v6 + 3), 0xFFFFFFFFLL, 0);
        goto LABEL_29;
      case 125LL:
        sub_E38280((__int64)&v337);
        sub_E3A240((__int64 *)(a1 + 8), 44, 3);
        sub_E486B0(a1, *((_QWORD *)v6 + 3), 0xFFFFFFFFLL, 0);
        sub_E486B0(a1, *((_QWORD *)v6 + 4), v7, 0);
        sub_E486B0(a1, *((_QWORD *)v6 + 5), v7, 0);
        goto LABEL_29;
      case 126LL:
        sub_E38280((__int64)&v337);
        v83 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
        v84 = sub_E39F30(*(_QWORD *)(v83 + 32), 4, "?: operator with omitted middle operand cannot be mangled", 57);
        v88 = sub_C00A40((unsigned __int64)v6, 4, v85, v86, v87);
        sub_FC70B0(v341, v83, v88, v84);
        v89 = sub_EE9730(v6);
        sub_AE9DF0((unsigned __int8 **)v341, v89, 1u);
        v90 = sub_EEC8C0(v6);
        v91 = v341[0];
        v92 = (void *)v90;
        if ( v341[0] )
        {
          v93 = *((unsigned int *)v341[0] + 106);
          v94 = *((unsigned int *)v341[0] + 107);
          v95 = v93 + 1;
          goto LABEL_91;
        }
        v311 = v341[1];
        v312 = *((_DWORD *)v341[1] + 3744);
        if ( !v312 )
        {
          v313 = (_BYTE *)operator new(0x3A0u);
          v95 = 1;
          v93 = 0;
          v91 = v313;
          *v313 = 0;
          *((_QWORD *)v313 + 12) = v313 + 112;
          *((_QWORD *)v313 + 16) = v313 + 144;
          *((_QWORD *)v313 + 20) = v313 + 176;
          *((_QWORD *)v313 + 24) = v313 + 208;
          *((_QWORD *)v313 + 28) = v313 + 240;
          *((_QWORD *)v313 + 32) = v313 + 272;
          *((_QWORD *)v313 + 36) = v313 + 304;
          *((_QWORD *)v313 + 40) = v313 + 336;
          *((_QWORD *)v313 + 44) = v313 + 368;
          *((_QWORD *)v313 + 48) = v313 + 400;
          *((_QWORD *)v313 + 52) = v313 + 432;
          *((_QWORD *)v313 + 13) = 0;
          v313[112] = 0;
          *((_QWORD *)v313 + 17) = 0;
          v313[144] = 0;
          *((_QWORD *)v313 + 21) = 0;
          v313[176] = 0;
          *((_QWORD *)v313 + 25) = 0;
          v313[208] = 0;
          *((_QWORD *)v313 + 29) = 0;
          v313[240] = 0;
          *((_QWORD *)v313 + 33) = 0;
          v313[272] = 0;
          *((_QWORD *)v313 + 37) = 0;
          v313[304] = 0;
          *((_QWORD *)v313 + 41) = 0;
          v313[336] = 0;
          *((_QWORD *)v313 + 45) = 0;
          v313[368] = 0;
          *((_QWORD *)v313 + 49) = 0;
          v313[400] = 0;
          *((_QWORD *)v313 + 53) = 0x800000000LL;
          *((_QWORD *)v313 + 66) = v313 + 544;
          *((_QWORD *)v313 + 67) = 0x600000000LL;
          v94 = 8;
          goto LABEL_404;
        }
        v318 = (unsigned int)(v312 - 1);
        *((_DWORD *)v341[1] + 3744) = v318;
        v91 = (_QWORD *)v311[v318 + 1856];
        v319 = *((unsigned int *)v91 + 134);
        v320 = v91[66];
        *(_BYTE *)v91 = 0;
        *((_DWORD *)v91 + 106) = 0;
        v321 = v320 + (v319 << 6);
        while ( v320 != v321 )
        {
          while ( 1 )
          {
            v321 -= 64;
            v322 = *(void **)(v321 + 24);
            if ( v322 == (void *)(v321 + 40) )
              break;
            operator delete(v322);
            if ( v320 == v321 )
              goto LABEL_436;
          }
        }
LABEL_436:
        v93 = *((unsigned int *)v91 + 106);
        v94 = *((unsigned int *)v91 + 107);
        *((_DWORD *)v91 + 134) = 0;
        v95 = v93 + 1;
LABEL_404:
        v341[0] = v91;
LABEL_91:
        v339[0] = v92;
        LOBYTE(v339[1]) = 1;
        if ( v95 > v94 )
        {
          sub_2237220(v91 + 52, v91 + 54, v95, 12);
          v93 = *((unsigned int *)v91 + 106);
        }
        v96 = v91[52] + 12 * v93;
        *(void **)v96 = v339[0];
        *(_DWORD *)(v96 + 8) = v339[1];
        ++*((_DWORD *)v91 + 106);
        sub_AEA040((__int64)v341);
        return;
      default:
        goto LABEL_29;
    }
  }
}
