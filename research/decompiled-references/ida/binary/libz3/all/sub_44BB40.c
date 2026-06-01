__int64 __fastcall sub_44BB40(__int64 *a1, __int64 a2, __int64 a3)
{
  char **exception; // rbp
  char **v4; // rbp
  __int64 v5; // rbx
  __int64 v6; // rax
  unsigned int v7; // edx
  __int64 v8; // r12
  void *v9; // r13
  __int64 v10; // rsi
  __int64 v11; // rbx
  __int64 v12; // rsi
  __int64 v13; // r12
  __int64 v14; // r13
  __int64 v15; // r14
  void *v16; // r13
  void *v17; // r13
  __int64 v18; // rbx
  __int64 v19; // rsi
  __int64 v20; // rbx
  int v21; // eax
  __int64 v22; // rax
  char v23; // di
  char v24; // cl
  __int64 v25; // rax
  char v26; // di
  char v27; // cl
  void *v28; // rbx
  void *v29; // rbx
  void *v30; // rbx
  unsigned int *v31; // rax
  __int64 v32; // rbx
  __int64 v33; // rax
  __int64 v34; // rbx
  int v35; // eax
  _DWORD *v36; // rax
  int v37; // ecx
  int v38; // r8d
  int v39; // r9d
  bool v40; // r14
  __int64 v41; // rdi
  __int64 v42; // r13
  __int64 v43; // rdi
  __int64 *v44; // r14
  __int64 v45; // rsi
  void *v47; // r14
  void *v48; // r14
  __int64 v49; // rax
  __int64 v50; // r15
  void *v51; // r13
  _QWORD *v52; // r14
  unsigned int v53; // eax
  unsigned int v54; // ebx
  unsigned int v55; // r13d
  size_t v56; // rdi
  unsigned int *v57; // r8
  __int64 v58; // r15
  __int64 v59; // rax
  _DWORD *v60; // rdx
  __int64 v61; // rdi
  __int64 i; // rax
  int v63; // ecx
  char v64; // si
  __int64 v65; // rcx
  char v66; // si
  __int64 v67; // rcx
  __int64 v68; // rax
  __int64 v69; // rbx
  __int64 v70; // r12
  unsigned int *v71; // r15
  void *v72; // r13
  __int64 v73; // rsi
  __int64 v74; // rdx
  __int64 v75; // rcx
  _QWORD *v76; // rsi
  _QWORD *v77; // rax
  __int64 v78; // rdx
  __int64 v79; // rdx
  void *v80; // rbx
  __int64 v81; // r12
  _QWORD *v82; // r14
  __int64 v83; // rax
  _QWORD *v84; // rbx
  void *v85; // r13
  _QWORD *v86; // rsi
  __int64 v87; // rax
  __int64 v88; // rdx
  __int64 v89; // r14
  int v90; // eax
  void *v91; // rdi
  void *v92; // rdi
  __int64 v93; // rbx
  int v94; // eax
  __int64 v95; // rax
  char v96; // dl
  char v97; // cl
  __int64 v98; // rax
  char v99; // dl
  char v100; // cl
  void *v101; // rbx
  unsigned int *v102; // rax
  __int64 v103; // rbx
  __int64 v104; // rax
  __int64 v105; // rbx
  __int64 v106; // r13
  void *v107; // r15
  __int64 v108; // r13
  unsigned int v109; // eax
  __int64 v110; // r12
  void *v111; // rbx
  _QWORD *v112; // rsi
  void *v113; // rbx
  _QWORD *v115; // rax
  unsigned int v116; // eax
  unsigned int v117; // esi
  unsigned int v118; // r13d
  size_t v119; // rdi
  unsigned int *v120; // rax
  int *v121; // r15
  unsigned int *v122; // rsi
  __int64 v123; // rdi
  _DWORD *v124; // rdx
  int *v125; // rax
  int *v126; // rdi
  int v127; // ecx
  char v128; // r8
  __int64 v129; // rcx
  char v130; // r8
  __int64 v131; // rcx
  __int64 v132; // rbx
  int *v133; // rbx
  int *v134; // r12
  unsigned int *v135; // r15
  void *v136; // r13
  int *v137; // rsi
  _QWORD *v138; // rax
  _QWORD *v139; // rax
  __int64 v140; // rax
  __int64 v141; // rdx
  _QWORD *v142; // rbx
  _QWORD *v143; // r15
  void *v144; // r14
  _QWORD *v145; // rsi
  unsigned int v147; // [rsp+10h] [rbp-118h]
  unsigned int *v148; // [rsp+10h] [rbp-118h]
  __int64 v149; // [rsp+18h] [rbp-110h]
  unsigned int v150; // [rsp+18h] [rbp-110h]
  __int64 v151; // [rsp+20h] [rbp-108h]
  unsigned int v152; // [rsp+20h] [rbp-108h]
  __int64 v153; // [rsp+20h] [rbp-108h]
  __int64 v154; // [rsp+28h] [rbp-100h]
  void *v155; // [rsp+28h] [rbp-100h]
  __int64 v156; // [rsp+28h] [rbp-100h]
  __int64 v157; // [rsp+30h] [rbp-F8h]
  unsigned int v158; // [rsp+44h] [rbp-E4h]
  __int64 v159; // [rsp+48h] [rbp-E0h]
  void *v160; // [rsp+50h] [rbp-D8h]
  __int64 v162; // [rsp+60h] [rbp-C8h]
  _QWORD v164[2]; // [rsp+70h] [rbp-B8h] BYREF
  _QWORD v165[2]; // [rsp+80h] [rbp-A8h] BYREF
  _QWORD v166[2]; // [rsp+90h] [rbp-98h] BYREF
  int v167; // [rsp+A0h] [rbp-88h] BYREF
  char v168; // [rsp+A4h] [rbp-84h]
  __int64 v169; // [rsp+A8h] [rbp-80h]
  __int64 v170; // [rsp+B0h] [rbp-78h] BYREF
  __int64 v171; // [rsp+B8h] [rbp-70h]
  __int64 v172; // [rsp+C0h] [rbp-68h] BYREF
  __int64 v173; // [rsp+C8h] [rbp-60h]
  __int64 v174; // [rsp+D0h] [rbp-58h] BYREF
  __int64 v175; // [rsp+D8h] [rbp-50h]
  __int64 v176; // [rsp+E0h] [rbp-48h] BYREF
  __int64 v177; // [rsp+E8h] [rbp-40h]

  sub_449720(a1, a3);
  v5 = a1[16];
  v6 = v5;
  if ( v5 )
  {
    v7 = *(_DWORD *)(v5 - 4);
    if ( v7 )
    {
      v8 = v5 + 32LL * v7;
      do
      {
        v9 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v5);
        v10 = v5 + 16;
        v5 += 32;
        sub_182CBA0(v9, v10);
      }
      while ( v5 != v8 );
      v6 = a1[16];
    }
    *(_DWORD *)(v6 - 4) = 0;
  }
  v164[0] = 0;
  v164[1] = 0;
  v165[0] = 1;
  v11 = *(_QWORD *)(a3 + 80);
  v165[1] = 0;
  if ( v11 )
  {
    v162 = v11 + 136LL * *(unsigned int *)(v11 - 4);
    if ( v11 != v162 )
    {
      v12 = *(_QWORD *)(v11 + 40);
      v13 = v11;
      if ( v12 )
      {
        v158 = *(_DWORD *)(v12 - 4);
        if ( v6 )
        {
          if ( *(_DWORD *)(v6 - 4) >= v158 )
          {
            while ( v158 )
            {
              v14 = v158;
LABEL_14:
              v15 = 0;
              v154 = 8 * v14;
              do
              {
                v31 = (unsigned int *)(v15 + *(_QWORD *)(v13 + 40));
                v32 = *v31;
                v33 = *(_QWORD *)(v13 + 16) + 24LL * ((unsigned int)v32 + *(_DWORD *)(v13 + 28) * v31[1]);
                if ( *(_DWORD *)(v33 + 16) != *(_DWORD *)(v13 + 32) )
                {
                  sub_1872CE0("");
                  sub_1873130(114, 157);
                }
                v151 = *(_QWORD *)v33;
                if ( (unsigned __int8)sub_1666AE0(a1 + 6, v151, v164, &v170)
                  || (unsigned __int8)sub_1673C40(a1 + 8, v151, v164) )
                {
                  BYTE4(v166[0]) &= 0xFCu;
                  v168 &= 0xFCu;
                  LODWORD(v166[0]) = 0;
                  v16 = qword_1C7F2C0;
                  v166[1] = 0;
                  v167 = 1;
                  v169 = 0;
                  if ( (v165[0] & 0x100000000LL) != 0 )
                    sub_182C690(qword_1C7F2C0, v166, v165);
                  else
                    LODWORD(v166[0]) = v165[0];
                  sub_182CBA0(v16, &v167);
                  v168 &= ~1u;
                  v17 = qword_1C7F2C0;
                  BYTE4(v170) &= 0xFCu;
                  BYTE4(v172) &= 0xFCu;
                  v167 = 1;
                  LODWORD(v170) = 0;
                  v171 = 0;
                  LODWORD(v172) = 1;
                  v173 = 0;
                  if ( (v166[0] & 0x100000000LL) != 0 )
                    sub_182C690(qword_1C7F2C0, &v170, v166);
                  else
                    LODWORD(v170) = v166[0];
                  if ( (v168 & 1) != 0 )
                  {
                    sub_182C690(v17, &v172, &v167);
                  }
                  else
                  {
                    BYTE4(v172) &= ~1u;
                    LODWORD(v172) = v167;
                  }
                  sub_1831690(qword_1C7F2C0, &v170);
                  v18 = 32 * v32;
                  BYTE4(v174) &= 0xFCu;
                  v19 = a1[16];
                  BYTE4(v176) &= 0xFCu;
                  LODWORD(v174) = 0;
                  v175 = 0;
                  LODWORD(v176) = 1;
                  v177 = 0;
                  v160 = qword_1C7F2C0;
                  sub_1836B00(qword_1C7F2C0, v18 + v19, &v170, &v174);
                  sub_182CBA0(v160, &v176);
                  BYTE4(v176) &= ~1u;
                  LODWORD(v176) = 1;
                  v20 = a1[16] + v18;
                  v21 = *(_DWORD *)v20;
                  *(_DWORD *)v20 = v174;
                  LODWORD(v174) = v21;
                  v22 = *(_QWORD *)(v20 + 8);
                  *(_QWORD *)(v20 + 8) = v175;
                  v175 = v22;
                  v23 = *(_BYTE *)(v20 + 4);
                  *(_BYTE *)(v20 + 4) = BYTE4(v174) & 2 | v23 & 0xFD;
                  BYTE4(v174) = v23 & 2 | BYTE4(v174) & 0xFD;
                  v24 = *(_BYTE *)(v20 + 4);
                  *(_BYTE *)(v20 + 4) = BYTE4(v174) & 1 | v24 & 0xFE;
                  BYTE4(v174) = v24 & 1 | BYTE4(v174) & 0xFE;
                  LODWORD(v22) = *(_DWORD *)(v20 + 16);
                  *(_DWORD *)(v20 + 16) = v176;
                  LODWORD(v176) = v22;
                  v25 = *(_QWORD *)(v20 + 24);
                  *(_QWORD *)(v20 + 24) = v177;
                  v177 = v25;
                  v26 = *(_BYTE *)(v20 + 20);
                  *(_BYTE *)(v20 + 20) = BYTE4(v176) & 2 | v26 & 0xFD;
                  BYTE4(v176) = v26 & 2 | BYTE4(v176) & 0xFD;
                  v27 = *(_BYTE *)(v20 + 20) & 1;
                  *(_BYTE *)(v20 + 20) = BYTE4(v176) & 1 | *(_BYTE *)(v20 + 20) & 0xFE;
                  v28 = qword_1C7F2C0;
                  BYTE4(v176) = v27 | BYTE4(v176) & 0xFE;
                  sub_182CBA0(qword_1C7F2C0, &v174);
                  sub_182CBA0(v28, &v176);
                  v29 = qword_1C7F2C0;
                  sub_182CBA0(qword_1C7F2C0, &v170);
                  sub_182CBA0(v29, &v172);
                  v30 = qword_1C7F2C0;
                  sub_182CBA0(qword_1C7F2C0, v166);
                  sub_182CBA0(v30, &v167);
                }
                v15 += 8;
              }
              while ( v154 != v15 );
              v13 += 136;
              if ( v162 == v13 )
                goto LABEL_33;
            }
            goto LABEL_145;
          }
LABEL_60:
          v170 = 0;
          v171 = 0;
          v172 = 1;
          v51 = qword_1C7F2C0;
          v173 = 0;
          if ( (*(_BYTE *)(&qword_1C7F280 + 1) & 1) != 0 )
            sub_182C690(qword_1C7F2C0, &v170, &qword_1C7F280);
          else
            LODWORD(v170) = qword_1C7F280;
          if ( (qword_1C7F290 & 0x100000000LL) != 0 )
          {
            sub_182C690(v51, &v172, &qword_1C7F290);
          }
          else
          {
            BYTE4(v172) &= ~1u;
            LODWORD(v172) = qword_1C7F290;
          }
          v52 = (_QWORD *)a1[16];
          if ( v52 )
          {
            v152 = *((_DWORD *)v52 - 1);
            if ( v152 >= v158 )
            {
              v14 = v158;
              v140 = 32LL * v152;
              v141 = 32LL * v158;
              v142 = &v52[(unsigned __int64)v140 / 8];
              v143 = &v52[(unsigned __int64)v141 / 8];
              if ( v141 != v140 )
              {
                do
                {
                  v144 = qword_1C7F2C0;
                  sub_182CBA0(qword_1C7F2C0, v143);
                  v145 = v143 + 2;
                  v143 += 4;
                  sub_182CBA0(v144, v145);
                }
                while ( v142 != v143 );
                v52 = (_QWORD *)a1[16];
              }
              *((_DWORD *)v52 - 1) = v158;
              goto LABEL_79;
            }
          }
          else
          {
            v152 = 0;
            v139 = (_QWORD *)sub_186B270(0x48u);
            v52 = v139 + 1;
            *v139 = 2;
            a1[16] = (__int64)(v139 + 1);
          }
          while ( 1 )
          {
            v53 = *((_DWORD *)v52 - 2);
            v54 = v158;
            if ( v53 >= v158 )
              break;
            while ( 1 )
            {
              v55 = (3 * v53 + 1) >> 1;
              v56 = 32 * v55 + 8;
              if ( 32 * v53 + 8 >= (unsigned int)v56 || v53 >= v55 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(&v174, "Overflow encountered when expanding vector");
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, &v174);
                sub_233E40((__int64)&v174);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v57 = (unsigned int *)sub_186B270(v56);
              v52 = v57 + 2;
              v58 = a1[16];
              if ( !v58 )
                break;
              v59 = *(unsigned int *)(v58 - 4);
              v60 = v57 + 2;
              v57[1] = v59;
              v61 = v58 + 32 * v59;
              for ( i = v58; i != v61; *((_QWORD *)v60 - 1) = v67 )
              {
                v63 = *(_DWORD *)i;
                v64 = *(_BYTE *)(i + 4);
                i += 32;
                v60 += 8;
                *(v60 - 8) = v63;
                *((_BYTE *)v60 - 28) = v64 & 3 | *(_BYTE *)(v60 - 7) & 0xFC;
                v65 = *(_QWORD *)(i - 24);
                *(_QWORD *)(i - 24) = 0;
                *((_QWORD *)v60 - 3) = v65;
                v66 = *(_BYTE *)(i - 12);
                *(v60 - 4) = *(_DWORD *)(i - 16);
                *((_BYTE *)v60 - 12) = v66 & 3 | *(_BYTE *)(v60 - 3) & 0xFC;
                v67 = *(_QWORD *)(i - 8);
                *(_QWORD *)(i - 8) = 0;
              }
              v68 = *(unsigned int *)(v58 - 4);
              v69 = v58 + 32 * v68;
              if ( (_DWORD)v68 )
              {
                v147 = v55;
                v149 = v13;
                v70 = v58;
                v71 = v57;
                do
                {
                  v72 = qword_1C7F2C0;
                  sub_182CBA0(qword_1C7F2C0, v70);
                  v73 = v70 + 16;
                  v70 += 32;
                  sub_182CBA0(v72, v73);
                }
                while ( v69 != v70 );
                v57 = v71;
                v55 = v147;
                v13 = v149;
                v58 = a1[16];
              }
              v148 = v57;
              sub_186B220((void *)(v58 - 8));
              v54 = v158;
              a1[16] = (__int64)v52;
              *v148 = v55;
              v53 = *((_DWORD *)v52 - 2);
              if ( v53 >= v158 )
                goto LABEL_77;
            }
            v57[1] = 0;
            a1[16] = (__int64)v52;
            *v57 = v55;
          }
LABEL_77:
          v14 = v54;
          *((_DWORD *)v52 - 1) = v54;
          v74 = 32LL * v54;
          v75 = 32LL * v152;
          v76 = &v52[(unsigned __int64)v74 / 8];
          v77 = &v52[(unsigned __int64)v75 / 8];
          if ( v75 != v74 )
          {
            do
            {
              v77 += 4;
              *((_DWORD *)v77 - 8) = v170;
              *((_BYTE *)v77 - 28) = BYTE4(v170) & 3 | *((_BYTE *)v77 - 28) & 0xFC;
              v78 = v171;
              v171 = 0;
              *(v77 - 3) = v78;
              *((_DWORD *)v77 - 4) = v172;
              *((_BYTE *)v77 - 12) = BYTE4(v172) & 3 | *((_BYTE *)v77 - 12) & 0xFC;
              v79 = v173;
              v173 = 0;
              *(v77 - 1) = v79;
            }
            while ( v76 != v77 );
          }
LABEL_79:
          v80 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v170);
          sub_182CBA0(v80, &v172);
          goto LABEL_14;
        }
        if ( v158 )
          goto LABEL_60;
      }
LABEL_145:
      v158 = 0;
      goto LABEL_33;
    }
  }
  v158 = 0;
LABEL_33:
  sub_466D20(a2, v158);
  if ( (unsigned __int8)sub_447FE0(a1[5], *(_QWORD *)(a3 + 80) + 8LL) )
  {
    *(_DWORD *)(a2 + 80) = 0;
    *(_BYTE *)(a2 + 84) = 0;
  }
  if ( v158 )
  {
    v34 = 0;
    do
    {
      v48 = qword_1C7F2C0;
      v42 = *(_QWORD *)(a1[15] + v34);
      v49 = a1[16];
      v174 = 0;
      v175 = 0;
      v176 = 1;
      v50 = v49 + 4 * v34;
      v177 = 0;
      if ( (*(_BYTE *)(v50 + 4) & 1) != 0 )
      {
        sub_182C690(qword_1C7F2C0, &v174, v49 + 4 * v34);
        if ( (*(_BYTE *)(v50 + 20) & 1) == 0 )
        {
LABEL_38:
          v35 = *(_DWORD *)(v50 + 16);
          BYTE4(v176) &= ~1u;
          LODWORD(v176) = v35;
          goto LABEL_39;
        }
      }
      else
      {
        LODWORD(v174) = *(_DWORD *)v50;
        if ( (*(_BYTE *)(v50 + 20) & 1) == 0 )
          goto LABEL_38;
      }
      sub_182C690(v48, &v176, v50 + 16);
LABEL_39:
      if ( (v174 & 0x100000000LL) != 0 || (_DWORD)v174 != 1 || (v176 & 0x100000000LL) != 0 || (_DWORD)v176 != 1 )
      {
        v36 = *(_DWORD **)(sub_15D1F10(v42) + 24);
        v40 = 0;
        if ( v36 && *v36 == 5 )
          v40 = v36[1] == 1;
        v41 = a1[7];
        if ( !v41 )
        {
          sub_16669E0(a1 + 6);
          v41 = a1[7];
        }
        sub_166A700(v41, (unsigned int)&v174, v40, v37, v38, v39);
        v42 = sub_15E1B70(a1[6]);
      }
      v43 = *(_QWORD *)(a2 + 112);
      v44 = (__int64 *)(v34 + *(_QWORD *)(a2 + 120));
      if ( v42 )
        ++*(_DWORD *)(v42 + 8);
      v45 = *v44;
      if ( *v44 )
      {
        if ( (*(_DWORD *)(v45 + 8))-- == 1 )
          sub_15D7BC0(v43, v45);
      }
      *v44 = v42;
      v47 = qword_1C7F2C0;
      v34 += 8;
      sub_182CBA0(qword_1C7F2C0, &v174);
      sub_182CBA0(v47, &v176);
    }
    while ( v34 != 8LL * v158 );
  }
  v166[0] = 0;
  v81 = *(_QWORD *)(a3 + 80);
  if ( v81 )
  {
    v159 = v81 + 136LL * *(unsigned int *)(v81 - 4);
    if ( v159 != v81 )
    {
      v82 = nullptr;
      while ( 1 )
      {
        if ( v82 )
        {
          v83 = *((unsigned int *)v82 - 1);
          if ( (_DWORD)v83 )
          {
            v84 = &v82[4 * v83];
            do
            {
              v85 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v82);
              v86 = v82 + 2;
              v82 += 4;
              sub_182CBA0(v85, v86);
            }
            while ( v82 != v84 );
            v82 = (_QWORD *)v166[0];
          }
          *((_DWORD *)v82 - 1) = 0;
          if ( v158 )
          {
            if ( !v82 )
            {
LABEL_127:
              v115 = (_QWORD *)sub_186B270(0x48u);
              v82 = v115 + 1;
              v166[0] = v115 + 1;
              *v115 = 2;
            }
            while ( 1 )
            {
              v116 = *((_DWORD *)v82 - 2);
              v117 = v158;
              if ( v116 >= v158 )
                break;
              while ( 1 )
              {
                v118 = (3 * v116 + 1) >> 1;
                v119 = 32 * v118 + 8;
                if ( 32 * v116 + 8 >= (unsigned int)v119 || v116 >= v118 )
                {
                  v4 = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0(&v174, "Overflow encountered when expanding vector");
                  *v4 = (char *)off_1C63128;
                  sub_2333C0(v4 + 1, &v174);
                  sub_233E40((__int64)&v174);
                  __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                }
                v120 = (unsigned int *)sub_186B270(v119);
                v121 = (int *)v166[0];
                v122 = v120;
                v82 = v120 + 2;
                if ( !v166[0] )
                  break;
                v123 = *(unsigned int *)(v166[0] - 4LL);
                v124 = v120 + 2;
                v120[1] = v123;
                v125 = v121;
                v126 = &v121[8 * v123];
                if ( v126 != v121 )
                {
                  do
                  {
                    v127 = *v125;
                    v128 = *((_BYTE *)v125 + 4);
                    v125 += 8;
                    v124 += 8;
                    *(v124 - 8) = v127;
                    *((_BYTE *)v124 - 28) = v128 & 3 | *(_BYTE *)(v124 - 7) & 0xFC;
                    v129 = *((_QWORD *)v125 - 3);
                    *((_QWORD *)v125 - 3) = 0;
                    *((_QWORD *)v124 - 3) = v129;
                    v130 = *((_BYTE *)v125 - 12);
                    *(v124 - 4) = *(v125 - 4);
                    *((_BYTE *)v124 - 12) = v130 & 3 | *(_BYTE *)(v124 - 3) & 0xFC;
                    v131 = *((_QWORD *)v125 - 1);
                    *((_QWORD *)v125 - 1) = 0;
                    *((_QWORD *)v124 - 1) = v131;
                  }
                  while ( v125 != v126 );
                }
                v132 = (unsigned int)*(v121 - 1);
                if ( (_DWORD)v132 )
                {
                  v150 = v118;
                  v156 = v81;
                  v133 = &v121[8 * v132];
                  v134 = v121;
                  v135 = v122;
                  do
                  {
                    v136 = qword_1C7F2C0;
                    sub_182CBA0(qword_1C7F2C0, v134);
                    v137 = v134 + 4;
                    v134 += 8;
                    sub_182CBA0(v136, v137);
                  }
                  while ( v134 != v133 );
                  v122 = v135;
                  v118 = v150;
                  v81 = v156;
                  v121 = (int *)v166[0];
                }
                sub_186B220(v121 - 2);
                v166[0] = v82;
                *v122 = v118;
                v117 = v158;
                v116 = *((_DWORD *)v82 - 2);
                if ( v116 >= v158 )
                  goto LABEL_139;
              }
              v120[1] = 0;
              v166[0] = v120 + 2;
              *v120 = v118;
            }
LABEL_139:
            *((_DWORD *)v82 - 1) = v117;
            v138 = &v82[4 * v158];
            do
            {
              *((_OWORD *)v82 + 1) = 0;
              v82 += 4;
              *((_OWORD *)v82 - 2) = 0;
              *((_DWORD *)v82 - 4) = 1;
              *((_BYTE *)v82 - 28) = 0;
              *((_BYTE *)v82 - 12) = 0;
            }
            while ( v138 != v82 );
          }
        }
        else if ( v158 )
        {
          goto LABEL_127;
        }
        v87 = *(_QWORD *)(v81 + 40);
        if ( v87 )
        {
          v88 = *(unsigned int *)(v87 - 4);
          if ( (_DWORD)v88 )
          {
            v89 = 0;
            v157 = 8 * v88;
            while ( 1 )
            {
              v102 = (unsigned int *)(v89 + v87);
              v103 = *v102;
              v104 = *(_QWORD *)(v81 + 16) + 24LL * ((unsigned int)v103 + *(_DWORD *)(v81 + 28) * v102[1]);
              if ( *(_DWORD *)(v104 + 16) != *(_DWORD *)(v81 + 32) )
              {
                sub_1872CE0("");
                sub_1873130(114, 157);
              }
              v153 = *(_QWORD *)v104;
              if ( !(unsigned __int8)sub_1666AE0(a1 + 6, v153, v164, &v174)
                && !(unsigned __int8)sub_1673C40(a1 + 8, v153, v164) )
              {
                sub_1872CE0("");
                sub_1873130(114, 244);
              }
              v105 = 32 * v103;
              v174 = 0;
              v175 = 0;
              v106 = a1[16];
              v107 = qword_1C7F2C0;
              v176 = 1;
              v177 = 0;
              v108 = v105 + v106;
              if ( (*(_BYTE *)(v108 + 4) & 1) != 0 )
              {
                sub_182C690(qword_1C7F2C0, &v174, v108);
                if ( (*(_BYTE *)(v108 + 20) & 1) != 0 )
                {
LABEL_109:
                  sub_182C690(v107, &v176, v108 + 16);
                  goto LABEL_95;
                }
              }
              else
              {
                LODWORD(v174) = *(_DWORD *)v108;
                if ( (*(_BYTE *)(v108 + 20) & 1) != 0 )
                  goto LABEL_109;
              }
              v90 = *(_DWORD *)(v108 + 16);
              BYTE4(v176) &= ~1u;
              LODWORD(v176) = v90;
LABEL_95:
              v91 = qword_1C7F2C0;
              if ( (v176 & 0x100000000LL) != 0
                || (_DWORD)v176 != 1
                || (v165[0] & 0x100000000LL) != 0
                || LODWORD(v165[0]) != 1 )
              {
                sub_1848FF0(qword_1C7F2C0, &v174, v164);
              }
              else
              {
                sub_1831650(qword_1C7F2C0, &v174, v164);
                sub_182CBA0(v91, &v176);
                BYTE4(v176) &= ~1u;
                LODWORD(v176) = 1;
              }
              BYTE4(v170) &= 0xFCu;
              v92 = qword_1C7F2C0;
              BYTE4(v172) &= 0xFCu;
              LODWORD(v170) = 0;
              v171 = 0;
              LODWORD(v172) = 1;
              v173 = 0;
              if ( (v174 & 0x100000000LL) != 0 )
                sub_182C690(qword_1C7F2C0, &v170, &v174);
              else
                LODWORD(v170) = v174;
              if ( (v176 & 0x100000000LL) != 0 )
              {
                sub_182C690(v92, &v172, &v176);
              }
              else
              {
                BYTE4(v172) &= ~1u;
                LODWORD(v172) = v176;
              }
              v89 += 8;
              v155 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, &v174);
              sub_182CBA0(v155, &v176);
              v93 = v166[0] + v105;
              v94 = *(_DWORD *)v93;
              *(_DWORD *)v93 = v170;
              LODWORD(v170) = v94;
              v95 = *(_QWORD *)(v93 + 8);
              *(_QWORD *)(v93 + 8) = v171;
              v171 = v95;
              v96 = *(_BYTE *)(v93 + 4);
              *(_BYTE *)(v93 + 4) = BYTE4(v170) & 2 | v96 & 0xFD;
              BYTE4(v170) = v96 & 2 | BYTE4(v170) & 0xFD;
              v97 = *(_BYTE *)(v93 + 4);
              *(_BYTE *)(v93 + 4) = BYTE4(v170) & 1 | v97 & 0xFE;
              BYTE4(v170) = v97 & 1 | BYTE4(v170) & 0xFE;
              LODWORD(v95) = *(_DWORD *)(v93 + 16);
              *(_DWORD *)(v93 + 16) = v172;
              LODWORD(v172) = v95;
              v98 = *(_QWORD *)(v93 + 24);
              *(_QWORD *)(v93 + 24) = v173;
              v173 = v98;
              v99 = *(_BYTE *)(v93 + 20);
              *(_BYTE *)(v93 + 20) = BYTE4(v172) & 2 | v99 & 0xFD;
              BYTE4(v172) = v99 & 2 | BYTE4(v172) & 0xFD;
              v100 = *(_BYTE *)(v93 + 20) & 1;
              *(_BYTE *)(v93 + 20) = BYTE4(v172) & 1 | *(_BYTE *)(v93 + 20) & 0xFE;
              v101 = qword_1C7F2C0;
              BYTE4(v172) = v100 | BYTE4(v172) & 0xFE;
              sub_182CBA0(qword_1C7F2C0, &v170);
              sub_182CBA0(v101, &v172);
              if ( v157 == v89 )
                break;
              v87 = *(_QWORD *)(v81 + 40);
            }
          }
        }
        sub_4ACFD0(a2 + 96, v166);
        v82 = (_QWORD *)v166[0];
        v81 += 136;
        if ( v159 == v81 )
        {
          if ( v166[0] )
          {
            v109 = *(_DWORD *)(v166[0] - 4LL);
            if ( v109 )
            {
              v110 = v166[0] + 32LL * v109;
              do
              {
                v111 = qword_1C7F2C0;
                sub_182CBA0(qword_1C7F2C0, v82);
                v112 = v82 + 2;
                v82 += 4;
                sub_182CBA0(v111, v112);
              }
              while ( v82 != (_QWORD *)v110 );
              v82 = (_QWORD *)v166[0];
            }
            sub_186B220(v82 - 1);
          }
          break;
        }
      }
    }
  }
  v113 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v164);
  return sub_182CBA0(v113, v165);
}

