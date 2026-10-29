ClpCholeskyBase *__fastcall ClpCholeskyBase::factorizePart2(ClpCholeskyBase *this, int *a2)
{
  const void *v2; // rbp
  unsigned __int64 v3; // rcx
  size_t v4; // rbx
  void *v5; // r15
  ClpCholeskyBase *v6; // rax
  __int64 v7; // rbx
  int *v8; // rax
  int *v9; // r9
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rsi
  int v13; // edx
  int v14; // edx
  int v15; // edx
  double v16; // xmm14_8
  double v17; // xmm4_8
  double v18; // xmm13_8
  __m128i si128; // xmm12
  __m128i v20; // xmm8
  __m128i v21; // xmm7
  int v22; // eax
  bool v23; // dl
  int v24; // eax
  __int64 v25; // r15
  double v26; // xmm2_8
  int v27; // edi
  __int64 v28; // rax
  __int64 v29; // r8
  int *v30; // rdx
  int v31; // r10d
  int *v32; // rbp
  __int64 v33; // rcx
  int v34; // r14d
  double v35; // xmm0_8
  __int64 v36; // rsi
  int v37; // r11d
  double v38; // xmm1_8
  __int64 v39; // r8
  int *v40; // rbx
  int *v41; // r13
  __int64 v42; // rdx
  __int64 v43; // rdi
  __int64 v44; // rcx
  double v45; // xmm0_8
  int *v46; // rdx
  int *v47; // rdi
  int *v48; // rcx
  __int64 v49; // rsi
  double v50; // xmm1_8
  __int64 v51; // rsi
  int v52; // edx
  int v53; // ecx
  int v55; // r12d
  double *v56; // rcx
  int v57; // r12d
  __int64 v58; // rbp
  __int64 v59; // r14
  double v60; // xmm0_8
  int v61; // edx
  double v62; // xmm1_8
  int *v63; // r8
  __int64 v64; // rbp
  __int64 v65; // r14
  double *v66; // r13
  double v67; // xmm1_8
  __int64 v68; // rsi
  double v69; // xmm0_8
  int v70; // r13d
  int v71; // ebp
  __int64 v72; // r12
  __int64 v73; // r15
  __int64 v74; // r9
  int *v75; // r8
  int v76; // ecx
  double v77; // xmm0_8
  int v78; // r11d
  __int64 v79; // rax
  __m128d v80; // xmm2
  __int64 v81; // rbx
  __int64 v82; // rdx
  int v83; // r10d
  unsigned __int64 v84; // rdi
  __int64 v85; // rax
  unsigned int v86; // r10d
  __int64 v87; // rsi
  unsigned int v88; // edx
  __m128d v89; // xmm1
  __int64 v90; // rax
  int v91; // ecx
  __int64 v92; // rbp
  int v93; // eax
  int v94; // eax
  __int64 v95; // r8
  double v96; // xmm3_8
  __int64 v97; // rsi
  int v98; // ebx
  int v99; // r10d
  unsigned __int64 v100; // r14
  __int64 v101; // r13
  unsigned int v102; // r9d
  __int64 v103; // rcx
  unsigned int v104; // r12d
  unsigned int v105; // r9d
  int v106; // r11d
  int v107; // edi
  int v108; // esi
  double v109; // xmm0_8
  __m128d v110; // xmm1
  __int64 v111; // rax
  int v112; // edi
  unsigned int v113; // edx
  __m128d v114; // xmm2
  __int64 v115; // r15
  __int64 v116; // rax
  __int64 v117; // rax
  int v118; // edi
  __int64 v119; // rsi
  __int64 v120; // rax
  __int64 v121; // rcx
  __m128d v122; // xmm2
  __int64 v123; // rax
  unsigned int v124; // esi
  __m128d v125; // xmm1
  int v126; // ecx
  unsigned int v127; // edx
  __int64 v128; // rdi
  __int64 v129; // rax
  int v130; // r10d
  int v131; // r8d
  __int64 v132; // rcx
  __int64 v133; // rdx
  signed int v134; // edi
  __int64 v135; // rax
  __int64 v136; // rax
  unsigned int v137; // r9d
  __int64 v138; // rdx
  unsigned int v139; // eax
  __m128i v140; // xmm0
  __m128i v141; // xmm1
  int v142; // esi
  int *v143; // rax
  int v144; // edx
  int v145; // ecx
  int v146; // ebx
  __int64 v147; // rsi
  __int64 v148; // rax
  __int64 v149; // rdx
  __int64 v150; // rsi
  int v151; // edi
  unsigned __int64 v152; // rbx
  void *v153; // rbp
  __int64 v154; // rax
  double *v155; // xmm7_8
  int v156; // eax
  int *v157; // rcx
  int i; // edx
  int v159; // ebx
  __int64 v160; // rsi
  unsigned __int64 v161; // rax
  double v162; // xmm2_8
  int v163; // r9d
  __int64 v164; // rdx
  int v165; // ecx
  __int64 v166; // rsi
  int v167; // esi
  __int64 v168; // rsi
  __int64 v169; // rdi
  __int64 v170; // r8
  __int64 v171; // rdx
  double *v172; // rcx
  int *v173; // rcx
  _DWORD *v174; // rdi
  __int64 v175; // r8
  __int64 v176; // rdi
  __int64 v177; // rdx
  double *v178; // rsi
  double v179; // xmm0_8
  double *v180; // [rsp+8h] [rbp-4F0h]
  double *v181; // [rsp+8h] [rbp-4F0h]
  __int64 v182; // [rsp+10h] [rbp-4E8h]
  __int64 v183; // [rsp+10h] [rbp-4E8h]
  int v184; // [rsp+10h] [rbp-4E8h]
  int v185; // [rsp+18h] [rbp-4E0h]
  int *v186; // [rsp+18h] [rbp-4E0h]
  int v187; // [rsp+18h] [rbp-4E0h]
  __int64 v188; // [rsp+18h] [rbp-4E0h]
  __int64 v189; // [rsp+20h] [rbp-4D8h]
  __int64 v190; // [rsp+20h] [rbp-4D8h]
  __int64 v191; // [rsp+28h] [rbp-4D0h]
  unsigned int v192; // [rsp+28h] [rbp-4D0h]
  __int64 v193; // [rsp+30h] [rbp-4C8h]
  __int64 v194; // [rsp+30h] [rbp-4C8h]
  double *v196; // [rsp+40h] [rbp-4B8h]
  unsigned int v197; // [rsp+48h] [rbp-4B0h]
  __int64 v198; // [rsp+58h] [rbp-4A0h]
  __int64 v199; // [rsp+60h] [rbp-498h]
  int *v200; // [rsp+68h] [rbp-490h]
  __int64 v201; // [rsp+70h] [rbp-488h]
  int v202; // [rsp+78h] [rbp-480h]
  unsigned int v203; // [rsp+78h] [rbp-480h]
  int v204; // [rsp+7Ch] [rbp-47Ch]
  __int64 v205; // [rsp+80h] [rbp-478h]
  int v206; // [rsp+8Ch] [rbp-46Ch]
  __int64 v207; // [rsp+90h] [rbp-468h]
  __int64 v208; // [rsp+98h] [rbp-460h]
  __int64 v209; // [rsp+B0h] [rbp-448h]
  __int64 v211; // [rsp+C0h] [rbp-438h]
  int v212; // [rsp+C8h] [rbp-430h]
  char v213; // [rsp+CEh] [rbp-42Ah]
  char v214; // [rsp+CFh] [rbp-429h]
  int v215; // [rsp+D0h] [rbp-428h]
  int v216; // [rsp+D4h] [rbp-424h]
  double v217; // [rsp+D8h] [rbp-420h]
  _BYTE v218[32]; // [rsp+E0h] [rbp-418h] BYREF
  __int64 v219; // [rsp+100h] [rbp-3F8h]
  int v220; // [rsp+1DCh] [rbp-31Ch]
  int v221; // [rsp+214h] [rbp-2E4h]
  double *v222; // [rsp+2A8h] [rbp-250h]
  __int64 v223; // [rsp+2B0h] [rbp-248h]
  double v224; // [rsp+2E0h] [rbp-218h]

  v2 = *((const void **)this + 15);
  v3 = *((int *)this + 11);
  v217 = *((double *)this + 64);
  v206 = *((_DWORD *)this + 77);
  if ( v2 )
  {
    if ( v3 > 0xFFFFFFFFFFFFFFFLL )
      __cxa_throw_bad_array_new_length();
    v4 = 8 * v3;
    v5 = (void *)operator new[](8 * v3);
    memcpy(v5, v2, v4);
    LODWORD(v3) = *((_DWORD *)this + 11);
    v6 = this;
  }
  else
  {
    v5 = nullptr;
    v6 = this;
  }
  v7 = *((_QWORD *)v6 + 16);
  v8 = *((int **)v6 + 18);
  v211 = v7;
  v200 = v8;
  if ( (int)v3 > 0 )
  {
    v9 = v8;
    v10 = 1;
    v11 = *((_QWORD *)this + 17);
    v12 = *((_QWORD *)this + 12);
    do
    {
      *(_DWORD *)(v11 + 4 * v10 - 4) = -1;
      v13 = *(_DWORD *)(v12 + 4 * v10 - 4);
      *(_QWORD *)(v7 + 8 * v10 - 8) = 0;
      v9[v10 - 1] = v13;
      LODWORD(v3) = *((_DWORD *)this + 11);
      v14 = v10++;
    }
    while ( (int)v3 > v14 );
  }
  v15 = *((_DWORD *)this + 42);
  if ( v15 >= 0 )
  {
    v201 = 0;
    v215 = -1;
    v212 = 0;
    v16 = 0.0;
    v214 = 0;
    v17 = -v217;
    v213 = 0;
    v18 = 1.797693134862316e308;
    v216 = -1;
    si128 = _mm_load_si128((const __m128i *)&xmmword_289BB0);
    v180 = (double *)v5;
    v20 = _mm_load_si128((const __m128i *)&xmmword_289BC0);
    v21 = _mm_load_si128((const __m128i *)&xmmword_289C00);
    while ( 1 )
    {
      if ( (int)v201 >= v15 )
      {
        if ( !v213 )
          goto LABEL_156;
        goto LABEL_50;
      }
      v193 = 4 * v201;
      v22 = *(_DWORD *)(*((_QWORD *)this + 19) + 4 * v201);
      if ( v22 <= 0 )
        break;
      if ( v22 > v216 )
      {
        v213 = 1;
        v23 = v216 > 0;
        goto LABEL_13;
      }
      if ( (_DWORD)v201 == v15 )
      {
LABEL_156:
        v5 = v180;
        v183 = *(_QWORD *)&v18;
        v181 = *(double **)&v16;
        LODWORD(v3) = *((_DWORD *)this + 11);
        goto LABEL_34;
      }
      v216 = *(_DWORD *)(*((_QWORD *)this + 19) + 4 * v201);
      v214 = 0;
      v213 = 1;
LABEL_17:
      v25 = *((_QWORD *)this + 17);
      v196 = (double *)(*((_QWORD *)this + 15) + 8 * v201);
      v26 = *v196;
      v27 = *(_DWORD *)(v25 + v193);
      v182 = *((_QWORD *)this + 12);
      v189 = *((_QWORD *)this + 14);
      if ( v27 >= 0 )
      {
        v28 = *((_QWORD *)this + 11);
        do
        {
          v29 = v27;
          v30 = &v200[v29];
          v31 = *(_DWORD *)(v182 + v29 * 4 + 4);
          v32 = (int *)(v25 + v29 * 4);
          v33 = v200[v29];
          v34 = *(_DWORD *)(v25 + v29 * 4);
          v35 = *(double *)(v28 + 8 * v33);
          LODWORD(v36) = v33 + 1;
          v37 = v200[v29];
          v38 = v180[v27] * v35;
          v200[v29] = v33 + 1;
          v26 = v26 - v35 * v38;
          if ( v31 > (int)v33 + 1 )
          {
            v185 = *(_DWORD *)(v189 + 4LL * v27) - *(_DWORD *)(v182 + 4LL * v27);
            v39 = *((_QWORD *)this + 19) + v29 * 4;
            v191 = *((_QWORD *)this + 13);
            v40 = (int *)(v191 + 4LL * ((int)v36 + v185));
            v41 = (int *)(v25 + 4LL * *v40);
            v202 = *v41;
            if ( *(int *)v39 > 2 )
            {
              *v41 = v27;
              v55 = *(_DWORD *)v39;
              LODWORD(v39) = v27 + 1;
              v56 = (double *)(v211 + 8LL * v27);
              *v56 = v38;
              v57 = v27 + v55;
              if ( v57 > v27 + 1 )
              {
                v39 = (int)v39;
                v58 = (int)v39 + 1LL;
                v186 = v30;
                v59 = v58 + (unsigned int)(-2 - v27 + v57);
                while ( 1 )
                {
                  v60 = *(double *)(v28 + 8LL * v200[v39]);
                  v61 = v200[v39] + 1;
                  v62 = v180[v39] * v60;
                  *(double *)(v211 + 8 * v39) = v62;
                  v200[v39] = v61;
                  *(_DWORD *)(v25 + 4 * v39 - 4) = v39;
                  v39 = v58;
                  v26 = v26 - v60 * v62;
                  if ( v58 == v59 )
                    break;
                  ++v58;
                }
                v30 = v186;
                v56 = (double *)(v211 + 8LL * v27);
              }
              v63 = (int *)(v25 + 4LL * v57 - 4);
              v64 = 0;
              v187 = *v63;
              *v63 = v202;
              v65 = (unsigned int)(v31 - v36 - 1) + 1LL;
              do
              {
                v66 = (double *)(v211 + 8LL * v40[v64]);
                v67 = *v66;
                if ( v57 > v27 )
                {
                  v68 = 0;
                  do
                  {
                    v69 = *(double *)(v28 + 8LL * ((int)v64 + v30[v68])) * v56[v68];
                    ++v68;
                    v67 = v67 + v69;
                  }
                  while ( (unsigned int)(~v27 + v57) + 1LL != v68 );
                }
                ++v64;
                *v66 = v67;
              }
              while ( v64 != v65 );
              v27 = v187;
              continue;
            }
            *v32 = *v41;
            v36 = (int)v36;
            *v41 = v27;
            v42 = (int)v36 + 1LL;
            v43 = v42 + (unsigned int)(v31 - v37 - 2);
            while ( 1 )
            {
              v44 = *(int *)(v191 + 4LL * v185 + 4 * v36);
              v45 = *(double *)(v28 + 8 * v36);
              v36 = v42;
              *(double *)(v211 + 8 * v44) = v45 * v38 + *(double *)(v211 + 8 * v44);
              if ( v43 == v42 )
                break;
              ++v42;
            }
          }
          v27 = v34;
        }
        while ( v27 >= 0 );
      }
      v46 = (int *)(v193 + v182);
      v47 = (int *)(v193 + v189);
      v48 = (int *)(v182 + 4 * (v201 + 1));
      if ( v213 )
      {
        v163 = *v47;
        v164 = *v46;
        v165 = *v48;
        v166 = *((_QWORD *)this + 19);
        *v196 = v26;
        v215 = -1;
        v167 = v164 + *(_DWORD *)(v166 + v193) - 1;
        if ( v165 > v167 )
        {
          v215 = *(_DWORD *)(*((_QWORD *)this + 13) + 4LL * (v163 + v167 - (int)v164));
          v200[v201] = v167;
        }
        if ( (int)v164 < v165 )
        {
          v168 = (unsigned int)(v165 - 1 - v164) + 1LL;
          v169 = *((_QWORD *)this + 13) + 4LL * v163;
          v170 = *((_QWORD *)this + 11) + 8 * v164;
          v171 = 0;
          do
          {
            v172 = (double *)(v211 + 8LL * *(int *)(v169 + 4 * v171));
            *(double *)(v170 + 8 * v171) = *(double *)(v170 + 8 * v171) - *v172;
            ++v171;
            *v172 = 0.0;
          }
          while ( v168 != v171 );
        }
        goto LABEL_32;
      }
      v49 = *(int *)(*((_QWORD *)this + 9) + v193);
      if ( v206 <= (int)v49 )
      {
        if ( v26 >= v217 )
        {
          v18 = fmin(v18, v26);
          v16 = fmax(v16, v26);
          goto LABEL_30;
        }
        v50 = 0.0;
        a2[v49] = 2;
        v180[v201] = 1.0e100;
        ++*((_DWORD *)this + 63);
      }
      else
      {
        if ( v17 >= v26 )
        {
          v18 = fmin(v18, -v26);
          v16 = fmax(v16, -v26);
LABEL_30:
          v50 = 1.0 / v26;
          v180[v201] = v26;
          goto LABEL_31;
        }
        v50 = 0.0;
        a2[v49] = 2;
        v180[v201] = -1.0e100;
        ++*((_DWORD *)this + 63);
      }
LABEL_31:
      v51 = *v46;
      v52 = *v48;
      *v196 = v50;
      if ( (int)v51 < v52 )
      {
        v173 = (int *)(*((_QWORD *)this + 13) + 4LL * *v47);
        v174 = (_DWORD *)(v25 + 4LL * *v173);
        *(_DWORD *)(v25 + v193) = *v174;
        *v174 = v201;
        v175 = *((_QWORD *)this + 11) + 8 * v51;
        v176 = (unsigned int)(v52 - 1 - v51) + 1LL;
        v177 = 0;
        do
        {
          v178 = (double *)(v211 + 8LL * v173[v177]);
          v179 = *(double *)(v175 + 8 * v177) - *v178;
          *v178 = 0.0;
          *(double *)(v175 + 8 * v177++) = v179 * v50;
        }
        while ( v177 != v176 );
      }
LABEL_32:
      v53 = v201++;
      v15 = *((_DWORD *)this + 42);
      if ( v15 < v53 + 1 )
      {
        LODWORD(v3) = *((_DWORD *)this + 11);
        v5 = v180;
        v183 = *(_QWORD *)&v18;
        v181 = *(double **)&v16;
        goto LABEL_34;
      }
    }
    v213 = 0;
    v23 = v216 > 0;
LABEL_13:
    v216 = *(_DWORD *)(*((_QWORD *)this + 19) + 4 * v201);
    v214 = v213;
    if ( !v23 )
    {
LABEL_14:
      v193 = 4 * v201;
      v24 = v212;
      if ( v214 )
        v24 = v201;
      v212 = v24;
      goto LABEL_17;
    }
LABEL_50:
    if ( (int)v201 <= v212 )
      goto LABEL_98;
    v70 = v212;
    v71 = v201 - 1;
    v72 = *((_QWORD *)this + 15);
    v73 = *((_QWORD *)this + 9);
    v74 = v212;
    v75 = (int *)(*((_QWORD *)this + 12) + 4LL * v212);
    v207 = v72;
    v188 = *((_QWORD *)this + 12);
    if ( (int)v201 - 1 > v212 )
      v71 = v212;
    v209 = *((_QWORD *)this + 9);
    while ( 1 )
    {
      v76 = *v75;
      v77 = *(double *)(v72 + v74 * 8);
      v78 = v75[1];
      v79 = *(int *)((char *)v75 + v73 - v188);
      if ( v206 <= (int)v79 )
      {
        if ( v77 < v217 )
        {
          v80 = 0;
          a2[v79] = 2;
          ++*((_DWORD *)this + 63);
          v180[v74] = 1.0e100;
        }
        else
        {
          v80.m128d_f64[1] = 0.0;
          v18 = fmin(v18, v77);
          v16 = fmax(v16, v77);
          v80.m128d_f64[0] = 1.0 / v77;
          v180[v74] = v77;
        }
      }
      else if ( v17 < v77 )
      {
        v80 = 0;
        a2[v79] = 2;
        ++*((_DWORD *)this + 63);
        v180[v74] = -1.0e100;
      }
      else
      {
        v80.m128d_f64[1] = 0.0;
        v80.m128d_f64[0] = 1.0 / v77;
        v180[v74] = v77;
        v18 = fmin(v18, -v77);
        v16 = fmax(v16, -v77);
      }
      *(double *)(v72 + v74 * 8) = v80.m128d_f64[0];
      if ( v76 < v78 )
      {
        v81 = *((_QWORD *)this + 11);
        v82 = v76;
        v83 = v78 - v76;
        v84 = v81 + 8LL * v76;
        v85 = (v84 >> 3) & 1;
        if ( (unsigned int)(v78 - 1 - v76) > 1 )
        {
          if ( (_DWORD)v85 )
          {
            ++v76;
            *(double *)v84 = *(double *)v84 * v80.m128d_f64[0];
          }
          v86 = v83 - v85;
          v87 = v81 + 8 * (v82 + v85);
          v88 = 0;
          v89 = _mm_unpacklo_pd(v80, v80);
          v90 = 0;
          do
          {
            ++v88;
            *(__m128d *)(v87 + v90) = _mm_mul_pd(*(__m128d *)(v87 + v90), v89);
            v90 += 16;
          }
          while ( v86 >> 1 > v88 );
          v76 += v86 & 0xFFFFFFFE;
          if ( (v86 & 0xFFFFFFFE) == v86 )
            goto LABEL_67;
          v82 = v76;
        }
        v91 = v76 + 1;
        *(double *)(v81 + 8 * v82) = *(double *)(v81 + 8 * v82) * v80.m128d_f64[0];
        if ( v91 < v78 )
          *(double *)(v81 + 8LL * v91) = v80.m128d_f64[0] * *(double *)(v81 + 8LL * v91);
      }
LABEL_67:
      ++v70;
      ++v75;
      ++v74;
      if ( v70 > v71 )
      {
        if ( v70 < (int)v201 )
        {
          v184 = v70;
          v205 = 4LL * v70;
          v198 = v70;
          v92 = *((_QWORD *)this + 11);
          v93 = v70;
          do
          {
            v94 = v93 - v212;
            v95 = v212;
            v96 = *(double *)(v207 + v198 * 8);
            v97 = *(int *)(v188 + v205);
            v98 = *(_DWORD *)(v188 + v205 + 4);
            v99 = *(_DWORD *)(v188 + v205);
            v199 = v97;
            v100 = v92 + 8 * v97;
            v190 = 8 * v97;
            v203 = v98 - 1 - v97;
            v194 = 8 * v97 + 16;
            v101 = (v100 >> 3) & 1;
            v192 = v98 - v97;
            v102 = v98 - v97 - v101;
            v197 = v102;
            v103 = v92 + 8 * (v97 + v101);
            v104 = v102 & 0xFFFFFFFE;
            v105 = v102 >> 1;
            v208 = v92 + 8 + 8 * (v97 + v203);
            v204 = v97 + 1;
            do
            {
              v106 = v94 - 1;
              v107 = *(_DWORD *)(v188 + 4 * v95);
              v110 = (__m128d)*(unsigned __int64 *)&v180[v95];
              v108 = v107 + v94 - 1;
              v109 = *(double *)(v92 + 8LL * v108);
              v110.m128d_f64[0] = v110.m128d_f64[0] * v109;
              v96 = v96 - v109 * v110.m128d_f64[0];
              if ( v98 > v99 )
              {
                v111 = v107 + v94;
                if ( (8 * v111 >= v194 || v190 >= 8 * v111 + 16) && v192 > 8 )
                {
                  v112 = v99;
                  if ( (int)v101 + 1 > v203 )
                    goto LABEL_80;
                  if ( (_DWORD)v101 )
                  {
                    ++v108;
                    v112 = v204;
                    *(double *)v100 = *(double *)v100 - *(double *)(v92 + 8LL * v108) * v110.m128d_f64[0];
                  }
                  v113 = 0;
                  v114 = _mm_unpacklo_pd(v110, v110);
                  v115 = v92 + 8 * (v101 + v111);
                  v116 = 0;
                  do
                  {
                    ++v113;
                    *(__m128d *)(v103 + v116) = _mm_sub_pd(
                                                  *(__m128d *)(v103 + v116),
                                                  _mm_mul_pd(*(__m128d *)(v115 + v116), v114));
                    v116 += 16;
                  }
                  while ( v105 > v113 );
                  v108 += v104;
                  v112 += v104;
                  if ( v104 != v197 )
                  {
LABEL_80:
                    v117 = v112;
                    v118 = v112 + 1;
                    v119 = v108 + 1;
                    *(double *)(v92 + 8 * v117) = *(double *)(v92 + 8 * v117)
                                                - *(double *)(v92 + 8 * v119) * v110.m128d_f64[0];
                    if ( v118 < v98 )
                      *(double *)(v92 + 8LL * v118) = *(double *)(v92 + 8LL * v118)
                                                    - v110.m128d_f64[0] * *(double *)(v92 + 8 * v119 + 8);
                  }
                }
                else
                {
                  v161 = v100;
                  do
                  {
                    v162 = *(double *)(v161 + 8 * (v108 - v199) + 8);
                    v161 += 8LL;
                    *(double *)(v161 - 8) = *(double *)(v161 - 8) - v162 * v110.m128d_f64[0];
                  }
                  while ( v161 != v208 );
                }
              }
              ++v95;
              v94 = v106;
            }
            while ( v184 > (int)v95 );
            v120 = *(int *)(v209 + v205);
            if ( v206 <= (int)v120 )
            {
              if ( v96 >= v217 )
              {
                v18 = fmin(v18, v96);
                v16 = fmax(v16, v96);
                goto LABEL_86;
              }
              v122 = 0;
              a2[v120] = 2;
              v121 = v198 * 8;
              v180[v198] = 1.0e100;
              ++*((_DWORD *)this + 63);
            }
            else
            {
              if ( v17 >= v96 )
              {
                v18 = fmin(v18, -v96);
                v16 = fmax(v16, -v96);
LABEL_86:
                v122 = (__m128d)0x3FF0000000000000uLL;
                v121 = v198 * 8;
                v122.m128d_f64[0] = 1.0 / v96;
                v180[v198] = v96;
                goto LABEL_87;
              }
              v122 = 0;
              a2[v120] = 2;
              v121 = v198 * 8;
              v180[v198] = -1.0e100;
              ++*((_DWORD *)this + 63);
            }
LABEL_87:
            *(double *)(v207 + v121) = v122.m128d_f64[0];
            if ( v98 > v99 )
            {
              v123 = ((unsigned __int64)(v92 + v190) >> 3) & 1;
              if ( v203 > 1 )
              {
                if ( (_DWORD)v123 )
                {
                  ++v99;
                  *(double *)(v92 + v190) = *(double *)(v92 + v190) * v122.m128d_f64[0];
                }
                v124 = 0;
                v125 = _mm_unpacklo_pd(v122, v122);
                v126 = v192 - v123;
                v127 = (v192 - (unsigned int)v123) >> 1;
                v128 = v92 + 8 * (v199 + v123);
                v129 = 0;
                do
                {
                  ++v124;
                  *(__m128d *)(v128 + v129) = _mm_mul_pd(*(__m128d *)(v128 + v129), v125);
                  v129 += 16;
                }
                while ( v127 > v124 );
                v99 += v126 & 0xFFFFFFFE;
                if ( (v126 & 0xFFFFFFFE) == v126 )
                  goto LABEL_97;
                v199 = v99;
              }
              v130 = v99 + 1;
              *(double *)(v92 + 8 * v199) = *(double *)(v92 + 8 * v199) * v122.m128d_f64[0];
              if ( v130 < v98 )
                *(double *)(v92 + 8LL * v130) = v122.m128d_f64[0] * *(double *)(v92 + 8LL * v130);
            }
LABEL_97:
            ++v184;
            ++v198;
            v93 = v184;
            v205 += 4;
          }
          while ( (_DWORD)v201 != v184 );
        }
LABEL_98:
        if ( v215 >= 0 )
        {
          v131 = v201 - 1;
          v132 = *((_QWORD *)this + 17);
          if ( v212 < (int)v201 - 1 )
          {
            v133 = -(__int64)((unsigned __int64)(v132 + 4LL * v212) >> 2) & 3;
            if ( (unsigned int)(v201 - 2 - v212) <= 5 )
            {
              v142 = v212;
              goto LABEL_108;
            }
            v134 = v212;
            if ( (_DWORD)v133 )
            {
              v134 = v212 + 1;
              *(_DWORD *)(v132 + 4LL * v212) = v212 + 1;
              if ( (_DWORD)v133 != 1 )
              {
                v135 = v134;
                v134 = v212 + 2;
                *(_DWORD *)(v132 + 4 * v135) = v212 + 2;
                if ( (_DWORD)v133 != 2 )
                {
                  v136 = v134;
                  v134 = v212 + 3;
                  *(_DWORD *)(v132 + 4 * v136) = v212 + 3;
                }
              }
            }
            v137 = v131 - v212 - v133;
            v138 = v132 + 4 * (v212 + (unsigned __int64)(unsigned int)v133);
            v139 = 0;
            v140 = _mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(v134), 0), si128);
            do
            {
              v141 = v140;
              ++v139;
              v140 = _mm_add_epi32(v140, v20);
              v138 += 16;
              *(__m128i *)(v138 - 16) = _mm_add_epi32(v141, v21);
            }
            while ( v137 >> 2 > v139 );
            v142 = (v137 & 0xFFFFFFFC) + v134;
            if ( v137 != (v137 & 0xFFFFFFFC) )
            {
LABEL_108:
              *(_DWORD *)(v132 + 4LL * v142) = v142 + 1;
              if ( v142 + 1 < v131 )
              {
                *(_DWORD *)(v132 + 4LL * (v142 + 1)) = v142 + 2;
                if ( v142 + 2 < v131 )
                {
                  *(_DWORD *)(v132 + 4LL * (v142 + 2)) = v142 + 3;
                  if ( v142 + 3 < v131 )
                  {
                    *(_DWORD *)(v132 + 4LL * (v142 + 3)) = v142 + 4;
                    if ( v142 + 4 < v131 )
                    {
                      *(_DWORD *)(v132 + 4LL * (v142 + 4)) = v142 + 5;
                      if ( v142 + 5 < v131 )
                        *(_DWORD *)(v132 + 4LL * (v142 + 5)) = v142 + 6;
                    }
                  }
                }
              }
            }
          }
          v143 = (int *)(v132 + 4LL * v215);
          *(_DWORD *)(v132 + 4 * v201 - 4) = *v143;
          *v143 = v212;
        }
        if ( (_DWORD)v201 == *((_DWORD *)this + 42) )
        {
          v183 = *(_QWORD *)&v18;
          v5 = v180;
          v181 = *(double **)&v16;
          if ( (int)v201 < *((_DWORD *)this + 11) )
            goto LABEL_117;
          goto LABEL_35;
        }
        goto LABEL_14;
      }
    }
  }
  v183 = 0x7FEFFFFFFFFFFFFFLL;
  v181 = nullptr;
LABEL_34:
  if ( v15 < (int)v3 )
  {
LABEL_117:
    ClpCholeskyBase::updateDense(this, (double *)v5, v200);
    ClpCholeskyDense::ClpCholeskyDense((ClpCholeskyDense *)v218);
    v144 = *((_DWORD *)this + 11);
    v145 = *((_DWORD *)this + 42);
    v146 = v144 - v145;
    if ( *((_BYTE *)this + 12) && v144 > v145 )
    {
      v147 = *((_QWORD *)this + 9);
      if ( *(_DWORD *)(v147 + 4LL * v145) >= v206 )
      {
        v151 = *((_DWORD *)this + 42);
LABEL_159:
        v206 = v151 - v145;
      }
      else
      {
        v148 = v145 + 1;
        v149 = v148 + (unsigned int)(v144 - 1 - v145);
        v150 = 4LL * v145 - 4 * v148 + v147;
        while ( 1 )
        {
          v151 = v148;
          if ( v148 == v149 )
            break;
          ++v148;
          if ( v206 <= *(_DWORD *)(v150 + 4 * v148) )
            goto LABEL_159;
        }
      }
    }
    ClpCholeskyDense::reserveSpace((ClpCholeskyDense *)v218, this, v146);
    if ( (unsigned __int64)v146 > 0x1FFFFFFFFFFFFFFELL )
      __cxa_throw_bad_array_new_length();
    v152 = 4LL * v146;
    v153 = (void *)operator new[](v152);
    memset(v153, 0, v152);
    v220 = 0;
    v222 = v181;
    v221 = v206;
    v154 = *((_QWORD *)this + 4);
    v223 = v183;
    v219 = v154;
    v224 = v217;
    ClpCholeskyDense::factorizePart2((ClpCholeskyDense *)v218, (int *)v153);
    v155 = v222;
    *((_DWORD *)this + 63) += v220;
    v156 = *((_DWORD *)this + 42);
    v181 = v155;
    v183 = v223;
    if ( v156 < *((_DWORD *)this + 11) )
    {
      v157 = (int *)(*((_QWORD *)this + 9) + 4LL * v156);
      for ( i = *((_DWORD *)this + 42); ; i = *((_DWORD *)this + 42) )
      {
        v159 = v156;
        v160 = *v157;
        ++v156;
        ++v157;
        a2[v160] = *((_DWORD *)v153 + v159 - i);
        if ( *((_DWORD *)this + 11) <= v156 )
          break;
      }
    }
    operator delete[](v153);
    ClpCholeskyDense::~ClpCholeskyDense((ClpCholeskyDense *)v218);
  }
LABEL_35:
  if ( v5 )
    operator delete[](v5);
  *((_QWORD *)this + 57) = v181;
  *((_QWORD *)this + 58) = v183;
  return this;
}

