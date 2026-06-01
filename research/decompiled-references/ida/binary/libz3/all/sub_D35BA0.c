__int64 __fastcall sub_D35BA0(_QWORD *a1, __int64 a2, __int64 a3)
{
  char v3; // al
  unsigned int v6; // ebp
  int v7; // eax
  __int64 v8; // rsi
  __int64 result; // rax
  unsigned int v10; // eax
  unsigned int v11; // edx
  __int64 v12; // r14
  __int64 v13; // rax
  int v14; // r13d
  __int64 v15; // rdx
  unsigned int v16; // r13d
  int v17; // r8d
  int v18; // r9d
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rsi
  __int64 v22; // rdi
  bool v23; // zf
  __int64 v24; // rbp
  __int64 v25; // r12
  __int64 v26; // rsi
  _QWORD *v27; // r8
  __int64 v28; // r12
  __int64 v29; // rdi
  int v30; // r8d
  int v31; // r9d
  int v32; // r12d
  _QWORD *v33; // rdx
  unsigned int v34; // r8d
  unsigned __int64 v35; // r14
  __int64 *v36; // r13
  __int64 v37; // rsi
  __int64 v38; // rdi
  __int64 v39; // rsi
  __int64 v40; // rdx
  __int64 v41; // r13
  __int64 v42; // rdi
  __int64 v43; // rcx
  __int64 v44; // r12
  int v45; // eax
  __int64 v46; // rcx
  __int64 v47; // rsi
  __int64 v48; // rcx
  __int64 v49; // rbp
  __int64 v50; // rcx
  __int64 v51; // rsi
  __int64 v52; // rax
  __int64 v53; // rsi
  __int64 v54; // rdi
  __int64 v55; // r14
  int v56; // eax
  _QWORD *v57; // rdx
  unsigned int v58; // eax
  __int64 v59; // rcx
  int v60; // eax
  __int64 *v61; // rcx
  __int64 v62; // rdx
  _QWORD *v63; // rax
  __int64 v64; // rbp
  __int64 v65; // rsi
  __int64 v66; // rdi
  int v67; // ecx
  __int64 v68; // rdi
  int v69; // edx
  __int64 v70; // rsi
  __int64 v71; // rcx
  __int64 v72; // rsi
  __int64 v73; // rbp
  _QWORD *v74; // rcx
  unsigned int v75; // edx
  __int64 v76; // rsi
  int v77; // edx
  _QWORD *v78; // rax
  int v79; // ecx
  unsigned int v80; // r8d
  size_t v81; // rsi
  unsigned int *v82; // rax
  __int64 v83; // rcx
  unsigned int v84; // r12d
  size_t v85; // rsi
  unsigned int *v86; // rax
  __int64 v87; // rax
  int v88; // edx
  __int64 v89; // rax
  __int64 v90; // rdx
  __int64 v91; // rsi
  __int64 v92; // rdi
  __int64 v93; // rdi
  __int64 v94; // rax
  __int64 v95; // r12
  __int64 v96; // rsi
  __int64 v97; // rdi
  _QWORD *v98; // rdx
  __int64 v99; // r12
  _QWORD *v100; // rax
  int v101; // eax
  __int64 *v102; // rcx
  _QWORD *v103; // rdx
  unsigned int v104; // r14d
  unsigned __int64 v105; // r13
  __int64 *v106; // r12
  __int64 v107; // rsi
  __int64 v108; // rdi
  __int64 v109; // rax
  __int64 v110; // rax
  __int64 v111; // rsi
  __int64 v112; // rdi
  __int64 v113; // rsi
  __int64 v114; // rdi
  unsigned int v115; // r14d
  unsigned __int64 v116; // r13
  __int64 *v117; // r12
  __int64 v118; // rsi
  __int64 v119; // rdi
  __int64 v120; // r13
  _QWORD *v121; // rdx
  int v122; // eax
  _QWORD *v123; // rcx
  __int64 v124; // rax
  unsigned __int64 v125; // r13
  __int64 *v126; // r14
  __int64 v127; // rsi
  __int64 v128; // rdi
  __int64 v129; // rdx
  __int64 v130; // rax
  __int64 v131; // rdi
  __int64 v132; // rsi
  __int64 v133; // r13
  int v134; // eax
  _QWORD *v135; // rdx
  unsigned int v136; // eax
  __int64 v137; // rcx
  int v138; // eax
  __int64 *v139; // rcx
  __int64 v140; // rsi
  __int64 v141; // rdi
  __int64 v142; // rsi
  __int64 v143; // rdx
  __int64 v144; // r14
  __int64 v145; // rdi
  __int64 v146; // rcx
  __int64 v147; // r13
  int v148; // eax
  __int64 v149; // rcx
  __int64 v150; // rsi
  __int64 v151; // rcx
  __int64 v152; // r12
  __int64 v153; // rcx
  __int64 v154; // rsi
  __int64 v155; // rax
  __int64 v156; // rdi
  __int64 v157; // rsi
  __int64 v158; // r8
  int v159; // eax
  _QWORD *v160; // rdx
  unsigned int v161; // eax
  __int64 v162; // rcx
  int v163; // eax
  __int64 *v164; // rcx
  __int64 v165; // rdx
  _QWORD *v166; // rax
  __int64 v167; // r12
  __int64 v168; // rsi
  __int64 v169; // rdi
  int v170; // ecx
  __int64 v171; // rdi
  int v172; // edx
  __int64 v173; // rsi
  __int64 v174; // rcx
  __int64 v175; // rsi
  __int64 v176; // r12
  _QWORD *v177; // rcx
  unsigned int v178; // edx
  __int64 v179; // rsi
  int v180; // edx
  _QWORD *v181; // rax
  int v182; // ecx
  __int64 v183; // rsi
  __int64 v184; // rdi
  __int64 v185; // rsi
  __int64 v186; // rdi
  __int64 v187; // r12
  _QWORD *v188; // rcx
  int v189; // eax
  __int64 v190; // rsi
  __int64 v191; // rdi
  __int64 v192; // rsi
  int v193; // ecx
  __int64 v194; // rdi
  unsigned int v195; // r13d
  unsigned int v196; // eax
  unsigned int *v197; // rax
  __int64 v198; // rcx
  unsigned int v199; // r13d
  unsigned int v200; // eax
  unsigned int *v201; // rax
  __int64 v202; // rcx
  unsigned int v203; // r14d
  unsigned int v204; // ecx
  unsigned int *v205; // rax
  __int64 v206; // rcx
  unsigned int v207; // r14d
  unsigned int v208; // eax
  unsigned int *v209; // rax
  __int64 v210; // rcx
  _QWORD *v211; // rax
  _QWORD *v212; // rax
  _QWORD *v213; // rax
  __int64 v214; // rax
  __int64 v215; // rsi
  __int64 v216; // rdi
  unsigned int v217; // r13d
  unsigned int v218; // ecx
  unsigned int *v219; // rax
  __int64 v220; // rax
  int v221; // edx
  unsigned int v222; // ecx
  size_t v223; // rsi
  unsigned int *v224; // rax
  _QWORD *v225; // rdx
  _QWORD *v226; // rdx
  _QWORD *v227; // rax
  char **v228; // r13
  char **v229; // rbp
  char **v230; // r13
  char **v231; // r14
  char **v232; // r13
  char **v233; // r13
  char **exception; // r13
  char **v235; // r15
  __int64 v236; // [rsp+0h] [rbp-88h]
  int v237[2]; // [rsp+8h] [rbp-80h]
  unsigned int v238; // [rsp+8h] [rbp-80h]
  unsigned int v239; // [rsp+8h] [rbp-80h]
  unsigned int v240; // [rsp+8h] [rbp-80h]
  int v241[2]; // [rsp+8h] [rbp-80h]
  int v242[2]; // [rsp+8h] [rbp-80h]
  int v243[2]; // [rsp+8h] [rbp-80h]
  int v244[2]; // [rsp+8h] [rbp-80h]
  int v245[2]; // [rsp+8h] [rbp-80h]
  int v246[2]; // [rsp+10h] [rbp-78h]
  int v247; // [rsp+18h] [rbp-70h]
  unsigned int v248; // [rsp+18h] [rbp-70h]
  int v249; // [rsp+20h] [rbp-68h]
  char v250; // [rsp+28h] [rbp-60h]
  __int64 v251; // [rsp+30h] [rbp-58h] BYREF
  int v252; // [rsp+38h] [rbp-50h]
  int v253; // [rsp+40h] [rbp-48h]
  void *v254; // [rsp+48h] [rbp-40h]

  v236 = a2;
  v3 = (*(_BYTE *)(a3 + 8) >> 2) & 3;
  switch ( v3 )
  {
    case 2:
      v39 = 515;
LABEL_28:
      sub_1872CE0("");
      sub_1873130(107, v39);
    case 3:
      v39 = 520;
      goto LABEL_28;
    case 0:
      v6 = *(_DWORD *)(a2 + 24);
      while ( 1 )
      {
        v10 = *(_DWORD *)(a3 + 8);
        v11 = v10 >> 6;
        if ( v10 >> 6 >= v6 )
          break;
        v7 = ((v11 + 1) << 6) | v10 & 0x3F;
        v8 = *(_QWORD *)(v236 + 8LL * v11 + 32);
        *(_DWORD *)(a3 + 8) = v7;
        result = sub_D34780((__int64)a1, v8, ((unsigned __int8)v7 >> 4) & 3);
        if ( !(_BYTE)result )
          return result;
      }
      v12 = *(_QWORD *)(v236 + 16);
      v13 = a1[7];
      if ( v13 )
        v14 = *(_DWORD *)(v13 - 4);
      else
        v14 = 0;
      v15 = *(unsigned int *)(a3 + 12);
      v16 = v14 - v15;
      *(_QWORD *)v237 = v13 + 8 * v15;
      *(_QWORD *)v246 = a1[1];
      sub_1584610(a1, v15);
      v19 = a1[11];
      if ( v19 )
        v20 = *(_DWORD *)(v19 - 4);
      else
        v20 = 0;
      if ( v20 == *(_DWORD *)(a3 + 12) )
      {
        v21 = a1[62];
        ++*(_DWORD *)(v236 + 8);
        if ( v21 )
        {
          v22 = a1[63];
          v23 = (*(_DWORD *)(v21 + 8))-- == 1;
          if ( v23 )
            sub_15D7BC0(v22, v21);
        }
        v24 = v236;
        v25 = 0;
      }
      else
      {
        v109 = sub_15DC610(
                 a1[1],
                 v12,
                 v16,
                 v237[0],
                 v17,
                 v18,
                 v236,
                 v237[0],
                 v246[0],
                 v247,
                 v249,
                 v250,
                 v251,
                 v252,
                 v253,
                 v254);
        v24 = v109;
        if ( v109 )
          ++*(_DWORD *)(v109 + 8);
        v110 = sub_15E2980(a1[1]);
        v25 = v110;
        if ( v110 )
          ++*(_DWORD *)(v110 + 8);
        v111 = a1[62];
        if ( v111 )
        {
          v112 = a1[63];
          v23 = (*(_DWORD *)(v111 + 8))-- == 1;
          if ( v23 )
            sub_15D7BC0(v112, v111);
        }
      }
      v26 = a1[64];
      a1[62] = v25;
      v27 = a1 + 60;
      v28 = a1[18];
      if ( v26 )
      {
        v29 = a1[65];
        v23 = (*(_DWORD *)(v26 + 8))-- == 1;
        if ( v23 )
        {
          v247 = (_DWORD)a1 + 480;
          sub_15D7BC0(v29, v26);
          v27 = a1 + 60;
        }
      }
      a1[64] = 0;
      v32 = sub_1447860(v28 + 24, v12, v16, *(_QWORD *)v237, v27);
      if ( v32 != 5 )
      {
        v33 = (_QWORD *)a1[7];
        if ( !v33 )
          goto LABEL_130;
        v34 = *(_DWORD *)(a3 + 12);
        v35 = (unsigned __int64)&v33[*((unsigned int *)v33 - 1)];
        v36 = &v33[v34];
        if ( (unsigned __int64)v36 >= v35 )
          goto LABEL_241;
        do
        {
          v37 = *v36;
          if ( *v36 )
          {
            v38 = a1[6];
            v23 = (*(_DWORD *)(v37 + 8))-- == 1;
            if ( v23 )
            {
              v238 = v34;
              sub_15D7BC0(v38, v37);
              v34 = v238;
            }
          }
          ++v36;
        }
        while ( (unsigned __int64)v36 < v35 );
        v33 = (_QWORD *)a1[7];
        if ( v33 )
        {
LABEL_241:
          v120 = a1[60];
          *((_DWORD *)v33 - 1) = v34;
          if ( v120 )
          {
            ++*(_DWORD *)(v120 + 8);
            v34 = *((_DWORD *)v33 - 1);
          }
          if ( *((_DWORD *)v33 - 2) == v34 )
          {
            v207 = (3 * v34 + 1) >> 1;
            v208 = 8 * v207 + 8;
            if ( 8 * v34 + 8 >= v208 || v34 >= v207 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(&v251, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, &v251);
              sub_233E40((__int64)&v251);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v209 = (unsigned int *)sub_186B300(v33 - 1, v208);
            v210 = v209[1];
            v33 = v209 + 2;
            *v209 = v207;
            a1[7] = v209 + 2;
            LODWORD(v209) = v210;
            v123 = &v33[v210];
            v122 = (_DWORD)v209 + 1;
          }
          else
          {
            v123 = &v33[*((unsigned int *)v33 - 1)];
            v122 = *((_DWORD *)v33 - 1) + 1;
          }
        }
        else
        {
LABEL_130:
          v120 = a1[60];
          if ( v120 )
            ++*(_DWORD *)(v120 + 8);
          v121 = (_QWORD *)sub_186B270(0x18u);
          *v121 = 2;
          v122 = 1;
          v33 = v121 + 1;
          a1[7] = v33;
          v123 = v33;
        }
        *v123 = v120;
        *((_DWORD *)v33 - 1) = v122;
        v124 = a1[11];
        if ( v124 )
        {
          v125 = v124 + 8LL * *(unsigned int *)(v124 - 4);
          v240 = *(_DWORD *)(a3 + 12);
          v126 = (__int64 *)(v124 + 8LL * v240);
          if ( (unsigned __int64)v126 >= v125 )
            goto LABEL_141;
          do
          {
            v127 = *v126;
            if ( *v126 )
            {
              v128 = a1[10];
              v23 = (*(_DWORD *)(v127 + 8))-- == 1;
              if ( v23 )
                sub_15D7BC0(v128, v127);
            }
            ++v126;
          }
          while ( (unsigned __int64)v126 < v125 );
          v124 = a1[11];
          if ( v124 )
LABEL_141:
            *(_DWORD *)(v124 - 4) = v240;
        }
        v129 = a1[64];
        if ( !v129 )
        {
          v214 = sub_15DE370(a1[1]);
          v129 = v214;
          if ( v214 )
            ++*(_DWORD *)(v214 + 8);
          v215 = a1[64];
          if ( v215 )
          {
            v216 = a1[65];
            v23 = (*(_DWORD *)(v215 + 8))-- == 1;
            if ( v23 )
            {
              *(_QWORD *)v244 = v214;
              sub_15D7BC0(v216, v215);
              v129 = *(_QWORD *)v244;
            }
          }
          a1[64] = v129;
        }
        v130 = sub_15E2470(a1[1], a1[62], v129);
        v131 = a1[63];
        v132 = a1[62];
        v133 = v130;
        if ( v130 )
        {
          v134 = *(_DWORD *)(v130 + 8) + 1;
          *(_DWORD *)(v133 + 8) = v134;
          if ( v132 )
          {
            v23 = (*(_DWORD *)(v132 + 8))-- == 1;
            if ( v23 )
              sub_15D7BC0(v131, v132);
            a1[62] = v133;
            v134 = *(_DWORD *)(v133 + 8);
          }
          else
          {
            a1[62] = v133;
          }
          *(_DWORD *)(v133 + 8) = v134 + 1;
        }
        else
        {
          if ( v132 )
          {
            v23 = (*(_DWORD *)(v132 + 8))-- == 1;
            if ( v23 )
              sub_15D7BC0(v131, v132);
          }
          a1[62] = 0;
        }
        v135 = (_QWORD *)a1[11];
        if ( v135 )
        {
          v136 = *((_DWORD *)v135 - 1);
          if ( v136 == *((_DWORD *)v135 - 2) )
          {
            v203 = (3 * v136 + 1) >> 1;
            v204 = 8 * v203 + 8;
            if ( 8 * v136 + 8 >= v204 || v136 >= v203 )
            {
              v228 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(&v251, "Overflow encountered when expanding vector");
              *v228 = (char *)off_1C63128;
              sub_2333C0(v228 + 1, &v251);
              sub_233E40((__int64)&v251);
              __cxa_throw(v228, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v205 = (unsigned int *)sub_186B300(v135 - 1, v204);
            v206 = v205[1];
            v135 = v205 + 2;
            *v205 = v203;
            a1[11] = v205 + 2;
            LODWORD(v205) = v206;
            v139 = &v135[v206];
            v138 = (_DWORD)v205 + 1;
          }
          else
          {
            v137 = v136;
            v138 = v136 + 1;
            v139 = &v135[v137];
          }
        }
        else
        {
          v225 = (_QWORD *)sub_186B270(0x18u);
          *v225 = 2;
          v138 = 1;
          v135 = v225 + 1;
          a1[11] = v135;
          v139 = v135;
        }
        *v139 = v133;
        v140 = a1[64];
        *((_DWORD *)v135 - 1) = v138;
        if ( v140 )
        {
          v141 = a1[65];
          v23 = (*(_DWORD *)(v140 + 8))-- == 1;
          if ( v23 )
            sub_15D7BC0(v141, v140);
        }
        a1[64] = 0;
        v142 = a1[60];
        if ( v32 == 4 )
        {
          if ( (*(_BYTE *)(a3 + 8) & 1) == 0 )
          {
LABEL_200:
            result = a1[5];
            v182 = *(_DWORD *)(result - 4);
            *(_DWORD *)(result - 4) = v182 - 1;
            if ( v182 != 1 )
              *(_BYTE *)(result + 16LL * (unsigned int)(v182 - 2) + 8) |= 2u;
            goto LABEL_202;
          }
LABEL_199:
          sub_15843A0(a1, v236, a1[60], a1[62]);
          goto LABEL_200;
        }
        *(_BYTE *)(a3 + 8) = *(_BYTE *)(a3 + 8) & 0xF3 | 4;
        result = sub_D34780((__int64)a1, v142, (unsigned int)(v32 != 3) + v32);
        if ( !(_BYTE)result )
        {
LABEL_202:
          v183 = a1[60];
          if ( v183 )
          {
            v184 = a1[61];
            v23 = (*(_DWORD *)(v183 + 8))-- == 1;
            if ( v23 )
              result = sub_15D7BC0(v184, v183);
          }
          v185 = a1[62];
          a1[60] = 0;
          if ( v185 )
          {
            v186 = a1[63];
            v23 = (*(_DWORD *)(v185 + 8))-- == 1;
            if ( v23 )
              result = sub_15D7BC0(v186, v185);
          }
          a1[62] = 0;
LABEL_209:
          if ( v24 )
          {
            v23 = (*(_DWORD *)(v24 + 8))-- == 1;
            if ( v23 )
              return sub_15D7BC0(*(_QWORD *)v246, v24);
          }
          return result;
        }
        v143 = a1[11];
        v144 = a1[1];
        v145 = a1[10];
        if ( v143 )
        {
          v146 = (unsigned int)(*(_DWORD *)(v143 - 4) - 1);
          v147 = *(_QWORD *)(v143 + 8 * v146);
          v148 = *(_DWORD *)(v143 - 4) - 1;
          if ( !v147 )
          {
            *(_DWORD *)(v143 - 4) = v146;
            goto LABEL_162;
          }
          ++*(_DWORD *)(v147 + 8);
          v149 = (unsigned int)(*(_DWORD *)(v143 - 4) - 1);
          v150 = *(_QWORD *)(v143 + 8 * v149);
          v148 = *(_DWORD *)(v143 - 4) - 1;
          *(_DWORD *)(v143 - 4) = v149;
          if ( !v150 )
          {
LABEL_162:
            v151 = (unsigned int)(v148 - 1);
            v152 = *(_QWORD *)(v143 + 8 * v151);
            if ( !v152 )
            {
              *(_DWORD *)(v143 - 4) = v151;
              goto LABEL_166;
            }
            ++*(_DWORD *)(v152 + 8);
            v153 = (unsigned int)(*(_DWORD *)(v143 - 4) - 1);
            v154 = *(_QWORD *)(v143 + 8 * v153);
            *(_DWORD *)(v143 - 4) = v153;
            if ( !v154 )
              goto LABEL_166;
            goto LABEL_164;
          }
        }
        else
        {
          v147 = MEMORY[0x7FFFFFFF8];
          if ( !MEMORY[0x7FFFFFFF8] )
          {
            v148 = --MEMORY[0xFFFFFFFFFFFFFFFC];
            goto LABEL_162;
          }
          ++*(_DWORD *)(MEMORY[0x7FFFFFFF8] + 8LL);
          v150 = MEMORY[0x7FFFFFFF8];
          --MEMORY[0xFFFFFFFFFFFFFFFC];
        }
        v23 = (*(_DWORD *)(v150 + 8))-- == 1;
        if ( v23 )
        {
          sub_15D7BC0(v145, v150);
          v143 = a1[11];
          if ( !v143 )
          {
            v152 = MEMORY[0x7FFFFFFF8];
            if ( !MEMORY[0x7FFFFFFF8] )
            {
              --MEMORY[0xFFFFFFFFFFFFFFFC];
              goto LABEL_166;
            }
            ++*(_DWORD *)(MEMORY[0x7FFFFFFF8] + 8LL);
            v154 = MEMORY[0x7FFFFFFF8];
            v145 = a1[10];
            --MEMORY[0xFFFFFFFFFFFFFFFC];
LABEL_164:
            v23 = (*(_DWORD *)(v154 + 8))-- == 1;
            if ( v23 )
              sub_15D7BC0(v145, v154);
LABEL_166:
            v155 = sub_15E2470(a1[1], v152, v147);
            v156 = a1[63];
            v157 = a1[62];
            v158 = v155;
            if ( v155 )
            {
              v159 = *(_DWORD *)(v155 + 8) + 1;
              *(_DWORD *)(v158 + 8) = v159;
              if ( v157 )
              {
                v23 = (*(_DWORD *)(v157 + 8))-- == 1;
                if ( v23 )
                {
                  *(_QWORD *)v243 = v158;
                  sub_15D7BC0(v156, v157);
                  v158 = *(_QWORD *)v243;
                  a1[62] = *(_QWORD *)v243;
                  v159 = *(_DWORD *)(*(_QWORD *)v243 + 8LL);
                }
                else
                {
                  a1[62] = v158;
                  v159 = *(_DWORD *)(v158 + 8);
                }
              }
              else
              {
                a1[62] = v158;
              }
              *(_DWORD *)(v158 + 8) = v159 + 1;
            }
            else if ( v157 && (v23 = *(_DWORD *)(v157 + 8) == 1, --*(_DWORD *)(v157 + 8), v23) )
            {
              sub_15D7BC0(v156, v157);
              a1[62] = 0;
              v158 = 0;
            }
            else
            {
              a1[62] = 0;
            }
            v160 = (_QWORD *)a1[11];
            if ( v160 )
            {
              v161 = *((_DWORD *)v160 - 1);
              if ( v161 == *((_DWORD *)v160 - 2) )
              {
                v222 = (3 * v161 + 1) >> 1;
                v223 = 8 * v222 + 8;
                if ( 8 * v161 + 8 >= (unsigned int)v223 || v161 >= v222 )
                {
                  v235 = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0(&v251, "Overflow encountered when expanding vector");
                  *v235 = (char *)off_1C63128;
                  sub_2333C0(v235 + 1, &v251);
                  sub_233E40((__int64)&v251);
                  __cxa_throw(v235, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                }
                v248 = (3 * v161 + 1) >> 1;
                *(_QWORD *)v241 = v158;
                v224 = (unsigned int *)sub_186B300(v160 - 1, v223);
                v160 = v224 + 2;
                v158 = *(_QWORD *)v241;
                a1[11] = v224 + 2;
                *v224 = v248;
                LODWORD(v224) = v224[1];
                v164 = &v160[(unsigned int)v224];
                v163 = (_DWORD)v224 + 1;
              }
              else
              {
                v162 = v161;
                v163 = v161 + 1;
                v164 = &v160[v162];
              }
            }
            else
            {
              *(_QWORD *)v245 = v158;
              v226 = (_QWORD *)sub_186B270(0x18u);
              *v226 = 2;
              v158 = *(_QWORD *)v245;
              v163 = 1;
              v160 = v226 + 1;
              a1[11] = v160;
              v164 = v160;
            }
            *v164 = v158;
            *((_DWORD *)v160 - 1) = v163;
            if ( v152 )
            {
              v23 = (*(_DWORD *)(v152 + 8))-- == 1;
              if ( v23 )
                sub_15D7BC0(v144, v152);
            }
            if ( v147 )
            {
              v23 = (*(_DWORD *)(v147 + 8))-- == 1;
              if ( v23 )
                sub_15D7BC0(v144, v147);
            }
            v165 = 0xFFFFFFFFLL;
            v166 = (_QWORD *)a1[7];
            if ( v166 )
              v165 = (unsigned int)(*((_DWORD *)v166 - 1) - 1);
            v167 = v166[v165];
            if ( v167 )
              ++*(_DWORD *)(v167 + 8);
            v168 = a1[60];
            if ( v168 )
            {
              v169 = a1[61];
              v23 = (*(_DWORD *)(v168 + 8))-- == 1;
              if ( v23 )
              {
                sub_15D7BC0(v169, v168);
                v166 = (_QWORD *)a1[7];
              }
            }
            v170 = *((_DWORD *)v166 - 1);
            v171 = a1[6];
            a1[60] = v167;
            v172 = v170 - 1;
            v173 = v166[v170 - 1];
            *((_DWORD *)v166 - 1) = v170 - 1;
            if ( v173 )
            {
              v23 = (*(_DWORD *)(v173 + 8))-- == 1;
              if ( v23 )
              {
                sub_15D7BC0(v171, v173);
                v166 = (_QWORD *)a1[7];
                v171 = a1[6];
              }
              v172 = *((_DWORD *)v166 - 1);
            }
            v174 = (unsigned int)(v172 - 1);
            v175 = v166[v174];
            *((_DWORD *)v166 - 1) = v174;
            if ( v175 && (v23 = *(_DWORD *)(v175 + 8) == 1, --*(_DWORD *)(v175 + 8), v23) )
            {
              sub_15D7BC0(v171, v175);
              v176 = a1[60];
              v166 = (_QWORD *)a1[7];
              if ( !v176 )
              {
LABEL_195:
                v177 = v166;
                if ( !v166 )
                {
                  v227 = (_QWORD *)sub_186B270(0x18u);
                  *v227 = 2;
                  v180 = 1;
                  v177 = v227 + 1;
                  a1[7] = v227 + 1;
                  v181 = v227 + 1;
                  goto LABEL_198;
                }
LABEL_196:
                v178 = *((_DWORD *)v166 - 1);
                if ( v178 == *((_DWORD *)v166 - 2) )
                {
                  v217 = (3 * v178 + 1) >> 1;
                  v218 = 8 * v217 + 8;
                  if ( 8 * v178 + 8 >= v218 || v178 >= v217 )
                  {
                    v232 = (char **)__cxa_allocate_exception(0x28u);
                    sub_24ABB0(&v251, "Overflow encountered when expanding vector");
                    *v232 = (char *)off_1C63128;
                    sub_2333C0(v232 + 1, &v251);
                    sub_233E40((__int64)&v251);
                    __cxa_throw(
                      v232,
                      (struct type_info *)&`typeinfo for'default_exception,
                      (void (*)(void *))sub_230E50);
                  }
                  v219 = (unsigned int *)sub_186B300(v166 - 1, v218);
                  v177 = v219 + 2;
                  *v219 = v217;
                  v220 = v219[1];
                  a1[7] = v177;
                  v221 = v220;
                  v181 = &v177[v220];
                  v180 = v221 + 1;
                }
                else
                {
                  v179 = v178;
                  v180 = v178 + 1;
                  v181 = &v166[v179];
                }
LABEL_198:
                *v181 = v176;
                *((_DWORD *)v177 - 1) = v180;
                if ( (*(_BYTE *)(a3 + 8) & 1) == 0 )
                  goto LABEL_200;
                goto LABEL_199;
              }
            }
            else
            {
              v176 = a1[60];
              v177 = v166;
              if ( !v176 )
                goto LABEL_196;
            }
            ++*(_DWORD *)(v176 + 8);
            goto LABEL_195;
          }
          v148 = *(_DWORD *)(v143 - 4);
          v145 = a1[10];
        }
        else
        {
          v148 = *(_DWORD *)(v143 - 4);
        }
        goto LABEL_162;
      }
      if ( (*(_BYTE *)(a3 + 8) & 2) != 0 )
      {
        v89 = sub_15DC610(
                a1[1],
                v12,
                v16,
                v237[0],
                v30,
                v31,
                v236,
                v237[0],
                v246[0],
                v247,
                v249,
                v250,
                v251,
                v252,
                v253,
                v254);
        v90 = v89;
        if ( v89 )
          ++*(_DWORD *)(v89 + 8);
        v91 = a1[60];
        if ( v91 )
        {
          v92 = a1[61];
          v23 = (*(_DWORD *)(v91 + 8))-- == 1;
          if ( v23 )
          {
            *(_QWORD *)v242 = v89;
            sub_15D7BC0(v92, v91);
            v90 = *(_QWORD *)v242;
          }
        }
        v93 = a1[1];
        a1[60] = v90;
        v94 = sub_15DE370(v93);
        v95 = v94;
        if ( v94 )
          ++*(_DWORD *)(v94 + 8);
        v96 = a1[62];
        if ( v96 )
        {
          v97 = a1[63];
          v23 = (*(_DWORD *)(v96 + 8))-- == 1;
          if ( v23 )
            sub_15D7BC0(v97, v96);
        }
        v98 = (_QWORD *)a1[7];
        a1[62] = v95;
        if ( !v98 )
          goto LABEL_99;
      }
      else
      {
        v113 = a1[60];
        ++*(_DWORD *)(v236 + 8);
        if ( v113 )
        {
          v114 = a1[61];
          v23 = (*(_DWORD *)(v113 + 8))-- == 1;
          if ( v23 )
            sub_15D7BC0(v114, v113);
        }
        v98 = (_QWORD *)a1[7];
        a1[60] = v236;
        if ( !v98 )
        {
          v99 = v236;
          goto LABEL_100;
        }
      }
      v115 = *(_DWORD *)(a3 + 12);
      v116 = (unsigned __int64)&v98[*((unsigned int *)v98 - 1)];
      v117 = &v98[v115];
      if ( (unsigned __int64)v117 >= v116 )
        goto LABEL_236;
      do
      {
        v118 = *v117;
        if ( *v117 )
        {
          v119 = a1[6];
          v23 = (*(_DWORD *)(v118 + 8))-- == 1;
          if ( v23 )
            sub_15D7BC0(v119, v118);
        }
        ++v117;
      }
      while ( (unsigned __int64)v117 < v116 );
      v98 = (_QWORD *)a1[7];
      if ( v98 )
      {
LABEL_236:
        v99 = a1[60];
        *((_DWORD *)v98 - 1) = v115;
        if ( v99 )
        {
          ++*(_DWORD *)(v99 + 8);
          v115 = *((_DWORD *)v98 - 1);
        }
        if ( *((_DWORD *)v98 - 2) == v115 )
        {
          v199 = (3 * v115 + 1) >> 1;
          v200 = 8 * v199 + 8;
          if ( 8 * v115 + 8 >= v200 || v115 >= v199 )
          {
            v233 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(&v251, "Overflow encountered when expanding vector");
            *v233 = (char *)off_1C63128;
            sub_2333C0(v233 + 1, &v251);
            sub_233E40((__int64)&v251);
            __cxa_throw(v233, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v201 = (unsigned int *)sub_186B300(v98 - 1, v200);
          v202 = v201[1];
          v98 = v201 + 2;
          *v201 = v199;
          a1[7] = v201 + 2;
          LODWORD(v201) = v202;
          v102 = &v98[v202];
          v101 = (_DWORD)v201 + 1;
        }
        else
        {
          v102 = &v98[*((unsigned int *)v98 - 1)];
          v101 = *((_DWORD *)v98 - 1) + 1;
        }
        goto LABEL_102;
      }
LABEL_99:
      v99 = a1[60];
      if ( !v99 )
      {
LABEL_101:
        v100 = (_QWORD *)sub_186B270(0x18u);
        v98 = v100 + 1;
        *v100 = 2;
        v101 = 1;
        a1[7] = v98;
        v102 = v98;
LABEL_102:
        *v102 = v99;
        *((_DWORD *)v98 - 1) = v101;
        if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
          sub_15843A0(a1, v236, a1[60], a1[62]);
        v103 = (_QWORD *)a1[11];
        if ( !v103 )
          goto LABEL_263;
        v104 = *(_DWORD *)(a3 + 12);
        v105 = (unsigned __int64)&v103[*((unsigned int *)v103 - 1)];
        v106 = &v103[v104];
        if ( (unsigned __int64)v106 >= v105 )
          goto LABEL_221;
        do
        {
          v107 = *v106;
          if ( *v106 )
          {
            v108 = a1[10];
            v23 = (*(_DWORD *)(v107 + 8))-- == 1;
            if ( v23 )
              sub_15D7BC0(v108, v107);
          }
          ++v106;
        }
        while ( (unsigned __int64)v106 < v105 );
        v103 = (_QWORD *)a1[11];
        if ( v103 )
        {
LABEL_221:
          v187 = a1[62];
          *((_DWORD *)v103 - 1) = v104;
          if ( v187 )
          {
            ++*(_DWORD *)(v187 + 8);
            v104 = *((_DWORD *)v103 - 1);
          }
          if ( *((_DWORD *)v103 - 2) == v104 )
          {
            v195 = (3 * v104 + 1) >> 1;
            v196 = 8 * v195 + 8;
            if ( 8 * v104 + 8 >= v196 || v104 >= v195 )
            {
              v230 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(&v251, "Overflow encountered when expanding vector");
              *v230 = (char *)off_1C63128;
              sub_2333C0(v230 + 1, &v251);
              sub_233E40((__int64)&v251);
              __cxa_throw(v230, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v197 = (unsigned int *)sub_186B300(v103 - 1, v196);
            v198 = v197[1];
            v103 = v197 + 2;
            *v197 = v195;
            a1[11] = v197 + 2;
            LODWORD(v197) = v198;
            v188 = &v103[v198];
            v189 = (_DWORD)v197 + 1;
          }
          else
          {
            v188 = &v103[*((unsigned int *)v103 - 1)];
            v189 = *((_DWORD *)v103 - 1) + 1;
          }
        }
        else
        {
LABEL_263:
          v187 = a1[62];
          if ( v187 )
            ++*(_DWORD *)(v187 + 8);
          v213 = (_QWORD *)sub_186B270(0x18u);
          v103 = v213 + 1;
          *v213 = 2;
          v189 = 1;
          a1[11] = v103;
          v188 = v103;
        }
        *v188 = v187;
        v190 = a1[62];
        *((_DWORD *)v103 - 1) = v189;
        if ( v190 )
        {
          v191 = a1[63];
          v23 = (*(_DWORD *)(v190 + 8))-- == 1;
          if ( v23 )
            sub_15D7BC0(v191, v190);
        }
        result = a1[5];
        v192 = a1[60];
        a1[62] = 0;
        v193 = *(_DWORD *)(result - 4);
        *(_DWORD *)(result - 4) = v193 - 1;
        if ( v193 != 1 && v236 != v192 )
        {
          *(_BYTE *)(result + 16LL * (unsigned int)(v193 - 2) + 8) |= 2u;
          v192 = a1[60];
        }
        if ( v192 )
        {
          v194 = a1[61];
          v23 = (*(_DWORD *)(v192 + 8))-- == 1;
          if ( v23 )
            result = sub_15D7BC0(v194, v192);
        }
        a1[60] = 0;
        goto LABEL_209;
      }
LABEL_100:
      ++*(_DWORD *)(v99 + 8);
      goto LABEL_101;
  }
  v40 = a1[11];
  v41 = a1[1];
  v42 = a1[10];
  if ( v40 )
  {
    v43 = (unsigned int)(*(_DWORD *)(v40 - 4) - 1);
    v44 = *(_QWORD *)(v40 + 8 * v43);
    v45 = *(_DWORD *)(v40 - 4) - 1;
    if ( !v44 )
    {
      *(_DWORD *)(v40 - 4) = v43;
      goto LABEL_34;
    }
    ++*(_DWORD *)(v44 + 8);
    v46 = (unsigned int)(*(_DWORD *)(v40 - 4) - 1);
    v47 = *(_QWORD *)(v40 + 8 * v46);
    v45 = *(_DWORD *)(v40 - 4) - 1;
    *(_DWORD *)(v40 - 4) = v46;
    if ( !v47 )
    {
LABEL_34:
      v48 = (unsigned int)(v45 - 1);
      v49 = *(_QWORD *)(v40 + 8 * v48);
      if ( !v49 )
      {
        *(_DWORD *)(v40 - 4) = v48;
        goto LABEL_38;
      }
      ++*(_DWORD *)(v49 + 8);
      v50 = (unsigned int)(*(_DWORD *)(v40 - 4) - 1);
      v51 = *(_QWORD *)(v40 + 8 * v50);
      *(_DWORD *)(v40 - 4) = v50;
      if ( !v51 )
        goto LABEL_38;
      goto LABEL_36;
    }
  }
  else
  {
    v44 = MEMORY[0x7FFFFFFF8];
    if ( !MEMORY[0x7FFFFFFF8] )
    {
      v45 = --MEMORY[0xFFFFFFFFFFFFFFFC];
      goto LABEL_34;
    }
    ++*(_DWORD *)(MEMORY[0x7FFFFFFF8] + 8LL);
    v47 = MEMORY[0x7FFFFFFF8];
    --MEMORY[0xFFFFFFFFFFFFFFFC];
  }
  v23 = (*(_DWORD *)(v47 + 8))-- == 1;
  if ( !v23 )
  {
    v45 = *(_DWORD *)(v40 - 4);
    goto LABEL_34;
  }
  sub_15D7BC0(v42, v47);
  v40 = a1[11];
  if ( v40 )
  {
    v45 = *(_DWORD *)(v40 - 4);
    v42 = a1[10];
    goto LABEL_34;
  }
  v49 = MEMORY[0x7FFFFFFF8];
  if ( !MEMORY[0x7FFFFFFF8] )
  {
    --MEMORY[0xFFFFFFFFFFFFFFFC];
    goto LABEL_38;
  }
  ++*(_DWORD *)(MEMORY[0x7FFFFFFF8] + 8LL);
  v51 = MEMORY[0x7FFFFFFF8];
  v42 = a1[10];
  --MEMORY[0xFFFFFFFFFFFFFFFC];
LABEL_36:
  v23 = (*(_DWORD *)(v51 + 8))-- == 1;
  if ( v23 )
    sub_15D7BC0(v42, v51);
LABEL_38:
  v52 = sub_15E2470(a1[1], v49, v44);
  v53 = a1[62];
  v54 = a1[63];
  v55 = v52;
  if ( v52 )
  {
    v56 = *(_DWORD *)(v52 + 8) + 1;
    *(_DWORD *)(v55 + 8) = v56;
    if ( v53 )
    {
      v23 = (*(_DWORD *)(v53 + 8))-- == 1;
      if ( v23 )
        sub_15D7BC0(v54, v53);
      a1[62] = v55;
      v56 = *(_DWORD *)(v55 + 8);
    }
    else
    {
      a1[62] = v55;
    }
    *(_DWORD *)(v55 + 8) = v56 + 1;
  }
  else
  {
    if ( v53 )
    {
      v23 = (*(_DWORD *)(v53 + 8))-- == 1;
      if ( v23 )
        sub_15D7BC0(v54, v53);
    }
    a1[62] = 0;
  }
  v57 = (_QWORD *)a1[11];
  if ( v57 )
  {
    v58 = *((_DWORD *)v57 - 1);
    if ( v58 == *((_DWORD *)v57 - 2) )
    {
      v80 = (3 * v58 + 1) >> 1;
      v81 = 8 * v80 + 8;
      if ( 8 * v58 + 8 >= (unsigned int)v81 || v58 >= v80 )
      {
        v231 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(&v251, "Overflow encountered when expanding vector");
        *v231 = (char *)off_1C63128;
        sub_2333C0(v231 + 1, &v251);
        sub_233E40((__int64)&v251);
        __cxa_throw(v231, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v239 = (3 * v58 + 1) >> 1;
      v82 = (unsigned int *)sub_186B300(v57 - 1, v81);
      v83 = v82[1];
      v57 = v82 + 2;
      a1[11] = v82 + 2;
      *v82 = v239;
      LODWORD(v82) = v83;
      v61 = &v57[v83];
      v60 = (_DWORD)v82 + 1;
    }
    else
    {
      v59 = v58;
      v60 = v58 + 1;
      v61 = &v57[v59];
    }
  }
  else
  {
    v211 = (_QWORD *)sub_186B270(0x18u);
    v57 = v211 + 1;
    *v211 = 2;
    v60 = 1;
    a1[11] = v57;
    v61 = v57;
  }
  *v61 = v55;
  *((_DWORD *)v57 - 1) = v60;
  if ( v49 )
  {
    v23 = (*(_DWORD *)(v49 + 8))-- == 1;
    if ( v23 )
      sub_15D7BC0(v41, v49);
  }
  if ( v44 )
  {
    v23 = (*(_DWORD *)(v44 + 8))-- == 1;
    if ( v23 )
      sub_15D7BC0(v41, v44);
  }
  v62 = 0xFFFFFFFFLL;
  v63 = (_QWORD *)a1[7];
  if ( v63 )
    v62 = (unsigned int)(*((_DWORD *)v63 - 1) - 1);
  v64 = v63[v62];
  if ( v64 )
    ++*(_DWORD *)(v64 + 8);
  v65 = a1[60];
  if ( v65 )
  {
    v66 = a1[61];
    v23 = (*(_DWORD *)(v65 + 8))-- == 1;
    if ( v23 )
    {
      sub_15D7BC0(v66, v65);
      v63 = (_QWORD *)a1[7];
    }
  }
  v67 = *((_DWORD *)v63 - 1);
  v68 = a1[6];
  a1[60] = v64;
  v69 = v67 - 1;
  v70 = v63[v67 - 1];
  *((_DWORD *)v63 - 1) = v67 - 1;
  if ( v70 )
  {
    v23 = (*(_DWORD *)(v70 + 8))-- == 1;
    if ( v23 )
    {
      sub_15D7BC0(v68, v70);
      v63 = (_QWORD *)a1[7];
      v68 = a1[6];
    }
    v69 = *((_DWORD *)v63 - 1);
  }
  v71 = (unsigned int)(v69 - 1);
  v72 = v63[v71];
  *((_DWORD *)v63 - 1) = v71;
  if ( !v72 || (v23 = *(_DWORD *)(v72 + 8) == 1, --*(_DWORD *)(v72 + 8), !v23) )
  {
    v73 = a1[60];
    v74 = v63;
    if ( !v73 )
      goto LABEL_69;
    goto LABEL_67;
  }
  sub_15D7BC0(v68, v72);
  v73 = a1[60];
  v63 = (_QWORD *)a1[7];
  if ( v73 )
LABEL_67:
    ++*(_DWORD *)(v73 + 8);
  v74 = v63;
  if ( v63 )
  {
LABEL_69:
    v75 = *((_DWORD *)v63 - 1);
    if ( v75 == *((_DWORD *)v63 - 2) )
    {
      v84 = (3 * v75 + 1) >> 1;
      v85 = 8 * v84 + 8;
      if ( 8 * v75 + 8 >= (unsigned int)v85 || v75 >= v84 )
      {
        v229 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(&v251, "Overflow encountered when expanding vector");
        *v229 = (char *)off_1C63128;
        sub_2333C0(v229 + 1, &v251);
        sub_233E40((__int64)&v251);
        __cxa_throw(v229, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v86 = (unsigned int *)sub_186B300(v63 - 1, v85);
      v74 = v86 + 2;
      *v86 = v84;
      v87 = v86[1];
      a1[7] = v74;
      v88 = v87;
      v78 = &v74[v87];
      v77 = v88 + 1;
    }
    else
    {
      v76 = v75;
      v77 = v75 + 1;
      v78 = &v63[v76];
    }
    goto LABEL_71;
  }
  v212 = (_QWORD *)sub_186B270(0x18u);
  v77 = 1;
  v74 = v212 + 1;
  *v212 = 2;
  a1[7] = v212 + 1;
  v78 = v212 + 1;
LABEL_71:
  *v78 = v73;
  *((_DWORD *)v74 - 1) = v77;
  if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
    sub_15843A0(a1, v236, a1[60], a1[62]);
  result = a1[5];
  v79 = *(_DWORD *)(result - 4);
  *(_DWORD *)(result - 4) = v79 - 1;
  if ( v79 != 1 )
    *(_BYTE *)(result + 16LL * (unsigned int)(v79 - 2) + 8) |= 2u;
  return result;
}

