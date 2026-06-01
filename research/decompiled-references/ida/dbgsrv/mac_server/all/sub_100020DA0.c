/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100020DA0
// Address: 0x0000000100020DA0

//----- (0000000100020DA0) ----------------------------------------------------
__int64 __fastcall sub_100020DA0(__int64 a1)
{
  __int64 v1; // rbx
  _QWORD *v2; // r14
  __int64 i; // r14
  __int64 v4; // rcx
  __int64 v5; // r12
  void *v6; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  __int64 v9; // r15
  char **v10; // r14
  __int64 v11; // r12
  void *v12; // rax
  __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r15
  __int64 v17; // r12
  void *v18; // rax
  __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r15
  __int64 v23; // r12
  void *v24; // rax
  __int64 v25; // rcx
  unsigned __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r15
  __int64 v29; // r13
  void *v30; // rax
  __int64 v31; // r12
  unsigned __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rcx
  char *v35; // rax
  char *v36; // r15
  unsigned __int64 v37; // rdx
  char *v38; // rcx
  __int64 v39; // r13
  __int64 v40; // rcx
  char *v41; // rax
  char *v42; // r15
  unsigned __int64 v43; // rdx
  char *v44; // rcx
  __int64 v45; // rcx
  char *v46; // rax
  char *v47; // r12
  unsigned __int64 v48; // rdx
  char *v49; // rcx
  __int64 v50; // rcx
  __int64 v51; // r12
  char *v52; // rax
  unsigned __int64 v53; // rdx
  char *v54; // rcx
  __int64 v55; // rcx
  __int64 v56; // r15
  __int64 v57; // r13
  void *v58; // rax
  __int64 v59; // r12
  unsigned __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // rcx
  __int64 v63; // r15
  __int64 v64; // r13
  void *v65; // rax
  __int64 v66; // r12
  unsigned __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // rcx
  char *v70; // rax
  char *v71; // r15
  unsigned __int64 v72; // rdx
  char *v73; // rcx
  __int64 v74; // r12
  __int64 v75; // rcx
  char *v76; // rax
  unsigned __int64 v77; // rdx
  char *v78; // rcx
  __int64 v79; // rcx
  __int64 v80; // r12
  __int64 v81; // r12
  char *v82; // rax
  char *v83; // rcx
  unsigned __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r15
  __int64 v87; // r12
  char *v88; // rax
  char *v89; // rcx
  unsigned __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // r15
  __int64 v93; // r12
  void *v94; // rax
  __int64 v95; // rcx
  unsigned __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // r15
  __int64 v99; // r12
  void *v100; // rax
  __int64 v101; // rcx
  unsigned __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // r15
  __int64 v105; // r12
  void *v106; // rax
  __int64 v107; // rcx
  unsigned __int64 v108; // rdx
  __int64 v109; // rcx
  __int64 v110; // r15
  __int64 v111; // r12
  void *v112; // rax
  __int64 v113; // rcx
  unsigned __int64 v114; // rdx
  __int64 v115; // rcx
  __int64 v116; // r15
  __int64 v117; // r12
  void *v118; // rax
  __int64 v119; // rcx
  unsigned __int64 v120; // rdx
  __int64 v121; // rcx
  __int64 v122; // r15
  __int64 v123; // r12
  void *v124; // rax
  __int64 v125; // rcx
  unsigned __int64 v126; // rdx
  __int64 v127; // rcx
  __int64 v128; // r15
  __int64 v129; // r12
  void *v130; // rax
  __int64 v131; // rcx
  unsigned __int64 v132; // rdx
  __int64 v133; // rcx
  __int64 v134; // r15
  __int64 v135; // r12
  void *v136; // rax
  __int64 v137; // rcx
  unsigned __int64 v138; // rdx
  __int64 v139; // rcx
  __int64 v140; // r15
  __int64 v141; // r12
  void *v142; // rax
  __int64 v143; // rcx
  unsigned __int64 v144; // rdx
  __int64 v145; // rcx
  __int64 v146; // r15
  __int64 v147; // r12
  void *v148; // rax
  __int64 v149; // rcx
  unsigned __int64 v150; // rdx
  __int64 v151; // rcx
  __int64 v152; // r15
  __int64 v153; // r12
  void *v154; // rax
  __int64 v155; // rcx
  unsigned __int64 v156; // rdx
  __int64 v157; // rcx
  __int64 v158; // r15
  __int64 v159; // r13
  void *v160; // rax
  __int64 v161; // rcx
  unsigned __int64 v162; // rdx
  __int64 v163; // rcx
  __int64 v164; // r15
  __int64 v165; // r13
  void *v166; // rax
  __int64 v167; // r12
  unsigned __int64 v168; // rdx
  __int64 v169; // rcx
  __int64 v170; // rcx
  __int64 v171; // r15
  __int64 v172; // r13
  void *v173; // rax
  __int64 v174; // r12
  unsigned __int64 v175; // rdx
  __int64 v176; // rcx
  __int64 v177; // rcx
  __int64 v178; // r15
  __int64 v179; // r13
  void *v180; // rax
  __int64 v181; // r12
  unsigned __int64 v182; // rdx
  __int64 v183; // rcx
  __int64 v184; // rcx
  __int64 v185; // r15
  __int64 v186; // r12
  void *v187; // rax
  __int64 v188; // r12
  unsigned __int64 v189; // rdx
  __int64 v190; // rcx
  __int64 v191; // rcx
  void *v192; // rax
  __int64 v193; // rcx
  unsigned __int64 v194; // rdx
  __int64 v195; // rcx
  __int64 v196; // r15
  __int64 v197; // r12
  void *v198; // rax
  __int64 v199; // rcx
  unsigned __int64 v200; // rdx
  __int64 v201; // rcx
  __int64 v202; // r15
  __int64 v203; // r12
  void *v204; // rax
  __int64 v205; // rcx
  unsigned __int64 v206; // rdx
  __int64 v207; // rcx
  __int64 v208; // r15
  __int64 v209; // r12
  void *v210; // rax
  __int64 v211; // rcx
  unsigned __int64 v212; // rdx
  __int64 v213; // rcx
  __int64 v214; // r15
  __int64 v215; // r12
  void *v216; // rax
  __int64 v217; // rcx
  unsigned __int64 v218; // rdx
  __int64 v219; // rcx
  __int64 v220; // r15
  __int64 v221; // r12
  void *v222; // rax
  __int64 v223; // rcx
  unsigned __int64 v224; // rdx
  __int64 v225; // rcx
  __int64 v226; // r15
  __int64 v227; // r12
  void *v228; // rax
  __int64 v229; // rcx
  unsigned __int64 v230; // rdx
  __int64 v231; // rcx
  __int64 v232; // r15
  __int64 v233; // r12
  void *v234; // rax
  __int64 v235; // rcx
  unsigned __int64 v236; // rdx
  __int64 v237; // rcx
  __int64 v238; // r15
  __int64 v239; // r13
  void *v240; // rax
  __int64 v241; // r12
  unsigned __int64 v242; // rdx
  __int64 v243; // rcx
  __int64 v244; // rcx
  __int64 v245; // r14
  unsigned __int64 v246; // r15
  __int64 v247; // rcx
  __int64 v248; // r13
  void *v249; // rax
  __int64 v250; // rcx
  unsigned __int64 v251; // rdx
  __int64 v252; // r15
  __int64 v253; // r12
  void *v254; // rax
  __int64 v255; // rcx
  unsigned __int64 v256; // rdx
  __int64 v257; // rcx
  __int64 j; // r14
  __int64 v259; // rcx
  __int64 result; // rax
  __int64 v261; // r12
  void *v262; // rax
  __int64 v263; // rcx
  unsigned __int64 v264; // rdx
  __int64 *v265; // r14
  unsigned __int64 k; // r15
  __int64 v267; // rcx
  __int64 v268; // r12
  __int64 v269; // rbx
  void *v270; // rax
  __int64 v271; // rcx
  unsigned __int64 v272; // rdx
  _Unwind_Exception *v273; // rax
  _Unwind_Exception *v274; // rbx

  v1 = a1;
  v2 = operator new(0x3C8u);
  v2[1] = a1 + 544;
  *((_OWORD *)v2 + 1) = 0;
  *((_OWORD *)v2 + 2) = 0;
  *((_OWORD *)v2 + 3) = 0;
  v2[8] = 0;
  *((_DWORD *)v2 + 18) = 1065353216;
  v2[10] = 0;
  *v2 = &off_1000A83E8;
  v2[11] = a1;
  __bzero(v2 + 12, 866);
  sub_1000209C0(a1 + 544, off_1000AC1E0, 1);
  *(_QWORD *)(a1 + 536) = v2;
  for ( i = 80; i != 112; i += 4 )
  {
    v5 = *(_QWORD *)(a1 + 536);
    v6 = *(void **)(v5 + 16);
    v7 = *(_QWORD *)(v5 + 24);
    v8 = v7 + 1;
    if ( *(_QWORD *)(v5 + 32) < (unsigned __int64)(v7 + 1) )
    {
      v6 = qvector_reserve(v5 + 16, v6, v8, 0x28u);
      *(_QWORD *)(v5 + 16) = v6;
      v7 = *(_QWORD *)(v5 + 24);
      v8 = v7 + 1;
    }
    v4 = 5 * v7;
    *(_QWORD *)(v5 + 24) = v8;
    *((_DWORD *)v6 + 2 * v4) = 1;
    *((_QWORD *)v6 + v4 + 1) = -1;
    *((_QWORD *)v6 + v4 + 2) = i * 4;
    *((_QWORD *)v6 + v4 + 3) = 10;
    *((_QWORD *)v6 + v4 + 4) = 10;
    sub_100023820(
      *(_QWORD **)(v5 + 8),
      (&off_1000AC580)[i - 80],
      (int)(&off_1000AC580)[i - 79],
      *((_BYTE *)&off_1000AC580 + 8 * i - 627),
      *((_BYTE *)&off_1000AC580 + 8 * i - 628),
      (__int64)(&off_1000AC580)[i - 78],
      (__int64)(&off_1000AC580)[i - 77]);
  }
  v9 = *(_QWORD *)(a1 + 536);
  v10 = &off_1000AC680;
  switch ( BYTE5(qword_1000AC688) )
  {
    case 1u:
      v11 = 2;
      break;
    case 7u:
      v11 = 8;
      break;
    case 2u:
      v11 = 4;
      break;
    default:
      goto LABEL_347;
  }
  v12 = *(void **)(v9 + 16);
  v13 = *(_QWORD *)(v9 + 24);
  v14 = v13 + 1;
  if ( *(_QWORD *)(v9 + 32) < (unsigned __int64)(v13 + 1) )
  {
    v12 = qvector_reserve(v9 + 16, v12, v14, 0x28u);
    *(_QWORD *)(v9 + 16) = v12;
    v13 = *(_QWORD *)(v9 + 24);
    v14 = v13 + 1;
  }
  v15 = 5 * v13;
  *(_QWORD *)(v9 + 24) = v14;
  *((_DWORD *)v12 + 2 * v15) = 0;
  *((_QWORD *)v12 + v15 + 1) = -1;
  *((_QWORD *)v12 + v15 + 2) = 288;
  *((_QWORD *)v12 + v15 + 3) = 2;
  *((_QWORD *)v12 + v15 + 4) = v11;
  sub_100023820(
    *(_QWORD **)(v9 + 8),
    off_1000AC680,
    qword_1000AC688,
    SBYTE5(qword_1000AC688),
    SBYTE4(qword_1000AC688),
    (__int64)off_1000AC690,
    qword_1000AC698);
  v16 = *(_QWORD *)(a1 + 536);
  v10 = &off_1000AC6A0;
  switch ( BYTE5(qword_1000AC6A8) )
  {
    case 1u:
      v17 = 2;
      break;
    case 7u:
      v17 = 8;
      break;
    case 2u:
      v17 = 4;
      break;
    default:
      goto LABEL_347;
  }
  v18 = *(void **)(v16 + 16);
  v19 = *(_QWORD *)(v16 + 24);
  v20 = v19 + 1;
  if ( *(_QWORD *)(v16 + 32) < (unsigned __int64)(v19 + 1) )
  {
    v18 = qvector_reserve(v16 + 16, v18, v20, 0x28u);
    *(_QWORD *)(v16 + 16) = v18;
    v19 = *(_QWORD *)(v16 + 24);
    v20 = v19 + 1;
  }
  v21 = 5 * v19;
  *(_QWORD *)(v16 + 24) = v20;
  *((_DWORD *)v18 + 2 * v21) = 0;
  *((_QWORD *)v18 + v21 + 1) = -1;
  *((_QWORD *)v18 + v21 + 2) = 290;
  *((_QWORD *)v18 + v21 + 3) = 2;
  *((_QWORD *)v18 + v21 + 4) = v17;
  sub_100023820(
    *(_QWORD **)(v16 + 8),
    off_1000AC6A0,
    qword_1000AC6A8,
    SBYTE5(qword_1000AC6A8),
    SBYTE4(qword_1000AC6A8),
    (__int64)off_1000AC6B0,
    qword_1000AC6B8);
  v22 = *(_QWORD *)(a1 + 536);
  v10 = &off_1000AC6C0;
  switch ( BYTE5(qword_1000AC6C8) )
  {
    case 1u:
      v23 = 2;
      break;
    case 7u:
      v23 = 8;
      break;
    case 2u:
      v23 = 4;
      break;
    default:
      goto LABEL_347;
  }
  v24 = *(void **)(v22 + 16);
  v25 = *(_QWORD *)(v22 + 24);
  v26 = v25 + 1;
  if ( *(_QWORD *)(v22 + 32) < (unsigned __int64)(v25 + 1) )
  {
    v24 = qvector_reserve(v22 + 16, v24, v26, 0x28u);
    *(_QWORD *)(v22 + 16) = v24;
    v25 = *(_QWORD *)(v22 + 24);
    v26 = v25 + 1;
  }
  v27 = 5 * v25;
  *(_QWORD *)(v22 + 24) = v26;
  *((_DWORD *)v24 + 2 * v27) = 0;
  *((_QWORD *)v24 + v27 + 1) = -1;
  *((_QWORD *)v24 + v27 + 2) = 292;
  *((_QWORD *)v24 + v27 + 3) = 1;
  *((_QWORD *)v24 + v27 + 4) = v23;
  sub_100023820(
    *(_QWORD **)(v22 + 8),
    off_1000AC6C0,
    qword_1000AC6C8,
    SBYTE5(qword_1000AC6C8),
    SBYTE4(qword_1000AC6C8),
    (__int64)off_1000AC6D0,
    qword_1000AC6D8);
  v28 = *(_QWORD *)(a1 + 536);
  v10 = &off_1000AC6E0;
  switch ( BYTE5(qword_1000AC6E8[0]) )
  {
    case 1u:
      v29 = 2;
      break;
    case 7u:
      v29 = 8;
      break;
    case 2u:
      v29 = 4;
      break;
    default:
      goto LABEL_347;
  }
  v30 = *(void **)(v28 + 16);
  v31 = *(_QWORD *)(v28 + 24);
  v32 = v31 + 1;
  if ( *(_QWORD *)(v28 + 32) >= (unsigned __int64)(v31 + 1) )
  {
    v33 = *(_QWORD *)(v28 + 24);
  }
  else
  {
    v30 = qvector_reserve(v28 + 16, v30, v32, 0x28u);
    *(_QWORD *)(v28 + 16) = v30;
    v33 = *(_QWORD *)(v28 + 24);
    v32 = v33 + 1;
  }
  v34 = 5 * v33;
  *(_QWORD *)(v28 + 24) = v32;
  *((_DWORD *)v30 + 2 * v34) = 0;
  *((_QWORD *)v30 + v34 + 1) = -1;
  *((_QWORD *)v30 + v34 + 2) = 248;
  *((_QWORD *)v30 + v34 + 3) = 8;
  *((_QWORD *)v30 + v34 + 4) = v29;
  sub_100023820(
    *(_QWORD **)(v28 + 8),
    off_1000AC6E0,
    qword_1000AC6E8[0],
    SBYTE5(qword_1000AC6E8[0]),
    SBYTE4(qword_1000AC6E8[0]),
    qword_1000AC6E8[1],
    qword_1000AC6E8[2]);
  *(_DWORD *)(a1 + 804) = v31;
  v10 = *(char ***)(a1 + 536);
  if ( *(_BYTE *)(a1 + 1233) )
  {
    v35 = v10[2];
    v36 = v10[3];
    v37 = (unsigned __int64)(v36 + 1);
    if ( v10[4] >= v36 + 1 )
    {
      v38 = v10[3];
    }
    else
    {
      v35 = (char *)qvector_reserve((__int64)(v10 + 2), v35, v37, 0x28u);
      v10[2] = v35;
      v38 = v10[3];
      v37 = (unsigned __int64)(v38 + 1);
    }
    v40 = 5LL * (_QWORD)v38;
    v10[3] = (char *)v37;
    *(_DWORD *)&v35[8 * v40] = 3;
    *(_QWORD *)&v35[8 * v40 + 8] = -1;
    *(_QWORD *)&v35[8 * v40 + 16] = sub_100023090;
    *(_QWORD *)&v35[8 * v40 + 24] = sub_1000230A0;
    *(_QWORD *)&v35[8 * v40 + 32] = 0;
    sub_100023820(
      v10[1],
      off_1000AC700,
      qword_1000AC708[0],
      SBYTE5(qword_1000AC708[0]),
      SBYTE4(qword_1000AC708[0]),
      qword_1000AC708[1],
      qword_1000AC708[2]);
    *(_DWORD *)(a1 + 808) = (_DWORD)v36;
    v10 = *(char ***)(a1 + 536);
    v41 = v10[2];
    v42 = v10[3];
    v43 = (unsigned __int64)(v42 + 1);
    if ( v10[4] >= v42 + 1 )
    {
      v44 = v10[3];
    }
    else
    {
      v41 = (char *)qvector_reserve((__int64)(v10 + 2), v41, v43, 0x28u);
      v10[2] = v41;
      v44 = v10[3];
      v43 = (unsigned __int64)(v44 + 1);
    }
    v45 = 5LL * (_QWORD)v44;
    v10[3] = (char *)v43;
    *(_DWORD *)&v41[8 * v45] = 3;
    *(_QWORD *)&v41[8 * v45 + 8] = -1;
    *(_QWORD *)&v41[8 * v45 + 16] = sub_100023090;
    *(_QWORD *)&v41[8 * v45 + 24] = sub_1000230A0;
    *(_QWORD *)&v41[8 * v45 + 32] = 0;
  }
  else
  {
    switch ( BYTE5(qword_1000AC708[0]) )
    {
      case 1u:
        v39 = 2;
        break;
      case 7u:
        v39 = 8;
        break;
      case 2u:
        v39 = 4;
        break;
      default:
        goto LABEL_347;
    }
    v46 = v10[2];
    v47 = v10[3];
    v48 = (unsigned __int64)(v47 + 1);
    if ( v10[4] >= v47 + 1 )
    {
      v49 = v10[3];
    }
    else
    {
      v46 = (char *)qvector_reserve((__int64)(v10 + 2), v46, v48, 0x28u);
      v10[2] = v46;
      v49 = v10[3];
      v48 = (unsigned __int64)(v49 + 1);
    }
    v50 = 5LL * (_QWORD)v49;
    v10[3] = (char *)v48;
    *(_DWORD *)&v46[8 * v50] = 0;
    *(_QWORD *)&v46[8 * v50 + 8] = -1;
    *(_QWORD *)&v46[8 * v50 + 16] = 256;
    *(_QWORD *)&v46[8 * v50 + 24] = 8;
    *(_QWORD *)&v46[8 * v50 + 32] = v39;
    sub_100023820(
      v10[1],
      off_1000AC700,
      qword_1000AC708[0],
      SBYTE5(qword_1000AC708[0]),
      SBYTE4(qword_1000AC708[0]),
      qword_1000AC708[1],
      qword_1000AC708[2]);
    *(_DWORD *)(a1 + 808) = (_DWORD)v47;
    v10 = *(char ***)(a1 + 536);
    switch ( BYTE5(qword_1000AC728[0]) )
    {
      case 1u:
        v51 = 2;
        break;
      case 7u:
        v51 = 8;
        break;
      case 2u:
        v51 = 4;
        break;
      default:
        goto LABEL_347;
    }
    v52 = v10[2];
    v42 = v10[3];
    v53 = (unsigned __int64)(v42 + 1);
    if ( v10[4] >= v42 + 1 )
    {
      v54 = v10[3];
    }
    else
    {
      v52 = (char *)qvector_reserve((__int64)(v10 + 2), v52, v53, 0x28u);
      v10[2] = v52;
      v54 = v10[3];
      v53 = (unsigned __int64)(v54 + 1);
    }
    v55 = 5LL * (_QWORD)v54;
    v10[3] = (char *)v53;
    *(_DWORD *)&v52[8 * v55] = 0;
    *(_QWORD *)&v52[8 * v55 + 8] = -1;
    *(_QWORD *)&v52[8 * v55 + 16] = 264;
    *(_QWORD *)&v52[8 * v55 + 24] = 8;
    *(_QWORD *)&v52[8 * v55 + 32] = v51;
  }
  sub_100023820(
    v10[1],
    off_1000AC720,
    qword_1000AC728[0],
    SBYTE5(qword_1000AC728[0]),
    SBYTE4(qword_1000AC728[0]),
    qword_1000AC728[1],
    qword_1000AC728[2]);
  *(_DWORD *)(a1 + 812) = (_DWORD)v42;
  v56 = *(_QWORD *)(a1 + 536);
  v10 = &off_1000AC740;
  switch ( BYTE5(qword_1000AC748[0]) )
  {
    case 1u:
      v57 = 2;
      break;
    case 7u:
      v57 = 8;
      break;
    case 2u:
      v57 = 4;
      break;
    default:
      goto LABEL_347;
  }
  v58 = *(void **)(v56 + 16);
  v59 = *(_QWORD *)(v56 + 24);
  v60 = v59 + 1;
  if ( *(_QWORD *)(v56 + 32) >= (unsigned __int64)(v59 + 1) )
  {
    v61 = *(_QWORD *)(v56 + 24);
  }
  else
  {
    v58 = qvector_reserve(v56 + 16, v58, v60, 0x28u);
    *(_QWORD *)(v56 + 16) = v58;
    v61 = *(_QWORD *)(v56 + 24);
    v60 = v61 + 1;
  }
  v62 = 5 * v61;
  *(_QWORD *)(v56 + 24) = v60;
  *((_DWORD *)v58 + 2 * v62) = 0;
  *((_QWORD *)v58 + v62 + 1) = -1;
  *((_QWORD *)v58 + v62 + 2) = 272;
  *((_QWORD *)v58 + v62 + 3) = 8;
  *((_QWORD *)v58 + v62 + 4) = v57;
  sub_100023820(
    *(_QWORD **)(v56 + 8),
    off_1000AC740,
    qword_1000AC748[0],
    SBYTE5(qword_1000AC748[0]),
    SBYTE4(qword_1000AC748[0]),
    qword_1000AC748[1],
    qword_1000AC748[2]);
  *(_DWORD *)(a1 + 796) = v59;
  v63 = *(_QWORD *)(a1 + 536);
  v10 = &off_1000AC760;
  switch ( BYTE5(qword_1000AC768[0]) )
  {
    case 1u:
      v64 = 2;
      break;
    case 7u:
      v64 = 8;
      break;
    case 2u:
      v64 = 4;
      break;
    default:
      goto LABEL_347;
  }
  v65 = *(void **)(v63 + 16);
  v66 = *(_QWORD *)(v63 + 24);
  v67 = v66 + 1;
  if ( *(_QWORD *)(v63 + 32) >= (unsigned __int64)(v66 + 1) )
  {
    v68 = *(_QWORD *)(v63 + 24);
  }
  else
  {
    v65 = qvector_reserve(v63 + 16, v65, v67, 0x28u);
    *(_QWORD *)(v63 + 16) = v65;
    v68 = *(_QWORD *)(v63 + 24);
    v67 = v68 + 1;
  }
  v69 = 5 * v68;
  *(_QWORD *)(v63 + 24) = v67;
  *((_DWORD *)v65 + 2 * v69) = 0;
  *((_QWORD *)v65 + v69 + 1) = -1;
  *((_QWORD *)v65 + v69 + 2) = 280;
  *((_QWORD *)v65 + v69 + 3) = 8;
  *((_QWORD *)v65 + v69 + 4) = v64;
  sub_100023820(
    *(_QWORD **)(v63 + 8),
    off_1000AC760,
    qword_1000AC768[0],
    SBYTE5(qword_1000AC768[0]),
    SBYTE4(qword_1000AC768[0]),
    qword_1000AC768[1],
    qword_1000AC768[2]);
  *(_DWORD *)(a1 + 800) = v66;
  v10 = *(char ***)(a1 + 536);
  if ( *(_BYTE *)(a1 + 1233) == 1 )
  {
    v70 = v10[2];
    v71 = v10[3];
    v72 = (unsigned __int64)(v71 + 1);
    if ( v10[4] >= v71 + 1 )
    {
      v73 = v10[3];
    }
    else
    {
      v70 = (char *)qvector_reserve((__int64)(v10 + 2), v70, v72, 0x28u);
      v10[2] = v70;
      v73 = v10[3];
      v72 = (unsigned __int64)(v73 + 1);
    }
    v75 = 5LL * (_QWORD)v73;
    v10[3] = (char *)v72;
    *(_DWORD *)&v70[8 * v75] = 3;
    *(_QWORD *)&v70[8 * v75 + 8] = -1;
    *(_QWORD *)&v70[8 * v75 + 16] = sub_100023090;
    *(_QWORD *)&v70[8 * v75 + 24] = sub_1000230A0;
    *(_QWORD *)&v70[8 * v75 + 32] = 0;
  }
  else
  {
    switch ( BYTE5(qword_1000AC788[0]) )
    {
      case 1u:
        v74 = 2;
        break;
      case 7u:
        v74 = 8;
        break;
      case 2u:
        v74 = 4;
        break;
      default:
        goto LABEL_347;
    }
    v76 = v10[2];
    v71 = v10[3];
    v77 = (unsigned __int64)(v71 + 1);
    if ( v10[4] >= v71 + 1 )
    {
      v78 = v10[3];
    }
    else
    {
      v76 = (char *)qvector_reserve((__int64)(v10 + 2), v76, v77, 0x28u);
      v10[2] = v76;
      v78 = v10[3];
      v77 = (unsigned __int64)(v78 + 1);
    }
    v79 = 5LL * (_QWORD)v78;
    v10[3] = (char *)v77;
    *(_DWORD *)&v76[8 * v79] = 0;
    *(_QWORD *)&v76[8 * v79 + 8] = -1;
    *(_QWORD *)&v76[8 * v79 + 16] = 240;
    *(_QWORD *)&v76[8 * v79 + 24] = 8;
    *(_QWORD *)&v76[8 * v79 + 32] = v74;
  }
  sub_100023820(
    v10[1],
    off_1000AC780,
    qword_1000AC788[0],
    SBYTE5(qword_1000AC788[0]),
    SBYTE4(qword_1000AC788[0]),
    qword_1000AC788[1],
    qword_1000AC788[2]);
  *(_DWORD *)(a1 + 816) = (_DWORD)v71;
  v10 = *(char ***)(a1 + 536);
  if ( *(_BYTE *)(a1 + 1233) == 1 )
  {
    switch ( BYTE5(qword_1000AC220) )
    {
      case 1u:
        v80 = 2;
        break;
      case 7u:
        v80 = 8;
        break;
      case 2u:
        v80 = 4;
        break;
      default:
        goto LABEL_347;
    }
    v82 = v10[2];
    v83 = v10[3];
    v84 = (unsigned __int64)(v83 + 1);
    if ( v10[4] < v83 + 1 )
    {
      v82 = (char *)qvector_reserve((__int64)(v10 + 2), v82, v84, 0x28u);
      v10[2] = v82;
      v83 = v10[3];
      v84 = (unsigned __int64)(v83 + 1);
    }
    v85 = 5LL * (_QWORD)v83;
    v10[3] = (char *)v84;
    *(_DWORD *)&v82[8 * v85] = 0;
    *(_QWORD *)&v82[8 * v85 + 8] = -1;
    *(_QWORD *)&v82[8 * v85 + 16] = 96;
    *(_QWORD *)&v82[8 * v85 + 24] = 8;
    *(_QWORD *)&v82[8 * v85 + 32] = v80;
    sub_100023820(
      v10[1],
      off_1000AC218,
      qword_1000AC220,
      SBYTE5(qword_1000AC220),
      SBYTE4(qword_1000AC220),
      xmmword_1000AC228,
      *((__int64 *)&xmmword_1000AC228 + 1));
    v86 = *(_QWORD *)(a1 + 536);
    v10 = &off_1000AC238;
    switch ( BYTE5(qword_1000AC240) )
    {
      case 1u:
        v87 = 2;
        break;
      case 7u:
        v87 = 8;
        break;
      case 2u:
        v87 = 4;
        break;
      default:
        goto LABEL_347;
    }
    v94 = *(void **)(v86 + 16);
    v95 = *(_QWORD *)(v86 + 24);
    v96 = v95 + 1;
    if ( *(_QWORD *)(v86 + 32) < (unsigned __int64)(v95 + 1) )
    {
      v94 = qvector_reserve(v86 + 16, v94, v96, 0x28u);
      *(_QWORD *)(v86 + 16) = v94;
      v95 = *(_QWORD *)(v86 + 24);
      v96 = v95 + 1;
    }
    v97 = 5 * v95;
    *(_QWORD *)(v86 + 24) = v96;
    *((_DWORD *)v94 + 2 * v97) = 0;
    *((_QWORD *)v94 + v97 + 1) = -1;
    *((_QWORD *)v94 + v97 + 2) = 104;
    *((_QWORD *)v94 + v97 + 3) = 8;
    *((_QWORD *)v94 + v97 + 4) = v87;
    sub_100023820(
      *(_QWORD **)(v86 + 8),
      off_1000AC238,
      qword_1000AC240,
      SBYTE5(qword_1000AC240),
      SBYTE4(qword_1000AC240),
      xmmword_1000AC248,
      *((__int64 *)&xmmword_1000AC248 + 1));
    v98 = *(_QWORD *)(a1 + 536);
    v10 = &off_1000AC258;
    switch ( BYTE5(qword_1000AC260) )
    {
      case 1u:
        v99 = 2;
        break;
      case 7u:
        v99 = 8;
        break;
      case 2u:
        v99 = 4;
        break;
      default:
        goto LABEL_347;
    }
    v106 = *(void **)(v98 + 16);
    v107 = *(_QWORD *)(v98 + 24);
    v108 = v107 + 1;
    if ( *(_QWORD *)(v98 + 32) < (unsigned __int64)(v107 + 1) )
    {
      v106 = qvector_reserve(v98 + 16, v106, v108, 0x28u);
      *(_QWORD *)(v98 + 16) = v106;
      v107 = *(_QWORD *)(v98 + 24);
      v108 = v107 + 1;
    }
    v109 = 5 * v107;
    *(_QWORD *)(v98 + 24) = v108;
    *((_DWORD *)v106 + 2 * v109) = 0;
    *((_QWORD *)v106 + v109 + 1) = -1;
    *((_QWORD *)v106 + v109 + 2) = 112;
    *((_QWORD *)v106 + v109 + 3) = 8;
    *((_QWORD *)v106 + v109 + 4) = v99;
    sub_100023820(
      *(_QWORD **)(v98 + 8),
      off_1000AC258,
      qword_1000AC260,
      SBYTE5(qword_1000AC260),
      SBYTE4(qword_1000AC260),
      xmmword_1000AC268,
      *((__int64 *)&xmmword_1000AC268 + 1));
    v110 = *(_QWORD *)(a1 + 536);
    v10 = &off_1000AC278;
    switch ( BYTE5(qword_1000AC280) )
    {
      case 1u:
        v111 = 2;
        break;
      case 7u:
        v111 = 8;
        break;
      case 2u:
        v111 = 4;
        break;
      default:
        goto LABEL_347;
    }
    v118 = *(void **)(v110 + 16);
    v119 = *(_QWORD *)(v110 + 24);
    v120 = v119 + 1;
    if ( *(_QWORD *)(v110 + 32) < (unsigned __int64)(v119 + 1) )
    {
      v118 = qvector_reserve(v110 + 16, v118, v120, 0x28u);
      *(_QWORD *)(v110 + 16) = v118;
      v119 = *(_QWORD *)(v110 + 24);
      v120 = v119 + 1;
    }
    v121 = 5 * v119;
    *(_QWORD *)(v110 + 24) = v120;
    *((_DWORD *)v118 + 2 * v121) = 0;
    *((_QWORD *)v118 + v121 + 1) = -1;
    *((_QWORD *)v118 + v121 + 2) = 120;
    *((_QWORD *)v118 + v121 + 3) = 8;
    *((_QWORD *)v118 + v121 + 4) = v111;
    sub_100023820(
      *(_QWORD **)(v110 + 8),
      off_1000AC278,
      qword_1000AC280,
      SBYTE5(qword_1000AC280),
      SBYTE4(qword_1000AC280),
      xmmword_1000AC288,
      *((__int64 *)&xmmword_1000AC288 + 1));
    v122 = *(_QWORD *)(a1 + 536);
    v10 = &off_1000AC298;
    switch ( BYTE5(qword_1000AC2A0) )
    {
      case 1u:
        v123 = 2;
        break;
      case 7u:
        v123 = 8;
        break;
      case 2u:
        v123 = 4;
        break;
      default:
        goto LABEL_347;
    }
    v130 = *(void **)(v122 + 16);
    v131 = *(_QWORD *)(v122 + 24);
    v132 = v131 + 1;
    if ( *(_QWORD *)(v122 + 32) < (unsigned __int64)(v131 + 1) )
    {
      v130 = qvector_reserve(v122 + 16, v130, v132, 0x28u);
      *(_QWORD *)(v122 + 16) = v130;
      v131 = *(_QWORD *)(v122 + 24);
      v132 = v131 + 1;
    }
    v133 = 5 * v131;
    *(_QWORD *)(v122 + 24) = v132;
    *((_DWORD *)v130 + 2 * v133) = 0;
    *((_QWORD *)v130 + v133 + 1) = -1;
    *((_QWORD *)v130 + v133 + 2) = 136;
    *((_QWORD *)v130 + v133 + 3) = 8;
    *((_QWORD *)v130 + v133 + 4) = v123;
    sub_100023820(
      *(_QWORD **)(v122 + 8),
      off_1000AC298,
      qword_1000AC2A0,
      SBYTE5(qword_1000AC2A0),
      SBYTE4(qword_1000AC2A0),
      xmmword_1000AC2A8,
      *((__int64 *)&xmmword_1000AC2A8 + 1));
    v134 = *(_QWORD *)(a1 + 536);
    v10 = &off_1000AC2B8;
    switch ( BYTE5(qword_1000AC2C0) )
    {
      case 1u:
        v135 = 2;
        break;
      case 7u:
        v135 = 8;
        break;
      case 2u:
        v135 = 4;
        break;
      default:
        goto LABEL_347;
    }
    v142 = *(void **)(v134 + 16);
    v143 = *(_QWORD *)(v134 + 24);
    v144 = v143 + 1;
    if ( *(_QWORD *)(v134 + 32) < (unsigned __int64)(v143 + 1) )
    {
      v142 = qvector_reserve(v134 + 16, v142, v144, 0x28u);
      *(_QWORD *)(v134 + 16) = v142;
      v143 = *(_QWORD *)(v134 + 24);
      v144 = v143 + 1;
    }
    v145 = 5 * v143;
    *(_QWORD *)(v134 + 24) = v144;
    *((_DWORD *)v142 + 2 * v145) = 0;
    *((_QWORD *)v142 + v145 + 1) = -1;
    *((_QWORD *)v142 + v145 + 2) = 128;
    *((_QWORD *)v142 + v145 + 3) = 8;
    *((_QWORD *)v142 + v145 + 4) = v135;
    sub_100023820(
      *(_QWORD **)(v134 + 8),
      off_1000AC2B8,
      qword_1000AC2C0,
      SBYTE5(qword_1000AC2C0),
      SBYTE4(qword_1000AC2C0),
      xmmword_1000AC2C8,
      *((__int64 *)&xmmword_1000AC2C8 + 1));
    v146 = *(_QWORD *)(a1 + 536);
    v10 = &off_1000AC2D8;
    switch ( BYTE5(qword_1000AC2E0) )
    {
      case 1u:
        v147 = 2;
        break;
      case 7u:
        v147 = 8;
        break;
      case 2u:
        v147 = 4;
        break;
      default:
        goto LABEL_347;
    }
    v154 = *(void **)(v146 + 16);
    v155 = *(_QWORD *)(v146 + 24);
    v156 = v155 + 1;
    if ( *(_QWORD *)(v146 + 32) < (unsigned __int64)(v155 + 1) )
    {
      v154 = qvector_reserve(v146 + 16, v154, v156, 0x28u);
      *(_QWORD *)(v146 + 16) = v154;
      v155 = *(_QWORD *)(v146 + 24);
      v156 = v155 + 1;
    }
    v157 = 5 * v155;
    *(_QWORD *)(v146 + 24) = v156;
    *((_DWORD *)v154 + 2 * v157) = 0;
    *((_QWORD *)v154 + v157 + 1) = -1;
    *((_QWORD *)v154 + v157 + 2) = 144;
    *((_QWORD *)v154 + v157 + 3) = 8;
    *((_QWORD *)v154 + v157 + 4) = v147;
    sub_100023820(
      *(_QWORD **)(v146 + 8),
      off_1000AC2D8,
      qword_1000AC2E0,
      SBYTE5(qword_1000AC2E0),
      SBYTE4(qword_1000AC2E0),
      xmmword_1000AC2E8,
      *((__int64 *)&xmmword_1000AC2E8 + 1));
    v158 = *(_QWORD *)(a1 + 536);
    v10 = &off_1000AC2F8;
    switch ( BYTE5(qword_1000AC300) )
    {
      case 1u:
        v159 = 2;
        break;
      case 7u:
        v159 = 8;
        break;
      case 2u:
        v159 = 4;
        break;
      default:
        goto LABEL_347;
    }
    v166 = *(void **)(v158 + 16);
    v167 = *(_QWORD *)(v158 + 24);
    v168 = v167 + 1;
    if ( *(_QWORD *)(v158 + 32) >= (unsigned __int64)(v167 + 1) )
    {
      v169 = *(_QWORD *)(v158 + 24);
    }
    else
    {
      v166 = qvector_reserve(v158 + 16, v166, v168, 0x28u);
      *(_QWORD *)(v158 + 16) = v166;
      v169 = *(_QWORD *)(v158 + 24);
      v168 = v169 + 1;
    }
    v170 = 5 * v169;
    *(_QWORD *)(v158 + 24) = v168;
    *((_DWORD *)v166 + 2 * v170) = 0;
    *((_QWORD *)v166 + v170 + 1) = -1;
    *((_QWORD *)v166 + v170 + 2) = 152;
    *((_QWORD *)v166 + v170 + 3) = 8;
    *((_QWORD *)v166 + v170 + 4) = v159;
    sub_100023820(
      *(_QWORD **)(v158 + 8),
      off_1000AC2F8,
      qword_1000AC300,
      SBYTE5(qword_1000AC300),
      SBYTE4(qword_1000AC300),
      xmmword_1000AC308,
      *((__int64 *)&xmmword_1000AC308 + 1));
    *(_DWORD *)(a1 + 652) = v167;
    v171 = *(_QWORD *)(a1 + 536);
    v10 = &off_1000AC318;
    switch ( BYTE5(qword_1000AC320) )
    {
      case 1u:
        v172 = 2;
        break;
      case 7u:
        v172 = 8;
        break;
      case 2u:
        v172 = 4;
        break;
      default:
        goto LABEL_347;
    }
    v180 = *(void **)(v171 + 16);
    v181 = *(_QWORD *)(v171 + 24);
    v182 = v181 + 1;
    if ( *(_QWORD *)(v171 + 32) >= (unsigned __int64)(v181 + 1) )
    {
      v183 = *(_QWORD *)(v171 + 24);
    }
    else
    {
      v180 = qvector_reserve(v171 + 16, v180, v182, 0x28u);
      *(_QWORD *)(v171 + 16) = v180;
      v183 = *(_QWORD *)(v171 + 24);
      v182 = v183 + 1;
    }
    v184 = 5 * v183;
    *(_QWORD *)(v171 + 24) = v182;
    *((_DWORD *)v180 + 2 * v184) = 0;
    *((_QWORD *)v180 + v184 + 1) = -1;
    *((_QWORD *)v180 + v184 + 2) = 160;
    *((_QWORD *)v180 + v184 + 3) = 8;
    *((_QWORD *)v180 + v184 + 4) = v172;
    sub_100023820(
      *(_QWORD **)(v171 + 8),
      off_1000AC318,
      qword_1000AC320,
      SBYTE5(qword_1000AC320),
      SBYTE4(qword_1000AC320),
      xmmword_1000AC328,
      *((__int64 *)&xmmword_1000AC328 + 1));
    *(_DWORD *)(a1 + 656) = v181;
    v185 = *(_QWORD *)(a1 + 536);
    v10 = &off_1000AC338;
    switch ( BYTE5(qword_1000AC340) )
    {
      case 1u:
        v186 = 2;
        break;
      case 7u:
        v186 = 8;
        break;
      case 2u:
        v186 = 4;
        break;
      default:
        goto LABEL_347;
    }
    v192 = *(void **)(v185 + 16);
    v193 = *(_QWORD *)(v185 + 24);
    v194 = v193 + 1;
    if ( *(_QWORD *)(v185 + 32) < (unsigned __int64)(v193 + 1) )
    {
      v192 = qvector_reserve(v185 + 16, v192, v194, 0x28u);
      *(_QWORD *)(v185 + 16) = v192;
      v193 = *(_QWORD *)(v185 + 24);
      v194 = v193 + 1;
    }
    v195 = 5 * v193;
    *(_QWORD *)(v185 + 24) = v194;
    *((_DWORD *)v192 + 2 * v195) = 0;
    *((_QWORD *)v192 + v195 + 1) = -1;
    *((_QWORD *)v192 + v195 + 2) = 168;
    *((_QWORD *)v192 + v195 + 3) = 8;
    *((_QWORD *)v192 + v195 + 4) = v186;
    sub_100023820(
      *(_QWORD **)(v185 + 8),
      off_1000AC338,
      qword_1000AC340,
      SBYTE5(qword_1000AC340),
      SBYTE4(qword_1000AC340),
      xmmword_1000AC348,
      *((__int64 *)&xmmword_1000AC348 + 1));
    v196 = *(_QWORD *)(a1 + 536);
    v10 = &off_1000AC358;
    switch ( BYTE5(qword_1000AC360) )
    {
      case 1u:
        v197 = 2;
        break;
      case 7u:
        v197 = 8;
        break;
      case 2u:
        v197 = 4;
        break;
      default:
        goto LABEL_347;
    }
    v198 = *(void **)(v196 + 16);
    v199 = *(_QWORD *)(v196 + 24);
    v200 = v199 + 1;
    if ( *(_QWORD *)(v196 + 32) < (unsigned __int64)(v199 + 1) )
    {
      v198 = qvector_reserve(v196 + 16, v198, v200, 0x28u);
      *(_QWORD *)(v196 + 16) = v198;
      v199 = *(_QWORD *)(v196 + 24);
      v200 = v199 + 1;
    }
    v201 = 5 * v199;
    *(_QWORD *)(v196 + 24) = v200;
    *((_DWORD *)v198 + 2 * v201) = 0;
    *((_QWORD *)v198 + v201 + 1) = -1;
    *((_QWORD *)v198 + v201 + 2) = 176;
    *((_QWORD *)v198 + v201 + 3) = 8;
    *((_QWORD *)v198 + v201 + 4) = v197;
    sub_100023820(
      *(_QWORD **)(v196 + 8),
      off_1000AC358,
      qword_1000AC360,
      SBYTE5(qword_1000AC360),
      SBYTE4(qword_1000AC360),
      xmmword_1000AC368,
      *((__int64 *)&xmmword_1000AC368 + 1));
    v202 = *(_QWORD *)(a1 + 536);
    v10 = &off_1000AC378;
    switch ( BYTE5(qword_1000AC380) )
    {
      case 1u:
        v203 = 2;
        break;
      case 7u:
        v203 = 8;
        break;
      case 2u:
        v203 = 4;
        break;
      default:
        goto LABEL_347;
    }
    v204 = *(void **)(v202 + 16);
    v205 = *(_QWORD *)(v202 + 24);
    v206 = v205 + 1;
    if ( *(_QWORD *)(v202 + 32) < (unsigned __int64)(v205 + 1) )
    {
      v204 = qvector_reserve(v202 + 16, v204, v206, 0x28u);
      *(_QWORD *)(v202 + 16) = v204;
      v205 = *(_QWORD *)(v202 + 24);
      v206 = v205 + 1;
    }
    v207 = 5 * v205;
    *(_QWORD *)(v202 + 24) = v206;
    *((_DWORD *)v204 + 2 * v207) = 0;
    *((_QWORD *)v204 + v207 + 1) = -1;
    *((_QWORD *)v204 + v207 + 2) = 184;
    *((_QWORD *)v204 + v207 + 3) = 8;
    *((_QWORD *)v204 + v207 + 4) = v203;
    sub_100023820(
      *(_QWORD **)(v202 + 8),
      off_1000AC378,
      qword_1000AC380,
      SBYTE5(qword_1000AC380),
      SBYTE4(qword_1000AC380),
      xmmword_1000AC388,
      *((__int64 *)&xmmword_1000AC388 + 1));
    v208 = *(_QWORD *)(a1 + 536);
    v10 = &off_1000AC398;
    switch ( BYTE5(qword_1000AC3A0) )
    {
      case 1u:
        v209 = 2;
        break;
      case 7u:
        v209 = 8;
        break;
      case 2u:
        v209 = 4;
        break;
      default:
        goto LABEL_347;
    }
    v210 = *(void **)(v208 + 16);
    v211 = *(_QWORD *)(v208 + 24);
    v212 = v211 + 1;
    if ( *(_QWORD *)(v208 + 32) < (unsigned __int64)(v211 + 1) )
    {
      v210 = qvector_reserve(v208 + 16, v210, v212, 0x28u);
      *(_QWORD *)(v208 + 16) = v210;
      v211 = *(_QWORD *)(v208 + 24);
      v212 = v211 + 1;
    }
    v213 = 5 * v211;
    *(_QWORD *)(v208 + 24) = v212;
    *((_DWORD *)v210 + 2 * v213) = 0;
    *((_QWORD *)v210 + v213 + 1) = -1;
    *((_QWORD *)v210 + v213 + 2) = 192;
    *((_QWORD *)v210 + v213 + 3) = 8;
    *((_QWORD *)v210 + v213 + 4) = v209;
    sub_100023820(
      *(_QWORD **)(v208 + 8),
      off_1000AC398,
      qword_1000AC3A0,
      SBYTE5(qword_1000AC3A0),
      SBYTE4(qword_1000AC3A0),
      xmmword_1000AC3A8,
      *((__int64 *)&xmmword_1000AC3A8 + 1));
    v214 = *(_QWORD *)(a1 + 536);
    v10 = &off_1000AC3B8;
    switch ( BYTE5(qword_1000AC3C0) )
    {
      case 1u:
        v215 = 2;
        break;
      case 7u:
        v215 = 8;
        break;
      case 2u:
        v215 = 4;
        break;
      default:
        goto LABEL_347;
    }
    v216 = *(void **)(v214 + 16);
    v217 = *(_QWORD *)(v214 + 24);
    v218 = v217 + 1;
    if ( *(_QWORD *)(v214 + 32) < (unsigned __int64)(v217 + 1) )
    {
      v216 = qvector_reserve(v214 + 16, v216, v218, 0x28u);
      *(_QWORD *)(v214 + 16) = v216;
      v217 = *(_QWORD *)(v214 + 24);
      v218 = v217 + 1;
    }
    v219 = 5 * v217;
    *(_QWORD *)(v214 + 24) = v218;
    *((_DWORD *)v216 + 2 * v219) = 0;
    *((_QWORD *)v216 + v219 + 1) = -1;
    *((_QWORD *)v216 + v219 + 2) = 200;
    *((_QWORD *)v216 + v219 + 3) = 8;
    *((_QWORD *)v216 + v219 + 4) = v215;
    sub_100023820(
      *(_QWORD **)(v214 + 8),
      off_1000AC3B8,
      qword_1000AC3C0,
      SBYTE5(qword_1000AC3C0),
      SBYTE4(qword_1000AC3C0),
      xmmword_1000AC3C8,
      *((__int64 *)&xmmword_1000AC3C8 + 1));
    v220 = *(_QWORD *)(a1 + 536);
    v10 = &off_1000AC3D8;
    switch ( BYTE5(qword_1000AC3E0) )
    {
      case 1u:
        v221 = 2;
        break;
      case 7u:
        v221 = 8;
        break;
      case 2u:
        v221 = 4;
        break;
      default:
        goto LABEL_347;
    }
    v222 = *(void **)(v220 + 16);
    v223 = *(_QWORD *)(v220 + 24);
    v224 = v223 + 1;
    if ( *(_QWORD *)(v220 + 32) < (unsigned __int64)(v223 + 1) )
    {
      v222 = qvector_reserve(v220 + 16, v222, v224, 0x28u);
      *(_QWORD *)(v220 + 16) = v222;
      v223 = *(_QWORD *)(v220 + 24);
      v224 = v223 + 1;
    }
    v225 = 5 * v223;
    *(_QWORD *)(v220 + 24) = v224;
    *((_DWORD *)v222 + 2 * v225) = 0;
    *((_QWORD *)v222 + v225 + 1) = -1;
    *((_QWORD *)v222 + v225 + 2) = 208;
    *((_QWORD *)v222 + v225 + 3) = 8;
    *((_QWORD *)v222 + v225 + 4) = v221;
    sub_100023820(
      *(_QWORD **)(v220 + 8),
      off_1000AC3D8,
      qword_1000AC3E0,
      SBYTE5(qword_1000AC3E0),
      SBYTE4(qword_1000AC3E0),
      xmmword_1000AC3E8,
      *((__int64 *)&xmmword_1000AC3E8 + 1));
    v226 = *(_QWORD *)(a1 + 536);
    v10 = &off_1000AC3F8;
    switch ( BYTE5(qword_1000AC400) )
    {
      case 1u:
        v227 = 2;
        break;
      case 7u:
        v227 = 8;
        break;
      case 2u:
        v227 = 4;
        break;
      default:
        goto LABEL_347;
    }
    v228 = *(void **)(v226 + 16);
    v229 = *(_QWORD *)(v226 + 24);
    v230 = v229 + 1;
    if ( *(_QWORD *)(v226 + 32) < (unsigned __int64)(v229 + 1) )
    {
      v228 = qvector_reserve(v226 + 16, v228, v230, 0x28u);
      *(_QWORD *)(v226 + 16) = v228;
      v229 = *(_QWORD *)(v226 + 24);
      v230 = v229 + 1;
    }
    v231 = 5 * v229;
    *(_QWORD *)(v226 + 24) = v230;
    *((_DWORD *)v228 + 2 * v231) = 0;
    *((_QWORD *)v228 + v231 + 1) = -1;
    *((_QWORD *)v228 + v231 + 2) = 216;
    *((_QWORD *)v228 + v231 + 3) = 8;
    *((_QWORD *)v228 + v231 + 4) = v227;
    sub_100023820(
      *(_QWORD **)(v226 + 8),
      off_1000AC3F8,
      qword_1000AC400,
      SBYTE5(qword_1000AC400),
      SBYTE4(qword_1000AC400),
      xmmword_1000AC408,
      *((__int64 *)&xmmword_1000AC408 + 1));
    v232 = *(_QWORD *)(a1 + 536);
    v10 = &off_1000AC418;
    switch ( BYTE5(qword_1000AC420) )
    {
      case 1u:
        v233 = 2;
        break;
      case 7u:
        v233 = 8;
        break;
      case 2u:
        v233 = 4;
        break;
      default:
        goto LABEL_347;
    }
    v234 = *(void **)(v232 + 16);
    v235 = *(_QWORD *)(v232 + 24);
    v236 = v235 + 1;
    if ( *(_QWORD *)(v232 + 32) < (unsigned __int64)(v235 + 1) )
    {
      v234 = qvector_reserve(v232 + 16, v234, v236, 0x28u);
      *(_QWORD *)(v232 + 16) = v234;
      v235 = *(_QWORD *)(v232 + 24);
      v236 = v235 + 1;
    }
    v237 = 5 * v235;
    *(_QWORD *)(v232 + 24) = v236;
    *((_DWORD *)v234 + 2 * v237) = 0;
    *((_QWORD *)v234 + v237 + 1) = -1;
    *((_QWORD *)v234 + v237 + 2) = 224;
    *((_QWORD *)v234 + v237 + 3) = 8;
    *((_QWORD *)v234 + v237 + 4) = v233;
    sub_100023820(
      *(_QWORD **)(v232 + 8),
      off_1000AC418,
      qword_1000AC420,
      SBYTE5(qword_1000AC420),
      SBYTE4(qword_1000AC420),
      xmmword_1000AC428,
      *((__int64 *)&xmmword_1000AC428 + 1));
  }
  else
  {
    switch ( BYTE5(qword_1000AC440) )
    {
      case 1u:
        v81 = 2;
        break;
      case 7u:
        v81 = 8;
        break;
      case 2u:
        v81 = 4;
        break;
      default:
        goto LABEL_347;
    }
    v88 = v10[2];
    v89 = v10[3];
    v90 = (unsigned __int64)(v89 + 1);
    if ( v10[4] < v89 + 1 )
    {
      v88 = (char *)qvector_reserve((__int64)(v10 + 2), v88, v90, 0x28u);
      v10[2] = v88;
      v89 = v10[3];
      v90 = (unsigned __int64)(v89 + 1);
    }
    v91 = 5LL * (_QWORD)v89;
    v10[3] = (char *)v90;
    *(_DWORD *)&v88[8 * v91] = 0;
    *(_QWORD *)&v88[8 * v91 + 8] = -1;
    *(_QWORD *)&v88[8 * v91 + 16] = 96;
    *(_QWORD *)&v88[8 * v91 + 24] = 8;
    *(_QWORD *)&v88[8 * v91 + 32] = v81;
    sub_100023820(
      v10[1],
      off_1000AC438,
      qword_1000AC440,
      SBYTE5(qword_1000AC440),
      SBYTE4(qword_1000AC440),
      xmmword_1000AC448,
      *((__int64 *)&xmmword_1000AC448 + 1));
    v92 = *(_QWORD *)(a1 + 536);
    v10 = &off_1000AC458;
    switch ( BYTE5(qword_1000AC460) )
    {
      case 1u:
        v93 = 2;
        break;
      case 7u:
        v93 = 8;
        break;
      case 2u:
        v93 = 4;
        break;
      default:
        goto LABEL_347;
    }
    v100 = *(void **)(v92 + 16);
    v101 = *(_QWORD *)(v92 + 24);
    v102 = v101 + 1;
    if ( *(_QWORD *)(v92 + 32) < (unsigned __int64)(v101 + 1) )
    {
      v100 = qvector_reserve(v92 + 16, v100, v102, 0x28u);
      *(_QWORD *)(v92 + 16) = v100;
      v101 = *(_QWORD *)(v92 + 24);
      v102 = v101 + 1;
    }
    v103 = 5 * v101;
    *(_QWORD *)(v92 + 24) = v102;
    *((_DWORD *)v100 + 2 * v103) = 0;
    *((_QWORD *)v100 + v103 + 1) = -1;
    *((_QWORD *)v100 + v103 + 2) = 104;
    *((_QWORD *)v100 + v103 + 3) = 8;
    *((_QWORD *)v100 + v103 + 4) = v93;
    sub_100023820(
      *(_QWORD **)(v92 + 8),
      off_1000AC458,
      qword_1000AC460,
      SBYTE5(qword_1000AC460),
      SBYTE4(qword_1000AC460),
      xmmword_1000AC468,
      *((__int64 *)&xmmword_1000AC468 + 1));
    v104 = *(_QWORD *)(a1 + 536);
    v10 = &off_1000AC478;
    switch ( BYTE5(qword_1000AC480) )
    {
      case 1u:
        v105 = 2;
        break;
      case 7u:
        v105 = 8;
        break;
      case 2u:
        v105 = 4;
        break;
      default:
        goto LABEL_347;
    }
    v112 = *(void **)(v104 + 16);
    v113 = *(_QWORD *)(v104 + 24);
    v114 = v113 + 1;
    if ( *(_QWORD *)(v104 + 32) < (unsigned __int64)(v113 + 1) )
    {
      v112 = qvector_reserve(v104 + 16, v112, v114, 0x28u);
      *(_QWORD *)(v104 + 16) = v112;
      v113 = *(_QWORD *)(v104 + 24);
      v114 = v113 + 1;
    }
    v115 = 5 * v113;
    *(_QWORD *)(v104 + 24) = v114;
    *((_DWORD *)v112 + 2 * v115) = 0;
    *((_QWORD *)v112 + v115 + 1) = -1;
    *((_QWORD *)v112 + v115 + 2) = 112;
    *((_QWORD *)v112 + v115 + 3) = 8;
    *((_QWORD *)v112 + v115 + 4) = v105;
    sub_100023820(
      *(_QWORD **)(v104 + 8),
      off_1000AC478,
      qword_1000AC480,
      SBYTE5(qword_1000AC480),
      SBYTE4(qword_1000AC480),
      xmmword_1000AC488,
      *((__int64 *)&xmmword_1000AC488 + 1));
    v116 = *(_QWORD *)(a1 + 536);
    v10 = &off_1000AC498;
    switch ( BYTE5(qword_1000AC4A0) )
    {
      case 1u:
        v117 = 2;
        break;
      case 7u:
        v117 = 8;
        break;
      case 2u:
        v117 = 4;
        break;
      default:
        goto LABEL_347;
    }
    v124 = *(void **)(v116 + 16);
    v125 = *(_QWORD *)(v116 + 24);
    v126 = v125 + 1;
    if ( *(_QWORD *)(v116 + 32) < (unsigned __int64)(v125 + 1) )
    {
      v124 = qvector_reserve(v116 + 16, v124, v126, 0x28u);
      *(_QWORD *)(v116 + 16) = v124;
      v125 = *(_QWORD *)(v116 + 24);
      v126 = v125 + 1;
    }
    v127 = 5 * v125;
    *(_QWORD *)(v116 + 24) = v126;
    *((_DWORD *)v124 + 2 * v127) = 0;
    *((_QWORD *)v124 + v127 + 1) = -1;
    *((_QWORD *)v124 + v127 + 2) = 120;
    *((_QWORD *)v124 + v127 + 3) = 8;
    *((_QWORD *)v124 + v127 + 4) = v117;
    sub_100023820(
      *(_QWORD **)(v116 + 8),
      off_1000AC498,
      qword_1000AC4A0,
      SBYTE5(qword_1000AC4A0),
      SBYTE4(qword_1000AC4A0),
      xmmword_1000AC4A8,
      *((__int64 *)&xmmword_1000AC4A8 + 1));
    v128 = *(_QWORD *)(a1 + 536);
    v10 = &off_1000AC4B8;
    switch ( BYTE5(qword_1000AC4C0) )
    {
      case 1u:
        v129 = 2;
        break;
      case 7u:
        v129 = 8;
        break;
      case 2u:
        v129 = 4;
        break;
      default:
        goto LABEL_347;
    }
    v136 = *(void **)(v128 + 16);
    v137 = *(_QWORD *)(v128 + 24);
    v138 = v137 + 1;
    if ( *(_QWORD *)(v128 + 32) < (unsigned __int64)(v137 + 1) )
    {
      v136 = qvector_reserve(v128 + 16, v136, v138, 0x28u);
      *(_QWORD *)(v128 + 16) = v136;
      v137 = *(_QWORD *)(v128 + 24);
      v138 = v137 + 1;
    }
    v139 = 5 * v137;
    *(_QWORD *)(v128 + 24) = v138;
    *((_DWORD *)v136 + 2 * v139) = 0;
    *((_QWORD *)v136 + v139 + 1) = -1;
    *((_QWORD *)v136 + v139 + 2) = 136;
    *((_QWORD *)v136 + v139 + 3) = 8;
    *((_QWORD *)v136 + v139 + 4) = v129;
    sub_100023820(
      *(_QWORD **)(v128 + 8),
      off_1000AC4B8,
      qword_1000AC4C0,
      SBYTE5(qword_1000AC4C0),
      SBYTE4(qword_1000AC4C0),
      xmmword_1000AC4C8,
      *((__int64 *)&xmmword_1000AC4C8 + 1));
    v140 = *(_QWORD *)(a1 + 536);
    v10 = &off_1000AC4D8;
    switch ( BYTE5(qword_1000AC4E0) )
    {
      case 1u:
        v141 = 2;
        break;
      case 7u:
        v141 = 8;
        break;
      case 2u:
        v141 = 4;
        break;
      default:
        goto LABEL_347;
    }
    v148 = *(void **)(v140 + 16);
    v149 = *(_QWORD *)(v140 + 24);
    v150 = v149 + 1;
    if ( *(_QWORD *)(v140 + 32) < (unsigned __int64)(v149 + 1) )
    {
      v148 = qvector_reserve(v140 + 16, v148, v150, 0x28u);
      *(_QWORD *)(v140 + 16) = v148;
      v149 = *(_QWORD *)(v140 + 24);
      v150 = v149 + 1;
    }
    v151 = 5 * v149;
    *(_QWORD *)(v140 + 24) = v150;
    *((_DWORD *)v148 + 2 * v151) = 0;
    *((_QWORD *)v148 + v151 + 1) = -1;
    *((_QWORD *)v148 + v151 + 2) = 128;
    *((_QWORD *)v148 + v151 + 3) = 8;
    *((_QWORD *)v148 + v151 + 4) = v141;
    sub_100023820(
      *(_QWORD **)(v140 + 8),
      off_1000AC4D8,
      qword_1000AC4E0,
      SBYTE5(qword_1000AC4E0),
      SBYTE4(qword_1000AC4E0),
      xmmword_1000AC4E8,
      *((__int64 *)&xmmword_1000AC4E8 + 1));
    v152 = *(_QWORD *)(a1 + 536);
    v10 = &off_1000AC4F8;
    switch ( BYTE5(qword_1000AC500) )
    {
      case 1u:
        v153 = 2;
        break;
      case 7u:
        v153 = 8;
        break;
      case 2u:
        v153 = 4;
        break;
      default:
        goto LABEL_347;
    }
    v160 = *(void **)(v152 + 16);
    v161 = *(_QWORD *)(v152 + 24);
    v162 = v161 + 1;
    if ( *(_QWORD *)(v152 + 32) < (unsigned __int64)(v161 + 1) )
    {
      v160 = qvector_reserve(v152 + 16, v160, v162, 0x28u);
      *(_QWORD *)(v152 + 16) = v160;
      v161 = *(_QWORD *)(v152 + 24);
      v162 = v161 + 1;
    }
    v163 = 5 * v161;
    *(_QWORD *)(v152 + 24) = v162;
    *((_DWORD *)v160 + 2 * v163) = 0;
    *((_QWORD *)v160 + v163 + 1) = -1;
    *((_QWORD *)v160 + v163 + 2) = 144;
    *((_QWORD *)v160 + v163 + 3) = 8;
    *((_QWORD *)v160 + v163 + 4) = v153;
    sub_100023820(
      *(_QWORD **)(v152 + 8),
      off_1000AC4F8,
      qword_1000AC500,
      SBYTE5(qword_1000AC500),
      SBYTE4(qword_1000AC500),
      xmmword_1000AC508,
      *((__int64 *)&xmmword_1000AC508 + 1));
    v164 = *(_QWORD *)(a1 + 536);
    v10 = &off_1000AC518;
    switch ( BYTE5(qword_1000AC520) )
    {
      case 1u:
        v165 = 2;
        break;
      case 7u:
        v165 = 8;
        break;
      case 2u:
        v165 = 4;
        break;
      default:
        goto LABEL_347;
    }
    v173 = *(void **)(v164 + 16);
    v174 = *(_QWORD *)(v164 + 24);
    v175 = v174 + 1;
    if ( *(_QWORD *)(v164 + 32) >= (unsigned __int64)(v174 + 1) )
    {
      v176 = *(_QWORD *)(v164 + 24);
    }
    else
    {
      v173 = qvector_reserve(v164 + 16, v173, v175, 0x28u);
      *(_QWORD *)(v164 + 16) = v173;
      v176 = *(_QWORD *)(v164 + 24);
      v175 = v176 + 1;
    }
    v177 = 5 * v176;
    *(_QWORD *)(v164 + 24) = v175;
    *((_DWORD *)v173 + 2 * v177) = 0;
    *((_QWORD *)v173 + v177 + 1) = -1;
    *((_QWORD *)v173 + v177 + 2) = 152;
    *((_QWORD *)v173 + v177 + 3) = 8;
    *((_QWORD *)v173 + v177 + 4) = v165;
    sub_100023820(
      *(_QWORD **)(v164 + 8),
      off_1000AC518,
      qword_1000AC520,
      SBYTE5(qword_1000AC520),
      SBYTE4(qword_1000AC520),
      xmmword_1000AC528,
      *((__int64 *)&xmmword_1000AC528 + 1));
    *(_DWORD *)(a1 + 652) = v174;
    v178 = *(_QWORD *)(a1 + 536);
    v10 = &off_1000AC538;
    switch ( BYTE5(qword_1000AC540) )
    {
      case 1u:
        v179 = 2;
        break;
      case 7u:
        v179 = 8;
        break;
      case 2u:
        v179 = 4;
        break;
      default:
        goto LABEL_347;
    }
    v187 = *(void **)(v178 + 16);
    v188 = *(_QWORD *)(v178 + 24);
    v189 = v188 + 1;
    if ( *(_QWORD *)(v178 + 32) >= (unsigned __int64)(v188 + 1) )
    {
      v190 = *(_QWORD *)(v178 + 24);
    }
    else
    {
      v187 = qvector_reserve(v178 + 16, v187, v189, 0x28u);
      *(_QWORD *)(v178 + 16) = v187;
      v190 = *(_QWORD *)(v178 + 24);
      v189 = v190 + 1;
    }
    v191 = 5 * v190;
    *(_QWORD *)(v178 + 24) = v189;
    *((_DWORD *)v187 + 2 * v191) = 0;
    *((_QWORD *)v187 + v191 + 1) = -1;
    *((_QWORD *)v187 + v191 + 2) = 160;
    *((_QWORD *)v187 + v191 + 3) = 8;
    *((_QWORD *)v187 + v191 + 4) = v179;
    sub_100023820(
      *(_QWORD **)(v178 + 8),
      off_1000AC538,
      qword_1000AC540,
      SBYTE5(qword_1000AC540),
      SBYTE4(qword_1000AC540),
      xmmword_1000AC548,
      *((__int64 *)&xmmword_1000AC548 + 1));
    *(_DWORD *)(a1 + 656) = v188;
  }
  v238 = *(_QWORD *)(a1 + 536);
  v10 = &off_1000AC558;
  switch ( BYTE5(qword_1000AC560) )
  {
    case 1u:
      v239 = 2;
      break;
    case 7u:
      v239 = 8;
      break;
    case 2u:
      v239 = 4;
      break;
    default:
      goto LABEL_347;
  }
  v240 = *(void **)(v238 + 16);
  v241 = *(_QWORD *)(v238 + 24);
  v242 = v241 + 1;
  if ( *(_QWORD *)(v238 + 32) >= (unsigned __int64)(v241 + 1) )
  {
    v243 = *(_QWORD *)(v238 + 24);
  }
  else
  {
    v240 = qvector_reserve(v238 + 16, v240, v242, 0x28u);
    *(_QWORD *)(v238 + 16) = v240;
    v243 = *(_QWORD *)(v238 + 24);
    v242 = v243 + 1;
  }
  v244 = 5 * v243;
  *(_QWORD *)(v238 + 24) = v242;
  *((_DWORD *)v240 + 2 * v244) = 0;
  *((_QWORD *)v240 + v244 + 1) = -1;
  *((_QWORD *)v240 + v244 + 2) = 232;
  *((_QWORD *)v240 + v244 + 3) = 8;
  *((_QWORD *)v240 + v244 + 4) = v239;
  sub_100023820(
    *(_QWORD **)(v238 + 8),
    off_1000AC558,
    qword_1000AC560,
    SBYTE5(qword_1000AC560),
    SBYTE4(qword_1000AC560),
    (__int64)off_1000AC568,
    qword_1000AC570[0]);
  *(_DWORD *)(a1 + 792) = v241;
  v245 = 112;
  v246 = 0;
  do
  {
    if ( v246 >= 8 && !*(_BYTE *)(a1 + 1233) )
      break;
    v248 = *(_QWORD *)(a1 + 536);
    v249 = *(void **)(v248 + 16);
    v250 = *(_QWORD *)(v248 + 24);
    v251 = v250 + 1;
    if ( *(_QWORD *)(v248 + 32) < (unsigned __int64)(v250 + 1) )
    {
      v249 = qvector_reserve(v248 + 16, v249, v251, 0x28u);
      *(_QWORD *)(v248 + 16) = v249;
      v250 = *(_QWORD *)(v248 + 24);
      v251 = v250 + 1;
    }
    v247 = 5 * v250;
    *(_QWORD *)(v248 + 24) = v251;
    *((_DWORD *)v249 + 2 * v247) = 2;
    *((_QWORD *)v249 + v247 + 1) = -1;
    *((_QWORD *)v249 + v247 + 2) = v245 * 4;
    *((_QWORD *)v249 + v247 + 3) = 16;
    *((_QWORD *)v249 + v247 + 4) = 16;
    sub_100023820(
      *(_QWORD **)(v248 + 8),
      (&off_1000AC7A0)[v245 - 112],
      (int)(&off_1000AC7A0)[v245 - 111],
      *((_BYTE *)&off_1000AC7A0 + 8 * v245 - 883),
      *((_BYTE *)&off_1000AC7A0 + 8 * v245 - 884),
      (__int64)(&off_1000AC7A0)[v245 - 110],
      (__int64)(&off_1000AC7A0)[v245 - 109]);
    ++v246;
    v245 += 4;
  }
  while ( v245 != 176 );
  v252 = *(_QWORD *)(a1 + 536);
  v10 = &off_1000AC9A0;
  if ( BYTE5(qword_1000AC9A8) == 1 )
  {
    v253 = 2;
  }
  else
  {
    if ( BYTE5(qword_1000AC9A8) != 7 )
    {
      if ( BYTE5(qword_1000AC9A8) == 2 )
      {
        v253 = 4;
        goto LABEL_334;
      }
LABEL_347:
      if ( under_debugger == 1 )
        BUG();
      interr(0x706u);
      v274 = v273;
      sub_100020C30(v10);
      operator delete(v10);
      _Unwind_Resume(v274);
    }
    v253 = 8;
  }
LABEL_334:
  v254 = *(void **)(v252 + 16);
  v255 = *(_QWORD *)(v252 + 24);
  v256 = v255 + 1;
  if ( *(_QWORD *)(v252 + 32) < (unsigned __int64)(v255 + 1) )
  {
    v254 = qvector_reserve(v252 + 16, v254, v256, 0x28u);
    *(_QWORD *)(v252 + 16) = v254;
    v255 = *(_QWORD *)(v252 + 24);
    v256 = v255 + 1;
  }
  v257 = 5 * v255;
  *(_QWORD *)(v252 + 24) = v256;
  *((_DWORD *)v254 + 2 * v257) = 0;
  *((_QWORD *)v254 + v257 + 1) = -1;
  *((_QWORD *)v254 + v257 + 2) = 312;
  *((_QWORD *)v254 + v257 + 3) = 4;
  *((_QWORD *)v254 + v257 + 4) = v253;
  sub_100023820(
    *(_QWORD **)(v252 + 8),
    off_1000AC9A0,
    qword_1000AC9A8,
    SBYTE5(qword_1000AC9A8),
    SBYTE4(qword_1000AC9A8),
    (__int64)off_1000AC9B0,
    qword_1000AC9B8);
  for ( j = 80; j != 112; j += 4 )
  {
    v261 = *(_QWORD *)(a1 + 536);
    v262 = *(void **)(v261 + 16);
    v263 = *(_QWORD *)(v261 + 24);
    v264 = v263 + 1;
    if ( *(_QWORD *)(v261 + 32) < (unsigned __int64)(v263 + 1) )
    {
      v262 = qvector_reserve(v261 + 16, v262, v264, 0x28u);
      *(_QWORD *)(v261 + 16) = v262;
      v263 = *(_QWORD *)(v261 + 24);
      v264 = v263 + 1;
    }
    v259 = 5 * v263;
    *(_QWORD *)(v261 + 24) = v264;
    *((_DWORD *)v262 + 2 * v259) = 2;
    *((_QWORD *)v262 + v259 + 1) = -1;
    *((_QWORD *)v262 + v259 + 2) = j * 4;
    *((_QWORD *)v262 + v259 + 3) = 8;
    *((_QWORD *)v262 + v259 + 4) = 8;
    result = sub_100023820(
               *(_QWORD **)(v261 + 8),
               (&off_1000AC9C0)[j - 80],
               (int)(&off_1000AC9C0)[j - 79],
               *((_BYTE *)&off_1000AC9C0 + 8 * j - 627),
               *((_BYTE *)&off_1000AC9C0 + 8 * j - 628),
               (__int64)(&off_1000AC9C0)[j - 78],
               (__int64)(&off_1000AC9C0)[j - 77]);
  }
  v265 = (__int64 *)algn_1000ACAD8;
  for ( k = 0; k != 16; ++k )
  {
    if ( k >= 8 && !*(_BYTE *)(v1 + 1233) )
      break;
    v268 = v1;
    v269 = *(_QWORD *)(v1 + 536);
    v270 = *(void **)(v269 + 16);
    v271 = *(_QWORD *)(v269 + 24);
    v272 = v271 + 1;
    if ( *(_QWORD *)(v269 + 32) < (unsigned __int64)(v271 + 1) )
    {
      v270 = qvector_reserve(v269 + 16, v270, v272, 0x28u);
      *(_QWORD *)(v269 + 16) = v270;
      v271 = *(_QWORD *)(v269 + 24);
      v272 = v271 + 1;
    }
    v267 = 5 * v271;
    *(_QWORD *)(v269 + 24) = v272;
    *((_DWORD *)v270 + 2 * v267) = 3;
    *((_QWORD *)v270 + v267 + 1) = -1;
    *((_QWORD *)v270 + v267 + 2) = sub_1000230B0;
    *((_QWORD *)v270 + v267 + 3) = sub_1000231C0;
    *((_QWORD *)v270 + v267 + 4) = k;
    result = sub_100023820(
               *(_QWORD **)(v269 + 8),
               (const void *)*(v265 - 3),
               *((_DWORD *)v265 - 4),
               *((_BYTE *)v265 - 11),
               *((_BYTE *)v265 - 12),
               *(v265 - 1),
               *v265);
    v265 += 4;
    v1 = v268;
  }
  return result;
}
// 10002306C: variable 'v273' is possibly undefined
// 100082B16: using guessed type __int64 __fastcall __bzero(_QWORD, _QWORD);
// 1000A83E8: using guessed type __int64 (__fastcall *off_1000A83E8)();
// 1000AC1E0: using guessed type char *off_1000AC1E0[6];
// 1000AC218: using guessed type char *off_1000AC218;
// 1000AC220: using guessed type __int64;
// 1000AC228: using guessed type __int128 xmmword_1000AC228;
// 1000AC238: using guessed type char *off_1000AC238;
// 1000AC240: using guessed type __int64;
// 1000AC248: using guessed type __int128 xmmword_1000AC248;
// 1000AC258: using guessed type char *off_1000AC258;
// 1000AC260: using guessed type __int64;
// 1000AC268: using guessed type __int128 xmmword_1000AC268;
// 1000AC278: using guessed type char *off_1000AC278;
// 1000AC280: using guessed type __int64;
// 1000AC288: using guessed type __int128 xmmword_1000AC288;
// 1000AC298: using guessed type char *off_1000AC298;
// 1000AC2A0: using guessed type __int64;
// 1000AC2A8: using guessed type __int128 xmmword_1000AC2A8;
// 1000AC2B8: using guessed type char *off_1000AC2B8;
// 1000AC2C0: using guessed type __int64;
// 1000AC2C8: using guessed type __int128 xmmword_1000AC2C8;
// 1000AC2D8: using guessed type char *off_1000AC2D8;
// 1000AC2E0: using guessed type __int64;
// 1000AC2E8: using guessed type __int128 xmmword_1000AC2E8;
// 1000AC2F8: using guessed type char *off_1000AC2F8;
// 1000AC300: using guessed type __int64;
// 1000AC308: using guessed type __int128 xmmword_1000AC308;
// 1000AC318: using guessed type char *off_1000AC318;
// 1000AC320: using guessed type __int64;
// 1000AC328: using guessed type __int128 xmmword_1000AC328;
// 1000AC338: using guessed type char *off_1000AC338;
// 1000AC340: using guessed type __int64;
// 1000AC348: using guessed type __int128 xmmword_1000AC348;
// 1000AC358: using guessed type char *off_1000AC358;
// 1000AC360: using guessed type __int64;
// 1000AC368: using guessed type __int128 xmmword_1000AC368;
// 1000AC378: using guessed type char *off_1000AC378;
// 1000AC380: using guessed type __int64;
// 1000AC388: using guessed type __int128 xmmword_1000AC388;
// 1000AC398: using guessed type char *off_1000AC398;
// 1000AC3A0: using guessed type __int64;
// 1000AC3A8: using guessed type __int128 xmmword_1000AC3A8;
// 1000AC3B8: using guessed type char *off_1000AC3B8;
// 1000AC3C0: using guessed type __int64;
// 1000AC3C8: using guessed type __int128 xmmword_1000AC3C8;
// 1000AC3D8: using guessed type char *off_1000AC3D8;
// 1000AC3E0: using guessed type __int64;
// 1000AC3E8: using guessed type __int128 xmmword_1000AC3E8;
// 1000AC3F8: using guessed type char *off_1000AC3F8;
// 1000AC400: using guessed type __int64;
// 1000AC408: using guessed type __int128 xmmword_1000AC408;
// 1000AC418: using guessed type char *off_1000AC418;
// 1000AC420: using guessed type __int64;
// 1000AC428: using guessed type __int128 xmmword_1000AC428;
// 1000AC438: using guessed type char *off_1000AC438;
// 1000AC440: using guessed type __int64;
// 1000AC448: using guessed type __int128 xmmword_1000AC448;
// 1000AC458: using guessed type char *off_1000AC458;
// 1000AC460: using guessed type __int64;
// 1000AC468: using guessed type __int128 xmmword_1000AC468;
// 1000AC478: using guessed type char *off_1000AC478;
// 1000AC480: using guessed type __int64;
// 1000AC488: using guessed type __int128 xmmword_1000AC488;
// 1000AC498: using guessed type char *off_1000AC498;
// 1000AC4A0: using guessed type __int64;
// 1000AC4A8: using guessed type __int128 xmmword_1000AC4A8;
// 1000AC4B8: using guessed type char *off_1000AC4B8;
// 1000AC4C0: using guessed type __int64;
// 1000AC4C8: using guessed type __int128 xmmword_1000AC4C8;
// 1000AC4D8: using guessed type char *off_1000AC4D8;
// 1000AC4E0: using guessed type __int64;
// 1000AC4E8: using guessed type __int128 xmmword_1000AC4E8;
// 1000AC4F8: using guessed type char *off_1000AC4F8;
// 1000AC500: using guessed type __int64;
// 1000AC508: using guessed type __int128 xmmword_1000AC508;
// 1000AC518: using guessed type char *off_1000AC518;
// 1000AC520: using guessed type __int64;
// 1000AC528: using guessed type __int128 xmmword_1000AC528;
// 1000AC538: using guessed type char *off_1000AC538;
// 1000AC540: using guessed type __int64;
// 1000AC548: using guessed type __int128 xmmword_1000AC548;
// 1000AC558: using guessed type char *off_1000AC558;
// 1000AC560: using guessed type __int64;
// 1000AC568: using guessed type char **;
// 1000AC570: using guessed type __int64[2];
// 1000AC580: using guessed type char *off_1000AC580;
// 1000AC680: using guessed type char *off_1000AC680;
// 1000AC688: using guessed type __int64;
// 1000AC690: using guessed type char **;
// 1000AC698: using guessed type __int64;
// 1000AC6A0: using guessed type char *off_1000AC6A0;
// 1000AC6A8: using guessed type __int64;
// 1000AC6B0: using guessed type char **;
// 1000AC6B8: using guessed type __int64;
// 1000AC6C0: using guessed type char *off_1000AC6C0;
// 1000AC6C8: using guessed type __int64;
// 1000AC6D0: using guessed type char **;
// 1000AC6D8: using guessed type __int64;
// 1000AC6E0: using guessed type char *off_1000AC6E0;
// 1000AC6E8: using guessed type __int64[3];
// 1000AC700: using guessed type char *off_1000AC700;
// 1000AC708: using guessed type __int64[3];
// 1000AC720: using guessed type char *off_1000AC720;
// 1000AC728: using guessed type __int64[3];
// 1000AC740: using guessed type char *off_1000AC740;
// 1000AC748: using guessed type __int64[3];
// 1000AC760: using guessed type char *off_1000AC760;
// 1000AC768: using guessed type __int64[3];
// 1000AC780: using guessed type char *off_1000AC780;
// 1000AC788: using guessed type __int64[3];
// 1000AC7A0: using guessed type char *off_1000AC7A0;
// 1000AC9A0: using guessed type char *off_1000AC9A0;
// 1000AC9A8: using guessed type __int64;
// 1000AC9B0: using guessed type char **;
// 1000AC9B8: using guessed type __int64;
// 1000AC9C0: using guessed type char *off_1000AC9C0;
// 1000ACAD8: using guessed type _BYTE[8];
// 1000AE23D: using guessed type char under_debugger;
