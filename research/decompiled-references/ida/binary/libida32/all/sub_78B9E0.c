__int64 __fastcall sub_78B9E0(__int64 *a1, double *a2, int a3, _QWORD *a4, int a5, int a6)
{
  __int64 *v6; // r14
  __int64 v7; // r13
  __int64 v9; // rax
  _QWORD *v10; // rbp
  int v11; // r12d
  char v12; // dl
  __int64 v14; // rax
  __int64 v15; // rbx
  int v16; // edx
  size_t v17; // rax
  size_t v18; // rbp
  size_t v19; // r12
  __int64 v20; // rsi
  __int64 v21; // rbx
  __int64 v22; // r12
  unsigned __int64 v23; // rbp
  __int64 v24; // rsi
  bool v25; // zf
  __int64 v26; // rax
  const char *v27; // rbx
  size_t v28; // rax
  size_t v29; // r12
  size_t v30; // rbp
  __int64 v31; // rax
  __int64 v32; // rdx
  _BYTE *v33; // rbp
  unsigned __int64 v34; // rdx
  int *p_src; // r13
  unsigned int utf8_char; // ebx
  int *v37; // rax
  __int64 v38; // r15
  __int64 v39; // r8
  unsigned __int64 v40; // rdx
  __int64 v41; // rsi
  char **v42; // r13
  char *v43; // r15
  __int64 v44; // rbx
  __int64 v45; // r12
  unsigned __int64 v46; // rbp
  __int64 v47; // rsi
  __int64 v48; // r15
  __int64 v49; // r8
  unsigned __int64 v50; // rdx
  __int64 v51; // rsi
  __int64 v52; // r13
  __int64 v53; // r12
  __int64 v54; // r15
  unsigned __int64 v55; // rdx
  __int64 v56; // rsi
  __int64 v57; // r15
  unsigned __int64 v58; // rdx
  __int64 v59; // rsi
  __int64 v60; // r10
  unsigned __int64 v61; // rdx
  __int64 v62; // rsi
  __int64 v63; // r15
  __int64 v64; // rax
  size_t v65; // rbp
  char *v66; // r15
  __int64 v67; // rbx
  size_t v68; // r12
  __int64 v69; // rsi
  __int64 v70; // rbx
  unsigned __int64 v71; // rbp
  __int64 v72; // r12
  __int64 v73; // rsi
  __int64 v74; // r12
  unsigned __int64 v75; // rbp
  __int64 v76; // rsi
  __int64 v77; // rbx
  char v78; // al
  int v79; // r8d
  int v80; // r9d
  size_t v81; // r15
  __int64 v82; // rbx
  size_t v83; // r8
  _BYTE *v84; // rsi
  void *v85; // rdx
  unsigned __int64 v86; // rbx
  size_t v87; // r12
  __int64 v88; // rbp
  size_t v89; // r13
  __int64 v90; // rsi
  __int64 v91; // rbx
  unsigned __int64 v92; // rbp
  __int64 v93; // rsi
  __int64 v94; // rax
  __int64 v95; // rbx
  __int64 v96; // r12
  unsigned __int64 v97; // rbp
  __int64 v98; // rsi
  __int64 v99; // rax
  __int64 v100; // r15
  unsigned __int64 v101; // rdx
  __int64 v102; // rsi
  int v103; // ebp
  int v104; // ebx
  __int64 v105; // r12
  unsigned __int64 v106; // r13
  __int64 v107; // r15
  __int64 v108; // rsi
  __int64 v109; // rax
  __int64 v110; // rax
  __int64 v111; // rax
  __int64 v112; // r15
  unsigned __int64 v113; // rdx
  __int64 v114; // r8
  __int64 v115; // rsi
  int v116; // ebp
  int v117; // ebx
  __int64 v118; // r12
  unsigned __int64 v119; // r13
  __int64 v120; // r15
  __int64 v121; // rsi
  __int64 v122; // rax
  __int64 v123; // rax
  __int64 v124; // rax
  __int64 v125; // rax
  __int64 v126; // rax
  __int64 v127; // rbp
  unsigned __int64 v128; // r12
  __int64 v129; // r13
  __int64 v130; // rsi
  int v131; // r13d
  __int64 v132; // r15
  unsigned __int64 v133; // r12
  __int64 v134; // rbp
  __int64 v135; // rsi
  __int64 v136; // rax
  __int64 v137; // rbp
  unsigned __int64 v138; // r12
  __int64 v139; // r13
  __int64 v140; // rsi
  int v141; // r13d
  __int64 v142; // r15
  unsigned __int64 v143; // r12
  __int64 v144; // rbp
  __int64 v145; // rsi
  __int64 v146; // rax
  __int64 v147; // rax
  __int64 v148; // rax
  __int64 v149; // rax
  __int64 v150; // rax
  __int64 v151; // rax
  __int64 v152; // rax
  char *i; // rax
  __int64 *v154; // r15
  __int64 v155; // rax
  __int64 v156; // r10
  __int64 *v157; // r9
  __int64 v158; // r8
  unsigned __int64 v159; // rdx
  __int64 v160; // rsi
  unsigned __int64 v161; // rdx
  size_t v162; // r10
  __int64 v163; // r9
  __int64 v164; // r11
  __int64 v165; // rsi
  __int64 *v166; // r9
  unsigned __int64 v167; // rdx
  __int64 v168; // rsi
  unsigned __int64 v169; // rdx
  __int64 *v170; // r9
  __int64 v171; // rsi
  __int64 *v172; // r8
  unsigned __int64 v173; // rdx
  __int64 v174; // rsi
  __int64 *v175; // r8
  unsigned __int64 v176; // rdx
  __int64 v177; // rsi
  int j; // r9d
  __int64 v179; // r11
  unsigned __int64 v180; // rdx
  __int64 v181; // rsi
  __int64 *v182; // r8
  __int64 v183; // rax
  __int64 v184; // rax
  __int64 v185; // rax
  __int64 v186; // rax
  __int64 v187; // rax
  __int64 v188; // rax
  __int64 v189; // rax
  unsigned __int64 v190; // rdx
  char **v191; // rbp
  __int64 *v192; // r13
  char **v193; // rbx
  __int64 *v194; // rbp
  __int64 v195; // r12
  const char *v196; // rcx
  const char *v197; // rdi
  __int64 v198; // r14
  __int64 v199; // rcx
  __int64 v200; // rax
  __int64 v201; // rsi
  __int64 *v202; // r14
  __int64 v203; // rax
  __int64 v204; // rax
  __int64 v205; // rax
  void *v206; // [rsp+0h] [rbp-E8h]
  int v207; // [rsp+0h] [rbp-E8h]
  int v208; // [rsp+0h] [rbp-E8h]
  int v209; // [rsp+0h] [rbp-E8h]
  void *v210; // [rsp+0h] [rbp-E8h]
  void *v211; // [rsp+0h] [rbp-E8h]
  void *v212; // [rsp+0h] [rbp-E8h]
  void *v213; // [rsp+0h] [rbp-E8h]
  __int64 *v214; // [rsp+0h] [rbp-E8h]
  __int64 v215; // [rsp+8h] [rbp-E0h]
  int v216[2]; // [rsp+8h] [rbp-E0h]
  int v217[2]; // [rsp+8h] [rbp-E0h]
  int v218[2]; // [rsp+8h] [rbp-E0h]
  int v219[2]; // [rsp+8h] [rbp-E0h]
  int v220[2]; // [rsp+8h] [rbp-E0h]
  int v221[2]; // [rsp+8h] [rbp-E0h]
  __int64 v222; // [rsp+10h] [rbp-D8h]
  __int64 *v223; // [rsp+18h] [rbp-D0h]
  __int64 v224; // [rsp+20h] [rbp-C8h]
  __int64 v225; // [rsp+28h] [rbp-C0h]
  int v226; // [rsp+30h] [rbp-B8h]
  int *v227; // [rsp+38h] [rbp-B0h] BYREF
  void *v228; // [rsp+40h] [rbp-A8h] BYREF
  __int128 v229; // [rsp+48h] [rbp-A0h]
  void *v230; // [rsp+58h] [rbp-90h]
  void *v231; // [rsp+60h] [rbp-88h] BYREF
  int v232[4]; // [rsp+68h] [rbp-80h]
  int v233; // [rsp+78h] [rbp-70h]
  int src; // [rsp+80h] [rbp-68h] BYREF
  int v235; // [rsp+88h] [rbp-60h]
  int v236; // [rsp+90h] [rbp-58h]
  int v237; // [rsp+98h] [rbp-50h]
  __int64 v238[9]; // [rsp+A0h] [rbp-48h] BYREF

  v6 = a1;
  v7 = (__int64)a2;
  v9 = *(unsigned int *)a2;
  v238[1] = __readfsqword(0x28u);
  v10 = a4;
  if ( (unsigned int)(v9 - 3) <= 1 )
  {
    v231 = a2;
    sub_78B8C0(a4, (unsigned __int64 *)&v231);
    if ( !v12 )
      return 0;
    v9 = *(unsigned int *)a2;
  }
  v11 = a3 + 1;
  switch ( v9 )
  {
    case 1LL:
      sub_357520(a1);
      return 1;
    case 2LL:
      v21 = a1[1];
      if ( v21 )
      {
        v23 = v21 + 1;
        v22 = a1[1];
        --v21;
      }
      else
      {
        v22 = 1;
        v23 = 2;
      }
      v24 = *a1;
      if ( a1[2] < v23 )
      {
        v111 = qvector_reserve(a1, v24, v23, 1);
        *a1 = v111;
        v24 = v111;
      }
      a1[1] = v23;
      *(_BYTE *)(v24 + v21) = 34;
      *(_BYTE *)(*a1 + v22) = 0;
      v25 = *(_DWORD *)v7 == 2;
      v228 = nullptr;
      v26 = *(_QWORD *)(v7 + 8);
      v229 = 0;
      if ( v25 )
      {
        v27 = haystack;
        if ( *(_QWORD *)(v26 + 8) )
          v27 = *(const char **)v26;
        v231 = nullptr;
        *(_OWORD *)v232 = 0;
        if ( v27 )
        {
          v28 = strlen(v27);
          v29 = v28 + 1;
          v30 = v28;
          v231 = (void *)qvector_reserve(&v231, 0, v28 + 1, 1);
          *(_QWORD *)v232 = v29;
          memmove(v231, v27, v30);
          *((_BYTE *)v231 + v30) = 0;
          v31 = *(_QWORD *)v232;
          v32 = *(_QWORD *)v232 + 16LL;
          if ( *((_QWORD *)&v229 + 1) >= (unsigned __int64)(*(_QWORD *)v232 + 16LL) )
          {
LABEL_22:
            if ( v31 )
            {
              v33 = v231;
              v34 = 0;
              v227 = (int *)v231;
              p_src = (int *)v231;
              while ( 1 )
              {
                if ( v34 >= v31 - 1 )
                  goto LABEL_100;
                utf8_char = get_utf8_char(&v227);
                if ( utf8_char - 1 > 0xFFFFFFFD )
                {
                  v37 = v227;
                  v227 = (int *)((char *)v227 + 1);
                  utf8_char = *(unsigned __int8 *)v37;
                }
                if ( utf8_char <= 0x22 )
                  break;
                v78 = 92;
                if ( utf8_char != 92 )
                  goto LABEL_93;
LABEL_116:
                BYTE1(src) = v78;
                v81 = 2;
                p_src = &src;
                LOBYTE(src) = 92;
LABEL_95:
                v82 = v229;
                v83 = v81;
                if ( (_QWORD)v229 )
                {
                  v82 = v229 - 1;
                  v83 = v229 - 1 + v81;
                }
                v84 = v228;
                v85 = (void *)(v83 + 1);
                if ( *((_QWORD *)&v229 + 1) < v83 + 1 )
                {
                  *(_QWORD *)v219 = v83;
                  v206 = (void *)(v83 + 1);
                  v228 = (void *)qvector_reserve(&v228, v228, v85, 1);
                  v83 = *(_QWORD *)v219;
                  v84 = v228;
                  v85 = v206;
                }
                *(_QWORD *)&v229 = v85;
                v84[v83] = 0;
                memmove((char *)v228 + v82, p_src, v81);
                p_src = v227;
                v31 = *(_QWORD *)v232;
                v34 = (char *)v227 - v33;
                if ( !*(_QWORD *)v232 )
                  goto LABEL_100;
              }
              if ( utf8_char > 7 )
              {
                switch ( utf8_char )
                {
                  case 8u:
                    v78 = 98;
                    goto LABEL_116;
                  case 9u:
                    v78 = 116;
                    goto LABEL_116;
                  case 0xAu:
                    v78 = 110;
                    goto LABEL_116;
                  case 0xCu:
                    v78 = 102;
                    goto LABEL_116;
                  case 0xDu:
                    v78 = 114;
                    goto LABEL_116;
                  case 0x22u:
                    v78 = 34;
                    goto LABEL_116;
                  default:
                    break;
                }
              }
LABEL_93:
              if ( (unsigned __int8)is_cp_graphical(utf8_char) )
              {
                v81 = (char *)v227 - (char *)p_src;
              }
              else
              {
                p_src = &src;
                v81 = (int)qsnprintf((int)&src, 16, (int)"\\u%04X", utf8_char, v79, v80, (char)v206);
              }
              goto LABEL_95;
            }
LABEL_100:
            if ( v231 )
            {
              *(_QWORD *)v232 = 0;
              qfree(v231);
            }
            v86 = v229;
            if ( (_QWORD)v229 )
            {
              v87 = v229 - 1;
              if ( (_QWORD)v229 != 1 )
              {
                v88 = a1[1];
                v89 = v229 - 1;
                if ( v88 )
                {
                  --v88;
                  v89 = v87 + v88;
                  v86 = v229 + v88;
                }
                v90 = *a1;
                if ( a1[2] < v86 )
                {
                  v203 = qvector_reserve(a1, v90, v86, 1);
                  *a1 = v203;
                  v90 = v203;
                }
                a1[1] = v86;
                *(_BYTE *)(v90 + v89) = 0;
                memcpy((void *)(v88 + *a1), v228, v87);
              }
            }
            v91 = a1[1];
            v92 = 2;
            if ( v91 )
              v92 = v91-- + 1;
            v93 = *a1;
            if ( a1[2] < v92 )
            {
              v99 = qvector_reserve(a1, v93, v92, 1);
              *a1 = v99;
              v93 = v99;
            }
            a1[1] = v92;
            *(_BYTE *)(v93 + v91) = 34;
            *(_BYTE *)(*a1 + v91 + 1) = 0;
            if ( v228 )
            {
              *(_QWORD *)&v229 = 0;
              qfree(v228);
            }
            return 1;
          }
          v27 = (const char *)v228;
        }
        else
        {
          v32 = 16;
        }
        v228 = (void *)qvector_reserve(&v228, v27, v32, 1);
        v31 = *(_QWORD *)v232;
        goto LABEL_22;
      }
      if ( !under_debugger )
        interr(1278);
      goto LABEL_264;
    case 3LL:
      v38 = a1[1];
      if ( v38 )
      {
        v40 = v38 + 1;
        v39 = a1[1];
        --v38;
      }
      else
      {
        v39 = 1;
        v40 = 2;
      }
      v41 = *a1;
      if ( a1[2] < v40 )
      {
        v215 = v39;
        v210 = (void *)v40;
        v123 = qvector_reserve(a1, v41, v40, 1);
        v39 = v215;
        v40 = (unsigned __int64)v210;
        *a1 = v123;
        v41 = v123;
      }
      a1[1] = v40;
      *(_BYTE *)(v41 + v38) = 123;
      *(_BYTE *)(*a1 + v39) = 0;
      if ( (v10[6] & 1) != 0 )
      {
        v112 = a1[1];
        if ( v112 )
        {
          v113 = v112 + 1;
          v114 = a1[1];
          --v112;
        }
        else
        {
          v114 = 1;
          v113 = 2;
        }
        v115 = *a1;
        if ( a1[2] < v113 )
        {
          v215 = v114;
          v213 = (void *)v113;
          v152 = qvector_reserve(a1, v115, v113, 1);
          v114 = v215;
          v113 = (unsigned __int64)v213;
          *a1 = v152;
          v115 = v152;
        }
        a1[1] = v113;
        *(_BYTE *)(v115 + v112) = 10;
        *(_BYTE *)(*a1 + v114) = 0;
        if ( v11 > 0 )
        {
          v222 = (__int64)v10;
          v116 = a3;
          v209 = a3 + 1;
          v117 = 0;
          v215 = v7;
          while ( 1 )
          {
            v120 = a1[1];
            if ( v120 )
            {
              v118 = v120 + 3;
              v119 = v120 + 4;
              --v120;
            }
            else
            {
              v119 = 5;
              v118 = 4;
            }
            v121 = *a1;
            if ( a1[2] < v119 )
            {
              v122 = qvector_reserve(a1, v121, v119, 1);
              *a1 = v122;
              v121 = v122;
            }
            a1[1] = v119;
            *(_BYTE *)(v121 + v118) = 0;
            *(_DWORD *)(*a1 + v120) = 538976288;
            if ( v116 == v117 )
              break;
            ++v117;
          }
          a3 = v116;
          v11 = v209;
          v7 = v215;
          v10 = (_QWORD *)v222;
        }
      }
      if ( *(_DWORD *)v7 != 3 )
      {
        if ( !under_debugger )
          interr(1279);
        goto LABEL_264;
      }
      v42 = *(char ***)(v7 + 8);
      v231 = nullptr;
      *(_OWORD *)v232 = 0;
      v43 = v42[1];
      if ( v43 )
      {
        v231 = (void *)qvector_reserve(&v231, 0, v42[1], 8);
        memset((char *)v231 + 8 * *(_QWORD *)v232, 0, 8LL * (_QWORD)&v43[-*(_QWORD *)v232]);
        *(_QWORD *)v232 = v43;
        for ( i = nullptr; i != v43; ++i )
          *((_QWORD *)v231 + (_QWORD)i) = i;
        v154 = (__int64 *)v231;
        v155 = 8LL * *(_QWORD *)v232;
        v214 = (__int64 *)((char *)v231 + 8 * *(_QWORD *)v232);
        if ( (v10[6] & 2) == 0 )
          goto LABEL_192;
        if ( v231 == (char *)v231 + 8 * *(_QWORD *)v232 )
        {
LABEL_235:
          if ( v214 )
          {
            *(_QWORD *)v232 = 0;
            qfree(v214);
          }
          goto LABEL_37;
        }
        if ( v155 >> 3 )
        {
          _BitScanReverse64(&v190, v155 >> 3);
          v215 = 8LL * *(_QWORD *)v232;
          sub_789EB0((const __m128i *)v231, v214, 2LL * (int)v190, v42);
          if ( v215 > 128 )
          {
            sub_789640(v154, v154 + 16, (__int64 *)v42);
            LODWORD(v222) = v11;
            v223 = a1;
            LODWORD(v224) = a3;
            v225 = (__int64)v10;
            v191 = v42;
            v192 = v154 + 16;
            while ( 1 )
            {
              v193 = v191;
              v194 = v192;
              v215 = *v192;
              v195 = 40 * *v192;
              while ( 1 )
              {
                v198 = *(v194 - 1);
                v199 = (__int64)&(*v193)[40 * v198];
                v200 = (__int64)&(*v193)[v195];
                v201 = *(_QWORD *)(v200 + 8);
                if ( *(_QWORD *)(v199 + 8) )
                {
                  v196 = *(const char **)v199;
                  v197 = haystack;
                  if ( !v201 )
                    goto LABEL_243;
                  goto LABEL_248;
                }
                if ( !v201 )
                  break;
                v196 = haystack;
LABEL_248:
                v197 = *(const char **)v200;
LABEL_243:
                if ( strcmp(v197, v196) >= 0 )
                  break;
                *v194-- = v198;
              }
              v202 = v194;
              ++v192;
              v191 = v193;
              *v202 = v215;
              if ( v192 == v214 )
              {
                v42 = v193;
                v11 = v222;
                v6 = v223;
                a3 = v224;
                v10 = (_QWORD *)v225;
                goto LABEL_251;
              }
            }
          }
        }
        else
        {
          sub_789EB0((const __m128i *)v231, v214, -2, v42);
        }
        sub_789640(v154, v214, (__int64 *)v42);
LABEL_251:
        v154 = (__int64 *)v231;
        v214 = (__int64 *)((char *)v231 + 8 * *(_QWORD *)v232);
LABEL_192:
        if ( v154 == v214 )
          goto LABEL_235;
        v156 = *v154;
        while ( 1 )
        {
LABEL_194:
          v157 = (__int64 *)v6[1];
          v158 = (__int64)&(*v42)[40 * v156];
          v159 = 2;
          if ( v157 )
          {
            v159 = (unsigned __int64)v157 + 1;
            v157 = (__int64 *)((char *)v157 - 1);
          }
          v160 = *v6;
          if ( v6[2] < v159 )
          {
            v223 = v157;
            v222 = (__int64)&(*v42)[40 * v156];
            v215 = v159;
            v186 = qvector_reserve(v6, v160, v159, 1);
            v157 = v223;
            v158 = v222;
            *v6 = v186;
            v160 = v186;
            v159 = v215;
          }
          v6[1] = v159;
          *((_BYTE *)v157 + v160) = 34;
          *((_BYTE *)v157 + *v6 + 1) = 0;
          v161 = *(_QWORD *)(v158 + 8);
          if ( v161 )
          {
            v162 = v161 - 1;
            if ( v161 != 1 )
            {
              v163 = v6[1];
              v164 = v161 - 1;
              if ( v163 )
              {
                --v163;
                v164 = v162 + v163;
                v161 += v163;
              }
              v165 = *v6;
              if ( v6[2] < v161 )
              {
                v225 = v164;
                v224 = v163;
                v223 = (__int64 *)v162;
                v222 = v158;
                *(_QWORD *)v221 = v161;
                v188 = qvector_reserve(v6, v165, v161, 1);
                v164 = v225;
                v163 = v224;
                *v6 = v188;
                v165 = v188;
                v162 = (size_t)v223;
                v158 = v222;
                v161 = *(_QWORD *)v221;
              }
              v6[1] = v161;
              *(_BYTE *)(v165 + v164) = 0;
              LODWORD(v215) = v158;
              memcpy((void *)(v163 + *v6), *(const void **)v158, v162);
              LODWORD(v158) = v215;
            }
          }
          v166 = (__int64 *)v6[1];
          v167 = 2;
          if ( v166 )
          {
            v167 = (unsigned __int64)v166 + 1;
            v166 = (__int64 *)((char *)v166 - 1);
          }
          v168 = *v6;
          if ( v6[2] < v167 )
          {
            v223 = v166;
            LODWORD(v222) = v158;
            v215 = v167;
            v185 = qvector_reserve(v6, v168, v167, 1);
            v166 = v223;
            LODWORD(v158) = v222;
            *v6 = v185;
            v168 = v185;
            v167 = v215;
          }
          v6[1] = v167;
          v169 = 2;
          *((_BYTE *)v166 + v168) = 34;
          *((_BYTE *)v166 + *v6 + 1) = 0;
          v170 = (__int64 *)v6[1];
          if ( v170 )
          {
            v169 = (unsigned __int64)v170 + 1;
            v170 = (__int64 *)((char *)v170 - 1);
          }
          v171 = *v6;
          if ( v6[2] < v169 )
          {
            v223 = v170;
            LODWORD(v222) = v158;
            v215 = v169;
            v184 = qvector_reserve(v6, v171, v169, 1);
            v170 = v223;
            LODWORD(v158) = v222;
            *v6 = v184;
            v171 = v184;
            v169 = v215;
          }
          v6[1] = v169;
          *((_BYTE *)v170 + v171) = 58;
          *((_BYTE *)v170 + *v6 + 1) = 0;
          if ( !(unsigned __int8)sub_78B9E0(
                                   (int)v6,
                                   (int)v158 + 24,
                                   v11,
                                   (int)v10,
                                   v158,
                                   (int)v170,
                                   (int)v214,
                                   v215,
                                   v222,
                                   (int)v223,
                                   v224,
                                   v225,
                                   v226,
                                   (int)v227,
                                   (int)v228,
                                   v229,
                                   SDWORD2(v229),
                                   v230,
                                   (__int64)v231,
                                   v232[0],
                                   v232[2],
                                   v233,
                                   src,
                                   v235,
                                   v236,
                                   v237,
                                   v238[0]) )
            break;
          if ( ++v154 == v214 )
          {
            v214 = (__int64 *)v231;
            goto LABEL_235;
          }
          v172 = (__int64 *)v6[1];
          v173 = 2;
          if ( v172 )
          {
            v173 = (unsigned __int64)v172 + 1;
            v172 = (__int64 *)((char *)v172 - 1);
          }
          v156 = *v154;
          v174 = *v6;
          if ( v6[2] < v173 )
          {
            v223 = v172;
            v222 = *v154;
            v215 = v173;
            v187 = qvector_reserve(v6, v174, v173, 1);
            v172 = v223;
            v156 = v222;
            *v6 = v187;
            v174 = v187;
            v173 = v215;
          }
          v6[1] = v173;
          *((_BYTE *)v172 + v174) = 44;
          *((_BYTE *)v172 + *v6 + 1) = 0;
          if ( (v10[6] & 1) != 0 )
          {
            v175 = (__int64 *)v6[1];
            v176 = 2;
            if ( v175 )
            {
              v176 = (unsigned __int64)v175 + 1;
              v175 = (__int64 *)((char *)v175 - 1);
            }
            v177 = *v6;
            if ( v6[2] < v176 )
            {
              v223 = v175;
              v222 = v156;
              v215 = v176;
              v189 = qvector_reserve(v6, v177, v176, 1);
              v175 = v223;
              v156 = v222;
              *v6 = v189;
              v177 = v189;
              v176 = v215;
            }
            v6[1] = v176;
            *((_BYTE *)v175 + v177) = 10;
            *((_BYTE *)v175 + *v6 + 1) = 0;
            if ( v11 > 0 )
            {
              for ( j = 0; ; ++j )
              {
                v182 = (__int64 *)v6[1];
                if ( v182 )
                {
                  v179 = (__int64)v182 + 3;
                  v180 = (unsigned __int64)v182 + 4;
                  v181 = *v6;
                  v182 = (__int64 *)((char *)v182 - 1);
                  if ( v6[2] >= v180 )
                    goto LABEL_227;
                }
                else
                {
                  v181 = *v6;
                  v180 = 5;
                  v179 = 4;
                  if ( (unsigned __int64)v6[2] >= 5 )
                    goto LABEL_227;
                }
                v225 = v179;
                LODWORD(v224) = j;
                v223 = v182;
                v222 = v156;
                v215 = v180;
                v183 = qvector_reserve(v6, v181, v180, 1);
                v179 = v225;
                j = v224;
                *v6 = v183;
                v181 = v183;
                v182 = v223;
                v156 = v222;
                v180 = v215;
LABEL_227:
                v6[1] = v180;
                *(_BYTE *)(v181 + v179) = 0;
                *(_DWORD *)((char *)v182 + *v6) = 538976288;
                if ( a3 == j )
                  goto LABEL_194;
              }
            }
          }
        }
        if ( v231 )
        {
          *(_QWORD *)v232 = 0;
          qfree(v231);
        }
        return 0;
      }
LABEL_37:
      if ( (v10[6] & 1) != 0 )
      {
        v137 = v6[1];
        if ( v137 )
        {
          v138 = v137 + 1;
          v139 = v6[1];
          --v137;
        }
        else
        {
          v139 = 1;
          v138 = 2;
        }
        v140 = *v6;
        if ( v6[2] < v138 )
        {
          v204 = qvector_reserve(v6, v140, v138, 1);
          *v6 = v204;
          v140 = v204;
        }
        v6[1] = v138;
        *(_BYTE *)(v140 + v137) = 10;
        *(_BYTE *)(*v6 + v139) = 0;
        if ( a3 > 0 )
        {
          v141 = 0;
          do
          {
            v144 = v6[1];
            if ( v144 )
            {
              v142 = v144 + 3;
              v143 = v144 + 4;
              --v144;
            }
            else
            {
              v143 = 5;
              v142 = 4;
            }
            v145 = *v6;
            if ( v6[2] < v143 )
            {
              v146 = qvector_reserve(v6, v145, v143, 1);
              *v6 = v146;
              v145 = v146;
            }
            v6[1] = v143;
            ++v141;
            *(_BYTE *)(v145 + v142) = 0;
            *(_DWORD *)(*v6 + v144) = 538976288;
          }
          while ( a3 != v141 );
        }
      }
      v44 = v6[1];
      if ( v44 )
      {
        v46 = v44 + 1;
        v45 = v6[1];
        --v44;
      }
      else
      {
        v45 = 1;
        v46 = 2;
      }
      v47 = *v6;
      if ( v6[2] < v46 )
      {
        v147 = qvector_reserve(v6, v47, v46, 1);
        *v6 = v147;
        v47 = v147;
      }
      v6[1] = v46;
      *(_BYTE *)(v47 + v44) = 125;
      *(_BYTE *)(*v6 + v45) = 0;
      return 1;
    case 4LL:
      v48 = a1[1];
      if ( v48 )
      {
        v50 = v48 + 1;
        v49 = a1[1];
        --v48;
      }
      else
      {
        v49 = 1;
        v50 = 2;
      }
      v51 = *a1;
      if ( a1[2] < v50 )
      {
        *(_QWORD *)v218 = v49;
        v211 = (void *)v50;
        v124 = qvector_reserve(a1, v51, v50, 1);
        v49 = *(_QWORD *)v218;
        v50 = (unsigned __int64)v211;
        *a1 = v124;
        v51 = v124;
      }
      a1[1] = v50;
      *(_BYTE *)(v51 + v48) = 91;
      *(_BYTE *)(*a1 + v49) = 0;
      if ( (v10[6] & 1) != 0 )
      {
        v100 = a1[1];
        if ( v100 )
        {
          v101 = v100 + 1;
          v49 = a1[1];
          --v100;
        }
        else
        {
          v49 = 1;
          v101 = 2;
        }
        v102 = *a1;
        if ( a1[2] < v101 )
        {
          *(_QWORD *)v220 = v49;
          v212 = (void *)v101;
          v151 = qvector_reserve(a1, v102, v101, 1);
          v49 = *(_QWORD *)v220;
          v101 = (unsigned __int64)v212;
          *a1 = v151;
          v102 = v151;
        }
        a1[1] = v101;
        *(_BYTE *)(v102 + v100) = 10;
        *(_BYTE *)(*a1 + v49) = 0;
        if ( v11 > 0 )
        {
          LODWORD(v49) = 0;
          v222 = (__int64)v10;
          v103 = a3;
          v208 = a3 + 1;
          v104 = 0;
          *(_QWORD *)v217 = v7;
          while ( 1 )
          {
            v107 = a1[1];
            if ( v107 )
            {
              v105 = v107 + 3;
              v106 = v107 + 4;
              --v107;
            }
            else
            {
              v106 = 5;
              v105 = 4;
            }
            v108 = *a1;
            if ( a1[2] < v106 )
            {
              v109 = qvector_reserve(a1, v108, v106, 1);
              *a1 = v109;
              v108 = v109;
            }
            a1[1] = v106;
            *(_BYTE *)(v108 + v105) = 0;
            *(_DWORD *)(*a1 + v107) = 538976288;
            if ( v103 == v104 )
              break;
            ++v104;
          }
          a3 = v103;
          v11 = v208;
          v7 = *(_QWORD *)v217;
          v10 = (_QWORD *)v222;
        }
      }
      if ( *(_DWORD *)v7 != 4 )
      {
        if ( !under_debugger )
          interr(1280);
LABEL_264:
        BUG();
      }
      v52 = *(_QWORD *)(v7 + 8);
      *(_QWORD *)v216 = *(_QWORD *)(v52 + 8);
      if ( !*(_QWORD *)v216 )
      {
LABEL_123:
        if ( (v10[6] & 1) != 0 )
        {
          v127 = a1[1];
          if ( v127 )
          {
            v128 = v127 + 1;
            v129 = a1[1];
            --v127;
          }
          else
          {
            v129 = 1;
            v128 = 2;
          }
          v130 = *a1;
          if ( a1[2] < v128 )
          {
            v205 = qvector_reserve(a1, v130, v128, 1);
            *a1 = v205;
            v130 = v205;
          }
          a1[1] = v128;
          *(_BYTE *)(v130 + v127) = 10;
          *(_BYTE *)(*a1 + v129) = 0;
          if ( a3 > 0 )
          {
            v131 = 0;
            do
            {
              v134 = a1[1];
              if ( v134 )
              {
                v132 = v134 + 3;
                v133 = v134 + 4;
                --v134;
              }
              else
              {
                v133 = 5;
                v132 = 4;
              }
              v135 = *a1;
              if ( a1[2] < v133 )
              {
                v136 = qvector_reserve(a1, v135, v133, 1);
                *a1 = v136;
                v135 = v136;
              }
              a1[1] = v133;
              ++v131;
              *(_BYTE *)(v135 + v132) = 0;
              *(_DWORD *)(*a1 + v134) = 538976288;
            }
            while ( a3 != v131 );
          }
        }
        v95 = a1[1];
        if ( v95 )
        {
          v97 = v95 + 1;
          v96 = a1[1];
          --v95;
        }
        else
        {
          v96 = 1;
          v97 = 2;
        }
        v98 = *a1;
        if ( a1[2] < v97 )
        {
          v148 = qvector_reserve(a1, v98, v97, 1);
          *a1 = v148;
          v98 = v148;
        }
        a1[1] = v97;
        *(_BYTE *)(v98 + v95) = 93;
        *(_BYTE *)(*a1 + v96) = 0;
        return 1;
      }
      v207 = v11;
      v53 = 0;
      while ( 1 )
      {
LABEL_51:
        if ( !(unsigned __int8)sub_78B9E0(
                                 (int)a1,
                                 *(_DWORD *)v52 + 16 * (int)v53,
                                 v207,
                                 (int)v10,
                                 v49,
                                 a6,
                                 v207,
                                 v216[0],
                                 v222,
                                 (int)v223,
                                 v224,
                                 v225,
                                 v226,
                                 (int)v227,
                                 (int)v228,
                                 v229,
                                 SDWORD2(v229),
                                 v230,
                                 (__int64)v231,
                                 v232[0],
                                 v232[2],
                                 v233,
                                 src,
                                 v235,
                                 v236,
                                 v237,
                                 v238[0]) )
          return 0;
        if ( ++v53 == *(_QWORD *)v216 )
          goto LABEL_123;
        v54 = a1[1];
        if ( v54 )
        {
          v55 = v54 + 1;
          v49 = a1[1];
          --v54;
        }
        else
        {
          v49 = 1;
          v55 = 2;
        }
        v56 = *a1;
        if ( a1[2] < v55 )
        {
          v223 = (__int64 *)v49;
          v222 = v55;
          v94 = qvector_reserve(a1, v56, v55, 1);
          v49 = (__int64)v223;
          v55 = v222;
          *a1 = v94;
          v56 = v94;
        }
        a1[1] = v55;
        *(_BYTE *)(v56 + v54) = 44;
        *(_BYTE *)(*a1 + v49) = 0;
        if ( (v10[6] & 1) != 0 )
        {
          v57 = a1[1];
          if ( v57 )
          {
            v58 = v57 + 1;
            v49 = a1[1];
            --v57;
          }
          else
          {
            v49 = 1;
            v58 = 2;
          }
          v59 = *a1;
          if ( a1[2] < v58 )
          {
            v223 = (__int64 *)v49;
            v222 = v58;
            v126 = qvector_reserve(a1, v59, v58, 1);
            v49 = (__int64)v223;
            v58 = v222;
            *a1 = v126;
            v59 = v126;
          }
          a1[1] = v58;
          *(_BYTE *)(v59 + v57) = 10;
          *(_BYTE *)(*a1 + v49) = 0;
          if ( v207 > 0 )
            break;
        }
      }
      LODWORD(v49) = 0;
      break;
    case 5LL:
      v65 = 5;
      v66 = "false";
      if ( *((_BYTE *)a2 + 8) )
      {
        v65 = 4;
        v66 = "true";
      }
      v67 = a1[1];
      v68 = v65;
      if ( v67 )
        v68 = --v67 + v65;
      v69 = *a1;
      if ( a1[2] < v68 + 1 )
      {
        v110 = qvector_reserve(a1, v69, v68 + 1, 1);
        *a1 = v110;
        v69 = v110;
      }
      a1[1] = v68 + 1;
      *(_BYTE *)(v69 + v68) = 0;
      memmove((void *)(*a1 + v67), v66, v65);
      return 1;
    case 6LL:
      v70 = a1[1];
      if ( v70 )
      {
        v72 = v70 + 3;
        v71 = v70 + 4;
        --v70;
      }
      else
      {
        v71 = 5;
        v72 = 4;
      }
      v73 = *a1;
      if ( a1[2] < v71 )
      {
        v125 = qvector_reserve(a1, v73, v71, 1);
        *a1 = v125;
        v73 = v125;
      }
      a1[1] = v71;
      *(_BYTE *)(v73 + v72) = 0;
      *(_DWORD *)(*a1 + v70) = 1819047278;
      return 1;
    case 7LL:
      v14 = sub_22AC050(&src, v238, a2[1]);
      v15 = a1[1];
      if ( v16 )
      {
        if ( v15 )
        {
          v74 = v15 + 2;
          v75 = v15 + 3;
          --v15;
        }
        else
        {
          v75 = 4;
          v74 = 3;
        }
        v76 = *a1;
        if ( a1[2] < v75 )
        {
          v150 = qvector_reserve(a1, v76, v75, 1);
          *a1 = v150;
          v76 = v150;
        }
        a1[1] = v75;
        *(_BYTE *)(v76 + v74) = 0;
        v77 = *a1 + v15;
        *(_WORD *)v77 = 24910;
        *(_BYTE *)(v77 + 2) = 78;
      }
      else
      {
        v17 = v14 - (_QWORD)&src;
        v18 = v17;
        v19 = v17;
        if ( v15 )
        {
          --v15;
          v19 = v17 + v15;
        }
        v20 = *a1;
        if ( a1[2] < v19 + 1 )
        {
          v149 = qvector_reserve(a1, v20, v19 + 1, 1);
          *a1 = v149;
          v20 = v149;
        }
        a1[1] = v19 + 1;
        *(_BYTE *)(v20 + v19) = 0;
        memmove((void *)(*a1 + v15), &src, v18);
      }
      return 1;
    default:
      return 0;
  }
  while ( 1 )
  {
    v63 = a1[1];
    if ( v63 )
    {
      v60 = v63 + 3;
      v61 = v63 + 4;
      v62 = *a1;
      --v63;
      if ( a1[2] >= v61 )
        goto LABEL_65;
    }
    else
    {
      v62 = *a1;
      v61 = 5;
      v60 = 4;
      if ( (unsigned __int64)a1[2] >= 5 )
        goto LABEL_65;
    }
    LODWORD(v224) = v49;
    v223 = (__int64 *)v60;
    v222 = v61;
    v64 = qvector_reserve(a1, v62, v61, 1);
    LODWORD(v49) = v224;
    v60 = (__int64)v223;
    *a1 = v64;
    v61 = v222;
    v62 = v64;
LABEL_65:
    a1[1] = v61;
    *(_BYTE *)(v62 + v60) = 0;
    *(_DWORD *)(*a1 + v63) = 538976288;
    if ( a3 == (_DWORD)v49 )
      goto LABEL_51;
    LODWORD(v49) = v49 + 1;
  }
}

