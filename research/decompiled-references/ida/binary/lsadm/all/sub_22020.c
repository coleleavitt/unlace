__int64 __fastcall sub_22020(__int64 *a1, double *a2, int a3, _QWORD *a4, int a5, int a6)
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
  unsigned int v36; // ebx
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
  const char *v66; // r15
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
  int v102; // ebp
  int v103; // ebx
  __int64 v104; // r12
  unsigned __int64 v105; // r13
  __int64 v106; // r15
  __int64 v107; // rax
  __int64 v108; // rax
  __int64 v109; // rax
  __int64 v110; // r15
  unsigned __int64 v111; // rdx
  __int64 v112; // r8
  int v113; // ebp
  int v114; // ebx
  __int64 v115; // r12
  unsigned __int64 v116; // r13
  __int64 v117; // r15
  __int64 v118; // rax
  __int64 v119; // rax
  __int64 v120; // rax
  __int64 v121; // rax
  __int64 v122; // rax
  __int64 v123; // rbp
  unsigned __int64 v124; // r12
  __int64 v125; // r13
  __int64 v126; // rsi
  int v127; // r13d
  __int64 v128; // r15
  unsigned __int64 v129; // r12
  __int64 v130; // rbp
  __int64 v131; // rsi
  __int64 v132; // rax
  __int64 v133; // rbp
  unsigned __int64 v134; // r12
  __int64 v135; // r13
  __int64 v136; // rsi
  int v137; // r13d
  __int64 v138; // r15
  unsigned __int64 v139; // r12
  __int64 v140; // rbp
  __int64 v141; // rsi
  __int64 v142; // rax
  __int64 v143; // rax
  __int64 v144; // rax
  __int64 v145; // rax
  __int64 v146; // rax
  __int64 v147; // rax
  __int64 v148; // rax
  char *i; // rax
  __int64 *v150; // r15
  __int64 v151; // rax
  __int64 v152; // r10
  __int64 *v153; // r9
  __int64 v154; // r8
  unsigned __int64 v155; // rdx
  __int64 v156; // rsi
  unsigned __int64 v157; // rdx
  size_t v158; // r10
  __int64 v159; // r9
  __int64 v160; // r11
  __int64 v161; // rsi
  __int64 *v162; // r9
  unsigned __int64 v163; // rdx
  __int64 v164; // rsi
  unsigned __int64 v165; // rdx
  __int64 *v166; // r9
  __int64 v167; // rsi
  __int64 *v168; // r8
  unsigned __int64 v169; // rdx
  __int64 v170; // rsi
  __int64 *v171; // r8
  unsigned __int64 v172; // rdx
  __int64 v173; // rsi
  int j; // r9d
  __int64 v175; // r11
  unsigned __int64 v176; // rdx
  __int64 v177; // rsi
  __int64 *v178; // r8
  __int64 v179; // rax
  __int64 v180; // rax
  __int64 v181; // rax
  __int64 v182; // rax
  __int64 v183; // rax
  __int64 v184; // rax
  __int64 v185; // rax
  unsigned __int64 v186; // rdx
  char **v187; // rbp
  __int64 *v188; // r13
  char **v189; // rbx
  __int64 *v190; // rbp
  __int64 v191; // r12
  const char *v192; // rcx
  const char *v193; // rdi
  __int64 v194; // r14
  __int64 v195; // rcx
  __int64 v196; // rax
  __int64 v197; // rsi
  __int64 *v198; // r14
  __int64 v199; // rax
  __int64 v200; // rax
  __int64 v201; // rax
  int v202; // [rsp+0h] [rbp-E8h]
  int v203; // [rsp+0h] [rbp-E8h]
  int v204; // [rsp+0h] [rbp-E8h]
  void *v205; // [rsp+0h] [rbp-E8h]
  void *v206; // [rsp+0h] [rbp-E8h]
  void *v207; // [rsp+0h] [rbp-E8h]
  void *v208; // [rsp+0h] [rbp-E8h]
  void *v209; // [rsp+0h] [rbp-E8h]
  __int64 *v210; // [rsp+0h] [rbp-E8h]
  __int64 v211; // [rsp+8h] [rbp-E0h]
  int v212[2]; // [rsp+8h] [rbp-E0h]
  int v213[2]; // [rsp+8h] [rbp-E0h]
  int v214[2]; // [rsp+8h] [rbp-E0h]
  int v215[2]; // [rsp+8h] [rbp-E0h]
  int v216[2]; // [rsp+8h] [rbp-E0h]
  int v217[2]; // [rsp+8h] [rbp-E0h]
  __int64 v218; // [rsp+10h] [rbp-D8h]
  __int64 *v219; // [rsp+18h] [rbp-D0h]
  __int64 v220; // [rsp+20h] [rbp-C8h]
  __int64 v221; // [rsp+28h] [rbp-C0h]
  int v222; // [rsp+30h] [rbp-B8h]
  int *v223; // [rsp+38h] [rbp-B0h] BYREF
  void *v224; // [rsp+40h] [rbp-A8h] BYREF
  __int128 v225; // [rsp+48h] [rbp-A0h]
  void *v226; // [rsp+58h] [rbp-90h]
  void *v227; // [rsp+60h] [rbp-88h] BYREF
  int v228[4]; // [rsp+68h] [rbp-80h]
  int v229; // [rsp+78h] [rbp-70h]
  int src; // [rsp+80h] [rbp-68h] BYREF
  int v231; // [rsp+88h] [rbp-60h]
  int v232; // [rsp+90h] [rbp-58h]
  int v233; // [rsp+98h] [rbp-50h]
  __int64 v234[9]; // [rsp+A0h] [rbp-48h] BYREF

  v6 = a1;
  v7 = (__int64)a2;
  v9 = *(unsigned int *)a2;
  v234[1] = __readfsqword(0x28u);
  v10 = a4;
  if ( (unsigned int)(v9 - 3) <= 1 )
  {
    v227 = a2;
    sub_21F00(a4, (unsigned __int64 *)&v227);
    if ( !v12 )
      return 0;
    v9 = *(unsigned int *)a2;
  }
  v11 = a3 + 1;
  switch ( v9 )
  {
    case 1LL:
      sub_D0C0(a1);
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
        v109 = sub_29E60(a1, v24, v23, 1);
        *a1 = v109;
        v24 = v109;
      }
      a1[1] = v23;
      *(_BYTE *)(v24 + v21) = 34;
      *(_BYTE *)(*a1 + v22) = 0;
      v25 = *(_DWORD *)v7 == 2;
      v224 = nullptr;
      v26 = *(_QWORD *)(v7 + 8);
      v225 = 0;
      if ( v25 )
      {
        v27 = s1;
        if ( *(_QWORD *)(v26 + 8) )
          v27 = *(const char **)v26;
        v227 = nullptr;
        *(_OWORD *)v228 = 0;
        if ( v27 )
        {
          v28 = strlen(v27);
          v29 = v28 + 1;
          v30 = v28;
          v227 = (void *)sub_29E60(&v227, 0, v28 + 1, 1);
          *(_QWORD *)v228 = v29;
          memmove(v227, v27, v30);
          *((_BYTE *)v227 + v30) = 0;
          v31 = *(_QWORD *)v228;
          v32 = *(_QWORD *)v228 + 16LL;
          if ( *((_QWORD *)&v225 + 1) >= (unsigned __int64)(*(_QWORD *)v228 + 16LL) )
          {
LABEL_22:
            if ( v31 )
            {
              v33 = v227;
              v34 = 0;
              v223 = (int *)v227;
              p_src = (int *)v227;
              while ( 1 )
              {
                if ( v34 >= v31 - 1 )
                  goto LABEL_100;
                v36 = sub_26960(&v223);
                if ( v36 - 1 > 0xFFFFFFFD )
                {
                  v37 = v223;
                  v223 = (int *)((char *)v223 + 1);
                  v36 = *(unsigned __int8 *)v37;
                }
                if ( v36 <= 0x22 )
                  break;
                v78 = 92;
                if ( v36 != 92 )
                  goto LABEL_93;
LABEL_116:
                BYTE1(src) = v78;
                v81 = 2;
                p_src = &src;
                LOBYTE(src) = 92;
LABEL_95:
                v82 = v225;
                v83 = v81;
                if ( (_QWORD)v225 )
                {
                  v82 = v225 - 1;
                  v83 = v225 - 1 + v81;
                }
                v84 = v224;
                v85 = (void *)(v83 + 1);
                if ( *((_QWORD *)&v225 + 1) < v83 + 1 )
                {
                  *(_QWORD *)v215 = v83;
                  v207 = (void *)(v83 + 1);
                  v224 = (void *)sub_29E60(&v224, v224, v85, 1);
                  v83 = *(_QWORD *)v215;
                  v84 = v224;
                  v85 = v207;
                }
                *(_QWORD *)&v225 = v85;
                v84[v83] = 0;
                memmove((char *)v224 + v82, p_src, v81);
                p_src = v223;
                v31 = *(_QWORD *)v228;
                v34 = (char *)v223 - v33;
                if ( !*(_QWORD *)v228 )
                  goto LABEL_100;
              }
              if ( v36 > 7 )
              {
                switch ( v36 )
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
              if ( (unsigned __int8)sub_25F00(v36) )
              {
                v81 = (char *)v223 - (char *)p_src;
              }
              else
              {
                p_src = &src;
                v81 = (int)sub_2BDD0((unsigned int)&src, 16, (unsigned int)"\\u%04X", v36, v79, v80);
              }
              goto LABEL_95;
            }
LABEL_100:
            if ( v227 )
            {
              *(_QWORD *)v228 = 0;
              j__free(v227);
            }
            v86 = v225;
            if ( (_QWORD)v225 )
            {
              v87 = v225 - 1;
              if ( (_QWORD)v225 != 1 )
              {
                v88 = a1[1];
                v89 = v225 - 1;
                if ( v88 )
                {
                  --v88;
                  v89 = v87 + v88;
                  v86 = v225 + v88;
                }
                v90 = *a1;
                if ( a1[2] < v86 )
                {
                  v199 = sub_29E60(a1, v90, v86, 1);
                  *a1 = v199;
                  v90 = v199;
                }
                a1[1] = v86;
                *(_BYTE *)(v90 + v89) = 0;
                memcpy((void *)(v88 + *a1), v224, v87);
              }
            }
            v91 = a1[1];
            v92 = 2;
            if ( v91 )
              v92 = v91-- + 1;
            v93 = *a1;
            if ( a1[2] < v92 )
            {
              v99 = sub_29E60(a1, v93, v92, 1);
              *a1 = v99;
              v93 = v99;
            }
            a1[1] = v92;
            *(_BYTE *)(v93 + v91) = 34;
            *(_BYTE *)(*a1 + v91 + 1) = 0;
            if ( v224 )
            {
              *(_QWORD *)&v225 = 0;
              j__free(v224);
            }
            return 1;
          }
          v27 = (const char *)v224;
        }
        else
        {
          v32 = 16;
        }
        v224 = (void *)sub_29E60(&v224, v27, v32, 1);
        v31 = *(_QWORD *)v228;
        goto LABEL_22;
      }
      if ( !byte_7BCA0 )
        sub_2A3D0(1278, v24);
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
        v211 = v39;
        v205 = (void *)v40;
        v119 = sub_29E60(a1, v41, v40, 1);
        v39 = v211;
        v40 = (unsigned __int64)v205;
        *a1 = v119;
        v41 = v119;
      }
      a1[1] = v40;
      *(_BYTE *)(v41 + v38) = 123;
      *(_BYTE *)(*a1 + v39) = 0;
      if ( (v10[6] & 1) != 0 )
      {
        v110 = a1[1];
        if ( v110 )
        {
          v111 = v110 + 1;
          v112 = a1[1];
          --v110;
        }
        else
        {
          v112 = 1;
          v111 = 2;
        }
        v41 = *a1;
        if ( a1[2] < v111 )
        {
          v211 = v112;
          v209 = (void *)v111;
          v148 = sub_29E60(a1, v41, v111, 1);
          v112 = v211;
          v111 = (unsigned __int64)v209;
          *a1 = v148;
          v41 = v148;
        }
        a1[1] = v111;
        *(_BYTE *)(v41 + v110) = 10;
        *(_BYTE *)(*a1 + v112) = 0;
        if ( v11 > 0 )
        {
          v218 = (__int64)v10;
          v113 = a3;
          v204 = a3 + 1;
          v114 = 0;
          v211 = v7;
          while ( 1 )
          {
            v117 = a1[1];
            if ( v117 )
            {
              v115 = v117 + 3;
              v116 = v117 + 4;
              --v117;
            }
            else
            {
              v116 = 5;
              v115 = 4;
            }
            v41 = *a1;
            if ( a1[2] < v116 )
            {
              v118 = sub_29E60(a1, v41, v116, 1);
              *a1 = v118;
              v41 = v118;
            }
            a1[1] = v116;
            *(_BYTE *)(v41 + v115) = 0;
            *(_DWORD *)(*a1 + v117) = 538976288;
            if ( v113 == v114 )
              break;
            ++v114;
          }
          a3 = v113;
          v11 = v204;
          v7 = v211;
          v10 = (_QWORD *)v218;
        }
      }
      if ( *(_DWORD *)v7 != 3 )
      {
        if ( !byte_7BCA0 )
          sub_2A3D0(1279, v41);
        goto LABEL_264;
      }
      v42 = *(char ***)(v7 + 8);
      v227 = nullptr;
      *(_OWORD *)v228 = 0;
      v43 = v42[1];
      if ( v43 )
      {
        v227 = (void *)sub_29E60(&v227, 0, v42[1], 8);
        memset((char *)v227 + 8 * *(_QWORD *)v228, 0, 8LL * (_QWORD)&v43[-*(_QWORD *)v228]);
        *(_QWORD *)v228 = v43;
        for ( i = nullptr; i != v43; ++i )
          *((_QWORD *)v227 + (_QWORD)i) = i;
        v150 = (__int64 *)v227;
        v151 = 8LL * *(_QWORD *)v228;
        v210 = (__int64 *)((char *)v227 + 8 * *(_QWORD *)v228);
        if ( (v10[6] & 2) == 0 )
          goto LABEL_192;
        if ( v227 == (char *)v227 + 8 * *(_QWORD *)v228 )
        {
LABEL_235:
          if ( v210 )
          {
            *(_QWORD *)v228 = 0;
            j__free(v210);
          }
          goto LABEL_37;
        }
        if ( v151 >> 3 )
        {
          _BitScanReverse64(&v186, v151 >> 3);
          v211 = 8LL * *(_QWORD *)v228;
          sub_214C0((const __m128i *)v227, v210, 2LL * (int)v186, v42);
          if ( v211 > 128 )
          {
            sub_20EF0(v150, v150 + 16, (__int64 *)v42);
            LODWORD(v218) = v11;
            v219 = a1;
            LODWORD(v220) = a3;
            v221 = (__int64)v10;
            v187 = v42;
            v188 = v150 + 16;
            while ( 1 )
            {
              v189 = v187;
              v190 = v188;
              v211 = *v188;
              v191 = 40 * *v188;
              while ( 1 )
              {
                v194 = *(v190 - 1);
                v195 = (__int64)&(*v189)[40 * v194];
                v196 = (__int64)&(*v189)[v191];
                v197 = *(_QWORD *)(v196 + 8);
                if ( *(_QWORD *)(v195 + 8) )
                {
                  v192 = *(const char **)v195;
                  v193 = s1;
                  if ( !v197 )
                    goto LABEL_243;
                  goto LABEL_248;
                }
                if ( !v197 )
                  break;
                v192 = s1;
LABEL_248:
                v193 = *(const char **)v196;
LABEL_243:
                if ( strcmp(v193, v192) >= 0 )
                  break;
                *v190-- = v194;
              }
              v198 = v190;
              ++v188;
              v187 = v189;
              *v198 = v211;
              if ( v188 == v210 )
              {
                v42 = v189;
                v11 = v218;
                v6 = v219;
                a3 = v220;
                v10 = (_QWORD *)v221;
                goto LABEL_251;
              }
            }
          }
        }
        else
        {
          sub_214C0((const __m128i *)v227, v210, -2, v42);
        }
        sub_20EF0(v150, v210, (__int64 *)v42);
LABEL_251:
        v150 = (__int64 *)v227;
        v210 = (__int64 *)((char *)v227 + 8 * *(_QWORD *)v228);
LABEL_192:
        if ( v150 == v210 )
          goto LABEL_235;
        v152 = *v150;
        while ( 1 )
        {
LABEL_194:
          v153 = (__int64 *)v6[1];
          v154 = (__int64)&(*v42)[40 * v152];
          v155 = 2;
          if ( v153 )
          {
            v155 = (unsigned __int64)v153 + 1;
            v153 = (__int64 *)((char *)v153 - 1);
          }
          v156 = *v6;
          if ( v6[2] < v155 )
          {
            v219 = v153;
            v218 = (__int64)&(*v42)[40 * v152];
            v211 = v155;
            v182 = sub_29E60(v6, v156, v155, 1);
            v153 = v219;
            v154 = v218;
            *v6 = v182;
            v156 = v182;
            v155 = v211;
          }
          v6[1] = v155;
          *((_BYTE *)v153 + v156) = 34;
          *((_BYTE *)v153 + *v6 + 1) = 0;
          v157 = *(_QWORD *)(v154 + 8);
          if ( v157 )
          {
            v158 = v157 - 1;
            if ( v157 != 1 )
            {
              v159 = v6[1];
              v160 = v157 - 1;
              if ( v159 )
              {
                --v159;
                v160 = v158 + v159;
                v157 += v159;
              }
              v161 = *v6;
              if ( v6[2] < v157 )
              {
                v221 = v160;
                v220 = v159;
                v219 = (__int64 *)v158;
                v218 = v154;
                *(_QWORD *)v217 = v157;
                v184 = sub_29E60(v6, v161, v157, 1);
                v160 = v221;
                v159 = v220;
                *v6 = v184;
                v161 = v184;
                v158 = (size_t)v219;
                v154 = v218;
                v157 = *(_QWORD *)v217;
              }
              v6[1] = v157;
              *(_BYTE *)(v161 + v160) = 0;
              LODWORD(v211) = v154;
              memcpy((void *)(v159 + *v6), *(const void **)v154, v158);
              LODWORD(v154) = v211;
            }
          }
          v162 = (__int64 *)v6[1];
          v163 = 2;
          if ( v162 )
          {
            v163 = (unsigned __int64)v162 + 1;
            v162 = (__int64 *)((char *)v162 - 1);
          }
          v164 = *v6;
          if ( v6[2] < v163 )
          {
            v219 = v162;
            LODWORD(v218) = v154;
            v211 = v163;
            v181 = sub_29E60(v6, v164, v163, 1);
            v162 = v219;
            LODWORD(v154) = v218;
            *v6 = v181;
            v164 = v181;
            v163 = v211;
          }
          v6[1] = v163;
          v165 = 2;
          *((_BYTE *)v162 + v164) = 34;
          *((_BYTE *)v162 + *v6 + 1) = 0;
          v166 = (__int64 *)v6[1];
          if ( v166 )
          {
            v165 = (unsigned __int64)v166 + 1;
            v166 = (__int64 *)((char *)v166 - 1);
          }
          v167 = *v6;
          if ( v6[2] < v165 )
          {
            v219 = v166;
            LODWORD(v218) = v154;
            v211 = v165;
            v180 = sub_29E60(v6, v167, v165, 1);
            v166 = v219;
            LODWORD(v154) = v218;
            *v6 = v180;
            v167 = v180;
            v165 = v211;
          }
          v6[1] = v165;
          *((_BYTE *)v166 + v167) = 58;
          *((_BYTE *)v166 + *v6 + 1) = 0;
          if ( !(unsigned __int8)sub_22020(
                                   (int)v6,
                                   (int)v154 + 24,
                                   v11,
                                   (int)v10,
                                   v154,
                                   (int)v166,
                                   (int)v210,
                                   v211,
                                   v218,
                                   (int)v219,
                                   v220,
                                   v221,
                                   v222,
                                   (int)v223,
                                   (int)v224,
                                   v225,
                                   SDWORD2(v225),
                                   v226,
                                   (__int64)v227,
                                   v228[0],
                                   v228[2],
                                   v229,
                                   src,
                                   v231,
                                   v232,
                                   v233,
                                   v234[0]) )
            break;
          if ( ++v150 == v210 )
          {
            v210 = (__int64 *)v227;
            goto LABEL_235;
          }
          v168 = (__int64 *)v6[1];
          v169 = 2;
          if ( v168 )
          {
            v169 = (unsigned __int64)v168 + 1;
            v168 = (__int64 *)((char *)v168 - 1);
          }
          v152 = *v150;
          v170 = *v6;
          if ( v6[2] < v169 )
          {
            v219 = v168;
            v218 = *v150;
            v211 = v169;
            v183 = sub_29E60(v6, v170, v169, 1);
            v168 = v219;
            v152 = v218;
            *v6 = v183;
            v170 = v183;
            v169 = v211;
          }
          v6[1] = v169;
          *((_BYTE *)v168 + v170) = 44;
          *((_BYTE *)v168 + *v6 + 1) = 0;
          if ( (v10[6] & 1) != 0 )
          {
            v171 = (__int64 *)v6[1];
            v172 = 2;
            if ( v171 )
            {
              v172 = (unsigned __int64)v171 + 1;
              v171 = (__int64 *)((char *)v171 - 1);
            }
            v173 = *v6;
            if ( v6[2] < v172 )
            {
              v219 = v171;
              v218 = v152;
              v211 = v172;
              v185 = sub_29E60(v6, v173, v172, 1);
              v171 = v219;
              v152 = v218;
              *v6 = v185;
              v173 = v185;
              v172 = v211;
            }
            v6[1] = v172;
            *((_BYTE *)v171 + v173) = 10;
            *((_BYTE *)v171 + *v6 + 1) = 0;
            if ( v11 > 0 )
            {
              for ( j = 0; ; ++j )
              {
                v178 = (__int64 *)v6[1];
                if ( v178 )
                {
                  v175 = (__int64)v178 + 3;
                  v176 = (unsigned __int64)v178 + 4;
                  v177 = *v6;
                  v178 = (__int64 *)((char *)v178 - 1);
                  if ( v6[2] >= v176 )
                    goto LABEL_227;
                }
                else
                {
                  v177 = *v6;
                  v176 = 5;
                  v175 = 4;
                  if ( (unsigned __int64)v6[2] >= 5 )
                    goto LABEL_227;
                }
                v221 = v175;
                LODWORD(v220) = j;
                v219 = v178;
                v218 = v152;
                v211 = v176;
                v179 = sub_29E60(v6, v177, v176, 1);
                v175 = v221;
                j = v220;
                *v6 = v179;
                v177 = v179;
                v178 = v219;
                v152 = v218;
                v176 = v211;
LABEL_227:
                v6[1] = v176;
                *(_BYTE *)(v177 + v175) = 0;
                *(_DWORD *)((char *)v178 + *v6) = 538976288;
                if ( a3 == j )
                  goto LABEL_194;
              }
            }
          }
        }
        if ( v227 )
        {
          *(_QWORD *)v228 = 0;
          j__free(v227);
        }
        return 0;
      }
LABEL_37:
      if ( (v10[6] & 1) != 0 )
      {
        v133 = v6[1];
        if ( v133 )
        {
          v134 = v133 + 1;
          v135 = v6[1];
          --v133;
        }
        else
        {
          v135 = 1;
          v134 = 2;
        }
        v136 = *v6;
        if ( v6[2] < v134 )
        {
          v200 = sub_29E60(v6, v136, v134, 1);
          *v6 = v200;
          v136 = v200;
        }
        v6[1] = v134;
        *(_BYTE *)(v136 + v133) = 10;
        *(_BYTE *)(*v6 + v135) = 0;
        if ( a3 > 0 )
        {
          v137 = 0;
          do
          {
            v140 = v6[1];
            if ( v140 )
            {
              v138 = v140 + 3;
              v139 = v140 + 4;
              --v140;
            }
            else
            {
              v139 = 5;
              v138 = 4;
            }
            v141 = *v6;
            if ( v6[2] < v139 )
            {
              v142 = sub_29E60(v6, v141, v139, 1);
              *v6 = v142;
              v141 = v142;
            }
            v6[1] = v139;
            ++v137;
            *(_BYTE *)(v141 + v138) = 0;
            *(_DWORD *)(*v6 + v140) = 538976288;
          }
          while ( a3 != v137 );
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
        v143 = sub_29E60(v6, v47, v46, 1);
        *v6 = v143;
        v47 = v143;
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
        *(_QWORD *)v214 = v49;
        v206 = (void *)v50;
        v120 = sub_29E60(a1, v51, v50, 1);
        v49 = *(_QWORD *)v214;
        v50 = (unsigned __int64)v206;
        *a1 = v120;
        v51 = v120;
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
        v51 = *a1;
        if ( a1[2] < v101 )
        {
          *(_QWORD *)v216 = v49;
          v208 = (void *)v101;
          v147 = sub_29E60(a1, v51, v101, 1);
          v49 = *(_QWORD *)v216;
          v101 = (unsigned __int64)v208;
          *a1 = v147;
          v51 = v147;
        }
        a1[1] = v101;
        *(_BYTE *)(v51 + v100) = 10;
        *(_BYTE *)(*a1 + v49) = 0;
        if ( v11 > 0 )
        {
          LODWORD(v49) = 0;
          v218 = (__int64)v10;
          v102 = a3;
          v203 = a3 + 1;
          v103 = 0;
          *(_QWORD *)v213 = v7;
          while ( 1 )
          {
            v106 = a1[1];
            if ( v106 )
            {
              v104 = v106 + 3;
              v105 = v106 + 4;
              --v106;
            }
            else
            {
              v105 = 5;
              v104 = 4;
            }
            v51 = *a1;
            if ( a1[2] < v105 )
            {
              v107 = sub_29E60(a1, v51, v105, 1);
              *a1 = v107;
              v51 = v107;
            }
            a1[1] = v105;
            *(_BYTE *)(v51 + v104) = 0;
            *(_DWORD *)(*a1 + v106) = 538976288;
            if ( v102 == v103 )
              break;
            ++v103;
          }
          a3 = v102;
          v11 = v203;
          v7 = *(_QWORD *)v213;
          v10 = (_QWORD *)v218;
        }
      }
      if ( *(_DWORD *)v7 != 4 )
      {
        if ( !byte_7BCA0 )
          sub_2A3D0(1280, v51);
LABEL_264:
        BUG();
      }
      v52 = *(_QWORD *)(v7 + 8);
      *(_QWORD *)v212 = *(_QWORD *)(v52 + 8);
      if ( !*(_QWORD *)v212 )
      {
LABEL_123:
        if ( (v10[6] & 1) != 0 )
        {
          v123 = a1[1];
          if ( v123 )
          {
            v124 = v123 + 1;
            v125 = a1[1];
            --v123;
          }
          else
          {
            v125 = 1;
            v124 = 2;
          }
          v126 = *a1;
          if ( a1[2] < v124 )
          {
            v201 = sub_29E60(a1, v126, v124, 1);
            *a1 = v201;
            v126 = v201;
          }
          a1[1] = v124;
          *(_BYTE *)(v126 + v123) = 10;
          *(_BYTE *)(*a1 + v125) = 0;
          if ( a3 > 0 )
          {
            v127 = 0;
            do
            {
              v130 = a1[1];
              if ( v130 )
              {
                v128 = v130 + 3;
                v129 = v130 + 4;
                --v130;
              }
              else
              {
                v129 = 5;
                v128 = 4;
              }
              v131 = *a1;
              if ( a1[2] < v129 )
              {
                v132 = sub_29E60(a1, v131, v129, 1);
                *a1 = v132;
                v131 = v132;
              }
              a1[1] = v129;
              ++v127;
              *(_BYTE *)(v131 + v128) = 0;
              *(_DWORD *)(*a1 + v130) = 538976288;
            }
            while ( a3 != v127 );
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
          v144 = sub_29E60(a1, v98, v97, 1);
          *a1 = v144;
          v98 = v144;
        }
        a1[1] = v97;
        *(_BYTE *)(v98 + v95) = 93;
        *(_BYTE *)(*a1 + v96) = 0;
        return 1;
      }
      v202 = v11;
      v53 = 0;
      while ( 1 )
      {
LABEL_51:
        if ( !(unsigned __int8)sub_22020(
                                 (int)a1,
                                 *(_DWORD *)v52 + 16 * (int)v53,
                                 v202,
                                 (int)v10,
                                 v49,
                                 a6,
                                 v202,
                                 v212[0],
                                 v218,
                                 (int)v219,
                                 v220,
                                 v221,
                                 v222,
                                 (int)v223,
                                 (int)v224,
                                 v225,
                                 SDWORD2(v225),
                                 v226,
                                 (__int64)v227,
                                 v228[0],
                                 v228[2],
                                 v229,
                                 src,
                                 v231,
                                 v232,
                                 v233,
                                 v234[0]) )
          return 0;
        if ( ++v53 == *(_QWORD *)v212 )
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
          v219 = (__int64 *)v49;
          v218 = v55;
          v94 = sub_29E60(a1, v56, v55, 1);
          v49 = (__int64)v219;
          v55 = v218;
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
            v219 = (__int64 *)v49;
            v218 = v58;
            v122 = sub_29E60(a1, v59, v58, 1);
            v49 = (__int64)v219;
            v58 = v218;
            *a1 = v122;
            v59 = v122;
          }
          a1[1] = v58;
          *(_BYTE *)(v59 + v57) = 10;
          *(_BYTE *)(*a1 + v49) = 0;
          if ( v202 > 0 )
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
        v108 = sub_29E60(a1, v69, v68 + 1, 1);
        *a1 = v108;
        v69 = v108;
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
        v121 = sub_29E60(a1, v73, v71, 1);
        *a1 = v121;
        v73 = v121;
      }
      a1[1] = v71;
      *(_BYTE *)(v73 + v72) = 0;
      *(_DWORD *)(*a1 + v70) = 1819047278;
      return 1;
    case 7LL:
      v14 = sub_3A750(&src, v234, a2[1]);
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
          v146 = sub_29E60(a1, v76, v75, 1);
          *a1 = v146;
          v76 = v146;
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
          v145 = sub_29E60(a1, v20, v19 + 1, 1);
          *a1 = v145;
          v20 = v145;
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
    LODWORD(v220) = v49;
    v219 = (__int64 *)v60;
    v218 = v61;
    v64 = sub_29E60(a1, v62, v61, 1);
    LODWORD(v49) = v220;
    v60 = (__int64)v219;
    *a1 = v64;
    v61 = v218;
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

