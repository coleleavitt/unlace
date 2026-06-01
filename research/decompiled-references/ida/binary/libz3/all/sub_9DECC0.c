__int64 __fastcall sub_9DECC0(__int64 a1, char a2)
{
  unsigned int *v3; // r14
  unsigned int *v4; // rbp
  __int64 v5; // rdx
  int *v6; // rax
  int *v7; // rax
  int v8; // edx
  __int64 v9; // rdx
  char v10; // cl
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rdx
  void *v14; // rdi
  void *v15; // r13
  __int64 v16; // r13
  __int64 v17; // rax
  unsigned int v18; // r12d
  __int64 v19; // rax
  int *v20; // rax
  __int64 v21; // r13
  int *v22; // rax
  int v23; // edx
  __int64 v24; // rdx
  char v25; // cl
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rdx
  int *v29; // rax
  int *v30; // rax
  int v31; // edx
  __int64 v32; // rdx
  char v33; // cl
  __int64 v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // rdx
  void *v37; // r15
  void *v38; // r13
  __int64 v39; // r13
  __int64 v40; // r15
  unsigned int v41; // r12d
  __int64 v42; // r15
  int *v43; // rax
  __int64 v44; // r13
  int *v45; // rax
  int v46; // edx
  __int64 v47; // rdx
  char v48; // cl
  __int64 v49; // rdx
  __int64 v50; // rdx
  __int64 v51; // rdx
  __int64 v52; // rdi
  __int64 v53; // rbx
  int *v54; // rax
  int v55; // esi
  int v56; // edx
  int v57; // ecx
  __int64 v58; // r8
  __int64 v59; // rdx
  _DWORD *v60; // rbp
  int v61; // ecx
  int v62; // edx
  int v63; // r9d
  __int64 v64; // r11
  __int64 v65; // rax
  unsigned int v66; // ecx
  int v67; // r12d
  __int64 v68; // rax
  unsigned int *v69; // r10
  unsigned int v70; // edx
  void *v71; // rbp
  void *v72; // rbp
  void *v73; // rbp
  void *v74; // rbx
  __int64 v76; // r8
  unsigned int v77; // ecx
  unsigned int *v78; // rdi
  size_t v79; // rdx
  _DWORD *v80; // rax
  int v81; // ecx
  _DWORD *v82; // rdx
  unsigned int v83; // [rsp+8h] [rbp-130h]
  void *v84; // [rsp+8h] [rbp-130h]
  __int64 v85; // [rsp+20h] [rbp-118h]
  void *v86; // [rsp+20h] [rbp-118h]
  void *v87; // [rsp+20h] [rbp-118h]
  __int64 v88; // [rsp+20h] [rbp-118h]
  void *v89; // [rsp+20h] [rbp-118h]
  void *v90; // [rsp+20h] [rbp-118h]
  void *v91; // [rsp+20h] [rbp-118h]
  void *v92; // [rsp+20h] [rbp-118h]
  void *v93; // [rsp+20h] [rbp-118h]
  void *v94; // [rsp+20h] [rbp-118h]
  _QWORD v95[2]; // [rsp+40h] [rbp-F8h] BYREF
  _QWORD v96[2]; // [rsp+50h] [rbp-E8h] BYREF
  _QWORD v97[2]; // [rsp+60h] [rbp-D8h] BYREF
  _QWORD v98[2]; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v99; // [rsp+80h] [rbp-B8h] BYREF
  __int64 v100; // [rsp+88h] [rbp-B0h]
  __int64 v101; // [rsp+90h] [rbp-A8h] BYREF
  __int64 v102; // [rsp+98h] [rbp-A0h]
  __int64 v103; // [rsp+A0h] [rbp-98h] BYREF
  __int64 v104; // [rsp+A8h] [rbp-90h]
  __int64 v105; // [rsp+B0h] [rbp-88h] BYREF
  __int64 v106; // [rsp+B8h] [rbp-80h]
  int v107; // [rsp+C0h] [rbp-78h] BYREF
  char v108; // [rsp+C4h] [rbp-74h]
  __int64 v109; // [rsp+C8h] [rbp-70h]
  int v110; // [rsp+D0h] [rbp-68h] BYREF
  char v111; // [rsp+D4h] [rbp-64h]
  __int64 v112; // [rsp+D8h] [rbp-60h]
  int v113; // [rsp+E0h] [rbp-58h] BYREF
  char v114; // [rsp+E4h] [rbp-54h]
  __int64 v115; // [rsp+E8h] [rbp-50h]
  int v116; // [rsp+F0h] [rbp-48h] BYREF
  char v117; // [rsp+F4h] [rbp-44h]
  __int64 v118; // [rsp+F8h] [rbp-40h]

  v3 = *(unsigned int **)(a1 + 864);
  v95[0] = 0;
  v95[1] = 0;
  v4 = v3 + 1;
  v96[0] = 1;
  v96[1] = 0;
  v97[0] = 0;
  v97[1] = 0;
  v98[0] = 1;
  v98[1] = 0;
  v99 = 0;
  v100 = 0;
  v101 = 1;
  v102 = 0;
  v103 = 0;
  v104 = 0;
  v105 = 1;
  v106 = 0;
  if ( v3 )
  {
    v5 = *(v3 - 1);
    v3 += v5;
    if ( 4 * v5 == 4 )
      goto LABEL_72;
  }
  v83 = -1;
  if ( !a2 )
  {
    while ( 1 )
    {
      v16 = *v4;
      v17 = *(_QWORD *)(*(_QWORD *)(a1 + 680) + 8 * v16);
      v18 = *v4;
      if ( v17 )
      {
        v85 = v17 + 16;
        v6 = sub_9AA900(a1, v16);
        if ( sub_927C80((__int64)v6, v85) )
          break;
      }
      v19 = *(_QWORD *)(*(_QWORD *)(a1 + 688) + 8 * v16);
      if ( v19 )
      {
        v88 = v19 + 16;
        v20 = sub_9AA900(a1, v18);
        if ( sub_927C80(v88, (__int64)v20) )
        {
          v21 = *(_QWORD *)(*(_QWORD *)(a1 + 688) + 8 * v16) + 16LL;
          v22 = sub_9AA900(a1, v18);
          sub_992E80((__int64)&v107, (__int64)v22, v21);
          v23 = v107;
          v107 = v99;
          LODWORD(v99) = v23;
          v24 = v109;
          v109 = v100;
          v100 = v24;
          v25 = v108 & 1;
          LOBYTE(v24) = BYTE4(v99) & 0xFC | v108 & 2;
          v108 = BYTE4(v99) & 1 | v108 & 0xFC | BYTE4(v99) & 2;
          BYTE4(v99) = v25 | v24;
          LODWORD(v24) = v110;
          v110 = v101;
          LODWORD(v101) = v24;
          v26 = v112;
          v112 = v102;
          v102 = v26;
          LOBYTE(v26) = v111 & 1 | BYTE4(v101) & 0xFC | v111 & 2;
          v111 = BYTE4(v101) & 1 | v111 & 0xFC | BYTE4(v101) & 2;
          BYTE4(v101) = v26;
          LODWORD(v26) = v113;
          v113 = v103;
          LODWORD(v103) = v26;
          v27 = v115;
          v115 = v104;
          v104 = v27;
          v89 = qword_1C7F2C0;
          LOBYTE(v27) = v114 & 1 | BYTE4(v103) & 0xFC | v114 & 2;
          v114 = BYTE4(v103) & 1 | v114 & 0xFC | BYTE4(v103) & 2;
          BYTE4(v103) = v27;
          LODWORD(v27) = v116;
          v116 = v105;
          LODWORD(v105) = v27;
          v28 = v118;
          v118 = v106;
          v106 = v28;
          LOBYTE(v28) = v117 & 1 | BYTE4(v105) & 0xFC | v117 & 2;
          v117 = BYTE4(v105) & 1 | v117 & 0xFC | BYTE4(v105) & 2;
          BYTE4(v105) = v28;
          sub_182CBA0(qword_1C7F2C0, &v113);
          sub_182CBA0(v89, &v116);
          v90 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v107);
          sub_182CBA0(v90, &v110);
          goto LABEL_7;
        }
      }
LABEL_18:
      if ( v3 == ++v4 )
        goto LABEL_41;
    }
    v7 = sub_9AA900(a1, v16);
    sub_992E80((__int64)&v107, *(_QWORD *)(*(_QWORD *)(a1 + 680) + 8 * v16) + 16LL, (__int64)v7);
    v8 = v107;
    v107 = v99;
    LODWORD(v99) = v8;
    v9 = v109;
    v109 = v100;
    v100 = v9;
    v10 = v108 & 1;
    LOBYTE(v9) = BYTE4(v99) & 0xFC | v108 & 2;
    v108 = BYTE4(v99) & 1 | v108 & 0xFC | BYTE4(v99) & 2;
    BYTE4(v99) = v10 | v9;
    LODWORD(v9) = v110;
    v110 = v101;
    LODWORD(v101) = v9;
    v11 = v112;
    v112 = v102;
    v102 = v11;
    LOBYTE(v11) = v111 & 1 | BYTE4(v101) & 0xFC | v111 & 2;
    v111 = BYTE4(v101) & 1 | v111 & 0xFC | BYTE4(v101) & 2;
    BYTE4(v101) = v11;
    LODWORD(v11) = v113;
    v113 = v103;
    LODWORD(v103) = v11;
    v12 = v115;
    v115 = v104;
    v104 = v12;
    v86 = qword_1C7F2C0;
    LOBYTE(v12) = v114 & 1 | BYTE4(v103) & 0xFC | v114 & 2;
    v114 = BYTE4(v103) & 1 | v114 & 0xFC | BYTE4(v103) & 2;
    BYTE4(v103) = v12;
    LODWORD(v12) = v116;
    v116 = v105;
    LODWORD(v105) = v12;
    v13 = v118;
    v118 = v106;
    v106 = v13;
    LOBYTE(v13) = v117 & 1 | BYTE4(v105) & 0xFC | v117 & 2;
    v117 = BYTE4(v105) & 1 | v117 & 0xFC | BYTE4(v105) & 2;
    BYTE4(v105) = v13;
    sub_182CBA0(qword_1C7F2C0, &v113);
    sub_182CBA0(v86, &v116);
    v87 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v107);
    sub_182CBA0(v87, &v110);
LABEL_7:
    if ( v83 == -1 || sub_927C80((__int64)v95, (__int64)&v99) )
    {
      v14 = qword_1C7F2C0;
      if ( (v99 & 0x100000000LL) != 0 )
      {
        v84 = qword_1C7F2C0;
        sub_182C690(qword_1C7F2C0, v95, &v99);
        v14 = v84;
      }
      else
      {
        BYTE4(v95[0]) &= ~1u;
        LODWORD(v95[0]) = v99;
      }
      if ( (v101 & 0x100000000LL) != 0 )
      {
        sub_182C690(v14, v96, &v101);
      }
      else
      {
        BYTE4(v96[0]) &= ~1u;
        LODWORD(v96[0]) = v101;
      }
      v15 = qword_1C7F2C0;
      if ( (v103 & 0x100000000LL) != 0 )
      {
        sub_182C690(qword_1C7F2C0, v97, &v103);
      }
      else
      {
        BYTE4(v97[0]) &= ~1u;
        LODWORD(v97[0]) = v103;
      }
      if ( (v105 & 0x100000000LL) != 0 )
      {
        sub_182C690(v15, v98, &v105);
      }
      else
      {
        BYTE4(v98[0]) &= ~1u;
        LODWORD(v98[0]) = v105;
      }
      v83 = v18;
    }
    goto LABEL_18;
  }
  do
  {
    v39 = *v4;
    v40 = *(_QWORD *)(*(_QWORD *)(a1 + 680) + 8 * v39);
    v41 = *v4;
    if ( v40 && (v29 = sub_9AA900(a1, v39), sub_927C80((__int64)v29, v40 + 16)) )
    {
      v30 = sub_9AA900(a1, v39);
      sub_992E80((__int64)&v107, *(_QWORD *)(*(_QWORD *)(a1 + 680) + 8 * v39) + 16LL, (__int64)v30);
      v31 = v107;
      v107 = v99;
      LODWORD(v99) = v31;
      v32 = v109;
      v109 = v100;
      v100 = v32;
      v33 = v108 & 1;
      LOBYTE(v32) = BYTE4(v99) & 0xFC | v108 & 2;
      v108 = BYTE4(v99) & 1 | v108 & 0xFC | BYTE4(v99) & 2;
      BYTE4(v99) = v33 | v32;
      LODWORD(v32) = v110;
      v110 = v101;
      LODWORD(v101) = v32;
      v34 = v112;
      v112 = v102;
      v102 = v34;
      LOBYTE(v34) = v111 & 1 | BYTE4(v101) & 0xFC | v111 & 2;
      v111 = BYTE4(v101) & 1 | v111 & 0xFC | BYTE4(v101) & 2;
      BYTE4(v101) = v34;
      LODWORD(v34) = v113;
      v113 = v103;
      LODWORD(v103) = v34;
      v35 = v115;
      v115 = v104;
      v104 = v35;
      v91 = qword_1C7F2C0;
      LOBYTE(v35) = v114 & 1 | BYTE4(v103) & 0xFC | v114 & 2;
      v114 = BYTE4(v103) & 1 | v114 & 0xFC | BYTE4(v103) & 2;
      BYTE4(v103) = v35;
      LODWORD(v35) = v116;
      v116 = v105;
      LODWORD(v105) = v35;
      v36 = v118;
      v118 = v106;
      v106 = v36;
      LOBYTE(v36) = v117 & 1 | BYTE4(v105) & 0xFC | v117 & 2;
      v117 = BYTE4(v105) & 1 | v117 & 0xFC | BYTE4(v105) & 2;
      BYTE4(v105) = v36;
      sub_182CBA0(qword_1C7F2C0, &v113);
      sub_182CBA0(v91, &v116);
      v92 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v107);
      sub_182CBA0(v92, &v110);
    }
    else
    {
      v42 = *(_QWORD *)(*(_QWORD *)(a1 + 688) + 8 * v39);
      if ( !v42 )
        goto LABEL_36;
      v43 = sub_9AA900(a1, v41);
      if ( !sub_927C80(v42 + 16, (__int64)v43) )
        goto LABEL_36;
      v44 = *(_QWORD *)(*(_QWORD *)(a1 + 688) + 8 * v39) + 16LL;
      v45 = sub_9AA900(a1, v41);
      sub_992E80((__int64)&v107, (__int64)v45, v44);
      v46 = v107;
      v107 = v99;
      LODWORD(v99) = v46;
      v47 = v109;
      v109 = v100;
      v100 = v47;
      v48 = v108 & 1;
      LOBYTE(v47) = BYTE4(v99) & 0xFC | v108 & 2;
      v108 = BYTE4(v99) & 1 | v108 & 0xFC | BYTE4(v99) & 2;
      BYTE4(v99) = v48 | v47;
      LODWORD(v47) = v110;
      v110 = v101;
      LODWORD(v101) = v47;
      v49 = v112;
      v112 = v102;
      v102 = v49;
      LOBYTE(v49) = v111 & 1 | BYTE4(v101) & 0xFC | v111 & 2;
      v111 = BYTE4(v101) & 1 | v111 & 0xFC | BYTE4(v101) & 2;
      BYTE4(v101) = v49;
      LODWORD(v49) = v113;
      v113 = v103;
      LODWORD(v103) = v49;
      v50 = v115;
      v115 = v104;
      v104 = v50;
      v93 = qword_1C7F2C0;
      LOBYTE(v50) = v114 & 1 | BYTE4(v103) & 0xFC | v114 & 2;
      v114 = BYTE4(v103) & 1 | v114 & 0xFC | BYTE4(v103) & 2;
      BYTE4(v103) = v50;
      LODWORD(v50) = v116;
      v116 = v105;
      LODWORD(v105) = v50;
      v51 = v118;
      v118 = v106;
      v106 = v51;
      LOBYTE(v51) = v117 & 1 | BYTE4(v105) & 0xFC | v117 & 2;
      v117 = BYTE4(v105) & 1 | v117 & 0xFC | BYTE4(v105) & 2;
      BYTE4(v105) = v51;
      sub_182CBA0(qword_1C7F2C0, &v113);
      sub_182CBA0(v93, &v116);
      v94 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v107);
      sub_182CBA0(v94, &v110);
    }
    if ( v83 == -1 || sub_927C80((__int64)&v99, (__int64)v95) )
    {
      v37 = qword_1C7F2C0;
      if ( (v99 & 0x100000000LL) != 0 )
      {
        sub_182C690(qword_1C7F2C0, v95, &v99);
      }
      else
      {
        BYTE4(v95[0]) &= ~1u;
        LODWORD(v95[0]) = v99;
      }
      if ( (v101 & 0x100000000LL) != 0 )
      {
        sub_182C690(v37, v96, &v101);
      }
      else
      {
        BYTE4(v96[0]) &= ~1u;
        LODWORD(v96[0]) = v101;
      }
      v38 = qword_1C7F2C0;
      if ( (v103 & 0x100000000LL) != 0 )
      {
        sub_182C690(qword_1C7F2C0, v97, &v103);
        if ( (v105 & 0x100000000LL) != 0 )
          goto LABEL_63;
LABEL_34:
        BYTE4(v98[0]) &= ~1u;
        LODWORD(v98[0]) = v105;
      }
      else
      {
        BYTE4(v97[0]) &= ~1u;
        LODWORD(v97[0]) = v103;
        if ( (v105 & 0x100000000LL) == 0 )
          goto LABEL_34;
LABEL_63:
        sub_182C690(v38, v98, &v105);
      }
      v83 = v41;
    }
LABEL_36:
    ++v4;
  }
  while ( v3 != v4 );
LABEL_41:
  v52 = *(_QWORD *)(a1 + 864);
  if ( v83 == -1 )
  {
    if ( !v52 )
      goto LABEL_73;
    LODWORD(v5) = *(_DWORD *)(v52 - 4);
LABEL_72:
    if ( (_DWORD)v5 == 1 )
    {
LABEL_78:
      v83 = -1;
      goto LABEL_56;
    }
LABEL_73:
    v78 = *(unsigned int **)(a1 + 872);
    if ( v78 )
      v79 = 4LL * *(v78 - 1);
    else
      v79 = 0;
    memset(v78, 0, v79);
    v80 = *(_DWORD **)(a1 + 864);
    if ( !v80 || (v81 = *(v80 - 2), *(v80 - 1) = 0, v82 = v80, !v81) )
    {
      sub_313C10((unsigned int **)(a1 + 864));
      v80 = *(_DWORD **)(a1 + 864);
      v82 = &v80[*(v80 - 1)];
    }
    *v82 = -1;
    ++*(v80 - 1);
    goto LABEL_78;
  }
  v53 = *(_QWORD *)(a1 + 872);
  v54 = (int *)(v53 + 4LL * v83);
  v55 = *v54;
  if ( v52 )
  {
    v56 = *(_DWORD *)(v52 - 4);
    v57 = v56 - 1;
  }
  else
  {
    v57 = -1;
    v56 = 0;
  }
  if ( v55 == v57 )
  {
    *v54 = 0;
    --*(_DWORD *)(v52 - 4);
  }
  else
  {
    v58 = (unsigned int)v55;
    v59 = *(unsigned int *)(v52 + 4LL * (unsigned int)(v56 - 1));
    v60 = (_DWORD *)(v52 + 4LL * (unsigned int)v55);
    *v60 = v59;
    v61 = v59;
    *(_DWORD *)(v53 + 4 * v59) = v55;
    *v54 = 0;
    v62 = v55 >> 1;
    v63 = *(_DWORD *)(v52 - 4) - 1;
    *(_DWORD *)(v52 - 4) = v63;
    v64 = (unsigned int)*v60;
    if ( v55 >> 1 && (v65 = *(unsigned int *)(v52 + 4LL * (unsigned int)v62), v61 < (int)v65) )
    {
      while ( 1 )
      {
        v76 = 4 * v58;
        if ( (int)v65 <= (int)v64 )
          break;
        *(_DWORD *)(v52 + v76) = v65;
        v77 = v62 >> 1;
        *(_DWORD *)(v53 + 4 * v65) = v55;
        if ( !(v62 >> 1) )
        {
          v76 = 4;
          v55 = 1;
          break;
        }
        v58 = (unsigned int)v62;
        v62 >>= 1;
        v65 = *(unsigned int *)(v52 + 4LL * v77);
        v55 = v58;
      }
      *(_DWORD *)(v52 + v76) = v64;
      *(_DWORD *)(v53 + 4 * v64) = v55;
    }
    else
    {
      v66 = 2 * v55;
      if ( 2 * v55 < v63 )
      {
        while ( 1 )
        {
          v70 = v66 + 1;
          v69 = (unsigned int *)(v52 + 4LL * v66);
          v68 = *v69;
          if ( v63 <= (int)(v66 + 1) || (v67 = *(_DWORD *)(v52 + 4LL * v70), v67 >= (int)v68) )
          {
            v70 = v66;
            v60 = (_DWORD *)(v52 + 4 * v58);
            if ( (int)v68 >= (int)v64 )
              goto LABEL_55;
          }
          else
          {
            v68 = (unsigned int)v67;
            v69 = (unsigned int *)(v52 + 4LL * v70);
            v60 = (_DWORD *)(v52 + 4 * v58);
            if ( v67 >= (int)v64 )
              goto LABEL_55;
          }
          v66 = 2 * v70;
          *v60 = v68;
          *(_DWORD *)(v53 + 4 * v68) = v55;
          if ( v63 <= (int)(2 * v70) )
            break;
          v58 = v70;
          v55 = v70;
        }
        v60 = v69;
        v55 = v70;
      }
LABEL_55:
      *v60 = v64;
      *(_DWORD *)(v53 + 4 * v64) = v55;
    }
  }
LABEL_56:
  v71 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v103);
  sub_182CBA0(v71, &v105);
  v72 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v99);
  sub_182CBA0(v72, &v101);
  v73 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v97);
  sub_182CBA0(v73, v98);
  v74 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v95);
  sub_182CBA0(v74, v96);
  return v83;
}

