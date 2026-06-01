/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001C828
// Address: 0x000000010001C828

//----- (000000010001C828) ----------------------------------------------------
size_t __fastcall sub_10001C828(__int64 a1)
{
  char **v2; // x20
  __int64 v3; // x23
  char *v4; // x1
  char *v5; // x8
  unsigned __int64 v6; // x2
  char *v7; // x8
  __int64 v8; // x21
  char *v9; // x1
  char *v10; // x8
  unsigned __int64 v11; // x2
  char *v12; // x8
  __int64 v13; // x21
  char *v14; // x1
  char *v15; // x8
  unsigned __int64 v16; // x2
  char *v17; // x8
  __int64 v18; // x21
  char *v19; // x1
  char *v20; // x8
  unsigned __int64 v21; // x2
  char *v22; // x8
  __int64 v23; // x21
  char *v24; // x1
  char *v25; // x8
  unsigned __int64 v26; // x2
  char *v27; // x8
  __int64 v28; // x21
  char *v29; // x1
  char *v30; // x8
  unsigned __int64 v31; // x2
  char *v32; // x8
  __int64 v33; // x21
  char *v34; // x1
  char *v35; // x8
  unsigned __int64 v36; // x2
  char *v37; // x8
  __int64 v38; // x21
  char *v39; // x1
  char *v40; // x8
  unsigned __int64 v41; // x2
  char *v42; // x8
  __int64 v43; // x21
  char *v44; // x1
  char *v45; // x8
  unsigned __int64 v46; // x2
  char *v47; // x8
  __int64 v48; // x21
  char *v49; // x1
  char *v50; // x8
  unsigned __int64 v51; // x2
  char *v52; // x8
  __int64 v53; // x21
  char *v54; // x1
  char *v55; // x8
  unsigned __int64 v56; // x2
  char *v57; // x8
  __int64 v58; // x21
  char *v59; // x1
  char *v60; // x8
  unsigned __int64 v61; // x2
  char *v62; // x8
  __int64 v63; // x21
  char *v64; // x1
  char *v65; // x8
  unsigned __int64 v66; // x2
  char *v67; // x8
  __int64 v68; // x21
  char *v69; // x1
  char *v70; // x8
  unsigned __int64 v71; // x2
  char *v72; // x8
  __int64 v73; // x21
  char *v74; // x1
  char *v75; // x8
  unsigned __int64 v76; // x2
  char *v77; // x8
  __int64 v78; // x21
  char *v79; // x1
  char *v80; // x8
  unsigned __int64 v81; // x2
  char *v82; // x8
  __int64 v83; // x21
  char *v84; // x1
  char *v85; // x8
  unsigned __int64 v86; // x2
  char *v87; // x8
  __int64 v88; // x21
  char *v89; // x1
  char *v90; // x8
  unsigned __int64 v91; // x2
  char *v92; // x8
  __int64 v93; // x21
  char *v94; // x1
  char *v95; // x8
  unsigned __int64 v96; // x2
  char *v97; // x8
  __int64 v98; // x21
  char *v99; // x1
  char *v100; // x8
  unsigned __int64 v101; // x2
  char *v102; // x8
  __int64 v103; // x21
  char *v104; // x1
  char *v105; // x8
  unsigned __int64 v106; // x2
  char *v107; // x8
  __int64 v108; // x21
  char *v109; // x1
  char *v110; // x8
  unsigned __int64 v111; // x2
  char *v112; // x8
  __int64 v113; // x21
  char *v114; // x1
  char *v115; // x8
  unsigned __int64 v116; // x2
  char *v117; // x8
  __int64 v118; // x21
  char *v119; // x1
  char *v120; // x8
  unsigned __int64 v121; // x2
  char *v122; // x8
  __int64 v123; // x21
  char *v124; // x1
  char *v125; // x8
  unsigned __int64 v126; // x2
  char *v127; // x8
  __int64 v128; // x21
  char *v129; // x1
  char *v130; // x8
  unsigned __int64 v131; // x2
  char *v132; // x8
  __int64 v133; // x21
  char *v134; // x1
  char *v135; // x8
  unsigned __int64 v136; // x2
  char *v137; // x8
  __int64 v138; // x21
  char *v139; // x1
  char *v140; // x8
  unsigned __int64 v141; // x2
  char *v142; // x8
  __int64 v143; // x21
  char *v144; // x1
  char *v145; // x8
  unsigned __int64 v146; // x2
  char *v147; // x8
  __int64 v148; // x21
  char *v149; // x1
  char *v150; // x8
  unsigned __int64 v151; // x2
  char *v152; // x8
  __int64 v153; // x21
  __int64 v154; // x23
  _QWORD *v155; // x1
  __int64 v156; // x22
  unsigned __int64 v157; // x2
  __int64 v158; // x8
  _QWORD *v159; // x8
  __int64 v160; // x21
  __int64 v161; // x23
  _QWORD *v162; // x1
  __int64 v163; // x22
  unsigned __int64 v164; // x2
  __int64 v165; // x8
  _QWORD *v166; // x8
  __int64 v167; // x21
  __int64 v168; // x23
  _QWORD *v169; // x1
  __int64 v170; // x22
  unsigned __int64 v171; // x2
  __int64 v172; // x8
  _QWORD *v173; // x8
  __int64 v174; // x21
  __int64 v175; // x23
  _QWORD *v176; // x1
  __int64 v177; // x22
  unsigned __int64 v178; // x2
  __int64 v179; // x8
  _QWORD *v180; // x8
  unsigned __int64 v181; // x21
  int *v182; // x22
  __int64 v183; // x23
  _QWORD *v184; // x8
  __int64 v185; // x27
  _QWORD *v186; // x1
  __int64 v187; // x8
  unsigned __int64 v188; // x2
  __int64 v189; // x21
  __int64 v190; // x22
  _QWORD *v191; // x1
  __int64 v192; // x8
  unsigned __int64 v193; // x2
  _QWORD *v194; // x8
  __int64 v195; // x21
  char *v196; // x1
  char *v197; // x8
  unsigned __int64 v198; // x2
  char *v199; // x8
  _Unwind_Exception *v201; // x0
  _Unwind_Exception *v202; // x19
  _QWORD *v203; // x0
  int64x2_t v204; // [xsp+0h] [xbp-60h]

  v2 = (char **)operator new(0x390u);
  *((_OWORD *)v2 + 1) = 0u;
  *((_OWORD *)v2 + 2) = 0u;
  *((_OWORD *)v2 + 3) = 0u;
  v2[8] = nullptr;
  *((_DWORD *)v2 + 18) = 1065353216;
  v2[10] = nullptr;
  v2[11] = (char *)a1;
  *v2 = (char *)&off_100099B58;
  v2[1] = (char *)(a1 + 544);
  bzero(v2 + 12, 0x322u);
  sub_10001C23C(a1 + 544, off_10009CAF8, 1);
  *(_QWORD *)(a1 + 536) = v2;
  switch ( byte_10009CB25 )
  {
    case 1:
      v3 = 2;
      break;
    case 7:
      v3 = 8;
      break;
    case 2:
      v3 = 4;
      break;
    default:
      goto LABEL_299;
  }
  v4 = v2[2];
  v5 = v2[3];
  v6 = (unsigned __int64)(v5 + 1);
  if ( v2[4] < v5 + 1 )
  {
    v4 = (char *)qvector_reserve(v2 + 2, v4, v6, 0x28u);
    v2[2] = v4;
    v5 = v2[3];
    v6 = (unsigned __int64)(v5 + 1);
  }
  v7 = &v4[40 * (_QWORD)v5];
  v2[3] = (char *)v6;
  *(_DWORD *)v7 = 0;
  *(_OWORD *)(v7 + 8) = xmmword_1000757F0;
  *((_QWORD *)v7 + 3) = 8;
  *((_QWORD *)v7 + 4) = v3;
  sub_10001E5BC(
    (size_t *)v2[1],
    off_10009CB18,
    dword_10009CB20,
    (unsigned __int8)byte_10009CB25,
    byte_10009CB24,
    qword_10009CB28,
    (char *)qword_10009CB30);
  v2 = *(char ***)(a1 + 536);
  switch ( byte_10009CB45 )
  {
    case 1:
      v8 = 2;
      break;
    case 7:
      v8 = 8;
      break;
    case 2:
      v8 = 4;
      break;
    default:
      goto LABEL_299;
  }
  v9 = v2[2];
  v10 = v2[3];
  v11 = (unsigned __int64)(v10 + 1);
  if ( v2[4] < v10 + 1 )
  {
    v9 = (char *)qvector_reserve(v2 + 2, v9, v11, 0x28u);
    v2[2] = v9;
    v10 = v2[3];
    v11 = (unsigned __int64)(v10 + 1);
  }
  v12 = &v9[40 * (_QWORD)v10];
  v2[3] = (char *)v11;
  *(_DWORD *)v12 = 0;
  *(_OWORD *)(v12 + 8) = xmmword_100075800;
  *((_QWORD *)v12 + 3) = 8;
  *((_QWORD *)v12 + 4) = v8;
  sub_10001E5BC(
    (size_t *)v2[1],
    off_10009CB38,
    dword_10009CB40,
    (unsigned __int8)byte_10009CB45,
    byte_10009CB44,
    qword_10009CB48,
    (char *)qword_10009CB50);
  v2 = *(char ***)(a1 + 536);
  switch ( byte_10009CB65 )
  {
    case 1:
      v13 = 2;
      break;
    case 7:
      v13 = 8;
      break;
    case 2:
      v13 = 4;
      break;
    default:
      goto LABEL_299;
  }
  v14 = v2[2];
  v15 = v2[3];
  v16 = (unsigned __int64)(v15 + 1);
  if ( v2[4] < v15 + 1 )
  {
    v14 = (char *)qvector_reserve(v2 + 2, v14, v16, 0x28u);
    v2[2] = v14;
    v15 = v2[3];
    v16 = (unsigned __int64)(v15 + 1);
  }
  v17 = &v14[40 * (_QWORD)v15];
  v2[3] = (char *)v16;
  *(_DWORD *)v17 = 0;
  *(_OWORD *)(v17 + 8) = xmmword_100075810;
  *((_QWORD *)v17 + 3) = 8;
  *((_QWORD *)v17 + 4) = v13;
  sub_10001E5BC(
    (size_t *)v2[1],
    off_10009CB58,
    dword_10009CB60,
    (unsigned __int8)byte_10009CB65,
    byte_10009CB64,
    qword_10009CB68,
    (char *)qword_10009CB70);
  v2 = *(char ***)(a1 + 536);
  switch ( byte_10009CB85 )
  {
    case 1:
      v18 = 2;
      break;
    case 7:
      v18 = 8;
      break;
    case 2:
      v18 = 4;
      break;
    default:
      goto LABEL_299;
  }
  v19 = v2[2];
  v20 = v2[3];
  v21 = (unsigned __int64)(v20 + 1);
  if ( v2[4] < v20 + 1 )
  {
    v19 = (char *)qvector_reserve(v2 + 2, v19, v21, 0x28u);
    v2[2] = v19;
    v20 = v2[3];
    v21 = (unsigned __int64)(v20 + 1);
  }
  v22 = &v19[40 * (_QWORD)v20];
  v2[3] = (char *)v21;
  *(_DWORD *)v22 = 0;
  *(_OWORD *)(v22 + 8) = xmmword_100075820;
  *((_QWORD *)v22 + 3) = 8;
  *((_QWORD *)v22 + 4) = v18;
  sub_10001E5BC(
    (size_t *)v2[1],
    off_10009CB78,
    dword_10009CB80,
    (unsigned __int8)byte_10009CB85,
    byte_10009CB84,
    qword_10009CB88,
    (char *)qword_10009CB90);
  v2 = *(char ***)(a1 + 536);
  switch ( byte_10009CBA5 )
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
      goto LABEL_299;
  }
  v24 = v2[2];
  v25 = v2[3];
  v26 = (unsigned __int64)(v25 + 1);
  if ( v2[4] < v25 + 1 )
  {
    v24 = (char *)qvector_reserve(v2 + 2, v24, v26, 0x28u);
    v2[2] = v24;
    v25 = v2[3];
    v26 = (unsigned __int64)(v25 + 1);
  }
  v27 = &v24[40 * (_QWORD)v25];
  v2[3] = (char *)v26;
  *(_DWORD *)v27 = 0;
  *(_OWORD *)(v27 + 8) = xmmword_100075830;
  *((_QWORD *)v27 + 3) = 8;
  *((_QWORD *)v27 + 4) = v23;
  sub_10001E5BC(
    (size_t *)v2[1],
    off_10009CB98,
    dword_10009CBA0,
    (unsigned __int8)byte_10009CBA5,
    byte_10009CBA4,
    qword_10009CBA8,
    (char *)qword_10009CBB0);
  v2 = *(char ***)(a1 + 536);
  switch ( byte_10009CBC5 )
  {
    case 1:
      v28 = 2;
      break;
    case 7:
      v28 = 8;
      break;
    case 2:
      v28 = 4;
      break;
    default:
      goto LABEL_299;
  }
  v29 = v2[2];
  v30 = v2[3];
  v31 = (unsigned __int64)(v30 + 1);
  if ( v2[4] < v30 + 1 )
  {
    v29 = (char *)qvector_reserve(v2 + 2, v29, v31, 0x28u);
    v2[2] = v29;
    v30 = v2[3];
    v31 = (unsigned __int64)(v30 + 1);
  }
  v32 = &v29[40 * (_QWORD)v30];
  v2[3] = (char *)v31;
  *(_DWORD *)v32 = 0;
  *(_OWORD *)(v32 + 8) = xmmword_100075840;
  *((_QWORD *)v32 + 3) = 8;
  *((_QWORD *)v32 + 4) = v28;
  sub_10001E5BC(
    (size_t *)v2[1],
    off_10009CBB8,
    dword_10009CBC0,
    (unsigned __int8)byte_10009CBC5,
    byte_10009CBC4,
    qword_10009CBC8,
    (char *)qword_10009CBD0);
  v2 = *(char ***)(a1 + 536);
  switch ( byte_10009CBE5 )
  {
    case 1:
      v33 = 2;
      break;
    case 7:
      v33 = 8;
      break;
    case 2:
      v33 = 4;
      break;
    default:
      goto LABEL_299;
  }
  v34 = v2[2];
  v35 = v2[3];
  v36 = (unsigned __int64)(v35 + 1);
  if ( v2[4] < v35 + 1 )
  {
    v34 = (char *)qvector_reserve(v2 + 2, v34, v36, 0x28u);
    v2[2] = v34;
    v35 = v2[3];
    v36 = (unsigned __int64)(v35 + 1);
  }
  v37 = &v34[40 * (_QWORD)v35];
  v2[3] = (char *)v36;
  *(_DWORD *)v37 = 0;
  *(_OWORD *)(v37 + 8) = xmmword_100075850;
  *((_QWORD *)v37 + 3) = 8;
  *((_QWORD *)v37 + 4) = v33;
  sub_10001E5BC(
    (size_t *)v2[1],
    off_10009CBD8,
    dword_10009CBE0,
    (unsigned __int8)byte_10009CBE5,
    byte_10009CBE4,
    qword_10009CBE8,
    (char *)qword_10009CBF0);
  v2 = *(char ***)(a1 + 536);
  switch ( byte_10009CC05 )
  {
    case 1:
      v38 = 2;
      break;
    case 7:
      v38 = 8;
      break;
    case 2:
      v38 = 4;
      break;
    default:
      goto LABEL_299;
  }
  v39 = v2[2];
  v40 = v2[3];
  v41 = (unsigned __int64)(v40 + 1);
  if ( v2[4] < v40 + 1 )
  {
    v39 = (char *)qvector_reserve(v2 + 2, v39, v41, 0x28u);
    v2[2] = v39;
    v40 = v2[3];
    v41 = (unsigned __int64)(v40 + 1);
  }
  v42 = &v39[40 * (_QWORD)v40];
  v2[3] = (char *)v41;
  *(_DWORD *)v42 = 0;
  *(_OWORD *)(v42 + 8) = xmmword_100075860;
  *((_QWORD *)v42 + 3) = 8;
  *((_QWORD *)v42 + 4) = v38;
  sub_10001E5BC(
    (size_t *)v2[1],
    off_10009CBF8,
    dword_10009CC00,
    (unsigned __int8)byte_10009CC05,
    byte_10009CC04,
    qword_10009CC08,
    (char *)qword_10009CC10);
  v2 = *(char ***)(a1 + 536);
  switch ( byte_10009CC25 )
  {
    case 1:
      v43 = 2;
      break;
    case 7:
      v43 = 8;
      break;
    case 2:
      v43 = 4;
      break;
    default:
      goto LABEL_299;
  }
  v44 = v2[2];
  v45 = v2[3];
  v46 = (unsigned __int64)(v45 + 1);
  if ( v2[4] < v45 + 1 )
  {
    v44 = (char *)qvector_reserve(v2 + 2, v44, v46, 0x28u);
    v2[2] = v44;
    v45 = v2[3];
    v46 = (unsigned __int64)(v45 + 1);
  }
  v47 = &v44[40 * (_QWORD)v45];
  v2[3] = (char *)v46;
  *(_DWORD *)v47 = 0;
  *(_OWORD *)(v47 + 8) = xmmword_100075870;
  *((_QWORD *)v47 + 3) = 8;
  *((_QWORD *)v47 + 4) = v43;
  sub_10001E5BC(
    (size_t *)v2[1],
    off_10009CC18,
    dword_10009CC20,
    (unsigned __int8)byte_10009CC25,
    byte_10009CC24,
    qword_10009CC28,
    (char *)qword_10009CC30);
  v2 = *(char ***)(a1 + 536);
  switch ( byte_10009CC45 )
  {
    case 1:
      v48 = 2;
      break;
    case 7:
      v48 = 8;
      break;
    case 2:
      v48 = 4;
      break;
    default:
      goto LABEL_299;
  }
  v49 = v2[2];
  v50 = v2[3];
  v51 = (unsigned __int64)(v50 + 1);
  if ( v2[4] < v50 + 1 )
  {
    v49 = (char *)qvector_reserve(v2 + 2, v49, v51, 0x28u);
    v2[2] = v49;
    v50 = v2[3];
    v51 = (unsigned __int64)(v50 + 1);
  }
  v52 = &v49[40 * (_QWORD)v50];
  v2[3] = (char *)v51;
  *(_DWORD *)v52 = 0;
  *(_OWORD *)(v52 + 8) = xmmword_100075880;
  *((_QWORD *)v52 + 3) = 8;
  *((_QWORD *)v52 + 4) = v48;
  sub_10001E5BC(
    (size_t *)v2[1],
    off_10009CC38,
    dword_10009CC40,
    (unsigned __int8)byte_10009CC45,
    byte_10009CC44,
    qword_10009CC48,
    (char *)qword_10009CC50);
  v2 = *(char ***)(a1 + 536);
  switch ( byte_10009CC65 )
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
      goto LABEL_299;
  }
  v54 = v2[2];
  v55 = v2[3];
  v56 = (unsigned __int64)(v55 + 1);
  if ( v2[4] < v55 + 1 )
  {
    v54 = (char *)qvector_reserve(v2 + 2, v54, v56, 0x28u);
    v2[2] = v54;
    v55 = v2[3];
    v56 = (unsigned __int64)(v55 + 1);
  }
  v57 = &v54[40 * (_QWORD)v55];
  v2[3] = (char *)v56;
  *(_DWORD *)v57 = 0;
  *(_OWORD *)(v57 + 8) = xmmword_100075890;
  *((_QWORD *)v57 + 3) = 8;
  *((_QWORD *)v57 + 4) = v53;
  sub_10001E5BC(
    (size_t *)v2[1],
    off_10009CC58,
    dword_10009CC60,
    (unsigned __int8)byte_10009CC65,
    byte_10009CC64,
    qword_10009CC68,
    (char *)qword_10009CC70);
  v2 = *(char ***)(a1 + 536);
  switch ( byte_10009CC85 )
  {
    case 1:
      v58 = 2;
      break;
    case 7:
      v58 = 8;
      break;
    case 2:
      v58 = 4;
      break;
    default:
      goto LABEL_299;
  }
  v59 = v2[2];
  v60 = v2[3];
  v61 = (unsigned __int64)(v60 + 1);
  if ( v2[4] < v60 + 1 )
  {
    v59 = (char *)qvector_reserve(v2 + 2, v59, v61, 0x28u);
    v2[2] = v59;
    v60 = v2[3];
    v61 = (unsigned __int64)(v60 + 1);
  }
  v62 = &v59[40 * (_QWORD)v60];
  v2[3] = (char *)v61;
  *(_DWORD *)v62 = 0;
  *(_OWORD *)(v62 + 8) = xmmword_1000758A0;
  *((_QWORD *)v62 + 3) = 8;
  *((_QWORD *)v62 + 4) = v58;
  sub_10001E5BC(
    (size_t *)v2[1],
    off_10009CC78,
    dword_10009CC80,
    (unsigned __int8)byte_10009CC85,
    byte_10009CC84,
    qword_10009CC88,
    (char *)qword_10009CC90);
  v2 = *(char ***)(a1 + 536);
  switch ( byte_10009CCA5 )
  {
    case 1:
      v63 = 2;
      break;
    case 7:
      v63 = 8;
      break;
    case 2:
      v63 = 4;
      break;
    default:
      goto LABEL_299;
  }
  v64 = v2[2];
  v65 = v2[3];
  v66 = (unsigned __int64)(v65 + 1);
  if ( v2[4] < v65 + 1 )
  {
    v64 = (char *)qvector_reserve(v2 + 2, v64, v66, 0x28u);
    v2[2] = v64;
    v65 = v2[3];
    v66 = (unsigned __int64)(v65 + 1);
  }
  v67 = &v64[40 * (_QWORD)v65];
  v2[3] = (char *)v66;
  *(_DWORD *)v67 = 0;
  *(_OWORD *)(v67 + 8) = xmmword_1000758B0;
  *((_QWORD *)v67 + 3) = 8;
  *((_QWORD *)v67 + 4) = v63;
  sub_10001E5BC(
    (size_t *)v2[1],
    off_10009CC98,
    dword_10009CCA0,
    (unsigned __int8)byte_10009CCA5,
    byte_10009CCA4,
    qword_10009CCA8,
    (char *)qword_10009CCB0);
  v2 = *(char ***)(a1 + 536);
  switch ( byte_10009CCC5 )
  {
    case 1:
      v68 = 2;
      break;
    case 7:
      v68 = 8;
      break;
    case 2:
      v68 = 4;
      break;
    default:
      goto LABEL_299;
  }
  v69 = v2[2];
  v70 = v2[3];
  v71 = (unsigned __int64)(v70 + 1);
  if ( v2[4] < v70 + 1 )
  {
    v69 = (char *)qvector_reserve(v2 + 2, v69, v71, 0x28u);
    v2[2] = v69;
    v70 = v2[3];
    v71 = (unsigned __int64)(v70 + 1);
  }
  v72 = &v69[40 * (_QWORD)v70];
  v2[3] = (char *)v71;
  *(_DWORD *)v72 = 0;
  *(_OWORD *)(v72 + 8) = xmmword_1000758C0;
  *((_QWORD *)v72 + 3) = 8;
  *((_QWORD *)v72 + 4) = v68;
  sub_10001E5BC(
    (size_t *)v2[1],
    off_10009CCB8,
    dword_10009CCC0,
    (unsigned __int8)byte_10009CCC5,
    byte_10009CCC4,
    qword_10009CCC8,
    (char *)qword_10009CCD0);
  v2 = *(char ***)(a1 + 536);
  switch ( byte_10009CCE5 )
  {
    case 1:
      v73 = 2;
      break;
    case 7:
      v73 = 8;
      break;
    case 2:
      v73 = 4;
      break;
    default:
      goto LABEL_299;
  }
  v74 = v2[2];
  v75 = v2[3];
  v76 = (unsigned __int64)(v75 + 1);
  if ( v2[4] < v75 + 1 )
  {
    v74 = (char *)qvector_reserve(v2 + 2, v74, v76, 0x28u);
    v2[2] = v74;
    v75 = v2[3];
    v76 = (unsigned __int64)(v75 + 1);
  }
  v77 = &v74[40 * (_QWORD)v75];
  v2[3] = (char *)v76;
  *(_DWORD *)v77 = 0;
  *(_OWORD *)(v77 + 8) = xmmword_1000758D0;
  *((_QWORD *)v77 + 3) = 8;
  *((_QWORD *)v77 + 4) = v73;
  sub_10001E5BC(
    (size_t *)v2[1],
    off_10009CCD8,
    dword_10009CCE0,
    (unsigned __int8)byte_10009CCE5,
    byte_10009CCE4,
    qword_10009CCE8,
    (char *)qword_10009CCF0);
  v2 = *(char ***)(a1 + 536);
  switch ( byte_10009CD05 )
  {
    case 1:
      v78 = 2;
      break;
    case 7:
      v78 = 8;
      break;
    case 2:
      v78 = 4;
      break;
    default:
      goto LABEL_299;
  }
  v79 = v2[2];
  v80 = v2[3];
  v81 = (unsigned __int64)(v80 + 1);
  if ( v2[4] < v80 + 1 )
  {
    v79 = (char *)qvector_reserve(v2 + 2, v79, v81, 0x28u);
    v2[2] = v79;
    v80 = v2[3];
    v81 = (unsigned __int64)(v80 + 1);
  }
  v82 = &v79[40 * (_QWORD)v80];
  v2[3] = (char *)v81;
  *(_DWORD *)v82 = 0;
  *(_OWORD *)(v82 + 8) = xmmword_1000758E0;
  *((_QWORD *)v82 + 3) = 8;
  *((_QWORD *)v82 + 4) = v78;
  sub_10001E5BC(
    (size_t *)v2[1],
    off_10009CCF8,
    dword_10009CD00,
    (unsigned __int8)byte_10009CD05,
    byte_10009CD04,
    qword_10009CD08,
    (char *)qword_10009CD10);
  v2 = *(char ***)(a1 + 536);
  switch ( byte_10009CD25 )
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
      goto LABEL_299;
  }
  v84 = v2[2];
  v85 = v2[3];
  v86 = (unsigned __int64)(v85 + 1);
  if ( v2[4] < v85 + 1 )
  {
    v84 = (char *)qvector_reserve(v2 + 2, v84, v86, 0x28u);
    v2[2] = v84;
    v85 = v2[3];
    v86 = (unsigned __int64)(v85 + 1);
  }
  v87 = &v84[40 * (_QWORD)v85];
  v2[3] = (char *)v86;
  *(_DWORD *)v87 = 0;
  *(_OWORD *)(v87 + 8) = xmmword_1000758F0;
  *((_QWORD *)v87 + 3) = 8;
  *((_QWORD *)v87 + 4) = v83;
  sub_10001E5BC(
    (size_t *)v2[1],
    off_10009CD18,
    dword_10009CD20,
    (unsigned __int8)byte_10009CD25,
    byte_10009CD24,
    qword_10009CD28,
    (char *)qword_10009CD30);
  v2 = *(char ***)(a1 + 536);
  switch ( byte_10009CD45 )
  {
    case 1:
      v88 = 2;
      break;
    case 7:
      v88 = 8;
      break;
    case 2:
      v88 = 4;
      break;
    default:
      goto LABEL_299;
  }
  v89 = v2[2];
  v90 = v2[3];
  v91 = (unsigned __int64)(v90 + 1);
  if ( v2[4] < v90 + 1 )
  {
    v89 = (char *)qvector_reserve(v2 + 2, v89, v91, 0x28u);
    v2[2] = v89;
    v90 = v2[3];
    v91 = (unsigned __int64)(v90 + 1);
  }
  v92 = &v89[40 * (_QWORD)v90];
  v2[3] = (char *)v91;
  *(_DWORD *)v92 = 0;
  *(_OWORD *)(v92 + 8) = xmmword_100075900;
  *((_QWORD *)v92 + 3) = 8;
  *((_QWORD *)v92 + 4) = v88;
  sub_10001E5BC(
    (size_t *)v2[1],
    off_10009CD38,
    dword_10009CD40,
    (unsigned __int8)byte_10009CD45,
    byte_10009CD44,
    qword_10009CD48,
    (char *)qword_10009CD50);
  v2 = *(char ***)(a1 + 536);
  switch ( byte_10009CD65 )
  {
    case 1:
      v93 = 2;
      break;
    case 7:
      v93 = 8;
      break;
    case 2:
      v93 = 4;
      break;
    default:
      goto LABEL_299;
  }
  v94 = v2[2];
  v95 = v2[3];
  v96 = (unsigned __int64)(v95 + 1);
  if ( v2[4] < v95 + 1 )
  {
    v94 = (char *)qvector_reserve(v2 + 2, v94, v96, 0x28u);
    v2[2] = v94;
    v95 = v2[3];
    v96 = (unsigned __int64)(v95 + 1);
  }
  v97 = &v94[40 * (_QWORD)v95];
  v2[3] = (char *)v96;
  *(_DWORD *)v97 = 0;
  *(_OWORD *)(v97 + 8) = xmmword_100075910;
  *((_QWORD *)v97 + 3) = 8;
  *((_QWORD *)v97 + 4) = v93;
  sub_10001E5BC(
    (size_t *)v2[1],
    off_10009CD58,
    dword_10009CD60,
    (unsigned __int8)byte_10009CD65,
    byte_10009CD64,
    qword_10009CD68,
    (char *)qword_10009CD70);
  v2 = *(char ***)(a1 + 536);
  switch ( byte_10009CD85 )
  {
    case 1:
      v98 = 2;
      break;
    case 7:
      v98 = 8;
      break;
    case 2:
      v98 = 4;
      break;
    default:
      goto LABEL_299;
  }
  v99 = v2[2];
  v100 = v2[3];
  v101 = (unsigned __int64)(v100 + 1);
  if ( v2[4] < v100 + 1 )
  {
    v99 = (char *)qvector_reserve(v2 + 2, v99, v101, 0x28u);
    v2[2] = v99;
    v100 = v2[3];
    v101 = (unsigned __int64)(v100 + 1);
  }
  v102 = &v99[40 * (_QWORD)v100];
  v2[3] = (char *)v101;
  *(_DWORD *)v102 = 0;
  *(_OWORD *)(v102 + 8) = xmmword_100075920;
  *((_QWORD *)v102 + 3) = 8;
  *((_QWORD *)v102 + 4) = v98;
  sub_10001E5BC(
    (size_t *)v2[1],
    off_10009CD78,
    dword_10009CD80,
    (unsigned __int8)byte_10009CD85,
    byte_10009CD84,
    qword_10009CD88,
    (char *)qword_10009CD90);
  v2 = *(char ***)(a1 + 536);
  switch ( byte_10009CDA5 )
  {
    case 1:
      v103 = 2;
      break;
    case 7:
      v103 = 8;
      break;
    case 2:
      v103 = 4;
      break;
    default:
      goto LABEL_299;
  }
  v104 = v2[2];
  v105 = v2[3];
  v106 = (unsigned __int64)(v105 + 1);
  if ( v2[4] < v105 + 1 )
  {
    v104 = (char *)qvector_reserve(v2 + 2, v104, v106, 0x28u);
    v2[2] = v104;
    v105 = v2[3];
    v106 = (unsigned __int64)(v105 + 1);
  }
  v107 = &v104[40 * (_QWORD)v105];
  v2[3] = (char *)v106;
  *(_DWORD *)v107 = 0;
  *(_OWORD *)(v107 + 8) = xmmword_100075930;
  *((_QWORD *)v107 + 3) = 8;
  *((_QWORD *)v107 + 4) = v103;
  sub_10001E5BC(
    (size_t *)v2[1],
    off_10009CD98,
    dword_10009CDA0,
    (unsigned __int8)byte_10009CDA5,
    byte_10009CDA4,
    qword_10009CDA8,
    (char *)qword_10009CDB0);
  v2 = *(char ***)(a1 + 536);
  switch ( byte_10009CDC5 )
  {
    case 1:
      v108 = 2;
      break;
    case 7:
      v108 = 8;
      break;
    case 2:
      v108 = 4;
      break;
    default:
      goto LABEL_299;
  }
  v109 = v2[2];
  v110 = v2[3];
  v111 = (unsigned __int64)(v110 + 1);
  if ( v2[4] < v110 + 1 )
  {
    v109 = (char *)qvector_reserve(v2 + 2, v109, v111, 0x28u);
    v2[2] = v109;
    v110 = v2[3];
    v111 = (unsigned __int64)(v110 + 1);
  }
  v112 = &v109[40 * (_QWORD)v110];
  v2[3] = (char *)v111;
  *(_DWORD *)v112 = 0;
  *(_OWORD *)(v112 + 8) = xmmword_100075940;
  *((_QWORD *)v112 + 3) = 8;
  *((_QWORD *)v112 + 4) = v108;
  sub_10001E5BC(
    (size_t *)v2[1],
    off_10009CDB8,
    dword_10009CDC0,
    (unsigned __int8)byte_10009CDC5,
    byte_10009CDC4,
    qword_10009CDC8,
    (char *)qword_10009CDD0);
  v2 = *(char ***)(a1 + 536);
  switch ( byte_10009CDE5 )
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
      goto LABEL_299;
  }
  v114 = v2[2];
  v115 = v2[3];
  v116 = (unsigned __int64)(v115 + 1);
  if ( v2[4] < v115 + 1 )
  {
    v114 = (char *)qvector_reserve(v2 + 2, v114, v116, 0x28u);
    v2[2] = v114;
    v115 = v2[3];
    v116 = (unsigned __int64)(v115 + 1);
  }
  v117 = &v114[40 * (_QWORD)v115];
  v2[3] = (char *)v116;
  *(_DWORD *)v117 = 0;
  *(_OWORD *)(v117 + 8) = xmmword_100075950;
  *((_QWORD *)v117 + 3) = 8;
  *((_QWORD *)v117 + 4) = v113;
  sub_10001E5BC(
    (size_t *)v2[1],
    off_10009CDD8,
    dword_10009CDE0,
    (unsigned __int8)byte_10009CDE5,
    byte_10009CDE4,
    qword_10009CDE8,
    (char *)qword_10009CDF0);
  v2 = *(char ***)(a1 + 536);
  switch ( byte_10009CE05 )
  {
    case 1:
      v118 = 2;
      break;
    case 7:
      v118 = 8;
      break;
    case 2:
      v118 = 4;
      break;
    default:
      goto LABEL_299;
  }
  v119 = v2[2];
  v120 = v2[3];
  v121 = (unsigned __int64)(v120 + 1);
  if ( v2[4] < v120 + 1 )
  {
    v119 = (char *)qvector_reserve(v2 + 2, v119, v121, 0x28u);
    v2[2] = v119;
    v120 = v2[3];
    v121 = (unsigned __int64)(v120 + 1);
  }
  v122 = &v119[40 * (_QWORD)v120];
  v2[3] = (char *)v121;
  *(_DWORD *)v122 = 0;
  *(_OWORD *)(v122 + 8) = xmmword_100075960;
  *((_QWORD *)v122 + 3) = 8;
  *((_QWORD *)v122 + 4) = v118;
  sub_10001E5BC(
    (size_t *)v2[1],
    off_10009CDF8,
    dword_10009CE00,
    (unsigned __int8)byte_10009CE05,
    byte_10009CE04,
    qword_10009CE08,
    (char *)qword_10009CE10);
  v2 = *(char ***)(a1 + 536);
  switch ( byte_10009CE25 )
  {
    case 1:
      v123 = 2;
      break;
    case 7:
      v123 = 8;
      break;
    case 2:
      v123 = 4;
      break;
    default:
      goto LABEL_299;
  }
  v124 = v2[2];
  v125 = v2[3];
  v126 = (unsigned __int64)(v125 + 1);
  if ( v2[4] < v125 + 1 )
  {
    v124 = (char *)qvector_reserve(v2 + 2, v124, v126, 0x28u);
    v2[2] = v124;
    v125 = v2[3];
    v126 = (unsigned __int64)(v125 + 1);
  }
  v127 = &v124[40 * (_QWORD)v125];
  v2[3] = (char *)v126;
  *(_DWORD *)v127 = 0;
  *(_OWORD *)(v127 + 8) = xmmword_100075970;
  *((_QWORD *)v127 + 3) = 8;
  *((_QWORD *)v127 + 4) = v123;
  sub_10001E5BC(
    (size_t *)v2[1],
    off_10009CE18,
    dword_10009CE20,
    (unsigned __int8)byte_10009CE25,
    byte_10009CE24,
    qword_10009CE28,
    (char *)qword_10009CE30);
  v2 = *(char ***)(a1 + 536);
  switch ( byte_10009CE45 )
  {
    case 1:
      v128 = 2;
      break;
    case 7:
      v128 = 8;
      break;
    case 2:
      v128 = 4;
      break;
    default:
      goto LABEL_299;
  }
  v129 = v2[2];
  v130 = v2[3];
  v131 = (unsigned __int64)(v130 + 1);
  if ( v2[4] < v130 + 1 )
  {
    v129 = (char *)qvector_reserve(v2 + 2, v129, v131, 0x28u);
    v2[2] = v129;
    v130 = v2[3];
    v131 = (unsigned __int64)(v130 + 1);
  }
  v132 = &v129[40 * (_QWORD)v130];
  v2[3] = (char *)v131;
  *(_DWORD *)v132 = 0;
  *(_OWORD *)(v132 + 8) = xmmword_100075980;
  *((_QWORD *)v132 + 3) = 8;
  *((_QWORD *)v132 + 4) = v128;
  sub_10001E5BC(
    (size_t *)v2[1],
    off_10009CE38,
    dword_10009CE40,
    (unsigned __int8)byte_10009CE45,
    byte_10009CE44,
    qword_10009CE48,
    (char *)qword_10009CE50);
  v2 = *(char ***)(a1 + 536);
  switch ( byte_10009CE65 )
  {
    case 1:
      v133 = 2;
      break;
    case 7:
      v133 = 8;
      break;
    case 2:
      v133 = 4;
      break;
    default:
      goto LABEL_299;
  }
  v134 = v2[2];
  v135 = v2[3];
  v136 = (unsigned __int64)(v135 + 1);
  if ( v2[4] < v135 + 1 )
  {
    v134 = (char *)qvector_reserve(v2 + 2, v134, v136, 0x28u);
    v2[2] = v134;
    v135 = v2[3];
    v136 = (unsigned __int64)(v135 + 1);
  }
  v137 = &v134[40 * (_QWORD)v135];
  v2[3] = (char *)v136;
  *(_DWORD *)v137 = 0;
  *(_OWORD *)(v137 + 8) = xmmword_100075990;
  *((_QWORD *)v137 + 3) = 8;
  *((_QWORD *)v137 + 4) = v133;
  sub_10001E5BC(
    (size_t *)v2[1],
    off_10009CE58,
    dword_10009CE60,
    (unsigned __int8)byte_10009CE65,
    byte_10009CE64,
    qword_10009CE68,
    (char *)qword_10009CE70);
  v2 = *(char ***)(a1 + 536);
  switch ( byte_10009CE85 )
  {
    case 1:
      v138 = 2;
      break;
    case 7:
      v138 = 8;
      break;
    case 2:
      v138 = 4;
      break;
    default:
      goto LABEL_299;
  }
  v139 = v2[2];
  v140 = v2[3];
  v141 = (unsigned __int64)(v140 + 1);
  if ( v2[4] < v140 + 1 )
  {
    v139 = (char *)qvector_reserve(v2 + 2, v139, v141, 0x28u);
    v2[2] = v139;
    v140 = v2[3];
    v141 = (unsigned __int64)(v140 + 1);
  }
  v142 = &v139[40 * (_QWORD)v140];
  v2[3] = (char *)v141;
  *(_DWORD *)v142 = 0;
  *(_OWORD *)(v142 + 8) = xmmword_1000759A0;
  *((_QWORD *)v142 + 3) = 8;
  *((_QWORD *)v142 + 4) = v138;
  sub_10001E5BC(
    (size_t *)v2[1],
    off_10009CE78,
    dword_10009CE80,
    (unsigned __int8)byte_10009CE85,
    byte_10009CE84,
    qword_10009CE88,
    (char *)qword_10009CE90);
  v2 = *(char ***)(a1 + 536);
  switch ( byte_10009CEA5 )
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
      goto LABEL_299;
  }
  v144 = v2[2];
  v145 = v2[3];
  v146 = (unsigned __int64)(v145 + 1);
  if ( v2[4] < v145 + 1 )
  {
    v144 = (char *)qvector_reserve(v2 + 2, v144, v146, 0x28u);
    v2[2] = v144;
    v145 = v2[3];
    v146 = (unsigned __int64)(v145 + 1);
  }
  v147 = &v144[40 * (_QWORD)v145];
  v2[3] = (char *)v146;
  *(_DWORD *)v147 = 0;
  *(_OWORD *)(v147 + 8) = xmmword_1000759B0;
  *((_QWORD *)v147 + 3) = 8;
  *((_QWORD *)v147 + 4) = v143;
  sub_10001E5BC(
    (size_t *)v2[1],
    off_10009CE98,
    dword_10009CEA0,
    (unsigned __int8)byte_10009CEA5,
    byte_10009CEA4,
    qword_10009CEA8,
    (char *)qword_10009CEB0);
  v2 = *(char ***)(a1 + 536);
  switch ( byte_10009CEC5 )
  {
    case 1:
      v148 = 2;
      break;
    case 7:
      v148 = 8;
      break;
    case 2:
      v148 = 4;
      break;
    default:
      goto LABEL_299;
  }
  v149 = v2[2];
  v150 = v2[3];
  v151 = (unsigned __int64)(v150 + 1);
  if ( v2[4] < v150 + 1 )
  {
    v149 = (char *)qvector_reserve(v2 + 2, v149, v151, 0x28u);
    v2[2] = v149;
    v150 = v2[3];
    v151 = (unsigned __int64)(v150 + 1);
  }
  v152 = &v149[40 * (_QWORD)v150];
  v2[3] = (char *)v151;
  *(_DWORD *)v152 = 0;
  *(_OWORD *)(v152 + 8) = xmmword_1000759C0;
  *((_QWORD *)v152 + 3) = 8;
  *((_QWORD *)v152 + 4) = v148;
  sub_10001E5BC(
    (size_t *)v2[1],
    off_10009CEB8,
    dword_10009CEC0,
    (unsigned __int8)byte_10009CEC5,
    byte_10009CEC4,
    qword_10009CEC8,
    (char *)qword_10009CED0);
  v153 = *(_QWORD *)(a1 + 536);
  v2 = &off_10009CED8;
  switch ( byte_10009CEE5 )
  {
    case 1:
      v154 = 2;
      break;
    case 7:
      v154 = 8;
      break;
    case 2:
      v154 = 4;
      break;
    default:
      goto LABEL_299;
  }
  v155 = *(_QWORD **)(v153 + 16);
  v156 = *(_QWORD *)(v153 + 24);
  v157 = v156 + 1;
  if ( *(_QWORD *)(v153 + 32) >= (unsigned __int64)(v156 + 1) )
  {
    v158 = *(_QWORD *)(v153 + 24);
  }
  else
  {
    v155 = qvector_reserve((_QWORD *)(v153 + 16), v155, v157, 0x28u);
    *(_QWORD *)(v153 + 16) = v155;
    v158 = *(_QWORD *)(v153 + 24);
    v157 = v158 + 1;
  }
  v159 = &v155[5 * v158];
  *(_QWORD *)(v153 + 24) = v157;
  *(_DWORD *)v159 = 0;
  *(_OWORD *)(v159 + 1) = xmmword_1000759D0;
  v159[3] = 8;
  v159[4] = v154;
  sub_10001E5BC(
    *(size_t **)(v153 + 8),
    off_10009CED8,
    dword_10009CEE0,
    (unsigned __int8)byte_10009CEE5,
    byte_10009CEE4,
    qword_10009CEE8,
    (char *)qword_10009CEF0);
  *(_DWORD *)(a1 + 1512) = v156;
  v160 = *(_QWORD *)(a1 + 536);
  v2 = &off_10009CEF8;
  switch ( byte_10009CF05 )
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
      goto LABEL_299;
  }
  v162 = *(_QWORD **)(v160 + 16);
  v163 = *(_QWORD *)(v160 + 24);
  v164 = v163 + 1;
  if ( *(_QWORD *)(v160 + 32) >= (unsigned __int64)(v163 + 1) )
  {
    v165 = *(_QWORD *)(v160 + 24);
  }
  else
  {
    v162 = qvector_reserve((_QWORD *)(v160 + 16), v162, v164, 0x28u);
    *(_QWORD *)(v160 + 16) = v162;
    v165 = *(_QWORD *)(v160 + 24);
    v164 = v165 + 1;
  }
  v166 = &v162[5 * v165];
  *(_QWORD *)(v160 + 24) = v164;
  *(_DWORD *)v166 = 0;
  *(_OWORD *)(v166 + 1) = xmmword_1000759E0;
  v166[3] = 8;
  v166[4] = v161;
  sub_10001E5BC(
    *(size_t **)(v160 + 8),
    off_10009CEF8,
    dword_10009CF00,
    (unsigned __int8)byte_10009CF05,
    byte_10009CF04,
    qword_10009CF08,
    (char *)qword_10009CF10);
  *(_DWORD *)(a1 + 652) = v163;
  v167 = *(_QWORD *)(a1 + 536);
  v2 = &off_10009CF18;
  switch ( byte_10009CF25 )
  {
    case 1:
      v168 = 2;
      break;
    case 7:
      v168 = 8;
      break;
    case 2:
      v168 = 4;
      break;
    default:
      goto LABEL_299;
  }
  v169 = *(_QWORD **)(v167 + 16);
  v170 = *(_QWORD *)(v167 + 24);
  v171 = v170 + 1;
  if ( *(_QWORD *)(v167 + 32) >= (unsigned __int64)(v170 + 1) )
  {
    v172 = *(_QWORD *)(v167 + 24);
  }
  else
  {
    v169 = qvector_reserve((_QWORD *)(v167 + 16), v169, v171, 0x28u);
    *(_QWORD *)(v167 + 16) = v169;
    v172 = *(_QWORD *)(v167 + 24);
    v171 = v172 + 1;
  }
  v173 = &v169[5 * v172];
  *(_QWORD *)(v167 + 24) = v171;
  *(_DWORD *)v173 = 0;
  *(_OWORD *)(v173 + 1) = xmmword_1000759F0;
  v173[3] = 8;
  v173[4] = v168;
  sub_10001E5BC(
    *(size_t **)(v167 + 8),
    off_10009CF18,
    dword_10009CF20,
    (unsigned __int8)byte_10009CF25,
    byte_10009CF24,
    qword_10009CF28,
    (char *)qword_10009CF30);
  *(_DWORD *)(a1 + 656) = v170;
  v174 = *(_QWORD *)(a1 + 536);
  v2 = &off_10009CF38;
  switch ( byte_10009CF45 )
  {
    case 1:
      v175 = 2;
      break;
    case 7:
      v175 = 8;
      break;
    case 2:
      v175 = 4;
      break;
    default:
      goto LABEL_299;
  }
  v176 = *(_QWORD **)(v174 + 16);
  v177 = *(_QWORD *)(v174 + 24);
  v178 = v177 + 1;
  if ( *(_QWORD *)(v174 + 32) >= (unsigned __int64)(v177 + 1) )
  {
    v179 = *(_QWORD *)(v174 + 24);
  }
  else
  {
    v176 = qvector_reserve((_QWORD *)(v174 + 16), v176, v178, 0x28u);
    *(_QWORD *)(v174 + 16) = v176;
    v179 = *(_QWORD *)(v174 + 24);
    v178 = v179 + 1;
  }
  v180 = &v176[5 * v179];
  *(_QWORD *)(v174 + 24) = v178;
  *(_DWORD *)v180 = 0;
  *(_OWORD *)(v180 + 1) = xmmword_100075A00;
  v180[3] = 4;
  v180[4] = v175;
  sub_10001E5BC(
    *(size_t **)(v174 + 8),
    off_10009CF38,
    dword_10009CF40,
    (unsigned __int8)byte_10009CF45,
    byte_10009CF44,
    (__int64)off_10009CF48,
    (char *)qword_10009CF50);
  *(_DWORD *)(a1 + 1516) = v177;
  if ( qword_10009D358 )
  {
    v181 = 0;
    v182 = &dword_10009CF64;
    v183 = 368;
    v204 = vdupq_n_s64(0x10u);
    do
    {
      v185 = *(_QWORD *)(a1 + 536);
      v186 = *(_QWORD **)(v185 + 16);
      v187 = *(_QWORD *)(v185 + 24);
      v188 = v187 + 1;
      if ( *(_QWORD *)(v185 + 32) < (unsigned __int64)(v187 + 1) )
      {
        v186 = qvector_reserve((_QWORD *)(v185 + 16), v186, v188, 0x28u);
        *(_QWORD *)(v185 + 16) = v186;
        v187 = *(_QWORD *)(v185 + 24);
        v188 = v187 + 1;
      }
      *(_QWORD *)(v185 + 24) = v188;
      v184 = &v186[5 * v187];
      *(_DWORD *)v184 = 2;
      v184[1] = -1;
      v184[2] = v183;
      *(int64x2_t *)(v184 + 3) = v204;
      sub_10001E5BC(
        *(size_t **)(v185 + 8),
        *(const void **)(v182 - 3),
        *(v182 - 1),
        *((unsigned __int8 *)v182 + 1),
        *(_BYTE *)v182,
        *(_QWORD *)(v182 + 1),
        *(char **)(v182 + 3));
      ++v181;
      v183 += 16;
      v182 += 8;
    }
    while ( v181 < qword_10009D358 );
  }
  v189 = *(_QWORD *)(a1 + 536);
  v2 = &off_10009D360;
  switch ( byte_10009D36D )
  {
    case 1:
      v190 = 2;
      break;
    case 7:
      v190 = 8;
      break;
    case 2:
      v190 = 4;
      break;
    default:
      goto LABEL_299;
  }
  v191 = *(_QWORD **)(v189 + 16);
  v192 = *(_QWORD *)(v189 + 24);
  v193 = v192 + 1;
  if ( *(_QWORD *)(v189 + 32) < (unsigned __int64)(v192 + 1) )
  {
    v191 = qvector_reserve((_QWORD *)(v189 + 16), v191, v193, 0x28u);
    *(_QWORD *)(v189 + 16) = v191;
    v192 = *(_QWORD *)(v189 + 24);
    v193 = v192 + 1;
  }
  v194 = &v191[5 * v192];
  *(_QWORD *)(v189 + 24) = v193;
  *(_DWORD *)v194 = 0;
  *(_OWORD *)(v194 + 1) = xmmword_100075A10;
  v194[3] = 4;
  v194[4] = v190;
  sub_10001E5BC(
    *(size_t **)(v189 + 8),
    off_10009D360,
    dword_10009D368,
    (unsigned __int8)byte_10009D36D,
    byte_10009D36C,
    qword_10009D370,
    (char *)qword_10009D378);
  v2 = *(char ***)(a1 + 536);
  if ( byte_10009D38D == 1 )
  {
    v195 = 2;
  }
  else
  {
    if ( byte_10009D38D != 7 )
    {
      if ( byte_10009D38D == 2 )
      {
        v195 = 4;
        goto LABEL_296;
      }
LABEL_299:
      if ( under_debugger == 1 )
        __break(1u);
      interr(1798);
      v202 = v201;
      v203 = sub_10001C494(v2);
      operator delete(v203);
      _Unwind_Resume(v202);
    }
    v195 = 8;
  }
LABEL_296:
  v196 = v2[2];
  v197 = v2[3];
  v198 = (unsigned __int64)(v197 + 1);
  if ( v2[4] < v197 + 1 )
  {
    v196 = (char *)qvector_reserve(v2 + 2, v196, v198, 0x28u);
    v2[2] = v196;
    v197 = v2[3];
    v198 = (unsigned __int64)(v197 + 1);
  }
  v199 = &v196[40 * (_QWORD)v197];
  v2[3] = (char *)v198;
  *(_DWORD *)v199 = 0;
  *(_OWORD *)(v199 + 8) = xmmword_100075A20;
  *((_QWORD *)v199 + 3) = 4;
  *((_QWORD *)v199 + 4) = v195;
  return sub_10001E5BC(
           (size_t *)v2[1],
           off_10009D380,
           dword_10009D388,
           (unsigned __int8)byte_10009D38D,
           byte_10009D38C,
           qword_10009D390,
           (char *)qword_10009D398);
}
// 10001E158: variable 'v201' is possibly undefined
// 1000757F0: using guessed type __int128 xmmword_1000757F0;
// 100075800: using guessed type __int128 xmmword_100075800;
// 100075810: using guessed type __int128 xmmword_100075810;
// 100075820: using guessed type __int128 xmmword_100075820;
// 100075830: using guessed type __int128 xmmword_100075830;
// 100075840: using guessed type __int128 xmmword_100075840;
// 100075850: using guessed type __int128 xmmword_100075850;
// 100075860: using guessed type __int128 xmmword_100075860;
// 100075870: using guessed type __int128 xmmword_100075870;
// 100075880: using guessed type __int128 xmmword_100075880;
// 100075890: using guessed type __int128 xmmword_100075890;
// 1000758A0: using guessed type __int128 xmmword_1000758A0;
// 1000758B0: using guessed type __int128 xmmword_1000758B0;
// 1000758C0: using guessed type __int128 xmmword_1000758C0;
// 1000758D0: using guessed type __int128 xmmword_1000758D0;
// 1000758E0: using guessed type __int128 xmmword_1000758E0;
// 1000758F0: using guessed type __int128 xmmword_1000758F0;
// 100075900: using guessed type __int128 xmmword_100075900;
// 100075910: using guessed type __int128 xmmword_100075910;
// 100075920: using guessed type __int128 xmmword_100075920;
// 100075930: using guessed type __int128 xmmword_100075930;
// 100075940: using guessed type __int128 xmmword_100075940;
// 100075950: using guessed type __int128 xmmword_100075950;
// 100075960: using guessed type __int128 xmmword_100075960;
// 100075970: using guessed type __int128 xmmword_100075970;
// 100075980: using guessed type __int128 xmmword_100075980;
// 100075990: using guessed type __int128 xmmword_100075990;
// 1000759A0: using guessed type __int128 xmmword_1000759A0;
// 1000759B0: using guessed type __int128 xmmword_1000759B0;
// 1000759C0: using guessed type __int128 xmmword_1000759C0;
// 1000759D0: using guessed type __int128 xmmword_1000759D0;
// 1000759E0: using guessed type __int128 xmmword_1000759E0;
// 1000759F0: using guessed type __int128 xmmword_1000759F0;
// 100075A00: using guessed type __int128 xmmword_100075A00;
// 100075A10: using guessed type __int128 xmmword_100075A10;
// 100075A20: using guessed type __int128 xmmword_100075A20;
// 100099B58: using guessed type __int64 (__fastcall *off_100099B58)();
// 10009CAF8: using guessed type char *off_10009CAF8[3];
// 10009CB18: using guessed type char *off_10009CB18;
// 10009CB20: using guessed type int dword_10009CB20;
// 10009CB24: using guessed type char byte_10009CB24;
// 10009CB25: using guessed type char byte_10009CB25;
// 10009CB28: using guessed type __int64 qword_10009CB28;
// 10009CB30: using guessed type __int64 qword_10009CB30;
// 10009CB38: using guessed type char *off_10009CB38;
// 10009CB40: using guessed type int dword_10009CB40;
// 10009CB44: using guessed type char byte_10009CB44;
// 10009CB45: using guessed type char byte_10009CB45;
// 10009CB48: using guessed type __int64 qword_10009CB48;
// 10009CB50: using guessed type __int64 qword_10009CB50;
// 10009CB58: using guessed type char *off_10009CB58;
// 10009CB60: using guessed type int dword_10009CB60;
// 10009CB64: using guessed type char byte_10009CB64;
// 10009CB65: using guessed type char byte_10009CB65;
// 10009CB68: using guessed type __int64 qword_10009CB68;
// 10009CB70: using guessed type __int64 qword_10009CB70;
// 10009CB78: using guessed type char *off_10009CB78;
// 10009CB80: using guessed type int dword_10009CB80;
// 10009CB84: using guessed type char byte_10009CB84;
// 10009CB85: using guessed type char byte_10009CB85;
// 10009CB88: using guessed type __int64 qword_10009CB88;
// 10009CB90: using guessed type __int64 qword_10009CB90;
// 10009CB98: using guessed type char *off_10009CB98;
// 10009CBA0: using guessed type int dword_10009CBA0;
// 10009CBA4: using guessed type char byte_10009CBA4;
// 10009CBA5: using guessed type char byte_10009CBA5;
// 10009CBA8: using guessed type __int64 qword_10009CBA8;
// 10009CBB0: using guessed type __int64 qword_10009CBB0;
// 10009CBB8: using guessed type char *off_10009CBB8;
// 10009CBC0: using guessed type int dword_10009CBC0;
// 10009CBC4: using guessed type char byte_10009CBC4;
// 10009CBC5: using guessed type char byte_10009CBC5;
// 10009CBC8: using guessed type __int64 qword_10009CBC8;
// 10009CBD0: using guessed type __int64 qword_10009CBD0;
// 10009CBD8: using guessed type char *off_10009CBD8;
// 10009CBE0: using guessed type int dword_10009CBE0;
// 10009CBE4: using guessed type char byte_10009CBE4;
// 10009CBE5: using guessed type char byte_10009CBE5;
// 10009CBE8: using guessed type __int64 qword_10009CBE8;
// 10009CBF0: using guessed type __int64 qword_10009CBF0;
// 10009CBF8: using guessed type char *off_10009CBF8;
// 10009CC00: using guessed type int dword_10009CC00;
// 10009CC04: using guessed type char byte_10009CC04;
// 10009CC05: using guessed type char byte_10009CC05;
// 10009CC08: using guessed type __int64 qword_10009CC08;
// 10009CC10: using guessed type __int64 qword_10009CC10;
// 10009CC18: using guessed type char *off_10009CC18;
// 10009CC20: using guessed type int dword_10009CC20;
// 10009CC24: using guessed type char byte_10009CC24;
// 10009CC25: using guessed type char byte_10009CC25;
// 10009CC28: using guessed type __int64 qword_10009CC28;
// 10009CC30: using guessed type __int64 qword_10009CC30;
// 10009CC38: using guessed type char *off_10009CC38;
// 10009CC40: using guessed type int dword_10009CC40;
// 10009CC44: using guessed type char byte_10009CC44;
// 10009CC45: using guessed type char byte_10009CC45;
// 10009CC48: using guessed type __int64 qword_10009CC48;
// 10009CC50: using guessed type __int64 qword_10009CC50;
// 10009CC58: using guessed type char *off_10009CC58;
// 10009CC60: using guessed type int dword_10009CC60;
// 10009CC64: using guessed type char byte_10009CC64;
// 10009CC65: using guessed type char byte_10009CC65;
// 10009CC68: using guessed type __int64 qword_10009CC68;
// 10009CC70: using guessed type __int64 qword_10009CC70;
// 10009CC78: using guessed type char *off_10009CC78;
// 10009CC80: using guessed type int dword_10009CC80;
// 10009CC84: using guessed type char byte_10009CC84;
// 10009CC85: using guessed type char byte_10009CC85;
// 10009CC88: using guessed type __int64 qword_10009CC88;
// 10009CC90: using guessed type __int64 qword_10009CC90;
// 10009CC98: using guessed type char *off_10009CC98;
// 10009CCA0: using guessed type int dword_10009CCA0;
// 10009CCA4: using guessed type char byte_10009CCA4;
// 10009CCA5: using guessed type char byte_10009CCA5;
// 10009CCA8: using guessed type __int64 qword_10009CCA8;
// 10009CCB0: using guessed type __int64 qword_10009CCB0;
// 10009CCB8: using guessed type char *off_10009CCB8;
// 10009CCC0: using guessed type int dword_10009CCC0;
// 10009CCC4: using guessed type char byte_10009CCC4;
// 10009CCC5: using guessed type char byte_10009CCC5;
// 10009CCC8: using guessed type __int64 qword_10009CCC8;
// 10009CCD0: using guessed type __int64 qword_10009CCD0;
// 10009CCD8: using guessed type char *off_10009CCD8;
// 10009CCE0: using guessed type int dword_10009CCE0;
// 10009CCE4: using guessed type char byte_10009CCE4;
// 10009CCE5: using guessed type char byte_10009CCE5;
// 10009CCE8: using guessed type __int64 qword_10009CCE8;
// 10009CCF0: using guessed type __int64 qword_10009CCF0;
// 10009CCF8: using guessed type char *off_10009CCF8;
// 10009CD00: using guessed type int dword_10009CD00;
// 10009CD04: using guessed type char byte_10009CD04;
// 10009CD05: using guessed type char byte_10009CD05;
// 10009CD08: using guessed type __int64 qword_10009CD08;
// 10009CD10: using guessed type __int64 qword_10009CD10;
// 10009CD18: using guessed type char *off_10009CD18;
// 10009CD20: using guessed type int dword_10009CD20;
// 10009CD24: using guessed type char byte_10009CD24;
// 10009CD25: using guessed type char byte_10009CD25;
// 10009CD28: using guessed type __int64 qword_10009CD28;
// 10009CD30: using guessed type __int64 qword_10009CD30;
// 10009CD38: using guessed type char *off_10009CD38;
// 10009CD40: using guessed type int dword_10009CD40;
// 10009CD44: using guessed type char byte_10009CD44;
// 10009CD45: using guessed type char byte_10009CD45;
// 10009CD48: using guessed type __int64 qword_10009CD48;
// 10009CD50: using guessed type __int64 qword_10009CD50;
// 10009CD58: using guessed type char *off_10009CD58;
// 10009CD60: using guessed type int dword_10009CD60;
// 10009CD64: using guessed type char byte_10009CD64;
// 10009CD65: using guessed type char byte_10009CD65;
// 10009CD68: using guessed type __int64 qword_10009CD68;
// 10009CD70: using guessed type __int64 qword_10009CD70;
// 10009CD78: using guessed type char *off_10009CD78;
// 10009CD80: using guessed type int dword_10009CD80;
// 10009CD84: using guessed type char byte_10009CD84;
// 10009CD85: using guessed type char byte_10009CD85;
// 10009CD88: using guessed type __int64 qword_10009CD88;
// 10009CD90: using guessed type __int64 qword_10009CD90;
// 10009CD98: using guessed type char *off_10009CD98;
// 10009CDA0: using guessed type int dword_10009CDA0;
// 10009CDA4: using guessed type char byte_10009CDA4;
// 10009CDA5: using guessed type char byte_10009CDA5;
// 10009CDA8: using guessed type __int64 qword_10009CDA8;
// 10009CDB0: using guessed type __int64 qword_10009CDB0;
// 10009CDB8: using guessed type char *off_10009CDB8;
// 10009CDC0: using guessed type int dword_10009CDC0;
// 10009CDC4: using guessed type char byte_10009CDC4;
// 10009CDC5: using guessed type char byte_10009CDC5;
// 10009CDC8: using guessed type __int64 qword_10009CDC8;
// 10009CDD0: using guessed type __int64 qword_10009CDD0;
// 10009CDD8: using guessed type char *off_10009CDD8;
// 10009CDE0: using guessed type int dword_10009CDE0;
// 10009CDE4: using guessed type char byte_10009CDE4;
// 10009CDE5: using guessed type char byte_10009CDE5;
// 10009CDE8: using guessed type __int64 qword_10009CDE8;
// 10009CDF0: using guessed type __int64 qword_10009CDF0;
// 10009CDF8: using guessed type char *off_10009CDF8;
// 10009CE00: using guessed type int dword_10009CE00;
// 10009CE04: using guessed type char byte_10009CE04;
// 10009CE05: using guessed type char byte_10009CE05;
// 10009CE08: using guessed type __int64 qword_10009CE08;
// 10009CE10: using guessed type __int64 qword_10009CE10;
// 10009CE18: using guessed type char *off_10009CE18;
// 10009CE20: using guessed type int dword_10009CE20;
// 10009CE24: using guessed type char byte_10009CE24;
// 10009CE25: using guessed type char byte_10009CE25;
// 10009CE28: using guessed type __int64 qword_10009CE28;
// 10009CE30: using guessed type __int64 qword_10009CE30;
// 10009CE38: using guessed type char *off_10009CE38;
// 10009CE40: using guessed type int dword_10009CE40;
// 10009CE44: using guessed type char byte_10009CE44;
// 10009CE45: using guessed type char byte_10009CE45;
// 10009CE48: using guessed type __int64 qword_10009CE48;
// 10009CE50: using guessed type __int64 qword_10009CE50;
// 10009CE58: using guessed type char *off_10009CE58;
// 10009CE60: using guessed type int dword_10009CE60;
// 10009CE64: using guessed type char byte_10009CE64;
// 10009CE65: using guessed type char byte_10009CE65;
// 10009CE68: using guessed type __int64 qword_10009CE68;
// 10009CE70: using guessed type __int64 qword_10009CE70;
// 10009CE78: using guessed type char *off_10009CE78;
// 10009CE80: using guessed type int dword_10009CE80;
// 10009CE84: using guessed type char byte_10009CE84;
// 10009CE85: using guessed type char byte_10009CE85;
// 10009CE88: using guessed type __int64 qword_10009CE88;
// 10009CE90: using guessed type __int64 qword_10009CE90;
// 10009CE98: using guessed type char *off_10009CE98;
// 10009CEA0: using guessed type int dword_10009CEA0;
// 10009CEA4: using guessed type char byte_10009CEA4;
// 10009CEA5: using guessed type char byte_10009CEA5;
// 10009CEA8: using guessed type __int64 qword_10009CEA8;
// 10009CEB0: using guessed type __int64 qword_10009CEB0;
// 10009CEB8: using guessed type char *off_10009CEB8;
// 10009CEC0: using guessed type int dword_10009CEC0;
// 10009CEC4: using guessed type char byte_10009CEC4;
// 10009CEC5: using guessed type char byte_10009CEC5;
// 10009CEC8: using guessed type __int64 qword_10009CEC8;
// 10009CED0: using guessed type __int64 qword_10009CED0;
// 10009CED8: using guessed type char *off_10009CED8;
// 10009CEE0: using guessed type int dword_10009CEE0;
// 10009CEE4: using guessed type char byte_10009CEE4;
// 10009CEE5: using guessed type char byte_10009CEE5;
// 10009CEE8: using guessed type __int64 qword_10009CEE8;
// 10009CEF0: using guessed type __int64 qword_10009CEF0;
// 10009CEF8: using guessed type char *off_10009CEF8;
// 10009CF00: using guessed type int dword_10009CF00;
// 10009CF04: using guessed type char byte_10009CF04;
// 10009CF05: using guessed type char byte_10009CF05;
// 10009CF08: using guessed type __int64 qword_10009CF08;
// 10009CF10: using guessed type __int64 qword_10009CF10;
// 10009CF18: using guessed type char *off_10009CF18;
// 10009CF20: using guessed type int dword_10009CF20;
// 10009CF24: using guessed type char byte_10009CF24;
// 10009CF25: using guessed type char byte_10009CF25;
// 10009CF28: using guessed type __int64 qword_10009CF28;
// 10009CF30: using guessed type __int64 qword_10009CF30;
// 10009CF38: using guessed type char *off_10009CF38;
// 10009CF40: using guessed type int dword_10009CF40;
// 10009CF44: using guessed type char byte_10009CF44;
// 10009CF45: using guessed type char byte_10009CF45;
// 10009CF48: using guessed type char **off_10009CF48;
// 10009CF50: using guessed type __int64 qword_10009CF50;
// 10009CF64: using guessed type int dword_10009CF64;
// 10009D358: using guessed type __int64 qword_10009D358;
// 10009D360: using guessed type char *off_10009D360;
// 10009D368: using guessed type int dword_10009D368;
// 10009D36C: using guessed type char byte_10009D36C;
// 10009D36D: using guessed type char byte_10009D36D;
// 10009D370: using guessed type __int64 qword_10009D370;
// 10009D378: using guessed type __int64 qword_10009D378;
// 10009D380: using guessed type char *off_10009D380;
// 10009D388: using guessed type int dword_10009D388;
// 10009D38C: using guessed type char byte_10009D38C;
// 10009D38D: using guessed type char byte_10009D38D;
// 10009D390: using guessed type __int64 qword_10009D390;
// 10009D398: using guessed type __int64 qword_10009D398;
// 10009D90D: using guessed type char under_debugger;
