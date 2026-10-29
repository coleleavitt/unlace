__int64 __fastcall sub_800520(__int64 a1)
{
  char **v1; // r13
  __int64 v2; // rax
  void *v3; // rbx
  char *v4; // r12
  __int64 v5; // rax
  char *v6; // rbx
  char *v7; // rbp
  void *v8; // r14
  char *v9; // rsi
  _OWORD *v10; // rdx
  char **v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rsi
  int v14; // eax
  __int64 v15; // rdx
  unsigned int v16; // r13d
  __int64 v17; // rdx
  unsigned int v18; // ebx
  int v19; // ebp
  __int64 v20; // r14
  __int64 v21; // rax
  int *v22; // r14
  int v23; // eax
  __int64 v24; // r12
  __int64 v25; // rax
  __int64 v26; // rdx
  unsigned int v27; // edi
  __int64 v28; // rbx
  __int64 v29; // rax
  int *v30; // rcx
  unsigned __int64 *v31; // rbp
  __int64 v32; // rax
  unsigned __int64 *v33; // r14
  int *i; // r13
  int *v35; // rax
  unsigned __int64 v36; // rdx
  __int64 v37; // rax
  unsigned __int64 *v38; // rsi
  unsigned __int64 *v39; // rax
  int v40; // eax
  void *v41; // rdi
  char **v42; // r13
  __int64 v43; // rax
  void *v44; // rbx
  char *v45; // r12
  __int64 v46; // rax
  char *v47; // rbx
  char *v48; // rbp
  void *v49; // r14
  char *v50; // rsi
  __int64 result; // rax
  unsigned int v52; // ebx
  _OWORD *v53; // rax
  unsigned __int64 v54; // rsi
  _OWORD *v55; // rdi
  char **v56; // rbx
  char *v57; // rcx
  __int64 v58; // rdx
  char **v59; // rax
  _DWORD *v60; // r8
  char *v61; // rdx
  __int64 v62; // rax
  int v63; // esi
  unsigned int v64; // ecx
  __int64 v65; // r9
  char *v66; // rcx
  __int64 v67; // r9
  char *v68; // rdi
  char *v69; // rbx
  _DWORD *v70; // rax
  void *v71; // rbx
  void *v72; // rbx
  unsigned int v73; // ebx
  __int64 v74; // r12
  unsigned int **v75; // r15
  __int64 v76; // rax
  _DWORD *v77; // rax
  void *v78; // rbp
  void *v79; // rbp
  int v80; // eax
  int v81; // eax
  void *v82; // r12
  char v83; // al
  bool v84; // r13
  void *v85; // r12
  char v86; // al
  bool v87; // r13
  void *v88; // r12
  char v89; // al
  bool v90; // r13
  void *v91; // r12
  char v92; // al
  bool v93; // r13
  char *v94; // rax
  __int64 v95; // rax
  __int64 v96; // rdx
  void *v97; // r12
  __int64 v98; // rcx
  void *v99; // rdx
  __int64 v100; // rsi
  void *v101; // rdi
  __int64 v102; // rdx
  __int64 v103; // rdx
  void *v104; // r14
  char *v105; // r13
  char *v106; // r12
  void *v107; // rbx
  char *v108; // rsi
  __int64 v109; // r14
  __int64 v110; // r13
  _QWORD *v111; // r14
  _QWORD *v112; // r13
  void *v113; // r12
  int v114; // eax
  void *v115; // rdi
  _QWORD *v116; // rax
  void *v117; // rdi
  __int64 v118; // rsi
  void *v119; // r12
  __int64 v120; // rax
  __int64 v121; // rdx
  unsigned int *v122; // rdx
  void *v123; // rbx
  __int64 v124; // rax
  __int64 v125; // rdx
  int v126; // eax
  int v127; // eax
  int v128; // eax
  int v129; // eax
  char **v130; // [rsp+0h] [rbp-138h]
  int *v131; // [rsp+0h] [rbp-138h]
  char **v132; // [rsp+0h] [rbp-138h]
  void *v133; // [rsp+8h] [rbp-130h]
  void *v134; // [rsp+8h] [rbp-130h]
  void *v135; // [rsp+8h] [rbp-130h]
  unsigned int v136; // [rsp+10h] [rbp-128h]
  __int64 v137; // [rsp+10h] [rbp-128h]
  __int64 v139; // [rsp+20h] [rbp-118h]
  unsigned int v140; // [rsp+20h] [rbp-118h]
  char *v141; // [rsp+28h] [rbp-110h]
  __int64 v142; // [rsp+30h] [rbp-108h]
  __int64 v143; // [rsp+38h] [rbp-100h]
  __int64 v144; // [rsp+40h] [rbp-F8h]
  unsigned int v145; // [rsp+60h] [rbp-D8h]
  unsigned int v146; // [rsp+64h] [rbp-D4h]
  __int64 *v147; // [rsp+70h] [rbp-C8h]
  unsigned int v148; // [rsp+78h] [rbp-C0h]
  unsigned int v149; // [rsp+7Ch] [rbp-BCh]
  _QWORD v150[2]; // [rsp+80h] [rbp-B8h] BYREF
  _QWORD v151[2]; // [rsp+90h] [rbp-A8h] BYREF
  int v152; // [rsp+A0h] [rbp-98h] BYREF
  char v153; // [rsp+A4h] [rbp-94h]
  __int64 v154; // [rsp+A8h] [rbp-90h]
  int v155; // [rsp+B0h] [rbp-88h] BYREF
  char v156; // [rsp+B4h] [rbp-84h]
  __int64 v157; // [rsp+B8h] [rbp-80h]
  void *ptr; // [rsp+C0h] [rbp-78h] BYREF
  __int64 v159; // [rsp+C8h] [rbp-70h] BYREF
  __int64 v160; // [rsp+D0h] [rbp-68h] BYREF
  __int128 v161; // [rsp+D8h] [rbp-60h] BYREF
  __int128 v162; // [rsp+E8h] [rbp-50h] BYREF

  if ( !(unsigned __int8)sub_7FF320(a1) || !*(_DWORD *)(a1 + 116) && (unsigned __int8)sub_753DF0(a1 + 128, 0) )
    return 1;
  v1 = *(char ***)(a1 + 160);
  if ( v1 )
  {
    v2 = *((unsigned int *)v1 - 1);
    if ( (_DWORD)v2 )
    {
      v130 = &v1[7 * v2];
      do
      {
        v3 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v1 + 3);
        sub_182CBA0(v3, v1 + 5);
        v4 = *v1;
        if ( *v1 )
        {
          v5 = *((unsigned int *)v1 + 2);
          if ( (_DWORD)v5 )
          {
            v6 = *v1;
            v7 = &v4[40 * v5];
            do
            {
              v8 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v6 + 8);
              v9 = v6 + 24;
              v6 += 40;
              sub_182CBA0(v8, v9);
            }
            while ( v6 != v7 );
          }
          sub_186B220(v4);
        }
        v1 += 7;
      }
      while ( v1 != v130 );
      v1 = *(char ***)(a1 + 160);
    }
    *((_DWORD *)v1 - 1) = 0;
  }
  v10 = *(_OWORD **)(a1 + 208);
  v11 = *(char ***)(a1 + 168);
  if ( v10 )
    *((_DWORD *)v10 - 1) = 0;
  if ( !v11 || (v149 = *((_DWORD *)v11 - 1)) == 0 )
  {
    v149 = 0;
    goto LABEL_19;
  }
  v52 = *((_DWORD *)v11 - 1);
  v147 = (__int64 *)(a1 + 208);
  while ( !v10 || *((_DWORD *)v10 - 2) < v52 )
  {
    sub_7FCEE0(v147);
    v10 = *(_OWORD **)(a1 + 208);
  }
  *((_DWORD *)v10 - 1) = v149;
  if ( v149 != 1 )
  {
    v53 = v10;
    v54 = (unsigned __int64)v149 >> 1;
    v55 = &v10[v54];
    if ( ((v54 * 16) & 0x10) == 0 || (v53 = v10 + 1, *v10 = 0, v55 != v10 + 1) )
    {
      do
      {
        *v53 = 0;
        v53 += 2;
        *(v53 - 1) = 0;
      }
      while ( v55 != v53 );
    }
    if ( (v149 & 1) == 0 )
      goto LABEL_70;
    v10 = (_OWORD *)((char *)v10 + 8 * (v149 & 0xFFFFFFFE));
  }
  *(_QWORD *)v10 = 0;
LABEL_70:
  v11 = *(char ***)(a1 + 168);
  if ( !v11 )
    goto LABEL_19;
  v148 = 1;
  do
  {
    while ( 1 )
    {
      v146 = v148 - 1;
      if ( v148 - 1 >= *((_DWORD *)v11 - 1) )
        goto LABEL_19;
      v56 = &v11[7 * v146];
      if ( *((_DWORD *)v56 + 3) )
      {
        v57 = *v56;
        v141 = *v56;
        v58 = (__int64)&(*v56)[40 * *((unsigned int *)v56 + 2)];
        if ( *v56 == (char *)v58 )
          goto LABEL_80;
        do
        {
LABEL_77:
          if ( *(_QWORD *)v57 > 1u )
            break;
          v57 += 40;
        }
        while ( v57 != (char *)v58 );
        v141 = v57;
        goto LABEL_79;
      }
      if ( (unsigned __int8)sub_753DF0((__int64)(v56 + 3), 0) )
      {
        v124 = *(_QWORD *)(a1 + 216);
        if ( !v124 || (v125 = *(unsigned int *)(v124 - 4), (_DWORD)v125 == *(_DWORD *)(v124 - 8)) )
        {
          sub_2FD3F0((unsigned int **)(a1 + 216));
          v124 = *(_QWORD *)(a1 + 216);
          v125 = *(unsigned int *)(v124 - 4);
        }
        *(_DWORD *)(v124 + 4 * v125) = v146;
        ++*(_DWORD *)(v124 - 4);
        v11 = *(char ***)(a1 + 168);
        goto LABEL_92;
      }
      v57 = *v56;
      v11 = *(char ***)(a1 + 168);
      v141 = *v56;
      v58 = (__int64)&(*v56)[40 * *((unsigned int *)v56 + 2)];
      if ( *v56 != (char *)v58 )
        goto LABEL_77;
LABEL_79:
      if ( !v11 )
        goto LABEL_19;
LABEL_80:
      v145 = *((_DWORD *)v11 - 1);
      if ( v148 < v145 )
        break;
      ++v148;
    }
    v140 = v148;
    v142 = 56LL * v148;
    do
    {
      v151[0] = 1;
      v150[0] = 0;
      v150[1] = 0;
      v59 = &v11[(unsigned __int64)v142 / 8];
      v151[1] = 0;
      v60 = *(_DWORD **)v141;
      v159 = 0;
      v161 = 1u;
      v61 = *v59;
      v62 = *((unsigned int *)v59 + 2);
      v63 = v60[3];
      ptr = v60;
      v160 = 0;
      v64 = v62 - 1;
      v62 *= 40;
      v65 = 5LL * (v63 & v64);
      v66 = &v61[v62];
      v67 = 8 * v65;
      v68 = &v61[v67];
      if ( v67 == v62 )
      {
LABEL_101:
        while ( v68 != v61 )
        {
          v77 = *(_DWORD **)v61;
          if ( *(_QWORD *)v61 > 1u )
          {
            if ( v77[3] == v63 && v60 == v77 )
            {
              v69 = v61;
              goto LABEL_110;
            }
          }
          else if ( !v77 )
          {
            break;
          }
          v61 += 40;
        }
LABEL_89:
        v71 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v159);
        sub_182CBA0(v71, &v161);
LABEL_90:
        v72 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v150);
        sub_182CBA0(v72, v151);
        goto LABEL_91;
      }
      v69 = &v61[v67];
      while ( 1 )
      {
        v70 = *(_DWORD **)v69;
        if ( *(_QWORD *)v69 > 1u )
          break;
        if ( !v70 )
          goto LABEL_89;
LABEL_86:
        v69 += 40;
        if ( v66 == v69 )
          goto LABEL_101;
      }
      if ( v70[3] != v63 || v60 != v70 )
        goto LABEL_86;
LABEL_110:
      v78 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v159);
      sub_182CBA0(v78, &v161);
      v79 = qword_1C7F2C0;
      if ( (v69[12] & 1) != 0 )
      {
        sub_182C690(qword_1C7F2C0, v150, v69 + 8);
        if ( (v69[28] & 1) != 0 )
          goto LABEL_176;
LABEL_112:
        v81 = *((_DWORD *)v69 + 6);
        BYTE4(v151[0]) &= ~1u;
        LODWORD(v151[0]) = v81;
      }
      else
      {
        v80 = *((_DWORD *)v69 + 2);
        BYTE4(v150[0]) &= ~1u;
        LODWORD(v150[0]) = v80;
        if ( (v69[28] & 1) == 0 )
          goto LABEL_112;
LABEL_176:
        sub_182C690(v79, v151, v69 + 24);
      }
      ptr = nullptr;
      v159 = 0;
      v160 = 1;
      v144 = (__int64)(v141 + 8);
      *(_QWORD *)&v161 = 0;
      sub_182CBA0(qword_1C7F2C0, &v160);
      BYTE4(v160) &= ~1u;
      v82 = qword_1C7F2C0;
      LODWORD(v160) = 1;
      if ( (v141[28] & 1) == 0 && *((_DWORD *)v141 + 6) == 1 )
      {
        if ( (BYTE4(ptr) & 1) != 0 || (v141[12] & 1) != 0 )
        {
          v126 = sub_182C7B0(qword_1C7F2C0, &ptr, v144);
          v82 = qword_1C7F2C0;
          v84 = v126 < 0;
        }
        else
        {
          v84 = (int)ptr < *((_DWORD *)v141 + 2);
        }
      }
      else
      {
        v83 = sub_1848D40(qword_1C7F2C0, &ptr, v144);
        v82 = qword_1C7F2C0;
        v84 = v83;
      }
      sub_182CBA0(v82, &ptr);
      sub_182CBA0(v82, &v160);
      if ( v84 )
      {
        ptr = nullptr;
        v159 = 0;
        v160 = 1;
        *(_QWORD *)&v161 = 0;
        sub_182CBA0(qword_1C7F2C0, &v160);
        BYTE4(v160) &= ~1u;
        v85 = qword_1C7F2C0;
        LODWORD(v160) = 1;
        if ( (v151[0] & 0x100000000LL) == 0 && LODWORD(v151[0]) == 1 )
        {
          if ( (BYTE4(ptr) & 1) != 0 || (v150[0] & 0x100000000LL) != 0 )
          {
            v127 = sub_182C7B0(qword_1C7F2C0, &ptr, v150);
            v85 = qword_1C7F2C0;
            v87 = v127 < 0;
          }
          else
          {
            v87 = (int)ptr < SLODWORD(v150[0]);
          }
        }
        else
        {
          v86 = sub_1848D40(qword_1C7F2C0, &ptr, v150);
          v85 = qword_1C7F2C0;
          v87 = v86;
        }
        sub_182CBA0(v85, &ptr);
        sub_182CBA0(v85, &v160);
        if ( v87 )
          goto LABEL_90;
      }
      ptr = nullptr;
      v159 = 0;
      v160 = 1;
      *(_QWORD *)&v161 = 0;
      sub_182CBA0(qword_1C7F2C0, &v160);
      v88 = qword_1C7F2C0;
      LODWORD(v160) = 1;
      BYTE4(v160) &= ~1u;
      if ( (v141[28] & 1) == 0 && *((_DWORD *)v141 + 6) == 1 )
      {
        if ( (v141[12] & 1) != 0 || (BYTE4(ptr) & 1) != 0 )
        {
          v128 = sub_182C7B0(qword_1C7F2C0, v144, &ptr);
          v88 = qword_1C7F2C0;
          v90 = v128 < 0;
        }
        else
        {
          v90 = *((_DWORD *)v141 + 2) < (int)ptr;
        }
      }
      else
      {
        v89 = sub_1848D40(qword_1C7F2C0, v144, &ptr);
        v88 = qword_1C7F2C0;
        v90 = v89;
      }
      sub_182CBA0(v88, &ptr);
      sub_182CBA0(v88, &v160);
      if ( v90 )
      {
        ptr = nullptr;
        v159 = 0;
        v160 = 1;
        *(_QWORD *)&v161 = 0;
        sub_182CBA0(qword_1C7F2C0, &v160);
        v91 = qword_1C7F2C0;
        LODWORD(v160) = 1;
        BYTE4(v160) &= ~1u;
        if ( (v151[0] & 0x100000000LL) == 0 && LODWORD(v151[0]) == 1 )
        {
          if ( (v150[0] & 0x100000000LL) != 0 || (BYTE4(ptr) & 1) != 0 )
          {
            v129 = sub_182C7B0(qword_1C7F2C0, v150, &ptr);
            v91 = qword_1C7F2C0;
            v93 = v129 < 0;
          }
          else
          {
            v93 = SLODWORD(v150[0]) < (int)ptr;
          }
        }
        else
        {
          v92 = sub_1848D40(qword_1C7F2C0, v150, &ptr);
          v91 = qword_1C7F2C0;
          v93 = v92;
        }
        sub_182CBA0(v91, &ptr);
        sub_182CBA0(v91, &v160);
        if ( v93 )
          goto LABEL_90;
      }
      v161 = 0;
      v162 = 0;
      v94 = (char *)sub_186B270(0x140u);
      *(_QWORD *)v94 = 0;
      *((_QWORD *)v94 + 28) = 1;
      *((_QWORD *)v94 + 1) = 0;
      *((_QWORD *)v94 + 2) = 0;
      *((_QWORD *)v94 + 3) = 1;
      *((_QWORD *)v94 + 4) = 0;
      *((_QWORD *)v94 + 5) = 0;
      *((_QWORD *)v94 + 6) = 0;
      *((_QWORD *)v94 + 7) = 0;
      *((_QWORD *)v94 + 8) = 1;
      *((_QWORD *)v94 + 9) = 0;
      *((_QWORD *)v94 + 10) = 0;
      *((_QWORD *)v94 + 11) = 0;
      *((_QWORD *)v94 + 12) = 0;
      *((_QWORD *)v94 + 13) = 1;
      *((_QWORD *)v94 + 14) = 0;
      *((_QWORD *)v94 + 15) = 0;
      *((_QWORD *)v94 + 16) = 0;
      *((_QWORD *)v94 + 17) = 0;
      *((_QWORD *)v94 + 18) = 1;
      *((_QWORD *)v94 + 19) = 0;
      *((_QWORD *)v94 + 20) = 0;
      *((_QWORD *)v94 + 21) = 0;
      *((_QWORD *)v94 + 22) = 0;
      *((_QWORD *)v94 + 23) = 1;
      *((_QWORD *)v94 + 24) = 0;
      *((_QWORD *)v94 + 25) = 0;
      *((_QWORD *)v94 + 26) = 0;
      *((_QWORD *)v94 + 27) = 0;
      v94[228] = 0;
      *((_QWORD *)v94 + 31) = 0;
      *(_OWORD *)(v94 + 232) = 0;
      *((_QWORD *)v94 + 32) = 0;
      *((_QWORD *)v94 + 33) = 1;
      *((_QWORD *)v94 + 34) = 0;
      *((_QWORD *)v94 + 35) = 0;
      *((_QWORD *)v94 + 36) = 0;
      *((_QWORD *)v94 + 37) = 0;
      *((_QWORD *)v94 + 38) = 1;
      *((_QWORD *)v94 + 39) = 0;
      ptr = v94;
      LODWORD(v160) = 0;
      v159 = 8;
      v161 = 0u;
      v95 = *(_QWORD *)(a1 + 168);
      v162 = 1u;
      if ( !v95 || (v96 = *(unsigned int *)(v95 - 4), (_DWORD)v96 == *(_DWORD *)(v95 - 8)) )
      {
        sub_7FE340((unsigned int **)(a1 + 168));
        v95 = *(_QWORD *)(a1 + 168);
        v96 = *(unsigned int *)(v95 - 4);
      }
      v97 = qword_1C7F2C0;
      v98 = 7 * v96;
      v99 = ptr;
      ptr = nullptr;
      v100 = v95 + 8 * v98;
      v101 = qword_1C7F2C0;
      *(_QWORD *)v100 = v99;
      *(_QWORD *)(v100 + 8) = v159;
      *(_DWORD *)(v100 + 16) = v160;
      *(_DWORD *)(v100 + 24) = v161;
      *(_BYTE *)(v100 + 28) = BYTE4(v161) & 3 | *(_BYTE *)(v100 + 28) & 0xFC;
      v102 = *((_QWORD *)&v161 + 1);
      *((_QWORD *)&v161 + 1) = 0;
      *(_QWORD *)(v100 + 32) = v102;
      *(_DWORD *)(v100 + 40) = v162;
      *(_BYTE *)(v100 + 44) = BYTE4(v162) & 3 | *(_BYTE *)(v100 + 44) & 0xFC;
      v103 = *((_QWORD *)&v162 + 1);
      *((_QWORD *)&v162 + 1) = 0;
      *(_QWORD *)(v100 + 48) = v103;
      ++*(_DWORD *)(v95 - 4);
      sub_182CBA0(v101, &v161);
      sub_182CBA0(v97, &v162);
      v104 = ptr;
      if ( ptr )
      {
        if ( (_DWORD)v159 )
        {
          v105 = (char *)ptr;
          v106 = (char *)ptr + 40 * (unsigned int)v159;
          do
          {
            v107 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v105 + 8);
            v108 = v105 + 24;
            v105 += 40;
            sub_182CBA0(v107, v108);
          }
          while ( v105 != v106 );
        }
        sub_186B220(v104);
      }
      v109 = 0x37FFFFFFC8LL;
      v110 = *(_QWORD *)(a1 + 168);
      if ( v110 )
        v109 = 56LL * (unsigned int)(*(_DWORD *)(v110 - 4) - 1);
      v137 = v110 + v109;
      v111 = *(_QWORD **)(v110 + v142);
      v143 = v110 + v142;
      v112 = &v111[5 * *(unsigned int *)(v110 + v142 + 8)];
      if ( v111 != v112 )
      {
        while ( *v111 <= 1u )
        {
          v111 += 5;
          if ( v112 == v111 )
            goto LABEL_157;
        }
        if ( v111 != v112 )
        {
          while ( 2 )
          {
            ptr = nullptr;
            v113 = qword_1C7F2C0;
            v159 = 0;
            v160 = 1;
            *(_QWORD *)&v161 = 0;
            if ( (*((_BYTE *)v111 + 12) & 1) != 0 )
            {
              sub_182C690(qword_1C7F2C0, &ptr, v111 + 1);
              if ( (*((_BYTE *)v111 + 28) & 1) != 0 )
                goto LABEL_166;
LABEL_145:
              v114 = *((_DWORD *)v111 + 6);
              BYTE4(v160) &= ~1u;
              LODWORD(v160) = v114;
            }
            else
            {
              LODWORD(ptr) = *((_DWORD *)v111 + 2);
              if ( (*((_BYTE *)v111 + 28) & 1) == 0 )
                goto LABEL_145;
LABEL_166:
              sub_182C690(v113, &v160, v111 + 3);
            }
            if ( (v160 & 0x100000000LL) != 0
              || (_DWORD)v160 != 1
              || (qword_1C7F290 & 0x100000000LL) != 0
              || (_DWORD)qword_1C7F290 != 1 )
            {
              sub_1848FF0(qword_1C7F2C0, &ptr, &qword_1C7F280);
            }
            else
            {
              v135 = qword_1C7F2C0;
              sub_1831650(qword_1C7F2C0, &ptr, &qword_1C7F280);
              sub_182CBA0(v135, &v160);
              BYTE4(v160) &= ~1u;
              LODWORD(v160) = 1;
            }
            v153 &= 0xFCu;
            v115 = qword_1C7F2C0;
            v156 &= 0xFCu;
            v152 = 0;
            v154 = 0;
            v155 = 1;
            v157 = 0;
            if ( (BYTE4(ptr) & 1) != 0 )
            {
              sub_182C690(qword_1C7F2C0, &v152, &ptr);
              if ( (v160 & 0x100000000LL) != 0 )
                goto LABEL_168;
LABEL_151:
              v156 &= ~1u;
              v155 = v160;
            }
            else
            {
              v152 = (int)ptr;
              if ( (v160 & 0x100000000LL) == 0 )
                goto LABEL_151;
LABEL_168:
              sub_182C690(v115, &v155, &v160);
            }
            v133 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, &ptr);
            sub_182CBA0(v133, &v160);
            sub_7F8E80((__int64 *)v137, *v111, &v152);
            v134 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, &v152);
            sub_182CBA0(v134, &v155);
            v116 = v111 + 5;
            if ( v112 == v111 + 5 )
              break;
            while ( 1 )
            {
              v111 = v116;
              if ( *v116 > 1u )
                break;
              v116 += 5;
              if ( v112 == v116 )
                goto LABEL_157;
            }
            if ( v116 == v112 )
              break;
            continue;
          }
        }
      }
LABEL_157:
      sub_3EBE30((__int64)&ptr, (__int64)&qword_1C7F280, v143 + 24);
      v117 = qword_1C7F2C0;
      v118 = v137 + 24;
      if ( (_DWORD)ptr )
      {
        if ( *(_DWORD *)(v137 + 24) )
        {
          if ( (*(_BYTE *)(v137 + 44) & 1) != 0
            || *(_DWORD *)(v137 + 40) != 1
            || (v160 & 0x100000000LL) != 0
            || (_DWORD)v160 != 1 )
          {
            sub_1851D20(qword_1C7F2C0, v118, &ptr, v137 + 24);
          }
          else
          {
            sub_1831A80(qword_1C7F2C0, v118, &ptr, v137 + 24);
            sub_182CBA0(v117, v137 + 40);
            *(_BYTE *)(v137 + 44) &= ~1u;
            *(_DWORD *)(v137 + 40) = 1;
          }
        }
        else
        {
          sub_27B950((__int64)qword_1C7F2C0, v118, (int *)&ptr);
        }
      }
      else
      {
        sub_27B950((__int64)qword_1C7F2C0, v118, (int *)(v137 + 24));
      }
      v119 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &ptr);
      sub_182CBA0(v119, &v160);
      sub_7F9B10(*(_QWORD *)v141, v137, v144, *(_QWORD *)(a1 + 168) + 56LL * v146);
      v120 = *(_QWORD *)(a1 + 208);
      if ( !v120 || (v121 = *(unsigned int *)(v120 - 4), (_DWORD)v121 == *(_DWORD *)(v120 - 8)) )
      {
        sub_7FCEE0(v147);
        v120 = *(_QWORD *)(a1 + 208);
        v121 = *(unsigned int *)(v120 - 4);
      }
      v122 = (unsigned int *)(v120 + 8 * v121);
      v123 = qword_1C7F2C0;
      *v122 = v146;
      v122[1] = v140;
      ++*(_DWORD *)(v120 - 4);
      sub_182CBA0(v123, v150);
      sub_182CBA0(v123, v151);
LABEL_91:
      ++v140;
      v142 += 56;
      v11 = *(char ***)(a1 + 168);
    }
    while ( v140 < v145 );
LABEL_92:
    ++v148;
  }
  while ( v11 );
LABEL_19:
  v12 = *(_QWORD *)(a1 + 224);
  if ( v12 )
    *(_DWORD *)(v12 - 4) = 0;
  v13 = *(_QWORD *)(a1 + 216);
  if ( v13 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v14 = *(_DWORD *)(v13 - 4);
        if ( !v14 )
        {
LABEL_41:
          v11 = *(char ***)(a1 + 168);
          goto LABEL_42;
        }
        v15 = (unsigned int)(v14 - 1);
        v16 = *(_DWORD *)(v13 + 4 * v15);
        *(_DWORD *)(v13 - 4) = v15;
        v17 = *(_QWORD *)(a1 + 224);
        v18 = v16 >> 5;
        v19 = 1 << v16;
        v20 = 4LL * (v16 >> 5);
        if ( v17 )
          break;
        v75 = (unsigned int **)(a1 + 224);
        v73 = v18 + 1;
        v74 = 0;
LABEL_96:
        while ( !v17 || *(_DWORD *)(v17 - 8) < v73 )
        {
          sub_2FD3F0(v75);
          v17 = *(_QWORD *)(a1 + 224);
        }
        *(_DWORD *)(v17 - 4) = v73;
        v22 = (int *)(v17 + v20);
        v76 = 4LL * v73;
        if ( v76 != v74 )
          memset((void *)(v17 + v74), 0, v76 - v74);
        v23 = *v22;
LABEL_26:
        *v22 = v19 | v23;
        if ( v16 < v149 )
        {
          v24 = *(_QWORD *)(a1 + 168) + 56LL * v16;
          v25 = *(_QWORD *)(a1 + 160);
          if ( !v25 || (v26 = *(unsigned int *)(v25 - 4), (_DWORD)v26 == *(_DWORD *)(v25 - 8)) )
          {
            sub_7FE340((unsigned int **)(a1 + 160));
            v25 = *(_QWORD *)(a1 + 160);
            v26 = *(unsigned int *)(v25 - 4);
          }
          v27 = *(_DWORD *)(v24 + 8);
          v28 = v25 + 56 * v26;
          *(_DWORD *)(v28 + 8) = v27;
          v29 = sub_7FF080(v27);
          v30 = *(int **)v24;
          v31 = (unsigned __int64 *)v29;
          *(_QWORD *)v28 = v29;
          v32 = *(unsigned int *)(v28 + 8);
          v136 = v32 - 1;
          v139 = 40 * v32;
          v33 = &v31[5 * v32];
          v131 = &v30[10 * v32];
          if ( v30 != v131 )
          {
            for ( i = v30 + 2; ; i = v35 )
            {
              v36 = *((_QWORD *)i - 1);
              if ( v36 <= 1 )
              {
                v35 = i + 10;
                if ( v131 == i + 8 )
                  break;
              }
              else
              {
                v37 = 40LL * (*(_DWORD *)(v36 + 12) & v136);
                v38 = &v31[(unsigned __int64)v37 / 8];
                if ( v139 == v37 )
                {
LABEL_202:
                  if ( v31 == v38 )
                  {
LABEL_211:
                    sub_1872CE0("");
                    sub_1873130(114, 181);
                  }
                  v39 = v31;
                  while ( *v39 )
                  {
                    v39 += 5;
                    if ( v38 == v39 )
                      goto LABEL_211;
                  }
                }
                else
                {
                  v39 = &v31[(unsigned __int64)v37 / 8];
                  while ( *v39 )
                  {
                    v39 += 5;
                    if ( v33 == v39 )
                      goto LABEL_202;
                  }
                }
                *v39 = v36;
                sub_27B950((__int64)qword_1C7F2C0, (__int64)(v39 + 1), i);
                v35 = i + 10;
                if ( v131 == i + 8 )
                  break;
              }
            }
          }
          v40 = *(_DWORD *)(v24 + 12);
          *(_DWORD *)(v28 + 16) = 0;
          *(_QWORD *)(v28 + 24) = 0;
          v41 = qword_1C7F2C0;
          *(_DWORD *)(v28 + 12) = v40;
          *(_QWORD *)(v28 + 32) = 0;
          *(_QWORD *)(v28 + 40) = 1;
          *(_QWORD *)(v28 + 48) = 0;
          sub_27B950((__int64)v41, v28 + 24, (int *)(v24 + 24));
          v13 = *(_QWORD *)(a1 + 216);
          ++*(_DWORD *)(*(_QWORD *)(a1 + 160) - 4LL);
          goto LABEL_40;
        }
        ptr = *(void **)(*(_QWORD *)(a1 + 208) + 8LL * v16);
        sub_7FCDD0((_QWORD *)(a1 + 216), (unsigned int *)&ptr);
        sub_7FCDD0((_QWORD *)(a1 + 216), (unsigned int *)&ptr + 1);
        v13 = *(_QWORD *)(a1 + 216);
        if ( !v13 )
          goto LABEL_41;
      }
      v21 = *(unsigned int *)(v17 - 4);
      if ( v18 >= (unsigned int)v21 )
      {
        v73 = v18 + 1;
        v74 = 4 * v21;
        v75 = (unsigned int **)(a1 + 224);
        goto LABEL_96;
      }
      v22 = (int *)(v17 + v20);
      v23 = *v22;
      if ( (v19 & *v22) == 0 )
        goto LABEL_26;
LABEL_40:
      if ( !v13 )
        goto LABEL_41;
    }
  }
LABEL_42:
  v42 = v11;
  if ( v11 )
  {
    v43 = *((unsigned int *)v11 - 1);
    if ( (_DWORD)v43 )
    {
      v132 = &v42[7 * v43];
      do
      {
        v44 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v42 + 3);
        sub_182CBA0(v44, v42 + 5);
        v45 = *v42;
        if ( *v42 )
        {
          v46 = *((unsigned int *)v42 + 2);
          if ( (_DWORD)v46 )
          {
            v47 = *v42;
            v48 = &v45[40 * v46];
            do
            {
              v49 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v47 + 8);
              v50 = v47 + 24;
              v47 += 40;
              sub_182CBA0(v49, v50);
            }
            while ( v48 != v47 );
          }
          sub_186B220(v45);
        }
        v42 += 7;
      }
      while ( v42 != v132 );
      v42 = *(char ***)(a1 + 168);
    }
    *((_DWORD *)v42 - 1) = 0;
  }
  if ( !(unsigned __int8)sub_7FF320(a1) )
  {
    sub_1872CE0("");
    sub_1873130(114, 371);
  }
  result = 0;
  if ( !*(_DWORD *)(a1 + 116) )
    return sub_753DF0(a1 + 128, 0);
  return result;
}

