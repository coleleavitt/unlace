__int64 __fastcall sub_DC8C80(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  _QWORD *v7; // rbx
  __int64 result; // rax
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  _BYTE *v13; // r15
  size_t v14; // r12
  _BYTE *v15; // rdi
  __int64 v16; // rbp
  void *v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rbp
  __int64 v20; // rax
  __int64 v21; // r12
  __int64 v22; // r15
  __int64 v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // r12
  unsigned int v27; // edx
  size_t v28; // r15
  __int64 v29; // rax
  int v30; // eax
  __int64 v31; // rbp
  int v32; // eax
  __int64 v33; // rbp
  __int64 v34; // r15
  __int64 v35; // rax
  __int64 *v36; // rbp
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rsi
  __int64 v40; // rax
  __int64 v41; // r15
  unsigned int v42; // edx
  size_t v43; // r13
  __int64 *v44; // rax
  _QWORD *v45; // rbp
  __int64 v46; // r13
  unsigned int v47; // eax
  __int64 v48; // r15
  bool v49; // zf
  __int64 v50; // rbp
  __int64 v51; // rax
  char *v52; // rdi
  __int64 v53; // rax
  __int64 v54; // rcx
  __int64 v55; // rbp
  __int64 v56; // rax
  char *v57; // rdi
  __int64 v58; // rax
  __int64 v59; // rsi
  __int64 v60; // rdx
  __int64 v61; // rax
  unsigned __int64 v62; // r8
  int v63; // ecx
  __int64 v64; // rax
  __int64 v65; // rsi
  __int64 v66; // rcx
  __int64 v67; // rdi
  __int64 v68; // rax
  int v69; // ecx
  unsigned int v70; // r15d
  __int64 v71; // r12
  __int64 v72; // rdi
  unsigned __int64 v73; // r9
  __int64 v74; // rdx
  __int64 v75; // rax
  unsigned __int64 v76; // r8
  int v77; // ecx
  __int64 v78; // rax
  __int64 v79; // rsi
  __int64 v80; // rcx
  __int64 v81; // rdi
  __int64 k; // rax
  int v83; // ecx
  int v84; // eax
  __int64 v85; // rbp
  __int64 v86; // rdi
  __int64 v87; // rax
  __int64 v88; // r12
  unsigned int v89; // edx
  unsigned int v90; // ebp
  __int64 v91; // r15
  char *v92; // rbp
  size_t v93; // r13
  __int64 v94; // r12
  _QWORD *v95; // r15
  _QWORD *v96; // rdx
  unsigned int v97; // eax
  __int64 v98; // rcx
  int v99; // eax
  _QWORD *v100; // rcx
  _QWORD *v101; // rcx
  unsigned int v102; // eax
  __int64 v103; // rsi
  int v104; // eax
  _QWORD *v105; // rsi
  int v106; // eax
  int v107; // eax
  unsigned int v108; // ecx
  size_t v109; // rsi
  __int64 v110; // rax
  _QWORD *v111; // rax
  __int64 v112; // rbp
  unsigned __int64 v113; // r15
  unsigned __int64 v114; // r13
  __int64 *v115; // rbx
  _QWORD *v116; // r15
  __int64 v117; // rcx
  __int64 v118; // r8
  _QWORD *v119; // rsi
  unsigned int v120; // eax
  __int64 v121; // rdi
  int v122; // eax
  _QWORD *v123; // rdi
  __int64 v124; // rax
  __int64 v125; // rbp
  __int64 *v126; // r13
  __int64 v127; // rax
  unsigned __int64 v128; // r12
  __int64 v129; // rax
  __int64 *v130; // rbx
  unsigned __int64 v131; // r12
  __int64 v132; // rcx
  __int64 v133; // r8
  _QWORD *v134; // rsi
  unsigned int v135; // eax
  __int64 v136; // rdi
  int v137; // eax
  _QWORD *v138; // rdi
  __int64 v139; // rax
  __int64 v140; // rax
  size_t v141; // rbp
  unsigned __int64 v142; // rdx
  _BYTE *v143; // rdi
  __int64 v144; // rbp
  __int64 v145; // rdi
  __int64 v146; // rax
  __int64 v147; // r15
  unsigned int v148; // edx
  unsigned int v149; // ebp
  __int64 v150; // r13
  __int64 v151; // rax
  __m128i si128; // xmm0
  unsigned int v153; // ebp
  size_t v154; // rsi
  unsigned int *v155; // rax
  __int64 v156; // rsi
  __int64 v157; // rbp
  __int64 v158; // rax
  _QWORD *v159; // rdi
  __int64 v160; // rax
  size_t v161; // rbp
  unsigned __int64 v162; // rdi
  _BYTE *v163; // rax
  size_t v164; // rdx
  void *v165; // r13
  size_t v166; // rcx
  _BYTE *v167; // r8
  _BYTE *v168; // rdi
  __int64 v169; // rax
  __int64 v170; // rsi
  unsigned int v171; // r9d
  unsigned int *v172; // rax
  __int64 v173; // rdi
  unsigned int v174; // r9d
  unsigned int *v175; // rax
  __int64 v176; // rdi
  __int64 v177; // rax
  __int64 v178; // r8
  __int64 v179; // rbp
  __int64 v180; // rax
  _QWORD *v181; // rdi
  __int64 v182; // rax
  _QWORD *v183; // rax
  _QWORD *v184; // rcx
  __int64 j; // rax
  _QWORD *v186; // rax
  _QWORD *v187; // rsi
  _QWORD *v188; // rax
  _QWORD *v189; // rsi
  __int64 i; // rax
  char **exception; // rbx
  _QWORD *v192; // rbp
  _QWORD *v193; // rbx
  char **v194; // rbx
  _QWORD *v195; // rbp
  char **v196; // rbp
  char **v197; // rbx
  int v198; // [rsp+0h] [rbp-1A8h]
  char *v199; // [rsp+8h] [rbp-1A0h]
  size_t v200; // [rsp+8h] [rbp-1A0h]
  size_t v201; // [rsp+8h] [rbp-1A0h]
  void *v202; // [rsp+10h] [rbp-198h]
  void **p_src; // [rsp+18h] [rbp-190h]
  int *v204; // [rsp+20h] [rbp-188h]
  _BYTE *v205; // [rsp+20h] [rbp-188h]
  void *v206; // [rsp+20h] [rbp-188h]
  int v207; // [rsp+28h] [rbp-180h]
  _QWORD *v208; // [rsp+30h] [rbp-178h]
  size_t v209; // [rsp+30h] [rbp-178h]
  size_t v210; // [rsp+30h] [rbp-178h]
  __int64 v211; // [rsp+38h] [rbp-170h]
  __int64 v212; // [rsp+40h] [rbp-168h]
  int v213; // [rsp+48h] [rbp-160h]
  unsigned int v214; // [rsp+4Ch] [rbp-15Ch]
  unsigned int v215; // [rsp+4Ch] [rbp-15Ch]
  int v216; // [rsp+50h] [rbp-158h]
  int v217[2]; // [rsp+58h] [rbp-150h] BYREF
  int v218; // [rsp+60h] [rbp-148h] BYREF
  __int64 v219; // [rsp+68h] [rbp-140h] BYREF
  _BYTE v220[24]; // [rsp+70h] [rbp-138h] BYREF
  int v221; // [rsp+88h] [rbp-120h]
  void *v222; // [rsp+90h] [rbp-118h] BYREF
  int v223[2]; // [rsp+98h] [rbp-110h]
  int v224[2]; // [rsp+A0h] [rbp-108h] BYREF
  void *v225; // [rsp+A8h] [rbp-100h]
  __int64 v226[2]; // [rsp+B0h] [rbp-F8h] BYREF
  int v227[4]; // [rsp+C0h] [rbp-E8h] BYREF
  void *src; // [rsp+D0h] [rbp-D8h] BYREF
  size_t n; // [rsp+D8h] [rbp-D0h]
  __int64 v230; // [rsp+E0h] [rbp-C8h] BYREF
  _BYTE v231[192]; // [rsp+E8h] [rbp-C0h] BYREF

  v7 = (_QWORD *)a1;
  result = *(unsigned int *)(a1 + 1424);
  p_src = &src;
  v207 = a1 + 48;
  if ( (_DWORD)result != 2 )
  {
    while ( (_DWORD)result == 4 )
    {
      v139 = v7[6];
      v227[0] = 2978665;
      sub_180CE20(
        (int)p_src,
        v207,
        29545,
        a4,
        a5,
        a6,
        v198,
        v199,
        (int)v202,
        (__int64)p_src,
        (int)v204,
        v207,
        (int)v208,
        v211,
        v212,
        v213,
        v216,
        v217[0],
        v218,
        v219,
        *(int *)v220,
        *(int *)&v220[8],
        *(int *)&v220[16],
        v221,
        v139,
        v223[0],
        v224[0],
        v225,
        (int)v227,
        3);
      if ( 0x7FFFFFFFFFFFFFFFLL - v226[1] < n )
        std::__throw_length_error("basic_string::append");
      v140 = v226[0];
      v141 = n + v226[1];
      if ( (int *)v226[0] == v227 )
        v142 = 15;
      else
        v142 = *(_QWORD *)v227;
      if ( v142 < v141 )
      {
        sub_23A830(v226, v226[1], 0, (char *)src, n);
        v140 = v226[0];
      }
      else if ( n )
      {
        v143 = (_BYTE *)(v226[0] + v226[1]);
        if ( n == 1 )
          *v143 = *(_BYTE *)src;
        else
          memcpy(v143, src, n);
        v140 = v226[0];
      }
      v226[1] = v141;
      *(_BYTE *)(v140 + v141) = 0;
      sub_233E40((__int64)p_src);
      sub_180C5A0(p_src, v226[0]);
      if ( *((_DWORD *)v7 + 356) != 9 )
        sub_DC0980(v7);
      v144 = *v7;
      v145 = *(_QWORD *)(*v7 + 312LL);
      if ( !v145 )
      {
        sub_DFBCB0(*v7);
        v145 = *(_QWORD *)(v144 + 312);
      }
      v146 = sub_DE3F80(v145, *((unsigned int *)v7 + 383), &v222, p_src, 0, 0);
      v147 = v146;
      if ( v146 )
        ++*(_DWORD *)(v146 + 16);
      v148 = *(_DWORD *)(a2 + 16);
      v149 = *(_DWORD *)(a2 + 20);
      if ( v148 >= v149 )
      {
        v179 = 2 * v149;
        v180 = sub_186B270(8 * v179);
        v148 = *(_DWORD *)(a2 + 16);
        v181 = *(_QWORD **)(a2 + 8);
        v150 = v180;
        if ( v148 )
        {
          if ( v148 - 1 <= 2 || (_QWORD *)v180 == v181 + 1 )
          {
            for ( i = 0; i != v148; ++i )
              *(_QWORD *)(v150 + i * 8) = v181[i];
          }
          else
          {
            v182 = 0;
            do
            {
              *(__m128i *)(v150 + v182 * 8) = _mm_loadu_si128((const __m128i *)&v181[v182]);
              v182 += 2;
            }
            while ( v182 != 2LL * (v148 >> 1) );
            if ( (v148 & 1) != 0 )
              *(_QWORD *)(v150 + 8LL * (v148 & 0xFFFFFFFE)) = v181[v148 & 0xFFFFFFFE];
          }
        }
        if ( v181 != (_QWORD *)(a2 + 24) && v181 )
        {
          sub_186B220(v181);
          v148 = *(_DWORD *)(a2 + 16);
        }
        *(_QWORD *)(a2 + 8) = v150;
        *(_DWORD *)(a2 + 20) = v179;
      }
      else
      {
        v150 = *(_QWORD *)(a2 + 8);
      }
      *(_QWORD *)(v150 + 8LL * v148) = v147;
      *(_DWORD *)(a2 + 16) = v148 + 1;
      sub_233E40((__int64)v226);
LABEL_126:
      result = *((unsigned int *)v7 + 356);
      if ( (_DWORD)result == 2 )
        goto LABEL_127;
    }
    sub_DBF660((__int64)v7, "invalid datatype declaration, '(' or ')' expected");
    sub_DBF580(
      *((unsigned int *)v7 + 356),
      (__int64)"invalid constructor declaration, symbol (constructor name) expected");
    sub_180CE20(
      (int)p_src,
      v207,
      v9,
      v10,
      v11,
      v12,
      v198,
      v199,
      (int)v224,
      (__int64)p_src,
      (int)v204,
      v207,
      (int)v208,
      v211,
      v212,
      v213,
      v216,
      v7[6],
      v218,
      v219,
      *(int *)v220,
      *(int *)&v220[8],
      *(int *)&v220[16],
      v221,
      (int)v224,
      3,
      2978665,
      v225,
      v226[0],
      v226[1]);
    if ( 0x7FFFFFFFFFFFFFFFLL - *(_QWORD *)v223 < n )
      std::__throw_length_error("basic_string::append");
    v13 = v222;
    v14 = n + *(_QWORD *)v223;
    if ( v222 == v202 )
    {
      if ( v14 <= 0xF )
      {
LABEL_6:
        if ( n )
        {
          v15 = (char *)v222 + *(_QWORD *)v223;
          if ( n == 1 )
            *v15 = *(_BYTE *)src;
          else
            memcpy(v15, src, n);
          v13 = v222;
        }
LABEL_10:
        *(_QWORD *)v223 = v14;
        v13[v14] = 0;
        if ( src != &v230 )
          operator delete(src, v230 + 1);
        v204 = &v218;
        sub_180C5A0(&v218, v222);
        if ( *((_DWORD *)v7 + 356) != 9 )
          sub_DC0980(v7);
        v16 = *v7;
        v17 = *(void **)(*v7 + 312LL);
        if ( !v17 )
        {
          sub_DFBCB0(*v7);
          v17 = *(void **)(v16 + 312);
        }
        src = v17;
        v199 = v231;
        n = (size_t)v231;
        v230 = 0x1000000000LL;
        while ( 1 )
        {
          if ( *((_DWORD *)v7 + 356) == 2 )
          {
            v85 = *v7;
            v86 = *(_QWORD *)(*v7 + 312LL);
            if ( !v86 )
            {
              sub_DFBCB0(*v7);
              v86 = *(_QWORD *)(v85 + 312);
            }
            v87 = sub_DE3F80(v86, *((unsigned int *)v7 + 383), v217, &v218, (unsigned int)v230, n);
            v88 = v87;
            if ( v87 )
              ++*(_DWORD *)(v87 + 16);
            v89 = *(_DWORD *)(a2 + 16);
            v90 = *(_DWORD *)(a2 + 20);
            if ( v89 >= v90 )
            {
              v157 = 2 * v90;
              v158 = sub_186B270(8 * v157);
              v89 = *(_DWORD *)(a2 + 16);
              v159 = *(_QWORD **)(a2 + 8);
              v91 = v158;
              if ( v89 )
              {
                if ( v89 - 1 <= 2 || (_QWORD *)v158 == v159 + 1 )
                {
                  for ( j = 0; j != v89; ++j )
                    *(_QWORD *)(v91 + j * 8) = v159[j];
                }
                else
                {
                  v160 = 0;
                  do
                  {
                    *(__m128i *)(v91 + v160 * 8) = _mm_loadu_si128((const __m128i *)&v159[v160]);
                    v160 += 2;
                  }
                  while ( v160 != 2LL * (v89 >> 1) );
                  if ( (v89 & 1) != 0 )
                    *(_QWORD *)(v91 + 8LL * (v89 & 0xFFFFFFFE)) = v159[v89 & 0xFFFFFFFE];
                }
              }
              if ( v159 != (_QWORD *)(a2 + 24) && v159 )
              {
                sub_186B220(v159);
                v89 = *(_DWORD *)(a2 + 16);
              }
              *(_QWORD *)(a2 + 8) = v91;
              *(_DWORD *)(a2 + 20) = v157;
            }
            else
            {
              v91 = *(_QWORD *)(a2 + 8);
            }
            *(_QWORD *)(v91 + 8LL * v89) = v88;
            *(_DWORD *)(a2 + 16) = v89 + 1;
            sub_DBF8C0((__int64)v7, "invalid constructor declaration, ')' expected");
            v92 = (char *)n;
            v93 = n + 8LL * (unsigned int)v230;
            if ( n < v93 )
            {
              do
              {
                v94 = *(_QWORD *)v92;
                if ( *(_QWORD *)v92 )
                {
                  v95 = src;
                  v49 = (*(_DWORD *)(v94 + 16))-- == 1;
                  if ( v49 )
                  {
                    v96 = (_QWORD *)v95[10];
                    if ( v96 )
                    {
                      v97 = *((_DWORD *)v96 - 1);
                      if ( v97 == *((_DWORD *)v96 - 2) )
                      {
                        v108 = (3 * v97 + 1) >> 1;
                        v109 = 8 * v108 + 8;
                        if ( 8 * v97 + 8 >= (unsigned int)v109 || v97 >= v108 )
                        {
                          exception = (char **)__cxa_allocate_exception(0x28u);
                          sub_DBF430(v226, "Overflow encountered when expanding vector");
                          *exception = (char *)off_1C63128;
                          sub_2333C0(exception + 1, v226);
                          sub_233E40((__int64)v226);
                          __cxa_throw(
                            exception,
                            (struct type_info *)&`typeinfo for'default_exception,
                            (void (*)(void *))sub_230E50);
                        }
                        LODWORD(v204) = (3 * v97 + 1) >> 1;
                        v110 = sub_186B300(v96 - 1, v109);
                        v96 = (_QWORD *)(v110 + 8);
                        v95[10] = v110 + 8;
                        *(_DWORD *)v110 = (_DWORD)v204;
                        LODWORD(v110) = *(_DWORD *)(v110 + 4);
                        v100 = &v96[(unsigned int)v110];
                        v99 = v110 + 1;
                      }
                      else
                      {
                        v98 = v97;
                        v99 = v97 + 1;
                        v100 = &v96[v98];
                      }
                    }
                    else
                    {
                      v183 = (_QWORD *)sub_186B270(0x18u);
                      v96 = v183 + 1;
                      *v183 = 2;
                      v99 = 1;
                      v95[10] = v96;
                      v100 = v96;
                    }
                    *v100 = v94;
                    *((_DWORD *)v96 - 1) = v99;
                  }
                  sub_DE3700(v95);
                }
                v92 += 8;
              }
              while ( (unsigned __int64)v92 < v93 );
              v92 = (char *)n;
            }
            if ( v92 != v199 && v92 )
              sub_186B220(v92);
            if ( v222 != v202 )
              operator delete(v222, *(_QWORD *)v224 + 1LL);
            goto LABEL_126;
          }
          sub_DBF660((__int64)v7, "invalid datatype declaration, '(' or ')' expected");
          if ( *((_DWORD *)v7 + 356) != 4 )
          {
            v195 = __cxa_allocate_exception(0x30u);
            sub_305660(v195, "invalid accessor declaration, symbol (accessor name) expected");
            __cxa_throw(v195, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
          }
          v29 = v7[176];
          if ( v29 )
            v30 = *(_DWORD *)(v29 - 4);
          else
            v30 = 0;
          *((_DWORD *)v7 + 517) = v30;
          v31 = v7[6];
          v32 = sub_DDB0A0((int)v7 + 16, v198, (int)v199, (int)v202, (__int64)p_src);
          *((_DWORD *)v7 + 356) = v32;
          v219 = v31;
          if ( v32 != 4 )
          {
            sub_DBFDB0(v7);
            v33 = *v7;
            v34 = *(_QWORD *)(*v7 + 312LL);
            if ( !v34 )
            {
              sub_DFBCB0(*v7);
              v34 = *(_QWORD *)(v33 + 312);
            }
            v35 = v7[200];
            if ( v35 )
            {
              v36 = *(__int64 **)(v35 + 8);
              goto LABEL_42;
            }
            v124 = sub_186B270(0x10u);
            v125 = *v7;
            v126 = (__int64 *)v124;
            v127 = *(_QWORD *)(*v7 + 312LL);
            if ( !v127 )
            {
              sub_DFBCB0(*v7);
              v127 = *(_QWORD *)(v125 + 312);
            }
            v36 = (__int64 *)v7[200];
            *v126 = v127;
            v126[1] = 0;
            if ( v126 == v36 )
            {
              v36 = nullptr;
            }
            else
            {
              if ( !v36 )
              {
                v7[200] = v126;
                v37 = 0xFFFFFFFFLL;
                goto LABEL_44;
              }
              v128 = v36[1];
              if ( v128 )
              {
                v129 = *(unsigned int *)(v128 - 4);
                if ( v128 >= v128 + 8 * v129 )
                  goto LABEL_213;
                v208 = v7;
                v130 = (__int64 *)v36[1];
                v131 = v128 + 8 * v129;
                do
                {
                  v132 = *v130;
                  if ( *v130 )
                  {
                    v133 = *v36;
                    v49 = (*(_DWORD *)(v132 + 16))-- == 1;
                    if ( v49 )
                    {
                      v134 = *(_QWORD **)(v133 + 80);
                      if ( v134 )
                      {
                        v135 = *((_DWORD *)v134 - 1);
                        if ( v135 == *((_DWORD *)v134 - 2) )
                        {
                          v171 = (3 * v135 + 1) >> 1;
                          if ( 8 * v135 + 8 >= 8 * v171 + 8 || v135 >= v171 )
                          {
                            v197 = (char **)__cxa_allocate_exception(0x28u);
                            sub_DBF430(v226, "Overflow encountered when expanding vector");
                            *v197 = (char *)off_1C63128;
                            sub_2333C0(v197 + 1, v226);
                            sub_233E40((__int64)v226);
                            __cxa_throw(
                              v197,
                              (struct type_info *)&`typeinfo for'default_exception,
                              (void (*)(void *))sub_230E50);
                          }
                          v214 = (3 * v135 + 1) >> 1;
                          v212 = v133;
                          v211 = v132;
                          v172 = (unsigned int *)sub_186B300(v134 - 1, 8 * v171 + 8);
                          v133 = v212;
                          v173 = v172[1];
                          v134 = v172 + 2;
                          v132 = v211;
                          *(_QWORD *)(v212 + 80) = v172 + 2;
                          *v172 = v214;
                          LODWORD(v172) = v173;
                          v138 = &v134[v173];
                          v137 = (_DWORD)v172 + 1;
                        }
                        else
                        {
                          v136 = v135;
                          v137 = v135 + 1;
                          v138 = &v134[v136];
                        }
                      }
                      else
                      {
                        v212 = v133;
                        v211 = v132;
                        v186 = (_QWORD *)sub_186B270(0x18u);
                        v133 = v212;
                        v132 = v211;
                        v187 = v186;
                        *v186 = 2;
                        v137 = 1;
                        v134 = v187 + 1;
                        *(_QWORD *)(v212 + 80) = v134;
                        v138 = v134;
                      }
                      *v138 = v132;
                      *((_DWORD *)v134 - 1) = v137;
                    }
                    sub_DE3700(v133);
                  }
                  ++v130;
                }
                while ( (unsigned __int64)v130 < v131 );
                v128 = v36[1];
                v7 = v208;
                if ( v128 )
LABEL_213:
                  sub_186B220((void *)(v128 - 8));
              }
              sub_186B220(v36);
              v7[200] = v126;
              v36 = (__int64 *)v126[1];
LABEL_42:
              if ( v36 )
              {
                v37 = (unsigned int)(*((_DWORD *)v36 - 1) - 1);
LABEL_44:
                v38 = v36[v37];
                v39 = *((unsigned int *)v7 + 383);
                LODWORD(v226[0]) = 0;
                v226[1] = v38;
                *(_QWORD *)v227 = 0;
                v40 = sub_DE1650(v34, v39, &v219, v226);
                v41 = v40;
                if ( v40 )
                  ++*(_DWORD *)(v40 + 16);
                v42 = v230;
                if ( (unsigned int)v230 >= HIDWORD(v230) )
                {
                  v55 = (unsigned int)(2 * HIDWORD(v230));
                  v56 = sub_186B270(8 * v55);
                  v42 = v230;
                  v57 = (char *)n;
                  v43 = v56;
                  if ( (_DWORD)v230 )
                  {
                    if ( (unsigned int)(v230 - 1) <= 2 || v56 == n + 8 )
                    {
                      v177 = 0;
                      v178 = 8LL * (unsigned int)v230;
                      do
                      {
                        *(_QWORD *)(v43 + v177) = *(_QWORD *)&v57[v177];
                        v177 += 8;
                      }
                      while ( v177 != v178 );
                    }
                    else
                    {
                      v58 = 0;
                      v59 = 16LL * ((unsigned int)v230 >> 1);
                      do
                      {
                        *(__m128i *)(v43 + v58) = _mm_loadu_si128((const __m128i *)&v57[v58]);
                        v58 += 16;
                      }
                      while ( v58 != v59 );
                      if ( (v42 & 1) != 0 )
                        *(_QWORD *)(v43 + 8LL * (v42 & 0xFFFFFFFE)) = *(_QWORD *)&v57[8 * (v42 & 0xFFFFFFFE)];
                    }
                  }
                  if ( v57 != v199 && v57 )
                  {
                    sub_186B220(v57);
                    v42 = v230;
                  }
                  n = v43;
                  HIDWORD(v230) = v55;
                }
                else
                {
                  v43 = n;
                }
                *(_QWORD *)(v43 + 8LL * v42) = v41;
                v44 = (__int64 *)v7[200];
                LODWORD(v230) = v42 + 1;
                if ( v44 )
                {
                  v45 = (_QWORD *)v44[1];
                  v46 = *v44;
                  v47 = *((_DWORD *)v45 - 1) - 1;
                }
                else
                {
                  v111 = (_QWORD *)sub_186B270(0x10u);
                  v112 = *v7;
                  v46 = *(_QWORD *)(*v7 + 312LL);
                  if ( !v46 )
                  {
                    v208 = v111;
                    sub_DFBCB0(*v7);
                    v46 = *(_QWORD *)(v112 + 312);
                    v111 = v208;
                  }
                  v45 = (_QWORD *)v7[200];
                  *v111 = v46;
                  v111[1] = 0;
                  if ( v111 == v45 )
                  {
                    v45 = nullptr;
                    v47 = MEMORY[0xFFFFFFFFFFFFFFFC] - 1;
                  }
                  else
                  {
                    if ( v45 )
                    {
                      v113 = v45[1];
                      if ( v113 )
                      {
                        v114 = v113 + 8LL * *(unsigned int *)(v113 - 4);
                        if ( v113 >= v114 )
                          goto LABEL_204;
                        v209 = (size_t)v7;
                        v115 = (__int64 *)v45[1];
                        v116 = v111;
                        do
                        {
                          v117 = *v115;
                          if ( *v115 )
                          {
                            v118 = *v45;
                            v49 = (*(_DWORD *)(v117 + 16))-- == 1;
                            if ( v49 )
                            {
                              v119 = *(_QWORD **)(v118 + 80);
                              if ( v119 )
                              {
                                v120 = *((_DWORD *)v119 - 1);
                                if ( v120 == *((_DWORD *)v119 - 2) )
                                {
                                  v174 = (3 * v120 + 1) >> 1;
                                  if ( 8 * v120 + 8 >= 8 * v174 + 8 || v120 >= v174 )
                                  {
                                    v194 = (char **)__cxa_allocate_exception(0x28u);
                                    sub_DBF430(v226, "Overflow encountered when expanding vector");
                                    *v194 = (char *)off_1C63128;
                                    sub_2333C0(v194 + 1, v226);
                                    sub_233E40((__int64)v226);
                                    __cxa_throw(
                                      v194,
                                      (struct type_info *)&`typeinfo for'default_exception,
                                      (void (*)(void *))sub_230E50);
                                  }
                                  v215 = (3 * v120 + 1) >> 1;
                                  v212 = v118;
                                  v211 = v117;
                                  v175 = (unsigned int *)sub_186B300(v119 - 1, 8 * v174 + 8);
                                  v118 = v212;
                                  v176 = v175[1];
                                  v119 = v175 + 2;
                                  v117 = v211;
                                  *(_QWORD *)(v212 + 80) = v175 + 2;
                                  *v175 = v215;
                                  LODWORD(v175) = v176;
                                  v123 = &v119[v176];
                                  v122 = (_DWORD)v175 + 1;
                                }
                                else
                                {
                                  v121 = v120;
                                  v122 = v120 + 1;
                                  v123 = &v119[v121];
                                }
                              }
                              else
                              {
                                v212 = v118;
                                v211 = v117;
                                v188 = (_QWORD *)sub_186B270(0x18u);
                                v118 = v212;
                                v117 = v211;
                                v189 = v188;
                                *v188 = 2;
                                v122 = 1;
                                v119 = v189 + 1;
                                *(_QWORD *)(v212 + 80) = v119;
                                v123 = v119;
                              }
                              *v123 = v117;
                              *((_DWORD *)v119 - 1) = v122;
                            }
                            sub_DE3700(v118);
                          }
                          ++v115;
                        }
                        while ( (unsigned __int64)v115 < v114 );
                        v111 = v116;
                        v113 = v45[1];
                        v7 = (_QWORD *)v209;
                        if ( v113 )
                        {
LABEL_204:
                          v210 = (size_t)v111;
                          sub_186B220((void *)(v113 - 8));
                          v111 = (_QWORD *)v210;
                        }
                      }
                      v208 = v111;
                      sub_186B220(v45);
                      v111 = v208;
                      v45 = (_QWORD *)v208[1];
                      v46 = *v208;
                    }
                    v7[200] = v111;
                    v47 = *((_DWORD *)v45 - 1) - 1;
                  }
                }
                v48 = v45[v47];
                *((_DWORD *)v45 - 1) = v47;
                if ( v48 )
                {
                  v49 = (*(_DWORD *)(v48 + 16))-- == 1;
                  if ( v49 )
                  {
                    v101 = *(_QWORD **)(v46 + 80);
                    if ( v101 )
                    {
                      v102 = *((_DWORD *)v101 - 1);
                      if ( v102 == *((_DWORD *)v101 - 2) )
                      {
                        v153 = (3 * v102 + 1) >> 1;
                        v154 = 8 * v153 + 8;
                        if ( 8 * v102 + 8 >= (unsigned int)v154 || v102 >= v153 )
                        {
                          v196 = (char **)__cxa_allocate_exception(0x28u);
                          sub_DBF430(v226, "Overflow encountered when expanding vector");
                          *v196 = (char *)off_1C63128;
                          sub_2333C0(v196 + 1, v226);
                          sub_233E40((__int64)v226);
                          __cxa_throw(
                            v196,
                            (struct type_info *)&`typeinfo for'default_exception,
                            (void (*)(void *))sub_230E50);
                        }
                        v155 = (unsigned int *)sub_186B300(v101 - 1, v154);
                        v156 = v155[1];
                        v101 = v155 + 2;
                        *(_QWORD *)(v46 + 80) = v155 + 2;
                        *v155 = v153;
                        LODWORD(v155) = v156;
                        v105 = &v101[v156];
                        v104 = (_DWORD)v155 + 1;
                      }
                      else
                      {
                        v103 = v102;
                        v104 = v102 + 1;
                        v105 = &v101[v103];
                      }
                    }
                    else
                    {
                      v184 = (_QWORD *)sub_186B270(0x18u);
                      *v184 = 2;
                      v104 = 1;
                      v101 = v184 + 1;
                      *(_QWORD *)(v46 + 80) = v101;
                      v105 = v101;
                    }
                    *v105 = v48;
                    *((_DWORD *)v101 - 1) = v104;
                  }
                  sub_DE3700(v46);
                }
                goto LABEL_32;
              }
            }
            v37 = 0xFFFFFFFFLL;
            goto LABEL_44;
          }
          v18 = *v7;
          v19 = *(_QWORD *)(*v7 + 312LL);
          if ( !v19 )
          {
            v208 = (_QWORD *)*v7;
            sub_DFBCB0(v18);
            v19 = v208[39];
            v18 = *v7;
          }
          v226[0] = v7[6];
          v20 = sub_DF89E0(v18, v226);
          v21 = v20;
          if ( v20 )
          {
            if ( (unsigned int)(*(_DWORD *)(v20 + 12) - 1) <= 0xFFFFFFFD )
            {
              v192 = __cxa_allocate_exception(0x30u);
              sub_305660(v192, "sort constructor expects parameters");
              __cxa_throw(v192, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
            }
            if ( *((_DWORD *)v7 + 356) != 9 )
              sub_DC0980(v7);
            v22 = *v7;
            v23 = *(_QWORD *)(*v7 + 312LL);
            if ( !v23 )
            {
              sub_DFBCB0(*v7);
              v23 = *(_QWORD *)(v22 + 312);
            }
            v24 = sub_DE16F0(v23, v21);
            *(_OWORD *)&v220[8] = 0;
            if ( !v24 )
              goto LABEL_91;
            goto LABEL_26;
          }
          v60 = v7[190];
          v61 = *((unsigned int *)v7 + 382);
          if ( v226[0] )
          {
            if ( (v226[0] & 7) == 1 )
              v62 = (unsigned __int64)v226[0] >> 3;
            else
              LODWORD(v62) = *(_DWORD *)(v226[0] - 8);
          }
          else
          {
            LODWORD(v62) = -1640531495;
          }
          v63 = v61 - 1;
          v64 = 24 * v61;
          v65 = v60 + v64;
          v66 = 24LL * ((unsigned int)v62 & v63);
          v67 = v60 + v66;
          if ( v66 == v64 )
          {
LABEL_133:
            while ( v67 != v60 )
            {
              v106 = *(_DWORD *)(v60 + 4);
              if ( v106 == 2 )
              {
                if ( (_DWORD)v62 == *(_DWORD *)v60 && *(_QWORD *)(v60 + 8) == v226[0] )
                {
                  v68 = v60;
                  goto LABEL_86;
                }
              }
              else if ( !v106 )
              {
                break;
              }
              v60 += 24;
            }
LABEL_207:
            *(_OWORD *)&v220[8] = 0;
LABEL_91:
            v73 = v7[6];
            v74 = v7[193];
            v75 = *((unsigned int *)v7 + 388);
            if ( v73 )
            {
              if ( (v7[6] & 7LL) == 1 )
                v76 = v73 >> 3;
              else
                LODWORD(v76) = *(_DWORD *)(v73 - 8);
            }
            else
            {
              LODWORD(v76) = -1640531495;
            }
            v77 = v75 - 1;
            v78 = 24 * v75;
            v79 = v74 + v78;
            v80 = 24LL * ((unsigned int)v76 & v77);
            v81 = v74 + v80;
            if ( v80 != v78 )
            {
              for ( k = v74 + v80; v79 != k; k += 24 )
              {
                v83 = *(_DWORD *)(k + 4);
                if ( v83 == 2 )
                {
                  if ( (_DWORD)v76 == *(_DWORD *)k && *(_QWORD *)(k + 8) == v73 )
                  {
LABEL_101:
                    v84 = *(_DWORD *)(k + 16);
                    *(_DWORD *)v220 = 1;
                    *(_QWORD *)&v220[16] = 0;
                    *(_DWORD *)&v220[8] = v84;
                    goto LABEL_102;
                  }
                }
                else if ( !v83 )
                {
                  goto LABEL_208;
                }
              }
            }
            for ( ; v81 != v74; v74 += 24 )
            {
              v107 = *(_DWORD *)(v74 + 4);
              if ( v107 == 2 )
              {
                if ( (_DWORD)v76 == *(_DWORD *)v74 && *(_QWORD *)(v74 + 8) == v73 )
                {
                  k = v74;
                  goto LABEL_101;
                }
              }
              else if ( !v107 )
              {
                break;
              }
            }
LABEL_208:
            LODWORD(v226[0]) = 2;
            v151 = v7[6];
            v226[1] = 0;
            si128 = _mm_load_si128((const __m128i *)v226);
            *(_QWORD *)v227 = v151;
            *(_QWORD *)&v220[16] = v151;
            *(__m128i *)v220 = si128;
LABEL_102:
            if ( *((_DWORD *)v7 + 356) != 9 )
              sub_DC0980(v7);
            goto LABEL_27;
          }
          v68 = v60 + v66;
          while ( 1 )
          {
            v69 = *(_DWORD *)(v68 + 4);
            if ( v69 != 2 )
            {
              if ( !v69 )
                goto LABEL_207;
              goto LABEL_82;
            }
            if ( (_DWORD)v62 == *(_DWORD *)v68 && *(_QWORD *)(v68 + 8) == v226[0] )
              break;
LABEL_82:
            v68 += 24;
            if ( v65 == v68 )
              goto LABEL_133;
          }
LABEL_86:
          v70 = *(_DWORD *)(v68 + 16);
          if ( *((_DWORD *)v7 + 356) != 9 )
            sub_DC0980(v7);
          v71 = *v7;
          v72 = *(_QWORD *)(*v7 + 312LL);
          if ( !v72 )
          {
            sub_DFBCB0(*v7);
            v72 = *(_QWORD *)(v71 + 312);
          }
          v24 = sub_DE3130(v72, *((unsigned int *)v7 + 383), v70);
          *(_OWORD *)&v220[8] = 0;
          if ( !v24 )
            goto LABEL_91;
LABEL_26:
          *(_DWORD *)v220 = 0;
          *(_QWORD *)&v220[8] = v24;
LABEL_27:
          v25 = sub_DE1650(v19, *((unsigned int *)v7 + 383), &v219, v220);
          v26 = v25;
          if ( v25 )
            ++*(_DWORD *)(v25 + 16);
          v27 = v230;
          if ( (unsigned int)v230 >= HIDWORD(v230) )
          {
            v50 = (unsigned int)(2 * HIDWORD(v230));
            v51 = sub_186B270(8 * v50);
            v27 = v230;
            v52 = (char *)n;
            v28 = v51;
            if ( (_DWORD)v230 )
            {
              if ( (unsigned int)(v230 - 1) <= 2 || v51 == n + 8 )
              {
                v169 = 0;
                v170 = 8LL * (unsigned int)v230;
                do
                {
                  *(_QWORD *)(v28 + v169) = *(_QWORD *)&v52[v169];
                  v169 += 8;
                }
                while ( v169 != v170 );
              }
              else
              {
                v53 = 0;
                v54 = 16LL * ((unsigned int)v230 >> 1);
                do
                {
                  *(__m128i *)(v28 + v53) = _mm_loadu_si128((const __m128i *)&v52[v53]);
                  v53 += 16;
                }
                while ( v53 != v54 );
                if ( (v27 & 1) != 0 )
                  *(_QWORD *)(v28 + 8LL * (v27 & 0xFFFFFFFE)) = *(_QWORD *)&v52[8 * (v27 & 0xFFFFFFFE)];
              }
            }
            if ( v52 && v52 != v199 )
            {
              sub_186B220(v52);
              v27 = v230;
            }
            n = v28;
            HIDWORD(v230) = v50;
          }
          else
          {
            v28 = n;
          }
          *(_QWORD *)(v28 + 8LL * v27) = v26;
          LODWORD(v230) = v27 + 1;
LABEL_32:
          sub_DBF8C0((__int64)v7, "invalid accessor declaration, ')' expected");
        }
      }
      if ( (v14 & 0x8000000000000000LL) == 0LL )
      {
        if ( v14 <= 0x1D )
        {
          v162 = 31;
          v161 = 30;
          goto LABEL_230;
        }
        goto LABEL_228;
      }
    }
    else
    {
      if ( *(_QWORD *)v224 >= v14 )
        goto LABEL_6;
      if ( (v14 & 0x8000000000000000LL) == 0LL )
      {
        v161 = 2LL * *(_QWORD *)v224;
        if ( v14 < 2LL * *(_QWORD *)v224 )
        {
          if ( (*(_QWORD *)v224 & 0x4000000000000000LL) == 0 )
          {
            v162 = v161 + 1;
            goto LABEL_230;
          }
          goto LABEL_275;
        }
LABEL_228:
        v162 = v14 + 1;
        if ( (__int64)(v14 + 1) >= 0 )
        {
          v161 = n + *(_QWORD *)v223;
LABEL_230:
          v208 = *(_QWORD **)v223;
          v205 = src;
          v200 = n;
          v163 = (_BYTE *)operator new(v162);
          v164 = (size_t)v208;
          v165 = v222;
          v13 = v163;
          v166 = v200;
          v167 = v205;
          if ( v208 )
          {
            if ( v208 == (_QWORD *)((char *)&dword_0 + 1) )
            {
              *v163 = *(_BYTE *)v222;
            }
            else
            {
              v208 = v205;
              v206 = (void *)v200;
              v201 = v164;
              memcpy(v163, v222, v164);
              v167 = v208;
              v166 = (size_t)v206;
              v164 = v201;
            }
          }
          if ( v167 && v166 )
          {
            v168 = &v13[v164];
            if ( v166 == 1 )
              *v168 = *v167;
            else
              memcpy(v168, v167, v166);
          }
          if ( v165 != v202 )
            operator delete(v165, *(_QWORD *)v224 + 1LL);
          v222 = v13;
          *(_QWORD *)v224 = v161;
          goto LABEL_10;
        }
LABEL_275:
        std::__throw_bad_alloc();
      }
    }
    std::__throw_length_error("basic_string::_M_create");
  }
LABEL_127:
  if ( !*(_DWORD *)(a2 + 16) )
  {
    v193 = __cxa_allocate_exception(0x30u);
    sub_305660(v193, "invalid datatype declaration, datatype does not have any constructors");
    __cxa_throw(v193, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
  }
  return result;
}

