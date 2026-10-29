unsigned __int64 __fastcall sub_122C50(
        char *a1,
        unsigned __int64 a2,
        unsigned __int16 *a3,
        unsigned __int64 a4,
        unsigned int *a5)
{
  char *v5; // r14
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // r11
  unsigned __int64 v8; // rsi
  char *v9; // r9
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // r13
  unsigned __int64 result; // rax
  unsigned int v13; // ecx
  __int64 v14; // r13
  unsigned __int8 *v15; // rsi
  unsigned int v16; // edx
  unsigned __int8 *v17; // rsi
  unsigned int v18; // edx
  unsigned __int8 *v19; // rsi
  unsigned int v20; // edx
  _DWORD *v21; // r11
  _WORD *v22; // r14
  char *v23; // r13
  __int64 v24; // rcx
  int v25; // eax
  int v26; // edx
  int v27; // r10d
  __int64 v28; // rdi
  unsigned int v29; // r8d
  unsigned int v30; // ebx
  _DWORD *v31; // rsi
  unsigned int v32; // r8d
  char *v33; // r9
  __int64 v34; // rsi
  _DWORD *v35; // r10
  unsigned int v36; // ebp
  unsigned int v37; // ebx
  char *v38; // r13
  _DWORD *v39; // r10
  unsigned int v40; // ebx
  _DWORD *v41; // r12
  _WORD *v42; // r10
  int v43; // edx
  _WORD *v44; // r14
  _DWORD *v45; // r12
  unsigned int v46; // r8d
  char *v47; // r9
  _DWORD *v48; // r12
  unsigned int v49; // ebp
  char *v50; // r13
  _DWORD *v51; // r12
  unsigned int v52; // ebx
  _WORD *v53; // r10
  _DWORD *v54; // r15
  _WORD *v55; // r14
  _DWORD *v56; // rdx
  char *v57; // r9
  _DWORD *v58; // rdx
  _DWORD *v59; // rdi
  unsigned int v60; // r8d
  char *v61; // r13
  _DWORD *v62; // rbp
  _WORD *v63; // r10
  _DWORD *v64; // rbx
  _WORD *v65; // r14
  _DWORD *v66; // rcx
  unsigned int v67; // r15d
  _DWORD *v68; // rdi
  unsigned int v69; // esi
  _DWORD *v70; // r8
  unsigned int v71; // edi
  __int64 v72; // rdx
  unsigned int v73; // r12d
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // rcx
  __int64 v77; // rcx
  unsigned int v78; // eax
  unsigned __int64 v79; // rcx
  unsigned __int64 v80; // r10
  int v81; // r8d
  bool v82; // dl
  __int64 v83; // rax
  unsigned int v84; // edi
  _DWORD *v85; // rdx
  unsigned int v86; // edi
  char *v87; // rdx
  _DWORD *v88; // r9
  unsigned int v89; // edi
  char *v90; // rdx
  _DWORD *v91; // r9
  unsigned int v92; // edi
  char *v93; // rdx
  _DWORD *v94; // r9
  __int64 v95; // r9
  __int64 *v96; // rdx
  __int64 v97; // rbx
  __int64 *v98; // rbp
  __int64 v99; // rsi
  unsigned __int64 v100; // r10
  __int64 *v101; // rdx
  unsigned __int16 *v102; // rbx
  __int64 *v103; // rsi
  bool v104; // dl
  unsigned int v105; // eax
  _DWORD *v106; // rdx
  int v107; // ecx
  __int64 v108; // rdx
  __int64 v109; // rdi
  __int64 *v110; // rbp
  __int64 v111; // rsi
  __int64 v112; // rdi
  unsigned int v113; // edx
  _DWORD *v114; // rax
  unsigned int v115; // edx
  char *v116; // rax
  unsigned int v117; // eax
  unsigned int v118; // eax
  unsigned __int64 v119; // rcx
  unsigned __int64 v120; // r10
  __int64 *v121; // r9
  unsigned __int64 v122; // rbx
  int v123; // ecx
  bool v124; // dl
  __int64 v125; // rax
  unsigned int v126; // esi
  _DWORD *v127; // rdx
  unsigned int v128; // esi
  _DWORD *v129; // rdi
  char *v130; // rdx
  unsigned int v131; // esi
  char *v132; // rdx
  _DWORD *v133; // rdi
  unsigned int v134; // esi
  char *v135; // rdx
  _DWORD *v136; // rdi
  __int64 v137; // r13
  __int64 *v138; // rdx
  __int64 v139; // rdi
  __int64 *v140; // r8
  unsigned int v141; // ecx
  __int64 v142; // rsi
  unsigned __int64 v143; // rsi
  __int64 *v144; // r9
  unsigned __int8 *v145; // r10
  bool v146; // dl
  unsigned int v147; // eax
  _DWORD *v148; // rdx
  int v149; // ecx
  __int64 v150; // rdx
  __int64 v151; // rdi
  __int64 *v152; // rbx
  __int64 v153; // rdi
  __int64 v154; // r8
  unsigned int v155; // edx
  _DWORD *v156; // rax
  unsigned int v157; // edx
  char *v158; // rax
  unsigned int v159; // eax
  unsigned __int64 v160; // rsi
  unsigned int v161; // eax
  unsigned __int64 v162; // r10
  __int64 *v163; // rcx
  unsigned __int64 v164; // rbx
  _WORD *v165; // rdi
  int v166; // esi
  bool v167; // dl
  __int64 v168; // rax
  unsigned int v169; // r8d
  _DWORD *v170; // rdx
  unsigned int v171; // r8d
  _WORD *v172; // rdx
  _DWORD *v173; // r9
  unsigned int v174; // edi
  _WORD *v175; // rdx
  _DWORD *v176; // r8
  unsigned int v177; // edi
  _WORD *v178; // rdx
  _DWORD *v179; // r8
  __int64 v180; // rdi
  __int64 *v181; // rdx
  __int64 v182; // r9
  __int64 *v183; // rbp
  unsigned int v184; // ecx
  unsigned __int64 v185; // rdi
  __int64 *v186; // rdx
  __int64 *v187; // rcx
  unsigned __int8 *v188; // r10
  _WORD *v189; // rsi
  bool v190; // dl
  unsigned int v191; // eax
  _DWORD *v192; // rdx
  int v193; // r8d
  __int64 v194; // rdx
  __int64 v195; // rbx
  __int64 *v196; // rbp
  unsigned int v197; // ecx
  _WORD *v198; // rax
  __int64 v199; // rsi
  unsigned int v200; // edx
  _DWORD *v201; // r8
  unsigned int v202; // edx
  _BYTE *v203; // rax
  unsigned int v204; // eax
  unsigned int v205; // edx
  unsigned __int64 v206; // rdi
  unsigned __int64 v207; // r8
  __int64 *v208; // rsi
  int v209; // edi
  bool v210; // cl
  __int64 v211; // rdx
  unsigned int v212; // ecx
  _DWORD *v213; // rax
  unsigned int v214; // r10d
  _DWORD *v215; // rcx
  _WORD *v216; // rax
  unsigned int v217; // r10d
  _WORD *v218; // rax
  _DWORD *v219; // rcx
  unsigned int v220; // r10d
  _WORD *v221; // rax
  _DWORD *v222; // rcx
  __int64 v223; // r14
  __int64 *v224; // rcx
  __int64 v225; // r10
  __int64 *v226; // rbx
  unsigned int v227; // eax
  __int64 v228; // rdi
  unsigned __int64 v229; // rdi
  unsigned __int8 *v230; // r9
  __int64 *v231; // rax
  bool v232; // cl
  unsigned int v233; // edx
  _DWORD *v234; // rcx
  int v235; // r10d
  __int64 v236; // rcx
  __int64 v237; // rbx
  __int64 *v238; // rbp
  __int64 v239; // r8
  __int64 *v240; // r8
  __int64 v241; // r9
  unsigned int v242; // ecx
  _DWORD *v243; // rdx
  unsigned int v244; // ecx
  _BYTE *v245; // rdx
  unsigned int v246; // edx
  _BOOL4 v247; // edx
  unsigned int v248; // edi
  __int64 v249; // rcx
  unsigned int v250; // esi
  __int64 v251; // rdi
  unsigned __int64 v252; // r10
  unsigned __int64 v253; // rbx
  int v254; // esi
  bool v255; // dl
  __int64 v256; // rax
  unsigned int v257; // r8d
  _DWORD *v258; // rdx
  unsigned int v259; // r8d
  _WORD *v260; // rdx
  _DWORD *v261; // r9
  unsigned int v262; // edi
  _WORD *v263; // rdx
  _DWORD *v264; // r8
  unsigned int v265; // edi
  _WORD *v266; // rdx
  _DWORD *v267; // r8
  unsigned int v268; // edi
  _WORD *v269; // rdx
  _DWORD *v270; // r8
  __int64 v271; // rdi
  __int64 v272; // r9
  __int64 *v273; // rbp
  unsigned __int64 v274; // r8
  unsigned __int64 v275; // r9
  int v276; // edi
  bool v277; // cl
  __int64 v278; // rdx
  unsigned int v279; // ecx
  _DWORD *v280; // rax
  unsigned int v281; // r10d
  _DWORD *v282; // rcx
  _WORD *v283; // rax
  unsigned int v284; // r10d
  _WORD *v285; // rax
  _DWORD *v286; // rcx
  unsigned int v287; // r10d
  _WORD *v288; // rax
  _DWORD *v289; // rcx
  unsigned int v290; // r10d
  _WORD *v291; // rax
  _DWORD *v292; // rcx
  __int64 v293; // r14
  __int64 v294; // r10
  __int64 *v295; // rbx
  unsigned __int64 v296; // r10
  unsigned __int64 v297; // rbx
  int v298; // ecx
  bool v299; // dl
  __int64 v300; // rax
  unsigned int v301; // esi
  _DWORD *v302; // rdx
  unsigned int v303; // esi
  _DWORD *v304; // rdi
  char *v305; // rdx
  unsigned int v306; // esi
  char *v307; // rdx
  _DWORD *v308; // rdi
  unsigned int v309; // esi
  char *v310; // rdx
  _DWORD *v311; // rdi
  unsigned int v312; // esi
  char *v313; // rdx
  _DWORD *v314; // rdi
  __int64 v315; // r13
  __int64 v316; // rdi
  __int64 *v317; // r8
  unsigned __int64 v318; // r10
  int v319; // r8d
  bool v320; // dl
  __int64 v321; // rax
  unsigned int v322; // edi
  _DWORD *v323; // rdx
  unsigned int v324; // edi
  char *v325; // rdx
  _DWORD *v326; // r9
  unsigned int v327; // edi
  char *v328; // rdx
  _DWORD *v329; // r9
  unsigned int v330; // edi
  char *v331; // rdx
  _DWORD *v332; // r9
  unsigned int v333; // edi
  char *v334; // rdx
  _DWORD *v335; // r9
  __int64 v336; // r9
  __int64 v337; // rbx
  __int64 *v338; // rbp
  unsigned __int64 v339; // [rsp+0h] [rbp-168h]
  char *v340; // [rsp+8h] [rbp-160h]
  char *v341; // [rsp+10h] [rbp-158h]
  unsigned __int64 v342; // [rsp+18h] [rbp-150h]
  unsigned __int64 v343; // [rsp+20h] [rbp-148h]
  _WORD *v344; // [rsp+20h] [rbp-148h]
  __int64 *v345; // [rsp+28h] [rbp-140h]
  unsigned __int16 *v346; // [rsp+30h] [rbp-138h]
  unsigned int v347; // [rsp+38h] [rbp-130h]
  __int64 *v348; // [rsp+38h] [rbp-130h]
  unsigned __int8 *v349; // [rsp+40h] [rbp-128h]
  unsigned __int8 *v350; // [rsp+48h] [rbp-120h]
  unsigned __int8 *v351; // [rsp+50h] [rbp-118h]
  unsigned __int64 v352; // [rsp+58h] [rbp-110h]
  int v353; // [rsp+60h] [rbp-108h]
  unsigned int v354; // [rsp+64h] [rbp-104h]
  unsigned __int64 v355; // [rsp+68h] [rbp-100h]
  __int64 v356; // [rsp+70h] [rbp-F8h] BYREF
  unsigned int v357; // [rsp+78h] [rbp-F0h]
  __int64 *v358; // [rsp+80h] [rbp-E8h]
  __int64 *v359; // [rsp+88h] [rbp-E0h]
  unsigned __int16 *v360; // [rsp+90h] [rbp-D8h]
  __int64 v361; // [rsp+A0h] [rbp-C8h] BYREF
  unsigned int v362; // [rsp+A8h] [rbp-C0h]
  __int64 *v363; // [rsp+B0h] [rbp-B8h]
  __int64 *v364; // [rsp+B8h] [rbp-B0h]
  unsigned __int8 *v365; // [rsp+C0h] [rbp-A8h]
  __int64 v366; // [rsp+D0h] [rbp-98h] BYREF
  unsigned int v367; // [rsp+D8h] [rbp-90h]
  __int64 *v368; // [rsp+E0h] [rbp-88h]
  __int64 *v369; // [rsp+E8h] [rbp-80h]
  unsigned __int8 *v370; // [rsp+F0h] [rbp-78h]
  __int64 v371; // [rsp+100h] [rbp-68h] BYREF
  unsigned int v372; // [rsp+108h] [rbp-60h]
  __int64 *v373; // [rsp+110h] [rbp-58h]
  __int64 *v374; // [rsp+118h] [rbp-50h]
  unsigned __int8 *v375; // [rsp+120h] [rbp-48h]
  unsigned __int64 v376; // [rsp+128h] [rbp-40h]

  v376 = __readfsqword(0x28u);
  if ( a2 <= 5 )
    return -20;
  if ( a4 <= 9 )
    return -20;
  v5 = &a1[a2];
  v6 = a2;
  v7 = a3[1];
  v8 = *a3;
  v9 = a1;
  v10 = a3[2];
  v11 = (v6 + 3) >> 2;
  v342 = (unsigned __int64)v5;
  v343 = a4 - (v8 + v7) - v10;
  v341 = &a1[v11];
  result = v343 - 6;
  v340 = &a1[v11 + v11];
  v339 = (unsigned __int64)&v340[v11];
  if ( v5 < &v340[v11] || a4 < result )
    return -20;
  if ( !*a3 )
    return -72;
  v345 = (__int64 *)(a3 + 3);
  v347 = *a5;
  v359 = (__int64 *)(a3 + 3);
  v346 = a3 + 7;
  v360 = a3 + 7;
  v13 = *((unsigned __int8 *)a3 + v8 + 5);
  if ( v8 <= 7 )
  {
    v14 = *((unsigned __int8 *)a3 + 6);
    v358 = (__int64 *)(a3 + 3);
    v356 = v14;
    switch ( v8 )
    {
      case 2uLL:
        goto LABEL_18;
      case 3uLL:
        goto LABEL_17;
      case 4uLL:
        goto LABEL_16;
      case 5uLL:
        goto LABEL_15;
      case 6uLL:
        goto LABEL_14;
      case 7uLL:
        v14 += (unsigned __int64)*((unsigned __int8 *)a3 + 12) << 48;
LABEL_14:
        v14 += (unsigned __int64)*((unsigned __int8 *)a3 + 11) << 40;
LABEL_15:
        v14 += (unsigned __int64)*((unsigned __int8 *)a3 + 10) << 32;
LABEL_16:
        v14 += (unsigned __int64)*((unsigned __int8 *)a3 + 9) << 24;
LABEL_17:
        v14 += (unsigned __int64)*((unsigned __int8 *)a3 + 8) << 16;
LABEL_18:
        v356 = ((unsigned __int64)*((unsigned __int8 *)a3 + 7) << 8) + v14;
        break;
      default:
        break;
    }
    if ( !(_BYTE)v13 )
      return -20;
    v357 = __lzcnt(v13) - 8 * v8 + 41;
  }
  else
  {
    v358 = (__int64 *)((char *)a3 + v8 - 2);
    v356 = *v358;
    if ( !(_BYTE)v13 )
      return -1;
    v357 = __lzcnt((unsigned __int8)v13) - 23;
  }
  if ( !v7 )
    return -72;
  v15 = (unsigned __int8 *)v345 + v8;
  v364 = (__int64 *)v15;
  v16 = v15[v7 - 1];
  v349 = v15 + 8;
  v365 = v15 + 8;
  if ( v7 <= 7 )
  {
    v75 = *v15;
    v363 = (__int64 *)v15;
    v361 = v75;
    switch ( v7 )
    {
      case 2uLL:
        goto LABEL_52;
      case 3uLL:
        goto LABEL_51;
      case 4uLL:
        goto LABEL_50;
      case 5uLL:
        goto LABEL_49;
      case 6uLL:
        goto LABEL_48;
      case 7uLL:
        v75 += (unsigned __int64)v15[6] << 48;
LABEL_48:
        v75 += (unsigned __int64)v15[5] << 40;
LABEL_49:
        v75 += (unsigned __int64)v15[4] << 32;
LABEL_50:
        v75 += (unsigned __int64)v15[3] << 24;
LABEL_51:
        v75 += (unsigned __int64)v15[2] << 16;
LABEL_52:
        v361 = ((unsigned __int64)v15[1] << 8) + v75;
        break;
      default:
        break;
    }
    if ( !(_BYTE)v16 )
      return -20;
    v362 = __lzcnt(v16) - 8 * v7 + 41;
  }
  else
  {
    v363 = (__int64 *)&v15[v7 - 8];
    v361 = *v363;
    if ( !(_BYTE)v16 )
      return -1;
    v362 = __lzcnt(v16) - 23;
  }
  if ( !v10 )
    return -72;
  v17 = &v15[v7];
  v369 = (__int64 *)v17;
  v18 = v17[v10 - 1];
  v350 = v17 + 8;
  v370 = v17 + 8;
  if ( v10 > 7 )
  {
    v368 = (__int64 *)&v17[v10 - 8];
    v366 = *v368;
    if ( (_BYTE)v18 )
    {
      v367 = __lzcnt(v18) - 23;
      goto LABEL_29;
    }
    return -1;
  }
  v76 = *v17;
  v368 = (__int64 *)v17;
  v366 = v76;
  switch ( v10 )
  {
    case 2uLL:
      goto LABEL_62;
    case 3uLL:
      goto LABEL_61;
    case 4uLL:
      goto LABEL_60;
    case 5uLL:
      goto LABEL_59;
    case 6uLL:
      goto LABEL_58;
    case 7uLL:
      v76 += (unsigned __int64)v17[6] << 48;
LABEL_58:
      v76 += (unsigned __int64)v17[5] << 40;
LABEL_59:
      v76 += (unsigned __int64)v17[4] << 32;
LABEL_60:
      v76 += (unsigned __int64)v17[3] << 24;
LABEL_61:
      v76 += (unsigned __int64)v17[2] << 16;
LABEL_62:
      v366 = ((unsigned __int64)v17[1] << 8) + v76;
      break;
    default:
      break;
  }
  if ( !(_BYTE)v18 )
    return -20;
  v367 = __lzcnt(v18) - 8 * v10 + 41;
LABEL_29:
  if ( v343 == 6 )
    return -72;
  v19 = &v17[v10];
  v374 = (__int64 *)v19;
  v351 = v19 + 8;
  v375 = v19 + 8;
  v20 = v19[v343 - 7];
  v77 = *v19;
  v373 = (__int64 *)v19;
  v371 = v77;
  switch ( v343 )
  {
    case 7uLL:
      goto LABEL_72;
    case 8uLL:
      goto LABEL_71;
    case 9uLL:
      goto LABEL_70;
    case 0xAuLL:
      goto LABEL_69;
    case 0xBuLL:
      goto LABEL_68;
    case 0xCuLL:
      goto LABEL_67;
    case 0xDuLL:
      v77 += (unsigned __int64)v19[6] << 48;
LABEL_67:
      v77 += (unsigned __int64)v19[5] << 40;
LABEL_68:
      v77 += (unsigned __int64)v19[4] << 32;
LABEL_69:
      v77 += (unsigned __int64)v19[3] << 24;
LABEL_70:
      v77 += (unsigned __int64)v19[2] << 16;
LABEL_71:
      v371 = ((unsigned __int64)v19[1] << 8) + v77;
LABEL_72:
      if ( !(_BYTE)v20 )
        return -20;
      v372 = __lzcnt(v20) - 8 * result + 41;
LABEL_33:
      v21 = a5 + 1;
      v22 = (_WORD *)v339;
      v352 = v342 - 7;
      v354 = HIWORD(v347);
      v353 = BYTE2(v347);
      if ( v342 - v339 <= 7 || v342 - 7 <= v339 )
      {
        v22 = (_WORD *)v339;
        v23 = v341;
        v344 = v340;
      }
      else
      {
        v23 = v341;
        v355 = v6;
        v24 = v371;
        v25 = -BYTE2(v347) & 0x3F;
        v26 = v372;
        v348 = v373;
        v344 = v340;
        do
        {
          v28 = v356;
          v29 = v357;
          v30 = v362;
          v31 = &v21[(unsigned __int64)(v356 << v357) >> v25];
          *(_WORD *)v9 = *(_WORD *)v31;
          v32 = *((unsigned __int8 *)v31 + 2) + v29;
          v33 = &v9[*((unsigned __int8 *)v31 + 3)];
          v34 = v361;
          v35 = &v21[(unsigned __int64)(v361 << v30) >> v25];
          *(_WORD *)v23 = *(_WORD *)v35;
          v36 = v30 + *((unsigned __int8 *)v35 + 2);
          v37 = v367;
          v38 = &v23[*((unsigned __int8 *)v35 + 3)];
          v39 = &v21[(unsigned __int64)(v366 << v367) >> v25];
          *v344 = *(_WORD *)v39;
          v40 = *((unsigned __int8 *)v39 + 2) + v37;
          v41 = &v21[(unsigned __int64)(v24 << v26) >> v25];
          v42 = (_WORD *)((char *)v344 + *((unsigned __int8 *)v39 + 3));
          *v22 = *(_WORD *)v41;
          v43 = *((unsigned __int8 *)v41 + 2) + v26;
          v44 = (_WORD *)((char *)v22 + *((unsigned __int8 *)v41 + 3));
          v45 = &v21[(unsigned __int64)(v28 << v32) >> v25];
          *(_WORD *)v33 = *(_WORD *)v45;
          v46 = *((unsigned __int8 *)v45 + 2) + v32;
          v47 = &v33[*((unsigned __int8 *)v45 + 3)];
          v48 = &v21[(unsigned __int64)(v34 << v36) >> v25];
          *(_WORD *)v38 = *(_WORD *)v48;
          v49 = *((unsigned __int8 *)v48 + 2) + v36;
          v50 = &v38[*((unsigned __int8 *)v48 + 3)];
          v51 = &v21[(unsigned __int64)(v366 << v40) >> v25];
          *v42 = *(_WORD *)v51;
          v52 = *((unsigned __int8 *)v51 + 2) + v40;
          v53 = (_WORD *)((char *)v42 + *((unsigned __int8 *)v51 + 3));
          v54 = &v21[(unsigned __int64)(v24 << v43) >> v25];
          *v44 = *(_WORD *)v54;
          LODWORD(v51) = v43 + *((unsigned __int8 *)v54 + 2);
          v55 = (_WORD *)((char *)v44 + *((unsigned __int8 *)v54 + 3));
          v56 = &v21[(unsigned __int64)(v28 << v46) >> v25];
          *(_WORD *)v47 = *(_WORD *)v56;
          LODWORD(v54) = v46 + *((unsigned __int8 *)v56 + 2);
          v57 = &v47[*((unsigned __int8 *)v56 + 3)];
          v58 = &v21[(unsigned __int64)(v34 << v49) >> v25];
          v59 = &v21[(unsigned __int64)(v28 << (char)v54) >> v25];
          *(_WORD *)v50 = *(_WORD *)v58;
          v60 = v49 + *((unsigned __int8 *)v58 + 2);
          v61 = &v50[*((unsigned __int8 *)v58 + 3)];
          v62 = &v21[(unsigned __int64)(v366 << v52) >> v25];
          *v53 = *(_WORD *)v62;
          LODWORD(v58) = v52 + *((unsigned __int8 *)v62 + 2);
          v63 = (_WORD *)((char *)v53 + *((unsigned __int8 *)v62 + 3));
          v64 = &v21[(unsigned __int64)(v24 << (char)v51) >> v25];
          *v55 = *(_WORD *)v64;
          LODWORD(v51) = *((unsigned __int8 *)v64 + 2) + (_DWORD)v51;
          v65 = (_WORD *)((char *)v55 + *((unsigned __int8 *)v64 + 3));
          v66 = &v21[(unsigned __int64)(v24 << (char)v51) >> v25];
          *(_WORD *)v57 = *(_WORD *)v59;
          v67 = *((unsigned __int8 *)v59 + 2) + (_DWORD)v54;
          v9 = &v57[*((unsigned __int8 *)v59 + 3)];
          v68 = &v21[(unsigned __int64)(v34 << v60) >> v25];
          v357 = v67;
          *(_WORD *)v61 = *(_WORD *)v68;
          v69 = v60 + *((unsigned __int8 *)v68 + 2);
          v23 = &v61[*((unsigned __int8 *)v68 + 3)];
          v70 = &v21[(unsigned __int64)(v366 << (char)v58) >> v25];
          LOWORD(v68) = *(_WORD *)v70;
          v362 = v69;
          *v63 = (_WORD)v68;
          v71 = (_DWORD)v58 + *((unsigned __int8 *)v70 + 2);
          v72 = *((unsigned __int8 *)v70 + 3);
          v367 = v71;
          v344 = (_WORD *)((char *)v63 + v72);
          *v65 = *(_WORD *)v66;
          v73 = *((unsigned __int8 *)v66 + 2) + (_DWORD)v51;
          v74 = *((unsigned __int8 *)v66 + 3);
          v372 = v73;
          v22 = (_WORD *)((char *)v65 + v74);
          if ( v346 <= (unsigned __int16 *)v358 )
          {
            v27 = 0;
            v357 = v67 & 7;
            v358 = (__int64 *)((char *)v358 - (v67 >> 3));
            v356 = *v358;
          }
          else
          {
            v27 = 3;
          }
          if ( v349 > (unsigned __int8 *)v363 )
          {
            v27 = 3;
          }
          else
          {
            v362 = v69 & 7;
            v363 = (__int64 *)((char *)v363 - (v69 >> 3));
            v361 = *v363;
          }
          if ( v350 > (unsigned __int8 *)v368 )
          {
            v27 = 3;
          }
          else
          {
            v368 = (__int64 *)((char *)v368 - (v71 >> 3));
            v367 = v71 & 7;
            v366 = *v368;
          }
          if ( v351 > (unsigned __int8 *)v348 )
            break;
          v26 = v73 & 7;
          v373 = (__int64 *)((char *)v348 - (v73 >> 3));
          v372 = v26;
          v24 = *v373;
          v348 = v373;
          v371 = *v373;
          if ( v27 )
            break;
        }
        while ( v352 > (unsigned __int64)v22 );
        v6 = v355;
      }
      if ( v340 < v23 || v341 < v9 || v339 < (unsigned __int64)v344 )
        return -20;
      v78 = v357;
      v79 = v341 - v9;
      if ( (unsigned __int64)(v341 - v9) > 7 )
      {
        if ( (unsigned __int8)v354 <= 0xBu )
        {
          if ( v357 <= 0x40 )
          {
            v318 = (unsigned __int64)(v341 - 9);
            v319 = -v353 & 0x3F;
            do
            {
              v96 = v358;
              if ( v358 >= (__int64 *)v346 )
              {
                v357 = v78 & 7;
                v358 = (__int64 *)((char *)v358 - (v78 >> 3));
                v320 = (unsigned __int64)v9 < v318;
                v356 = *v358;
              }
              else
              {
                if ( v345 == v358 )
                  goto LABEL_88;
                v337 = v78 >> 3;
                v338 = (__int64 *)((char *)v358 - v337);
                if ( v345 > (__int64 *)((char *)v358 - v337) )
                {
LABEL_87:
                  v99 = (unsigned int)((_DWORD)v96 - (_DWORD)v345);
                  v358 = (__int64 *)((char *)v96 - v99);
                  v357 = v78 - 8 * v99;
                  v356 = *(__int64 *)((char *)v96 - v99);
                  goto LABEL_88;
                }
                v358 = (__int64 *)((char *)v358 - v337);
                v320 = (unsigned __int64)v9 < v318;
                v357 = v78 - 8 * (v78 >> 3);
                v356 = *v338;
              }
              if ( !v320 )
                goto LABEL_88;
              v321 = v356;
              v322 = v357;
              v323 = &v21[(unsigned __int64)(v356 << v357) >> v319];
              *(_WORD *)v9 = *(_WORD *)v323;
              v324 = *((unsigned __int8 *)v323 + 2) + v322;
              v325 = &v9[*((unsigned __int8 *)v323 + 3)];
              v326 = &v21[(unsigned __int64)(v321 << v324) >> v319];
              *(_WORD *)v325 = *(_WORD *)v326;
              v327 = *((unsigned __int8 *)v326 + 2) + v324;
              v328 = &v325[*((unsigned __int8 *)v326 + 3)];
              v329 = &v21[(unsigned __int64)(v321 << v327) >> v319];
              *(_WORD *)v328 = *(_WORD *)v329;
              v330 = *((unsigned __int8 *)v329 + 2) + v327;
              v331 = &v328[*((unsigned __int8 *)v329 + 3)];
              v332 = &v21[(unsigned __int64)(v321 << v330) >> v319];
              *(_WORD *)v331 = *(_WORD *)v332;
              v333 = *((unsigned __int8 *)v332 + 2) + v330;
              v334 = &v331[*((unsigned __int8 *)v332 + 3)];
              v335 = &v21[(unsigned __int64)(v321 << v333) >> v319];
              *(_WORD *)v334 = *(_WORD *)v335;
              LODWORD(v321) = *((unsigned __int8 *)v335 + 2);
              v336 = *((unsigned __int8 *)v335 + 3);
              v78 = v333 + v321;
              v357 = v78;
              v9 = &v334[v336];
            }
            while ( v78 <= 0x40 );
          }
        }
        else if ( v357 <= 0x40 )
        {
          v80 = (unsigned __int64)(v341 - 7);
          v81 = -v353 & 0x3F;
          do
          {
            v96 = v358;
            if ( v358 >= (__int64 *)v346 )
            {
              v357 = v78 & 7;
              v358 = (__int64 *)((char *)v358 - (v78 >> 3));
              v82 = (unsigned __int64)v9 < v80;
              v356 = *v358;
            }
            else
            {
              if ( v345 == v358 )
                goto LABEL_88;
              v97 = v78 >> 3;
              v98 = (__int64 *)((char *)v358 - v97);
              if ( v345 > (__int64 *)((char *)v358 - v97) )
                goto LABEL_87;
              v358 = (__int64 *)((char *)v358 - v97);
              v82 = (unsigned __int64)v9 < v80;
              v357 = v78 - 8 * (v78 >> 3);
              v356 = *v98;
            }
            if ( !v82 )
              goto LABEL_88;
            v83 = v356;
            v84 = v357;
            v85 = &v21[(unsigned __int64)(v356 << v357) >> v81];
            *(_WORD *)v9 = *(_WORD *)v85;
            v86 = *((unsigned __int8 *)v85 + 2) + v84;
            v87 = &v9[*((unsigned __int8 *)v85 + 3)];
            v88 = &v21[(unsigned __int64)(v83 << v86) >> v81];
            *(_WORD *)v87 = *(_WORD *)v88;
            v89 = *((unsigned __int8 *)v88 + 2) + v86;
            v90 = &v87[*((unsigned __int8 *)v88 + 3)];
            v91 = &v21[(unsigned __int64)(v83 << v89) >> v81];
            *(_WORD *)v90 = *(_WORD *)v91;
            v92 = *((unsigned __int8 *)v91 + 2) + v89;
            v93 = &v90[*((unsigned __int8 *)v91 + 3)];
            v94 = &v21[(unsigned __int64)(v83 << v92) >> v81];
            *(_WORD *)v93 = *(_WORD *)v94;
            LODWORD(v83) = *((unsigned __int8 *)v94 + 2);
            v95 = *((unsigned __int8 *)v94 + 3);
            v78 = v92 + v83;
            v357 = v78;
            v9 = &v93[v95];
          }
          while ( v78 <= 0x40 );
        }
        v358 = qword_137408;
        goto LABEL_88;
      }
      if ( v357 > 0x40 )
      {
        v358 = qword_137408;
        if ( v79 <= 1 )
          goto LABEL_104;
        v100 = (unsigned __int64)(v341 - 2);
        goto LABEL_234;
      }
      v101 = v358;
      if ( v358 >= (__int64 *)v346 )
      {
        sub_11D420((__int64)&v356);
      }
      else
      {
        if ( v345 == v358 )
        {
          if ( v79 <= 1 )
            goto LABEL_104;
          v100 = (unsigned __int64)(v341 - 2);
          goto LABEL_91;
        }
        v248 = v357 >> 3;
        v249 = v357 >> 3;
        if ( v345 > (__int64 *)((char *)v358 - v249) )
        {
          v248 = (_DWORD)v358 - (_DWORD)v345;
          v249 = (unsigned int)((_DWORD)v358 - (_DWORD)v345);
        }
        v358 = (__int64 *)((char *)v358 - v249);
        v357 -= 8 * v248;
        v356 = *v358;
      }
LABEL_88:
      if ( (unsigned __int64)(v341 - v9) <= 1 )
        goto LABEL_104;
      v78 = v357;
      v100 = (unsigned __int64)(v341 - 2);
      if ( v357 > 0x40 )
        goto LABEL_234;
      v101 = v358;
LABEL_91:
      v102 = v360;
      v103 = v359;
      while ( 1 )
      {
        if ( v101 >= (__int64 *)v102 )
        {
          v357 = v78 & 7;
          v358 = (__int64 *)((char *)v101 - (v78 >> 3));
          v104 = (unsigned __int64)v9 <= v100;
          v356 = *v358;
        }
        else
        {
          if ( v101 == v103 )
            goto LABEL_100;
          v109 = v78 >> 3;
          v110 = (__int64 *)((char *)v101 - v109);
          if ( v103 > (__int64 *)((char *)v101 - v109) )
          {
            v111 = (unsigned int)((_DWORD)v101 - (_DWORD)v103);
            v358 = (__int64 *)((char *)v101 - v111);
            v357 = v78 - 8 * v111;
            v356 = *(__int64 *)((char *)v101 - v111);
            goto LABEL_100;
          }
          v358 = (__int64 *)((char *)v101 - v109);
          v104 = (unsigned __int64)v9 <= v100;
          v357 = v78 - 8 * (v78 >> 3);
          v356 = *v110;
        }
        if ( !v104 )
          goto LABEL_100;
        v105 = v357;
        v106 = &v21[(unsigned __int64)(v356 << v357) >> (-(char)v353 & 0x3F)];
        *(_WORD *)v9 = *(_WORD *)v106;
        v107 = *((unsigned __int8 *)v106 + 2);
        v108 = *((unsigned __int8 *)v106 + 3);
        v78 = v107 + v105;
        v357 = v78;
        v9 += v108;
        if ( v78 > 0x40 )
          break;
        v101 = v358;
      }
LABEL_234:
      v358 = qword_137408;
LABEL_100:
      if ( v100 >= (unsigned __int64)v9 )
      {
        v112 = v356;
        v113 = v357;
        do
        {
          v114 = &v21[(unsigned __int64)(v112 << v113) >> (-(char)v353 & 0x3F)];
          *(_WORD *)v9 = *(_WORD *)v114;
          v113 += *((unsigned __int8 *)v114 + 2);
          v9 += *((unsigned __int8 *)v114 + 3);
        }
        while ( (unsigned __int64)v9 <= v100 );
        v357 = v113;
      }
LABEL_104:
      if ( v341 > v9 )
      {
        v115 = v357;
        v116 = (char *)&v21[(unsigned __int64)(v356 << v357) >> -(char)v353];
        *v9 = *v116;
        if ( v116[3] == 1 )
        {
          v357 = v115 + (unsigned __int8)v116[2];
        }
        else if ( v115 <= 0x3F )
        {
          v117 = v115 + (unsigned __int8)v116[2];
          if ( v117 > 0x40 )
            v117 = 64;
          v357 = v117;
        }
      }
      v118 = v362;
      v119 = v340 - v23;
      if ( (unsigned __int64)(v340 - v23) <= 7 )
      {
        if ( v362 > 0x40 )
        {
          v363 = qword_137408;
          if ( v119 <= 1 )
            goto LABEL_139;
          v143 = (unsigned __int64)(v340 - 2);
LABEL_246:
          v363 = qword_137408;
          goto LABEL_135;
        }
        v138 = v363;
        if ( v363 >= (__int64 *)v365 )
        {
          sub_11D420((__int64)&v361);
        }
        else
        {
          v144 = v364;
          if ( v363 == v364 )
          {
            if ( v119 <= 1 )
              goto LABEL_139;
            v143 = (unsigned __int64)(v340 - 2);
            goto LABEL_126;
          }
          v141 = v362 >> 3;
          v142 = v362 >> 3;
          if ( v364 > (__int64 *)((char *)v363 - v142) )
          {
            v141 = (_DWORD)v363 - (_DWORD)v364;
LABEL_121:
            v142 = v141;
          }
          v363 = (__int64 *)((char *)v138 - v142);
          v362 = v118 - 8 * v141;
          v361 = *(__int64 *)((char *)v138 - v142);
        }
      }
      else
      {
        if ( (unsigned __int8)v354 <= 0xBu )
        {
          if ( v362 <= 0x40 )
          {
            v296 = (unsigned __int64)v365;
            v121 = v364;
            v297 = (unsigned __int64)(v340 - 9);
            v298 = -v353 & 0x3F;
            do
            {
              v138 = v363;
              if ( (unsigned __int64)v363 >= v296 )
              {
                v362 = v118 & 7;
                v363 = (__int64 *)((char *)v363 - (v118 >> 3));
                v299 = (unsigned __int64)v23 < v297;
                v361 = *v363;
              }
              else
              {
                if ( v363 == v121 )
                  goto LABEL_123;
                v316 = v118 >> 3;
                v317 = (__int64 *)((char *)v363 - v316);
                if ( v121 > (__int64 *)((char *)v363 - v316) )
                {
LABEL_120:
                  v141 = (_DWORD)v138 - (_DWORD)v121;
                  goto LABEL_121;
                }
                v363 = (__int64 *)((char *)v363 - v316);
                v299 = (unsigned __int64)v23 < v297;
                v362 = v118 - 8 * (v118 >> 3);
                v361 = *v317;
              }
              if ( !v299 )
                goto LABEL_123;
              v300 = v361;
              v301 = v362;
              v302 = &v21[(unsigned __int64)(v361 << v362) >> v298];
              *(_WORD *)v23 = *(_WORD *)v302;
              v303 = *((unsigned __int8 *)v302 + 2) + v301;
              v304 = &v21[(unsigned __int64)(v300 << v303) >> v298];
              v305 = &v23[*((unsigned __int8 *)v302 + 3)];
              *(_WORD *)v305 = *(_WORD *)v304;
              v306 = *((unsigned __int8 *)v304 + 2) + v303;
              v307 = &v305[*((unsigned __int8 *)v304 + 3)];
              v308 = &v21[(unsigned __int64)(v300 << v306) >> v298];
              *(_WORD *)v307 = *(_WORD *)v308;
              v309 = *((unsigned __int8 *)v308 + 2) + v306;
              v310 = &v307[*((unsigned __int8 *)v308 + 3)];
              v311 = &v21[(unsigned __int64)(v300 << v309) >> v298];
              *(_WORD *)v310 = *(_WORD *)v311;
              v312 = *((unsigned __int8 *)v311 + 2) + v309;
              v313 = &v310[*((unsigned __int8 *)v311 + 3)];
              v314 = &v21[(unsigned __int64)(v300 << v312) >> v298];
              *(_WORD *)v313 = *(_WORD *)v314;
              v315 = *((unsigned __int8 *)v314 + 3);
              v118 = v312 + *((unsigned __int8 *)v314 + 2);
              v362 = v118;
              v23 = &v313[v315];
            }
            while ( v118 <= 0x40 );
          }
        }
        else if ( v362 <= 0x40 )
        {
          v120 = (unsigned __int64)v365;
          v121 = v364;
          v122 = (unsigned __int64)(v340 - 7);
          v123 = -v353 & 0x3F;
          do
          {
            v138 = v363;
            if ( (unsigned __int64)v363 >= v120 )
            {
              v362 = v118 & 7;
              v363 = (__int64 *)((char *)v363 - (v118 >> 3));
              v124 = (unsigned __int64)v23 < v122;
              v361 = *v363;
            }
            else
            {
              if ( v363 == v121 )
                goto LABEL_123;
              v139 = v118 >> 3;
              v140 = (__int64 *)((char *)v363 - v139);
              if ( v121 > (__int64 *)((char *)v363 - v139) )
                goto LABEL_120;
              v363 = (__int64 *)((char *)v363 - v139);
              v124 = (unsigned __int64)v23 < v122;
              v362 = v118 - 8 * (v118 >> 3);
              v361 = *v140;
            }
            if ( !v124 )
              goto LABEL_123;
            v125 = v361;
            v126 = v362;
            v127 = &v21[(unsigned __int64)(v361 << v362) >> v123];
            *(_WORD *)v23 = *(_WORD *)v127;
            v128 = *((unsigned __int8 *)v127 + 2) + v126;
            v129 = &v21[(unsigned __int64)(v125 << v128) >> v123];
            v130 = &v23[*((unsigned __int8 *)v127 + 3)];
            *(_WORD *)v130 = *(_WORD *)v129;
            v131 = *((unsigned __int8 *)v129 + 2) + v128;
            v132 = &v130[*((unsigned __int8 *)v129 + 3)];
            v133 = &v21[(unsigned __int64)(v125 << v131) >> v123];
            *(_WORD *)v132 = *(_WORD *)v133;
            v134 = *((unsigned __int8 *)v133 + 2) + v131;
            v135 = &v132[*((unsigned __int8 *)v133 + 3)];
            v136 = &v21[(unsigned __int64)(v125 << v134) >> v123];
            *(_WORD *)v135 = *(_WORD *)v136;
            v137 = *((unsigned __int8 *)v136 + 3);
            v118 = v134 + *((unsigned __int8 *)v136 + 2);
            v362 = v118;
            v23 = &v135[v137];
          }
          while ( v118 <= 0x40 );
        }
        v363 = qword_137408;
      }
LABEL_123:
      if ( (unsigned __int64)(v340 - v23) <= 1 )
        goto LABEL_139;
      v118 = v362;
      v143 = (unsigned __int64)(v340 - 2);
      if ( v362 > 0x40 )
        goto LABEL_246;
      v138 = v363;
      v144 = v364;
LABEL_126:
      v145 = v365;
      while ( v138 >= (__int64 *)v145 )
      {
        v362 = v118 & 7;
        v363 = (__int64 *)((char *)v138 - (v118 >> 3));
        v146 = (unsigned __int64)v23 <= v143;
        v361 = *v363;
LABEL_128:
        if ( !v146 )
          goto LABEL_135;
        v147 = v362;
        v148 = &v21[(unsigned __int64)(v361 << v362) >> (-(char)v353 & 0x3F)];
        *(_WORD *)v23 = *(_WORD *)v148;
        v149 = *((unsigned __int8 *)v148 + 2);
        v150 = *((unsigned __int8 *)v148 + 3);
        v118 = v149 + v147;
        v362 = v118;
        v23 += v150;
        if ( v118 > 0x40 )
          goto LABEL_246;
        v138 = v363;
      }
      if ( v138 == v144 )
        goto LABEL_135;
      v151 = v118 >> 3;
      v152 = (__int64 *)((char *)v138 - v151);
      if ( v144 <= (__int64 *)((char *)v138 - v151) )
      {
        v363 = (__int64 *)((char *)v138 - v151);
        v146 = (unsigned __int64)v23 <= v143;
        v362 = v118 - 8 * (v118 >> 3);
        v361 = *v152;
        goto LABEL_128;
      }
      v153 = (unsigned int)((_DWORD)v138 - (_DWORD)v144);
      v363 = (__int64 *)((char *)v138 - v153);
      v362 = v118 - 8 * v153;
      v361 = *(__int64 *)((char *)v138 - v153);
LABEL_135:
      if ( v143 >= (unsigned __int64)v23 )
      {
        v154 = v361;
        v155 = v362;
        do
        {
          v156 = &v21[(unsigned __int64)(v154 << v155) >> (-(char)v353 & 0x3F)];
          *(_WORD *)v23 = *(_WORD *)v156;
          v155 += *((unsigned __int8 *)v156 + 2);
          v23 += *((unsigned __int8 *)v156 + 3);
        }
        while ( v143 >= (unsigned __int64)v23 );
        v362 = v155;
      }
LABEL_139:
      if ( v340 > v23 )
      {
        v157 = v362;
        v158 = (char *)&v21[(unsigned __int64)(v361 << v362) >> -(char)v353];
        *v23 = *v158;
        if ( v158[3] == 1 )
        {
          v362 = v157 + (unsigned __int8)v158[2];
        }
        else if ( v157 <= 0x3F )
        {
          v159 = v157 + (unsigned __int8)v158[2];
          if ( v159 > 0x40 )
            v159 = 64;
          v362 = v159;
        }
      }
      v160 = v339 - (_QWORD)v344;
      v161 = v367;
      if ( v339 - (unsigned __int64)v344 <= 7 )
      {
        if ( v367 > 0x40 )
        {
          v368 = qword_137408;
          if ( v160 > 1 )
          {
            v185 = v339 - 2;
            goto LABEL_254;
          }
        }
        else
        {
          v186 = v368;
          if ( v368 >= (__int64 *)v370 )
          {
            sub_11D420((__int64)&v366);
            goto LABEL_156;
          }
          v187 = v369;
          if ( v368 != v369 )
          {
            v250 = v367 >> 3;
            v251 = v367 >> 3;
            if ( v369 > (__int64 *)((char *)v368 - v251) )
            {
              v250 = (_DWORD)v368 - (_DWORD)v369;
              v251 = (unsigned int)((_DWORD)v368 - (_DWORD)v369);
            }
            v368 = (__int64 *)((char *)v368 - v251);
            v367 -= 8 * v250;
            v366 = *v368;
            goto LABEL_156;
          }
          if ( v160 > 1 )
          {
            v185 = v339 - 2;
            goto LABEL_159;
          }
        }
      }
      else
      {
        if ( (unsigned __int8)v354 <= 0xBu )
        {
          if ( v367 <= 0x40 )
          {
            v252 = (unsigned __int64)v370;
            v163 = v369;
            v253 = v339 - 9;
            v165 = v344;
            v254 = -v353 & 0x3F;
            do
            {
              v181 = v368;
              if ( (unsigned __int64)v368 >= v252 )
              {
                v367 = v161 & 7;
                v368 = (__int64 *)((char *)v368 - (v161 >> 3));
                v255 = (unsigned __int64)v165 < v253;
                v366 = *v368;
              }
              else
              {
                if ( v368 == v163 )
                {
LABEL_230:
                  v344 = v165;
                  goto LABEL_156;
                }
                v272 = v161 >> 3;
                v273 = (__int64 *)((char *)v368 - v272);
                if ( v163 > (__int64 *)((char *)v368 - v272) )
                {
LABEL_155:
                  v344 = v165;
                  v184 = (_DWORD)v181 - (_DWORD)v163;
                  v368 = (__int64 *)((char *)v181 - v184);
                  v367 = v161 - 8 * v184;
                  v366 = *v368;
                  goto LABEL_156;
                }
                v368 = (__int64 *)((char *)v368 - v272);
                v255 = (unsigned __int64)v165 < v253;
                v367 = v161 - 8 * (v161 >> 3);
                v366 = *v273;
              }
              if ( !v255 )
                goto LABEL_230;
              v256 = v366;
              v257 = v367;
              v258 = &v21[(unsigned __int64)(v366 << v367) >> v254];
              *v165 = *(_WORD *)v258;
              v259 = *((unsigned __int8 *)v258 + 2) + v257;
              v260 = (_WORD *)((char *)v165 + *((unsigned __int8 *)v258 + 3));
              v261 = &v21[(unsigned __int64)(v256 << v259) >> v254];
              *v260 = *(_WORD *)v261;
              v262 = v259 + *((unsigned __int8 *)v261 + 2);
              v263 = (_WORD *)((char *)v260 + *((unsigned __int8 *)v261 + 3));
              v264 = &v21[(unsigned __int64)(v256 << v262) >> v254];
              *v263 = *(_WORD *)v264;
              v265 = *((unsigned __int8 *)v264 + 2) + v262;
              v266 = (_WORD *)((char *)v263 + *((unsigned __int8 *)v264 + 3));
              v267 = &v21[(unsigned __int64)(v256 << v265) >> v254];
              *v266 = *(_WORD *)v267;
              v268 = *((unsigned __int8 *)v267 + 2) + v265;
              v269 = (_WORD *)((char *)v266 + *((unsigned __int8 *)v267 + 3));
              v270 = &v21[(unsigned __int64)(v256 << v268) >> v254];
              *v269 = *(_WORD *)v270;
              v161 = v268 + *((unsigned __int8 *)v270 + 2);
              v271 = *((unsigned __int8 *)v270 + 3);
              v367 = v161;
              v165 = (_WORD *)((char *)v269 + v271);
            }
            while ( v161 <= 0x40 );
LABEL_262:
            v344 = v165;
          }
        }
        else if ( v367 <= 0x40 )
        {
          v162 = (unsigned __int64)v370;
          v163 = v369;
          v164 = v339 - 7;
          v165 = v344;
          v166 = -v353 & 0x3F;
          while ( 1 )
          {
            v181 = v368;
            if ( (unsigned __int64)v368 >= v162 )
            {
              v367 = v161 & 7;
              v368 = (__int64 *)((char *)v368 - (v161 >> 3));
              v167 = (unsigned __int64)v165 < v164;
              v366 = *v368;
            }
            else
            {
              if ( v368 == v163 )
                goto LABEL_230;
              v182 = v161 >> 3;
              v183 = (__int64 *)((char *)v368 - v182);
              if ( v163 > (__int64 *)((char *)v368 - v182) )
                goto LABEL_155;
              v368 = (__int64 *)((char *)v368 - v182);
              v167 = (unsigned __int64)v165 < v164;
              v367 = v161 - 8 * (v161 >> 3);
              v366 = *v183;
            }
            if ( !v167 )
              goto LABEL_230;
            v168 = v366;
            v169 = v367;
            v170 = &v21[(unsigned __int64)(v366 << v367) >> v166];
            *v165 = *(_WORD *)v170;
            v171 = *((unsigned __int8 *)v170 + 2) + v169;
            v172 = (_WORD *)((char *)v165 + *((unsigned __int8 *)v170 + 3));
            v173 = &v21[(unsigned __int64)(v168 << v171) >> v166];
            *v172 = *(_WORD *)v173;
            v174 = v171 + *((unsigned __int8 *)v173 + 2);
            v175 = (_WORD *)((char *)v172 + *((unsigned __int8 *)v173 + 3));
            v176 = &v21[(unsigned __int64)(v168 << v174) >> v166];
            *v175 = *(_WORD *)v176;
            v177 = *((unsigned __int8 *)v176 + 2) + v174;
            v178 = (_WORD *)((char *)v175 + *((unsigned __int8 *)v176 + 3));
            v179 = &v21[(unsigned __int64)(v168 << v177) >> v166];
            *v178 = *(_WORD *)v179;
            v161 = v177 + *((unsigned __int8 *)v179 + 2);
            v180 = *((unsigned __int8 *)v179 + 3);
            v367 = v161;
            v165 = (_WORD *)((char *)v178 + v180);
            if ( v161 > 0x40 )
              goto LABEL_262;
          }
        }
        v368 = qword_137408;
LABEL_156:
        if ( v339 - (unsigned __int64)v344 > 1 )
        {
          v161 = v367;
          v185 = v339 - 2;
          if ( v367 <= 0x40 )
          {
            v186 = v368;
            v187 = v369;
LABEL_159:
            v188 = v370;
            v189 = v344;
            while ( 1 )
            {
              if ( v186 >= (__int64 *)v188 )
              {
                v367 = v161 & 7;
                v368 = (__int64 *)((char *)v186 - (v161 >> 3));
                v190 = (unsigned __int64)v189 <= v185;
                v366 = *v368;
              }
              else
              {
                if ( v186 == v187 )
                {
LABEL_228:
                  v344 = v189;
                  goto LABEL_168;
                }
                v195 = v161 >> 3;
                v196 = (__int64 *)((char *)v186 - v195);
                if ( v187 > (__int64 *)((char *)v186 - v195) )
                {
                  v344 = v189;
                  v197 = (_DWORD)v186 - (_DWORD)v187;
                  v368 = (__int64 *)((char *)v186 - v197);
                  v367 = v161 - 8 * v197;
                  v366 = *v368;
                  goto LABEL_168;
                }
                v368 = (__int64 *)((char *)v186 - v195);
                v190 = (unsigned __int64)v189 <= v185;
                v367 = v161 - 8 * (v161 >> 3);
                v366 = *v196;
              }
              if ( !v190 )
                goto LABEL_228;
              v191 = v367;
              v192 = &v21[(unsigned __int64)(v366 << v367) >> (-(char)v353 & 0x3F)];
              *v189 = *(_WORD *)v192;
              v193 = *((unsigned __int8 *)v192 + 2);
              v194 = *((unsigned __int8 *)v192 + 3);
              v161 = v193 + v191;
              v367 = v161;
              v189 = (_WORD *)((char *)v189 + v194);
              if ( v161 > 0x40 )
                break;
              v186 = v368;
            }
            v344 = v189;
          }
LABEL_254:
          v368 = qword_137408;
LABEL_168:
          v198 = v344;
          if ( v185 >= (unsigned __int64)v344 )
          {
            v199 = v366;
            v200 = v367;
            do
            {
              v201 = &v21[(unsigned __int64)(v199 << v200) >> (-(char)v353 & 0x3F)];
              *v198 = *(_WORD *)v201;
              v200 += *((unsigned __int8 *)v201 + 2);
              v198 = (_WORD *)((char *)v198 + *((unsigned __int8 *)v201 + 3));
            }
            while ( (unsigned __int64)v198 <= v185 );
            v344 = v198;
            v367 = v200;
          }
        }
      }
      if ( v339 > (unsigned __int64)v344 )
      {
        v202 = v367;
        v203 = &v21[(unsigned __int64)(v366 << v367) >> -(char)v353];
        *(_BYTE *)v344 = *v203;
        if ( v203[3] == 1 )
        {
          v367 = v202 + (unsigned __int8)v203[2];
        }
        else if ( v202 <= 0x3F )
        {
          v204 = v202 + (unsigned __int8)v203[2];
          if ( v204 > 0x40 )
            v204 = 64;
          v367 = v204;
        }
      }
      v205 = v372;
      v206 = v342 - (_QWORD)v22;
      if ( v342 - (unsigned __int64)v22 > 7 )
      {
        if ( (unsigned __int8)v354 <= 0xBu )
        {
          if ( v372 <= 0x40 )
          {
            v274 = (unsigned __int64)v375;
            v208 = v374;
            v275 = v342 - 9;
            v276 = -v353 & 0x3F;
            while ( 1 )
            {
              v224 = v373;
              if ( (unsigned __int64)v373 >= v274 )
              {
                v372 = v205 & 7;
                v373 = (__int64 *)((char *)v373 - (v205 >> 3));
                v277 = (unsigned __int64)v22 < v275;
                v371 = *v373;
              }
              else
              {
                if ( v373 == v208 )
                  goto LABEL_191;
                v294 = v205 >> 3;
                v295 = (__int64 *)((char *)v373 - v294);
                if ( v208 > (__int64 *)((char *)v373 - v294) )
                {
LABEL_188:
                  v227 = (_DWORD)v224 - (_DWORD)v208;
                  goto LABEL_189;
                }
                v373 = (__int64 *)((char *)v373 - v294);
                v277 = (unsigned __int64)v22 < v275;
                v372 = v205 - 8 * (v205 >> 3);
                v371 = *v295;
              }
              if ( !v277 )
                goto LABEL_191;
              v278 = v371;
              v279 = v372;
              v280 = &v21[(unsigned __int64)(v371 << v372) >> v276];
              *v22 = *(_WORD *)v280;
              v281 = v279 + *((unsigned __int8 *)v280 + 2);
              v282 = &v21[(unsigned __int64)(v278 << v281) >> v276];
              v283 = (_WORD *)((char *)v22 + *((unsigned __int8 *)v280 + 3));
              *v283 = *(_WORD *)v282;
              v284 = *((unsigned __int8 *)v282 + 2) + v281;
              v285 = (_WORD *)((char *)v283 + *((unsigned __int8 *)v282 + 3));
              v286 = &v21[(unsigned __int64)(v278 << v284) >> v276];
              *v285 = *(_WORD *)v286;
              v287 = *((unsigned __int8 *)v286 + 2) + v284;
              v288 = (_WORD *)((char *)v285 + *((unsigned __int8 *)v286 + 3));
              v289 = &v21[(unsigned __int64)(v278 << v287) >> v276];
              *v288 = *(_WORD *)v289;
              v290 = *((unsigned __int8 *)v289 + 2) + v287;
              v291 = (_WORD *)((char *)v288 + *((unsigned __int8 *)v289 + 3));
              v292 = &v21[(unsigned __int64)(v278 << v290) >> v276];
              *v291 = *(_WORD *)v292;
              v293 = *((unsigned __int8 *)v292 + 3);
              v205 = v290 + *((unsigned __int8 *)v292 + 2);
              v372 = v205;
              v22 = (_WORD *)((char *)v291 + v293);
              if ( v205 > 0x40 )
                goto LABEL_265;
            }
          }
        }
        else if ( v372 <= 0x40 )
        {
          v207 = (unsigned __int64)v375;
          v208 = v374;
          v209 = -v353 & 0x3F;
          while ( 1 )
          {
            v224 = v373;
            if ( (unsigned __int64)v373 >= v207 )
            {
              v372 = v205 & 7;
              v373 = (__int64 *)((char *)v373 - (v205 >> 3));
              v210 = v352 > (unsigned __int64)v22;
              v371 = *v373;
            }
            else
            {
              if ( v373 == v208 )
                goto LABEL_191;
              v225 = v205 >> 3;
              v226 = (__int64 *)((char *)v373 - v225);
              if ( v208 > (__int64 *)((char *)v373 - v225) )
                goto LABEL_188;
              v373 = (__int64 *)((char *)v373 - v225);
              v210 = v352 > (unsigned __int64)v22;
              v372 = v205 - 8 * (v205 >> 3);
              v371 = *v226;
            }
            if ( !v210 )
              goto LABEL_191;
            v211 = v371;
            v212 = v372;
            v213 = &v21[(unsigned __int64)(v371 << v372) >> v209];
            *v22 = *(_WORD *)v213;
            v214 = v212 + *((unsigned __int8 *)v213 + 2);
            v215 = &v21[(unsigned __int64)(v211 << v214) >> v209];
            v216 = (_WORD *)((char *)v22 + *((unsigned __int8 *)v213 + 3));
            *v216 = *(_WORD *)v215;
            v217 = *((unsigned __int8 *)v215 + 2) + v214;
            v218 = (_WORD *)((char *)v216 + *((unsigned __int8 *)v215 + 3));
            v219 = &v21[(unsigned __int64)(v211 << v217) >> v209];
            *v218 = *(_WORD *)v219;
            v220 = *((unsigned __int8 *)v219 + 2) + v217;
            v221 = (_WORD *)((char *)v218 + *((unsigned __int8 *)v219 + 3));
            v222 = &v21[(unsigned __int64)(v211 << v220) >> v209];
            *v221 = *(_WORD *)v222;
            v223 = *((unsigned __int8 *)v222 + 3);
            v205 = v220 + *((unsigned __int8 *)v222 + 2);
            v372 = v205;
            v22 = (_WORD *)((char *)v221 + v223);
            if ( v205 > 0x40 )
              goto LABEL_265;
          }
        }
        v208 = v374;
LABEL_265:
        v373 = qword_137408;
        goto LABEL_191;
      }
      if ( v372 > 0x40 )
      {
        v231 = qword_137408;
        v373 = qword_137408;
        if ( v206 <= 1 )
        {
          v240 = v374;
          goto LABEL_208;
        }
        v208 = v374;
        v229 = v342 - 2;
        goto LABEL_235;
      }
      v224 = v373;
      v231 = v373;
      if ( v373 >= (__int64 *)v375 )
      {
        sub_11D420((__int64)&v371);
        v208 = v374;
        goto LABEL_191;
      }
      v208 = v374;
      v240 = v374;
      if ( v373 != v374 )
      {
        v227 = v372 >> 3;
        v228 = v372 >> 3;
        if ( v374 > (__int64 *)((char *)v373 - v228) )
        {
          v227 = (_DWORD)v373 - (_DWORD)v374;
LABEL_189:
          v228 = v227;
        }
        v373 = (__int64 *)((char *)v224 - v228);
        v372 = v205 - 8 * v227;
        v371 = *(__int64 *)((char *)v224 - v228);
LABEL_191:
        if ( v342 - (unsigned __int64)v22 <= 1 )
        {
          v231 = v373;
          v240 = v208;
          goto LABEL_208;
        }
        v205 = v372;
        v229 = v342 - 2;
        if ( v372 <= 0x40 )
        {
          v224 = v373;
          goto LABEL_194;
        }
LABEL_235:
        v373 = qword_137408;
        v240 = v208;
        v231 = qword_137408;
        goto LABEL_204;
      }
      if ( v206 <= 1 )
        goto LABEL_208;
      v229 = v342 - 2;
LABEL_194:
      v230 = v375;
      v231 = v208;
      while ( 2 )
      {
        if ( v224 >= (__int64 *)v230 )
        {
          v372 = v205 & 7;
          v373 = (__int64 *)((char *)v224 - (v205 >> 3));
          v232 = (unsigned __int64)v22 <= v229;
          v371 = *v373;
LABEL_196:
          if ( !v232 )
            goto LABEL_203;
          v233 = v372;
          v234 = &v21[(unsigned __int64)(v371 << v372) >> (-(char)v353 & 0x3F)];
          *v22 = *(_WORD *)v234;
          v235 = *((unsigned __int8 *)v234 + 2);
          v236 = *((unsigned __int8 *)v234 + 3);
          v205 = v235 + v233;
          v372 = v205;
          v22 = (_WORD *)((char *)v22 + v236);
          if ( v205 > 0x40 )
            goto LABEL_235;
          v224 = v373;
          continue;
        }
        break;
      }
      if ( v224 != v208 )
      {
        v237 = v205 >> 3;
        v238 = (__int64 *)((char *)v224 - v237);
        if ( v208 > (__int64 *)((char *)v224 - v237) )
        {
          v239 = (unsigned int)((_DWORD)v224 - (_DWORD)v208);
          v373 = (__int64 *)((char *)v224 - v239);
          v372 = v205 - 8 * v239;
          v371 = *(__int64 *)((char *)v224 - v239);
LABEL_203:
          v231 = v373;
          v240 = v208;
          goto LABEL_204;
        }
        v373 = (__int64 *)((char *)v224 - v237);
        v232 = (unsigned __int64)v22 <= v229;
        v372 = v205 - 8 * (v205 >> 3);
        v371 = *v238;
        goto LABEL_196;
      }
      v240 = v224;
LABEL_204:
      if ( v229 >= (unsigned __int64)v22 )
      {
        v241 = v371;
        v242 = v372;
        do
        {
          v243 = &v21[(unsigned __int64)(v241 << v242) >> (-(char)v353 & 0x3F)];
          *v22 = *(_WORD *)v243;
          v242 += *((unsigned __int8 *)v243 + 2);
          v22 = (_WORD *)((char *)v22 + *((unsigned __int8 *)v243 + 3));
        }
        while ( (unsigned __int64)v22 <= v229 );
        v372 = v242;
      }
LABEL_208:
      if ( v342 > (unsigned __int64)v22 )
      {
        v244 = v372;
        v245 = &v21[(unsigned __int64)(v371 << v372) >> -(char)v353];
        *(_BYTE *)v22 = *v245;
        if ( v245[3] == 1 )
        {
          v372 = v244 + (unsigned __int8)v245[2];
        }
        else if ( v244 <= 0x3F )
        {
          v246 = v244 + (unsigned __int8)v245[2];
          if ( v246 > 0x40 )
            v246 = 64;
          v372 = v246;
        }
      }
      v247 = 0;
      if ( v358 == v359 )
        v247 = v357 == 64;
      if ( v363 == v364 )
      {
        if ( v362 != 64 )
          v247 = 0;
      }
      else
      {
        v247 = 0;
      }
      if ( v368 == v369 && v367 == 64 && v231 == v240 && v372 == 64 && v247 )
        return v6;
      return -20;
    default:
      v373 = (__int64 *)&v19[v343 - 14];
      v371 = *v373;
      if ( !(_BYTE)v20 )
        return -1;
      v372 = __lzcnt(v20) - 23;
      if ( result <= 0xFFFFFFFFFFFFFF88LL )
        goto LABEL_33;
      return result;
  }
}

