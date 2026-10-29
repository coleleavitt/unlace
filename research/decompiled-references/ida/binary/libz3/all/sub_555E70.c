__int64 *__fastcall sub_555E70(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 v6; // rbx
  __int64 v7; // r13
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // r14
  unsigned int v11; // eax
  char *v12; // r12
  __int64 v13; // rbx
  char *v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned int v17; // eax
  unsigned int v18; // r13d
  __int64 v19; // rbx
  __int64 v21; // r13
  unsigned int v22; // edx
  unsigned int v23; // ebx
  __int64 v24; // r12
  __int64 v25; // r12
  __int64 v26; // r15
  __int64 v27; // rbx
  char v28; // al
  unsigned int v29; // edx
  unsigned int v30; // r14d
  __int64 v31; // r14
  _QWORD *v32; // rdi
  __int64 v33; // rax
  __int64 v34; // rsi
  __int64 v35; // r15
  __int64 v36; // r13
  int v37; // r14d
  int v38; // r12d
  __int64 v39; // rcx
  int v40; // edi
  _QWORD *v41; // r8
  __int64 *v42; // rbx
  __m128i v43; // xmm1
  __int64 *v44; // r13
  __int64 v45; // r14
  __int64 *v46; // r15
  unsigned int v47; // edx
  _QWORD *v48; // rbx
  __int64 v49; // rcx
  __int64 v50; // rax
  char *v51; // rax
  char *v52; // rdi
  unsigned __int64 v53; // rax
  __int64 v54; // rcx
  unsigned int v55; // edi
  unsigned int v56; // r15d
  __int64 v57; // r14
  __int64 v58; // r13
  int v59; // r12d
  __int64 v60; // rdx
  int v61; // eax
  int v62; // esi
  _QWORD *v63; // r8
  int v64; // eax
  __int64 v65; // r13
  __int64 v66; // r12
  __int64 v67; // rbx
  int v68; // edx
  _QWORD *v69; // rcx
  __int64 v70; // rbx
  __int64 v71; // rbx
  _BYTE *v72; // rbx
  __int64 v73; // rax
  __m128i v74; // xmm2
  __int64 v75; // rdx
  __int64 *v76; // r14
  __int64 *v77; // r12
  __int64 v78; // r15
  unsigned int v79; // edx
  _QWORD *v80; // rbx
  __int64 v81; // rsi
  __int64 v82; // rax
  char *v83; // rax
  char *v84; // rdi
  unsigned __int64 v85; // rax
  __int64 v86; // rsi
  int v87; // esi
  _QWORD *v88; // r8
  int v89; // esi
  _QWORD *v90; // r8
  __int64 *v91; // r15
  __int64 v92; // r14
  char *v93; // r13
  __int64 v94; // rcx
  __int64 v95; // rdx
  char *v96; // rdi
  __int64 v97; // rdx
  __int64 v98; // rcx
  char *v99; // rax
  char *v100; // rsi
  unsigned __int64 v101; // rax
  __int64 v102; // r9
  __int64 v103; // r13
  char *v104; // rax
  char *v105; // rdi
  unsigned __int64 v106; // rax
  __int64 v107; // rsi
  unsigned __int64 v108; // rax
  __int64 v109; // r8
  __int64 *v110; // r15
  __int64 v111; // r12
  __int64 *v112; // rbx
  unsigned int v113; // edx
  _QWORD *v114; // r14
  __int64 v115; // rsi
  __int64 v116; // rax
  char *v117; // rax
  char *v118; // rdi
  unsigned __int64 v119; // rax
  __int64 v120; // rsi
  char *v121; // rax
  char *v122; // rdi
  unsigned __int64 v123; // rax
  __int64 v124; // r9
  char *v125; // rax
  char *v126; // rdi
  unsigned __int64 v127; // rax
  __int64 v128; // r9
  char *v129; // rax
  char *v130; // rdi
  unsigned __int64 v131; // rax
  __int64 v132; // r9
  __int64 v133; // r12
  int v134; // edx
  __int64 v135; // rdx
  __int64 v136; // rsi
  unsigned __int64 v137; // rax
  __int64 v138; // rsi
  unsigned __int64 v139; // rax
  __int64 v140; // r8
  unsigned __int64 v141; // rax
  __int64 v142; // r8
  __int64 k; // rax
  __int64 v144; // rbx
  _QWORD *v145; // rdi
  __int64 v146; // rax
  __int64 v147; // r12
  _BYTE *v148; // r14
  __int64 v149; // r13
  __int64 v150; // r15
  __int64 v151; // rdx
  __int64 *v152; // r14
  char *v153; // rdi
  unsigned __int64 v154; // rdx
  __int64 v155; // rcx
  _BYTE *v156; // r15
  __int64 v157; // r14
  __int64 v158; // r12
  __int64 v159; // rdx
  _QWORD *v160; // r15
  char *v161; // rdi
  __int64 v162; // rdx
  __int64 v163; // rsi
  unsigned __int64 v164; // rax
  __int64 v165; // r10
  __int64 v166; // r12
  unsigned int v167; // r13d
  _QWORD *v168; // rdi
  __int64 v169; // rax
  __int64 v170; // rax
  __int64 v171; // rdx
  __int64 v172; // r9
  unsigned __int64 v173; // rdx
  __int64 v174; // r8
  unsigned __int64 v175; // rax
  __int64 v176; // r10
  unsigned __int64 v177; // rax
  __int64 v178; // r10
  unsigned __int64 v179; // rax
  __int64 v180; // r10
  __int64 v181; // rdx
  __int64 v182; // rsi
  __int64 i; // rax
  __int64 j; // rax
  __int64 *v185; // [rsp+0h] [rbp-258h]
  int v187; // [rsp+10h] [rbp-248h]
  __int64 v188; // [rsp+10h] [rbp-248h]
  int v189; // [rsp+10h] [rbp-248h]
  __int64 v190; // [rsp+18h] [rbp-240h]
  __int64 v193; // [rsp+40h] [rbp-218h]
  _QWORD *v194; // [rsp+40h] [rbp-218h]
  int v195; // [rsp+40h] [rbp-218h]
  int v196; // [rsp+40h] [rbp-218h]
  int v197; // [rsp+40h] [rbp-218h]
  __int64 v198; // [rsp+40h] [rbp-218h]
  char v199; // [rsp+57h] [rbp-201h]
  _QWORD *v200; // [rsp+58h] [rbp-200h]
  _QWORD *v201; // [rsp+60h] [rbp-1F8h]
  __int64 v202; // [rsp+70h] [rbp-1E8h]
  __int64 v203; // [rsp+70h] [rbp-1E8h]
  __int64 v204; // [rsp+70h] [rbp-1E8h]
  _QWORD *v205; // [rsp+78h] [rbp-1E0h]
  _QWORD *v206; // [rsp+78h] [rbp-1E0h]
  _QWORD *v207; // [rsp+78h] [rbp-1E0h]
  unsigned int v208; // [rsp+8Ch] [rbp-1CCh] BYREF
  void *v209; // [rsp+90h] [rbp-1C8h] BYREF
  __int64 v210; // [rsp+98h] [rbp-1C0h]
  _BYTE v211[64]; // [rsp+A0h] [rbp-1B8h] BYREF
  void *v212; // [rsp+E0h] [rbp-178h]
  __int64 v213; // [rsp+E8h] [rbp-170h]
  _BYTE v214[64]; // [rsp+F0h] [rbp-168h] BYREF
  void *v215; // [rsp+130h] [rbp-128h]
  __int64 v216; // [rsp+138h] [rbp-120h]
  _BYTE v217[64]; // [rsp+140h] [rbp-118h] BYREF
  void *v218; // [rsp+180h] [rbp-D8h]
  __int64 v219; // [rsp+188h] [rbp-D0h]
  _BYTE v220[64]; // [rsp+190h] [rbp-C8h] BYREF
  void *v221; // [rsp+1D0h] [rbp-88h]
  unsigned __int64 v222; // [rsp+1D8h] [rbp-80h]
  _BYTE v223[120]; // [rsp+1E0h] [rbp-78h] BYREF

  v6 = sub_1829F10(a2, a3, *a4);
  v185 = (__int64 *)sub_17E9C90(a2 + 560, 88);
  v200 = v185 + 3;
  v185[1] = (__int64)(v185 + 3);
  *v185 = v6;
  v185[2] = 0x800000000LL;
  if ( !*((_DWORD *)a4 + 4) )
    return v185;
  v210 = 0x800000000LL;
  v7 = 0;
  v209 = v211;
  v212 = v214;
  v213 = 0x800000000LL;
  do
  {
    v10 = sub_1829B00(a1, *(_QWORD *)(a4[1] + 8 * v7));
    v11 = v210;
    v12 = (char *)v209;
    if ( (unsigned int)v210 >= HIDWORD(v210) )
    {
      v13 = (unsigned int)(2 * HIDWORD(v210));
      v12 = (char *)sub_186B270(8 * v13);
      v11 = v210;
      v14 = (char *)v209;
      if ( (_DWORD)v210 )
      {
        if ( (unsigned int)(v210 - 1) <= 2 || v12 == (char *)v209 + 8 )
        {
          v181 = 0;
          v182 = 8LL * (unsigned int)v210;
          do
          {
            *(_QWORD *)&v12[v181] = *(_QWORD *)&v14[v181];
            v181 += 8;
          }
          while ( v181 != v182 );
        }
        else
        {
          v15 = 0;
          v16 = 16LL * ((unsigned int)v210 >> 1);
          do
          {
            *(__m128i *)&v12[v15] = _mm_loadu_si128((const __m128i *)&v14[v15]);
            v15 += 16;
          }
          while ( v15 != v16 );
          if ( (v11 & 1) != 0 )
            *(_QWORD *)&v12[8 * (v11 & 0xFFFFFFFE)] = *(_QWORD *)&v14[8 * (v11 & 0xFFFFFFFE)];
        }
      }
      if ( v14 && v14 != v211 )
      {
        sub_186B220(v14);
        v11 = v210;
      }
      v209 = v12;
      HIDWORD(v210) = v13;
    }
    v8 = v11;
    LODWORD(v9) = v11 + 1;
    ++v7;
    *(_QWORD *)&v12[8 * v8] = v10;
    LODWORD(v210) = v9;
  }
  while ( (unsigned int)v7 < *((_DWORD *)a4 + 4) );
  v199 = 0;
  v190 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
LABEL_17:
      v199 |= (_DWORD)v9 == 0;
      if ( v199 )
        goto LABEL_23;
      v17 = sub_555B40(a1, *a4, (__int64)&v209, a3, (int *)&v208);
      v18 = v17;
      if ( v17 != 5 )
        break;
      v55 = v210;
      v215 = v217;
      v216 = 0x800000000LL;
      v218 = v220;
      v219 = 0x800000000LL;
      if ( (_DWORD)v210 )
      {
        v56 = v208;
        v57 = 0;
        v58 = (2 * v208) >> 5;
        v187 = 1 << ((2 * v208) & 0x1F);
        v59 = 1 << (2 * v208 + 1);
        do
        {
          while ( 1 )
          {
            v60 = *((_QWORD *)v209 + v57);
            v61 = ((*(_DWORD *)(v60 + 4 * v58) & v59) != 0) | (2 * ((*(_DWORD *)(v60 + 4 * v58) & v187) != 0));
            if ( v61 != 2 )
              break;
            v62 = v216;
            if ( (unsigned int)v216 >= HIDWORD(v216) )
            {
              v203 = *((_QWORD *)v209 + v57);
              v196 = 2 * HIDWORD(v216);
              v125 = (char *)sub_186B270(8LL * (unsigned int)(2 * HIDWORD(v216)));
              v62 = v216;
              v126 = (char *)v215;
              v63 = v125;
              v60 = v203;
              if ( (_DWORD)v216 )
              {
                if ( (unsigned int)(v216 - 1) <= 2 || v125 == (char *)v215 + 8 )
                {
                  v177 = 0;
                  v178 = 8LL * (unsigned int)v216;
                  do
                  {
                    v63[v177 / 8] = *(_QWORD *)&v126[v177];
                    v177 += 8LL;
                  }
                  while ( v178 != v177 );
                }
                else
                {
                  v127 = 0;
                  v128 = 16LL * ((unsigned int)v216 >> 1);
                  do
                  {
                    *(__m128i *)&v63[v127 / 8] = _mm_loadu_si128((const __m128i *)&v126[v127]);
                    v127 += 16LL;
                  }
                  while ( v128 != v127 );
                  if ( (v62 & 1) != 0 )
                    v63[v62 & 0xFFFFFFFE] = *(_QWORD *)&v126[8 * (v62 & 0xFFFFFFFE)];
                }
              }
              if ( v126 != v217 && v126 )
              {
                v206 = v63;
                sub_186B220(v126);
                v62 = v216;
                v63 = v206;
                v60 = v203;
              }
              v215 = v63;
              v55 = v210;
              HIDWORD(v216) = v196;
            }
            else
            {
              v63 = v215;
            }
            ++v57;
            v63[v62] = v60;
            LODWORD(v216) = v62 + 1;
            if ( (unsigned int)v57 >= v55 )
              goto LABEL_98;
          }
          if ( v61 == 3 )
          {
            v89 = v213;
            if ( (unsigned int)v213 >= HIDWORD(v213) )
            {
              v202 = *((_QWORD *)v209 + v57);
              v195 = 2 * HIDWORD(v213);
              v121 = (char *)sub_186B270(8LL * (unsigned int)(2 * HIDWORD(v213)));
              v89 = v213;
              v122 = (char *)v212;
              v90 = v121;
              v60 = v202;
              if ( (_DWORD)v213 )
              {
                if ( (unsigned int)(v213 - 1) <= 2 || v121 == (char *)v212 + 8 )
                {
                  v179 = 0;
                  v180 = 8LL * (unsigned int)v213;
                  do
                  {
                    v90[v179 / 8] = *(_QWORD *)&v122[v179];
                    v179 += 8LL;
                  }
                  while ( v179 != v180 );
                }
                else
                {
                  v123 = 0;
                  v124 = 16LL * ((unsigned int)v213 >> 1);
                  do
                  {
                    *(__m128i *)&v90[v123 / 8] = _mm_loadu_si128((const __m128i *)&v122[v123]);
                    v123 += 16LL;
                  }
                  while ( v124 != v123 );
                  if ( (v89 & 1) != 0 )
                    v90[v89 & 0xFFFFFFFE] = *(_QWORD *)&v122[8 * (v89 & 0xFFFFFFFE)];
                }
              }
              if ( v122 && v122 != v214 )
              {
                v205 = v90;
                sub_186B220(v122);
                v89 = v213;
                v90 = v205;
                v60 = v202;
              }
              v212 = v90;
              v55 = v210;
              HIDWORD(v213) = v195;
            }
            else
            {
              v90 = v212;
            }
            v90[v89] = v60;
            LODWORD(v213) = v89 + 1;
          }
          else
          {
            if ( v61 != 1 )
            {
              sub_1872CE0("");
              sub_1873130(114, 365);
            }
            v87 = v219;
            if ( (unsigned int)v219 >= HIDWORD(v219) )
            {
              v204 = *((_QWORD *)v209 + v57);
              v197 = 2 * HIDWORD(v219);
              v129 = (char *)sub_186B270(8LL * (unsigned int)(2 * HIDWORD(v219)));
              v87 = v219;
              v130 = (char *)v218;
              v88 = v129;
              v60 = v204;
              if ( (_DWORD)v219 )
              {
                if ( (unsigned int)(v219 - 1) <= 2 || v129 == (char *)v218 + 8 )
                {
                  v175 = 0;
                  v176 = 8LL * (unsigned int)v219;
                  do
                  {
                    v88[v175 / 8] = *(_QWORD *)&v130[v175];
                    v175 += 8LL;
                  }
                  while ( v176 != v175 );
                }
                else
                {
                  v131 = 0;
                  v132 = 16LL * ((unsigned int)v219 >> 1);
                  do
                  {
                    *(__m128i *)&v88[v131 / 8] = _mm_loadu_si128((const __m128i *)&v130[v131]);
                    v131 += 16LL;
                  }
                  while ( v132 != v131 );
                  if ( (v87 & 1) != 0 )
                    v88[v87 & 0xFFFFFFFE] = *(_QWORD *)&v130[8 * (v87 & 0xFFFFFFFE)];
                }
              }
              if ( v130 && v130 != v220 )
              {
                v207 = v88;
                sub_186B220(v130);
                v87 = v219;
                v88 = v207;
                v60 = v204;
              }
              v218 = v88;
              v55 = v210;
              HIDWORD(v219) = v197;
            }
            else
            {
              v88 = v218;
            }
            v88[v87] = v60;
            LODWORD(v219) = v87 + 1;
          }
          ++v57;
        }
        while ( (unsigned int)v57 < v55 );
LABEL_98:
        v64 = v219;
        if ( (_DWORD)v216 )
        {
          v188 = 0;
          v65 = 0;
          if ( !(_DWORD)v219 )
            goto LABEL_110;
          while ( 1 )
          {
            v66 = 0;
            do
            {
              while ( 1 )
              {
                v67 = sub_1829B00(a1, *((_QWORD *)v215 + v188));
                if ( v65 )
                  sub_182A4B0(a1, v65);
                sub_182A020(a1, v67, v56, 3);
                v65 = v67;
                if ( (unsigned __int8)sub_182A530(a1, v67, *((_QWORD *)v218 + v66)) )
                  break;
                v64 = v219;
                if ( (unsigned int)++v66 >= (unsigned int)v219 )
                  goto LABEL_108;
              }
              sub_182A020(a1, v67, v56, 3);
              v68 = v213;
              if ( (unsigned int)v213 >= HIDWORD(v213) )
              {
                v103 = (unsigned int)(2 * HIDWORD(v213));
                v104 = (char *)sub_186B270(8 * v103);
                v68 = v213;
                v105 = (char *)v212;
                v69 = v104;
                if ( (_DWORD)v213 )
                {
                  if ( (unsigned int)(v213 - 1) <= 2 || v104 == (char *)v212 + 8 )
                  {
                    v108 = 0;
                    v109 = 8LL * (unsigned int)v213;
                    do
                    {
                      v69[v108 / 8] = *(_QWORD *)&v105[v108];
                      v108 += 8LL;
                    }
                    while ( v109 != v108 );
                  }
                  else
                  {
                    v106 = 0;
                    v107 = 16LL * ((unsigned int)v213 >> 1);
                    do
                    {
                      *(__m128i *)&v69[v106 / 8] = _mm_loadu_si128((const __m128i *)&v105[v106]);
                      v106 += 16LL;
                    }
                    while ( v107 != v106 );
                    if ( (v68 & 1) != 0 )
                      v69[v68 & 0xFFFFFFFE] = *(_QWORD *)&v105[8 * (v68 & 0xFFFFFFFE)];
                  }
                }
                if ( v105 != v214 && v105 )
                {
                  v194 = v69;
                  sub_186B220(v105);
                  v68 = v213;
                  v69 = v194;
                }
                v212 = v69;
                HIDWORD(v213) = v103;
              }
              else
              {
                v69 = v212;
              }
              ++v66;
              v65 = 0;
              v69[v68] = v67;
              v64 = v219;
              LODWORD(v213) = v68 + 1;
            }
            while ( (unsigned int)v66 < (unsigned int)v219 );
LABEL_108:
            if ( (int)v188 + 1 >= (unsigned int)v216 )
              break;
            ++v188;
            if ( !v64 )
              goto LABEL_110;
          }
          if ( (_DWORD)v216 )
          {
LABEL_110:
            v70 = 0;
            do
              sub_182A4B0(a1, *((_QWORD *)v215 + v70++));
            while ( (unsigned int)v70 < (unsigned int)v216 );
            v64 = v219;
          }
        }
        else
        {
          v65 = 0;
        }
        LODWORD(v216) = 0;
        v71 = 0;
        if ( v64 )
        {
          do
            sub_182A4B0(a1, *((_QWORD *)v218 + v71++));
          while ( (unsigned int)v71 < (unsigned int)v219 );
        }
      }
      else
      {
        LODWORD(v216) = 0;
        v65 = 0;
      }
      v72 = v209;
      LODWORD(v219) = 0;
      v221 = v223;
      v222 = 0x800000000LL;
      v73 = (unsigned int)v210;
      if ( v209 == v211 )
      {
        if ( !(_DWORD)v210 )
        {
          v75 = (unsigned int)v213;
          v76 = (__int64 *)v212;
          if ( !(_DWORD)v213 )
            goto LABEL_207;
LABEL_118:
          v77 = &v76[v75];
          LODWORD(v78) = HIDWORD(v210);
          v79 = 0;
          do
          {
            if ( v79 < (unsigned int)v78 )
            {
              v80 = v209;
            }
            else
            {
              v78 = (unsigned int)(2 * v78);
              v83 = (char *)sub_186B270(8 * v78);
              v79 = v210;
              v84 = (char *)v209;
              v80 = v83;
              if ( (_DWORD)v210 )
              {
                if ( (unsigned int)(v210 - 1) <= 2 || v83 == (char *)v209 + 8 )
                {
                  v141 = 0;
                  v142 = 8LL * (unsigned int)v210;
                  do
                  {
                    v80[v141 / 8] = *(_QWORD *)&v84[v141];
                    v141 += 8LL;
                  }
                  while ( v142 != v141 );
                }
                else
                {
                  v85 = 0;
                  v86 = 16LL * ((unsigned int)v210 >> 1);
                  do
                  {
                    *(__m128i *)&v80[v85 / 8] = _mm_loadu_si128((const __m128i *)&v84[v85]);
                    v85 += 16LL;
                  }
                  while ( v86 != v85 );
                  if ( (v79 & 1) != 0 )
                    v80[v79 & 0xFFFFFFFE] = *(_QWORD *)&v84[8 * (v79 & 0xFFFFFFFE)];
                }
              }
              if ( v84 != v211 && v84 )
              {
                sub_186B220(v84);
                v79 = v210;
              }
              v209 = v80;
              HIDWORD(v210) = v78;
            }
            v81 = *v76;
            v82 = v79;
            ++v76;
            ++v79;
            v80[v82] = v81;
            LODWORD(v210) = v79;
          }
          while ( v76 != v77 );
          v72 = v221;
          v73 = (unsigned int)v222;
          goto LABEL_187;
        }
        v156 = v211;
        v198 = a1;
        v72 = v223;
        v157 = 0;
        LODWORD(v73) = 0;
        LODWORD(a1) = 8;
        v158 = 8LL * (unsigned int)v210;
        while ( 1 )
        {
          v160 = &v156[v157];
          if ( (unsigned int)v73 >= (unsigned int)a1 )
          {
            a1 = (unsigned int)(2 * a1);
            v73 = sub_186B270(8 * a1);
            v161 = (char *)v221;
            v72 = (_BYTE *)v73;
            LODWORD(v73) = v222;
            if ( (_DWORD)v222 )
            {
              if ( (unsigned int)(v222 - 1) <= 2 || v72 == (char *)v221 + 8 )
              {
                v171 = 0;
                v172 = 8LL * (unsigned int)v222;
                do
                {
                  *(_QWORD *)&v72[v171] = *(_QWORD *)&v161[v171];
                  v171 += 8;
                }
                while ( v171 != v172 );
              }
              else
              {
                v162 = 0;
                v163 = 16LL * ((unsigned int)v222 >> 1);
                do
                {
                  *(__m128i *)&v72[v162] = _mm_loadu_si128((const __m128i *)&v161[v162]);
                  v162 += 16;
                }
                while ( v162 != v163 );
                if ( (v73 & 1) != 0 )
                  *(_QWORD *)&v72[8 * (v73 & 0xFFFFFFFE)] = *(_QWORD *)&v161[8 * (v73 & 0xFFFFFFFE)];
              }
            }
            if ( v161 && v161 != v223 )
            {
              sub_186B220(v161);
              LODWORD(v73) = v222;
            }
            v221 = v72;
            HIDWORD(v222) = a1;
          }
          v159 = (unsigned int)v73;
          v157 += 8;
          v73 = (unsigned int)(v73 + 1);
          *(_QWORD *)&v72[8 * v159] = *v160;
          LODWORD(v222) = v73;
          if ( v158 == v157 )
            break;
          v156 = v209;
        }
        a1 = v198;
      }
      else
      {
        v74 = _mm_cvtsi32_si128(HIDWORD(v210));
        v221 = v209;
        v209 = v211;
        HIDWORD(v210) = 8;
        v222 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v210), v74).m128i_u64[0];
      }
      v75 = (unsigned int)v213;
      v76 = (__int64 *)v212;
      LODWORD(v210) = 0;
      if ( (_DWORD)v213 )
        goto LABEL_118;
LABEL_187:
      LODWORD(v213) = 0;
      if ( (_DWORD)v73 )
      {
        v110 = (__int64 *)v72;
        LODWORD(v111) = HIDWORD(v213);
        v112 = (__int64 *)&v72[8 * v73];
        v113 = 0;
        do
        {
          if ( v113 < (unsigned int)v111 )
          {
            v114 = v212;
          }
          else
          {
            v111 = (unsigned int)(2 * v111);
            v117 = (char *)sub_186B270(8 * v111);
            v113 = v213;
            v118 = (char *)v212;
            v114 = v117;
            if ( (_DWORD)v213 )
            {
              if ( (unsigned int)(v213 - 1) <= 2 || v117 == (char *)v212 + 8 )
              {
                v139 = 0;
                v140 = 8LL * (unsigned int)v213;
                do
                {
                  v114[v139 / 8] = *(_QWORD *)&v118[v139];
                  v139 += 8LL;
                }
                while ( v140 != v139 );
              }
              else
              {
                v119 = 0;
                v120 = 16LL * ((unsigned int)v213 >> 1);
                do
                {
                  *(__m128i *)&v114[v119 / 8] = _mm_loadu_si128((const __m128i *)&v118[v119]);
                  v119 += 16LL;
                }
                while ( v120 != v119 );
                if ( (v113 & 1) != 0 )
                  v114[v113 & 0xFFFFFFFE] = *(_QWORD *)&v118[8 * (v113 & 0xFFFFFFFE)];
              }
            }
            if ( v118 != v214 && v118 )
            {
              sub_186B220(v118);
              v113 = v213;
            }
            v212 = v114;
            HIDWORD(v213) = v111;
          }
          v115 = *v110;
          v116 = v113;
          ++v110;
          ++v113;
          v114[v116] = v115;
          LODWORD(v213) = v113;
        }
        while ( v112 != v110 );
        v72 = v221;
      }
      if ( v72 && v72 != v223 )
        sub_186B220(v72);
LABEL_207:
      LODWORD(v213) = 0;
      if ( v65 )
        sub_182A4B0(a1, v65);
      if ( v218 != v220 && v218 )
        sub_186B220(v218);
      if ( v215 != v217 && v215 )
        sub_186B220(v215);
      LODWORD(v9) = v210;
    }
    if ( v17 <= 2 )
      break;
    v34 = (unsigned int)v210;
    if ( (_DWORD)v210 )
    {
      v35 = 0;
      v36 = (2 * v208) >> 5;
      v37 = 1 << ((2 * v208) & 0x1F);
      v38 = 1 << (2 * v208 + 1);
      do
      {
        while ( 1 )
        {
          v39 = *((_QWORD *)v209 + v35);
          if ( (((*(_DWORD *)(v39 + 4 * v36) & v38) != 0) | (2 * ((*(_DWORD *)(v39 + 4 * v36) & v37) != 0))) == 3 )
            break;
          sub_182A4B0(a1, *((_QWORD *)v209 + v35));
          v34 = (unsigned int)v210;
          if ( (unsigned int)++v35 >= (unsigned int)v210 )
            goto LABEL_70;
        }
        v40 = v213;
        if ( (unsigned int)v213 >= HIDWORD(v213) )
        {
          v193 = *((_QWORD *)v209 + v35);
          v189 = 2 * HIDWORD(v213);
          v99 = (char *)sub_186B270(8LL * (unsigned int)(2 * HIDWORD(v213)));
          v40 = v213;
          v100 = (char *)v212;
          v41 = v99;
          v39 = v193;
          if ( (_DWORD)v213 )
          {
            if ( (unsigned int)(v213 - 1) <= 2 || v99 == (char *)v212 + 8 )
            {
              v164 = 0;
              v165 = 8LL * (unsigned int)v213;
              do
              {
                v41[v164 / 8] = *(_QWORD *)&v100[v164];
                v164 += 8LL;
              }
              while ( v164 != v165 );
            }
            else
            {
              v101 = 0;
              v102 = 16LL * ((unsigned int)v213 >> 1);
              do
              {
                *(__m128i *)&v41[v101 / 8] = _mm_loadu_si128((const __m128i *)&v100[v101]);
                v101 += 16LL;
              }
              while ( v101 != v102 );
              if ( (v40 & 1) != 0 )
                v41[v40 & 0xFFFFFFFE] = *(_QWORD *)&v100[8 * (v40 & 0xFFFFFFFE)];
            }
          }
          if ( v100 != v214 && v100 )
          {
            v201 = v41;
            sub_186B220(v100);
            v40 = v213;
            v41 = v201;
            v39 = v193;
          }
          v212 = v41;
          v34 = (unsigned int)v210;
          HIDWORD(v213) = v189;
        }
        else
        {
          v41 = v212;
        }
        ++v35;
        v41[v40] = v39;
        LODWORD(v213) = v40 + 1;
      }
      while ( (unsigned int)v35 < (unsigned int)v34 );
    }
LABEL_70:
    v42 = (__int64 *)v212;
    v221 = v223;
    v222 = 0x800000000LL;
    v9 = (unsigned int)v213;
    if ( v212 != v214 )
    {
      v43 = _mm_cvtsi32_si128(HIDWORD(v213));
      v221 = v212;
      v212 = v214;
      HIDWORD(v213) = 8;
      v222 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v213), v43).m128i_u64[0];
      goto LABEL_72;
    }
    if ( (_DWORD)v213 )
    {
      v147 = 8LL * (unsigned int)v213;
      v42 = (__int64 *)v223;
      v148 = v214;
      v149 = 0;
      LODWORD(v150) = 8;
      LODWORD(v9) = 0;
      while ( 1 )
      {
        v152 = (__int64 *)&v148[v149];
        if ( (unsigned int)v9 >= (unsigned int)v150 )
        {
          v150 = (unsigned int)(2 * v150);
          v9 = sub_186B270(8 * v150);
          v153 = (char *)v221;
          v42 = (__int64 *)v9;
          LODWORD(v9) = v222;
          if ( (_DWORD)v222 )
          {
            if ( (unsigned int)(v222 - 1) <= 2 || v42 == (__int64 *)((char *)v221 + 8) )
            {
              v173 = 0;
              v174 = 8LL * (unsigned int)v222;
              do
              {
                v42[v173 / 8] = *(_QWORD *)&v153[v173];
                v173 += 8LL;
              }
              while ( v174 != v173 );
            }
            else
            {
              v154 = 0;
              v155 = 16LL * ((unsigned int)v222 >> 1);
              do
              {
                *(__m128i *)&v42[v154 / 8] = _mm_loadu_si128((const __m128i *)&v153[v154]);
                v154 += 16LL;
              }
              while ( v155 != v154 );
              if ( (v9 & 1) != 0 )
                v42[(unsigned int)v9 & 0xFFFFFFFE] = *(_QWORD *)&v153[8 * (v9 & 0xFFFFFFFE)];
            }
          }
          if ( v153 != v223 && v153 )
          {
            sub_186B220(v153);
            LODWORD(v9) = v222;
          }
          v221 = v42;
          HIDWORD(v222) = v150;
        }
        v151 = (unsigned int)v9;
        v149 += 8;
        v9 = (unsigned int)(v9 + 1);
        v42[v151] = *v152;
        LODWORD(v222) = v9;
        if ( v149 == v147 )
          break;
        v148 = v212;
      }
      v34 = (unsigned int)v210;
LABEL_72:
      LODWORD(v213) = 0;
      v44 = (__int64 *)v209;
      if ( !(_DWORD)v34 )
        goto LABEL_140;
      goto LABEL_73;
    }
    v44 = (__int64 *)v209;
    if ( !(_DWORD)v34 )
    {
      LODWORD(v210) = 0;
      goto LABEL_25;
    }
LABEL_73:
    LODWORD(v45) = HIDWORD(v213);
    v46 = &v44[v34];
    v47 = 0;
    do
    {
      if ( v47 < (unsigned int)v45 )
      {
        v48 = v212;
      }
      else
      {
        v45 = (unsigned int)(2 * v45);
        v51 = (char *)sub_186B270(8 * v45);
        v47 = v213;
        v52 = (char *)v212;
        v48 = v51;
        if ( (_DWORD)v213 )
        {
          if ( (unsigned int)(v213 - 1) <= 2 || v51 == (char *)v212 + 8 )
          {
            v137 = 0;
            v138 = 8LL * (unsigned int)v213;
            do
            {
              v48[v137 / 8] = *(_QWORD *)&v52[v137];
              v137 += 8LL;
            }
            while ( v138 != v137 );
          }
          else
          {
            v53 = 0;
            v54 = 16LL * ((unsigned int)v213 >> 1);
            do
            {
              *(__m128i *)&v48[v53 / 8] = _mm_loadu_si128((const __m128i *)&v52[v53]);
              v53 += 16LL;
            }
            while ( v54 != v53 );
            if ( (v47 & 1) != 0 )
              v48[v47 & 0xFFFFFFFE] = *(_QWORD *)&v52[8 * (v47 & 0xFFFFFFFE)];
          }
        }
        if ( v52 != v214 && v52 )
        {
          sub_186B220(v52);
          v47 = v213;
        }
        v212 = v48;
        HIDWORD(v213) = v45;
      }
      v49 = *v44;
      v50 = v47;
      ++v44;
      ++v47;
      v48[v50] = v49;
      LODWORD(v213) = v47;
    }
    while ( v44 != v46 );
    v42 = (__int64 *)v221;
    v9 = (unsigned int)v222;
LABEL_140:
    LODWORD(v210) = 0;
    if ( (_DWORD)v9 )
    {
      v91 = &v42[v9];
      LODWORD(v92) = HIDWORD(v210);
      LODWORD(v9) = 0;
      do
      {
        if ( (unsigned int)v9 < (unsigned int)v92 )
        {
          v93 = (char *)v209;
        }
        else
        {
          v92 = (unsigned int)(2 * v92);
          v93 = (char *)sub_186B270(8 * v92);
          LODWORD(v9) = v210;
          v96 = (char *)v209;
          if ( (_DWORD)v210 )
          {
            if ( (unsigned int)(v210 - 1) <= 2 || v93 == (char *)v209 + 8 )
            {
              v135 = 0;
              v136 = 8LL * (unsigned int)v210;
              do
              {
                *(_QWORD *)&v93[v135] = *(_QWORD *)&v96[v135];
                v135 += 8;
              }
              while ( v136 != v135 );
            }
            else
            {
              v97 = 0;
              v98 = 16LL * ((unsigned int)v210 >> 1);
              do
              {
                *(__m128i *)&v93[v97] = _mm_loadu_si128((const __m128i *)&v96[v97]);
                v97 += 16;
              }
              while ( v97 != v98 );
              if ( (v9 & 1) != 0 )
                *(_QWORD *)&v93[8 * (v9 & 0xFFFFFFFE)] = *(_QWORD *)&v96[8 * (v9 & 0xFFFFFFFE)];
            }
          }
          if ( v96 != v211 && v96 )
          {
            sub_186B220(v96);
            LODWORD(v9) = v210;
          }
          v209 = v93;
          HIDWORD(v210) = v92;
        }
        v94 = *v42;
        v95 = (unsigned int)v9;
        ++v42;
        LODWORD(v9) = v9 + 1;
        *(_QWORD *)&v93[8 * v95] = v94;
        LODWORD(v210) = v9;
      }
      while ( v42 != v91 );
      v42 = (__int64 *)v221;
    }
    if ( v42 != (__int64 *)v223 && v42 )
    {
      sub_186B220(v42);
      LODWORD(v9) = v210;
    }
    LODWORD(v213) = 0;
  }
  if ( v17 != 1 )
  {
    if ( v17 == 2 )
    {
      LODWORD(v9) = v210;
    }
    else
    {
      v21 = sub_1829B00(a2, *v185);
      if ( v190 )
        sub_182A4B0(a2, v190);
      v22 = *((_DWORD *)v185 + 4);
      v23 = *((_DWORD *)v185 + 5);
      if ( v22 >= v23 )
      {
        v144 = 2 * v23;
        v24 = sub_186B270(8 * v144);
        v22 = *((_DWORD *)v185 + 4);
        v145 = (_QWORD *)v185[1];
        if ( v22 )
        {
          if ( v22 - 1 <= 2 || (_QWORD *)v24 == v145 + 1 )
          {
            for ( i = 0; i != v22; ++i )
              *(_QWORD *)(v24 + i * 8) = v145[i];
          }
          else
          {
            v146 = 0;
            do
            {
              *(__m128i *)(v24 + v146 * 8) = _mm_loadu_si128((const __m128i *)&v145[v146]);
              v146 += 2;
            }
            while ( v146 != 2LL * (v22 >> 1) );
            if ( (v22 & 1) != 0 )
              *(_QWORD *)(v24 + 8LL * (v22 & 0xFFFFFFFE)) = v145[v22 & 0xFFFFFFFE];
          }
        }
        if ( v200 != v145 && v145 )
        {
          sub_186B220(v145);
          v22 = *((_DWORD *)v185 + 4);
        }
        v185[1] = v24;
        *((_DWORD *)v185 + 5) = v144;
      }
      else
      {
        v24 = v185[1];
      }
      v190 = 0;
      *(_QWORD *)(v24 + 8LL * v22) = v21;
      *((_DWORD *)v185 + 4) = v22 + 1;
      LODWORD(v9) = v210;
    }
    goto LABEL_23;
  }
  if ( (_DWORD)v210 )
  {
    v25 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v27 = sub_1829F10(a2, a3, *((_QWORD *)v209 + v25));
        if ( v190 )
          sub_182A4B0(a2, v190);
        v28 = sub_182A660(a2, *v185, v27);
        v29 = *((_DWORD *)v185 + 4);
        if ( v28 )
        {
          v133 = 0;
          if ( v29 )
          {
            do
              sub_182A4B0(a2, *(_QWORD *)(v185[1] + 8 * v133++));
            while ( (unsigned int)v133 < *((_DWORD *)v185 + 4) );
          }
          v134 = *((_DWORD *)v185 + 5);
          *((_DWORD *)v185 + 4) = 0;
          if ( v134 )
          {
            v9 = v185[1];
          }
          else
          {
            v166 = sub_186B270(0);
            v167 = *((_DWORD *)v185 + 4);
            v168 = (_QWORD *)v185[1];
            if ( v167 )
            {
              if ( v167 - 1 <= 2 || (_QWORD *)v166 == v168 + 1 )
              {
                for ( j = 0; j != v167; ++j )
                  *(_QWORD *)(v166 + j * 8) = v168[j];
              }
              else
              {
                v169 = 0;
                do
                {
                  *(__m128i *)(v166 + v169 * 8) = _mm_loadu_si128((const __m128i *)&v168[v169]);
                  v169 += 2;
                }
                while ( 2LL * (v167 >> 1) != v169 );
                if ( (v167 & 1) != 0 )
                  *(_QWORD *)(v166 + 8LL * (v167 & 0xFFFFFFFE)) = v168[v167 & 0xFFFFFFFE];
              }
            }
            if ( v168 && v200 != v168 )
            {
              sub_186B220(v168);
              v167 = *((_DWORD *)v185 + 4);
            }
            v185[1] = v166;
            *((_DWORD *)v185 + 5) = 0;
            v170 = v167;
            v18 = v167 + 1;
            v9 = v166 + 8 * v170;
          }
          *(_QWORD *)v9 = v27;
          v190 = 0;
          *((_DWORD *)v185 + 4) = v18;
          LODWORD(v9) = v210;
LABEL_23:
          v19 = 0;
          if ( (_DWORD)v9 )
          {
            do
              sub_182A4B0(a1, *((_QWORD *)v209 + v19++));
            while ( (unsigned int)v19 < (unsigned int)v210 );
          }
          goto LABEL_25;
        }
        if ( v29 )
          break;
LABEL_49:
        v30 = *((_DWORD *)v185 + 5);
        if ( v29 < v30 )
        {
          v26 = v185[1];
        }
        else
        {
          v31 = 2 * v30;
          v26 = sub_186B270(8 * v31);
          v29 = *((_DWORD *)v185 + 4);
          v32 = (_QWORD *)v185[1];
          if ( v29 )
          {
            if ( v29 - 1 <= 2 || (_QWORD *)v26 == v32 + 1 )
            {
              for ( k = 0; k != v29; ++k )
                *(_QWORD *)(v26 + k * 8) = v32[k];
            }
            else
            {
              v33 = 0;
              do
              {
                *(__m128i *)(v26 + v33 * 8) = _mm_loadu_si128((const __m128i *)&v32[v33]);
                v33 += 2;
              }
              while ( 2LL * (v29 >> 1) != v33 );
              if ( (v29 & 1) != 0 )
                *(_QWORD *)(v26 + 8LL * (v29 & 0xFFFFFFFE)) = v32[v29 & 0xFFFFFFFE];
            }
          }
          if ( v200 != v32 && v32 )
          {
            sub_186B220(v32);
            v29 = *((_DWORD *)v185 + 4);
          }
          v185[1] = v26;
          *((_DWORD *)v185 + 5) = v31;
        }
        v190 = 0;
        ++v25;
        *(_QWORD *)(v26 + 8LL * v29) = v27;
        *((_DWORD *)v185 + 4) = v29 + 1;
        LODWORD(v9) = v210;
        if ( (unsigned int)v25 >= (unsigned int)v210 )
        {
LABEL_62:
          v199 = 1;
          goto LABEL_17;
        }
      }
      if ( !(unsigned __int8)sub_182A660(a2, *(_QWORD *)v185[1], v27) )
      {
        v29 = *((_DWORD *)v185 + 4);
        goto LABEL_49;
      }
      LODWORD(v9) = v210;
      ++v25;
      v190 = v27;
      if ( (unsigned int)v25 >= (unsigned int)v210 )
        goto LABEL_62;
    }
  }
LABEL_25:
  if ( v212 != v214 && v212 )
    sub_186B220(v212);
  if ( v209 != v211 && v209 )
    sub_186B220(v209);
  if ( v190 )
    sub_182A4B0(a2, v190);
  return v185;
}

