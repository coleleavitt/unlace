__int64 __fastcall sub_331340(_QWORD *a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  char **exception; // rbp
  char **v7; // rbp
  char **v8; // rbp
  char **v9; // rbp
  char **v10; // rbp
  __int64 v11; // r12
  _QWORD *v12; // rbp
  __int64 v13; // rbx
  _QWORD *v14; // rdx
  unsigned int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  _QWORD *v18; // rcx
  void *v19; // r14
  void *v20; // r14
  void *v21; // r14
  _QWORD *v22; // rsi
  __int64 v23; // rax
  _QWORD *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rdx
  void *v29; // r14
  __int64 v30; // rdx
  __int64 v31; // rdx
  void *v32; // r14
  void *v33; // r14
  void *v34; // r14
  void *v35; // r14
  void *v36; // r14
  void *v37; // r14
  void *v38; // r14
  void *v39; // r14
  _QWORD *v40; // rsi
  __int64 v41; // rax
  _QWORD *v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rdx
  __int64 v45; // rdx
  __int64 v46; // rdx
  void *v47; // r14
  __int64 v48; // rdx
  __int64 v49; // rdx
  void *v50; // r14
  void *v51; // r14
  void *v52; // r14
  void *v53; // r14
  void *v54; // rbx
  __int64 v55; // rbx
  _QWORD *v56; // rdx
  unsigned int v57; // eax
  __int64 v58; // rcx
  int v59; // eax
  _QWORD *v60; // rcx
  _QWORD *v61; // rdx
  unsigned int v62; // eax
  __int64 v63; // rcx
  int v64; // eax
  _QWORD *v65; // rcx
  __int64 v66; // rax
  unsigned int v67; // ebx
  __int64 v68; // rsi
  __int64 v69; // rdi
  bool v70; // zf
  unsigned int v72; // ebx
  size_t v73; // rsi
  unsigned int *v74; // rax
  __int64 v75; // rcx
  unsigned int v76; // r14d
  size_t v77; // rsi
  unsigned int *v78; // rax
  __int64 v79; // rcx
  _QWORD *v80; // rax
  unsigned int v81; // esi
  unsigned int v82; // edi
  unsigned int v83; // esi
  size_t v84; // rdi
  __int64 v85; // rax
  int *v86; // r14
  _DWORD *v87; // r8
  __int64 v88; // rax
  _QWORD *v89; // rdx
  __int64 v90; // r9
  int *v91; // rax
  int *v92; // r9
  int v93; // ecx
  char v94; // di
  __int64 v95; // rcx
  char v96; // di
  __int64 v97; // rcx
  char v98; // di
  __int64 v99; // rcx
  char v100; // di
  __int64 v101; // rcx
  char v102; // di
  __int64 v103; // rcx
  char v104; // di
  __int64 v105; // rcx
  __int64 v106; // rax
  int *v107; // rbp
  void *v108; // r12
  void *v109; // r12
  void *v110; // r12
  int *v111; // rsi
  unsigned int v112; // esi
  unsigned int v113; // edi
  unsigned int v114; // esi
  size_t v115; // rdi
  __int64 v116; // rax
  int *v117; // r14
  _DWORD *v118; // r8
  __int64 v119; // rax
  _QWORD *v120; // rdx
  __int64 v121; // r9
  int *v122; // rax
  int *v123; // r9
  int v124; // ecx
  char v125; // di
  __int64 v126; // rcx
  char v127; // di
  __int64 v128; // rcx
  char v129; // di
  __int64 v130; // rcx
  char v131; // di
  __int64 v132; // rcx
  char v133; // di
  __int64 v134; // rcx
  char v135; // di
  __int64 v136; // rcx
  __int64 v137; // rax
  int *v138; // rbp
  void *v139; // r12
  void *v140; // r12
  void *v141; // r12
  int *v142; // rsi
  unsigned int v143; // r14d
  size_t v144; // rsi
  unsigned int *v145; // rax
  __int64 v146; // rcx
  _QWORD *v147; // rax
  _QWORD *v148; // rax
  _QWORD *v149; // rax
  _QWORD *v150; // rax
  void *v151; // [rsp+0h] [rbp-1D8h]
  unsigned int v152; // [rsp+28h] [rbp-1B0h]
  _QWORD *v153; // [rsp+30h] [rbp-1A8h]
  _DWORD *v154; // [rsp+38h] [rbp-1A0h]
  _DWORD *v155; // [rsp+38h] [rbp-1A0h]
  _QWORD *v156; // [rsp+40h] [rbp-198h]
  __int64 v157; // [rsp+48h] [rbp-190h]
  int v158[2]; // [rsp+58h] [rbp-180h]
  unsigned int v159; // [rsp+6Ch] [rbp-16Ch]
  _QWORD *v160; // [rsp+70h] [rbp-168h]
  _DWORD *v161; // [rsp+78h] [rbp-160h]
  _DWORD *v162; // [rsp+78h] [rbp-160h]
  _QWORD *v163; // [rsp+80h] [rbp-158h]
  __int64 v164; // [rsp+88h] [rbp-150h]
  __int64 v165; // [rsp+A0h] [rbp-138h] BYREF
  __int64 v166; // [rsp+A8h] [rbp-130h]
  int v167[4]; // [rsp+B0h] [rbp-128h] BYREF
  __int64 v168; // [rsp+C0h] [rbp-118h] BYREF
  __int64 v169; // [rsp+C8h] [rbp-110h]
  __int64 v170; // [rsp+D0h] [rbp-108h] BYREF
  __int64 v171; // [rsp+D8h] [rbp-100h]
  __int64 v172[4]; // [rsp+E0h] [rbp-F8h] BYREF
  __int64 v173; // [rsp+100h] [rbp-D8h] BYREF
  __int64 v174; // [rsp+108h] [rbp-D0h]
  __int64 v175; // [rsp+110h] [rbp-C8h] BYREF
  __int64 v176; // [rsp+118h] [rbp-C0h]
  __int64 v177; // [rsp+120h] [rbp-B8h] BYREF
  __int64 v178; // [rsp+128h] [rbp-B0h]
  __int64 v179; // [rsp+130h] [rbp-A8h] BYREF
  __int64 v180; // [rsp+138h] [rbp-A0h]
  int v181[2]; // [rsp+140h] [rbp-98h] BYREF
  __int64 v182; // [rsp+148h] [rbp-90h]
  __int64 v183; // [rsp+150h] [rbp-88h] BYREF
  __int64 v184; // [rsp+158h] [rbp-80h]
  __int64 v185; // [rsp+160h] [rbp-78h] BYREF
  __int64 v186; // [rsp+168h] [rbp-70h]
  __int64 v187; // [rsp+170h] [rbp-68h] BYREF
  __int64 v188; // [rsp+178h] [rbp-60h]
  __int64 v189; // [rsp+180h] [rbp-58h] BYREF
  __int64 v190; // [rsp+188h] [rbp-50h]
  __int64 v191; // [rsp+190h] [rbp-48h] BYREF
  __int64 v192; // [rsp+198h] [rbp-40h]

  v11 = a2;
  v12 = a1;
  *(_QWORD *)v158 = *a1;
  if ( a2 )
    ++*(_DWORD *)(a2 + 8);
  v165 = 0;
  v166 = *(_QWORD *)v158;
  *(_QWORD *)v181 = 0;
  sub_14B7810((int)v167, v158[0], (int)v181, a4, a5, a6, v151);
  sub_18572D0(v181);
  sub_14B9BF0(v167, a2, &v165);
  v13 = v165;
  if ( v165 )
    ++*(_DWORD *)(v165 + 8);
  v14 = (_QWORD *)a1[6];
  if ( v14 )
  {
    v15 = *((_DWORD *)v14 - 1);
    if ( v15 == *((_DWORD *)v14 - 2) )
    {
      v143 = (3 * v15 + 1) >> 1;
      v144 = 8 * v143 + 8;
      if ( 8 * v15 + 8 >= (unsigned int)v144 || v15 >= v143 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0((__int64 *)v181, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v181);
        sub_233E40((__int64)v181);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v145 = (unsigned int *)sub_186B300(v14 - 1, v144);
      v146 = v145[1];
      v14 = v145 + 2;
      *v145 = v143;
      a1[6] = v145 + 2;
      LODWORD(v145) = v146;
      v18 = &v14[v146];
      v17 = (_DWORD)v145 + 1;
    }
    else
    {
      v16 = v15;
      v17 = v15 + 1;
      v18 = &v14[v16];
    }
  }
  else
  {
    v149 = (_QWORD *)sub_186B270(0x18u);
    v14 = v149 + 1;
    *v149 = 2;
    v17 = 1;
    a1[6] = v14;
    v18 = v14;
  }
  *v18 = v13;
  *((_DWORD *)v14 - 1) = v17;
  v173 = 0;
  v174 = 0;
  v175 = 1;
  v176 = 0;
  sub_182CBA0(qword_1C7F2C0, &v175);
  BYTE4(v175) &= ~1u;
  v168 = 0xFFFFFFFFLL;
  LODWORD(v175) = 1;
  v177 = 0;
  v178 = 0;
  v179 = 1;
  v180 = 0;
  v169 = 0;
  v170 = 1;
  v171 = 0;
  sub_182CBA0(qword_1C7F2C0, &v170);
  BYTE4(v170) &= ~1u;
  v19 = qword_1C7F2C0;
  LODWORD(v170) = 1;
  *(_QWORD *)v181 = 0;
  v182 = 0;
  v183 = 1;
  v184 = 0;
  if ( (v168 & 0x100000000LL) != 0 )
    sub_182C690(qword_1C7F2C0, v181, &v168);
  else
    v181[0] = v168;
  if ( (v170 & 0x100000000LL) != 0 )
  {
    sub_182C690(v19, &v183, &v170);
  }
  else
  {
    BYTE4(v183) &= ~1u;
    LODWORD(v183) = v170;
  }
  v185 = 0;
  v20 = qword_1C7F2C0;
  v186 = 0;
  v187 = 1;
  v188 = 0;
  if ( (v173 & 0x100000000LL) != 0 )
    sub_182C690(qword_1C7F2C0, &v185, &v173);
  else
    LODWORD(v185) = v173;
  if ( (v175 & 0x100000000LL) != 0 )
  {
    sub_182C690(v20, &v187, &v175);
  }
  else
  {
    BYTE4(v187) &= ~1u;
    LODWORD(v187) = v175;
  }
  v189 = 0;
  v21 = qword_1C7F2C0;
  v190 = 0;
  v191 = 1;
  v192 = 0;
  if ( (v177 & 0x100000000LL) != 0 )
    sub_182C690(qword_1C7F2C0, &v189, &v177);
  else
    LODWORD(v189) = v177;
  if ( (v179 & 0x100000000LL) == 0 )
  {
    v22 = (_QWORD *)a1[3];
    BYTE4(v191) &= ~1u;
    LODWORD(v191) = v179;
    if ( v22 )
      goto LABEL_20;
LABEL_91:
    v148 = (_QWORD *)sub_186B270(0xC8u);
    v22 = v148 + 1;
    *v148 = 2;
    a1[3] = v148 + 1;
    v24 = v148 + 1;
    goto LABEL_22;
  }
  sub_182C690(v21, &v191, &v179);
  v22 = (_QWORD *)a1[3];
  if ( !v22 )
    goto LABEL_91;
LABEL_20:
  v23 = *((unsigned int *)v22 - 1);
  if ( (_DWORD)v23 == *((_DWORD *)v22 - 2) )
  {
    v112 = 3 * v23 + 1;
    v113 = v112 & 0xFFFFFFFE;
    v114 = v112 >> 1;
    v152 = v114;
    v115 = 32 * (v114 + v113) + 8;
    if ( 96 * (int)v23 + 8 >= (unsigned int)v115 || (unsigned int)v23 >= v114 )
    {
      v10 = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v172, "Overflow encountered when expanding vector");
      *v10 = (char *)off_1C63128;
      sub_2333C0(v10 + 1, v172);
      sub_233E40((__int64)v172);
      __cxa_throw(v10, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v116 = sub_186B270(v115);
    v117 = (int *)v12[3];
    v118 = (_DWORD *)v116;
    v22 = (_QWORD *)(v116 + 8);
    if ( v117 )
    {
      v119 = (unsigned int)*(v117 - 1);
      v120 = v22;
      v121 = 3 * v119;
      v118[1] = v119;
      v122 = v117;
      v123 = &v117[8 * v121];
      if ( v117 != v123 )
      {
        do
        {
          v124 = *v122;
          v125 = *((_BYTE *)v122 + 4);
          v122 += 24;
          v120 += 12;
          *((_DWORD *)v120 - 24) = v124;
          *((_BYTE *)v120 - 92) = v125 & 3 | *((_BYTE *)v120 - 92) & 0xFC;
          v126 = *((_QWORD *)v122 - 11);
          *((_QWORD *)v122 - 11) = 0;
          *(v120 - 11) = v126;
          v127 = *((_BYTE *)v122 - 76);
          *((_DWORD *)v120 - 20) = *(v122 - 20);
          *((_BYTE *)v120 - 76) = v127 & 3 | *((_BYTE *)v120 - 76) & 0xFC;
          v128 = *((_QWORD *)v122 - 9);
          *((_QWORD *)v122 - 9) = 0;
          *(v120 - 9) = v128;
          v129 = *((_BYTE *)v122 - 60);
          *((_DWORD *)v120 - 16) = *(v122 - 16);
          *((_BYTE *)v120 - 60) = v129 & 3 | *((_BYTE *)v120 - 60) & 0xFC;
          v130 = *((_QWORD *)v122 - 7);
          *((_QWORD *)v122 - 7) = 0;
          *(v120 - 7) = v130;
          v131 = *((_BYTE *)v122 - 44);
          *((_DWORD *)v120 - 12) = *(v122 - 12);
          *((_BYTE *)v120 - 44) = v131 & 3 | *((_BYTE *)v120 - 44) & 0xFC;
          v132 = *((_QWORD *)v122 - 5);
          *((_QWORD *)v122 - 5) = 0;
          *(v120 - 5) = v132;
          v133 = *((_BYTE *)v122 - 28);
          *((_DWORD *)v120 - 8) = *(v122 - 8);
          *((_BYTE *)v120 - 28) = v133 & 3 | *((_BYTE *)v120 - 28) & 0xFC;
          v134 = *((_QWORD *)v122 - 3);
          *((_QWORD *)v122 - 3) = 0;
          *(v120 - 3) = v134;
          v135 = *((_BYTE *)v122 - 12);
          *((_DWORD *)v120 - 4) = *(v122 - 4);
          *((_BYTE *)v120 - 12) = v135 & 3 | *((_BYTE *)v120 - 12) & 0xFC;
          v136 = *((_QWORD *)v122 - 1);
          *((_QWORD *)v122 - 1) = 0;
          *(v120 - 1) = v136;
        }
        while ( v123 != v122 );
      }
      v137 = (unsigned int)*(v117 - 1);
      if ( (_DWORD)v137 )
      {
        v153 = v22;
        v154 = v118;
        v157 = v11;
        v156 = v12;
        v138 = &v117[24 * v137];
        do
        {
          v139 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v117 + 16);
          sub_182CBA0(v139, v117 + 20);
          v140 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v117 + 8);
          sub_182CBA0(v140, v117 + 12);
          v141 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v117);
          v142 = v117 + 4;
          v117 += 24;
          sub_182CBA0(v141, v142);
        }
        while ( v117 != v138 );
        v12 = v156;
        v22 = v153;
        v118 = v154;
        v11 = v157;
        v117 = (int *)v156[3];
      }
      v155 = v118;
      sub_186B220(v117 - 2);
      v118 = v155;
      v24 = &v22[12 * (unsigned int)v155[1]];
    }
    else
    {
      *(_DWORD *)(v116 + 4) = 0;
      v24 = (_QWORD *)(v116 + 8);
    }
    v12[3] = v22;
    *v118 = v152;
  }
  else
  {
    v24 = &v22[12 * v23];
  }
LABEL_22:
  *(_DWORD *)v24 = v181[0];
  *((_BYTE *)v24 + 4) = v181[1] & 3 | *((_BYTE *)v24 + 4) & 0xFC;
  v25 = v182;
  v182 = 0;
  v24[1] = v25;
  *((_DWORD *)v24 + 4) = v183;
  *((_BYTE *)v24 + 20) = BYTE4(v183) & 3 | *((_BYTE *)v24 + 20) & 0xFC;
  v26 = v184;
  v184 = 0;
  v24[3] = v26;
  *((_DWORD *)v24 + 8) = v185;
  *((_BYTE *)v24 + 36) = BYTE4(v185) & 3 | *((_BYTE *)v24 + 36) & 0xFC;
  v27 = v186;
  v186 = 0;
  v24[5] = v27;
  *((_DWORD *)v24 + 12) = v187;
  *((_BYTE *)v24 + 52) = BYTE4(v187) & 3 | *((_BYTE *)v24 + 52) & 0xFC;
  v28 = v188;
  v188 = 0;
  v24[7] = v28;
  v29 = qword_1C7F2C0;
  *((_DWORD *)v24 + 16) = v189;
  *((_BYTE *)v24 + 68) = BYTE4(v189) & 3 | *((_BYTE *)v24 + 68) & 0xFC;
  v30 = v190;
  v190 = 0;
  v24[9] = v30;
  *((_DWORD *)v24 + 20) = v191;
  *((_BYTE *)v24 + 84) = BYTE4(v191) & 3 | *((_BYTE *)v24 + 84) & 0xFC;
  v31 = v192;
  v192 = 0;
  v24[11] = v31;
  ++*((_DWORD *)v22 - 1);
  sub_182CBA0(v29, &v189);
  sub_182CBA0(v29, &v191);
  v32 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v185);
  sub_182CBA0(v32, &v187);
  v33 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v181);
  sub_182CBA0(v33, &v183);
  v34 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v168);
  sub_182CBA0(v34, &v170);
  v35 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v177);
  sub_182CBA0(v35, &v179);
  v36 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v173);
  sub_182CBA0(v36, &v175);
  v173 = 0;
  v174 = 0;
  v175 = 1;
  v176 = 0;
  sub_182CBA0(qword_1C7F2C0, &v175);
  LODWORD(v175) = 1;
  BYTE4(v175) &= ~1u;
  v177 = 0;
  v178 = 0;
  v179 = 1;
  v180 = 0;
  v168 = 1;
  v169 = 0;
  v170 = 1;
  v171 = 0;
  sub_182CBA0(qword_1C7F2C0, &v170);
  BYTE4(v170) &= ~1u;
  v37 = qword_1C7F2C0;
  LODWORD(v170) = 1;
  *(_QWORD *)v181 = 0;
  v182 = 0;
  v183 = 1;
  v184 = 0;
  if ( (v168 & 0x100000000LL) != 0 )
    sub_182C690(qword_1C7F2C0, v181, &v168);
  else
    v181[0] = v168;
  if ( (v170 & 0x100000000LL) != 0 )
  {
    sub_182C690(v37, &v183, &v170);
  }
  else
  {
    BYTE4(v183) &= ~1u;
    LODWORD(v183) = v170;
  }
  v185 = 0;
  v38 = qword_1C7F2C0;
  v186 = 0;
  v187 = 1;
  v188 = 0;
  if ( (v173 & 0x100000000LL) != 0 )
    sub_182C690(qword_1C7F2C0, &v185, &v173);
  else
    LODWORD(v185) = v173;
  if ( (v175 & 0x100000000LL) != 0 )
  {
    sub_182C690(v38, &v187, &v175);
  }
  else
  {
    BYTE4(v187) &= ~1u;
    LODWORD(v187) = v175;
  }
  v189 = 0;
  v39 = qword_1C7F2C0;
  v190 = 0;
  v191 = 1;
  v192 = 0;
  if ( (v177 & 0x100000000LL) != 0 )
    sub_182C690(qword_1C7F2C0, &v189, &v177);
  else
    LODWORD(v189) = v177;
  if ( (v179 & 0x100000000LL) == 0 )
  {
    v40 = (_QWORD *)v12[4];
    BYTE4(v191) &= ~1u;
    LODWORD(v191) = v179;
    if ( v40 )
      goto LABEL_34;
LABEL_86:
    v147 = (_QWORD *)sub_186B270(0xC8u);
    v40 = v147 + 1;
    *v147 = 2;
    v12[4] = v147 + 1;
    v42 = v147 + 1;
    goto LABEL_36;
  }
  sub_182C690(v39, &v191, &v179);
  v40 = (_QWORD *)v12[4];
  if ( !v40 )
    goto LABEL_86;
LABEL_34:
  v41 = *((unsigned int *)v40 - 1);
  if ( (_DWORD)v41 == *((_DWORD *)v40 - 2) )
  {
    v81 = 3 * v41 + 1;
    v82 = v81 & 0xFFFFFFFE;
    v83 = v81 >> 1;
    v159 = v83;
    v84 = 32 * (v83 + v82) + 8;
    if ( 96 * (int)v41 + 8 >= (unsigned int)v84 || (unsigned int)v41 >= v83 )
    {
      v9 = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v172, "Overflow encountered when expanding vector");
      *v9 = (char *)off_1C63128;
      sub_2333C0(v9 + 1, v172);
      sub_233E40((__int64)v172);
      __cxa_throw(v9, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v85 = sub_186B270(v84);
    v86 = (int *)v12[4];
    v87 = (_DWORD *)v85;
    v40 = (_QWORD *)(v85 + 8);
    if ( v86 )
    {
      v88 = (unsigned int)*(v86 - 1);
      v89 = v40;
      v90 = 3 * v88;
      v87[1] = v88;
      v91 = v86;
      v92 = &v86[8 * v90];
      if ( v92 != v86 )
      {
        do
        {
          v93 = *v91;
          v94 = *((_BYTE *)v91 + 4);
          v91 += 24;
          v89 += 12;
          *((_DWORD *)v89 - 24) = v93;
          *((_BYTE *)v89 - 92) = v94 & 3 | *((_BYTE *)v89 - 92) & 0xFC;
          v95 = *((_QWORD *)v91 - 11);
          *((_QWORD *)v91 - 11) = 0;
          *(v89 - 11) = v95;
          v96 = *((_BYTE *)v91 - 76);
          *((_DWORD *)v89 - 20) = *(v91 - 20);
          *((_BYTE *)v89 - 76) = v96 & 3 | *((_BYTE *)v89 - 76) & 0xFC;
          v97 = *((_QWORD *)v91 - 9);
          *((_QWORD *)v91 - 9) = 0;
          *(v89 - 9) = v97;
          v98 = *((_BYTE *)v91 - 60);
          *((_DWORD *)v89 - 16) = *(v91 - 16);
          *((_BYTE *)v89 - 60) = v98 & 3 | *((_BYTE *)v89 - 60) & 0xFC;
          v99 = *((_QWORD *)v91 - 7);
          *((_QWORD *)v91 - 7) = 0;
          *(v89 - 7) = v99;
          v100 = *((_BYTE *)v91 - 44);
          *((_DWORD *)v89 - 12) = *(v91 - 12);
          *((_BYTE *)v89 - 44) = v100 & 3 | *((_BYTE *)v89 - 44) & 0xFC;
          v101 = *((_QWORD *)v91 - 5);
          *((_QWORD *)v91 - 5) = 0;
          *(v89 - 5) = v101;
          v102 = *((_BYTE *)v91 - 28);
          *((_DWORD *)v89 - 8) = *(v91 - 8);
          *((_BYTE *)v89 - 28) = v102 & 3 | *((_BYTE *)v89 - 28) & 0xFC;
          v103 = *((_QWORD *)v91 - 3);
          *((_QWORD *)v91 - 3) = 0;
          *(v89 - 3) = v103;
          v104 = *((_BYTE *)v91 - 12);
          *((_DWORD *)v89 - 4) = *(v91 - 4);
          *((_BYTE *)v89 - 12) = v104 & 3 | *((_BYTE *)v89 - 12) & 0xFC;
          v105 = *((_QWORD *)v91 - 1);
          *((_QWORD *)v91 - 1) = 0;
          *(v89 - 1) = v105;
        }
        while ( v92 != v91 );
      }
      v106 = (unsigned int)*(v86 - 1);
      if ( (_DWORD)v106 )
      {
        v160 = v40;
        v161 = v87;
        v164 = v11;
        v163 = v12;
        v107 = &v86[24 * v106];
        do
        {
          v108 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v86 + 16);
          sub_182CBA0(v108, v86 + 20);
          v109 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v86 + 8);
          sub_182CBA0(v109, v86 + 12);
          v110 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v86);
          v111 = v86 + 4;
          v86 += 24;
          sub_182CBA0(v110, v111);
        }
        while ( v86 != v107 );
        v12 = v163;
        v40 = v160;
        v87 = v161;
        v11 = v164;
        v86 = (int *)v163[4];
      }
      v162 = v87;
      sub_186B220(v86 - 2);
      v87 = v162;
      v42 = &v40[12 * (unsigned int)v162[1]];
    }
    else
    {
      *(_DWORD *)(v85 + 4) = 0;
      v42 = (_QWORD *)(v85 + 8);
    }
    v12[4] = v40;
    *v87 = v159;
  }
  else
  {
    v42 = &v40[12 * v41];
  }
LABEL_36:
  *(_DWORD *)v42 = v181[0];
  *((_BYTE *)v42 + 4) = v181[1] & 3 | *((_BYTE *)v42 + 4) & 0xFC;
  v43 = v182;
  v182 = 0;
  v42[1] = v43;
  *((_DWORD *)v42 + 4) = v183;
  *((_BYTE *)v42 + 20) = BYTE4(v183) & 3 | *((_BYTE *)v42 + 20) & 0xFC;
  v44 = v184;
  v184 = 0;
  v42[3] = v44;
  *((_DWORD *)v42 + 8) = v185;
  *((_BYTE *)v42 + 36) = BYTE4(v185) & 3 | *((_BYTE *)v42 + 36) & 0xFC;
  v45 = v186;
  v186 = 0;
  v42[5] = v45;
  *((_DWORD *)v42 + 12) = v187;
  *((_BYTE *)v42 + 52) = BYTE4(v187) & 3 | *((_BYTE *)v42 + 52) & 0xFC;
  v46 = v188;
  v188 = 0;
  v42[7] = v46;
  v47 = qword_1C7F2C0;
  *((_DWORD *)v42 + 16) = v189;
  *((_BYTE *)v42 + 68) = BYTE4(v189) & 3 | *((_BYTE *)v42 + 68) & 0xFC;
  v48 = v190;
  v190 = 0;
  v42[9] = v48;
  *((_DWORD *)v42 + 20) = v191;
  *((_BYTE *)v42 + 84) = BYTE4(v191) & 3 | *((_BYTE *)v42 + 84) & 0xFC;
  v49 = v192;
  v192 = 0;
  v42[11] = v49;
  ++*((_DWORD *)v40 - 1);
  sub_182CBA0(v47, &v189);
  sub_182CBA0(v47, &v191);
  v50 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v185);
  sub_182CBA0(v50, &v187);
  v51 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v181);
  sub_182CBA0(v51, &v183);
  v52 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v168);
  sub_182CBA0(v52, &v170);
  v53 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v177);
  sub_182CBA0(v53, &v179);
  v54 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v173);
  sub_182CBA0(v54, &v175);
  v55 = *(_QWORD *)(*v12 + 856LL);
  if ( v55 )
    ++*(_DWORD *)(v55 + 8);
  v56 = (_QWORD *)v12[8];
  if ( v56 )
  {
    v57 = *((_DWORD *)v56 - 1);
    if ( v57 == *((_DWORD *)v56 - 2) )
    {
      v76 = (3 * v57 + 1) >> 1;
      v77 = 8 * v76 + 8;
      if ( 8 * v57 + 8 >= (unsigned int)v77 || v57 >= v76 )
      {
        v8 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0((__int64 *)v181, "Overflow encountered when expanding vector");
        *v8 = (char *)off_1C63128;
        sub_2333C0(v8 + 1, v181);
        sub_233E40((__int64)v181);
        __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v78 = (unsigned int *)sub_186B300(v56 - 1, v77);
      v79 = v78[1];
      *v78 = v76;
      v12[8] = v78 + 2;
      *(_QWORD *)&v78[2 * v79 + 2] = v55;
      v78[1] = v79 + 1;
      v61 = (_QWORD *)v12[14];
      if ( v61 )
        goto LABEL_42;
LABEL_59:
      v80 = (_QWORD *)sub_186B270(0x18u);
      v61 = v80 + 1;
      *v80 = 2;
      v64 = 1;
      v12[14] = v61;
      v65 = v61;
      goto LABEL_44;
    }
    v58 = v57;
    v59 = v57 + 1;
    v60 = &v56[v58];
  }
  else
  {
    v150 = (_QWORD *)sub_186B270(0x18u);
    v56 = v150 + 1;
    *v150 = 2;
    v59 = 1;
    v12[8] = v56;
    v60 = v56;
  }
  *v60 = v55;
  *((_DWORD *)v56 - 1) = v59;
  v61 = (_QWORD *)v12[14];
  if ( !v61 )
    goto LABEL_59;
LABEL_42:
  v62 = *((_DWORD *)v61 - 1);
  if ( v62 == *((_DWORD *)v61 - 2) )
  {
    v72 = (3 * v62 + 1) >> 1;
    v73 = 8 * v72 + 8;
    if ( 8 * v62 + 8 >= (unsigned int)v73 || v62 >= v72 )
    {
      v7 = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0((__int64 *)v181, "Overflow encountered when expanding vector");
      *v7 = (char *)off_1C63128;
      sub_2333C0(v7 + 1, v181);
      sub_233E40((__int64)v181);
      __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v74 = (unsigned int *)sub_186B300(v61 - 1, v73);
    v75 = v74[1];
    v61 = v74 + 2;
    *v74 = v72;
    v12[14] = v74 + 2;
    LODWORD(v74) = v75;
    v65 = &v61[v75];
    v64 = (_DWORD)v74 + 1;
  }
  else
  {
    v63 = v62;
    v64 = v62 + 1;
    v65 = &v61[v63];
  }
LABEL_44:
  *v65 = 0;
  *((_DWORD *)v61 - 1) = v64;
  v66 = v12[6];
  if ( v66 )
    v67 = *(_DWORD *)(v66 - 4) - 1;
  else
    v67 = -1;
  sub_14B63F0(v167);
  v68 = v165;
  if ( v165 )
  {
    v69 = v166;
    v70 = (*(_DWORD *)(v165 + 8))-- == 1;
    if ( v70 )
      sub_15D7BC0(v69, v68);
  }
  if ( v11 )
  {
    v70 = (*(_DWORD *)(v11 + 8))-- == 1;
    if ( v70 )
      sub_15D7BC0(*(_QWORD *)v158, v11);
  }
  return v67;
}

