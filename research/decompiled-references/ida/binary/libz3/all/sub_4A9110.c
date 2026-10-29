__int64 __fastcall sub_4A9110(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4, __int64 a5, int *a6)
{
  __int64 v6; // r15
  __int64 v7; // rdx
  _QWORD *v10; // rax
  __int64 v11; // r8
  __int64 v12; // rcx
  void *v13; // rdi
  __int64 v14; // r12
  __int64 v15; // r8
  int v16; // eax
  void *v17; // rdi
  int v18; // edx
  char v19; // cl
  void *v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rdx
  char v23; // si
  __int64 v24; // rax
  char v25; // cl
  __int64 v26; // rdx
  void *v27; // rdi
  __int64 *v28; // rax
  __int64 v29; // r8
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r15
  int v33; // eax
  void *v34; // r15
  void *v35; // r15
  int v36; // edx
  char v37; // cl
  void *v38; // r15
  __int64 v39; // rax
  __int64 v40; // rdx
  char v41; // si
  __int64 v42; // rax
  char v43; // cl
  __int64 v44; // rdx
  void *v45; // rdi
  _QWORD *v46; // rax
  __int64 v47; // r15
  __int64 v48; // r8
  int v49; // eax
  void *v50; // r15
  void *v51; // r15
  void *v52; // rdi
  _QWORD *v53; // rax
  __int64 v54; // r15
  __int64 v55; // r8
  int v56; // eax
  void *v57; // r15
  void *v58; // r15
  void *v59; // r15
  void *v60; // rdi
  void *v61; // r15
  void *v62; // r15
  char v63; // cl
  void *v64; // r15
  int v65; // eax
  __int64 v66; // rax
  char v67; // dl
  char v68; // si
  int v69; // edx
  __int64 v70; // rax
  char v71; // cl
  __int64 v72; // rdx
  void *v73; // r15
  void *v74; // r15
  int *v75; // r15
  void *v76; // rdi
  __int64 v77; // rdx
  __int64 v78; // rax
  int v79; // edx
  void *v80; // rdi
  void *v81; // rdi
  __int64 v82; // rcx
  __int64 v83; // r15
  int v84; // eax
  void *v85; // r15
  void *v86; // r15
  void *v87; // r15
  void *v88; // r15
  void *v89; // r15
  void *v90; // r15
  void *v91; // r15
  void *v92; // r15
  int v93; // eax
  void *v94; // r15
  void *v95; // r15
  void *v96; // rdi
  int v97; // eax
  void *v98; // r15
  void *v99; // r15
  void *v100; // r15
  bool v101; // al
  int *v102; // rdi
  void *v103; // rbx
  void *v105; // r15
  int v106; // eax
  void *v107; // r15
  void *v108; // r15
  void *v109; // r15
  int v110; // edx
  char v111; // cl
  __int64 v112; // rax
  __int64 v113; // rdx
  char v114; // si
  __int64 v115; // rax
  char v116; // cl
  __int64 v117; // rdx
  void *v118; // r13
  void *v119; // r13
  int v120; // eax
  void *v121; // r13
  void *v122; // r13
  void *v123; // r13
  int v124; // edx
  char v125; // cl
  void *v126; // r13
  __int64 v127; // rax
  __int64 v128; // rdx
  char v129; // si
  __int64 v130; // rax
  char v131; // cl
  __int64 v132; // rdx
  void *v133; // r13
  int v134; // eax
  void *v135; // r13
  void *v136; // r13
  void *v137; // r13
  char v138; // cl
  void *v139; // rbp
  int v140; // eax
  __int64 v141; // rax
  char v142; // dl
  char v143; // si
  int v144; // edx
  __int64 v145; // rax
  char v146; // cl
  __int64 v147; // rdx
  void *v148; // [rsp+0h] [rbp-148h]
  __int64 i; // [rsp+0h] [rbp-148h]
  __int64 v150; // [rsp+0h] [rbp-148h]
  __int64 v151; // [rsp+0h] [rbp-148h]
  __int64 v152; // [rsp+0h] [rbp-148h]
  __int64 v153; // [rsp+0h] [rbp-148h]
  void *v154; // [rsp+0h] [rbp-148h]
  void *v155; // [rsp+0h] [rbp-148h]
  void *v156; // [rsp+0h] [rbp-148h]
  void *v157; // [rsp+0h] [rbp-148h]
  void *v158; // [rsp+0h] [rbp-148h]
  __int64 v160; // [rsp+10h] [rbp-138h]
  __int64 v162; // [rsp+28h] [rbp-120h]
  __int64 v163; // [rsp+28h] [rbp-120h]
  __int64 v164; // [rsp+28h] [rbp-120h]
  void *v165; // [rsp+38h] [rbp-110h]
  void *v166; // [rsp+38h] [rbp-110h]
  void *v167; // [rsp+38h] [rbp-110h]
  __int64 v168; // [rsp+38h] [rbp-110h]
  void *v169; // [rsp+38h] [rbp-110h]
  void *v170; // [rsp+38h] [rbp-110h]
  void *v171; // [rsp+40h] [rbp-108h]
  void *v172; // [rsp+40h] [rbp-108h]
  __int64 v173; // [rsp+40h] [rbp-108h]
  __int64 v174; // [rsp+58h] [rbp-F0h]
  __int64 v175; // [rsp+60h] [rbp-E8h]
  int v176; // [rsp+70h] [rbp-D8h] BYREF
  char v177; // [rsp+74h] [rbp-D4h]
  __int64 v178; // [rsp+78h] [rbp-D0h]
  int v179; // [rsp+80h] [rbp-C8h] BYREF
  char v180; // [rsp+84h] [rbp-C4h]
  __int64 v181; // [rsp+88h] [rbp-C0h]
  int v182; // [rsp+90h] [rbp-B8h] BYREF
  char v183; // [rsp+94h] [rbp-B4h]
  __int64 v184; // [rsp+98h] [rbp-B0h]
  int v185; // [rsp+A0h] [rbp-A8h] BYREF
  char v186; // [rsp+A4h] [rbp-A4h]
  __int64 v187; // [rsp+A8h] [rbp-A0h]
  int v188; // [rsp+B0h] [rbp-98h] BYREF
  char v189; // [rsp+B4h] [rbp-94h]
  __int64 v190; // [rsp+B8h] [rbp-90h]
  int v191; // [rsp+C0h] [rbp-88h] BYREF
  char v192; // [rsp+C4h] [rbp-84h]
  __int64 v193; // [rsp+C8h] [rbp-80h]
  __int64 v194; // [rsp+D0h] [rbp-78h] BYREF
  __int64 v195; // [rsp+D8h] [rbp-70h]
  int v196; // [rsp+E0h] [rbp-68h] BYREF
  char v197; // [rsp+E4h] [rbp-64h]
  __int64 v198; // [rsp+E8h] [rbp-60h]
  __int64 v199; // [rsp+F0h] [rbp-58h] BYREF
  __int64 v200; // [rsp+F8h] [rbp-50h]
  __int64 v201; // [rsp+100h] [rbp-48h] BYREF
  __int64 v202; // [rsp+108h] [rbp-40h]

  v6 = a2;
  v7 = 32LL * a3;
  v10 = *(_QWORD **)(a1 + 8);
  v11 = v10[1];
  v12 = *v10 + v7;
  v174 = v7;
  v13 = qword_1C7F2C0;
  v14 = v12;
  v199 = 0;
  v15 = v7 + v11;
  v200 = 0;
  v201 = 1;
  v202 = 0;
  if ( (*(_BYTE *)(v12 + 4) & 1) != 0 )
  {
    v160 = v15;
    v154 = qword_1C7F2C0;
    sub_182C690(qword_1C7F2C0, &v199, v12);
    v15 = v160;
    v13 = v154;
  }
  else
  {
    LODWORD(v199) = *(_DWORD *)v12;
  }
  if ( (*(_BYTE *)(v14 + 20) & 1) != 0 )
  {
    v152 = v15;
    sub_182C690(v13, &v201, v14 + 16);
    v15 = v152;
  }
  else
  {
    v16 = *(_DWORD *)(v14 + 16);
    BYTE4(v201) &= ~1u;
    LODWORD(v201) = v16;
  }
  if ( (v201 & 0x100000000LL) != 0 || (_DWORD)v201 != 1 || (*(_BYTE *)(v15 + 20) & 1) != 0 || *(_DWORD *)(v15 + 16) != 1 )
  {
    sub_1852000(qword_1C7F2C0, &v199, v15);
  }
  else
  {
    v157 = qword_1C7F2C0;
    sub_1832A70(qword_1C7F2C0, &v199, v15);
    sub_182CBA0(v157, &v201);
    BYTE4(v201) &= ~1u;
    LODWORD(v201) = 1;
  }
  BYTE4(v194) &= 0xFCu;
  v17 = qword_1C7F2C0;
  v197 &= 0xFCu;
  LODWORD(v194) = 0;
  v195 = 0;
  v196 = 1;
  v198 = 0;
  if ( (v199 & 0x100000000LL) != 0 )
    sub_182C690(qword_1C7F2C0, &v194, &v199);
  else
    LODWORD(v194) = v199;
  if ( (v201 & 0x100000000LL) != 0 )
  {
    sub_182C690(v17, &v196, &v201);
  }
  else
  {
    v197 &= ~1u;
    v196 = v201;
  }
  v148 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v199);
  sub_182CBA0(v148, &v201);
  v18 = v194;
  v19 = BYTE4(v194);
  v20 = qword_1C7F2C0;
  LODWORD(v194) = *(_DWORD *)a4;
  v21 = *(_QWORD *)(a4 + 8);
  *(_DWORD *)a4 = v18;
  v22 = v195;
  v195 = v21;
  LOBYTE(v21) = *(_BYTE *)(a4 + 4);
  *(_QWORD *)(a4 + 8) = v22;
  LOBYTE(v22) = v19;
  v19 &= ~2u;
  v23 = v21 & 0xFD;
  BYTE4(v194) = v21 & 1 | v19 & 0xFE | v21 & 2;
  LODWORD(v21) = *(_DWORD *)(a4 + 16);
  *(_BYTE *)(a4 + 4) = v19 & 1 | v23 & 0xFE | v22 & 2;
  LODWORD(v22) = v196;
  v196 = v21;
  v24 = *(_QWORD *)(a4 + 24);
  v25 = v197;
  *(_DWORD *)(a4 + 16) = v22;
  v26 = v198;
  v198 = v24;
  LOBYTE(v24) = *(_BYTE *)(a4 + 20);
  *(_QWORD *)(a4 + 24) = v26;
  LOBYTE(v26) = v25;
  v25 &= ~2u;
  v197 = v24 & 1 | v25 & 0xFE | v24 & 2;
  *(_BYTE *)(a4 + 20) = v25 & 1 | v24 & 0xFC | v26 & 2;
  sub_182CBA0(v20, &v194);
  sub_182CBA0(v20, &v196);
  v27 = qword_1C7F2C0;
  v175 = 32 * v6;
  v28 = *(__int64 **)(a1 + 8);
  v29 = *v28;
  v30 = v28[1] + 32 * v6;
  v199 = 0;
  v200 = 0;
  v201 = 1;
  v31 = 32 * v6 + v29;
  v32 = v30;
  v202 = 0;
  if ( (*(_BYTE *)(v30 + 4) & 1) != 0 )
  {
    v163 = v31;
    sub_182C690(qword_1C7F2C0, &v199, v30);
    v31 = v163;
  }
  else
  {
    LODWORD(v199) = *(_DWORD *)v30;
  }
  if ( (*(_BYTE *)(v32 + 20) & 1) != 0 )
  {
    v151 = v31;
    sub_182C690(v27, &v201, v32 + 16);
    v31 = v151;
  }
  else
  {
    v33 = *(_DWORD *)(v32 + 16);
    BYTE4(v201) &= ~1u;
    LODWORD(v201) = v33;
  }
  if ( (v201 & 0x100000000LL) != 0 || (_DWORD)v201 != 1 || (*(_BYTE *)(v31 + 20) & 1) != 0 || *(_DWORD *)(v31 + 16) != 1 )
  {
    sub_1852000(qword_1C7F2C0, &v199, v31);
  }
  else
  {
    v155 = qword_1C7F2C0;
    sub_1832A70(qword_1C7F2C0, &v199, v31);
    sub_182CBA0(v155, &v201);
    BYTE4(v201) &= ~1u;
    LODWORD(v201) = 1;
  }
  BYTE4(v194) &= 0xFCu;
  v34 = qword_1C7F2C0;
  v197 &= 0xFCu;
  LODWORD(v194) = 0;
  v195 = 0;
  v196 = 1;
  v198 = 0;
  if ( (v199 & 0x100000000LL) != 0 )
  {
    sub_182C690(qword_1C7F2C0, &v194, &v199);
    if ( (v201 & 0x100000000LL) == 0 )
      goto LABEL_21;
  }
  else
  {
    LODWORD(v194) = v199;
    if ( (v201 & 0x100000000LL) == 0 )
    {
LABEL_21:
      v197 &= ~1u;
      v196 = v201;
      goto LABEL_22;
    }
  }
  sub_182C690(v34, &v196, &v201);
LABEL_22:
  v35 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v199);
  sub_182CBA0(v35, &v201);
  v36 = v194;
  v37 = BYTE4(v194);
  v38 = qword_1C7F2C0;
  LODWORD(v194) = *(_DWORD *)a5;
  v39 = *(_QWORD *)(a5 + 8);
  *(_DWORD *)a5 = v36;
  v40 = v195;
  v195 = v39;
  LOBYTE(v39) = *(_BYTE *)(a5 + 4);
  *(_QWORD *)(a5 + 8) = v40;
  LOBYTE(v40) = v37;
  v37 &= ~2u;
  v41 = v39 & 0xFD;
  BYTE4(v194) = v39 & 1 | v37 & 0xFE | v39 & 2;
  LODWORD(v39) = *(_DWORD *)(a5 + 16);
  *(_BYTE *)(a5 + 4) = v37 & 1 | v41 & 0xFE | v40 & 2;
  LODWORD(v40) = v196;
  v196 = v39;
  v42 = *(_QWORD *)(a5 + 24);
  v43 = v197;
  *(_DWORD *)(a5 + 16) = v40;
  v44 = v198;
  v198 = v42;
  LOBYTE(v42) = *(_BYTE *)(a5 + 20);
  *(_QWORD *)(a5 + 24) = v44;
  LOBYTE(v44) = v43;
  v43 &= ~2u;
  v197 = v42 & 1 | v43 & 0xFE | v42 & 2;
  *(_BYTE *)(a5 + 20) = v43 & 1 | v42 & 0xFC | v44 & 2;
  sub_182CBA0(v38, &v194);
  sub_182CBA0(v38, &v196);
  v45 = qword_1C7F2C0;
  v46 = *(_QWORD **)(a1 + 8);
  v47 = v46[1] + v175;
  v48 = *v46 + v174;
  v199 = 0;
  v200 = 0;
  v201 = 1;
  v202 = 0;
  if ( (*(_BYTE *)(v47 + 4) & 1) != 0 )
  {
    v164 = v48;
    sub_182C690(qword_1C7F2C0, &v199, v47);
    v48 = v164;
  }
  else
  {
    LODWORD(v199) = *(_DWORD *)v47;
  }
  if ( (*(_BYTE *)(v47 + 20) & 1) != 0 )
  {
    v153 = v48;
    sub_182C690(v45, &v201, v47 + 16);
    v48 = v153;
  }
  else
  {
    v49 = *(_DWORD *)(v47 + 16);
    BYTE4(v201) &= ~1u;
    LODWORD(v201) = v49;
  }
  if ( (v201 & 0x100000000LL) != 0 || (_DWORD)v201 != 1 || (*(_BYTE *)(v48 + 20) & 1) != 0 || *(_DWORD *)(v48 + 16) != 1 )
  {
    sub_1848FF0(qword_1C7F2C0, &v199, v48);
  }
  else
  {
    v158 = qword_1C7F2C0;
    sub_1831650(qword_1C7F2C0, &v199, v48);
    sub_182CBA0(v158, &v201);
    BYTE4(v201) &= ~1u;
    LODWORD(v201) = 1;
  }
  v189 &= 0xFCu;
  v50 = qword_1C7F2C0;
  v192 &= 0xFCu;
  v188 = 0;
  v190 = 0;
  v191 = 1;
  v193 = 0;
  if ( (v199 & 0x100000000LL) != 0 )
    sub_182C690(qword_1C7F2C0, &v188, &v199);
  else
    v188 = v199;
  if ( (v201 & 0x100000000LL) != 0 )
  {
    sub_182C690(v50, &v191, &v201);
  }
  else
  {
    v192 &= ~1u;
    v191 = v201;
  }
  v51 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v199);
  sub_182CBA0(v51, &v201);
  v52 = qword_1C7F2C0;
  v53 = *(_QWORD **)(a1 + 8);
  v54 = *v53 + v175;
  v55 = v53[1] + v174;
  v199 = 0;
  v200 = 0;
  v201 = 1;
  v202 = 0;
  if ( (*(_BYTE *)(v54 + 4) & 1) != 0 )
  {
    v162 = v55;
    sub_182C690(qword_1C7F2C0, &v199, v54);
    v55 = v162;
    if ( (*(_BYTE *)(v54 + 20) & 1) == 0 )
      goto LABEL_35;
LABEL_228:
    v150 = v55;
    sub_182C690(v52, &v201, v54 + 16);
    v55 = v150;
    goto LABEL_36;
  }
  LODWORD(v199) = *(_DWORD *)v54;
  if ( (*(_BYTE *)(v54 + 20) & 1) != 0 )
    goto LABEL_228;
LABEL_35:
  v56 = *(_DWORD *)(v54 + 16);
  BYTE4(v201) &= ~1u;
  LODWORD(v201) = v56;
LABEL_36:
  if ( (v201 & 0x100000000LL) != 0 || (_DWORD)v201 != 1 || (*(_BYTE *)(v55 + 20) & 1) != 0 || *(_DWORD *)(v55 + 16) != 1 )
  {
    sub_1848FF0(qword_1C7F2C0, &v199, v55);
  }
  else
  {
    v156 = qword_1C7F2C0;
    sub_1831650(qword_1C7F2C0, &v199, v55);
    sub_182CBA0(v156, &v201);
    BYTE4(v201) &= ~1u;
    LODWORD(v201) = 1;
  }
  v183 &= 0xFCu;
  v57 = qword_1C7F2C0;
  v186 &= 0xFCu;
  v182 = 0;
  v184 = 0;
  v185 = 1;
  v187 = 0;
  if ( (v199 & 0x100000000LL) != 0 )
  {
    sub_182C690(qword_1C7F2C0, &v182, &v199);
    if ( (v201 & 0x100000000LL) == 0 )
      goto LABEL_41;
  }
  else
  {
    v182 = v199;
    if ( (v201 & 0x100000000LL) == 0 )
    {
LABEL_41:
      v186 &= ~1u;
      v185 = v201;
      goto LABEL_42;
    }
  }
  sub_182C690(v57, &v185, &v201);
LABEL_42:
  v58 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v199);
  sub_182CBA0(v58, &v201);
  v59 = qword_1C7F2C0;
  v199 = 0;
  v200 = 0;
  v201 = 1;
  v202 = 0;
  if ( (v183 & 1) != 0 )
    sub_182C690(qword_1C7F2C0, &v199, &v182);
  else
    LODWORD(v199) = v182;
  if ( (v186 & 1) != 0 )
  {
    sub_182C690(v59, &v201, &v185);
  }
  else
  {
    BYTE4(v201) &= ~1u;
    LODWORD(v201) = v185;
  }
  v60 = qword_1C7F2C0;
  if ( (v201 & 0x100000000LL) != 0 || (_DWORD)v201 != 1 || (v192 & 1) != 0 || v191 != 1 )
  {
    sub_1852000(qword_1C7F2C0, &v199, &v188);
  }
  else
  {
    sub_1832A70(qword_1C7F2C0, &v199, &v188);
    sub_182CBA0(v60, &v201);
    BYTE4(v201) &= ~1u;
    LODWORD(v201) = 1;
  }
  BYTE4(v194) &= 0xFCu;
  v61 = qword_1C7F2C0;
  v197 &= 0xFCu;
  LODWORD(v194) = 0;
  v195 = 0;
  v196 = 1;
  v198 = 0;
  if ( (v199 & 0x100000000LL) != 0 )
    sub_182C690(qword_1C7F2C0, &v194, &v199);
  else
    LODWORD(v194) = v199;
  if ( (v201 & 0x100000000LL) != 0 )
  {
    sub_182C690(v61, &v196, &v201);
  }
  else
  {
    v197 &= ~1u;
    v196 = v201;
  }
  v62 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v199);
  sub_182CBA0(v62, &v201);
  v63 = BYTE4(v194);
  v64 = qword_1C7F2C0;
  v65 = *a6;
  *a6 = v194;
  LODWORD(v194) = v65;
  v66 = *((_QWORD *)a6 + 1);
  *((_QWORD *)a6 + 1) = v195;
  v67 = v63;
  v63 &= ~2u;
  v195 = v66;
  v68 = *((_BYTE *)a6 + 4);
  LOBYTE(v66) = v68 & 2;
  v68 &= ~2u;
  BYTE4(v194) = v68 & 1 | (v63 | v66) & 0xFE;
  LODWORD(v66) = a6[4];
  *((_BYTE *)a6 + 4) = v63 & 1 | v68 & 0xFE | v67 & 2;
  v69 = v196;
  v196 = v66;
  v70 = *((_QWORD *)a6 + 3);
  v71 = v197;
  a6[4] = v69;
  v72 = v198;
  v198 = v70;
  LOBYTE(v70) = *((_BYTE *)a6 + 20);
  *((_QWORD *)a6 + 3) = v72;
  LOBYTE(v72) = v71;
  v71 &= ~2u;
  v197 = v70 & 1 | v71 & 0xFE | v70 & 2;
  *((_BYTE *)a6 + 20) = v71 & 1 | v70 & 0xFC | v72 & 2;
  sub_182CBA0(v64, &v194);
  sub_182CBA0(v64, &v196);
  v73 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v182);
  sub_182CBA0(v73, &v185);
  v74 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v188);
  sub_182CBA0(v74, &v191);
  for ( i = 0; (unsigned int)i < *(_DWORD *)a1; ++i )
  {
    v76 = qword_1C7F2C0;
    v77 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * i) + v174;
    v199 = 0;
    v200 = 0;
    v78 = v77;
    v201 = 1;
    v202 = 0;
    if ( (*(_BYTE *)(a5 + 4) & 1) != 0 )
    {
      v173 = v77;
      sub_182C690(qword_1C7F2C0, &v199, a5);
      v78 = v173;
    }
    else
    {
      LODWORD(v199) = *(_DWORD *)a5;
    }
    if ( (*(_BYTE *)(a5 + 20) & 1) != 0 )
    {
      v168 = v78;
      sub_182C690(v76, &v201, a5 + 16);
      v78 = v168;
    }
    else
    {
      v79 = *(_DWORD *)(a5 + 16);
      BYTE4(v201) &= ~1u;
      LODWORD(v201) = v79;
    }
    if ( (v201 & 0x100000000LL) != 0
      || (_DWORD)v201 != 1
      || (*(_BYTE *)(v78 + 20) & 1) != 0
      || *(_DWORD *)(v78 + 16) != 1 )
    {
      sub_1848FF0(qword_1C7F2C0, &v199, v78);
    }
    else
    {
      v170 = qword_1C7F2C0;
      sub_1831650(qword_1C7F2C0, &v199, v78);
      sub_182CBA0(v170, &v201);
      BYTE4(v201) &= ~1u;
      LODWORD(v201) = 1;
    }
    v183 &= 0xFCu;
    v80 = qword_1C7F2C0;
    v186 &= 0xFCu;
    v182 = 0;
    v184 = 0;
    v185 = 1;
    v187 = 0;
    if ( (v199 & 0x100000000LL) != 0 )
      sub_182C690(qword_1C7F2C0, &v182, &v199);
    else
      v182 = v199;
    if ( (v201 & 0x100000000LL) != 0 )
    {
      sub_182C690(v80, &v185, &v201);
    }
    else
    {
      v186 &= ~1u;
      v185 = v201;
    }
    v167 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v199);
    sub_182CBA0(v167, &v201);
    v81 = qword_1C7F2C0;
    v82 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * i) + v175;
    v199 = 0;
    v200 = 0;
    v83 = v82;
    v201 = 1;
    v202 = 0;
    if ( (*(_BYTE *)(a4 + 4) & 1) != 0 )
    {
      sub_182C690(qword_1C7F2C0, &v199, a4);
      if ( (*(_BYTE *)(a4 + 20) & 1) != 0 )
      {
LABEL_129:
        sub_182C690(v81, &v201, a4 + 16);
        goto LABEL_75;
      }
    }
    else
    {
      LODWORD(v199) = *(_DWORD *)a4;
      if ( (*(_BYTE *)(a4 + 20) & 1) != 0 )
        goto LABEL_129;
    }
    v84 = *(_DWORD *)(a4 + 16);
    BYTE4(v201) &= ~1u;
    LODWORD(v201) = v84;
LABEL_75:
    if ( (v201 & 0x100000000LL) != 0
      || (_DWORD)v201 != 1
      || (*(_BYTE *)(v83 + 20) & 1) != 0
      || *(_DWORD *)(v83 + 16) != 1 )
    {
      sub_1848FF0(qword_1C7F2C0, &v199, v83);
    }
    else
    {
      v169 = qword_1C7F2C0;
      sub_1831650(qword_1C7F2C0, &v199, v83);
      sub_182CBA0(v169, &v201);
      BYTE4(v201) &= ~1u;
      LODWORD(v201) = 1;
    }
    v177 &= 0xFCu;
    v85 = qword_1C7F2C0;
    v180 &= 0xFCu;
    v176 = 0;
    v178 = 0;
    v179 = 1;
    v181 = 0;
    if ( (v199 & 0x100000000LL) != 0 )
      sub_182C690(qword_1C7F2C0, &v176, &v199);
    else
      v176 = v199;
    if ( (v201 & 0x100000000LL) != 0 )
    {
      sub_182C690(v85, &v179, &v201);
    }
    else
    {
      v180 &= ~1u;
      v179 = v201;
    }
    v86 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v199);
    sub_182CBA0(v86, &v201);
    v87 = qword_1C7F2C0;
    v199 = 0;
    v200 = 0;
    v201 = 1;
    v202 = 0;
    if ( (v177 & 1) != 0 )
      sub_182C690(qword_1C7F2C0, &v199, &v176);
    else
      LODWORD(v199) = v176;
    if ( (v180 & 1) != 0 )
    {
      sub_182C690(v87, &v201, &v179);
    }
    else
    {
      BYTE4(v201) &= ~1u;
      LODWORD(v201) = v179;
    }
    v88 = qword_1C7F2C0;
    if ( v182 )
    {
      if ( (_DWORD)v199 )
      {
        if ( (v201 & 0x100000000LL) != 0 || (_DWORD)v201 != 1 || (v186 & 1) != 0 || v185 != 1 )
        {
          sub_1851D20(qword_1C7F2C0, &v199, &v182, &v199);
        }
        else
        {
          sub_1831A80(qword_1C7F2C0, &v199, &v182, &v199);
          sub_182CBA0(v88, &v201);
          BYTE4(v201) &= ~1u;
          LODWORD(v201) = 1;
        }
      }
      else
      {
        if ( (v183 & 1) != 0 )
        {
          sub_182C690(qword_1C7F2C0, &v199, &v182);
        }
        else
        {
          BYTE4(v199) &= ~1u;
          LODWORD(v199) = v182;
        }
        if ( (v186 & 1) != 0 )
        {
          sub_182C690(v88, &v201, &v185);
        }
        else
        {
          BYTE4(v201) &= ~1u;
          LODWORD(v201) = v185;
        }
      }
    }
    else
    {
      if ( (v199 & 0x100000000LL) != 0 )
        sub_182C690(qword_1C7F2C0, &v199, &v199);
      else
        BYTE4(v199) &= ~1u;
      if ( (v201 & 0x100000000LL) != 0 )
        sub_182C690(v88, &v201, &v201);
      else
        BYTE4(v201) &= ~1u;
    }
    v189 &= 0xFCu;
    v89 = qword_1C7F2C0;
    v192 &= 0xFCu;
    v188 = 0;
    v190 = 0;
    v191 = 1;
    v193 = 0;
    if ( (v199 & 0x100000000LL) != 0 )
      sub_182C690(qword_1C7F2C0, &v188, &v199);
    else
      v188 = v199;
    if ( (v201 & 0x100000000LL) != 0 )
    {
      sub_182C690(v89, &v191, &v201);
    }
    else
    {
      v192 &= ~1u;
      v191 = v201;
    }
    v90 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v199);
    sub_182CBA0(v90, &v201);
    v91 = qword_1C7F2C0;
    v199 = 0;
    v200 = 0;
    v201 = 1;
    v202 = 0;
    if ( (v189 & 1) != 0 )
      sub_182C690(qword_1C7F2C0, &v199, &v188);
    else
      LODWORD(v199) = v188;
    if ( (v192 & 1) != 0 )
    {
      sub_182C690(v91, &v201, &v191);
    }
    else
    {
      BYTE4(v201) &= ~1u;
      LODWORD(v201) = v191;
    }
    v92 = qword_1C7F2C0;
    v93 = *a6;
    if ( *a6 )
    {
      if ( (_DWORD)v199 )
      {
        if ( (v201 & 0x100000000LL) != 0 || (_DWORD)v201 != 1 || (a6[5] & 1) != 0 || a6[4] != 1 )
        {
          sub_1851D20(qword_1C7F2C0, &v199, a6, &v199);
        }
        else
        {
          sub_1831A80(qword_1C7F2C0, &v199, a6, &v199);
          sub_182CBA0(v92, &v201);
          BYTE4(v201) &= ~1u;
          LODWORD(v201) = 1;
        }
      }
      else
      {
        if ( (a6[1] & 1) != 0 )
        {
          sub_182C690(qword_1C7F2C0, &v199, a6);
        }
        else
        {
          BYTE4(v199) &= ~1u;
          LODWORD(v199) = v93;
        }
        if ( (a6[5] & 1) != 0 )
        {
          sub_182C690(v92, &v201, a6 + 4);
        }
        else
        {
          v97 = a6[4];
          BYTE4(v201) &= ~1u;
          LODWORD(v201) = v97;
        }
      }
    }
    else
    {
      if ( (v199 & 0x100000000LL) != 0 )
        sub_182C690(qword_1C7F2C0, &v199, &v199);
      else
        BYTE4(v199) &= ~1u;
      if ( (v201 & 0x100000000LL) != 0 )
        sub_182C690(v92, &v201, &v201);
      else
        BYTE4(v201) &= ~1u;
    }
    BYTE4(v194) &= 0xFCu;
    v94 = qword_1C7F2C0;
    v197 &= 0xFCu;
    LODWORD(v194) = 0;
    v195 = 0;
    v196 = 1;
    v198 = 0;
    if ( (v199 & 0x100000000LL) != 0 )
      sub_182C690(qword_1C7F2C0, &v194, &v199);
    else
      LODWORD(v194) = v199;
    if ( (v201 & 0x100000000LL) != 0 )
    {
      sub_182C690(v94, &v196, &v201);
    }
    else
    {
      v197 &= ~1u;
      v196 = v201;
    }
    v95 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v199);
    sub_182CBA0(v95, &v201);
    v96 = qword_1C7F2C0;
    v75 = &qword_1C7F2A0;
    if ( (v194 & 0x100000000LL) != 0 || (*(_BYTE *)(&qword_1C7F2A0 + 1) & 1) != 0 )
    {
      v96 = qword_1C7F2C0;
      if ( !(unsigned int)sub_182C7B0(qword_1C7F2C0, &v194, &qword_1C7F2A0) )
      {
LABEL_56:
        if ( (v197 & 1) != 0 || (qword_1C7F2B0 & 0x100000000LL) != 0 )
          LOBYTE(v75) = (unsigned int)sub_182C7B0(v96, &v196, &qword_1C7F2B0) == 0;
        else
          LOBYTE(v75) = v196 == (_DWORD)qword_1C7F2B0;
        goto LABEL_59;
      }
    }
    else if ( (_DWORD)v194 == qword_1C7F2A0 )
    {
      goto LABEL_56;
    }
    LODWORD(v75) = 0;
LABEL_59:
    v171 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v194);
    sub_182CBA0(v171, &v196);
    v172 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v188);
    sub_182CBA0(v172, &v191);
    v165 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v176);
    sub_182CBA0(v165, &v179);
    v166 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v182);
    sub_182CBA0(v166, &v185);
    if ( !(_BYTE)v75 )
      return (unsigned int)v75;
  }
  v98 = qword_1C7F2C0;
  BYTE4(v199) &= 0xFCu;
  BYTE4(v201) &= 0xFCu;
  LODWORD(v199) = 0;
  v200 = 0;
  LODWORD(v201) = 1;
  v202 = 0;
  sub_1832C70(qword_1C7F2C0, a5, a6, &v199);
  sub_182CBA0(v98, &v201);
  v99 = qword_1C7F2C0;
  BYTE4(v201) &= ~1u;
  v189 &= 0xFCu;
  v192 &= 0xFCu;
  LODWORD(v201) = 1;
  v188 = 0;
  v190 = 0;
  v191 = 1;
  v193 = 0;
  sub_1832C70(qword_1C7F2C0, a4, &v199, &v188);
  sub_182CBA0(v99, &v191);
  v100 = qword_1C7F2C0;
  v192 &= ~1u;
  v191 = 1;
  sub_182CBA0(qword_1C7F2C0, &v199);
  sub_182CBA0(v100, &v201);
  v199 = 0;
  v200 = 0;
  v201 = 1;
  v202 = 0;
  sub_182CBA0(qword_1C7F2C0, &v201);
  BYTE4(v201) &= ~1u;
  v75 = (int *)qword_1C7F2C0;
  LODWORD(v201) = 1;
  if ( (v189 & 1) != 0 || (v199 & 0x100000000LL) != 0 )
  {
    if ( !(unsigned int)sub_182C7B0(qword_1C7F2C0, &v188, &v199) )
      goto LABEL_154;
    v75 = (int *)qword_1C7F2C0;
LABEL_177:
    sub_182CBA0(v75, &v199);
    sub_182CBA0(v75, &v201);
    v105 = qword_1C7F2C0;
    v199 = 0;
    v200 = 0;
    v201 = 1;
    v202 = 0;
    if ( (*(_BYTE *)(a4 + 4) & 1) != 0 )
      sub_182C690(qword_1C7F2C0, &v199, a4);
    else
      LODWORD(v199) = *(_DWORD *)a4;
    if ( (*(_BYTE *)(a4 + 20) & 1) != 0 )
    {
      sub_182C690(v105, &v201, a4 + 16);
    }
    else
    {
      v106 = *(_DWORD *)(a4 + 16);
      BYTE4(v201) &= ~1u;
      LODWORD(v201) = v106;
    }
    v107 = qword_1C7F2C0;
    if ( (_DWORD)v199 && ((v189 & 1) != 0 || v188 != 1 || (v192 & 1) != 0 || v191 != 1) )
    {
      sub_1831650(qword_1C7F2C0, &v199, &v191);
      sub_1831650(v107, &v201, &v188);
      if ( (int)v201 < 0 )
      {
        sub_1831620(v107, &v199);
        sub_1831620(v107, &v201);
      }
      v194 = 0;
      v195 = 0;
      sub_1832C70(v107, &v199, &v201, &v194);
      if ( (v194 & 0x100000000LL) != 0 || (_DWORD)v194 != 1 )
      {
        sub_1833EB0(v107, &v199, &v194, &v199);
        sub_1833EB0(v107, &v201, &v194, &v201);
      }
      sub_182CBA0(v107, &v194);
    }
    else
    {
      if ( (v199 & 0x100000000LL) != 0 )
        sub_182C690(qword_1C7F2C0, &v199, &v199);
      else
        BYTE4(v199) &= ~1u;
      if ( (v201 & 0x100000000LL) != 0 )
        sub_182C690(v107, &v201, &v201);
      else
        BYTE4(v201) &= ~1u;
    }
    BYTE4(v194) &= 0xFCu;
    v108 = qword_1C7F2C0;
    v197 &= 0xFCu;
    LODWORD(v194) = 0;
    v195 = 0;
    v196 = 1;
    v198 = 0;
    if ( (v199 & 0x100000000LL) != 0 )
      sub_182C690(qword_1C7F2C0, &v194, &v199);
    else
      LODWORD(v194) = v199;
    if ( (v201 & 0x100000000LL) != 0 )
    {
      sub_182C690(v108, &v196, &v201);
    }
    else
    {
      v197 &= ~1u;
      v196 = v201;
    }
    v109 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v199);
    sub_182CBA0(v109, &v201);
    v110 = v194;
    v111 = BYTE4(v194);
    LODWORD(v194) = *(_DWORD *)a4;
    v112 = *(_QWORD *)(a4 + 8);
    *(_DWORD *)a4 = v110;
    v113 = v195;
    v195 = v112;
    LOBYTE(v112) = *(_BYTE *)(a4 + 4);
    *(_QWORD *)(a4 + 8) = v113;
    LOBYTE(v113) = v111;
    v111 &= ~2u;
    v114 = v112 & 0xFD;
    BYTE4(v194) = v112 & 1 | v111 & 0xFE | v112 & 2;
    LODWORD(v112) = *(_DWORD *)(a4 + 16);
    *(_BYTE *)(a4 + 4) = v111 & 1 | v114 & 0xFE | v113 & 2;
    LODWORD(v113) = v196;
    v196 = v112;
    v115 = *(_QWORD *)(a4 + 24);
    v116 = v197;
    *(_DWORD *)(a4 + 16) = v113;
    v117 = v198;
    v198 = v115;
    LOBYTE(v115) = *(_BYTE *)(a4 + 20);
    *(_QWORD *)(a4 + 24) = v117;
    LOBYTE(v117) = v116;
    v116 &= ~2u;
    v197 = v115 & 1 | v116 & 0xFE | v115 & 2;
    *(_BYTE *)(a4 + 20) = v116 & 1 | v115 & 0xFC | v117 & 2;
    v118 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v194);
    sub_182CBA0(v118, &v196);
    v119 = qword_1C7F2C0;
    v199 = 0;
    v200 = 0;
    v201 = 1;
    v202 = 0;
    if ( (*(_BYTE *)(a5 + 4) & 1) != 0 )
      sub_182C690(qword_1C7F2C0, &v199, a5);
    else
      LODWORD(v199) = *(_DWORD *)a5;
    if ( (*(_BYTE *)(a5 + 20) & 1) != 0 )
    {
      sub_182C690(v119, &v201, a5 + 16);
    }
    else
    {
      v120 = *(_DWORD *)(a5 + 16);
      BYTE4(v201) &= ~1u;
      LODWORD(v201) = v120;
    }
    v121 = qword_1C7F2C0;
    if ( (_DWORD)v199 && ((v189 & 1) != 0 || v188 != 1 || (v192 & 1) != 0 || v191 != 1) )
    {
      sub_1831650(qword_1C7F2C0, &v199, &v191);
      sub_1831650(v121, &v201, &v188);
      if ( (int)v201 < 0 )
      {
        sub_1831620(v121, &v199);
        sub_1831620(v121, &v201);
      }
      v194 = 0;
      v195 = 0;
      sub_1832C70(v121, &v199, &v201, &v194);
      if ( (v194 & 0x100000000LL) == 0 && (_DWORD)v194 == 1 )
      {
        sub_182CBA0(v121, &v194);
      }
      else
      {
        sub_1833EB0(v121, &v199, &v194, &v199);
        sub_1833EB0(v121, &v201, &v194, &v201);
        sub_182CBA0(v121, &v194);
      }
    }
    else
    {
      if ( (v199 & 0x100000000LL) != 0 )
        sub_182C690(qword_1C7F2C0, &v199, &v199);
      else
        BYTE4(v199) &= ~1u;
      if ( (v201 & 0x100000000LL) != 0 )
        sub_182C690(v121, &v201, &v201);
      else
        BYTE4(v201) &= ~1u;
    }
    BYTE4(v194) &= 0xFCu;
    v122 = qword_1C7F2C0;
    v197 &= 0xFCu;
    LODWORD(v194) = 0;
    v195 = 0;
    v196 = 1;
    v198 = 0;
    if ( (v199 & 0x100000000LL) != 0 )
      sub_182C690(qword_1C7F2C0, &v194, &v199);
    else
      LODWORD(v194) = v199;
    if ( (v201 & 0x100000000LL) != 0 )
    {
      sub_182C690(v122, &v196, &v201);
    }
    else
    {
      v197 &= ~1u;
      v196 = v201;
    }
    v123 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v199);
    sub_182CBA0(v123, &v201);
    v124 = v194;
    v125 = BYTE4(v194);
    v126 = qword_1C7F2C0;
    LODWORD(v194) = *(_DWORD *)a5;
    v127 = *(_QWORD *)(a5 + 8);
    *(_DWORD *)a5 = v124;
    v128 = v195;
    v195 = v127;
    LOBYTE(v127) = *(_BYTE *)(a5 + 4);
    *(_QWORD *)(a5 + 8) = v128;
    LOBYTE(v128) = v125;
    v125 &= ~2u;
    v129 = v127 & 0xFD;
    BYTE4(v194) = v127 & 1 | v125 & 0xFE | v127 & 2;
    LODWORD(v127) = *(_DWORD *)(a5 + 16);
    *(_BYTE *)(a5 + 4) = v125 & 1 | v129 & 0xFE | v128 & 2;
    LODWORD(v128) = v196;
    v196 = v127;
    v130 = *(_QWORD *)(a5 + 24);
    v131 = v197;
    *(_DWORD *)(a5 + 16) = v128;
    v132 = v198;
    v198 = v130;
    LOBYTE(v130) = *(_BYTE *)(a5 + 20);
    *(_QWORD *)(a5 + 24) = v132;
    LOBYTE(v132) = v131;
    v131 &= ~2u;
    v197 = v130 & 1 | v131 & 0xFE | v130 & 2;
    *(_BYTE *)(a5 + 20) = v131 & 1 | v130 & 0xFC | v132 & 2;
    sub_182CBA0(v126, &v194);
    sub_182CBA0(v126, &v196);
    v133 = qword_1C7F2C0;
    v199 = 0;
    v200 = 0;
    v201 = 1;
    v202 = 0;
    if ( (a6[1] & 1) != 0 )
      sub_182C690(qword_1C7F2C0, &v199, a6);
    else
      LODWORD(v199) = *a6;
    if ( (a6[5] & 1) != 0 )
    {
      sub_182C690(v133, &v201, a6 + 4);
    }
    else
    {
      v134 = a6[4];
      BYTE4(v201) &= ~1u;
      LODWORD(v201) = v134;
    }
    v135 = qword_1C7F2C0;
    if ( (_DWORD)v199 && ((v189 & 1) != 0 || v188 != 1 || (v192 & 1) != 0 || v191 != 1) )
    {
      sub_1831650(qword_1C7F2C0, &v199, &v191);
      sub_1831650(v135, &v201, &v188);
      if ( (int)v201 < 0 )
      {
        sub_1831620(v135, &v199);
        sub_1831620(v135, &v201);
      }
      v194 = 0;
      v195 = 0;
      sub_1832C70(v135, &v199, &v201, &v194);
      if ( (v194 & 0x100000000LL) == 0 && (_DWORD)v194 == 1 )
      {
        sub_182CBA0(v135, &v194);
      }
      else
      {
        sub_1833EB0(v135, &v199, &v194, &v199);
        sub_1833EB0(v135, &v201, &v194, &v201);
        sub_182CBA0(v135, &v194);
      }
    }
    else
    {
      if ( (v199 & 0x100000000LL) != 0 )
        sub_182C690(qword_1C7F2C0, &v199, &v199);
      else
        BYTE4(v199) &= ~1u;
      if ( (v201 & 0x100000000LL) != 0 )
        sub_182C690(v135, &v201, &v201);
      else
        BYTE4(v201) &= ~1u;
    }
    BYTE4(v194) &= 0xFCu;
    v136 = qword_1C7F2C0;
    v197 &= 0xFCu;
    LODWORD(v194) = 0;
    v195 = 0;
    v196 = 1;
    v198 = 0;
    if ( (v199 & 0x100000000LL) != 0 )
      sub_182C690(qword_1C7F2C0, &v194, &v199);
    else
      LODWORD(v194) = v199;
    if ( (v201 & 0x100000000LL) != 0 )
    {
      sub_182C690(v136, &v196, &v201);
    }
    else
    {
      v197 &= ~1u;
      v196 = v201;
    }
    v137 = qword_1C7F2C0;
    LODWORD(v75) = 1;
    sub_182CBA0(qword_1C7F2C0, &v199);
    sub_182CBA0(v137, &v201);
    v138 = BYTE4(v194);
    v139 = qword_1C7F2C0;
    v140 = *a6;
    *a6 = v194;
    LODWORD(v194) = v140;
    v141 = *((_QWORD *)a6 + 1);
    *((_QWORD *)a6 + 1) = v195;
    v142 = v138;
    v138 &= ~2u;
    v195 = v141;
    v143 = *((_BYTE *)a6 + 4);
    LOBYTE(v141) = v143 & 2;
    v143 &= ~2u;
    BYTE4(v194) = v143 & 1 | (v138 | v141) & 0xFE;
    LODWORD(v141) = a6[4];
    *((_BYTE *)a6 + 4) = v138 & 1 | v143 & 0xFE | v142 & 2;
    v144 = v196;
    v196 = v141;
    v145 = *((_QWORD *)a6 + 3);
    v146 = v197;
    a6[4] = v144;
    v147 = v198;
    v198 = v145;
    LOBYTE(v145) = *((_BYTE *)a6 + 20);
    *((_QWORD *)a6 + 3) = v147;
    LOBYTE(v147) = v146;
    v146 &= ~2u;
    v197 = v145 & 1 | v146 & 0xFE | v145 & 2;
    *((_BYTE *)a6 + 20) = v146 & 1 | v145 & 0xFC | v147 & 2;
    sub_182CBA0(v139, &v194);
    sub_182CBA0(v139, &v196);
    goto LABEL_159;
  }
  if ( v188 != (_DWORD)v199 )
    goto LABEL_177;
LABEL_154:
  if ( (v192 & 1) != 0 || (v201 & 0x100000000LL) != 0 )
    v101 = (unsigned int)sub_182C7B0(v75, &v191, &v201) == 0;
  else
    v101 = v191 == (_DWORD)v201;
  v75 = (int *)qword_1C7F2C0;
  if ( !v101 )
    goto LABEL_177;
  sub_182CBA0(qword_1C7F2C0, &v199);
  v102 = v75;
  LODWORD(v75) = 0;
  sub_182CBA0(v102, &v201);
LABEL_159:
  v103 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v188);
  sub_182CBA0(v103, &v191);
  return (unsigned int)v75;
}

