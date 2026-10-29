void __fastcall sub_2DD960(__int64 a1, int **a2, __int64 a3, __int64 a4, int a5, int a6)
{
  _DWORD *v6; // r14
  __int64 v8; // rax
  unsigned int v9; // ecx
  unsigned int v10; // edi
  unsigned __int64 v11; // rdi
  _BYTE **v12; // rdx
  _BYTE *v13; // rsi
  _BYTE **v14; // rdx
  _BYTE *v15; // rsi
  _BYTE **v16; // rdx
  _BYTE *v17; // rsi
  int *v18; // rdi
  int *v19; // rax
  __int64 v20; // rdx
  unsigned int v21; // eax
  const int *v22; // rdi
  int v23; // r8d
  int v24; // r9d
  __int64 v25; // rcx
  __int64 v26; // rax
  _BYTE **v27; // rsi
  _BYTE *v28; // rdx
  char v29; // r13
  const int *v30; // rsi
  _BYTE *v31; // rdx
  const int *v32; // rax
  void *v33; // r15
  __int64 v34; // rdx
  unsigned int v35; // eax
  const int *v36; // rcx
  int *v37; // rsi
  __int64 v38; // rax
  int *v39; // rax
  void *v40; // r15
  __int64 v41; // rdx
  __int64 v42; // rdx
  int v43; // r8d
  int v44; // r9d
  __int64 v45; // rax
  int *v46; // r13
  int *v47; // r13
  void *v48; // r15
  int v49; // eax
  __int64 v50; // rdx
  int *v51; // rax
  int *v52; // rax
  int v53; // edx
  __int64 v54; // rdx
  char v55; // cl
  char v56; // si
  __int64 v57; // rdx
  char v58; // cl
  char v59; // si
  void *v60; // r13
  __int64 v61; // rdx
  unsigned __int8 *v62; // rsi
  int v63; // edx
  __int64 v64; // rax
  const int *v65; // r15
  void *v66; // r13
  __int64 v67; // rdx
  unsigned int v68; // eax
  __int64 v69; // r15
  int *v70; // rsi
  __int64 v71; // rax
  int *v72; // rdx
  void *v73; // r15
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rcx
  unsigned int v77; // eax
  __int64 v78; // rdi
  _BYTE **v79; // rdx
  _BYTE *v80; // rsi
  const int *v81; // rdx
  _BYTE *v82; // rsi
  unsigned int v83; // r10d
  size_t v84; // rdi
  __int64 v85; // rax
  int *v86; // r13
  int v87; // r10d
  _DWORD *v88; // r11
  __int64 v89; // rax
  int *v90; // rdx
  int *v91; // rdi
  int *j; // rax
  int v93; // ecx
  char v94; // r8
  __int64 v95; // rcx
  char v96; // r8
  __int64 v97; // rcx
  __int64 v98; // rax
  int *v99; // r15
  int *v100; // r12
  void *v101; // r13
  int *v102; // rsi
  void *v103; // r13
  int v104; // eax
  int v105; // eax
  int v106; // eax
  __int64 v107; // rcx
  __int64 v108; // rdx
  _QWORD *v109; // rax
  __int64 v110; // rax
  int *v111; // r13
  int *v112; // r13
  void *v113; // r15
  int v114; // eax
  unsigned int v115; // r8d
  unsigned int v116; // edx
  __int64 v117; // rax
  int *v118; // r15
  int v119; // r8d
  _DWORD *v120; // r10
  __int64 v121; // rax
  int *v122; // rdx
  int *v123; // rdi
  int *i; // rax
  int v125; // ecx
  char v126; // r9
  __int64 v127; // rcx
  char v128; // r9
  __int64 v129; // rcx
  __int64 v130; // rax
  int *v131; // r13
  int **v132; // rax
  int *v133; // r12
  int **v134; // r15
  void *v135; // r14
  _QWORD *v136; // rsi
  void *v137; // r15
  int v138; // eax
  int v139; // eax
  int v140; // eax
  __int64 v141; // rcx
  __int64 v142; // rdx
  _QWORD *v143; // rax
  char **exception; // rbp
  char **v145; // rbp
  int v146; // [rsp+0h] [rbp-D8h]
  void *v147; // [rsp+8h] [rbp-D0h]
  void **v148; // [rsp+8h] [rbp-D0h]
  const int *v149; // [rsp+10h] [rbp-C8h]
  char v150; // [rsp+10h] [rbp-C8h]
  __int64 v151; // [rsp+18h] [rbp-C0h]
  int *v152; // [rsp+18h] [rbp-C0h]
  int *v153; // [rsp+18h] [rbp-C0h]
  int v154; // [rsp+18h] [rbp-C0h]
  _DWORD *v155; // [rsp+20h] [rbp-B8h]
  int *v156; // [rsp+20h] [rbp-B8h]
  int v157; // [rsp+20h] [rbp-B8h]
  _DWORD *v158; // [rsp+28h] [rbp-B0h]
  int v159; // [rsp+28h] [rbp-B0h]
  _DWORD *v160; // [rsp+30h] [rbp-A8h]
  _DWORD *v161; // [rsp+30h] [rbp-A8h]
  int **v162; // [rsp+38h] [rbp-A0h]
  int v163; // [rsp+40h] [rbp-98h]
  int v164; // [rsp+48h] [rbp-90h]
  __int64 v165; // [rsp+50h] [rbp-88h] BYREF
  int v166; // [rsp+58h] [rbp-80h]
  int v167; // [rsp+60h] [rbp-78h]
  int v168; // [rsp+68h] [rbp-70h]
  void *v169; // [rsp+70h] [rbp-68h] BYREF
  int v170[2]; // [rsp+78h] [rbp-60h]
  int v171[2]; // [rsp+80h] [rbp-58h] BYREF
  int v172[2]; // [rsp+88h] [rbp-50h]
  int v173[2]; // [rsp+90h] [rbp-48h]
  int v174; // [rsp+98h] [rbp-40h]
  int v175; // [rsp+A0h] [rbp-38h]
  void *v176; // [rsp+A8h] [rbp-30h]
  int v177; // [rsp+B0h] [rbp-28h]
  __int64 v178; // [rsp+B8h] [rbp-20h]

  v6 = (_DWORD *)a1;
  v8 = *(_QWORD *)(a1 + 16);
  v9 = *(_DWORD *)(a1 + 24);
  if ( !v8 )
    goto LABEL_34;
  v10 = *(_DWORD *)(v8 - 4);
  if ( v9 >= v10 )
  {
LABEL_14:
    if ( v9 >= v10 )
      goto LABEL_34;
    v11 = v9;
    goto LABEL_16;
  }
  v11 = v9;
  v12 = (_BYTE **)(v8 + 56LL * v9 + 8);
  v13 = *v12;
  if ( *v12 )
  {
    if ( ((unsigned __int64)*v12 & 7) == 1 )
    {
      sub_180CE20(
        (int)&v169,
        (int)v12,
        (int)v12,
        v9,
        a5,
        a6,
        v146,
        v147,
        (int)v149,
        v151,
        (int)v155,
        (int)v158,
        (int)v160,
        (int)v162,
        v163,
        v164,
        v165,
        v166,
        v167,
        v168,
        (int)v169,
        v170[0],
        v171[0],
        v172[0],
        v173[0],
        v174,
        v175,
        v176,
        v177,
        v178);
      v18 = (int *)v169;
      v19 = v171;
      if ( *(_QWORD *)v170 == 1 && *(_BYTE *)v169 == 61 )
        goto LABEL_116;
      if ( v169 != v171 )
        operator delete(v169, *(_QWORD *)v171 + 1LL);
      v9 = v6[6];
      v8 = *((_QWORD *)v6 + 2);
    }
    else if ( *v13 == 61 && !v13[1] )
    {
      return;
    }
    if ( !v8 || v9 >= *(_DWORD *)(v8 - 4) )
      goto LABEL_34;
    v11 = v9;
  }
  v14 = (_BYTE **)(v8 + 56 * v11 + 8);
  v15 = *v14;
  if ( *v14 )
  {
    if ( ((unsigned __int64)*v14 & 7) == 1 )
    {
      sub_180CE20(
        (int)&v169,
        (int)v14,
        (int)v14,
        v9,
        a5,
        a6,
        v146,
        v147,
        (int)v149,
        v151,
        (int)v155,
        (int)v158,
        (int)v160,
        (int)v162,
        v163,
        v164,
        v165,
        v166,
        v167,
        v168,
        (int)v169,
        v170[0],
        v171[0],
        v172[0],
        v173[0],
        v174,
        v175,
        v176,
        v177,
        v178);
      v18 = (int *)v169;
      v19 = v171;
      if ( *(_QWORD *)v170 == 2 && *(_WORD *)v169 == 15421 )
        goto LABEL_116;
      if ( v169 != v171 )
        operator delete(v169, *(_QWORD *)v171 + 1LL);
      v9 = v6[6];
      v8 = *((_QWORD *)v6 + 2);
    }
    else if ( *v15 == 61 && v15[1] == 60 && !v15[2] )
    {
      return;
    }
    if ( !v8 )
      goto LABEL_34;
    v10 = *(_DWORD *)(v8 - 4);
    goto LABEL_14;
  }
LABEL_16:
  v16 = (_BYTE **)(v8 + 56 * v11 + 8);
  v17 = *v16;
  if ( *v16 )
  {
    if ( ((unsigned __int64)*v16 & 7) != 1 )
    {
      if ( *v17 == 62 && v17[1] == 61 && !v17[2] )
        return;
LABEL_20:
      if ( v8 && v9 < *(_DWORD *)(v8 - 4) )
      {
        LODWORD(v11) = v9;
        goto LABEL_23;
      }
LABEL_34:
      v11 = (unsigned __int64)&qword_18D6CD0;
      goto LABEL_35;
    }
    sub_180CE20(
      (int)&v169,
      (int)v16,
      (int)v16,
      v9,
      a5,
      a6,
      v146,
      v147,
      (int)v149,
      v151,
      (int)v155,
      (int)v158,
      (int)v160,
      (int)v162,
      v163,
      v164,
      v165,
      v166,
      v167,
      v168,
      (int)v169,
      v170[0],
      v171[0],
      v172[0],
      v173[0],
      v174,
      v175,
      v176,
      v177,
      v178);
    v18 = (int *)v169;
    v19 = v171;
    if ( *(_QWORD *)v170 != 2 || *(_WORD *)v169 != 15678 )
    {
      if ( v169 != v171 )
        operator delete(v169, *(_QWORD *)v171 + 1LL);
      v9 = v6[6];
      v8 = *((_QWORD *)v6 + 2);
      goto LABEL_20;
    }
LABEL_116:
    if ( v18 != v19 )
      operator delete(v18, *(_QWORD *)v171 + 1LL);
    return;
  }
LABEL_23:
  LODWORD(v11) = v8 + 56 * v11 + 8;
LABEL_35:
  if ( !(unsigned __int8)sub_2DD1C0(v11, "=>") )
  {
    v20 = *((_QWORD *)v6 + 2);
    if ( v20 && (v21 = v6[6], v21 < *(_DWORD *)(v20 - 4)) )
      LODWORD(v22) = v20 + 56 * v21 + 8;
    else
      v22 = &qword_18D6CD0;
    if ( !(unsigned __int8)sub_2DD1C0((int)v22, "<=") )
    {
      v25 = *((_QWORD *)v6 + 2);
      v26 = (unsigned int)v6[6];
      if ( v25 )
      {
        if ( (unsigned int)v26 < *(_DWORD *)(v25 - 4) )
        {
          v27 = (_BYTE **)(v25 + 56LL * (unsigned int)v26 + 8);
          v28 = *v27;
          if ( *v27 )
          {
            if ( ((unsigned __int64)*v27 & 7) == 1 )
            {
              sub_180CE20(
                (int)&v169,
                (int)v27,
                (int)v28,
                v25,
                v23,
                v24,
                v146,
                &v169,
                (int)v149,
                v151,
                (int)v155,
                (int)v158,
                (int)v160,
                (int)v162,
                v163,
                v164,
                v165,
                v166,
                v167,
                v168,
                (int)v169,
                v170[0],
                v171[0],
                v172[0],
                v173[0],
                v174,
                v175,
                v176,
                v177,
                v178);
              if ( *(_QWORD *)v170 != 1 || *(_BYTE *)v169 != 45 )
              {
                if ( v169 != v171 )
                  operator delete(v169, *(_QWORD *)v171 + 1LL);
                v26 = (unsigned int)v6[6];
                v25 = *((_QWORD *)v6 + 2);
                v29 = 1;
                while ( 1 )
                {
LABEL_47:
                  if ( v25 && (unsigned int)v26 < *(_DWORD *)(v25 - 4) )
                    v30 = (const int *)(v25 + 56LL * (unsigned int)v26 + 8);
                  else
                    v30 = &qword_18D6CD0;
                  v31 = *(_BYTE **)v30;
                  if ( !*(_QWORD *)v30 )
                  {
LABEL_53:
                    if ( !v25 )
                      goto LABEL_188;
                    goto LABEL_54;
                  }
                  if ( (*(_QWORD *)v30 & 7LL) == 1 )
                  {
                    sub_180CE20(
                      (int)v148,
                      (int)v30,
                      (int)v31,
                      v25,
                      v23,
                      v24,
                      v146,
                      v148,
                      (int)v149,
                      v151,
                      (int)v155,
                      (int)v158,
                      (int)v160,
                      (int)v162,
                      v163,
                      v164,
                      v165,
                      v166,
                      v167,
                      v168,
                      (int)v169,
                      v170[0],
                      v171[0],
                      v172[0],
                      v173[0],
                      v174,
                      v175,
                      v176,
                      v177,
                      v178);
                    if ( *(_QWORD *)v170 != 1 || *(_BYTE *)v169 != 43 )
                    {
                      if ( v169 != v171 )
                        operator delete(v169, *(_QWORD *)v171 + 1LL);
                      v25 = *((_QWORD *)v6 + 2);
                      v26 = (unsigned int)v6[6];
                      if ( !v25 )
                      {
LABEL_188:
                        v32 = &qword_18D6CD0;
                        goto LABEL_56;
                      }
LABEL_54:
                      if ( (unsigned int)v26 >= *(_DWORD *)(v25 - 4) )
                        goto LABEL_188;
                      v32 = (const int *)(v25 + 56 * v26 + 8);
LABEL_56:
                      LODWORD(v169) = 0;
                      BYTE4(v169) &= 0xFCu;
                      LOBYTE(v171[1]) &= 0xFCu;
                      v33 = qword_1C7F2C0;
                      *(_QWORD *)v170 = 0;
                      v171[0] = 1;
                      *(_QWORD *)v172 = 0;
                      if ( (*(_BYTE *)(&qword_1C7F280 + 1) & 1) != 0 )
                      {
                        v149 = v32;
                        sub_182C690(qword_1C7F2C0, v148, &qword_1C7F280);
                        v32 = v149;
                        if ( (qword_1C7F290 & 0x100000000LL) != 0 )
                          goto LABEL_208;
LABEL_58:
                        LOBYTE(v171[1]) &= ~1u;
                        v171[0] = qword_1C7F290;
                      }
                      else
                      {
                        LODWORD(v169) = qword_1C7F280;
                        if ( (qword_1C7F290 & 0x100000000LL) == 0 )
                          goto LABEL_58;
LABEL_208:
                        v149 = v32;
                        sub_182C690(v33, v171, &qword_1C7F290);
                        v32 = v149;
                      }
                      v34 = *((_QWORD *)v6 + 2);
                      *(_QWORD *)v173 = *(_QWORD *)v32;
                      v35 = v6[6];
                      if ( v34 && v35 < *(_DWORD *)(v34 - 4) && (v36 = (const int *)(v34 + 56LL * v35), *(_BYTE *)v36) )
                      {
                        v137 = qword_1C7F2C0;
                        if ( (v36[5] & 1) != 0 )
                        {
                          v149 = (const int *)(v34 + 56LL * v35);
                          sub_182C690(qword_1C7F2C0, v148, v36 + 4);
                          v36 = v149;
                        }
                        else
                        {
                          v138 = v36[4];
                          BYTE4(v169) &= ~1u;
                          LODWORD(v169) = v138;
                        }
                        if ( (v36[9] & 1) != 0 )
                        {
                          sub_182C690(v137, v171, v36 + 8);
                        }
                        else
                        {
                          v139 = v36[8];
                          LOBYTE(v171[1]) &= ~1u;
                          v171[0] = v139;
                        }
                        v140 = v6[6];
                        v141 = *((_QWORD *)v6 + 2);
                        v142 = (unsigned int)(v140 + 1);
                        if ( v141 && (unsigned int)v142 < *(_DWORD *)(v141 - 4) )
                          *(_QWORD *)v173 = *(_QWORD *)(v141 + 56 * v142 + 8);
                        else
                          *(_QWORD *)v173 = 0;
                        v37 = *a2;
                        v6[6] = v140 + 2;
                        if ( v37 )
                          goto LABEL_63;
                      }
                      else
                      {
                        v37 = *a2;
                        v6[6] = v35 + 1;
                        if ( v37 )
                        {
LABEL_63:
                          v38 = (unsigned int)*(v37 - 1);
                          if ( (_DWORD)v38 == *(v37 - 2) )
                          {
                            v115 = (unsigned int)(3 * v38 + 1) >> 1;
                            v116 = 40 * v115 + 8;
                            if ( 40 * (int)v38 + 8 >= v116 || (unsigned int)v38 >= v115 )
                            {
                              exception = (char **)__cxa_allocate_exception(0x28u);
                              sub_24ABB0(&v165, "Overflow encountered when expanding vector");
                              *exception = (char *)off_1C63128;
                              sub_2333C0(exception + 1, &v165);
                              sub_233E40((__int64)&v165);
                              __cxa_throw(
                                exception,
                                (struct type_info *)&`typeinfo for'default_exception,
                                (void (*)(void *))sub_230E50);
                            }
                            LODWORD(v149) = (unsigned int)(3 * v38 + 1) >> 1;
                            v117 = sub_186B270(v116);
                            v118 = *a2;
                            v119 = (int)v149;
                            v120 = (_DWORD *)v117;
                            v37 = (int *)(v117 + 8);
                            if ( *a2 )
                            {
                              v121 = (unsigned int)*(v118 - 1);
                              v122 = v37;
                              v120[1] = v121;
                              v123 = &v118[10 * v121];
                              for ( i = v118; v123 != i; *((_QWORD *)v122 - 1) = *((_QWORD *)i - 1) )
                              {
                                v125 = *i;
                                v126 = *((_BYTE *)i + 4);
                                i += 10;
                                v122 += 10;
                                *(v122 - 10) = v125;
                                *((_BYTE *)v122 - 36) = v126 & 3 | *(_BYTE *)(v122 - 9) & 0xFC;
                                v127 = *((_QWORD *)i - 4);
                                *((_QWORD *)i - 4) = 0;
                                *((_QWORD *)v122 - 4) = v127;
                                v128 = *((_BYTE *)i - 20);
                                *(v122 - 6) = *(i - 6);
                                *((_BYTE *)v122 - 20) = v128 & 3 | *(_BYTE *)(v122 - 5) & 0xFC;
                                v129 = *((_QWORD *)i - 2);
                                *((_QWORD *)i - 2) = 0;
                                *((_QWORD *)v122 - 2) = v129;
                              }
                              v130 = (unsigned int)*(v118 - 1);
                              if ( (_DWORD)v130 )
                              {
                                v153 = v37;
                                v157 = (int)v149;
                                v158 = v120;
                                v160 = v6;
                                v150 = v29;
                                v131 = &v118[10 * v130];
                                v132 = a2;
                                v133 = v118;
                                v134 = v132;
                                do
                                {
                                  v135 = qword_1C7F2C0;
                                  sub_182CBA0(qword_1C7F2C0, v133);
                                  v136 = v133 + 4;
                                  v133 += 10;
                                  sub_182CBA0(v135, v136);
                                }
                                while ( v133 != v131 );
                                a2 = v134;
                                v29 = v150;
                                v37 = v153;
                                v119 = v157;
                                v120 = v158;
                                v6 = v160;
                                v118 = *v134;
                              }
                              v155 = v120;
                              v154 = v119;
                              LODWORD(v149) = (_DWORD)v37;
                              sub_186B220(v118 - 2);
                              v120 = v155;
                              v119 = v154;
                              v39 = &v37[10 * v155[1]];
                            }
                            else
                            {
                              *(_DWORD *)(v117 + 4) = 0;
                              v39 = (int *)(v117 + 8);
                            }
                            *a2 = v37;
                            *v120 = v119;
                          }
                          else
                          {
                            v39 = &v37[10 * v38];
                          }
                          goto LABEL_65;
                        }
                      }
                      v143 = (_QWORD *)sub_186B270(0x58u);
                      *v143 = 2;
                      v37 = (int *)(v143 + 1);
                      *a2 = (int *)(v143 + 1);
                      v39 = (int *)(v143 + 1);
LABEL_65:
                      v40 = qword_1C7F2C0;
                      *v39 = (int)v169;
                      *((_BYTE *)v39 + 4) = BYTE4(v169) & 3 | v39[1] & 0xFC;
                      v41 = *(_QWORD *)v170;
                      *(_QWORD *)v170 = 0;
                      *((_QWORD *)v39 + 1) = v41;
                      v39[4] = v171[0];
                      *((_BYTE *)v39 + 20) = v171[1] & 3 | v39[5] & 0xFC;
                      v42 = *(_QWORD *)v172;
                      *(_QWORD *)v172 = 0;
                      *((_QWORD *)v39 + 3) = v42;
                      *((_QWORD *)v39 + 4) = *(_QWORD *)v173;
                      ++*(v37 - 1);
                      sub_182CBA0(v40, v148);
                      v152 = v171;
                      sub_182CBA0(v40, v171);
                      if ( v29 )
                        goto LABEL_96;
                      v45 = 0x9FFFFFFF6LL;
                      v46 = *a2;
                      if ( *a2 )
                        v45 = 10LL * (unsigned int)(*(v46 - 1) - 1);
                      v47 = &v46[v45];
                      BYTE4(v169) &= 0xFCu;
                      v48 = qword_1C7F2C0;
                      LOBYTE(v171[1]) &= 0xFCu;
                      LODWORD(v169) = 0;
                      *(_QWORD *)v170 = 0;
                      v171[0] = 1;
                      *(_QWORD *)v172 = 0;
                      if ( (v47[1] & 1) != 0 )
                        sub_182C690(qword_1C7F2C0, v148, v47);
                      else
                        LODWORD(v169) = *v47;
                      if ( (v47[5] & 1) != 0 )
                      {
                        sub_182C690(v48, v171, v47 + 4);
                      }
                      else
                      {
                        v49 = v47[4];
                        LOBYTE(v171[1]) &= ~1u;
                        v171[0] = v49;
                      }
                      sub_1831620(qword_1C7F2C0, v148);
                      v50 = 0x9FFFFFFF6LL;
                      v51 = *a2;
                      if ( *a2 )
                        v50 = 10LL * (unsigned int)(*(v51 - 1) - 1);
                      while ( 2 )
                      {
                        v52 = &v51[v50];
                        v53 = *v52;
                        *v52 = (int)v169;
                        LODWORD(v169) = v53;
                        v54 = *((_QWORD *)v52 + 1);
                        *((_QWORD *)v52 + 1) = *(_QWORD *)v170;
                        *(_QWORD *)v170 = v54;
                        v55 = *((_BYTE *)v52 + 4);
                        *((_BYTE *)v52 + 4) = BYTE4(v169) & 2 | v55 & 0xFD;
                        BYTE4(v169) = v55 & 2 | BYTE4(v169) & 0xFD;
                        v56 = *((_BYTE *)v52 + 4);
                        *((_BYTE *)v52 + 4) = BYTE4(v169) & 1 | v56 & 0xFE;
                        BYTE4(v169) = v56 & 1 | BYTE4(v169) & 0xFE;
                        LODWORD(v54) = v52[4];
                        v52[4] = v171[0];
                        v171[0] = v54;
                        v57 = *((_QWORD *)v52 + 3);
                        *((_QWORD *)v52 + 3) = *(_QWORD *)v172;
                        *(_QWORD *)v172 = v57;
                        v58 = *((_BYTE *)v52 + 20);
                        *((_BYTE *)v52 + 20) = v171[1] & 2 | v58 & 0xFD;
                        LOBYTE(v171[1]) = v58 & 2 | v171[1] & 0xFD;
                        v59 = v52[5] & 1;
                        *((_BYTE *)v52 + 20) = v171[1] & 1 | v52[5] & 0xFE;
                        v60 = qword_1C7F2C0;
                        LOBYTE(v171[1]) = v59 | v171[1] & 0xFE;
                        sub_182CBA0(qword_1C7F2C0, v148);
                        sub_182CBA0(v60, v152);
LABEL_96:
                        v76 = *((_QWORD *)v6 + 2);
                        v77 = v6[6];
                        if ( !v76 )
                          return;
                        if ( v77 >= *(_DWORD *)(v76 - 4) )
                        {
                          v81 = &qword_18D6CD0;
                          goto LABEL_138;
                        }
                        v78 = v77;
                        v79 = (_BYTE **)(v76 + 56LL * v77 + 8);
                        v80 = *v79;
                        if ( !*v79 )
                          goto LABEL_102;
                        if ( ((unsigned __int64)*v79 & 7) == 1 )
                        {
                          sub_180CE20(
                            (int)v148,
                            v76 + 56 * v77 + 8,
                            (int)v79,
                            v76,
                            v43,
                            v44,
                            v146,
                            v148,
                            (int)v149,
                            (__int64)v152,
                            (int)v155,
                            (int)v158,
                            (int)v160,
                            (int)v162,
                            v163,
                            v164,
                            v165,
                            v166,
                            v167,
                            v168,
                            (int)v169,
                            v170[0],
                            v171[0],
                            v172[0],
                            v173[0],
                            v174,
                            v175,
                            v176,
                            v177,
                            v178);
                          v18 = (int *)v169;
                          v19 = v152;
                          if ( *(_QWORD *)v170 != 1 || *(_BYTE *)v169 != 43 )
                          {
                            if ( v169 != v152 )
                              operator delete(v169, *(_QWORD *)v171 + 1LL);
                            v76 = *((_QWORD *)v6 + 2);
                            v77 = v6[6];
                            if ( v76 )
                              goto LABEL_101;
                            goto LABEL_145;
                          }
                        }
                        else
                        {
                          if ( *v80 == 43 && !v80[1] )
                            goto LABEL_76;
LABEL_101:
                          v78 = v77;
                          if ( v77 < *(_DWORD *)(v76 - 4) )
                          {
LABEL_102:
                            v81 = (const int *)(v76 + 56 * v78 + 8);
                            v82 = *(_BYTE **)v81;
                            goto LABEL_103;
                          }
LABEL_145:
                          v81 = &qword_18D6CD0;
LABEL_138:
                          v82 = nullptr;
LABEL_103:
                          if ( !v82 )
                            return;
                          if ( ((unsigned __int8)v82 & 7) != 1 )
                          {
                            if ( *v82 != 45 || v82[1] )
                              return;
                            if ( !v76 )
                              goto LABEL_108;
LABEL_77:
                            if ( v77 >= *(_DWORD *)(v76 - 4)
                              || (v61 = v76 + 56LL * v77, (v62 = *(unsigned __int8 **)(v61 + 8)) == nullptr) )
                            {
                              v64 = v77 + 1;
                              LOBYTE(v149) = 0;
                              v6[6] = v64;
                              goto LABEL_84;
                            }
                            if ( (*(_QWORD *)(v61 + 8) & 7LL) != 1 )
                            {
                              v63 = *v62 - 43;
                              if ( *v62 == 43 )
                                v63 = v62[1];
                              LOBYTE(v149) = v63 == 0;
LABEL_83:
                              v64 = v77 + 1;
                              v6[6] = v64;
                              if ( v76 )
                              {
LABEL_84:
                                if ( (unsigned int)v64 < *(_DWORD *)(v76 - 4) )
                                {
                                  v65 = (const int *)(v76 + 56 * v64 + 8);
                                  goto LABEL_86;
                                }
                              }
                              v65 = &qword_18D6CD0;
LABEL_86:
                              BYTE4(v169) &= 0xFCu;
                              v66 = qword_1C7F2C0;
                              LOBYTE(v171[1]) &= 0xFCu;
                              LODWORD(v169) = 0;
                              *(_QWORD *)v170 = 0;
                              v171[0] = 1;
                              *(_QWORD *)v172 = 0;
                              if ( (*(_BYTE *)(&qword_1C7F280 + 1) & 1) != 0 )
                              {
                                sub_182C690(qword_1C7F2C0, v148, &qword_1C7F280);
                                if ( (qword_1C7F290 & 0x100000000LL) != 0 )
                                  goto LABEL_136;
LABEL_88:
                                LOBYTE(v171[1]) &= ~1u;
                                v171[0] = qword_1C7F290;
                              }
                              else
                              {
                                LODWORD(v169) = qword_1C7F280;
                                if ( (qword_1C7F290 & 0x100000000LL) == 0 )
                                  goto LABEL_88;
LABEL_136:
                                sub_182C690(v66, v152, &qword_1C7F290);
                              }
                              v67 = *((_QWORD *)v6 + 2);
                              *(_QWORD *)v173 = *(_QWORD *)v65;
                              v68 = v6[6];
                              if ( v67 && v68 < *(_DWORD *)(v67 - 4) && (v69 = v67 + 56LL * v68, *(_BYTE *)v69) )
                              {
                                v103 = qword_1C7F2C0;
                                if ( (*(_BYTE *)(v69 + 20) & 1) != 0 )
                                {
                                  sub_182C690(qword_1C7F2C0, v148, v69 + 16);
                                }
                                else
                                {
                                  v104 = *(_DWORD *)(v69 + 16);
                                  BYTE4(v169) &= ~1u;
                                  LODWORD(v169) = v104;
                                }
                                if ( (*(_BYTE *)(v69 + 36) & 1) != 0 )
                                {
                                  sub_182C690(v103, v152, v69 + 32);
                                }
                                else
                                {
                                  v105 = *(_DWORD *)(v69 + 32);
                                  LOBYTE(v171[1]) &= ~1u;
                                  v171[0] = v105;
                                }
                                v106 = v6[6];
                                v107 = *((_QWORD *)v6 + 2);
                                v108 = (unsigned int)(v106 + 1);
                                if ( v107 && (unsigned int)v108 < *(_DWORD *)(v107 - 4) )
                                  *(_QWORD *)v173 = *(_QWORD *)(v107 + 56 * v108 + 8);
                                else
                                  *(_QWORD *)v173 = 0;
                                v70 = *a2;
                                v6[6] = v106 + 2;
                                if ( v70 )
                                  goto LABEL_93;
                              }
                              else
                              {
                                v70 = *a2;
                                v6[6] = v68 + 1;
                                if ( v70 )
                                {
LABEL_93:
                                  v71 = (unsigned int)*(v70 - 1);
                                  if ( (_DWORD)v71 == *(v70 - 2) )
                                  {
                                    v83 = (unsigned int)(3 * v71 + 1) >> 1;
                                    v84 = 40 * v83 + 8;
                                    if ( 40 * (int)v71 + 8 >= (unsigned int)v84 || (unsigned int)v71 >= v83 )
                                    {
                                      v145 = (char **)__cxa_allocate_exception(0x28u);
                                      sub_24ABB0(&v165, "Overflow encountered when expanding vector");
                                      *v145 = (char *)off_1C63128;
                                      sub_2333C0(v145 + 1, &v165);
                                      sub_233E40((__int64)&v165);
                                      __cxa_throw(
                                        v145,
                                        (struct type_info *)&`typeinfo for'default_exception,
                                        (void (*)(void *))sub_230E50);
                                    }
                                    LODWORD(v155) = (unsigned int)(3 * v71 + 1) >> 1;
                                    v85 = sub_186B270(v84);
                                    v86 = *a2;
                                    v87 = (int)v155;
                                    v88 = (_DWORD *)v85;
                                    v70 = (int *)(v85 + 8);
                                    if ( *a2 )
                                    {
                                      v89 = (unsigned int)*(v86 - 1);
                                      v90 = v70;
                                      v88[1] = v89;
                                      v91 = &v86[10 * v89];
                                      for ( j = v86; v91 != j; *((_QWORD *)v90 - 1) = *((_QWORD *)j - 1) )
                                      {
                                        v93 = *j;
                                        v94 = *((_BYTE *)j + 4);
                                        j += 10;
                                        v90 += 10;
                                        *(v90 - 10) = v93;
                                        *((_BYTE *)v90 - 36) = v94 & 3 | *(_BYTE *)(v90 - 9) & 0xFC;
                                        v95 = *((_QWORD *)j - 4);
                                        *((_QWORD *)j - 4) = 0;
                                        *((_QWORD *)v90 - 4) = v95;
                                        v96 = *((_BYTE *)j - 20);
                                        *(v90 - 6) = *(j - 6);
                                        *((_BYTE *)v90 - 20) = v96 & 3 | *(_BYTE *)(v90 - 5) & 0xFC;
                                        v97 = *((_QWORD *)j - 2);
                                        *((_QWORD *)j - 2) = 0;
                                        *((_QWORD *)v90 - 2) = v97;
                                      }
                                      v98 = (unsigned int)*(v86 - 1);
                                      if ( (_DWORD)v98 )
                                      {
                                        v156 = v70;
                                        v159 = v87;
                                        v99 = &v86[10 * v98];
                                        v161 = v88;
                                        v162 = a2;
                                        v100 = v86;
                                        do
                                        {
                                          v101 = qword_1C7F2C0;
                                          sub_182CBA0(qword_1C7F2C0, v100);
                                          v102 = v100 + 4;
                                          v100 += 10;
                                          sub_182CBA0(v101, v102);
                                        }
                                        while ( v100 != v99 );
                                        a2 = v162;
                                        v70 = v156;
                                        v87 = v159;
                                        v88 = v161;
                                        v86 = *v162;
                                      }
                                      v160 = v88;
                                      LODWORD(v158) = v87;
                                      LODWORD(v155) = (_DWORD)v70;
                                      sub_186B220(v86 - 2);
                                      v88 = v160;
                                      v87 = (int)v158;
                                      v72 = &v70[10 * v160[1]];
                                    }
                                    else
                                    {
                                      *(_DWORD *)(v85 + 4) = 0;
                                      v72 = (int *)(v85 + 8);
                                    }
                                    *a2 = v70;
                                    *v88 = v87;
                                  }
                                  else
                                  {
                                    v72 = &v70[10 * v71];
                                  }
LABEL_95:
                                  v73 = qword_1C7F2C0;
                                  *v72 = (int)v169;
                                  *((_BYTE *)v72 + 4) = BYTE4(v169) & 3 | v72[1] & 0xFC;
                                  v74 = *(_QWORD *)v170;
                                  *(_QWORD *)v170 = 0;
                                  *((_QWORD *)v72 + 1) = v74;
                                  v72[4] = v171[0];
                                  *((_BYTE *)v72 + 20) = v171[1] & 3 | v72[5] & 0xFC;
                                  v75 = *(_QWORD *)v172;
                                  *(_QWORD *)v172 = 0;
                                  *((_QWORD *)v72 + 3) = v75;
                                  *((_QWORD *)v72 + 4) = *(_QWORD *)v173;
                                  ++*(v70 - 1);
                                  sub_182CBA0(v73, v148);
                                  sub_182CBA0(v73, v152);
                                  if ( !(_BYTE)v149 )
                                  {
                                    v110 = 0x9FFFFFFF6LL;
                                    v111 = *a2;
                                    if ( *a2 )
                                      v110 = 10LL * (unsigned int)(*(v111 - 1) - 1);
                                    v112 = &v111[v110];
                                    BYTE4(v169) &= 0xFCu;
                                    v113 = qword_1C7F2C0;
                                    LOBYTE(v171[1]) &= 0xFCu;
                                    LODWORD(v169) = 0;
                                    *(_QWORD *)v170 = 0;
                                    v171[0] = 1;
                                    *(_QWORD *)v172 = 0;
                                    if ( (v112[1] & 1) != 0 )
                                    {
                                      sub_182C690(qword_1C7F2C0, v148, v112);
                                      if ( (v112[5] & 1) != 0 )
                                        goto LABEL_190;
LABEL_180:
                                      v114 = v112[4];
                                      LOBYTE(v171[1]) &= ~1u;
                                      v171[0] = v114;
                                    }
                                    else
                                    {
                                      LODWORD(v169) = *v112;
                                      if ( (v112[5] & 1) == 0 )
                                        goto LABEL_180;
LABEL_190:
                                      sub_182C690(v113, v152, v112 + 4);
                                    }
                                    sub_1831620(qword_1C7F2C0, v148);
                                    v50 = 0x9FFFFFFF6LL;
                                    v51 = *a2;
                                    if ( *a2 )
                                      v50 = 10LL * (unsigned int)(*(v51 - 1) - 1);
                                    continue;
                                  }
                                  goto LABEL_96;
                                }
                              }
                              v109 = (_QWORD *)sub_186B270(0x58u);
                              v70 = (int *)(v109 + 1);
                              *a2 = (int *)(v109 + 1);
                              v72 = (int *)(v109 + 1);
                              *v109 = 2;
                              goto LABEL_95;
                            }
                            sub_180CE20(
                              (int)v148,
                              v61 + 8,
                              1,
                              v76,
                              v43,
                              v44,
                              v146,
                              v148,
                              (int)v149,
                              (__int64)v152,
                              (int)v155,
                              (int)v158,
                              (int)v160,
                              (int)v162,
                              v163,
                              v164,
                              v165,
                              v166,
                              v167,
                              v168,
                              (int)v169,
                              v170[0],
                              v171[0],
                              v172[0],
                              v173[0],
                              v174,
                              v175,
                              v176,
                              v177,
                              v178);
                            if ( *(_QWORD *)v170 == 1 && *(_BYTE *)v169 == 43 )
                            {
                              LOBYTE(v149) = 1;
                              if ( v169 == v152 )
                                goto LABEL_158;
LABEL_157:
                              operator delete(v169, *(_QWORD *)v171 + 1LL);
                            }
                            else
                            {
                              LOBYTE(v149) = 0;
                              if ( v169 != v152 )
                                goto LABEL_157;
                            }
LABEL_158:
                            v77 = v6[6];
                            v76 = *((_QWORD *)v6 + 2);
                            goto LABEL_83;
                          }
                          sub_180CE20(
                            (int)v148,
                            (int)v81,
                            (int)v81,
                            v76,
                            v43,
                            v44,
                            v146,
                            v148,
                            (int)v149,
                            (__int64)v152,
                            (int)v155,
                            (int)v158,
                            (int)v160,
                            (int)v162,
                            v163,
                            v164,
                            v165,
                            v166,
                            v167,
                            v168,
                            (int)v169,
                            v170[0],
                            v171[0],
                            v172[0],
                            v173[0],
                            v174,
                            v175,
                            v176,
                            v177,
                            v178);
                          v18 = (int *)v169;
                          v19 = v152;
                          if ( *(_QWORD *)v170 != 1 || *(_BYTE *)v169 != 45 )
                            goto LABEL_116;
                        }
                        break;
                      }
                      if ( v18 != v19 )
                        operator delete(v18, *(_QWORD *)v171 + 1LL);
                      v77 = v6[6];
                      v76 = *((_QWORD *)v6 + 2);
LABEL_76:
                      if ( v76 )
                        goto LABEL_77;
LABEL_108:
                      LOBYTE(v149) = 0;
                      v65 = &qword_18D6CD0;
                      v6[6] = v77 + 1;
                      goto LABEL_86;
                    }
                    if ( v169 != v171 )
                      operator delete(v169, *(_QWORD *)v171 + 1LL);
                    LODWORD(v26) = v6[6];
                    v25 = *((_QWORD *)v6 + 2);
                  }
                  else if ( *v31 != 43 || v31[1] )
                  {
                    goto LABEL_53;
                  }
                  v26 = (unsigned int)(v26 + 1);
                  v6[6] = v26;
                }
              }
              if ( v169 != v171 )
                operator delete(v169, *(_QWORD *)v171 + 1LL);
              LODWORD(v26) = v6[6];
              v25 = *((_QWORD *)v6 + 2);
LABEL_46:
              v26 = (unsigned int)(v26 + 1);
              v29 = 0;
              v6[6] = v26;
              goto LABEL_47;
            }
            if ( *v28 == 45 )
            {
              v148 = &v169;
              if ( !v28[1] )
                goto LABEL_46;
            }
          }
        }
      }
      v29 = 1;
      v148 = &v169;
      goto LABEL_47;
    }
  }
}

