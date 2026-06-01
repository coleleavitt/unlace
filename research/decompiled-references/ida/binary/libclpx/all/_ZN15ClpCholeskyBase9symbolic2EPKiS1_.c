__int64 __fastcall ClpCholeskyBase::symbolic2(ClpCholeskyBase *this, const int *a2, const int *a3)
{
  int v4; // r8d
  int *v5; // r10
  int *v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rax
  int v9; // edx
  _DWORD *v10; // r9
  __int64 v11; // rax
  int *v12; // rdi
  int *v13; // r12
  const int *v14; // rbp
  __int64 v15; // r11
  int v16; // eax
  __int64 v17; // rax
  int v18; // r14d
  char v19; // r13
  __int64 v20; // rsi
  const int *v21; // r15
  __int64 v22; // rdx
  int *v23; // rcx
  int v24; // r8d
  int v25; // eax
  int v26; // r14d
  int v27; // esi
  int *v28; // rax
  __int64 result; // rax
  __int64 v30; // rax
  __int64 v31; // r15
  int v32; // ecx
  int v33; // esi
  int v34; // eax
  int v35; // edx
  __int64 v36; // r13
  int *v37; // rsi
  __int64 v38; // r13
  __int64 v39; // rax
  int v40; // ecx
  int *v41; // rdx
  __int64 v42; // r13
  __int64 v43; // rdx
  __int64 v44; // rax
  int v45; // edi
  double v46; // xmm3_8
  __int64 v47; // rcx
  double v48; // xmm0_8
  int v49; // edx
  __int64 v50; // rbp
  int v51; // esi
  int v52; // edx
  int v53; // r10d
  _DWORD *v54; // rdi
  _DWORD *v55; // r9
  bool v56; // r8
  int v57; // edx
  __m128i si128; // xmm2
  __m128i v59; // xmm1
  bool v60; // cl
  unsigned int v61; // ecx
  __int64 v62; // rdi
  __int64 v63; // r10
  unsigned int v64; // esi
  int v65; // r8d
  unsigned int v66; // r9d
  __m128i v67; // xmm1
  unsigned int v68; // r11d
  __int64 v69; // rcx
  unsigned int v70; // edx
  __m128i v71; // xmm0
  int v72; // esi
  unsigned int v73; // r8d
  int v74; // edx
  unsigned int v75; // ecx
  unsigned int v76; // r11d
  __int64 v77; // r10
  __int64 v78; // rcx
  unsigned int v79; // ebp
  int v80; // r8d
  int v81; // r12d
  __int64 v82; // rsi
  unsigned int v83; // r11d
  unsigned int v84; // ecx
  __m128i v85; // xmm0
  int v86; // esi
  int v87; // ecx
  int v88; // esi
  signed int v89; // r8d
  __int64 v90; // rax
  unsigned int v91; // edx
  int v92; // r13d
  int v93; // r12d
  int v94; // edx
  int v95; // edi
  __int64 v96; // r14
  __int64 v97; // rdx
  unsigned int v98; // ecx
  __int64 v99; // rax
  unsigned int v100; // r14d
  __m128i v101; // xmm0
  char *v102; // r12
  char *v103; // r13
  char *v104; // rax
  __m128i v105; // xmm6
  __m128i v106; // xmm2
  __m128i v107; // xmm2
  __m128i v108; // xmm1
  __m128i v109; // xmm2
  int v110; // edi
  __m128i v111; // xmm1
  __m128i v112; // xmm0
  __m128i v113; // xmm2
  __m128i v114; // xmm1
  int v115; // edx
  __int64 v116; // rcx
  int v117; // r13d
  int v118; // r10d
  int v119; // eax
  int v120; // r13d
  int v121; // r12d
  int v122; // r13d
  int v123; // r10d
  int v124; // r13d
  int v125; // r12d
  int v126; // r13d
  int v127; // r10d
  int v128; // eax
  int v129; // r8d
  int v130; // eax
  int v131; // r8d
  __int64 v132; // r8
  __int64 v133; // rcx
  __int64 v134; // r12
  int v135; // eax
  __int64 v136; // r13
  int v137; // edi
  __int64 v138; // rcx
  __int64 v139; // r8
  char *v140; // r11
  int v141; // edi
  __int64 v142; // rcx
  int v143; // edx
  int v144; // eax
  int v145; // r15d
  int v146; // eax
  bool v147; // zf
  int v148; // r8d
  int v149; // eax
  __int64 v150; // rcx
  __int64 v151; // rdx
  __int64 v152; // rsi
  int v153; // eax
  int v154; // r9d
  __int64 v155; // rdx
  __int64 v156; // rsi
  __int64 v157; // rcx
  int v158; // edi
  __int64 v159; // rcx
  int *v160; // rdx
  int v161; // eax
  __int64 v162; // rsi
  int v163; // edi
  int v164; // edx
  int v165; // [rsp+0h] [rbp-458h]
  unsigned int v166; // [rsp+0h] [rbp-458h]
  int v167; // [rsp+8h] [rbp-450h]
  int v168; // [rsp+10h] [rbp-448h]
  int v169; // [rsp+14h] [rbp-444h]
  int *v170; // [rsp+18h] [rbp-440h]
  _DWORD *v171; // [rsp+20h] [rbp-438h]
  int *v172; // [rsp+30h] [rbp-428h]
  _BYTE v174[1048]; // [rsp+40h] [rbp-418h] BYREF

  v4 = *((_DWORD *)this + 11);
  v5 = *((int **)this + 19);
  v6 = *((int **)this + 18);
  v172 = v6;
  if ( v4 > 0 )
  {
    v7 = *((_QWORD *)this + 17);
    v8 = 1;
    do
    {
      v6[v8 - 1] = -1;
      v9 = v8;
      v5[v8 - 1] = -1;
      *(_DWORD *)(v7 + 4 * v8++ - 4) = -1;
    }
    while ( *((_DWORD *)this + 11) > v9 );
  }
  v10 = *((_DWORD **)this + 12);
  *v10 = 0;
  v11 = *((int *)this + 11);
  if ( (int)v11 > 0 )
  {
    v12 = *((int **)this + 17);
    v13 = v172;
    v14 = a2 + 1;
    v169 = 0;
    v171 = *((_DWORD **)this + 14);
    v15 = 0;
    v170 = v12;
    v16 = *v5;
    v168 = 0;
    v165 = *v5;
    if ( *v5 < 0 )
      goto LABEL_22;
LABEL_6:
    *v13 = v16;
    v17 = *((int *)this + 11);
    *v170 = v17;
    v18 = *(v14 - 1);
    if ( v18 >= *v14 )
    {
      v24 = 0;
    }
    else
    {
LABEL_7:
      v19 = 0;
      v20 = v18 + 1;
      v21 = &a3[v18 - v20];
      v22 = v21[v20];
      if ( (int)v22 < (int)v17 )
        goto LABEL_13;
      do
      {
LABEL_8:
        v23 = &v12[v17];
        v17 = *v23;
      }
      while ( (int)v22 >= (int)v17 );
      while ( 1 )
      {
        *v23 = v22;
        v12[v22] = v17;
        v24 = v20 - v18;
        if ( v172[v22] != *v13 )
          v19 = 1;
        v25 = v20++;
        if ( *v14 <= v25 )
          break;
        v17 = *v170;
        v22 = v21[v20];
        if ( (int)v22 >= (int)v17 )
          goto LABEL_8;
LABEL_13:
        v23 = v170;
      }
      if ( v165 < 0 || v19 == 1 )
      {
LABEL_25:
        v30 = v5[v15];
        if ( (int)v30 >= 0 )
          goto LABEL_26;
        if ( v24 )
        {
LABEL_38:
          v27 = v169 + v24;
          if ( v169 < v169 + v24 )
          {
            v42 = *((_QWORD *)this + 13);
            v43 = v42 + 4LL * v169;
            v44 = v168;
            do
            {
              v44 = v12[v44];
              v43 += 4;
              *(_DWORD *)(v43 - 4) = v44;
              v172[v44] = v168;
            }
            while ( v43 != v42 + 4 * (v169 + (unsigned __int64)(unsigned int)(v27 + ~v169)) + 4 );
          }
          v26 = v24;
          *v13 = v168;
          v167 = v169;
          goto LABEL_18;
        }
        while ( 1 )
        {
          v27 = v169;
          v171[v15] = v169;
          v10[v15 + 1] = v10[v15];
LABEL_20:
          result = *((unsigned int *)this + 11);
          ++v13;
          ++v15;
          ++v170;
          ++v14;
          if ( (int)result <= (int)v15 )
            break;
          v16 = v5[v15];
          v169 = v27;
          v168 = v15;
          v165 = v16;
          if ( v16 >= 0 )
            goto LABEL_6;
LABEL_22:
          *v13 = v15;
          v17 = *((int *)this + 11);
          *v170 = v17;
          v18 = *(v14 - 1);
          if ( *v14 > v18 )
            goto LABEL_7;
          v30 = v5[v15];
          if ( (int)v30 >= 0 )
          {
            v24 = 0;
LABEL_26:
            v26 = 0;
            v167 = v169;
            do
            {
              v31 = v30 + 1;
              v32 = v171[v31 - 1];
              v33 = v10[v31] + ~v10[v31 - 1];
              v34 = v32 + 1;
              v35 = v33 + v32 + 1;
              if ( v33 > v26 )
              {
                v26 = v10[v31] + ~v10[v31 - 1];
                v167 = v32 + 1;
              }
              if ( v34 < v35 )
              {
                v36 = *((_QWORD *)this + 13);
                v37 = (int *)(v36 + 4LL * v34);
                v38 = v36 + 4 * ((unsigned int)(-2 - v32 + v35) + (__int64)v34) + 4;
                v39 = v168;
                do
                {
                  v40 = *v37;
                  do
                  {
                    v41 = &v12[v39];
                    v39 = *v41;
                  }
                  while ( v40 > (int)v39 );
                  if ( v40 != (_DWORD)v39 )
                  {
                    *v41 = v40;
                    ++v24;
                    v12[v40] = v39;
                  }
                  ++v37;
                  v39 = v40;
                }
                while ( v37 != (int *)v38 );
              }
              v30 = v5[v31 - 1];
            }
            while ( (int)v30 >= 0 );
            v27 = v169;
            if ( v26 != v24 )
              goto LABEL_38;
LABEL_18:
            v171[v15] = v167;
            v10[v15 + 1] = v26 + v10[v15];
            if ( v26 > 1 )
            {
              v28 = &v5[*(int *)(*((_QWORD *)this + 13) + 4LL * v167)];
              v5[v15] = *v28;
              *v28 = v168;
            }
            goto LABEL_20;
          }
        }
        v45 = v10[(int)result];
        *((_DWORD *)this + 41) = v169;
        *((_DWORD *)this + 40) = v45;
        if ( (int)result <= 0 )
          goto LABEL_51;
        v46 = *((double *)this + 2);
        if ( (double)(v45 - *v10) >= ((double)(int)result - 1.0) * (double)(int)result * 0.5 * v46 )
        {
          v50 = 0;
        }
        else
        {
          v47 = 1;
          do
          {
            v50 = (int)v47;
            if ( v47 == (unsigned int)(result - 1) + 1LL )
              break;
            v48 = (double)((int)result - (int)v47);
            v49 = v45 - v10[v47++];
          }
          while ( (double)v49 < v48 * (v48 - 1.0) * 0.5 * v46 );
        }
        v51 = result - v50;
        if ( (int)result - (int)v50 <= 7 || *((_QWORD *)this + 121) )
        {
LABEL_49:
          result = 1;
          do
          {
            v5[result - 1] = 0;
            v52 = result++;
          }
          while ( *((_DWORD *)this + 11) > v52 );
          goto LABEL_51;
        }
        if ( (_DWORD)v50 )
        {
          v89 = v50 - 1;
          v90 = -(int)((unsigned __int64)(v10 + 1) >> 2) & 3;
          v91 = v90 + 3;
          if ( (unsigned int)(v90 + 3) < 4 )
            v91 = 4;
          if ( v91 > v89 )
          {
            v110 = 0;
            v115 = 0;
          }
          else
          {
            if ( (_DWORD)v90 )
            {
              if ( (_DWORD)v90 == 3 )
              {
                v92 = 2;
                v93 = 2;
                v94 = *v171 + v10[1] - *v10;
                if ( v94 < 0 )
                  v94 = 0;
                if ( v94 < v10[2] - v10[1] + v171[1] )
                  v94 = v10[2] - v10[1] + v171[1];
              }
              else
              {
                v92 = 0;
                v93 = 0;
                v94 = 0;
              }
              v95 = v93 + 1;
              v96 = v93 + 1LL;
              if ( v171[v96 - 1] + v10[v96] - v10[v96 - 1] >= v94 )
                v94 = v171[v96 - 1] + v10[v96] - v10[v96 - 1];
              if ( (unsigned int)v90 > v92 + 1 )
              {
                v95 = v93 + 2;
                if ( v94 < v171[v96] + v10[v96 + 1] - v10[v96] )
                  v94 = v171[v96] + v10[v96 + 1] - v10[v96];
                if ( (unsigned int)v90 > v92 + 2 )
                {
                  v95 = v93 + 3;
                  if ( v94 < v171[v96 + 1] + v10[v96 + 2] - v10[v96 + 1] )
                    v94 = v171[v96 + 1] + v10[v96 + 2] - v10[v96 + 1];
                }
              }
            }
            else
            {
              v95 = 0;
              v94 = 0;
            }
            v166 = v94;
            v97 = 0;
            v98 = v50 - v90;
            v99 = 4 * v90 + 4;
            v100 = 0;
            v101 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v166), 0);
            v102 = (char *)v10 + v99;
            v99 -= 4;
            v103 = (char *)v10 + v99;
            v104 = (char *)v171 + v99;
            do
            {
              ++v100;
              v105 = _mm_loadu_si128((const __m128i *)&v104[v97]);
              v106 = _mm_sub_epi32(
                       _mm_load_si128((const __m128i *)&v102[v97]),
                       _mm_loadu_si128((const __m128i *)&v103[v97]));
              v97 += 16;
              v107 = _mm_add_epi32(v106, v105);
              v108 = _mm_cmpgt_epi32(v107, v101);
              v101 = _mm_or_si128(_mm_andnot_si128(v108, v101), _mm_and_si128(v107, v108));
            }
            while ( v98 >> 2 > v100 );
            v109 = _mm_srli_si128(v101, 8);
            v110 = (v98 & 0xFFFFFFFC) + v95;
            v111 = _mm_cmpgt_epi32(v109, v101);
            v112 = _mm_or_si128(_mm_andnot_si128(v111, v101), _mm_and_si128(v109, v111));
            v113 = _mm_srli_si128(v112, 4);
            v114 = _mm_cmpgt_epi32(v113, v112);
            v115 = _mm_cvtsi128_si32(_mm_or_si128(_mm_andnot_si128(v114, v112), _mm_and_si128(v113, v114)));
            if ( (v98 & 0xFFFFFFFC) == v98 )
              goto LABEL_166;
          }
          v116 = v110;
          if ( v89 <= v110 + 1 || v110 >= (int)v50 )
          {
            v119 = v110;
          }
          else
          {
            v118 = v10[v116 + 2];
            if ( v10[v110 + 1] - v10[v110] + v171[v110] >= v115 )
              v115 = v10[v110 + 1] - v10[v110] + v171[v110];
            v117 = v10[v116 + 1];
            if ( v115 < v171[v116 + 1] + v118 - v117 )
              v115 = v171[v116 + 1] + v118 - v117;
            v119 = v110 + 2;
            if ( v89 > v110 + 3 )
            {
              v121 = v10[v116 + 4];
              if ( v171[v116 + 2] + v10[v116 + 3] - v118 >= v115 )
                v115 = v171[v116 + 2] + v10[v116 + 3] - v118;
              v120 = v10[v116 + 3];
              if ( v115 < v171[v116 + 3] + v121 - v120 )
                v115 = v171[v116 + 3] + v121 - v120;
              v119 = v110 + 4;
              if ( v89 > v110 + 5 )
              {
                v123 = v10[v116 + 6];
                if ( v171[v116 + 4] + v10[v116 + 5] - v121 >= v115 )
                  v115 = v171[v116 + 4] + v10[v116 + 5] - v121;
                v122 = v10[v116 + 5];
                if ( v115 < v171[v116 + 5] + v123 - v122 )
                  v115 = v171[v116 + 5] + v123 - v122;
                v119 = v110 + 6;
                if ( v89 > v110 + 7 )
                {
                  v125 = v10[v116 + 8];
                  if ( v171[v116 + 6] + v10[v116 + 7] - v123 >= v115 )
                    v115 = v171[v116 + 6] + v10[v116 + 7] - v123;
                  v124 = v10[v116 + 7];
                  if ( v115 < v171[v116 + 7] + v125 - v124 )
                    v115 = v171[v116 + 7] + v125 - v124;
                  v119 = v110 + 8;
                  if ( v89 > v110 + 9 )
                  {
                    v127 = v10[v116 + 10];
                    if ( v171[v116 + 8] + v10[v116 + 9] - v125 >= v115 )
                      v115 = v171[v116 + 8] + v10[v116 + 9] - v125;
                    v126 = v10[v116 + 9];
                    if ( v115 < v171[v116 + 9] + v127 - v126 )
                      v115 = v171[v116 + 9] + v127 - v126;
                    v119 = v110 + 10;
                    if ( v89 > v110 + 11 )
                    {
                      v128 = v10[v116 + 11];
                      v129 = v10[v116 + 12] - v128;
                      v130 = v171[v116 + 10] + v128 - v127;
                      v131 = v171[v116 + 11] + v129;
                      if ( v130 >= v115 )
                        v115 = v130;
                      v119 = v110 + 12;
                      if ( v131 >= v115 )
                        v115 = v131;
                    }
                  }
                }
              }
            }
          }
          v132 = v119 + 1LL;
          v133 = v132;
          if ( v115 < v171[v132 - 1] + v10[v132] - v10[v132 - 1] )
            v115 = v171[v132 - 1] + v10[v132] - v10[v132 - 1];
          if ( v119 + 1 < (int)v50 )
          {
            if ( v115 < v171[v132] + v10[v132 + 1] - v10[v132] )
              v115 = v171[v132] + v10[v132 + 1] - v10[v132];
            if ( v119 + 2 < (int)v50 )
            {
              if ( v115 < v171[v133 + 1] + v10[v133 + 2] - v10[v133 + 1] )
                v115 = v171[v133 + 1] + v10[v133 + 2] - v10[v133 + 1];
              if ( v119 + 3 < (int)v50 )
              {
                if ( v115 < v171[v133 + 2] + v10[v133 + 3] - v10[v133 + 2] )
                  v115 = v171[v133 + 2] + v10[v133 + 3] - v10[v133 + 2];
                if ( v119 + 4 < (int)v50 )
                {
                  if ( v115 < v171[v133 + 3] + v10[v133 + 4] - v10[v133 + 3] )
                    v115 = v171[v133 + 3] + v10[v133 + 4] - v10[v133 + 3];
                  if ( v119 + 5 < (int)v50 && v115 < v171[v133 + 4] + v10[v133 + 5] - v10[v133 + 4] )
                    v115 = v171[v133 + 4] + v10[v133 + 5] - v10[v133 + 4];
                }
              }
            }
          }
        }
        else
        {
          v115 = 0;
        }
LABEL_166:
        LODWORD(v134) = v50 + 1;
        v171[(int)v50] = v115;
        v135 = *((_DWORD *)this + 11);
        v136 = 4LL * (int)v50;
        if ( (int)v50 + 1 < v135 )
        {
          v137 = v50 + 1;
          v138 = v115 + 1;
          v139 = *((_QWORD *)this + 13) + -4 * v138 + 4LL * v115;
          v140 = (char *)v171 + v136 - 4 * v138 + 4;
          do
          {
            *(_DWORD *)(v139 + 4 * v138) = v137;
            *(_DWORD *)&v140[4 * v138] = v138;
            ++v137;
            v135 = *((_DWORD *)this + 11);
            v115 = v138++;
          }
          while ( v135 > v137 );
        }
        *((_DWORD *)this + 41) = v115;
        v141 = v10[(int)v50];
        if ( (int)v134 <= v135 )
        {
          v142 = (__int64)&v10[(unsigned __int64)v136 / 4 + 1];
          v143 = v50 + 1;
          do
          {
            v144 = v135 - v143++;
            v142 += 4;
            v141 += v144;
            *(_DWORD *)(v142 - 4) = v141;
            v135 = *((_DWORD *)this + 11);
          }
          while ( v135 >= v143 );
        }
        ClpCholeskyDense::ClpCholeskyDense((ClpCholeskyDense *)v174);
        v145 = *(_DWORD *)(*((_QWORD *)this + 12) + 4LL * (int)v50);
        v146 = ClpCholeskyDense::space((ClpCholeskyDense *)v174, v51);
        v147 = *((_BYTE *)this + 12) == 0;
        *((_DWORD *)this + 42) = v50;
        *((_DWORD *)this + 40) = v146 + v145;
        if ( !v147 )
        {
          v148 = *(_DWORD *)(*((_QWORD *)this + 4) + 104LL) + *(_DWORD *)(*((_QWORD *)this + 4) + 108LL);
          v149 = *((_DWORD *)this + 11);
          if ( v149 > (int)v50 )
          {
            v134 = (int)v134;
            v150 = *((_QWORD *)this + 9);
            v151 = 0;
            v152 = v150 + v136 - 4LL * (int)v134;
            while ( 1 )
            {
              while ( 1 )
              {
                v153 = *(_DWORD *)(v152 + 4 * v134);
                if ( v148 <= v153 )
                  break;
                *(_DWORD *)(v150 + 4 * v50) = v153;
                v149 = *((_DWORD *)this + 11);
                v154 = v134++;
                v50 = (int)v50 + 1;
                if ( v149 <= v154 )
                  goto LABEL_177;
              }
              v163 = v151 + 1;
              *(_DWORD *)(*((_QWORD *)this + 8) + 4 * v151) = v153;
              v149 = *((_DWORD *)this + 11);
              v164 = v134++;
              if ( v149 <= v164 )
                break;
              v151 = v163;
            }
LABEL_177:
            if ( v149 > (int)v50 )
            {
              v155 = (int)v50 + 1;
              v156 = -4 * v155 + *((_QWORD *)this + 8);
              v157 = -4 * v155 + 4 * v50 + v150;
              do
              {
                v158 = v155;
                *(_DWORD *)(v157 + 4 * v155) = *(_DWORD *)(v156 + 4 * v155);
                v149 = *((_DWORD *)this + 11);
                ++v155;
              }
              while ( v149 > v158 );
            }
          }
          if ( v149 > 0 )
          {
            v159 = *((_QWORD *)this + 8);
            v160 = *((int **)this + 9);
            v161 = 0;
            do
            {
              v162 = *v160++;
              *(_DWORD *)(v159 + 4 * v162) = v161++;
            }
            while ( *((_DWORD *)this + 11) > v161 );
          }
        }
        ClpCholeskyDense::~ClpCholeskyDense((ClpCholeskyDense *)v174);
        result = *((unsigned int *)this + 11);
        if ( (int)result <= 0 )
          goto LABEL_51;
        v5 = *((int **)this + 19);
        goto LABEL_49;
      }
    }
    if ( v5[v165] < 0 )
    {
      v26 = v10[v165 + 1] + ~v10[v165];
      v167 = v171[v165] + 1;
      v27 = v169;
      goto LABEL_18;
    }
    goto LABEL_25;
  }
  result = (unsigned int)v10[v11];
  *((_QWORD *)this + 20) = (unsigned int)result;
LABEL_51:
  v53 = *((_DWORD *)this + 42);
  if ( v53 <= 1 )
    return result;
  v54 = *((_DWORD **)this + 14);
  v55 = *((_DWORD **)this + 12);
  v56 = 0;
  v57 = -1;
  LODWORD(result) = 1;
  si128 = _mm_load_si128((const __m128i *)&xmmword_289BD0);
  v59 = _mm_load_si128((const __m128i *)&xmmword_289BE0);
  do
  {
    while ( 1 )
    {
      if ( v54[1] == *v54 + 1 )
      {
        v60 = v55[2] != v55[1] && v55[1] - *v55 - 1 == v55[2] - v55[1];
        if ( v60 )
          break;
      }
      if ( v56 )
      {
        v76 = result - v57;
        if ( (int)result <= v57 )
        {
          v56 = 0;
          goto LABEL_54;
        }
        v77 = *((_QWORD *)this + 19);
        v78 = -(int)((unsigned __int64)(v77 + 4LL * v57) >> 2) & 3;
        if ( (unsigned int)(result - 1 - v57) <= 5 )
        {
          v86 = v57;
        }
        else
        {
          if ( (_DWORD)v78 )
          {
            *(_DWORD *)(v77 + 4LL * v57) = v76;
            v79 = v76 - 1;
            v80 = v57 + 1;
            if ( (_DWORD)v78 != 1 )
            {
              *(_DWORD *)(v77 + 4LL * v80) = v79;
              v79 = v76 - 2;
              v80 = v57 + 2;
              if ( (_DWORD)v78 != 2 )
              {
                *(_DWORD *)(v77 + 4LL * v80) = v79;
                v79 = v76 - 3;
                v80 = v57 + 3;
              }
            }
          }
          else
          {
            v80 = v57;
            v79 = result - v57;
          }
          v81 = v76 - v78;
          v82 = v77 + 4 * (v57 + v78);
          v83 = (v76 - (unsigned int)v78) >> 2;
          v84 = 0;
          v85 = _mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(v79), 0), si128);
          do
          {
            ++v84;
            v82 += 16;
            *(__m128i *)(v82 - 16) = v85;
            v85 = _mm_add_epi32(v85, v59);
          }
          while ( v83 > v84 );
          v76 = v79 - (v81 & 0xFFFFFFFC);
          v86 = (v81 & 0xFFFFFFFC) + v80;
          if ( (v81 & 0xFFFFFFFC) == v81 )
            goto LABEL_92;
        }
        *(_DWORD *)(v77 + 4LL * v86) = v76;
        if ( (int)result > v86 + 1 )
        {
          *(_DWORD *)(v77 + 4LL * (v86 + 1)) = v76 - 1;
          if ( (int)result > v86 + 2 )
          {
            *(_DWORD *)(v77 + 4LL * (v86 + 2)) = v76 - 2;
            if ( v86 + 3 < (int)result )
            {
              *(_DWORD *)(v77 + 4LL * (v86 + 3)) = v76 - 3;
              v87 = v86 + 4;
              if ( v86 + 4 < (int)result )
              {
                v88 = v86 + 5;
                *(_DWORD *)(v77 + 4LL * v87) = v76 - 4;
                if ( (int)result > v88 )
                  *(_DWORD *)(v77 + 4LL * v88) = v76 - 5;
              }
            }
          }
        }
LABEL_92:
        v53 = *((_DWORD *)this + 42);
        v56 = 0;
      }
LABEL_54:
      result = (unsigned int)(result + 1);
      ++v54;
      ++v55;
      if ( (int)result >= v53 )
        goto LABEL_59;
    }
    if ( v56 )
      goto LABEL_54;
    v57 = result - 1;
    result = (unsigned int)(result + 1);
    ++v54;
    ++v55;
    v56 = v60;
  }
  while ( (int)result < v53 );
LABEL_59:
  if ( v56 )
  {
    v61 = result - v57;
    if ( v57 < (int)result )
    {
      v62 = *((_QWORD *)this + 19);
      v63 = v57;
      v64 = -(int)((unsigned __int64)(v62 + 4LL * v57) >> 2) & 3;
      if ( (unsigned int)(result - 1 - v57) <= 5 )
        goto LABEL_70;
      if ( v64 )
      {
        *(_DWORD *)(v62 + 4LL * v57) = v61;
        v65 = v57 + 1;
        v66 = v61 - 1;
        if ( v64 != 1 )
        {
          *(_DWORD *)(v62 + 4LL * v65) = v66;
          v66 = v61 - 2;
          v65 = v57 + 2;
          if ( v64 != 2 )
          {
            *(_DWORD *)(v62 + 4LL * v65) = v66;
            v66 = v61 - 3;
            v65 = v57 + 3;
          }
        }
      }
      else
      {
        v65 = v57;
        v66 = result - v57;
      }
      v67 = _mm_load_si128((const __m128i *)&xmmword_289BE0);
      v68 = v61 - v64;
      v69 = v62 + 4 * (v57 + (unsigned __int64)v64);
      v70 = 0;
      v71 = _mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(v66), 0), (__m128i)xmmword_289BD0);
      do
      {
        ++v70;
        v69 += 16;
        *(__m128i *)(v69 - 16) = v71;
        v71 = _mm_add_epi32(v71, v67);
      }
      while ( v70 < v68 >> 2 );
      v61 = v66 - (v68 & 0xFFFFFFFC);
      v57 = (v68 & 0xFFFFFFFC) + v65;
      if ( (v68 & 0xFFFFFFFC) != v68 )
      {
        v63 = v57;
LABEL_70:
        *(_DWORD *)(v62 + 4 * v63) = v61;
        if ( v57 + 1 < (int)result )
        {
          *(_DWORD *)(v62 + 4LL * (v57 + 1)) = v61 - 1;
          if ( v57 + 2 < (int)result )
          {
            *(_DWORD *)(v62 + 4LL * (v57 + 2)) = v61 - 2;
            if ( v57 + 3 < (int)result )
            {
              *(_DWORD *)(v62 + 4LL * (v57 + 3)) = v61 - 3;
              v72 = v57 + 4;
              v73 = v61 - 4;
              if ( (int)result > v57 + 4 )
              {
                v74 = v57 + 5;
                v75 = v61 - 5;
                *(_DWORD *)(v62 + 4LL * v72) = v73;
                if ( (int)result > v74 )
                  *(_DWORD *)(v62 + 4LL * v74) = v75;
              }
            }
          }
        }
      }
    }
  }
  return result;
}

