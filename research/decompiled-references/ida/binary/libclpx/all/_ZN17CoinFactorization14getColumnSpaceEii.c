bool __fastcall CoinFactorization::getColumnSpace(CoinFactorization *this, int a2, int a3)
{
  bool v5; // cc
  __int64 v6; // r10
  __int64 v7; // rdi
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  int v12; // esi
  _DWORD *v13; // rdi
  int v14; // ecx
  __int64 v15; // rdi
  int v16; // r15d
  int *v17; // rdx
  int v18; // ecx
  __int64 v19; // rbp
  __int64 v20; // r14
  int v21; // ecx
  __int64 v22; // r12
  int *v23; // rsi
  int v24; // edx
  int v25; // edi
  int v26; // r15d
  int v27; // ecx
  int v28; // edx
  int v29; // eax
  __int64 v30; // rdx
  int v31; // r13d
  __int64 v32; // rdi
  _DWORD *v33; // rbx
  __int64 v34; // rcx
  unsigned int v35; // esi
  __int64 v36; // xmm0_8
  int v37; // ecx
  int v38; // edi
  __int64 v39; // xmm0_8
  int v40; // edi
  __int64 v41; // xmm0_8
  __int64 v42; // r9
  __int64 v43; // rdx
  __int64 v44; // r11
  unsigned int v45; // edi
  __int64 v46; // rbx
  __int64 v47; // rsi
  __int64 v48; // r9
  __int64 v49; // rdx
  __int64 v50; // rbx
  unsigned int v51; // r8d
  __int128 v52; // xmm0
  int v53; // ecx
  int v54; // edi
  __int64 v55; // xmm0_8
  int v56; // edx
  int v57; // esi
  int v58; // edi
  __int64 v59; // xmm0_8
  int v60; // edx
  int v61; // esi
  int v62; // edi
  __int64 v63; // xmm0_8
  int v64; // edx
  int v65; // esi
  int v66; // edi
  __int64 v67; // xmm0_8
  int v68; // edx
  int v69; // esi
  int v70; // eax
  __int64 v71; // xmm0_8
  int v72; // ecx
  __int64 v73; // xmm0_8
  __int64 v74; // rax
  int *v75; // rcx
  bool result; // al
  __int64 v77; // r10
  __int64 v78; // rax
  int v79; // r9d
  __int64 v80; // rdx
  int v81; // edi
  int v82; // eax
  int v83; // edx
  __int64 v84; // r12
  __int64 v85; // rsi
  __int64 v86; // r11
  __int64 v87; // rbx
  __int64 v88; // r8
  __int64 v89; // r10
  _OWORD *v90; // rdi
  __m128i *v91; // r9
  unsigned int v92; // esi
  _OWORD *v93; // r8
  const __m128i *v94; // r11
  __int128 v95; // xmm1
  __m128i v96; // xmm0
  __int128 v97; // xmm1
  __m128i v98; // xmm0
  __int128 v99; // xmm1
  __m128i v100; // xmm0
  __int128 v101; // xmm1
  __m128i v102; // xmm0
  __int128 v103; // xmm1
  __m128i v104; // xmm0
  __int128 v105; // xmm1
  __m128i v106; // xmm0
  __int128 v107; // xmm1
  __m128i v108; // xmm0
  __int128 v109; // xmm1
  __m128i v110; // xmm0
  __int128 v111; // xmm1
  __m128i v112; // xmm0
  __int128 v113; // xmm1
  __m128i v114; // xmm0
  __int128 v115; // xmm1
  __m128i v116; // xmm0
  __int128 v117; // xmm1
  __m128i v118; // xmm0
  int v119; // eax
  __int64 v120; // rdx
  __int128 v121; // xmm0
  int v122; // esi
  int v123; // eax
  __int64 v124; // rcx
  __int64 v125; // rdi
  __int64 v126; // rdx
  unsigned __int64 v127; // rax
  __int64 v128; // rdx
  __int64 v129; // xmm0_8
  int v130; // edi
  __int64 v131; // rdx
  __int64 v132; // rsi
  __int64 v133; // r10
  int *v134; // r11
  unsigned int v135; // edi
  const __m128i *v136; // rsi
  __int64 v137; // rdx
  unsigned int v138; // r8d
  __m128i v139; // xmm1
  __m128i v140; // xmm0
  __int64 v141; // rdi
  __int64 v142; // rdx
  int *v143; // r11
  int *v144; // rdx
  __int64 v145; // r8
  __int64 v146; // r9
  __int64 v147; // rdx
  __int64 *v148; // rax
  __int64 v149; // rdi
  __int64 v150; // xmm0_8
  __int64 v151; // rax
  _QWORD *v152; // r9
  _QWORD *v153; // rax
  __int64 v154; // rdx
  __int64 v155; // rdi
  __int64 v156; // r9
  __int64 v157; // rax
  int v158; // ebx
  int v159; // r10d
  __int64 v160; // rsi
  int *v161; // rdx
  int v162; // ebx
  int v163; // [rsp+0h] [rbp-B0h]
  __int64 v164; // [rsp+0h] [rbp-B0h]
  int v165; // [rsp+8h] [rbp-A8h]
  __int64 v166; // [rsp+8h] [rbp-A8h]
  __int64 v167; // [rsp+18h] [rbp-98h]
  __int64 v169; // [rsp+28h] [rbp-88h]
  unsigned __int64 v170; // [rsp+28h] [rbp-88h]
  unsigned __int64 v171; // [rsp+30h] [rbp-80h]
  unsigned int v172; // [rsp+30h] [rbp-80h]
  __int64 v173; // [rsp+40h] [rbp-70h]
  __int64 v174; // [rsp+48h] [rbp-68h]
  int v175; // [rsp+50h] [rbp-60h]
  __int64 v177; // [rsp+58h] [rbp-58h]
  __int64 v178; // [rsp+60h] [rbp-50h]
  _DWORD *v179; // [rsp+68h] [rbp-48h]
  int v181; // [rsp+74h] [rbp-3Ch]

  v5 = *((_DWORD *)this + 60) <= -2;
  v6 = *((_QWORD *)this + 29);
  v7 = *((_QWORD *)this + 32);
  v8 = *((_QWORD *)this + 44);
  v9 = *((_QWORD *)this + 47);
  v10 = a2;
  v11 = *((int *)this + 13);
  if ( v5 )
    v6 = 0;
  v173 = v6;
  v12 = *((_DWORD *)this + 13);
  if ( *((int *)this + 66) <= -2 )
    v7 = 0;
  v174 = v7;
  if ( *((int *)this + 90) <= -2 )
    v8 = 0;
  v169 = v8;
  if ( *((int *)this + 96) <= -2 )
    v9 = 0;
  v178 = v9;
  v13 = (_DWORD *)(4 * v10 + v7);
  v177 = 4 * v10;
  v14 = *(_DWORD *)(v6 + 4 * v10) + *v13;
  v179 = v13;
  v15 = *((_QWORD *)this + 81);
  v16 = v14;
  v175 = v14;
  if ( *((int *)this + 164) <= -2 )
    v15 = 0;
  v17 = (int *)(v15 + 4 * v11);
  v167 = v15;
  v18 = *v17;
  v19 = *((_QWORD *)this + 75);
  v20 = *((_QWORD *)this + 78);
  if ( *((int *)this + 152) <= -2 )
    v19 = 0;
  if ( *((int *)this + 158) <= -2 )
    v20 = 0;
  v181 = a3 + v16;
  if ( a3 + v16 + 3 < *((_DWORD *)this + 148) - *v17 )
  {
LABEL_43:
    v77 = *(int *)(v177 + v178);
    v78 = *(int *)(v177 + v169);
    v79 = *(_DWORD *)(v177 + v178);
    if ( !a3 && (_DWORD)v78 == v12 )
    {
      *v17 = *(_DWORD *)(v167 + 4 * v77) + *(_DWORD *)(v173 + 4 * v77);
      return 1;
    }
    else
    {
      *(_DWORD *)(v169 + 4 * v77) = v78;
      *(_DWORD *)(v178 + 4 * v78) = v79;
      v80 = *(int *)(v178 + 4LL * *((int *)this + 13));
      *(_DWORD *)(v169 + 4 * v80) = a2;
      *(_DWORD *)(v178 + 4LL * *((int *)this + 13)) = a2;
      *(_DWORD *)(v177 + v178) = v80;
      *(_DWORD *)(v177 + v169) = *((_DWORD *)this + 13);
      v81 = v175;
      v82 = *(_DWORD *)(v167 + v177) - *v179;
      *(_DWORD *)(v167 + v177) = v18 + *v179;
      if ( v175 > 49 )
      {
        v131 = 4LL * v18;
        v132 = 4LL * v82;
        v133 = v20 + v131;
        v134 = (int *)(v20 + v132);
        if ( v20 + v131 != v20 + v132 )
        {
          v135 = v175 >> 3;
          if ( 4LL * v82 + 32 > v131 && v131 + 32 > v132 )
          {
            v160 = v20 + v131;
            v161 = v134;
            v141 = v135 - 1;
            do
            {
              v162 = *v161;
              v161 += 8;
              v160 += 32;
              *(_DWORD *)(v160 - 32) = v162;
              *(_DWORD *)(v160 - 28) = *(v161 - 7);
              *(_DWORD *)(v160 - 24) = *(v161 - 6);
              *(_DWORD *)(v160 - 20) = *(v161 - 5);
              *(_DWORD *)(v160 - 16) = *(v161 - 4);
              *(_DWORD *)(v160 - 12) = *(v161 - 3);
              *(_DWORD *)(v160 - 8) = *(v161 - 2);
              *(_DWORD *)(v160 - 4) = *(v161 - 1);
            }
            while ( v161 != &v134[8 * v141 + 8] );
          }
          else
          {
            v136 = (const __m128i *)(v20 + v132);
            v137 = v20 + v131;
            v138 = 0;
            do
            {
              v139 = _mm_loadu_si128(v136);
              ++v138;
              v136 += 2;
              v137 += 32;
              v140 = _mm_loadu_si128(v136 - 1);
              *(__m128i *)(v137 - 32) = v139;
              *(__m128i *)(v137 - 16) = v140;
            }
            while ( v135 > v138 );
            LODWORD(v141) = v135 - 1;
          }
          v142 = 8 * ((int)v141 + 1LL);
          v143 = &v134[v142];
          v144 = (int *)(v133 + v142 * 4);
          switch ( v175 & 7 )
          {
            case 0:
              break;
            case 1:
              goto LABEL_87;
            case 2:
              goto LABEL_86;
            case 3:
              goto LABEL_85;
            case 4:
              goto LABEL_84;
            case 5:
              goto LABEL_83;
            case 6:
              goto LABEL_82;
            case 7:
              v144[6] = v143[6];
LABEL_82:
              v144[5] = v143[5];
LABEL_83:
              v144[4] = v143[4];
LABEL_84:
              v144[3] = v143[3];
LABEL_85:
              v144[2] = v143[2];
LABEL_86:
              v144[1] = v143[1];
LABEL_87:
              *v144 = *v143;
              break;
          }
        }
        v145 = v19 + 8LL * v18;
        v146 = v19 + 8LL * v82;
        if ( v145 != v146 )
        {
          v147 = v19 + 8LL * v18;
          v148 = (__int64 *)(v19 + 8LL * v82);
          v149 = (unsigned int)((v175 >> 3) - 1);
          do
          {
            v150 = *v148;
            v148 += 8;
            v147 += 64;
            *(_QWORD *)(v147 - 64) = v150;
            *(_QWORD *)(v147 - 56) = *(v148 - 7);
            *(_QWORD *)(v147 - 48) = *(v148 - 6);
            *(_QWORD *)(v147 - 40) = *(v148 - 5);
            *(_QWORD *)(v147 - 32) = *(v148 - 4);
            *(_QWORD *)(v147 - 24) = *(v148 - 3);
            *(_QWORD *)(v147 - 16) = *(v148 - 2);
            *(_QWORD *)(v147 - 8) = *(v148 - 1);
          }
          while ( v148 != (__int64 *)(v146 + ((v149 + 1) << 6)) );
          v151 = ((int)v149 + 1LL) << 6;
          v152 = (_QWORD *)(v151 + v146);
          v153 = (_QWORD *)(v145 + v151);
          switch ( v175 & 7 )
          {
            case 0:
              break;
            case 1:
              goto LABEL_98;
            case 2:
              goto LABEL_97;
            case 3:
              goto LABEL_96;
            case 4:
              goto LABEL_95;
            case 5:
              goto LABEL_94;
            case 6:
              goto LABEL_93;
            case 7:
              v153[6] = v152[6];
LABEL_93:
              v153[5] = v152[5];
LABEL_94:
              v153[4] = v152[4];
LABEL_95:
              v153[3] = v152[3];
LABEL_96:
              v153[2] = v152[2];
LABEL_97:
              v153[1] = v152[1];
LABEL_98:
              *v153 = *v152;
              break;
          }
        }
      }
      else
      {
        v83 = v175 & 1;
        if ( (v175 & 1) != 0 )
        {
          v130 = *(_DWORD *)(v20 + 4LL * v82);
          *(_QWORD *)(v19 + 8LL * v18) = *(_QWORD *)(v19 + 8LL * v82);
          *(_DWORD *)(v20 + 4LL * v18) = v130;
          v81 = v175;
        }
        if ( v81 > v83 )
        {
          v84 = v82;
          v172 = v81 - 1 - v83;
          v85 = v175 & 1;
          v86 = v82 + v85;
          v164 = 4 * v86;
          v166 = 8 * v86;
          v87 = 8 * (v18 + v85);
          v88 = 4 * (v18 + v85);
          v89 = (v172 >> 1) + 1;
          v90 = (_OWORD *)(v19 + v87);
          v91 = (__m128i *)(v20 + v88);
          if ( (4 * v86 >= 4 * (v83 + (__int64)v18 + 4) || v88 >= 4 * (v83 + (__int64)v82 + 4))
            && (unsigned int)v89 > 6
            && (8 * v86 >= 8 * (v83 + (__int64)v18 + 4) || v87 >= 8 * (v83 + (__int64)v82 + 4))
            && (v170 = v18 + (unsigned __int64)(v175 & 1) + 2 * v89,
                (unsigned __int64)v91 >= v19 + 8 * v170 || (unsigned __int64)v90 >= v20 + 4 * v170) )
          {
            if ( v172 <= 1 )
              goto LABEL_63;
            v92 = (unsigned int)v89 >> 1;
            v93 = (_OWORD *)(v19 + v166);
            v94 = (const __m128i *)(v20 + v164);
            v95 = *(_OWORD *)(v19 + v166 + 16);
            v96 = _mm_loadu_si128((const __m128i *)(v20 + v164));
            *v90 = *(_OWORD *)(v19 + v166);
            v90[1] = v95;
            *v91 = v96;
            v97 = *(_OWORD *)(v19 + v166 + 48);
            v98 = _mm_loadu_si128((const __m128i *)(v20 + v164 + 16));
            v90[2] = *(_OWORD *)(v19 + v166 + 32);
            v90[3] = v97;
            v91[1] = v98;
            v99 = *(_OWORD *)(v19 + v166 + 80);
            v100 = _mm_loadu_si128((const __m128i *)(v20 + v164 + 32));
            v90[4] = *(_OWORD *)(v19 + v166 + 64);
            v90[5] = v99;
            v91[2] = v100;
            if ( (unsigned int)v89 >> 1 != 3 )
            {
              v101 = v93[7];
              v102 = _mm_loadu_si128(v94 + 3);
              v90[6] = v93[6];
              v90[7] = v101;
              v91[3] = v102;
              if ( v92 != 4 )
              {
                v103 = v93[9];
                v104 = _mm_loadu_si128(v94 + 4);
                v90[8] = v93[8];
                v90[9] = v103;
                v91[4] = v104;
                if ( v92 != 5 )
                {
                  v105 = v93[11];
                  v106 = _mm_loadu_si128(v94 + 5);
                  v90[10] = v93[10];
                  v90[11] = v105;
                  v91[5] = v106;
                  if ( v92 != 6 )
                  {
                    v107 = v93[13];
                    v108 = _mm_loadu_si128(v94 + 6);
                    v90[12] = v93[12];
                    v90[13] = v107;
                    v91[6] = v108;
                    if ( v92 != 7 )
                    {
                      v109 = v93[15];
                      v110 = _mm_loadu_si128(v94 + 7);
                      v90[14] = v93[14];
                      v90[15] = v109;
                      v91[7] = v110;
                      if ( v92 != 8 )
                      {
                        v111 = v93[17];
                        v112 = _mm_loadu_si128(v94 + 8);
                        v90[16] = v93[16];
                        v90[17] = v111;
                        v91[8] = v112;
                        if ( v92 != 9 )
                        {
                          v113 = v93[19];
                          v114 = _mm_loadu_si128(v94 + 9);
                          v90[18] = v93[18];
                          v90[19] = v113;
                          v91[9] = v114;
                          if ( v92 != 10 )
                          {
                            v115 = v93[21];
                            v116 = _mm_loadu_si128(v94 + 10);
                            v90[20] = v93[20];
                            v90[21] = v115;
                            v91[10] = v116;
                            if ( v92 != 11 )
                            {
                              v117 = v93[23];
                              v118 = _mm_loadu_si128(v94 + 11);
                              v90[22] = v93[22];
                              v90[23] = v117;
                              v91[11] = v118;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            v83 += 2 * (v89 & 0xFFFFFFFE);
            if ( (v89 & 0xFFFFFFFE) != (_DWORD)v89 )
            {
LABEL_63:
              v119 = v83 + v82;
              v120 = v18 + v83;
              v121 = *(_OWORD *)(v19 + 8LL * v119);
              v122 = *(_DWORD *)(v20 + 4LL * v119);
              v123 = *(_DWORD *)(v20 + 4LL * v119 + 4);
              *(_OWORD *)(v19 + 8 * v120) = v121;
              *(_DWORD *)(v20 + 4 * v120) = v122;
              *(_DWORD *)(v20 + 4 * v120 + 4) = v123;
            }
          }
          else
          {
            v154 = (v175 & 1) + 2LL;
            v155 = v20 + 4LL * v82;
            v156 = v85 + 2 + 2LL * (v172 >> 1);
            v157 = v20 + 4LL * v18;
            while ( 1 )
            {
              v158 = *(_DWORD *)(v155 + 4 * v85);
              v159 = *(_DWORD *)(v155 + 4 * v85 + 4);
              *(_OWORD *)(v19 + 8LL * v18 + 8 * v85) = *(_OWORD *)(v19 + 8 * v84 + 8 * v85);
              *(_DWORD *)(v157 + 4 * v85) = v158;
              *(_DWORD *)(v157 + 4 * v85 + 4) = v159;
              v85 = v154;
              if ( v154 == v156 )
                break;
              v154 += 2;
            }
          }
        }
      }
      *(_DWORD *)(v167 + 4LL * *((int *)this + 13)) = a3 + v175 + v18 + 2;
      return *(_DWORD *)(v167 + 4LL * *((int *)this + 13)) <= *((_DWORD *)this + 148);
    }
  }
  v21 = *(_DWORD *)(v8 + 4 * v11);
  v163 = 0;
  if ( (_DWORD)v11 != v21 )
  {
    while ( 1 )
    {
      v22 = v21;
      v23 = (int *)(v167 + 4LL * v21);
      v24 = *v23;
      v25 = *(_DWORD *)(v6 + 4LL * v21);
      if ( *v23 < 0 )
      {
        v29 = -v24;
        v26 = v25 - v24;
        v28 = -v163;
      }
      else
      {
        v26 = v24 + v25;
        v27 = *(_DWORD *)(v174 + 4LL * v21);
        v28 = v27 + v163;
        v29 = *v23 - v27;
      }
      *v23 = v28;
      if ( v29 >= v26 )
        goto LABEL_38;
      v30 = v29;
      v31 = v29;
      v165 = v26 - v29;
      v32 = 8LL * v29;
      v33 = (_DWORD *)(v20 + 4LL * v163);
      v171 = v19 + 8LL * v163;
      v34 = 4LL * v29;
      if ( (unsigned int)(v26 - v29) > 0xE
        && (8LL * v163 + 32 <= v32 || v32 + 32 <= 8LL * v163)
        && (v34 + 16 <= 4LL * v163 || 4LL * v163 + 16 <= v34)
        && (v171 >= v20 + 4 * (v163 + (unsigned __int64)(unsigned int)(v26 - v29))
         || (unsigned __int64)v33 >= v19 + 8 * (v163 + (unsigned __int64)(unsigned int)(v26 - v29))) )
      {
        v35 = -(int)((unsigned __int64)(v20 + v34) >> 2) & 3;
        if ( v26 - 1 - v29 < v35 + 3 )
        {
          v53 = v163;
        }
        else
        {
          if ( v35 )
          {
            v36 = *(_QWORD *)(v19 + 8LL * v29);
            *v33 = *(_DWORD *)(v20 + 4LL * v29);
            *(_QWORD *)(v19 + 8LL * v163) = v36;
            ++v29;
            v37 = v163 + 1;
            if ( v35 != 1 )
            {
              v38 = *(_DWORD *)(v20 + 4LL * v29);
              v39 = *(_QWORD *)(v19 + 8LL * v29);
              v29 = v30 + 2;
              *(_DWORD *)(v20 + 4LL * v37) = v38;
              *(_QWORD *)(v19 + 8LL * v37) = v39;
              v37 = v163 + 2;
              if ( v35 != 2 )
              {
                v40 = *(_DWORD *)(v20 + 4LL * v29);
                v41 = *(_QWORD *)(v19 + 8LL * v29);
                v29 = v30 + 3;
                *(_DWORD *)(v20 + 4LL * v37) = v40;
                *(_QWORD *)(v19 + 8LL * v37) = v41;
                v37 = v163 + 3;
              }
            }
          }
          else
          {
            v37 = v163;
          }
          v42 = 4LL * v163 + 4LL * v35;
          v43 = v35 + v30;
          v44 = v20 + 4 * v43;
          v45 = v165 - v35;
          v46 = 8LL * v163 + 8LL * v35;
          v47 = v19 + 8 * v43;
          v48 = v20 + v42;
          v49 = 0;
          v50 = v19 + v46;
          v51 = 0;
          do
          {
            ++v51;
            *(__m128i *)(v48 + v49) = _mm_load_si128((const __m128i *)(v44 + v49));
            v52 = *(_OWORD *)(v47 + 2 * v49 + 16);
            *(_OWORD *)(v50 + 2 * v49) = *(_OWORD *)(v47 + 2 * v49);
            *(_OWORD *)(v50 + 2 * v49 + 16) = v52;
            v49 += 16;
          }
          while ( v45 >> 2 > v51 );
          v53 = (v45 & 0xFFFFFFFC) + v37;
          v29 += v45 & 0xFFFFFFFC;
          if ( v45 == (v45 & 0xFFFFFFFC) )
            goto LABEL_37;
          v30 = v29;
        }
        v54 = *(_DWORD *)(v20 + 4 * v30);
        v55 = *(_QWORD *)(v19 + 8 * v30);
        v56 = v29 + 1;
        *(_DWORD *)(v20 + 4LL * v53) = v54;
        *(_QWORD *)(v19 + 8LL * v53) = v55;
        v57 = v53 + 1;
        if ( v26 > v29 + 1 )
        {
          v58 = *(_DWORD *)(v20 + 4LL * v56);
          v59 = *(_QWORD *)(v19 + 8LL * v56);
          v60 = v29 + 2;
          *(_DWORD *)(v20 + 4LL * v57) = v58;
          *(_QWORD *)(v19 + 8LL * v57) = v59;
          v61 = v53 + 2;
          if ( v26 > v29 + 2 )
          {
            v62 = *(_DWORD *)(v20 + 4LL * v60);
            v63 = *(_QWORD *)(v19 + 8LL * v60);
            v64 = v29 + 3;
            *(_DWORD *)(v20 + 4LL * v61) = v62;
            *(_QWORD *)(v19 + 8LL * v61) = v63;
            v65 = v53 + 3;
            if ( v26 > v29 + 3 )
            {
              v66 = *(_DWORD *)(v20 + 4LL * v64);
              v67 = *(_QWORD *)(v19 + 8LL * v64);
              v68 = v29 + 4;
              *(_DWORD *)(v20 + 4LL * v65) = v66;
              *(_QWORD *)(v19 + 8LL * v65) = v67;
              v69 = v53 + 4;
              if ( v26 > v29 + 4 )
              {
                v70 = v29 + 5;
                v71 = *(_QWORD *)(v19 + 8LL * v68);
                v72 = v53 + 5;
                *(_DWORD *)(v20 + 4LL * v69) = *(_DWORD *)(v20 + 4LL * v68);
                *(_QWORD *)(v19 + 8LL * v69) = v71;
                if ( v26 > v70 )
                {
                  v73 = *(_QWORD *)(v19 + 8LL * v70);
                  *(_DWORD *)(v20 + 4LL * v72) = *(_DWORD *)(v20 + 4LL * v70);
                  *(_QWORD *)(v19 + 8LL * v72) = v73;
                }
              }
            }
          }
        }
      }
      else
      {
        v124 = v20 + v34;
        v125 = v19 + v32;
        v126 = (unsigned int)(v26 - 1 - v29);
        v127 = 0;
        v128 = 4 * v126 + 4;
        do
        {
          v129 = *(_QWORD *)(v125 + 2 * v127);
          v33[v127 / 4] = *(_DWORD *)(v124 + v127);
          *(_QWORD *)(v171 + 2 * v127) = v129;
          v127 += 4LL;
        }
        while ( v127 != v128 );
      }
LABEL_37:
      v163 = v26 + v163 - v31;
LABEL_38:
      v21 = *(_DWORD *)(v169 + 4 * v22);
      v74 = *((int *)this + 13);
      if ( (_DWORD)v74 == v21 )
      {
        v17 = (int *)(v167 + 4 * v74);
        v75 = (int *)this;
        goto LABEL_40;
      }
    }
  }
  v75 = (int *)this;
LABEL_40:
  ++v75[230];
  result = 1;
  *v17 = v163;
  if ( a3 != 0x3FFFFFFF )
  {
    if ( v181 + 1 >= v75[148] - v163 )
    {
      v75[44] = -99;
      return 0;
    }
    v17 = (int *)(v167 + 4LL * v75[13]);
    v12 = v75[13];
    v18 = *v17;
    goto LABEL_43;
  }
  return result;
}

