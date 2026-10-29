__int64 __fastcall sub_3FAC20(__int64 a1, __int64 a2, __int64 a3, __int64 **a4, __int64 *a5)
{
  char **v5; // rbp
  char **v6; // rbp
  char **v7; // rbp
  char **v8; // rbp
  char **v9; // rbp
  char **exception; // rbp
  char **v11; // rbp
  __int64 v12; // r9
  int i; // ecx
  __int64 v18; // rax
  _DWORD *v19; // rdx
  _DWORD *v20; // rax
  int v22; // r13d
  __int64 v23; // r14
  _QWORD *v24; // rax
  _QWORD *v25; // rcx
  __int64 v26; // r11
  _QWORD *v27; // rsi
  int v28; // eax
  unsigned __int64 v29; // r13
  _QWORD *v30; // rcx
  unsigned int v31; // eax
  __int64 *v32; // rdx
  __int64 v33; // r9
  __int64 v34; // rax
  __int64 *v35; // r14
  _QWORD *v36; // rdi
  unsigned int j; // ecx
  __int64 v38; // rsi
  int v39; // eax
  _QWORD *v40; // rsi
  __int64 v41; // rdx
  unsigned int v42; // eax
  unsigned int v43; // r8d
  size_t v44; // rsi
  unsigned int *v45; // rax
  __int64 v46; // rsi
  __int64 v47; // rax
  __int64 *v48; // rsi
  __int64 v49; // r9
  __int64 v50; // rax
  int v51; // edi
  unsigned int v52; // edx
  __int64 *v53; // rcx
  __int64 v54; // rdx
  __int64 *v55; // r8
  __int64 *v56; // rax
  __int64 v57; // rdx
  unsigned int v58; // r8d
  size_t v59; // rsi
  unsigned int *v60; // rax
  __int64 v61; // rsi
  __int64 v62; // rbx
  __int64 v63; // rsi
  __int64 v64; // rdi
  bool v65; // zf
  __int64 v66; // r9
  __int64 v67; // rax
  __int64 v68; // r14
  unsigned __int64 v69; // rbp
  __int64 *v70; // rbx
  __int64 v71; // rsi
  __int64 v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rax
  __int64 v75; // r14
  _QWORD *v76; // rax
  _QWORD *v77; // rsi
  int v78; // edx
  _QWORD *v79; // r13
  __int64 v80; // r8
  __int64 v81; // r9
  unsigned int k; // eax
  __int64 v83; // r8
  unsigned int v84; // eax
  __int64 v85; // rsi
  __int64 v86; // r14
  __int64 v87; // rdx
  __int64 v88; // rax
  _QWORD *v89; // rdx
  _QWORD *v90; // rdx
  __int64 *v91; // r14
  __int64 *v92; // rsi
  __int64 v93; // rax
  __int64 *v94; // r14
  __int64 v95; // rdx
  _QWORD *v96; // rax
  _QWORD *v97; // rsi
  __int64 v98; // rdx
  __int64 v99; // rcx
  _QWORD *v100; // rdi
  int m; // eax
  __int64 v102; // rcx
  __int64 v103; // rdx
  unsigned int v104; // eax
  __int64 *v105; // r14
  __int64 v106; // rax
  __int64 *v107; // rbx
  __int64 v108; // rsi
  unsigned int v109; // edx
  size_t v110; // rsi
  unsigned int *v111; // rax
  __int64 v112; // rsi
  __int64 *n; // rbx
  __int64 v114; // rsi
  unsigned int v115; // r8d
  size_t v116; // rsi
  unsigned int *v117; // rax
  __int64 v118; // rsi
  __int64 v119; // rax
  unsigned int v120; // edx
  size_t v121; // rsi
  unsigned int *v122; // rax
  unsigned int v123; // edx
  __int64 *v124; // r8
  _DWORD *v125; // rcx
  __int64 *v126; // r14
  __int64 v127; // rax
  __int64 *v128; // rdi
  int v129; // r11d
  __int64 *v130; // r10
  __int64 *v131; // rsi
  __int64 v132; // rax
  __int64 v133; // rax
  __int64 *v134; // rax
  __int64 *v135; // rbx
  __int64 *v136; // r14
  __int64 *v137; // rbp
  __int64 *v138; // r12
  __int64 v139; // rsi
  __int64 v140; // rdi
  _QWORD *v141; // rax
  unsigned int v142; // edx
  __int64 *v143; // r8
  _DWORD *v144; // r10
  __int64 *v145; // r14
  __int64 v146; // r9
  __int64 v147; // rcx
  int v148; // r11d
  __int64 *v149; // rax
  __int64 *v150; // rdi
  __int64 v151; // rdx
  __int64 v152; // rdx
  __int64 v153; // r9
  __int64 *v154; // rbx
  __int64 *v155; // r14
  __int64 *v156; // rbp
  __int64 *v157; // r12
  __int64 v158; // rsi
  __int64 v159; // rdi
  __int64 v160; // r14
  _QWORD *v161; // rax
  __int64 v162; // rsi
  __int64 v163; // rdi
  __int64 v164; // rbx
  _DWORD *v165; // rax
  __int64 v166; // rax
  __int64 v167; // rdi
  _QWORD *v168; // rdx
  _QWORD *v169; // rsi
  _QWORD *v170; // [rsp+0h] [rbp-E8h]
  __int64 v171; // [rsp+0h] [rbp-E8h]
  __int64 v172; // [rsp+0h] [rbp-E8h]
  __int64 **v173; // [rsp+0h] [rbp-E8h]
  __int64 v174; // [rsp+8h] [rbp-E0h]
  __int64 v175; // [rsp+8h] [rbp-E0h]
  __int64 v176; // [rsp+8h] [rbp-E0h]
  _QWORD *v177; // [rsp+8h] [rbp-E0h]
  __int64 **v178; // [rsp+8h] [rbp-E0h]
  __int64 v179; // [rsp+8h] [rbp-E0h]
  __int64 v180; // [rsp+8h] [rbp-E0h]
  __int64 v181; // [rsp+8h] [rbp-E0h]
  unsigned int v182; // [rsp+8h] [rbp-E0h]
  unsigned int v183; // [rsp+8h] [rbp-E0h]
  __int64 v184; // [rsp+8h] [rbp-E0h]
  unsigned int v185; // [rsp+8h] [rbp-E0h]
  unsigned int v186; // [rsp+10h] [rbp-D8h]
  unsigned int v187; // [rsp+10h] [rbp-D8h]
  unsigned int v188; // [rsp+10h] [rbp-D8h]
  unsigned int v189; // [rsp+10h] [rbp-D8h]
  __int64 v190; // [rsp+10h] [rbp-D8h]
  __int64 v191; // [rsp+10h] [rbp-D8h]
  __int64 *v192; // [rsp+10h] [rbp-D8h]
  __int64 *v193; // [rsp+10h] [rbp-D8h]
  unsigned int v194; // [rsp+10h] [rbp-D8h]
  __int64 *v195; // [rsp+10h] [rbp-D8h]
  unsigned int v196; // [rsp+18h] [rbp-D0h]
  __int64 v197; // [rsp+18h] [rbp-D0h]
  __int64 v198; // [rsp+18h] [rbp-D0h]
  __int64 v199; // [rsp+18h] [rbp-D0h]
  _DWORD *v200; // [rsp+18h] [rbp-D0h]
  _DWORD *v201; // [rsp+18h] [rbp-D0h]
  __int64 v202; // [rsp+18h] [rbp-D0h]
  _DWORD *v203; // [rsp+18h] [rbp-D0h]
  _DWORD *v204; // [rsp+18h] [rbp-D0h]
  __int64 v205; // [rsp+20h] [rbp-C8h]
  __int64 v206; // [rsp+20h] [rbp-C8h]
  __int64 v207; // [rsp+20h] [rbp-C8h]
  __int64 v208; // [rsp+20h] [rbp-C8h]
  __int64 v209; // [rsp+28h] [rbp-C0h]
  __int64 v210; // [rsp+28h] [rbp-C0h]
  __int64 v211; // [rsp+28h] [rbp-C0h]
  __int64 v212; // [rsp+30h] [rbp-B8h]
  __int64 v213; // [rsp+30h] [rbp-B8h]
  __int64 v214; // [rsp+38h] [rbp-B0h]
  __int64 **v215; // [rsp+38h] [rbp-B0h]
  int v216; // [rsp+40h] [rbp-A8h]
  __int64 *v217; // [rsp+40h] [rbp-A8h]
  __int64 v218; // [rsp+48h] [rbp-A0h]
  __int64 v219; // [rsp+50h] [rbp-98h]
  __int64 v220; // [rsp+58h] [rbp-90h]
  __int64 **v221; // [rsp+60h] [rbp-88h]
  __int64 *v222; // [rsp+68h] [rbp-80h]
  __int64 v223; // [rsp+80h] [rbp-68h] BYREF
  _QWORD *v224; // [rsp+88h] [rbp-60h]
  __int64 v225; // [rsp+90h] [rbp-58h] BYREF
  __int64 v226; // [rsp+98h] [rbp-50h]

  if ( *(_WORD *)(a3 + 4) )
    return 0;
  v12 = a3;
  for ( i = *(_DWORD *)(a1 + 8); ; i = *(_DWORD *)(a1 + 8) )
  {
    v18 = *(_QWORD *)(v12 + 16);
    v19 = *(_DWORD **)(v18 + 24);
    if ( !v19 || *v19 != i || v19[1] )
      break;
    v22 = *(_DWORD *)(v12 + 24);
    v212 = *(_QWORD *)a1;
    v223 = *(_QWORD *)a1;
    if ( v22 == 1 )
    {
      v29 = 0;
    }
    else
    {
      v23 = *(_QWORD *)(v12 + 40);
      v170 = (_QWORD *)(v12 + 40);
      if ( v23 )
        ++*(_DWORD *)(v23 + 8);
      v174 = v12;
      v24 = (_QWORD *)sub_186B270(0x18u);
      v12 = v174;
      v25 = v170;
      v26 = v174 + 8LL * (unsigned int)(v22 - 2) + 48;
      v27 = v24 + 1;
      *v24 = 2;
      v28 = 1;
      v29 = (unsigned __int64)v27;
      while ( 1 )
      {
        v30 = v25 + 1;
        *v27 = v23;
        *(_DWORD *)(v29 - 4) = v28;
        if ( v30 == (_QWORD *)v26 )
          break;
        while ( 1 )
        {
          v23 = *v30;
          if ( *v30 )
            ++*(_DWORD *)(v23 + 8);
          v31 = *(_DWORD *)(v29 - 4);
          if ( v31 == *(_DWORD *)(v29 - 8) )
            break;
          ++v30;
          *(_QWORD *)(v29 + 8LL * v31) = v23;
          *(_DWORD *)(v29 - 4) = v31 + 1;
          if ( v30 == (_QWORD *)v26 )
            goto LABEL_19;
        }
        v58 = (3 * v31 + 1) >> 1;
        v59 = 8 * v58 + 8;
        if ( 8 * v31 + 8 >= (unsigned int)v59 || v31 >= v58 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(&v225, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, &v225);
          sub_233E40((__int64)&v225);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v206 = v12;
        v197 = v26;
        v187 = (3 * v31 + 1) >> 1;
        v177 = v30;
        v60 = (unsigned int *)sub_186B300((void *)(v29 - 8), v59);
        v61 = v60[1];
        v29 = (unsigned __int64)(v60 + 2);
        v25 = v177;
        v26 = v197;
        *v60 = v187;
        LODWORD(v60) = v61;
        v12 = v206;
        v27 = (_QWORD *)(v29 + 8 * v61);
        v28 = (_DWORD)v60 + 1;
      }
    }
LABEL_19:
    v175 = v12;
    v224 = (_QWORD *)v29;
    sub_3FAB10(a1, a2, &v223);
    v32 = *a4;
    v33 = v175;
    if ( *a4 )
    {
      LODWORD(v34) = *((_DWORD *)v32 - 1);
      v35 = &v32[2 * (unsigned int)v34];
      if ( (_DWORD)v34 == *((_DWORD *)v32 - 2) )
      {
        v183 = (unsigned int)(3 * v34 + 1) >> 1;
        v123 = 16 * v183 + 8;
        if ( 16 * (int)v34 + 8 >= v123 || (unsigned int)v34 >= (unsigned int)(3 * v34 + 1) >> 1 )
        {
          v11 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(&v225, "Overflow encountered when expanding vector");
          *v11 = (char *)off_1C63128;
          sub_2333C0(v11 + 1, &v225);
          sub_233E40((__int64)&v225);
          __cxa_throw(v11, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v190 = v33;
        v34 = sub_186B270(v123);
        v124 = *a4;
        v33 = v190;
        v125 = (_DWORD *)v34;
        v32 = (__int64 *)(v34 + 8);
        v126 = *a4;
        if ( *a4 )
        {
          v127 = *((unsigned int *)v124 - 1);
          v128 = v32;
          v125[1] = v127;
          v129 = v127;
          v130 = &v124[2 * v127];
          v131 = v124;
          if ( v124 != v130 )
          {
            v191 = v127;
            do
            {
              v132 = *v131;
              v131 += 2;
              v128 += 2;
              *(v128 - 2) = v132;
              v133 = *(v131 - 1);
              *(v131 - 1) = 0;
              *(v128 - 1) = v133;
            }
            while ( v131 != v130 );
            v127 = v191;
          }
          v134 = &v124[2 * v127];
          if ( v129 )
          {
            v192 = v32;
            v200 = v125;
            v207 = a2;
            v210 = v33;
            v217 = a5;
            v215 = a4;
            v135 = v126;
            v136 = v134;
            do
            {
              v137 = (__int64 *)v135[1];
              if ( v137 )
              {
                v138 = &v137[*((unsigned int *)v137 - 1)];
                if ( v137 >= v138 )
                  goto LABEL_147;
                do
                {
                  v139 = *v137;
                  if ( *v137 )
                  {
                    v140 = *v135;
                    v65 = (*(_DWORD *)(v139 + 8))-- == 1;
                    if ( v65 )
                      sub_15D7BC0(v140, v139);
                  }
                  ++v137;
                }
                while ( v137 < v138 );
                v137 = (__int64 *)v135[1];
                if ( v137 )
LABEL_147:
                  sub_186B220(v137 - 1);
              }
              v135 += 2;
            }
            while ( v135 != v136 );
            a4 = v215;
            v32 = v192;
            v125 = v200;
            a2 = v207;
            v33 = v210;
            a5 = v217;
            v124 = *v215;
          }
          v208 = v33;
          v201 = v125;
          v193 = v32;
          sub_186B220(v124 - 1);
          v125 = v201;
          v32 = v193;
          v33 = v208;
          v34 = (unsigned int)v201[1];
          v35 = &v193[2 * v34];
        }
        else
        {
          *(_DWORD *)(v34 + 4) = 0;
          v35 = (__int64 *)(v34 + 8);
          LODWORD(v34) = 0;
        }
        *a4 = v32;
        *v125 = v183;
      }
    }
    else
    {
      v168 = (_QWORD *)sub_186B270(0x28u);
      *v168 = 2;
      v33 = v175;
      LODWORD(v34) = 0;
      v32 = v168 + 1;
      *a4 = v32;
      v35 = v32;
    }
    v35[1] = 0;
    *v35 = v212;
    if ( v29 )
    {
      v36 = nullptr;
      for ( j = 0; j < *(_DWORD *)(v29 - 4); ++j )
      {
        v41 = *(_QWORD *)(v29 + 8LL * j);
        if ( v41 )
          ++*(_DWORD *)(v41 + 8);
        if ( v36 )
        {
          v42 = *((_DWORD *)v36 - 1);
          if ( v42 == *((_DWORD *)v36 - 2) )
          {
            v43 = (3 * v42 + 1) >> 1;
            v44 = 8 * v43 + 8;
            if ( 8 * v42 + 8 >= (unsigned int)v44 || v42 >= v43 )
            {
              v6 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(&v225, "Overflow encountered when expanding vector");
              *v6 = (char *)off_1C63128;
              sub_2333C0(v6 + 1, &v225);
              sub_233E40((__int64)&v225);
              __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v205 = v33;
            v196 = (3 * v42 + 1) >> 1;
            v186 = j;
            v176 = v41;
            v45 = (unsigned int *)sub_186B300(v36 - 1, v44);
            v46 = v45[1];
            v36 = v45 + 2;
            v41 = v176;
            j = v186;
            v35[1] = (__int64)(v45 + 2);
            *v45 = v196;
            LODWORD(v45) = v46;
            v33 = v205;
            v40 = &v36[v46];
            v39 = (_DWORD)v45 + 1;
          }
          else
          {
            v38 = v42;
            v39 = v42 + 1;
            v40 = &v36[v38];
          }
        }
        else
        {
          v202 = v33;
          v194 = j;
          v184 = v41;
          v141 = (_QWORD *)sub_186B270(0x18u);
          v36 = v141 + 1;
          *v141 = 2;
          v41 = v184;
          v39 = 1;
          j = v194;
          v33 = v202;
          v35[1] = (__int64)v36;
          v40 = v36;
        }
        *v40 = v41;
        *((_DWORD *)v36 - 1) = v39;
      }
      v66 = *(_QWORD *)(v33 + 32);
      ++*((_DWORD *)*a4 - 1);
      v67 = *(unsigned int *)(v29 - 4);
      if ( v29 < v29 + 8 * v67 )
      {
        v171 = a2;
        v68 = v66;
        v69 = v29 + 8 * v67;
        v178 = a4;
        v70 = (__int64 *)v29;
        do
        {
          v71 = *v70;
          if ( *v70 )
          {
            v65 = (*(_DWORD *)(v71 + 8))-- == 1;
            if ( v65 )
              sub_15D7BC0(v212, v71);
          }
          ++v70;
        }
        while ( (unsigned __int64)v70 < v69 );
        a2 = v171;
        a4 = v178;
        v66 = v68;
      }
      v172 = v66;
      sub_186B220((void *)(v29 - 8));
      v12 = v172;
    }
    else
    {
      v12 = *(_QWORD *)(v33 + 32);
      *((_DWORD *)v32 - 1) = v34 + 1;
    }
    if ( *(_WORD *)(v12 + 4) )
      return 0;
  }
  v20 = *(_DWORD **)(v18 + 24);
  if ( !v20 || *v20 != i )
    return 0;
  if ( v20[1] == 2 )
  {
    v62 = *(_QWORD *)(v12 + 32);
    if ( v62 )
      ++*(_DWORD *)(v62 + 8);
    v63 = *a5;
    if ( *a5 )
    {
      v64 = a5[1];
      v65 = (*(_DWORD *)(v63 + 8))-- == 1;
      if ( v65 )
        sub_15D7BC0(v64, v63);
    }
    *a5 = v62;
    return 1;
  }
  if ( v20[1] != 13 )
    return 0;
  v47 = sub_1684260(a1 + 8, v12);
  v48 = *(__int64 **)(a2 + 48);
  v49 = v47;
  v50 = *(unsigned int *)(a2 + 56);
  v51 = *(_DWORD *)(v49 + 12);
  v52 = v50 - 1;
  v50 *= 16;
  v53 = (__int64 *)((char *)v48 + v50);
  v54 = 16LL * (v51 & v52);
  v55 = &v48[(unsigned __int64)v54 / 8];
  if ( v54 == v50 )
  {
LABEL_116:
    while ( v55 != v48 )
    {
      v119 = *v48;
      if ( (unsigned __int64)*v48 > 1 )
      {
        if ( *(_DWORD *)(v119 + 12) == v51 && v49 == v119 )
        {
          v56 = v48;
          goto LABEL_64;
        }
      }
      else if ( !v119 )
      {
        break;
      }
      v48 += 2;
    }
LABEL_42:
    BUG();
  }
  v56 = &v48[(unsigned __int64)v54 / 8];
  while ( 1 )
  {
    v57 = *v56;
    if ( (unsigned __int64)*v56 > 1 )
      break;
    if ( !v57 )
      goto LABEL_42;
LABEL_39:
    v56 += 2;
    if ( v53 == v56 )
      goto LABEL_116;
  }
  if ( *(_DWORD *)(v57 + 12) != v51 || v49 != v57 )
    goto LABEL_39;
LABEL_64:
  v219 = v56[1];
  v72 = *(_QWORD *)(v219 + 16);
  if ( v72 )
  {
    v73 = *(unsigned int *)(v72 - 4);
    v216 = *(_DWORD *)(v49 + 32);
    if ( (_DWORD)v73 )
    {
      v213 = 0;
      v220 = 8 * v73;
      v218 = 8LL * *(unsigned int *)(v49 + 32);
      while ( 1 )
      {
        v214 = *(_QWORD *)a1;
        v223 = *(_QWORD *)a1;
        v74 = *(_QWORD *)(v72 + v213);
        v209 = v74;
        if ( !v216 )
          break;
        v75 = *(_QWORD *)(v74 + 16);
        if ( v75 )
          ++*(_DWORD *)(v75 + 8);
        v76 = (_QWORD *)sub_186B270(0x18u);
        v77 = v76 + 1;
        v78 = 2;
        v79 = v76 + 1;
        v80 = v209;
        v81 = v209 + v218;
        *v76 = 2;
        for ( k = 1; ; k = (_DWORD)v111 + 1 )
        {
          v83 = v80 + 8;
          *v77 = v75;
          *((_DWORD *)v79 - 1) = k;
          if ( v83 == v81 )
            break;
          while ( 1 )
          {
            v75 = *(_QWORD *)(v83 + 16);
            if ( v75 )
              ++*(_DWORD *)(v75 + 8);
            v84 = *((_DWORD *)v79 - 1);
            v78 = *((_DWORD *)v79 - 2);
            if ( v84 == v78 )
              break;
            v85 = v84;
            v83 += 8;
            k = v84 + 1;
            v79[v85] = v75;
            *((_DWORD *)v79 - 1) = k;
            if ( v83 == v81 )
              goto LABEL_76;
          }
          v109 = (3 * v84 + 1) >> 1;
          v110 = 8 * v109 + 8;
          if ( 8 * v84 + 8 >= (unsigned int)v110 || v84 >= v109 )
          {
            v9 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(&v225, "Overflow encountered when expanding vector");
            *v9 = (char *)off_1C63128;
            sub_2333C0(v9 + 1, &v225);
            sub_233E40((__int64)&v225);
            __cxa_throw(v9, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v198 = v81;
          v188 = (3 * v84 + 1) >> 1;
          v180 = v83;
          v111 = (unsigned int *)sub_186B300(v79 - 1, v110);
          v112 = v111[1];
          v78 = v188;
          v79 = v111 + 2;
          v80 = v180;
          v81 = v198;
          *v111 = v188;
          LODWORD(v111) = v112;
          v77 = &v79[v112];
        }
LABEL_76:
        v86 = *(_QWORD *)(v209 + 8);
        if ( v86 )
        {
          ++*(_DWORD *)(v86 + 8);
          k = *((_DWORD *)v79 - 1);
          v78 = *((_DWORD *)v79 - 2);
        }
        if ( k == v78 )
        {
          v120 = (3 * k + 1) >> 1;
          v121 = 8 * v120 + 8;
          if ( 8 * k + 8 >= (unsigned int)v121 || k >= v120 )
          {
            v8 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(&v225, "Overflow encountered when expanding vector");
            *v8 = (char *)off_1C63128;
            sub_2333C0(v8 + 1, &v225);
            sub_233E40((__int64)&v225);
            __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v182 = (3 * k + 1) >> 1;
          v122 = (unsigned int *)sub_186B300(v79 - 1, v121);
          v79 = v122 + 2;
          *v122 = v182;
          LODWORD(v122) = v122[1];
          v89 = &v79[(unsigned int)v122];
          v88 = (unsigned int)((_DWORD)v122 + 1);
        }
        else
        {
          v87 = k;
          v88 = k + 1;
          v89 = &v79[v87];
        }
        *v89 = v86;
        *((_DWORD *)v79 - 1) = v88;
        if ( (_DWORD)v88 )
          goto LABEL_81;
LABEL_85:
        v224 = v79;
        sub_3FAB10(a1, a2, &v223);
        v92 = *a4;
        if ( *a4 )
        {
          LODWORD(v93) = *((_DWORD *)v92 - 1);
          v94 = &v92[2 * (unsigned int)v93];
          if ( (_DWORD)v93 == *((_DWORD *)v92 - 2) )
          {
            v185 = (unsigned int)(3 * v93 + 1) >> 1;
            v142 = 16 * v185 + 8;
            if ( 16 * (int)v93 + 8 >= v142 || (unsigned int)v93 >= (unsigned int)(3 * v93 + 1) >> 1 )
            {
              v7 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(&v225, "Overflow encountered when expanding vector");
              *v7 = (char *)off_1C63128;
              sub_2333C0(v7 + 1, &v225);
              sub_233E40((__int64)&v225);
              __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v93 = sub_186B270(v142);
            v143 = *a4;
            v144 = (_DWORD *)v93;
            v92 = (__int64 *)(v93 + 8);
            v145 = *a4;
            if ( *a4 )
            {
              v146 = *((unsigned int *)v143 - 1);
              v147 = v93 + 8;
              *(_DWORD *)(v93 + 4) = v146;
              v148 = v146;
              v149 = v143;
              v150 = &v143[2 * v146];
              if ( v143 != v150 )
              {
                do
                {
                  v151 = *v149;
                  v149 += 2;
                  v147 += 16;
                  *(_QWORD *)(v147 - 16) = v151;
                  v152 = *(v149 - 1);
                  *(v149 - 1) = 0;
                  *(_QWORD *)(v147 - 8) = v152;
                }
                while ( v150 != v149 );
              }
              v153 = 2 * v146;
              if ( v148 )
              {
                v195 = v92;
                v203 = v144;
                v211 = a2;
                v222 = a5;
                v221 = a4;
                v154 = v145;
                v155 = &v143[v153];
                do
                {
                  v156 = (__int64 *)v154[1];
                  if ( v156 )
                  {
                    v157 = &v156[*((unsigned int *)v156 - 1)];
                    if ( v156 >= v157 )
                      goto LABEL_169;
                    do
                    {
                      v158 = *v156;
                      if ( *v156 )
                      {
                        v159 = *v154;
                        v65 = (*(_DWORD *)(v158 + 8))-- == 1;
                        if ( v65 )
                          sub_15D7BC0(v159, v158);
                      }
                      ++v156;
                    }
                    while ( v156 < v157 );
                    v156 = (__int64 *)v154[1];
                    if ( v156 )
LABEL_169:
                      sub_186B220(v156 - 1);
                  }
                  v154 += 2;
                }
                while ( v154 != v155 );
                a4 = v221;
                v92 = v195;
                v144 = v203;
                a2 = v211;
                a5 = v222;
                v143 = *v221;
              }
              v204 = v144;
              sub_186B220(v143 - 1);
              v144 = v204;
              v93 = (unsigned int)v204[1];
              v94 = &v92[2 * v93];
            }
            else
            {
              *(_DWORD *)(v93 + 4) = 0;
              v94 = (__int64 *)(v93 + 8);
              LODWORD(v93) = 0;
            }
            *a4 = v92;
            *v144 = v185;
          }
        }
        else
        {
          v169 = (_QWORD *)sub_186B270(0x28u);
          *v169 = 2;
          LODWORD(v93) = 0;
          v92 = v169 + 1;
          *a4 = v92;
          v94 = v92;
        }
        v94[1] = 0;
        *v94 = v214;
        if ( *((_DWORD *)v79 - 1) )
        {
          v95 = *v79;
          if ( *v79 )
            ++*(_DWORD *)(v95 + 8);
          v179 = v95;
          v96 = (_QWORD *)sub_186B270(0x18u);
          v97 = v96 + 1;
          *v96 = 2;
          v98 = v179;
          v99 = 0;
          v94[1] = (__int64)(v96 + 1);
          v100 = v96 + 1;
          for ( m = 1; ; m = (_DWORD)v117 + 1 )
          {
            *v97 = v98;
            v102 = v99 + 1;
            *((_DWORD *)v100 - 1) = m;
            if ( (unsigned int)v102 >= *((_DWORD *)v79 - 1) )
              break;
            while ( 1 )
            {
              v103 = v79[v102];
              if ( v103 )
                ++*(_DWORD *)(v103 + 8);
              v104 = *((_DWORD *)v100 - 1);
              if ( v104 == *((_DWORD *)v100 - 2) )
                break;
              ++v102;
              v100[v104] = v103;
              *((_DWORD *)v100 - 1) = v104 + 1;
              if ( (unsigned int)v102 >= *((_DWORD *)v79 - 1) )
                goto LABEL_96;
            }
            v115 = (3 * v104 + 1) >> 1;
            v116 = 8 * v115 + 8;
            if ( 8 * v104 + 8 >= (unsigned int)v116 || v104 >= v115 )
            {
              v5 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(&v225, "Overflow encountered when expanding vector");
              *v5 = (char *)off_1C63128;
              sub_2333C0(v5 + 1, &v225);
              sub_233E40((__int64)&v225);
              __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v199 = v102;
            v189 = (3 * v104 + 1) >> 1;
            v181 = v103;
            v117 = (unsigned int *)sub_186B300(v100 - 1, v116);
            v118 = v117[1];
            v100 = v117 + 2;
            v98 = v181;
            v99 = v199;
            v94[1] = (__int64)(v117 + 2);
            *v117 = v189;
            LODWORD(v117) = v118;
            v97 = &v100[v118];
          }
LABEL_96:
          v92 = *a4;
          LODWORD(v93) = *((_DWORD *)*a4 - 1);
        }
        v105 = v79;
        *((_DWORD *)v92 - 1) = v93 + 1;
        v106 = *((unsigned int *)v79 - 1);
        if ( v79 < &v79[v106] )
        {
          v173 = a4;
          v107 = &v79[v106];
          do
          {
            v108 = *v105;
            if ( *v105 )
            {
              v65 = (*(_DWORD *)(v108 + 8))-- == 1;
              if ( v65 )
                sub_15D7BC0(v214, v108);
            }
            ++v105;
          }
          while ( v105 < v107 );
          a4 = v173;
        }
        sub_186B220(v79 - 1);
        v213 += 8;
        if ( v220 == v213 )
          goto LABEL_177;
        v72 = *(_QWORD *)(v219 + 16);
      }
      v160 = *(_QWORD *)(v74 + 8);
      if ( v160 )
        ++*(_DWORD *)(v160 + 8);
      v161 = (_QWORD *)sub_186B270(0x18u);
      v161[1] = v160;
      v79 = v161 + 1;
      *v161 = 0x100000002LL;
      v88 = 1;
LABEL_81:
      v90 = v79;
      v91 = &v79[v88];
      while ( !*(_WORD *)(*v90 + 4LL) && (*(_BYTE *)(*v90 + 30LL) & 1) != 0 )
      {
        if ( ++v90 == v91 )
          goto LABEL_85;
      }
      for ( n = v79; n < v91; ++n )
      {
        v114 = *n;
        if ( *n )
        {
          v65 = (*(_DWORD *)(v114 + 8))-- == 1;
          if ( v65 )
            sub_15D7BC0(v214, v114);
        }
      }
      sub_186B220(v79 - 1);
      return 0;
    }
  }
LABEL_177:
  v162 = *a5;
  v163 = a5[1];
  v164 = *(_QWORD *)(v219 + 24);
  if ( !v164 )
  {
    if ( v162 && (v65 = *(_DWORD *)(v162 + 8) == 1, --*(_DWORD *)(v162 + 8), v65) )
    {
      sub_15D7BC0(v163, v162);
      *a5 = 0;
    }
    else
    {
      *a5 = 0;
    }
    return 0;
  }
  ++*(_DWORD *)(v164 + 8);
  if ( v162 )
  {
    v65 = (*(_DWORD *)(v162 + 8))-- == 1;
    if ( v65 )
      sub_15D7BC0(v163, v162);
  }
  v65 = *(_WORD *)(v164 + 4) == 0;
  *a5 = v164;
  if ( v65 && (*(_BYTE *)(v164 + 30) & 1) != 0 )
  {
    v165 = *(_DWORD **)(*(_QWORD *)(v164 + 16) + 24LL);
    if ( v165 && *(_DWORD *)(a1 + 8) == *v165 && v165[1] == 13 )
    {
      v166 = *(_QWORD *)a1;
      v225 = 0;
      v226 = v166;
      sub_3FA320((__int64 *)a1, a2, v164, &v225, 1u);
      v167 = v225;
      if ( *a5 != v225 )
      {
        sub_3FA300(*a5, a5[1]);
        v167 = v225;
        *a5 = v225;
        if ( v167 )
          ++*(_DWORD *)(v167 + 8);
      }
      sub_3FA300(v167, v226);
    }
    return 1;
  }
  return 0;
}

