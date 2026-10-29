__int64 __fastcall sub_1B630D0(
        __int64 *a1,
        __int64 *a2,
        __m128i *a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        double a7,
        __m128 a8,
        __m128i a9,
        __int64 a10,
        char a11,
        __int64 a12,
        const void *a13,
        __int64 a14,
        __int64 a15)
{
  __int64 *v15; // r15
  __int64 v18; // rdi
  int v19; // ebx
  __int64 v20; // rax
  __m128 si128; // xmm0
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 v25; // r9
  unsigned __int64 v26; // rbp
  int v27; // ebx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  char *v32; // rax
  __int64 v33; // rsi
  char *v34; // r13
  unsigned __int64 v35; // rax
  unsigned int v36; // esi
  __int64 *v37; // rdx
  unsigned __int64 v38; // rax
  __int64 v39; // rdi
  __int64 v40; // r14
  int v41; // r12d
  unsigned __int64 *v42; // r15
  __int64 v43; // rdx
  unsigned __int64 v44; // rbx
  unsigned __int64 v45; // rax
  __int64 v46; // rax
  _QWORD *v47; // rax
  __int64 v48; // r14
  unsigned __int64 *v49; // rsi
  _QWORD *n; // rdx
  unsigned __int64 *ii; // rax
  unsigned __int64 v52; // rdx
  unsigned int v53; // edi
  unsigned __int64 *v54; // rcx
  unsigned __int64 v55; // r9
  unsigned __int64 v56; // rdx
  unsigned int v57; // esi
  __int64 v58; // rcx
  unsigned int v59; // r8d
  unsigned __int64 v60; // rsi
  __int64 v61; // r9
  __int64 v62; // rax
  __int64 v63; // rdx
  int v64; // esi
  _QWORD *v65; // r8
  unsigned int v66; // r9d
  _QWORD *v67; // rdi
  unsigned __int64 v68; // rax
  unsigned int v69; // edx
  unsigned int v70; // ecx
  __int64 *v71; // rsi
  __int64 v72; // r9
  unsigned __int64 v73; // rbp
  char v74; // r12
  __int64 v75; // rax
  __int64 v76; // r12
  _DWORD *v77; // rdi
  __int32 v78; // eax
  size_t v79; // r13
  unsigned __int64 v80; // rbp
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // r9
  __int64 v84; // r13
  __int64 v85; // r14
  _QWORD *v86; // rax
  unsigned __int64 v87; // rax
  __int64 v88; // rcx
  __int64 v89; // r8
  __int64 v90; // r9
  __int64 v91; // rbp
  __int64 v92; // r13
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // r8
  __int64 v96; // r9
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // r8
  __int64 v100; // r9
  __int64 v102; // rbp
  unsigned int v103; // r14d
  unsigned __int64 *v104; // r15
  unsigned __int64 v105; // rax
  unsigned int v106; // esi
  unsigned __int64 *v107; // rdx
  unsigned __int64 v108; // rcx
  int v109; // r13d
  __int64 v110; // rdx
  unsigned __int64 v111; // rbx
  unsigned __int64 v112; // rdx
  unsigned __int64 v113; // rax
  _QWORD *v114; // rax
  __int64 v115; // r14
  unsigned __int64 *v116; // rsi
  _QWORD *j; // rdx
  unsigned __int64 *k; // rax
  unsigned __int64 v119; // rdx
  unsigned int v120; // edi
  unsigned __int64 *v121; // rcx
  unsigned __int64 v122; // r9
  int v123; // esi
  int v124; // r10d
  __int64 v125; // r9
  int v126; // edi
  _QWORD *v127; // rcx
  _QWORD *v128; // rdx
  unsigned int v129; // esi
  unsigned int v130; // edi
  __int64 *v131; // r11
  unsigned __int64 *v132; // rdi
  int v133; // ecx
  unsigned __int64 v134; // rax
  unsigned __int64 v135; // rax
  __int64 v136; // rax
  _QWORD *v137; // rax
  __int64 v138; // r11
  unsigned __int64 *v139; // r10
  _QWORD *m; // rdx
  unsigned __int64 *v141; // rax
  unsigned __int64 v142; // r14
  unsigned int v143; // ecx
  unsigned __int64 *v144; // rdx
  unsigned __int64 v145; // rdi
  unsigned __int64 v146; // rcx
  unsigned int v147; // esi
  unsigned int v148; // esi
  unsigned int v149; // ebp
  __int64 v150; // rdi
  __int64 *v151; // r10
  _QWORD *v152; // rsi
  unsigned __int64 v153; // rbp
  unsigned __int64 v154; // r12
  __int64 v155; // rax
  __int64 *v156; // rax
  __int64 v157; // rdx
  unsigned __int64 v158; // rax
  unsigned __int64 v159; // rax
  unsigned __int64 v160; // rdx
  __int64 v161; // rax
  _QWORD *v162; // rax
  __int64 v163; // r11
  _QWORD *i; // rdx
  unsigned __int64 *v165; // rax
  unsigned __int64 v166; // r14
  unsigned int v167; // ecx
  unsigned __int64 *v168; // rdx
  unsigned __int64 v169; // rdi
  __int64 v170; // rdx
  __int64 v171; // rcx
  __int64 v172; // r8
  __int64 v173; // r9
  __int64 v174; // r13
  __int64 v175; // rax
  _QWORD *v176; // rax
  unsigned int v177; // esi
  unsigned int v178; // edi
  unsigned int v179; // esi
  unsigned __int64 v180; // r8
  unsigned __int64 *v181; // r9
  int v182; // r10d
  int v183; // ebp
  unsigned __int64 v184; // rbx
  __int32 v185; // eax
  bool v186; // zf
  unsigned int v187; // esi
  unsigned int v188; // esi
  unsigned int v189; // r12d
  unsigned __int64 v190; // rdi
  unsigned __int64 *v191; // r8
  int v192; // r9d
  int v193; // esi
  _QWORD *v194; // rcx
  _QWORD *v195; // rdx
  int v196; // r11d
  __int64 v197; // r10
  _QWORD *v198; // rcx
  _QWORD *v199; // rdx
  _QWORD *v200; // rcx
  _QWORD *v201; // rdx
  int v202; // r11d
  unsigned __int64 *v203; // rbp
  unsigned __int64 *v204; // r9
  unsigned __int64 *v205; // r12
  int v206; // r11d
  unsigned __int64 *v207; // r9
  bool v208; // [rsp+8h] [rbp-230h]
  __int64 *v209; // [rsp+8h] [rbp-230h]
  int v213; // [rsp+28h] [rbp-210h]
  __int64 *v215; // [rsp+58h] [rbp-1E0h]
  int v216; // [rsp+70h] [rbp-1C8h]
  __int64 v217; // [rsp+78h] [rbp-1C0h] BYREF
  unsigned __int64 v218; // [rsp+80h] [rbp-1B8h] BYREF
  __int64 v219; // [rsp+88h] [rbp-1B0h] BYREF
  __m128 v220; // [rsp+90h] [rbp-1A8h] BYREF
  _QWORD *v221; // [rsp+A0h] [rbp-198h] BYREF
  __int64 v222; // [rsp+A8h] [rbp-190h]
  unsigned int v223; // [rsp+B0h] [rbp-188h]
  __m128 ptr; // [rsp+C0h] [rbp-178h] BYREF
  _DWORD v225[32]; // [rsp+D0h] [rbp-168h] BYREF
  __int64 v226; // [rsp+150h] [rbp-E8h] BYREF
  char *v227; // [rsp+158h] [rbp-E0h]
  __int64 v228; // [rsp+160h] [rbp-D8h]
  char v229; // [rsp+168h] [rbp-D0h] BYREF
  __int128 v230; // [rsp+1A8h] [rbp-90h]
  __int64 v231; // [rsp+1B8h] [rbp-80h]
  __int64 v232; // [rsp+1C0h] [rbp-78h]
  __int64 v233; // [rsp+1C8h] [rbp-70h]
  int v234; // [rsp+1D0h] [rbp-68h]
  __int64 v235; // [rsp+1D8h] [rbp-60h] BYREF
  __m128 v236; // [rsp+1E0h] [rbp-58h]
  bool v237; // [rsp+1F0h] [rbp-48h]
  bool v238; // [rsp+1F1h] [rbp-47h]
  char v239; // [rsp+1F2h] [rbp-46h]
  bool v240; // [rsp+1F3h] [rbp-45h]
  bool v241; // [rsp+1F4h] [rbp-44h]
  char v242; // [rsp+1F5h] [rbp-43h]
  __int16 v243; // [rsp+1F6h] [rbp-42h]

  v15 = a1;
  v18 = *a1;
  v217 = a5;
  v19 = sub_1A3A250(v18);
  v20 = *v15;
  v227 = &v229;
  v228 = 0x800000000LL;
  v230 = 0;
  v232 = v20;
  v226 = 0;
  v231 = 0;
  v233 = a4;
  v234 = 0;
  sub_B85890(&v235, a4);
  si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23AAB50);
  v237 = v19 != 0;
  v238 = v19 == 2;
  v236 = si128;
  v239 = 1;
  v240 = v19 == 0;
  v241 = v19 == 0;
  v242 = 0;
  v243 = 0;
  sub_1A395A0((__int64)&v226);
  v221 = nullptr;
  v222 = 0;
  v223 = 0;
  if ( !a2 )
  {
    if ( !a15 )
    {
      v67 = nullptr;
      v65 = nullptr;
      v66 = 0;
      goto LABEL_32;
    }
    v209 = v15;
    v102 = a15;
    v103 = 0;
    v104 = nullptr;
    while ( 1 )
    {
      v109 = *(_DWORD *)(v102 + 24);
      v110 = *(_QWORD *)&byte_8[*(_QWORD *)(v102 + 48) & 0xFFFFFFFFFFFFFFF0LL];
      v111 = v110 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v110 | *(_BYTE *)(v102 + 48)) & 7;
      if ( !v103 )
        goto LABEL_59;
      v105 = v103 - 1;
      v106 = v105 & (v111 ^ (v111 >> 9));
      v107 = &v104[2 * v106];
      v108 = *v107;
      if ( v111 == *v107 )
        goto LABEL_56;
      v132 = nullptr;
      v22 = 1;
      if ( v108 )
      {
        while ( 1 )
        {
          if ( v108 == -1 && !v132 )
            v132 = v107;
          v23 = (unsigned int)(v22 + 1);
          v106 = v105 & (v22 + v106);
          v107 = &v104[2 * v106];
          v108 = *v107;
          if ( v111 == *v107 )
            goto LABEL_56;
          if ( !v108 )
            break;
          v22 = (unsigned int)v23;
        }
        if ( v132 )
          v107 = v132;
      }
      v133 = v222 + 1;
      if ( 4 * ((int)v222 + 1) < 3 * v103 )
      {
        if ( v103 - (v133 + HIDWORD(v222)) <= v103 >> 3 )
        {
          v158 = (((v105 >> 1) | v105) >> 2) | (v105 >> 1) | v105;
          v159 = (((v158 >> 4) | v158) >> 8) | (v158 >> 4) | v158;
          v160 = v159 >> 16;
          v161 = ((v159 >> 16) | v159) + 1;
          if ( (unsigned int)v161 < 0x40 )
            LODWORD(v161) = 64;
          v223 = v161;
          v162 = (_QWORD *)sub_22300B0(16LL * (unsigned int)v161, 8, v160, 64, v22, v23);
          v221 = v162;
          if ( v104 )
          {
            v222 = 0;
            v163 = 2LL * v103;
            for ( i = &v162[2 * v223]; i != v162; v162 += 2 )
              *v162 = 0;
            v165 = v104;
            do
            {
              v166 = *v165;
              if ( *v165 - 1 <= 0xFFFFFFFFFFFFFFFDLL )
              {
                if ( !v223 )
                {
                  *(_QWORD *)&dword_0 = *v165;
                  BUG();
                }
                v167 = (v223 - 1) & (v166 ^ (v166 >> 9));
                v168 = &v221[2 * v167];
                v169 = *v168;
                if ( v166 != *v168 && v169 )
                {
                  v213 = 1;
                  v207 = nullptr;
                  while ( 1 )
                  {
                    if ( !v207 && v169 == -1 )
                      v207 = v168;
                    v167 = (v223 - 1) & (v213 + v167);
                    v168 = &v221[2 * v167];
                    v169 = *v168;
                    if ( v166 == *v168 )
                      goto LABEL_157;
                    if ( !v169 )
                      break;
                    ++v213;
                  }
                  if ( v207 )
                    v168 = v207;
                }
LABEL_157:
                *v168 = *v165;
                *((_DWORD *)v168 + 2) = *((_DWORD *)v165 + 2);
                LODWORD(v222) = v222 + 1;
              }
              v165 += 2;
            }
            while ( &v104[v163] != v165 );
            operator delete(v104, v163 * 8, 8);
            v162 = v221;
            v187 = v223;
            v133 = v222 + 1;
          }
          else
          {
            v222 = 0;
            v187 = v223;
            v200 = &v162[2 * v223];
            if ( v162 != v200 )
            {
              v201 = v162;
              do
              {
                *v201 = 0;
                v201 += 2;
              }
              while ( v200 != v201 );
            }
            v133 = 1;
          }
          if ( !v187 )
          {
LABEL_308:
            LODWORD(v222) = v222 + 1;
            BUG();
          }
          v188 = v187 - 1;
          v189 = v188 & (v111 ^ (v111 >> 9));
          v107 = &v162[2 * v189];
          v190 = *v107;
          if ( v111 != *v107 )
          {
            v191 = nullptr;
            v192 = 1;
            if ( v190 )
            {
              while ( 1 )
              {
                if ( !v191 && v190 == -1 )
                  v191 = v107;
                v189 = v188 & (v192 + v189);
                v107 = &v162[2 * v189];
                v190 = *v107;
                if ( v111 == *v107 )
                  goto LABEL_103;
                if ( !v190 )
                  break;
                ++v192;
              }
              if ( v191 )
                v107 = v191;
            }
          }
        }
      }
      else
      {
LABEL_59:
        v112 = ((((((((2 * v103 - 1) | ((unsigned __int64)(2 * v103 - 1) >> 1)) >> 2)
                  | (2 * v103 - 1)
                  | ((unsigned __int64)(2 * v103 - 1) >> 1)) >> 4)
                | (((2 * v103 - 1) | ((unsigned __int64)(2 * v103 - 1) >> 1)) >> 2)
                | (2 * v103 - 1)
                | ((unsigned __int64)(2 * v103 - 1) >> 1)) >> 8)
              | (((((2 * v103 - 1) | ((unsigned __int64)(2 * v103 - 1) >> 1)) >> 2)
                | (2 * v103 - 1)
                | ((unsigned __int64)(2 * v103 - 1) >> 1)) >> 4)
              | (((2 * v103 - 1) | ((unsigned __int64)(2 * v103 - 1) >> 1)) >> 2)
              | (2 * v103 - 1)
              | ((unsigned __int64)(2 * v103 - 1) >> 1)) >> 16;
        v113 = (v112
              | (((((((2 * v103 - 1) | ((unsigned __int64)(2 * v103 - 1) >> 1)) >> 2)
                  | (2 * v103 - 1)
                  | ((unsigned __int64)(2 * v103 - 1) >> 1)) >> 4)
                | (((2 * v103 - 1) | ((unsigned __int64)(2 * v103 - 1) >> 1)) >> 2)
                | (2 * v103 - 1)
                | ((unsigned __int64)(2 * v103 - 1) >> 1)) >> 8)
              | (((((2 * v103 - 1) | ((unsigned __int64)(2 * v103 - 1) >> 1)) >> 2)
                | (2 * v103 - 1)
                | ((unsigned __int64)(2 * v103 - 1) >> 1)) >> 4)
              | (((2 * v103 - 1) | ((unsigned __int64)(2 * v103 - 1) >> 1)) >> 2)
              | (2 * v103 - 1)
              | ((unsigned __int64)(2 * v103 - 1) >> 1))
             + 1;
        if ( (unsigned int)v113 < 0x40 )
          LODWORD(v113) = 64;
        v223 = v113;
        v114 = (_QWORD *)sub_22300B0(16LL * (unsigned int)v113, 8, v112, 64, v22, v23);
        v221 = v114;
        if ( v104 )
        {
          v222 = 0;
          v115 = 2LL * v103;
          v116 = &v104[v115];
          for ( j = &v114[2 * v223]; j != v114; v114 += 2 )
            *v114 = 0;
          for ( k = v104; v116 != k; k += 2 )
          {
            v119 = *k;
            if ( *k - 1 <= 0xFFFFFFFFFFFFFFFDLL )
            {
              if ( !v223 )
              {
                *(_QWORD *)&dword_0 = *k;
                BUG();
              }
              v120 = (v223 - 1) & (v119 ^ (v119 >> 9));
              v121 = &v221[2 * v120];
              v122 = *v121;
              if ( v119 != *v121 )
              {
                v205 = nullptr;
                v206 = 1;
                if ( v122 )
                {
                  while ( 1 )
                  {
                    if ( v122 == -1 && !v205 )
                      v205 = v121;
                    v120 = (v223 - 1) & (v206 + v120);
                    v121 = &v221[2 * v120];
                    v122 = *v121;
                    if ( v119 == *v121 )
                      goto LABEL_70;
                    if ( !v122 )
                      break;
                    ++v206;
                  }
                  if ( v205 )
                    v121 = v205;
                }
              }
LABEL_70:
              *v121 = *k;
              *((_DWORD *)v121 + 2) = *((_DWORD *)k + 2);
              LODWORD(v222) = v222 + 1;
            }
          }
          operator delete(v104, v115 * 8, 8);
          v114 = v221;
          v177 = v223;
          v133 = v222 + 1;
        }
        else
        {
          v222 = 0;
          v177 = v223;
          v198 = &v114[2 * v223];
          if ( v114 != v198 )
          {
            v199 = v114;
            do
            {
              *v199 = 0;
              v199 += 2;
            }
            while ( v198 != v199 );
          }
          v133 = 1;
        }
        if ( !v177 )
          goto LABEL_308;
        v178 = v177 - 1;
        v179 = (v177 - 1) & (v111 ^ (v111 >> 9));
        v107 = &v114[2 * v179];
        v180 = *v107;
        if ( v111 != *v107 )
        {
          v181 = nullptr;
          v182 = 1;
          if ( v180 )
          {
            while ( 1 )
            {
              if ( !v181 && v180 == -1 )
                v181 = v107;
              v179 = v178 & (v182 + v179);
              v107 = &v114[2 * v179];
              v180 = *v107;
              if ( v111 == *v107 )
                goto LABEL_103;
              if ( !v180 )
                break;
              ++v182;
            }
            if ( v181 )
              v107 = v181;
          }
        }
      }
LABEL_103:
      LODWORD(v222) = v133;
      if ( *v107 )
        --HIDWORD(v222);
      *v107 = v111;
      *((_DWORD *)v107 + 2) = 0;
LABEL_56:
      *((_DWORD *)v107 + 2) = v109;
      v102 = sub_BB2580(v102);
      if ( !v102 )
      {
        v65 = v221;
        v15 = v209;
        v66 = v223;
        v67 = &v221[2 * v223];
        goto LABEL_32;
      }
      v104 = v221;
      v103 = v223;
    }
  }
  v24 = sub_15F2530(*v15);
  v26 = v24;
  if ( v24 )
  {
    v27 = *(_DWORD *)(v24 + 368);
    v208 = v27 != 0;
    sub_1A49A10(*v15, (__int64)&v226, a2, 0, 0, v25, *(double *)si128.m128_u64, *(double *)a8.m128_u64);
    sub_17A32D0(*v15, (int *)&v226, (__int64)a3, a2, 0, 0);
    ptr = 0u;
    v32 = v227;
    v225[0] = 0;
    v33 = 8LL * (unsigned int)v228;
    if ( !v33 )
    {
      if ( !v27 )
      {
        v26 = 0;
        a15 = 0;
        goto LABEL_31;
      }
      v152 = nullptr;
LABEL_192:
      sub_1AFDAF0(&v220, v152, v152, (__int64)&ptr, 1);
      v154 = v220.m128_u64[1];
      v153 = v220.m128_u64[0];
      goto LABEL_132;
    }
  }
  else
  {
    sub_1A49A10(*v15, (__int64)&v226, a2, 0, 0, v25, *(double *)si128.m128_u64, *(double *)a8.m128_u64);
    sub_17A32D0(*v15, (int *)&v226, (__int64)a3, a2, 0, 0);
    v208 = 0;
    ptr = 0u;
    v32 = v227;
    v33 = 8LL * (unsigned int)v228;
    v225[0] = 0;
    if ( !v33 )
      goto LABEL_30;
  }
  v34 = v32;
  v215 = v15;
  do
  {
    v38 = *(_QWORD *)v34 & 0xFFFFFFFFFFFFFFF8LL;
    v39 = v38;
    v218 = v38;
    if ( v208 )
    {
      v58 = v225[0];
      if ( v225[0] )
      {
        v28 = ptr.m128_u64[0];
        v59 = (v225[0] - 1) & (((unsigned int)v38 >> 9) ^ ((unsigned int)v38 >> 4));
        v60 = ptr.m128_u64[0] + 16LL * v59;
        v61 = *(_QWORD *)v60;
        if ( v38 == *(_QWORD *)v60 )
          goto LABEL_24;
        v183 = 1;
        v184 = 0;
        if ( v61 != -4096 )
        {
          while ( 1 )
          {
            if ( v184 || v61 != -8192 )
              v60 = v184;
            v59 = (v225[0] - 1) & (v183 + v59);
            v61 = *(_QWORD *)(ptr.m128_u64[0] + 16LL * v59);
            if ( v38 == v61 )
            {
              v60 = ptr.m128_u64[0] + 16LL * v59;
              goto LABEL_24;
            }
            if ( v61 == -4096 )
              break;
            ++v183;
            v184 = v60;
            v60 = ptr.m128_u64[0] + 16LL * v59;
          }
          if ( !v60 )
            v60 = ptr.m128_u64[0] + 16LL * v59;
        }
        v30 = (unsigned int)(3 * v225[0]);
        v220.m128_u64[0] = v60;
        v185 = ptr.m128_i32[2] + 1;
        v31 = (unsigned int)(4 * (ptr.m128_i32[2] + 1));
        if ( (unsigned int)v31 < (unsigned int)v30 )
        {
          v30 = (unsigned int)(v225[0] - ptr.m128_i32[3] - v185);
          v31 = v225[0] >> 3;
          if ( (unsigned int)v30 > (unsigned int)v31 )
          {
LABEL_176:
            v186 = *(_QWORD *)v60 == -4096;
            ptr.m128_i32[2] = v185;
            if ( !v186 )
              --ptr.m128_i32[3];
            *(_QWORD *)v60 = v39;
            *(_BYTE *)(v60 + 8) = 0;
LABEL_24:
            sub_1AFDAF0(&v220, (_QWORD *)v60, (_QWORD *)(16 * v58 + v28), (__int64)&ptr, 1);
            v62 = sub_BB2580(v218);
            v219 = v62;
            if ( !v62 )
            {
LABEL_28:
              v39 = v218;
              goto LABEL_8;
            }
            v64 = v225[0];
            if ( v225[0] )
            {
              v30 = (unsigned int)(v225[0] - 1);
              v29 = (unsigned int)v30 & (((unsigned int)v62 >> 9) ^ ((unsigned int)v62 >> 4));
              v63 = ptr.m128_u64[0] + 16 * v29;
              v31 = *(_QWORD *)v63;
              if ( v62 == *(_QWORD *)v63 )
              {
LABEL_27:
                *(_BYTE *)(v63 + 8) = 1;
                goto LABEL_28;
              }
              v196 = 1;
              v197 = 0;
              if ( v31 != -4096 )
              {
                while ( 1 )
                {
                  if ( !v197 && v31 == -8192 )
                    v197 = v63;
                  v29 = (unsigned int)v30 & (v196 + (_DWORD)v29);
                  v63 = ptr.m128_u64[0] + 16LL * (unsigned int)v29;
                  v31 = *(_QWORD *)v63;
                  if ( v62 == *(_QWORD *)v63 )
                    goto LABEL_27;
                  if ( v31 == -4096 )
                  {
                    if ( v197 )
                      v63 = v197;
                    break;
                  }
                  ++v196;
                }
              }
              v220.m128_u64[0] = v63;
              v29 = (unsigned int)(ptr.m128_i32[2] + 1);
              v30 = (unsigned int)(4 * v29);
              if ( (unsigned int)v30 < 3 * v225[0] )
              {
                v30 = v225[0] >> 3;
                if ( v225[0] - ptr.m128_i32[3] - (int)v29 > (unsigned int)v30 )
                {
LABEL_206:
                  v186 = *(_QWORD *)v63 == -4096;
                  ptr.m128_i32[2] = v29;
                  if ( !v186 )
                    --ptr.m128_i32[3];
                  *(_QWORD *)v63 = v62;
                  *(_BYTE *)(v63 + 8) = 0;
                  goto LABEL_27;
                }
LABEL_211:
                sub_1B04F30((__int64 *)&ptr, v64, v63, v29, v30, v31);
                sub_1AF8120((__int64 *)&ptr, &v219, &v220);
                v62 = v219;
                v63 = v220.m128_u64[0];
                v29 = (unsigned int)(ptr.m128_i32[2] + 1);
                goto LABEL_206;
              }
            }
            else
            {
              v220.m128_u64[0] = 0;
            }
            v64 = 2 * v225[0];
            goto LABEL_211;
          }
          v193 = v225[0];
LABEL_196:
          sub_1B04F30((__int64 *)&ptr, v193, v28, v225[0], v30, v31);
          sub_1AF8120((__int64 *)&ptr, (__int64 *)&v218, &v220);
          v39 = v218;
          v28 = ptr.m128_u64[0];
          v58 = v225[0];
          v185 = ptr.m128_i32[2] + 1;
          v60 = v220.m128_u64[0];
          goto LABEL_176;
        }
      }
      else
      {
        v220.m128_u64[0] = 0;
      }
      v193 = 2 * v225[0];
      goto LABEL_196;
    }
LABEL_8:
    v40 = v223;
    v41 = *(_DWORD *)(v39 + 24);
    v42 = v221;
    v43 = *(_QWORD *)&byte_8[*(_QWORD *)(v39 + 48) & 0xFFFFFFFFFFFFFFF0LL];
    v44 = v43 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v43 | *(_BYTE *)(v39 + 48)) & 7;
    if ( !v223 )
      goto LABEL_9;
    v35 = v223 - 1;
    v36 = v35 & (v44 ^ (v44 >> 9));
    v37 = &v221[2 * v36];
    v29 = *v37;
    if ( v44 == *v37 )
      goto LABEL_6;
    v126 = 1;
    v31 = 0;
    if ( v29 )
    {
      while ( 1 )
      {
        if ( v29 == -1 && !v31 )
          v31 = (__int64)v37;
        v30 = (unsigned int)(v126 + 1);
        v36 = v35 & (v126 + v36);
        v37 = &v221[2 * v36];
        v29 = *v37;
        if ( v44 == *v37 )
          goto LABEL_6;
        if ( !v29 )
          break;
        ++v126;
      }
      if ( v31 )
        v37 = (__int64 *)v31;
    }
    v29 = (unsigned int)(v222 + 1);
    if ( 4 * (int)v29 < 3 * v223 )
    {
      if ( v223 - HIDWORD(v222) - (unsigned int)v29 <= v223 >> 3 )
      {
        v134 = (((v35 >> 1) | v35) >> 2) | (v35 >> 1) | v35;
        v135 = (((v134 >> 4) | v134) >> 8) | (v134 >> 4) | v134;
        v136 = ((v135 >> 16) | v135) + 1;
        if ( (unsigned int)v136 < 0x40 )
          LODWORD(v136) = 64;
        v223 = v136;
        v137 = (_QWORD *)sub_22300B0(16LL * (unsigned int)v136, 8, 64, v29, v30, v31);
        v221 = v137;
        if ( v42 )
        {
          v222 = 0;
          v138 = 16 * v40;
          v139 = &v42[2 * v40];
          for ( m = &v137[2 * v223]; m != v137; v137 += 2 )
            *v137 = 0;
          v141 = v42;
          do
          {
            while ( 1 )
            {
              v142 = *v141;
              if ( *v141 - 1 <= 0xFFFFFFFFFFFFFFFDLL )
                break;
              v141 += 2;
              if ( v139 == v141 )
                goto LABEL_117;
            }
            if ( !v223 )
            {
              *(_QWORD *)&dword_0 = *v141;
              BUG();
            }
            v143 = (v223 - 1) & (v142 ^ (v142 >> 9));
            v144 = &v221[2 * v143];
            v145 = *v144;
            if ( *v144 != v142 && v145 )
            {
              v216 = 1;
              v204 = nullptr;
              while ( 1 )
              {
                if ( !v204 && v145 == -1 )
                  v204 = v144;
                v143 = (v223 - 1) & (v216 + v143);
                v144 = &v221[2 * v143];
                v145 = *v144;
                if ( v142 == *v144 )
                  break;
                if ( !v145 )
                {
                  if ( v204 )
                    v144 = v204;
                  break;
                }
                ++v216;
              }
            }
            v146 = *v141;
            v141 += 2;
            *v144 = v146;
            *((_DWORD *)v144 + 2) = *((_DWORD *)v141 - 2);
            LODWORD(v222) = v222 + 1;
          }
          while ( v139 != v141 );
LABEL_117:
          operator delete(v42, v138, 8);
          v137 = v221;
          v147 = v223;
          v29 = (unsigned int)(v222 + 1);
        }
        else
        {
          v222 = 0;
          v147 = v223;
          v194 = &v137[2 * v223];
          if ( v137 != v194 )
          {
            v195 = v137;
            do
            {
              *v195 = 0;
              v195 += 2;
            }
            while ( v194 != v195 );
          }
          v29 = 1;
        }
        if ( !v147 )
        {
LABEL_306:
          LODWORD(v222) = v222 + 1;
          BUG();
        }
        v148 = v147 - 1;
        v149 = v148 & (v44 ^ (v44 >> 9));
        v37 = &v137[2 * v149];
        v150 = *v37;
        if ( v44 != *v37 )
        {
          v30 = 1;
          v151 = nullptr;
          if ( v150 )
          {
            while ( 1 )
            {
              if ( !v151 && v150 == -1 )
                v151 = v37;
              v31 = (unsigned int)(v30 + 1);
              v149 = v148 & (v30 + v149);
              v37 = &v137[2 * v149];
              v150 = *v37;
              if ( v44 == *v37 )
                break;
              if ( !v150 )
              {
                if ( v151 )
                  v37 = v151;
                break;
              }
              v30 = (unsigned int)v31;
            }
          }
        }
      }
    }
    else
    {
LABEL_9:
      v45 = (((((((2 * v223 - 1) | ((unsigned __int64)(2 * v223 - 1) >> 1)) >> 2)
              | (2 * v223 - 1)
              | ((unsigned __int64)(2 * v223 - 1) >> 1)) >> 4)
            | (((2 * v223 - 1) | ((unsigned __int64)(2 * v223 - 1) >> 1)) >> 2)
            | (2 * v223 - 1)
            | ((unsigned __int64)(2 * v223 - 1) >> 1)) >> 8)
          | (((((2 * v223 - 1) | ((unsigned __int64)(2 * v223 - 1) >> 1)) >> 2)
            | (2 * v223 - 1)
            | ((unsigned __int64)(2 * v223 - 1) >> 1)) >> 4)
          | (((2 * v223 - 1) | ((unsigned __int64)(2 * v223 - 1) >> 1)) >> 2)
          | (2 * v223 - 1)
          | ((unsigned __int64)(2 * v223 - 1) >> 1);
      v46 = ((v45 >> 16) | v45) + 1;
      if ( (unsigned int)v46 < 0x40 )
        LODWORD(v46) = 64;
      v223 = v46;
      v47 = (_QWORD *)sub_22300B0(16LL * (unsigned int)v46, 8, 64, v29, v30, v31);
      v221 = v47;
      if ( v42 )
      {
        v222 = 0;
        v48 = 2LL * (unsigned int)v40;
        v49 = &v42[v48];
        for ( n = &v47[2 * v223]; n != v47; v47 += 2 )
          *v47 = 0;
        for ( ii = v42; v49 != ii; LODWORD(v222) = v222 + 1 )
        {
          while ( 1 )
          {
            v52 = *ii;
            if ( *ii - 1 <= 0xFFFFFFFFFFFFFFFDLL )
              break;
            ii += 2;
            if ( v49 == ii )
              goto LABEL_21;
          }
          if ( !v223 )
          {
            *(_QWORD *)&dword_0 = *ii;
            BUG();
          }
          v53 = (v223 - 1) & (v52 ^ (v52 >> 9));
          v54 = &v221[2 * v53];
          v55 = *v54;
          if ( v52 != *v54 )
          {
            v202 = 1;
            v203 = nullptr;
            if ( v55 )
            {
              while ( 1 )
              {
                if ( v55 == -1 && !v203 )
                  v203 = v54;
                v53 = (v223 - 1) & (v202 + v53);
                v54 = &v221[2 * v53];
                v55 = *v54;
                if ( v52 == *v54 )
                  break;
                if ( !v55 )
                {
                  if ( v203 )
                    v54 = v203;
                  break;
                }
                ++v202;
              }
            }
          }
          v56 = *ii;
          ii += 2;
          *v54 = v56;
          *((_DWORD *)v54 + 2) = *((_DWORD *)ii - 2);
        }
LABEL_21:
        operator delete(v42, v48 * 8, 8);
        v47 = v221;
        v57 = v223;
        v29 = (unsigned int)(v222 + 1);
      }
      else
      {
        v222 = 0;
        v57 = v223;
        v127 = &v47[2 * v223];
        if ( v47 != v127 )
        {
          v128 = v47;
          do
          {
            *v128 = 0;
            v128 += 2;
          }
          while ( v127 != v128 );
        }
        v29 = 1;
      }
      if ( !v57 )
        goto LABEL_306;
      v129 = v57 - 1;
      v130 = v129 & (v44 ^ (v44 >> 9));
      v37 = &v47[2 * v130];
      v30 = *v37;
      if ( v44 != *v37 )
      {
        v31 = 1;
        v131 = nullptr;
        if ( v30 )
        {
          while ( 1 )
          {
            if ( v30 == -1 && !v131 )
              v131 = v37;
            v130 = v129 & (v31 + v130);
            v37 = &v47[2 * v130];
            v30 = *v37;
            if ( v44 == *v37 )
              break;
            if ( !v30 )
            {
              if ( v131 )
                v37 = v131;
              break;
            }
            v31 = (unsigned int)(v31 + 1);
          }
        }
      }
    }
    LODWORD(v222) = v29;
    if ( *v37 )
      --HIDWORD(v222);
    *v37 = v44;
    *((_DWORD *)v37 + 2) = 0;
LABEL_6:
    *((_DWORD *)v37 + 2) = v41;
    v34 += 8;
    v28 = (unsigned int)v228;
  }
  while ( &v227[8 * (unsigned int)v228] != v34 );
  v15 = v215;
  v26 = ptr.m128_u64[0];
  v33 = 16LL * v225[0];
  if ( !v208 )
  {
LABEL_30:
    a15 = 0;
    goto LABEL_31;
  }
  v152 = (_QWORD *)(ptr.m128_u64[0] + v33);
  if ( !ptr.m128_i32[2] )
    goto LABEL_192;
  sub_1AFDAF0(&v220, ptr.m128_u64[0], v152, (__int64)&ptr, 0);
  v154 = v220.m128_u64[1];
  v153 = v220.m128_u64[0];
LABEL_132:
  sub_1AFDAF0(
    &v220,
    (_QWORD *)(ptr.m128_u64[0] + 16LL * v225[0]),
    (_QWORD *)(ptr.m128_u64[0] + 16LL * v225[0]),
    (__int64)&ptr,
    1);
  if ( v220.m128_u64[0] == v153 )
  {
LABEL_142:
    a15 = 0;
    goto LABEL_143;
  }
  while ( *(_BYTE *)(v153 + 8) )
  {
    if ( v153 + 16 == v154 )
      goto LABEL_144;
    v155 = *(_QWORD *)(v153 + 16);
    if ( v155 == -8192 || v155 == -4096 )
    {
      v156 = (__int64 *)(v153 + 32);
      while ( 1 )
      {
        v153 = (unsigned __int64)v156;
        if ( v156 == (__int64 *)v154 )
          break;
        v157 = *v156;
        v156 += 2;
        if ( v157 != -8192 && v157 != -4096 )
          goto LABEL_141;
      }
LABEL_144:
      v153 = v154;
      if ( v220.m128_u64[0] == v154 )
        goto LABEL_142;
      continue;
    }
    v153 += 16LL;
LABEL_141:
    if ( v220.m128_u64[0] == v153 )
      goto LABEL_142;
  }
  a15 = *(_QWORD *)v153;
LABEL_143:
  v26 = ptr.m128_u64[0];
  v33 = 16LL * v225[0];
LABEL_31:
  operator delete(v26, v33, 8);
  v65 = v221;
  v66 = v223;
  v67 = &v221[2 * v223];
LABEL_32:
  v68 = *(_QWORD *)&byte_8[v217 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
      | ((unsigned __int8)*(_QWORD *)&byte_8[v217 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v217) & 7;
  if ( !v66 )
    goto LABEL_76;
  v69 = v66 - 1;
  v70 = (v66 - 1) & (v68 ^ (v68 >> 9));
  v71 = &v65[2 * v70];
  v72 = *v71;
  if ( v68 == *v71 )
    goto LABEL_34;
  v123 = 1;
  if ( v72 )
  {
    while ( 1 )
    {
      v124 = v123 + 1;
      v70 = v69 & (v123 + v70);
      v71 = &v65[2 * v70];
      v125 = *v71;
      if ( v68 == *v71 )
        break;
      v123 = v124;
      if ( !v125 )
        goto LABEL_76;
    }
LABEL_34:
    sub_1AFDA90(&ptr, v71, v67, (__int64)&v221, 1);
    v73 = ptr.m128_u64[0];
  }
  else
  {
LABEL_76:
    sub_1AFDA90(&ptr, v67, v67, (__int64)&v221, 1);
    v73 = ptr.m128_u64[0];
  }
  v74 = 0;
  sub_1AFDA90(&ptr, &v221[2 * v223], &v221[2 * v223], (__int64)&v221, 1);
  if ( ptr.m128_u64[0] != v73 )
  {
    sub_168B9F0((__int64)&ptr, v15, a6, 0x1166u, 0);
    v75 = sub_1605D30((__int64)&ptr, &v217);
    v76 = v75;
    if ( *(_BYTE *)(v75 + 120) )
    {
      sub_AE9DF0((unsigned __int8 **)(v75 + 32), a4, 9u);
    }
    else if ( *(_BYTE *)(v75 + 132) )
    {
      v174 = sub_168B9E0((_QWORD *)v75);
      v175 = *(_QWORD *)(v76 + 16);
      if ( v175 )
        v175 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v175 + 32LL))(*(_QWORD *)(v76 + 16));
      v220.m128_u64[0] = v175;
      v176 = sub_1587BC0(v174, (__int64 *)&v220, v170, v171, v172, v173);
      sub_AE9DF0((unsigned __int8 **)(*v176 + 32LL * *(unsigned int *)(v76 + 128) + 8), a4, 9u);
    }
    v74 = 1;
    sub_15F7200(&ptr);
    sub_168B9F0((__int64)&ptr, v15, *(_DWORD *)(v73 + 8), 0x71u, 0);
    sub_15F7200(&ptr);
  }
  v77 = v225;
  ptr.m128_u64[1] = 0x400000000LL;
  v78 = 0;
  v79 = 8 * a14;
  ptr.m128_u64[0] = (unsigned __int64)v225;
  v80 = (8 * a14) >> 3;
  if ( v80 > 4 )
  {
    sub_2237220(&ptr, v225, (8 * a14) >> 3, 8);
    v78 = ptr.m128_i32[2];
    v77 = (_DWORD *)(ptr.m128_u64[0] + 8LL * ptr.m128_u32[2]);
  }
  if ( v79 )
  {
    memcpy(v77, a13, v79);
    v78 = ptr.m128_i32[2];
  }
  ptr.m128_i32[2] = v78 + v80;
  if ( *(_DWORD *)(sub_168B6E0((__int64)v15) + 64) > 0x31u && *(_DWORD *)(*(_QWORD *)(*v15 + 232) + 64LL) > 0x31u )
    sub_1B62330((__m128 *)*v15, v15[1], (__int64)&ptr, si128, a8, a9, v81, v82, v83);
  v84 = ptr.m128_u64[0];
  v85 = ptr.m128_u32[2];
  v86 = (_QWORD *)sub_168B6C0((__int64)v15);
  v87 = sub_BB22B0(v86, (__int64)a3, a6, a4, v217, a10, v84, v85, a15);
  v91 = v87;
  if ( a2 )
    sub_17B7670(*v15, v87, (__int64)a2, 1, v89, v90);
  else
    sub_B94AD0(a3, v87, 0, v88, v89, v90);
  *(_BYTE *)(v91 + 29) = (32 * (a11 & 3)) | *(_BYTE *)(v91 + 29) & 0x9F;
  if ( v74 )
    sub_B88650(v91, 1);
  v92 = *(_QWORD *)(a12 + 16);
  sub_B8C080(v92, v91 + 64);
  sub_B90130(v92, v91 + 64, v93, v94, v95, v96);
  sub_B94AD0((__m128i *)(v91 + 64), v92, v97, v98, v99, v100);
  *(_QWORD *)sub_EF5320(*(unsigned int **)(v91 + 56)) = a12;
  if ( (_DWORD *)ptr.m128_u64[0] != v225 )
    free((void *)ptr.m128_u64[0]);
  operator delete(v221, 16LL * v223, 8);
  sub_169D230((__int64)&v226);
  return v91;
}
