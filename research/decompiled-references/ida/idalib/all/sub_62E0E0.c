unsigned __int64 __fastcall sub_62E0E0(__int64 a1, __int64 *a2)
{
  __int64 v3; // rax
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  size_t v13; // r12
  __int64 v14; // rax
  char v15; // r12
  __int64 v16; // rsi
  __int64 v17; // rax
  char v18; // r12
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rsi
  __int64 v22; // rax
  unsigned __int64 v23; // rdx
  char v24; // r12
  __int64 v25; // rdx
  __int64 v26; // rsi
  __int64 v27; // rax
  unsigned __int64 v28; // rdx
  char v29; // r12
  __int64 v30; // rdx
  __int64 v31; // rsi
  __int64 v32; // rax
  unsigned __int64 v33; // rdx
  char v34; // r12
  __int64 v35; // rax
  char v36; // r12
  __int64 v37; // rsi
  __int64 v38; // rax
  char v39; // r12
  __int64 v40; // rsi
  __int64 v41; // rdx
  __int64 v42; // rsi
  __int64 v43; // rax
  unsigned __int64 v44; // rdx
  char v45; // r12
  __int64 v46; // rdx
  __int64 v47; // rsi
  __int64 v48; // rax
  unsigned __int64 v49; // rdx
  char v50; // r12
  __int64 v51; // rdx
  __int64 v52; // rsi
  __int64 v53; // rax
  unsigned __int64 v54; // rdx
  char v55; // r12
  __int64 v56; // rax
  char v57; // r12
  __int64 v58; // rsi
  __int64 v59; // rdx
  __int64 v60; // rsi
  __int64 v61; // rax
  unsigned __int64 v62; // rdx
  char v63; // r12
  __int64 v64; // rax
  char v65; // r12
  __int64 v66; // rsi
  __int64 v67; // rdx
  __int64 v68; // rsi
  __int64 v69; // rax
  unsigned __int64 v70; // rdx
  char v71; // r12
  __int64 v72; // rdx
  __int64 v73; // rsi
  __int64 v74; // rax
  unsigned __int64 v75; // rdx
  char v76; // r12
  __int64 v77; // rdx
  __int64 v78; // rsi
  __int64 v79; // rax
  unsigned __int64 v80; // rdx
  char v81; // r12
  size_t v82; // r12
  __int64 v83; // rax
  char v84; // r12
  __int64 v85; // rsi
  __int64 v86; // rdx
  __int64 v87; // rsi
  __int64 v88; // rax
  unsigned __int64 v89; // rdx
  char v90; // r12
  __int64 v91; // rdx
  __int64 v92; // rsi
  __int64 v93; // rax
  unsigned __int64 v94; // rdx
  char v95; // r12
  __int64 v96; // rdx
  __int64 v97; // rsi
  __int64 v98; // rax
  unsigned __int64 v99; // rdx
  char v100; // r12
  __int64 v101; // rdx
  __int64 v102; // rsi
  __int64 v103; // rax
  unsigned __int64 v104; // rdx
  char v105; // r12
  __int64 v106; // rdx
  __int64 v107; // rsi
  __int64 v108; // rax
  unsigned __int64 v109; // rdx
  char v110; // r12
  __int64 v111; // rdx
  __int64 v112; // rsi
  __int64 v113; // rax
  unsigned __int64 v114; // rdx
  char v115; // r12
  __int64 v116; // rdx
  __int64 v117; // rsi
  __int64 v118; // rax
  unsigned __int64 v119; // rdx
  char v120; // r12
  __int64 v121; // rdx
  __int64 v122; // rsi
  __int64 v123; // rax
  unsigned __int64 v124; // rdx
  char v125; // r12
  __int64 v126; // rdx
  __int64 v127; // rsi
  __int64 v128; // rax
  unsigned __int64 v129; // rdx
  char v130; // r12
  __int64 v132; // rax
  __int64 v133; // rax
  __int64 v134; // rax
  __int64 v135; // rax
  __int64 v136; // rax
  __int64 v137; // rax
  __int64 v138; // rax
  __int64 v139; // rax
  __int64 v140; // rax
  __int64 v141; // rax
  __int64 v142; // rax
  __int64 v143; // rax
  __int64 v144; // rax
  __int64 v145; // rax
  __int64 v146; // rax
  __int64 v147; // rax
  __int64 v148; // rax
  __int64 v149; // rax
  __int64 v150; // rax
  __int64 v151; // rax
  __int64 v152; // rax
  __int64 v153; // rax
  __int64 v154; // rax
  __int64 v155; // rax
  __int64 v156; // rax
  __int64 v157; // rax
  __int64 v158; // rax
  __int64 v159; // rax
  __int64 v160; // rax

  v3 = a2[1];
  v4 = *a2;
  if ( a2[2] < (unsigned __int64)(v3 + 1) )
  {
    v150 = qvector_reserve(a2, v4, v3 + 1, 1);
    *a2 = v150;
    v4 = v150;
    v3 = a2[1];
  }
  *(_BYTE *)(v4 + v3) = 73;
  v5 = a2[1];
  v6 = *a2;
  v7 = v5 + 1;
  v8 = v5 + 2;
  a2[1] = v7;
  if ( a2[2] < v8 )
  {
    v149 = qvector_reserve(a2, v6, v8, 1);
    *a2 = v149;
    v6 = v149;
    v7 = a2[1];
  }
  *(_BYTE *)(v6 + v7) = 68;
  v9 = a2[1];
  v10 = *a2;
  v11 = v9 + 1;
  v12 = v9 + 2;
  a2[1] = v11;
  if ( a2[2] < v12 )
  {
    v148 = qvector_reserve(a2, v10, v12, 1);
    *a2 = v148;
    v10 = v148;
    v11 = a2[1];
  }
  *(_BYTE *)(v10 + v11) = 65;
  ++a2[1];
  sub_62A1C0(a2, (const void *)(a1 + 4), 2u);
  v13 = strlen((const char *)(a1 + 6));
  if ( HIDWORD(v13) )
    goto LABEL_66;
  sub_3A0970(a2, v13);
  if ( v13 )
    sub_62A1C0(a2, (const void *)(a1 + 6), v13);
  sub_62BD80(a2, *(_WORD *)(a1 + 22));
  sub_3A0970(a2, *(_DWORD *)(a1 + 24));
  sub_3A0970(a2, *(_DWORD *)(a1 + 28));
  sub_62BD80(a2, *(_WORD *)(a1 + 32));
  sub_62BD80(a2, *(_WORD *)(a1 + 34));
  sub_62BD80(a2, *(_WORD *)(a1 + 36));
  sub_62BD80(a2, *(unsigned __int8 *)(a1 + 38));
  v14 = a2[1];
  v15 = *(_BYTE *)(a1 + 39);
  v16 = *a2;
  if ( a2[2] < (unsigned __int64)(v14 + 1) )
  {
    v147 = qvector_reserve(a2, v16, v14 + 1, 1);
    *a2 = v147;
    v16 = v147;
    v14 = a2[1];
  }
  *(_BYTE *)(v16 + v14) = v15;
  ++a2[1];
  sub_3A0970(a2, *(_DWORD *)(a1 + 40));
  sub_3A0970(a2, *(_DWORD *)(a1 + 44));
  sub_40D2A0(a2, *(_QWORD *)(a1 + 48));
  sub_40D2A0(a2, *(_QWORD *)(a1 + 56));
  sub_40D2A0(a2, *(_QWORD *)(a1 + 64));
  sub_40D2A0(a2, *(_QWORD *)(a1 + 72));
  sub_40D2A0(a2, *(_QWORD *)(a1 + 80));
  sub_40D2A0(a2, *(_QWORD *)(a1 + 88));
  sub_40D2A0(a2, *(_QWORD *)(a1 + 96));
  sub_40D2A0(a2, *(_QWORD *)(a1 + 104));
  sub_40D2A0(a2, *(_QWORD *)(a1 + 112));
  sub_40D2A0(a2, *(_QWORD *)(a1 + 120));
  sub_40D2A0(a2, *(_QWORD *)(a1 + 128));
  sub_40D2A0(a2, *(_QWORD *)(a1 + 136));
  sub_40D2A0(a2, *(_QWORD *)(a1 + 144));
  sub_40D2A0(a2, *(_QWORD *)(a1 + 152));
  sub_40D2A0(a2, *(_QWORD *)(a1 + 160));
  sub_40D2A0(a2, *(_QWORD *)(a1 + 168) - *(_QWORD *)(a1 + 160));
  sub_40D2A0(a2, *(_QWORD *)(a1 + 176));
  v17 = a2[1];
  v18 = *(_BYTE *)(a1 + 184);
  v19 = *a2;
  if ( a2[2] < (unsigned __int64)(v17 + 1) )
  {
    v145 = qvector_reserve(a2, v19, v17 + 1, 1);
    *a2 = v145;
    v19 = v145;
    v17 = a2[1];
  }
  *(_BYTE *)(v19 + v17) = v18;
  v20 = a2[1];
  v21 = *a2;
  v22 = v20 + 1;
  v23 = v20 + 2;
  a2[1] = v22;
  v24 = *(_BYTE *)(a1 + 185);
  if ( a2[2] < v23 )
  {
    v144 = qvector_reserve(a2, v21, v23, 1);
    *a2 = v144;
    v21 = v144;
    v22 = a2[1];
  }
  *(_BYTE *)(v21 + v22) = v24;
  v25 = a2[1];
  v26 = *a2;
  v27 = v25 + 1;
  v28 = v25 + 2;
  a2[1] = v27;
  v29 = *(_BYTE *)(a1 + 186);
  if ( a2[2] < v28 )
  {
    v143 = qvector_reserve(a2, v26, v28, 1);
    *a2 = v143;
    v26 = v143;
    v27 = a2[1];
  }
  *(_BYTE *)(v26 + v27) = v29;
  v30 = a2[1];
  v31 = *a2;
  v32 = v30 + 1;
  v33 = v30 + 2;
  a2[1] = v32;
  v34 = *(_BYTE *)(a1 + 187);
  if ( a2[2] < v33 )
  {
    v142 = qvector_reserve(a2, v31, v33, 1);
    *a2 = v142;
    v31 = v142;
    v32 = a2[1];
  }
  *(_BYTE *)(v31 + v32) = v34;
  ++a2[1];
  sub_62BD80(a2, *(_WORD *)(a1 + 188));
  v35 = a2[1];
  v36 = *(_BYTE *)(a1 + 190);
  v37 = *a2;
  if ( a2[2] < (unsigned __int64)(v35 + 1) )
  {
    v141 = qvector_reserve(a2, v37, v35 + 1, 1);
    *a2 = v141;
    v37 = v141;
    v35 = a2[1];
  }
  *(_BYTE *)(v37 + v35) = v36;
  ++a2[1];
  sub_3A0970(a2, *(_DWORD *)(a1 + 192));
  sub_3A0970(a2, *(_DWORD *)(a1 + 196));
  v38 = a2[1];
  v39 = *(_BYTE *)(a1 + 200);
  v40 = *a2;
  if ( a2[2] < (unsigned __int64)(v38 + 1) )
  {
    v140 = qvector_reserve(a2, v40, v38 + 1, 1);
    *a2 = v140;
    v40 = v140;
    v38 = a2[1];
  }
  *(_BYTE *)(v40 + v38) = v39;
  v41 = a2[1];
  v42 = *a2;
  v43 = v41 + 1;
  v44 = v41 + 2;
  a2[1] = v43;
  v45 = *(_BYTE *)(a1 + 201);
  if ( a2[2] < v44 )
  {
    v139 = qvector_reserve(a2, v42, v44, 1);
    *a2 = v139;
    v42 = v139;
    v43 = a2[1];
  }
  *(_BYTE *)(v42 + v43) = v45;
  v46 = a2[1];
  v47 = *a2;
  v48 = v46 + 1;
  v49 = v46 + 2;
  a2[1] = v48;
  v50 = *(_BYTE *)(a1 + 202);
  if ( a2[2] < v49 )
  {
    v138 = qvector_reserve(a2, v47, v49, 1);
    *a2 = v138;
    v47 = v138;
    v48 = a2[1];
  }
  *(_BYTE *)(v47 + v48) = v50;
  v51 = a2[1];
  v52 = *a2;
  v53 = v51 + 1;
  v54 = v51 + 2;
  a2[1] = v53;
  v55 = *(_BYTE *)(a1 + 203);
  if ( a2[2] < v54 )
  {
    v137 = qvector_reserve(a2, v52, v54, 1);
    *a2 = v137;
    v52 = v137;
    v53 = a2[1];
  }
  *(_BYTE *)(v52 + v53) = v55;
  ++a2[1];
  sub_62BD80(a2, *(_WORD *)(a1 + 204));
  sub_62BD80(a2, *(_WORD *)(a1 + 206));
  sub_3A0970(a2, *(_DWORD *)(a1 + 208));
  v56 = a2[1];
  v57 = *(_BYTE *)(a1 + 212);
  v58 = *a2;
  if ( a2[2] < (unsigned __int64)(v56 + 1) )
  {
    v136 = qvector_reserve(a2, v58, v56 + 1, 1);
    *a2 = v136;
    v58 = v136;
    v56 = a2[1];
  }
  *(_BYTE *)(v58 + v56) = v57;
  v59 = a2[1];
  v60 = *a2;
  v61 = v59 + 1;
  v62 = v59 + 2;
  a2[1] = v61;
  v63 = *(_BYTE *)(a1 + 213);
  if ( a2[2] < v62 )
  {
    v135 = qvector_reserve(a2, v60, v62, 1);
    *a2 = v135;
    v60 = v135;
    v61 = a2[1];
  }
  *(_BYTE *)(v60 + v61) = v63;
  ++a2[1];
  sub_62BD80(a2, *(_WORD *)(a1 + 214));
  v64 = a2[1];
  v65 = *(_BYTE *)(a1 + 216);
  v66 = *a2;
  if ( a2[2] < (unsigned __int64)(v64 + 1) )
  {
    v134 = qvector_reserve(a2, v66, v64 + 1, 1);
    *a2 = v134;
    v66 = v134;
    v64 = a2[1];
  }
  *(_BYTE *)(v66 + v64) = v65;
  v67 = a2[1];
  v68 = *a2;
  v69 = v67 + 1;
  v70 = v67 + 2;
  a2[1] = v69;
  v71 = *(_BYTE *)(a1 + 217);
  if ( a2[2] < v70 )
  {
    v133 = qvector_reserve(a2, v68, v70, 1);
    *a2 = v133;
    v68 = v133;
    v69 = a2[1];
  }
  *(_BYTE *)(v68 + v69) = v71;
  v72 = a2[1];
  v73 = *a2;
  v74 = v72 + 1;
  v75 = v72 + 2;
  a2[1] = v74;
  v76 = *(_BYTE *)(a1 + 218);
  if ( a2[2] < v75 )
  {
    v132 = qvector_reserve(a2, v73, v75, 1);
    *a2 = v132;
    v73 = v132;
    v74 = a2[1];
  }
  *(_BYTE *)(v73 + v74) = v76;
  v77 = a2[1];
  v78 = *a2;
  v79 = v77 + 1;
  v80 = v77 + 2;
  a2[1] = v79;
  v81 = *(_BYTE *)(a1 + 219);
  if ( a2[2] < v80 )
  {
    v146 = qvector_reserve(a2, v78, v80, 1);
    *a2 = v146;
    v78 = v146;
    v79 = a2[1];
  }
  *(_BYTE *)(v78 + v79) = v81;
  ++a2[1];
  sub_3A0970(a2, *(_DWORD *)(a1 + 220));
  v82 = strlen((const char *)(a1 + 224));
  if ( HIDWORD(v82) )
LABEL_66:
    sub_6299B0();
  sub_3A0970(a2, v82);
  if ( v82 )
    sub_62A1C0(a2, (const void *)(a1 + 224), v82);
  sub_40D2A0(a2, *(_QWORD *)(a1 + 240));
  sub_40D2A0(a2, *(_QWORD *)(a1 + 248));
  v83 = a2[1];
  v84 = *(_BYTE *)(a1 + 256);
  v85 = *a2;
  if ( a2[2] < (unsigned __int64)(v83 + 1) )
  {
    v160 = qvector_reserve(a2, v85, v83 + 1, 1);
    *a2 = v160;
    v85 = v160;
    v83 = a2[1];
  }
  *(_BYTE *)(v85 + v83) = v84;
  v86 = a2[1];
  v87 = *a2;
  v88 = v86 + 1;
  v89 = v86 + 2;
  a2[1] = v88;
  v90 = *(_BYTE *)(a1 + 257);
  if ( a2[2] < v89 )
  {
    v159 = qvector_reserve(a2, v87, v89, 1);
    *a2 = v159;
    v87 = v159;
    v88 = a2[1];
  }
  *(_BYTE *)(v87 + v88) = v90;
  v91 = a2[1];
  v92 = *a2;
  v93 = v91 + 1;
  v94 = v91 + 2;
  a2[1] = v93;
  v95 = *(_BYTE *)(a1 + 258);
  if ( a2[2] < v94 )
  {
    v158 = qvector_reserve(a2, v92, v94, 1);
    *a2 = v158;
    v92 = v158;
    v93 = a2[1];
  }
  *(_BYTE *)(v92 + v93) = v95;
  v96 = a2[1];
  v97 = *a2;
  v98 = v96 + 1;
  v99 = v96 + 2;
  a2[1] = v98;
  v100 = *(_BYTE *)(a1 + 259);
  if ( a2[2] < v99 )
  {
    v157 = qvector_reserve(a2, v97, v99, 1);
    *a2 = v157;
    v97 = v157;
    v98 = a2[1];
  }
  *(_BYTE *)(v97 + v98) = v100;
  v101 = a2[1];
  v102 = *a2;
  v103 = v101 + 1;
  v104 = v101 + 2;
  a2[1] = v103;
  v105 = *(_BYTE *)(a1 + 260);
  if ( a2[2] < v104 )
  {
    v156 = qvector_reserve(a2, v102, v104, 1);
    *a2 = v156;
    v102 = v156;
    v103 = a2[1];
  }
  *(_BYTE *)(v102 + v103) = v105;
  v106 = a2[1];
  v107 = *a2;
  v108 = v106 + 1;
  v109 = v106 + 2;
  a2[1] = v108;
  v110 = *(_BYTE *)(a1 + 261);
  if ( a2[2] < v109 )
  {
    v155 = qvector_reserve(a2, v107, v109, 1);
    *a2 = v155;
    v107 = v155;
    v108 = a2[1];
  }
  *(_BYTE *)(v107 + v108) = v110;
  v111 = a2[1];
  v112 = *a2;
  v113 = v111 + 1;
  v114 = v111 + 2;
  a2[1] = v113;
  v115 = *(_BYTE *)(a1 + 262);
  if ( a2[2] < v114 )
  {
    v154 = qvector_reserve(a2, v112, v114, 1);
    *a2 = v154;
    v112 = v154;
    v113 = a2[1];
  }
  *(_BYTE *)(v112 + v113) = v115;
  v116 = a2[1];
  v117 = *a2;
  v118 = v116 + 1;
  v119 = v116 + 2;
  a2[1] = v118;
  v120 = *(_BYTE *)(a1 + 263);
  if ( a2[2] < v119 )
  {
    v153 = qvector_reserve(a2, v117, v119, 1);
    *a2 = v153;
    v117 = v153;
    v118 = a2[1];
  }
  *(_BYTE *)(v117 + v118) = v120;
  v121 = a2[1];
  v122 = *a2;
  v123 = v121 + 1;
  v124 = v121 + 2;
  a2[1] = v123;
  v125 = *(_BYTE *)(a1 + 264);
  if ( a2[2] < v124 )
  {
    v152 = qvector_reserve(a2, v122, v124, 1);
    *a2 = v152;
    v122 = v152;
    v123 = a2[1];
  }
  *(_BYTE *)(v122 + v123) = v125;
  v126 = a2[1];
  v127 = *a2;
  v128 = v126 + 1;
  v129 = v126 + 2;
  a2[1] = v128;
  v130 = *(_BYTE *)(a1 + 265);
  if ( a2[2] < v129 )
  {
    v151 = qvector_reserve(a2, v127, v129, 1);
    *a2 = v151;
    v127 = v151;
    v128 = a2[1];
  }
  *(_BYTE *)(v127 + v128) = v130;
  ++a2[1];
  sub_3A0970(a2, *(_DWORD *)(a1 + 272));
  sub_3A0970(a2, *(_DWORD *)(a1 + 276));
  return sub_3A0970(a2, *(_DWORD *)(a1 + 268));
}
