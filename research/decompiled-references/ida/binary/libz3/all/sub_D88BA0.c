__int64 __fastcall sub_D88BA0(_QWORD *a1, __int64 a2, __int64 a3)
{
  char v3; // al
  unsigned int v7; // ebp
  __int64 v8; // rsi
  int v9; // eax
  __int64 result; // rax
  unsigned int v11; // eax
  unsigned int v12; // edx
  __int64 v13; // rax
  __int64 v14; // r13
  int v15; // r12d
  __int64 v16; // rdx
  unsigned int v17; // r12d
  int v18; // r8d
  int v19; // r9d
  __int64 v20; // rax
  int v21; // eax
  int v22; // eax
  __int64 v23; // rsi
  __int64 v24; // rdi
  bool v25; // zf
  __int64 v26; // rbp
  __int64 v27; // rax
  int v28; // r8d
  int v29; // r9d
  _QWORD *v30; // rdx
  unsigned int v31; // r8d
  unsigned __int64 v32; // r13
  __int64 *v33; // r12
  __int64 v34; // rsi
  __int64 v35; // rdi
  __int64 v36; // rsi
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rdi
  __int64 v40; // rcx
  __int64 v41; // rbp
  int v42; // eax
  __int64 v43; // rcx
  __int64 v44; // rsi
  __int64 v45; // rcx
  __int64 v46; // r13
  __int64 v47; // rcx
  __int64 v48; // rsi
  __int64 v49; // rax
  __int64 v50; // rdi
  __int64 v51; // rsi
  __int64 v52; // r12
  int v53; // eax
  _QWORD *v54; // rdx
  unsigned int v55; // eax
  __int64 v56; // rcx
  int v57; // eax
  __int64 *v58; // rcx
  __int64 v59; // rdx
  _QWORD *v60; // rax
  __int64 v61; // rbp
  __int64 v62; // rsi
  __int64 v63; // rdi
  int v64; // ecx
  __int64 v65; // rdi
  int v66; // edx
  __int64 v67; // rsi
  __int64 v68; // rcx
  __int64 v69; // rsi
  __int64 v70; // rbp
  _QWORD *v71; // rcx
  unsigned int v72; // edx
  __int64 v73; // rsi
  int v74; // edx
  _QWORD *v75; // rax
  int v76; // ecx
  unsigned int v77; // r8d
  size_t v78; // rsi
  unsigned int *v79; // rax
  __int64 v80; // rcx
  unsigned int v81; // r12d
  size_t v82; // rsi
  unsigned int *v83; // rax
  __int64 v84; // rax
  int v85; // edx
  __int64 v86; // rax
  __int64 v87; // rdx
  __int64 v88; // rsi
  __int64 v89; // rdi
  __int64 v90; // rax
  __int64 v91; // r12
  __int64 v92; // rsi
  __int64 v93; // rdi
  _QWORD *v94; // rdx
  __int64 v95; // r12
  _QWORD *v96; // rax
  int v97; // eax
  __int64 *v98; // rcx
  _QWORD *v99; // rdx
  unsigned int v100; // r14d
  unsigned __int64 v101; // r13
  __int64 *v102; // r12
  __int64 v103; // rsi
  __int64 v104; // rdi
  __int64 v105; // rax
  __int64 v106; // rsi
  __int64 v107; // rdi
  __int64 v108; // rsi
  __int64 v109; // rdi
  unsigned int v110; // r8d
  unsigned __int64 v111; // r13
  __int64 *v112; // r12
  __int64 v113; // rsi
  __int64 v114; // rdi
  __int64 v115; // r12
  _QWORD *v116; // rdx
  int v117; // eax
  _QWORD *v118; // rcx
  __int64 v119; // rax
  unsigned __int64 v120; // r12
  __int64 *v121; // r13
  __int64 v122; // rsi
  __int64 v123; // rdi
  __int64 v124; // rdx
  __int64 v125; // rax
  __int64 v126; // rdi
  __int64 v127; // rsi
  __int64 v128; // r12
  int v129; // eax
  _QWORD *v130; // rdx
  unsigned int v131; // eax
  __int64 v132; // rcx
  int v133; // eax
  __int64 *v134; // rcx
  __int64 v135; // rsi
  __int64 v136; // rdi
  int v137; // ecx
  __int64 v138; // rsi
  __int64 v139; // rdi
  __int64 v140; // rsi
  __int64 v141; // rdi
  __int64 v142; // r12
  _QWORD *v143; // rcx
  int v144; // eax
  __int64 v145; // rsi
  __int64 v146; // rdi
  __int64 v147; // rsi
  int v148; // ecx
  __int64 v149; // rdi
  unsigned int v150; // r13d
  unsigned int v151; // eax
  unsigned int *v152; // rax
  __int64 v153; // rcx
  unsigned int v154; // r13d
  unsigned int v155; // eax
  unsigned int *v156; // rax
  __int64 v157; // rcx
  unsigned int v158; // r13d
  unsigned int v159; // ecx
  unsigned int *v160; // rax
  __int64 v161; // rcx
  unsigned int v162; // r13d
  unsigned int v163; // eax
  unsigned int *v164; // rax
  __int64 v165; // rcx
  _QWORD *v166; // rax
  _QWORD *v167; // rax
  _QWORD *v168; // rax
  __int64 v169; // rax
  __int64 v170; // rsi
  __int64 v171; // rdi
  _QWORD *v172; // rdx
  char **v173; // r13
  char **exception; // r13
  char **v175; // r13
  char **v176; // rbp
  char **v177; // r14
  char **v178; // r13
  int v179; // [rsp+0h] [rbp-88h]
  int v180[2]; // [rsp+8h] [rbp-80h]
  unsigned int v181; // [rsp+8h] [rbp-80h]
  int v182[2]; // [rsp+8h] [rbp-80h]
  unsigned int v183; // [rsp+8h] [rbp-80h]
  unsigned int v184; // [rsp+8h] [rbp-80h]
  int v185[2]; // [rsp+8h] [rbp-80h]
  int v186[2]; // [rsp+8h] [rbp-80h]
  int v187[2]; // [rsp+10h] [rbp-78h]
  unsigned int v188; // [rsp+10h] [rbp-78h]
  int v189[2]; // [rsp+18h] [rbp-70h]
  int v190; // [rsp+20h] [rbp-68h]
  char v191; // [rsp+28h] [rbp-60h]
  __int64 v192; // [rsp+30h] [rbp-58h] BYREF
  int v193; // [rsp+38h] [rbp-50h]
  int v194; // [rsp+40h] [rbp-48h]
  void *v195; // [rsp+48h] [rbp-40h]

  v3 = (*(_BYTE *)(a3 + 8) >> 2) & 3;
  switch ( v3 )
  {
    case 2:
      v36 = 515;
LABEL_25:
      sub_1872CE0("");
      sub_1873130(107, v36);
    case 3:
      v36 = 520;
      goto LABEL_25;
    case 0:
      v7 = *(_DWORD *)(a2 + 24);
      while ( 1 )
      {
        v11 = *(_DWORD *)(a3 + 8);
        v12 = v11 >> 6;
        if ( v11 >> 6 >= v7 )
          break;
        v8 = *(_QWORD *)(a2 + 8LL * v12 + 32);
        v9 = ((v12 + 1) << 6) | v11 & 0x3F;
        *(_DWORD *)(a3 + 8) = v9;
        result = sub_D87EA0((__int64)a1, v8, ((unsigned __int8)v9 >> 4) & 3);
        if ( !(_BYTE)result )
          return result;
      }
      v13 = a1[7];
      v14 = *(_QWORD *)(a2 + 16);
      if ( v13 )
        v15 = *(_DWORD *)(v13 - 4);
      else
        v15 = 0;
      v16 = *(unsigned int *)(a3 + 12);
      v17 = v15 - v16;
      *(_QWORD *)v180 = v13 + 8 * v16;
      *(_QWORD *)v187 = a1[1];
      sub_1584610(a1, v16);
      v20 = a1[11];
      if ( v20 )
        v21 = *(_DWORD *)(v20 - 4);
      else
        v21 = 0;
      v22 = v21 - *(_DWORD *)(a3 + 12);
      if ( v22 )
      {
        v105 = sub_15DC610(
                 a1[1],
                 v14,
                 v17,
                 v180[0],
                 v18,
                 v19,
                 v179,
                 v180[0],
                 v187[0],
                 v22,
                 v190,
                 v191,
                 v192,
                 v193,
                 v194,
                 v195);
        v26 = v105;
        if ( v105 )
          ++*(_DWORD *)(v105 + 8);
        v27 = sub_15E2980(a1[1]);
        if ( v27 )
          ++*(_DWORD *)(v27 + 8);
        v106 = a1[62];
        if ( v106 )
        {
          v107 = a1[63];
          v25 = (*(_DWORD *)(v106 + 8))-- == 1;
          if ( v25 )
          {
            *(_QWORD *)v189 = v27;
            sub_15D7BC0(v107, v106);
            v27 = *(_QWORD *)v189;
          }
        }
      }
      else
      {
        v23 = a1[62];
        ++*(_DWORD *)(a2 + 8);
        if ( v23 )
        {
          v24 = a1[63];
          v25 = (*(_DWORD *)(v23 + 8))-- == 1;
          if ( v25 )
            sub_15D7BC0(v24, v23);
        }
        v26 = a2;
        v27 = 0;
      }
      a1[62] = v27;
      if ( (unsigned int)sub_D82390(a1[18], v14, v17, *(_QWORD *)v180, a1 + 60, a1 + 64) != 5 )
      {
        v30 = (_QWORD *)a1[7];
        if ( !v30 )
          goto LABEL_127;
        v31 = *(_DWORD *)(a3 + 12);
        v32 = (unsigned __int64)&v30[*((unsigned int *)v30 - 1)];
        v33 = &v30[v31];
        if ( (unsigned __int64)v33 >= v32 )
          goto LABEL_195;
        do
        {
          v34 = *v33;
          if ( *v33 )
          {
            v35 = a1[6];
            v25 = (*(_DWORD *)(v34 + 8))-- == 1;
            if ( v25 )
            {
              v181 = v31;
              sub_15D7BC0(v35, v34);
              v31 = v181;
            }
          }
          ++v33;
        }
        while ( (unsigned __int64)v33 < v32 );
        v30 = (_QWORD *)a1[7];
        if ( v30 )
        {
LABEL_195:
          v115 = a1[60];
          *((_DWORD *)v30 - 1) = v31;
          if ( v115 )
          {
            ++*(_DWORD *)(v115 + 8);
            v31 = *((_DWORD *)v30 - 1);
          }
          if ( *((_DWORD *)v30 - 2) == v31 )
          {
            v162 = (3 * v31 + 1) >> 1;
            v163 = 8 * v162 + 8;
            if ( 8 * v31 + 8 >= v163 || v31 >= v162 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(&v192, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, &v192);
              sub_233E40((__int64)&v192);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v164 = (unsigned int *)sub_186B300(v30 - 1, v163);
            v165 = v164[1];
            v30 = v164 + 2;
            *v164 = v162;
            a1[7] = v164 + 2;
            LODWORD(v164) = v165;
            v118 = &v30[v165];
            v117 = (_DWORD)v164 + 1;
          }
          else
          {
            v118 = &v30[*((unsigned int *)v30 - 1)];
            v117 = *((_DWORD *)v30 - 1) + 1;
          }
        }
        else
        {
LABEL_127:
          v115 = a1[60];
          if ( v115 )
            ++*(_DWORD *)(v115 + 8);
          v116 = (_QWORD *)sub_186B270(0x18u);
          *v116 = 2;
          v117 = 1;
          v30 = v116 + 1;
          a1[7] = v30;
          v118 = v30;
        }
        *v118 = v115;
        *((_DWORD *)v30 - 1) = v117;
        v119 = a1[11];
        if ( v119 )
        {
          v120 = v119 + 8LL * *(unsigned int *)(v119 - 4);
          v184 = *(_DWORD *)(a3 + 12);
          v121 = (__int64 *)(v119 + 8LL * v184);
          if ( (unsigned __int64)v121 >= v120 )
            goto LABEL_138;
          do
          {
            v122 = *v121;
            if ( *v121 )
            {
              v123 = a1[10];
              v25 = (*(_DWORD *)(v122 + 8))-- == 1;
              if ( v25 )
                sub_15D7BC0(v123, v122);
            }
            ++v121;
          }
          while ( (unsigned __int64)v121 < v120 );
          v119 = a1[11];
          if ( v119 )
LABEL_138:
            *(_DWORD *)(v119 - 4) = v184;
        }
        v124 = a1[64];
        if ( !v124 )
        {
          v169 = sub_15DE370(a1[1]);
          v124 = v169;
          if ( v169 )
            ++*(_DWORD *)(v169 + 8);
          v170 = a1[64];
          if ( v170 )
          {
            v171 = a1[65];
            v25 = (*(_DWORD *)(v170 + 8))-- == 1;
            if ( v25 )
            {
              *(_QWORD *)v186 = v169;
              sub_15D7BC0(v171, v170);
              v124 = *(_QWORD *)v186;
            }
          }
          a1[64] = v124;
        }
        v125 = sub_15E2470(a1[1], a1[62], v124);
        v126 = a1[63];
        v127 = a1[62];
        v128 = v125;
        if ( v125 )
        {
          v129 = *(_DWORD *)(v125 + 8) + 1;
          *(_DWORD *)(v128 + 8) = v129;
          if ( v127 )
          {
            v25 = (*(_DWORD *)(v127 + 8))-- == 1;
            if ( v25 )
              sub_15D7BC0(v126, v127);
            a1[62] = v128;
            v129 = *(_DWORD *)(v128 + 8);
          }
          else
          {
            a1[62] = v128;
          }
          *(_DWORD *)(v128 + 8) = v129 + 1;
        }
        else
        {
          if ( v127 )
          {
            v25 = (*(_DWORD *)(v127 + 8))-- == 1;
            if ( v25 )
              sub_15D7BC0(v126, v127);
          }
          a1[62] = 0;
        }
        v130 = (_QWORD *)a1[11];
        if ( v130 )
        {
          v131 = *((_DWORD *)v130 - 1);
          if ( v131 == *((_DWORD *)v130 - 2) )
          {
            v158 = (3 * v131 + 1) >> 1;
            v159 = 8 * v158 + 8;
            if ( 8 * v131 + 8 >= v159 || v131 >= v158 )
            {
              v173 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(&v192, "Overflow encountered when expanding vector");
              *v173 = (char *)off_1C63128;
              sub_2333C0(v173 + 1, &v192);
              sub_233E40((__int64)&v192);
              __cxa_throw(v173, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v160 = (unsigned int *)sub_186B300(v130 - 1, v159);
            v161 = v160[1];
            v130 = v160 + 2;
            *v160 = v158;
            a1[11] = v160 + 2;
            LODWORD(v160) = v161;
            v134 = &v130[v161];
            v133 = (_DWORD)v160 + 1;
          }
          else
          {
            v132 = v131;
            v133 = v131 + 1;
            v134 = &v130[v132];
          }
        }
        else
        {
          v172 = (_QWORD *)sub_186B270(0x18u);
          *v172 = 2;
          v133 = 1;
          v130 = v172 + 1;
          a1[11] = v130;
          v134 = v130;
        }
        *v134 = v128;
        v135 = a1[64];
        *((_DWORD *)v130 - 1) = v133;
        if ( v135 )
        {
          v136 = a1[65];
          v25 = (*(_DWORD *)(v135 + 8))-- == 1;
          if ( v25 )
            sub_15D7BC0(v136, v135);
        }
        a1[64] = 0;
        if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
          sub_15843A0(a1, a2, a1[60], a1[62]);
        result = a1[5];
        v137 = *(_DWORD *)(result - 4);
        *(_DWORD *)(result - 4) = v137 - 1;
        if ( v137 != 1 )
          *(_BYTE *)(result + 16LL * (unsigned int)(v137 - 2) + 8) |= 2u;
        v138 = a1[60];
        if ( v138 )
        {
          v139 = a1[61];
          v25 = (*(_DWORD *)(v138 + 8))-- == 1;
          if ( v25 )
            result = sub_15D7BC0(v139, v138);
        }
        v140 = a1[62];
        a1[60] = 0;
        if ( v140 )
        {
          v141 = a1[63];
          v25 = (*(_DWORD *)(v140 + 8))-- == 1;
          if ( v25 )
            result = sub_15D7BC0(v141, v140);
        }
        a1[62] = 0;
LABEL_163:
        if ( v26 )
        {
          v25 = (*(_DWORD *)(v26 + 8))-- == 1;
          if ( v25 )
            return sub_15D7BC0(*(_QWORD *)v187, v26);
        }
        return result;
      }
      if ( (*(_BYTE *)(a3 + 8) & 2) != 0 )
      {
        v86 = sub_15DC610(
                a1[1],
                v14,
                v17,
                v180[0],
                v28,
                v29,
                v179,
                v180[0],
                v187[0],
                v189[0],
                v190,
                v191,
                v192,
                v193,
                v194,
                v195);
        v87 = v86;
        if ( v86 )
          ++*(_DWORD *)(v86 + 8);
        v88 = a1[60];
        if ( v88 )
        {
          v89 = a1[61];
          v25 = (*(_DWORD *)(v88 + 8))-- == 1;
          if ( v25 )
          {
            *(_QWORD *)v185 = v86;
            sub_15D7BC0(v89, v88);
            v87 = *(_QWORD *)v185;
          }
        }
        a1[60] = v87;
        v90 = sub_15DE370(a1[1]);
        v91 = v90;
        if ( v90 )
          ++*(_DWORD *)(v90 + 8);
        v92 = a1[62];
        if ( v92 )
        {
          v93 = a1[63];
          v25 = (*(_DWORD *)(v92 + 8))-- == 1;
          if ( v25 )
            sub_15D7BC0(v93, v92);
        }
        v94 = (_QWORD *)a1[7];
        a1[62] = v91;
        if ( !v94 )
          goto LABEL_96;
      }
      else
      {
        v108 = a1[60];
        ++*(_DWORD *)(a2 + 8);
        if ( v108 )
        {
          v109 = a1[61];
          v25 = (*(_DWORD *)(v108 + 8))-- == 1;
          if ( v25 )
            sub_15D7BC0(v109, v108);
        }
        v94 = (_QWORD *)a1[7];
        a1[60] = a2;
        if ( !v94 )
        {
          v95 = a2;
          goto LABEL_97;
        }
      }
      v110 = *(_DWORD *)(a3 + 12);
      v111 = (unsigned __int64)&v94[*((unsigned int *)v94 - 1)];
      v112 = &v94[v110];
      if ( (unsigned __int64)v112 >= v111 )
        goto LABEL_190;
      do
      {
        v113 = *v112;
        if ( *v112 )
        {
          v114 = a1[6];
          v25 = (*(_DWORD *)(v113 + 8))-- == 1;
          if ( v25 )
          {
            v183 = v110;
            sub_15D7BC0(v114, v113);
            v110 = v183;
          }
        }
        ++v112;
      }
      while ( (unsigned __int64)v112 < v111 );
      v94 = (_QWORD *)a1[7];
      if ( v94 )
      {
LABEL_190:
        v95 = a1[60];
        *((_DWORD *)v94 - 1) = v110;
        if ( v95 )
        {
          ++*(_DWORD *)(v95 + 8);
          v110 = *((_DWORD *)v94 - 1);
        }
        if ( *((_DWORD *)v94 - 2) == v110 )
        {
          v154 = (3 * v110 + 1) >> 1;
          v155 = 8 * v154 + 8;
          if ( 8 * v110 + 8 >= v155 || v110 >= v154 )
          {
            v175 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(&v192, "Overflow encountered when expanding vector");
            *v175 = (char *)off_1C63128;
            sub_2333C0(v175 + 1, &v192);
            sub_233E40((__int64)&v192);
            __cxa_throw(v175, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v156 = (unsigned int *)sub_186B300(v94 - 1, v155);
          v157 = v156[1];
          v94 = v156 + 2;
          *v156 = v154;
          a1[7] = v156 + 2;
          LODWORD(v156) = v157;
          v98 = &v94[v157];
          v97 = (_DWORD)v156 + 1;
        }
        else
        {
          v98 = &v94[*((unsigned int *)v94 - 1)];
          v97 = *((_DWORD *)v94 - 1) + 1;
        }
        goto LABEL_99;
      }
LABEL_96:
      v95 = a1[60];
      if ( !v95 )
      {
LABEL_98:
        v96 = (_QWORD *)sub_186B270(0x18u);
        v94 = v96 + 1;
        *v96 = 2;
        v97 = 1;
        a1[7] = v94;
        v98 = v94;
LABEL_99:
        *v98 = v95;
        *((_DWORD *)v94 - 1) = v97;
        if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
          sub_15843A0(a1, a2, a1[60], a1[62]);
        v99 = (_QWORD *)a1[11];
        if ( !v99 )
          goto LABEL_215;
        v100 = *(_DWORD *)(a3 + 12);
        v101 = (unsigned __int64)&v99[*((unsigned int *)v99 - 1)];
        v102 = &v99[v100];
        if ( (unsigned __int64)v102 >= v101 )
          goto LABEL_175;
        do
        {
          v103 = *v102;
          if ( *v102 )
          {
            v104 = a1[10];
            v25 = (*(_DWORD *)(v103 + 8))-- == 1;
            if ( v25 )
              sub_15D7BC0(v104, v103);
          }
          ++v102;
        }
        while ( (unsigned __int64)v102 < v101 );
        v99 = (_QWORD *)a1[11];
        if ( v99 )
        {
LABEL_175:
          v142 = a1[62];
          *((_DWORD *)v99 - 1) = v100;
          if ( v142 )
          {
            ++*(_DWORD *)(v142 + 8);
            v100 = *((_DWORD *)v99 - 1);
          }
          if ( *((_DWORD *)v99 - 2) == v100 )
          {
            v150 = (3 * v100 + 1) >> 1;
            v151 = 8 * v150 + 8;
            if ( 8 * v100 + 8 >= v151 || v100 >= v150 )
            {
              v178 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(&v192, "Overflow encountered when expanding vector");
              *v178 = (char *)off_1C63128;
              sub_2333C0(v178 + 1, &v192);
              sub_233E40((__int64)&v192);
              __cxa_throw(v178, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v152 = (unsigned int *)sub_186B300(v99 - 1, v151);
            v153 = v152[1];
            v99 = v152 + 2;
            *v152 = v150;
            a1[11] = v152 + 2;
            LODWORD(v152) = v153;
            v143 = &v99[v153];
            v144 = (_DWORD)v152 + 1;
          }
          else
          {
            v143 = &v99[*((unsigned int *)v99 - 1)];
            v144 = *((_DWORD *)v99 - 1) + 1;
          }
        }
        else
        {
LABEL_215:
          v142 = a1[62];
          if ( v142 )
            ++*(_DWORD *)(v142 + 8);
          v168 = (_QWORD *)sub_186B270(0x18u);
          v99 = v168 + 1;
          *v168 = 2;
          v144 = 1;
          a1[11] = v99;
          v143 = v99;
        }
        *v143 = v142;
        v145 = a1[62];
        *((_DWORD *)v99 - 1) = v144;
        if ( v145 )
        {
          v146 = a1[63];
          v25 = (*(_DWORD *)(v145 + 8))-- == 1;
          if ( v25 )
            sub_15D7BC0(v146, v145);
        }
        result = a1[5];
        v147 = a1[60];
        a1[62] = 0;
        v148 = *(_DWORD *)(result - 4);
        *(_DWORD *)(result - 4) = v148 - 1;
        if ( v148 != 1 && a2 != v147 )
        {
          *(_BYTE *)(result + 16LL * (unsigned int)(v148 - 2) + 8) |= 2u;
          v147 = a1[60];
        }
        if ( v147 )
        {
          v149 = a1[61];
          v25 = (*(_DWORD *)(v147 + 8))-- == 1;
          if ( v25 )
            result = sub_15D7BC0(v149, v147);
        }
        a1[60] = 0;
        goto LABEL_163;
      }
LABEL_97:
      ++*(_DWORD *)(v95 + 8);
      goto LABEL_98;
  }
  v37 = a1[1];
  v38 = a1[11];
  v39 = a1[10];
  *(_QWORD *)v182 = v37;
  if ( v38 )
  {
    v40 = (unsigned int)(*(_DWORD *)(v38 - 4) - 1);
    v41 = *(_QWORD *)(v38 + 8 * v40);
    v42 = *(_DWORD *)(v38 - 4) - 1;
    if ( !v41 )
    {
      *(_DWORD *)(v38 - 4) = v40;
      goto LABEL_31;
    }
    ++*(_DWORD *)(v41 + 8);
    v43 = (unsigned int)(*(_DWORD *)(v38 - 4) - 1);
    v44 = *(_QWORD *)(v38 + 8 * v43);
    v42 = *(_DWORD *)(v38 - 4) - 1;
    *(_DWORD *)(v38 - 4) = v43;
    if ( !v44 )
    {
LABEL_31:
      v45 = (unsigned int)(v42 - 1);
      v46 = *(_QWORD *)(v38 + 8 * v45);
      if ( !v46 )
      {
        *(_DWORD *)(v38 - 4) = v45;
        goto LABEL_35;
      }
      ++*(_DWORD *)(v46 + 8);
      v47 = (unsigned int)(*(_DWORD *)(v38 - 4) - 1);
      v48 = *(_QWORD *)(v38 + 8 * v47);
      *(_DWORD *)(v38 - 4) = v47;
      if ( !v48 )
        goto LABEL_35;
      goto LABEL_33;
    }
  }
  else
  {
    v41 = MEMORY[0x7FFFFFFF8];
    if ( !MEMORY[0x7FFFFFFF8] )
    {
      v42 = --MEMORY[0xFFFFFFFFFFFFFFFC];
      goto LABEL_31;
    }
    ++*(_DWORD *)(MEMORY[0x7FFFFFFF8] + 8LL);
    v44 = MEMORY[0x7FFFFFFF8];
    --MEMORY[0xFFFFFFFFFFFFFFFC];
  }
  v25 = (*(_DWORD *)(v44 + 8))-- == 1;
  if ( !v25 )
  {
    v42 = *(_DWORD *)(v38 - 4);
    goto LABEL_31;
  }
  sub_15D7BC0(v39, v44);
  v38 = a1[11];
  if ( v38 )
  {
    v42 = *(_DWORD *)(v38 - 4);
    v39 = a1[10];
    goto LABEL_31;
  }
  v46 = MEMORY[0x7FFFFFFF8];
  if ( !MEMORY[0x7FFFFFFF8] )
  {
    --MEMORY[0xFFFFFFFFFFFFFFFC];
    goto LABEL_35;
  }
  ++*(_DWORD *)(MEMORY[0x7FFFFFFF8] + 8LL);
  v48 = MEMORY[0x7FFFFFFF8];
  v39 = a1[10];
  --MEMORY[0xFFFFFFFFFFFFFFFC];
LABEL_33:
  v25 = (*(_DWORD *)(v48 + 8))-- == 1;
  if ( v25 )
    sub_15D7BC0(v39, v48);
LABEL_35:
  v49 = sub_15E2470(a1[1], v46, v41);
  v50 = a1[63];
  v51 = a1[62];
  v52 = v49;
  if ( v49 )
  {
    v53 = *(_DWORD *)(v49 + 8) + 1;
    *(_DWORD *)(v52 + 8) = v53;
    if ( v51 )
    {
      v25 = (*(_DWORD *)(v51 + 8))-- == 1;
      if ( v25 )
        sub_15D7BC0(v50, v51);
      a1[62] = v52;
      v53 = *(_DWORD *)(v52 + 8);
    }
    else
    {
      a1[62] = v52;
    }
    *(_DWORD *)(v52 + 8) = v53 + 1;
  }
  else
  {
    if ( v51 )
    {
      v25 = (*(_DWORD *)(v51 + 8))-- == 1;
      if ( v25 )
        sub_15D7BC0(v50, v51);
    }
    a1[62] = 0;
  }
  v54 = (_QWORD *)a1[11];
  if ( v54 )
  {
    v55 = *((_DWORD *)v54 - 1);
    if ( v55 == *((_DWORD *)v54 - 2) )
    {
      v77 = (3 * v55 + 1) >> 1;
      v78 = 8 * v77 + 8;
      if ( 8 * v55 + 8 >= (unsigned int)v78 || v55 >= v77 )
      {
        v177 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(&v192, "Overflow encountered when expanding vector");
        *v177 = (char *)off_1C63128;
        sub_2333C0(v177 + 1, &v192);
        sub_233E40((__int64)&v192);
        __cxa_throw(v177, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v188 = (3 * v55 + 1) >> 1;
      v79 = (unsigned int *)sub_186B300(v54 - 1, v78);
      v80 = v79[1];
      v54 = v79 + 2;
      a1[11] = v79 + 2;
      *v79 = v188;
      LODWORD(v79) = v80;
      v58 = &v54[v80];
      v57 = (_DWORD)v79 + 1;
    }
    else
    {
      v56 = v55;
      v57 = v55 + 1;
      v58 = &v54[v56];
    }
  }
  else
  {
    v166 = (_QWORD *)sub_186B270(0x18u);
    v54 = v166 + 1;
    *v166 = 2;
    v57 = 1;
    a1[11] = v54;
    v58 = v54;
  }
  *v58 = v52;
  *((_DWORD *)v54 - 1) = v57;
  if ( v46 )
  {
    v25 = (*(_DWORD *)(v46 + 8))-- == 1;
    if ( v25 )
      sub_15D7BC0(*(_QWORD *)v182, v46);
  }
  if ( v41 )
  {
    v25 = (*(_DWORD *)(v41 + 8))-- == 1;
    if ( v25 )
      sub_15D7BC0(*(_QWORD *)v182, v41);
  }
  v59 = 0xFFFFFFFFLL;
  v60 = (_QWORD *)a1[7];
  if ( v60 )
    v59 = (unsigned int)(*((_DWORD *)v60 - 1) - 1);
  v61 = v60[v59];
  if ( v61 )
    ++*(_DWORD *)(v61 + 8);
  v62 = a1[60];
  if ( v62 )
  {
    v63 = a1[61];
    v25 = (*(_DWORD *)(v62 + 8))-- == 1;
    if ( v25 )
    {
      sub_15D7BC0(v63, v62);
      v60 = (_QWORD *)a1[7];
    }
  }
  v64 = *((_DWORD *)v60 - 1);
  v65 = a1[6];
  a1[60] = v61;
  v66 = v64 - 1;
  v67 = v60[v64 - 1];
  *((_DWORD *)v60 - 1) = v64 - 1;
  if ( v67 )
  {
    v25 = (*(_DWORD *)(v67 + 8))-- == 1;
    if ( v25 )
    {
      sub_15D7BC0(v65, v67);
      v60 = (_QWORD *)a1[7];
      v65 = a1[6];
    }
    v66 = *((_DWORD *)v60 - 1);
  }
  v68 = (unsigned int)(v66 - 1);
  v69 = v60[v68];
  *((_DWORD *)v60 - 1) = v68;
  if ( !v69 || (v25 = *(_DWORD *)(v69 + 8) == 1, --*(_DWORD *)(v69 + 8), !v25) )
  {
    v70 = a1[60];
    v71 = v60;
    if ( !v70 )
      goto LABEL_66;
    goto LABEL_64;
  }
  sub_15D7BC0(v65, v69);
  v70 = a1[60];
  v60 = (_QWORD *)a1[7];
  if ( v70 )
LABEL_64:
    ++*(_DWORD *)(v70 + 8);
  v71 = v60;
  if ( v60 )
  {
LABEL_66:
    v72 = *((_DWORD *)v60 - 1);
    if ( v72 == *((_DWORD *)v60 - 2) )
    {
      v81 = (3 * v72 + 1) >> 1;
      v82 = 8 * v81 + 8;
      if ( 8 * v72 + 8 >= (unsigned int)v82 || v72 >= v81 )
      {
        v176 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(&v192, "Overflow encountered when expanding vector");
        *v176 = (char *)off_1C63128;
        sub_2333C0(v176 + 1, &v192);
        sub_233E40((__int64)&v192);
        __cxa_throw(v176, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v83 = (unsigned int *)sub_186B300(v60 - 1, v82);
      v71 = v83 + 2;
      *v83 = v81;
      v84 = v83[1];
      a1[7] = v71;
      v85 = v84;
      v75 = &v71[v84];
      v74 = v85 + 1;
    }
    else
    {
      v73 = v72;
      v74 = v72 + 1;
      v75 = &v60[v73];
    }
    goto LABEL_68;
  }
  v167 = (_QWORD *)sub_186B270(0x18u);
  v74 = 1;
  v71 = v167 + 1;
  *v167 = 2;
  a1[7] = v167 + 1;
  v75 = v167 + 1;
LABEL_68:
  *v75 = v70;
  *((_DWORD *)v71 - 1) = v74;
  if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
    sub_15843A0(a1, a2, a1[60], a1[62]);
  result = a1[5];
  v76 = *(_DWORD *)(result - 4);
  *(_DWORD *)(result - 4) = v76 - 1;
  if ( v76 != 1 )
    *(_BYTE *)(result + 16LL * (unsigned int)(v76 - 2) + 8) |= 2u;
  return result;
}

