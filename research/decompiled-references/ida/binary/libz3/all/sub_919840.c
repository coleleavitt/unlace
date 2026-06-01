__int64 __fastcall sub_919840(_QWORD *a1, int a2)
{
  _QWORD *v2; // r14
  __int64 v3; // rax
  int v4; // edx
  unsigned int v5; // ebx
  __int64 v6; // rsi
  unsigned int *v7; // r12
  unsigned int v8; // r13d
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rdi
  unsigned int v12; // ecx
  __int64 v13; // rdx
  unsigned __int64 v14; // r15
  __int64 *v15; // rbp
  __int64 v16; // rsi
  __int64 v17; // rdi
  bool v18; // zf
  __int64 v19; // rax
  __int64 v20; // rcx
  unsigned int v21; // r13d
  int v22; // r15d
  __int64 v23; // rbx
  int *v24; // rcx
  int v25; // eax
  __int64 v26; // rbp
  __int64 v27; // r10
  int v28; // esi
  __m128i *v29; // r12
  unsigned int v30; // ecx
  int v31; // r9d
  __int64 v32; // r10
  __m128i *v33; // r15
  __int64 v34; // rcx
  __m128i *v35; // rdi
  __m128i *v36; // rax
  __int64 v37; // rdx
  __int64 result; // rax
  __int64 v39; // r10
  int v40; // esi
  unsigned int v41; // ecx
  int v42; // r9d
  __int64 v43; // r10
  __m128i *v44; // r15
  __int64 v45; // rcx
  __m128i *v46; // rdi
  __m128i *v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rdx
  __int64 v50; // r10
  int v51; // esi
  unsigned int v52; // ecx
  int v53; // r9d
  __int64 v54; // r10
  __m128i *v55; // r15
  __int64 v56; // rcx
  __m128i *v57; // rdi
  __m128i *j; // rax
  __int64 v59; // rdx
  __int64 v60; // rdx
  unsigned __int64 v61; // rax
  __m128i v62; // xmm1
  __m128i *v63; // rax
  __m128i *v64; // rcx
  __int64 v65; // rdx
  __int64 v66; // rax
  unsigned __int64 v67; // rax
  __m128i *v68; // rcx
  __int64 v69; // rdx
  __int64 v70; // rax
  unsigned __int64 v71; // rax
  __m128i *v72; // rcx
  __int64 v73; // rdx
  __int64 v74; // rax
  __int64 v75; // rdx
  __m128i *v76; // rax
  __int64 v77; // rdx
  __int64 v78; // rdx
  __m128i *i; // rax
  __int64 v80; // rdx
  __int64 v81; // rdx
  __m128i *v82; // rax
  __int64 v83; // rdx
  __int64 v84; // rdx
  __m128i *v85; // rax
  int v86; // r8d
  __m128i *v87; // r11
  const __m128i *v88; // r9
  __int64 v89; // rsi
  __m128i *v90; // rcx
  _QWORD *v91; // rdi
  unsigned int v92; // r14d
  int v93; // r15d
  __m128i *v94; // r13
  const __m128i *v95; // rbx
  const __m128i *v96; // r12
  __int64 v97; // rdx
  __m128i *v98; // rsi
  __m128i *v99; // rdx
  __m128i v100; // xmm0
  __m128i *v101; // rax
  int v102; // r8d
  __m128i *v103; // r11
  const __m128i *v104; // r9
  __int64 v105; // rsi
  __m128i *v106; // rcx
  _QWORD *v107; // rdi
  unsigned int v108; // r14d
  int v109; // r15d
  __m128i *v110; // r13
  const __m128i *v111; // rbx
  const __m128i *v112; // r12
  __int64 v113; // rdx
  __m128i *v114; // rsi
  __m128i *v115; // rdx
  __m128i v116; // xmm0
  __m128i *v117; // rax
  int v118; // r8d
  __m128i *v119; // r11
  const __m128i *v120; // r9
  __int64 v121; // rsi
  __m128i *v122; // rcx
  _QWORD *v123; // rdi
  unsigned int v124; // r14d
  int v125; // r15d
  __m128i *v126; // r13
  const __m128i *v127; // rbx
  const __m128i *v128; // r12
  __int64 v129; // rdx
  __m128i *v130; // rsi
  __m128i *v131; // rdx
  __m128i v132; // xmm0
  __m128i *v133; // rcx
  __int64 v134; // rdi
  unsigned int v135; // edx
  int v136; // eax
  unsigned int v137; // eax
  __int64 v138; // r15
  __m128i *v139; // r11
  __m128i *v140; // rdx
  __m128i *v141; // rax
  __int64 v142; // rax
  __m128i *v143; // rdi
  unsigned int v144; // r10d
  const __m128i *v145; // r15
  const __m128i *v146; // r9
  __int64 v147; // r12
  __m128i *v148; // rcx
  _QWORD *v149; // rax
  const __m128i *v150; // r14
  __int64 v151; // r9
  __m128i *v152; // rbp
  unsigned int v153; // ecx
  __int64 v154; // r13
  unsigned int v155; // r12d
  __int64 v156; // r10
  __int64 v157; // rax
  __m128i *v158; // rdx
  __m128i *v159; // rax
  __m128i *v160; // rcx
  __int64 v161; // rdi
  unsigned int v162; // edx
  int v163; // eax
  unsigned int v164; // eax
  __int64 v165; // r15
  __m128i *v166; // r11
  __m128i *v167; // rdx
  __m128i *v168; // rax
  __int64 v169; // rax
  __m128i *v170; // rdi
  unsigned int v171; // r10d
  const __m128i *v172; // r15
  const __m128i *v173; // r9
  __int64 v174; // r12
  __m128i *v175; // rcx
  _QWORD *v176; // rax
  const __m128i *v177; // r14
  __int64 v178; // r9
  __m128i *v179; // rbp
  unsigned int v180; // ecx
  __int64 v181; // r13
  unsigned int v182; // r12d
  __int64 v183; // r10
  __int64 v184; // rax
  __m128i *v185; // rdx
  __m128i *v186; // rax
  __m128i *v187; // rcx
  __int64 v188; // rdi
  unsigned int v189; // edx
  int v190; // eax
  unsigned int v191; // eax
  __int64 v192; // r15
  __m128i *v193; // r11
  __m128i *v194; // rdx
  __m128i *v195; // rax
  __int64 v196; // rax
  __m128i *v197; // rdi
  unsigned int v198; // r10d
  const __m128i *v199; // r15
  const __m128i *v200; // r9
  __int64 v201; // r12
  __m128i *v202; // rcx
  _QWORD *v203; // rax
  const __m128i *v204; // r14
  __int64 v205; // r9
  __m128i *v206; // rbp
  unsigned int v207; // ecx
  __int64 v208; // r13
  unsigned int v209; // r12d
  __int64 v210; // r10
  __int64 v211; // rax
  __m128i *v212; // rdx
  __m128i *v213; // rax
  __int64 v214; // [rsp+0h] [rbp-88h]
  size_t v215; // [rsp+8h] [rbp-80h]
  int v216; // [rsp+8h] [rbp-80h]
  size_t v217; // [rsp+8h] [rbp-80h]
  int v218; // [rsp+8h] [rbp-80h]
  size_t v219; // [rsp+8h] [rbp-80h]
  int v220; // [rsp+8h] [rbp-80h]
  __m128i *v221; // [rsp+8h] [rbp-80h]
  __m128i *v222; // [rsp+8h] [rbp-80h]
  __m128i *v223; // [rsp+8h] [rbp-80h]
  int v224; // [rsp+10h] [rbp-78h]
  __int64 v225; // [rsp+10h] [rbp-78h]
  int v226; // [rsp+10h] [rbp-78h]
  __int64 v227; // [rsp+10h] [rbp-78h]
  int v228; // [rsp+10h] [rbp-78h]
  __int64 v229; // [rsp+10h] [rbp-78h]
  __m128i v230; // [rsp+20h] [rbp-68h] BYREF
  __int64 v231; // [rsp+30h] [rbp-58h]
  __m128i *v232; // [rsp+38h] [rbp-50h]
  _QWORD *v233; // [rsp+40h] [rbp-48h]
  unsigned int v234; // [rsp+48h] [rbp-40h]
  int v235; // [rsp+4Ch] [rbp-3Ch]

  v2 = a1;
  v3 = a1[16];
  if ( v3 )
    v4 = *(_DWORD *)(v3 - 4);
  else
    v4 = 0;
  v5 = v4 - a2;
  v6 = a1[4];
  v7 = (unsigned int *)(v3 + 8LL * v5);
  v8 = *v7;
  if ( v6 )
  {
    v9 = *(unsigned int *)(v6 - 4);
    LODWORD(v10) = v9;
    if ( v8 == (_DWORD)v9 )
      goto LABEL_11;
    v11 = a1[5];
    if ( !v11 )
      goto LABEL_11;
  }
  else
  {
    if ( !v8 || (v11 = a1[5]) == 0 )
    {
LABEL_267:
      v8 = 0;
      goto LABEL_19;
    }
    LODWORD(v10) = 0;
  }
  do
  {
    v10 = (unsigned int)(v10 - 1);
    v12 = **(_DWORD **)(v6 + 8 * v10);
    v13 = v12 >> 5;
    if ( (unsigned int)v13 < *(_DWORD *)(v11 - 4) )
      *(_DWORD *)(v11 + 4 * v13) &= ~(1 << v12);
  }
  while ( v8 != (_DWORD)v10 );
  if ( !v6 )
    goto LABEL_267;
  v9 = *(unsigned int *)(v6 - 4);
LABEL_11:
  v14 = v6 + 8 * v9;
  v15 = (__int64 *)(v6 + 8LL * v8);
  if ( (unsigned __int64)v15 < v14 )
  {
    do
    {
      while ( 1 )
      {
        v16 = *v15;
        if ( *v15 )
        {
          v17 = v2[3];
          v18 = (*(_DWORD *)(v16 + 8))-- == 1;
          if ( v18 )
            break;
        }
        if ( (unsigned __int64)++v15 >= v14 )
          goto LABEL_17;
      }
      sub_15D7BC0(v17, v16);
      ++v15;
    }
    while ( (unsigned __int64)v15 < v14 );
LABEL_17:
    v6 = v2[4];
    if ( !v6 )
      goto LABEL_267;
  }
  *(_DWORD *)(v6 - 4) = v8;
LABEL_19:
  v19 = v2[1];
  v20 = v2[15];
  *((_DWORD *)v2 + 4) = v8;
  v21 = v7[1];
  if ( v20 )
  {
    v22 = *(_DWORD *)(v20 - 4);
    if ( v21 == v22 )
      goto LABEL_36;
  }
  else
  {
    v22 = 0;
    if ( !v21 )
      goto LABEL_37;
  }
  v214 = *(_QWORD *)(v19 + 104);
  v234 = v5;
  LODWORD(v23) = v22;
  do
  {
    v23 = (unsigned int)(v23 - 1);
    v24 = (int *)(16 * v23 + v20);
    v25 = *v24;
    v26 = *((_QWORD *)v24 + 1);
    if ( *v24 == 1 )
    {
      v50 = *((unsigned int *)v2 + 20);
      v51 = *(_DWORD *)(v26 + 12);
      v29 = (__m128i *)v2[9];
      v52 = v50 - 1;
      v53 = *((_DWORD *)v2 + 20);
      v54 = 16 * v50;
      v55 = (__m128i *)((char *)v29 + v54);
      v56 = 16LL * (v51 & v52);
      v57 = &v29[(unsigned __int64)v56 / 0x10];
      if ( v56 != v54 )
      {
        j = &v29[(unsigned __int64)v56 / 0x10];
        while ( 1 )
        {
          while ( 1 )
          {
            v59 = j->m128i_i64[0];
            if ( j->m128i_i64[0] > 1uLL )
              break;
            if ( !v59 )
              goto LABEL_32;
            if ( v55 == ++j )
              goto LABEL_67;
          }
          if ( *(_DWORD *)(v59 + 12) == v51 && v26 == v59 )
            break;
          if ( v55 == ++j )
            goto LABEL_67;
        }
LABEL_75:
        v61 = *(_QWORD *)(j->m128i_i64[1] + 8);
        v62 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v26, (__m128i)v61);
        if ( v61 )
        {
          if ( 3 * v53 < (unsigned int)(4 * (*((_DWORD *)v2 + 21) + *((_DWORD *)v2 + 22))) )
          {
            v224 = 2 * v53;
            v230 = v62;
            v215 = 16LL * (unsigned int)(2 * v53);
            v85 = (__m128i *)sub_186B270(v215);
            v86 = v224;
            v54 = v215;
            v62 = _mm_load_si128(&v230);
            v29 = v85;
            v87 = &v85[v215 / 0x10];
            if ( v224 )
            {
              if ( (v215 & 0x10) == 0 || (*v85 = 0, ++v85, v87 != v85) )
              {
                do
                {
                  *v85 = 0;
                  v85 += 2;
                  v85[-1] = 0;
                }
                while ( v87 != v85 );
              }
            }
            v88 = (const __m128i *)v2[9];
            v55 = v87;
            v216 = v224 - 1;
            v89 = *((unsigned int *)v2 + 20);
            v90 = (__m128i *)&v88[v89];
            if ( v88 != &v88[v89] )
            {
              v91 = v2;
              v92 = v21;
              v93 = v23;
              v94 = v29;
              v95 = v88;
              v96 = &v88[v89];
              do
              {
                while ( v95->m128i_i64[0] <= 1uLL )
                {
                  if ( v96 == ++v95 )
                    goto LABEL_200;
                }
                v97 = 16LL * (*(_DWORD *)(v95->m128i_i64[0] + 12) & (unsigned int)v216);
                v98 = &v94[(unsigned __int64)v97 / 0x10];
                if ( v54 == v97 )
                {
LABEL_204:
                  if ( v94 == v98 )
                  {
LABEL_269:
                    v235 = v224;
                    v233 = v91;
                    v232 = v87;
                    v231 = v54;
                    v230.m128i_i64[0] = v26;
                    sub_1872CE0("");
                    sub_1873130(114, 213);
                  }
                  v99 = v94;
                  while ( v99->m128i_i64[0] )
                  {
                    if ( v98 == ++v99 )
                      goto LABEL_269;
                  }
                }
                else
                {
                  v99 = &v94[(unsigned __int64)v97 / 0x10];
                  while ( v99->m128i_i64[0] )
                  {
                    if ( v87 == ++v99 )
                      goto LABEL_204;
                  }
                }
                v100 = _mm_loadu_si128(v95++);
                *v99 = v100;
              }
              while ( v96 != v95 );
LABEL_200:
              LODWORD(v23) = v93;
              v55 = v87;
              v90 = (__m128i *)v91[9];
              v29 = v94;
              v21 = v92;
              v2 = v91;
            }
            if ( v90 )
            {
              LODWORD(v231) = v224;
              v225 = v54;
              v230 = v62;
              sub_186B220(v90);
              v86 = v231;
              v62 = _mm_load_si128(&v230);
              v54 = v225;
            }
            v51 = *(_DWORD *)(v26 + 12);
            v2[9] = v29;
            *((_DWORD *)v2 + 20) = v86;
            *((_DWORD *)v2 + 22) = 0;
            v56 = 16LL * (v51 & (unsigned int)v216);
            v57 = &v29[(unsigned __int64)v56 / 0x10];
          }
          if ( v56 == v54 )
          {
            v64 = nullptr;
          }
          else
          {
            v63 = v57;
            v64 = nullptr;
            do
            {
              while ( 1 )
              {
                v65 = v63->m128i_i64[0];
                if ( v63->m128i_i64[0] <= 1uLL )
                  break;
                if ( *(_DWORD *)(v65 + 12) == v51 && v26 == v65 )
                {
LABEL_253:
                  *v63 = v62;
                  v18 = (*(_DWORD *)(v26 + 8))-- == 1;
                  if ( v18 )
                    goto LABEL_42;
                  goto LABEL_34;
                }
                if ( ++v63 == v55 )
                  goto LABEL_85;
              }
              if ( !v65 )
              {
                if ( !v64 )
                {
                  v64 = v63;
LABEL_261:
                  *v64 = v62;
                  ++*((_DWORD *)v2 + 21);
                  v18 = (*(_DWORD *)(v26 + 8))-- == 1;
                  if ( v18 )
                    goto LABEL_42;
                  goto LABEL_34;
                }
LABEL_260:
                --*((_DWORD *)v2 + 22);
                goto LABEL_261;
              }
              v64 = v63++;
            }
            while ( v63 != v55 );
          }
LABEL_85:
          while ( v29 != v57 )
          {
            v66 = v29->m128i_i64[0];
            if ( v29->m128i_i64[0] > 1uLL )
            {
              if ( *(_DWORD *)(v66 + 12) == v51 && v26 == v66 )
              {
LABEL_271:
                *v29 = v62;
                v18 = (*(_DWORD *)(v26 + 8))-- == 1;
                if ( v18 )
                  goto LABEL_42;
                goto LABEL_34;
              }
            }
            else
            {
              if ( !v66 )
              {
                if ( !v64 )
                {
                  v64 = v29;
                  goto LABEL_261;
                }
                goto LABEL_260;
              }
              v64 = v29;
            }
            ++v29;
          }
LABEL_40:
          sub_1872CE0("");
          sub_1873130(114, 405);
        }
        if ( v56 == v54 )
        {
LABEL_161:
          if ( v29 != v57 )
          {
            for ( i = (__m128i *)v2[9]; v57 != i; ++i )
            {
              v81 = i->m128i_i64[0];
              if ( i->m128i_i64[0] > 1uLL )
              {
                if ( *(_DWORD *)(v81 + 12) == v51 && v26 == v81 )
                  goto LABEL_308;
              }
              else if ( !v81 )
              {
                v18 = (*(_DWORD *)(v26 + 8))-- == 1;
                if ( v18 )
                  goto LABEL_42;
                goto LABEL_34;
              }
            }
          }
        }
        else
        {
          i = &v29[(unsigned __int64)v56 / 0x10];
          while ( 1 )
          {
            while ( 1 )
            {
              v80 = i->m128i_i64[0];
              if ( i->m128i_i64[0] > 1uLL )
                break;
              if ( !v80 )
                goto LABEL_41;
              if ( v55 == ++i )
                goto LABEL_161;
            }
            if ( *(_DWORD *)(v80 + 12) == v51 && v26 == v80 )
              break;
            if ( v55 == ++i )
              goto LABEL_161;
          }
LABEL_308:
          v160 = i + 1;
          v161 = *((unsigned int *)v2 + 21);
          if ( v55 == &i[1] )
            v160 = (__m128i *)v2[9];
          v162 = v161 - 1;
          if ( v160->m128i_i64[0] )
          {
            i->m128i_i64[0] = 1;
            v163 = *((_DWORD *)v2 + 22);
            *((_DWORD *)v2 + 21) = v162;
            v164 = v163 + 1;
            if ( v162 < 0x40 )
              v162 = 64;
            *((_DWORD *)v2 + 22) = v164;
            if ( v162 < v164 && !(unsigned __int8)sub_186AF10(v161) )
            {
              v165 = *((unsigned int *)v2 + 20);
              v166 = (__m128i *)sub_186B270(16 * v165);
              v167 = v166;
              v168 = &v166[v165];
              if ( (_DWORD)v165 )
              {
                if ( ((16 * (_BYTE)v165) & 0x10) == 0 || (v167 = v166 + 1, *v166 = 0, v168 != &v166[1]) )
                {
                  do
                  {
                    *v167 = 0;
                    v167 += 2;
                    v167[-1] = 0;
                  }
                  while ( v168 != v167 );
                }
              }
              v169 = *((unsigned int *)v2 + 20);
              v170 = (__m128i *)v2[9];
              v171 = v169 - 1;
              v169 *= 16;
              v172 = v170;
              v173 = (__m128i *)((char *)v170 + v169);
              v174 = v169;
              v175 = (__m128i *)((char *)v166 + v169);
              if ( v170 != (__m128i *)&v170->m128i_i8[v169] )
              {
                v176 = v2;
                v177 = v173;
                v178 = v26;
                v179 = v175;
                v180 = v21;
                v181 = v174;
                v182 = v171;
                v183 = (__int64)v176;
                do
                {
                  if ( v172->m128i_i64[0] > 1uLL )
                  {
                    v184 = 16LL * (*(_DWORD *)(v172->m128i_i64[0] + 12) & v182);
                    v185 = &v166[(unsigned __int64)v184 / 0x10];
                    if ( v181 == v184 )
                    {
LABEL_354:
                      if ( v166 == v185 )
                      {
LABEL_382:
                        v231 = v183;
                        v230.m128i_i64[0] = v178;
                        sub_1872CE0("");
                        sub_1873130(114, 213);
                      }
                      v186 = v166;
                      while ( v186->m128i_i64[0] )
                      {
                        if ( v185 == ++v186 )
                          goto LABEL_382;
                      }
                    }
                    else
                    {
                      v186 = &v166[(unsigned __int64)v184 / 0x10];
                      while ( v186->m128i_i64[0] )
                      {
                        if ( v179 == ++v186 )
                          goto LABEL_354;
                      }
                    }
                    *v186 = _mm_loadu_si128(v172);
                  }
                  ++v172;
                }
                while ( v177 != v172 );
                v170 = *(__m128i **)(v183 + 72);
                v21 = v180;
                v26 = v178;
                v2 = (_QWORD *)v183;
              }
              if ( v170 )
              {
                v221 = v166;
                sub_186B220(v170);
                v166 = v221;
              }
              v2[9] = v166;
              *((_DWORD *)v2 + 22) = 0;
            }
          }
          else
          {
            i->m128i_i64[0] = 0;
            *((_DWORD *)v2 + 21) = v162;
          }
        }
LABEL_41:
        v18 = (*(_DWORD *)(v26 + 8))-- == 1;
        if ( v18 )
          goto LABEL_42;
        goto LABEL_34;
      }
LABEL_67:
      if ( v29 != v57 )
      {
        for ( j = (__m128i *)v2[9]; v57 != j; ++j )
        {
          v60 = j->m128i_i64[0];
          if ( j->m128i_i64[0] > 1uLL )
          {
            if ( *(_DWORD *)(v60 + 12) == v51 && v26 == v60 )
              goto LABEL_75;
          }
          else if ( !v60 )
          {
            break;
          }
        }
      }
LABEL_32:
      BUG();
    }
    if ( v25 == 2 )
    {
      v39 = *((unsigned int *)v2 + 14);
      v40 = *(_DWORD *)(v26 + 12);
      v29 = (__m128i *)v2[6];
      v41 = v39 - 1;
      v42 = *((_DWORD *)v2 + 14);
      v43 = 16 * v39;
      v44 = (__m128i *)((char *)v29 + v43);
      v45 = 16LL * (v40 & v41);
      v46 = &v29[(unsigned __int64)v45 / 0x10];
      if ( v45 != v43 )
      {
        v47 = &v29[(unsigned __int64)v45 / 0x10];
        while ( 1 )
        {
          while ( 1 )
          {
            v48 = v47->m128i_i64[0];
            if ( v47->m128i_i64[0] > 1uLL )
              break;
            if ( !v48 )
              goto LABEL_32;
            if ( v44 == ++v47 )
              goto LABEL_51;
          }
          if ( *(_DWORD *)(v48 + 12) == v40 && v26 == v48 )
            break;
          if ( v44 == ++v47 )
            goto LABEL_51;
        }
LABEL_110:
        v71 = *(_QWORD *)(v47->m128i_i64[1] + 8);
        v62 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v26, (__m128i)v71);
        if ( v71 )
        {
          if ( 3 * v42 < (unsigned int)(4 * (*((_DWORD *)v2 + 15) + *((_DWORD *)v2 + 16))) )
          {
            v226 = 2 * v42;
            v230 = v62;
            v217 = 16LL * (unsigned int)(2 * v42);
            v101 = (__m128i *)sub_186B270(v217);
            v102 = v226;
            v43 = v217;
            v62 = _mm_load_si128(&v230);
            v29 = v101;
            v103 = &v101[v217 / 0x10];
            if ( v226 )
            {
              if ( (v217 & 0x10) == 0 || (*v101 = 0, ++v101, v103 != v101) )
              {
                do
                {
                  *v101 = 0;
                  v101 += 2;
                  v101[-1] = 0;
                }
                while ( v103 != v101 );
              }
            }
            v104 = (const __m128i *)v2[6];
            v44 = v103;
            v218 = v226 - 1;
            v105 = *((unsigned int *)v2 + 14);
            v106 = (__m128i *)&v104[v105];
            if ( v104 != &v104[v105] )
            {
              v107 = v2;
              v108 = v21;
              v109 = v23;
              v110 = v29;
              v111 = v104;
              v112 = &v104[v105];
              do
              {
                while ( v111->m128i_i64[0] <= 1uLL )
                {
                  if ( v112 == ++v111 )
                    goto LABEL_222;
                }
                v113 = 16LL * (*(_DWORD *)(v111->m128i_i64[0] + 12) & (unsigned int)v218);
                v114 = &v110[(unsigned __int64)v113 / 0x10];
                if ( v43 == v113 )
                {
LABEL_226:
                  if ( v110 == v114 )
                  {
LABEL_270:
                    v235 = v226;
                    v233 = v107;
                    v232 = v103;
                    v231 = v43;
                    v230.m128i_i64[0] = v26;
                    sub_1872CE0("");
                    sub_1873130(114, 213);
                  }
                  v115 = v110;
                  while ( v115->m128i_i64[0] )
                  {
                    if ( v114 == ++v115 )
                      goto LABEL_270;
                  }
                }
                else
                {
                  v115 = &v110[(unsigned __int64)v113 / 0x10];
                  while ( v115->m128i_i64[0] )
                  {
                    if ( v103 == ++v115 )
                      goto LABEL_226;
                  }
                }
                v116 = _mm_loadu_si128(v111++);
                *v115 = v116;
              }
              while ( v112 != v111 );
LABEL_222:
              LODWORD(v23) = v109;
              v44 = v103;
              v106 = (__m128i *)v107[6];
              v29 = v110;
              v21 = v108;
              v2 = v107;
            }
            if ( v106 )
            {
              LODWORD(v231) = v226;
              v227 = v43;
              v230 = v62;
              sub_186B220(v106);
              v102 = v231;
              v62 = _mm_load_si128(&v230);
              v43 = v227;
            }
            v40 = *(_DWORD *)(v26 + 12);
            v2[6] = v29;
            *((_DWORD *)v2 + 14) = v102;
            *((_DWORD *)v2 + 16) = 0;
            v45 = 16LL * (v40 & (unsigned int)v218);
            v46 = &v29[(unsigned __int64)v45 / 0x10];
          }
          if ( v45 == v43 )
          {
            v72 = nullptr;
          }
          else
          {
            v63 = v46;
            v72 = nullptr;
            do
            {
              while ( 1 )
              {
                v73 = v63->m128i_i64[0];
                if ( v63->m128i_i64[0] <= 1uLL )
                  break;
                if ( *(_DWORD *)(v73 + 12) == v40 && v26 == v73 )
                  goto LABEL_253;
                if ( ++v63 == v44 )
                  goto LABEL_120;
              }
              if ( !v73 )
              {
                if ( !v72 )
                {
                  v72 = v63;
LABEL_257:
                  *v72 = v62;
                  ++*((_DWORD *)v2 + 15);
                  v18 = (*(_DWORD *)(v26 + 8))-- == 1;
                  if ( v18 )
                    goto LABEL_42;
                  goto LABEL_34;
                }
LABEL_256:
                --*((_DWORD *)v2 + 16);
                goto LABEL_257;
              }
              v72 = v63++;
            }
            while ( v63 != v44 );
          }
LABEL_120:
          if ( v29 != v46 )
          {
            while ( 1 )
            {
              v74 = v29->m128i_i64[0];
              if ( v29->m128i_i64[0] > 1uLL )
              {
                if ( *(_DWORD *)(v74 + 12) == v40 && v26 == v74 )
                  goto LABEL_271;
              }
              else
              {
                if ( !v74 )
                {
                  if ( !v72 )
                  {
                    v72 = v29;
                    goto LABEL_257;
                  }
                  goto LABEL_256;
                }
                v72 = v29;
              }
              if ( ++v29 == v46 )
                goto LABEL_40;
            }
          }
          goto LABEL_40;
        }
        if ( v45 == v43 )
        {
LABEL_144:
          if ( v29 != v46 )
          {
            v76 = (__m128i *)v2[6];
            while ( 1 )
            {
              v78 = v76->m128i_i64[0];
              if ( v76->m128i_i64[0] > 1uLL )
              {
                if ( *(_DWORD *)(v78 + 12) == v40 && v26 == v78 )
                  goto LABEL_328;
              }
              else if ( !v78 )
              {
                v18 = (*(_DWORD *)(v26 + 8))-- == 1;
                if ( v18 )
                  goto LABEL_42;
                goto LABEL_34;
              }
              if ( v46 == ++v76 )
                goto LABEL_41;
            }
          }
        }
        else
        {
          v76 = &v29[(unsigned __int64)v45 / 0x10];
          while ( 1 )
          {
            while ( 1 )
            {
              v77 = v76->m128i_i64[0];
              if ( v76->m128i_i64[0] > 1uLL )
                break;
              if ( !v77 )
                goto LABEL_41;
              if ( v44 == ++v76 )
                goto LABEL_144;
            }
            if ( *(_DWORD *)(v77 + 12) == v40 && v26 == v77 )
              break;
            if ( v44 == ++v76 )
              goto LABEL_144;
          }
LABEL_328:
          v187 = v76 + 1;
          v188 = *((unsigned int *)v2 + 15);
          if ( v44 == &v76[1] )
            v187 = (__m128i *)v2[6];
          v189 = v188 - 1;
          if ( v187->m128i_i64[0] )
          {
            v76->m128i_i64[0] = 1;
            v190 = *((_DWORD *)v2 + 16);
            *((_DWORD *)v2 + 15) = v189;
            v191 = v190 + 1;
            if ( v189 < 0x40 )
              v189 = 64;
            *((_DWORD *)v2 + 16) = v191;
            if ( v189 < v191 && !(unsigned __int8)sub_186AF10(v188) )
            {
              v192 = *((unsigned int *)v2 + 14);
              v193 = (__m128i *)sub_186B270(16 * v192);
              v194 = v193;
              v195 = &v193[v192];
              if ( (_DWORD)v192 )
              {
                if ( ((16 * (_BYTE)v192) & 0x10) == 0 || (v194 = v193 + 1, *v193 = 0, &v193[1] != v195) )
                {
                  do
                  {
                    *v194 = 0;
                    v194 += 2;
                    v194[-1] = 0;
                  }
                  while ( v194 != v195 );
                }
              }
              v196 = *((unsigned int *)v2 + 14);
              v197 = (__m128i *)v2[6];
              v198 = v196 - 1;
              v196 *= 16;
              v199 = v197;
              v200 = (__m128i *)((char *)v197 + v196);
              v201 = v196;
              v202 = (__m128i *)((char *)v193 + v196);
              if ( v197 != (__m128i *)&v197->m128i_i8[v196] )
              {
                v203 = v2;
                v204 = v200;
                v205 = v26;
                v206 = v202;
                v207 = v21;
                v208 = v201;
                v209 = v198;
                v210 = (__int64)v203;
                do
                {
                  if ( v199->m128i_i64[0] > 1uLL )
                  {
                    v211 = 16LL * (*(_DWORD *)(v199->m128i_i64[0] + 12) & v209);
                    v212 = &v193[(unsigned __int64)v211 / 0x10];
                    if ( v208 == v211 )
                    {
LABEL_359:
                      if ( v193 == v212 )
                      {
LABEL_383:
                        v231 = v210;
                        v230.m128i_i64[0] = v205;
                        sub_1872CE0("");
                        sub_1873130(114, 213);
                      }
                      v213 = v193;
                      while ( v213->m128i_i64[0] )
                      {
                        if ( v212 == ++v213 )
                          goto LABEL_383;
                      }
                    }
                    else
                    {
                      v213 = &v193[(unsigned __int64)v211 / 0x10];
                      while ( v213->m128i_i64[0] )
                      {
                        if ( v206 == ++v213 )
                          goto LABEL_359;
                      }
                    }
                    *v213 = _mm_loadu_si128(v199);
                  }
                  ++v199;
                }
                while ( v204 != v199 );
                v197 = *(__m128i **)(v210 + 48);
                v21 = v207;
                v26 = v205;
                v2 = (_QWORD *)v210;
              }
              if ( v197 )
              {
                v223 = v193;
                sub_186B220(v197);
                v193 = v223;
              }
              v2[6] = v193;
              *((_DWORD *)v2 + 16) = 0;
            }
          }
          else
          {
            v76->m128i_i64[0] = 0;
            *((_DWORD *)v2 + 15) = v189;
          }
        }
        goto LABEL_41;
      }
LABEL_51:
      if ( v29 != v46 )
      {
        v47 = (__m128i *)v2[6];
        while ( 1 )
        {
          v49 = v47->m128i_i64[0];
          if ( v47->m128i_i64[0] > 1uLL )
          {
            if ( *(_DWORD *)(v49 + 12) == v40 && v26 == v49 )
              goto LABEL_110;
          }
          else if ( !v49 )
          {
            goto LABEL_32;
          }
          if ( v46 == ++v47 )
            goto LABEL_32;
        }
      }
      goto LABEL_32;
    }
    if ( v25 )
    {
      sub_1872CE0("");
      sub_1873130(114, 310);
    }
    v27 = *((unsigned int *)v2 + 26);
    v28 = *(_DWORD *)(v26 + 12);
    v29 = (__m128i *)v2[12];
    v30 = v27 - 1;
    v31 = *((_DWORD *)v2 + 26);
    v32 = 16 * v27;
    v33 = (__m128i *)((char *)v29 + v32);
    v34 = 16LL * (v28 & v30);
    v35 = &v29[(unsigned __int64)v34 / 0x10];
    if ( v34 == v32 )
    {
LABEL_128:
      if ( v29 != v35 )
      {
        v36 = (__m128i *)v2[12];
        while ( 1 )
        {
          v75 = v36->m128i_i64[0];
          if ( v36->m128i_i64[0] > 1uLL )
          {
            if ( *(_DWORD *)(v75 + 12) == v28 && v26 == v75 )
              goto LABEL_93;
          }
          else if ( !v75 )
          {
            goto LABEL_32;
          }
          if ( v35 == ++v36 )
            goto LABEL_32;
        }
      }
      goto LABEL_32;
    }
    v36 = &v29[(unsigned __int64)v34 / 0x10];
    while ( 1 )
    {
      v37 = v36->m128i_i64[0];
      if ( v36->m128i_i64[0] > 1uLL )
        break;
      if ( !v37 )
        goto LABEL_32;
LABEL_29:
      if ( v33 == ++v36 )
        goto LABEL_128;
    }
    if ( *(_DWORD *)(v37 + 12) != v28 || v26 != v37 )
      goto LABEL_29;
LABEL_93:
    v67 = *(_QWORD *)(v36->m128i_i64[1] + 8);
    v62 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v26, (__m128i)v67);
    if ( !v67 )
    {
      if ( v34 == v32 )
      {
LABEL_178:
        if ( v29 != v35 )
        {
          v82 = (__m128i *)v2[12];
          while ( 1 )
          {
            v84 = v82->m128i_i64[0];
            if ( v82->m128i_i64[0] > 1uLL )
            {
              if ( *(_DWORD *)(v84 + 12) == v28 && v26 == v84 )
                goto LABEL_288;
            }
            else if ( !v84 )
            {
              v18 = (*(_DWORD *)(v26 + 8))-- == 1;
              if ( v18 )
                goto LABEL_42;
              goto LABEL_34;
            }
            if ( v35 == ++v82 )
              goto LABEL_41;
          }
        }
      }
      else
      {
        v82 = &v29[(unsigned __int64)v34 / 0x10];
        while ( 1 )
        {
          while ( 1 )
          {
            v83 = v82->m128i_i64[0];
            if ( v82->m128i_i64[0] > 1uLL )
              break;
            if ( !v83 )
              goto LABEL_41;
            if ( v33 == ++v82 )
              goto LABEL_178;
          }
          if ( *(_DWORD *)(v83 + 12) == v28 && v26 == v83 )
            break;
          if ( v33 == ++v82 )
            goto LABEL_178;
        }
LABEL_288:
        v133 = v82 + 1;
        v134 = *((unsigned int *)v2 + 27);
        if ( v33 == &v82[1] )
          v133 = (__m128i *)v2[12];
        v135 = v134 - 1;
        if ( v133->m128i_i64[0] )
        {
          v82->m128i_i64[0] = 1;
          v136 = *((_DWORD *)v2 + 28);
          *((_DWORD *)v2 + 27) = v135;
          v137 = v136 + 1;
          if ( v135 < 0x40 )
            v135 = 64;
          *((_DWORD *)v2 + 28) = v137;
          if ( v135 < v137 && !(unsigned __int8)sub_186AF10(v134) )
          {
            v138 = *((unsigned int *)v2 + 26);
            v139 = (__m128i *)sub_186B270(16 * v138);
            v140 = v139;
            v141 = &v139[v138];
            if ( (_DWORD)v138 )
            {
              if ( ((16 * (_BYTE)v138) & 0x10) == 0 || (v140 = v139 + 1, *v139 = 0, v141 != &v139[1]) )
              {
                do
                {
                  *v140 = 0;
                  v140 += 2;
                  v140[-1] = 0;
                }
                while ( v141 != v140 );
              }
            }
            v142 = *((unsigned int *)v2 + 26);
            v143 = (__m128i *)v2[12];
            v144 = v142 - 1;
            v142 *= 16;
            v145 = v143;
            v146 = (__m128i *)((char *)v143 + v142);
            v147 = v142;
            v148 = (__m128i *)((char *)v139 + v142);
            if ( v143 != (__m128i *)&v143->m128i_i8[v142] )
            {
              v149 = v2;
              v150 = v146;
              v151 = v26;
              v152 = v148;
              v153 = v21;
              v154 = v147;
              v155 = v144;
              v156 = (__int64)v149;
              do
              {
                if ( v145->m128i_i64[0] > 1uLL )
                {
                  v157 = 16LL * (*(_DWORD *)(v145->m128i_i64[0] + 12) & v155);
                  v158 = &v139[(unsigned __int64)v157 / 0x10];
                  if ( v154 == v157 )
                  {
LABEL_364:
                    if ( v139 == v158 )
                    {
LABEL_381:
                      v231 = v156;
                      v230.m128i_i64[0] = v151;
                      sub_1872CE0("");
                      sub_1873130(114, 213);
                    }
                    v159 = v139;
                    while ( v159->m128i_i64[0] )
                    {
                      if ( v158 == ++v159 )
                        goto LABEL_381;
                    }
                  }
                  else
                  {
                    v159 = &v139[(unsigned __int64)v157 / 0x10];
                    while ( v159->m128i_i64[0] )
                    {
                      if ( v152 == ++v159 )
                        goto LABEL_364;
                    }
                  }
                  *v159 = _mm_loadu_si128(v145);
                }
                ++v145;
              }
              while ( v150 != v145 );
              v143 = *(__m128i **)(v156 + 96);
              v21 = v153;
              v26 = v151;
              v2 = (_QWORD *)v156;
            }
            if ( v143 )
            {
              v222 = v139;
              sub_186B220(v143);
              v139 = v222;
            }
            v2[12] = v139;
            *((_DWORD *)v2 + 28) = 0;
          }
        }
        else
        {
          v82->m128i_i64[0] = 0;
          *((_DWORD *)v2 + 27) = v135;
        }
      }
      goto LABEL_41;
    }
    if ( 3 * v31 < (unsigned int)(4 * (*((_DWORD *)v2 + 27) + *((_DWORD *)v2 + 28))) )
    {
      v228 = 2 * v31;
      v230 = v62;
      v219 = 16LL * (unsigned int)(2 * v31);
      v117 = (__m128i *)sub_186B270(v219);
      v118 = v228;
      v32 = v219;
      v62 = _mm_load_si128(&v230);
      v29 = v117;
      v119 = &v117[v219 / 0x10];
      if ( v228 )
      {
        if ( (v219 & 0x10) == 0 || (*v117 = 0, ++v117, v119 != v117) )
        {
          do
          {
            *v117 = 0;
            v117 += 2;
            v117[-1] = 0;
          }
          while ( v119 != v117 );
        }
      }
      v120 = (const __m128i *)v2[12];
      v33 = v119;
      v220 = v228 - 1;
      v121 = *((unsigned int *)v2 + 26);
      v122 = (__m128i *)&v120[v121];
      if ( v120 != &v120[v121] )
      {
        v123 = v2;
        v124 = v21;
        v125 = v23;
        v126 = v29;
        v127 = v120;
        v128 = &v120[v121];
        do
        {
          while ( v127->m128i_i64[0] <= 1uLL )
          {
            if ( v128 == ++v127 )
              goto LABEL_244;
          }
          v129 = 16LL * (*(_DWORD *)(v127->m128i_i64[0] + 12) & (unsigned int)v220);
          v130 = &v126[(unsigned __int64)v129 / 0x10];
          if ( v32 == v129 )
          {
LABEL_248:
            if ( v126 == v130 )
            {
LABEL_268:
              v235 = v228;
              v233 = v123;
              v232 = v119;
              v231 = v32;
              v230.m128i_i64[0] = v26;
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v131 = v126;
            while ( v131->m128i_i64[0] )
            {
              if ( v130 == ++v131 )
                goto LABEL_268;
            }
          }
          else
          {
            v131 = &v126[(unsigned __int64)v129 / 0x10];
            while ( v131->m128i_i64[0] )
            {
              if ( v119 == ++v131 )
                goto LABEL_248;
            }
          }
          v132 = _mm_loadu_si128(v127++);
          *v131 = v132;
        }
        while ( v128 != v127 );
LABEL_244:
        LODWORD(v23) = v125;
        v33 = v119;
        v122 = (__m128i *)v123[12];
        v29 = v126;
        v21 = v124;
        v2 = v123;
      }
      if ( v122 )
      {
        LODWORD(v231) = v228;
        v229 = v32;
        v230 = v62;
        sub_186B220(v122);
        v118 = v231;
        v62 = _mm_load_si128(&v230);
        v32 = v229;
      }
      v28 = *(_DWORD *)(v26 + 12);
      v2[12] = v29;
      *((_DWORD *)v2 + 26) = v118;
      *((_DWORD *)v2 + 28) = 0;
      v34 = 16LL * (v28 & (unsigned int)v220);
      v35 = &v29[(unsigned __int64)v34 / 0x10];
    }
    if ( v34 != v32 )
    {
      v63 = v35;
      v68 = nullptr;
      while ( 1 )
      {
        v69 = v63->m128i_i64[0];
        if ( v63->m128i_i64[0] > 1uLL )
        {
          if ( *(_DWORD *)(v69 + 12) == v28 && v26 == v69 )
            goto LABEL_253;
        }
        else
        {
          if ( !v69 )
          {
            if ( v68 )
              goto LABEL_264;
            v68 = v63;
            goto LABEL_265;
          }
          v68 = v63;
        }
        if ( ++v63 == v33 )
          goto LABEL_106;
      }
    }
    v68 = nullptr;
LABEL_106:
    while ( 2 )
    {
      if ( v29 == v35 )
        goto LABEL_40;
      v70 = v29->m128i_i64[0];
      if ( v29->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v70 + 12) == v28 && v26 == v70 )
          goto LABEL_271;
        goto LABEL_105;
      }
      if ( v70 )
      {
        v68 = v29;
LABEL_105:
        ++v29;
        continue;
      }
      break;
    }
    if ( v68 )
LABEL_264:
      --*((_DWORD *)v2 + 28);
    else
      v68 = v29;
LABEL_265:
    *v68 = v62;
    ++*((_DWORD *)v2 + 27);
    v18 = (*(_DWORD *)(v26 + 8))-- == 1;
    if ( v18 )
LABEL_42:
      sub_15D7BC0(v214, v26);
LABEL_34:
    v20 = v2[15];
  }
  while ( v21 != (_DWORD)v23 );
  v5 = v234;
  if ( v20 )
LABEL_36:
    *(_DWORD *)(v20 - 4) = v21;
LABEL_37:
  result = v2[16];
  if ( result )
    *(_DWORD *)(result - 4) = v5;
  return result;
}

