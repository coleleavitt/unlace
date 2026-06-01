__int64 __fastcall sub_BA21C0(__int64 a1, __int64 a2, __int64 a3, __m128 a4, __m128 a5, __m128 a6)
{
  char **v6; // rbp
  char **v7; // rbp
  char **exception; // rbp
  char **v9; // rbp
  __int64 v10; // rbp
  unsigned int v12; // ecx
  __int64 result; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  unsigned __int64 v16; // r14
  unsigned int v17; // r13d
  unsigned int v18; // r12d
  unsigned int v19; // eax
  unsigned int v20; // ecx
  unsigned int v21; // r15d
  size_t v22; // rdi
  unsigned int *v23; // rax
  __int64 *v24; // r12
  unsigned int *v25; // rbp
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 *v28; // r10
  unsigned __int64 v29; // rsi
  __int64 *v30; // r9
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // rsi
  unsigned __int64 v33; // rdx
  __int64 v34; // r9
  __int64 *v35; // r13
  void *v36; // rdi
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // r12
  __int64 v42; // r13
  __int64 v43; // rsi
  unsigned int v44; // r9d
  __int64 v45; // rax
  _BYTE *v46; // r15
  __int64 v47; // r14
  __int64 v48; // r12
  unsigned int v49; // eax
  __int64 v50; // rdx
  unsigned int *v51; // r13
  char *v52; // rdi
  __int64 v53; // rdx
  __int64 v54; // r8
  _QWORD *v55; // r13
  unsigned int v56; // eax
  __int64 v57; // rdx
  int v58; // eax
  __int64 *v59; // rdx
  __int64 v60; // r14
  __int64 v61; // rcx
  _QWORD *v62; // r15
  int v63; // edx
  unsigned int v64; // r12d
  __int64 v65; // r13
  __int64 v66; // r12
  __int64 v67; // r13
  __int64 v68; // r12
  int v69; // edx
  __int64 v70; // rax
  _QWORD *v71; // r15
  _QWORD *v72; // rax
  _DWORD *v73; // rsi
  _QWORD *v74; // r15
  _QWORD *v75; // rax
  unsigned int v76; // eax
  __int64 v77; // r12
  unsigned int v78; // eax
  __int64 v79; // rdx
  __int64 v80; // r13
  __int64 v81; // r14
  _QWORD *v82; // rax
  _QWORD *v83; // rdx
  _QWORD *v84; // r12
  unsigned int v85; // eax
  __int64 v86; // rsi
  int v87; // eax
  _QWORD *v88; // rsi
  __int64 v89; // r8
  int v90; // esi
  unsigned int v91; // r9d
  _QWORD *v92; // r12
  __int32 v93; // eax
  __int64 v94; // r8
  _QWORD *v95; // r13
  int v96; // edi
  __int64 v97; // rax
  _QWORD *v98; // r9
  _QWORD *v99; // rax
  _QWORD *v100; // r8
  __int64 v101; // rdx
  __int64 v102; // rax
  __int64 v103; // rdx
  unsigned int *v104; // rsi
  __int64 v105; // r15
  char *v106; // rcx
  __int64 v107; // rdx
  __int64 v108; // r12
  char *v109; // rdi
  __int64 v110; // rdx
  __int64 v111; // r8
  unsigned int v112; // r15d
  size_t v113; // rsi
  unsigned int *v114; // rax
  __int64 v115; // rsi
  __int64 v116; // r13
  _QWORD *v117; // rax
  __int32 v118; // r9d
  char *v119; // r15
  char *v120; // r10
  __int64 v121; // rdx
  _QWORD *v122; // rsi
  _QWORD *v123; // rdx
  __int64 v124; // rsi
  unsigned int v125; // r12d
  unsigned int v126; // edx
  __int64 v127; // rax
  __int64 v128; // rcx
  _DWORD *v129; // r14
  __int64 v130; // rdx
  unsigned __int64 v131; // rax
  __int64 v132; // rdx
  _QWORD *v133; // rdi
  __int64 v134; // r15
  unsigned int v135; // edx
  size_t v136; // rsi
  unsigned int v137; // ebp
  unsigned int *v138; // rax
  unsigned int v139; // eax
  __int64 v140; // r13
  __int64 v141; // rdx
  _QWORD *v142; // rdi
  __int64 v143; // rax
  __int64 v144; // xmm1_8
  int v145; // r15d
  __m128 *v146; // rax
  __int64 v147; // r13
  __int64 v148; // roff
  __m128i v149; // xmm0
  __int64 v150; // rdi
  __int64 v151; // rax
  __int64 v152; // rcx
  __int64 v153; // r8
  __int64 v154; // r9
  _QWORD *v155; // r13
  _QWORD *v156; // rax
  _QWORD *v157; // rax
  __int64 v158; // rdx
  __int64 v159; // r9
  __int64 v160; // rdx
  __int64 v161; // r9
  _DWORD *v162; // rdx
  __int64 v163; // rax
  _QWORD *v164; // rax
  _QWORD *v165; // rax
  __int64 v166; // rdx
  __int64 v167; // rax
  __int64 *v168; // r15
  __int64 *v169; // r12
  __int64 v170; // rax
  _QWORD *v171; // r13
  unsigned int v172; // [rsp+0h] [rbp-128h]
  __int64 v173; // [rsp+0h] [rbp-128h]
  unsigned int v174; // [rsp+0h] [rbp-128h]
  int v175; // [rsp+0h] [rbp-128h]
  unsigned int v176; // [rsp+0h] [rbp-128h]
  size_t v177; // [rsp+0h] [rbp-128h]
  __int32 v178; // [rsp+0h] [rbp-128h]
  unsigned int v179; // [rsp+8h] [rbp-120h]
  unsigned int v181; // [rsp+18h] [rbp-110h]
  __int64 v182; // [rsp+18h] [rbp-110h]
  char *v183; // [rsp+18h] [rbp-110h]
  __int32 v184; // [rsp+18h] [rbp-110h]
  __int64 v185; // [rsp+18h] [rbp-110h]
  unsigned int v186; // [rsp+20h] [rbp-108h]
  __int64 v187; // [rsp+20h] [rbp-108h]
  __int64 v188; // [rsp+20h] [rbp-108h]
  __int64 v189; // [rsp+28h] [rbp-100h]
  __int32 v190; // [rsp+28h] [rbp-100h]
  __m128i v191; // [rsp+30h] [rbp-F8h] BYREF
  char *v192[4]; // [rsp+40h] [rbp-E8h] BYREF
  void *ptr; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v194; // [rsp+68h] [rbp-C0h]
  _BYTE v195[184]; // [rsp+70h] [rbp-B8h] BYREF

  v10 = a3;
  v12 = *(_DWORD *)(a3 + 24);
  v186 = v12;
  if ( !v12 )
  {
LABEL_6:
    v16 = *(_QWORD *)(a1 + 98920);
    v17 = *(_DWORD *)(a2 + 20);
    if ( v16 )
    {
      v18 = *(_DWORD *)(v16 - 4);
      if ( v17 < v18 )
        goto LABEL_29;
      v172 = v17 + 1;
      if ( v18 >= v17 + 1 )
      {
        v166 = 8LL * (v17 + 1);
        v167 = 8LL * v18;
        v168 = (__int64 *)(v16 + v166);
        v169 = (__int64 *)(v16 + v167);
        if ( v166 != v167 )
        {
          do
          {
            while ( 1 )
            {
              v170 = *v168;
              if ( !*v168 )
                break;
              ++v168;
              sub_186B220((void *)(v170 - 8));
              if ( v169 == v168 )
                goto LABEL_183;
            }
            ++v168;
          }
          while ( v169 != v168 );
LABEL_183:
          v16 = *(_QWORD *)(a1 + 98920);
        }
        *(_DWORD *)(v16 - 4) = v172;
LABEL_29:
        if ( !v17 )
        {
LABEL_34:
          v41 = 0;
          sub_180C1C0(a1 + 568);
          v42 = *(unsigned int *)(v10 + 24);
          if ( !(_DWORD)v42 )
            goto LABEL_54;
          do
          {
            v43 = *(_QWORD *)(v10 + 8 * v41 + 32);
            v44 = v41++;
            sub_BA16E0((_QWORD *)a1, v43, 0, a2, v10, v44, a4, a5, a6);
          }
          while ( v41 != v42 );
          v45 = *(unsigned int *)(v10 + 24);
          v46 = v195;
          ptr = v195;
          v194 = 0x1000000000LL;
          if ( !(_DWORD)v45 )
            goto LABEL_54;
          v47 = v10;
          LODWORD(v48) = 16;
          v173 = v10 + 8 * v45;
          v49 = 0;
          do
          {
            v51 = *(unsigned int **)(v47 + 32);
            if ( v49 >= (unsigned int)v48 )
            {
              v48 = (unsigned int)(2 * v48);
              v46 = (_BYTE *)sub_186B270(8 * v48);
              v49 = v194;
              v52 = (char *)ptr;
              if ( (_DWORD)v194 )
              {
                if ( (unsigned int)(v194 - 1) <= 2 || v46 == (char *)ptr + 8 )
                {
                  v160 = 0;
                  v161 = 8LL * (unsigned int)v194;
                  do
                  {
                    *(_QWORD *)&v46[v160] = *(_QWORD *)&v52[v160];
                    v160 += 8;
                  }
                  while ( v161 != v160 );
                }
                else
                {
                  v53 = 0;
                  v54 = 16LL * ((unsigned int)v194 >> 1);
                  do
                  {
                    a4 = (__m128)_mm_loadu_si128((const __m128i *)&v52[v53]);
                    *(__m128 *)&v46[v53] = a4;
                    v53 += 16;
                  }
                  while ( v53 != v54 );
                  if ( (v49 & 1) != 0 )
                    *(_QWORD *)&v46[8 * (v49 & 0xFFFFFFFE)] = *(_QWORD *)&v52[8 * (v49 & 0xFFFFFFFE)];
                }
              }
              if ( v52 != v195 && v52 )
              {
                sub_186B220(v52);
                v49 = v194;
              }
              ptr = v46;
              HIDWORD(v194) = v48;
            }
            v50 = v49++;
            v47 += 8;
            *(_QWORD *)&v46[8 * v50] = v51;
            LODWORD(v194) = v49;
          }
          while ( v173 != v47 );
          if ( !v49 )
            goto LABEL_52;
          v76 = v49 - 1;
LABEL_69:
          LODWORD(v194) = v76;
          if ( (*((_BYTE *)v51 + 30) & 1) == 0 )
          {
            v103 = v51[6];
            if ( !(_DWORD)v103 )
              goto LABEL_98;
            v104 = &v51[2 * v103];
            while ( 1 )
            {
              v105 = *((_QWORD *)v51 + 4);
              if ( *(_WORD *)(v105 + 4) )
              {
                v51 += 2;
                if ( v51 == v104 )
                  goto LABEL_97;
              }
              else
              {
                if ( v76 >= HIDWORD(v194) )
                {
                  v108 = (unsigned int)(2 * HIDWORD(v194));
                  v106 = (char *)sub_186B270(8 * v108);
                  v76 = v194;
                  v109 = (char *)ptr;
                  if ( (_DWORD)v194 )
                  {
                    if ( (unsigned int)(v194 - 1) <= 2 || v106 == (char *)ptr + 8 )
                    {
                      v158 = 0;
                      v159 = 8LL * (unsigned int)v194;
                      do
                      {
                        *(_QWORD *)&v106[v158] = *(_QWORD *)&v109[v158];
                        v158 += 8;
                      }
                      while ( v159 != v158 );
                    }
                    else
                    {
                      v110 = 0;
                      v111 = 16LL * ((unsigned int)v194 >> 1);
                      do
                      {
                        a4 = (__m128)_mm_loadu_si128((const __m128i *)&v109[v110]);
                        *(__m128 *)&v106[v110] = a4;
                        v110 += 16;
                      }
                      while ( v111 != v110 );
                      if ( (v76 & 1) != 0 )
                        *(_QWORD *)&v106[8 * (v76 & 0xFFFFFFFE)] = *(_QWORD *)&v109[8 * (v76 & 0xFFFFFFFE)];
                    }
                  }
                  if ( v109 != v195 && v109 )
                  {
                    v183 = v106;
                    sub_186B220(v109);
                    v76 = v194;
                    v106 = v183;
                  }
                  ptr = v106;
                  HIDWORD(v194) = v108;
                }
                else
                {
                  v106 = (char *)ptr;
                }
                v107 = v76;
                v51 += 2;
                ++v76;
                *(_QWORD *)&v106[8 * v107] = v105;
                LODWORD(v194) = v76;
                if ( v51 == v104 )
                {
LABEL_97:
                  v46 = ptr;
                  goto LABEL_98;
                }
              }
            }
          }
          v77 = *(_QWORD *)(a1 + 8);
          v78 = sub_952CC0(*(__int64 **)(v77 + 7472), a2);
          sub_B6F6E0(v77, (__int64)v51, 0, v78, *(double *)a4.m128_u64, a5, a6);
          v79 = *v51;
          v80 = *(_QWORD *)(a1 + 8);
          v81 = *(_QWORD *)(*(_QWORD *)(v77 + 8656) + 8 * v79);
          v82 = (_QWORD *)sub_180C100(v80 + 8400, 24);
          v83 = *(_QWORD **)(v80 + 9456);
          v84 = v82;
          *v82 = off_1C57B48;
          v82[1] = a1;
          v82[2] = v81;
          if ( v83 )
          {
            v85 = *((_DWORD *)v83 - 1);
            if ( v85 == *((_DWORD *)v83 - 2) )
            {
              v112 = (3 * v85 + 1) >> 1;
              v113 = 8 * v112 + 8;
              if ( 8 * v85 + 8 >= (unsigned int)v113 || v85 >= v112 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_151CF2(v192);
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, v192);
                sub_233E40((__int64)v192);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v114 = (unsigned int *)sub_186B300(v83 - 1, v113);
              v115 = v114[1];
              v83 = v114 + 2;
              *(_QWORD *)(v80 + 9456) = v114 + 2;
              *v114 = v112;
              LODWORD(v114) = v115;
              v88 = &v83[v115];
              v87 = (_DWORD)v114 + 1;
            }
            else
            {
              v86 = v85;
              v87 = v85 + 1;
              v88 = &v83[v86];
            }
          }
          else
          {
            v164 = (_QWORD *)sub_186B270(0x18u);
            v83 = v164 + 1;
            *v164 = 2;
            v87 = 1;
            *(_QWORD *)(v80 + 9456) = v83;
            v88 = v83;
          }
          *v88 = v84;
          *((_DWORD *)v83 - 1) = v87;
          v89 = *(unsigned int *)(a1 + 98944);
          v90 = *(_DWORD *)(a1 + 98952);
          v91 = 2 * v89;
          if ( 3 * (int)v89 < (unsigned int)(4 * (v90 + *(_DWORD *)(a1 + 98948))) )
          {
            v116 = v91;
            v184 = 2 * v89;
            v177 = 8LL * v91;
            v117 = (_QWORD *)sub_186B270(v177);
            v118 = v184;
            v94 = v177;
            v92 = v117;
            if ( v184 )
            {
              memset(v117, 0, 8 * v116);
              v94 = v177;
              v118 = v184;
            }
            v119 = *(char **)((char *)&stru_18278.r_offset + a1);
            v93 = v118 - 1;
            v95 = (_QWORD *)((char *)v92 + v94);
            v120 = &v119[8 * *(unsigned int *)(a1 + 98944)];
            if ( v119 != v120 )
            {
              do
              {
                while ( *(_QWORD *)v119 <= 1u )
                {
                  v119 += 8;
                  if ( v120 == v119 )
                    goto LABEL_126;
                }
                v121 = 8LL * (*(_DWORD *)(**(_QWORD **)v119 + 12LL) & (unsigned int)v93);
                v122 = &v92[(unsigned __int64)v121 / 8];
                if ( v94 == v121 )
                {
LABEL_130:
                  if ( v92 == v122 )
                  {
LABEL_138:
                    v191.m128i_i32[0] = v118;
                    sub_1872CE0("");
                    sub_1873130(114, 213);
                  }
                  v123 = v92;
                  while ( *v123 )
                  {
                    if ( v122 == ++v123 )
                      goto LABEL_138;
                  }
                }
                else
                {
                  v123 = &v92[(unsigned __int64)v121 / 8];
                  while ( *v123 )
                  {
                    if ( v95 == ++v123 )
                      goto LABEL_130;
                  }
                }
                v124 = *(_QWORD *)v119;
                v119 += 8;
                *v123 = v124;
              }
              while ( v120 != v119 );
LABEL_126:
              v120 = *(char **)((char *)&stru_18278.r_offset + a1);
            }
            if ( v120 )
            {
              v190 = v118;
              v185 = v94;
              v178 = v118 - 1;
              sub_186B220(v120);
              v118 = v190;
              v94 = v185;
              v93 = v178;
            }
            *(unsigned __int64 *)((char *)&stru_18278.r_offset + a1) = (unsigned __int64)v92;
            v90 = 0;
            *(_DWORD *)(a1 + 98944) = v118;
            *(_DWORD *)(a1 + 98952) = 0;
          }
          else
          {
            v92 = *(_QWORD **)((char *)&stru_18278.r_offset + a1);
            v93 = v89 - 1;
            v94 = 8 * v89;
            v95 = (_QWORD *)((char *)v92 + v94);
          }
          v96 = *(_DWORD *)(*(_QWORD *)v81 + 12LL);
          v97 = 8LL * (v96 & (unsigned int)v93);
          v98 = &v92[(unsigned __int64)v97 / 8];
          if ( v97 != v94 )
          {
            v99 = &v92[(unsigned __int64)v97 / 8];
            v100 = nullptr;
            while ( 1 )
            {
              v101 = *v99;
              if ( *v99 > 1u )
              {
                if ( *(_DWORD *)(*(_QWORD *)v101 + 12LL) == v96 && v81 == v101 )
                {
                  *v99 = v81;
                  v46 = ptr;
                  v76 = v194;
                  goto LABEL_98;
                }
              }
              else
              {
                if ( !v101 )
                {
                  if ( v100 )
                    goto LABEL_136;
                  v100 = v99;
                  goto LABEL_137;
                }
                v100 = v99;
              }
              if ( ++v99 == v95 )
                goto LABEL_86;
            }
          }
          v100 = nullptr;
          while ( 1 )
          {
LABEL_86:
            if ( v98 == v92 )
            {
              sub_1872CE0("");
              sub_1873130(114, 405);
            }
            v102 = *v92;
            if ( *v92 > 1u )
            {
              if ( *(_DWORD *)(*(_QWORD *)v102 + 12LL) == v96 && v81 == v102 )
              {
                v76 = v194;
                v46 = ptr;
                *v92 = v81;
                goto LABEL_98;
              }
            }
            else
            {
              if ( !v102 )
              {
                if ( v100 )
LABEL_136:
                  *(_DWORD *)(a1 + 98952) = v90 - 1;
                else
                  v100 = v92;
LABEL_137:
                v76 = v194;
                v46 = ptr;
                *v100 = v81;
                ++*(_DWORD *)(a1 + 98948);
LABEL_98:
                if ( v76 )
                {
                  v51 = *(unsigned int **)&v46[8 * --v76];
                  goto LABEL_69;
                }
LABEL_52:
                if ( v46 != nullptr && v46 != v195 )
                  sub_186B220(v46);
LABEL_54:
                v55 = *(_QWORD **)(a1 + 528);
                if ( v55 )
                {
                  v56 = *((_DWORD *)v55 - 1);
                  if ( v56 == *((_DWORD *)v55 - 2) )
                  {
                    v125 = (3 * v56 + 1) >> 1;
                    v126 = 16 * v125 + 8;
                    if ( 16 * v56 + 8 >= v126 || v56 >= v125 )
                    {
                      v7 = (char **)__cxa_allocate_exception(0x28u);
                      sub_151CF2((char **)&ptr);
                      *v7 = (char *)off_1C63128;
                      sub_2333C0(v7 + 1, &ptr);
                      sub_233E40((__int64)&ptr);
                      __cxa_throw(
                        v7,
                        (struct type_info *)&`typeinfo for'default_exception,
                        (void (*)(void *))sub_230E50);
                    }
                    v127 = sub_186B270(v126);
                    v128 = *(_QWORD *)(a1 + 528);
                    v129 = (_DWORD *)v127;
                    v55 = (_QWORD *)(v127 + 8);
                    if ( v128 )
                    {
                      v130 = *(unsigned int *)(v128 - 4);
                      *(_DWORD *)(v127 + 4) = v130;
                      v131 = 0;
                      v132 = 16 * v130;
                      if ( v132 )
                      {
                        do
                        {
                          a4 = (__m128)_mm_loadu_si128((const __m128i *)(v128 + v131));
                          *(__m128 *)&v129[v131 / 4 + 2] = a4;
                          v131 += 16LL;
                        }
                        while ( v132 != v131 );
                      }
                      sub_186B220((void *)(v128 - 8));
                      v59 = &v55[2 * (unsigned int)v129[1]];
                      v58 = v129[1] + 1;
                    }
                    else
                    {
                      *(_DWORD *)(v127 + 4) = 0;
                      v59 = (__int64 *)(v127 + 8);
                      v58 = 1;
                    }
                    *(_QWORD *)(a1 + 528) = v55;
                    *v129 = v125;
                  }
                  else
                  {
                    v57 = v56;
                    v58 = v56 + 1;
                    v59 = &v55[2 * v57];
                  }
                }
                else
                {
                  v171 = (_QWORD *)sub_186B270(0x28u);
                  *v171 = 2;
                  v58 = 1;
                  v55 = v171 + 1;
                  *(_QWORD *)(a1 + 528) = v55;
                  v59 = v55;
                }
                v59[1] = v10;
                *v59 = a2;
                *((_DWORD *)v55 - 1) = v58;
                result = v186;
                if ( !v186 )
                  return result;
                v182 = v186;
                v60 = 0;
                while ( 2 )
                {
                  v61 = *(_QWORD *)(v10 + 8 * v60 + 32);
                  v62 = *(_QWORD **)(a1 + 488);
                  v63 = **(_DWORD **)(v61 + 16);
                  v64 = v63 - 0x7FFFFFFF;
                  v174 = v63 + 0x80000000;
                  if ( v62 )
                  {
                    v65 = *((unsigned int *)v62 - 1);
                    if ( (unsigned int)v65 >= v64 )
                      break;
                    v133 = *(_QWORD **)(a1 + 488);
                    v187 = *(_QWORD *)(v10 + 8 * v60 + 32);
                    v134 = v10;
LABEL_154:
                    while ( 1 )
                    {
                      v139 = *((_DWORD *)v133 - 2);
                      if ( v139 >= v64 )
                        break;
                      v135 = (3 * v139 + 1) >> 1;
                      v136 = 8 * v135 + 8;
                      v137 = v135;
                      if ( 8 * v139 + 8 >= (unsigned int)v136 || v139 >= v135 )
                      {
                        v9 = (char **)__cxa_allocate_exception(0x28u);
                        sub_151CF2((char **)&ptr);
                        *v9 = (char *)off_1C63128;
                        sub_2333C0(v9 + 1, &ptr);
                        sub_233E40((__int64)&ptr);
                        __cxa_throw(
                          v9,
                          (struct type_info *)&`typeinfo for'default_exception,
                          (void (*)(void *))sub_230E50);
                      }
                      v138 = (unsigned int *)sub_186B300(v133 - 1, v136);
                      v133 = v138 + 2;
                      *v138 = v137;
                      *(_QWORD *)(a1 + 488) = v138 + 2;
                    }
                    v140 = 8 * v65;
                    *((_DWORD *)v133 - 1) = v64;
                    v10 = v134;
                    v141 = 8LL * v64;
                    v62 = v133;
                    v61 = v187;
                    v142 = &v133[(unsigned __int64)v140 / 8];
                    if ( v140 != v141 )
                    {
                      memset(v142, 0, v141 - v140);
                      v66 = v174;
                      v61 = v187;
                      v67 = v62[v174];
                      if ( !v67 )
                      {
LABEL_157:
                        v143 = *(_QWORD *)(v10 + 8 * v60 + 32);
                        v144 = *(_QWORD *)(v143 + 16);
                        v188 = *(_QWORD *)(a1 + 480);
                        v145 = *(_DWORD *)(v143 + 24);
                        v191.m128i_i64[1] = *(_QWORD *)(v188 + 16);
                        v191.m128i_i64[0] = v144;
                        v146 = (__m128 *)sub_186B270(0x30u);
                        a5 = (__m128)_mm_loadl_epi64(&v191);
                        v147 = (__int64)v146;
                        v148 = v191.m128i_i64[1];
                        v149 = _mm_loadl_epi64((const __m128i *)v191.m128i_i64[1]);
                        v146[1].m128_i32[0] = (unsigned __int16)v145;
                        v146[1].m128_i8[4] = 0;
                        a4 = (__m128)_mm_unpacklo_epi64(v149, (__m128i)a5);
                        *v146 = a4;
                        v150 = *(_QWORD *)(v148 + 16);
                        v146[1].m128_u64[1] = (unsigned int)(unsigned __int16)v145 + 1;
                        v146[2].m128_u64[1] = 0;
                        if ( (unsigned __int16)v145 > 6u )
                        {
                          v151 = sub_180C100(v150, 24);
                          *(_DWORD *)v151 = 6;
                          *(_QWORD *)(v151 + 8) = 0;
                          *(_DWORD *)(v151 + 16) = (unsigned __int16)v145;
                        }
                        else
                        {
                          v151 = sub_180C100(v150, 16);
                          *(_QWORD *)(v151 + 8) = 0;
                          *(_DWORD *)v151 = (unsigned __int16)v145 - 1;
                        }
                        *(_QWORD *)(v147 + 32) = v151;
                        sub_B9BFE0(v188, v147, a2, v10, v60);
                        sub_B9F490(v188, *(_QWORD *)(v147 + 32), (unsigned int)v60, a4, a5, a6, v152, v153, v154);
                        *(_DWORD *)(v147 + 28) = *(_DWORD *)(v188 + 96);
                        *(_QWORD *)(*(_QWORD *)(a1 + 488) + 8 * v66) = v147;
                        v155 = *(_QWORD **)(a1 + 496);
                        v156 = (_QWORD *)sub_180C100(v155 + 2, 24);
                        *v156 = off_1C57B20;
                        v156[1] = a1 + 488;
                        *((_DWORD *)v156 + 4) = v174;
                        ptr = v156;
                        result = sub_B9B610(v155, &ptr);
LABEL_59:
                        if ( v182 == ++v60 )
                          return result;
                        continue;
                      }
LABEL_63:
                      result = *(unsigned int *)(v67 + 16);
                      if ( (_DWORD)result == *(_DWORD *)(v61 + 24)
                        && (_DWORD)result == *(_DWORD *)(*(_QWORD *)(v10 + 8 * v60 + 32) + 24LL) )
                      {
                        v68 = *(_QWORD *)(a1 + 480);
                        v69 = *(_DWORD *)(v67 + 24);
                        v70 = *(_QWORD *)(v68 + 16);
                        *(_BYTE *)(v68 + 100) = 0;
                        v175 = v69;
                        v71 = *(_QWORD **)(v70 + 8);
                        v72 = (_QWORD *)sub_180C100(v71 + 2, 24);
                        v72[1] = v67 + 24;
                        *v72 = &off_1C4C070;
                        *((_DWORD *)v72 + 4) = v175;
                        ptr = v72;
                        sub_B9B610(v71, &ptr);
                        sub_B9BFE0(v68, v67, a2, v10, v60);
                        v73 = *(_DWORD **)(v67 + 32);
                        *(_DWORD *)(v68 + 96) = *(_DWORD *)(v67 + 28);
                        result = (__int64)sub_B9F910((__int64 *)v68, v73, v60, a4, a5, a6);
                        v176 = *(_DWORD *)(v67 + 28);
                        if ( v176 < *(_DWORD *)(v68 + 96) )
                        {
                          v74 = *(_QWORD **)(*(_QWORD *)(v68 + 16) + 8LL);
                          v75 = (_QWORD *)sub_180C100(v74 + 2, 24);
                          *v75 = &off_1C4C070;
                          v75[1] = v67 + 28;
                          *((_DWORD *)v75 + 4) = v176;
                          ptr = v75;
                          sub_B9B610(v74, &ptr);
                          result = *(unsigned int *)(v68 + 96);
                          *(_DWORD *)(v67 + 28) = result;
                        }
                      }
                      goto LABEL_59;
                    }
                  }
                  else if ( v63 != 0x7FFFFFFF )
                  {
                    v187 = *(_QWORD *)(v10 + 8 * v60 + 32);
                    v65 = 0;
                    v157 = (_QWORD *)sub_186B270(0x18u);
                    *(_QWORD *)(a1 + 488) = v157 + 1;
                    v133 = v157 + 1;
                    v134 = v10;
                    *v157 = 2;
                    goto LABEL_154;
                  }
                  break;
                }
                v66 = v174;
                v67 = v62[v174];
                if ( !v67 )
                  goto LABEL_157;
                goto LABEL_63;
              }
              v100 = v92;
            }
            ++v92;
          }
        }
LABEL_30:
        v39 = 0;
        do
        {
          v40 = *(_QWORD *)(v16 + 8 * v39);
          if ( v40 )
            *(_DWORD *)(v40 - 4) = 0;
          ++v39;
        }
        while ( (unsigned int)v39 < v17 );
        goto LABEL_34;
      }
    }
    else
    {
      v172 = v17 + 1;
      if ( v17 == -1 )
        goto LABEL_30;
      v18 = 0;
      v165 = (_QWORD *)sub_186B270(0x18u);
      v16 = (unsigned __int64)(v165 + 1);
      *v165 = 2;
      *(_QWORD *)(a1 + 98920) = v165 + 1;
    }
    v179 = v17;
    v181 = v18;
    v189 = v10;
    while ( 1 )
    {
      v19 = *(_DWORD *)(v16 - 8);
      v20 = v172;
      if ( v19 >= v172 )
        break;
      while ( 1 )
      {
        v21 = (3 * v19 + 1) >> 1;
        v22 = 8 * v21 + 8;
        if ( 8 * v19 + 8 >= (unsigned int)v22 || v19 >= v21 )
        {
          v6 = (char **)__cxa_allocate_exception(0x28u);
          sub_151CF2((char **)&ptr);
          *v6 = (char *)off_1C63128;
          sub_2333C0(v6 + 1, &ptr);
          sub_233E40((__int64)&ptr);
          __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v23 = (unsigned int *)sub_186B270(v22);
        v24 = *(__int64 **)(a1 + 98920);
        v25 = v23;
        v16 = (unsigned __int64)(v23 + 2);
        if ( !v24 )
          break;
        v26 = *((unsigned int *)v24 - 1);
        v27 = 8 * v26;
        v23[1] = v26;
        v28 = &v24[v26];
        if ( v24 != v28 )
        {
          v29 = v27 - 8;
          v30 = v24;
          if ( (unsigned __int64)(v27 - 8) <= 8 || v16 < (unsigned __int64)(v24 + 2) && v24 < (__int64 *)v23 + 3 )
          {
            v162 = v23 + 2;
            do
            {
              v163 = *v30;
              *v30++ = 0;
              v162 += 2;
              *((_QWORD *)v162 - 1) = v163;
            }
            while ( v30 != v28 );
          }
          else
          {
            v31 = 0;
            v32 = (v29 >> 3) + 1;
            do
            {
              a4 = (__m128)_mm_loadu_si128((const __m128i *)&v24[v31 / 2]);
              a6 = 0;
              *(_OWORD *)&v24[v31 / 2] = 0;
              *(__m128 *)&v23[v31 + 2] = a4;
              v31 += 4LL;
            }
            while ( 4 * (v32 >> 1) != v31 );
            if ( (v32 & 1) != 0 )
            {
              v33 = 2 * (v32 & 0xFFFFFFFFFFFFFFFELL);
              v34 = v24[v33 / 2];
              v24[v33 / 2] = 0;
              *(_QWORD *)&v23[v33 + 2] = v34;
            }
          }
        }
        v35 = &v24[v26];
        if ( (_DWORD)v26 )
        {
          do
          {
            while ( *v24 )
            {
              v36 = (void *)(*v24++ - 8);
              sub_186B220(v36);
              if ( v35 == v24 )
                goto LABEL_25;
            }
            ++v24;
          }
          while ( v24 != v35 );
LABEL_25:
          v24 = *(__int64 **)(a1 + 98920);
        }
        sub_186B220(v24 - 1);
        *v25 = v21;
        v20 = v172;
        v19 = *(_DWORD *)(v16 - 8);
        *(_QWORD *)(a1 + 98920) = v16;
        if ( v19 >= v172 )
          goto LABEL_27;
      }
      v23[1] = 0;
      *(_QWORD *)(a1 + 98920) = v16;
      *v23 = v21;
    }
LABEL_27:
    v17 = v179;
    *(_DWORD *)(v16 - 4) = v20;
    v37 = 8LL * v20;
    v10 = v189;
    v38 = 8LL * v181;
    if ( v38 != v37 )
      memset((void *)(v16 + v38), 0, v37 - v38);
    goto LABEL_29;
  }
  result = a3;
  v14 = a3 + 8LL * v12;
  while ( 1 )
  {
    v15 = *(_QWORD *)(result + 32);
    if ( !*(_WORD *)(v15 + 4) && (*(_BYTE *)(v15 + 30) & 1) != 0 )
      return result;
    result += 8;
    if ( v14 == result )
      goto LABEL_6;
  }
}

