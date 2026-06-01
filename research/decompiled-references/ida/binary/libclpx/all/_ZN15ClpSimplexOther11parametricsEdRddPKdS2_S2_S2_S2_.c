__int64 __fastcall ClpSimplexOther::parametrics(
        ClpSimplexOther *this,
        __m128d a2,
        double *a3,
        double a4,
        const double *a5,
        const double *a6,
        const double *a7,
        const double *a8,
        double *a9)
{
  int v13; // eax
  __int64 v14; // r15
  ClpDualRowDantzig *v15; // rbx
  int v16; // r13d
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // rbx
  char *v19; // r14
  char *v20; // r12
  int v21; // eax
  double *v22; // rdx
  unsigned __int64 *v23; // rcx
  double v24; // xmm1_8
  __int64 v25; // rsi
  unsigned __int64 v26; // rax
  ClpSimplexDual *v27; // rbx
  __int64 v28; // rsi
  double v29; // xmm2_8
  double v30; // xmm4_8
  double *v31; // rdi
  double v32; // xmm6_8
  int v33; // edi
  unsigned __int64 v34; // rcx
  __int64 v35; // rax
  double v36; // xmm0_8
  int v37; // r8d
  __m128d v38; // xmm1
  unsigned __int64 v39; // rdx
  const double *v40; // r10
  unsigned int v41; // esi
  unsigned int v42; // r11d
  double *v43; // r9
  unsigned __int64 v44; // rdx
  __int64 v45; // rax
  __m128d v46; // xmm0
  signed int v47; // edx
  double v48; // xmm0_8
  int v49; // eax
  double v50; // xmm0_8
  __int64 v51; // rax
  _BYTE *v52; // rdx
  const CoinMessages *v53; // r13
  CoinMessageHandler *v54; // rax
  CoinMessageHandler *v55; // rax
  double v56; // xmm0_8
  __int64 v57; // rax
  __m128d v58; // xmm6
  int v59; // eax
  __int64 v60; // rdi
  double v61; // xmm2_8
  double *v62; // rdi
  CoinMessageHandler *v63; // rax
  CoinMessageHandler *v64; // rax
  double v65; // xmm0_8
  __int64 v66; // rax
  __int64 (__fastcall ***v67)(_QWORD, _QWORD, _QWORD, double **, _QWORD, __int64); // rdi
  __int64 v68; // rbx
  __int64 v69; // rax
  __int64 v70; // rdi
  __int64 v71; // r8
  int v72; // edx
  __int64 v73; // rcx
  __int64 v74; // rsi
  __int64 v75; // r9
  unsigned __int64 v76; // rdx
  double *v77; // rdi
  double *v78; // r8
  int v79; // ecx
  unsigned __int64 v80; // r10
  double *v81; // r11
  __int64 v82; // rax
  __int64 v83; // r15
  double *v84; // rsi
  bool v85; // r9
  bool v86; // cl
  bool v87; // r13
  double *v88; // rax
  unsigned int v89; // ecx
  __int64 v90; // rdx
  double *v91; // r9
  __m128d v92; // xmm1
  __int64 v93; // rsi
  unsigned __int64 v94; // r13
  char *v95; // r15
  double *v96; // rbx
  char *v97; // rsi
  double *v98; // rdx
  __int64 v99; // rax
  signed int v100; // r9d
  __int64 v101; // rax
  int v102; // edx
  int v103; // r9d
  __int64 v104; // rax
  __int64 v105; // r9
  CoinMessageHandler *v106; // rax
  __int64 v107; // rdx
  __int64 v108; // rcx
  __int64 v109; // r8
  __int64 v110; // r9
  __int64 v111; // rax
  ClpSimplexDual *v112; // rbx
  _BYTE *v113; // r8
  int v114; // ecx
  int v115; // esi
  _BYTE *v116; // rdi
  int v117; // r9d
  unsigned int v118; // ecx
  __int64 v119; // rax
  unsigned int v120; // edx
  __int64 v121; // rax
  _BYTE *v122; // rdx
  _BYTE *v123; // rax
  signed int v124; // ecx
  __int64 v125; // rax
  unsigned __int64 *v126; // rdi
  unsigned __int64 *v127; // r8
  unsigned __int64 *v128; // rax
  unsigned __int64 *v129; // rdx
  __int64 v130; // r10
  unsigned __int64 v131; // xmm0_8
  __int64 v132; // r10
  unsigned __int64 *v133; // rdi
  unsigned __int64 *v134; // rsi
  unsigned __int64 *v135; // rax
  unsigned __int64 *v136; // rdx
  __int64 v137; // r9
  unsigned __int64 v138; // xmm0_8
  __int64 v139; // r9
  CoinMessageHandler *v140; // rax
  CoinMessageHandler *v141; // rax
  __int64 v142; // rax
  unsigned __int64 v143; // rax
  double v144; // xmm0_8
  CoinMessageHandler *v145; // rax
  __int64 v146; // rdx
  __int64 v147; // rcx
  __int64 v148; // r8
  __int64 v149; // r9
  __int64 v150; // rax
  unsigned int v151; // ebx
  char *v153; // rdx
  _BYTE *v154; // rax
  char v155; // si
  int v156; // eax
  double *v157; // rdi
  unsigned __int64 *v158; // rsi
  double v159; // xmm1_8
  __int64 v160; // r8
  __int64 v161; // rax
  double v162; // xmm4_8
  double v163; // xmm2_8
  __int64 v164; // rcx
  __int64 v165; // rdx
  double *v166; // rcx
  CoinMessageHandler *v167; // rax
  __int64 v168; // rdx
  __int64 v169; // rcx
  __int64 v170; // r8
  __int64 v171; // r9
  __int64 v172; // rax
  unsigned __int64 v173; // rax
  double v174; // xmm0_8
  __int64 v175; // rsi
  unsigned __int64 v176; // rax
  __int64 v177; // rsi
  double v178; // xmm2_8
  double *v179; // rdi
  __int64 v180; // [rsp+0h] [rbp-940h]
  int v181; // [rsp+Ch] [rbp-934h]
  bool v186; // [rsp+4Ah] [rbp-8F6h]
  bool v187; // [rsp+4Bh] [rbp-8F5h]
  double *v188; // [rsp+60h] [rbp-8E0h]
  unsigned int v189; // [rsp+60h] [rbp-8E0h]
  int i; // [rsp+68h] [rbp-8D8h]
  bool v191; // [rsp+6Eh] [rbp-8D2h]
  char v192; // [rsp+6Fh] [rbp-8D1h]
  int v194; // [rsp+80h] [rbp-8C0h]
  int v195; // [rsp+84h] [rbp-8BCh]
  double v196; // [rsp+88h] [rbp-8B8h]
  double v197; // [rsp+88h] [rbp-8B8h]
  int v198; // [rsp+88h] [rbp-8B8h]
  double *v199; // [rsp+98h] [rbp-8A8h]
  double v201; // [rsp+A8h] [rbp-898h]
  double v202; // [rsp+B0h] [rbp-890h]
  unsigned __int64 v203; // [rsp+B0h] [rbp-890h]
  ClpSimplexDual *v204; // [rsp+B8h] [rbp-888h]
  double *v205; // [rsp+C8h] [rbp-878h] BYREF
  _BYTE v206[80]; // [rsp+D0h] [rbp-870h] BYREF
  char v207[112]; // [rsp+120h] [rbp-820h] BYREF
  char v208[16]; // [rsp+190h] [rbp-7B0h] BYREF
  __int64 v209; // [rsp+1A0h] [rbp-7A0h]
  char *v210; // [rsp+1B0h] [rbp-790h]
  char *v211; // [rsp+1C0h] [rbp-780h]
  _BYTE v212[112]; // [rsp+220h] [rbp-720h] BYREF
  unsigned __int64 *v213; // [rsp+290h] [rbp-6B0h]
  unsigned __int64 *v214; // [rsp+298h] [rbp-6A8h]
  double *v215; // [rsp+2B0h] [rbp-690h]
  unsigned __int64 v216; // [rsp+2B8h] [rbp-688h]
  __int64 (__fastcall ***v217)(_QWORD, _QWORD, _QWORD, char *, _QWORD, __int64); // [rsp+2C0h] [rbp-680h]
  __int64 v218; // [rsp+2D0h] [rbp-670h]
  __int64 v219; // [rsp+2D8h] [rbp-668h]
  unsigned __int64 v220; // [rsp+328h] [rbp-618h]
  int v221; // [rsp+360h] [rbp-5E0h]

  v204 = this;
  v201 = a2.m128d_f64[0];
  v191 = a4 != 0.0;
  ClpSimplex::ClpSimplex((ClpSimplex *)v212, this, -1);
  v13 = *((_DWORD *)this + 327);
  *((_DWORD *)this + 327) = 102;
  v181 = v13;
  v187 = a8 != nullptr || a7 != nullptr;
  v186 = a5 != nullptr || a6 != nullptr;
  while ( 2 )
  {
    *((_DWORD *)v204 + 325) = -1;
    ClpSimplex::saveData((ClpSimplex *)v206);
    v14 = *((_QWORD *)v204 + 155);
    v15 = (ClpDualRowDantzig *)operator new(0x18u);
    ClpDualRowDantzig::ClpDualRowDantzig(v15);
    *((_QWORD *)v204 + 155) = v15;
    *((_QWORD *)v15 + 1) = v204;
    v16 = ClpSimplexDual::startupSolve(v204, 0, nullptr, 0);
    if ( v16 )
    {
      v199 = nullptr;
      v19 = nullptr;
      v20 = nullptr;
      v192 = 0;
      v202 = *a3;
      goto LABEL_49;
    }
    v17 = *((_DWORD *)v204 + 26) + *((_DWORD *)v204 + 27);
    if ( v17 > 0xFFFFFFFFFFFFFFFLL )
      __cxa_throw_bad_array_new_length();
    v18 = 8 * v17;
    v19 = (char *)operator new[](v18);
    memset(v19, 0, v18);
    v20 = (char *)operator new[](v18);
    memset(v20, 0, v18);
    v199 = (double *)operator new[](v18);
    memset(v199, 0, v18);
    if ( !v187 )
    {
      if ( v186 )
      {
        v21 = *((_DWORD *)v204 + 27);
        if ( v21 > 0 )
        {
          v196 = 1.0e50;
          goto LABEL_8;
        }
      }
      goto LABEL_174;
    }
    v27 = v204;
    v156 = *((_DWORD *)v204 + 26);
    if ( v156 <= 0 )
    {
      if ( v186 )
      {
        v21 = *((_DWORD *)v204 + 27);
        if ( v21 > 0 )
        {
          v196 = 1.0e50;
LABEL_8:
          v22 = *((double **)v204 + 22);
          v23 = *((unsigned __int64 **)v204 + 23);
          v24 = *v22;
          *(_QWORD *)&a2.m128d_f64[0] = *v23;
          if ( *v22 <= *(double *)v23 )
          {
            if ( a5 )
            {
              v25 = (unsigned int)(v21 - 1);
              v26 = 0;
              v27 = v204;
              v28 = 8 * v25;
              if ( a6 )
              {
                while ( 1 )
                {
                  v29 = a5[v26 / 8];
                  v30 = a6[v26 / 8];
                  if ( v24 > -1.0e20 )
                  {
                    if ( a2.m128d_f64[0] < 1.0e20 && v196 * v29 + v24 > v196 * v30 + a2.m128d_f64[0] )
                      v196 = (a2.m128d_f64[0] - v24) / (v29 - v30);
                    *(double *)(v26 + *((_QWORD *)v204 + 123)) = v201 * v29 + *(double *)(v26 + *((_QWORD *)v204 + 123));
                    *(double *)&v19[v26] = v29;
                  }
                  if ( a2.m128d_f64[0] < 1.0e20 )
                  {
                    v31 = (double *)(v26 + *((_QWORD *)v204 + 126));
                    a2.m128d_f64[0] = v201 * v30 + *v31;
                    *v31 = a2.m128d_f64[0];
                    *(double *)&v20[v26] = v30;
                  }
                  if ( v26 == v28 )
                    break;
                  v26 += 8LL;
                  v24 = v22[v26 / 8];
                  *(_QWORD *)&a2.m128d_f64[0] = v23[v26 / 8];
                  if ( v24 > a2.m128d_f64[0] )
                    goto LABEL_175;
                }
              }
              else
              {
                while ( 1 )
                {
                  v61 = a5[v26 / 8];
                  if ( v24 > -1.0e20 )
                  {
                    if ( a2.m128d_f64[0] < 1.0e20 && v196 * v61 + v24 > 0.0 * v196 + a2.m128d_f64[0] )
                      v196 = (a2.m128d_f64[0] - v24) / v61;
                    *(double *)(v26 + *((_QWORD *)v204 + 123)) = v201 * v61 + *(double *)(v26 + *((_QWORD *)v204 + 123));
                    *(double *)&v19[v26] = v61;
                  }
                  if ( a2.m128d_f64[0] < 1.0e20 )
                  {
                    v62 = (double *)(v26 + *((_QWORD *)v204 + 126));
                    a2.m128d_f64[0] = 0.0 * v201 + *v62;
                    *v62 = a2.m128d_f64[0];
                    *(_QWORD *)&v20[v26] = 0;
                  }
                  if ( v26 == v28 )
                    break;
                  v26 += 8LL;
                  v24 = v22[v26 / 8];
                  *(_QWORD *)&a2.m128d_f64[0] = v23[v26 / 8];
                  if ( v24 > a2.m128d_f64[0] )
                    goto LABEL_175;
                }
              }
            }
            else
            {
              v175 = (unsigned int)(v21 - 1);
              v176 = 0;
              v177 = 8 * v175;
              v27 = v204;
              while ( 1 )
              {
                v178 = a6[v176 / 8];
                if ( v24 > -1.0e20 )
                {
                  if ( a2.m128d_f64[0] < 1.0e20 && 0.0 * v196 + v24 > v196 * v178 + a2.m128d_f64[0] )
                    v196 = (a2.m128d_f64[0] - v24) / (0.0 - v178);
                  *(double *)(v176 + *((_QWORD *)v204 + 123)) = 0.0 * v201 + *(double *)(v176 + *((_QWORD *)v204 + 123));
                  *(_QWORD *)&v19[v176] = 0;
                }
                if ( a2.m128d_f64[0] < 1.0e20 )
                {
                  v179 = (double *)(v176 + *((_QWORD *)v204 + 126));
                  a2.m128d_f64[0] = v201 * v178 + *v179;
                  *v179 = a2.m128d_f64[0];
                  *(double *)&v20[v176] = v178;
                }
                if ( v176 == v177 )
                  break;
                v176 += 8LL;
                v24 = v22[v176 / 8];
                *(_QWORD *)&a2.m128d_f64[0] = v23[v176 / 8];
                if ( v24 > a2.m128d_f64[0] )
                  goto LABEL_175;
              }
            }
            v204 = v27;
            goto LABEL_22;
          }
LABEL_176:
          v16 = -1;
          v196 = -1.0;
          goto LABEL_24;
        }
      }
LABEL_174:
      v196 = 1.797693134862316e308;
      goto LABEL_24;
    }
    v157 = *((double **)v204 + 18);
    v158 = *((unsigned __int64 **)v204 + 19);
    v159 = *v157;
    *(_QWORD *)&a2.m128d_f64[0] = *v158;
    if ( *v157 > *(double *)v158 )
      goto LABEL_176;
    v160 = (unsigned int)(v156 - 1);
    v161 = 0;
    v196 = 1.0e50;
    while ( 1 )
    {
      if ( a7 )
      {
        v162 = a7[v161];
        v163 = 0.0;
        if ( !a8 )
          goto LABEL_162;
      }
      else
      {
        v162 = 0.0;
      }
      v163 = a8[v161];
LABEL_162:
      if ( v159 > -1.0e20 )
      {
        if ( a2.m128d_f64[0] < 1.0e20 && v196 * v162 + v159 > v196 * v163 + a2.m128d_f64[0] )
          v196 = (a2.m128d_f64[0] - v159) / (v162 - v163);
        v164 = (int)v161 + *((_DWORD *)v204 + 27);
        *(double *)(*((_QWORD *)v204 + 123) + 8 * v164) = v201 * v162 + *(double *)(*((_QWORD *)v204 + 123) + 8 * v164);
        *(double *)&v19[8 * v164] = v162;
      }
      if ( a2.m128d_f64[0] < 1.0e20 )
      {
        v165 = *((_DWORD *)v204 + 27) + (int)v161;
        v166 = (double *)(*((_QWORD *)v204 + 126) + 8 * v165);
        a2.m128d_f64[0] = v201 * v163 + *v166;
        *v166 = a2.m128d_f64[0];
        *(double *)&v20[8 * v165] = v163;
      }
      if ( v161 == v160 )
        break;
      v159 = v157[++v161];
      *(_QWORD *)&a2.m128d_f64[0] = v158[v161];
      if ( v159 > a2.m128d_f64[0] )
      {
LABEL_175:
        v204 = v27;
        goto LABEL_176;
      }
    }
    if ( v196 <= 0.0 )
    {
      v16 = -(v196 < 0.0);
      goto LABEL_24;
    }
    if ( v186 )
    {
      v21 = *((_DWORD *)v204 + 27);
      if ( v21 > 0 )
        goto LABEL_8;
    }
LABEL_22:
    if ( v196 == 1.0e50 )
      goto LABEL_174;
    v16 = -(v196 < 0.0);
LABEL_24:
    v32 = *a3;
    v202 = *a3;
    if ( *a3 > v196 )
    {
      a2.m128d_f64[0] = *a3;
      sprintf(v208, "Crossover considerations reduce ending  theta from %g to %g\n", v32, v196);
      v167 = (CoinMessageHandler *)CoinMessageHandler::message(
                                     *((CoinMessageHandler **)v204 + 43),
                                     92,
                                     (ClpSimplexDual *)((char *)v204 + 416));
      v172 = CoinMessageHandler::operator<<(v167, (__int64)v208, v168, v169, v170, v171, v180);
      CoinMessageHandler::operator<<(v172, 0, v32);
      v202 = v196;
      *a3 = v196;
    }
    if ( v201 > v202 || v16 )
    {
      v192 = 0;
    }
    else
    {
      if ( a9 )
      {
        v33 = *((_DWORD *)v204 + 27);
        if ( v33 > 0 )
        {
          v34 = *((_QWORD *)v204 + 129);
          if ( (unsigned int)v33 > 8
            && ((unsigned __int64)a9 >= v34 + 16 || v34 >= (unsigned __int64)(a9 + 2))
            && ((unsigned __int64)v199 >= v34 + 16 || v34 >= (unsigned __int64)(v199 + 2)) )
          {
            v35 = (v34 >> 3) & 1;
            if ( ((v34 >> 3) & 1) != 0 )
            {
              v16 = 1;
              v36 = *a9;
              *v199 = *a9;
              *(double *)v34 = v36 * v201 + *(double *)v34;
            }
            v37 = v33 - v35;
            v38 = _mm_unpacklo_pd((__m128d)*(unsigned __int64 *)&v201, (__m128d)*(unsigned __int64 *)&v201);
            v39 = (v34 >> 3) & 1;
            v40 = &a9[v39];
            v41 = (unsigned int)(v33 - v35) >> 1;
            v42 = 0;
            v43 = &v199[v39];
            v44 = v34 + v39 * 8;
            v45 = 0;
            do
            {
              v46 = *(__m128d *)&v40[v45];
              ++v42;
              *(__m128d *)&v43[v45] = v46;
              *(__m128d *)(v44 + v45 * 8) = _mm_add_pd(_mm_mul_pd(v46, v38), *(__m128d *)(v44 + v45 * 8));
              v45 += 2;
            }
            while ( v41 > v42 );
            v47 = (v37 & 0xFFFFFFFE) + v16;
            if ( v37 != (v37 & 0xFFFFFFFE) )
            {
              v48 = a9[v47];
              v199[v47] = v48;
              *(double *)(v34 + 8LL * v47) = v48 * v201 + *(double *)(v34 + 8LL * v47);
              v49 = v47 + 1;
              if ( v47 + 1 < v33 )
              {
                v50 = a9[v49];
                v199[v49] = v50;
                *(double *)(v34 + 8LL * v49) = v50 * v201 + *(double *)(v34 + 8LL * v49);
              }
            }
          }
          else
          {
            v173 = 0;
            do
            {
              v174 = a9[v173 / 8];
              v199[v173 / 8] = v174;
              *(double *)(v34 + v173) = v174 * v201 + *(double *)(v34 + v173);
              v173 += 8LL;
            }
            while ( v173 != 8LL * (unsigned int)(v33 - 1) + 8 );
          }
        }
      }
      v205 = nullptr;
      ClpSimplexDual::gutsOfDual(v204, 0, &v205, -1, (ClpDataSave *)v206);
      if ( *((_DWORD *)v204 + 26) + *((_DWORD *)v204 + 27) > 0 )
      {
        v51 = 0;
        do
        {
          v52 = (_BYTE *)(v51 + *((_QWORD *)v204 + 33));
          ++v51;
          *v52 &= 0xE7u;
        }
        while ( *((_DWORD *)v204 + 26) + *((_DWORD *)v204 + 27) > (int)v51 );
      }
      v53 = (ClpSimplexDual *)((char *)v204 + 416);
      v54 = (CoinMessageHandler *)CoinMessageHandler::message(
                                    *((CoinMessageHandler **)v204 + 43),
                                    87,
                                    (ClpSimplexDual *)((char *)v204 + 416));
      v55 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v54);
      v56 = *(double *)v204 * *((double *)v204 + 9) - *((double *)v204 + 5);
      v57 = CoinMessageHandler::operator<<(v55);
      CoinMessageHandler::operator<<(v57, 0, v56);
      a2 = (__m128d)*(unsigned __int64 *)a3;
      while ( 1 )
      {
        v58 = _mm_unpacklo_pd((__m128d)*(unsigned __int64 *)&v201, a2);
        a2.m128d_f64[0] = a4;
        v209 = 0x7FEFFFFFFFFFFFFFLL;
        *(__m128d *)v208 = v58;
        v210 = v19;
        v211 = v20;
        v59 = ClpSimplexOther::parametricsLoop(
                v204,
                (__int64)v208,
                (__int64)v19,
                (__int64)v20,
                (__int64)v199,
                (__int64)v206,
                v191);
        v197 = *(double *)v208;
        v201 = *(double *)&v208[8];
        *a3 = *(double *)&v208[8];
        if ( v59 )
          break;
        *a3 = v202;
        v63 = (CoinMessageHandler *)CoinMessageHandler::message(*((CoinMessageHandler **)v204 + 43), 87, v53);
        v64 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v63);
        v65 = *((double *)v204 + 9) * *(double *)v204 - *((double *)v204 + 5);
        v66 = CoinMessageHandler::operator<<(v64);
        CoinMessageHandler::operator<<(v66, 0, v65);
        a2 = (__m128d)*(unsigned __int64 *)a3;
        if ( v201 >= a2.m128d_f64[0] )
        {
          v197 = v201;
          v192 = 0;
          goto LABEL_48;
        }
      }
      if ( v59 == -1 )
      {
        v192 = 1;
      }
      else
      {
        if ( *((_DWORD *)v204 + 80) != 1 )
LABEL_199:
          abort();
        v192 = 0;
        if ( !v191 )
        {
          v140 = (CoinMessageHandler *)CoinMessageHandler::message(*((CoinMessageHandler **)v204 + 43), 87, v53);
          v141 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v140);
          a2.m128d_f64[0] = *((double *)v204 + 9) * *(double *)v204 - *((double *)v204 + 5);
          v142 = CoinMessageHandler::operator<<(v141);
          CoinMessageHandler::operator<<(v142, 0, a2.m128d_f64[0]);
          *((_DWORD *)v204 + 80) = 0;
          v192 = 0;
        }
      }
LABEL_48:
      v201 = v197;
    }
LABEL_49:
    ClpSimplexDual::finishSolve(v204, 0);
    v60 = *((_QWORD *)v204 + 155);
    if ( v60 )
      (*(void (__fastcall **)(__int64, double))(*(_QWORD *)v60 + 80LL))(v60, a2.m128d_f64[0]);
    *((_QWORD *)v204 + 155) = v14;
    ClpDataSave::ClpDataSave((ClpDataSave *)v208, (const ClpDataSave *)v206);
    ClpSimplex::restoreData();
    ClpDataSave::~ClpDataSave((ClpDataSave *)v208);
    if ( v192 )
    {
      if ( a4 == 0.0 )
        a2.m128d_f64[0] = fmin(v201 + 0.00001, v202);
      else
        a2.m128d_f64[0] = fmin(v201 + a4, v202);
      v203 = *(unsigned __int64 *)&a2.m128d_f64[0];
      for ( i = 2; ; i = 1 )
      {
        v67 = *((__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD, double **, _QWORD, __int64))v204 + 20);
        if ( v67 )
          v68 = (**v67)(v67, 0, 0, &v205, 0, 2);
        else
          v68 = 0;
        if ( v217 )
          v69 = (**v217)(v217, 0, 0, v207, 0, 2);
        else
          v69 = 0;
        v70 = v218;
        v71 = v219;
        v72 = *((_DWORD *)v204 + 27);
        v73 = *((_QWORD *)v204 + 22);
        v74 = *((_QWORD *)v204 + 23);
        v195 = v72;
        if ( v72 > 0 )
        {
          v75 = 8LL * (unsigned int)(v72 - 1) + 8;
          v76 = 0;
          do
          {
            *(double *)(v69 + v76) = v199[v76 / 8] * *(double *)&v203 + *(double *)(v68 + v76);
            *(double *)(v70 + v76) = *(double *)&v19[v76] * *(double *)&v203 + *(double *)(v73 + v76);
            a2.m128d_f64[0] = *(double *)(v74 + v76) + *(double *)&v203 * *(double *)&v20[v76];
            *(double *)(v71 + v76) = a2.m128d_f64[0];
            v76 += 8LL;
          }
          while ( v76 != v75 );
        }
        v77 = v215;
        v78 = (double *)v216;
        v79 = *((_DWORD *)v204 + 26);
        v80 = *((_QWORD *)v204 + 18);
        v81 = *((double **)v204 + 19);
        v194 = v79;
        if ( v79 > 0 )
        {
          v82 = 8LL * v195 + 16;
          v83 = 8LL * v195;
          v84 = (double *)&v20[v83];
          v188 = (double *)&v19[v83];
          v85 = (v216 >= (unsigned __int64)(v81 + 2) || (unsigned __int64)v81 >= v216 + 16)
             && (v216 >= v80 + 16 || v80 >= v216 + 16)
             && (v215 >= v81 + 2 || v215 + 2 <= v81)
             && ((unsigned __int64)(v215 + 2) <= v216 || (unsigned __int64)v215 >= v216 + 16)
             && (unsigned int)v79 > 0xA
             && ((unsigned __int64)(v215 + 2) <= v80 || (unsigned __int64)v215 >= v80 + 16);
          v86 = v215 + 2 <= (double *)&v20[v83] || v215 >= (double *)&v20[v82];
          v87 = v216 >= (unsigned __int64)&v20[v82];
          v88 = (double *)&v19[v82];
          if ( (v215 + 2 <= (double *)&v19[v83] || v215 >= v88)
            && ((unsigned __int64)&v20[v83] >= v216 + 16 || v87)
            && v86
            && v85
            && (v216 + 16 <= (unsigned __int64)v188 || v216 >= (unsigned __int64)v88) )
          {
            v198 = 0;
            if ( ((v80 >> 3) & 1) != 0 )
            {
              v198 = 1;
              *v215 = *v188 * *(double *)&v203 + *(double *)v80;
              *v78 = *v81 + *(double *)&v203 * *v84;
            }
            v89 = 0;
            v90 = (v80 >> 3) & 1;
            v189 = v194 - ((v80 >> 3) & 1);
            v91 = &v77[v90];
            v92 = _mm_unpacklo_pd((__m128d)v203, (__m128d)v203);
            v93 = v90 * 8 + 8LL * v195;
            v94 = v80 + v90 * 8;
            v95 = &v19[v93];
            v96 = &v81[v90];
            v97 = &v20[v93];
            v98 = &v78[v90];
            v99 = 0;
            do
            {
              ++v89;
              *(__m128d *)&v91[v99] = _mm_add_pd(
                                        _mm_mul_pd(*(__m128d *)&v95[v99 * 8], v92),
                                        *(__m128d *)(v94 + v99 * 8));
              a2 = _mm_add_pd(_mm_mul_pd(*(__m128d *)&v97[v99 * 8], v92), *(__m128d *)&v96[v99]);
              *(__m128d *)&v98[v99] = a2;
              v99 += 2;
            }
            while ( v189 >> 1 > v89 );
            v100 = (v189 & 0xFFFFFFFE) + v198;
            if ( v189 != (v189 & 0xFFFFFFFE) )
            {
              v101 = v100;
              v102 = v195 + v100;
              v103 = v100 + 1;
              v77[v101] = *(double *)&v19[8 * v102] * *(double *)&v203 + *(double *)(v80 + 8 * v101);
              a2.m128d_f64[0] = *(double *)&v20[8 * v102] * *(double *)&v203 + v81[v101];
              v78[v101] = a2.m128d_f64[0];
              if ( v103 < v194 )
              {
                v104 = v103;
                v105 = v195 + v103;
                v77[v104] = *(double *)&v19[8 * v105] * *(double *)&v203 + *(double *)(v80 + 8 * v104);
                a2.m128d_f64[0] = v81[v104] + *(double *)&v203 * *(double *)&v20[8 * v105];
                v78[v104] = a2.m128d_f64[0];
              }
            }
          }
          else
          {
            v143 = 0;
            do
            {
              v77[v143 / 8] = v188[v143 / 8] * *(double *)&v203 + *(double *)(v80 + v143);
              a2.m128d_f64[0] = v81[v143 / 8] + *(double *)&v203 * v84[v143 / 8];
              v78[v143 / 8] = a2.m128d_f64[0];
              v143 += 8LL;
            }
            while ( v143 != 8LL * (unsigned int)(v194 - 1) + 8 );
          }
        }
        ClpSimplex::dual((ClpSimplex *)v212, 0, 0);
        if ( !v221 )
          break;
        *(_QWORD *)&a2.m128d_f64[0] = v203;
        sprintf(v207, "Can not get to theta of %g\n", *(double *)&v203);
        v106 = (CoinMessageHandler *)CoinMessageHandler::message(
                                       *((CoinMessageHandler **)v204 + 43),
                                       92,
                                       (ClpSimplexDual *)((char *)v204 + 416));
        v111 = CoinMessageHandler::operator<<(v106, (__int64)v207, v107, v108, v109, v110, v180);
        CoinMessageHandler::operator<<(v111, 0, *(double *)&v203);
        if ( i == 1 )
          goto LABEL_199;
        v191 = 0;
        *(double *)&v203 = v201;
      }
      v112 = v204;
      v113 = (_BYTE *)v220;
      v114 = *((_DWORD *)v204 + 26);
      v115 = *((_DWORD *)v204 + 27);
      v116 = *((_BYTE **)v204 + 33);
      v117 = v114 + v115;
      if ( v115 + v114 && v116 != (_BYTE *)v220 )
      {
        v118 = v117 >> 3;
        if ( v117 >> 3 > 0 )
        {
          if ( (v220 >= (unsigned __int64)(v116 + 16) || (unsigned __int64)v116 >= v220 + 16) && v118 > 1 )
          {
            v119 = 0;
            v120 = 0;
            do
            {
              a2 = (__m128d)_mm_loadu_si128((const __m128i *)&v113[v119]);
              ++v120;
              *(__m128d *)&v116[v119] = a2;
              v119 += 16;
            }
            while ( v118 >> 1 > v120 );
            v121 = 8LL * (v118 & 0xFFFFFFFE);
            v122 = &v113[v121];
            v123 = &v116[v121];
            if ( v118 != (v118 & 0xFFFFFFFE) )
            {
              *v123 = *v122;
              v123[1] = v122[1];
              v123[2] = v122[2];
              v123[3] = v122[3];
              v123[4] = v122[4];
              v123[5] = v122[5];
              v123[6] = v122[6];
              v123[7] = v122[7];
            }
            v124 = v118 - 1;
          }
          else
          {
            v124 = v118 - 1;
            v153 = (char *)v220;
            v154 = *((_BYTE **)v204 + 33);
            do
            {
              v155 = *v153;
              v154 += 8;
              v153 += 8;
              *(v154 - 8) = v155;
              *(v154 - 7) = *(v153 - 7);
              *(v154 - 6) = *(v153 - 6);
              *(v154 - 5) = *(v153 - 5);
              *(v154 - 4) = *(v153 - 4);
              *(v154 - 3) = *(v153 - 3);
              *(v154 - 2) = *(v153 - 2);
              *(v154 - 1) = *(v153 - 1);
            }
            while ( v154 != &v116[8 * v124 + 8] );
          }
          v125 = 8LL * v124 + 8;
          v113 += v125;
          v116 += v125;
        }
        switch ( v117 % 8 )
        {
          case 1:
            goto LABEL_114;
          case 2:
            goto LABEL_113;
          case 3:
            goto LABEL_112;
          case 4:
            goto LABEL_111;
          case 5:
            goto LABEL_110;
          case 6:
            goto LABEL_109;
          case 7:
            v116[6] = v113[6];
LABEL_109:
            v116[5] = v113[5];
LABEL_110:
            v116[4] = v113[4];
LABEL_111:
            v116[3] = v113[3];
LABEL_112:
            v116[2] = v113[2];
LABEL_113:
            v116[1] = v113[1];
LABEL_114:
            *v116 = *v113;
            break;
          default:
            break;
        }
        v115 = *((_DWORD *)v204 + 27);
        v114 = *((_DWORD *)v204 + 26);
        v112 = v204;
      }
      v126 = *((unsigned __int64 **)v112 + 15);
      v127 = v214;
      if ( v115 && v126 != v214 )
      {
        if ( v115 >> 3 > 0 )
        {
          v128 = *((unsigned __int64 **)v112 + 15);
          v129 = v214;
          v130 = (unsigned int)((v115 >> 3) - 1);
          do
          {
            v131 = *v129;
            v128 += 8;
            v129 += 8;
            *(v128 - 8) = v131;
            *(v128 - 7) = *(v129 - 7);
            *(v128 - 6) = *(v129 - 6);
            *(v128 - 5) = *(v129 - 5);
            *(v128 - 4) = *(v129 - 4);
            *(v128 - 3) = *(v129 - 3);
            *(v128 - 2) = *(v129 - 2);
            *(_QWORD *)&a2.m128d_f64[0] = *(v129 - 1);
            *(v128 - 1) = *(_QWORD *)&a2.m128d_f64[0];
          }
          while ( v128 != &v126[8 * v130 + 8] );
          v204 = v112;
          v132 = ((int)v130 + 1LL) << 6;
          v127 = (unsigned __int64 *)((char *)v127 + v132);
          v126 = (unsigned __int64 *)((char *)v126 + v132);
        }
        switch ( v115 % 8 )
        {
          case 1:
            goto LABEL_129;
          case 2:
            goto LABEL_128;
          case 3:
            goto LABEL_127;
          case 4:
            goto LABEL_126;
          case 5:
            goto LABEL_125;
          case 6:
            goto LABEL_124;
          case 7:
            v126[6] = v127[6];
LABEL_124:
            v126[5] = v127[5];
LABEL_125:
            v126[4] = v127[4];
LABEL_126:
            v126[3] = v127[3];
LABEL_127:
            v126[2] = v127[2];
LABEL_128:
            v126[1] = v127[1];
LABEL_129:
            *(_QWORD *)&a2.m128d_f64[0] = *v127;
            *v126 = *v127;
            break;
          default:
            break;
        }
      }
      v133 = v213;
      v134 = *((unsigned __int64 **)v204 + 14);
      if ( v114 && v134 != v213 )
      {
        if ( v114 >> 3 > 0 )
        {
          v135 = *((unsigned __int64 **)v204 + 14);
          v136 = v213;
          v137 = (unsigned int)((v114 >> 3) - 1);
          do
          {
            v138 = *v136;
            v135 += 8;
            v136 += 8;
            *(v135 - 8) = v138;
            *(v135 - 7) = *(v136 - 7);
            *(v135 - 6) = *(v136 - 6);
            *(v135 - 5) = *(v136 - 5);
            *(v135 - 4) = *(v136 - 4);
            *(v135 - 3) = *(v136 - 3);
            *(v135 - 2) = *(v136 - 2);
            *(_QWORD *)&a2.m128d_f64[0] = *(v136 - 1);
            *(v135 - 1) = *(_QWORD *)&a2.m128d_f64[0];
          }
          while ( v135 != &v134[8 * v137 + 8] );
          v139 = ((int)v137 + 1LL) << 6;
          v133 = (unsigned __int64 *)((char *)v133 + v139);
          v134 = (unsigned __int64 *)((char *)v134 + v139);
        }
        switch ( v114 % 8 )
        {
          case 1:
            goto LABEL_143;
          case 2:
            goto LABEL_142;
          case 3:
            goto LABEL_141;
          case 4:
            goto LABEL_140;
          case 5:
            goto LABEL_139;
          case 6:
            goto LABEL_138;
          case 7:
            v134[6] = v133[6];
LABEL_138:
            v134[5] = v133[5];
LABEL_139:
            v134[4] = v133[4];
LABEL_140:
            v134[3] = v133[3];
LABEL_141:
            v134[2] = v133[2];
LABEL_142:
            v134[1] = v133[1];
LABEL_143:
            *(_QWORD *)&a2.m128d_f64[0] = *v133;
            *v134 = *v133;
            break;
          default:
            break;
        }
      }
    }
    else
    {
      *(double *)&v203 = v201;
    }
    if ( v19 )
      operator delete[](v19);
    if ( v20 )
      operator delete[](v20);
    if ( !v199 )
    {
      ClpDataSave::~ClpDataSave((ClpDataSave *)v206);
      if ( !v192 )
        goto LABEL_152;
LABEL_59:
      v201 = *(double *)&v203;
      continue;
    }
    break;
  }
  operator delete[](v199);
  ClpDataSave::~ClpDataSave((ClpDataSave *)v206);
  if ( v192 )
    goto LABEL_59;
LABEL_152:
  *((_DWORD *)v204 + 327) = v181;
  v144 = *a3;
  sprintf(v208, "Ending theta %g\n", *a3);
  v145 = (CoinMessageHandler *)CoinMessageHandler::message(
                                 *((CoinMessageHandler **)v204 + 43),
                                 92,
                                 (ClpSimplexDual *)((char *)v204 + 416));
  v150 = CoinMessageHandler::operator<<(v145, (__int64)v208, v146, v147, v148, v149, v180);
  CoinMessageHandler::operator<<(v150, 0, v144);
  v151 = *((_DWORD *)v204 + 80);
  ClpSimplex::~ClpSimplex((ClpSimplex *)v212);
  return v151;
}

