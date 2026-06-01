__int64 __fastcall sub_8873A0(_QWORD *a1)
{
  __int64 v1; // rax
  unsigned int v3; // r12d
  __int64 v4; // r14
  _DWORD *v5; // rax
  unsigned int v6; // ebp
  void *v7; // r14
  void *v8; // r14
  void *v9; // rbp
  unsigned int v11; // eax
  void *v12; // rdi
  void *v13; // rdi
  void *v14; // rdi
  void *v15; // rdi
  void *v16; // rdi
  void *v17; // rdi
  void *v18; // rdi
  void *v19; // rdi
  void *v20; // rdi
  void *v21; // rdi
  void *v22; // rdi
  void *v23; // rdi
  int *v24; // rcx
  int v25; // r8d
  int v26; // r9d
  _DWORD *v27; // rax
  __int64 v28; // rdi
  __int64 v29; // rax
  int v30; // eax
  int v31; // ecx
  int v32; // r8d
  int v33; // r9d
  __int64 v34; // rdi
  __int64 v35; // rax
  int v36; // eax
  int v37; // ecx
  int v38; // r8d
  int v39; // r9d
  __int64 v40; // rdi
  __int64 v41; // rax
  unsigned int v42; // eax
  int v43; // ecx
  int v44; // r8d
  int v45; // r9d
  __int64 v46; // rdi
  __int64 v47; // rax
  unsigned int v48; // r14d
  void *v49; // r14
  void *v50; // r14
  void *v51; // r14
  void *v52; // r14
  void *v53; // r14
  void *v54; // r14
  void *v55; // rdi
  bool v56; // al
  void *v57; // rdi
  bool v58; // al
  int v59; // edx
  __int64 v60; // rdx
  char v61; // cl
  __int64 v62; // rax
  char v63; // si
  char v64; // cl
  int v65; // edx
  __int64 v66; // rdx
  char v67; // cl
  __int64 v68; // rax
  void *v69; // [rsp+0h] [rbp-248h]
  unsigned int *v70; // [rsp+8h] [rbp-240h]
  int v71; // [rsp+8h] [rbp-240h]
  void *v72; // [rsp+8h] [rbp-240h]
  void *v73; // [rsp+8h] [rbp-240h]
  void *v74; // [rsp+8h] [rbp-240h]
  unsigned __int8 v75; // [rsp+10h] [rbp-238h]
  int *v76; // [rsp+10h] [rbp-238h]
  void *v77; // [rsp+30h] [rbp-218h]
  void *v78; // [rsp+30h] [rbp-218h]
  int v79; // [rsp+30h] [rbp-218h]
  int v80[2]; // [rsp+38h] [rbp-210h]
  unsigned int v81; // [rsp+48h] [rbp-200h]
  void *v82; // [rsp+50h] [rbp-1F8h]
  void *v83; // [rsp+50h] [rbp-1F8h]
  void *v84; // [rsp+50h] [rbp-1F8h]
  void *v85; // [rsp+50h] [rbp-1F8h]
  void *v86; // [rsp+50h] [rbp-1F8h]
  void *v87; // [rsp+60h] [rbp-1E8h]
  void *v88; // [rsp+60h] [rbp-1E8h]
  void *v89; // [rsp+68h] [rbp-1E0h]
  void *v90; // [rsp+70h] [rbp-1D8h]
  void *v91; // [rsp+70h] [rbp-1D8h]
  _QWORD v92[2]; // [rsp+90h] [rbp-1B8h] BYREF
  _QWORD v93[2]; // [rsp+A0h] [rbp-1A8h] BYREF
  int v94; // [rsp+B0h] [rbp-198h] BYREF
  char v95; // [rsp+B4h] [rbp-194h]
  __int64 v96; // [rsp+B8h] [rbp-190h]
  int v97; // [rsp+C0h] [rbp-188h] BYREF
  char v98; // [rsp+C4h] [rbp-184h]
  __int64 v99; // [rsp+C8h] [rbp-180h]
  int v100[2]; // [rsp+D0h] [rbp-178h] BYREF
  __int64 v101; // [rsp+D8h] [rbp-170h]
  _QWORD v102[2]; // [rsp+E0h] [rbp-168h] BYREF
  int v103; // [rsp+F0h] [rbp-158h] BYREF
  char v104; // [rsp+F4h] [rbp-154h]
  __int64 v105; // [rsp+F8h] [rbp-150h]
  int v106; // [rsp+100h] [rbp-148h] BYREF
  char v107; // [rsp+104h] [rbp-144h]
  __int64 v108; // [rsp+108h] [rbp-140h]
  int v109; // [rsp+110h] [rbp-138h] BYREF
  char v110; // [rsp+114h] [rbp-134h]
  __int64 v111; // [rsp+118h] [rbp-130h]
  int v112; // [rsp+120h] [rbp-128h] BYREF
  char v113; // [rsp+124h] [rbp-124h]
  __int64 v114; // [rsp+128h] [rbp-120h]
  int v115; // [rsp+130h] [rbp-118h] BYREF
  char v116; // [rsp+134h] [rbp-114h]
  __int64 v117; // [rsp+138h] [rbp-110h]
  int v118; // [rsp+140h] [rbp-108h] BYREF
  char v119; // [rsp+144h] [rbp-104h]
  __int64 v120; // [rsp+148h] [rbp-100h]
  _QWORD v121[2]; // [rsp+150h] [rbp-F8h] BYREF
  _QWORD v122[2]; // [rsp+160h] [rbp-E8h] BYREF
  __int64 v123; // [rsp+170h] [rbp-D8h] BYREF
  __int64 v124; // [rsp+178h] [rbp-D0h]
  __int64 v125; // [rsp+180h] [rbp-C8h] BYREF
  __int64 v126; // [rsp+188h] [rbp-C0h]
  _DWORD v127[4]; // [rsp+190h] [rbp-B8h] BYREF
  int v128; // [rsp+1A0h] [rbp-A8h] BYREF
  char v129; // [rsp+1A4h] [rbp-A4h]
  _DWORD v130[4]; // [rsp+1B0h] [rbp-98h] BYREF
  _BYTE v131[16]; // [rsp+1C0h] [rbp-88h] BYREF
  int v132; // [rsp+1D0h] [rbp-78h] BYREF
  char v133; // [rsp+1D4h] [rbp-74h]
  int v134; // [rsp+1E0h] [rbp-68h] BYREF
  char v135; // [rsp+1E4h] [rbp-64h]
  _DWORD v136[4]; // [rsp+1F0h] [rbp-58h] BYREF
  _BYTE v137[72]; // [rsp+200h] [rbp-48h] BYREF

  v1 = a1[34];
  if ( v1 && *(_DWORD *)(v1 - 4) )
  {
    v75 = 1;
    v3 = 0;
    while ( 1 )
    {
      v4 = *(_QWORD *)(v1 + 8LL * v3);
      if ( *(_WORD *)(v4 + 4)
        || (v5 = *(_DWORD **)(*(_QWORD *)(v4 + 16) + 24LL)) == nullptr
        || *v5 != 5
        || v5[1] != 11
        || *(_DWORD *)(v4 + 24) != 2 )
      {
        sub_1872CE0("");
        sub_1873130(114, 661);
      }
      v70 = *(unsigned int **)(v4 + 32);
      v77 = *(void **)(v4 + 40);
      v6 = sub_859A80((__int64)a1, v70);
      sub_829830((__int64)a1, v6);
      sub_829870((__int64)v127, (__int64)a1, v6);
      v92[0] = 0;
      v92[1] = 0;
      v93[0] = 1;
      v93[1] = 0;
      if ( (v129 & 1) != 0 )
        goto LABEL_10;
      if ( v128 != 1 )
        goto LABEL_10;
      if ( v127[0] < 0 )
        goto LABEL_10;
      if ( v130[0] )
        goto LABEL_10;
      *(_QWORD *)v80 = a1 + 104;
      if ( !(unsigned __int8)sub_1666AE0(a1 + 104, v77, v92, &v132)
        || SLODWORD(v92[0]) <= 0
        || !(unsigned __int8)sub_1667900(*(_QWORD *)v80, v4) )
      {
        goto LABEL_10;
      }
      v11 = sub_859A80((__int64)a1, (unsigned int *)v4);
      sub_829870((__int64)&v132, (__int64)a1, v11);
      if ( v136[0] )
        goto LABEL_25;
      BYTE4(v123) &= 0xFCu;
      BYTE4(v125) &= 0xFCu;
      LODWORD(v123) = 0;
      v124 = 0;
      LODWORD(v125) = 1;
      v126 = 0;
      v84 = qword_1C7F2C0;
      sub_1833EB0(qword_1C7F2C0, v127, v92, &v123);
      sub_182CBA0(v84, &v125);
      BYTE4(v125) &= ~1u;
      v55 = qword_1C7F2C0;
      LODWORD(v125) = 1;
      if ( (v133 & 1) != 0 || (v123 & 0x100000000LL) != 0 )
        v56 = (unsigned int)sub_182C7B0(qword_1C7F2C0, &v132, &v123) == 0;
      else
        v56 = v132 == (_DWORD)v123;
      if ( !v56 )
        break;
      if ( (v135 & 1) != 0 || (v125 & 0x100000000LL) != 0 )
        v58 = (unsigned int)sub_182C7B0(v55, &v134, &v125) == 0;
      else
        v58 = v134 == (_DWORD)v125;
      v57 = qword_1C7F2C0;
      if ( !v58 )
        goto LABEL_89;
      v72 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v123);
      sub_182CBA0(v72, &v125);
LABEL_83:
      v53 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v136);
      sub_182CBA0(v53, v137);
      v54 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v132);
      sub_182CBA0(v54, &v134);
LABEL_10:
      v7 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v92);
      sub_182CBA0(v7, v93);
      v8 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v130);
      sub_182CBA0(v8, v131);
      v9 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v127);
      sub_182CBA0(v9, &v128);
      v1 = a1[34];
      ++v3;
      if ( !v1 || v3 >= *(_DWORD *)(v1 - 4) )
        return v75;
    }
    v57 = qword_1C7F2C0;
LABEL_89:
    sub_182CBA0(v57, &v123);
    sub_182CBA0(v57, &v125);
LABEL_25:
    v76 = &v94;
    v95 &= 0xFCu;
    v98 &= 0xFCu;
    v94 = 0;
    v96 = 0;
    v97 = 1;
    v99 = 0;
    v78 = qword_1C7F2C0;
    sub_1833EB0(qword_1C7F2C0, v127, v92, &v94);
    sub_182CBA0(v78, &v97);
    v98 &= ~1u;
    v97 = 1;
    *(_QWORD *)v100 = 1;
    v101 = 0;
    v102[0] = 1;
    v102[1] = 0;
    sub_182CBA0(qword_1C7F2C0, v102);
    BYTE4(v102[0]) &= ~1u;
    v12 = qword_1C7F2C0;
    LODWORD(v102[0]) = 1;
    v123 = 0;
    v124 = 0;
    v125 = 1;
    v126 = 0;
    if ( (v92[0] & 0x100000000LL) != 0 )
      sub_182C690(qword_1C7F2C0, &v123, v92);
    else
      LODWORD(v123) = v92[0];
    if ( (v93[0] & 0x100000000LL) != 0 )
    {
      sub_182C690(v12, &v125, v93);
    }
    else
    {
      BYTE4(v125) &= ~1u;
      LODWORD(v125) = v93[0];
    }
    v13 = qword_1C7F2C0;
    if ( (v125 & 0x100000000LL) != 0 || (_DWORD)v125 != 1 || (v98 & 1) != 0 || v97 != 1 )
    {
      sub_1848FF0(qword_1C7F2C0, &v123, &v94);
    }
    else
    {
      sub_1831650(qword_1C7F2C0, &v123, &v94);
      sub_182CBA0(v13, &v125);
      BYTE4(v125) &= ~1u;
      LODWORD(v125) = 1;
    }
    v110 &= 0xFCu;
    v14 = qword_1C7F2C0;
    v113 &= 0xFCu;
    v109 = 0;
    v111 = 0;
    v112 = 1;
    v114 = 0;
    if ( (v123 & 0x100000000LL) != 0 )
      sub_182C690(qword_1C7F2C0, &v109, &v123);
    else
      v109 = v123;
    if ( (v125 & 0x100000000LL) != 0 )
    {
      sub_182C690(v14, &v112, &v125);
    }
    else
    {
      v113 &= ~1u;
      v112 = v125;
    }
    v82 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v123);
    sub_182CBA0(v82, &v125);
    v15 = qword_1C7F2C0;
    v123 = 0;
    v124 = 0;
    v125 = 1;
    v126 = 0;
    if ( (v110 & 1) != 0 )
      sub_182C690(qword_1C7F2C0, &v123, &v109);
    else
      LODWORD(v123) = v109;
    if ( (v113 & 1) != 0 )
    {
      sub_182C690(v15, &v125, &v112);
    }
    else
    {
      BYTE4(v125) &= ~1u;
      LODWORD(v125) = v112;
    }
    v16 = qword_1C7F2C0;
    if ( LODWORD(v92[0]) )
    {
      if ( (_DWORD)v123 )
      {
        if ( (v125 & 0x100000000LL) != 0 || (_DWORD)v125 != 1 || (v93[0] & 0x100000000LL) != 0 || LODWORD(v93[0]) != 1 )
        {
          sub_1851D20(qword_1C7F2C0, &v123, v92, &v123);
        }
        else
        {
          sub_1831A80(qword_1C7F2C0, &v123, v92, &v123);
          sub_182CBA0(v16, &v125);
          BYTE4(v125) &= ~1u;
          LODWORD(v125) = 1;
        }
      }
      else
      {
        if ( (v92[0] & 0x100000000LL) != 0 )
        {
          v86 = qword_1C7F2C0;
          sub_182C690(qword_1C7F2C0, &v123, v92);
          v16 = v86;
        }
        else
        {
          BYTE4(v123) &= ~1u;
          LODWORD(v123) = v92[0];
        }
        if ( (v93[0] & 0x100000000LL) != 0 )
        {
          sub_182C690(v16, &v125, v93);
        }
        else
        {
          BYTE4(v125) &= ~1u;
          LODWORD(v125) = v93[0];
        }
      }
    }
    else
    {
      if ( (v123 & 0x100000000LL) != 0 )
      {
        v85 = qword_1C7F2C0;
        sub_182C690(qword_1C7F2C0, &v123, &v123);
        v16 = v85;
      }
      else
      {
        BYTE4(v123) &= ~1u;
      }
      if ( (v125 & 0x100000000LL) != 0 )
        sub_182C690(v16, &v125, &v125);
      else
        BYTE4(v125) &= ~1u;
    }
    v116 &= 0xFCu;
    v17 = qword_1C7F2C0;
    v119 &= 0xFCu;
    v115 = 0;
    v117 = 0;
    v118 = 1;
    v120 = 0;
    if ( (v123 & 0x100000000LL) != 0 )
      sub_182C690(qword_1C7F2C0, &v115, &v123);
    else
      v115 = v123;
    if ( (v125 & 0x100000000LL) != 0 )
    {
      sub_182C690(v17, &v118, &v125);
    }
    else
    {
      v119 &= ~1u;
      v118 = v125;
    }
    v83 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v123);
    sub_182CBA0(v83, &v125);
    v121[0] = 1;
    v121[1] = 0;
    v122[0] = 1;
    v122[1] = 0;
    sub_182CBA0(qword_1C7F2C0, v122);
    BYTE4(v122[0]) &= ~1u;
    v18 = qword_1C7F2C0;
    LODWORD(v122[0]) = 1;
    v123 = 0;
    v124 = 0;
    v125 = 1;
    v126 = 0;
    if ( (v116 & 1) != 0 )
      sub_182C690(qword_1C7F2C0, &v123, &v115);
    else
      LODWORD(v123) = v115;
    if ( (v119 & 1) != 0 )
    {
      sub_182C690(v18, &v125, &v118);
    }
    else
    {
      BYTE4(v125) &= ~1u;
      LODWORD(v125) = v118;
    }
    v19 = qword_1C7F2C0;
    if ( (v125 & 0x100000000LL) != 0 || (_DWORD)v125 != 1 || (v122[0] & 0x100000000LL) != 0 || LODWORD(v122[0]) != 1 )
    {
      sub_1852000(qword_1C7F2C0, &v123, v121);
    }
    else
    {
      sub_1832A70(qword_1C7F2C0, &v123, v121);
      sub_182CBA0(v19, &v125);
      BYTE4(v125) &= ~1u;
      LODWORD(v125) = 1;
    }
    v104 &= 0xFCu;
    v20 = qword_1C7F2C0;
    v107 &= 0xFCu;
    v103 = 0;
    v105 = 0;
    v106 = 1;
    v108 = 0;
    if ( (v123 & 0x100000000LL) != 0 )
      sub_182C690(qword_1C7F2C0, &v103, &v123);
    else
      v103 = v123;
    if ( (v125 & 0x100000000LL) != 0 )
    {
      sub_182C690(v20, &v106, &v125);
    }
    else
    {
      v107 &= ~1u;
      v106 = v125;
    }
    v90 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v123);
    sub_182CBA0(v90, &v125);
    v91 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v121);
    sub_182CBA0(v91, v122);
    v89 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v115);
    sub_182CBA0(v89, &v118);
    v87 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v109);
    sub_182CBA0(v87, &v112);
    v21 = qword_1C7F2C0;
    v123 = 0;
    v124 = 0;
    v125 = 1;
    v126 = 0;
    if ( (v92[0] & 0x100000000LL) != 0 )
      sub_182C690(qword_1C7F2C0, &v123, v92);
    else
      LODWORD(v123) = v92[0];
    if ( (v93[0] & 0x100000000LL) != 0 )
    {
      sub_182C690(v21, &v125, v93);
    }
    else
    {
      BYTE4(v125) &= ~1u;
      LODWORD(v125) = v93[0];
    }
    v22 = qword_1C7F2C0;
    if ( (v125 & 0x100000000LL) != 0 || (_DWORD)v125 != 1 || (v98 & 1) != 0 || v97 != 1 )
    {
      sub_1848FF0(qword_1C7F2C0, &v123, &v94);
    }
    else
    {
      sub_1831650(qword_1C7F2C0, &v123, &v94);
      sub_182CBA0(v22, &v125);
      BYTE4(v125) &= ~1u;
      LODWORD(v125) = 1;
    }
    v116 &= 0xFCu;
    v23 = qword_1C7F2C0;
    v119 &= 0xFCu;
    v115 = 0;
    v117 = 0;
    v118 = 1;
    v120 = 0;
    if ( (v123 & 0x100000000LL) != 0 )
      sub_182C690(qword_1C7F2C0, &v115, &v123);
    else
      v115 = v123;
    if ( (v125 & 0x100000000LL) != 0 )
    {
      sub_182C690(v23, &v118, &v125);
    }
    else
    {
      v119 &= ~1u;
      v118 = v125;
    }
    v88 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v123);
    sub_182CBA0(v88, &v125);
    if ( !*((_WORD *)v70 + 2) )
    {
      v27 = *(_DWORD **)(*((_QWORD *)v70 + 2) + 24LL);
      if ( v27 )
      {
        v24 = v100;
        if ( *v27 == 5
          && v27[1] == 9
          && v70[6] == 2
          && (unsigned __int8)sub_16679C0(
                                v80[0],
                                *((_QWORD *)v70 + 4),
                                (int)v100,
                                *((_QWORD *)v70 + 5),
                                v25,
                                v26,
                                v69,
                                v70,
                                &v94)
          && v100[0] > 0 )
        {
          sub_27B620((__int64)v121, (__int64)&v103, (__int64)v100);
          LODWORD(v123) = 0;
          v124 = 0;
          BYTE4(v123) &= 0xFCu;
          BYTE4(v125) &= 0xFCu;
          LODWORD(v125) = 1;
          v126 = 0;
          v73 = qword_1C7F2C0;
          sub_18495B0(qword_1C7F2C0, v121, &v123);
          sub_182CBA0(v73, &v125);
          v59 = v123;
          LODWORD(v123) = v103;
          v103 = v59;
          v60 = v124;
          v124 = v105;
          v105 = v60;
          v61 = BYTE4(v123) & 1;
          LOBYTE(v60) = v104 & 0xFC | BYTE4(v123) & 2;
          BYTE4(v123) = v104 & 1 | BYTE4(v123) & 0xFC | v104 & 2;
          v104 = v61 | v60;
          LODWORD(v125) = v106;
          v62 = v108;
          v108 = v126;
          v126 = v62;
          v106 = 1;
          v63 = v107 & 2;
          v64 = v107 & 1;
          v107 = v107 & 0xFC | BYTE4(v125) & 2;
          BYTE4(v125) = v64 | v63 | BYTE4(v125) & 0xFC;
          sub_25A130((char *)&v123);
          sub_25A130((char *)v121);
          sub_27B620((__int64)v121, (__int64)&v115, (__int64)v100);
          v124 = 0;
          BYTE4(v123) &= 0xFCu;
          BYTE4(v125) &= 0xFCu;
          LODWORD(v123) = 0;
          LODWORD(v125) = 1;
          v126 = 0;
          v74 = qword_1C7F2C0;
          sub_1849700(qword_1C7F2C0, v121, &v123);
          sub_182CBA0(v74, &v125);
          v65 = v123;
          LODWORD(v123) = v115;
          v115 = v65;
          v66 = v124;
          v124 = v117;
          v117 = v66;
          v67 = BYTE4(v123) & 1;
          LOBYTE(v66) = v116 & 0xFC | BYTE4(v123) & 2;
          BYTE4(v123) = v116 & 1 | BYTE4(v123) & 0xFC | v116 & 2;
          v116 = v67 | v66;
          LODWORD(v125) = v118;
          v68 = v120;
          v120 = v126;
          v126 = v68;
          v118 = 1;
          LOBYTE(v66) = v119 & 0xFC | BYTE4(v125) & 2;
          BYTE4(v125) = v119 & 1 | v119 & 2 | BYTE4(v125) & 0xFC;
          v119 = v66;
          sub_25A130((char *)&v123);
          sub_25A130((char *)v121);
        }
      }
    }
    v28 = a1[105];
    if ( !v28 )
    {
      sub_16669E0(*(_QWORD *)v80);
      v28 = a1[105];
    }
    sub_166A700(v28, (unsigned int)&v103, 1, (_DWORD)v24, v25, v26);
    v29 = sub_15E1B70(a1[104]);
    v30 = sub_7E58C0((__int64)a1, v29);
    v34 = a1[105];
    v79 = v30;
    if ( !v34 )
    {
      sub_16669E0(*(_QWORD *)v80);
      v34 = a1[105];
    }
    sub_166A700(v34, (unsigned int)&v115, 1, v31, v32, v33);
    v35 = sub_15E1B70(a1[104]);
    v36 = sub_7E58C0((__int64)a1, v35);
    v40 = a1[105];
    v71 = v36;
    if ( !v40 )
    {
      sub_16669E0(*(_QWORD *)v80);
      v40 = a1[105];
    }
    sub_166A700(v40, (_DWORD)v76, 1, v37, v38, v39);
    v41 = sub_15E1B70(a1[104]);
    v42 = sub_7E58C0((__int64)a1, v41);
    v46 = a1[105];
    v81 = v42;
    if ( !v46 )
    {
      sub_16669E0(*(_QWORD *)v80);
      v46 = a1[105];
    }
    sub_166A700(v46, (_DWORD)v76, 1, v43, v44, v45);
    v47 = sub_15E1B70(a1[104]);
    v48 = sub_7E58C0((__int64)a1, v47);
    sub_7E5400((__int64)a1, v79 ^ 1, v81, nullptr);
    sub_7E5400((__int64)a1, v71 ^ 1, v48, nullptr);
    v49 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v115);
    sub_182CBA0(v49, &v118);
    v50 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v103);
    sub_182CBA0(v50, &v106);
    v51 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v100);
    sub_182CBA0(v51, v102);
    v52 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v76);
    sub_182CBA0(v52, &v97);
    v75 = 0;
    goto LABEL_83;
  }
  return 1;
}

