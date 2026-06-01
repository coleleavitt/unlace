__int64 __fastcall sub_9FBBC0(__int64 a1, char a2)
{
  unsigned int *v3; // r14
  unsigned int *v4; // rbp
  __int64 v5; // rdx
  unsigned int v6; // r15d
  int *v7; // rax
  int *v8; // rax
  int v9; // edx
  __int64 v10; // rdx
  char v11; // cl
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rdx
  char v15; // cl
  __int64 v16; // rdx
  __int64 v17; // rdx
  char v18; // al
  void *v19; // r13
  void *v20; // r15
  void *v21; // r15
  void *v22; // r13
  __int64 v23; // r13
  __int64 v24; // rax
  unsigned int v25; // r12d
  __int64 v26; // rax
  int *v27; // rax
  __int64 v28; // r13
  int *v29; // rax
  int v30; // edx
  __int64 v31; // rdx
  char v32; // cl
  __int64 v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // rdx
  char v36; // cl
  __int64 v37; // rdx
  __int64 v38; // rdx
  char v39; // al
  int *v40; // rax
  int *v41; // rax
  int v42; // edx
  __int64 v43; // rdx
  char v44; // cl
  __int64 v45; // rdx
  __int64 v46; // rdx
  __int64 v47; // rdx
  char v48; // cl
  __int64 v49; // rdx
  __int64 v50; // rdx
  char v51; // al
  void *v52; // r13
  void *v53; // r15
  void *v54; // r15
  void *v55; // r13
  __int64 v56; // r13
  __int64 v57; // rax
  unsigned int v58; // r12d
  __int64 v59; // rax
  int *v60; // rax
  __int64 v61; // r13
  int *v62; // rax
  int v63; // edx
  __int64 v64; // rdx
  char v65; // cl
  __int64 v66; // rdx
  __int64 v67; // rdx
  __int64 v68; // rdx
  char v69; // cl
  __int64 v70; // rdx
  __int64 v71; // rdx
  char v72; // al
  __int64 v73; // rdi
  __int64 v74; // rbp
  int *v75; // rax
  int v76; // esi
  int v77; // edx
  int v78; // ecx
  __int64 v79; // r8
  __int64 v80; // rdx
  _DWORD *v81; // r10
  int v82; // ecx
  int v83; // edx
  int v84; // r9d
  __int64 v85; // rbx
  __int64 v86; // rax
  unsigned int v87; // ecx
  int v88; // r12d
  __int64 v89; // rax
  unsigned int *v90; // r11
  unsigned int v91; // edx
  __int64 v93; // r8
  unsigned int v94; // ecx
  unsigned int *v95; // rdi
  size_t v96; // rdx
  _DWORD *v97; // rax
  int v98; // ecx
  _DWORD *v99; // rdx
  __int64 v100; // [rsp+8h] [rbp-180h]
  __int64 v101; // [rsp+8h] [rbp-180h]
  __int64 v102; // [rsp+20h] [rbp-168h]
  void *v103; // [rsp+20h] [rbp-168h]
  void *v104; // [rsp+20h] [rbp-168h]
  __int64 v105; // [rsp+20h] [rbp-168h]
  void *v106; // [rsp+20h] [rbp-168h]
  void *v107; // [rsp+20h] [rbp-168h]
  _QWORD v108[2]; // [rsp+30h] [rbp-158h] BYREF
  _QWORD v109[2]; // [rsp+40h] [rbp-148h] BYREF
  _QWORD v110[2]; // [rsp+50h] [rbp-138h] BYREF
  _QWORD v111[2]; // [rsp+60h] [rbp-128h] BYREF
  _QWORD v112[2]; // [rsp+70h] [rbp-118h] BYREF
  _QWORD v113[2]; // [rsp+80h] [rbp-108h] BYREF
  __int64 v114; // [rsp+90h] [rbp-F8h] BYREF
  __int64 v115; // [rsp+98h] [rbp-F0h]
  __int64 v116; // [rsp+A0h] [rbp-E8h] BYREF
  __int64 v117; // [rsp+A8h] [rbp-E0h]
  __int64 v118; // [rsp+B0h] [rbp-D8h] BYREF
  __int64 v119; // [rsp+B8h] [rbp-D0h]
  __int64 v120; // [rsp+C0h] [rbp-C8h] BYREF
  __int64 v121; // [rsp+C8h] [rbp-C0h]
  __int64 v122; // [rsp+D0h] [rbp-B8h] BYREF
  __int64 v123; // [rsp+D8h] [rbp-B0h]
  __int64 v124; // [rsp+E0h] [rbp-A8h] BYREF
  __int64 v125; // [rsp+E8h] [rbp-A0h]
  int v126; // [rsp+F0h] [rbp-98h] BYREF
  char v127; // [rsp+F4h] [rbp-94h]
  __int64 v128; // [rsp+F8h] [rbp-90h]
  int v129; // [rsp+100h] [rbp-88h] BYREF
  char v130; // [rsp+104h] [rbp-84h]
  __int64 v131; // [rsp+108h] [rbp-80h]
  int v132; // [rsp+110h] [rbp-78h] BYREF
  char v133; // [rsp+114h] [rbp-74h]
  __int64 v134; // [rsp+118h] [rbp-70h]
  int v135; // [rsp+120h] [rbp-68h] BYREF
  char v136; // [rsp+124h] [rbp-64h]
  __int64 v137; // [rsp+128h] [rbp-60h]
  int v138; // [rsp+130h] [rbp-58h] BYREF
  char v139; // [rsp+134h] [rbp-54h]
  __int64 v140; // [rsp+138h] [rbp-50h]
  int v141; // [rsp+140h] [rbp-48h] BYREF
  char v142; // [rsp+144h] [rbp-44h]
  __int64 v143; // [rsp+148h] [rbp-40h]

  v108[0] = 0;
  v108[1] = 0;
  v109[0] = 1;
  v109[1] = 0;
  v110[0] = 0;
  v110[1] = 0;
  v111[0] = 1;
  v111[1] = 0;
  v112[0] = 0;
  v112[1] = 0;
  v113[0] = 1;
  v113[1] = 0;
  v114 = 0;
  v115 = 0;
  v116 = 1;
  v117 = 0;
  v118 = 0;
  v119 = 0;
  v120 = 1;
  v3 = *(unsigned int **)(a1 + 928);
  v121 = 0;
  v122 = 0;
  v4 = v3 + 1;
  v123 = 0;
  v124 = 1;
  v125 = 0;
  if ( v3 )
  {
    v5 = *(v3 - 1);
    v3 += v5;
    if ( 4 * v5 == 4 )
      goto LABEL_79;
  }
  v6 = -1;
  if ( !a2 )
  {
    while ( 1 )
    {
      v23 = *v4;
      v24 = *(_QWORD *)(*(_QWORD *)(a1 + 744) + 8 * v23);
      v25 = *v4;
      if ( v24 && (v102 = v24 + 16, v7 = sub_9AD4F0(a1, v23), sub_33D280((__int64)v7, v102)) )
      {
        v8 = sub_9AD4F0(a1, v23);
        sub_9F7AE0((__int64)&v126, *(_QWORD *)(*(_QWORD *)(a1 + 744) + 8 * v23) + 16LL, (__int64)v8);
        v9 = v126;
        v126 = v114;
        LODWORD(v114) = v9;
        v10 = v128;
        v128 = v115;
        v115 = v10;
        v11 = v127 & 1;
        LOBYTE(v10) = BYTE4(v114) & 0xFC | v127 & 2;
        v127 = BYTE4(v114) & 1 | v127 & 0xFC | BYTE4(v114) & 2;
        BYTE4(v114) = v11 | v10;
        LODWORD(v10) = v129;
        v129 = v116;
        LODWORD(v116) = v10;
        v12 = v131;
        v131 = v117;
        v117 = v12;
        LOBYTE(v12) = v130 & 1 | BYTE4(v116) & 0xFC | v130 & 2;
        v130 = BYTE4(v116) & 1 | v130 & 0xFC | BYTE4(v116) & 2;
        BYTE4(v116) = v12;
        LODWORD(v12) = v132;
        v132 = v118;
        LODWORD(v118) = v12;
        v13 = v134;
        v134 = v119;
        v119 = v13;
        LOBYTE(v13) = v133 & 1 | BYTE4(v118) & 0xFC | v133 & 2;
        v133 = BYTE4(v118) & 1 | v133 & 0xFC | BYTE4(v118) & 2;
        BYTE4(v118) = v13;
        LODWORD(v13) = v135;
        v135 = v120;
        LODWORD(v120) = v13;
        v14 = v137;
        v137 = v121;
        v121 = v14;
        v15 = v136 & 1;
        LOBYTE(v14) = BYTE4(v120) & 0xFC | v136 & 2;
        v136 = BYTE4(v120) & 1 | v136 & 0xFC | BYTE4(v120) & 2;
        BYTE4(v120) = v15 | v14;
        LODWORD(v14) = v138;
        v138 = v122;
        LODWORD(v122) = v14;
        v16 = v140;
        v140 = v123;
        v123 = v16;
        LOBYTE(v16) = v139 & 1 | BYTE4(v122) & 0xFC | v139 & 2;
        v139 = BYTE4(v122) & 1 | v139 & 0xFC | BYTE4(v122) & 2;
        BYTE4(v122) = v16;
        LODWORD(v16) = v141;
        v141 = v124;
        LODWORD(v124) = v16;
        v17 = v143;
        v143 = v125;
        v125 = v17;
        v103 = qword_1C7F2C0;
        v18 = BYTE4(v124) & 1 | v142 & 0xFC | BYTE4(v124) & 2;
        BYTE4(v124) = v142 & 1 | BYTE4(v124) & 0xFC | v142 & 2;
        v142 = v18;
        sub_182CBA0(qword_1C7F2C0, &v138);
        sub_182CBA0(v103, &v141);
        v104 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v132);
        sub_182CBA0(v104, &v135);
        v19 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v126);
        sub_182CBA0(v19, &v129);
      }
      else
      {
        v26 = *(_QWORD *)(*(_QWORD *)(a1 + 752) + 8 * v23);
        if ( !v26 )
          goto LABEL_20;
        v105 = v26 + 16;
        v27 = sub_9AD4F0(a1, v25);
        if ( !sub_33D280(v105, (__int64)v27) )
          goto LABEL_20;
        v28 = *(_QWORD *)(*(_QWORD *)(a1 + 752) + 8 * v23) + 16LL;
        v29 = sub_9AD4F0(a1, v25);
        sub_9F7AE0((__int64)&v126, (__int64)v29, v28);
        v30 = v126;
        v126 = v114;
        LODWORD(v114) = v30;
        v31 = v128;
        v128 = v115;
        v115 = v31;
        v32 = v127 & 1;
        LOBYTE(v31) = BYTE4(v114) & 0xFC | v127 & 2;
        v127 = BYTE4(v114) & 1 | v127 & 0xFC | BYTE4(v114) & 2;
        BYTE4(v114) = v32 | v31;
        LODWORD(v31) = v129;
        v129 = v116;
        LODWORD(v116) = v31;
        v33 = v131;
        v131 = v117;
        v117 = v33;
        LOBYTE(v33) = v130 & 1 | BYTE4(v116) & 0xFC | v130 & 2;
        v130 = BYTE4(v116) & 1 | v130 & 0xFC | BYTE4(v116) & 2;
        BYTE4(v116) = v33;
        LODWORD(v33) = v132;
        v132 = v118;
        LODWORD(v118) = v33;
        v34 = v134;
        v134 = v119;
        v119 = v34;
        LOBYTE(v34) = v133 & 1 | BYTE4(v118) & 0xFC | v133 & 2;
        v133 = BYTE4(v118) & 1 | v133 & 0xFC | BYTE4(v118) & 2;
        BYTE4(v118) = v34;
        LODWORD(v34) = v135;
        v135 = v120;
        LODWORD(v120) = v34;
        v35 = v137;
        v137 = v121;
        v121 = v35;
        v36 = v136 & 1;
        LOBYTE(v35) = BYTE4(v120) & 0xFC | v136 & 2;
        v136 = BYTE4(v120) & 1 | v136 & 0xFC | BYTE4(v120) & 2;
        BYTE4(v120) = v36 | v35;
        LODWORD(v35) = v138;
        v138 = v122;
        LODWORD(v122) = v35;
        v37 = v140;
        v140 = v123;
        v123 = v37;
        LOBYTE(v37) = v139 & 1 | BYTE4(v122) & 0xFC | v139 & 2;
        v139 = BYTE4(v122) & 1 | v139 & 0xFC | BYTE4(v122) & 2;
        BYTE4(v122) = v37;
        LODWORD(v37) = v141;
        v141 = v124;
        LODWORD(v124) = v37;
        v38 = v143;
        v143 = v125;
        v125 = v38;
        v39 = BYTE4(v124) & 1 | v142 & 0xFC | BYTE4(v124) & 2;
        BYTE4(v124) = v142 & 1 | BYTE4(v124) & 0xFC | v142 & 2;
        v142 = v39;
        sub_2A6060((__int64)&v126);
      }
      if ( v6 == -1 || sub_33D280((__int64)v108, (__int64)&v114) )
        break;
LABEL_20:
      if ( v3 == ++v4 )
        goto LABEL_44;
    }
    v20 = qword_1C7F2C0;
    if ( (v114 & 0x100000000LL) != 0 )
    {
      sub_182C690(qword_1C7F2C0, v108, &v114);
    }
    else
    {
      BYTE4(v108[0]) &= ~1u;
      LODWORD(v108[0]) = v114;
    }
    if ( (v116 & 0x100000000LL) != 0 )
    {
      sub_182C690(v20, v109, &v116);
    }
    else
    {
      BYTE4(v109[0]) &= ~1u;
      LODWORD(v109[0]) = v116;
    }
    v21 = qword_1C7F2C0;
    if ( (v118 & 0x100000000LL) != 0 )
    {
      sub_182C690(qword_1C7F2C0, v110, &v118);
    }
    else
    {
      BYTE4(v110[0]) &= ~1u;
      LODWORD(v110[0]) = v118;
    }
    if ( (v120 & 0x100000000LL) != 0 )
    {
      sub_182C690(v21, v111, &v120);
      v22 = qword_1C7F2C0;
      if ( (v122 & 0x100000000LL) == 0 )
      {
LABEL_17:
        BYTE4(v112[0]) &= ~1u;
        LODWORD(v112[0]) = v122;
        if ( (v124 & 0x100000000LL) == 0 )
        {
LABEL_18:
          BYTE4(v113[0]) &= ~1u;
          LODWORD(v113[0]) = v124;
LABEL_19:
          v6 = v25;
          goto LABEL_20;
        }
LABEL_67:
        sub_182C690(v22, v113, &v124);
        goto LABEL_19;
      }
    }
    else
    {
      BYTE4(v111[0]) &= ~1u;
      v22 = qword_1C7F2C0;
      LODWORD(v111[0]) = v120;
      if ( (v122 & 0x100000000LL) == 0 )
        goto LABEL_17;
    }
    sub_182C690(v22, v112, &v122);
    if ( (v124 & 0x100000000LL) == 0 )
      goto LABEL_18;
    goto LABEL_67;
  }
  do
  {
    v56 = *v4;
    v57 = *(_QWORD *)(*(_QWORD *)(a1 + 744) + 8 * v56);
    v58 = *v4;
    if ( v57 && (v100 = v57 + 16, v40 = sub_9AD4F0(a1, v56), sub_33D280((__int64)v40, v100)) )
    {
      v41 = sub_9AD4F0(a1, v56);
      sub_9F7AE0((__int64)&v126, *(_QWORD *)(*(_QWORD *)(a1 + 744) + 8 * v56) + 16LL, (__int64)v41);
      v42 = v126;
      v126 = v114;
      LODWORD(v114) = v42;
      v43 = v128;
      v128 = v115;
      v115 = v43;
      v44 = v127 & 1;
      LOBYTE(v43) = BYTE4(v114) & 0xFC | v127 & 2;
      v127 = BYTE4(v114) & 1 | v127 & 0xFC | BYTE4(v114) & 2;
      BYTE4(v114) = v44 | v43;
      LODWORD(v43) = v129;
      v129 = v116;
      LODWORD(v116) = v43;
      v45 = v131;
      v131 = v117;
      v117 = v45;
      LOBYTE(v45) = v130 & 1 | BYTE4(v116) & 0xFC | v130 & 2;
      v130 = BYTE4(v116) & 1 | v130 & 0xFC | BYTE4(v116) & 2;
      BYTE4(v116) = v45;
      LODWORD(v45) = v132;
      v132 = v118;
      LODWORD(v118) = v45;
      v46 = v134;
      v134 = v119;
      v119 = v46;
      LOBYTE(v46) = v133 & 1 | BYTE4(v118) & 0xFC | v133 & 2;
      v133 = BYTE4(v118) & 1 | v133 & 0xFC | BYTE4(v118) & 2;
      BYTE4(v118) = v46;
      LODWORD(v46) = v135;
      v135 = v120;
      LODWORD(v120) = v46;
      v47 = v137;
      v137 = v121;
      v121 = v47;
      v48 = v136 & 1;
      LOBYTE(v47) = BYTE4(v120) & 0xFC | v136 & 2;
      v136 = BYTE4(v120) & 1 | v136 & 0xFC | BYTE4(v120) & 2;
      BYTE4(v120) = v48 | v47;
      LODWORD(v47) = v138;
      v138 = v122;
      LODWORD(v122) = v47;
      v49 = v140;
      v140 = v123;
      v123 = v49;
      LOBYTE(v49) = v139 & 1 | BYTE4(v122) & 0xFC | v139 & 2;
      v139 = BYTE4(v122) & 1 | v139 & 0xFC | BYTE4(v122) & 2;
      BYTE4(v122) = v49;
      LODWORD(v49) = v141;
      v141 = v124;
      LODWORD(v124) = v49;
      v50 = v143;
      v143 = v125;
      v125 = v50;
      v106 = qword_1C7F2C0;
      v51 = BYTE4(v124) & 1 | v142 & 0xFC | BYTE4(v124) & 2;
      BYTE4(v124) = v142 & 1 | BYTE4(v124) & 0xFC | v142 & 2;
      v142 = v51;
      sub_182CBA0(qword_1C7F2C0, &v138);
      sub_182CBA0(v106, &v141);
      v107 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v132);
      sub_182CBA0(v107, &v135);
      v52 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v126);
      sub_182CBA0(v52, &v129);
    }
    else
    {
      v59 = *(_QWORD *)(*(_QWORD *)(a1 + 752) + 8 * v56);
      if ( !v59 )
        goto LABEL_39;
      v101 = v59 + 16;
      v60 = sub_9AD4F0(a1, v58);
      if ( !sub_33D280(v101, (__int64)v60) )
        goto LABEL_39;
      v61 = *(_QWORD *)(*(_QWORD *)(a1 + 752) + 8 * v56) + 16LL;
      v62 = sub_9AD4F0(a1, v58);
      sub_9F7AE0((__int64)&v126, (__int64)v62, v61);
      v63 = v126;
      v126 = v114;
      LODWORD(v114) = v63;
      v64 = v128;
      v128 = v115;
      v115 = v64;
      v65 = v127 & 1;
      LOBYTE(v64) = BYTE4(v114) & 0xFC | v127 & 2;
      v127 = BYTE4(v114) & 1 | v127 & 0xFC | BYTE4(v114) & 2;
      BYTE4(v114) = v65 | v64;
      LODWORD(v64) = v129;
      v129 = v116;
      LODWORD(v116) = v64;
      v66 = v131;
      v131 = v117;
      v117 = v66;
      LOBYTE(v66) = v130 & 1 | BYTE4(v116) & 0xFC | v130 & 2;
      v130 = BYTE4(v116) & 1 | v130 & 0xFC | BYTE4(v116) & 2;
      BYTE4(v116) = v66;
      LODWORD(v66) = v132;
      v132 = v118;
      LODWORD(v118) = v66;
      v67 = v134;
      v134 = v119;
      v119 = v67;
      LOBYTE(v67) = v133 & 1 | BYTE4(v118) & 0xFC | v133 & 2;
      v133 = BYTE4(v118) & 1 | v133 & 0xFC | BYTE4(v118) & 2;
      BYTE4(v118) = v67;
      LODWORD(v67) = v135;
      v135 = v120;
      LODWORD(v120) = v67;
      v68 = v137;
      v137 = v121;
      v121 = v68;
      v69 = v136 & 1;
      LOBYTE(v68) = BYTE4(v120) & 0xFC | v136 & 2;
      v136 = BYTE4(v120) & 1 | v136 & 0xFC | BYTE4(v120) & 2;
      BYTE4(v120) = v69 | v68;
      LODWORD(v68) = v138;
      v138 = v122;
      LODWORD(v122) = v68;
      v70 = v140;
      v140 = v123;
      v123 = v70;
      LOBYTE(v70) = v139 & 1 | BYTE4(v122) & 0xFC | v139 & 2;
      v139 = BYTE4(v122) & 1 | v139 & 0xFC | BYTE4(v122) & 2;
      BYTE4(v122) = v70;
      LODWORD(v70) = v141;
      v141 = v124;
      LODWORD(v124) = v70;
      v71 = v143;
      v143 = v125;
      v125 = v71;
      v72 = BYTE4(v124) & 1 | v142 & 0xFC | BYTE4(v124) & 2;
      BYTE4(v124) = v142 & 1 | BYTE4(v124) & 0xFC | v142 & 2;
      v142 = v72;
      sub_2A6060((__int64)&v126);
    }
    if ( v6 != -1 && !sub_33D280((__int64)&v114, (__int64)v108) )
      goto LABEL_39;
    v53 = qword_1C7F2C0;
    if ( (v114 & 0x100000000LL) != 0 )
    {
      sub_182C690(qword_1C7F2C0, v108, &v114);
      if ( (v116 & 0x100000000LL) == 0 )
      {
LABEL_32:
        BYTE4(v109[0]) &= ~1u;
        v54 = qword_1C7F2C0;
        LODWORD(v109[0]) = v116;
        if ( (v118 & 0x100000000LL) == 0 )
          goto LABEL_33;
        goto LABEL_74;
      }
    }
    else
    {
      BYTE4(v108[0]) &= ~1u;
      LODWORD(v108[0]) = v114;
      if ( (v116 & 0x100000000LL) == 0 )
        goto LABEL_32;
    }
    sub_182C690(v53, v109, &v116);
    v54 = qword_1C7F2C0;
    if ( (v118 & 0x100000000LL) == 0 )
    {
LABEL_33:
      BYTE4(v110[0]) &= ~1u;
      LODWORD(v110[0]) = v118;
      if ( (v120 & 0x100000000LL) == 0 )
        goto LABEL_34;
      goto LABEL_75;
    }
LABEL_74:
    sub_182C690(v54, v110, &v118);
    if ( (v120 & 0x100000000LL) == 0 )
    {
LABEL_34:
      BYTE4(v111[0]) &= ~1u;
      v55 = qword_1C7F2C0;
      LODWORD(v111[0]) = v120;
      if ( (v122 & 0x100000000LL) != 0 )
        goto LABEL_76;
      goto LABEL_35;
    }
LABEL_75:
    sub_182C690(v54, v111, &v120);
    v55 = qword_1C7F2C0;
    if ( (v122 & 0x100000000LL) != 0 )
    {
LABEL_76:
      sub_182C690(v55, v112, &v122);
      goto LABEL_36;
    }
LABEL_35:
    BYTE4(v112[0]) &= ~1u;
    LODWORD(v112[0]) = v122;
LABEL_36:
    if ( (v124 & 0x100000000LL) != 0 )
    {
      sub_182C690(v55, v113, &v124);
    }
    else
    {
      BYTE4(v113[0]) &= ~1u;
      LODWORD(v113[0]) = v124;
    }
    v6 = v58;
LABEL_39:
    ++v4;
  }
  while ( v3 != v4 );
LABEL_44:
  v73 = *(_QWORD *)(a1 + 928);
  if ( v6 == -1 )
  {
    if ( !v73 )
      goto LABEL_80;
    LODWORD(v5) = *(_DWORD *)(v73 - 4);
LABEL_79:
    if ( (_DWORD)v5 == 1 )
    {
LABEL_85:
      v6 = -1;
      goto LABEL_59;
    }
LABEL_80:
    v95 = *(unsigned int **)(a1 + 936);
    if ( v95 )
      v96 = 4LL * *(v95 - 1);
    else
      v96 = 0;
    memset(v95, 0, v96);
    v97 = *(_DWORD **)(a1 + 928);
    if ( !v97 || (v98 = *(v97 - 2), *(v97 - 1) = 0, v99 = v97, !v98) )
    {
      sub_313C10((unsigned int **)(a1 + 928));
      v97 = *(_DWORD **)(a1 + 928);
      v99 = &v97[*(v97 - 1)];
    }
    *v99 = -1;
    ++*(v97 - 1);
    goto LABEL_85;
  }
  v74 = *(_QWORD *)(a1 + 936);
  v75 = (int *)(v74 + 4LL * v6);
  v76 = *v75;
  if ( v73 )
  {
    v77 = *(_DWORD *)(v73 - 4);
    v78 = v77 - 1;
  }
  else
  {
    v78 = -1;
    v77 = 0;
  }
  if ( v76 == v78 )
  {
    *v75 = 0;
    --*(_DWORD *)(v73 - 4);
  }
  else
  {
    v79 = (unsigned int)v76;
    v80 = *(unsigned int *)(v73 + 4LL * (unsigned int)(v77 - 1));
    v81 = (_DWORD *)(v73 + 4LL * (unsigned int)v76);
    *v81 = v80;
    v82 = v80;
    *(_DWORD *)(v74 + 4 * v80) = v76;
    *v75 = 0;
    v83 = v76 >> 1;
    v84 = *(_DWORD *)(v73 - 4) - 1;
    *(_DWORD *)(v73 - 4) = v84;
    v85 = (unsigned int)*v81;
    if ( v76 >> 1 && (v86 = *(unsigned int *)(v73 + 4LL * (unsigned int)v83), v82 < (int)v86) )
    {
      while ( 1 )
      {
        v93 = 4 * v79;
        if ( (int)v86 <= (int)v85 )
          break;
        *(_DWORD *)(v73 + v93) = v86;
        v94 = v83 >> 1;
        *(_DWORD *)(v74 + 4 * v86) = v76;
        if ( !(v83 >> 1) )
        {
          v93 = 4;
          v76 = 1;
          break;
        }
        v79 = (unsigned int)v83;
        v83 >>= 1;
        v86 = *(unsigned int *)(v73 + 4LL * v94);
        v76 = v79;
      }
      *(_DWORD *)(v73 + v93) = v85;
      *(_DWORD *)(v74 + 4 * v85) = v76;
    }
    else
    {
      v87 = 2 * v76;
      if ( 2 * v76 < v84 )
      {
        while ( 1 )
        {
          v91 = v87 + 1;
          v90 = (unsigned int *)(v73 + 4LL * v87);
          v89 = *v90;
          if ( v84 <= (int)(v87 + 1) || (v88 = *(_DWORD *)(v73 + 4LL * v91), v88 >= (int)v89) )
          {
            v91 = v87;
            v81 = (_DWORD *)(v73 + 4 * v79);
            if ( (int)v89 >= (int)v85 )
              goto LABEL_58;
          }
          else
          {
            v89 = (unsigned int)v88;
            v90 = (unsigned int *)(v73 + 4LL * v91);
            v81 = (_DWORD *)(v73 + 4 * v79);
            if ( v88 >= (int)v85 )
              goto LABEL_58;
          }
          v87 = 2 * v91;
          *v81 = v89;
          *(_DWORD *)(v74 + 4 * v89) = v76;
          if ( v84 <= (int)(2 * v91) )
            break;
          v79 = v91;
          v76 = v91;
        }
        v81 = v90;
        v76 = v91;
      }
LABEL_58:
      *v81 = v85;
      *(_DWORD *)(v74 + 4 * v85) = v76;
    }
  }
LABEL_59:
  sub_2A6060((__int64)&v114);
  sub_2A6060((__int64)v108);
  return v6;
}

