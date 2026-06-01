void __fastcall sub_8D71E0(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // r15
  __int64 v5; // rax
  int *v6; // rbp
  void *v7; // r14
  __int64 v8; // r13
  unsigned int v9; // ecx
  __int64 v10; // rax
  __int64 v11; // r12
  void *v12; // rdi
  __int64 v13; // rax
  __int64 v14; // r12
  __int64 v15; // rax
  int v16; // r12d
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // r12
  int v20; // eax
  __int64 v21; // rcx
  _DWORD *v22; // rdx
  unsigned int *v23; // rax
  __int64 v24; // r10
  void *v25; // rcx
  int v26; // eax
  __int64 v27; // r14
  int v28; // eax
  char *v29; // rdx
  char v30; // al
  void *v31; // rdi
  unsigned __int64 v32; // r12
  __int64 v33; // r14
  unsigned int v34; // r13d
  void *v35; // rdi
  int v36; // eax
  int v37; // eax
  void *v38; // r14
  int v39; // eax
  unsigned __int64 v40; // rdx
  int v41; // eax
  void *v42; // r12
  void *v43; // r12
  void *v44; // rdi
  __int64 v45; // r12
  __int64 v46; // r10
  void *v47; // rdi
  char v48; // al
  char v49; // dl
  void *v50; // rbp
  __int64 v51; // rax
  __int64 v52; // rsi
  _DWORD *v53; // rdx
  int *v54; // r9
  int v55; // r12d
  __int64 v56; // rax
  unsigned int *v57; // rbp
  int v58; // r14d
  __int64 v59; // rcx
  __int64 v60; // rbp
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rsi
  bool v65; // al
  __int64 v66; // rdx
  __int64 v67; // rsi
  __int64 v68; // r14
  unsigned int *v69; // rbp
  int v70; // r12d
  __int64 v71; // rcx
  __int64 v72; // r13
  __int64 v73; // rbp
  unsigned int v74; // eax
  __int64 v75; // rax
  bool v76; // al
  int v77; // eax
  unsigned int *v78; // rax
  unsigned int *v79; // rdi
  __int64 v80; // rdx
  __int64 v81; // rax
  unsigned int *v82; // rdi
  size_t v83; // rdx
  _DWORD *v84; // rax
  int v85; // edx
  _DWORD *v86; // rdx
  unsigned int *v87; // rax
  unsigned int *v88; // rbx
  unsigned int v89; // ebp
  size_t v90; // rsi
  unsigned int *v91; // rax
  int v92; // eax
  int v93; // eax
  __int64 v94; // rax
  __int64 v95; // rax
  int v96; // r8d
  __int64 v97; // rax
  unsigned int v98; // r9d
  __int64 v99; // r12
  unsigned int v100; // r15d
  unsigned int v101; // r14d
  __int64 v102; // rax
  char *v103; // r9
  unsigned __int64 v104; // rcx
  __int64 v105; // r13
  char v106; // al
  __int64 v107; // rax
  unsigned int v108; // ebp
  unsigned __int8 v109; // al
  unsigned int v110; // eax
  void *v111; // rdi
  __int64 v112; // rdx
  int v113; // r11d
  __int64 v114; // rdx
  int v115; // eax
  bool v116; // al
  int v117; // eax
  unsigned int v118; // eax
  int v119; // eax
  unsigned int v120; // eax
  char **exception; // rbp
  __int64 v122; // rdx
  unsigned int *v123; // [rsp+0h] [rbp-138h]
  int v124; // [rsp+0h] [rbp-138h]
  int v125; // [rsp+8h] [rbp-130h]
  __int64 v126; // [rsp+8h] [rbp-130h]
  char *v127; // [rsp+8h] [rbp-130h]
  char *v128; // [rsp+8h] [rbp-130h]
  char *v129; // [rsp+8h] [rbp-130h]
  char *v130; // [rsp+10h] [rbp-128h]
  void *v131; // [rsp+10h] [rbp-128h]
  __int64 v132; // [rsp+20h] [rbp-118h]
  __int64 v133; // [rsp+20h] [rbp-118h]
  __int64 v134; // [rsp+20h] [rbp-118h]
  void *v135; // [rsp+28h] [rbp-110h]
  unsigned int v136; // [rsp+38h] [rbp-100h]
  __int64 v137; // [rsp+38h] [rbp-100h]
  __int64 v138; // [rsp+38h] [rbp-100h]
  __int64 v139; // [rsp+38h] [rbp-100h]
  __int64 v140; // [rsp+40h] [rbp-F8h]
  __int64 v141; // [rsp+40h] [rbp-F8h]
  unsigned int *v142; // [rsp+48h] [rbp-F0h]
  unsigned __int64 v143; // [rsp+48h] [rbp-F0h]
  unsigned int v144; // [rsp+54h] [rbp-E4h]
  __int64 v145; // [rsp+58h] [rbp-E0h]
  __int64 v146; // [rsp+58h] [rbp-E0h]
  int v147; // [rsp+58h] [rbp-E0h]
  __int64 v148; // [rsp+60h] [rbp-D8h]
  __int64 v149; // [rsp+68h] [rbp-D0h]
  unsigned int v150; // [rsp+70h] [rbp-C8h]
  int v151; // [rsp+74h] [rbp-C4h]
  unsigned int **v152; // [rsp+78h] [rbp-C0h]
  unsigned int **v154; // [rsp+88h] [rbp-B0h]
  unsigned int v155; // [rsp+9Ch] [rbp-9Ch] BYREF
  int v156; // [rsp+A0h] [rbp-98h] BYREF
  char v157; // [rsp+A4h] [rbp-94h]
  __int64 v158; // [rsp+A8h] [rbp-90h]
  int v159; // [rsp+B0h] [rbp-88h] BYREF
  char v160; // [rsp+B4h] [rbp-84h]
  __int64 v161; // [rsp+B8h] [rbp-80h]
  int v162; // [rsp+C0h] [rbp-78h]
  __int64 v163[2]; // [rsp+D0h] [rbp-68h] BYREF
  _QWORD v164[2]; // [rsp+E0h] [rbp-58h] BYREF
  int v165; // [rsp+F0h] [rbp-48h]

  v4 = a1;
  v5 = *(_QWORD *)(a1 + 256);
  v6 = (int *)(v5 + ((unsigned __int64)a3 << 6));
  v7 = qword_1C7F2C0;
  v8 = (unsigned int)*v6;
  v9 = v6[1];
  v150 = *(_DWORD *)(v5 + ((unsigned __int64)a2 << 6) + 48);
  v10 = *(_QWORD *)(a1 + 288);
  ++*(_DWORD *)(a1 + 228);
  v11 = v10 + 40 * v8;
  v144 = v9;
  v155 = v8;
  v151 = v8;
  sub_182CEF0(v7, v11);
  sub_182CBA0(v7, v11 + 16);
  v12 = qword_1C7F2C0;
  *(_BYTE *)(v11 + 20) &= ~1u;
  v13 = *(_QWORD *)(v4 + 288);
  v148 = (__int64)(v6 + 2);
  *(_DWORD *)(v11 + 16) = 1;
  *(_DWORD *)(v11 + 32) = 0;
  v14 = v13 + 40LL * v144;
  sub_27B950((__int64)v12, v14, v6 + 2);
  *(_DWORD *)(v14 + 32) = v6[10];
  LODWORD(v163[0]) = v8;
  v15 = *(_QWORD *)(v4 + 328);
  if ( v15 )
    v16 = *(_DWORD *)(v15 - 4);
  else
    v16 = 0;
  v154 = (unsigned int **)(v4 + 328);
  *(_DWORD *)(*(_QWORD *)(v4 + 336) + 4 * v8) = v16;
  sub_893BD0((unsigned int **)(v4 + 328), (unsigned int *)v163);
  sub_8D6FE0((__int64 **)(v4 + 320), v16);
  v152 = (unsigned int **)(v4 + 312);
  sub_893BD0((unsigned int **)(v4 + 312), &v155);
  while ( 1 )
  {
    v17 = *(_QWORD *)(v4 + 328);
    v18 = *(_QWORD *)(v4 + 336);
    v19 = *(unsigned int *)(v17 + 4);
    v20 = *(_DWORD *)(v17 - 4);
    v21 = 4 * v19;
    v22 = (_DWORD *)(v18 + 4 * v19);
    if ( v20 == 2 )
    {
      *v22 = 0;
      --*(_DWORD *)(v17 - 4);
      goto LABEL_6;
    }
    v95 = *(unsigned int *)(v17 + 4LL * (unsigned int)(v20 - 1));
    *(_DWORD *)(v17 + 4) = v95;
    *(_DWORD *)(v18 + 4 * v95) = 1;
    *v22 = 0;
    v96 = *(_DWORD *)(v17 - 4) - 1;
    v97 = *(unsigned int *)(v17 + 4);
    *(_DWORD *)(v17 - 4) = v96;
    v147 = v97;
    v149 = v97;
    if ( v96 > 2 )
    {
      v138 = v19;
      v98 = 2;
      v99 = v4;
      v124 = v96;
      v100 = 1;
      v134 = 40 * v97;
      v141 = v21;
      while ( 1 )
      {
        v107 = v98 + 1;
        v108 = v98;
        if ( v124 > (int)v107 )
        {
          v109 = sub_89B840(
                   **(_QWORD **)(v99 + 320) + 40LL * *(unsigned int *)(v17 + 4 * v107),
                   **(_QWORD **)(v99 + 320) + 40LL * *(unsigned int *)(v17 + 4LL * v98));
          v17 = *(_QWORD *)(v99 + 328);
          v108 += v109;
        }
        v101 = *(_DWORD *)(v17 + 4LL * v108);
        v102 = **(_QWORD **)(v99 + 320);
        v103 = (char *)(v102 + v134);
        v104 = v101;
        v105 = v102 + 40LL * v101;
        if ( (*(_BYTE *)(v105 + 20) & 1) != 0
          || *(_DWORD *)(v105 + 16) != 1
          || (v103[20] & 1) != 0
          || *((_DWORD *)v103 + 4) != 1 )
        {
          v127 = (char *)(v102 + v134);
          v106 = sub_1848D40(qword_1C7F2C0, v102 + 40LL * v101, v102 + v134);
          v103 = v127;
          v104 = v101;
          if ( v106 )
            goto LABEL_163;
        }
        else
        {
          if ( (*(_BYTE *)(v105 + 4) & 1) != 0 || (v103[4] & 1) != 0 )
          {
            v129 = (char *)(v102 + v134);
            v120 = sub_182C7B0(qword_1C7F2C0, v102 + 40LL * v101, v102 + v134);
            v103 = v129;
            v104 = v101;
            v110 = v120 >> 31;
          }
          else
          {
            LOBYTE(v110) = *(_DWORD *)v105 < *(_DWORD *)v103;
          }
          if ( (_BYTE)v110 )
            goto LABEL_163;
        }
        v111 = qword_1C7F2C0;
        if ( (*(_BYTE *)(v105 + 4) & 1) != 0 || (v103[4] & 1) != 0 )
        {
          v143 = v104;
          v130 = v103;
          v115 = sub_182C7B0(qword_1C7F2C0, v105, v103);
          v103 = v130;
          v104 = v143;
          if ( v115 )
            goto LABEL_176;
        }
        else if ( *(_DWORD *)v105 != *(_DWORD *)v103 )
        {
          goto LABEL_176;
        }
        if ( (*(_BYTE *)(v105 + 20) & 1) != 0 || (v103[20] & 1) != 0 )
        {
          v131 = (void *)v104;
          v128 = v103;
          v117 = sub_182C7B0(v111, v105 + 16, v103 + 16);
          v103 = v128;
          v104 = (unsigned __int64)v131;
          v116 = v117 == 0;
        }
        else
        {
          v116 = *(_DWORD *)(v105 + 16) == *((_DWORD *)v103 + 4);
        }
        if ( !v116 || *(_DWORD *)(v105 + 32) >= *((_DWORD *)v103 + 8) )
        {
LABEL_176:
          v112 = v100;
          v4 = v99;
          v21 = v141;
          v19 = v138;
          v17 = *(_QWORD *)(v4 + 328);
          v18 = *(_QWORD *)(v4 + 336);
          v113 = v112;
          v114 = 4 * v112;
          goto LABEL_177;
        }
LABEL_163:
        v17 = *(_QWORD *)(v99 + 328);
        v18 = *(_QWORD *)(v99 + 336);
        v98 = 2 * v108;
        *(_DWORD *)(v17 + 4LL * v100) = v101;
        *(_DWORD *)(v18 + 4 * v104) = v100;
        if ( v124 <= (int)(2 * v108) )
        {
          v4 = v99;
          v114 = 4LL * v108;
          v19 = v138;
          v113 = v108;
          v21 = v141;
          goto LABEL_177;
        }
        v100 = v108;
      }
    }
    v114 = 4;
    v113 = 1;
LABEL_177:
    *(_DWORD *)(v17 + v114) = v147;
    *(_DWORD *)(v18 + 4 * v149) = v113;
LABEL_6:
    *(_BYTE *)(*(_QWORD *)(v4 + 296) + v19) = 2;
    v23 = *(unsigned int **)(*(_QWORD *)(v4 + 264) + 8 * v19);
    if ( !v23 )
      continue;
    v142 = &v23[*(v23 - 1)];
    if ( v23 == v142 )
      continue;
    v123 = *(unsigned int **)(*(_QWORD *)(v4 + 264) + 8 * v19);
    v140 = 8 * (v21 + v19);
LABEL_19:
    v125 = *v123;
    v32 = *(_QWORD *)(v4 + 256) + ((unsigned __int64)*v123 << 6);
    if ( !*(_BYTE *)(v32 + 56) || v150 < *(_DWORD *)(v32 + 48) )
      goto LABEL_18;
    v33 = *(_QWORD *)(v4 + 288) + v140;
    v34 = *(_DWORD *)(v32 + 4);
    v35 = qword_1C7F2C0;
    v163[0] = 0;
    v163[1] = 0;
    v164[0] = 1;
    v164[1] = 0;
    if ( (*(_BYTE *)(v33 + 4) & 1) != 0 )
    {
      sub_182C690(qword_1C7F2C0, v163, v33);
      if ( (*(_BYTE *)(v33 + 20) & 1) == 0 )
      {
LABEL_23:
        v36 = *(_DWORD *)(v33 + 16);
        BYTE4(v164[0]) &= ~1u;
        LODWORD(v164[0]) = v36;
        goto LABEL_24;
      }
    }
    else
    {
      LODWORD(v163[0]) = *(_DWORD *)v33;
      if ( (*(_BYTE *)(v33 + 20) & 1) == 0 )
        goto LABEL_23;
    }
    sub_182C690(v35, v164, v33 + 16);
LABEL_24:
    v37 = *(_DWORD *)(v33 + 32);
    v38 = qword_1C7F2C0;
    v165 = v37;
    v39 = *(_DWORD *)(v32 + 8);
    if ( v39 )
    {
      v40 = v32 + 8;
      if ( LODWORD(v163[0]) )
      {
        if ( (v164[0] & 0x100000000LL) != 0
          || LODWORD(v164[0]) != 1
          || (*(_BYTE *)(v32 + 28) & 1) != 0
          || *(_DWORD *)(v32 + 24) != 1 )
        {
          sub_1851D20(qword_1C7F2C0, v163, v40, v163);
        }
        else
        {
          sub_1831A80(qword_1C7F2C0, v163, v40, v163);
          sub_182CBA0(v38, v164);
          BYTE4(v164[0]) &= ~1u;
          LODWORD(v164[0]) = 1;
        }
      }
      else
      {
        if ( (*(_BYTE *)(v32 + 12) & 1) != 0 )
        {
          sub_182C690(qword_1C7F2C0, v163, v40);
        }
        else
        {
          BYTE4(v163[0]) &= ~1u;
          LODWORD(v163[0]) = v39;
        }
        if ( (*(_BYTE *)(v32 + 28) & 1) != 0 )
        {
          sub_182C690(v38, v164, v32 + 24);
        }
        else
        {
          v77 = *(_DWORD *)(v32 + 24);
          BYTE4(v164[0]) &= ~1u;
          LODWORD(v164[0]) = v77;
        }
      }
    }
    else
    {
      if ( (v163[0] & 0x100000000LL) != 0 )
        sub_182C690(qword_1C7F2C0, v163, v163);
      else
        BYTE4(v163[0]) &= ~1u;
      if ( (v164[0] & 0x100000000LL) != 0 )
        sub_182C690(v38, v164, v164);
      else
        BYTE4(v164[0]) &= ~1u;
    }
    v41 = *(_DWORD *)(v32 + 40);
    v42 = qword_1C7F2C0;
    v156 = 0;
    v165 += v41;
    v157 &= 0xFCu;
    v160 &= 0xFCu;
    v158 = 0;
    v159 = 1;
    v161 = 0;
    if ( (v163[0] & 0x100000000LL) != 0 )
      sub_182C690(qword_1C7F2C0, &v156, v163);
    else
      v156 = v163[0];
    if ( (v164[0] & 0x100000000LL) != 0 )
    {
      sub_182C690(v42, &v159, v164);
    }
    else
    {
      v160 &= ~1u;
      v159 = v164[0];
    }
    v43 = qword_1C7F2C0;
    v162 = v165;
    sub_182CBA0(qword_1C7F2C0, v163);
    v44 = v43;
    v45 = v34;
    sub_182CBA0(v44, v164);
    v132 = v34;
    v46 = 40LL * v34;
    if ( !*(_BYTE *)(*(_QWORD *)(v4 + 296) + v34) )
      goto LABEL_9;
    v47 = qword_1C7F2C0;
    v27 = v46 + *(_QWORD *)(v4 + 288);
    if ( (v160 & 1) != 0 || v159 != 1 || (*(_BYTE *)(v27 + 20) & 1) != 0 || *(_DWORD *)(v27 + 16) != 1 )
    {
      v48 = sub_1848D40(qword_1C7F2C0, &v156, v46 + *(_QWORD *)(v4 + 288));
      v46 = 40LL * v34;
      if ( v48 )
        goto LABEL_9;
LABEL_37:
      v47 = qword_1C7F2C0;
      if ( (v157 & 1) != 0 )
        goto LABEL_136;
      v49 = *(_BYTE *)(v27 + 4);
      goto LABEL_39;
    }
    v25 = qword_1C7F2C0;
    if ( (v157 & 1) != 0 || (v49 = *(_BYTE *)(v27 + 4), (v49 & 1) != 0) )
    {
      v93 = sub_182C7B0(qword_1C7F2C0, &v156, v46 + *(_QWORD *)(v4 + 288));
      v46 = 40LL * v34;
      if ( v93 < 0 )
        goto LABEL_9;
      goto LABEL_37;
    }
    v26 = v156;
    if ( v156 < *(_DWORD *)v27 )
    {
LABEL_10:
      *(_BYTE *)(v27 + 4) &= ~1u;
      *(_DWORD *)v27 = v26;
      if ( (v160 & 1) != 0 )
        goto LABEL_83;
      goto LABEL_11;
    }
LABEL_39:
    if ( (v49 & 1) != 0 )
    {
LABEL_136:
      v137 = v46;
      v92 = sub_182C7B0(v47, &v156, v27);
      v46 = v137;
      if ( v92 )
        goto LABEL_41;
      goto LABEL_137;
    }
    if ( v156 != *(_DWORD *)v27 )
      goto LABEL_41;
LABEL_137:
    if ( (v160 & 1) != 0 || (*(_BYTE *)(v27 + 20) & 1) != 0 )
    {
      v139 = v46;
      v119 = sub_182C7B0(v47, &v159, v27 + 16);
      v46 = v139;
      if ( v119 )
      {
LABEL_41:
        v50 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v156);
        sub_182CBA0(v50, &v159);
        goto LABEL_18;
      }
    }
    else if ( v159 != *(_DWORD *)(v27 + 16) )
    {
      goto LABEL_41;
    }
    if ( v162 >= *(_DWORD *)(v27 + 32) )
      goto LABEL_41;
LABEL_9:
    v24 = *(_QWORD *)(v4 + 288) + v46;
    v25 = qword_1C7F2C0;
    v26 = v156;
    v27 = v24;
    if ( (v157 & 1) == 0 )
      goto LABEL_10;
    v135 = qword_1C7F2C0;
    sub_182C690(qword_1C7F2C0, v24, &v156);
    v25 = v135;
    if ( (v160 & 1) != 0 )
    {
LABEL_83:
      sub_182C690(v25, v27 + 16, &v159);
      goto LABEL_12;
    }
LABEL_11:
    v28 = v159;
    *(_BYTE *)(v27 + 20) &= ~1u;
    *(_DWORD *)(v27 + 16) = v28;
LABEL_12:
    *(_DWORD *)(v27 + 32) = v162;
    *(_DWORD *)(*(_QWORD *)(v4 + 304) + 4LL * v34) = v125;
    if ( v144 == v34 && !(unsigned __int8)sub_89B840(v148, (__int64)&v156) )
      break;
    v29 = (char *)(v34 + *(_QWORD *)(v4 + 296));
    v30 = *v29;
    if ( *v29 == 1 )
    {
      v66 = *(_QWORD *)(v4 + 336);
      v67 = *(_QWORD *)(v4 + 328);
      v31 = qword_1C7F2C0;
      v68 = *(unsigned int *)(v66 + 4LL * v34);
      v69 = (unsigned int *)(v67 + 4 * v68);
      v70 = (int)v68 >> 1;
      v136 = *v69;
      v146 = *v69;
      if ( (int)v68 >> 1 )
      {
        v133 = 40LL * v136;
        do
        {
          v71 = **(_QWORD **)(v4 + 320);
          v72 = v71 + 40LL * *(unsigned int *)(v67 + 4LL * (unsigned int)v70);
          v73 = v71 + v133;
          if ( (*(_BYTE *)(v71 + v133 + 20) & 1) != 0
            || *(_DWORD *)(v73 + 16) != 1
            || (*(_BYTE *)(v72 + 20) & 1) != 0
            || *(_DWORD *)(v72 + 16) != 1 )
          {
            LOBYTE(v74) = sub_1848D40(v31, v73, v72);
            v31 = qword_1C7F2C0;
          }
          else if ( (*(_BYTE *)(v73 + 4) & 1) != 0 || (*(_BYTE *)(v72 + 4) & 1) != 0 )
          {
            v118 = sub_182C7B0(v31, v73, v72);
            v31 = qword_1C7F2C0;
            v74 = v118 >> 31;
          }
          else
          {
            LOBYTE(v74) = *(_DWORD *)v73 < *(_DWORD *)v72;
          }
          if ( !(_BYTE)v74 )
          {
            if ( (*(_BYTE *)(v73 + 4) & 1) != 0 || (*(_BYTE *)(v72 + 4) & 1) != 0 )
            {
              if ( (unsigned int)sub_182C7B0(v31, v73, v72) )
              {
LABEL_96:
                v31 = qword_1C7F2C0;
                v69 = (unsigned int *)(*(_QWORD *)(v4 + 328) + 4LL * (unsigned int)v68);
                v66 = *(_QWORD *)(v4 + 336);
                goto LABEL_97;
              }
            }
            else if ( *(_DWORD *)v73 != *(_DWORD *)v72 )
            {
              goto LABEL_96;
            }
            if ( (*(_BYTE *)(v73 + 20) & 1) != 0 || (*(_BYTE *)(v72 + 20) & 1) != 0 )
              v76 = (unsigned int)sub_182C7B0(v31, v73 + 16, v72 + 16) == 0;
            else
              v76 = *(_DWORD *)(v73 + 16) == *(_DWORD *)(v72 + 16);
            v31 = qword_1C7F2C0;
            if ( !v76 || *(_DWORD *)(v73 + 32) >= *(_DWORD *)(v72 + 32) )
            {
              v69 = (unsigned int *)(*(_QWORD *)(v4 + 328) + 4LL * (unsigned int)v68);
              v66 = *(_QWORD *)(v4 + 336);
              goto LABEL_97;
            }
          }
          v67 = *(_QWORD *)(v4 + 328);
          v69 = (unsigned int *)(v67 + 4LL * (unsigned int)v70);
          v75 = *v69;
          *(_DWORD *)(v67 + 4LL * (unsigned int)v68) = v75;
          v66 = *(_QWORD *)(v4 + 336);
          *(_DWORD *)(v66 + 4 * v75) = v68;
          LODWORD(v68) = v70;
          v70 >>= 1;
        }
        while ( v70 );
        LODWORD(v68) = 1;
      }
LABEL_97:
      *v69 = v136;
      *(_DWORD *)(v66 + 4 * v146) = v68;
      goto LABEL_17;
    }
    if ( v30 != 2 )
    {
      if ( v30 )
      {
        v31 = qword_1C7F2C0;
        goto LABEL_17;
      }
      v51 = *(_QWORD *)(v4 + 312);
      if ( !v51 || (v52 = *(unsigned int *)(v51 - 4), (_DWORD)v52 == *(_DWORD *)(v51 - 8)) )
      {
        sub_313C10(v152);
        v51 = *(_QWORD *)(v4 + 312);
        v52 = *(unsigned int *)(v51 - 4);
        v29 = (char *)(v34 + *(_QWORD *)(v4 + 296));
      }
      *(_DWORD *)(v51 + 4 * v52) = v34;
      ++*(_DWORD *)(v51 - 4);
    }
    *v29 = 1;
    v53 = *(_DWORD **)(v4 + 328);
    v54 = (int *)(4LL * v34 + *(_QWORD *)(v4 + 336));
    if ( !v53 )
    {
      *v54 = 0;
      v94 = sub_186B270(0x10u);
      v57 = (unsigned int *)(v94 + 8);
      *(_DWORD *)(v94 + 8) = v34;
      v31 = qword_1C7F2C0;
      v55 = 0;
      *(_QWORD *)(v4 + 328) = v94 + 8;
      *(_QWORD *)v94 = 2;
      ++*(_DWORD *)(v94 + 4);
LABEL_64:
      v63 = *(_QWORD *)(v4 + 336);
      goto LABEL_65;
    }
    v55 = *(v53 - 1);
    *v54 = v55;
    v56 = (unsigned int)*(v53 - 1);
    if ( (_DWORD)v56 == *(v53 - 2) )
    {
      v89 = (unsigned int)(3 * v56 + 1) >> 1;
      v90 = 4 * v89 + 8;
      if ( 4 * (int)v56 + 8 >= (unsigned int)v90 || (unsigned int)v56 >= v89 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_12D192(v163, "Overflow encountered when expanding vector", v122);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v163);
        sub_233E40((__int64)v163);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v91 = (unsigned int *)sub_186B300(v53 - 2, v90);
      v53 = v91 + 2;
      *v91 = v89;
      v56 = v91[1];
      *(_QWORD *)(v4 + 328) = v53;
    }
    v31 = qword_1C7F2C0;
    v57 = &v53[v55];
    v53[v56] = v34;
    v58 = v55 >> 1;
    ++*(v53 - 1);
    v132 = *v57;
    v34 = *v57;
    if ( !(v55 >> 1) )
      goto LABEL_64;
    v145 = 40LL * *v57;
    while ( 1 )
    {
      v59 = **(_QWORD **)(v4 + 320);
      v60 = v59 + 40LL * (unsigned int)v53[v58];
      v61 = v59 + v145;
      v126 = v59 + v145;
      if ( (*(_BYTE *)(v59 + v145 + 20) & 1) != 0
        || *(_DWORD *)(v61 + 16) != 1
        || (*(_BYTE *)(v60 + 20) & 1) != 0
        || *(_DWORD *)(v60 + 16) != 1 )
      {
        LOBYTE(v61) = sub_1848D40(v31, v126, v60);
        v31 = qword_1C7F2C0;
      }
      else if ( (*(_BYTE *)(v61 + 4) & 1) != 0 || (*(_BYTE *)(v60 + 4) & 1) != 0 )
      {
        LODWORD(v61) = sub_182C7B0(v31, v126, v60);
        v31 = qword_1C7F2C0;
        LODWORD(v61) = (unsigned int)v61 >> 31;
      }
      else
      {
        LOBYTE(v61) = *(_DWORD *)v61 < *(_DWORD *)v60;
      }
      if ( (_BYTE)v61 )
        goto LABEL_53;
      if ( !((*(_BYTE *)(v126 + 4) & 1) != 0 || (*(_BYTE *)(v60 + 4) & 1) != 0
           ? (unsigned int)sub_182C7B0(v31, v126, v60) == 0
           : *(_DWORD *)v126 == *(_DWORD *)v60) )
        break;
      if ( (*(_BYTE *)(v126 + 20) & 1) != 0 || (*(_BYTE *)(v60 + 20) & 1) != 0 )
        v65 = (unsigned int)sub_182C7B0(v31, v126 + 16, v60 + 16) == 0;
      else
        v65 = *(_DWORD *)(v126 + 16) == *(_DWORD *)(v60 + 16);
      v31 = qword_1C7F2C0;
      if ( !v65 || *(_DWORD *)(v126 + 32) >= *(_DWORD *)(v60 + 32) )
      {
        v57 = (unsigned int *)(*(_QWORD *)(v4 + 328) + 4LL * (unsigned int)v55);
        goto LABEL_64;
      }
LABEL_53:
      v53 = *(_DWORD **)(v4 + 328);
      v57 = &v53[v58];
      v62 = *v57;
      v53[v55] = v62;
      v63 = *(_QWORD *)(v4 + 336);
      *(_DWORD *)(v63 + 4 * v62) = v55;
      v55 = v58;
      v58 >>= 1;
      if ( !v58 )
      {
        v55 = 1;
        goto LABEL_65;
      }
    }
    v63 = *(_QWORD *)(v4 + 336);
    v31 = qword_1C7F2C0;
    v57 = (unsigned int *)(*(_QWORD *)(v4 + 328) + 4LL * (unsigned int)v55);
LABEL_65:
    *v57 = v34;
    *(_DWORD *)(v63 + 4 * v132) = v55;
LABEL_17:
    sub_182CBA0(v31, &v156);
    sub_182CBA0(v31, &v159);
LABEL_18:
    if ( v142 != ++v123 )
      goto LABEL_19;
  }
  v78 = *(unsigned int **)(v4 + 312);
  if ( v78 )
  {
    v79 = &v78[*(v78 - 1)];
    if ( v78 == v79 )
      goto LABEL_120;
    do
    {
      v80 = *v78++;
      *(_BYTE *)(*(_QWORD *)(v4 + 296) + v80) = 0;
    }
    while ( v78 != v79 );
    v79 = *(unsigned int **)(v4 + 312);
    if ( v79 )
LABEL_120:
      *(v79 - 1) = 0;
  }
  v81 = *(_QWORD *)(v4 + 328);
  if ( !v81 || *(_DWORD *)(v81 - 4) != 1 )
  {
    v82 = *(unsigned int **)(v4 + 336);
    if ( v82 )
      v83 = 4LL * *(v82 - 1);
    else
      v83 = 0;
    memset(v82, 0, v83);
    v84 = *(_DWORD **)(v4 + 328);
    if ( v84 && (v85 = *(v84 - 2), *(v84 - 1) = 0, v85) )
    {
      v86 = v84;
    }
    else
    {
      sub_313C10(v154);
      v84 = *(_DWORD **)(v4 + 328);
      v86 = &v84[*(v84 - 1)];
    }
    *v86 = -1;
    ++*(v84 - 1);
  }
  while ( 1 )
  {
    v87 = (unsigned int *)(*(_QWORD *)(v4 + 304) + 4 * v45);
    ++*(_DWORD *)(*(_QWORD *)(v4 + 400) + 4LL * *v87);
    v88 = (unsigned int *)(*(_QWORD *)(v4 + 256) + ((unsigned __int64)*v87 << 6));
    LODWORD(v163[0]) = v88[13];
    sub_893780(*(_QWORD **)(a4 + 176), (unsigned int *)v163);
    if ( v151 == *v88 )
      break;
    v45 = *v88;
  }
  sub_25A130((char *)&v156);
}

