__int64 __fastcall sub_A5C060(__int64 a1)
{
  char *v2; // rax
  char *v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 *v6; // rax
  unsigned int v7; // ebp
  __int64 v8; // rdx
  __int64 v9; // r13
  __int64 v10; // r14
  int *v11; // rax
  char v12; // r15
  int *v13; // rdx
  _QWORD *v14; // r13
  _QWORD *v15; // rax
  __int64 v16; // rdx
  _QWORD *v17; // rax
  unsigned int *v18; // rdx
  unsigned int v19; // eax
  __int64 v20; // rcx
  int v21; // eax
  unsigned int *v22; // rsi
  __int64 v23; // rax
  __int64 v24; // r13
  __int64 v25; // r13
  unsigned int v26; // r15d
  bool v27; // al
  void *v28; // rdi
  __int64 v29; // r14
  int v30; // eax
  bool v31; // al
  __int64 v32; // rdx
  __int64 v33; // rax
  char *v34; // rdi
  char *v35; // rsi
  char *i; // rax
  int v37; // edx
  __int64 v38; // rax
  void *v39; // rdi
  __int64 v40; // rax
  int v41; // edx
  __int64 v42; // rdx
  char v43; // si
  __int64 v44; // rdx
  void *v45; // r15
  char v46; // si
  void *v47; // rdi
  void *v48; // rdi
  int v49; // edx
  __int64 v50; // rdx
  char v51; // cl
  __int64 v52; // rax
  bool v53; // r14
  __int64 v54; // rax
  int v55; // edx
  __int64 v56; // rdx
  char v57; // di
  __int64 v58; // rdx
  char v59; // di
  int v60; // edx
  __int64 v61; // rdx
  char v62; // cl
  __int64 v63; // rdx
  char v64; // dl
  __int64 v65; // r13
  void *v66; // rdi
  __int64 v67; // r14
  void *v68; // r14
  void *v69; // r14
  int *v70; // rax
  char v71; // r13
  unsigned int *v72; // rax
  unsigned int v73; // ebx
  int **v74; // rdi
  int v75; // eax
  __int64 v76; // rdx
  unsigned int v77; // r14d
  __int64 v78; // rax
  char *v79; // rsi
  char *v80; // rax
  int v81; // edx
  unsigned int v82; // r13d
  __int64 v83; // rdx
  char *v84; // r9
  int v85; // eax
  char *v86; // rdx
  __int64 v87; // rsi
  __int64 v88; // rsi
  __int64 v89; // rax
  __int64 v90; // r13
  unsigned int v91; // r15d
  _QWORD *v92; // rax
  __m128i v93; // xmm0
  __int64 v94; // r15
  __int64 v95; // r14
  unsigned int v96; // ebp
  unsigned int v97; // r13d
  int *v98; // rbp
  int *v99; // r13
  void *v100; // r12
  int *v101; // rsi
  bool v102; // al
  unsigned int *v103; // r15
  __int64 v104; // rax
  unsigned int *v105; // r13
  __int64 v106; // rbx
  __int64 v107; // rax
  __int64 v108; // r12
  void *v109; // rbp
  __int64 v110; // rsi
  int v112; // edx
  __int64 v113; // rdx
  __int64 v114; // rax
  __int64 v115; // rax
  __int64 v116; // rsi
  __int64 v117; // rsi
  unsigned int v118; // r14d
  unsigned int v119; // edx
  unsigned int *v120; // r15
  __int64 v121; // rcx
  unsigned __int64 v122; // rdx
  __int64 v123; // r8
  __int64 v124; // rax
  unsigned int *v125; // r9
  unsigned __int64 v126; // rsi
  __int64 v127; // rax
  unsigned __int64 v128; // rsi
  __m128i v129; // xmm0
  unsigned __int64 v130; // rax
  __int64 v131; // r9
  unsigned int *v132; // r14
  __int64 *v133; // rbx
  __int64 v134; // r15
  __int64 *v135; // rdi
  __int64 v136; // rdx
  int v137; // edx
  __int64 v138; // rax
  __int64 v139; // rbp
  __int64 v140; // r13
  unsigned int v141; // ebx
  char *v142; // rdi
  char v143; // dl
  __int64 v144; // rax
  char v145; // dl
  __int64 v146; // rax
  unsigned int *v147; // rax
  __int64 v148; // rsi
  __int64 v149; // r10
  _QWORD *v150; // rdx
  char **exception; // r12
  __int64 v152; // [rsp+8h] [rbp-490h]
  unsigned int v153; // [rsp+10h] [rbp-488h]
  __int64 *v154; // [rsp+18h] [rbp-480h]
  __int64 *v155; // [rsp+20h] [rbp-478h]
  unsigned __int64 v156; // [rsp+20h] [rbp-478h]
  unsigned int *v157; // [rsp+20h] [rbp-478h]
  __int64 v158; // [rsp+28h] [rbp-470h]
  _DWORD *v159; // [rsp+28h] [rbp-470h]
  int v160; // [rsp+28h] [rbp-470h]
  char *v161; // [rsp+38h] [rbp-460h]
  char *v162; // [rsp+38h] [rbp-460h]
  char *v163; // [rsp+40h] [rbp-458h]
  unsigned int v164; // [rsp+4Ch] [rbp-44Ch]
  void *v165; // [rsp+58h] [rbp-440h]
  void *v166; // [rsp+58h] [rbp-440h]
  void *v167; // [rsp+58h] [rbp-440h]
  void *v168; // [rsp+58h] [rbp-440h]
  bool v169; // [rsp+58h] [rbp-440h]
  unsigned int v170; // [rsp+58h] [rbp-440h]
  bool v171; // [rsp+60h] [rbp-438h]
  unsigned int v172; // [rsp+60h] [rbp-438h]
  unsigned int v173; // [rsp+64h] [rbp-434h]
  char *v174; // [rsp+68h] [rbp-430h]
  __int64 *v175; // [rsp+78h] [rbp-420h]
  unsigned int v176; // [rsp+88h] [rbp-410h]
  unsigned __int8 v177; // [rsp+8Fh] [rbp-409h]
  int v178[2]; // [rsp+90h] [rbp-408h]
  __int64 v179; // [rsp+98h] [rbp-400h]
  unsigned int *v180; // [rsp+A8h] [rbp-3F0h] BYREF
  __int64 v181; // [rsp+B0h] [rbp-3E8h] BYREF
  __int64 v182; // [rsp+B8h] [rbp-3E0h] BYREF
  __int64 v183; // [rsp+C0h] [rbp-3D8h] BYREF
  __int64 v184; // [rsp+C8h] [rbp-3D0h]
  char *v185; // [rsp+D0h] [rbp-3C8h] BYREF
  unsigned int v186; // [rsp+D8h] [rbp-3C0h]
  __int64 v187; // [rsp+DCh] [rbp-3BCh]
  char *v188; // [rsp+F0h] [rbp-3A8h] BYREF
  unsigned int v189; // [rsp+F8h] [rbp-3A0h]
  __int64 v190; // [rsp+FCh] [rbp-39Ch]
  __int64 v191; // [rsp+110h] [rbp-388h] BYREF
  __int64 v192; // [rsp+118h] [rbp-380h]
  _QWORD v193[2]; // [rsp+120h] [rbp-378h] BYREF
  __int64 v194; // [rsp+130h] [rbp-368h] BYREF
  __int64 v195; // [rsp+138h] [rbp-360h]
  __int64 v196; // [rsp+140h] [rbp-358h] BYREF
  __int64 v197; // [rsp+148h] [rbp-350h]
  __int64 v198; // [rsp+150h] [rbp-348h] BYREF
  __int64 v199; // [rsp+158h] [rbp-340h]
  __int64 v200; // [rsp+160h] [rbp-338h] BYREF
  __int64 v201; // [rsp+168h] [rbp-330h]
  __int128 v202; // [rsp+170h] [rbp-328h] BYREF
  __m128i v203; // [rsp+180h] [rbp-318h] BYREF
  __int64 v204; // [rsp+190h] [rbp-308h]
  __int64 v205; // [rsp+198h] [rbp-300h]
  __int64 v206; // [rsp+1A0h] [rbp-2F8h] BYREF
  __int64 v207; // [rsp+1A8h] [rbp-2F0h]
  __int64 v208; // [rsp+1B0h] [rbp-2E8h]
  __int64 v209; // [rsp+1B8h] [rbp-2E0h]
  __int64 v210; // [rsp+1C0h] [rbp-2D8h]
  __int64 v211; // [rsp+1C8h] [rbp-2D0h]
  void *ptr; // [rsp+1D0h] [rbp-2C8h] BYREF
  __int64 v213; // [rsp+1D8h] [rbp-2C0h]
  int v214; // [rsp+1E0h] [rbp-2B8h] BYREF
  char v215; // [rsp+1E4h] [rbp-2B4h]
  __int64 v216; // [rsp+1E8h] [rbp-2B0h]

  v180 = nullptr;
  v2 = (char *)sub_186B270(0x80u);
  *(_QWORD *)v2 = 0;
  *((_QWORD *)v2 + 2) = 0;
  *((_QWORD *)v2 + 4) = 0;
  *((_QWORD *)v2 + 6) = 0;
  *((_QWORD *)v2 + 8) = 0;
  *((_QWORD *)v2 + 10) = 0;
  *((_QWORD *)v2 + 12) = 0;
  *((_QWORD *)v2 + 14) = 0;
  v163 = v2;
  v187 = 0;
  v3 = (char *)sub_186B270(0x80u);
  *(_QWORD *)v3 = 0;
  v4 = *(_QWORD *)(a1 + 16);
  *((_QWORD *)v3 + 2) = 0;
  *((_QWORD *)v3 + 4) = 0;
  *((_QWORD *)v3 + 6) = 0;
  *((_QWORD *)v3 + 8) = 0;
  *((_QWORD *)v3 + 10) = 0;
  *((_QWORD *)v3 + 12) = 0;
  *((_QWORD *)v3 + 14) = 0;
  v174 = v3;
  v5 = *(_QWORD *)(a1 + 24);
  v190 = 0;
  *(_QWORD *)v178 = v4;
  v179 = v5;
  v177 = sub_8E6FA0(v4);
  if ( v177 )
  {
    sub_186B220(v174);
    v177 = 0;
LABEL_97:
    sub_186B220(v163);
    goto LABEL_98;
  }
  v6 = *(__int64 **)(a1 + 696);
  if ( v6 )
  {
    v175 = &v6[3 * *((unsigned int *)v6 - 1)];
    if ( v6 != v175 )
    {
      v154 = *(__int64 **)(a1 + 696);
      v176 = 8;
      v173 = 8;
      v164 = 1;
      while ( 1 )
      {
        v7 = *((_DWORD *)v154 + 3);
        if ( v7 != -1 )
          break;
LABEL_58:
        v154 += 3;
        if ( v175 == v154 )
          goto LABEL_59;
      }
      v191 = 0;
      v192 = 0;
      v193[0] = 1;
      v193[1] = 0;
      sub_182CBA0(qword_1C7F2C0, v193);
      v8 = *(_QWORD *)(a1 + 744);
      BYTE4(v193[0]) &= ~1u;
      LODWORD(v193[0]) = 1;
      v9 = *(_QWORD *)(v8 + 8LL * v7);
      v10 = *(_QWORD *)(*(_QWORD *)(a1 + 752) + 8LL * v7);
      if ( !v9
        || (v202 = 0u,
            v203 = (__m128i)1uLL,
            v204 = 1,
            v205 = 0,
            v206 = 1,
            v207 = 0,
            sub_182CBA0(qword_1C7F2C0, &v206),
            BYTE4(v206) &= ~1u,
            LODWORD(v206) = 1,
            v208 = 0,
            v209 = 0,
            v210 = 1,
            v211 = 0,
            v11 = sub_9AD4F0(a1, v7),
            sub_9F7AE0((__int64)&ptr, (__int64)v11, (__int64)&v202),
            v12 = sub_33D280((__int64)&ptr, v9 + 16),
            sub_2A6060((__int64)&ptr),
            sub_2A6060((__int64)&v202),
            v13 = (int *)(v9 + 48),
            !v12) )
      {
        if ( !v10
          || (v202 = 0u,
              v203 = (__m128i)1uLL,
              v204 = 1,
              v205 = 0,
              v206 = 1,
              v207 = 0,
              sub_182CBA0(qword_1C7F2C0, &v206),
              BYTE4(v206) &= ~1u,
              LODWORD(v206) = 1,
              v208 = 0,
              v209 = 0,
              v210 = 1,
              v211 = 0,
              v70 = sub_9AD4F0(a1, v7),
              sub_9F7840((__int64)&ptr, (__int64)v70, (__int64)&v202),
              v71 = sub_33D280(v10 + 16, (__int64)&ptr),
              sub_2A6060((__int64)&ptr),
              sub_2A6060((__int64)&v202),
              v13 = (int *)(v10 + 48),
              !v71) )
        {
LABEL_57:
          sub_25A130((char *)&v191);
          goto LABEL_58;
        }
      }
      sub_27B950((__int64)qword_1C7F2C0, (__int64)&v191, v13);
      v14 = nullptr;
      if ( v164 )
      {
        v15 = (_QWORD *)sub_186B270(32LL * v164 + 8);
        v14 = v15 + 1;
        v16 = (__int64)&v15[4 * v164 + 1];
        *v15 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v164), 224).m128i_u64[0];
        v17 = v15 + 1;
        do
        {
          *((_OWORD *)v17 + 1) = 0;
          v17 += 4;
          *((_OWORD *)v17 - 2) = 0;
          *((_DWORD *)v17 - 4) = 1;
          *((_BYTE *)v17 - 28) = 0;
          *((_BYTE *)v17 - 12) = 0;
        }
        while ( v17 != (_QWORD *)v16 );
      }
      v18 = v180;
      if ( v180 )
      {
        v19 = *(v180 - 1);
        if ( v19 == *(v180 - 2) )
        {
          v118 = (3 * v19 + 1) >> 1;
          v119 = 8 * v118 + 8;
          v153 = v118;
          if ( 8 * v19 + 8 >= v119 || v19 >= v118 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_98B3B0((__int64 *)&ptr, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, &ptr);
            sub_233E40((__int64)&ptr);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v120 = v180;
          v121 = sub_186B270(v119);
          v122 = v121 + 8;
          v123 = *(v180 - 1);
          *(_DWORD *)(v121 + 4) = v123;
          v124 = 8 * v123;
          v125 = &v120[2 * v123];
          if ( v120 != v125 )
          {
            v126 = v124 - 8;
            if ( (unsigned __int64)(v124 - 8) <= 8
              || v122 < (unsigned __int64)(v120 + 4) && (unsigned __int64)v120 < v121 + 24 )
            {
              v147 = v120;
              v148 = v121 + 8;
              do
              {
                v149 = *(_QWORD *)v147;
                *(_QWORD *)v147 = 0;
                v147 += 2;
                v148 += 8;
                *(_QWORD *)(v148 - 8) = v149;
              }
              while ( v125 != v147 );
            }
            else
            {
              v127 = 0;
              v128 = (v126 >> 3) + 1;
              do
              {
                v129 = _mm_loadu_si128((const __m128i *)&v120[v127]);
                *(_OWORD *)&v120[v127] = 0;
                *(__m128i *)(v121 + v127 * 4 + 8) = v129;
                v127 += 4;
              }
              while ( v127 != 4 * (v128 >> 1) );
              if ( (v128 & 1) != 0 )
              {
                v130 = 2 * (v128 & 0xFFFFFFFFFFFFFFFELL);
                v131 = *(_QWORD *)&v120[v130];
                *(_QWORD *)&v120[v130] = 0;
                *(_QWORD *)(v121 + v130 * 4 + 8) = v131;
              }
            }
          }
          v132 = &v120[2 * v123];
          if ( (_DWORD)v123 )
          {
            v156 = v121 + 8;
            v133 = (__int64 *)v120;
            v134 = v121;
            do
            {
              v135 = v133++;
              sub_27FC20(v135);
            }
            while ( v133 != (__int64 *)v132 );
            v121 = v134;
            v122 = v156;
            v120 = v180;
          }
          v159 = (_DWORD *)v121;
          v157 = (unsigned int *)v122;
          sub_186B220(v120 - 2);
          v18 = v157;
          v22 = &v157[2 * v159[1]];
          v21 = v159[1] + 1;
          v180 = v157;
          *v159 = v153;
        }
        else
        {
          v20 = v19;
          v21 = v19 + 1;
          v22 = &v180[2 * v20];
        }
      }
      else
      {
        v150 = (_QWORD *)sub_186B270(0x18u);
        *v150 = 2;
        v21 = 1;
        v18 = (unsigned int *)(v150 + 1);
        v180 = v18;
        v22 = v18;
      }
      *(_QWORD *)v22 = v14;
      *(v18 - 1) = v21;
      v181 = 0;
      sub_27FC20(&v181);
      v23 = 0x1FFFFFFFELL;
      if ( v180 )
        v23 = 2LL * (*(v180 - 1) - 1);
      v194 = 1;
      v155 = (__int64 *)&v180[v23];
      v195 = 0;
      v196 = 1;
      v197 = 0;
      sub_182CBA0(qword_1C7F2C0, &v196);
      BYTE4(v196) &= ~1u;
      LODWORD(v196) = 1;
      v24 = *v154;
      if ( *v154 )
      {
        v158 = v24 + 40LL * *(unsigned int *)(v24 - 4);
        if ( v158 != v24 )
        {
          v25 = v24 + 40;
          while ( 1 )
          {
            v26 = *(_DWORD *)(v25 - 8);
            v27 = v26 == -1 || v7 == v26;
            if ( v27 )
            {
              v53 = v158 != v25;
              goto LABEL_38;
            }
            v198 = 0;
            v28 = qword_1C7F2C0;
            v29 = v25 - 40;
            v199 = 0;
            v200 = 1;
            v201 = 0;
            if ( (*(_BYTE *)(v25 - 36) & 1) != 0 )
            {
              sub_182C690(qword_1C7F2C0, &v198, v25 - 40);
              if ( (*(_BYTE *)(v29 + 20) & 1) != 0 )
              {
LABEL_112:
                sub_182C690(v28, &v200, v25 - 24);
                goto LABEL_23;
              }
            }
            else
            {
              LODWORD(v198) = *(_DWORD *)(v25 - 40);
              if ( (*(_BYTE *)(v29 + 20) & 1) != 0 )
                goto LABEL_112;
            }
            v30 = *(_DWORD *)(v25 - 24);
            BYTE4(v200) &= ~1u;
            LODWORD(v200) = v30;
LABEL_23:
            v31 = sub_9B1230(a1, v26);
            if ( v31 )
            {
              v169 = v31;
              sub_3EBE30((__int64)&ptr, (__int64)&v198, *(_QWORD *)(*(_QWORD *)(a1 + 744) + 8LL * v26) + 48LL);
              sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)&v191, (__int64)&ptr, (__int64)&v191);
              sub_25A130((char *)&ptr);
              v31 = v169;
              v53 = v158 != v25;
            }
            else
            {
              if ( (*(_BYTE *)(*(_QWORD *)(a1 + 720) + 4LL * v26 + 3) & 0x40) != 0 )
              {
                v32 = 16LL * v173;
                v33 = 16LL * (v26 & (v173 - 1));
                v34 = &v163[v33];
                v35 = &v163[v32];
                if ( v33 != v32 )
                {
                  for ( i = &v163[v33]; v35 != i; i += 16 )
                  {
                    v37 = *((_DWORD *)i + 1);
                    if ( v37 == 2 )
                    {
                      if ( *(_DWORD *)i == v26 && *((_DWORD *)i + 2) == v26 )
                      {
LABEL_32:
                        v38 = *((unsigned int *)i + 3);
                        v39 = qword_1C7F2C0;
                        LODWORD(ptr) = 0;
                        BYTE4(ptr) &= 0xFCu;
                        v215 &= 0xFCu;
                        v213 = 0;
                        v214 = 1;
                        v216 = 0;
                        if ( (v198 & 0x100000000LL) != 0 )
                        {
                          v172 = v38;
                          sub_182C690(qword_1C7F2C0, &ptr, &v198);
                          v38 = v172;
                        }
                        else
                        {
                          LODWORD(ptr) = v198;
                        }
                        if ( (v200 & 0x100000000LL) != 0 )
                        {
                          v170 = v38;
                          sub_182C690(v39, &v214, &v200);
                          v38 = v170;
                        }
                        else
                        {
                          v215 &= ~1u;
                          v214 = v200;
                        }
                        v40 = *v155 + 32 * v38;
                        v41 = *(_DWORD *)v40;
                        *(_DWORD *)v40 = (_DWORD)ptr;
                        LODWORD(ptr) = v41;
                        v42 = *(_QWORD *)(v40 + 8);
                        *(_QWORD *)(v40 + 8) = v213;
                        v213 = v42;
                        LOBYTE(v42) = *(_BYTE *)(v40 + 4);
                        *(_BYTE *)(v40 + 4) = BYTE4(ptr) & 2 | v42 & 0xFD;
                        BYTE4(ptr) = v42 & 2 | BYTE4(ptr) & 0xFD;
                        v43 = *(_BYTE *)(v40 + 4);
                        *(_BYTE *)(v40 + 4) = BYTE4(ptr) & 1 | v43 & 0xFE;
                        BYTE4(ptr) = v43 & 1 | BYTE4(ptr) & 0xFE;
                        LODWORD(v42) = *(_DWORD *)(v40 + 16);
                        *(_DWORD *)(v40 + 16) = v214;
                        v214 = v42;
                        v44 = *(_QWORD *)(v40 + 24);
                        *(_QWORD *)(v40 + 24) = v216;
                        v216 = v44;
                        LOBYTE(v44) = *(_BYTE *)(v40 + 20);
                        *(_BYTE *)(v40 + 20) = v215 & 2 | v44 & 0xFD;
                        v215 = v44 & 2 | v215 & 0xFD;
                        v45 = qword_1C7F2C0;
                        v46 = *(_BYTE *)(v40 + 20) & 1;
                        v47 = qword_1C7F2C0;
                        *(_BYTE *)(v40 + 20) = v215 & 1 | *(_BYTE *)(v40 + 20) & 0xFE;
                        v215 = v46 | v215 & 0xFE;
                        sub_182CBA0(v47, &ptr);
                        sub_182CBA0(v45, &v214);
                        goto LABEL_37;
                      }
                    }
                    else if ( !v37 )
                    {
                      goto LABEL_121;
                    }
                  }
                }
                i = v163;
                if ( v34 == v163 )
                {
LABEL_121:
                  BYTE4(ptr) &= 0xFCu;
                  v215 &= 0xFCu;
                  LODWORD(ptr) = 0;
                  v213 = 0;
                  v214 = 1;
                  v216 = 0;
                  sub_27B950((__int64)qword_1C7F2C0, (__int64)&ptr, (int *)&v198);
                  v113 = *v155;
                  if ( !*v155 || (v114 = *(unsigned int *)(v113 - 4), (_DWORD)v114 == *(_DWORD *)(v113 - 8)) )
                  {
                    sub_53D790(v155);
                    v113 = *v155;
                    v114 = *(unsigned int *)(*v155 - 4);
                  }
                  v115 = v113 + 32 * v114;
                  *(_DWORD *)v115 = (_DWORD)ptr;
                  *(_BYTE *)(v115 + 4) = BYTE4(ptr) & 3 | *(_BYTE *)(v115 + 4) & 0xFC;
                  v116 = v213;
                  v213 = 0;
                  *(_QWORD *)(v115 + 8) = v116;
                  *(_DWORD *)(v115 + 16) = v214;
                  *(_BYTE *)(v115 + 20) = v215 & 3 | *(_BYTE *)(v115 + 20) & 0xFC;
                  v117 = v216;
                  v216 = 0;
                  *(_QWORD *)(v115 + 24) = v117;
                  ++*(_DWORD *)(v113 - 4);
                  sub_25A130((char *)&ptr);
                  v185 = v163;
                  v183 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v26), _mm_cvtsi32_si128(v164)).m128i_u64[0];
                  v186 = v173;
                  sub_83C760((__int64)&v185, (__int32 *)&v183);
                  v163 = v185;
                  v173 = v186;
                  ptr = (void *)__PAIR64__(v26, v164);
                  v188 = v174;
                  v189 = v176;
                  sub_A2A440((__int64)&v188, (__int32 *)&ptr);
                  ++v164;
                  v174 = v188;
                  v176 = v189;
LABEL_37:
                  sub_992B90((__int64)&v202, (__int64)&v198);
                  v48 = qword_1C7F2C0;
                  BYTE4(ptr) &= 0xFCu;
                  v215 &= 0xFCu;
                  LODWORD(ptr) = 0;
                  v213 = 0;
                  v214 = 1;
                  v216 = 0;
                  sub_1836B00(qword_1C7F2C0, &v202, &v194, &ptr);
                  sub_182CBA0(v48, &v214);
                  v49 = (int)ptr;
                  LODWORD(ptr) = v194;
                  LODWORD(v194) = v49;
                  v50 = v213;
                  v213 = v195;
                  v195 = v50;
                  v51 = BYTE4(ptr) & 1;
                  LOBYTE(v50) = BYTE4(v194) & 0xFC | BYTE4(ptr) & 2;
                  v165 = qword_1C7F2C0;
                  BYTE4(ptr) = BYTE4(v194) & 1 | BYTE4(ptr) & 0xFC | BYTE4(v194) & 2;
                  BYTE4(v194) = v51 | v50;
                  v214 = v196;
                  v52 = v197;
                  v197 = v216;
                  v216 = v52;
                  LODWORD(v196) = 1;
                  LOBYTE(v50) = BYTE4(v196) & 0xFC | v215 & 2;
                  v215 = BYTE4(v196) & 1 | BYTE4(v196) & 2 | v215 & 0xFC;
                  BYTE4(v196) = v50;
                  sub_182CBA0(qword_1C7F2C0, &ptr);
                  sub_182CBA0(v165, &v214);
                  v166 = qword_1C7F2C0;
                  sub_182CBA0(qword_1C7F2C0, &v202);
                  sub_182CBA0(v166, &v203);
                  v167 = qword_1C7F2C0;
                  sub_182CBA0(qword_1C7F2C0, &v198);
                  sub_182CBA0(v167, &v200);
                  v27 = 1;
                  v53 = v158 != v25;
                  goto LABEL_38;
                }
                while ( 2 )
                {
                  while ( 1 )
                  {
                    v112 = *((_DWORD *)i + 1);
                    if ( v112 != 2 )
                      break;
                    if ( *(_DWORD *)i != v26 )
                      goto LABEL_116;
                    if ( *((_DWORD *)i + 2) == v26 )
                      goto LABEL_32;
                    i += 16;
                    if ( v34 == i )
                      goto LABEL_121;
                  }
                  if ( !v112 )
                    goto LABEL_121;
LABEL_116:
                  i += 16;
                  if ( v34 == i )
                    goto LABEL_121;
                  continue;
                }
              }
              v53 = 0;
            }
            v171 = v31;
            v168 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, &v198);
            sub_182CBA0(v168, &v200);
            v27 = v171;
LABEL_38:
            v25 += 40;
            if ( !v53 )
            {
              if ( v27 )
                break;
              v136 = 0x1FFFFFFFELL;
              if ( v180 )
                v136 = 2LL * (*(v180 - 1) - 1);
              sub_27FC20((__int64 *)&v180[v136]);
              --*(v180 - 1);
              sub_25A130((char *)&v194);
              goto LABEL_57;
            }
          }
        }
      }
      LODWORD(ptr) = 0;
      BYTE4(ptr) &= 0xFCu;
      v215 &= 0xFCu;
      v213 = 0;
      v214 = 1;
      v216 = 0;
      sub_27B950((__int64)qword_1C7F2C0, (__int64)&ptr, (int *)&v191);
      v54 = *v155;
      v55 = *(_DWORD *)*v155;
      *(_DWORD *)v54 = (_DWORD)ptr;
      LODWORD(ptr) = v55;
      v56 = *(_QWORD *)(v54 + 8);
      *(_QWORD *)(v54 + 8) = v213;
      v213 = v56;
      LOBYTE(v56) = *(_BYTE *)(v54 + 4);
      *(_BYTE *)(v54 + 4) = BYTE4(ptr) & 2 | v56 & 0xFD;
      BYTE4(ptr) = v56 & 2 | BYTE4(ptr) & 0xFD;
      v57 = *(_BYTE *)(v54 + 4);
      *(_BYTE *)(v54 + 4) = BYTE4(ptr) & 1 | v57 & 0xFE;
      BYTE4(ptr) = v57 & 1 | BYTE4(ptr) & 0xFE;
      LODWORD(v56) = *(_DWORD *)(v54 + 16);
      *(_DWORD *)(v54 + 16) = v214;
      v214 = v56;
      v58 = *(_QWORD *)(v54 + 24);
      *(_QWORD *)(v54 + 24) = v216;
      v216 = v58;
      LOBYTE(v58) = *(_BYTE *)(v54 + 20);
      *(_BYTE *)(v54 + 20) = v215 & 2 | v58 & 0xFD;
      v215 = v58 & 2 | v215 & 0xFD;
      v59 = *(_BYTE *)(v54 + 20) & 1;
      *(_BYTE *)(v54 + 20) = v215 & 1 | *(_BYTE *)(v54 + 20) & 0xFE;
      v215 = v59 | v215 & 0xFE;
      sub_25A130((char *)&ptr);
      sub_992B90((__int64)&v202, (__int64)&v191);
      sub_992D20((__int64)&ptr, (__int64)&v202, (__int64)&v194);
      v60 = (int)ptr;
      LODWORD(ptr) = v194;
      LODWORD(v194) = v60;
      v61 = v213;
      v213 = v195;
      v195 = v61;
      v62 = BYTE4(ptr) & 1;
      LOBYTE(v61) = BYTE4(v194) & 0xFC | BYTE4(ptr) & 2;
      BYTE4(ptr) = BYTE4(v194) & 1 | BYTE4(ptr) & 0xFC | BYTE4(v194) & 2;
      BYTE4(v194) = v62 | v61;
      LODWORD(v61) = v214;
      v214 = v196;
      LODWORD(v196) = v61;
      v63 = v216;
      v216 = v197;
      v197 = v63;
      LOBYTE(v63) = v215 & 1 | BYTE4(v196) & 0xFC | v215 & 2;
      v215 = BYTE4(v196) & 1 | v215 & 0xFC | BYTE4(v196) & 2;
      BYTE4(v196) = v63;
      sub_25A130((char *)&ptr);
      v64 = ~BYTE4(v194);
      if ( (v194 & 0x100000000LL) == 0 && (_DWORD)v194 == 1 && (v196 & 0x100000000LL) == 0 && (_DWORD)v196 == 1 || !v164 )
      {
LABEL_132:
        sub_25A130((char *)&v202);
        sub_25A130((char *)&v194);
        sub_25A130((char *)&v191);
        goto LABEL_58;
      }
      v65 = 0;
      while ( 1 )
      {
        BYTE4(ptr) &= 0xFCu;
        v69 = qword_1C7F2C0;
        v215 &= 0xFCu;
        LODWORD(ptr) = 0;
        v213 = 0;
        v214 = 1;
        v216 = 0;
        if ( (v64 & 1) != 0 )
        {
          LODWORD(ptr) = v194;
          if ( (v196 & 0x100000000LL) != 0 )
            goto LABEL_53;
        }
        else
        {
          sub_182C690(qword_1C7F2C0, &ptr, &v194);
          if ( (v196 & 0x100000000LL) != 0 )
          {
LABEL_53:
            sub_182C690(v69, &v214, &v196);
            goto LABEL_46;
          }
        }
        v215 &= ~1u;
        v214 = v196;
LABEL_46:
        v66 = qword_1C7F2C0;
        v67 = v65 + *v155;
        if ( (*(_BYTE *)(v67 + 20) & 1) != 0 || *(_DWORD *)(v67 + 16) != 1 || (v215 & 1) != 0 || v214 != 1 )
        {
          sub_1848FF0(qword_1C7F2C0, v65 + *v155, &ptr);
        }
        else
        {
          sub_1831650(qword_1C7F2C0, v67, &ptr);
          sub_182CBA0(v66, v67 + 16);
          *(_BYTE *)(v67 + 20) &= ~1u;
          *(_DWORD *)(v67 + 16) = 1;
        }
        v68 = qword_1C7F2C0;
        v65 += 32;
        sub_182CBA0(qword_1C7F2C0, &ptr);
        sub_182CBA0(v68, &v214);
        if ( 32LL * v164 == v65 )
          goto LABEL_132;
        v64 = ~BYTE4(v194);
      }
    }
  }
  v176 = 8;
  v164 = 1;
LABEL_59:
  v72 = v180;
  v73 = 0;
  if ( v180 )
  {
    while ( v73 < *(v72 - 1) )
    {
      v74 = (int **)&v72[2 * v73];
      v75 = *v74 ? *(*v74 - 1) : 0;
      if ( v75 == v164 )
        break;
      sub_9E8400(v74, v164);
      v72 = v180;
      ++v73;
    }
  }
  v182 = 0;
  if ( !(unsigned __int8)sub_950E30(a1 + 488, &v180, &v182) )
  {
    v76 = v182;
    ptr = &v214;
    v213 = 0x1000000000LL;
    if ( !v182 )
    {
      v177 = 0;
      goto LABEL_94;
    }
    v77 = 1;
    v152 = 16LL * v176;
    while ( 1 )
    {
      if ( v77 >= *(_DWORD *)(v76 - 4) )
        goto LABEL_81;
      v198 = 0;
      v199 = 0;
      v200 = 1;
      v201 = 0;
      sub_27B950((__int64)qword_1C7F2C0, (__int64)&v198, (int *)(32LL * v77 + v76));
      if ( !(_DWORD)v198 )
        goto LABEL_80;
      v78 = 16LL * (v77 & (v176 - 1));
      v79 = &v174[v78];
      if ( v78 == v152 )
      {
LABEL_154:
        v80 = v174;
        if ( v174 == v79 )
        {
LABEL_162:
          sub_1872CE0("");
          sub_1873130(114, 365);
        }
        while ( 2 )
        {
          while ( 1 )
          {
            v137 = *((_DWORD *)v80 + 1);
            if ( v137 != 2 )
              break;
            if ( v77 != *(_DWORD *)v80 )
              goto LABEL_157;
            if ( v77 == *((_DWORD *)v80 + 2) )
              goto LABEL_77;
            v80 += 16;
            if ( v79 == v80 )
              goto LABEL_162;
          }
          if ( !v137 )
            goto LABEL_162;
LABEL_157:
          v80 += 16;
          if ( v79 == v80 )
            goto LABEL_162;
          continue;
        }
      }
      v80 = &v174[v78];
      while ( 1 )
      {
        v81 = *((_DWORD *)v80 + 1);
        if ( v81 != 2 )
        {
          if ( !v81 )
            goto LABEL_162;
          goto LABEL_73;
        }
        if ( v77 == *(_DWORD *)v80 && v77 == *((_DWORD *)v80 + 2) )
          break;
LABEL_73:
        v80 += 16;
        if ( &v174[v152] == v80 )
          goto LABEL_154;
      }
LABEL_77:
      v82 = *((_DWORD *)v80 + 3);
      v202 = 0u;
      v203 = (__m128i)1uLL;
      sub_27B950((__int64)qword_1C7F2C0, (__int64)&v202, (int *)&v198);
      v83 = (unsigned int)v213;
      v204 = v82;
      if ( (unsigned int)v213 >= HIDWORD(v213) )
      {
        v160 = 2 * HIDWORD(v213);
        v138 = sub_186B270(40LL * (unsigned int)(2 * HIDWORD(v213)));
        v83 = (unsigned int)v213;
        v84 = (char *)v138;
        if ( (_DWORD)v213 )
        {
          v161 = (char *)v138;
          v139 = v138;
          v140 = 0;
          v141 = 0;
          do
          {
            ++v141;
            v139 += 40;
            v142 = (char *)ptr + v140;
            v140 += 40;
            v143 = v142[4];
            *(_DWORD *)(v139 - 40) = *(_DWORD *)v142;
            *(_BYTE *)(v139 - 36) = v143 & 3 | *(_BYTE *)(v139 - 36) & 0xFC;
            v144 = *((_QWORD *)v142 + 1);
            *((_QWORD *)v142 + 1) = 0;
            *(_QWORD *)(v139 - 32) = v144;
            v145 = v142[20];
            *(_DWORD *)(v139 - 24) = *((_DWORD *)v142 + 4);
            *(_BYTE *)(v139 - 20) = v145 & 3 | *(_BYTE *)(v139 - 20) & 0xFC;
            v146 = *((_QWORD *)v142 + 3);
            *((_QWORD *)v142 + 3) = 0;
            *(_QWORD *)(v139 - 16) = v146;
            *(_DWORD *)(v139 - 8) = *((_DWORD *)v142 + 8);
            *(_DWORD *)(v139 - 4) = *((_DWORD *)v142 + 9);
            sub_25A130(v142);
            v83 = (unsigned int)v213;
          }
          while ( v141 < (unsigned int)v213 );
          v84 = v161;
        }
        if ( ptr != &v214 && ptr )
        {
          v162 = v84;
          sub_186B220(ptr);
          v83 = (unsigned int)v213;
          v84 = v162;
        }
        ptr = v84;
        v82 = v204;
        HIDWORD(v213) = v160;
      }
      else
      {
        v84 = (char *)ptr;
      }
      v85 = HIDWORD(v204);
      v86 = &v84[40 * v83];
      *(_DWORD *)v86 = v202;
      v86[4] = BYTE4(v202) & 3 | v86[4] & 0xFC;
      v87 = *((_QWORD *)&v202 + 1);
      *((_QWORD *)&v202 + 1) = 0;
      *((_QWORD *)v86 + 1) = v87;
      *((_DWORD *)v86 + 4) = v203.m128i_i32[0];
      v86[20] = v203.m128i_i8[4] & 3 | v86[20] & 0xFC;
      v88 = v203.m128i_i64[1];
      v203.m128i_i64[1] = 0;
      *((_QWORD *)v86 + 3) = v88;
      *((_DWORD *)v86 + 8) = v82;
      *((_DWORD *)v86 + 9) = v85;
      LODWORD(v213) = v213 + 1;
      sub_25A130((char *)&v202);
LABEL_80:
      ++v77;
      sub_25A130((char *)&v198);
      v76 = v182;
      if ( !v182 )
      {
LABEL_81:
        if ( (_DWORD)v213 )
        {
          v89 = *(_QWORD *)(a1 + 24);
          v183 = 0;
          v191 = 0;
          v184 = v89;
          v192 = v89;
          v198 = 1;
          v199 = 0;
          v200 = 1;
          v201 = 0;
          sub_182CBA0(qword_1C7F2C0, &v200);
          BYTE4(v200) &= ~1u;
          LODWORD(v200) = 1;
          sub_3EBD70((__int64)&v194, v182);
          sub_27B340((__int64)&v202, (__int64)&v194, (int *)&v198);
          sub_9D1060((_QWORD *)a1, v213, (int *)ptr, (int)&v202, &v183);
          v90 = 0;
          sub_25A130((char *)&v202);
          v91 = 0;
          sub_25A130((char *)&v194);
          sub_25A130((char *)&v198);
          if ( (_DWORD)v213 )
          {
            do
            {
              sub_1831620(qword_1C7F2C0, (char *)ptr + v90);
              ++v91;
              v90 += 40;
            }
            while ( v91 < (unsigned int)v213 );
          }
          v198 = 1;
          v199 = 0;
          v200 = 1;
          v201 = 0;
          sub_182CBA0(qword_1C7F2C0, &v200);
          LODWORD(v200) = 1;
          BYTE4(v200) &= ~1u;
          sub_27B340((__int64)&v202, v182, (int *)&v198);
          sub_9D1060((_QWORD *)a1, v213, (int *)ptr, (int)&v202, &v191);
          sub_25A130((char *)&v202);
          sub_25A130((char *)&v198);
          v203 = 0u;
          v202 = 0;
          v92 = (_QWORD *)operator new(0x18u);
          v92[1] = &v183;
          v92[2] = &v191;
          *(_QWORD *)&v202 = v92;
          v93 = _mm_loadl_epi64((const __m128i *)&off_1C56560);
          *v92 = v179;
          v198 = 0;
          v203 = _mm_unpacklo_epi64(v93, (__m128i)(unsigned __int64)sub_98DFC0);
          sub_9935A0(&v198, a1, (__int64)&v202);
          v94 = *(_QWORD *)v178;
          v95 = v198;
          sub_B6F780(v178[0]);
          sub_B6F780(v178[0]);
          v96 = sub_B645B0(*(_QWORD *)v178, v183);
          v97 = sub_B645B0(*(_QWORD *)v178, v191);
          (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v94 + 7488) + 48LL))(*(_QWORD *)(v94 + 7488), v183);
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v94 + 7488) + 64LL))(*(_QWORD *)(v94 + 7488));
          (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v94 + 7488) + 48LL))(*(_QWORD *)(v94 + 7488), v191);
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v94 + 7488) + 64LL))(*(_QWORD *)(v94 + 7488));
          sub_B6A470(*(_QWORD *)v178, *(unsigned int *)(a1 + 8), v96, v97, 0, 0);
          if ( *(_QWORD *)(v95 + 912) )
            std::operator<<<std::char_traits<char>>();
          if ( v203.m128i_i64[0] )
            ((void (__fastcall *)(__int128 *, __int128 *, __int64))v203.m128i_i64[0])(&v202, &v202, 3);
          sub_98B270(v191, v192);
          sub_98B270(v183, v184);
          v98 = (int *)ptr;
          v99 = (int *)((char *)ptr + 40 * (unsigned int)v213);
          if ( ptr != v99 )
          {
            do
            {
              v100 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v98);
              v101 = v98 + 4;
              v98 += 10;
              sub_182CBA0(v100, v101);
            }
            while ( v99 != v98 );
            v98 = (int *)ptr;
          }
          v177 = 1;
          v102 = v98 == &v214 || v98 == nullptr;
        }
        else
        {
          v98 = (int *)ptr;
          v177 = 0;
          v102 = ptr == &v214 || ptr == nullptr;
        }
        if ( !v102 )
          sub_186B220(v98);
        break;
      }
    }
  }
LABEL_94:
  sub_27FC20(&v182);
  if ( v174 )
    sub_186B220(v174);
  if ( v163 )
    goto LABEL_97;
LABEL_98:
  v103 = v180;
  if ( v180 )
  {
    v104 = *(v180 - 1);
    if ( (_DWORD)v104 )
    {
      v105 = &v180[2 * v104];
      do
      {
        v106 = *(_QWORD *)v103;
        if ( *(_QWORD *)v103 )
        {
          v107 = *(unsigned int *)(v106 - 4);
          if ( (_DWORD)v107 )
          {
            v108 = v106 + 32 * v107;
            do
            {
              v109 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v106);
              v110 = v106 + 16;
              v106 += 32;
              sub_182CBA0(v109, v110);
            }
            while ( v108 != v106 );
            v106 = *(_QWORD *)v103;
          }
          sub_186B220((void *)(v106 - 8));
        }
        v103 += 2;
      }
      while ( v105 != v103 );
      v103 = v180;
    }
    sub_186B220(v103 - 2);
  }
  return v177;
}

