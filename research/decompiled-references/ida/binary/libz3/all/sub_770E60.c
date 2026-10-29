__int64 __fastcall sub_770E60(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // al
  unsigned int v7; // ebp
  __int64 v8; // rsi
  int v9; // eax
  __int64 result; // rax
  unsigned int v11; // eax
  unsigned int v12; // edx
  __int64 v13; // rax
  _QWORD *v14; // r14
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
  __int64 v27; // rdx
  int v28; // r8d
  int v29; // r9d
  _QWORD *v30; // rdx
  unsigned int v31; // r8d
  unsigned __int64 v32; // r14
  __int64 *v33; // r12
  __int64 v34; // rsi
  __int64 v35; // rdi
  __int64 v36; // rsi
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rdi
  __int64 v40; // rcx
  __int64 v41; // r12
  int v42; // eax
  __int64 v43; // rcx
  __int64 v44; // rsi
  __int64 v45; // rcx
  __int64 v46; // rbp
  __int64 v47; // rcx
  __int64 v48; // rsi
  __int64 v49; // rax
  __int64 v50; // rsi
  __int64 v51; // rdi
  __int64 v52; // r14
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
  __int64 v106; // rax
  __int64 v107; // rsi
  __int64 v108; // rdi
  __int64 v109; // rsi
  __int64 v110; // rdi
  unsigned int v111; // r14d
  unsigned __int64 v112; // rcx
  __int64 *v113; // r12
  __int64 v114; // rsi
  __int64 v115; // rdi
  __int64 v116; // r12
  _QWORD *v117; // rdx
  int v118; // eax
  _QWORD *v119; // rcx
  __int64 v120; // rax
  unsigned __int64 v121; // r12
  __int64 *v122; // r14
  __int64 v123; // rsi
  __int64 v124; // rdi
  __int64 v125; // rdx
  __int64 v126; // rax
  __int64 v127; // rdi
  __int64 v128; // rsi
  __int64 v129; // r12
  int v130; // eax
  _QWORD *v131; // rdx
  unsigned int v132; // eax
  __int64 v133; // rcx
  int v134; // eax
  __int64 *v135; // rcx
  __int64 v136; // rsi
  __int64 v137; // rdi
  __int64 v138; // rsi
  int v139; // ecx
  __int64 v140; // rsi
  __int64 v141; // rdi
  __int64 v142; // rsi
  __int64 v143; // rdi
  __int64 v144; // r12
  _QWORD *v145; // rcx
  int v146; // eax
  __int64 v147; // rsi
  __int64 v148; // rdi
  __int64 v149; // rsi
  int v150; // ecx
  __int64 v151; // rdi
  __int64 v152; // rdx
  __int64 v153; // rdi
  __int64 v154; // rcx
  __int64 v155; // r14
  int v156; // eax
  __int64 v157; // rcx
  __int64 v158; // rsi
  __int64 v159; // rcx
  __int64 v160; // r12
  __int64 v161; // rcx
  __int64 v162; // rsi
  __int64 v163; // rax
  __int64 v164; // rdi
  __int64 v165; // rsi
  __int64 v166; // r8
  int v167; // eax
  _QWORD *v168; // rdx
  unsigned int v169; // eax
  __int64 v170; // rcx
  int v171; // eax
  __int64 *v172; // rcx
  __int64 v173; // rdx
  _QWORD *v174; // rax
  __int64 v175; // r12
  __int64 v176; // rsi
  __int64 v177; // rdi
  int v178; // ecx
  __int64 v179; // rdi
  int v180; // edx
  __int64 v181; // rsi
  __int64 v182; // rcx
  __int64 v183; // rsi
  __int64 v184; // r12
  _QWORD *v185; // rcx
  unsigned int v186; // edx
  __int64 v187; // rsi
  int v188; // edx
  _QWORD *v189; // rax
  unsigned int v190; // r13d
  unsigned int v191; // eax
  unsigned int *v192; // rax
  __int64 v193; // rcx
  unsigned int v194; // r8d
  unsigned int v195; // eax
  unsigned int *v196; // rax
  __int64 v197; // rcx
  unsigned int v198; // r14d
  unsigned int v199; // eax
  unsigned int *v200; // rax
  __int64 v201; // rcx
  unsigned int v202; // r14d
  unsigned int v203; // ecx
  unsigned int *v204; // rax
  __int64 v205; // rcx
  _QWORD *v206; // rax
  _QWORD *v207; // rax
  _QWORD *v208; // rax
  __int64 v209; // rax
  __int64 v210; // rsi
  __int64 v211; // rdi
  unsigned int v212; // ecx
  size_t v213; // rsi
  unsigned int *v214; // rax
  unsigned int v215; // r14d
  unsigned int v216; // ecx
  unsigned int *v217; // rax
  __int64 v218; // rax
  int v219; // edx
  _QWORD *v220; // rdx
  _QWORD *v221; // rax
  _QWORD *v222; // rdx
  char **exception; // r13
  char **v224; // r13
  char **v225; // r13
  char **v226; // r15
  char **v227; // r13
  char **v228; // rbp
  char **v229; // r14
  char **v230; // r13
  _QWORD *v231; // [rsp+0h] [rbp-78h]
  unsigned int v232; // [rsp+0h] [rbp-78h]
  int v233[2]; // [rsp+0h] [rbp-78h]
  int v234[2]; // [rsp+0h] [rbp-78h]
  unsigned int v235; // [rsp+0h] [rbp-78h]
  int v236[2]; // [rsp+0h] [rbp-78h]
  int v237[2]; // [rsp+0h] [rbp-78h]
  int v238[2]; // [rsp+0h] [rbp-78h]
  int v239; // [rsp+8h] [rbp-70h]
  unsigned int v240; // [rsp+8h] [rbp-70h]
  int v241[2]; // [rsp+8h] [rbp-70h]
  int v242[2]; // [rsp+8h] [rbp-70h]
  int v243[2]; // [rsp+8h] [rbp-70h]
  int v244[2]; // [rsp+8h] [rbp-70h]
  int v245[2]; // [rsp+10h] [rbp-68h]
  int v246; // [rsp+18h] [rbp-60h]
  unsigned int v247; // [rsp+1Ch] [rbp-5Ch]
  __int64 v248; // [rsp+20h] [rbp-58h] BYREF
  char v249; // [rsp+28h] [rbp-50h]
  int v250; // [rsp+30h] [rbp-48h]
  int v251; // [rsp+38h] [rbp-40h]
  int v252; // [rsp+40h] [rbp-38h]
  void *v253; // [rsp+48h] [rbp-30h]

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
        result = sub_76FC00(a1, v8, ((unsigned __int8)v9 >> 4) & 3);
        if ( !(_BYTE)result )
          return result;
      }
      v13 = *(_QWORD *)(a1 + 56);
      v14 = *(_QWORD **)(a2 + 16);
      if ( v13 )
        v15 = *(_DWORD *)(v13 - 4);
      else
        v15 = 0;
      v16 = *(unsigned int *)(a3 + 12);
      v17 = v15 - v16;
      v231 = (_QWORD *)(v13 + 8 * v16);
      *(_QWORD *)v245 = *(_QWORD *)(a1 + 8);
      sub_1584610(a1, v16);
      v20 = *(_QWORD *)(a1 + 88);
      if ( v20 )
        v21 = *(_DWORD *)(v20 - 4);
      else
        v21 = 0;
      v22 = v21 - *(_DWORD *)(a3 + 12);
      if ( v22 )
      {
        v105 = sub_15DC610(
                 *(_QWORD *)(a1 + 8),
                 (int)v14,
                 v17,
                 (int)v231,
                 v18,
                 v19,
                 (int)v231,
                 v22,
                 v245[0],
                 v246,
                 v248,
                 v249,
                 v250,
                 v251,
                 v252,
                 v253);
        v26 = v105;
        if ( v105 )
          ++*(_DWORD *)(v105 + 8);
        v106 = sub_15E2980(*(_QWORD *)(a1 + 8));
        v27 = v106;
        if ( v106 )
          ++*(_DWORD *)(v106 + 8);
        v107 = *(_QWORD *)(a1 + 496);
        if ( v107 )
        {
          v108 = *(_QWORD *)(a1 + 504);
          v25 = (*(_DWORD *)(v107 + 8))-- == 1;
          if ( v25 )
          {
            *(_QWORD *)v241 = v106;
            sub_15D7BC0(v108, v107);
            v27 = *(_QWORD *)v241;
          }
        }
      }
      else
      {
        v23 = *(_QWORD *)(a1 + 496);
        ++*(_DWORD *)(a2 + 8);
        if ( v23 )
        {
          v24 = *(_QWORD *)(a1 + 504);
          v25 = (*(_DWORD *)(v23 + 8))-- == 1;
          if ( v25 )
            sub_15D7BC0(v24, v23);
        }
        v26 = a2;
        v27 = 0;
      }
      *(_QWORD *)(a1 + 496) = v27;
      v239 = sub_76B2E0(*(_QWORD **)(a1 + 144), v14, v17, v231, (__int64 *)(a1 + 480), (int)a1 + 512);
      if ( v239 != 5 )
      {
        v30 = *(_QWORD **)(a1 + 56);
        if ( !v30 )
          goto LABEL_127;
        v31 = *(_DWORD *)(a3 + 12);
        v32 = (unsigned __int64)&v30[*((unsigned int *)v30 - 1)];
        v33 = &v30[v31];
        if ( (unsigned __int64)v33 >= v32 )
          goto LABEL_196;
        do
        {
          v34 = *v33;
          if ( *v33 )
          {
            v35 = *(_QWORD *)(a1 + 48);
            v25 = (*(_DWORD *)(v34 + 8))-- == 1;
            if ( v25 )
            {
              v232 = v31;
              sub_15D7BC0(v35, v34);
              v31 = v232;
            }
          }
          ++v33;
        }
        while ( (unsigned __int64)v33 < v32 );
        v30 = *(_QWORD **)(a1 + 56);
        if ( v30 )
        {
LABEL_196:
          v116 = *(_QWORD *)(a1 + 480);
          *((_DWORD *)v30 - 1) = v31;
          if ( v116 )
          {
            ++*(_DWORD *)(v116 + 8);
            v31 = *((_DWORD *)v30 - 1);
          }
          if ( *((_DWORD *)v30 - 2) == v31 )
          {
            v198 = (3 * v31 + 1) >> 1;
            v199 = 8 * v198 + 8;
            if ( 8 * v31 + 8 >= v199 || v31 >= v198 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_76A180(&v248, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, &v248);
              sub_233E40((__int64)&v248);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v200 = (unsigned int *)sub_186B300(v30 - 1, v199);
            v201 = v200[1];
            v30 = v200 + 2;
            *v200 = v198;
            *(_QWORD *)(a1 + 56) = v200 + 2;
            LODWORD(v200) = v201;
            v119 = &v30[v201];
            v118 = (_DWORD)v200 + 1;
          }
          else
          {
            v119 = &v30[*((unsigned int *)v30 - 1)];
            v118 = *((_DWORD *)v30 - 1) + 1;
          }
        }
        else
        {
LABEL_127:
          v116 = *(_QWORD *)(a1 + 480);
          if ( v116 )
            ++*(_DWORD *)(v116 + 8);
          v117 = (_QWORD *)sub_186B270(0x18u);
          *v117 = 2;
          v118 = 1;
          v30 = v117 + 1;
          *(_QWORD *)(a1 + 56) = v30;
          v119 = v30;
        }
        *v119 = v116;
        *((_DWORD *)v30 - 1) = v118;
        v120 = *(_QWORD *)(a1 + 88);
        if ( v120 )
        {
          v121 = v120 + 8LL * *(unsigned int *)(v120 - 4);
          v235 = *(_DWORD *)(a3 + 12);
          v122 = (__int64 *)(v120 + 8LL * v235);
          if ( (unsigned __int64)v122 >= v121 )
            goto LABEL_138;
          do
          {
            v123 = *v122;
            if ( *v122 )
            {
              v124 = *(_QWORD *)(a1 + 80);
              v25 = (*(_DWORD *)(v123 + 8))-- == 1;
              if ( v25 )
                sub_15D7BC0(v124, v123);
            }
            ++v122;
          }
          while ( (unsigned __int64)v122 < v121 );
          v120 = *(_QWORD *)(a1 + 88);
          if ( v120 )
LABEL_138:
            *(_DWORD *)(v120 - 4) = v235;
        }
        v125 = *(_QWORD *)(a1 + 512);
        if ( !v125 )
        {
          v209 = sub_15DE370(*(_QWORD *)(a1 + 8));
          v125 = v209;
          if ( v209 )
            ++*(_DWORD *)(v209 + 8);
          v210 = *(_QWORD *)(a1 + 512);
          if ( v210 )
          {
            v211 = *(_QWORD *)(a1 + 520);
            v25 = (*(_DWORD *)(v210 + 8))-- == 1;
            if ( v25 )
            {
              *(_QWORD *)v238 = v209;
              sub_15D7BC0(v211, v210);
              v125 = *(_QWORD *)v238;
            }
          }
          *(_QWORD *)(a1 + 512) = v125;
        }
        v126 = sub_15E2470(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 496), v125);
        v127 = *(_QWORD *)(a1 + 504);
        v128 = *(_QWORD *)(a1 + 496);
        v129 = v126;
        if ( v126 )
        {
          v130 = *(_DWORD *)(v126 + 8) + 1;
          *(_DWORD *)(v129 + 8) = v130;
          if ( v128 )
          {
            v25 = (*(_DWORD *)(v128 + 8))-- == 1;
            if ( v25 )
              sub_15D7BC0(v127, v128);
            *(_QWORD *)(a1 + 496) = v129;
            v130 = *(_DWORD *)(v129 + 8);
          }
          else
          {
            *(_QWORD *)(a1 + 496) = v129;
          }
          *(_DWORD *)(v129 + 8) = v130 + 1;
        }
        else
        {
          if ( v128 )
          {
            v25 = (*(_DWORD *)(v128 + 8))-- == 1;
            if ( v25 )
              sub_15D7BC0(v127, v128);
          }
          *(_QWORD *)(a1 + 496) = 0;
        }
        v131 = *(_QWORD **)(a1 + 88);
        if ( v131 )
        {
          v132 = *((_DWORD *)v131 - 1);
          if ( v132 == *((_DWORD *)v131 - 2) )
          {
            v202 = (3 * v132 + 1) >> 1;
            v203 = 8 * v202 + 8;
            if ( 8 * v132 + 8 >= v203 || v132 >= v202 )
            {
              v227 = (char **)__cxa_allocate_exception(0x28u);
              sub_76A180(&v248, "Overflow encountered when expanding vector");
              *v227 = (char *)off_1C63128;
              sub_2333C0(v227 + 1, &v248);
              sub_233E40((__int64)&v248);
              __cxa_throw(v227, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v204 = (unsigned int *)sub_186B300(v131 - 1, v203);
            v205 = v204[1];
            v131 = v204 + 2;
            *v204 = v202;
            *(_QWORD *)(a1 + 88) = v204 + 2;
            LODWORD(v204) = v205;
            v135 = &v131[v205];
            v134 = (_DWORD)v204 + 1;
          }
          else
          {
            v133 = v132;
            v134 = v132 + 1;
            v135 = &v131[v133];
          }
        }
        else
        {
          v220 = (_QWORD *)sub_186B270(0x18u);
          *v220 = 2;
          v134 = 1;
          v131 = v220 + 1;
          *(_QWORD *)(a1 + 88) = v131;
          v135 = v131;
        }
        *v135 = v129;
        v136 = *(_QWORD *)(a1 + 512);
        *((_DWORD *)v131 - 1) = v134;
        if ( v136 )
        {
          v137 = *(_QWORD *)(a1 + 520);
          v25 = (*(_DWORD *)(v136 + 8))-- == 1;
          if ( v25 )
            sub_15D7BC0(v137, v136);
        }
        v138 = *(_QWORD *)(a1 + 480);
        *(_QWORD *)(a1 + 512) = 0;
        if ( v239 == 4 )
        {
          if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
            sub_15843A0(a1, a2, v138, *(_QWORD *)(a1 + 496));
LABEL_155:
          result = *(_QWORD *)(a1 + 40);
          v139 = *(_DWORD *)(result - 4);
          *(_DWORD *)(result - 4) = v139 - 1;
          if ( v139 != 1 )
            *(_BYTE *)(result + 16LL * (unsigned int)(v139 - 2) + 8) |= 2u;
          goto LABEL_157;
        }
        *(_BYTE *)(a3 + 8) = *(_BYTE *)(a3 + 8) & 0xF3 | 4;
        result = sub_76FC00(a1, v138, 1);
        if ( !(_BYTE)result )
        {
LABEL_157:
          v140 = *(_QWORD *)(a1 + 480);
          if ( v140 )
          {
            v141 = *(_QWORD *)(a1 + 488);
            v25 = (*(_DWORD *)(v140 + 8))-- == 1;
            if ( v25 )
              result = sub_15D7BC0(v141, v140);
          }
          v142 = *(_QWORD *)(a1 + 496);
          *(_QWORD *)(a1 + 480) = 0;
          if ( v142 )
          {
            v143 = *(_QWORD *)(a1 + 504);
            v25 = (*(_DWORD *)(v142 + 8))-- == 1;
            if ( v25 )
              result = sub_15D7BC0(v143, v142);
          }
          *(_QWORD *)(a1 + 496) = 0;
LABEL_164:
          if ( v26 )
          {
            v25 = (*(_DWORD *)(v26 + 8))-- == 1;
            if ( v25 )
              return sub_15D7BC0(*(_QWORD *)v245, v26);
          }
          return result;
        }
        v152 = *(_QWORD *)(a1 + 88);
        v153 = *(_QWORD *)(a1 + 80);
        *(_QWORD *)v236 = *(_QWORD *)(a1 + 8);
        if ( v152 )
        {
          v154 = (unsigned int)(*(_DWORD *)(v152 - 4) - 1);
          v155 = *(_QWORD *)(v152 + 8 * v154);
          v156 = *(_DWORD *)(v152 - 4) - 1;
          if ( !v155 )
          {
            *(_DWORD *)(v152 - 4) = v154;
            goto LABEL_206;
          }
          ++*(_DWORD *)(v155 + 8);
          v157 = (unsigned int)(*(_DWORD *)(v152 - 4) - 1);
          v158 = *(_QWORD *)(v152 + 8 * v157);
          v156 = *(_DWORD *)(v152 - 4) - 1;
          *(_DWORD *)(v152 - 4) = v157;
          if ( !v158 )
          {
LABEL_206:
            v159 = (unsigned int)(v156 - 1);
            v160 = *(_QWORD *)(v152 + 8 * v159);
            if ( !v160 )
            {
              *(_DWORD *)(v152 - 4) = v159;
              goto LABEL_210;
            }
            ++*(_DWORD *)(v160 + 8);
            v161 = (unsigned int)(*(_DWORD *)(v152 - 4) - 1);
            v162 = *(_QWORD *)(v152 + 8 * v161);
            *(_DWORD *)(v152 - 4) = v161;
            if ( !v162 )
              goto LABEL_210;
            goto LABEL_208;
          }
        }
        else
        {
          v155 = MEMORY[0x7FFFFFFF8];
          if ( !MEMORY[0x7FFFFFFF8] )
          {
            v156 = --MEMORY[0xFFFFFFFFFFFFFFFC];
            goto LABEL_206;
          }
          ++*(_DWORD *)(MEMORY[0x7FFFFFFF8] + 8LL);
          v158 = MEMORY[0x7FFFFFFF8];
          --MEMORY[0xFFFFFFFFFFFFFFFC];
        }
        v25 = (*(_DWORD *)(v158 + 8))-- == 1;
        if ( v25 )
        {
          sub_15D7BC0(v153, v158);
          v152 = *(_QWORD *)(a1 + 88);
          if ( !v152 )
          {
            v160 = MEMORY[0x7FFFFFFF8];
            if ( !MEMORY[0x7FFFFFFF8] )
            {
              --MEMORY[0xFFFFFFFFFFFFFFFC];
              goto LABEL_210;
            }
            ++*(_DWORD *)(MEMORY[0x7FFFFFFF8] + 8LL);
            v162 = MEMORY[0x7FFFFFFF8];
            v153 = *(_QWORD *)(a1 + 80);
            --MEMORY[0xFFFFFFFFFFFFFFFC];
LABEL_208:
            v25 = (*(_DWORD *)(v162 + 8))-- == 1;
            if ( v25 )
              sub_15D7BC0(v153, v162);
LABEL_210:
            v163 = sub_15E2470(*(_QWORD *)(a1 + 8), v160, v155);
            v164 = *(_QWORD *)(a1 + 504);
            v165 = *(_QWORD *)(a1 + 496);
            v166 = v163;
            if ( v163 )
            {
              v167 = *(_DWORD *)(v163 + 8) + 1;
              *(_DWORD *)(v166 + 8) = v167;
              if ( v165 )
              {
                v25 = (*(_DWORD *)(v165 + 8))-- == 1;
                if ( v25 )
                {
                  *(_QWORD *)v243 = v166;
                  sub_15D7BC0(v164, v165);
                  v166 = *(_QWORD *)v243;
                  *(_QWORD *)(a1 + 496) = *(_QWORD *)v243;
                  v167 = *(_DWORD *)(*(_QWORD *)v243 + 8LL);
                }
                else
                {
                  *(_QWORD *)(a1 + 496) = v166;
                  v167 = *(_DWORD *)(v166 + 8);
                }
              }
              else
              {
                *(_QWORD *)(a1 + 496) = v166;
              }
              *(_DWORD *)(v166 + 8) = v167 + 1;
            }
            else if ( v165 && (v25 = *(_DWORD *)(v165 + 8) == 1, --*(_DWORD *)(v165 + 8), v25) )
            {
              sub_15D7BC0(v164, v165);
              *(_QWORD *)(a1 + 496) = 0;
              v166 = 0;
            }
            else
            {
              *(_QWORD *)(a1 + 496) = 0;
            }
            v168 = *(_QWORD **)(a1 + 88);
            if ( v168 )
            {
              v169 = *((_DWORD *)v168 - 1);
              if ( v169 == *((_DWORD *)v168 - 2) )
              {
                v212 = (3 * v169 + 1) >> 1;
                v213 = 8 * v212 + 8;
                if ( 8 * v169 + 8 >= (unsigned int)v213 || v169 >= v212 )
                {
                  v226 = (char **)__cxa_allocate_exception(0x28u);
                  sub_76A180(&v248, "Overflow encountered when expanding vector");
                  *v226 = (char *)off_1C63128;
                  sub_2333C0(v226 + 1, &v248);
                  sub_233E40((__int64)&v248);
                  __cxa_throw(v226, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                }
                v247 = (3 * v169 + 1) >> 1;
                *(_QWORD *)v242 = v166;
                v214 = (unsigned int *)sub_186B300(v168 - 1, v213);
                v168 = v214 + 2;
                v166 = *(_QWORD *)v242;
                *(_QWORD *)(a1 + 88) = v214 + 2;
                *v214 = v247;
                LODWORD(v214) = v214[1];
                v172 = &v168[(unsigned int)v214];
                v171 = (_DWORD)v214 + 1;
              }
              else
              {
                v170 = v169;
                v171 = v169 + 1;
                v172 = &v168[v170];
              }
            }
            else
            {
              *(_QWORD *)v244 = v166;
              v222 = (_QWORD *)sub_186B270(0x18u);
              *v222 = 2;
              v166 = *(_QWORD *)v244;
              v171 = 1;
              v168 = v222 + 1;
              *(_QWORD *)(a1 + 88) = v168;
              v172 = v168;
            }
            *v172 = v166;
            *((_DWORD *)v168 - 1) = v171;
            if ( v160 )
            {
              v25 = (*(_DWORD *)(v160 + 8))-- == 1;
              if ( v25 )
                sub_15D7BC0(*(_QWORD *)v236, v160);
            }
            if ( v155 )
            {
              v25 = (*(_DWORD *)(v155 + 8))-- == 1;
              if ( v25 )
                sub_15D7BC0(*(_QWORD *)v236, v155);
            }
            v173 = 0xFFFFFFFFLL;
            v174 = *(_QWORD **)(a1 + 56);
            if ( v174 )
              v173 = (unsigned int)(*((_DWORD *)v174 - 1) - 1);
            v175 = v174[v173];
            if ( v175 )
              ++*(_DWORD *)(v175 + 8);
            v176 = *(_QWORD *)(a1 + 480);
            if ( v176 )
            {
              v177 = *(_QWORD *)(a1 + 488);
              v25 = (*(_DWORD *)(v176 + 8))-- == 1;
              if ( v25 )
              {
                sub_15D7BC0(v177, v176);
                v174 = *(_QWORD **)(a1 + 56);
              }
            }
            v178 = *((_DWORD *)v174 - 1);
            v179 = *(_QWORD *)(a1 + 48);
            *(_QWORD *)(a1 + 480) = v175;
            v180 = v178 - 1;
            v181 = v174[v178 - 1];
            *((_DWORD *)v174 - 1) = v178 - 1;
            if ( v181 )
            {
              v25 = (*(_DWORD *)(v181 + 8))-- == 1;
              if ( v25 )
              {
                sub_15D7BC0(v179, v181);
                v174 = *(_QWORD **)(a1 + 56);
                v179 = *(_QWORD *)(a1 + 48);
              }
              v180 = *((_DWORD *)v174 - 1);
            }
            v182 = (unsigned int)(v180 - 1);
            v183 = v174[v182];
            *((_DWORD *)v174 - 1) = v182;
            if ( v183 && (v25 = *(_DWORD *)(v183 + 8) == 1, --*(_DWORD *)(v183 + 8), v25) )
            {
              sub_15D7BC0(v179, v183);
              v184 = *(_QWORD *)(a1 + 480);
              v174 = *(_QWORD **)(a1 + 56);
              if ( !v184 )
              {
LABEL_239:
                v185 = v174;
                if ( !v174 )
                {
                  v221 = (_QWORD *)sub_186B270(0x18u);
                  *v221 = 2;
                  v188 = 1;
                  v185 = v221 + 1;
                  *(_QWORD *)(a1 + 56) = v221 + 1;
                  v189 = v221 + 1;
LABEL_242:
                  *v189 = v184;
                  *((_DWORD *)v185 - 1) = v188;
                  if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
                    sub_15843A0(a1, a2, *(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 496));
                  goto LABEL_155;
                }
LABEL_240:
                v186 = *((_DWORD *)v174 - 1);
                if ( v186 == *((_DWORD *)v174 - 2) )
                {
                  v215 = (3 * v186 + 1) >> 1;
                  v216 = 8 * v215 + 8;
                  if ( 8 * v186 + 8 >= v216 || v186 >= v215 )
                  {
                    v224 = (char **)__cxa_allocate_exception(0x28u);
                    sub_76A180(&v248, "Overflow encountered when expanding vector");
                    *v224 = (char *)off_1C63128;
                    sub_2333C0(v224 + 1, &v248);
                    sub_233E40((__int64)&v248);
                    __cxa_throw(
                      v224,
                      (struct type_info *)&`typeinfo for'default_exception,
                      (void (*)(void *))sub_230E50);
                  }
                  v217 = (unsigned int *)sub_186B300(v174 - 1, v216);
                  v185 = v217 + 2;
                  *v217 = v215;
                  v218 = v217[1];
                  *(_QWORD *)(a1 + 56) = v185;
                  v219 = v218;
                  v189 = &v185[v218];
                  v188 = v219 + 1;
                }
                else
                {
                  v187 = v186;
                  v188 = v186 + 1;
                  v189 = &v174[v187];
                }
                goto LABEL_242;
              }
            }
            else
            {
              v184 = *(_QWORD *)(a1 + 480);
              v185 = v174;
              if ( !v184 )
                goto LABEL_240;
            }
            ++*(_DWORD *)(v184 + 8);
            goto LABEL_239;
          }
          v156 = *(_DWORD *)(v152 - 4);
          v153 = *(_QWORD *)(a1 + 80);
        }
        else
        {
          v156 = *(_DWORD *)(v152 - 4);
        }
        goto LABEL_206;
      }
      if ( (*(_BYTE *)(a3 + 8) & 2) != 0 )
      {
        v86 = sub_15DC610(
                *(_QWORD *)(a1 + 8),
                (int)v14,
                v17,
                (int)v231,
                v28,
                v29,
                (int)v231,
                5,
                v245[0],
                v246,
                v248,
                v249,
                v250,
                v251,
                v252,
                v253);
        v87 = v86;
        if ( v86 )
          ++*(_DWORD *)(v86 + 8);
        v88 = *(_QWORD *)(a1 + 480);
        if ( v88 )
        {
          v89 = *(_QWORD *)(a1 + 488);
          v25 = (*(_DWORD *)(v88 + 8))-- == 1;
          if ( v25 )
          {
            *(_QWORD *)v237 = v86;
            sub_15D7BC0(v89, v88);
            v87 = *(_QWORD *)v237;
          }
        }
        *(_QWORD *)(a1 + 480) = v87;
        v90 = sub_15DE370(*(_QWORD *)(a1 + 8));
        v91 = v90;
        if ( v90 )
          ++*(_DWORD *)(v90 + 8);
        v92 = *(_QWORD *)(a1 + 496);
        if ( v92 )
        {
          v93 = *(_QWORD *)(a1 + 504);
          v25 = (*(_DWORD *)(v92 + 8))-- == 1;
          if ( v25 )
            sub_15D7BC0(v93, v92);
        }
        v94 = *(_QWORD **)(a1 + 56);
        *(_QWORD *)(a1 + 496) = v91;
        if ( !v94 )
          goto LABEL_96;
      }
      else
      {
        v109 = *(_QWORD *)(a1 + 480);
        ++*(_DWORD *)(a2 + 8);
        if ( v109 )
        {
          v110 = *(_QWORD *)(a1 + 488);
          v25 = (*(_DWORD *)(v109 + 8))-- == 1;
          if ( v25 )
            sub_15D7BC0(v110, v109);
        }
        v94 = *(_QWORD **)(a1 + 56);
        *(_QWORD *)(a1 + 480) = a2;
        if ( !v94 )
        {
          v95 = a2;
          goto LABEL_97;
        }
      }
      v111 = *(_DWORD *)(a3 + 12);
      v112 = (unsigned __int64)&v94[*((unsigned int *)v94 - 1)];
      v113 = &v94[v111];
      if ( (unsigned __int64)v113 >= v112 )
        goto LABEL_191;
      do
      {
        v114 = *v113;
        if ( *v113 )
        {
          v115 = *(_QWORD *)(a1 + 48);
          v25 = (*(_DWORD *)(v114 + 8))-- == 1;
          if ( v25 )
          {
            *(_QWORD *)v234 = v112;
            sub_15D7BC0(v115, v114);
            v112 = *(_QWORD *)v234;
          }
        }
        ++v113;
      }
      while ( (unsigned __int64)v113 < v112 );
      v94 = *(_QWORD **)(a1 + 56);
      if ( v94 )
      {
LABEL_191:
        v95 = *(_QWORD *)(a1 + 480);
        *((_DWORD *)v94 - 1) = v111;
        if ( v95 )
        {
          ++*(_DWORD *)(v95 + 8);
          v111 = *((_DWORD *)v94 - 1);
        }
        if ( *((_DWORD *)v94 - 2) == v111 )
        {
          v194 = (3 * v111 + 1) >> 1;
          v195 = 8 * v194 + 8;
          if ( 8 * v111 + 8 >= v195 || v111 >= v194 )
          {
            v225 = (char **)__cxa_allocate_exception(0x28u);
            sub_76A180(&v248, "Overflow encountered when expanding vector");
            *v225 = (char *)off_1C63128;
            sub_2333C0(v225 + 1, &v248);
            sub_233E40((__int64)&v248);
            __cxa_throw(v225, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v196 = (unsigned int *)sub_186B300(v94 - 1, v195);
          v197 = v196[1];
          v94 = v196 + 2;
          *(_QWORD *)(a1 + 56) = v196 + 2;
          *v196 = (3 * v111 + 1) >> 1;
          LODWORD(v196) = v197;
          v98 = &v94[v197];
          v97 = (_DWORD)v196 + 1;
        }
        else
        {
          v98 = &v94[*((unsigned int *)v94 - 1)];
          v97 = *((_DWORD *)v94 - 1) + 1;
        }
        goto LABEL_99;
      }
LABEL_96:
      v95 = *(_QWORD *)(a1 + 480);
      if ( !v95 )
      {
LABEL_98:
        v96 = (_QWORD *)sub_186B270(0x18u);
        v94 = v96 + 1;
        *v96 = 2;
        v97 = 1;
        *(_QWORD *)(a1 + 56) = v94;
        v98 = v94;
LABEL_99:
        *v98 = v95;
        *((_DWORD *)v94 - 1) = v97;
        if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
          sub_15843A0(a1, a2, *(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 496));
        v99 = *(_QWORD **)(a1 + 88);
        if ( !v99 )
          goto LABEL_260;
        v100 = *(_DWORD *)(a3 + 12);
        v101 = (unsigned __int64)&v99[*((unsigned int *)v99 - 1)];
        v102 = &v99[v100];
        if ( (unsigned __int64)v102 >= v101 )
          goto LABEL_176;
        do
        {
          v103 = *v102;
          if ( *v102 )
          {
            v104 = *(_QWORD *)(a1 + 80);
            v25 = (*(_DWORD *)(v103 + 8))-- == 1;
            if ( v25 )
              sub_15D7BC0(v104, v103);
          }
          ++v102;
        }
        while ( (unsigned __int64)v102 < v101 );
        v99 = *(_QWORD **)(a1 + 88);
        if ( v99 )
        {
LABEL_176:
          v144 = *(_QWORD *)(a1 + 496);
          *((_DWORD *)v99 - 1) = v100;
          if ( v144 )
          {
            ++*(_DWORD *)(v144 + 8);
            v100 = *((_DWORD *)v99 - 1);
          }
          if ( *((_DWORD *)v99 - 2) == v100 )
          {
            v190 = (3 * v100 + 1) >> 1;
            v191 = 8 * v190 + 8;
            if ( 8 * v100 + 8 >= v191 || v100 >= v190 )
            {
              v230 = (char **)__cxa_allocate_exception(0x28u);
              sub_76A180(&v248, "Overflow encountered when expanding vector");
              *v230 = (char *)off_1C63128;
              sub_2333C0(v230 + 1, &v248);
              sub_233E40((__int64)&v248);
              __cxa_throw(v230, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v192 = (unsigned int *)sub_186B300(v99 - 1, v191);
            v193 = v192[1];
            v99 = v192 + 2;
            *v192 = v190;
            *(_QWORD *)(a1 + 88) = v192 + 2;
            LODWORD(v192) = v193;
            v145 = &v99[v193];
            v146 = (_DWORD)v192 + 1;
          }
          else
          {
            v145 = &v99[*((unsigned int *)v99 - 1)];
            v146 = *((_DWORD *)v99 - 1) + 1;
          }
        }
        else
        {
LABEL_260:
          v144 = *(_QWORD *)(a1 + 496);
          if ( v144 )
            ++*(_DWORD *)(v144 + 8);
          v208 = (_QWORD *)sub_186B270(0x18u);
          v99 = v208 + 1;
          *v208 = 2;
          v146 = 1;
          *(_QWORD *)(a1 + 88) = v99;
          v145 = v99;
        }
        *v145 = v144;
        v147 = *(_QWORD *)(a1 + 496);
        *((_DWORD *)v99 - 1) = v146;
        if ( v147 )
        {
          v148 = *(_QWORD *)(a1 + 504);
          v25 = (*(_DWORD *)(v147 + 8))-- == 1;
          if ( v25 )
            sub_15D7BC0(v148, v147);
        }
        result = *(_QWORD *)(a1 + 40);
        v149 = *(_QWORD *)(a1 + 480);
        *(_QWORD *)(a1 + 496) = 0;
        v150 = *(_DWORD *)(result - 4);
        *(_DWORD *)(result - 4) = v150 - 1;
        if ( v150 != 1 && a2 != v149 )
        {
          *(_BYTE *)(result + 16LL * (unsigned int)(v150 - 2) + 8) |= 2u;
          v149 = *(_QWORD *)(a1 + 480);
        }
        if ( v149 )
        {
          v151 = *(_QWORD *)(a1 + 488);
          v25 = (*(_DWORD *)(v149 + 8))-- == 1;
          if ( v25 )
            result = sub_15D7BC0(v151, v149);
        }
        *(_QWORD *)(a1 + 480) = 0;
        goto LABEL_164;
      }
LABEL_97:
      ++*(_DWORD *)(v95 + 8);
      goto LABEL_98;
  }
  v37 = *(_QWORD *)(a1 + 8);
  v38 = *(_QWORD *)(a1 + 88);
  v39 = *(_QWORD *)(a1 + 80);
  *(_QWORD *)v233 = v37;
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
  v38 = *(_QWORD *)(a1 + 88);
  if ( v38 )
  {
    v42 = *(_DWORD *)(v38 - 4);
    v39 = *(_QWORD *)(a1 + 80);
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
  v39 = *(_QWORD *)(a1 + 80);
  --MEMORY[0xFFFFFFFFFFFFFFFC];
LABEL_33:
  v25 = (*(_DWORD *)(v48 + 8))-- == 1;
  if ( v25 )
    sub_15D7BC0(v39, v48);
LABEL_35:
  v49 = sub_15E2470(*(_QWORD *)(a1 + 8), v46, v41);
  v50 = *(_QWORD *)(a1 + 496);
  v51 = *(_QWORD *)(a1 + 504);
  v52 = v49;
  if ( v49 )
  {
    v53 = *(_DWORD *)(v49 + 8) + 1;
    *(_DWORD *)(v52 + 8) = v53;
    if ( v50 )
    {
      v25 = (*(_DWORD *)(v50 + 8))-- == 1;
      if ( v25 )
        sub_15D7BC0(v51, v50);
      *(_QWORD *)(a1 + 496) = v52;
      v53 = *(_DWORD *)(v52 + 8);
    }
    else
    {
      *(_QWORD *)(a1 + 496) = v52;
    }
    *(_DWORD *)(v52 + 8) = v53 + 1;
  }
  else
  {
    if ( v50 )
    {
      v25 = (*(_DWORD *)(v50 + 8))-- == 1;
      if ( v25 )
        sub_15D7BC0(v51, v50);
    }
    *(_QWORD *)(a1 + 496) = 0;
  }
  v54 = *(_QWORD **)(a1 + 88);
  if ( v54 )
  {
    v55 = *((_DWORD *)v54 - 1);
    if ( v55 == *((_DWORD *)v54 - 2) )
    {
      v77 = (3 * v55 + 1) >> 1;
      v78 = 8 * v77 + 8;
      if ( 8 * v55 + 8 >= (unsigned int)v78 || v55 >= v77 )
      {
        v229 = (char **)__cxa_allocate_exception(0x28u);
        sub_76A180(&v248, "Overflow encountered when expanding vector");
        *v229 = (char *)off_1C63128;
        sub_2333C0(v229 + 1, &v248);
        sub_233E40((__int64)&v248);
        __cxa_throw(v229, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v240 = (3 * v55 + 1) >> 1;
      v79 = (unsigned int *)sub_186B300(v54 - 1, v78);
      v80 = v79[1];
      v54 = v79 + 2;
      *(_QWORD *)(a1 + 88) = v79 + 2;
      *v79 = v240;
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
    v207 = (_QWORD *)sub_186B270(0x18u);
    v54 = v207 + 1;
    *v207 = 2;
    v57 = 1;
    *(_QWORD *)(a1 + 88) = v54;
    v58 = v54;
  }
  *v58 = v52;
  *((_DWORD *)v54 - 1) = v57;
  if ( v46 )
  {
    v25 = (*(_DWORD *)(v46 + 8))-- == 1;
    if ( v25 )
      sub_15D7BC0(*(_QWORD *)v233, v46);
  }
  if ( v41 )
  {
    v25 = (*(_DWORD *)(v41 + 8))-- == 1;
    if ( v25 )
      sub_15D7BC0(*(_QWORD *)v233, v41);
  }
  v59 = 0xFFFFFFFFLL;
  v60 = *(_QWORD **)(a1 + 56);
  if ( v60 )
    v59 = (unsigned int)(*((_DWORD *)v60 - 1) - 1);
  v61 = v60[v59];
  if ( v61 )
    ++*(_DWORD *)(v61 + 8);
  v62 = *(_QWORD *)(a1 + 480);
  if ( v62 )
  {
    v63 = *(_QWORD *)(a1 + 488);
    v25 = (*(_DWORD *)(v62 + 8))-- == 1;
    if ( v25 )
    {
      sub_15D7BC0(v63, v62);
      v60 = *(_QWORD **)(a1 + 56);
    }
  }
  v64 = *((_DWORD *)v60 - 1);
  v65 = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 480) = v61;
  v66 = v64 - 1;
  v67 = v60[v64 - 1];
  *((_DWORD *)v60 - 1) = v64 - 1;
  if ( v67 )
  {
    v25 = (*(_DWORD *)(v67 + 8))-- == 1;
    if ( v25 )
    {
      sub_15D7BC0(v65, v67);
      v60 = *(_QWORD **)(a1 + 56);
      v65 = *(_QWORD *)(a1 + 48);
    }
    v66 = *((_DWORD *)v60 - 1);
  }
  v68 = (unsigned int)(v66 - 1);
  v69 = v60[v68];
  *((_DWORD *)v60 - 1) = v68;
  if ( !v69 || (v25 = *(_DWORD *)(v69 + 8) == 1, --*(_DWORD *)(v69 + 8), !v25) )
  {
    v70 = *(_QWORD *)(a1 + 480);
    v71 = v60;
    if ( !v70 )
      goto LABEL_66;
    goto LABEL_64;
  }
  sub_15D7BC0(v65, v69);
  v70 = *(_QWORD *)(a1 + 480);
  v60 = *(_QWORD **)(a1 + 56);
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
        v228 = (char **)__cxa_allocate_exception(0x28u);
        sub_76A180(&v248, "Overflow encountered when expanding vector");
        *v228 = (char *)off_1C63128;
        sub_2333C0(v228 + 1, &v248);
        sub_233E40((__int64)&v248);
        __cxa_throw(v228, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v83 = (unsigned int *)sub_186B300(v60 - 1, v82);
      v71 = v83 + 2;
      *v83 = v81;
      v84 = v83[1];
      *(_QWORD *)(a1 + 56) = v71;
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
  v206 = (_QWORD *)sub_186B270(0x18u);
  v74 = 1;
  v71 = v206 + 1;
  *v206 = 2;
  *(_QWORD *)(a1 + 56) = v206 + 1;
  v75 = v206 + 1;
LABEL_68:
  *v75 = v70;
  *((_DWORD *)v71 - 1) = v74;
  if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
    sub_15843A0(a1, a2, *(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 496));
  result = *(_QWORD *)(a1 + 40);
  v76 = *(_DWORD *)(result - 4);
  *(_DWORD *)(result - 4) = v76 - 1;
  if ( v76 != 1 )
    *(_BYTE *)(result + 16LL * (unsigned int)(v76 - 2) + 8) |= 2u;
  return result;
}

