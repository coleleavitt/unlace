/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_23EBC
// Address: 0x00023EBC

//----- (00023EBC) --------------------------------------------------------
int __fastcall sub_23EBC(_DWORD *a1)
{
  void *v2; // r5
  int v3; // r0
  int v4; // r4
  char **v5; // r0
  int v6; // r1
  unsigned int v7; // r2
  char *v8; // r0
  int v9; // r1
  char *v10; // r0
  int *v11; // r6
  int v12; // r5
  char **v13; // r0
  int v14; // r1
  unsigned int v15; // r2
  char *v16; // r0
  int v17; // r1
  char *v18; // r0
  int *v19; // r7
  int v20; // r5
  char **v21; // r0
  int v22; // r1
  unsigned int v23; // r2
  char *v24; // r0
  int v25; // r1
  char *v26; // r0
  int *v27; // r6
  int v28; // r5
  char **v29; // r0
  int v30; // r1
  unsigned int v31; // r2
  char *v32; // r0
  int v33; // r1
  char *v34; // r0
  int *v35; // r6
  int v36; // r5
  char **v37; // r0
  int v38; // r1
  unsigned int v39; // r2
  char *v40; // r0
  int v41; // r1
  char *v42; // r0
  int *v43; // r6
  int v44; // r5
  char **v45; // r0
  int v46; // r1
  unsigned int v47; // r2
  char *v48; // r0
  int v49; // r1
  char *v50; // r0
  int *v51; // r5
  int v52; // r7
  char **v53; // r0
  int v54; // r1
  unsigned int v55; // r2
  char *v56; // r0
  int v57; // r1
  char *v58; // r0
  int *v59; // r5
  int v60; // r7
  char **v61; // r0
  int v62; // r1
  unsigned int v63; // r2
  char *v64; // r0
  int v65; // r1
  char *v66; // r0
  int *v67; // r5
  int v68; // r7
  char **v69; // r0
  int v70; // r1
  unsigned int v71; // r2
  char *v72; // r0
  int v73; // r1
  char *v74; // r0
  int *v75; // r5
  int v76; // r7
  char **v77; // r0
  int v78; // r1
  unsigned int v79; // r2
  char *v80; // r0
  int v81; // r1
  char *v82; // r0
  int *v83; // r5
  int v84; // r7
  char **v85; // r0
  int v86; // r1
  unsigned int v87; // r2
  char *v88; // r0
  int v89; // r1
  char *v90; // r0
  int *v91; // r5
  int v92; // r7
  char **v93; // r0
  int v94; // r1
  unsigned int v95; // r2
  char *v96; // r0
  int v97; // r1
  char *v98; // r0
  int *v99; // r4
  int v100; // r7
  char **v101; // r0
  int v102; // r1
  unsigned int v103; // r2
  char *v104; // r0
  int v105; // r1
  char *v106; // r0
  int *v107; // r5
  int v108; // r7
  char **v109; // r0
  unsigned int v110; // r2
  char *v111; // r0
  int v112; // r1
  int v113; // r1
  char *v114; // r0
  int *v115; // r5
  int v116; // r7
  char **v117; // r0
  unsigned int v118; // r2
  char *v119; // r0
  int v120; // r1
  int v121; // r1
  char *v122; // r0
  int *v123; // r5
  int v124; // r7
  char **v125; // r0
  unsigned int v126; // r2
  char *v127; // r0
  int v128; // r1
  int v129; // r1
  char *v130; // r0
  int *v131; // r5
  int v132; // r7
  char **v133; // r0
  unsigned int v134; // r2
  char *v135; // r0
  int v136; // r1
  int v137; // r1
  char *v138; // r0
  char **v139; // r5
  int *v140; // r6
  int v141; // r4
  int v142; // r1
  char **v143; // r0
  int v144; // r1
  unsigned int v145; // r2
  char *v146; // r0
  int v147; // r1
  char *v148; // r0
  int v149; // r5
  _DWORD *v150; // r0
  int v151; // r1
  unsigned int v152; // r2
  _DWORD *v153; // r0
  _DWORD *v154; // r0
  int **v156; // [sp+28h] [bp-14h]
  _DWORD *v157; // [sp+30h] [bp-Ch]
  int v158; // [sp+38h] [bp-4h]
  int v159; // [sp+38h] [bp-4h]
  int v160; // [sp+38h] [bp-4h]
  int v161; // [sp+38h] [bp-4h]
  int v162; // [sp+38h] [bp-4h]

  v2 = operator new(0x188u);
  v3 = sub_23BCC((int)v2, (int)(a1 + 70));
  a1[(_DWORD)&dword_44 + 1] = v2;
  v156 = (int **)&a1[(_DWORD)&dword_44 + 1];
  v4 = 2;
  if ( byte_DD6AD != 1 )
  {
    if ( byte_DD6AD == 7 )
    {
      v4 = 8;
    }
    else
    {
      if ( byte_DD6AD != 2 )
        sub_24860();
      v4 = 4;
    }
  }
  v5 = (char **)(v3 + 8);
  v6 = *((_DWORD *)v2 + 3);
  v7 = v6 + 1;
  v157 = a1;
  if ( *((_DWORD *)v2 + 4) >= (unsigned int)(v6 + 1) )
  {
    v8 = *v5;
  }
  else
  {
    v8 = (char *)qvector_reserve((int)v5, *((void **)v2 + 2), v7, 0x14u);
    *((_DWORD *)v2 + 2) = v8;
    v6 = *((_DWORD *)v2 + 3);
    v7 = v6 + 1;
  }
  *((_DWORD *)v2 + 3) = v7;
  v9 = 20 * v6;
  *(_DWORD *)&v8[v9] = 0;
  v10 = &v8[v9];
  *((_DWORD *)v10 + 1) = -1;
  v10 += 8;
  *(_DWORD *)v10 = 48;
  *((_DWORD *)v10 + 1) = 4;
  *((_DWORD *)v10 + 2) = v4;
  sub_2691C(
    *((_DWORD *)v2 + 1),
    off_DD6A4,
    dword_DD6A8,
    (unsigned __int8)byte_DD6AD,
    byte_DD6AC,
    dword_DD6B0,
    dword_DD6B4);
  v11 = *v156;
  v12 = 2;
  if ( byte_DD6C1 != 1 )
  {
    if ( byte_DD6C1 == 7 )
    {
      v12 = 8;
    }
    else
    {
      if ( byte_DD6C1 != 2 )
        sub_24860();
      v12 = 4;
    }
  }
  v13 = (char **)(v11 + 2);
  v14 = v11[3];
  v15 = v14 + 1;
  if ( v11[4] >= (unsigned int)(v14 + 1) )
  {
    v16 = *v13;
  }
  else
  {
    v16 = (char *)qvector_reserve((int)v13, (void *)v11[2], v15, 0x14u);
    v11[2] = (int)v16;
    v14 = v11[3];
    v15 = v14 + 1;
  }
  v11[3] = v15;
  v17 = 20 * v14;
  *(_DWORD *)&v16[v17] = 0;
  v18 = &v16[v17];
  *((_DWORD *)v18 + 1) = -1;
  *((_DWORD *)v18 + 2) = 52;
  *((_DWORD *)v18 + 3) = 4;
  *((_DWORD *)v18 + 4) = v12;
  sub_2691C(v11[1], off_DD6B8, dword_DD6BC, (unsigned __int8)byte_DD6C1, byte_DD6C0, dword_DD6C4, dword_DD6C8);
  v19 = *v156;
  v20 = 2;
  if ( byte_DD6D5 != 1 )
  {
    if ( byte_DD6D5 == 7 )
    {
      v20 = 8;
    }
    else
    {
      if ( byte_DD6D5 != 2 )
        sub_24860();
      v20 = 4;
    }
  }
  v21 = (char **)(v19 + 2);
  v22 = v19[3];
  v23 = v22 + 1;
  if ( v19[4] >= (unsigned int)(v22 + 1) )
  {
    v24 = *v21;
  }
  else
  {
    v24 = (char *)qvector_reserve((int)v21, (void *)v19[2], v23, 0x14u);
    v19[2] = (int)v24;
    v22 = v19[3];
    v23 = v22 + 1;
  }
  v19[3] = v23;
  v25 = 20 * v22;
  *(_DWORD *)&v24[v25] = 0;
  v26 = &v24[v25];
  *((_DWORD *)v26 + 1) = -1;
  *((_DWORD *)v26 + 2) = 56;
  *((_DWORD *)v26 + 3) = 4;
  *((_DWORD *)v26 + 4) = v20;
  sub_2691C(v19[1], off_DD6CC, dword_DD6D0, (unsigned __int8)byte_DD6D5, byte_DD6D4, dword_DD6D8, dword_DD6DC);
  v27 = *v156;
  v28 = 2;
  if ( byte_DD6E9 != 1 )
  {
    if ( byte_DD6E9 == 7 )
    {
      v28 = 8;
    }
    else
    {
      if ( byte_DD6E9 != 2 )
        goto LABEL_31;
      v28 = 4;
    }
  }
  v29 = (char **)(v27 + 2);
  v30 = v27[3];
  v31 = v30 + 1;
  if ( v27[4] >= (unsigned int)(v30 + 1) )
  {
    v32 = *v29;
  }
  else
  {
    v32 = (char *)qvector_reserve((int)v29, (void *)v27[2], v31, 0x14u);
    v27[2] = (int)v32;
    v30 = v27[3];
    v31 = v30 + 1;
  }
  v27[3] = v31;
  v33 = 20 * v30;
  *(_DWORD *)&v32[v33] = 0;
  v34 = &v32[v33];
  *((_DWORD *)v34 + 1) = -1;
  *((_DWORD *)v34 + 2) = 60;
  *((_DWORD *)v34 + 3) = 4;
  *((_DWORD *)v34 + 4) = v28;
  sub_2691C(v27[1], off_DD6E0, dword_DD6E4, (unsigned __int8)byte_DD6E9, byte_DD6E8, dword_DD6EC, dword_DD6F0);
  v35 = *v156;
  v36 = 2;
  if ( byte_DD6FD != 1 )
  {
    if ( byte_DD6FD == 7 )
    {
      v36 = 8;
    }
    else
    {
      if ( byte_DD6FD != 2 )
        goto LABEL_31;
      v36 = 4;
    }
  }
  v37 = (char **)(v35 + 2);
  v38 = v35[3];
  v39 = v38 + 1;
  if ( v35[4] >= (unsigned int)(v38 + 1) )
  {
    v40 = *v37;
  }
  else
  {
    v40 = (char *)qvector_reserve((int)v37, (void *)v35[2], v39, 0x14u);
    v35[2] = (int)v40;
    v38 = v35[3];
    v39 = v38 + 1;
  }
  v35[3] = v39;
  v41 = 20 * v38;
  *(_DWORD *)&v40[v41] = 0;
  v42 = &v40[v41];
  *((_DWORD *)v42 + 1) = -1;
  *((_DWORD *)v42 + 2) = 64;
  *((_DWORD *)v42 + 3) = 4;
  *((_DWORD *)v42 + 4) = v36;
  sub_2691C(v35[1], off_DD6F4, dword_DD6F8, (unsigned __int8)byte_DD6FD, byte_DD6FC, dword_DD700, dword_DD704);
  v43 = *v156;
  v44 = 2;
  if ( byte_DD711 != 1 )
  {
    if ( byte_DD711 == 7 )
    {
      v44 = 8;
    }
    else
    {
      if ( byte_DD711 != 2 )
        goto LABEL_31;
      v44 = 4;
    }
  }
  v45 = (char **)(v43 + 2);
  v46 = v43[3];
  v47 = v46 + 1;
  if ( v43[4] >= (unsigned int)(v46 + 1) )
  {
    v48 = *v45;
  }
  else
  {
    v48 = (char *)qvector_reserve((int)v45, (void *)v43[2], v47, 0x14u);
    v43[2] = (int)v48;
    v46 = v43[3];
    v47 = v46 + 1;
  }
  v43[3] = v47;
  v49 = 20 * v46;
  *(_DWORD *)&v48[v49] = 0;
  v50 = &v48[v49];
  *((_DWORD *)v50 + 1) = -1;
  *((_DWORD *)v50 + 2) = &dword_44;
  *((_DWORD *)v50 + 3) = 4;
  *((_DWORD *)v50 + 4) = v44;
  sub_2691C(v43[1], off_DD708, dword_DD70C, (unsigned __int8)byte_DD711, byte_DD710, dword_DD714, dword_DD718);
  v51 = *v156;
  v52 = 2;
  if ( byte_DD725 != 1 )
  {
    if ( byte_DD725 == 7 )
    {
      v52 = 8;
    }
    else
    {
      if ( byte_DD725 != 2 )
        goto LABEL_31;
      v52 = 4;
    }
  }
  v53 = (char **)(v51 + 2);
  v54 = v51[3];
  v55 = v54 + 1;
  if ( v51[4] >= (unsigned int)(v54 + 1) )
  {
    v56 = *v53;
  }
  else
  {
    v56 = (char *)qvector_reserve((int)v53, (void *)v51[2], v55, 0x14u);
    v51[2] = (int)v56;
    v54 = v51[3];
    v55 = v54 + 1;
  }
  v51[3] = v55;
  v57 = 20 * v54;
  *(_DWORD *)&v56[v57] = 0;
  v58 = &v56[v57];
  *((_DWORD *)v58 + 1) = -1;
  *((_DWORD *)v58 + 2) = 72;
  *((_DWORD *)v58 + 3) = 4;
  *((_DWORD *)v58 + 4) = v52;
  sub_2691C(v51[1], off_DD71C, dword_DD720, (unsigned __int8)byte_DD725, byte_DD724, dword_DD728, dword_DD72C);
  v59 = *v156;
  v60 = 2;
  if ( byte_DD739 != 1 )
  {
    if ( byte_DD739 == 7 )
    {
      v60 = 8;
    }
    else
    {
      if ( byte_DD739 != 2 )
        goto LABEL_31;
      v60 = 4;
    }
  }
  v61 = (char **)(v59 + 2);
  v62 = v59[3];
  v63 = v62 + 1;
  if ( v59[4] >= (unsigned int)(v62 + 1) )
  {
    v64 = *v61;
  }
  else
  {
    v64 = (char *)qvector_reserve((int)v61, (void *)v59[2], v63, 0x14u);
    v59[2] = (int)v64;
    v62 = v59[3];
    v63 = v62 + 1;
  }
  v59[3] = v63;
  v65 = 20 * v62;
  *(_DWORD *)&v64[v65] = 0;
  v66 = &v64[v65];
  *((_DWORD *)v66 + 1) = -1;
  *((_DWORD *)v66 + 2) = 76;
  *((_DWORD *)v66 + 3) = 4;
  *((_DWORD *)v66 + 4) = v60;
  sub_2691C(v59[1], off_DD730, dword_DD734, (unsigned __int8)byte_DD739, byte_DD738, dword_DD73C, dword_DD740);
  v67 = *v156;
  v68 = 2;
  if ( byte_DD74D != 1 )
  {
    if ( byte_DD74D == 7 )
    {
      v68 = 8;
    }
    else
    {
      if ( byte_DD74D != 2 )
        goto LABEL_31;
      v68 = 4;
    }
  }
  v69 = (char **)(v67 + 2);
  v70 = v67[3];
  v71 = v70 + 1;
  if ( v67[4] >= (unsigned int)(v70 + 1) )
  {
    v72 = *v69;
  }
  else
  {
    v72 = (char *)qvector_reserve((int)v69, (void *)v67[2], v71, 0x14u);
    v67[2] = (int)v72;
    v70 = v67[3];
    v71 = v70 + 1;
  }
  v67[3] = v71;
  v73 = 20 * v70;
  *(_DWORD *)&v72[v73] = 0;
  v74 = &v72[v73];
  *((_DWORD *)v74 + 1) = -1;
  *((_DWORD *)v74 + 2) = 80;
  *((_DWORD *)v74 + 3) = 4;
  *((_DWORD *)v74 + 4) = v68;
  sub_2691C(v67[1], off_DD744, dword_DD748, (unsigned __int8)byte_DD74D, byte_DD74C, dword_DD750, dword_DD754);
  v75 = *v156;
  v76 = 2;
  if ( byte_DD761 != 1 )
  {
    if ( byte_DD761 == 7 )
    {
      v76 = 8;
    }
    else
    {
      if ( byte_DD761 != 2 )
        goto LABEL_31;
      v76 = 4;
    }
  }
  v77 = (char **)(v75 + 2);
  v78 = v75[3];
  v79 = v78 + 1;
  if ( v75[4] >= (unsigned int)(v78 + 1) )
  {
    v80 = *v77;
  }
  else
  {
    v80 = (char *)qvector_reserve((int)v77, (void *)v75[2], v79, 0x14u);
    v75[2] = (int)v80;
    v78 = v75[3];
    v79 = v78 + 1;
  }
  v75[3] = v79;
  v81 = 20 * v78;
  *(_DWORD *)&v80[v81] = 0;
  v82 = &v80[v81];
  *((_DWORD *)v82 + 1) = -1;
  *((_DWORD *)v82 + 2) = 84;
  *((_DWORD *)v82 + 3) = 4;
  *((_DWORD *)v82 + 4) = v76;
  sub_2691C(v75[1], off_DD758, dword_DD75C, (unsigned __int8)byte_DD761, byte_DD760, dword_DD764, dword_DD768);
  v83 = *v156;
  v84 = 2;
  if ( byte_DD775 != 1 )
  {
    if ( byte_DD775 == 7 )
    {
      v84 = 8;
    }
    else
    {
      if ( byte_DD775 != 2 )
        goto LABEL_31;
      v84 = 4;
    }
  }
  v85 = (char **)(v83 + 2);
  v86 = v83[3];
  v87 = v86 + 1;
  if ( v83[4] >= (unsigned int)(v86 + 1) )
  {
    v88 = *v85;
  }
  else
  {
    v88 = (char *)qvector_reserve((int)v85, (void *)v83[2], v87, 0x14u);
    v83[2] = (int)v88;
    v86 = v83[3];
    v87 = v86 + 1;
  }
  v83[3] = v87;
  v89 = 20 * v86;
  *(_DWORD *)&v88[v89] = 0;
  v90 = &v88[v89];
  *((_DWORD *)v90 + 1) = -1;
  *((_DWORD *)v90 + 2) = &dword_58;
  *((_DWORD *)v90 + 3) = 4;
  *((_DWORD *)v90 + 4) = v84;
  sub_2691C(v83[1], off_DD76C, dword_DD770, (unsigned __int8)byte_DD775, byte_DD774, dword_DD778, dword_DD77C);
  v91 = *v156;
  v92 = 2;
  if ( byte_DD789 != 1 )
  {
    if ( byte_DD789 == 7 )
    {
      v92 = 8;
    }
    else
    {
      if ( byte_DD789 != 2 )
        goto LABEL_31;
      v92 = 4;
    }
  }
  v93 = (char **)(v91 + 2);
  v94 = v91[3];
  v95 = v94 + 1;
  if ( v91[4] >= (unsigned int)(v94 + 1) )
  {
    v96 = *v93;
  }
  else
  {
    v96 = (char *)qvector_reserve((int)v93, (void *)v91[2], v95, 0x14u);
    v91[2] = (int)v96;
    v94 = v91[3];
    v95 = v94 + 1;
  }
  v91[3] = v95;
  v97 = 20 * v94;
  *(_DWORD *)&v96[v97] = 0;
  v98 = &v96[v97];
  *((_DWORD *)v98 + 1) = -1;
  *((_DWORD *)v98 + 2) = 92;
  *((_DWORD *)v98 + 3) = 4;
  *((_DWORD *)v98 + 4) = v92;
  sub_2691C(v91[1], off_DD780, dword_DD784, (unsigned __int8)byte_DD789, byte_DD788, dword_DD78C, dword_DD790);
  v99 = *v156;
  v100 = 2;
  if ( byte_DD79D != 1 )
  {
    if ( byte_DD79D == 7 )
    {
      v100 = 8;
    }
    else
    {
      if ( byte_DD79D != 2 )
        goto LABEL_31;
      v100 = 4;
    }
  }
  v101 = (char **)(v99 + 2);
  v102 = v99[3];
  v103 = v102 + 1;
  if ( v99[4] >= (unsigned int)(v102 + 1) )
  {
    v104 = *v101;
  }
  else
  {
    v104 = (char *)qvector_reserve((int)v101, (void *)v99[2], v103, 0x14u);
    v99[2] = (int)v104;
    v102 = v99[3];
    v103 = v102 + 1;
  }
  v99[3] = v103;
  v105 = 20 * v102;
  *(_DWORD *)&v104[v105] = 0;
  v106 = &v104[v105];
  *((_DWORD *)v106 + 1) = -1;
  *((_DWORD *)v106 + 2) = 96;
  *((_DWORD *)v106 + 3) = 4;
  *((_DWORD *)v106 + 4) = v100;
  sub_2691C(v99[1], off_DD794, dword_DD798, (unsigned __int8)byte_DD79D, byte_DD79C, dword_DD7A0, dword_DD7A4);
  v107 = *v156;
  v108 = 2;
  if ( byte_DD7B5 != 1 )
  {
    if ( byte_DD7B5 == 7 )
    {
      v108 = 8;
    }
    else
    {
      if ( byte_DD7B5 != 2 )
        goto LABEL_31;
      v108 = 4;
    }
  }
  v109 = (char **)(v107 + 2);
  v110 = v107[3] + 1;
  v158 = v107[3];
  if ( v107[4] >= v110 )
  {
    v111 = *v109;
    v112 = v107[3];
  }
  else
  {
    v111 = (char *)qvector_reserve((int)v109, (void *)v107[2], v110, 0x14u);
    v107[2] = (int)v111;
    v112 = v107[3];
    v110 = v112 + 1;
  }
  v107[3] = v110;
  v113 = 20 * v112;
  *(_DWORD *)&v111[v113] = 0;
  v114 = &v111[v113];
  *((_DWORD *)v114 + 1) = -1;
  v114 += 8;
  *(_DWORD *)v114 = 100;
  *((_DWORD *)v114 + 1) = 4;
  *((_DWORD *)v114 + 2) = v108;
  sub_2691C(v107[1], off_DD7AC, dword_DD7B0, (unsigned __int8)byte_DD7B5, byte_DD7B4, dword_DD7B8, dword_DD7BC);
  v157[84] = v158;
  v115 = *v156;
  v116 = 2;
  if ( byte_DD7C9 != 1 )
  {
    if ( byte_DD7C9 == 7 )
    {
      v116 = 8;
    }
    else
    {
      if ( byte_DD7C9 != 2 )
        goto LABEL_31;
      v116 = 4;
    }
  }
  v117 = (char **)(v115 + 2);
  v118 = v115[3] + 1;
  v159 = v115[3];
  if ( v115[4] >= v118 )
  {
    v119 = *v117;
    v120 = v115[3];
  }
  else
  {
    v119 = (char *)qvector_reserve((int)v117, (void *)v115[2], v118, 0x14u);
    v115[2] = (int)v119;
    v120 = v115[3];
    v118 = v120 + 1;
  }
  v115[3] = v118;
  v121 = 20 * v120;
  *(_DWORD *)&v119[v121] = 0;
  v122 = &v119[v121];
  *((_DWORD *)v122 + 1) = -1;
  v122 += 8;
  *(_DWORD *)v122 = 104;
  *((_DWORD *)v122 + 1) = 4;
  *((_DWORD *)v122 + 2) = v116;
  sub_2691C(v115[1], off_DD7C0, dword_DD7C4, (unsigned __int8)byte_DD7C9, byte_DD7C8, dword_DD7CC, dword_DD7D0);
  v157[4 * ((_DWORD)&word_30 + 1)] = v159;
  v123 = *v156;
  v124 = 2;
  if ( byte_DD7DD != 1 )
  {
    if ( byte_DD7DD == 7 )
    {
      v124 = 8;
    }
    else
    {
      if ( byte_DD7DD != 2 )
        goto LABEL_31;
      v124 = 4;
    }
  }
  v125 = (char **)(v123 + 2);
  v126 = v123[3] + 1;
  v160 = v123[3];
  if ( v123[4] >= v126 )
  {
    v127 = *v125;
    v128 = v123[3];
  }
  else
  {
    v127 = (char *)qvector_reserve((int)v125, (void *)v123[2], v126, 0x14u);
    v123[2] = (int)v127;
    v128 = v123[3];
    v126 = v128 + 1;
  }
  v123[3] = v126;
  v129 = 20 * v128;
  *(_DWORD *)&v127[v129] = 0;
  v130 = &v127[v129];
  *((_DWORD *)v130 + 1) = -1;
  *((_DWORD *)v130 + 2) = &dword_6C;
  *((_DWORD *)v130 + 3) = 4;
  *((_DWORD *)v130 + 4) = v124;
  sub_2691C(v123[1], off_DD7D4, dword_DD7D8, (unsigned __int8)byte_DD7DD, byte_DD7DC, dword_DD7E0, dword_DD7E4);
  v157[85] = v160;
  v131 = *v156;
  v132 = 2;
  if ( byte_DD7F1 != 1 )
  {
    if ( byte_DD7F1 == 7 )
    {
      v132 = 8;
    }
    else
    {
      if ( byte_DD7F1 != 2 )
        goto LABEL_31;
      v132 = 4;
    }
  }
  v133 = (char **)(v131 + 2);
  v134 = v131[3] + 1;
  v161 = v131[3];
  if ( v131[4] >= v134 )
  {
    v135 = *v133;
    v136 = v131[3];
  }
  else
  {
    v135 = (char *)qvector_reserve((int)v133, (void *)v131[2], v134, 0x14u);
    v131[2] = (int)v135;
    v136 = v131[3];
    v134 = v136 + 1;
  }
  v131[3] = v134;
  v137 = 20 * v136;
  *(_DWORD *)&v135[v137] = 0;
  v138 = &v135[v137];
  *((_DWORD *)v138 + 1) = -1;
  v138 += 8;
  *(_DWORD *)v138 = 112;
  *((_DWORD *)v138 + 1) = 4;
  *((_DWORD *)v138 + 2) = v132;
  sub_2691C(
    v131[1],
    off_DD7E8,
    *(int *)algn_DD7EC,
    (unsigned __int8)byte_DD7F1,
    byte_DD7F0,
    (int)off_DD7F4,
    dword_DD7F8);
  v157[197] = v161;
  v139 = &off_DD7FC;
  v140 = *v156;
  v141 = 120;
  v142 = 32;
  do
  {
    v162 = v142;
    v143 = (char **)(v140 + 2);
    v144 = v140[3];
    v145 = v144 + 1;
    if ( v140[4] >= (unsigned int)(v144 + 1) )
    {
      v146 = *v143;
    }
    else
    {
      v146 = (char *)qvector_reserve((int)v143, (void *)v140[2], v145, 0x14u);
      v140[2] = (int)v146;
      v144 = v140[3];
      v145 = v144 + 1;
    }
    v140[3] = v145;
    v147 = 20 * v144;
    *(_DWORD *)&v146[v147] = 2;
    v148 = &v146[v147];
    *((_DWORD *)v148 + 1) = -1;
    *((_DWORD *)v148 + 2) = v141;
    *((_DWORD *)v148 + 3) = 8;
    *((_DWORD *)v148 + 4) = 8;
    sub_2691C(
      v140[1],
      *v139,
      (int)v139[1],
      *((unsigned __int8 *)v139 + 9),
      *((_BYTE *)v139 + 8),
      (int)v139[3],
      (int)v139[4]);
    v139 += 5;
    v142 = v162 - 1;
    v141 += 8;
    v140 = *v156;
  }
  while ( v162 != 1 );
  v149 = 2;
  if ( byte_DDA89 != 1 )
  {
    if ( byte_DDA89 != 7 )
    {
      if ( byte_DDA89 == 2 )
      {
        v149 = 4;
        goto LABEL_151;
      }
LABEL_31:
      sub_24860();
    }
    v149 = 8;
  }
LABEL_151:
  v150 = v140 + 2;
  v151 = v140[3];
  v152 = v151 + 1;
  if ( v140[4] >= (unsigned int)(v151 + 1) )
  {
    v153 = (_DWORD *)*v150;
  }
  else
  {
    v153 = qvector_reserve((int)v150, (void *)v140[2], v152, 0x14u);
    v140[2] = (int)v153;
    v151 = v140[3];
    v152 = v151 + 1;
  }
  v140[3] = v152;
  v153[5 * v151] = 0;
  v154 = &v153[5 * v151];
  v154[1] = -1;
  v154[2] = 376;
  v154[3] = 4;
  v154[4] = v149;
  return sub_2691C(
           v140[1],
           off_DDA80,
           *(int *)algn_DDA84,
           (unsigned __int8)byte_DDA89,
           byte_DDA88,
           dword_DDA8C,
           dword_DDA90);
}
// 1C: using guessed type int;
// 30: using guessed type __int16;
// 44: using guessed type int;
// 58: using guessed type int;
// 6C: using guessed type int;
// 80: using guessed type int;
// 94: using guessed type int;
// A8: using guessed type int;
// BC: using guessed type Elf32_Dyn *[2];
// D0: using guessed type int;
// E4: using guessed type int;
// F8: using guessed type int;
// DD6A4: using guessed type char *off_DD6A4;
// DD6A8: using guessed type int dword_DD6A8;
// DD6AC: using guessed type char byte_DD6AC;
// DD6AD: using guessed type char byte_DD6AD;
// DD6B0: using guessed type int dword_DD6B0;
// DD6B4: using guessed type int dword_DD6B4;
// DD6B8: using guessed type char *off_DD6B8;
// DD6BC: using guessed type int dword_DD6BC;
// DD6C0: using guessed type char byte_DD6C0;
// DD6C1: using guessed type char byte_DD6C1;
// DD6C4: using guessed type int dword_DD6C4;
// DD6C8: using guessed type int dword_DD6C8;
// DD6CC: using guessed type char *off_DD6CC;
// DD6D0: using guessed type int dword_DD6D0;
// DD6D4: using guessed type char byte_DD6D4;
// DD6D5: using guessed type char byte_DD6D5;
// DD6D8: using guessed type int dword_DD6D8;
// DD6DC: using guessed type int dword_DD6DC;
// DD6E0: using guessed type char *off_DD6E0;
// DD6E4: using guessed type int dword_DD6E4;
// DD6E8: using guessed type char byte_DD6E8;
// DD6E9: using guessed type char byte_DD6E9;
// DD6EC: using guessed type int dword_DD6EC;
// DD6F0: using guessed type int dword_DD6F0;
// DD6F4: using guessed type char *off_DD6F4;
// DD6F8: using guessed type int dword_DD6F8;
// DD6FC: using guessed type char byte_DD6FC;
// DD6FD: using guessed type char byte_DD6FD;
// DD700: using guessed type int dword_DD700;
// DD704: using guessed type int dword_DD704;
// DD708: using guessed type char *off_DD708;
// DD70C: using guessed type int dword_DD70C;
// DD710: using guessed type char byte_DD710;
// DD711: using guessed type char byte_DD711;
// DD714: using guessed type int dword_DD714;
// DD718: using guessed type int dword_DD718;
// DD71C: using guessed type char *off_DD71C;
// DD720: using guessed type int dword_DD720;
// DD724: using guessed type char byte_DD724;
// DD725: using guessed type char byte_DD725;
// DD728: using guessed type int dword_DD728;
// DD72C: using guessed type int dword_DD72C;
// DD730: using guessed type char *off_DD730;
// DD734: using guessed type int dword_DD734;
// DD738: using guessed type char byte_DD738;
// DD739: using guessed type char byte_DD739;
// DD73C: using guessed type int dword_DD73C;
// DD740: using guessed type int dword_DD740;
// DD744: using guessed type char *off_DD744;
// DD748: using guessed type int dword_DD748;
// DD74C: using guessed type char byte_DD74C;
// DD74D: using guessed type char byte_DD74D;
// DD750: using guessed type int dword_DD750;
// DD754: using guessed type int dword_DD754;
// DD758: using guessed type char *off_DD758;
// DD75C: using guessed type int dword_DD75C;
// DD760: using guessed type char byte_DD760;
// DD761: using guessed type char byte_DD761;
// DD764: using guessed type int dword_DD764;
// DD768: using guessed type int dword_DD768;
// DD76C: using guessed type char *off_DD76C;
// DD770: using guessed type int dword_DD770;
// DD774: using guessed type char byte_DD774;
// DD775: using guessed type char byte_DD775;
// DD778: using guessed type int dword_DD778;
// DD77C: using guessed type int dword_DD77C;
// DD780: using guessed type char *off_DD780;
// DD784: using guessed type int dword_DD784;
// DD788: using guessed type char byte_DD788;
// DD789: using guessed type char byte_DD789;
// DD78C: using guessed type int dword_DD78C;
// DD790: using guessed type int dword_DD790;
// DD794: using guessed type char *off_DD794;
// DD798: using guessed type int dword_DD798;
// DD79C: using guessed type char byte_DD79C;
// DD79D: using guessed type char byte_DD79D;
// DD7A0: using guessed type int dword_DD7A0;
// DD7A4: using guessed type int dword_DD7A4;
// DD7AC: using guessed type char *off_DD7AC;
// DD7B0: using guessed type int;
// DD7B4: using guessed type char byte_DD7B4;
// DD7B5: using guessed type char byte_DD7B5;
// DD7B8: using guessed type int dword_DD7B8;
// DD7BC: using guessed type int dword_DD7BC;
// DD7C0: using guessed type char *off_DD7C0;
// DD7C4: using guessed type int;
// DD7C8: using guessed type char byte_DD7C8;
// DD7C9: using guessed type char byte_DD7C9;
// DD7CC: using guessed type int dword_DD7CC;
// DD7D0: using guessed type int dword_DD7D0;
// DD7D4: using guessed type char *off_DD7D4;
// DD7D8: using guessed type int;
// DD7DC: using guessed type char byte_DD7DC;
// DD7DD: using guessed type char byte_DD7DD;
// DD7E0: using guessed type int dword_DD7E0;
// DD7E4: using guessed type int dword_DD7E4;
// DD7E8: using guessed type char *off_DD7E8;
// DD7EC: using guessed type _BYTE[4];
// DD7F0: using guessed type char byte_DD7F0;
// DD7F1: using guessed type char byte_DD7F1;
// DD7F4: using guessed type char **off_DD7F4;
// DD7F8: using guessed type int dword_DD7F8;
// DD7FC: using guessed type char *off_DD7FC;
// DDA80: using guessed type char *off_DDA80;
// DDA84: using guessed type _BYTE[4];
// DDA88: using guessed type char byte_DDA88;
// DDA89: using guessed type char byte_DDA89;
// DDA8C: using guessed type int dword_DDA8C;
// DDA90: using guessed type int dword_DDA90;
