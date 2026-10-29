__int64 __fastcall ClpInterior::gutsOfCopy(ClpInterior *this, const ClpInterior *a2)
{
  int v3; // edx
  const void *v4; // r13
  int v5; // eax
  unsigned __int64 v6; // rbx
  void *v7; // rax
  char *v8; // rax
  char *v9; // r8
  unsigned __int64 v10; // rcx
  const void *v11; // r13
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rbx
  void *v14; // rax
  char *v15; // rax
  char *v16; // r8
  const void *v17; // r13
  void *v18; // rax
  void *v19; // rcx
  const void *v20; // r13
  unsigned __int64 v21; // rdx
  size_t v22; // rbx
  void *v23; // rax
  void *v24; // rcx
  const void *v25; // r13
  unsigned __int64 v26; // rbx
  unsigned __int64 v27; // rbx
  void *v28; // rax
  void *v29; // rcx
  const void *v30; // r13
  unsigned __int64 v31; // rdx
  size_t v32; // rbx
  void *v33; // rax
  void *v34; // rax
  void *v35; // rcx
  const void *v36; // r13
  int v37; // edx
  unsigned __int64 v38; // rbx
  void *v39; // rax
  void *v40; // rcx
  ClpLsqr *v41; // rbx
  __int64 v42; // rax
  __int128 v43; // xmm2
  __int128 v44; // xmm1
  __int128 v45; // xmm0
  __int128 v46; // xmm0
  __int128 v47; // xmm10
  __int128 v48; // xmm9
  __int128 v49; // xmm8
  __int128 v50; // xmm7
  __int128 v51; // xmm6
  __int128 v52; // xmm5
  __int128 v53; // xmm4
  __int128 v54; // xmm3
  __int128 v55; // xmm2
  const void *v56; // r13
  unsigned __int64 v57; // rdx
  __int128 v58; // xmm0
  size_t v59; // rbx
  void *v60; // rax
  void *v61; // rax
  void *v62; // rcx
  const void *v63; // r13
  size_t v64; // rbx
  void *v65; // rax
  void *v66; // rax
  void *v67; // rcx
  const void *v68; // r13
  size_t v69; // rbx
  void *v70; // rax
  void *v71; // rax
  void *v72; // rcx
  int v73; // eax
  const void *v74; // r13
  int v75; // eax
  unsigned __int64 v76; // rbx
  void *v77; // rax
  void *v78; // rax
  void *v79; // rcx
  const void *v80; // r13
  unsigned __int64 v81; // rbx
  void *v82; // rax
  void *v83; // rax
  void *v84; // rcx
  const void *v85; // r13
  unsigned __int64 v86; // rbx
  void *v87; // rax
  void *v88; // rax
  void *v89; // rcx
  const void *v90; // r13
  unsigned __int64 v91; // rbx
  void *v92; // rax
  void *v93; // rax
  void *v94; // rcx
  const void *v95; // r13
  unsigned __int64 v96; // rbx
  void *v97; // rax
  void *v98; // rax
  void *v99; // rcx
  const void *v100; // r13
  unsigned __int64 v101; // rbx
  void *v102; // rax
  void *v103; // rax
  void *v104; // rcx
  const void *v105; // r13
  unsigned __int64 v106; // rbx
  void *v107; // rax
  void *v108; // rax
  void *v109; // rcx
  const void *v110; // r13
  unsigned __int64 v111; // rbx
  void *v112; // rax
  void *v113; // rax
  void *v114; // rcx
  const void *v115; // r13
  unsigned __int64 v116; // rbx
  void *v117; // rax
  void *v118; // rax
  void *v119; // rcx
  const void *v120; // r13
  unsigned __int64 v121; // rbx
  void *v122; // rax
  void *v123; // rax
  void *v124; // rcx
  const void *v125; // r13
  size_t v126; // rbx
  void *v127; // rax
  void *v128; // rax
  void *v129; // rcx
  const void *v130; // r13
  int v131; // edx
  unsigned __int64 v132; // rbx
  void *v133; // rax
  void *v134; // rax
  void *v135; // rcx
  const void *v136; // r13
  unsigned __int64 v137; // rbx
  void *v138; // rax
  void *v139; // rax
  void *v140; // rcx
  const void *v141; // r13
  unsigned __int64 v142; // rbx
  void *v143; // rax
  void *v144; // rax
  void *v145; // rcx
  const void *v146; // r13
  unsigned __int64 v147; // rbx
  void *v148; // rax
  void *v149; // rax
  void *v150; // rcx
  const void *v151; // r13
  unsigned __int64 v152; // rbx
  void *v153; // rax
  void *v154; // rax
  void *v155; // rcx
  const void *v156; // r13
  unsigned __int64 v157; // rbx
  void *v158; // rax
  void *v159; // rax
  void *v160; // rcx
  const void *v161; // r13
  unsigned __int64 v162; // rbx
  void *v163; // rax
  void *v164; // rax
  void *v165; // rcx
  const void *v166; // r13
  unsigned __int64 v167; // rbx
  void *v168; // rax
  void *v169; // rax
  void *v170; // rcx
  const void *v171; // r13
  unsigned __int64 v172; // rbx
  void *v173; // rax
  void *v174; // rcx
  __int64 v175; // rdi
  __int64 result; // rax

  v3 = *((_DWORD *)this + 27);
  v4 = *((const void **)a2 + 94);
  v5 = v3 + *((_DWORD *)this + 26);
  if ( v4 )
  {
    if ( (unsigned __int64)v5 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_126;
    v6 = 8LL * v5;
    v7 = (void *)operator new[](v6);
    v8 = (char *)memcpy(v7, v4, v6);
    v3 = *((_DWORD *)this + 27);
    v9 = v8;
    v5 = v3 + *((_DWORD *)this + 26);
  }
  else
  {
    v9 = nullptr;
  }
  v10 = v3;
  v11 = *((const void **)a2 + 97);
  *((_QWORD *)this + 94) = v9;
  v12 = 8LL * v3;
  *((_QWORD *)this + 96) = v9;
  *((_QWORD *)this + 95) = &v9[v12];
  if ( v11 )
  {
    if ( (unsigned __int64)v5 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_126;
    v13 = 8LL * v5;
    v14 = (void *)operator new[](v13);
    v15 = (char *)memcpy(v14, v11, v13);
    v10 = *((int *)this + 27);
    v16 = v15;
    v12 = 8 * v10;
  }
  else
  {
    v16 = nullptr;
  }
  v17 = *((const void **)a2 + 100);
  *((_QWORD *)this + 97) = v16;
  *((_QWORD *)this + 99) = v16;
  *((_QWORD *)this + 98) = &v16[v12];
  if ( v17 )
  {
    if ( v10 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_126;
    v18 = (void *)operator new[](v12);
    v19 = memcpy(v18, v17, v12);
  }
  else
  {
    v19 = nullptr;
  }
  v20 = *((const void **)a2 + 101);
  *((_QWORD *)this + 100) = v19;
  v21 = *((int *)this + 26);
  if ( v20 )
  {
    if ( v21 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_126;
    v22 = 8 * v21;
    v23 = (void *)operator new[](8 * v21);
    v24 = memcpy(v23, v20, v22);
  }
  else
  {
    v24 = nullptr;
  }
  v25 = *((const void **)a2 + 102);
  *((_QWORD *)this + 101) = v24;
  v26 = *((int *)this + 27);
  if ( v25 )
  {
    if ( v26 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_126;
    v27 = 8 * v26;
    v28 = (void *)operator new[](v27);
    v29 = memcpy(v28, v25, v27);
  }
  else
  {
    v29 = nullptr;
  }
  v30 = *((const void **)a2 + 103);
  *((_QWORD *)this + 102) = v29;
  v31 = *((int *)this + 26);
  if ( v30 )
  {
    if ( v31 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_126;
    v32 = 8 * v31;
    v33 = (void *)operator new[](8 * v31);
    v34 = memcpy(v33, v30, v32);
    LODWORD(v31) = *((_DWORD *)this + 26);
    v35 = v34;
  }
  else
  {
    v35 = nullptr;
  }
  v36 = *((const void **)a2 + 104);
  v37 = *((_DWORD *)this + 27) + v31;
  *((_QWORD *)this + 103) = v35;
  if ( v36 )
  {
    if ( (unsigned __int64)v37 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_126;
    v38 = 8LL * v37;
    v39 = (void *)operator new[](v38);
    v40 = memcpy(v39, v36, v38);
  }
  else
  {
    v40 = nullptr;
  }
  v41 = *((ClpLsqr **)a2 + 105);
  *((_QWORD *)this + 104) = v40;
  if ( v41 )
  {
    v41 = (ClpLsqr *)operator new(0x20u);
    ClpLsqr::ClpLsqr(v41, *((const ClpLsqr **)a2 + 105));
  }
  v42 = *((_QWORD *)a2 + 106);
  *((_QWORD *)this + 105) = v41;
  if ( v42 )
    v42 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v42 + 40LL))(v42);
  v43 = *(_OWORD *)((char *)a2 + 696);
  *((_QWORD *)this + 106) = v42;
  v44 = *(_OWORD *)((char *)a2 + 712);
  v45 = *(_OWORD *)((char *)a2 + 728);
  *(_OWORD *)((char *)this + 696) = v43;
  *(_OWORD *)((char *)this + 712) = v44;
  *(_OWORD *)((char *)this + 728) = v45;
  *((_QWORD *)this + 93) = *((_QWORD *)a2 + 93);
  *((_DWORD *)this + 78) = *((_DWORD *)a2 + 78);
  v46 = *(_OWORD *)((char *)a2 + 1016);
  v47 = *(_OWORD *)((char *)a2 + 856);
  v48 = *(_OWORD *)((char *)a2 + 872);
  v49 = *(_OWORD *)((char *)a2 + 888);
  v50 = *(_OWORD *)((char *)a2 + 904);
  v51 = *(_OWORD *)((char *)a2 + 920);
  v52 = *(_OWORD *)((char *)a2 + 936);
  v53 = *(_OWORD *)((char *)a2 + 952);
  v54 = *(_OWORD *)((char *)a2 + 968);
  v55 = *(_OWORD *)((char *)a2 + 984);
  *(_OWORD *)((char *)this + 1000) = *(_OWORD *)((char *)a2 + 1000);
  *(_OWORD *)((char *)this + 856) = v47;
  *(_OWORD *)((char *)this + 872) = v48;
  *(_OWORD *)((char *)this + 888) = v49;
  *(_OWORD *)((char *)this + 904) = v50;
  *(_OWORD *)((char *)this + 920) = v51;
  *(_OWORD *)((char *)this + 936) = v52;
  *(_OWORD *)((char *)this + 952) = v53;
  *(_OWORD *)((char *)this + 968) = v54;
  *(_OWORD *)((char *)this + 984) = v55;
  *(_OWORD *)((char *)this + 1016) = v46;
  v56 = *((const void **)a2 + 138);
  v57 = *((int *)this + 26);
  v58 = *((_OWORD *)a2 + 68);
  *((_OWORD *)this + 67) = *((_OWORD *)a2 + 67);
  *((_OWORD *)this + 68) = v58;
  if ( v56 )
  {
    if ( v57 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_126;
    v59 = 8 * v57;
    v60 = (void *)operator new[](8 * v57);
    v61 = memcpy(v60, v56, v59);
    v57 = *((int *)this + 26);
    v62 = v61;
  }
  else
  {
    v62 = nullptr;
  }
  v63 = *((const void **)a2 + 139);
  *((_QWORD *)this + 138) = v62;
  if ( v63 )
  {
    if ( v57 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_126;
    v64 = 8 * v57;
    v65 = (void *)operator new[](8 * v57);
    v66 = memcpy(v65, v63, v64);
    v57 = *((int *)this + 26);
    v67 = v66;
  }
  else
  {
    v67 = nullptr;
  }
  v68 = *((const void **)a2 + 146);
  *((_QWORD *)this + 139) = v67;
  if ( v68 )
  {
    if ( v57 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_126;
    v69 = 8 * v57;
    v70 = (void *)operator new[](8 * v57);
    v71 = memcpy(v70, v68, v69);
    v57 = *((int *)this + 26);
    v72 = v71;
  }
  else
  {
    v72 = nullptr;
  }
  v73 = *((_DWORD *)this + 27);
  v74 = *((const void **)a2 + 140);
  *((_QWORD *)this + 146) = v72;
  v75 = v57 + v73;
  if ( v74 )
  {
    if ( (unsigned __int64)v75 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_126;
    v76 = 8LL * v75;
    v77 = (void *)operator new[](v76);
    v78 = memcpy(v77, v74, v76);
    v57 = *((int *)this + 26);
    v79 = v78;
    v75 = v57 + *((_DWORD *)this + 27);
  }
  else
  {
    v79 = nullptr;
  }
  v80 = *((const void **)a2 + 141);
  *((_QWORD *)this + 140) = v79;
  if ( v80 )
  {
    if ( (unsigned __int64)v75 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_126;
    v81 = 8LL * v75;
    v82 = (void *)operator new[](v81);
    v83 = memcpy(v82, v80, v81);
    v57 = *((int *)this + 26);
    v84 = v83;
    v75 = v57 + *((_DWORD *)this + 27);
  }
  else
  {
    v84 = nullptr;
  }
  v85 = *((const void **)a2 + 142);
  *((_QWORD *)this + 141) = v84;
  if ( v85 )
  {
    if ( (unsigned __int64)v75 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_126;
    v86 = 8LL * v75;
    v87 = (void *)operator new[](v86);
    v88 = memcpy(v87, v85, v86);
    v57 = *((int *)this + 26);
    v89 = v88;
    v75 = v57 + *((_DWORD *)this + 27);
  }
  else
  {
    v89 = nullptr;
  }
  v90 = *((const void **)a2 + 145);
  *((_QWORD *)this + 142) = v89;
  if ( v90 )
  {
    if ( (unsigned __int64)v75 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_126;
    v91 = 8LL * v75;
    v92 = (void *)operator new[](v91);
    v93 = memcpy(v92, v90, v91);
    v57 = *((int *)this + 26);
    v94 = v93;
    v75 = v57 + *((_DWORD *)this + 27);
  }
  else
  {
    v94 = nullptr;
  }
  v95 = *((const void **)a2 + 147);
  *((_QWORD *)this + 145) = v94;
  if ( v95 )
  {
    if ( (unsigned __int64)v75 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_126;
    v96 = 8LL * v75;
    v97 = (void *)operator new[](v96);
    v98 = memcpy(v97, v95, v96);
    v57 = *((int *)this + 26);
    v99 = v98;
    v75 = v57 + *((_DWORD *)this + 27);
  }
  else
  {
    v99 = nullptr;
  }
  v100 = *((const void **)a2 + 148);
  *((_QWORD *)this + 147) = v99;
  if ( v100 )
  {
    if ( (unsigned __int64)v75 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_126;
    v101 = 8LL * v75;
    v102 = (void *)operator new[](v101);
    v103 = memcpy(v102, v100, v101);
    v57 = *((int *)this + 26);
    v104 = v103;
    v75 = v57 + *((_DWORD *)this + 27);
  }
  else
  {
    v104 = nullptr;
  }
  v105 = *((const void **)a2 + 149);
  *((_QWORD *)this + 148) = v104;
  if ( v105 )
  {
    if ( (unsigned __int64)v75 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_126;
    v106 = 8LL * v75;
    v107 = (void *)operator new[](v106);
    v108 = memcpy(v107, v105, v106);
    v57 = *((int *)this + 26);
    v109 = v108;
    v75 = v57 + *((_DWORD *)this + 27);
  }
  else
  {
    v109 = nullptr;
  }
  v110 = *((const void **)a2 + 150);
  *((_QWORD *)this + 149) = v109;
  if ( v110 )
  {
    if ( (unsigned __int64)v75 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_126;
    v111 = 8LL * v75;
    v112 = (void *)operator new[](v111);
    v113 = memcpy(v112, v110, v111);
    v57 = *((int *)this + 26);
    v114 = v113;
    v75 = v57 + *((_DWORD *)this + 27);
  }
  else
  {
    v114 = nullptr;
  }
  v115 = *((const void **)a2 + 151);
  *((_QWORD *)this + 150) = v114;
  if ( v115 )
  {
    if ( (unsigned __int64)v75 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_126;
    v116 = 8LL * v75;
    v117 = (void *)operator new[](v116);
    v118 = memcpy(v117, v115, v116);
    v57 = *((int *)this + 26);
    v119 = v118;
    v75 = v57 + *((_DWORD *)this + 27);
  }
  else
  {
    v119 = nullptr;
  }
  v120 = *((const void **)a2 + 152);
  *((_QWORD *)this + 151) = v119;
  if ( v120 )
  {
    if ( (unsigned __int64)v75 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_126;
    v121 = 8LL * v75;
    v122 = (void *)operator new[](v121);
    v123 = memcpy(v122, v120, v121);
    v57 = *((int *)this + 26);
    v124 = v123;
  }
  else
  {
    v124 = nullptr;
  }
  v125 = *((const void **)a2 + 153);
  *((_QWORD *)this + 152) = v124;
  if ( v125 )
  {
    if ( v57 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_126;
    v126 = 8 * v57;
    v127 = (void *)operator new[](8 * v57);
    v128 = memcpy(v127, v125, v126);
    LODWORD(v57) = *((_DWORD *)this + 26);
    v129 = v128;
  }
  else
  {
    v129 = nullptr;
  }
  v130 = *((const void **)a2 + 154);
  v131 = *((_DWORD *)this + 27) + v57;
  *((_QWORD *)this + 153) = v129;
  if ( v130 )
  {
    if ( (unsigned __int64)v131 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_126;
    v132 = 8LL * v131;
    v133 = (void *)operator new[](v132);
    v134 = memcpy(v133, v130, v132);
    v131 = *((_DWORD *)this + 26) + *((_DWORD *)this + 27);
    v135 = v134;
  }
  else
  {
    v135 = nullptr;
  }
  v136 = *((const void **)a2 + 155);
  *((_QWORD *)this + 154) = v135;
  if ( v136 )
  {
    if ( (unsigned __int64)v131 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_126;
    v137 = 8LL * v131;
    v138 = (void *)operator new[](v137);
    v139 = memcpy(v138, v136, v137);
    v131 = *((_DWORD *)this + 26) + *((_DWORD *)this + 27);
    v140 = v139;
  }
  else
  {
    v140 = nullptr;
  }
  v141 = *((const void **)a2 + 156);
  *((_QWORD *)this + 155) = v140;
  if ( v141 )
  {
    if ( (unsigned __int64)v131 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_126;
    v142 = 8LL * v131;
    v143 = (void *)operator new[](v142);
    v144 = memcpy(v143, v141, v142);
    v131 = *((_DWORD *)this + 26) + *((_DWORD *)this + 27);
    v145 = v144;
  }
  else
  {
    v145 = nullptr;
  }
  v146 = *((const void **)a2 + 157);
  *((_QWORD *)this + 156) = v145;
  if ( v146 )
  {
    if ( (unsigned __int64)v131 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_126;
    v147 = 8LL * v131;
    v148 = (void *)operator new[](v147);
    v149 = memcpy(v148, v146, v147);
    v131 = *((_DWORD *)this + 26) + *((_DWORD *)this + 27);
    v150 = v149;
  }
  else
  {
    v150 = nullptr;
  }
  v151 = *((const void **)a2 + 158);
  *((_QWORD *)this + 157) = v150;
  if ( v151 )
  {
    if ( (unsigned __int64)v131 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_126;
    v152 = 8LL * v131;
    v153 = (void *)operator new[](v152);
    v154 = memcpy(v153, v151, v152);
    v131 = *((_DWORD *)this + 26) + *((_DWORD *)this + 27);
    v155 = v154;
  }
  else
  {
    v155 = nullptr;
  }
  v156 = *((const void **)a2 + 143);
  *((_QWORD *)this + 158) = v155;
  if ( v156 )
  {
    if ( (unsigned __int64)v131 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_126;
    v157 = 8LL * v131;
    v158 = (void *)operator new[](v157);
    v159 = memcpy(v158, v156, v157);
    v131 = *((_DWORD *)this + 26) + *((_DWORD *)this + 27);
    v160 = v159;
  }
  else
  {
    v160 = nullptr;
  }
  v161 = *((const void **)a2 + 144);
  *((_QWORD *)this + 143) = v160;
  if ( v161 )
  {
    if ( (unsigned __int64)v131 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_126;
    v162 = 8LL * v131;
    v163 = (void *)operator new[](v162);
    v164 = memcpy(v163, v161, v162);
    v131 = *((_DWORD *)this + 26) + *((_DWORD *)this + 27);
    v165 = v164;
  }
  else
  {
    v165 = nullptr;
  }
  v166 = *((const void **)a2 + 159);
  *((_QWORD *)this + 144) = v165;
  if ( v166 )
  {
    if ( (unsigned __int64)v131 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_126;
    v167 = 8LL * v131;
    v168 = (void *)operator new[](v167);
    v169 = memcpy(v168, v166, v167);
    v131 = *((_DWORD *)this + 26) + *((_DWORD *)this + 27);
    v170 = v169;
  }
  else
  {
    v170 = nullptr;
  }
  v171 = *((const void **)a2 + 160);
  *((_QWORD *)this + 159) = v170;
  if ( !v171 )
  {
    v174 = nullptr;
    goto LABEL_95;
  }
  if ( (unsigned __int64)v131 > 0xFFFFFFFFFFFFFFFLL )
LABEL_126:
    __cxa_throw_bad_array_new_length();
  v172 = 8LL * v131;
  v173 = (void *)operator new[](v172);
  v174 = memcpy(v173, v171, v172);
LABEL_95:
  v175 = *((_QWORD *)a2 + 161);
  *((_QWORD *)this + 160) = v174;
  *((_QWORD *)this + 161) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v175 + 56LL))(v175);
  *((_DWORD *)this + 324) = *((_DWORD *)a2 + 324);
  *((_DWORD *)this + 325) = *((_DWORD *)a2 + 325);
  *((_DWORD *)this + 326) = *((_DWORD *)a2 + 326);
  *((_BYTE *)this + 1308) = *((_BYTE *)a2 + 1308);
  *((_BYTE *)this + 1309) = *((_BYTE *)a2 + 1309);
  result = *((unsigned int *)a2 + 328);
  *((_DWORD *)this + 328) = result;
  return result;
}

