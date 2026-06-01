__int64 __fastcall sub_83F900(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rdi
  __int64 v6; // rax
  void ***v7; // r15
  __int64 v8; // rbx
  int *v9; // rsi
  void **v10; // rdi
  __int64 v11; // rbp
  char v12; // al
  __int64 v13; // rdx
  __int64 v14; // rbp
  int *v15; // rbx
  int v16; // r13d
  __int64 v17; // r12
  _QWORD *v18; // rax
  _QWORD *v19; // rcx
  _QWORD *v20; // rdx
  _QWORD *v21; // rbp
  _QWORD *v22; // rax
  int *v23; // r12
  __int64 v24; // rsi
  __int64 v25; // rdi
  unsigned int v26; // r12d
  int *v27; // rbp
  int *v28; // rbx
  __int64 v30; // rsi
  unsigned int v31; // eax
  void **v32; // rdi
  unsigned int v33; // ebp
  char v34; // al
  __int64 v35; // rdx
  __int64 v36; // r11
  char v37; // r12
  char v38; // bp
  int *v39; // r12
  int v40; // edx
  void *v41; // rdi
  char v42; // al
  __int64 v43; // rax
  _QWORD *v44; // r12
  int *v45; // r14
  __int64 v46; // rdx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rax
  _QWORD **v52; // rdx
  _QWORD **v53; // rcx
  bool v54; // dl
  bool v55; // cl
  __int64 v56; // rdx
  __int64 *v57; // r12
  __int64 *v58; // rbp
  __int64 v59; // rsi
  __int64 *v60; // r13
  __int64 *v61; // rbp
  __int64 v62; // rsi
  __int64 *v63; // r14
  __int64 *v64; // rbp
  __int64 v65; // rsi
  __int64 v66; // r12
  __int64 v67; // r14
  int v68; // edx
  void *v69; // rdi
  char v70; // al
  int *v71; // r13
  int *v72; // rbp
  __int64 v73; // r14
  int *v74; // rsi
  __int64 v75; // rdi
  int *v76; // r13
  int v77; // r13d
  __int64 v78; // rdx
  __int64 v79; // rcx
  int v80; // ebp
  bool v81; // r12
  int v82; // ebp
  _QWORD *v83; // rax
  bool v84; // al
  _BOOL8 v85; // rax
  void *v86; // rax
  void *v87; // rdx
  unsigned int v88; // ebp
  unsigned __int64 v89; // rdx
  void *v90; // rax
  __int64 *v91; // r13
  __int64 v92; // r14
  __int64 v93; // rdx
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // rdx
  __int64 v97; // rcx
  int *v98; // r13
  int *v99; // rbp
  __int64 v100; // r14
  int *v101; // rsi
  __int64 v102; // rdi
  int *v103; // r13
  int v104; // r13d
  __int64 v105; // rax
  unsigned int v106; // eax
  int v107; // esi
  _BOOL8 v108; // rax
  unsigned __int64 v109; // rdx
  unsigned __int64 v110; // rax
  void *v111; // rax
  __int64 v112; // rax
  bool v113; // zf
  __int64 v114; // rax
  int v115; // eax
  __int64 v116; // rax
  int v117; // eax
  __int64 v118; // rsi
  __int64 v119; // rax
  int v120; // eax
  __int64 v121; // rax
  int v122; // eax
  unsigned __int8 v123; // si
  void *v124; // rax
  unsigned int v125; // eax
  __int64 *v126; // r14
  __int64 *v127; // rbp
  __int64 v128; // rsi
  _QWORD *v129; // rdi
  _QWORD *v130; // rax
  __int64 v131; // rdx
  __int64 v132; // rcx
  _QWORD *v133; // rax
  __int64 *v134; // rdi
  __int64 *v135; // rbp
  __int64 v136; // rax
  void **v137; // rax
  __int64 v138; // rdx
  void **v139; // rbx
  void **v140; // rbp
  __int64 *v141; // rax
  __int64 v142; // rdx
  __int64 *v143; // rbx
  void **v144; // r13
  __int64 *v145; // rbp
  __int64 v148; // [rsp+20h] [rbp-288h]
  __int64 v151; // [rsp+38h] [rbp-270h]
  void **v153; // [rsp+50h] [rbp-258h]
  void **v154; // [rsp+50h] [rbp-258h]
  unsigned int v155; // [rsp+58h] [rbp-250h]
  __int64 v156; // [rsp+60h] [rbp-248h]
  __int64 v157; // [rsp+60h] [rbp-248h]
  __int64 v158; // [rsp+70h] [rbp-238h]
  __int64 v159; // [rsp+70h] [rbp-238h]
  void **v160; // [rsp+80h] [rbp-228h]
  __int64 *v161; // [rsp+88h] [rbp-220h]
  __int64 v162; // [rsp+98h] [rbp-210h] BYREF
  _QWORD *v163; // [rsp+A0h] [rbp-208h] BYREF
  __int64 *v164; // [rsp+A8h] [rbp-200h]
  void *v165; // [rsp+C0h] [rbp-1E8h] BYREF
  __int64 *v166; // [rsp+C8h] [rbp-1E0h]
  void *v167; // [rsp+E0h] [rbp-1C8h] BYREF
  __int64 *v168; // [rsp+E8h] [rbp-1C0h]
  unsigned int v169; // [rsp+100h] [rbp-1A8h] BYREF
  _QWORD *v170; // [rsp+108h] [rbp-1A0h] BYREF
  _QWORD **v171; // [rsp+110h] [rbp-198h]
  unsigned int v172; // [rsp+140h] [rbp-168h] BYREF
  char v173; // [rsp+144h] [rbp-164h]
  _QWORD *v174; // [rsp+148h] [rbp-160h] BYREF
  _QWORD **v175; // [rsp+150h] [rbp-158h]
  int *v176; // [rsp+180h] [rbp-128h] BYREF
  __int64 v177; // [rsp+188h] [rbp-120h]
  _BYTE v178[280]; // [rsp+190h] [rbp-118h] BYREF

  v5 = *(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v5 + 16) - 56 > 1 )
    v5 = sub_B0D320(v5);
  v6 = *(unsigned int *)(v5 + 20);
  v151 = *(_QWORD *)(v5 + 32);
  if ( *(_DWORD *)a4 != 8 )
  {
    v26 = 0;
    sub_A2E130(a1, a2, 110, 0);
    return v26;
  }
  v176 = (int *)v178;
  v177 = 0x400000000LL;
  if ( !(_DWORD)v6 )
  {
    v173 &= ~1u;
    v174 = nullptr;
    LODWORD(v175) = 0;
    v172 = 8;
    v130 = (_QWORD *)operator new[](8u);
    *v130 = 0;
    v19 = v130 + 1;
    goto LABEL_242;
  }
  v7 = (void ***)(v151 & 0xFFFFFFFFFFFFFFF0LL);
  v148 = 56 * v6;
  v155 = a3 - 19;
  v8 = 0;
  while ( 1 )
  {
    sub_6A4260((__int64)&v169, (int *)(v8 + *(_QWORD *)(a4 + 8)));
    v9 = (int *)(v8 + *(_QWORD *)(a5 + 8));
    sub_6A4260((__int64)&v172, v9);
    v10 = *v7;
    v11 = *(_QWORD *)((unsigned __int64)(*v7)[1] & 0xFFFFFFFFFFFFFFF0LL);
    v12 = *(_BYTE *)(v11 + 16);
    if ( v12 == 13 )
    {
      if ( (((*(_WORD *)(v11 + 18) >> 3) + 77) & 0x1FFu) <= 0x13 )
        goto LABEL_30;
      goto LABEL_8;
    }
    if ( v12 == 46 )
      break;
    if ( v12 == 10 )
      goto LABEL_30;
LABEL_8:
    if ( (unsigned __int8)sub_B07F70(v10) )
      goto LABEL_53;
LABEL_9:
    if ( v172 > 1 )
      sub_69F740((__int64)&v172);
    if ( v169 > 1 )
    {
      v8 += 56;
      sub_69F740((__int64)&v169);
      if ( v148 == v8 )
      {
LABEL_13:
        v14 = (unsigned int)v177;
        v173 &= ~1u;
        v174 = nullptr;
        v15 = v176;
        v16 = v177;
        LODWORD(v175) = 0;
        v172 = 8;
        v17 = 14LL * (unsigned int)v177;
        v18 = (_QWORD *)operator new[](v17 * 4 + 8);
        *v18 = v14;
        v19 = v18 + 1;
        if ( v14 )
        {
          v20 = &v18[(unsigned __int64)v17 / 2 + 1];
          v21 = v18 + 1;
          v22 = v18 + 1;
          do
          {
            *((_BYTE *)v22 + 4) &= ~1u;
            v22 += 7;
            *((_DWORD *)v22 - 14) = 0;
          }
          while ( v20 != v22 );
          v174 = v19;
          v23 = &v15[v17];
          LODWORD(v175) = v16;
          do
          {
            v24 = (__int64)v15;
            v25 = (__int64)v21;
            v15 += 14;
            v21 += 7;
            sub_6A63E0(v25, v24);
          }
          while ( v15 != v23 );
          goto LABEL_18;
        }
LABEL_242:
        v174 = v19;
        LODWORD(v175) = 0;
LABEL_18:
        sub_6A01B0(a4, (__int64)&v172);
        if ( v172 > 1 )
          sub_69F740((__int64)&v172);
        v26 = 1;
        goto LABEL_21;
      }
    }
    else
    {
      v8 += 56;
      if ( v148 == v8 )
        goto LABEL_13;
    }
  }
  v43 = sub_B14A40(*(_QWORD *)((unsigned __int64)(*v7)[1] & 0xFFFFFFFFFFFFFFF0LL));
  if ( (*(_BYTE *)(v43 + 74) & 1) == 0 && *(_QWORD *)(v43 + 128) <= 7u || *(char *)(sub_B14A40(v11) + 76) < 0 )
  {
    v10 = *v7;
    if ( !(unsigned __int8)sub_B07F70(*v7) )
      goto LABEL_9;
LABEL_53:
    v44 = (_QWORD *)sub_2575D20(v10, v9, v13);
    if ( v170 == v44 )
      sub_257CF50(&v163, &v170);
    else
      sub_25768A0(&v163, &v170);
    if ( !(unsigned __int8)sub_82E1B0(a1, a2, &v163, a3, &v174) )
    {
      sub_A2E130(a1, a2, 110, 0);
      sub_5FF3B0((__int64 *)&v163);
      goto LABEL_224;
    }
    if ( (unsigned int)v177 < (unsigned __int64)HIDWORD(v177) )
    {
      v45 = &v176[14 * (unsigned int)v177];
      if ( v44 == v163 )
        sub_257CF50(&v165, &v163);
      else
        sub_25768A0(&v165, &v163);
      *((_BYTE *)v45 + 4) &= ~1u;
      *v45 = 0;
      v153 = (void **)(v45 + 2);
      v156 = sub_2575D00(&v165, &v163, v46);
      sub_2580BE0(&v167, 0.0);
      sub_257EDC0(v45 + 2, &v167, v156);
      sub_25769A0(&v167);
      *v45 = 3;
      if ( v44 == v165 )
        sub_257D000(&v167, &v165, v47, v48);
      else
        sub_2576960(&v167, &v165);
      if ( v44 == *((_QWORD **)v45 + 1) )
      {
        if ( v167 == v44 )
        {
          if ( v153 == &v167 )
            goto LABEL_100;
          v129 = *((_QWORD **)v45 + 2);
          if ( v129 )
            sub_832F90(v129, (__int64)&v165, v49);
          *((_QWORD *)v45 + 2) = 0;
          sub_257D000(v153, &v167, v49, v50);
          goto LABEL_64;
        }
        if ( v153 != &v167 )
          goto LABEL_124;
      }
      else
      {
        if ( v167 != v44 )
        {
          sub_2576350(v153, &v167, v49, v50);
          goto LABEL_64;
        }
        if ( v153 == &v167 )
        {
LABEL_100:
          v63 = v168;
          if ( v168 )
          {
            v64 = &v168[3 * *(v168 - 1)];
            if ( v168 == v64 )
            {
              v65 = 0;
            }
            else
            {
              do
              {
                v64 -= 3;
                sub_5FF3B0(v64);
              }
              while ( v63 != v64 );
              v65 = 24 * *(v63 - 1);
            }
            operator delete[](v63 - 1, v65 + 8);
          }
LABEL_66:
          if ( v44 == v165 )
          {
            v60 = v166;
            if ( v166 )
            {
              v61 = &v166[3 * *(v166 - 1)];
              if ( v166 == v61 )
              {
                v62 = 0;
              }
              else
              {
                do
                {
                  v61 -= 3;
                  sub_5FF3B0(v61);
                }
                while ( v60 != v61 );
                v62 = 24 * *(v60 - 1);
              }
              operator delete[](v60 - 1, v62 + 8);
            }
          }
          else
          {
            sub_25769A0(&v165);
          }
          LODWORD(v177) = v177 + 1;
LABEL_69:
          if ( v44 == v163 )
          {
            v57 = v164;
            if ( v164 )
            {
              v58 = &v164[3 * *(v164 - 1)];
              if ( v164 == v58 )
              {
                v59 = 0;
              }
              else
              {
                do
                {
                  v58 -= 3;
                  sub_5FF3B0(v58);
                }
                while ( v57 != v58 );
                v59 = 24 * *(v57 - 1);
              }
              operator delete[](v57 - 1, v59 + 8);
            }
          }
          else
          {
            sub_25769A0(&v163);
          }
          goto LABEL_9;
        }
LABEL_124:
        sub_5FF3B0((__int64 *)v153);
        if ( v44 == v167 )
          sub_257D000(v153, &v167, v78, v79);
        else
          sub_2576960(v153, &v167);
LABEL_64:
        if ( v44 == v167 )
          goto LABEL_100;
      }
      sub_25769A0(&v167);
      goto LABEL_66;
    }
    v91 = (__int64 *)&v165;
    v157 = sub_25D5F70(&v176, v178, 0, 56, &v162);
    v92 = v157 + 56LL * (unsigned int)v177;
    if ( v44 == v163 )
      sub_257CF50(&v165, &v163);
    else
      sub_25768A0(&v165, &v163);
    *(_BYTE *)(v92 + 4) &= ~1u;
    *(_DWORD *)v92 = 0;
    v154 = (void **)(v92 + 8);
    v158 = sub_2575D00(&v165, &v163, v93);
    sub_2580BE0(&v167, 0.0);
    sub_257EDC0(v92 + 8, &v167, v158);
    sub_25769A0(&v167);
    *(_DWORD *)v92 = 3;
    if ( v44 == v165 )
      sub_257D000(&v167, &v165, v94, v95);
    else
      sub_2576960(&v167, &v165);
    if ( v44 != *(_QWORD **)(v92 + 8) )
    {
      if ( v167 != v44 )
      {
        sub_2576350(v154, &v167, v96, v97);
        goto LABEL_161;
      }
      if ( v154 == &v167 )
      {
LABEL_230:
        v126 = v168;
        if ( v168 )
        {
          v127 = &v168[3 * *(v168 - 1)];
          if ( v168 == v127 )
          {
            v128 = 0;
          }
          else
          {
            do
            {
              v127 -= 3;
              sub_5FF3B0(v127);
            }
            while ( v126 != v127 );
            v128 = 24 * *(v126 - 1);
          }
          operator delete[](v126 - 1, v128 + 8);
        }
        goto LABEL_163;
      }
      sub_25769A0(v154);
      v133 = v167;
LABEL_252:
      if ( v133 != v44 )
        goto LABEL_253;
      sub_257D000(v154, &v167, v131, v132);
      goto LABEL_161;
    }
    if ( v167 == v44 )
    {
      if ( v154 == &v167 )
        goto LABEL_230;
      v137 = *(void ***)(v92 + 16);
      if ( v137 )
      {
        v138 = (__int64)*(v137 - 1);
        if ( v137 != &v137[3 * v138] )
        {
          v159 = v8;
          v139 = *(void ***)(v92 + 16);
          v140 = &v137[3 * v138];
          do
          {
            v140 -= 3;
            if ( v44 == *v140 )
            {
              v141 = (__int64 *)v140[1];
              if ( v141 )
              {
                v142 = *(v141 - 1);
                if ( v141 != &v141[3 * v142] )
                {
                  v160 = v139;
                  v143 = &v141[3 * v142];
                  v161 = v91;
                  v144 = v140;
                  v145 = (__int64 *)v140[1];
                  do
                  {
                    v143 -= 3;
                    sub_5FF3B0(v143);
                  }
                  while ( v145 != v143 );
                  v141 = v145;
                  v139 = v160;
                  v140 = v144;
                  v91 = v161;
                  v142 = *(v141 - 1);
                }
                operator delete[](v141 - 1, 24 * v142 + 8);
              }
              v140[1] = nullptr;
            }
            else
            {
              sub_25769A0(v140);
            }
          }
          while ( v139 != v140 );
          v137 = v139;
          v8 = v159;
          v138 = (__int64)*(v137 - 1);
        }
        operator delete[](v137 - 1, 24 * v138 + 8);
      }
      *(_QWORD *)(v92 + 16) = 0;
      sub_257D000(v154, &v167, v96, v97);
      goto LABEL_161;
    }
    if ( v154 != &v167 )
    {
      v134 = *(__int64 **)(v92 + 16);
      if ( v134 )
      {
        if ( v134 == &v134[3 * *(v134 - 1)] )
        {
          v136 = 0;
        }
        else
        {
          v135 = &v134[3 * *(v134 - 1)];
          do
          {
            v135 -= 3;
            sub_5FF3B0(v135);
          }
          while ( v134 != v135 );
          v136 = 24 * *(v134 - 1);
        }
        operator delete[](v134 - 1, v136 + 8);
        v133 = v167;
        *(_QWORD *)(v92 + 16) = 0;
        goto LABEL_252;
      }
LABEL_253:
      sub_2576960(v154, &v167);
LABEL_161:
      if ( v44 == v167 )
        goto LABEL_230;
    }
    sub_25769A0(&v167);
LABEL_163:
    sub_5FF3B0(v91);
    v98 = v176;
    v99 = &v176[14 * (unsigned int)v177];
    if ( v176 != v99 )
    {
      v100 = v157;
      do
      {
        v101 = v98;
        v102 = v100;
        v98 += 14;
        v100 += 56;
        sub_69F700(v102, v101);
      }
      while ( v99 != v98 );
      v103 = v176;
      v99 = &v176[14 * (unsigned int)v177];
      if ( v176 != v99 )
      {
        do
        {
          v99 -= 14;
          if ( (unsigned int)*v99 > 1 )
            sub_69F740((__int64)v99);
        }
        while ( v103 != v99 );
        v99 = v176;
      }
    }
    v104 = v162;
    if ( v99 != (int *)v178 )
      free(v99);
    LODWORD(v177) = v177 + 1;
    HIDWORD(v177) = v104;
    v176 = (int *)v157;
    goto LABEL_69;
  }
LABEL_30:
  v30 = v151;
  v31 = sub_70B280(*(_QWORD *)(a1 + 16), v151);
  v32 = *v7;
  v33 = v31;
  v34 = sub_B0FF70(*v7);
  LODWORD(v166) = v33;
  v37 = v34;
  if ( v33 <= 0x40 )
  {
    BYTE4(v166) = v34;
    v165 = nullptr;
    if ( v155 > 1 )
      goto LABEL_32;
LABEL_76:
    if ( v169 != 2 )
    {
      v51 = sub_2575D20(v32, v30, v35);
      v52 = &v170;
      if ( v170 == (_QWORD *)v51 )
        v52 = v171;
      v53 = &v174;
      v54 = (*((_BYTE *)v52 + 20) & 7) != 3;
      if ( (_QWORD *)v51 == v174 )
        v53 = v175;
      v55 = (*((_BYTE *)v53 + 20) & 7) != 3;
      if ( a3 != 19 )
      {
        v56 = v55 | (unsigned __int8)v54;
        if ( (unsigned int)v166 > 0x40 )
          goto LABEL_83;
        v87 = (void *)((0xFFFFFFFFFFFFFFFFLL >> -(char)v166) & v56);
        if ( !(_DWORD)v166 )
          v87 = nullptr;
        v165 = v87;
LABEL_39:
        if ( (unsigned int)v177 >= (unsigned __int64)HIDWORD(v177) )
        {
          v66 = sub_25D5F70(&v176, v178, 0, 56, &v163);
          v67 = v66 + 56LL * (unsigned int)v177;
          LODWORD(v168) = (_DWORD)v166;
          if ( (unsigned int)v166 > 0x40 )
            sub_2585B30(&v167);
          else
            v167 = v165;
          BYTE4(v168) = BYTE4(v166);
          *(_QWORD *)(v67 + 8) = 0;
          *(_BYTE *)(v67 + 4) &= ~1u;
          *(_DWORD *)v67 = 2;
          v68 = (int)v168;
          v69 = v167;
          v70 = BYTE4(v168);
          LODWORD(v168) = 0;
          *(_DWORD *)(v67 + 16) = v68;
          *(_QWORD *)(v67 + 8) = v69;
          *(_BYTE *)(v67 + 20) = v70;
          if ( (unsigned int)v168 > 0x40 && v69 )
            operator delete[](v69);
          v71 = v176;
          v72 = &v176[14 * (unsigned int)v177];
          if ( v176 != v72 )
          {
            v73 = v66;
            do
            {
              v74 = v71;
              v75 = v73;
              v71 += 14;
              v73 += 56;
              sub_69F700(v75, v74);
            }
            while ( v72 != v71 );
            v76 = v176;
            v72 = &v176[14 * (unsigned int)v177];
            if ( v176 != v72 )
            {
              do
              {
                v72 -= 14;
                if ( (unsigned int)*v72 > 1 )
                  sub_69F740((__int64)v72);
              }
              while ( v76 != v72 );
              v72 = v176;
            }
          }
          v77 = (int)v163;
          if ( v72 != (int *)v178 )
            free(v72);
          LODWORD(v177) = v177 + 1;
          v176 = (int *)v66;
          HIDWORD(v177) = v77;
        }
        else
        {
          v39 = &v176[14 * (unsigned int)v177];
          LODWORD(v168) = (_DWORD)v166;
          if ( (unsigned int)v166 > 0x40 )
            sub_2585B30(&v167);
          else
            v167 = v165;
          BYTE4(v168) = BYTE4(v166);
          *((_QWORD *)v39 + 1) = 0;
          *((_BYTE *)v39 + 4) &= ~1u;
          *v39 = 2;
          v40 = (int)v168;
          v41 = v167;
          v42 = BYTE4(v168);
          LODWORD(v168) = 0;
          v39[4] = v40;
          *((_QWORD *)v39 + 1) = v41;
          *((_BYTE *)v39 + 20) = v42;
          if ( (unsigned int)v168 > 0x40 && v41 )
            operator delete[](v41);
          LODWORD(v177) = v177 + 1;
        }
        if ( (unsigned int)v166 > 0x40 && v165 )
          operator delete[](v165);
        goto LABEL_9;
      }
      v56 = v55 & (unsigned __int8)v54;
      if ( (unsigned int)v166 <= 0x40 )
      {
        v89 = (0xFFFFFFFFFFFFFFFFLL >> -(char)v166) & v56;
        v90 = nullptr;
        if ( (_DWORD)v166 )
          v90 = (void *)v89;
        v165 = v90;
        goto LABEL_39;
      }
LABEL_83:
      *(_QWORD *)v165 = v56;
LABEL_84:
      memset((char *)v165 + 8, 0, 8 * (unsigned int)(((unsigned __int64)(unsigned int)v166 + 63) >> 6) - 8);
      goto LABEL_39;
    }
    v80 = (int)v171;
    if ( (unsigned int)v171 <= 0x40 )
    {
      v81 = v170 == nullptr;
      goto LABEL_128;
    }
    v81 = 0;
    if ( v80 - (unsigned int)sub_2587400(&v170) > 0x40 )
    {
LABEL_128:
      v82 = (int)v175;
      if ( (unsigned int)v175 > 0x40 )
        goto LABEL_144;
    }
    else
    {
      v82 = (int)v175;
      v81 = *v170 == 0;
      if ( (unsigned int)v175 > 0x40 )
      {
LABEL_144:
        v88 = v82 - sub_2587400(&v174);
        v84 = 0;
        if ( v88 <= 0x40 )
        {
          v83 = (_QWORD *)*v174;
LABEL_130:
          v84 = v83 == nullptr;
        }
        if ( a3 == 19 )
        {
          v85 = !v81 && !v84;
          if ( (unsigned int)v166 <= 0x40 )
            goto LABEL_133;
        }
        else
        {
          v85 = !v81 || !v84;
          if ( (unsigned int)v166 <= 0x40 )
          {
LABEL_133:
            v86 = (void *)((0xFFFFFFFFFFFFFFFFLL >> -(char)v166) & v85);
            if ( !(_DWORD)v166 )
              v86 = nullptr;
            v165 = v86;
            goto LABEL_39;
          }
        }
        *(_QWORD *)v165 = v85;
        goto LABEL_84;
      }
    }
    v83 = v174;
    goto LABEL_130;
  }
  v30 = 0;
  v32 = &v165;
  sub_2585A50(&v165, 0, 0);
  BYTE4(v166) = v37;
  if ( v155 <= 1 )
    goto LABEL_76;
LABEL_32:
  if ( a3 - 9 <= 6 )
  {
    if ( v169 == 2 )
    {
      switch ( a3 )
      {
        case 0xAu:
          if ( BYTE4(v171) )
            v125 = (unsigned int)sub_25867A0(&v170, &v174) >> 31;
          else
            v125 = (unsigned int)sub_2586820(&v170, &v174) >> 31;
          goto LABEL_219;
        case 0xBu:
          if ( BYTE4(v171) )
            LOBYTE(v118) = (int)sub_25867A0(&v170, &v174) > 0;
          else
            LOBYTE(v118) = (int)sub_2586820(&v170, &v174) > 0;
          goto LABEL_216;
        case 0xCu:
          if ( BYTE4(v171) )
            LOBYTE(v118) = (int)sub_25867A0(&v170, &v174) <= 0;
          else
            LOBYTE(v118) = (int)sub_2586820(&v170, &v174) <= 0;
          goto LABEL_216;
        case 0xDu:
          if ( BYTE4(v171) )
            LOBYTE(v118) = (int)sub_25867A0(&v170, &v174) >= 0;
          else
            LOBYTE(v118) = (int)sub_2586820(&v170, &v174) >= 0;
LABEL_216:
          v118 = (unsigned __int8)v118;
          sub_821DE0(&v165, (unsigned __int8)v118);
          break;
        case 0xEu:
          if ( (unsigned int)v171 <= 0x40 )
            LOBYTE(v125) = v170 == v174;
          else
            LOBYTE(v125) = sub_2586760(&v170, &v174);
LABEL_219:
          v118 = (unsigned __int8)v125;
          sub_821DE0(&v165, (unsigned __int8)v125);
          break;
        case 0xFu:
          if ( (unsigned int)v171 <= 0x40 )
            v123 = v170 == v174;
          else
            v123 = sub_2586760(&v170, &v174);
          v118 = v123 ^ 1u;
          sub_821DE0(&v165, v118);
          break;
      }
      if ( (unsigned int)v166 <= 0x40 )
      {
        v124 = (void *)((0xFFFFFFFFFFFFFFFFLL >> -(char)v166) & ~(unsigned __int64)v165);
        if ( !(_DWORD)v166 )
          v124 = nullptr;
        v165 = v124;
        goto LABEL_182;
      }
    }
    else
    {
      switch ( a3 )
      {
        case 0xAu:
          v112 = sub_2575D20(v32, v30, v35);
          if ( v170 == (_QWORD *)v112 )
            v113 = (unsigned int)sub_257E370(&v170, &v174) == 0;
          else
            v113 = (unsigned int)sub_2577560(&v170, &v174) == 0;
          goto LABEL_191;
        case 0xBu:
          v116 = sub_2575D20(v32, v30, v35);
          if ( v170 == (_QWORD *)v116 )
            v117 = sub_257E370(&v170, &v174);
          else
            v117 = sub_2577560(&v170, &v174);
          v113 = v117 == 2;
          goto LABEL_191;
        case 0xCu:
          v105 = sub_2575D20(v32, v30, v35);
          if ( v170 == (_QWORD *)v105 )
            v106 = sub_257E370(&v170, &v174);
          else
            v106 = sub_2577560(&v170, &v174);
          goto LABEL_177;
        case 0xDu:
          v114 = sub_2575D20(v32, v30, v35);
          if ( v170 == (_QWORD *)v114 )
            v115 = sub_257E370(&v170, &v174);
          else
            v115 = sub_2577560(&v170, &v174);
          v106 = v115 - 1;
LABEL_177:
          v107 = (int)v166;
          v108 = v106 <= 1;
          if ( (unsigned int)v166 <= 0x40 )
            goto LABEL_178;
          goto LABEL_192;
        case 0xEu:
          v119 = sub_2575D20(v32, v30, v35);
          if ( v170 == (_QWORD *)v119 )
            v120 = sub_257E370(&v170, &v174);
          else
            v120 = sub_2577560(&v170, &v174);
          v113 = v120 == 1;
LABEL_191:
          v107 = (int)v166;
          v108 = v113;
          if ( (unsigned int)v166 > 0x40 )
            goto LABEL_192;
          goto LABEL_178;
        case 0xFu:
          v121 = sub_2575D20(v32, v30, v35);
          if ( v170 == (_QWORD *)v121 )
            v122 = sub_257E370(&v170, &v174);
          else
            v122 = sub_2577560(&v170, &v174);
          v107 = (int)v166;
          v108 = v122 != 1;
          if ( (unsigned int)v166 <= 0x40 )
          {
LABEL_178:
            v109 = 0xFFFFFFFFFFFFFFFFLL >> -(char)v107;
            if ( v107 )
            {
              v110 = ~(v109 & v108);
LABEL_180:
              v111 = (void *)(v109 & v110);
LABEL_181:
              v165 = v111;
              goto LABEL_182;
            }
LABEL_248:
            v111 = nullptr;
            goto LABEL_181;
          }
LABEL_192:
          *(_QWORD *)v165 = v108;
          memset((char *)v165 + 8, 0, 8 * (unsigned int)(((unsigned __int64)(unsigned int)v166 + 63) >> 6) - 8);
          v118 = (unsigned int)v166;
          if ( (unsigned int)v166 <= 0x40 )
          {
            v110 = ~(unsigned __int64)v165;
            v109 = 0xFFFFFFFFFFFFFFFFLL >> -(char)v166;
            if ( (_DWORD)v166 )
              goto LABEL_180;
            goto LABEL_248;
          }
          break;
        default:
          *(_QWORD *)&dword_0 = v36;
          BUG();
      }
    }
    sub_25869C0(&v165, v118);
LABEL_182:
    sub_25860D0(&v165);
    goto LABEL_39;
  }
  LODWORD(v168) = (_DWORD)v175;
  if ( (unsigned int)v175 > 0x40 )
    sub_2585B30(&v167);
  else
    v167 = v174;
  BYTE4(v168) = BYTE4(v175);
  v38 = sub_83E020(a1, a2, (__int64)&v170, a3, (__int64)&v167, (__int64)&v165);
  if ( (unsigned int)v168 > 0x40 && v167 )
    operator delete[](v167);
  if ( v38 )
    goto LABEL_39;
  sub_A2E130(a1, a2, 110, 0);
  if ( (unsigned int)v166 > 0x40 && v165 )
    operator delete[](v165);
LABEL_224:
  if ( v172 > 1 )
    sub_69F740((__int64)&v172);
  if ( v169 > 1 )
    sub_69F740((__int64)&v169);
  v26 = 0;
LABEL_21:
  v27 = v176;
  v28 = &v176[14 * (unsigned int)v177];
  if ( v176 != v28 )
  {
    do
    {
      v28 -= 14;
      if ( (unsigned int)*v28 > 1 )
        sub_69F740((__int64)v28);
    }
    while ( v27 != v28 );
    v28 = v176;
  }
  if ( v28 != (int *)v178 )
    free(v28);
  return v26;
}

