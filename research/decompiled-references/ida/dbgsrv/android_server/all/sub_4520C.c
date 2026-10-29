/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4520C
// Address: 0x000000000004520C

//----- (000000000004520C) ----------------------------------------------------
pthread_mutex_t *__fastcall sub_4520C(__int64 a1)
{
  char **v2; // x20
  size_t v3; // x0
  __int64 v4; // x23
  char *v5; // x8
  char ***v6; // x21
  pthread_mutex_t *v7; // x0
  unsigned __int64 v8; // x2
  char *align; // x0
  char *v10; // x8
  __int64 v11; // x23
  char *v12; // x8
  pthread_mutex_t *v13; // x0
  unsigned __int64 v14; // x2
  char *v15; // x0
  char *v16; // x8
  __int64 v17; // x23
  char *v18; // x8
  pthread_mutex_t *v19; // x0
  unsigned __int64 v20; // x2
  char *v21; // x0
  char *v22; // x8
  __int64 v23; // x23
  char *v24; // x8
  pthread_mutex_t *v25; // x0
  unsigned __int64 v26; // x2
  char *v27; // x0
  char *v28; // x8
  __int64 v29; // x23
  char *v30; // x8
  pthread_mutex_t *v31; // x0
  unsigned __int64 v32; // x2
  char *v33; // x0
  char *v34; // x8
  __int64 v35; // x23
  char *v36; // x8
  pthread_mutex_t *v37; // x0
  unsigned __int64 v38; // x2
  char *v39; // x0
  char *v40; // x8
  __int64 v41; // x23
  char *v42; // x8
  pthread_mutex_t *v43; // x0
  unsigned __int64 v44; // x2
  char *v45; // x0
  char *v46; // x8
  __int64 v47; // x23
  char *v48; // x8
  pthread_mutex_t *v49; // x0
  unsigned __int64 v50; // x2
  char *v51; // x0
  char *v52; // x8
  __int64 v53; // x23
  char *v54; // x8
  pthread_mutex_t *v55; // x0
  unsigned __int64 v56; // x2
  char *v57; // x0
  char *v58; // x8
  __int64 v59; // x23
  char *v60; // x8
  pthread_mutex_t *v61; // x0
  unsigned __int64 v62; // x2
  char *v63; // x0
  char *v64; // x8
  __int64 v65; // x23
  char *v66; // x8
  pthread_mutex_t *v67; // x0
  unsigned __int64 v68; // x2
  char *v69; // x0
  char *v70; // x8
  __int64 v71; // x23
  char *v72; // x8
  pthread_mutex_t *v73; // x0
  unsigned __int64 v74; // x2
  char *v75; // x0
  char *v76; // x8
  __int64 v77; // x23
  char *v78; // x8
  pthread_mutex_t *v79; // x0
  unsigned __int64 v80; // x2
  char *v81; // x0
  char *v82; // x8
  __int64 v83; // x23
  char *v84; // x8
  pthread_mutex_t *v85; // x0
  unsigned __int64 v86; // x2
  char *v87; // x0
  char *v88; // x8
  __int64 v89; // x23
  char *v90; // x8
  pthread_mutex_t *v91; // x0
  unsigned __int64 v92; // x2
  char *v93; // x0
  char *v94; // x8
  __int64 v95; // x23
  char *v96; // x8
  pthread_mutex_t *v97; // x0
  unsigned __int64 v98; // x2
  char *v99; // x0
  char *v100; // x8
  __int64 v101; // x23
  char *v102; // x8
  pthread_mutex_t *v103; // x0
  unsigned __int64 v104; // x2
  char *v105; // x0
  char *v106; // x8
  __int64 v107; // x23
  char *v108; // x8
  pthread_mutex_t *v109; // x0
  unsigned __int64 v110; // x2
  char *v111; // x0
  char *v112; // x8
  __int64 v113; // x23
  char *v114; // x8
  pthread_mutex_t *v115; // x0
  unsigned __int64 v116; // x2
  char *v117; // x0
  char *v118; // x8
  __int64 v119; // x23
  char *v120; // x8
  pthread_mutex_t *v121; // x0
  unsigned __int64 v122; // x2
  char *v123; // x0
  char *v124; // x8
  __int64 v125; // x23
  char *v126; // x8
  pthread_mutex_t *v127; // x0
  unsigned __int64 v128; // x2
  char *v129; // x0
  char *v130; // x8
  __int64 v131; // x23
  char *v132; // x8
  pthread_mutex_t *v133; // x0
  unsigned __int64 v134; // x2
  char *v135; // x0
  char *v136; // x8
  __int64 v137; // x23
  char *v138; // x8
  pthread_mutex_t *v139; // x0
  unsigned __int64 v140; // x2
  char *v141; // x0
  char *v142; // x8
  __int64 v143; // x23
  char *v144; // x8
  pthread_mutex_t *v145; // x0
  unsigned __int64 v146; // x2
  char *v147; // x0
  char *v148; // x8
  __int64 v149; // x23
  char *v150; // x8
  pthread_mutex_t *v151; // x0
  unsigned __int64 v152; // x2
  char *v153; // x0
  char *v154; // x8
  __int64 v155; // x23
  char *v156; // x8
  pthread_mutex_t *v157; // x0
  unsigned __int64 v158; // x2
  char *v159; // x0
  char *v160; // x8
  __int64 v161; // x23
  char *v162; // x8
  pthread_mutex_t *v163; // x0
  unsigned __int64 v164; // x2
  char *v165; // x0
  char *v166; // x8
  __int64 v167; // x23
  char *v168; // x8
  pthread_mutex_t *v169; // x0
  unsigned __int64 v170; // x2
  char *v171; // x0
  char *v172; // x8
  __int64 v173; // x23
  char *v174; // x8
  pthread_mutex_t *v175; // x0
  unsigned __int64 v176; // x2
  char *v177; // x0
  char *v178; // x8
  __int64 v179; // x23
  char *v180; // x8
  pthread_mutex_t *v181; // x0
  unsigned __int64 v182; // x2
  char *v183; // x0
  char *v184; // x8
  char **v185; // x22
  __int64 v186; // x24
  char *v187; // x23
  pthread_mutex_t *v188; // x0
  unsigned __int64 v189; // x2
  char *v190; // x0
  char *v191; // x8
  char *v192; // x8
  __int64 v193; // x22
  __int64 v194; // x24
  __int64 v195; // x23
  pthread_mutex_t *v196; // x0
  unsigned __int64 v197; // x2
  char *v198; // x0
  __int64 v199; // x8
  char *v200; // x8
  __int64 v201; // x22
  __int64 v202; // x24
  __int64 v203; // x23
  pthread_mutex_t *v204; // x0
  unsigned __int64 v205; // x2
  char *v206; // x0
  __int64 v207; // x8
  char *v208; // x8
  __int64 v209; // x22
  __int64 v210; // x24
  __int64 v211; // x23
  pthread_mutex_t *v212; // x0
  unsigned __int64 v213; // x2
  char *v214; // x0
  __int64 v215; // x8
  char *v216; // x8
  char **v217; // x19
  unsigned __int64 v218; // x22
  __int64 v219; // x23
  char *v220; // x27
  char *v221; // x8
  pthread_mutex_t *v222; // x0
  unsigned __int64 v223; // x2
  char *v224; // x0
  char *v225; // x8
  __int64 v226; // x22
  char *v227; // x8
  pthread_mutex_t *v228; // x0
  unsigned __int64 v229; // x2
  char *v230; // x0
  char *v231; // x8
  __int64 v232; // x21
  char *v233; // x8
  pthread_mutex_t *v234; // x0
  unsigned __int64 v235; // x2
  char *v236; // x0
  char *v237; // x8
  _QWORD *v239; // x19
  __int64 v240; // x1
  __int64 v241; // x2
  __int64 v242; // x3
  __int64 v243; // x4
  __int64 v244; // x5
  __int64 v245; // x6
  __int64 v246; // x7
  int64x2_t v247; // [xsp+0h] [xbp-60h]

  v2 = (char **)operator new(0x390u);
  v3 = sub_44C8C((__int64)v2, a1 + 544);
  *(_QWORD *)(a1 + 536) = v2;
  switch ( byte_1651B5 )
  {
    case 1:
      v4 = 2;
      break;
    case 7:
      v4 = 8;
      break;
    case 2:
      v4 = 4;
      break;
    default:
      goto LABEL_332;
  }
  v5 = v2[3];
  v6 = (char ***)(a1 + 536);
  v7 = (pthread_mutex_t *)(v2 + 2);
  v8 = (unsigned __int64)(v5 + 1);
  if ( v2[4] >= v5 + 1 )
  {
    align = (char *)v7->__align;
  }
  else
  {
    align = (char *)qvector_reserve(v7, v2[2], v8, 0x28u);
    v5 = v2[3];
    v2[2] = align;
    v8 = (unsigned __int64)(v5 + 1);
  }
  v10 = &align[40 * (_QWORD)v5];
  v2[3] = (char *)v8;
  *(_DWORD *)v10 = 0;
  *((_QWORD *)v10 + 3) = 8;
  *((_QWORD *)v10 + 4) = v4;
  *(_OWORD *)(v10 + 8) = xmmword_F1820;
  v3 = (size_t)sub_49A6C(
                 (pthread_mutex_t *)v2[1],
                 off_1651A8,
                 (char *)(unsigned int)dword_1651B0,
                 byte_1651B5,
                 byte_1651B4,
                 qword_1651B8,
                 qword_1651C0);
  v2 = *v6;
  switch ( byte_1651D5 )
  {
    case 1:
      v11 = 2;
      break;
    case 7:
      v11 = 8;
      break;
    case 2:
      v11 = 4;
      break;
    default:
      goto LABEL_332;
  }
  v12 = v2[3];
  v13 = (pthread_mutex_t *)(v2 + 2);
  v14 = (unsigned __int64)(v12 + 1);
  if ( v2[4] >= v12 + 1 )
  {
    v15 = (char *)v13->__align;
  }
  else
  {
    v15 = (char *)qvector_reserve(v13, v2[2], v14, 0x28u);
    v12 = v2[3];
    v2[2] = v15;
    v14 = (unsigned __int64)(v12 + 1);
  }
  v16 = &v15[40 * (_QWORD)v12];
  v2[3] = (char *)v14;
  *(_DWORD *)v16 = 0;
  *((_QWORD *)v16 + 3) = 8;
  *((_QWORD *)v16 + 4) = v11;
  *(_OWORD *)(v16 + 8) = xmmword_F1830;
  v3 = (size_t)sub_49A6C(
                 (pthread_mutex_t *)v2[1],
                 off_1651C8,
                 (char *)(unsigned int)dword_1651D0,
                 byte_1651D5,
                 byte_1651D4,
                 qword_1651D8,
                 qword_1651E0);
  v2 = *v6;
  switch ( byte_1651F5 )
  {
    case 1:
      v17 = 2;
      break;
    case 7:
      v17 = 8;
      break;
    case 2:
      v17 = 4;
      break;
    default:
      goto LABEL_332;
  }
  v18 = v2[3];
  v19 = (pthread_mutex_t *)(v2 + 2);
  v20 = (unsigned __int64)(v18 + 1);
  if ( v2[4] >= v18 + 1 )
  {
    v21 = (char *)v19->__align;
  }
  else
  {
    v21 = (char *)qvector_reserve(v19, v2[2], v20, 0x28u);
    v18 = v2[3];
    v2[2] = v21;
    v20 = (unsigned __int64)(v18 + 1);
  }
  v22 = &v21[40 * (_QWORD)v18];
  v2[3] = (char *)v20;
  *(_DWORD *)v22 = 0;
  *((_QWORD *)v22 + 3) = 8;
  *((_QWORD *)v22 + 4) = v17;
  *(_OWORD *)(v22 + 8) = xmmword_F1840;
  v3 = (size_t)sub_49A6C(
                 (pthread_mutex_t *)v2[1],
                 off_1651E8,
                 (char *)(unsigned int)dword_1651F0,
                 byte_1651F5,
                 byte_1651F4,
                 qword_1651F8,
                 qword_165200);
  v2 = *v6;
  switch ( byte_165215 )
  {
    case 1:
      v23 = 2;
      break;
    case 7:
      v23 = 8;
      break;
    case 2:
      v23 = 4;
      break;
    default:
      goto LABEL_332;
  }
  v24 = v2[3];
  v25 = (pthread_mutex_t *)(v2 + 2);
  v26 = (unsigned __int64)(v24 + 1);
  if ( v2[4] >= v24 + 1 )
  {
    v27 = (char *)v25->__align;
  }
  else
  {
    v27 = (char *)qvector_reserve(v25, v2[2], v26, 0x28u);
    v24 = v2[3];
    v2[2] = v27;
    v26 = (unsigned __int64)(v24 + 1);
  }
  v28 = &v27[40 * (_QWORD)v24];
  v2[3] = (char *)v26;
  *(_DWORD *)v28 = 0;
  *((_QWORD *)v28 + 3) = 8;
  *((_QWORD *)v28 + 4) = v23;
  *(_OWORD *)(v28 + 8) = xmmword_F1850;
  v3 = (size_t)sub_49A6C(
                 (pthread_mutex_t *)v2[1],
                 off_165208,
                 (char *)(unsigned int)dword_165210,
                 byte_165215,
                 byte_165214,
                 qword_165218,
                 qword_165220);
  v2 = *v6;
  switch ( byte_165235 )
  {
    case 1:
      v29 = 2;
      break;
    case 7:
      v29 = 8;
      break;
    case 2:
      v29 = 4;
      break;
    default:
      goto LABEL_332;
  }
  v30 = v2[3];
  v31 = (pthread_mutex_t *)(v2 + 2);
  v32 = (unsigned __int64)(v30 + 1);
  if ( v2[4] >= v30 + 1 )
  {
    v33 = (char *)v31->__align;
  }
  else
  {
    v33 = (char *)qvector_reserve(v31, v2[2], v32, 0x28u);
    v30 = v2[3];
    v2[2] = v33;
    v32 = (unsigned __int64)(v30 + 1);
  }
  v34 = &v33[40 * (_QWORD)v30];
  v2[3] = (char *)v32;
  *(_DWORD *)v34 = 0;
  *((_QWORD *)v34 + 3) = 8;
  *((_QWORD *)v34 + 4) = v29;
  *(_OWORD *)(v34 + 8) = xmmword_F1860;
  v3 = (size_t)sub_49A6C(
                 (pthread_mutex_t *)v2[1],
                 off_165228,
                 (char *)(unsigned int)dword_165230,
                 byte_165235,
                 byte_165234,
                 qword_165238,
                 qword_165240);
  v2 = *v6;
  switch ( byte_165255 )
  {
    case 1:
      v35 = 2;
      break;
    case 7:
      v35 = 8;
      break;
    case 2:
      v35 = 4;
      break;
    default:
      goto LABEL_332;
  }
  v36 = v2[3];
  v37 = (pthread_mutex_t *)(v2 + 2);
  v38 = (unsigned __int64)(v36 + 1);
  if ( v2[4] >= v36 + 1 )
  {
    v39 = (char *)v37->__align;
  }
  else
  {
    v39 = (char *)qvector_reserve(v37, v2[2], v38, 0x28u);
    v36 = v2[3];
    v2[2] = v39;
    v38 = (unsigned __int64)(v36 + 1);
  }
  v40 = &v39[40 * (_QWORD)v36];
  v2[3] = (char *)v38;
  *(_DWORD *)v40 = 0;
  *((_QWORD *)v40 + 3) = 8;
  *((_QWORD *)v40 + 4) = v35;
  *(_OWORD *)(v40 + 8) = xmmword_F1870;
  v3 = (size_t)sub_49A6C(
                 (pthread_mutex_t *)v2[1],
                 off_165248,
                 (char *)(unsigned int)dword_165250,
                 byte_165255,
                 byte_165254,
                 qword_165258,
                 qword_165260);
  v2 = *v6;
  switch ( byte_165275 )
  {
    case 1:
      v41 = 2;
      break;
    case 7:
      v41 = 8;
      break;
    case 2:
      v41 = 4;
      break;
    default:
      goto LABEL_332;
  }
  v42 = v2[3];
  v43 = (pthread_mutex_t *)(v2 + 2);
  v44 = (unsigned __int64)(v42 + 1);
  if ( v2[4] >= v42 + 1 )
  {
    v45 = (char *)v43->__align;
  }
  else
  {
    v45 = (char *)qvector_reserve(v43, v2[2], v44, 0x28u);
    v42 = v2[3];
    v2[2] = v45;
    v44 = (unsigned __int64)(v42 + 1);
  }
  v46 = &v45[40 * (_QWORD)v42];
  v2[3] = (char *)v44;
  *(_DWORD *)v46 = 0;
  *((_QWORD *)v46 + 3) = 8;
  *((_QWORD *)v46 + 4) = v41;
  *(_OWORD *)(v46 + 8) = xmmword_F1880;
  v3 = (size_t)sub_49A6C(
                 (pthread_mutex_t *)v2[1],
                 off_165268,
                 (char *)(unsigned int)dword_165270,
                 byte_165275,
                 byte_165274,
                 qword_165278,
                 qword_165280);
  v2 = *v6;
  switch ( byte_165295 )
  {
    case 1:
      v47 = 2;
      break;
    case 7:
      v47 = 8;
      break;
    case 2:
      v47 = 4;
      break;
    default:
      goto LABEL_332;
  }
  v48 = v2[3];
  v49 = (pthread_mutex_t *)(v2 + 2);
  v50 = (unsigned __int64)(v48 + 1);
  if ( v2[4] >= v48 + 1 )
  {
    v51 = (char *)v49->__align;
  }
  else
  {
    v51 = (char *)qvector_reserve(v49, v2[2], v50, 0x28u);
    v48 = v2[3];
    v2[2] = v51;
    v50 = (unsigned __int64)(v48 + 1);
  }
  v52 = &v51[40 * (_QWORD)v48];
  v2[3] = (char *)v50;
  *(_DWORD *)v52 = 0;
  *((_QWORD *)v52 + 3) = 8;
  *((_QWORD *)v52 + 4) = v47;
  *(_OWORD *)(v52 + 8) = xmmword_F1890;
  v3 = (size_t)sub_49A6C(
                 (pthread_mutex_t *)v2[1],
                 off_165288,
                 (char *)(unsigned int)dword_165290,
                 byte_165295,
                 byte_165294,
                 qword_165298,
                 qword_1652A0);
  v2 = *v6;
  switch ( byte_1652B5 )
  {
    case 1:
      v53 = 2;
      break;
    case 7:
      v53 = 8;
      break;
    case 2:
      v53 = 4;
      break;
    default:
      goto LABEL_332;
  }
  v54 = v2[3];
  v55 = (pthread_mutex_t *)(v2 + 2);
  v56 = (unsigned __int64)(v54 + 1);
  if ( v2[4] >= v54 + 1 )
  {
    v57 = (char *)v55->__align;
  }
  else
  {
    v57 = (char *)qvector_reserve(v55, v2[2], v56, 0x28u);
    v54 = v2[3];
    v2[2] = v57;
    v56 = (unsigned __int64)(v54 + 1);
  }
  v58 = &v57[40 * (_QWORD)v54];
  v2[3] = (char *)v56;
  *(_DWORD *)v58 = 0;
  *((_QWORD *)v58 + 3) = 8;
  *((_QWORD *)v58 + 4) = v53;
  *(_OWORD *)(v58 + 8) = xmmword_F18A0;
  v3 = (size_t)sub_49A6C(
                 (pthread_mutex_t *)v2[1],
                 off_1652A8,
                 (char *)(unsigned int)dword_1652B0,
                 byte_1652B5,
                 byte_1652B4,
                 qword_1652B8,
                 qword_1652C0);
  v2 = *v6;
  switch ( byte_1652D5 )
  {
    case 1:
      v59 = 2;
      break;
    case 7:
      v59 = 8;
      break;
    case 2:
      v59 = 4;
      break;
    default:
      goto LABEL_332;
  }
  v60 = v2[3];
  v61 = (pthread_mutex_t *)(v2 + 2);
  v62 = (unsigned __int64)(v60 + 1);
  if ( v2[4] >= v60 + 1 )
  {
    v63 = (char *)v61->__align;
  }
  else
  {
    v63 = (char *)qvector_reserve(v61, v2[2], v62, 0x28u);
    v60 = v2[3];
    v2[2] = v63;
    v62 = (unsigned __int64)(v60 + 1);
  }
  v64 = &v63[40 * (_QWORD)v60];
  v2[3] = (char *)v62;
  *(_DWORD *)v64 = 0;
  *((_QWORD *)v64 + 3) = 8;
  *((_QWORD *)v64 + 4) = v59;
  *(_OWORD *)(v64 + 8) = xmmword_F18B0;
  v3 = (size_t)sub_49A6C(
                 (pthread_mutex_t *)v2[1],
                 off_1652C8,
                 (char *)(unsigned int)dword_1652D0,
                 byte_1652D5,
                 byte_1652D4,
                 qword_1652D8,
                 qword_1652E0);
  v2 = *v6;
  switch ( byte_1652F5 )
  {
    case 1:
      v65 = 2;
      break;
    case 7:
      v65 = 8;
      break;
    case 2:
      v65 = 4;
      break;
    default:
      goto LABEL_332;
  }
  v66 = v2[3];
  v67 = (pthread_mutex_t *)(v2 + 2);
  v68 = (unsigned __int64)(v66 + 1);
  if ( v2[4] >= v66 + 1 )
  {
    v69 = (char *)v67->__align;
  }
  else
  {
    v69 = (char *)qvector_reserve(v67, v2[2], v68, 0x28u);
    v66 = v2[3];
    v2[2] = v69;
    v68 = (unsigned __int64)(v66 + 1);
  }
  v70 = &v69[40 * (_QWORD)v66];
  v2[3] = (char *)v68;
  *(_DWORD *)v70 = 0;
  *((_QWORD *)v70 + 3) = 8;
  *((_QWORD *)v70 + 4) = v65;
  *(_OWORD *)(v70 + 8) = xmmword_F18C0;
  v3 = (size_t)sub_49A6C(
                 (pthread_mutex_t *)v2[1],
                 off_1652E8,
                 (char *)(unsigned int)dword_1652F0,
                 byte_1652F5,
                 byte_1652F4,
                 qword_1652F8,
                 qword_165300);
  v2 = *v6;
  switch ( byte_165315 )
  {
    case 1:
      v71 = 2;
      break;
    case 7:
      v71 = 8;
      break;
    case 2:
      v71 = 4;
      break;
    default:
      goto LABEL_332;
  }
  v72 = v2[3];
  v73 = (pthread_mutex_t *)(v2 + 2);
  v74 = (unsigned __int64)(v72 + 1);
  if ( v2[4] >= v72 + 1 )
  {
    v75 = (char *)v73->__align;
  }
  else
  {
    v75 = (char *)qvector_reserve(v73, v2[2], v74, 0x28u);
    v72 = v2[3];
    v2[2] = v75;
    v74 = (unsigned __int64)(v72 + 1);
  }
  v76 = &v75[40 * (_QWORD)v72];
  v2[3] = (char *)v74;
  *(_DWORD *)v76 = 0;
  *((_QWORD *)v76 + 3) = 8;
  *((_QWORD *)v76 + 4) = v71;
  *(_OWORD *)(v76 + 8) = xmmword_F18D0;
  v3 = (size_t)sub_49A6C(
                 (pthread_mutex_t *)v2[1],
                 off_165308,
                 (char *)(unsigned int)dword_165310,
                 byte_165315,
                 byte_165314,
                 qword_165318,
                 qword_165320);
  v2 = *v6;
  switch ( byte_165335 )
  {
    case 1:
      v77 = 2;
      break;
    case 7:
      v77 = 8;
      break;
    case 2:
      v77 = 4;
      break;
    default:
      goto LABEL_332;
  }
  v78 = v2[3];
  v79 = (pthread_mutex_t *)(v2 + 2);
  v80 = (unsigned __int64)(v78 + 1);
  if ( v2[4] >= v78 + 1 )
  {
    v81 = (char *)v79->__align;
  }
  else
  {
    v81 = (char *)qvector_reserve(v79, v2[2], v80, 0x28u);
    v78 = v2[3];
    v2[2] = v81;
    v80 = (unsigned __int64)(v78 + 1);
  }
  v82 = &v81[40 * (_QWORD)v78];
  v2[3] = (char *)v80;
  *(_DWORD *)v82 = 0;
  *((_QWORD *)v82 + 3) = 8;
  *((_QWORD *)v82 + 4) = v77;
  *(_OWORD *)(v82 + 8) = xmmword_F18E0;
  v3 = (size_t)sub_49A6C(
                 (pthread_mutex_t *)v2[1],
                 off_165328,
                 (char *)(unsigned int)dword_165330,
                 byte_165335,
                 byte_165334,
                 qword_165338,
                 qword_165340);
  v2 = *v6;
  switch ( byte_165355 )
  {
    case 1:
      v83 = 2;
      break;
    case 7:
      v83 = 8;
      break;
    case 2:
      v83 = 4;
      break;
    default:
      goto LABEL_332;
  }
  v84 = v2[3];
  v85 = (pthread_mutex_t *)(v2 + 2);
  v86 = (unsigned __int64)(v84 + 1);
  if ( v2[4] >= v84 + 1 )
  {
    v87 = (char *)v85->__align;
  }
  else
  {
    v87 = (char *)qvector_reserve(v85, v2[2], v86, 0x28u);
    v84 = v2[3];
    v2[2] = v87;
    v86 = (unsigned __int64)(v84 + 1);
  }
  v88 = &v87[40 * (_QWORD)v84];
  v2[3] = (char *)v86;
  *(_DWORD *)v88 = 0;
  *((_QWORD *)v88 + 3) = 8;
  *((_QWORD *)v88 + 4) = v83;
  *(_OWORD *)(v88 + 8) = xmmword_F18F0;
  v3 = (size_t)sub_49A6C(
                 (pthread_mutex_t *)v2[1],
                 off_165348,
                 (char *)(unsigned int)dword_165350,
                 byte_165355,
                 byte_165354,
                 qword_165358,
                 qword_165360);
  v2 = *v6;
  switch ( byte_165375 )
  {
    case 1:
      v89 = 2;
      break;
    case 7:
      v89 = 8;
      break;
    case 2:
      v89 = 4;
      break;
    default:
      goto LABEL_332;
  }
  v90 = v2[3];
  v91 = (pthread_mutex_t *)(v2 + 2);
  v92 = (unsigned __int64)(v90 + 1);
  if ( v2[4] >= v90 + 1 )
  {
    v93 = (char *)v91->__align;
  }
  else
  {
    v93 = (char *)qvector_reserve(v91, v2[2], v92, 0x28u);
    v90 = v2[3];
    v2[2] = v93;
    v92 = (unsigned __int64)(v90 + 1);
  }
  v94 = &v93[40 * (_QWORD)v90];
  v2[3] = (char *)v92;
  *(_DWORD *)v94 = 0;
  *((_QWORD *)v94 + 3) = 8;
  *((_QWORD *)v94 + 4) = v89;
  *(_OWORD *)(v94 + 8) = xmmword_F1900;
  v3 = (size_t)sub_49A6C(
                 (pthread_mutex_t *)v2[1],
                 off_165368,
                 (char *)(unsigned int)dword_165370,
                 byte_165375,
                 byte_165374,
                 qword_165378,
                 qword_165380);
  v2 = *v6;
  switch ( byte_165395 )
  {
    case 1:
      v95 = 2;
      break;
    case 7:
      v95 = 8;
      break;
    case 2:
      v95 = 4;
      break;
    default:
      goto LABEL_332;
  }
  v96 = v2[3];
  v97 = (pthread_mutex_t *)(v2 + 2);
  v98 = (unsigned __int64)(v96 + 1);
  if ( v2[4] >= v96 + 1 )
  {
    v99 = (char *)v97->__align;
  }
  else
  {
    v99 = (char *)qvector_reserve(v97, v2[2], v98, 0x28u);
    v96 = v2[3];
    v2[2] = v99;
    v98 = (unsigned __int64)(v96 + 1);
  }
  v100 = &v99[40 * (_QWORD)v96];
  v2[3] = (char *)v98;
  *(_DWORD *)v100 = 0;
  *((_QWORD *)v100 + 3) = 8;
  *((_QWORD *)v100 + 4) = v95;
  *(_OWORD *)(v100 + 8) = xmmword_F1910;
  v3 = (size_t)sub_49A6C(
                 (pthread_mutex_t *)v2[1],
                 off_165388,
                 (char *)(unsigned int)dword_165390,
                 byte_165395,
                 byte_165394,
                 qword_165398,
                 qword_1653A0);
  v2 = *v6;
  switch ( byte_1653B5 )
  {
    case 1:
      v101 = 2;
      break;
    case 7:
      v101 = 8;
      break;
    case 2:
      v101 = 4;
      break;
    default:
      goto LABEL_332;
  }
  v102 = v2[3];
  v103 = (pthread_mutex_t *)(v2 + 2);
  v104 = (unsigned __int64)(v102 + 1);
  if ( v2[4] >= v102 + 1 )
  {
    v105 = (char *)v103->__align;
  }
  else
  {
    v105 = (char *)qvector_reserve(v103, v2[2], v104, 0x28u);
    v102 = v2[3];
    v2[2] = v105;
    v104 = (unsigned __int64)(v102 + 1);
  }
  v106 = &v105[40 * (_QWORD)v102];
  v2[3] = (char *)v104;
  *(_DWORD *)v106 = 0;
  *((_QWORD *)v106 + 3) = 8;
  *((_QWORD *)v106 + 4) = v101;
  *(_OWORD *)(v106 + 8) = xmmword_F1920;
  v3 = (size_t)sub_49A6C(
                 (pthread_mutex_t *)v2[1],
                 off_1653A8,
                 (char *)(unsigned int)dword_1653B0,
                 byte_1653B5,
                 byte_1653B4,
                 qword_1653B8,
                 qword_1653C0);
  v2 = *v6;
  switch ( byte_1653D5 )
  {
    case 1:
      v107 = 2;
      break;
    case 7:
      v107 = 8;
      break;
    case 2:
      v107 = 4;
      break;
    default:
      goto LABEL_332;
  }
  v108 = v2[3];
  v109 = (pthread_mutex_t *)(v2 + 2);
  v110 = (unsigned __int64)(v108 + 1);
  if ( v2[4] >= v108 + 1 )
  {
    v111 = (char *)v109->__align;
  }
  else
  {
    v111 = (char *)qvector_reserve(v109, v2[2], v110, 0x28u);
    v108 = v2[3];
    v2[2] = v111;
    v110 = (unsigned __int64)(v108 + 1);
  }
  v112 = &v111[40 * (_QWORD)v108];
  v2[3] = (char *)v110;
  *(_DWORD *)v112 = 0;
  *((_QWORD *)v112 + 3) = 8;
  *((_QWORD *)v112 + 4) = v107;
  *(_OWORD *)(v112 + 8) = xmmword_F1930;
  v3 = (size_t)sub_49A6C(
                 (pthread_mutex_t *)v2[1],
                 off_1653C8,
                 (char *)(unsigned int)dword_1653D0,
                 byte_1653D5,
                 byte_1653D4,
                 qword_1653D8,
                 qword_1653E0);
  v2 = *v6;
  switch ( byte_1653F5 )
  {
    case 1:
      v113 = 2;
      break;
    case 7:
      v113 = 8;
      break;
    case 2:
      v113 = 4;
      break;
    default:
      goto LABEL_332;
  }
  v114 = v2[3];
  v115 = (pthread_mutex_t *)(v2 + 2);
  v116 = (unsigned __int64)(v114 + 1);
  if ( v2[4] >= v114 + 1 )
  {
    v117 = (char *)v115->__align;
  }
  else
  {
    v117 = (char *)qvector_reserve(v115, v2[2], v116, 0x28u);
    v114 = v2[3];
    v2[2] = v117;
    v116 = (unsigned __int64)(v114 + 1);
  }
  v118 = &v117[40 * (_QWORD)v114];
  v2[3] = (char *)v116;
  *(_DWORD *)v118 = 0;
  *((_QWORD *)v118 + 3) = 8;
  *((_QWORD *)v118 + 4) = v113;
  *(_OWORD *)(v118 + 8) = xmmword_F1940;
  v3 = (size_t)sub_49A6C(
                 (pthread_mutex_t *)v2[1],
                 off_1653E8,
                 (char *)(unsigned int)dword_1653F0,
                 byte_1653F5,
                 byte_1653F4,
                 qword_1653F8,
                 qword_165400);
  v2 = *v6;
  switch ( byte_165415 )
  {
    case 1:
      v119 = 2;
      break;
    case 7:
      v119 = 8;
      break;
    case 2:
      v119 = 4;
      break;
    default:
      goto LABEL_332;
  }
  v120 = v2[3];
  v121 = (pthread_mutex_t *)(v2 + 2);
  v122 = (unsigned __int64)(v120 + 1);
  if ( v2[4] >= v120 + 1 )
  {
    v123 = (char *)v121->__align;
  }
  else
  {
    v123 = (char *)qvector_reserve(v121, v2[2], v122, 0x28u);
    v120 = v2[3];
    v2[2] = v123;
    v122 = (unsigned __int64)(v120 + 1);
  }
  v124 = &v123[40 * (_QWORD)v120];
  v2[3] = (char *)v122;
  *(_DWORD *)v124 = 0;
  *((_QWORD *)v124 + 3) = 8;
  *((_QWORD *)v124 + 4) = v119;
  *(_OWORD *)(v124 + 8) = xmmword_F1950;
  v3 = (size_t)sub_49A6C(
                 (pthread_mutex_t *)v2[1],
                 off_165408,
                 (char *)(unsigned int)dword_165410,
                 byte_165415,
                 byte_165414,
                 qword_165418,
                 qword_165420);
  v2 = *v6;
  switch ( byte_165435 )
  {
    case 1:
      v125 = 2;
      break;
    case 7:
      v125 = 8;
      break;
    case 2:
      v125 = 4;
      break;
    default:
      goto LABEL_332;
  }
  v126 = v2[3];
  v127 = (pthread_mutex_t *)(v2 + 2);
  v128 = (unsigned __int64)(v126 + 1);
  if ( v2[4] >= v126 + 1 )
  {
    v129 = (char *)v127->__align;
  }
  else
  {
    v129 = (char *)qvector_reserve(v127, v2[2], v128, 0x28u);
    v126 = v2[3];
    v2[2] = v129;
    v128 = (unsigned __int64)(v126 + 1);
  }
  v130 = &v129[40 * (_QWORD)v126];
  v2[3] = (char *)v128;
  *(_DWORD *)v130 = 0;
  *((_QWORD *)v130 + 3) = 8;
  *((_QWORD *)v130 + 4) = v125;
  *(_OWORD *)(v130 + 8) = xmmword_F1960;
  v3 = (size_t)sub_49A6C(
                 (pthread_mutex_t *)v2[1],
                 off_165428,
                 (char *)(unsigned int)dword_165430,
                 byte_165435,
                 byte_165434,
                 qword_165438,
                 qword_165440);
  v2 = *v6;
  switch ( byte_165455 )
  {
    case 1:
      v131 = 2;
      break;
    case 7:
      v131 = 8;
      break;
    case 2:
      v131 = 4;
      break;
    default:
      goto LABEL_332;
  }
  v132 = v2[3];
  v133 = (pthread_mutex_t *)(v2 + 2);
  v134 = (unsigned __int64)(v132 + 1);
  if ( v2[4] >= v132 + 1 )
  {
    v135 = (char *)v133->__align;
  }
  else
  {
    v135 = (char *)qvector_reserve(v133, v2[2], v134, 0x28u);
    v132 = v2[3];
    v2[2] = v135;
    v134 = (unsigned __int64)(v132 + 1);
  }
  v136 = &v135[40 * (_QWORD)v132];
  v2[3] = (char *)v134;
  *(_DWORD *)v136 = 0;
  *((_QWORD *)v136 + 3) = 8;
  *((_QWORD *)v136 + 4) = v131;
  *(_OWORD *)(v136 + 8) = xmmword_F1970;
  v3 = (size_t)sub_49A6C(
                 (pthread_mutex_t *)v2[1],
                 off_165448,
                 (char *)(unsigned int)dword_165450,
                 byte_165455,
                 byte_165454,
                 qword_165458,
                 qword_165460);
  v2 = *v6;
  switch ( byte_165475 )
  {
    case 1:
      v137 = 2;
      break;
    case 7:
      v137 = 8;
      break;
    case 2:
      v137 = 4;
      break;
    default:
      goto LABEL_332;
  }
  v138 = v2[3];
  v139 = (pthread_mutex_t *)(v2 + 2);
  v140 = (unsigned __int64)(v138 + 1);
  if ( v2[4] >= v138 + 1 )
  {
    v141 = (char *)v139->__align;
  }
  else
  {
    v141 = (char *)qvector_reserve(v139, v2[2], v140, 0x28u);
    v138 = v2[3];
    v2[2] = v141;
    v140 = (unsigned __int64)(v138 + 1);
  }
  v142 = &v141[40 * (_QWORD)v138];
  v2[3] = (char *)v140;
  *(_DWORD *)v142 = 0;
  *((_QWORD *)v142 + 3) = 8;
  *((_QWORD *)v142 + 4) = v137;
  *(_OWORD *)(v142 + 8) = xmmword_F1980;
  v3 = (size_t)sub_49A6C(
                 (pthread_mutex_t *)v2[1],
                 off_165468,
                 (char *)(unsigned int)dword_165470,
                 byte_165475,
                 byte_165474,
                 qword_165478,
                 qword_165480);
  v2 = *v6;
  switch ( byte_165495 )
  {
    case 1:
      v143 = 2;
      break;
    case 7:
      v143 = 8;
      break;
    case 2:
      v143 = 4;
      break;
    default:
      goto LABEL_332;
  }
  v144 = v2[3];
  v145 = (pthread_mutex_t *)(v2 + 2);
  v146 = (unsigned __int64)(v144 + 1);
  if ( v2[4] >= v144 + 1 )
  {
    v147 = (char *)v145->__align;
  }
  else
  {
    v147 = (char *)qvector_reserve(v145, v2[2], v146, 0x28u);
    v144 = v2[3];
    v2[2] = v147;
    v146 = (unsigned __int64)(v144 + 1);
  }
  v148 = &v147[40 * (_QWORD)v144];
  v2[3] = (char *)v146;
  *(_DWORD *)v148 = 0;
  *((_QWORD *)v148 + 3) = 8;
  *((_QWORD *)v148 + 4) = v143;
  *(_OWORD *)(v148 + 8) = xmmword_F1990;
  v3 = (size_t)sub_49A6C(
                 (pthread_mutex_t *)v2[1],
                 off_165488,
                 (char *)(unsigned int)dword_165490,
                 byte_165495,
                 byte_165494,
                 qword_165498,
                 qword_1654A0);
  v2 = *v6;
  switch ( byte_1654B5 )
  {
    case 1:
      v149 = 2;
      break;
    case 7:
      v149 = 8;
      break;
    case 2:
      v149 = 4;
      break;
    default:
      goto LABEL_332;
  }
  v150 = v2[3];
  v151 = (pthread_mutex_t *)(v2 + 2);
  v152 = (unsigned __int64)(v150 + 1);
  if ( v2[4] >= v150 + 1 )
  {
    v153 = (char *)v151->__align;
  }
  else
  {
    v153 = (char *)qvector_reserve(v151, v2[2], v152, 0x28u);
    v150 = v2[3];
    v2[2] = v153;
    v152 = (unsigned __int64)(v150 + 1);
  }
  v154 = &v153[40 * (_QWORD)v150];
  v2[3] = (char *)v152;
  *(_DWORD *)v154 = 0;
  *((_QWORD *)v154 + 3) = 8;
  *((_QWORD *)v154 + 4) = v149;
  *(_OWORD *)(v154 + 8) = xmmword_F19A0;
  v3 = (size_t)sub_49A6C(
                 (pthread_mutex_t *)v2[1],
                 off_1654A8,
                 (char *)(unsigned int)dword_1654B0,
                 byte_1654B5,
                 byte_1654B4,
                 qword_1654B8,
                 qword_1654C0);
  v2 = *v6;
  switch ( byte_1654D5 )
  {
    case 1:
      v155 = 2;
      break;
    case 7:
      v155 = 8;
      break;
    case 2:
      v155 = 4;
      break;
    default:
      goto LABEL_332;
  }
  v156 = v2[3];
  v157 = (pthread_mutex_t *)(v2 + 2);
  v158 = (unsigned __int64)(v156 + 1);
  if ( v2[4] >= v156 + 1 )
  {
    v159 = (char *)v157->__align;
  }
  else
  {
    v159 = (char *)qvector_reserve(v157, v2[2], v158, 0x28u);
    v156 = v2[3];
    v2[2] = v159;
    v158 = (unsigned __int64)(v156 + 1);
  }
  v160 = &v159[40 * (_QWORD)v156];
  v2[3] = (char *)v158;
  *(_DWORD *)v160 = 0;
  *((_QWORD *)v160 + 3) = 8;
  *((_QWORD *)v160 + 4) = v155;
  *(_OWORD *)(v160 + 8) = xmmword_F19B0;
  v3 = (size_t)sub_49A6C(
                 (pthread_mutex_t *)v2[1],
                 off_1654C8,
                 (char *)(unsigned int)dword_1654D0,
                 byte_1654D5,
                 byte_1654D4,
                 qword_1654D8,
                 qword_1654E0);
  v2 = *v6;
  switch ( byte_1654F5 )
  {
    case 1:
      v161 = 2;
      break;
    case 7:
      v161 = 8;
      break;
    case 2:
      v161 = 4;
      break;
    default:
      goto LABEL_332;
  }
  v162 = v2[3];
  v163 = (pthread_mutex_t *)(v2 + 2);
  v164 = (unsigned __int64)(v162 + 1);
  if ( v2[4] >= v162 + 1 )
  {
    v165 = (char *)v163->__align;
  }
  else
  {
    v165 = (char *)qvector_reserve(v163, v2[2], v164, 0x28u);
    v162 = v2[3];
    v2[2] = v165;
    v164 = (unsigned __int64)(v162 + 1);
  }
  v166 = &v165[40 * (_QWORD)v162];
  v2[3] = (char *)v164;
  *(_DWORD *)v166 = 0;
  *((_QWORD *)v166 + 3) = 8;
  *((_QWORD *)v166 + 4) = v161;
  *(_OWORD *)(v166 + 8) = xmmword_F19C0;
  v3 = (size_t)sub_49A6C(
                 (pthread_mutex_t *)v2[1],
                 off_1654E8,
                 (char *)(unsigned int)dword_1654F0,
                 byte_1654F5,
                 byte_1654F4,
                 qword_1654F8,
                 qword_165500);
  v2 = *v6;
  switch ( byte_165515 )
  {
    case 1:
      v167 = 2;
      break;
    case 7:
      v167 = 8;
      break;
    case 2:
      v167 = 4;
      break;
    default:
      goto LABEL_332;
  }
  v168 = v2[3];
  v169 = (pthread_mutex_t *)(v2 + 2);
  v170 = (unsigned __int64)(v168 + 1);
  if ( v2[4] >= v168 + 1 )
  {
    v171 = (char *)v169->__align;
  }
  else
  {
    v171 = (char *)qvector_reserve(v169, v2[2], v170, 0x28u);
    v168 = v2[3];
    v2[2] = v171;
    v170 = (unsigned __int64)(v168 + 1);
  }
  v172 = &v171[40 * (_QWORD)v168];
  v2[3] = (char *)v170;
  *(_DWORD *)v172 = 0;
  *((_QWORD *)v172 + 3) = 8;
  *((_QWORD *)v172 + 4) = v167;
  *(_OWORD *)(v172 + 8) = xmmword_F19D0;
  v3 = (size_t)sub_49A6C(
                 (pthread_mutex_t *)v2[1],
                 off_165508,
                 (char *)(unsigned int)dword_165510,
                 byte_165515,
                 byte_165514,
                 qword_165518,
                 qword_165520);
  v2 = *v6;
  switch ( byte_165535 )
  {
    case 1:
      v173 = 2;
      break;
    case 7:
      v173 = 8;
      break;
    case 2:
      v173 = 4;
      break;
    default:
      goto LABEL_332;
  }
  v174 = v2[3];
  v175 = (pthread_mutex_t *)(v2 + 2);
  v176 = (unsigned __int64)(v174 + 1);
  if ( v2[4] >= v174 + 1 )
  {
    v177 = (char *)v175->__align;
  }
  else
  {
    v177 = (char *)qvector_reserve(v175, v2[2], v176, 0x28u);
    v174 = v2[3];
    v2[2] = v177;
    v176 = (unsigned __int64)(v174 + 1);
  }
  v178 = &v177[40 * (_QWORD)v174];
  v2[3] = (char *)v176;
  *(_DWORD *)v178 = 0;
  *((_QWORD *)v178 + 3) = 8;
  *((_QWORD *)v178 + 4) = v173;
  *(_OWORD *)(v178 + 8) = xmmword_F19E0;
  v3 = (size_t)sub_49A6C(
                 (pthread_mutex_t *)v2[1],
                 off_165528,
                 (char *)(unsigned int)dword_165530,
                 byte_165535,
                 byte_165534,
                 qword_165538,
                 qword_165540);
  v2 = *v6;
  switch ( byte_165555 )
  {
    case 1:
      v179 = 2;
      break;
    case 7:
      v179 = 8;
      break;
    case 2:
      v179 = 4;
      break;
    default:
      goto LABEL_332;
  }
  v180 = v2[3];
  v181 = (pthread_mutex_t *)(v2 + 2);
  v182 = (unsigned __int64)(v180 + 1);
  if ( v2[4] >= v180 + 1 )
  {
    v183 = (char *)v181->__align;
  }
  else
  {
    v183 = (char *)qvector_reserve(v181, v2[2], v182, 0x28u);
    v180 = v2[3];
    v2[2] = v183;
    v182 = (unsigned __int64)(v180 + 1);
  }
  v184 = &v183[40 * (_QWORD)v180];
  v2[3] = (char *)v182;
  *(_DWORD *)v184 = 0;
  *((_QWORD *)v184 + 3) = 8;
  *((_QWORD *)v184 + 4) = v179;
  *(_OWORD *)(v184 + 8) = xmmword_F19F0;
  v3 = (size_t)sub_49A6C(
                 (pthread_mutex_t *)v2[1],
                 off_165548,
                 (char *)(unsigned int)dword_165550,
                 byte_165555,
                 byte_165554,
                 qword_165558,
                 qword_165560);
  v2 = &off_165570;
  v185 = *v6;
  switch ( byte_16557D )
  {
    case 1:
      v186 = 2;
      break;
    case 7:
      v186 = 8;
      break;
    case 2:
      v186 = 4;
      break;
    default:
      goto LABEL_332;
  }
  v187 = v185[3];
  v188 = (pthread_mutex_t *)(v185 + 2);
  v189 = (unsigned __int64)(v187 + 1);
  if ( v185[4] >= v187 + 1 )
  {
    v190 = (char *)v188->__align;
    v191 = v185[3];
  }
  else
  {
    v190 = (char *)qvector_reserve(v188, v185[2], v189, 0x28u);
    v191 = v185[3];
    v185[2] = v190;
    v189 = (unsigned __int64)(v191 + 1);
  }
  v192 = &v190[40 * (_QWORD)v191];
  v185[3] = (char *)v189;
  *(_DWORD *)v192 = 0;
  *((_QWORD *)v192 + 3) = 8;
  *((_QWORD *)v192 + 4) = v186;
  *(_OWORD *)(v192 + 8) = xmmword_F1A00;
  v3 = (size_t)sub_49A6C(
                 (pthread_mutex_t *)v185[1],
                 off_165570,
                 (char *)(unsigned int)dword_165578,
                 byte_16557D,
                 byte_16557C,
                 qword_165580,
                 qword_165588);
  *(_DWORD *)(a1 + 1512) = (_DWORD)v187;
  v2 = (char **)&off_165590;
  v193 = *(_QWORD *)(a1 + 536);
  switch ( byte_16559D )
  {
    case 1:
      v194 = 2;
      break;
    case 7:
      v194 = 8;
      break;
    case 2:
      v194 = 4;
      break;
    default:
      goto LABEL_332;
  }
  v195 = *(_QWORD *)(v193 + 24);
  v196 = (pthread_mutex_t *)(v193 + 16);
  v197 = v195 + 1;
  if ( *(_QWORD *)(v193 + 32) >= (unsigned __int64)(v195 + 1) )
  {
    v198 = (char *)v196->__align;
    v199 = *(_QWORD *)(v193 + 24);
  }
  else
  {
    v198 = (char *)qvector_reserve(v196, *(void **)(v193 + 16), v197, 0x28u);
    v199 = *(_QWORD *)(v193 + 24);
    *(_QWORD *)(v193 + 16) = v198;
    v197 = v199 + 1;
  }
  v200 = &v198[40 * v199];
  *(_QWORD *)(v193 + 24) = v197;
  *(_DWORD *)v200 = 0;
  *((_QWORD *)v200 + 3) = 8;
  *((_QWORD *)v200 + 4) = v194;
  *(_OWORD *)(v200 + 8) = xmmword_F1A10;
  v3 = (size_t)sub_49A6C(
                 *(pthread_mutex_t **)(v193 + 8),
                 off_165590,
                 (char *)(unsigned int)dword_165598,
                 byte_16559D,
                 byte_16559C,
                 qword_1655A0,
                 qword_1655A8);
  *(_DWORD *)(a1 + 652) = v195;
  v2 = (char **)&off_1655B0;
  v201 = *(_QWORD *)(a1 + 536);
  switch ( byte_1655BD )
  {
    case 1:
      v202 = 2;
      break;
    case 7:
      v202 = 8;
      break;
    case 2:
      v202 = 4;
      break;
    default:
      goto LABEL_332;
  }
  v203 = *(_QWORD *)(v201 + 24);
  v204 = (pthread_mutex_t *)(v201 + 16);
  v205 = v203 + 1;
  if ( *(_QWORD *)(v201 + 32) >= (unsigned __int64)(v203 + 1) )
  {
    v206 = (char *)v204->__align;
    v207 = *(_QWORD *)(v201 + 24);
  }
  else
  {
    v206 = (char *)qvector_reserve(v204, *(void **)(v201 + 16), v205, 0x28u);
    v207 = *(_QWORD *)(v201 + 24);
    *(_QWORD *)(v201 + 16) = v206;
    v205 = v207 + 1;
  }
  v208 = &v206[40 * v207];
  *(_QWORD *)(v201 + 24) = v205;
  *(_DWORD *)v208 = 0;
  *((_QWORD *)v208 + 3) = 8;
  *((_QWORD *)v208 + 4) = v202;
  *(_OWORD *)(v208 + 8) = xmmword_F1A20;
  v3 = (size_t)sub_49A6C(
                 *(pthread_mutex_t **)(v201 + 8),
                 off_1655B0,
                 (char *)(unsigned int)dword_1655B8,
                 byte_1655BD,
                 byte_1655BC,
                 qword_1655C0,
                 qword_1655C8);
  *(_DWORD *)(a1 + 656) = v203;
  v2 = (char **)&off_1655D0;
  v209 = *(_QWORD *)(a1 + 536);
  switch ( byte_1655DD )
  {
    case 1:
      v210 = 2;
      break;
    case 7:
      v210 = 8;
      break;
    case 2:
      v210 = 4;
      break;
    default:
      goto LABEL_332;
  }
  v211 = *(_QWORD *)(v209 + 24);
  v212 = (pthread_mutex_t *)(v209 + 16);
  v213 = v211 + 1;
  if ( *(_QWORD *)(v209 + 32) >= (unsigned __int64)(v211 + 1) )
  {
    v214 = (char *)v212->__align;
    v215 = *(_QWORD *)(v209 + 24);
  }
  else
  {
    v214 = (char *)qvector_reserve(v212, *(void **)(v209 + 16), v213, 0x28u);
    v215 = *(_QWORD *)(v209 + 24);
    *(_QWORD *)(v209 + 16) = v214;
    v213 = v215 + 1;
  }
  v216 = &v214[40 * v215];
  *(_QWORD *)(v209 + 24) = v213;
  *(_DWORD *)v216 = 0;
  *((_QWORD *)v216 + 3) = 8;
  *((_QWORD *)v216 + 4) = v210;
  *(_OWORD *)(v216 + 8) = xmmword_F1A30;
  v3 = (size_t)sub_49A6C(
                 *(pthread_mutex_t **)(v209 + 8),
                 off_1655D0,
                 (char *)(unsigned int)dword_1655D8,
                 byte_1655DD,
                 byte_1655DC,
                 (__int64)off_1655E0,
                 qword_1655E8);
  *(_DWORD *)(a1 + 1516) = v211;
  v217 = *(char ***)(a1 + 536);
  if ( qword_1659F0 )
  {
    v218 = 0;
    v219 = 368;
    v220 = (char *)&qword_1655F8 + 4;
    v247 = vdupq_n_s64(0x10u);
    do
    {
      v221 = v217[3];
      v222 = (pthread_mutex_t *)(v217 + 2);
      v223 = (unsigned __int64)(v221 + 1);
      if ( v217[4] >= v221 + 1 )
      {
        v224 = (char *)v222->__align;
      }
      else
      {
        v224 = (char *)qvector_reserve(v222, v217[2], v223, 0x28u);
        v221 = v217[3];
        v217[2] = v224;
        v223 = (unsigned __int64)(v221 + 1);
      }
      v225 = &v224[40 * (_QWORD)v221];
      v217[3] = (char *)v223;
      *((_QWORD *)v225 + 1) = -1;
      *((_QWORD *)v225 + 2) = v219;
      *(_DWORD *)v225 = 2;
      *(int64x2_t *)(v225 + 24) = v247;
      v3 = (size_t)sub_49A6C(
                     (pthread_mutex_t *)v217[1],
                     *(const void **)(v220 - 12),
                     (char *)*((unsigned int *)v220 - 1),
                     v220[1],
                     *v220,
                     *(_QWORD *)(v220 + 4),
                     *(_QWORD *)(v220 + 12));
      v217 = *v6;
      ++v218;
      v219 += 16;
      v220 += 32;
    }
    while ( v218 < qword_1659F0 );
  }
  v2 = &off_1659F8;
  switch ( byte_165A05 )
  {
    case 1:
      v226 = 2;
      break;
    case 7:
      v226 = 8;
      break;
    case 2:
      v226 = 4;
      break;
    default:
      goto LABEL_332;
  }
  v227 = v217[3];
  v228 = (pthread_mutex_t *)(v217 + 2);
  v229 = (unsigned __int64)(v227 + 1);
  if ( v217[4] >= v227 + 1 )
  {
    v230 = (char *)v228->__align;
  }
  else
  {
    v230 = (char *)qvector_reserve(v228, v217[2], v229, 0x28u);
    v227 = v217[3];
    v217[2] = v230;
    v229 = (unsigned __int64)(v227 + 1);
  }
  v231 = &v230[40 * (_QWORD)v227];
  v217[3] = (char *)v229;
  *(_DWORD *)v231 = 0;
  *((_QWORD *)v231 + 3) = 4;
  *((_QWORD *)v231 + 4) = v226;
  *(_OWORD *)(v231 + 8) = xmmword_F1A40;
  v3 = (size_t)sub_49A6C(
                 (pthread_mutex_t *)v217[1],
                 off_1659F8,
                 (char *)(unsigned int)dword_165A00,
                 byte_165A05,
                 byte_165A04,
                 qword_165A08,
                 qword_165A10);
  v2 = *v6;
  switch ( byte_165A25 )
  {
    case 1:
      v232 = 2;
      break;
    case 7:
      v232 = 8;
      break;
    case 2:
      v232 = 4;
      break;
    default:
LABEL_332:
      if ( !under_debugger )
        v3 = (size_t)interr(1798);
      __break(1u);
      v239 = (_QWORD *)v3;
      operator delete(v2);
      Unwind_Resume(v239, v240, v241, v242, v243, v244, v245, v246, v247.n128_i8[0]);
  }
  v233 = v2[3];
  v234 = (pthread_mutex_t *)(v2 + 2);
  v235 = (unsigned __int64)(v233 + 1);
  if ( v2[4] >= v233 + 1 )
  {
    v236 = (char *)v234->__align;
  }
  else
  {
    v236 = (char *)qvector_reserve(v234, v2[2], v235, 0x28u);
    v233 = v2[3];
    v2[2] = v236;
    v235 = (unsigned __int64)(v233 + 1);
  }
  v237 = &v236[40 * (_QWORD)v233];
  v2[3] = (char *)v235;
  *(_DWORD *)v237 = 0;
  *((_QWORD *)v237 + 3) = 4;
  *((_QWORD *)v237 + 4) = v232;
  *(_OWORD *)(v237 + 8) = xmmword_F1A50;
  return sub_49A6C(
           (pthread_mutex_t *)v2[1],
           off_165A18,
           (char *)(unsigned int)dword_165A20,
           byte_165A25,
           byte_165A24,
           qword_165A28,
           qword_165A30);
}
// 46B7C: variable 'v240' is possibly undefined
// 46B7C: variable 'v241' is possibly undefined
// 46B7C: variable 'v242' is possibly undefined
// 46B7C: variable 'v243' is possibly undefined
// 46B7C: variable 'v244' is possibly undefined
// 46B7C: variable 'v245' is possibly undefined
// 46B7C: variable 'v246' is possibly undefined
// 46B7C: variable 'v247' is possibly undefined
// 28: using guessed type __int64 qword_28;
// 48: using guessed type __int64;
// 68: using guessed type __int64;
// 88: using guessed type char *[2];
// A8: using guessed type __int64;
// C8: using guessed type __int64;
// EC: using guessed type int;
// 108: using guessed type __int64;
// 128: using guessed type __int64;
// 148: using guessed type __int64;
// 168: using guessed type int *[4];
// 188: using guessed type __int64;
// 1A8: using guessed type __int64;
// 1CC: using guessed type int;
// 1E8: using guessed type __int64;
// 208: using guessed type __int64;
// 228: using guessed type __int64;
// 2EC: using guessed type int elf_hash_nchain;
// 2F0: using guessed type int elf_hash_bucket[1031];
// F1820: using guessed type __int128 xmmword_F1820;
// F1830: using guessed type __int128 xmmword_F1830;
// F1840: using guessed type __int128 xmmword_F1840;
// F1850: using guessed type __int128 xmmword_F1850;
// F1860: using guessed type __int128 xmmword_F1860;
// F1870: using guessed type __int128 xmmword_F1870;
// F1880: using guessed type __int128 xmmword_F1880;
// F1890: using guessed type __int128 xmmword_F1890;
// F18A0: using guessed type __int128 xmmword_F18A0;
// F18B0: using guessed type __int128 xmmword_F18B0;
// F18C0: using guessed type __int128 xmmword_F18C0;
// F18D0: using guessed type __int128 xmmword_F18D0;
// F18E0: using guessed type __int128 xmmword_F18E0;
// F18F0: using guessed type __int128 xmmword_F18F0;
// F1900: using guessed type __int128 xmmword_F1900;
// F1910: using guessed type __int128 xmmword_F1910;
// F1920: using guessed type __int128 xmmword_F1920;
// F1930: using guessed type __int128 xmmword_F1930;
// F1940: using guessed type __int128 xmmword_F1940;
// F1950: using guessed type __int128 xmmword_F1950;
// F1960: using guessed type __int128 xmmword_F1960;
// F1970: using guessed type __int128 xmmword_F1970;
// F1980: using guessed type __int128 xmmword_F1980;
// F1990: using guessed type __int128 xmmword_F1990;
// F19A0: using guessed type __int128 xmmword_F19A0;
// F19B0: using guessed type __int128 xmmword_F19B0;
// F19C0: using guessed type __int128 xmmword_F19C0;
// F19D0: using guessed type __int128 xmmword_F19D0;
// F19E0: using guessed type __int128 xmmword_F19E0;
// F19F0: using guessed type __int128 xmmword_F19F0;
// F1A00: using guessed type __int128 xmmword_F1A00;
// F1A10: using guessed type __int128 xmmword_F1A10;
// F1A20: using guessed type __int128 xmmword_F1A20;
// F1A30: using guessed type __int128 xmmword_F1A30;
// F1A40: using guessed type __int128 xmmword_F1A40;
// F1A50: using guessed type __int128 xmmword_F1A50;
// 1651A8: using guessed type char *off_1651A8;
// 1651B0: using guessed type int dword_1651B0;
// 1651B4: using guessed type char byte_1651B4;
// 1651B5: using guessed type char byte_1651B5;
// 1651B8: using guessed type __int64 qword_1651B8;
// 1651C0: using guessed type __int64 qword_1651C0;
// 1651C8: using guessed type char *off_1651C8;
// 1651D0: using guessed type int dword_1651D0;
// 1651D4: using guessed type char byte_1651D4;
// 1651D5: using guessed type char byte_1651D5;
// 1651D8: using guessed type __int64 qword_1651D8;
// 1651E0: using guessed type __int64 qword_1651E0;
// 1651E8: using guessed type char *off_1651E8;
// 1651F0: using guessed type int dword_1651F0;
// 1651F4: using guessed type char byte_1651F4;
// 1651F5: using guessed type char byte_1651F5;
// 1651F8: using guessed type __int64 qword_1651F8;
// 165200: using guessed type __int64 qword_165200;
// 165208: using guessed type char *off_165208;
// 165210: using guessed type int dword_165210;
// 165214: using guessed type char byte_165214;
// 165215: using guessed type char byte_165215;
// 165218: using guessed type __int64 qword_165218;
// 165220: using guessed type __int64 qword_165220;
// 165228: using guessed type char *off_165228;
// 165230: using guessed type int dword_165230;
// 165234: using guessed type char byte_165234;
// 165235: using guessed type char byte_165235;
// 165238: using guessed type __int64 qword_165238;
// 165240: using guessed type __int64 qword_165240;
// 165248: using guessed type char *off_165248;
// 165250: using guessed type int dword_165250;
// 165254: using guessed type char byte_165254;
// 165255: using guessed type char byte_165255;
// 165258: using guessed type __int64 qword_165258;
// 165260: using guessed type __int64 qword_165260;
// 165268: using guessed type char *off_165268;
// 165270: using guessed type int dword_165270;
// 165274: using guessed type char byte_165274;
// 165275: using guessed type char byte_165275;
// 165278: using guessed type __int64 qword_165278;
// 165280: using guessed type __int64 qword_165280;
// 165288: using guessed type char *off_165288;
// 165290: using guessed type int dword_165290;
// 165294: using guessed type char byte_165294;
// 165295: using guessed type char byte_165295;
// 165298: using guessed type __int64 qword_165298;
// 1652A0: using guessed type __int64 qword_1652A0;
// 1652A8: using guessed type char *off_1652A8;
// 1652B0: using guessed type int dword_1652B0;
// 1652B4: using guessed type char byte_1652B4;
// 1652B5: using guessed type char byte_1652B5;
// 1652B8: using guessed type __int64 qword_1652B8;
// 1652C0: using guessed type __int64 qword_1652C0;
// 1652C8: using guessed type char *off_1652C8;
// 1652D0: using guessed type int dword_1652D0;
// 1652D4: using guessed type char byte_1652D4;
// 1652D5: using guessed type char byte_1652D5;
// 1652D8: using guessed type __int64 qword_1652D8;
// 1652E0: using guessed type __int64 qword_1652E0;
// 1652E8: using guessed type _UNKNOWN *off_1652E8;
// 1652F0: using guessed type int dword_1652F0;
// 1652F4: using guessed type char byte_1652F4;
// 1652F5: using guessed type char byte_1652F5;
// 1652F8: using guessed type __int64 qword_1652F8;
// 165300: using guessed type __int64 qword_165300;
// 165308: using guessed type char *off_165308;
// 165310: using guessed type int dword_165310;
// 165314: using guessed type char byte_165314;
// 165315: using guessed type char byte_165315;
// 165318: using guessed type __int64 qword_165318;
// 165320: using guessed type __int64 qword_165320;
// 165328: using guessed type char *off_165328;
// 165330: using guessed type int dword_165330;
// 165334: using guessed type char byte_165334;
// 165335: using guessed type char byte_165335;
// 165338: using guessed type __int64 qword_165338;
// 165340: using guessed type __int64 qword_165340;
// 165348: using guessed type char *off_165348;
// 165350: using guessed type int dword_165350;
// 165354: using guessed type char byte_165354;
// 165355: using guessed type char byte_165355;
// 165358: using guessed type __int64 qword_165358;
// 165360: using guessed type __int64 qword_165360;
// 165368: using guessed type char *off_165368;
// 165370: using guessed type int dword_165370;
// 165374: using guessed type char byte_165374;
// 165375: using guessed type char byte_165375;
// 165378: using guessed type __int64 qword_165378;
// 165380: using guessed type __int64 qword_165380;
// 165388: using guessed type char *off_165388;
// 165390: using guessed type int dword_165390;
// 165394: using guessed type char byte_165394;
// 165395: using guessed type char byte_165395;
// 165398: using guessed type __int64 qword_165398;
// 1653A0: using guessed type __int64 qword_1653A0;
// 1653A8: using guessed type char *off_1653A8;
// 1653B0: using guessed type int dword_1653B0;
// 1653B4: using guessed type char byte_1653B4;
// 1653B5: using guessed type char byte_1653B5;
// 1653B8: using guessed type __int64 qword_1653B8;
// 1653C0: using guessed type __int64 qword_1653C0;
// 1653C8: using guessed type char *off_1653C8;
// 1653D0: using guessed type int dword_1653D0;
// 1653D4: using guessed type char byte_1653D4;
// 1653D5: using guessed type char byte_1653D5;
// 1653D8: using guessed type __int64 qword_1653D8;
// 1653E0: using guessed type __int64 qword_1653E0;
// 1653E8: using guessed type char *off_1653E8;
// 1653F0: using guessed type int dword_1653F0;
// 1653F4: using guessed type char byte_1653F4;
// 1653F5: using guessed type char byte_1653F5;
// 1653F8: using guessed type __int64 qword_1653F8;
// 165400: using guessed type __int64 qword_165400;
// 165408: using guessed type char *off_165408;
// 165410: using guessed type int dword_165410;
// 165414: using guessed type char byte_165414;
// 165415: using guessed type char byte_165415;
// 165418: using guessed type __int64 qword_165418;
// 165420: using guessed type __int64 qword_165420;
// 165428: using guessed type char *off_165428;
// 165430: using guessed type int dword_165430;
// 165434: using guessed type char byte_165434;
// 165435: using guessed type char byte_165435;
// 165438: using guessed type __int64 qword_165438;
// 165440: using guessed type __int64 qword_165440;
// 165448: using guessed type char *off_165448;
// 165450: using guessed type int dword_165450;
// 165454: using guessed type char byte_165454;
// 165455: using guessed type char byte_165455;
// 165458: using guessed type __int64 qword_165458;
// 165460: using guessed type __int64 qword_165460;
// 165468: using guessed type _UNKNOWN *off_165468;
// 165470: using guessed type int dword_165470;
// 165474: using guessed type char byte_165474;
// 165475: using guessed type char byte_165475;
// 165478: using guessed type __int64 qword_165478;
// 165480: using guessed type __int64 qword_165480;
// 165488: using guessed type char *off_165488;
// 165490: using guessed type int dword_165490;
// 165494: using guessed type char byte_165494;
// 165495: using guessed type char byte_165495;
// 165498: using guessed type __int64 qword_165498;
// 1654A0: using guessed type __int64 qword_1654A0;
// 1654A8: using guessed type char *off_1654A8;
// 1654B0: using guessed type int dword_1654B0;
// 1654B4: using guessed type char byte_1654B4;
// 1654B5: using guessed type char byte_1654B5;
// 1654B8: using guessed type __int64 qword_1654B8;
// 1654C0: using guessed type __int64 qword_1654C0;
// 1654C8: using guessed type char *off_1654C8;
// 1654D0: using guessed type int dword_1654D0;
// 1654D4: using guessed type char byte_1654D4;
// 1654D5: using guessed type char byte_1654D5;
// 1654D8: using guessed type __int64 qword_1654D8;
// 1654E0: using guessed type __int64 qword_1654E0;
// 1654E8: using guessed type char *off_1654E8;
// 1654F0: using guessed type int dword_1654F0;
// 1654F4: using guessed type char byte_1654F4;
// 1654F5: using guessed type char byte_1654F5;
// 1654F8: using guessed type __int64 qword_1654F8;
// 165500: using guessed type __int64 qword_165500;
// 165508: using guessed type char *off_165508;
// 165510: using guessed type int dword_165510;
// 165514: using guessed type char byte_165514;
// 165515: using guessed type char byte_165515;
// 165518: using guessed type __int64 qword_165518;
// 165520: using guessed type __int64 qword_165520;
// 165528: using guessed type char *off_165528;
// 165530: using guessed type int dword_165530;
// 165534: using guessed type char byte_165534;
// 165535: using guessed type char byte_165535;
// 165538: using guessed type __int64 qword_165538;
// 165540: using guessed type __int64 qword_165540;
// 165548: using guessed type char *off_165548;
// 165550: using guessed type int dword_165550;
// 165554: using guessed type char byte_165554;
// 165555: using guessed type char byte_165555;
// 165558: using guessed type __int64 qword_165558;
// 165560: using guessed type __int64 qword_165560;
// 165570: using guessed type char *off_165570;
// 165578: using guessed type int dword_165578;
// 16557C: using guessed type char byte_16557C;
// 16557D: using guessed type char byte_16557D;
// 165580: using guessed type __int64 qword_165580;
// 165588: using guessed type __int64 qword_165588;
// 165590: using guessed type _UNKNOWN *off_165590;
// 165598: using guessed type int dword_165598;
// 16559C: using guessed type char byte_16559C;
// 16559D: using guessed type char byte_16559D;
// 1655A0: using guessed type __int64 qword_1655A0;
// 1655A8: using guessed type __int64 qword_1655A8;
// 1655B0: using guessed type _UNKNOWN *off_1655B0;
// 1655B8: using guessed type int dword_1655B8;
// 1655BC: using guessed type char byte_1655BC;
// 1655BD: using guessed type char byte_1655BD;
// 1655C0: using guessed type __int64 qword_1655C0;
// 1655C8: using guessed type __int64 qword_1655C8;
// 1655D0: using guessed type char (*off_1655D0)[5];
// 1655D8: using guessed type int dword_1655D8;
// 1655DC: using guessed type char byte_1655DC;
// 1655DD: using guessed type char byte_1655DD;
// 1655E0: using guessed type _UNKNOWN **off_1655E0;
// 1655E8: using guessed type __int64 qword_1655E8;
// 1655F8: using guessed type __int64;
// 1659F0: using guessed type __int64 qword_1659F0;
// 1659F8: using guessed type char *off_1659F8;
// 165A00: using guessed type int dword_165A00;
// 165A04: using guessed type char byte_165A04;
// 165A05: using guessed type char byte_165A05;
// 165A08: using guessed type __int64 qword_165A08;
// 165A10: using guessed type __int64 qword_165A10;
// 165A18: using guessed type char *off_165A18;
// 165A20: using guessed type int dword_165A20;
// 165A24: using guessed type char byte_165A24;
// 165A25: using guessed type char byte_165A25;
// 165A28: using guessed type __int64 qword_165A28;
// 165A30: using guessed type __int64 qword_165A30;
// 168DF0: using guessed type char under_debugger;
