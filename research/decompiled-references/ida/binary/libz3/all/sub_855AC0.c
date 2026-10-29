__int64 __fastcall sub_855AC0(__int64 a1, int a2, __int64 a3)
{
  char **exception; // rbx
  char **v4; // rbx
  __int64 v5; // rbp
  __int64 v6; // rbx
  void *v7; // r14
  __int64 v8; // rax
  int v9; // eax
  int v10; // r15d
  int v11; // r8d
  __int64 v12; // rax
  int v13; // r8d
  __int64 v14; // r15
  unsigned int v15; // edx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r9
  __int64 v19; // r15
  int v20; // eax
  void *v21; // rdi
  int v22; // eax
  bool v23; // al
  int v24; // eax
  bool v25; // al
  void *v26; // rbx
  __int64 result; // rax
  void *v28; // r15
  __int64 v29; // r15
  __int64 v30; // rax
  _QWORD *v31; // r15
  void *v32; // rdi
  int v33; // eax
  void *v34; // r15
  int v35; // eax
  int v36; // edx
  unsigned int v37; // r8d
  int v38; // ebx
  int v39; // ecx
  __int64 v40; // rax
  int v41; // ecx
  __int64 v42; // rbx
  unsigned int v43; // edx
  __int64 v44; // r9
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // r15
  int v48; // eax
  void *v49; // rdi
  bool v50; // al
  int v51; // eax
  bool v52; // al
  int v53; // eax
  __int64 v54; // rax
  char v55; // dl
  char v56; // cl
  __int64 v57; // rax
  char v58; // dl
  char v59; // cl
  void *v60; // rbx
  __int64 v61; // r12
  _QWORD *v62; // rax
  _QWORD *v63; // rdx
  _QWORD *v64; // rbx
  unsigned int v65; // eax
  __int64 v66; // rcx
  _QWORD *v67; // rcx
  int v68; // eax
  void *v69; // rdi
  bool v70; // al
  bool v71; // al
  int v72; // eax
  unsigned int v73; // edx
  __int64 v74; // rax
  int *v75; // r15
  _DWORD *v76; // rsi
  __int64 v77; // r9
  __int64 v78; // rax
  __int64 v79; // rdx
  int *v80; // rdi
  int *i; // rax
  int v82; // ecx
  char v83; // r8
  __int64 v84; // rcx
  char v85; // r8
  __int64 v86; // rcx
  __int64 v87; // rax
  int *v88; // rbx
  int *v89; // r15
  void *v90; // rbp
  int *v91; // rsi
  int v92; // eax
  int v93; // eax
  int v94; // eax
  __int64 v95; // rax
  char v96; // dl
  char v97; // si
  __int64 v98; // rax
  char v99; // dl
  char v100; // si
  int v101; // eax
  void *v102; // rdi
  int v103; // eax
  bool v104; // al
  unsigned int v105; // ebp
  unsigned int v106; // ecx
  unsigned int *v107; // rax
  __int64 v108; // rcx
  __int64 v109; // rbx
  size_t v110; // r15
  __int64 v111; // rax
  int v112; // r8d
  __int64 v113; // r9
  __int64 v114; // rdx
  __int64 v115; // rax
  __int64 v116; // rax
  char *v117; // rbx
  __int64 v118; // rax
  char *v119; // rcx
  __int64 v120; // rax
  __int64 v121; // rdx
  __int64 v122; // rax
  int v123; // edx
  int v124; // esi
  __int64 v125; // rsi
  __int64 v126; // rdx
  char v127; // di
  char v128; // di
  __int64 v129; // rsi
  __int64 v130; // rdx
  char v131; // di
  char v132; // di
  char *v133; // rbx
  char *v134; // r15
  void *v135; // rbp
  char *v136; // rsi
  int v137; // eax
  _QWORD *v138; // rdx
  _QWORD *v139; // rax
  __int64 v140; // [rsp+8h] [rbp-B0h]
  __int64 v141; // [rsp+8h] [rbp-B0h]
  void *v142; // [rsp+8h] [rbp-B0h]
  void *v143; // [rsp+8h] [rbp-B0h]
  int v144; // [rsp+8h] [rbp-B0h]
  __int64 v145; // [rsp+8h] [rbp-B0h]
  __int64 v146; // [rsp+8h] [rbp-B0h]
  __int64 v147; // [rsp+8h] [rbp-B0h]
  __int64 v148; // [rsp+10h] [rbp-A8h]
  __int64 v149; // [rsp+10h] [rbp-A8h]
  unsigned int v150; // [rsp+10h] [rbp-A8h]
  __int64 v151; // [rsp+10h] [rbp-A8h]
  __int64 v152; // [rsp+10h] [rbp-A8h]
  __int64 v153; // [rsp+10h] [rbp-A8h]
  char *v154; // [rsp+10h] [rbp-A8h]
  int v155; // [rsp+10h] [rbp-A8h]
  int v156; // [rsp+10h] [rbp-A8h]
  __int64 v157; // [rsp+18h] [rbp-A0h]
  __int64 v158; // [rsp+18h] [rbp-A0h]
  int v159; // [rsp+18h] [rbp-A0h]
  __int64 v160; // [rsp+18h] [rbp-A0h]
  _DWORD *v161; // [rsp+18h] [rbp-A0h]
  int v162; // [rsp+18h] [rbp-A0h]
  __int64 v163; // [rsp+18h] [rbp-A0h]
  int v164; // [rsp+18h] [rbp-A0h]
  __int64 v165; // [rsp+18h] [rbp-A0h]
  __int64 v166; // [rsp+20h] [rbp-98h]
  int v167; // [rsp+20h] [rbp-98h]
  int v168; // [rsp+20h] [rbp-98h]
  __int64 v169; // [rsp+20h] [rbp-98h]
  __int64 v170; // [rsp+20h] [rbp-98h]
  int v171; // [rsp+20h] [rbp-98h]
  int v172; // [rsp+20h] [rbp-98h]
  int v173; // [rsp+28h] [rbp-90h]
  __int64 v174; // [rsp+28h] [rbp-90h]
  __int64 v176; // [rsp+38h] [rbp-80h]
  __int64 v177; // [rsp+50h] [rbp-68h] BYREF
  __int64 v178; // [rsp+58h] [rbp-60h]
  __int64 v179; // [rsp+60h] [rbp-58h] BYREF
  __int64 v180; // [rsp+68h] [rbp-50h]
  __int64 v181; // [rsp+70h] [rbp-48h]

  v5 = a1;
  v6 = a3;
  v177 = 0;
  v7 = qword_1C7F2C0;
  v178 = 0;
  v179 = 1;
  v180 = 0;
  v181 = 0;
  if ( (*(_BYTE *)(a3 + 4) & 1) != 0 )
  {
    sub_182C690(qword_1C7F2C0, &v177, a3);
    v8 = v6 + 16;
    v140 = v6 + 16;
    if ( (*(_BYTE *)(v6 + 20) & 1) == 0 )
      goto LABEL_3;
LABEL_70:
    sub_182C690(v7, &v179, v8);
    goto LABEL_4;
  }
  LODWORD(v177) = *(_DWORD *)a3;
  v8 = a3 + 16;
  v140 = a3 + 16;
  if ( (*(_BYTE *)(a3 + 20) & 1) != 0 )
    goto LABEL_70;
LABEL_3:
  v9 = *(_DWORD *)(v6 + 16);
  BYTE4(v179) &= ~1u;
  LODWORD(v179) = v9;
LABEL_4:
  v10 = sub_182DB30(&v177);
  v11 = 3 * sub_182DB30(&v179);
  v12 = *(unsigned int *)(a1 + 896);
  v13 = v10 + v11;
  v14 = *(_QWORD *)(a1 + 888);
  v15 = v12 - 1;
  v12 *= 48;
  v16 = v14 + v12;
  v17 = 48LL * (v13 & v15);
  v18 = v14 + v17;
  if ( v17 != v12 )
  {
    v19 = v14 + v17;
    do
    {
      v20 = *(_DWORD *)(v19 + 4);
      if ( v20 == 2 )
      {
        if ( *(_DWORD *)v19 == v13 )
        {
          v21 = qword_1C7F2C0;
          if ( (*(_BYTE *)(v19 + 12) & 1) != 0 || (v177 & 0x100000000LL) != 0 )
          {
            v173 = v13;
            v166 = v16;
            v157 = v18;
            v22 = sub_182C7B0(qword_1C7F2C0, v19 + 8, &v177);
            v18 = v157;
            v16 = v166;
            v13 = v173;
            v23 = v22 == 0;
          }
          else
          {
            v23 = *(_DWORD *)(v19 + 8) == (_DWORD)v177;
          }
          if ( v23 )
          {
            if ( (*(_BYTE *)(v19 + 28) & 1) != 0 || (v179 & 0x100000000LL) != 0 )
            {
              v167 = v13;
              v158 = v16;
              v148 = v18;
              v24 = sub_182C7B0(v21, v19 + 24, &v179);
              v18 = v148;
              v16 = v158;
              v13 = v167;
              v25 = v24 == 0;
            }
            else
            {
              v25 = *(_DWORD *)(v19 + 24) == (_DWORD)v179;
            }
            if ( v25 )
            {
LABEL_18:
              v26 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, &v177);
              return sub_182CBA0(v26, &v179);
            }
          }
        }
      }
      else if ( !v20 )
      {
        goto LABEL_19;
      }
      v19 += 48;
    }
    while ( v16 != v19 );
    v14 = *(_QWORD *)(v5 + 888);
  }
  for ( ; v18 != v14; v14 += 48 )
  {
    v68 = *(_DWORD *)(v14 + 4);
    if ( v68 == 2 )
    {
      if ( *(_DWORD *)v14 == v13 )
      {
        v69 = qword_1C7F2C0;
        if ( (*(_BYTE *)(v14 + 12) & 1) != 0 || (v177 & 0x100000000LL) != 0 )
        {
          v168 = v13;
          v160 = v18;
          v72 = sub_182C7B0(qword_1C7F2C0, v14 + 8, &v177);
          v18 = v160;
          v13 = v168;
          v70 = v72 == 0;
        }
        else
        {
          v70 = *(_DWORD *)(v14 + 8) == (_DWORD)v177;
        }
        if ( v70 )
        {
          if ( (*(_BYTE *)(v14 + 28) & 1) != 0 || (v179 & 0x100000000LL) != 0 )
          {
            v162 = v13;
            v151 = v18;
            v92 = sub_182C7B0(v69, v14 + 24, &v179);
            v18 = v151;
            v13 = v162;
            v71 = v92 == 0;
          }
          else
          {
            v71 = *(_DWORD *)(v14 + 24) == (_DWORD)v179;
          }
          if ( v71 )
            goto LABEL_18;
        }
      }
    }
    else if ( !v68 )
    {
      break;
    }
  }
LABEL_19:
  v28 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v177);
  sub_182CBA0(v28, &v179);
  v29 = *(_QWORD *)(v5 + 880);
  if ( v29 )
  {
    v30 = *(unsigned int *)(v29 - 4);
    if ( (_DWORD)v30 == *(_DWORD *)(v29 - 8) )
    {
      v150 = (unsigned int)(3 * v30 + 1) >> 1;
      v73 = 32 * v150 + 8;
      if ( 32 * (int)v30 + 8 >= v73 || (unsigned int)v30 >= (unsigned int)(3 * v30 + 1) >> 1 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(&v177, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, &v177);
        sub_233E40((__int64)&v177);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v74 = sub_186B270(v73);
      v75 = *(int **)(v5 + 880);
      v76 = (_DWORD *)v74;
      v77 = v74 + 8;
      if ( v75 )
      {
        v78 = (unsigned int)*(v75 - 1);
        v79 = v77;
        v76[1] = v78;
        v80 = &v75[8 * v78];
        for ( i = v75; v80 != i; *(_QWORD *)(v79 - 8) = v86 )
        {
          v82 = *i;
          v83 = *((_BYTE *)i + 4);
          i += 8;
          v79 += 32;
          *(_DWORD *)(v79 - 32) = v82;
          *(_BYTE *)(v79 - 28) = v83 & 3 | *(_BYTE *)(v79 - 28) & 0xFC;
          v84 = *((_QWORD *)i - 3);
          *((_QWORD *)i - 3) = 0;
          *(_QWORD *)(v79 - 24) = v84;
          v85 = *((_BYTE *)i - 12);
          *(_DWORD *)(v79 - 16) = *(i - 4);
          *(_BYTE *)(v79 - 12) = v85 & 3 | *(_BYTE *)(v79 - 12) & 0xFC;
          v86 = *((_QWORD *)i - 1);
          *((_QWORD *)i - 1) = 0;
        }
        v87 = (unsigned int)*(v75 - 1);
        if ( (_DWORD)v87 )
        {
          v161 = v76;
          v169 = v77;
          v174 = v5;
          v176 = v6;
          v88 = v75;
          v89 = &v75[8 * v87];
          do
          {
            v90 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v88);
            v91 = v88 + 4;
            v88 += 8;
            sub_182CBA0(v90, v91);
          }
          while ( v88 != v89 );
          v5 = v174;
          v76 = v161;
          v77 = v169;
          v6 = v176;
          v75 = *(int **)(v174 + 880);
        }
        v170 = v77;
        sub_186B220(v75 - 2);
        v77 = v170;
        v31 = (_QWORD *)(v170 + 32LL * (unsigned int)v76[1]);
      }
      else
      {
        *(_DWORD *)(v74 + 4) = 0;
        v31 = (_QWORD *)(v74 + 8);
      }
      *(_QWORD *)(v5 + 880) = v77;
      *v76 = v150;
    }
    else
    {
      v31 = (_QWORD *)(32 * v30 + v29);
    }
  }
  else
  {
    v139 = (_QWORD *)sub_186B270(0x48u);
    *v139 = 2;
    v31 = v139 + 1;
    *(_QWORD *)(v5 + 880) = v139 + 1;
  }
  *v31 = 0;
  v32 = qword_1C7F2C0;
  v31[1] = 0;
  v31[2] = 1;
  v31[3] = 0;
  if ( (*(_BYTE *)(v6 + 4) & 1) != 0 )
    sub_182C690(v32, v31, v6);
  else
    *(_DWORD *)v31 = *(_DWORD *)v6;
  if ( (*(_BYTE *)(v6 + 20) & 1) != 0 )
  {
    sub_182C690(v32, v31 + 2, v140);
  }
  else
  {
    v33 = *(_DWORD *)(v6 + 16);
    *((_BYTE *)v31 + 20) &= ~1u;
    *((_DWORD *)v31 + 4) = v33;
  }
  v34 = qword_1C7F2C0;
  ++*(_DWORD *)(*(_QWORD *)(v5 + 880) - 4LL);
  v177 = 0;
  v178 = 0;
  v179 = 1;
  v180 = 0;
  if ( (*(_BYTE *)(v6 + 4) & 1) != 0 )
    sub_182C690(v34, &v177, v6);
  else
    LODWORD(v177) = *(_DWORD *)v6;
  if ( (*(_BYTE *)(v6 + 20) & 1) != 0 )
  {
    sub_182C690(v34, &v179, v140);
  }
  else
  {
    v35 = *(_DWORD *)(v6 + 16);
    BYTE4(v179) &= ~1u;
    LODWORD(v179) = v35;
  }
  v36 = *(_DWORD *)(v5 + 896);
  LODWORD(v181) = a2;
  v37 = 2 * v36;
  if ( 3 * v36 < (unsigned int)(4 * (*(_DWORD *)(v5 + 900) + *(_DWORD *)(v5 + 904))) )
  {
    v109 = v37;
    v144 = 2 * v36;
    v110 = 48LL * v37;
    v111 = sub_186B270(v110);
    v112 = v144;
    v113 = v111;
    if ( v144 )
    {
      v114 = v111 + 48 * v109;
      do
      {
        *(_BYTE *)(v111 + 12) &= 0xFCu;
        *(_BYTE *)(v111 + 28) &= 0xFCu;
        v111 += 48;
        *(_QWORD *)(v111 - 48) = 0;
        *(_QWORD *)(v111 - 32) = 0;
        *(_QWORD *)(v111 - 16) = 0;
      }
      while ( v114 != v111 );
      v115 = v113;
      if ( (((_BYTE)v114 - (_BYTE)v113) & 0x10) == 0 || (v115 = v113 + 48, *(_DWORD *)(v113 + 8) = 0, v114 != v113 + 48) )
      {
        do
        {
          *(_DWORD *)(v115 + 8) = 0;
          v115 += 96;
          *(_DWORD *)(v115 - 40) = 0;
        }
        while ( v114 != v115 );
      }
      v116 = v113;
      if ( (((_BYTE)v114 - (_BYTE)v113) & 0x10) == 0
        || (v116 = v113 + 48, *(_DWORD *)(v113 + 24) = 1, v114 != v113 + 48) )
      {
        do
        {
          *(_DWORD *)(v116 + 24) = 1;
          v116 += 96;
          *(_DWORD *)(v116 - 24) = 1;
        }
        while ( v114 != v116 );
      }
    }
    v117 = *(char **)(v5 + 888);
    v118 = *(unsigned int *)(v5 + 896);
    v119 = &v117[48 * v118];
    if ( v117 != v119 )
    {
      do
      {
        if ( *((_DWORD *)v117 + 1) == 2 )
        {
          v120 = 48LL * (*(_DWORD *)v117 & (unsigned int)(v144 - 1));
          v121 = v113 + v120;
          if ( v110 == v120 )
          {
LABEL_139:
            if ( v113 == v121 )
            {
LABEL_147:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v122 = v113;
            while ( *(_DWORD *)(v122 + 4) )
            {
              v122 += 48;
              if ( v121 == v122 )
                goto LABEL_147;
            }
          }
          else
          {
            v122 = v113 + v120;
            while ( *(_DWORD *)(v122 + 4) )
            {
              v122 += 48;
              if ( v113 + v110 == v122 )
                goto LABEL_139;
            }
          }
          *(_DWORD *)v122 = *(_DWORD *)v117;
          v123 = *(_DWORD *)(v122 + 8);
          v124 = *((_DWORD *)v117 + 2);
          *(_DWORD *)(v122 + 4) = 2;
          *(_DWORD *)(v122 + 8) = v124;
          v125 = *((_QWORD *)v117 + 2);
          *((_DWORD *)v117 + 2) = v123;
          v126 = *(_QWORD *)(v122 + 16);
          *(_QWORD *)(v122 + 16) = v125;
          v127 = v117[12];
          *((_QWORD *)v117 + 2) = v126;
          LOBYTE(v126) = *(_BYTE *)(v122 + 12);
          *(_BYTE *)(v122 + 12) = v127 & 2 | v126 & 0xFD;
          LOBYTE(v126) = v126 & 2 | v117[12] & 0xFD;
          v117[12] = v126;
          v128 = *(_BYTE *)(v122 + 12);
          *(_BYTE *)(v122 + 12) = v126 & 1 | v128 & 0xFE;
          LODWORD(v125) = *((_DWORD *)v117 + 6);
          v117[12] = v128 & 1 | v117[12] & 0xFE;
          LODWORD(v126) = *(_DWORD *)(v122 + 24);
          *(_DWORD *)(v122 + 24) = v125;
          v129 = *((_QWORD *)v117 + 4);
          *((_DWORD *)v117 + 6) = v126;
          v130 = *(_QWORD *)(v122 + 32);
          *(_QWORD *)(v122 + 32) = v129;
          v131 = v117[28];
          *((_QWORD *)v117 + 4) = v130;
          LOBYTE(v130) = *(_BYTE *)(v122 + 28);
          *(_BYTE *)(v122 + 28) = v131 & 2 | v130 & 0xFD;
          LOBYTE(v130) = v130 & 2 | v117[28] & 0xFD;
          v117[28] = v130;
          v132 = *(_BYTE *)(v122 + 28) & 1;
          *(_BYTE *)(v122 + 28) = v130 & 1 | *(_BYTE *)(v122 + 28) & 0xFE;
          v117[28] = v132 | v117[28] & 0xFE;
          *(_DWORD *)(v122 + 40) = *((_DWORD *)v117 + 10);
        }
        v117 += 48;
      }
      while ( v119 != v117 );
      v118 = *(unsigned int *)(v5 + 896);
      v119 = *(char **)(v5 + 888);
    }
    if ( v119 )
    {
      if ( (_DWORD)v118 )
      {
        v145 = v113;
        v133 = v119;
        v154 = v119;
        v165 = v5;
        v134 = &v119[48 * v118];
        v172 = v112;
        do
        {
          v135 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v133 + 8);
          v136 = v133 + 24;
          v133 += 48;
          sub_182CBA0(v135, v136);
        }
        while ( v133 != v134 );
        v113 = v145;
        v119 = v154;
        v5 = v165;
        v112 = v172;
      }
      v155 = v112;
      v146 = v113;
      sub_186B220(v119);
      v113 = v146;
      v112 = v155;
    }
    *(_QWORD *)(v5 + 888) = v113;
    *(_DWORD *)(v5 + 896) = v112;
    *(_DWORD *)(v5 + 904) = 0;
  }
  v38 = sub_182DB30(&v177);
  v39 = 3 * sub_182DB30(&v179);
  v40 = *(unsigned int *)(v5 + 896);
  v41 = v38 + v39;
  v42 = *(_QWORD *)(v5 + 888);
  v43 = v40 - 1;
  v40 *= 48;
  v44 = v42 + v40;
  v45 = 48LL * (v41 & v43);
  v46 = v42 + v45;
  if ( v45 != v40 )
  {
    v42 += v45;
    v47 = 0;
    while ( 1 )
    {
      v48 = *(_DWORD *)(v42 + 4);
      if ( v48 == 2 )
      {
        if ( *(_DWORD *)v42 == v41 )
        {
          v49 = qword_1C7F2C0;
          if ( (*(_BYTE *)(v42 + 12) & 1) != 0 || (v177 & 0x100000000LL) != 0 )
          {
            v171 = v41;
            v163 = v44;
            v152 = v46;
            v142 = qword_1C7F2C0;
            v93 = sub_182C7B0(qword_1C7F2C0, v42 + 8, &v177);
            v49 = v142;
            v46 = v152;
            v44 = v163;
            v41 = v171;
            v50 = v93 == 0;
          }
          else
          {
            v50 = *(_DWORD *)(v42 + 8) == (_DWORD)v177;
          }
          if ( v50 )
          {
            if ( (*(_BYTE *)(v42 + 28) & 1) != 0 || (v179 & 0x100000000LL) != 0 )
            {
              v159 = v41;
              v149 = v44;
              v141 = v46;
              v51 = sub_182C7B0(v49, v42 + 24, &v179);
              v46 = v141;
              v44 = v149;
              v41 = v159;
              v52 = v51 == 0;
            }
            else
            {
              v52 = *(_DWORD *)(v42 + 24) == (_DWORD)v179;
            }
            if ( v52 )
              goto LABEL_46;
          }
        }
      }
      else
      {
        if ( !v48 )
          goto LABEL_85;
        v47 = v42;
      }
      v42 += 48;
      if ( v44 == v42 )
      {
        v42 = *(_QWORD *)(v5 + 888);
        goto LABEL_92;
      }
    }
  }
  v47 = 0;
  while ( 1 )
  {
LABEL_92:
    if ( v46 == v42 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v101 = *(_DWORD *)(v42 + 4);
    if ( v101 != 2 )
      break;
    if ( *(_DWORD *)v42 != v41 )
      goto LABEL_91;
    v102 = qword_1C7F2C0;
    if ( (*(_BYTE *)(v42 + 12) & 1) != 0 || (v177 & 0x100000000LL) != 0 )
    {
      v164 = v41;
      v153 = v46;
      v143 = qword_1C7F2C0;
      v103 = sub_182C7B0(qword_1C7F2C0, v42 + 8, &v177);
      v102 = v143;
      v46 = v153;
      v41 = v164;
      if ( v103 )
        goto LABEL_91;
    }
    else if ( *(_DWORD *)(v42 + 8) != (_DWORD)v177 )
    {
      goto LABEL_91;
    }
    if ( (*(_BYTE *)(v42 + 28) & 1) != 0 || (v179 & 0x100000000LL) != 0 )
    {
      v156 = v41;
      v147 = v46;
      v137 = sub_182C7B0(v102, v42 + 24, &v179);
      v46 = v147;
      v41 = v156;
      v104 = v137 == 0;
    }
    else
    {
      v104 = *(_DWORD *)(v42 + 24) == (_DWORD)v179;
    }
    if ( v104 )
    {
LABEL_46:
      v53 = *(_DWORD *)(v42 + 8);
      *(_DWORD *)(v42 + 8) = v177;
      LODWORD(v177) = v53;
      v54 = *(_QWORD *)(v42 + 16);
      *(_QWORD *)(v42 + 16) = v178;
      v178 = v54;
      v55 = *(_BYTE *)(v42 + 12);
      *(_BYTE *)(v42 + 12) = BYTE4(v177) & 2 | v55 & 0xFD;
      BYTE4(v177) = v55 & 2 | BYTE4(v177) & 0xFD;
      v56 = *(_BYTE *)(v42 + 12);
      *(_BYTE *)(v42 + 12) = BYTE4(v177) & 1 | v56 & 0xFE;
      BYTE4(v177) = v56 & 1 | BYTE4(v177) & 0xFE;
      LODWORD(v54) = *(_DWORD *)(v42 + 24);
      *(_DWORD *)(v42 + 24) = v179;
      LODWORD(v179) = v54;
      v57 = *(_QWORD *)(v42 + 32);
      *(_QWORD *)(v42 + 32) = v180;
      v180 = v57;
      v58 = *(_BYTE *)(v42 + 28);
      *(_BYTE *)(v42 + 28) = BYTE4(v179) & 2 | v58 & 0xFD;
      BYTE4(v179) = v58 & 2 | BYTE4(v179) & 0xFD;
      v59 = *(_BYTE *)(v42 + 28) & 1;
      *(_BYTE *)(v42 + 28) = BYTE4(v179) & 1 | *(_BYTE *)(v42 + 28) & 0xFE;
      BYTE4(v179) = v59 | BYTE4(v179) & 0xFE;
      LODWORD(v57) = v181;
      *(_DWORD *)(v42 + 4) = 2;
      *(_DWORD *)(v42 + 40) = v57;
      goto LABEL_47;
    }
LABEL_91:
    v42 += 48;
  }
  if ( v101 )
  {
    v47 = v42;
    goto LABEL_91;
  }
LABEL_85:
  if ( v47 )
    --*(_DWORD *)(v5 + 904);
  else
    v47 = v42;
  v94 = *(_DWORD *)(v47 + 8);
  *(_DWORD *)(v47 + 8) = v177;
  LODWORD(v177) = v94;
  v95 = *(_QWORD *)(v47 + 16);
  *(_QWORD *)(v47 + 16) = v178;
  v178 = v95;
  v96 = *(_BYTE *)(v47 + 12);
  *(_BYTE *)(v47 + 12) = BYTE4(v177) & 2 | v96 & 0xFD;
  BYTE4(v177) = v96 & 2 | BYTE4(v177) & 0xFD;
  v97 = *(_BYTE *)(v47 + 12);
  *(_BYTE *)(v47 + 12) = BYTE4(v177) & 1 | v97 & 0xFE;
  BYTE4(v177) = v97 & 1 | BYTE4(v177) & 0xFE;
  LODWORD(v95) = *(_DWORD *)(v47 + 24);
  *(_DWORD *)(v47 + 24) = v179;
  LODWORD(v179) = v95;
  v98 = *(_QWORD *)(v47 + 32);
  *(_QWORD *)(v47 + 32) = v180;
  v180 = v98;
  v99 = *(_BYTE *)(v47 + 28);
  *(_BYTE *)(v47 + 28) = BYTE4(v179) & 2 | v99 & 0xFD;
  BYTE4(v179) = v99 & 2 | BYTE4(v179) & 0xFD;
  v100 = *(_BYTE *)(v47 + 28) & 1;
  *(_BYTE *)(v47 + 28) = BYTE4(v179) & 1 | *(_BYTE *)(v47 + 28) & 0xFE;
  BYTE4(v179) = v100 | BYTE4(v179) & 0xFE;
  LODWORD(v98) = v181;
  *(_DWORD *)(v47 + 4) = 2;
  *(_DWORD *)(v47 + 40) = v98;
  *(_DWORD *)v47 = v41;
  ++*(_DWORD *)(v5 + 900);
LABEL_47:
  v60 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v177);
  sub_182CBA0(v60, &v179);
  v61 = *(_QWORD *)(v5 + 80);
  v62 = (_QWORD *)sub_180C100(v61 + 2144, 16);
  v63 = *(_QWORD **)(v61 + 2128);
  v64 = v62;
  *v62 = off_1C554A0;
  v62[1] = v5;
  if ( v63 )
  {
    v65 = *((_DWORD *)v63 - 1);
    if ( v65 == *((_DWORD *)v63 - 2) )
    {
      v105 = (3 * v65 + 1) >> 1;
      v106 = 8 * v105 + 8;
      if ( 8 * v65 + 8 >= v106 || v65 >= v105 )
      {
        v4 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(&v177, "Overflow encountered when expanding vector");
        *v4 = (char *)off_1C63128;
        sub_2333C0(v4 + 1, &v177);
        sub_233E40((__int64)&v177);
        __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v107 = (unsigned int *)sub_186B300(v63 - 1, v106);
      v108 = v107[1];
      v63 = v107 + 2;
      *(_QWORD *)(v61 + 2128) = v107 + 2;
      *v107 = v105;
      LODWORD(v107) = v108;
      v67 = &v63[v108];
      result = (unsigned int)((_DWORD)v107 + 1);
    }
    else
    {
      v66 = v65;
      result = v65 + 1;
      v67 = &v63[v66];
    }
  }
  else
  {
    v138 = (_QWORD *)sub_186B270(0x18u);
    *v138 = 2;
    result = 1;
    v63 = v138 + 1;
    *(_QWORD *)(v61 + 2128) = v63;
    v67 = v63;
  }
  *v67 = v64;
  *((_DWORD *)v63 - 1) = result;
  return result;
}

