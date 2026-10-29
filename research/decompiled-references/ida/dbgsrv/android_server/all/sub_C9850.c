/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C9850
// Address: 0x00000000000C9850

//----- (00000000000C9850) ----------------------------------------------------
__int64 __fastcall sub_C9850(__int64 a1, int a2)
{
  __int64 v3; // x19
  int v4; // w8
  __int64 v7; // x10
  int v8; // w9
  __int64 v9; // x22
  unsigned int v10; // w8
  unsigned int v11; // w24
  unsigned int v12; // w9
  __int64 v13; // x8
  int v14; // w9
  int v15; // w9
  unsigned int v16; // w8
  __int64 v17; // x12
  __int64 v18; // x11
  __int64 v19; // x12
  __int64 v20; // x11
  __int64 v21; // x8
  __int64 v22; // x9
  __int64 v23; // x10
  __int64 v24; // x9
  __int64 v25; // x10
  __int64 v26; // x8
  __int64 v27; // x9
  __int64 v28; // x10
  __int64 v29; // x9
  __int64 v30; // x10
  __int64 v31; // x22
  unsigned int v32; // w24
  unsigned int v33; // w9
  __int64 v34; // x8
  __int64 v35; // x8
  __int64 v36; // x9
  __int64 v37; // x8
  __int64 v38; // x9
  __int64 v39; // x8
  __int64 v40; // x9
  __int64 v41; // x9
  __int64 v42; // x25
  int v43; // w12
  __int64 v44; // x16
  __int64 v45; // x13
  __int64 v46; // x14
  char v47; // w8
  __int64 v48; // x15
  bool v49; // w11
  char v50; // w12
  char v51; // w11
  char v52; // w12
  char v53; // w11
  char v54; // w10
  char v55; // w10
  char v56; // w11
  __int64 v57; // x11
  __int64 v58; // x12
  __int64 v59; // x10
  __int64 v60; // x11
  __int64 v61; // x12
  __int64 v62; // x10
  __int64 v63; // x11
  __int64 v64; // x12
  __int64 v65; // x10
  __int64 v66; // x11
  __int64 v67; // x12
  __int64 v68; // x10
  int v69; // w10
  __int64 v71; // x9
  __int64 v72; // x10
  __int64 v73; // x9
  __int64 v74; // x10
  char v75; // w8
  __int64 v76; // x8
  __int64 v77; // x9
  char v78; // w8
  __int64 v79; // x10
  __int64 v80; // x9
  __int64 v81; // x10
  int v82; // w8
  int v83; // w10
  int v84; // w11
  __int64 v85; // x8
  __int64 v86; // x9
  __int64 v87; // x8
  __int64 v88; // x9
  __int64 v89; // x8
  __int64 v90; // x9
  __int64 v91; // x8
  __int64 v92; // x9
  __int64 v93; // x8
  __int64 v94; // x9
  int v95; // w8
  char v96; // w8
  __int64 v98; // x9
  __int64 v99; // x10
  __int64 v100; // x8
  __int64 v101; // x10
  __int64 v102; // x22
  unsigned int v103; // w24
  unsigned int v104; // w9
  __int64 v105; // x8
  __int64 v106; // x8
  __int64 v107; // x9
  unsigned __int64 v108; // x24
  unsigned __int64 v109; // x10
  size_t v110; // x22
  int v111; // w26
  size_t v112; // x23
  unsigned __int64 v113; // x8
  __int64 v114; // x23
  unsigned int v115; // w27
  unsigned int v116; // w9
  __int64 v117; // x8
  size_t v118; // x8
  unsigned __int64 v119; // x9
  unsigned __int64 v120; // x8
  __int64 v121; // x22
  unsigned int v122; // w24
  unsigned int v123; // w9
  __int64 v124; // x8
  __int64 v125; // x11
  __int64 v126; // x10
  __int64 v127; // x11
  unsigned __int64 v128; // x9
  unsigned __int64 v129; // x9
  unsigned __int64 v130; // x8
  __int64 v131; // x22
  unsigned int v132; // w24
  unsigned int v133; // w9
  __int64 v134; // x8
  __int64 v135; // x11
  __int64 v136; // x10
  __int64 v137; // x11
  unsigned __int64 v138; // x9
  __int64 v139; // x8
  __int64 v140; // x22
  unsigned int v141; // w24
  unsigned int v142; // w9
  __int64 v143; // x8
  __int64 v144; // x9
  __int64 v145; // x10
  __int64 v146; // x9
  __int64 v147; // x10
  __int64 v148; // x8
  __int64 v149; // x22
  unsigned int v150; // w24
  unsigned int v151; // w9
  __int64 v152; // x8
  __int64 v153; // x8
  int v154; // w9
  __int64 v155; // x8
  __int64 v156; // x9
  __int64 v157; // x10
  __int64 v158; // x11
  __int64 v159; // x8
  __int64 v160; // x9
  __int64 v161; // x10
  __int64 v162; // x9
  __int64 v163; // x10
  unsigned int v164; // w8
  __int64 v165; // x9
  const void *v166; // x1
  __int64 v167; // x24
  __int64 v168; // x22
  unsigned int v169; // w25
  unsigned int v170; // w9
  __int64 v171; // x8
  int v172; // w0
  unsigned int v173; // w8
  __int64 v174; // x9
  __int64 v175; // x11
  __int64 v176; // x10
  int v177; // w12
  unsigned __int64 v178; // x10
  unsigned __int8 *v179; // x11
  unsigned __int8 *v180; // x11
  int v181; // w14
  int v182; // t1
  int v183; // w13
  unsigned int v184; // w10
  unsigned __int8 v185; // w8
  __int64 v186; // x9
  __int64 v187; // x10
  __int64 v188; // x9
  __int64 v189; // x11
  __int64 v190; // x9
  __int64 v191; // x11
  __int64 v192; // x10
  int v193; // w8
  int v194; // w12
  unsigned int v195; // w8
  __int64 v196; // x10
  __int64 v197; // x11
  __int64 v198; // x8
  __int64 v199; // x9
  __int64 v200; // x10
  __int64 v201; // x9
  __int64 v202; // x10
  __int64 v203; // x9
  const void *v204; // x1
  __int64 v205; // x27
  __int64 v206; // x22
  unsigned int v207; // w28
  unsigned int v208; // w9
  __int64 v209; // x8
  __int64 v210; // x8
  const void *v211; // x1
  __int64 v212; // x24
  __int64 v213; // x22
  unsigned int v214; // w25
  unsigned int v215; // w9
  __int64 v216; // x8
  __int64 v217; // x22
  unsigned int v218; // w8
  unsigned int v219; // w24
  unsigned int v220; // w9
  __int64 v221; // x8
  int v222; // w9
  __int64 v223; // x8
  __int64 v224; // x9
  __int64 v225; // x10
  __int64 v226; // x9
  __int64 v227; // x10
  __int64 v228; // x8
  __int64 v229; // x9
  __int64 v230; // x10
  __int64 v231; // x8
  __int64 v232; // x9
  __int64 v233; // x10
  __int64 v234; // x8
  __int64 v235; // x8
  __int64 v236; // x9
  __int64 v237; // x10
  __int64 v238; // x9
  __int64 v239; // x10
  __int64 v240; // x8
  __int64 v241; // x9
  __int64 v242; // x10
  __int64 v243; // x8
  __int64 v244; // x9
  __int64 v245; // x10
  __int64 v246; // x8
  __int64 v247; // x9
  __int64 v248; // x10
  __int64 v249; // x9
  __int64 v250; // x10
  __int64 v251; // x9
  __int64 v252; // x10
  __int64 v253; // x21
  unsigned int v254; // w23
  unsigned int v255; // w9
  __int64 v256; // x8
  int v257; // w8
  __int64 v258; // x8
  const void *v259; // x1
  __int64 v260; // x24
  __int64 v261; // x22
  unsigned int v262; // w25
  unsigned int v263; // w9
  __int64 v264; // x8

  if ( !a1 )
    return 4294967294LL;
  if ( !*(_QWORD *)(a1 + 64) )
    return 4294967294LL;
  if ( !*(_QWORD *)(a1 + 72) )
    return 4294967294LL;
  v3 = *(_QWORD *)(a1 + 56);
  if ( !v3 || *(_QWORD *)v3 != a1 )
    return 4294967294LL;
  v4 = *(_DWORD *)(v3 + 8);
  if ( ((unsigned int)(v4 - 57) > 0x38 || ((1LL << ((unsigned __int8)v4 - 57)) & 0x100400400011001LL) == 0)
    && v4 != 666
    && v4 != 42 )
  {
    return 4294967294LL;
  }
  if ( (unsigned int)a2 > 5 )
    return 4294967294LL;
  if ( !*(_QWORD *)(a1 + 24) || *(_DWORD *)(a1 + 8) && !*(_QWORD *)a1 || a2 != 4 && v4 == 666 )
  {
    *(_QWORD *)(a1 + 48) = "stream error";
    return 4294967294LL;
  }
  if ( !*(_DWORD *)(a1 + 32) )
    goto LABEL_84;
  v7 = *(_QWORD *)(v3 + 40);
  v8 = *(_DWORD *)(v3 + 76);
  *(_DWORD *)(v3 + 76) = a2;
  if ( v7 )
  {
    v9 = *(_QWORD *)(a1 + 56);
    sub_CFC1C(v9);
    v10 = *(_DWORD *)(a1 + 32);
    if ( v10 >= *(_DWORD *)(v9 + 40) )
      v11 = *(_DWORD *)(v9 + 40);
    else
      v11 = *(_DWORD *)(a1 + 32);
    if ( v11 )
    {
      memcpy(*(void **)(a1 + 24), *(const void **)(v9 + 32), v11);
      *(_QWORD *)(a1 + 24) += v11;
      *(_QWORD *)(v9 + 32) += v11;
      v12 = *(_DWORD *)(a1 + 32) - v11;
      *(_QWORD *)(a1 + 40) += v11;
      *(_DWORD *)(a1 + 32) = v12;
      v13 = *(_QWORD *)(v9 + 40) - v11;
      *(_QWORD *)(v9 + 40) = v13;
      if ( !v13 )
        *(_QWORD *)(v9 + 32) = *(_QWORD *)(v9 + 16);
      v10 = *(_DWORD *)(a1 + 32);
    }
    if ( !v10 )
      goto LABEL_299;
    v4 = *(_DWORD *)(v3 + 8);
    if ( v4 == 42 )
      goto LABEL_29;
    goto LABEL_47;
  }
  if ( !*(_DWORD *)(a1 + 8) )
  {
    v83 = a2 <= 4 ? 0 : 9;
    v84 = v8 <= 4 ? 0 : 9;
    if ( a2 != 4 && 2 * a2 - v83 <= 2 * v8 - v84 )
      goto LABEL_84;
  }
  if ( v4 != 42 )
  {
LABEL_47:
    if ( v4 != 666 )
      goto LABEL_50;
    if ( !*(_DWORD *)(a1 + 8) )
    {
LABEL_190:
      if ( !*(_DWORD *)(v3 + 180) && (!a2 || *(_DWORD *)(v3 + 8) == 666) )
        goto LABEL_297;
      goto LABEL_191;
    }
LABEL_84:
    *(_QWORD *)(a1 + 48) = "buffer error";
    return 4294967291LL;
  }
LABEL_29:
  if ( !*(_DWORD *)(v3 + 48) )
  {
    *(_DWORD *)(v3 + 8) = 113;
    if ( *(_DWORD *)(a1 + 8) )
      goto LABEL_191;
    goto LABEL_190;
  }
  if ( *(int *)(v3 + 200) <= 1 && (v14 = *(_DWORD *)(v3 + 196), v14 >= 2) )
  {
    if ( v14 >= 6 )
    {
      if ( v14 == 6 )
        v15 = 128;
      else
        v15 = 192;
    }
    else
    {
      v15 = 64;
    }
  }
  else
  {
    v15 = 0;
  }
  v16 = v15 | ((*(_DWORD *)(v3 + 84) << 12) - 30720);
  v17 = *(_QWORD *)(v3 + 40);
  v18 = *(_QWORD *)(v3 + 16);
  if ( *(_DWORD *)(v3 + 172) )
    v16 |= 0x20u;
  *(_QWORD *)(v3 + 40) = v17 + 1;
  *(_BYTE *)(v18 + v17) = BYTE1(v16);
  v19 = *(_QWORD *)(v3 + 40);
  v20 = *(_QWORD *)(v3 + 16);
  *(_QWORD *)(v3 + 40) = v19 + 1;
  *(_BYTE *)(v20 + v19) = ((v16 % 0x1F) | v16) ^ 0x1F;
  if ( *(_DWORD *)(v3 + 172) )
  {
    v21 = *(_QWORD *)(a1 + 96);
    v22 = *(_QWORD *)(v3 + 40);
    v23 = *(_QWORD *)(v3 + 16);
    *(_QWORD *)(v3 + 40) = v22 + 1;
    *(_BYTE *)(v23 + v22) = BYTE3(v21);
    v24 = *(_QWORD *)(v3 + 40);
    v25 = *(_QWORD *)(v3 + 16);
    *(_QWORD *)(v3 + 40) = v24 + 1;
    *(_BYTE *)(v25 + v24) = BYTE2(v21);
    v26 = *(_QWORD *)(a1 + 96);
    v27 = *(_QWORD *)(v3 + 40);
    v28 = *(_QWORD *)(v3 + 16);
    *(_QWORD *)(v3 + 40) = v27 + 1;
    *(_BYTE *)(v28 + v27) = BYTE1(v26);
    v29 = *(_QWORD *)(v3 + 40);
    v30 = *(_QWORD *)(v3 + 16);
    *(_QWORD *)(v3 + 40) = v29 + 1;
    *(_BYTE *)(v30 + v29) = v26;
  }
  *(_QWORD *)(a1 + 96) = sub_D4634(0, nullptr, 0);
  *(_DWORD *)(v3 + 8) = 113;
  v31 = *(_QWORD *)(a1 + 56);
  sub_CFC1C(v31);
  if ( *(_DWORD *)(a1 + 32) >= *(_DWORD *)(v31 + 40) )
    v32 = *(_DWORD *)(v31 + 40);
  else
    v32 = *(_DWORD *)(a1 + 32);
  if ( v32 )
  {
    memcpy(*(void **)(a1 + 24), *(const void **)(v31 + 32), v32);
    *(_QWORD *)(a1 + 24) += v32;
    *(_QWORD *)(v31 + 32) += v32;
    v33 = *(_DWORD *)(a1 + 32) - v32;
    *(_QWORD *)(a1 + 40) += v32;
    *(_DWORD *)(a1 + 32) = v33;
    v34 = *(_QWORD *)(v31 + 40) - v32;
    *(_QWORD *)(v31 + 40) = v34;
    if ( !v34 )
      *(_QWORD *)(v31 + 32) = *(_QWORD *)(v31 + 16);
  }
  if ( *(_QWORD *)(v3 + 40) )
    goto LABEL_299;
  v4 = *(_DWORD *)(v3 + 8);
LABEL_50:
  if ( v4 != 57 )
    goto LABEL_105;
  *(_QWORD *)(a1 + 96) = sub_C8324(0, nullptr, 0);
  v35 = *(_QWORD *)(v3 + 40);
  v36 = *(_QWORD *)(v3 + 16);
  *(_QWORD *)(v3 + 40) = v35 + 1;
  *(_BYTE *)(v36 + v35) = 31;
  v37 = *(_QWORD *)(v3 + 40);
  v38 = *(_QWORD *)(v3 + 16);
  *(_QWORD *)(v3 + 40) = v37 + 1;
  *(_BYTE *)(v38 + v37) = -117;
  v39 = *(_QWORD *)(v3 + 40);
  v40 = *(_QWORD *)(v3 + 16);
  *(_QWORD *)(v3 + 40) = v39 + 1;
  *(_BYTE *)(v40 + v39) = 8;
  v42 = v3 + 56;
  v41 = *(_QWORD *)(v3 + 56);
  if ( !v41 )
  {
    v85 = *(_QWORD *)(v3 + 40);
    v86 = *(_QWORD *)(v3 + 16);
    *(_QWORD *)(v3 + 40) = v85 + 1;
    *(_BYTE *)(v86 + v85) = 0;
    v87 = *(_QWORD *)(v3 + 40);
    v88 = *(_QWORD *)(v3 + 16);
    *(_QWORD *)(v3 + 40) = v87 + 1;
    *(_BYTE *)(v88 + v87) = 0;
    v89 = *(_QWORD *)(v3 + 40);
    v90 = *(_QWORD *)(v3 + 16);
    *(_QWORD *)(v3 + 40) = v89 + 1;
    *(_BYTE *)(v90 + v89) = 0;
    v91 = *(_QWORD *)(v3 + 40);
    v92 = *(_QWORD *)(v3 + 16);
    *(_QWORD *)(v3 + 40) = v91 + 1;
    *(_BYTE *)(v92 + v91) = 0;
    v93 = *(_QWORD *)(v3 + 40);
    v94 = *(_QWORD *)(v3 + 16);
    *(_QWORD *)(v3 + 40) = v93 + 1;
    *(_BYTE *)(v94 + v93) = 0;
    v95 = *(_DWORD *)(v3 + 196);
    if ( v95 == 9 )
    {
      v96 = 2;
    }
    else if ( *(int *)(v3 + 200) > 1 || v95 < 2 )
    {
      v96 = 4;
    }
    else
    {
      v96 = 0;
    }
    v98 = *(_QWORD *)(v3 + 40);
    v99 = *(_QWORD *)(v3 + 16);
    *(_QWORD *)(v3 + 40) = v98 + 1;
    *(_BYTE *)(v99 + v98) = v96;
    v100 = *(_QWORD *)(v3 + 40);
    v101 = *(_QWORD *)(v3 + 16);
    *(_QWORD *)(v3 + 40) = v100 + 1;
    *(_BYTE *)(v101 + v100) = 3;
    *(_DWORD *)(v3 + 8) = 113;
    v102 = *(_QWORD *)(a1 + 56);
    sub_CFC1C(v102);
    if ( *(_DWORD *)(a1 + 32) >= *(_DWORD *)(v102 + 40) )
      v103 = *(_DWORD *)(v102 + 40);
    else
      v103 = *(_DWORD *)(a1 + 32);
    if ( v103 )
    {
      memcpy(*(void **)(a1 + 24), *(const void **)(v102 + 32), v103);
      *(_QWORD *)(a1 + 24) += v103;
      *(_QWORD *)(v102 + 32) += v103;
      v104 = *(_DWORD *)(a1 + 32) - v103;
      *(_QWORD *)(a1 + 40) += v103;
      *(_DWORD *)(a1 + 32) = v104;
      v105 = *(_QWORD *)(v102 + 40) - v103;
      *(_QWORD *)(v102 + 40) = v105;
      if ( !v105 )
        *(_QWORD *)(v102 + 32) = *(_QWORD *)(v102 + 16);
    }
    if ( *(_QWORD *)(v3 + 40) )
      goto LABEL_299;
    v4 = *(_DWORD *)(v3 + 8);
LABEL_105:
    switch ( v4 )
    {
      case 'E':
        v42 = v3 + 56;
        goto LABEL_107;
      case 'I':
        v42 = v3 + 56;
        goto LABEL_129;
      case '[':
        v42 = v3 + 56;
        goto LABEL_151;
      case 'g':
        v42 = v3 + 56;
        goto LABEL_172;
      default:
        goto LABEL_189;
    }
  }
  v43 = *(_DWORD *)(v41 + 68);
  v44 = *(_QWORD *)(v3 + 40);
  v45 = *(_QWORD *)(v41 + 24);
  v46 = *(_QWORD *)(v41 + 40);
  v47 = 2;
  v48 = *(_QWORD *)(v41 + 56);
  v49 = *(_DWORD *)v41 != 0;
  *(_QWORD *)(v3 + 40) = v44 + 1;
  if ( v43 )
    v50 = 2;
  else
    v50 = 0;
  v51 = v50 | v49;
  if ( v45 )
    v52 = 4;
  else
    v52 = 0;
  v53 = v51 | v52;
  if ( v46 )
    v54 = 8;
  else
    v54 = 0;
  v55 = v53 | v54;
  if ( v48 )
    v56 = 16;
  else
    v56 = 0;
  *(_BYTE *)(*(_QWORD *)(v3 + 16) + v44) = v55 | v56;
  v57 = *(_QWORD *)(v3 + 40);
  v58 = *(_QWORD *)(v3 + 16);
  v59 = *(_QWORD *)(*(_QWORD *)(v3 + 56) + 8LL);
  *(_QWORD *)(v3 + 40) = v57 + 1;
  *(_BYTE *)(v58 + v57) = v59;
  v60 = *(_QWORD *)(v3 + 40);
  v61 = *(_QWORD *)(v3 + 16);
  v62 = *(_QWORD *)(*(_QWORD *)(v3 + 56) + 8LL);
  *(_QWORD *)(v3 + 40) = v60 + 1;
  *(_BYTE *)(v61 + v60) = BYTE1(v62);
  v63 = *(_QWORD *)(v3 + 40);
  v64 = *(_QWORD *)(v3 + 16);
  v65 = *(_QWORD *)(*(_QWORD *)(v3 + 56) + 8LL);
  *(_QWORD *)(v3 + 40) = v63 + 1;
  *(_BYTE *)(v64 + v63) = BYTE2(v65);
  v66 = *(_QWORD *)(v3 + 40);
  v67 = *(_QWORD *)(v3 + 16);
  v68 = *(_QWORD *)(*(_QWORD *)(v3 + 56) + 8LL);
  *(_QWORD *)(v3 + 40) = v66 + 1;
  *(_BYTE *)(v67 + v66) = BYTE3(v68);
  v69 = *(_DWORD *)(v3 + 196);
  if ( v69 != 9 )
  {
    if ( *(int *)(v3 + 200) > 1 || v69 < 2 )
      v47 = 4;
    else
      v47 = 0;
  }
  v71 = *(_QWORD *)(v3 + 40);
  v72 = *(_QWORD *)(v3 + 16);
  *(_QWORD *)(v3 + 40) = v71 + 1;
  *(_BYTE *)(v72 + v71) = v47;
  v73 = *(_QWORD *)(v3 + 40);
  v74 = *(_QWORD *)(v3 + 16);
  v75 = *(_DWORD *)(*(_QWORD *)(v3 + 56) + 20LL);
  *(_QWORD *)(v3 + 40) = v73 + 1;
  *(_BYTE *)(v74 + v73) = v75;
  v76 = *(_QWORD *)(v3 + 56);
  if ( *(_QWORD *)(v76 + 24) )
  {
    v77 = *(_QWORD *)(v3 + 40);
    v78 = *(_DWORD *)(v76 + 32);
    v79 = *(_QWORD *)(v3 + 16);
    *(_QWORD *)(v3 + 40) = v77 + 1;
    *(_BYTE *)(v79 + v77) = v78;
    v80 = *(_QWORD *)(v3 + 40);
    v81 = *(_QWORD *)(v3 + 16);
    v82 = *(_DWORD *)(*(_QWORD *)(v3 + 56) + 32LL);
    *(_QWORD *)(v3 + 40) = v80 + 1;
    *(_BYTE *)(v81 + v80) = BYTE1(v82);
    v76 = *(_QWORD *)(v3 + 56);
  }
  if ( *(_DWORD *)(v76 + 68) )
    *(_QWORD *)(a1 + 96) = sub_C8324(*(_QWORD *)(a1 + 96), *(_QWORD **)(v3 + 16), *(unsigned int *)(v3 + 40));
  *(_QWORD *)(v3 + 64) = 0;
  *(_DWORD *)(v3 + 8) = 69;
LABEL_107:
  v106 = *(_QWORD *)(*(_QWORD *)v42 + 24LL);
  if ( v106 )
  {
    v107 = *(_QWORD *)(v3 + 64);
    v108 = *(_QWORD *)(v3 + 40);
    v109 = *(_QWORD *)(v3 + 24);
    v110 = *(unsigned __int16 *)(*(_QWORD *)v42 + 32LL) - (unsigned int)v107;
    if ( v108 + v110 > v109 )
    {
      while ( 1 )
      {
        v111 = v109 - v108;
        v112 = (unsigned int)(v109 - v108);
        memcpy((void *)(*(_QWORD *)(v3 + 16) + v108), (const void *)(v106 + v107), v112);
        v113 = *(_QWORD *)(v3 + 24);
        *(_QWORD *)(v3 + 40) = v113;
        if ( v113 > v108 && *(_DWORD *)(*(_QWORD *)(v3 + 56) + 68LL) )
          *(_QWORD *)(a1 + 96) = sub_C8324(
                                   *(_QWORD *)(a1 + 96),
                                   (_QWORD *)(*(_QWORD *)(v3 + 16) + v108),
                                   (unsigned int)(v113 - v108));
        *(_QWORD *)(v3 + 64) += v112;
        v114 = *(_QWORD *)(a1 + 56);
        sub_CFC1C(v114);
        if ( *(_DWORD *)(a1 + 32) >= *(_DWORD *)(v114 + 40) )
          v115 = *(_DWORD *)(v114 + 40);
        else
          v115 = *(_DWORD *)(a1 + 32);
        if ( v115 )
        {
          memcpy(*(void **)(a1 + 24), *(const void **)(v114 + 32), v115);
          *(_QWORD *)(a1 + 24) += v115;
          *(_QWORD *)(v114 + 32) += v115;
          v116 = *(_DWORD *)(a1 + 32) - v115;
          *(_QWORD *)(a1 + 40) += v115;
          *(_DWORD *)(a1 + 32) = v116;
          v117 = *(_QWORD *)(v114 + 40) - v115;
          *(_QWORD *)(v114 + 40) = v117;
          if ( !v117 )
            *(_QWORD *)(v114 + 32) = *(_QWORD *)(v114 + 16);
        }
        if ( *(_QWORD *)(v3 + 40) )
          goto LABEL_299;
        v109 = *(_QWORD *)(v3 + 24);
        LODWORD(v110) = v110 - v111;
        if ( v109 >= (unsigned int)v110 )
          break;
        v107 = *(_QWORD *)(v3 + 64);
        v108 = 0;
        v106 = *(_QWORD *)(*(_QWORD *)(v3 + 56) + 24LL);
      }
      v107 = *(_QWORD *)(v3 + 64);
      v108 = 0;
      v110 = (unsigned int)v110;
      v106 = *(_QWORD *)(*(_QWORD *)(v3 + 56) + 24LL);
    }
    memcpy((void *)(*(_QWORD *)(v3 + 16) + v108), (const void *)(v106 + v107), v110);
    v118 = *(_QWORD *)(v3 + 40) + v110;
    *(_QWORD *)(v3 + 40) = v118;
    if ( v118 > v108 && *(_DWORD *)(*(_QWORD *)(v3 + 56) + 68LL) )
      *(_QWORD *)(a1 + 96) = sub_C8324(
                               *(_QWORD *)(a1 + 96),
                               (_QWORD *)(*(_QWORD *)(v3 + 16) + v108),
                               (unsigned int)(v118 - v108));
    *(_QWORD *)(v3 + 64) = 0;
  }
  *(_DWORD *)(v3 + 8) = 73;
LABEL_129:
  if ( *(_QWORD *)(*(_QWORD *)v42 + 40LL) )
  {
    v119 = *(_QWORD *)(v3 + 40);
    v120 = v119;
    while ( 1 )
    {
      if ( v119 == *(_QWORD *)(v3 + 24) )
      {
        if ( v119 > v120 && *(_DWORD *)(*(_QWORD *)v42 + 68LL) )
          *(_QWORD *)(a1 + 96) = sub_C8324(
                                   *(_QWORD *)(a1 + 96),
                                   (_QWORD *)(*(_QWORD *)(v3 + 16) + v120),
                                   (unsigned int)(v119 - v120));
        v121 = *(_QWORD *)(a1 + 56);
        sub_CFC1C(v121);
        if ( *(_DWORD *)(a1 + 32) >= *(_DWORD *)(v121 + 40) )
          v122 = *(_DWORD *)(v121 + 40);
        else
          v122 = *(_DWORD *)(a1 + 32);
        if ( v122 )
        {
          memcpy(*(void **)(a1 + 24), *(const void **)(v121 + 32), v122);
          *(_QWORD *)(a1 + 24) += v122;
          *(_QWORD *)(v121 + 32) += v122;
          v123 = *(_DWORD *)(a1 + 32) - v122;
          *(_QWORD *)(a1 + 40) += v122;
          *(_DWORD *)(a1 + 32) = v123;
          v124 = *(_QWORD *)(v121 + 40) - v122;
          *(_QWORD *)(v121 + 40) = v124;
          if ( !v124 )
            *(_QWORD *)(v121 + 32) = *(_QWORD *)(v121 + 16);
        }
        v120 = *(_QWORD *)(v3 + 40);
        if ( v120 )
          goto LABEL_299;
        v119 = 0;
      }
      v125 = *(_QWORD *)(v3 + 64);
      v126 = *(_QWORD *)(*(_QWORD *)(v3 + 56) + 40LL);
      *(_QWORD *)(v3 + 64) = v125 + 1;
      LODWORD(v126) = *(unsigned __int8 *)(v126 + v125);
      v127 = *(_QWORD *)(v3 + 16);
      *(_QWORD *)(v3 + 40) = v119 + 1;
      *(_BYTE *)(v127 + v119) = v126;
      if ( !(_DWORD)v126 )
        break;
      v119 = *(_QWORD *)(v3 + 40);
    }
    if ( *(_DWORD *)(*(_QWORD *)v42 + 68LL) )
    {
      v128 = *(_QWORD *)(v3 + 40);
      if ( v128 > v120 )
        *(_QWORD *)(a1 + 96) = sub_C8324(
                                 *(_QWORD *)(a1 + 96),
                                 (_QWORD *)(*(_QWORD *)(v3 + 16) + v120),
                                 (unsigned int)(v128 - v120));
    }
    *(_QWORD *)(v3 + 64) = 0;
  }
  *(_DWORD *)(v3 + 8) = 91;
LABEL_151:
  if ( *(_QWORD *)(*(_QWORD *)v42 + 56LL) )
  {
    v129 = *(_QWORD *)(v3 + 40);
    v130 = v129;
    while ( 1 )
    {
      if ( v129 == *(_QWORD *)(v3 + 24) )
      {
        if ( v129 > v130 && *(_DWORD *)(*(_QWORD *)v42 + 68LL) )
          *(_QWORD *)(a1 + 96) = sub_C8324(
                                   *(_QWORD *)(a1 + 96),
                                   (_QWORD *)(*(_QWORD *)(v3 + 16) + v130),
                                   (unsigned int)(v129 - v130));
        v131 = *(_QWORD *)(a1 + 56);
        sub_CFC1C(v131);
        if ( *(_DWORD *)(a1 + 32) >= *(_DWORD *)(v131 + 40) )
          v132 = *(_DWORD *)(v131 + 40);
        else
          v132 = *(_DWORD *)(a1 + 32);
        if ( v132 )
        {
          memcpy(*(void **)(a1 + 24), *(const void **)(v131 + 32), v132);
          *(_QWORD *)(a1 + 24) += v132;
          *(_QWORD *)(v131 + 32) += v132;
          v133 = *(_DWORD *)(a1 + 32) - v132;
          *(_QWORD *)(a1 + 40) += v132;
          *(_DWORD *)(a1 + 32) = v133;
          v134 = *(_QWORD *)(v131 + 40) - v132;
          *(_QWORD *)(v131 + 40) = v134;
          if ( !v134 )
            *(_QWORD *)(v131 + 32) = *(_QWORD *)(v131 + 16);
        }
        v130 = *(_QWORD *)(v3 + 40);
        if ( v130 )
          goto LABEL_299;
        v129 = 0;
      }
      v135 = *(_QWORD *)(v3 + 64);
      v136 = *(_QWORD *)(*(_QWORD *)(v3 + 56) + 56LL);
      *(_QWORD *)(v3 + 64) = v135 + 1;
      LODWORD(v136) = *(unsigned __int8 *)(v136 + v135);
      v137 = *(_QWORD *)(v3 + 16);
      *(_QWORD *)(v3 + 40) = v129 + 1;
      *(_BYTE *)(v137 + v129) = v136;
      if ( !(_DWORD)v136 )
        break;
      v129 = *(_QWORD *)(v3 + 40);
    }
    if ( *(_DWORD *)(*(_QWORD *)v42 + 68LL) )
    {
      v138 = *(_QWORD *)(v3 + 40);
      if ( v138 > v130 )
        *(_QWORD *)(a1 + 96) = sub_C8324(
                                 *(_QWORD *)(a1 + 96),
                                 (_QWORD *)(*(_QWORD *)(v3 + 16) + v130),
                                 (unsigned int)(v138 - v130));
    }
  }
  *(_DWORD *)(v3 + 8) = 103;
LABEL_172:
  if ( *(_DWORD *)(*(_QWORD *)v42 + 68LL) )
  {
    v139 = *(_QWORD *)(v3 + 40);
    if ( (unsigned __int64)(v139 + 2) > *(_QWORD *)(v3 + 24) )
    {
      v140 = *(_QWORD *)(a1 + 56);
      sub_CFC1C(v140);
      if ( *(_DWORD *)(a1 + 32) >= *(_DWORD *)(v140 + 40) )
        v141 = *(_DWORD *)(v140 + 40);
      else
        v141 = *(_DWORD *)(a1 + 32);
      if ( v141 )
      {
        memcpy(*(void **)(a1 + 24), *(const void **)(v140 + 32), v141);
        *(_QWORD *)(a1 + 24) += v141;
        *(_QWORD *)(v140 + 32) += v141;
        v142 = *(_DWORD *)(a1 + 32) - v141;
        *(_QWORD *)(a1 + 40) += v141;
        *(_DWORD *)(a1 + 32) = v142;
        v143 = *(_QWORD *)(v140 + 40) - v141;
        *(_QWORD *)(v140 + 40) = v143;
        if ( !v143 )
          *(_QWORD *)(v140 + 32) = *(_QWORD *)(v140 + 16);
      }
      v139 = *(_QWORD *)(v3 + 40);
      if ( v139 )
        goto LABEL_299;
    }
    v144 = *(_QWORD *)(a1 + 96);
    v145 = *(_QWORD *)(v3 + 16);
    *(_QWORD *)(v3 + 40) = v139 + 1;
    *(_BYTE *)(v145 + v139) = v144;
    v146 = *(_QWORD *)(v3 + 40);
    v147 = *(_QWORD *)(v3 + 16);
    v148 = *(_QWORD *)(a1 + 96) >> 8;
    *(_QWORD *)(v3 + 40) = v146 + 1;
    *(_BYTE *)(v147 + v146) = v148;
    *(_QWORD *)(a1 + 96) = sub_C8324(0, nullptr, 0);
  }
  *(_DWORD *)(v3 + 8) = 113;
  v149 = *(_QWORD *)(a1 + 56);
  sub_CFC1C(v149);
  if ( *(_DWORD *)(a1 + 32) >= *(_DWORD *)(v149 + 40) )
    v150 = *(_DWORD *)(v149 + 40);
  else
    v150 = *(_DWORD *)(a1 + 32);
  if ( v150 )
  {
    memcpy(*(void **)(a1 + 24), *(const void **)(v149 + 32), v150);
    *(_QWORD *)(a1 + 24) += v150;
    *(_QWORD *)(v149 + 32) += v150;
    v151 = *(_DWORD *)(a1 + 32) - v150;
    *(_QWORD *)(a1 + 40) += v150;
    *(_DWORD *)(a1 + 32) = v151;
    v152 = *(_QWORD *)(v149 + 40) - v150;
    *(_QWORD *)(v149 + 40) = v152;
    if ( !v152 )
      *(_QWORD *)(v149 + 32) = *(_QWORD *)(v149 + 16);
  }
  if ( *(_QWORD *)(v3 + 40) )
    goto LABEL_299;
LABEL_189:
  if ( !*(_DWORD *)(a1 + 8) )
    goto LABEL_190;
LABEL_191:
  v153 = *(int *)(v3 + 196);
  if ( !(_DWORD)v153 )
  {
    v172 = sub_CB1A4((_DWORD *)v3, a2);
    goto LABEL_277;
  }
  v154 = *(_DWORD *)(v3 + 200);
  if ( v154 != 3 )
  {
    if ( v154 != 2 )
    {
      v172 = ((__int64 (__fastcall *)(__int64, _QWORD))qword_1604B0[2 * v153 + 1])(v3, (unsigned int)a2);
      goto LABEL_277;
    }
    while ( 1 )
    {
      if ( !*(_DWORD *)(v3 + 180) )
      {
        sub_C8CB8(v3);
        if ( !*(_DWORD *)(v3 + 180) )
          break;
      }
      v155 = *(_QWORD *)(v3 + 96);
      v156 = *(unsigned int *)(v3 + 172);
      v157 = *(unsigned int *)(v3 + 5900);
      v158 = *(_QWORD *)(v3 + 5888);
      *(_DWORD *)(v3 + 160) = 0;
      v159 = *(unsigned __int8 *)(v155 + v156);
      *(_DWORD *)(v3 + 5900) = v157 + 1;
      *(_BYTE *)(v158 + v157) = 0;
      v160 = *(unsigned int *)(v3 + 5900);
      v161 = *(_QWORD *)(v3 + 5888);
      *(_DWORD *)(v3 + 5900) = v160 + 1;
      *(_BYTE *)(v161 + v160) = 0;
      v162 = *(unsigned int *)(v3 + 5900);
      v163 = *(_QWORD *)(v3 + 5888);
      *(_DWORD *)(v3 + 5900) = v162 + 1;
      *(_BYTE *)(v163 + v162) = v159;
      ++*(_WORD *)(v3 + 4 * v159 + 212);
      LODWORD(v162) = *(_DWORD *)(v3 + 5900);
      LODWORD(v158) = *(_DWORD *)(v3 + 5904);
      v164 = *(_DWORD *)(v3 + 172) + 1;
      --*(_DWORD *)(v3 + 180);
      *(_DWORD *)(v3 + 172) = v164;
      if ( (_DWORD)v162 == (_DWORD)v158 )
      {
        v165 = *(_QWORD *)(v3 + 152);
        if ( v165 < 0 )
          v166 = nullptr;
        else
          v166 = (const void *)(*(_QWORD *)(v3 + 96) + (unsigned int)v165);
        sub_CFDF0(v3, v166, v164 - v165, 0);
        v167 = *(_QWORD *)v3;
        *(_QWORD *)(v3 + 152) = *(unsigned int *)(v3 + 172);
        v168 = *(_QWORD *)(v167 + 56);
        sub_CFC1C(v168);
        if ( *(_DWORD *)(v167 + 32) >= *(_DWORD *)(v168 + 40) )
          v169 = *(_DWORD *)(v168 + 40);
        else
          v169 = *(_DWORD *)(v167 + 32);
        if ( v169 )
        {
          memcpy(*(void **)(v167 + 24), *(const void **)(v168 + 32), v169);
          *(_QWORD *)(v167 + 24) += v169;
          *(_QWORD *)(v168 + 32) += v169;
          v170 = *(_DWORD *)(v167 + 32) - v169;
          *(_QWORD *)(v167 + 40) += v169;
          *(_DWORD *)(v167 + 32) = v170;
          v171 = *(_QWORD *)(v168 + 40) - v169;
          *(_QWORD *)(v168 + 40) = v171;
          if ( !v171 )
            *(_QWORD *)(v168 + 32) = *(_QWORD *)(v168 + 16);
        }
        if ( !*(_DWORD *)(*(_QWORD *)v3 + 32LL) )
          goto LABEL_280;
      }
    }
    if ( a2 )
    {
      *(_DWORD *)(v3 + 5932) = 0;
      if ( a2 == 4 )
      {
        v210 = *(_QWORD *)(v3 + 152);
        if ( (v210 & 0x8000000000000000LL) == 0 )
          goto LABEL_267;
        goto LABEL_261;
      }
      if ( !*(_DWORD *)(v3 + 5900) )
        goto LABEL_283;
      v258 = *(_QWORD *)(v3 + 152);
      if ( v258 < 0 )
        goto LABEL_319;
      goto LABEL_316;
    }
LABEL_280:
    if ( !*(_DWORD *)(a1 + 32) )
      goto LABEL_299;
    return 0;
  }
  while ( 1 )
  {
    while ( 1 )
    {
      v173 = *(_DWORD *)(v3 + 180);
      if ( v173 < 0x103 )
        break;
      *(_DWORD *)(v3 + 160) = 0;
LABEL_219:
      v174 = *(unsigned int *)(v3 + 172);
      if ( !(_DWORD)v174 )
        goto LABEL_245;
      v175 = *(_QWORD *)(v3 + 96);
      v176 = v175 + v174;
      v177 = *(unsigned __int8 *)(v175 + v174 - 1);
      if ( v177 != *(unsigned __int8 *)(v175 + v174)
        || v177 != *(unsigned __int8 *)(v176 + 1)
        || v177 != *(unsigned __int8 *)(v176 + 2) )
      {
        goto LABEL_245;
      }
      v178 = v176 + 258;
      v179 = (unsigned __int8 *)(v175 + v174 + 5);
      while ( 1 )
      {
        if ( v177 != *(v179 - 2) )
        {
          LODWORD(v179) = (_DWORD)v179 - 2;
          goto LABEL_240;
        }
        if ( v177 != *(v179 - 1) )
        {
          LODWORD(v179) = (_DWORD)v179 - 1;
          goto LABEL_240;
        }
        if ( v177 != *v179 )
          goto LABEL_240;
        if ( v177 != v179[1] )
        {
          LODWORD(v179) = (_DWORD)v179 + 1;
          goto LABEL_240;
        }
        if ( v177 != v179[2] )
        {
          LODWORD(v179) = (_DWORD)v179 + 2;
          goto LABEL_240;
        }
        if ( v177 != v179[3] )
        {
          LODWORD(v179) = (_DWORD)v179 + 3;
          goto LABEL_240;
        }
        if ( v177 != v179[4] )
          break;
        v182 = v179[5];
        v180 = v179 + 5;
        v181 = v182;
        v183 = (_DWORD)v180 + 3;
        if ( (unsigned __int64)v180 < v178 )
        {
          v179 = v180 + 3;
          if ( v177 == v181 )
            continue;
        }
        LODWORD(v179) = v183 - 3;
        goto LABEL_240;
      }
      LODWORD(v179) = (_DWORD)v179 + 4;
LABEL_240:
      v184 = (_DWORD)v179 - v178 + 258;
      if ( v184 > v173 )
        v184 = v173;
      v185 = v184 - 3;
      *(_DWORD *)(v3 + 160) = v184;
      if ( v184 < 3 )
        goto LABEL_245;
      v186 = *(unsigned int *)(v3 + 5900);
      v187 = *(_QWORD *)(v3 + 5888);
      *(_DWORD *)(v3 + 5900) = v186 + 1;
      *(_BYTE *)(v187 + v186) = 1;
      v188 = *(unsigned int *)(v3 + 5900);
      v189 = *(_QWORD *)(v3 + 5888);
      LOBYTE(v187) = *((_BYTE *)qword_11F760 + v185);
      *(_DWORD *)(v3 + 5900) = v188 + 1;
      *(_BYTE *)(v189 + v188) = 0;
      v190 = *(unsigned int *)(v3 + 5900);
      v191 = (4LL * (unsigned __int8)v187) | 0x400;
      v192 = *(_QWORD *)(v3 + 5888);
      *(_DWORD *)(v3 + 5900) = v190 + 1;
      *(_BYTE *)(v192 + v190) = v185;
      ++*(_WORD *)(v3 + v191 + 216);
      ++*(_WORD *)(v3 + 2504);
      LODWORD(v190) = *(_DWORD *)(v3 + 5900);
      v193 = *(_DWORD *)(v3 + 160);
      LODWORD(v192) = *(_DWORD *)(v3 + 180);
      LODWORD(v191) = *(_DWORD *)(v3 + 172);
      v194 = *(_DWORD *)(v3 + 5904);
      *(_DWORD *)(v3 + 160) = 0;
      LODWORD(v192) = v192 - v193;
      v195 = v191 + v193;
      *(_DWORD *)(v3 + 180) = v192;
      *(_DWORD *)(v3 + 172) = v195;
      if ( (_DWORD)v190 == v194 )
        goto LABEL_246;
    }
    sub_C8CB8(v3);
    v173 = *(_DWORD *)(v3 + 180);
    if ( !a2 && v173 < 0x103 )
      goto LABEL_280;
    if ( !v173 )
      break;
    *(_DWORD *)(v3 + 160) = 0;
    if ( v173 > 2 )
      goto LABEL_219;
    LODWORD(v174) = *(_DWORD *)(v3 + 172);
LABEL_245:
    v196 = *(unsigned int *)(v3 + 5900);
    v197 = *(_QWORD *)(v3 + 5888);
    v198 = *(unsigned __int8 *)(*(_QWORD *)(v3 + 96) + (unsigned int)v174);
    *(_DWORD *)(v3 + 5900) = v196 + 1;
    *(_BYTE *)(v197 + v196) = 0;
    v199 = *(unsigned int *)(v3 + 5900);
    v200 = *(_QWORD *)(v3 + 5888);
    *(_DWORD *)(v3 + 5900) = v199 + 1;
    *(_BYTE *)(v200 + v199) = 0;
    v201 = *(unsigned int *)(v3 + 5900);
    v202 = *(_QWORD *)(v3 + 5888);
    *(_DWORD *)(v3 + 5900) = v201 + 1;
    *(_BYTE *)(v202 + v201) = v198;
    ++*(_WORD *)(v3 + 4 * v198 + 212);
    LODWORD(v201) = *(_DWORD *)(v3 + 5900);
    LODWORD(v197) = *(_DWORD *)(v3 + 5904);
    v195 = *(_DWORD *)(v3 + 172) + 1;
    --*(_DWORD *)(v3 + 180);
    *(_DWORD *)(v3 + 172) = v195;
    if ( (_DWORD)v201 == (_DWORD)v197 )
    {
LABEL_246:
      v203 = *(_QWORD *)(v3 + 152);
      if ( v203 < 0 )
        v204 = nullptr;
      else
        v204 = (const void *)(*(_QWORD *)(v3 + 96) + (unsigned int)v203);
      sub_CFDF0(v3, v204, v195 - v203, 0);
      v205 = *(_QWORD *)v3;
      *(_QWORD *)(v3 + 152) = *(unsigned int *)(v3 + 172);
      v206 = *(_QWORD *)(v205 + 56);
      sub_CFC1C(v206);
      if ( *(_DWORD *)(v205 + 32) >= *(_DWORD *)(v206 + 40) )
        v207 = *(_DWORD *)(v206 + 40);
      else
        v207 = *(_DWORD *)(v205 + 32);
      if ( v207 )
      {
        memcpy(*(void **)(v205 + 24), *(const void **)(v206 + 32), v207);
        *(_QWORD *)(v205 + 24) += v207;
        *(_QWORD *)(v206 + 32) += v207;
        v208 = *(_DWORD *)(v205 + 32) - v207;
        *(_QWORD *)(v205 + 40) += v207;
        *(_DWORD *)(v205 + 32) = v208;
        v209 = *(_QWORD *)(v206 + 40) - v207;
        *(_QWORD *)(v206 + 40) = v209;
        if ( !v209 )
          *(_QWORD *)(v206 + 32) = *(_QWORD *)(v206 + 16);
      }
      if ( !*(_DWORD *)(*(_QWORD *)v3 + 32LL) )
        goto LABEL_280;
    }
  }
  *(_DWORD *)(v3 + 5932) = 0;
  if ( a2 != 4 )
  {
    if ( !*(_DWORD *)(v3 + 5900) )
      goto LABEL_283;
    v258 = *(_QWORD *)(v3 + 152);
    if ( v258 < 0 )
    {
LABEL_319:
      v259 = nullptr;
LABEL_320:
      sub_CFDF0(v3, v259, *(unsigned int *)(v3 + 172) - v258, 0);
      v260 = *(_QWORD *)v3;
      *(_QWORD *)(v3 + 152) = *(unsigned int *)(v3 + 172);
      v261 = *(_QWORD *)(v260 + 56);
      sub_CFC1C(v261);
      if ( *(_DWORD *)(v260 + 32) >= *(_DWORD *)(v261 + 40) )
        v262 = *(_DWORD *)(v261 + 40);
      else
        v262 = *(_DWORD *)(v260 + 32);
      if ( v262 )
      {
        memcpy(*(void **)(v260 + 24), *(const void **)(v261 + 32), v262);
        *(_QWORD *)(v260 + 24) += v262;
        *(_QWORD *)(v261 + 32) += v262;
        v263 = *(_DWORD *)(v260 + 32) - v262;
        *(_QWORD *)(v260 + 40) += v262;
        *(_DWORD *)(v260 + 32) = v263;
        v264 = *(_QWORD *)(v261 + 40) - v262;
        *(_QWORD *)(v261 + 40) = v264;
        if ( !v264 )
          *(_QWORD *)(v261 + 32) = *(_QWORD *)(v261 + 16);
      }
      if ( !*(_DWORD *)(*(_QWORD *)v3 + 32LL) )
        goto LABEL_280;
      goto LABEL_283;
    }
LABEL_316:
    v259 = (const void *)(*(_QWORD *)(v3 + 96) + (unsigned int)v258);
    goto LABEL_320;
  }
  v210 = *(_QWORD *)(v3 + 152);
  if ( v210 < 0 )
  {
LABEL_261:
    v211 = nullptr;
    goto LABEL_268;
  }
LABEL_267:
  v211 = (const void *)(*(_QWORD *)(v3 + 96) + (unsigned int)v210);
LABEL_268:
  sub_CFDF0(v3, v211, *(unsigned int *)(v3 + 172) - v210, 1);
  v212 = *(_QWORD *)v3;
  *(_QWORD *)(v3 + 152) = *(unsigned int *)(v3 + 172);
  v213 = *(_QWORD *)(v212 + 56);
  sub_CFC1C(v213);
  if ( *(_DWORD *)(v212 + 32) >= *(_DWORD *)(v213 + 40) )
    v214 = *(_DWORD *)(v213 + 40);
  else
    v214 = *(_DWORD *)(v212 + 32);
  if ( v214 )
  {
    memcpy(*(void **)(v212 + 24), *(const void **)(v213 + 32), v214);
    *(_QWORD *)(v212 + 24) += v214;
    *(_QWORD *)(v213 + 32) += v214;
    v215 = *(_DWORD *)(v212 + 32) - v214;
    *(_QWORD *)(v212 + 40) += v214;
    *(_DWORD *)(v212 + 32) = v215;
    v216 = *(_QWORD *)(v213 + 40) - v214;
    *(_QWORD *)(v213 + 40) = v216;
    if ( !v216 )
      *(_QWORD *)(v213 + 32) = *(_QWORD *)(v213 + 16);
  }
  if ( *(_DWORD *)(*(_QWORD *)v3 + 32LL) )
    v172 = 3;
  else
    v172 = 2;
LABEL_277:
  if ( (v172 | 1) == 3 )
    *(_DWORD *)(v3 + 8) = 666;
  if ( (v172 | 2) == 2 )
    goto LABEL_280;
  if ( v172 != 1 )
  {
LABEL_297:
    if ( a2 == 4 )
    {
      v222 = *(_DWORD *)(v3 + 48);
      if ( v222 < 1 )
        return 1;
      v223 = *(_QWORD *)(a1 + 96);
      if ( v222 == 2 )
      {
        v224 = *(_QWORD *)(v3 + 40);
        v225 = *(_QWORD *)(v3 + 16);
        *(_QWORD *)(v3 + 40) = v224 + 1;
        *(_BYTE *)(v225 + v224) = v223;
        v226 = *(_QWORD *)(v3 + 40);
        v227 = *(_QWORD *)(v3 + 16);
        v228 = *(_QWORD *)(a1 + 96) >> 8;
        *(_QWORD *)(v3 + 40) = v226 + 1;
        *(_BYTE *)(v227 + v226) = v228;
        v229 = *(_QWORD *)(v3 + 40);
        v230 = *(_QWORD *)(v3 + 16);
        v231 = *(_QWORD *)(a1 + 96) >> 16;
        *(_QWORD *)(v3 + 40) = v229 + 1;
        *(_BYTE *)(v230 + v229) = v231;
        v232 = *(_QWORD *)(v3 + 40);
        v233 = *(_QWORD *)(v3 + 16);
        v234 = *(_QWORD *)(a1 + 96) >> 24;
        *(_QWORD *)(v3 + 40) = v232 + 1;
        *(_BYTE *)(v233 + v232) = v234;
        v235 = *(_QWORD *)(v3 + 40);
        v236 = *(_QWORD *)(a1 + 16);
        v237 = *(_QWORD *)(v3 + 16);
        *(_QWORD *)(v3 + 40) = v235 + 1;
        *(_BYTE *)(v237 + v235) = v236;
        v238 = *(_QWORD *)(v3 + 40);
        v239 = *(_QWORD *)(v3 + 16);
        v240 = *(_QWORD *)(a1 + 16) >> 8;
        *(_QWORD *)(v3 + 40) = v238 + 1;
        *(_BYTE *)(v239 + v238) = v240;
        v241 = *(_QWORD *)(v3 + 40);
        v242 = *(_QWORD *)(v3 + 16);
        v243 = *(_QWORD *)(a1 + 16) >> 16;
        *(_QWORD *)(v3 + 40) = v241 + 1;
        *(_BYTE *)(v242 + v241) = v243;
        v244 = *(_QWORD *)(v3 + 40);
        v245 = *(_QWORD *)(v3 + 16);
        v246 = *(_QWORD *)(a1 + 16) >> 24;
      }
      else
      {
        v247 = *(_QWORD *)(v3 + 40);
        v248 = *(_QWORD *)(v3 + 16);
        *(_QWORD *)(v3 + 40) = v247 + 1;
        *(_BYTE *)(v248 + v247) = BYTE3(v223);
        v249 = *(_QWORD *)(v3 + 40);
        v250 = *(_QWORD *)(v3 + 16);
        *(_QWORD *)(v3 + 40) = v249 + 1;
        *(_BYTE *)(v250 + v249) = BYTE2(v223);
        v246 = *(_QWORD *)(a1 + 96);
        v251 = *(_QWORD *)(v3 + 40);
        v252 = *(_QWORD *)(v3 + 16);
        *(_QWORD *)(v3 + 40) = v251 + 1;
        *(_BYTE *)(v252 + v251) = BYTE1(v246);
        v244 = *(_QWORD *)(v3 + 40);
        v245 = *(_QWORD *)(v3 + 16);
      }
      *(_QWORD *)(v3 + 40) = v244 + 1;
      *(_BYTE *)(v245 + v244) = v246;
      v253 = *(_QWORD *)(a1 + 56);
      sub_CFC1C(v253);
      if ( *(_DWORD *)(a1 + 32) >= *(_DWORD *)(v253 + 40) )
        v254 = *(_DWORD *)(v253 + 40);
      else
        v254 = *(_DWORD *)(a1 + 32);
      if ( v254 )
      {
        memcpy(*(void **)(a1 + 24), *(const void **)(v253 + 32), v254);
        *(_QWORD *)(a1 + 24) += v254;
        *(_QWORD *)(v253 + 32) += v254;
        v255 = *(_DWORD *)(a1 + 32) - v254;
        *(_QWORD *)(a1 + 40) += v254;
        *(_DWORD *)(a1 + 32) = v255;
        v256 = *(_QWORD *)(v253 + 40) - v254;
        *(_QWORD *)(v253 + 40) = v256;
        if ( !v256 )
          *(_QWORD *)(v253 + 32) = *(_QWORD *)(v253 + 16);
      }
      v257 = *(_DWORD *)(v3 + 48);
      if ( v257 >= 1 )
        *(_DWORD *)(v3 + 48) = -v257;
      return *(_QWORD *)(v3 + 40) == 0;
    }
    return 0;
  }
LABEL_283:
  if ( a2 != 5 )
  {
    if ( a2 == 1 )
    {
      sub_CFCAC(v3);
    }
    else
    {
      sub_CFA98((char *)v3, nullptr, 0, 0);
      if ( a2 == 3 )
      {
        *(_WORD *)(*(_QWORD *)(v3 + 120) + 2LL * (unsigned int)(*(_DWORD *)(v3 + 132) - 1)) = 0;
        memset(*(void **)(v3 + 120), 0, 2LL * (unsigned int)(*(_DWORD *)(v3 + 132) - 1));
        if ( !*(_DWORD *)(v3 + 180) )
        {
          *(_DWORD *)(v3 + 172) = 0;
          *(_QWORD *)(v3 + 152) = 0;
          *(_DWORD *)(v3 + 5932) = 0;
        }
      }
    }
  }
  v217 = *(_QWORD *)(a1 + 56);
  sub_CFC1C(v217);
  v218 = *(_DWORD *)(a1 + 32);
  if ( v218 >= *(_DWORD *)(v217 + 40) )
    v219 = *(_DWORD *)(v217 + 40);
  else
    v219 = *(_DWORD *)(a1 + 32);
  if ( v219 )
  {
    memcpy(*(void **)(a1 + 24), *(const void **)(v217 + 32), v219);
    *(_QWORD *)(a1 + 24) += v219;
    *(_QWORD *)(v217 + 32) += v219;
    v220 = *(_DWORD *)(a1 + 32) - v219;
    *(_QWORD *)(a1 + 40) += v219;
    *(_DWORD *)(a1 + 32) = v220;
    v221 = *(_QWORD *)(v217 + 40) - v219;
    *(_QWORD *)(v217 + 40) = v221;
    if ( !v221 )
      *(_QWORD *)(v217 + 32) = *(_QWORD *)(v217 + 16);
    v218 = *(_DWORD *)(a1 + 32);
  }
  if ( v218 )
    goto LABEL_297;
LABEL_299:
  *(_DWORD *)(v3 + 76) = -1;
  return 0;
}
// 11F760: using guessed type __int64 qword_11F760[32];
// 1604B0: using guessed type __int64 qword_1604B0[];
