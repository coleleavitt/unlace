/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001E534
// Address: 0x000000010001E534

//----- (000000010001E534) ----------------------------------------------------
size_t __fastcall sub_10001E534(__int64 a1)
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
  size_t *v200; // x0
  char *v201; // x1
  int v202; // w2
  int v203; // w3
  char v204; // w4
  __int64 v205; // x5
  char *v206; // x6
  _Unwind_Exception *v208; // x0
  _Unwind_Exception *v209; // x19
  _QWORD *v210; // x0
  int64x2_t v211; // [xsp+0h] [xbp-60h]
  __int64 _68; // [xsp+68h] [xbp+8h]

  v2 = (char **)operator new(0x390u);
  *((_OWORD *)v2 + 1) = 0u;
  *((_OWORD *)v2 + 2) = 0u;
  *((_OWORD *)v2 + 3) = 0u;
  v2[8] = nullptr;
  *((_DWORD *)v2 + 18) = 1065353216;
  v2[10] = nullptr;
  v2[11] = (char *)a1;
  *v2 = (char *)&off_10009DB98;
  v2[1] = (char *)(a1 + 544);
  bzero(v2 + 12, 0x322u);
  sub_10001E030(a1 + 544, off_1000A4AF8, 1);
  *(_QWORD *)(a1 + 536) = v2;
  switch ( byte_1000A4B25 )
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
      goto LABEL_301;
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
  *(_OWORD *)(v7 + 8) = xmmword_10007AC00;
  *((_QWORD *)v7 + 3) = 8;
  *((_QWORD *)v7 + 4) = v3;
  sub_1000203F4(
    (size_t *)v2[1],
    off_1000A4B18,
    dword_1000A4B20,
    (unsigned __int8)byte_1000A4B25,
    byte_1000A4B24,
    qword_1000A4B28,
    (char *)qword_1000A4B30);
  v2 = *(char ***)(a1 + 536);
  switch ( byte_1000A4B45 )
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
      goto LABEL_301;
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
  *(_OWORD *)(v12 + 8) = xmmword_10007AC10;
  *((_QWORD *)v12 + 3) = 8;
  *((_QWORD *)v12 + 4) = v8;
  sub_1000203F4(
    (size_t *)v2[1],
    off_1000A4B38,
    dword_1000A4B40,
    (unsigned __int8)byte_1000A4B45,
    byte_1000A4B44,
    qword_1000A4B48,
    (char *)qword_1000A4B50);
  v2 = *(char ***)(a1 + 536);
  switch ( byte_1000A4B65 )
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
      goto LABEL_301;
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
  *(_OWORD *)(v17 + 8) = xmmword_10007AC20;
  *((_QWORD *)v17 + 3) = 8;
  *((_QWORD *)v17 + 4) = v13;
  sub_1000203F4(
    (size_t *)v2[1],
    off_1000A4B58,
    dword_1000A4B60,
    (unsigned __int8)byte_1000A4B65,
    byte_1000A4B64,
    qword_1000A4B68,
    (char *)qword_1000A4B70);
  v2 = *(char ***)(a1 + 536);
  switch ( byte_1000A4B85 )
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
      goto LABEL_301;
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
  *(_OWORD *)(v22 + 8) = xmmword_10007AC30;
  *((_QWORD *)v22 + 3) = 8;
  *((_QWORD *)v22 + 4) = v18;
  sub_1000203F4(
    (size_t *)v2[1],
    off_1000A4B78,
    dword_1000A4B80,
    (unsigned __int8)byte_1000A4B85,
    byte_1000A4B84,
    qword_1000A4B88,
    (char *)qword_1000A4B90);
  v2 = *(char ***)(a1 + 536);
  switch ( byte_1000A4BA5 )
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
      goto LABEL_301;
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
  *(_OWORD *)(v27 + 8) = xmmword_10007AC40;
  *((_QWORD *)v27 + 3) = 8;
  *((_QWORD *)v27 + 4) = v23;
  sub_1000203F4(
    (size_t *)v2[1],
    off_1000A4B98,
    dword_1000A4BA0,
    (unsigned __int8)byte_1000A4BA5,
    byte_1000A4BA4,
    qword_1000A4BA8,
    (char *)qword_1000A4BB0);
  v2 = *(char ***)(a1 + 536);
  switch ( byte_1000A4BC5 )
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
      goto LABEL_301;
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
  *(_OWORD *)(v32 + 8) = xmmword_10007AC50;
  *((_QWORD *)v32 + 3) = 8;
  *((_QWORD *)v32 + 4) = v28;
  sub_1000203F4(
    (size_t *)v2[1],
    off_1000A4BB8,
    dword_1000A4BC0,
    (unsigned __int8)byte_1000A4BC5,
    byte_1000A4BC4,
    qword_1000A4BC8,
    (char *)qword_1000A4BD0);
  v2 = *(char ***)(a1 + 536);
  switch ( byte_1000A4BE5 )
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
      goto LABEL_301;
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
  *(_OWORD *)(v37 + 8) = xmmword_10007AC60;
  *((_QWORD *)v37 + 3) = 8;
  *((_QWORD *)v37 + 4) = v33;
  sub_1000203F4(
    (size_t *)v2[1],
    off_1000A4BD8,
    dword_1000A4BE0,
    (unsigned __int8)byte_1000A4BE5,
    byte_1000A4BE4,
    qword_1000A4BE8,
    (char *)qword_1000A4BF0);
  v2 = *(char ***)(a1 + 536);
  switch ( byte_1000A4C05 )
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
      goto LABEL_301;
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
  *(_OWORD *)(v42 + 8) = xmmword_10007AC70;
  *((_QWORD *)v42 + 3) = 8;
  *((_QWORD *)v42 + 4) = v38;
  sub_1000203F4(
    (size_t *)v2[1],
    off_1000A4BF8,
    dword_1000A4C00,
    (unsigned __int8)byte_1000A4C05,
    byte_1000A4C04,
    qword_1000A4C08,
    (char *)qword_1000A4C10);
  v2 = *(char ***)(a1 + 536);
  switch ( byte_1000A4C25 )
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
      goto LABEL_301;
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
  *(_OWORD *)(v47 + 8) = xmmword_10007AC80;
  *((_QWORD *)v47 + 3) = 8;
  *((_QWORD *)v47 + 4) = v43;
  sub_1000203F4(
    (size_t *)v2[1],
    off_1000A4C18,
    dword_1000A4C20,
    (unsigned __int8)byte_1000A4C25,
    byte_1000A4C24,
    qword_1000A4C28,
    (char *)qword_1000A4C30);
  v2 = *(char ***)(a1 + 536);
  switch ( byte_1000A4C45 )
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
      goto LABEL_301;
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
  *(_OWORD *)(v52 + 8) = xmmword_10007AC90;
  *((_QWORD *)v52 + 3) = 8;
  *((_QWORD *)v52 + 4) = v48;
  sub_1000203F4(
    (size_t *)v2[1],
    off_1000A4C38,
    dword_1000A4C40,
    (unsigned __int8)byte_1000A4C45,
    byte_1000A4C44,
    qword_1000A4C48,
    (char *)qword_1000A4C50);
  v2 = *(char ***)(a1 + 536);
  switch ( byte_1000A4C65 )
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
      goto LABEL_301;
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
  *(_OWORD *)(v57 + 8) = xmmword_10007ACA0;
  *((_QWORD *)v57 + 3) = 8;
  *((_QWORD *)v57 + 4) = v53;
  sub_1000203F4(
    (size_t *)v2[1],
    off_1000A4C58,
    dword_1000A4C60,
    (unsigned __int8)byte_1000A4C65,
    byte_1000A4C64,
    qword_1000A4C68,
    (char *)qword_1000A4C70);
  v2 = *(char ***)(a1 + 536);
  switch ( byte_1000A4C85 )
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
      goto LABEL_301;
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
  *(_OWORD *)(v62 + 8) = xmmword_10007ACB0;
  *((_QWORD *)v62 + 3) = 8;
  *((_QWORD *)v62 + 4) = v58;
  sub_1000203F4(
    (size_t *)v2[1],
    off_1000A4C78,
    dword_1000A4C80,
    (unsigned __int8)byte_1000A4C85,
    byte_1000A4C84,
    qword_1000A4C88,
    (char *)qword_1000A4C90);
  v2 = *(char ***)(a1 + 536);
  switch ( byte_1000A4CA5 )
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
      goto LABEL_301;
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
  *(_OWORD *)(v67 + 8) = xmmword_10007ACC0;
  *((_QWORD *)v67 + 3) = 8;
  *((_QWORD *)v67 + 4) = v63;
  sub_1000203F4(
    (size_t *)v2[1],
    off_1000A4C98,
    dword_1000A4CA0,
    (unsigned __int8)byte_1000A4CA5,
    byte_1000A4CA4,
    qword_1000A4CA8,
    (char *)qword_1000A4CB0);
  v2 = *(char ***)(a1 + 536);
  switch ( byte_1000A4CC5 )
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
      goto LABEL_301;
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
  *(_OWORD *)(v72 + 8) = xmmword_10007ACD0;
  *((_QWORD *)v72 + 3) = 8;
  *((_QWORD *)v72 + 4) = v68;
  sub_1000203F4(
    (size_t *)v2[1],
    off_1000A4CB8,
    dword_1000A4CC0,
    (unsigned __int8)byte_1000A4CC5,
    byte_1000A4CC4,
    qword_1000A4CC8,
    (char *)qword_1000A4CD0);
  v2 = *(char ***)(a1 + 536);
  switch ( byte_1000A4CE5 )
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
      goto LABEL_301;
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
  *(_OWORD *)(v77 + 8) = xmmword_10007ACE0;
  *((_QWORD *)v77 + 3) = 8;
  *((_QWORD *)v77 + 4) = v73;
  sub_1000203F4(
    (size_t *)v2[1],
    off_1000A4CD8,
    dword_1000A4CE0,
    (unsigned __int8)byte_1000A4CE5,
    byte_1000A4CE4,
    qword_1000A4CE8,
    (char *)qword_1000A4CF0);
  v2 = *(char ***)(a1 + 536);
  switch ( byte_1000A4D05 )
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
      goto LABEL_301;
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
  *(_OWORD *)(v82 + 8) = xmmword_10007ACF0;
  *((_QWORD *)v82 + 3) = 8;
  *((_QWORD *)v82 + 4) = v78;
  sub_1000203F4(
    (size_t *)v2[1],
    off_1000A4CF8,
    dword_1000A4D00,
    (unsigned __int8)byte_1000A4D05,
    byte_1000A4D04,
    qword_1000A4D08,
    (char *)qword_1000A4D10);
  v2 = *(char ***)(a1 + 536);
  switch ( byte_1000A4D25 )
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
      goto LABEL_301;
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
  *(_OWORD *)(v87 + 8) = xmmword_10007AD00;
  *((_QWORD *)v87 + 3) = 8;
  *((_QWORD *)v87 + 4) = v83;
  sub_1000203F4(
    (size_t *)v2[1],
    off_1000A4D18,
    dword_1000A4D20,
    (unsigned __int8)byte_1000A4D25,
    byte_1000A4D24,
    qword_1000A4D28,
    (char *)qword_1000A4D30);
  v2 = *(char ***)(a1 + 536);
  switch ( byte_1000A4D45 )
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
      goto LABEL_301;
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
  *(_OWORD *)(v92 + 8) = xmmword_10007AD10;
  *((_QWORD *)v92 + 3) = 8;
  *((_QWORD *)v92 + 4) = v88;
  sub_1000203F4(
    (size_t *)v2[1],
    off_1000A4D38,
    dword_1000A4D40,
    (unsigned __int8)byte_1000A4D45,
    byte_1000A4D44,
    qword_1000A4D48,
    (char *)qword_1000A4D50);
  v2 = *(char ***)(a1 + 536);
  switch ( byte_1000A4D65 )
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
      goto LABEL_301;
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
  *(_OWORD *)(v97 + 8) = xmmword_10007AD20;
  *((_QWORD *)v97 + 3) = 8;
  *((_QWORD *)v97 + 4) = v93;
  sub_1000203F4(
    (size_t *)v2[1],
    off_1000A4D58,
    dword_1000A4D60,
    (unsigned __int8)byte_1000A4D65,
    byte_1000A4D64,
    qword_1000A4D68,
    (char *)qword_1000A4D70);
  v2 = *(char ***)(a1 + 536);
  switch ( byte_1000A4D85 )
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
      goto LABEL_301;
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
  *(_OWORD *)(v102 + 8) = xmmword_10007AD30;
  *((_QWORD *)v102 + 3) = 8;
  *((_QWORD *)v102 + 4) = v98;
  sub_1000203F4(
    (size_t *)v2[1],
    off_1000A4D78,
    dword_1000A4D80,
    (unsigned __int8)byte_1000A4D85,
    byte_1000A4D84,
    qword_1000A4D88,
    (char *)qword_1000A4D90);
  v2 = *(char ***)(a1 + 536);
  switch ( byte_1000A4DA5 )
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
      goto LABEL_301;
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
  *(_OWORD *)(v107 + 8) = xmmword_10007AD40;
  *((_QWORD *)v107 + 3) = 8;
  *((_QWORD *)v107 + 4) = v103;
  sub_1000203F4(
    (size_t *)v2[1],
    off_1000A4D98,
    dword_1000A4DA0,
    (unsigned __int8)byte_1000A4DA5,
    byte_1000A4DA4,
    qword_1000A4DA8,
    (char *)qword_1000A4DB0);
  v2 = *(char ***)(a1 + 536);
  switch ( byte_1000A4DC5 )
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
      goto LABEL_301;
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
  *(_OWORD *)(v112 + 8) = xmmword_10007AD50;
  *((_QWORD *)v112 + 3) = 8;
  *((_QWORD *)v112 + 4) = v108;
  sub_1000203F4(
    (size_t *)v2[1],
    off_1000A4DB8,
    dword_1000A4DC0,
    (unsigned __int8)byte_1000A4DC5,
    byte_1000A4DC4,
    qword_1000A4DC8,
    (char *)qword_1000A4DD0);
  v2 = *(char ***)(a1 + 536);
  switch ( byte_1000A4DE5 )
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
      goto LABEL_301;
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
  *(_OWORD *)(v117 + 8) = xmmword_10007AD60;
  *((_QWORD *)v117 + 3) = 8;
  *((_QWORD *)v117 + 4) = v113;
  sub_1000203F4(
    (size_t *)v2[1],
    off_1000A4DD8,
    dword_1000A4DE0,
    (unsigned __int8)byte_1000A4DE5,
    byte_1000A4DE4,
    qword_1000A4DE8,
    (char *)qword_1000A4DF0);
  v2 = *(char ***)(a1 + 536);
  switch ( byte_1000A4E05 )
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
      goto LABEL_301;
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
  *(_OWORD *)(v122 + 8) = xmmword_10007AD70;
  *((_QWORD *)v122 + 3) = 8;
  *((_QWORD *)v122 + 4) = v118;
  sub_1000203F4(
    (size_t *)v2[1],
    off_1000A4DF8,
    dword_1000A4E00,
    (unsigned __int8)byte_1000A4E05,
    byte_1000A4E04,
    qword_1000A4E08,
    (char *)qword_1000A4E10);
  v2 = *(char ***)(a1 + 536);
  switch ( byte_1000A4E25 )
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
      goto LABEL_301;
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
  *(_OWORD *)(v127 + 8) = xmmword_10007AD80;
  *((_QWORD *)v127 + 3) = 8;
  *((_QWORD *)v127 + 4) = v123;
  sub_1000203F4(
    (size_t *)v2[1],
    off_1000A4E18,
    dword_1000A4E20,
    (unsigned __int8)byte_1000A4E25,
    byte_1000A4E24,
    qword_1000A4E28,
    (char *)qword_1000A4E30);
  v2 = *(char ***)(a1 + 536);
  switch ( byte_1000A4E45 )
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
      goto LABEL_301;
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
  *(_OWORD *)(v132 + 8) = xmmword_10007AD90;
  *((_QWORD *)v132 + 3) = 8;
  *((_QWORD *)v132 + 4) = v128;
  sub_1000203F4(
    (size_t *)v2[1],
    off_1000A4E38,
    dword_1000A4E40,
    (unsigned __int8)byte_1000A4E45,
    byte_1000A4E44,
    qword_1000A4E48,
    (char *)qword_1000A4E50);
  v2 = *(char ***)(a1 + 536);
  switch ( byte_1000A4E65 )
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
      goto LABEL_301;
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
  *(_OWORD *)(v137 + 8) = xmmword_10007ADA0;
  *((_QWORD *)v137 + 3) = 8;
  *((_QWORD *)v137 + 4) = v133;
  sub_1000203F4(
    (size_t *)v2[1],
    off_1000A4E58,
    dword_1000A4E60,
    (unsigned __int8)byte_1000A4E65,
    byte_1000A4E64,
    qword_1000A4E68,
    (char *)qword_1000A4E70);
  v2 = *(char ***)(a1 + 536);
  switch ( byte_1000A4E85 )
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
      goto LABEL_301;
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
  *(_OWORD *)(v142 + 8) = xmmword_10007ADB0;
  *((_QWORD *)v142 + 3) = 8;
  *((_QWORD *)v142 + 4) = v138;
  sub_1000203F4(
    (size_t *)v2[1],
    off_1000A4E78,
    dword_1000A4E80,
    (unsigned __int8)byte_1000A4E85,
    byte_1000A4E84,
    qword_1000A4E88,
    (char *)qword_1000A4E90);
  v2 = *(char ***)(a1 + 536);
  switch ( byte_1000A4EA5 )
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
      goto LABEL_301;
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
  *(_OWORD *)(v147 + 8) = xmmword_10007ADC0;
  *((_QWORD *)v147 + 3) = 8;
  *((_QWORD *)v147 + 4) = v143;
  sub_1000203F4(
    (size_t *)v2[1],
    off_1000A4E98,
    dword_1000A4EA0,
    (unsigned __int8)byte_1000A4EA5,
    byte_1000A4EA4,
    qword_1000A4EA8,
    (char *)qword_1000A4EB0);
  v2 = *(char ***)(a1 + 536);
  switch ( byte_1000A4EC5 )
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
      goto LABEL_301;
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
  *(_OWORD *)(v152 + 8) = xmmword_10007ADD0;
  *((_QWORD *)v152 + 3) = 8;
  *((_QWORD *)v152 + 4) = v148;
  sub_1000203F4(
    (size_t *)v2[1],
    off_1000A4EB8,
    dword_1000A4EC0,
    (unsigned __int8)byte_1000A4EC5,
    byte_1000A4EC4,
    qword_1000A4EC8,
    (char *)qword_1000A4ED0);
  v153 = *(_QWORD *)(a1 + 536);
  v2 = &off_1000A4ED8;
  switch ( byte_1000A4EE5 )
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
      goto LABEL_301;
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
  *(_OWORD *)(v159 + 1) = xmmword_10007ADE0;
  v159[3] = 8;
  v159[4] = v154;
  sub_1000203F4(
    *(size_t **)(v153 + 8),
    off_1000A4ED8,
    dword_1000A4EE0,
    (unsigned __int8)byte_1000A4EE5,
    byte_1000A4EE4,
    qword_1000A4EE8,
    (char *)qword_1000A4EF0);
  *(_DWORD *)(a1 + 1512) = v156;
  v160 = *(_QWORD *)(a1 + 536);
  v2 = &off_1000A4EF8;
  switch ( byte_1000A4F05 )
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
      goto LABEL_301;
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
  *(_OWORD *)(v166 + 1) = xmmword_10007ADF0;
  v166[3] = 8;
  v166[4] = v161;
  sub_1000203F4(
    *(size_t **)(v160 + 8),
    off_1000A4EF8,
    dword_1000A4F00,
    (unsigned __int8)byte_1000A4F05,
    byte_1000A4F04,
    qword_1000A4F08,
    (char *)qword_1000A4F10);
  *(_DWORD *)(a1 + 652) = v163;
  v167 = *(_QWORD *)(a1 + 536);
  v2 = &off_1000A4F18;
  switch ( byte_1000A4F25 )
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
      goto LABEL_301;
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
  *(_OWORD *)(v173 + 1) = xmmword_10007AE00;
  v173[3] = 8;
  v173[4] = v168;
  sub_1000203F4(
    *(size_t **)(v167 + 8),
    off_1000A4F18,
    dword_1000A4F20,
    (unsigned __int8)byte_1000A4F25,
    byte_1000A4F24,
    qword_1000A4F28,
    (char *)qword_1000A4F30);
  *(_DWORD *)(a1 + 656) = v170;
  v174 = *(_QWORD *)(a1 + 536);
  v2 = &off_1000A4F38;
  switch ( byte_1000A4F45 )
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
      goto LABEL_301;
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
  *(_OWORD *)(v180 + 1) = xmmword_10007AE10;
  v180[3] = 4;
  v180[4] = v175;
  sub_1000203F4(
    *(size_t **)(v174 + 8),
    off_1000A4F38,
    dword_1000A4F40,
    (unsigned __int8)byte_1000A4F45,
    byte_1000A4F44,
    (__int64)off_1000A4F48,
    (char *)qword_1000A4F50);
  *(_DWORD *)(a1 + 1516) = v177;
  if ( qword_1000A5358 )
  {
    v181 = 0;
    v182 = &dword_1000A4F64;
    v183 = 368;
    v211 = vdupq_n_s64(0x10u);
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
      *(int64x2_t *)(v184 + 3) = v211;
      sub_1000203F4(
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
    while ( v181 < qword_1000A5358 );
  }
  v189 = *(_QWORD *)(a1 + 536);
  v2 = &off_1000A5360;
  switch ( byte_1000A536D )
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
      goto LABEL_301;
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
  *(_OWORD *)(v194 + 1) = xmmword_10007AE20;
  v194[3] = 4;
  v194[4] = v190;
  sub_1000203F4(
    *(size_t **)(v189 + 8),
    off_1000A5360,
    dword_1000A5368,
    (unsigned __int8)byte_1000A536D,
    byte_1000A536C,
    qword_1000A5370,
    (char *)qword_1000A5378);
  v2 = *(char ***)(a1 + 536);
  if ( byte_1000A538D == 1 )
  {
    v195 = 2;
  }
  else
  {
    if ( byte_1000A538D != 7 )
    {
      if ( byte_1000A538D == 2 )
      {
        v195 = 4;
        goto LABEL_296;
      }
LABEL_301:
      if ( under_debugger == 1 )
        __break(1u);
      interr(1798);
      v209 = v208;
      v210 = sub_10001E28C(v2);
      operator delete(v210);
      _Unwind_Resume(v209);
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
  *(_OWORD *)(v199 + 8) = xmmword_10007AE30;
  *((_QWORD *)v199 + 3) = 4;
  *((_QWORD *)v199 + 4) = v195;
  v200 = (size_t *)v2[1];
  v201 = off_1000A5380;
  v202 = dword_1000A5388;
  v203 = (unsigned __int8)byte_1000A538D;
  v204 = byte_1000A538C;
  v205 = qword_1000A5390;
  v206 = (char *)qword_1000A5398;
  if ( ((_68 ^ (2 * _68)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return sub_1000203F4(v200, v201, v202, v203, v204, v205, v206);
}
// 10001FE58: variable '_68' is possibly undefined
// 10001FE88: variable 'v208' is possibly undefined
// 10007AC00: using guessed type __int128 xmmword_10007AC00;
// 10007AC10: using guessed type __int128 xmmword_10007AC10;
// 10007AC20: using guessed type __int128 xmmword_10007AC20;
// 10007AC30: using guessed type __int128 xmmword_10007AC30;
// 10007AC40: using guessed type __int128 xmmword_10007AC40;
// 10007AC50: using guessed type __int128 xmmword_10007AC50;
// 10007AC60: using guessed type __int128 xmmword_10007AC60;
// 10007AC70: using guessed type __int128 xmmword_10007AC70;
// 10007AC80: using guessed type __int128 xmmword_10007AC80;
// 10007AC90: using guessed type __int128 xmmword_10007AC90;
// 10007ACA0: using guessed type __int128 xmmword_10007ACA0;
// 10007ACB0: using guessed type __int128 xmmword_10007ACB0;
// 10007ACC0: using guessed type __int128 xmmword_10007ACC0;
// 10007ACD0: using guessed type __int128 xmmword_10007ACD0;
// 10007ACE0: using guessed type __int128 xmmword_10007ACE0;
// 10007ACF0: using guessed type __int128 xmmword_10007ACF0;
// 10007AD00: using guessed type __int128 xmmword_10007AD00;
// 10007AD10: using guessed type __int128 xmmword_10007AD10;
// 10007AD20: using guessed type __int128 xmmword_10007AD20;
// 10007AD30: using guessed type __int128 xmmword_10007AD30;
// 10007AD40: using guessed type __int128 xmmword_10007AD40;
// 10007AD50: using guessed type __int128 xmmword_10007AD50;
// 10007AD60: using guessed type __int128 xmmword_10007AD60;
// 10007AD70: using guessed type __int128 xmmword_10007AD70;
// 10007AD80: using guessed type __int128 xmmword_10007AD80;
// 10007AD90: using guessed type __int128 xmmword_10007AD90;
// 10007ADA0: using guessed type __int128 xmmword_10007ADA0;
// 10007ADB0: using guessed type __int128 xmmword_10007ADB0;
// 10007ADC0: using guessed type __int128 xmmword_10007ADC0;
// 10007ADD0: using guessed type __int128 xmmword_10007ADD0;
// 10007ADE0: using guessed type __int128 xmmword_10007ADE0;
// 10007ADF0: using guessed type __int128 xmmword_10007ADF0;
// 10007AE00: using guessed type __int128 xmmword_10007AE00;
// 10007AE10: using guessed type __int128 xmmword_10007AE10;
// 10007AE20: using guessed type __int128 xmmword_10007AE20;
// 10007AE30: using guessed type __int128 xmmword_10007AE30;
// 10009DB98: using guessed type __int64 (__fastcall *off_10009DB98)();
// 1000A4AF8: using guessed type char *off_1000A4AF8[3];
// 1000A4B18: using guessed type char *off_1000A4B18;
// 1000A4B20: using guessed type int dword_1000A4B20;
// 1000A4B24: using guessed type char byte_1000A4B24;
// 1000A4B25: using guessed type char byte_1000A4B25;
// 1000A4B28: using guessed type __int64 qword_1000A4B28;
// 1000A4B30: using guessed type __int64 qword_1000A4B30;
// 1000A4B38: using guessed type char *off_1000A4B38;
// 1000A4B40: using guessed type int dword_1000A4B40;
// 1000A4B44: using guessed type char byte_1000A4B44;
// 1000A4B45: using guessed type char byte_1000A4B45;
// 1000A4B48: using guessed type __int64 qword_1000A4B48;
// 1000A4B50: using guessed type __int64 qword_1000A4B50;
// 1000A4B58: using guessed type char *off_1000A4B58;
// 1000A4B60: using guessed type int dword_1000A4B60;
// 1000A4B64: using guessed type char byte_1000A4B64;
// 1000A4B65: using guessed type char byte_1000A4B65;
// 1000A4B68: using guessed type __int64 qword_1000A4B68;
// 1000A4B70: using guessed type __int64 qword_1000A4B70;
// 1000A4B78: using guessed type char *off_1000A4B78;
// 1000A4B80: using guessed type int dword_1000A4B80;
// 1000A4B84: using guessed type char byte_1000A4B84;
// 1000A4B85: using guessed type char byte_1000A4B85;
// 1000A4B88: using guessed type __int64 qword_1000A4B88;
// 1000A4B90: using guessed type __int64 qword_1000A4B90;
// 1000A4B98: using guessed type char *off_1000A4B98;
// 1000A4BA0: using guessed type int dword_1000A4BA0;
// 1000A4BA4: using guessed type char byte_1000A4BA4;
// 1000A4BA5: using guessed type char byte_1000A4BA5;
// 1000A4BA8: using guessed type __int64 qword_1000A4BA8;
// 1000A4BB0: using guessed type __int64 qword_1000A4BB0;
// 1000A4BB8: using guessed type char *off_1000A4BB8;
// 1000A4BC0: using guessed type int dword_1000A4BC0;
// 1000A4BC4: using guessed type char byte_1000A4BC4;
// 1000A4BC5: using guessed type char byte_1000A4BC5;
// 1000A4BC8: using guessed type __int64 qword_1000A4BC8;
// 1000A4BD0: using guessed type __int64 qword_1000A4BD0;
// 1000A4BD8: using guessed type char *off_1000A4BD8;
// 1000A4BE0: using guessed type int dword_1000A4BE0;
// 1000A4BE4: using guessed type char byte_1000A4BE4;
// 1000A4BE5: using guessed type char byte_1000A4BE5;
// 1000A4BE8: using guessed type __int64 qword_1000A4BE8;
// 1000A4BF0: using guessed type __int64 qword_1000A4BF0;
// 1000A4BF8: using guessed type char *off_1000A4BF8;
// 1000A4C00: using guessed type int dword_1000A4C00;
// 1000A4C04: using guessed type char byte_1000A4C04;
// 1000A4C05: using guessed type char byte_1000A4C05;
// 1000A4C08: using guessed type __int64 qword_1000A4C08;
// 1000A4C10: using guessed type __int64 qword_1000A4C10;
// 1000A4C18: using guessed type char *off_1000A4C18;
// 1000A4C20: using guessed type int dword_1000A4C20;
// 1000A4C24: using guessed type char byte_1000A4C24;
// 1000A4C25: using guessed type char byte_1000A4C25;
// 1000A4C28: using guessed type __int64 qword_1000A4C28;
// 1000A4C30: using guessed type __int64 qword_1000A4C30;
// 1000A4C38: using guessed type char *off_1000A4C38;
// 1000A4C40: using guessed type int dword_1000A4C40;
// 1000A4C44: using guessed type char byte_1000A4C44;
// 1000A4C45: using guessed type char byte_1000A4C45;
// 1000A4C48: using guessed type __int64 qword_1000A4C48;
// 1000A4C50: using guessed type __int64 qword_1000A4C50;
// 1000A4C58: using guessed type char *off_1000A4C58;
// 1000A4C60: using guessed type int dword_1000A4C60;
// 1000A4C64: using guessed type char byte_1000A4C64;
// 1000A4C65: using guessed type char byte_1000A4C65;
// 1000A4C68: using guessed type __int64 qword_1000A4C68;
// 1000A4C70: using guessed type __int64 qword_1000A4C70;
// 1000A4C78: using guessed type char *off_1000A4C78;
// 1000A4C80: using guessed type int dword_1000A4C80;
// 1000A4C84: using guessed type char byte_1000A4C84;
// 1000A4C85: using guessed type char byte_1000A4C85;
// 1000A4C88: using guessed type __int64 qword_1000A4C88;
// 1000A4C90: using guessed type __int64 qword_1000A4C90;
// 1000A4C98: using guessed type char *off_1000A4C98;
// 1000A4CA0: using guessed type int dword_1000A4CA0;
// 1000A4CA4: using guessed type char byte_1000A4CA4;
// 1000A4CA5: using guessed type char byte_1000A4CA5;
// 1000A4CA8: using guessed type __int64 qword_1000A4CA8;
// 1000A4CB0: using guessed type __int64 qword_1000A4CB0;
// 1000A4CB8: using guessed type char *off_1000A4CB8;
// 1000A4CC0: using guessed type int dword_1000A4CC0;
// 1000A4CC4: using guessed type char byte_1000A4CC4;
// 1000A4CC5: using guessed type char byte_1000A4CC5;
// 1000A4CC8: using guessed type __int64 qword_1000A4CC8;
// 1000A4CD0: using guessed type __int64 qword_1000A4CD0;
// 1000A4CD8: using guessed type char *off_1000A4CD8;
// 1000A4CE0: using guessed type int dword_1000A4CE0;
// 1000A4CE4: using guessed type char byte_1000A4CE4;
// 1000A4CE5: using guessed type char byte_1000A4CE5;
// 1000A4CE8: using guessed type __int64 qword_1000A4CE8;
// 1000A4CF0: using guessed type __int64 qword_1000A4CF0;
// 1000A4CF8: using guessed type char *off_1000A4CF8;
// 1000A4D00: using guessed type int dword_1000A4D00;
// 1000A4D04: using guessed type char byte_1000A4D04;
// 1000A4D05: using guessed type char byte_1000A4D05;
// 1000A4D08: using guessed type __int64 qword_1000A4D08;
// 1000A4D10: using guessed type __int64 qword_1000A4D10;
// 1000A4D18: using guessed type char *off_1000A4D18;
// 1000A4D20: using guessed type int dword_1000A4D20;
// 1000A4D24: using guessed type char byte_1000A4D24;
// 1000A4D25: using guessed type char byte_1000A4D25;
// 1000A4D28: using guessed type __int64 qword_1000A4D28;
// 1000A4D30: using guessed type __int64 qword_1000A4D30;
// 1000A4D38: using guessed type char *off_1000A4D38;
// 1000A4D40: using guessed type int dword_1000A4D40;
// 1000A4D44: using guessed type char byte_1000A4D44;
// 1000A4D45: using guessed type char byte_1000A4D45;
// 1000A4D48: using guessed type __int64 qword_1000A4D48;
// 1000A4D50: using guessed type __int64 qword_1000A4D50;
// 1000A4D58: using guessed type char *off_1000A4D58;
// 1000A4D60: using guessed type int dword_1000A4D60;
// 1000A4D64: using guessed type char byte_1000A4D64;
// 1000A4D65: using guessed type char byte_1000A4D65;
// 1000A4D68: using guessed type __int64 qword_1000A4D68;
// 1000A4D70: using guessed type __int64 qword_1000A4D70;
// 1000A4D78: using guessed type char *off_1000A4D78;
// 1000A4D80: using guessed type int dword_1000A4D80;
// 1000A4D84: using guessed type char byte_1000A4D84;
// 1000A4D85: using guessed type char byte_1000A4D85;
// 1000A4D88: using guessed type __int64 qword_1000A4D88;
// 1000A4D90: using guessed type __int64 qword_1000A4D90;
// 1000A4D98: using guessed type char *off_1000A4D98;
// 1000A4DA0: using guessed type int dword_1000A4DA0;
// 1000A4DA4: using guessed type char byte_1000A4DA4;
// 1000A4DA5: using guessed type char byte_1000A4DA5;
// 1000A4DA8: using guessed type __int64 qword_1000A4DA8;
// 1000A4DB0: using guessed type __int64 qword_1000A4DB0;
// 1000A4DB8: using guessed type char *off_1000A4DB8;
// 1000A4DC0: using guessed type int dword_1000A4DC0;
// 1000A4DC4: using guessed type char byte_1000A4DC4;
// 1000A4DC5: using guessed type char byte_1000A4DC5;
// 1000A4DC8: using guessed type __int64 qword_1000A4DC8;
// 1000A4DD0: using guessed type __int64 qword_1000A4DD0;
// 1000A4DD8: using guessed type char *off_1000A4DD8;
// 1000A4DE0: using guessed type int dword_1000A4DE0;
// 1000A4DE4: using guessed type char byte_1000A4DE4;
// 1000A4DE5: using guessed type char byte_1000A4DE5;
// 1000A4DE8: using guessed type __int64 qword_1000A4DE8;
// 1000A4DF0: using guessed type __int64 qword_1000A4DF0;
// 1000A4DF8: using guessed type char *off_1000A4DF8;
// 1000A4E00: using guessed type int dword_1000A4E00;
// 1000A4E04: using guessed type char byte_1000A4E04;
// 1000A4E05: using guessed type char byte_1000A4E05;
// 1000A4E08: using guessed type __int64 qword_1000A4E08;
// 1000A4E10: using guessed type __int64 qword_1000A4E10;
// 1000A4E18: using guessed type char *off_1000A4E18;
// 1000A4E20: using guessed type int dword_1000A4E20;
// 1000A4E24: using guessed type char byte_1000A4E24;
// 1000A4E25: using guessed type char byte_1000A4E25;
// 1000A4E28: using guessed type __int64 qword_1000A4E28;
// 1000A4E30: using guessed type __int64 qword_1000A4E30;
// 1000A4E38: using guessed type char *off_1000A4E38;
// 1000A4E40: using guessed type int dword_1000A4E40;
// 1000A4E44: using guessed type char byte_1000A4E44;
// 1000A4E45: using guessed type char byte_1000A4E45;
// 1000A4E48: using guessed type __int64 qword_1000A4E48;
// 1000A4E50: using guessed type __int64 qword_1000A4E50;
// 1000A4E58: using guessed type char *off_1000A4E58;
// 1000A4E60: using guessed type int dword_1000A4E60;
// 1000A4E64: using guessed type char byte_1000A4E64;
// 1000A4E65: using guessed type char byte_1000A4E65;
// 1000A4E68: using guessed type __int64 qword_1000A4E68;
// 1000A4E70: using guessed type __int64 qword_1000A4E70;
// 1000A4E78: using guessed type char *off_1000A4E78;
// 1000A4E80: using guessed type int dword_1000A4E80;
// 1000A4E84: using guessed type char byte_1000A4E84;
// 1000A4E85: using guessed type char byte_1000A4E85;
// 1000A4E88: using guessed type __int64 qword_1000A4E88;
// 1000A4E90: using guessed type __int64 qword_1000A4E90;
// 1000A4E98: using guessed type char *off_1000A4E98;
// 1000A4EA0: using guessed type int dword_1000A4EA0;
// 1000A4EA4: using guessed type char byte_1000A4EA4;
// 1000A4EA5: using guessed type char byte_1000A4EA5;
// 1000A4EA8: using guessed type __int64 qword_1000A4EA8;
// 1000A4EB0: using guessed type __int64 qword_1000A4EB0;
// 1000A4EB8: using guessed type char *off_1000A4EB8;
// 1000A4EC0: using guessed type int dword_1000A4EC0;
// 1000A4EC4: using guessed type char byte_1000A4EC4;
// 1000A4EC5: using guessed type char byte_1000A4EC5;
// 1000A4EC8: using guessed type __int64 qword_1000A4EC8;
// 1000A4ED0: using guessed type __int64 qword_1000A4ED0;
// 1000A4ED8: using guessed type char *off_1000A4ED8;
// 1000A4EE0: using guessed type int dword_1000A4EE0;
// 1000A4EE4: using guessed type char byte_1000A4EE4;
// 1000A4EE5: using guessed type char byte_1000A4EE5;
// 1000A4EE8: using guessed type __int64 qword_1000A4EE8;
// 1000A4EF0: using guessed type __int64 qword_1000A4EF0;
// 1000A4EF8: using guessed type char *off_1000A4EF8;
// 1000A4F00: using guessed type int dword_1000A4F00;
// 1000A4F04: using guessed type char byte_1000A4F04;
// 1000A4F05: using guessed type char byte_1000A4F05;
// 1000A4F08: using guessed type __int64 qword_1000A4F08;
// 1000A4F10: using guessed type __int64 qword_1000A4F10;
// 1000A4F18: using guessed type char *off_1000A4F18;
// 1000A4F20: using guessed type int dword_1000A4F20;
// 1000A4F24: using guessed type char byte_1000A4F24;
// 1000A4F25: using guessed type char byte_1000A4F25;
// 1000A4F28: using guessed type __int64 qword_1000A4F28;
// 1000A4F30: using guessed type __int64 qword_1000A4F30;
// 1000A4F38: using guessed type char *off_1000A4F38;
// 1000A4F40: using guessed type int dword_1000A4F40;
// 1000A4F44: using guessed type char byte_1000A4F44;
// 1000A4F45: using guessed type char byte_1000A4F45;
// 1000A4F48: using guessed type char **off_1000A4F48;
// 1000A4F50: using guessed type __int64 qword_1000A4F50;
// 1000A4F64: using guessed type int dword_1000A4F64;
// 1000A5358: using guessed type __int64 qword_1000A5358;
// 1000A5360: using guessed type char *off_1000A5360;
// 1000A5368: using guessed type int dword_1000A5368;
// 1000A536C: using guessed type char byte_1000A536C;
// 1000A536D: using guessed type char byte_1000A536D;
// 1000A5370: using guessed type __int64 qword_1000A5370;
// 1000A5378: using guessed type __int64 qword_1000A5378;
// 1000A5380: using guessed type char *off_1000A5380;
// 1000A5388: using guessed type int dword_1000A5388;
// 1000A538C: using guessed type char byte_1000A538C;
// 1000A538D: using guessed type char byte_1000A538D;
// 1000A5390: using guessed type __int64 qword_1000A5390;
// 1000A5398: using guessed type __int64 qword_1000A5398;
// 1000A590D: using guessed type char under_debugger;
