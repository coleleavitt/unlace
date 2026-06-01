/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_29480
// Address: 0x00029480

//----- (00029480) --------------------------------------------------------
unsigned int __cdecl sub_29480(_DWORD *a1)
{
  int *v1; // edi
  int *v2; // esi
  int i; // edi
  _DWORD *v4; // eax
  int v5; // edx
  int v6; // ecx
  _DWORD *v7; // eax
  int v8; // ecx
  _DWORD *v9; // eax
  int v10; // edx
  int v11; // ecx
  _DWORD *v12; // eax
  int v13; // ecx
  int *v14; // esi
  _DWORD *v15; // eax
  int v16; // edx
  int v17; // ecx
  _DWORD *v18; // eax
  int v19; // ecx
  int *v20; // esi
  _DWORD *v21; // eax
  int v22; // edx
  int v23; // ecx
  _DWORD *v24; // eax
  int v25; // ecx
  int *v26; // esi
  _DWORD *v27; // eax
  int v28; // edx
  int v29; // ecx
  _DWORD *v30; // eax
  int v31; // ecx
  int *v32; // esi
  _DWORD *v33; // eax
  int v34; // edx
  int v35; // ecx
  _DWORD *v36; // eax
  int v37; // ecx
  int *v38; // esi
  _DWORD *v39; // eax
  int v40; // edx
  int v41; // ecx
  _DWORD *v42; // eax
  int v43; // ecx
  int *v44; // esi
  _DWORD *v45; // eax
  int v46; // edx
  int v47; // ecx
  _DWORD *v48; // eax
  int v49; // ecx
  int *v50; // esi
  _DWORD *v51; // eax
  int v52; // edx
  int v53; // ecx
  _DWORD *v54; // eax
  int v55; // ecx
  int *v56; // esi
  _DWORD *v57; // eax
  int v58; // edx
  int v59; // ecx
  _DWORD *v60; // eax
  int v61; // ecx
  int *v62; // esi
  _DWORD *v63; // eax
  int v64; // edx
  int v65; // ecx
  _DWORD *v66; // eax
  int v67; // ecx
  int *v68; // esi
  _DWORD *v69; // eax
  int v70; // edx
  int v71; // ecx
  _DWORD *v72; // eax
  int v73; // ecx
  int *v74; // esi
  _DWORD *v75; // eax
  int v76; // edx
  int v77; // ecx
  _DWORD *v78; // eax
  int v79; // ecx
  int *v80; // esi
  _DWORD *v81; // eax
  int v82; // edx
  int v83; // ecx
  _DWORD *v84; // eax
  int v85; // ecx
  int *v86; // esi
  _DWORD *v87; // eax
  int v88; // edx
  int v89; // ecx
  _DWORD *v90; // eax
  int v91; // ecx
  int *v92; // esi
  _DWORD *v93; // eax
  int v94; // edx
  int v95; // ecx
  _DWORD *v96; // eax
  int v97; // ecx
  int *v98; // esi
  _DWORD *v99; // eax
  int v100; // edx
  int v101; // ecx
  _DWORD *v102; // eax
  int v103; // ecx
  int *v104; // esi
  _DWORD *v105; // eax
  int v106; // edx
  int v107; // ecx
  _DWORD *v108; // eax
  int v109; // ecx
  int *v110; // esi
  _DWORD *v111; // eax
  int v112; // edx
  int v113; // ecx
  _DWORD *v114; // eax
  int v115; // ecx
  int *v116; // esi
  _DWORD *v117; // eax
  int v118; // edx
  int v119; // ecx
  _DWORD *v120; // eax
  int v121; // ecx
  _DWORD *v122; // eax
  int *v123; // esi
  unsigned int v124; // ecx
  int *v125; // edi
  _DWORD *v126; // eax
  int v127; // edx
  int v128; // ecx
  _DWORD *v129; // eax
  int v130; // ecx
  int *v131; // esi
  _DWORD *v132; // eax
  int v133; // edx
  int v134; // ecx
  _DWORD *v135; // eax
  int v136; // ecx
  int j; // esi
  int *v138; // edi
  _DWORD *v139; // eax
  int v140; // edx
  int v141; // ecx
  _DWORD *v142; // eax
  int v143; // ecx
  int *v144; // esi
  unsigned int result; // eax
  int *v146; // edi
  _DWORD *v147; // eax
  int v148; // edx
  int v149; // ecx
  _DWORD *v150; // eax
  int v151; // ecx
  int v152; // [esp+0h] [ebp-1Ch]
  int v153; // [esp+0h] [ebp-1Ch]
  int v154; // [esp+0h] [ebp-1Ch]
  int v155; // [esp+0h] [ebp-1Ch]
  int v156; // [esp+0h] [ebp-1Ch]
  int v157; // [esp+0h] [ebp-1Ch]
  int v158; // [esp+0h] [ebp-1Ch]
  int v159; // [esp+0h] [ebp-1Ch]
  int v160; // [esp+0h] [ebp-1Ch]
  int v161; // [esp+0h] [ebp-1Ch]
  int v162; // [esp+0h] [ebp-1Ch]
  int v163; // [esp+0h] [ebp-1Ch]
  int v164; // [esp+0h] [ebp-1Ch]
  int v165; // [esp+0h] [ebp-1Ch]
  int v166; // [esp+0h] [ebp-1Ch]
  int v167; // [esp+0h] [ebp-1Ch]
  int v168; // [esp+0h] [ebp-1Ch]
  int v169; // [esp+0h] [ebp-1Ch]
  int v170; // [esp+0h] [ebp-1Ch]
  int v171; // [esp+0h] [ebp-1Ch]
  unsigned int v172; // [esp+0h] [ebp-1Ch]
  int v173; // [esp+4h] [ebp-18h]
  int v174; // [esp+4h] [ebp-18h]
  int v175; // [esp+4h] [ebp-18h]
  int v176; // [esp+4h] [ebp-18h]
  int v177; // [esp+4h] [ebp-18h]
  int v178; // [esp+4h] [ebp-18h]
  int v179; // [esp+4h] [ebp-18h]
  int v180; // [esp+4h] [ebp-18h]
  int v181; // [esp+4h] [ebp-18h]
  unsigned int v182; // [esp+4h] [ebp-18h]
  int v183; // [esp+8h] [ebp-14h]

  v1 = (int *)operator new(0xD74u);
  sub_28C60(v1, (int)(a1 + 70));
  a1[69] = v1;
  v2 = v1;
  for ( i = 72; i != 112; i += 5 )
  {
    v4 = v2 + 2;
    v5 = v2[3];
    v6 = v5 + 1;
    if ( v2[4] >= (unsigned int)(v5 + 1) )
    {
      v7 = (_DWORD *)*v4;
    }
    else
    {
      v7 = qvector_reserve((int)v4, (void *)v2[2], v5 + 1, 0x14u);
      v2[2] = (int)v7;
      v5 = v2[3];
      v6 = v5 + 1;
    }
    v2[3] = v6;
    v8 = 5 * v5;
    v7[v8] = 1;
    v7[v8 + 1] = -1;
    v7[v8 + 2] = i * 2;
    v7[v8 + 3] = 10;
    v7[v8 + 4] = 10;
    sub_2E0E0(
      v2[1],
      (&off_13B790)[i - 72],
      (int)(&off_13B790)[i - 71],
      *((_BYTE *)&off_13B790 + 4 * i - 279),
      (char)(&off_13B790)[i - 70],
      (int)(&off_13B790)[i - 69],
      (int)(&off_13B790)[i - 68]);
    v2 = (int *)a1[69];
  }
  switch ( BYTE1(off_13B838) )
  {
    case 1:
      v152 = 2;
      break;
    case 7:
      v152 = 8;
      break;
    case 2:
      v152 = 4;
      break;
    default:
      if ( (_BYTE)under_debugger )
        goto LABEL_238;
      goto LABEL_237;
  }
  v9 = v2 + 2;
  v10 = v2[3];
  v11 = v10 + 1;
  if ( v2[4] >= (unsigned int)(v10 + 1) )
  {
    v12 = (_DWORD *)*v9;
  }
  else
  {
    v12 = qvector_reserve((int)v9, (void *)v2[2], v10 + 1, 0x14u);
    v2[2] = (int)v12;
    v10 = v2[3];
    v11 = v10 + 1;
  }
  v2[3] = v11;
  v13 = 5 * v10;
  *(_OWORD *)&v12[v13] = xmmword_EFB10;
  v12[v13 + 4] = v152;
  sub_2E0E0(v2[1], off_13B830, *(int *)algn_13B834, SBYTE1(off_13B838), (char)off_13B838, (int)off_13B83C, dword_13B840);
  v14 = (int *)a1[69];
  switch ( BYTE1(off_13B84C) )
  {
    case 1:
      v153 = 2;
      break;
    case 7:
      v153 = 8;
      break;
    case 2:
      v153 = 4;
      break;
    default:
      if ( (_BYTE)under_debugger )
        goto LABEL_238;
      goto LABEL_237;
  }
  v15 = v14 + 2;
  v16 = v14[3];
  v17 = v16 + 1;
  if ( v14[4] >= (unsigned int)(v16 + 1) )
  {
    v18 = (_DWORD *)*v15;
  }
  else
  {
    v18 = qvector_reserve((int)v15, (void *)v14[2], v16 + 1, 0x14u);
    v14[2] = (int)v18;
    v16 = v14[3];
    v17 = v16 + 1;
  }
  v14[3] = v17;
  v19 = 5 * v16;
  *(_OWORD *)&v18[v19] = xmmword_EFB20;
  v18[v19 + 4] = v153;
  sub_2E0E0(v14[1], off_13B844, dword_13B848, SBYTE1(off_13B84C), (char)off_13B84C, (int)off_13B850, dword_13B854);
  v20 = (int *)a1[69];
  v21 = v20 + 2;
  v22 = v20[3];
  v23 = v22 + 1;
  if ( v20[4] >= (unsigned int)(v22 + 1) )
  {
    v24 = (_DWORD *)*v21;
  }
  else
  {
    v24 = qvector_reserve((int)v21, (void *)v20[2], v22 + 1, 0x14u);
    v20[2] = (int)v24;
    v22 = v20[3];
    v23 = v22 + 1;
  }
  v20[3] = v23;
  v25 = 5 * v22;
  v24[v25] = 3;
  v24[v25 + 1] = -1;
  v24[v25 + 2] = sub_2A660;
  v24[v25 + 3] = sub_2A680;
  v24[v25 + 4] = 0;
  sub_2E0E0(
    v20[1],
    off_13B858,
    *(int *)algn_13B85C,
    SBYTE1(off_13B860),
    (char)off_13B860,
    (int)off_13B864,
    dword_13B868);
  v26 = (int *)a1[69];
  switch ( BYTE1(dword_13B870[1]) )
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
      if ( (_BYTE)under_debugger )
        goto LABEL_238;
      goto LABEL_237;
  }
  v27 = v26 + 2;
  v28 = v26[3];
  v29 = v28 + 1;
  v173 = v28;
  if ( v26[4] >= (unsigned int)(v28 + 1) )
  {
    v30 = (_DWORD *)*v27;
  }
  else
  {
    v30 = qvector_reserve((int)v27, (void *)v26[2], v28 + 1, 0x14u);
    v26[2] = (int)v30;
    v28 = v26[3];
    v29 = v28 + 1;
  }
  v26[3] = v29;
  v31 = 5 * v28;
  *(_OWORD *)&v30[v31] = xmmword_EFB30;
  v30[v31 + 4] = v154;
  sub_2E0E0(
    v26[1],
    off_13B86C,
    dword_13B870[0],
    SBYTE1(dword_13B870[1]),
    dword_13B870[1],
    dword_13B870[2],
    dword_13B870[3]);
  a1[111] = v173;
  v32 = (int *)a1[69];
  switch ( BYTE1(dword_13B884[1]) )
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
      if ( (_BYTE)under_debugger )
        goto LABEL_238;
      goto LABEL_237;
  }
  v33 = v32 + 2;
  v34 = v32[3];
  v35 = v34 + 1;
  v174 = v34;
  if ( v32[4] >= (unsigned int)(v34 + 1) )
  {
    v36 = (_DWORD *)*v33;
  }
  else
  {
    v36 = qvector_reserve((int)v33, (void *)v32[2], v34 + 1, 0x14u);
    v32[2] = (int)v36;
    v34 = v32[3];
    v35 = v34 + 1;
  }
  v32[3] = v35;
  v37 = 5 * v34;
  *(_OWORD *)&v36[v37] = xmmword_EFB40;
  v36[v37 + 4] = v155;
  sub_2E0E0(
    v32[1],
    off_13B880,
    dword_13B884[0],
    SBYTE1(dword_13B884[1]),
    dword_13B884[1],
    dword_13B884[2],
    dword_13B884[3]);
  a1[112] = v174;
  v38 = (int *)a1[69];
  switch ( BYTE1(dword_13B89C[0]) )
  {
    case 1:
      v156 = 2;
      break;
    case 7:
      v156 = 8;
      break;
    case 2:
      v156 = 4;
      break;
    default:
      if ( (_BYTE)under_debugger )
        goto LABEL_238;
      goto LABEL_237;
  }
  v39 = v38 + 2;
  v40 = v38[3];
  v41 = v40 + 1;
  v175 = v40;
  if ( v38[4] >= (unsigned int)(v40 + 1) )
  {
    v42 = (_DWORD *)*v39;
  }
  else
  {
    v42 = qvector_reserve((int)v39, (void *)v38[2], v40 + 1, 0x14u);
    v38[2] = (int)v42;
    v40 = v38[3];
    v41 = v40 + 1;
  }
  v38[3] = v41;
  v43 = 5 * v40;
  *(_OWORD *)&v42[v43] = xmmword_EFB50;
  v42[v43 + 4] = v156;
  sub_2E0E0(
    v38[1],
    off_13B894,
    dword_13B898,
    SBYTE1(dword_13B89C[0]),
    dword_13B89C[0],
    dword_13B89C[1],
    dword_13B89C[2]);
  a1[113] = v175;
  v44 = (int *)a1[69];
  switch ( BYTE1(dword_13B8AC[1]) )
  {
    case 1:
      v157 = 2;
      break;
    case 7:
      v157 = 8;
      break;
    case 2:
      v157 = 4;
      break;
    default:
      if ( (_BYTE)under_debugger )
        goto LABEL_238;
      goto LABEL_237;
  }
  v45 = v44 + 2;
  v46 = v44[3];
  v47 = v46 + 1;
  v176 = v46;
  if ( v44[4] >= (unsigned int)(v46 + 1) )
  {
    v48 = (_DWORD *)*v45;
  }
  else
  {
    v48 = qvector_reserve((int)v45, (void *)v44[2], v46 + 1, 0x14u);
    v44[2] = (int)v48;
    v46 = v44[3];
    v47 = v46 + 1;
  }
  v44[3] = v47;
  v49 = 5 * v46;
  *(_OWORD *)&v48[v49] = xmmword_EFB60;
  v48[v49 + 4] = v157;
  sub_2E0E0(
    v44[1],
    off_13B8A8,
    dword_13B8AC[0],
    SBYTE1(dword_13B8AC[1]),
    dword_13B8AC[1],
    dword_13B8AC[2],
    dword_13B8AC[3]);
  a1[109] = v176;
  v50 = (int *)a1[69];
  switch ( BYTE1(dword_13B8C0[1]) )
  {
    case 1:
      v158 = 2;
      break;
    case 7:
      v158 = 8;
      break;
    case 2:
      v158 = 4;
      break;
    default:
      if ( (_BYTE)under_debugger )
        goto LABEL_238;
      goto LABEL_237;
  }
  v51 = v50 + 2;
  v52 = v50[3];
  v53 = v52 + 1;
  v177 = v52;
  if ( v50[4] >= (unsigned int)(v52 + 1) )
  {
    v54 = (_DWORD *)*v51;
  }
  else
  {
    v54 = qvector_reserve((int)v51, (void *)v50[2], v52 + 1, 0x14u);
    v50[2] = (int)v54;
    v52 = v50[3];
    v53 = v52 + 1;
  }
  v50[3] = v53;
  v55 = 5 * v52;
  *(_OWORD *)&v54[v55] = xmmword_EFB70;
  v54[v55 + 4] = v158;
  sub_2E0E0(
    v50[1],
    off_13B8BC,
    dword_13B8C0[0],
    SBYTE1(dword_13B8C0[1]),
    dword_13B8C0[1],
    dword_13B8C0[2],
    dword_13B8C0[3]);
  a1[110] = v177;
  v56 = (int *)a1[69];
  switch ( BYTE1(dword_13B8D4[1]) )
  {
    case 1:
      v159 = 2;
      break;
    case 7:
      v159 = 8;
      break;
    case 2:
      v159 = 4;
      break;
    default:
      if ( (_BYTE)under_debugger )
        goto LABEL_238;
      goto LABEL_237;
  }
  v57 = v56 + 2;
  v58 = v56[3];
  v59 = v58 + 1;
  v178 = v58;
  if ( v56[4] >= (unsigned int)(v58 + 1) )
  {
    v60 = (_DWORD *)*v57;
  }
  else
  {
    v60 = qvector_reserve((int)v57, (void *)v56[2], v58 + 1, 0x14u);
    v56[2] = (int)v60;
    v58 = v56[3];
    v59 = v58 + 1;
  }
  v56[3] = v59;
  v61 = 5 * v58;
  *(_OWORD *)&v60[v61] = xmmword_EFB80;
  v60[v61 + 4] = v159;
  sub_2E0E0(
    v56[1],
    off_13B8D0,
    dword_13B8D4[0],
    SBYTE1(dword_13B8D4[1]),
    dword_13B8D4[1],
    dword_13B8D4[2],
    dword_13B8D4[3]);
  a1[114] = v178;
  v183 = a1[32];
  v62 = (int *)a1[69];
  switch ( BYTE1(qword_13B6D0) )
  {
    case 1:
      v160 = 2;
      break;
    case 7:
      v160 = 8;
      break;
    case 2:
      v160 = 4;
      break;
    default:
      if ( (_BYTE)under_debugger )
        goto LABEL_238;
      goto LABEL_237;
  }
  v63 = v62 + 2;
  v64 = v62[3];
  v65 = v64 + 1;
  if ( v62[4] >= (unsigned int)(v64 + 1) )
  {
    v66 = (_DWORD *)*v63;
  }
  else
  {
    v66 = qvector_reserve((int)v63, (void *)v62[2], v64 + 1, 0x14u);
    v62[2] = (int)v66;
    v64 = v62[3];
    v65 = v64 + 1;
  }
  v62[3] = v65;
  v67 = 5 * v64;
  *(_OWORD *)&v66[v67] = xmmword_EFB90;
  v66[v67 + 4] = v160;
  sub_2E0E0(v62[1], off_13B6C8, dword_13B6CC, SBYTE1(qword_13B6D0), qword_13B6D0, SHIDWORD(qword_13B6D0), dword_13B6D8);
  v68 = (int *)a1[69];
  switch ( BYTE1(qword_13B6E4) )
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
      if ( (_BYTE)under_debugger )
        goto LABEL_238;
      goto LABEL_237;
  }
  v69 = v68 + 2;
  v70 = v68[3];
  v71 = v70 + 1;
  if ( v68[4] >= (unsigned int)(v70 + 1) )
  {
    v72 = (_DWORD *)*v69;
  }
  else
  {
    v72 = qvector_reserve((int)v69, (void *)v68[2], v70 + 1, 0x14u);
    v68[2] = (int)v72;
    v70 = v68[3];
    v71 = v70 + 1;
  }
  v68[3] = v71;
  v73 = 5 * v70;
  *(_OWORD *)&v72[v73] = xmmword_EFBA0;
  v72[v73 + 4] = v161;
  sub_2E0E0(v68[1], off_13B6DC, dword_13B6E0, SBYTE1(qword_13B6E4), qword_13B6E4, SHIDWORD(qword_13B6E4), dword_13B6EC);
  v74 = (int *)a1[69];
  switch ( BYTE1(qword_13B6F8) )
  {
    case 1:
      v162 = 2;
      break;
    case 7:
      v162 = 8;
      break;
    case 2:
      v162 = 4;
      break;
    default:
      if ( (_BYTE)under_debugger )
        goto LABEL_238;
      goto LABEL_237;
  }
  v75 = v74 + 2;
  v76 = v74[3];
  v77 = v76 + 1;
  if ( v74[4] >= (unsigned int)(v76 + 1) )
  {
    v78 = (_DWORD *)*v75;
  }
  else
  {
    v78 = qvector_reserve((int)v75, (void *)v74[2], v76 + 1, 0x14u);
    v74[2] = (int)v78;
    v76 = v74[3];
    v77 = v76 + 1;
  }
  v74[3] = v77;
  v79 = 5 * v76;
  *(_OWORD *)&v78[v79] = xmmword_EFBB0;
  v78[v79 + 4] = v162;
  sub_2E0E0(v74[1], off_13B6F0, dword_13B6F4, SBYTE1(qword_13B6F8), qword_13B6F8, SHIDWORD(qword_13B6F8), dword_13B700);
  v80 = (int *)a1[69];
  switch ( BYTE1(qword_13B70C) )
  {
    case 1:
      v163 = 2;
      break;
    case 7:
      v163 = 8;
      break;
    case 2:
      v163 = 4;
      break;
    default:
      if ( (_BYTE)under_debugger )
        goto LABEL_238;
      goto LABEL_237;
  }
  v81 = v80 + 2;
  v82 = v80[3];
  v83 = v82 + 1;
  if ( v80[4] >= (unsigned int)(v82 + 1) )
  {
    v84 = (_DWORD *)*v81;
  }
  else
  {
    v84 = qvector_reserve((int)v81, (void *)v80[2], v82 + 1, 0x14u);
    v80[2] = (int)v84;
    v82 = v80[3];
    v83 = v82 + 1;
  }
  v80[3] = v83;
  v85 = 5 * v82;
  *(_OWORD *)&v84[v85] = xmmword_EFBC0;
  v84[v85 + 4] = v163;
  sub_2E0E0(v80[1], off_13B704, dword_13B708, SBYTE1(qword_13B70C), qword_13B70C, SHIDWORD(qword_13B70C), dword_13B714);
  v86 = (int *)a1[69];
  switch ( BYTE1(qword_13B720) )
  {
    case 1:
      v164 = 2;
      break;
    case 7:
      v164 = 8;
      break;
    case 2:
      v164 = 4;
      break;
    default:
      if ( (_BYTE)under_debugger )
        goto LABEL_238;
      goto LABEL_237;
  }
  v87 = v86 + 2;
  v88 = v86[3];
  v89 = v88 + 1;
  if ( v86[4] >= (unsigned int)(v88 + 1) )
  {
    v90 = (_DWORD *)*v87;
  }
  else
  {
    v90 = qvector_reserve((int)v87, (void *)v86[2], v88 + 1, 0x14u);
    v86[2] = (int)v90;
    v88 = v86[3];
    v89 = v88 + 1;
  }
  v86[3] = v89;
  v91 = 5 * v88;
  *(_OWORD *)&v90[v91] = xmmword_EFBD0;
  v90[v91 + 4] = v164;
  sub_2E0E0(v86[1], off_13B718, dword_13B71C, SBYTE1(qword_13B720), qword_13B720, SHIDWORD(qword_13B720), dword_13B728);
  v92 = (int *)a1[69];
  switch ( BYTE1(qword_13B734) )
  {
    case 1:
      v165 = 2;
      break;
    case 7:
      v165 = 8;
      break;
    case 2:
      v165 = 4;
      break;
    default:
      if ( (_BYTE)under_debugger )
        goto LABEL_238;
      goto LABEL_237;
  }
  v93 = v92 + 2;
  v94 = v92[3];
  v95 = v94 + 1;
  if ( v92[4] >= (unsigned int)(v94 + 1) )
  {
    v96 = (_DWORD *)*v93;
  }
  else
  {
    v96 = qvector_reserve((int)v93, (void *)v92[2], v94 + 1, 0x14u);
    v92[2] = (int)v96;
    v94 = v92[3];
    v95 = v94 + 1;
  }
  v92[3] = v95;
  v97 = 5 * v94;
  *(_OWORD *)&v96[v97] = xmmword_EFBE0;
  v96[v97 + 4] = v165;
  sub_2E0E0(v92[1], off_13B72C, dword_13B730, SBYTE1(qword_13B734), qword_13B734, SHIDWORD(qword_13B734), dword_13B73C);
  v98 = (int *)a1[69];
  switch ( BYTE1(qword_13B748) )
  {
    case 1:
      v166 = 2;
      break;
    case 7:
      v166 = 8;
      break;
    case 2:
      v166 = 4;
      break;
    default:
      if ( (_BYTE)under_debugger )
        goto LABEL_238;
      goto LABEL_237;
  }
  v99 = v98 + 2;
  v100 = v98[3];
  v101 = v100 + 1;
  if ( v98[4] >= (unsigned int)(v100 + 1) )
  {
    v102 = (_DWORD *)*v99;
  }
  else
  {
    v102 = qvector_reserve((int)v99, (void *)v98[2], v100 + 1, 0x14u);
    v98[2] = (int)v102;
    v100 = v98[3];
    v101 = v100 + 1;
  }
  v98[3] = v101;
  v103 = 5 * v100;
  *(_OWORD *)&v102[v103] = xmmword_EFBF0;
  v102[v103 + 4] = v166;
  sub_2E0E0(v98[1], off_13B740, dword_13B744, SBYTE1(qword_13B748), qword_13B748, SHIDWORD(qword_13B748), dword_13B750);
  v104 = (int *)a1[69];
  switch ( BYTE1(qword_13B75C) )
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
      if ( (_BYTE)under_debugger )
        goto LABEL_238;
      goto LABEL_237;
  }
  v105 = v104 + 2;
  v106 = v104[3];
  v107 = v106 + 1;
  v179 = v106;
  if ( v104[4] >= (unsigned int)(v106 + 1) )
  {
    v108 = (_DWORD *)*v105;
  }
  else
  {
    v108 = qvector_reserve((int)v105, (void *)v104[2], v106 + 1, 0x14u);
    v104[2] = (int)v108;
    v106 = v104[3];
    v107 = v106 + 1;
  }
  v104[3] = v107;
  v109 = 5 * v106;
  *(_OWORD *)&v108[v109] = xmmword_EFC00;
  v108[v109 + 4] = v167;
  sub_2E0E0(v104[1], off_13B754, dword_13B758, SBYTE1(qword_13B75C), qword_13B75C, SHIDWORD(qword_13B75C), dword_13B764);
  a1[84] = v179;
  v110 = (int *)a1[69];
  switch ( BYTE1(qword_13B770) )
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
      if ( (_BYTE)under_debugger )
        goto LABEL_238;
      goto LABEL_237;
  }
  v111 = v110 + 2;
  v112 = v110[3];
  v113 = v112 + 1;
  v180 = v112;
  if ( v110[4] >= (unsigned int)(v112 + 1) )
  {
    v114 = (_DWORD *)*v111;
  }
  else
  {
    v114 = qvector_reserve((int)v111, (void *)v110[2], v112 + 1, 0x14u);
    v110[2] = (int)v114;
    v112 = v110[3];
    v113 = v112 + 1;
  }
  v110[3] = v113;
  v115 = 5 * v112;
  *(_OWORD *)&v114[v115] = xmmword_EFC10;
  v114[v115 + 4] = v168;
  sub_2E0E0(v110[1], off_13B768, dword_13B76C, SBYTE1(qword_13B770), qword_13B770, SHIDWORD(qword_13B770), dword_13B778);
  a1[85] = v180;
  v116 = (int *)a1[69];
  if ( BYTE1(dword_13B784) == 1 )
  {
    v169 = 2;
    goto LABEL_168;
  }
  if ( BYTE1(dword_13B784) == 7 )
  {
    v169 = 8;
    goto LABEL_168;
  }
  if ( BYTE1(dword_13B784) != 2 )
  {
    if ( (_BYTE)under_debugger )
      goto LABEL_238;
LABEL_237:
    interr(1798);
  }
  v169 = 4;
LABEL_168:
  v117 = v116 + 2;
  v118 = v116[3];
  v119 = v118 + 1;
  v181 = v118;
  if ( v116[4] >= (unsigned int)(v118 + 1) )
  {
    v120 = (_DWORD *)*v117;
  }
  else
  {
    v120 = qvector_reserve((int)v117, (void *)v116[2], v118 + 1, 0x14u);
    v116[2] = (int)v120;
    v118 = v116[3];
    v119 = v118 + 1;
  }
  v116[3] = v119;
  v121 = 5 * v118;
  *(_OWORD *)&v120[v121] = xmmword_EFC20;
  v120[v121 + 4] = v169;
  sub_2E0E0(v116[1], off_13B77C, dword_13B780, SBYTE1(dword_13B784), dword_13B784, (int)off_13B788, dword_13B78C);
  v122 = a1;
  a1[108] = v181;
  v123 = (int *)algn_13B8F4;
  v170 = 384;
  v124 = 0;
  do
  {
    if ( v124 >= 8 && v183 != 8 )
      break;
    v182 = v124;
    v125 = (int *)v122[69];
    v126 = v125 + 2;
    v127 = v125[3];
    v128 = v127 + 1;
    if ( v125[4] >= (unsigned int)(v127 + 1) )
    {
      v129 = (_DWORD *)*v126;
    }
    else
    {
      v129 = qvector_reserve((int)v126, (void *)v125[2], v127 + 1, 0x14u);
      v125[2] = (int)v129;
      v127 = v125[3];
      v128 = v127 + 1;
    }
    v125[3] = v128;
    v130 = 5 * v127;
    v129[v130] = 2;
    v129[v130 + 1] = -1;
    v129[v130 + 2] = v170;
    v129[v130 + 3] = 16;
    v129[v130 + 4] = 16;
    sub_2E0E0(v125[1], (char *)*(v123 - 4), *(v123 - 3), *((_BYTE *)v123 - 7), *((_BYTE *)v123 - 8), *(v123 - 1), *v123);
    v124 = v182 + 1;
    v170 += 16;
    v123 += 5;
    v122 = a1;
  }
  while ( v182 + 1 < 0x10 );
  v131 = (int *)v122[69];
  if ( BYTE1(off_13BA2C) == 1 )
  {
    v171 = 2;
    goto LABEL_184;
  }
  if ( BYTE1(off_13BA2C) == 7 )
  {
    v171 = 8;
    goto LABEL_184;
  }
  if ( BYTE1(off_13BA2C) != 2 )
  {
    if ( !(_BYTE)under_debugger )
      goto LABEL_237;
LABEL_238:
    BUG();
  }
  v171 = 4;
LABEL_184:
  v132 = v131 + 2;
  v133 = v131[3];
  v134 = v133 + 1;
  if ( v131[4] >= (unsigned int)(v133 + 1) )
  {
    v135 = (_DWORD *)*v132;
  }
  else
  {
    v135 = qvector_reserve((int)v132, (void *)v131[2], v133 + 1, 0x14u);
    v131[2] = (int)v135;
    v133 = v131[3];
    v134 = v133 + 1;
  }
  v131[3] = v134;
  v136 = 5 * v133;
  *(_OWORD *)&v135[v136] = xmmword_EFC30;
  v135[v136 + 4] = v171;
  sub_2E0E0(v131[1], off_13BA24, dword_13BA28, SBYTE1(off_13BA2C), (char)off_13BA2C, (int)off_13BA30, dword_13BA34);
  for ( j = 72; j != 112; j += 5 )
  {
    v138 = (int *)a1[69];
    v139 = v138 + 2;
    v140 = v138[3];
    v141 = v140 + 1;
    if ( v138[4] >= (unsigned int)(v140 + 1) )
    {
      v142 = (_DWORD *)*v139;
    }
    else
    {
      v142 = qvector_reserve((int)v139, (void *)v138[2], v140 + 1, 0x14u);
      v138[2] = (int)v142;
      v140 = v138[3];
      v141 = v140 + 1;
    }
    v138[3] = v141;
    v143 = 5 * v140;
    v142[v143] = 2;
    v142[v143 + 1] = -1;
    v142[v143 + 2] = j * 2;
    v142[v143 + 3] = 8;
    v142[v143 + 4] = 8;
    sub_2E0E0(
      v138[1],
      (&off_13BA38)[j - 72],
      (int)(&off_13BA38)[j - 71],
      *((_BYTE *)&off_13BA38 + 4 * j - 279),
      (char)(&off_13BA38)[j - 70],
      (int)(&off_13BA38)[j - 69],
      (int)(&off_13BA38)[j - 68]);
  }
  v144 = &dword_13BAE8;
  result = 0;
  do
  {
    if ( result >= 8 && v183 != 8 )
      break;
    v172 = result;
    v146 = (int *)a1[69];
    v147 = v146 + 2;
    v148 = v146[3];
    v149 = v148 + 1;
    if ( v146[4] >= (unsigned int)(v148 + 1) )
    {
      v150 = (_DWORD *)*v147;
    }
    else
    {
      v150 = qvector_reserve((int)v147, (void *)v146[2], v148 + 1, 0x14u);
      v146[2] = (int)v150;
      v148 = v146[3];
      v149 = v148 + 1;
    }
    v146[3] = v149;
    v151 = 5 * v148;
    v150[v151] = 3;
    v150[v151 + 1] = -1;
    v150[v151 + 2] = sub_2A6A0;
    v150[v151 + 3] = sub_2A780;
    v150[v151 + 4] = v172;
    sub_2E0E0(v146[1], (char *)*(v144 - 4), *(v144 - 3), *((_BYTE *)v144 - 7), *((_BYTE *)v144 - 8), *(v144 - 1), *v144);
    result = v172 + 1;
    v144 += 5;
  }
  while ( v172 + 1 < 0x10 );
  return result;
}
// EFB10: using guessed type __int128 xmmword_EFB10;
// EFB20: using guessed type __int128 xmmword_EFB20;
// EFB30: using guessed type __int128 xmmword_EFB30;
// EFB40: using guessed type __int128 xmmword_EFB40;
// EFB50: using guessed type __int128 xmmword_EFB50;
// EFB60: using guessed type __int128 xmmword_EFB60;
// EFB70: using guessed type __int128 xmmword_EFB70;
// EFB80: using guessed type __int128 xmmword_EFB80;
// EFB90: using guessed type __int128 xmmword_EFB90;
// EFBA0: using guessed type __int128 xmmword_EFBA0;
// EFBB0: using guessed type __int128 xmmword_EFBB0;
// EFBC0: using guessed type __int128 xmmword_EFBC0;
// EFBD0: using guessed type __int128 xmmword_EFBD0;
// EFBE0: using guessed type __int128 xmmword_EFBE0;
// EFBF0: using guessed type __int128 xmmword_EFBF0;
// EFC00: using guessed type __int128 xmmword_EFC00;
// EFC10: using guessed type __int128 xmmword_EFC10;
// EFC20: using guessed type __int128 xmmword_EFC20;
// EFC30: using guessed type __int128 xmmword_EFC30;
// 13B6C8: using guessed type char *off_13B6C8;
// 13B6CC: using guessed type int;
// 13B6D0: using guessed type __int64 qword_13B6D0;
// 13B6D8: using guessed type int dword_13B6D8;
// 13B6DC: using guessed type char *off_13B6DC;
// 13B6E0: using guessed type int;
// 13B6E4: using guessed type __int64 qword_13B6E4;
// 13B6EC: using guessed type int dword_13B6EC;
// 13B6F0: using guessed type char *off_13B6F0;
// 13B6F4: using guessed type int;
// 13B6F8: using guessed type __int64 qword_13B6F8;
// 13B700: using guessed type int dword_13B700;
// 13B704: using guessed type char *off_13B704;
// 13B708: using guessed type int;
// 13B70C: using guessed type __int64 qword_13B70C;
// 13B714: using guessed type int dword_13B714;
// 13B718: using guessed type char *off_13B718;
// 13B71C: using guessed type int;
// 13B720: using guessed type __int64 qword_13B720;
// 13B728: using guessed type int dword_13B728;
// 13B72C: using guessed type char *off_13B72C;
// 13B730: using guessed type int;
// 13B734: using guessed type __int64 qword_13B734;
// 13B73C: using guessed type int dword_13B73C;
// 13B740: using guessed type char *off_13B740;
// 13B744: using guessed type int;
// 13B748: using guessed type __int64 qword_13B748;
// 13B750: using guessed type int dword_13B750;
// 13B754: using guessed type char *off_13B754;
// 13B758: using guessed type int;
// 13B75C: using guessed type __int64 qword_13B75C;
// 13B764: using guessed type int dword_13B764;
// 13B768: using guessed type char *off_13B768;
// 13B76C: using guessed type int;
// 13B770: using guessed type __int64 qword_13B770;
// 13B778: using guessed type int dword_13B778;
// 13B77C: using guessed type char *off_13B77C;
// 13B780: using guessed type int;
// 13B784: using guessed type int;
// 13B788: using guessed type char **;
// 13B78C: using guessed type int;
// 13B790: using guessed type char *off_13B790;
// 13B830: using guessed type char *off_13B830;
// 13B834: using guessed type _BYTE[4];
// 13B838: using guessed type int *;
// 13B83C: using guessed type char **;
// 13B840: using guessed type int;
// 13B844: using guessed type char *off_13B844;
// 13B848: using guessed type int;
// 13B84C: using guessed type int *;
// 13B850: using guessed type char **;
// 13B854: using guessed type int;
// 13B858: using guessed type char *off_13B858;
// 13B85C: using guessed type _BYTE[4];
// 13B860: using guessed type int *;
// 13B864: using guessed type char **;
// 13B868: using guessed type int;
// 13B86C: using guessed type char *off_13B86C;
// 13B870: using guessed type int[4];
// 13B880: using guessed type char *off_13B880;
// 13B884: using guessed type int[4];
// 13B894: using guessed type char *off_13B894;
// 13B898: using guessed type int;
// 13B89C: using guessed type int[3];
// 13B8A8: using guessed type char *off_13B8A8;
// 13B8AC: using guessed type int[4];
// 13B8BC: using guessed type char *off_13B8BC;
// 13B8C0: using guessed type int[4];
// 13B8D0: using guessed type char *off_13B8D0;
// 13B8D4: using guessed type int[4];
// 13B8F4: using guessed type _BYTE[4];
// 13BA24: using guessed type char *off_13BA24;
// 13BA28: using guessed type int;
// 13BA2C: using guessed type Elf32_Sym *;
// 13BA30: using guessed type char **;
// 13BA34: using guessed type int;
// 13BA38: using guessed type char *off_13BA38;
// 13BAE8: using guessed type int;
// 13E34C: using guessed type int under_debugger;
