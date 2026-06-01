__int64 __fastcall sub_97FC70(__int64 a1)
{
  char **exception; // rbp
  char **v2; // rbp
  __int64 v3; // rbp
  void *v4; // r12
  int v5; // eax
  int v6; // eax
  __int64 v7; // rax
  unsigned int i; // r13d
  void *v9; // rbx
  void *v10; // rbx
  int v11; // edx
  __int64 v12; // rax
  __int64 v13; // rdx
  char v14; // cl
  char v15; // si
  __int64 v16; // rax
  void *v17; // rbx
  void *v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v21; // rbx
  __int64 v22; // r13
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // r13
  unsigned int v26; // ebx
  __int64 v27; // r13
  void *v28; // rdi
  int v29; // eax
  void *v30; // r13
  void *v31; // r13
  _QWORD *v32; // rsi
  __int64 v33; // rax
  _QWORD *v34; // rax
  __int64 v35; // rax
  _QWORD *v36; // rsi
  int v37; // eax
  _QWORD *v38; // rdx
  __int64 v39; // rax
  _DWORD *v40; // rax
  void *v41; // r13
  unsigned int *v42; // r13
  __int64 v43; // rbx
  unsigned __int64 v44; // rdx
  __int64 v45; // rbx
  unsigned int *v46; // r15
  unsigned int v47; // r10d
  __int64 v48; // rdx
  __int64 v49; // rsi
  __int64 v50; // rdx
  unsigned int v51; // eax
  __int64 v52; // rax
  unsigned int *v53; // rbp
  __int64 v54; // r12
  __int64 v55; // r13
  __int64 v56; // rdx
  unsigned int *v57; // r14
  __int64 v58; // rsi
  __int64 v59; // rdx
  __int64 v60; // rdi
  void *v61; // rbx
  int v62; // eax
  void *v63; // rbx
  void *v64; // rbx
  int v65; // eax
  void *v66; // rbx
  unsigned int v68; // r13d
  size_t v69; // rsi
  unsigned int *v70; // rax
  __int64 v71; // rax
  unsigned int v72; // r13d
  size_t v73; // rdi
  __int64 v74; // rax
  int *v75; // r10
  _DWORD *v76; // r9
  __int64 v77; // rax
  _QWORD *v78; // rdx
  int *v79; // rdi
  int *j; // rax
  int v81; // ecx
  char v82; // r8
  __int64 v83; // rcx
  _QWORD *v84; // rax
  __int64 v85; // rax
  void *v86; // r12
  int v87; // edx
  char v88; // cl
  __int64 v89; // rax
  __int64 v90; // rdx
  __int64 v91; // rdx
  char v92; // si
  __int64 v93; // rax
  void *v94; // r12
  unsigned int *v95; // r15
  __int64 v96; // rax
  __int64 v97; // r9
  __int64 v98; // rdx
  __int64 v99; // rsi
  unsigned int v100; // eax
  unsigned int *v101; // r13
  __int64 v102; // r12
  unsigned int *v103; // r14
  __int64 v104; // rdx
  __int64 v105; // rsi
  unsigned int v106; // edx
  unsigned int *v107; // r15
  unsigned int *v108; // r14
  __int64 v109; // r12
  unsigned int *v110; // r13
  __int64 v111; // rdx
  __int64 v112; // rsi
  unsigned int v113; // eax
  unsigned int v114; // eax
  _QWORD *v115; // rax
  __int64 v116; // rdx
  void *v117; // [rsp+0h] [rbp-D8h]
  void *v118; // [rsp+0h] [rbp-D8h]
  __int64 v119; // [rsp+8h] [rbp-D0h]
  void *v120; // [rsp+8h] [rbp-D0h]
  char *src; // [rsp+10h] [rbp-C8h]
  void *srcc; // [rsp+10h] [rbp-C8h]
  void *srcd; // [rsp+10h] [rbp-C8h]
  char *srca; // [rsp+10h] [rbp-C8h]
  unsigned int srcb; // [rsp+10h] [rbp-C8h]
  unsigned int *v126; // [rsp+18h] [rbp-C0h]
  _DWORD *v127; // [rsp+18h] [rbp-C0h]
  unsigned int v128; // [rsp+20h] [rbp-B8h]
  unsigned int v129; // [rsp+20h] [rbp-B8h]
  unsigned int *v130; // [rsp+20h] [rbp-B8h]
  int v131; // [rsp+28h] [rbp-B0h]
  unsigned int v132; // [rsp+28h] [rbp-B0h]
  __int64 v133; // [rsp+30h] [rbp-A8h]
  int v134; // [rsp+60h] [rbp-78h] BYREF
  char v135; // [rsp+64h] [rbp-74h]
  __int64 v136; // [rsp+68h] [rbp-70h]
  int v137; // [rsp+70h] [rbp-68h] BYREF
  char v138; // [rsp+74h] [rbp-64h]
  __int64 v139; // [rsp+78h] [rbp-60h]
  __int64 v140; // [rsp+80h] [rbp-58h] BYREF
  __int64 v141; // [rsp+88h] [rbp-50h]
  __int64 v142; // [rsp+90h] [rbp-48h] BYREF
  __int64 v143; // [rsp+98h] [rbp-40h]

  v3 = a1;
  v119 = a1 + 896;
  v4 = qword_1C7F2C0;
  if ( (*(_BYTE *)(&qword_1C7F280 + 1) & 1) != 0 )
  {
    sub_182C690(qword_1C7F2C0, v119, &qword_1C7F280);
  }
  else
  {
    v5 = qword_1C7F280;
    *(_BYTE *)(a1 + 900) &= ~1u;
    *(_DWORD *)(a1 + 896) = v5;
  }
  if ( (qword_1C7F290 & 0x100000000LL) != 0 )
  {
    sub_182C690(v4, a1 + 912, &qword_1C7F290);
  }
  else
  {
    v6 = qword_1C7F290;
    *(_BYTE *)(a1 + 916) &= ~1u;
    *(_DWORD *)(a1 + 912) = v6;
  }
  v7 = *(_QWORD *)(a1 + 696);
  for ( i = 0; v7; ++i )
  {
    if ( i >= *(_DWORD *)(v7 - 4) )
      break;
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 936) + i) )
    {
      v135 &= 0xFCu;
      v85 = 32LL * i + v7;
      v138 &= 0xFCu;
      v134 = 0;
      v86 = qword_1C7F2C0;
      v136 = 0;
      v137 = 1;
      v139 = 0;
      if ( (*(_BYTE *)(v85 + 20) & 1) != 0 )
        sub_182C690(qword_1C7F2C0, &v134, v85 + 16);
      else
        v134 = *(_DWORD *)(v85 + 16);
      sub_182CBA0(v86, &v137);
      v138 &= ~1u;
      BYTE4(v140) &= 0xFCu;
      BYTE4(v142) &= 0xFCu;
      v137 = 1;
      LODWORD(v140) = 0;
      v141 = 0;
      LODWORD(v142) = 1;
      v143 = 0;
      v117 = qword_1C7F2C0;
      sub_1836B00(qword_1C7F2C0, v119, &v134, &v140);
      sub_182CBA0(v117, &v142);
      v87 = v140;
      v88 = *(_BYTE *)(a1 + 900);
      LODWORD(v140) = *(_DWORD *)(a1 + 896);
      v89 = *(_QWORD *)(a1 + 904);
      *(_DWORD *)(a1 + 896) = v87;
      v90 = v141;
      v141 = v89;
      LOBYTE(v89) = BYTE4(v140);
      *(_QWORD *)(a1 + 904) = v90;
      LOBYTE(v90) = v89;
      LOBYTE(v89) = v89 & 0xFD;
      *(_BYTE *)(a1 + 900) = v89 & 1 | v88 & 0xFC | v90 & 2;
      v91 = v143;
      v92 = *(_BYTE *)(a1 + 916);
      BYTE4(v140) = v88 & 1 | v89 & 0xFE | v88 & 2;
      LODWORD(v89) = *(_DWORD *)(a1 + 912);
      *(_DWORD *)(a1 + 912) = 1;
      LODWORD(v142) = v89;
      v93 = *(_QWORD *)(a1 + 920);
      *(_QWORD *)(a1 + 920) = v91;
      v143 = v93;
      LOBYTE(v91) = v92 & 0xFD | BYTE4(v142) & 2;
      BYTE4(v142) = v92 & 1 | v92 & 2 | BYTE4(v142) & 0xFC;
      *(_BYTE *)(a1 + 916) = v91 & 0xFE;
      v118 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v140);
      sub_182CBA0(v118, &v142);
      v94 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v134);
      sub_182CBA0(v94, &v137);
      v7 = *(_QWORD *)(a1 + 696);
    }
  }
  v135 &= 0xFCu;
  v133 = a1 + 784;
  v138 &= 0xFCu;
  v134 = 0;
  v9 = qword_1C7F2C0;
  v136 = 0;
  v137 = 1;
  v139 = 0;
  if ( (*(_BYTE *)(a1 + 788) & 1) != 0 )
    sub_182C690(qword_1C7F2C0, &v134, v133);
  else
    v134 = *(_DWORD *)(a1 + 784);
  sub_182CBA0(v9, &v137);
  v138 &= ~1u;
  v10 = qword_1C7F2C0;
  BYTE4(v140) &= 0xFCu;
  BYTE4(v142) &= 0xFCu;
  v137 = 1;
  LODWORD(v140) = 0;
  v141 = 0;
  LODWORD(v142) = 1;
  v143 = 0;
  sub_1836B00(qword_1C7F2C0, v119, &v134, &v140);
  sub_182CBA0(v10, &v142);
  v11 = v140;
  LODWORD(v140) = *(_DWORD *)(a1 + 896);
  v12 = *(_QWORD *)(a1 + 904);
  *(_DWORD *)(a1 + 896) = v11;
  v13 = v141;
  v141 = v12;
  LOBYTE(v12) = *(_BYTE *)(a1 + 900);
  *(_QWORD *)(a1 + 904) = v13;
  LOBYTE(v13) = BYTE4(v140) & 1;
  v14 = v12 & 0xFC | BYTE4(v140) & 2;
  v15 = *(_BYTE *)(a1 + 916);
  BYTE4(v140) = v12 & 1 | BYTE4(v140) & 0xFC | v12 & 2;
  LODWORD(v12) = *(_DWORD *)(a1 + 912);
  *(_BYTE *)(a1 + 900) = v14 | v13;
  LODWORD(v142) = v12;
  v16 = *(_QWORD *)(a1 + 920);
  *(_QWORD *)(a1 + 920) = v143;
  v143 = v16;
  LOBYTE(v16) = BYTE4(v142);
  *(_DWORD *)(a1 + 912) = 1;
  BYTE4(v142) = v15 & 1 | v15 & 2 | v16 & 0xFC;
  *(_BYTE *)(a1 + 916) = v15 & 0xFC | v16 & 2;
  v17 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v140);
  sub_182CBA0(v17, &v142);
  v18 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v134);
  sub_182CBA0(v18, &v137);
  v19 = *(_QWORD *)(a1 + 704);
  if ( v19 )
  {
    v20 = *(unsigned int *)(v19 - 4);
    if ( !(_DWORD)v20 )
      goto LABEL_16;
    v21 = 16 * v20;
    v22 = 0;
    do
    {
      v23 = v19 + v22;
      v22 += 16;
      sub_182EF00(*(_QWORD *)(a1 + 712), v23);
      v19 = *(_QWORD *)(a1 + 704);
    }
    while ( v21 != v22 );
    if ( v19 )
LABEL_16:
      *(_DWORD *)(v19 - 4) = 0;
  }
  v24 = *(_QWORD *)(a1 + 752);
  v25 = *(_QWORD *)(a1 + 696);
  if ( v24 )
    *(_DWORD *)(v24 - 4) = 0;
  if ( !v25 )
    goto LABEL_60;
  v26 = 0;
  while ( v26 < *(_DWORD *)(v25 - 4) )
  {
    v140 = 0;
    v141 = 0;
    v142 = 1;
    v27 = 32LL * v26 + v25;
    v143 = 0;
    v28 = qword_1C7F2C0;
    if ( (*(_BYTE *)(v27 + 4) & 1) != 0 )
    {
      srcc = qword_1C7F2C0;
      sub_182C690(qword_1C7F2C0, &v140, v27);
      v28 = srcc;
    }
    else
    {
      LODWORD(v140) = *(_DWORD *)v27;
    }
    if ( (*(_BYTE *)(v27 + 20) & 1) != 0 )
    {
      sub_182C690(v28, &v142, v27 + 16);
    }
    else
    {
      v29 = *(_DWORD *)(v27 + 16);
      BYTE4(v142) &= ~1u;
      LODWORD(v142) = v29;
    }
    if ( (v142 & 0x100000000LL) != 0
      || (_DWORD)v142 != 1
      || (*(_BYTE *)(v3 + 916) & 1) != 0
      || *(_DWORD *)(v3 + 912) != 1 )
    {
      sub_1848FF0(qword_1C7F2C0, &v140, v119);
    }
    else
    {
      srcd = qword_1C7F2C0;
      sub_1831650(qword_1C7F2C0, &v140, v119);
      sub_182CBA0(srcd, &v142);
      BYTE4(v142) &= ~1u;
      LODWORD(v142) = 1;
    }
    v135 &= 0xFCu;
    v138 &= 0xFCu;
    v134 = 0;
    v30 = qword_1C7F2C0;
    v136 = 0;
    v137 = 1;
    v139 = 0;
    if ( (v140 & 0x100000000LL) != 0 )
      sub_182C690(qword_1C7F2C0, &v134, &v140);
    else
      v134 = v140;
    if ( (v142 & 0x100000000LL) != 0 )
    {
      sub_182C690(v30, &v137, &v142);
    }
    else
    {
      v138 &= ~1u;
      v137 = v142;
    }
    v31 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v140);
    sub_182CBA0(v31, &v142);
    v32 = *(_QWORD **)(v3 + 704);
    if ( v32 )
    {
      v33 = *((unsigned int *)v32 - 1);
      if ( (_DWORD)v33 == *((_DWORD *)v32 - 2) )
      {
        v72 = (unsigned int)(3 * v33 + 1) >> 1;
        v73 = 16 * v72 + 8;
        if ( 16 * (int)v33 + 8 >= (unsigned int)v73 || (unsigned int)v33 >= v72 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(&v140, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, &v140);
          sub_233E40((__int64)&v140);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v74 = sub_186B270(v73);
        v75 = *(int **)(v3 + 704);
        v76 = (_DWORD *)v74;
        v32 = (_QWORD *)(v74 + 8);
        if ( v75 )
        {
          v77 = (unsigned int)*(v75 - 1);
          v78 = v32;
          v76[1] = v77;
          v79 = &v75[4 * v77];
          for ( j = v75; j != v79; *(v78 - 1) = v83 )
          {
            v81 = *j;
            v82 = *((_BYTE *)j + 4);
            j += 4;
            v78 += 2;
            *((_DWORD *)v78 - 4) = v81;
            *((_BYTE *)v78 - 12) = v82 & 3 | *((_BYTE *)v78 - 12) & 0xFC;
            v83 = *((_QWORD *)j - 1);
            *((_QWORD *)j - 1) = 0;
          }
          v127 = v76;
          sub_186B220(v75 - 2);
          v76 = v127;
          v34 = &v32[2 * (unsigned int)v127[1]];
        }
        else
        {
          *(_DWORD *)(v74 + 4) = 0;
          v34 = (_QWORD *)(v74 + 8);
        }
        *(_QWORD *)(v3 + 704) = v32;
        *v76 = v72;
      }
      else
      {
        v34 = &v32[2 * v33];
      }
    }
    else
    {
      v115 = (_QWORD *)sub_186B270(0x28u);
      v32 = v115 + 1;
      *v115 = 2;
      *(_QWORD *)(v3 + 704) = v115 + 1;
      v34 = v115 + 1;
    }
    *v34 = 0;
    v34[1] = 0;
    v35 = *((unsigned int *)v32 - 1);
    *((_DWORD *)v32 - 1) = v35 + 1;
    v36 = &v32[2 * v35];
    if ( (v135 & 1) != 0 )
    {
      sub_182EA00(*(_QWORD *)(v3 + 712), v36, &v134);
      v38 = *(_QWORD **)(v3 + 752);
      if ( v38 )
      {
LABEL_38:
        v39 = *((unsigned int *)v38 - 1);
        if ( (_DWORD)v39 == *((_DWORD *)v38 - 2) )
        {
          v68 = (unsigned int)(3 * v39 + 1) >> 1;
          v69 = 4 * v68 + 8;
          if ( 4 * (int)v39 + 8 >= (unsigned int)v69 || (unsigned int)v39 >= v68 )
          {
            v2 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(&v140, "Overflow encountered when expanding vector");
            *v2 = (char *)off_1C63128;
            sub_2333C0(v2 + 1, &v140);
            sub_233E40((__int64)&v140);
            __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v70 = (unsigned int *)sub_186B300(v38 - 1, v69);
          v38 = v70 + 2;
          *v70 = v68;
          v71 = v70[1];
          *(_QWORD *)(v3 + 752) = v38;
          v40 = (_DWORD *)v38 + v71;
        }
        else
        {
          v40 = (_DWORD *)v38 + v39;
        }
        goto LABEL_40;
      }
    }
    else
    {
      v37 = v134;
      v38 = *(_QWORD **)(v3 + 752);
      *((_BYTE *)v36 + 4) &= ~1u;
      *(_DWORD *)v36 = v37;
      if ( v38 )
        goto LABEL_38;
    }
    v84 = (_QWORD *)sub_186B270(0x10u);
    v38 = v84 + 1;
    *v84 = 2;
    *(_QWORD *)(v3 + 752) = v84 + 1;
    v40 = v84 + 1;
LABEL_40:
    *v40 = v26++;
    ++*((_DWORD *)v38 - 1);
    v41 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v134);
    sub_182CBA0(v41, &v137);
    v25 = *(_QWORD *)(v3 + 696);
    if ( !v25 )
      break;
  }
  v42 = *(unsigned int **)(v3 + 752);
  if ( !v42 )
    goto LABEL_60;
  v43 = *(v42 - 1);
  v126 = &v42[v43];
  if ( v42 == &v42[v43] )
    goto LABEL_60;
  _BitScanReverse64(&v44, (v43 * 4) >> 2);
  sub_9816D0(v42, &v42[v43], 2LL * (int)v44, v3);
  if ( (unsigned __int64)v43 > 16 )
  {
    v95 = v42 + 1;
    srca = (char *)v42;
    v96 = *(_QWORD *)(v3 + 704);
    v130 = v42 + 16;
    do
    {
      while ( 1 )
      {
        v97 = *v95;
        v98 = v96 + 16 * v97;
        v99 = v96 + 16LL * *(unsigned int *)srca;
        if ( (*(_BYTE *)(v99 + 4) & 1) != 0 || (*(_BYTE *)(v98 + 4) & 1) != 0 )
        {
          v113 = sub_182EB00(v3 + 64, v99, v98);
          LODWORD(v97) = *v95;
          v100 = v113 >> 31;
        }
        else
        {
          LOBYTE(v100) = *(_DWORD *)v99 < *(_DWORD *)v98;
        }
        if ( (_BYTE)v100 )
          break;
        v132 = v97;
        v96 = *(_QWORD *)(v3 + 704);
        v101 = v95;
        v102 = 16LL * (unsigned int)v97;
        while ( 1 )
        {
          v103 = v101;
          v104 = v96 + v102;
          v105 = v96 + 16LL * *(v101 - 1);
          if ( (*(_BYTE *)(v105 + 4) & 1) != 0 || (*(_BYTE *)(v104 + 4) & 1) != 0 )
            break;
          --v101;
          if ( *(_DWORD *)v105 >= *(_DWORD *)v104 )
            goto LABEL_109;
LABEL_105:
          v101[1] = *v101;
        }
        --v101;
        v106 = (unsigned int)sub_182EB00(v3 + 64, v105, v104) >> 31;
        v96 = *(_QWORD *)(v3 + 704);
        if ( (_BYTE)v106 )
          goto LABEL_105;
LABEL_109:
        ++v95;
        *v103 = v132;
        if ( v130 == v95 )
          goto LABEL_110;
      }
      if ( (char *)v95 - srca <= 4 )
      {
        if ( (char *)v95 - srca == 4 )
          *v95 = *(_DWORD *)srca;
      }
      else
      {
        v131 = v97;
        memmove(srca + 4, srca, (char *)v95 - srca);
        LODWORD(v97) = v131;
      }
      ++v95;
      *(_DWORD *)srca = v97;
      v96 = *(_QWORD *)(v3 + 704);
    }
    while ( v130 != v95 );
LABEL_110:
    v107 = v130;
LABEL_111:
    v108 = v107;
    v109 = 16LL * *v107;
    srcb = *v107;
    while ( 1 )
    {
      v110 = v108;
      v111 = v96 + v109;
      v112 = v96 + 16LL * *(v108 - 1);
      if ( (*(_BYTE *)(v112 + 4) & 1) != 0 || (*(_BYTE *)(v111 + 4) & 1) != 0 )
      {
        --v108;
        if ( (int)sub_182EB00(v3 + 64, v112, v111) >= 0 )
        {
LABEL_117:
          ++v107;
          *v110 = srcb;
          if ( v107 == v126 )
            goto LABEL_60;
          v96 = *(_QWORD *)(v3 + 704);
          goto LABEL_111;
        }
      }
      else
      {
        --v108;
        if ( *(_DWORD *)v112 >= *(_DWORD *)v111 )
          goto LABEL_117;
      }
      v108[1] = *v108;
      v96 = *(_QWORD *)(v3 + 704);
    }
  }
  if ( v43 == 1 )
    goto LABEL_60;
  v45 = v3 + 64;
  v46 = v42 + 1;
  src = (char *)v42;
  while ( 2 )
  {
    while ( 1 )
    {
      v47 = *v46;
      v48 = *(_QWORD *)(v3 + 704);
      v49 = v48 + 16LL * *(unsigned int *)src;
      v50 = 16LL * *v46 + v48;
      if ( (*(_BYTE *)(v49 + 4) & 1) != 0 || (*(_BYTE *)(v50 + 4) & 1) != 0 )
      {
        v114 = sub_182EB00(v45, v49, v50);
        v47 = *v46;
        v51 = v114 >> 31;
      }
      else
      {
        LOBYTE(v51) = *(_DWORD *)v49 < *(_DWORD *)v50;
      }
      if ( (_BYTE)v51 )
        break;
      v52 = v3;
      v129 = v47;
      v53 = v46;
      v54 = 16LL * v47;
      v55 = v52;
      while ( 1 )
      {
        v56 = *(_QWORD *)(v55 + 704);
        v57 = v53;
        v58 = v56 + 16LL * *(v53 - 1);
        v59 = v54 + v56;
        if ( (*(_BYTE *)(v58 + 4) & 1) != 0 || (*(_BYTE *)(v59 + 4) & 1) != 0 )
          break;
        --v53;
        if ( *(_DWORD *)v58 >= *(_DWORD *)v59 )
          goto LABEL_59;
LABEL_55:
        v53[1] = *v53;
      }
      --v53;
      if ( (int)sub_182EB00(v45, v58, v59) < 0 )
        goto LABEL_55;
LABEL_59:
      ++v46;
      v3 = v55;
      *v57 = v129;
      if ( v46 == v126 )
        goto LABEL_60;
    }
    if ( (char *)v46 - src <= 4 )
    {
      if ( (char *)v46 - src == 4 )
        *v46 = *(_DWORD *)src;
    }
    else
    {
      v128 = v47;
      memmove(src + 4, src, (char *)v46 - src);
      v47 = v128;
    }
    ++v46;
    *(_DWORD *)src = v47;
    if ( v46 != v126 )
      continue;
    break;
  }
LABEL_60:
  v60 = *(_QWORD *)(v3 + 800);
  *(_DWORD *)(v3 + 744) = 0;
  sub_182F200(v60, v3 + 808);
  v140 = 0;
  v141 = 0;
  v142 = 1;
  v61 = qword_1C7F2C0;
  v143 = 0;
  if ( (*(_BYTE *)(v3 + 772) & 1) != 0 )
  {
    sub_182C690(qword_1C7F2C0, &v140, v3 + 768);
    if ( (*(_BYTE *)(v3 + 788) & 1) != 0 )
      goto LABEL_125;
LABEL_62:
    v62 = *(_DWORD *)(v3 + 784);
    BYTE4(v142) &= ~1u;
    LODWORD(v142) = v62;
  }
  else
  {
    LODWORD(v140) = *(_DWORD *)(v3 + 768);
    if ( (*(_BYTE *)(v3 + 788) & 1) == 0 )
      goto LABEL_62;
LABEL_125:
    sub_182C690(v61, &v142, v133);
  }
  if ( (v142 & 0x100000000LL) != 0 || (_DWORD)v142 != 1 || (*(_BYTE *)(v3 + 916) & 1) != 0 || *(_DWORD *)(v3 + 912) != 1 )
  {
    sub_1848FF0(qword_1C7F2C0, &v140, v119);
  }
  else
  {
    v116 = v119;
    v120 = qword_1C7F2C0;
    sub_1831650(qword_1C7F2C0, &v140, v116);
    sub_182CBA0(v120, &v142);
    BYTE4(v142) &= ~1u;
    LODWORD(v142) = 1;
  }
  v135 &= 0xFCu;
  v138 &= 0xFCu;
  v134 = 0;
  v63 = qword_1C7F2C0;
  v136 = 0;
  v137 = 1;
  v139 = 0;
  if ( (v140 & 0x100000000LL) != 0 )
    sub_182C690(qword_1C7F2C0, &v134, &v140);
  else
    v134 = v140;
  if ( (v142 & 0x100000000LL) != 0 )
  {
    sub_182C690(v63, &v137, &v142);
  }
  else
  {
    v138 &= ~1u;
    v137 = v142;
  }
  v64 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v140);
  sub_182CBA0(v64, &v142);
  if ( (v135 & 1) != 0 )
  {
    sub_182EA00(*(_QWORD *)(v3 + 824), v3 + 832, &v134);
  }
  else
  {
    v65 = v134;
    *(_BYTE *)(v3 + 836) &= ~1u;
    *(_DWORD *)(v3 + 832) = v65;
  }
  *(_BYTE *)(v3 + 890) = 0;
  v66 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v134);
  return sub_182CBA0(v66, &v137);
}

