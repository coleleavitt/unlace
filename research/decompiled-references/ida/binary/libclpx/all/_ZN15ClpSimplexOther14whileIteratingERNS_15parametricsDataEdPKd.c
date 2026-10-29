__int64 __fastcall ClpSimplexOther::whileIterating(ClpSimplex *this, __int64 a2, double a3, double a4, double a5)
{
  int v7; // ebp
  void *v8; // r15
  int v9; // eax
  __int64 v10; // r12
  __int64 v11; // rsi
  __int64 v12; // rax
  CoinIndexedVector **v13; // r13
  CoinIndexedVector **v14; // rbp
  CoinIndexedVector *v15; // rdi
  double v16; // xmm0_8
  __int64 v17; // rax
  __int64 v18; // r13
  int i; // eax
  int Theta; // ebp
  double v21; // xmm0_8
  const CoinMessages *v22; // rbp
  CoinMessageHandler *v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rax
  int v27; // eax
  int v28; // eax
  CoinMessageHandler *v29; // rax
  CoinMessageHandler *v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rax
  int v34; // eax
  CoinIndexedVector *v35; // rdi
  double v37; // xmm0_8
  double v38; // xmm1_8
  double v39; // xmm1_8
  double v40; // xmm3_8
  CoinMessageHandler *v41; // rax
  CoinMessageHandler *v42; // rax
  double v43; // xmm0_8
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rax
  int v47; // eax
  double v48; // xmm0_8
  CoinMessageHandler *v49; // rax
  CoinMessageHandler *v50; // rdi
  __int64 v51; // rax
  int v52; // eax
  CoinIndexedVector *v53; // rdi
  int v54; // eax
  __int64 v55; // rdi
  int *v56; // rdx
  __int64 v57; // rsi
  __int64 v58; // rax
  double *v59; // rcx
  int v60; // eax
  int *v61; // rcx
  __int64 v62; // rdi
  __int64 v63; // rsi
  __int64 v64; // rdx
  double *v65; // rax
  char v66; // al
  __int64 v67; // rax
  int v68; // edx
  CoinIndexedVector *v69; // rcx
  CoinIndexedVector *v70; // rdx
  CoinIndexedVector *v71; // rsi
  double v72; // xmm0_8
  ClpFactorization *v73; // rdi
  double v74; // xmm0_8
  __int64 v75; // rax
  int v77; // eax
  bool v78; // cl
  __int64 *v79; // rcx
  __int64 v80; // rdi
  double *v81; // r8
  double v82; // xmm2_8
  double v83; // xmm0_8
  double v84; // xmm0_8
  bool v85; // al
  __int64 v86; // rdx
  __int64 v87; // rax
  int v88; // ecx
  __int64 v89; // rdx
  __int64 v90; // rax
  int v91; // eax
  char *v92; // r12
  char *v93; // r12
  __int64 v94; // rax
  char v95; // dl
  bool v96; // al
  __int64 v97; // rax
  __int64 v98; // rdx
  __int64 v99; // rdx
  __int64 v100; // rax
  double v101; // xmm0_8
  double v102; // xmm0_8
  __int64 v103; // rcx
  __int64 v104; // rdx
  __int64 v105; // rax
  double v106; // xmm0_8
  double v107; // xmm1_8
  int v108; // esi
  __int64 v109; // rax
  int v110; // edi
  double v111; // xmm0_8
  __int64 v112; // rdx
  __int64 v113; // rdx
  __int64 v114; // rcx
  __int64 v115; // rax
  int v116; // r8d
  int v117; // r9d
  __int64 v118; // rcx
  int v119; // r8d
  CoinMessageHandler *v120; // rax
  CoinMessageHandler *v121; // rax
  double v122; // xmm0_8
  CoinMessageHandler *v123; // rax
  __int64 v124; // rdx
  __int64 v125; // rcx
  __int64 v126; // r8
  __int64 v127; // r9
  CoinMessageHandler *v128; // rax
  __int64 v129; // rdx
  __int64 v130; // rcx
  __int64 v131; // r8
  __int64 v132; // r9
  __int64 v133; // rax
  int v134; // eax
  __int64 *v135; // rax
  int v136; // edx
  __int64 v137; // r11
  __int64 v138; // r10
  __int64 v139; // rax
  __int64 v140; // r8
  double v141; // xmm2_8
  bool v142; // si
  __int64 v143; // rsi
  double *v144; // rdx
  bool v145; // r9
  __int64 v146; // r9
  __int64 v147; // rax
  int v148; // edx
  int v149; // edx
  double v150; // xmm0_8
  __int64 v151; // rdx
  CoinMessageHandler *v152; // rax
  CoinMessageHandler *v153; // rax
  double v154; // xmm0_8
  __int64 v155; // rax
  int v156; // edx
  int v157; // edx
  int v158; // eax
  int v159; // ecx
  __int64 v160; // rdx
  __int64 v161; // rax
  int v162; // eax
  __int64 v163; // rdx
  __int64 v164; // rax
  int v165; // edx
  int v166; // r10d
  int v167; // r11d
  int v168; // esi
  int *v169; // r9
  __int64 v170; // r8
  __int64 v171; // rax
  __int64 v172; // rcx
  int v173; // edi
  CoinIndexedVector *v174; // rbp
  double *v175; // rbp
  int v176; // eax
  __int64 v177; // rdi
  unsigned __int64 v178; // rdx
  __int64 v179; // rsi
  double v180; // xmm1_8
  char v181; // al
  double v182; // xmm2_8
  CoinMessageHandler *v183; // rax
  CoinMessageHandler *v184; // rdi
  __int64 v185; // rax
  int v186; // eax
  CoinIndexedVector *v187; // rdi
  CoinIndexedVector *v188; // rcx
  CoinIndexedVector *v189; // rdx
  CoinIndexedVector *v190; // rsi
  int v191; // eax
  int v192; // edx
  CoinIndexedVector *v193; // rdi
  CoinMessageHandler *v194; // rax
  CoinMessageHandler *v195; // rax
  double v196; // xmm0_8
  __int64 v197; // rax
  CoinIndexedVector *v198; // r12
  __int64 v199; // rcx
  __int64 v200; // r13
  __int64 v201; // r8
  int v202; // eax
  __int64 v203; // rdx
  __int64 v204; // rdi
  __int64 v205; // rsi
  __int64 v206; // rax
  __int64 v207; // rdx
  double v208; // xmm0_8
  __int64 v209; // r9
  int v210; // ecx
  __int64 v211; // rdx
  double v212; // xmm1_8
  double v213; // xmm2_8
  __int64 v214; // rax
  __int64 v215; // rdx
  int v216; // eax
  int v217; // eax
  __int64 v218; // [rsp+0h] [rbp-258h]
  __int64 v219; // [rsp+0h] [rbp-258h]
  double v220; // [rsp+8h] [rbp-250h]
  double v221; // [rsp+10h] [rbp-248h]
  int v222; // [rsp+18h] [rbp-240h]
  unsigned int v223; // [rsp+1Ch] [rbp-23Ch]
  double v224; // [rsp+20h] [rbp-238h]
  double v225; // [rsp+20h] [rbp-238h]
  int v226; // [rsp+20h] [rbp-238h]
  double *v227; // [rsp+28h] [rbp-230h]
  double *v228; // [rsp+30h] [rbp-228h]
  int *v229; // [rsp+38h] [rbp-220h]
  int *v230; // [rsp+40h] [rbp-218h]
  __int64 v231; // [rsp+48h] [rbp-210h]
  int v232; // [rsp+50h] [rbp-208h]
  int v233; // [rsp+50h] [rbp-208h]
  int v234; // [rsp+50h] [rbp-208h]
  __int64 v235; // [rsp+58h] [rbp-200h]
  int v236; // [rsp+58h] [rbp-200h]
  __int64 v237; // [rsp+60h] [rbp-1F8h]
  int v238; // [rsp+68h] [rbp-1F0h]
  __int64 v239; // [rsp+68h] [rbp-1F0h]
  double v240; // [rsp+78h] [rbp-1E0h] BYREF
  char dest[208]; // [rsp+80h] [rbp-1D8h] BYREF
  char s[8]; // [rsp+150h] [rbp-108h] BYREF

  v7 = *((_DWORD *)this + 26);
  v8 = *(void **)(a2 + 72);
  v227 = *(double **)(a2 + 32);
  v229 = *(int **)(a2 + 40);
  v228 = *(double **)(a2 + 48);
  v230 = *(int **)(a2 + 56);
  v9 = v7 + *((_DWORD *)this + 27);
  v222 = v9;
  v10 = (unsigned int)(v9 - 1);
  if ( v9 > 0 )
    memset(v8, 255, 4 * v10 + 4);
  if ( v7 > 0 )
  {
    v11 = *((_QWORD *)this + 157);
    v12 = 0;
    do
    {
      *((_DWORD *)v8 + *(int *)(v11 + 4 * v12)) = v12;
      ++v12;
    }
    while ( (unsigned int)(v7 - 1) + 1LL != v12 );
  }
  v13 = (CoinIndexedVector **)((char *)this + 1056);
  v14 = (CoinIndexedVector **)((char *)this + 1088);
  do
  {
    v15 = *v13++;
    CoinIndexedVector::clear(v15);
  }
  while ( v14 != v13 );
  CoinIndexedVector::clear(*((CoinIndexedVector **)this + 138));
  CoinIndexedVector::clear(*((CoinIndexedVector **)this + 139));
  v16 = *((double *)this + 95);
  if ( v16 <= 10.0 )
  {
    v67 = *(_QWORD *)(*((_QWORD *)this + 158) + 8LL);
    if ( v67 )
      *(_QWORD *)(v67 + 24) = 0x3FF0000000000000LL;
  }
  else
  {
    v17 = *(_QWORD *)(*((_QWORD *)this + 158) + 8LL);
    a4 = fmin(100.0, v16 / 10.0);
    if ( v17 )
      *(double *)(v17 + 24) = a4;
  }
  v18 = v10 + 1;
  v223 = -1;
  v221 = *(double *)a2;
  v220 = *(double *)a2;
  v237 = 8 * (v10 + 1);
  v231 = 16LL * v222;
  for ( i = *((_DWORD *)this + 80); ; i = *((_DWORD *)this + 80) )
  {
    if ( i != -1 )
      goto LABEL_29;
    Theta = ClpSimplexOther::nextTheta(this, 1, a2, 0, fmin(*(double *)(a2 + 8) - v220, 1.0e50), a4);
    v21 = 1.0e-14;
    v221 = v221 + *((double *)this + 100);
    a4 = v221 - v220;
    if ( *(_BYTE *)(a2 + 132) )
    {
      v21 = 1.0e-14;
      *(_BYTE *)(a2 + 132) = 0;
      if ( a4 > 1.0e-14 )
      {
        v92 = (char *)(*(_QWORD *)(a2 + 32) + v231);
        *(double *)a2 = v221;
        memcpy(*((void **)this + 22), v92, 8LL * *((int *)this + 27));
        memcpy(*((void **)this + 18), &v92[8 * *((int *)this + 27)], 8LL * *((int *)this + 26));
        v93 = (char *)(*(_QWORD *)(a2 + 48) + v231);
        memcpy(*((void **)this + 23), v93, 8LL * *((int *)this + 27));
        memcpy(*((void **)this + 19), &v93[8 * *((int *)this + 27)], 8LL * *((int *)this + 26));
        ClpSimplexOther::computeRhsEtc(this, a2);
        ClpSimplexOther::redoInternalArrays(this);
        CoinIndexedVector::clear(*((CoinIndexedVector **)this + 136));
        if ( v222 <= 0 )
        {
LABEL_109:
          ClpSimplex::gutsOfSolution(this, nullptr, nullptr, 0);
          v220 = v221;
          goto LABEL_16;
        }
        v94 = 0;
        while ( 1 )
        {
          while ( 1 )
          {
            v95 = *(_BYTE *)(*((_QWORD *)this + 33) + v94) & 7;
            if ( ((v95 - 3) & 0xFD) != 0 )
              break;
            v21 = *(double *)(*((_QWORD *)this + 123) + 8 * v94);
            *(double *)(*((_QWORD *)this + 150) + 8 * v94) = v21;
LABEL_105:
            if ( ++v94 == v18 )
              goto LABEL_109;
          }
          if ( v95 != 2 )
            goto LABEL_105;
          v21 = *(double *)(*((_QWORD *)this + 126) + 8 * v94);
          *(double *)(*((_QWORD *)this + 150) + 8 * v94++) = v21;
          if ( v94 == v18 )
            goto LABEL_109;
        }
      }
    }
    if ( a4 > 1.0e-14 )
    {
      v54 = *(v229 - 1);
      if ( v54 > 0 )
      {
        v55 = *((_QWORD *)this + 123);
        v56 = v229;
        v57 = (__int64)&v229[v54 - 1 + 1];
        do
        {
          v58 = *v56;
          v59 = (double *)(v55 + 8 * v58);
          v21 = v227[v58] * a4 + *v59;
          *v59 = v21;
          if ( (*(_BYTE *)(*((_QWORD *)this + 33) + v58) & 7) == 3 )
            *(double *)(*((_QWORD *)this + 150) + 8 * v58) = v21;
          ++v56;
        }
        while ( (int *)v57 != v56 );
      }
      v60 = *(v230 - 1);
      if ( v60 > 0 )
      {
        v61 = v230;
        v62 = *((_QWORD *)this + 126);
        v63 = (__int64)&v230[v60 - 1 + 1];
        do
        {
          v64 = *v61;
          v65 = (double *)(v62 + 8 * v64);
          v21 = v228[v64] * a4 + *v65;
          *v65 = v21;
          v66 = *(_BYTE *)(*((_QWORD *)this + 33) + v64) & 7;
          if ( v66 == 5 || v66 == 2 )
            *(double *)(*((_QWORD *)this + 150) + 8 * v64) = v21;
          ++v61;
        }
        while ( (int *)v63 != v61 );
      }
    }
LABEL_16:
    *((_DWORD *)this + 288) = -1;
    if ( Theta )
      break;
    if ( *((int *)this + 292) < 0 )
    {
      v163 = *((_QWORD *)this + 158);
      v164 = *(_QWORD *)(v163 + 8);
      if ( v164 )
        v165 = *(_DWORD *)(v164 + 68);
      else
        v165 = *(_DWORD *)(*(_QWORD *)(v163 + 16) + 52LL);
      if ( v165 <= 19 )
      {
        v166 = *((_DWORD *)this + 84);
        if ( (v166 & 0x800) != 0 )
        {
          v167 = *((_DWORD *)this + 335);
          if ( !v167 && *((int *)this + 327) > 99 )
          {
            v21 = *((double *)this + 98);
            if ( v21 > 100000000.0 )
            {
              v168 = *((_DWORD *)this + 26);
              if ( v168 <= 0 )
              {
                v223 = *((_DWORD *)this + 306);
                if ( !v223 )
                  goto LABEL_205;
                v223 = 0;
                goto LABEL_229;
              }
              v169 = *((int **)this + 157);
              v170 = *((_QWORD *)this + 33);
              if ( (*(_BYTE *)(v170 + *v169) & 0x40) != 0 )
              {
                v173 = 0;
                if ( !v165 )
                {
                  v223 = 0;
LABEL_203:
                  if ( !*((_DWORD *)this + 306) && v173 >= v168 )
                  {
LABEL_205:
                    if ( !v165
                      || (innerProduct(
                            *((const double **)this + 129),
                            *((_DWORD *)this + 27) + v168,
                            *((const double **)this + 150)),
                          v166 = *((_DWORD *)this + 84),
                          *((double *)this + 9) = (v21 + *(double *)(*((_QWORD *)this + 20) + 8LL))
                                                / (*((double *)this + 11)
                                                 * *((double *)this + 12)),
                          (v166 & 0x4000) != 0) )
                    {
LABEL_206:
                      *((_DWORD *)this + 80) = 0;
                      *((_QWORD *)this + 112) = 0;
                      if ( (v166 & 0x4400) == 0 )
                        goto LABEL_29;
                      v174 = *((CoinIndexedVector **)this + 133);
                      CoinIndexedVector::clear(v174);
                      v175 = *((double **)v174 + 1);
                      ClpModel::times(this, 1.0, *((const double **)this + 150), v175);
                      v176 = *((_DWORD *)this + 26);
                      if ( v176 <= 0 )
                      {
                        v210 = *((_DWORD *)this + 27);
                        if ( v210 <= 0 )
                        {
LABEL_29:
                          *(double *)a2 = v220 + *((double *)this + 100);
                          return v223;
                        }
                        v181 = 0;
                      }
                      else
                      {
                        v177 = *((_QWORD *)this + 124);
                        v178 = 0;
                        v179 = 8LL * (unsigned int)(v176 - 1) + 8;
                        v180 = *((double *)this + 110);
                        v181 = 0;
                        do
                        {
                          v182 = v175[v178 / 8];
                          if ( *(double *)(v177 + v178) - v180 <= v182 )
                          {
                            if ( v182 > *(double *)(*((_QWORD *)this + 127) + v178) + v180 )
                              v181 = 1;
                          }
                          else
                          {
                            v181 = 1;
                          }
                          v175[v178 / 8] = 0.0;
                          v178 += 8LL;
                        }
                        while ( v179 != v178 );
                        v210 = *((_DWORD *)this + 27);
                        if ( v210 <= 0 )
                          goto LABEL_250;
                      }
                      v211 = 0;
                      v212 = *((double *)this + 110);
                      do
                      {
                        v213 = *(double *)(*((_QWORD *)this + 150) + 8 * v211);
                        if ( *(double *)(*((_QWORD *)this + 125) + 8 * v211) - v212 <= v213 )
                        {
                          if ( v213 > *(double *)(*((_QWORD *)this + 128) + 8 * v211) + v212 )
                            v181 = 1;
                        }
                        else
                        {
                          v181 = 1;
                        }
                        ++v211;
                      }
                      while ( v210 > (int)v211 );
LABEL_250:
                      if ( v181 )
                      {
                        v214 = *((_QWORD *)this + 158);
                        *((_DWORD *)this + 80) = -3;
                        v215 = *(_QWORD *)(v214 + 8);
                        if ( v215 )
                          v216 = *(_DWORD *)(v215 + 68);
                        else
                          v216 = *(_DWORD *)(*(_QWORD *)(v214 + 16) + 52LL);
                        v223 = -2;
                        v217 = (v216 + 1) >> 1;
                        if ( v217 > *((_DWORD *)this + 326) )
                          v217 = *((_DWORD *)this + 326);
                        *((_DWORD *)this + 326) = v217;
                      }
                      goto LABEL_29;
                    }
                    v198 = *((CoinIndexedVector **)this + 133);
                    CoinIndexedVector::clear(v198);
                    v199 = *((_QWORD *)this + 16);
                    v200 = *((_QWORD *)v198 + 1);
                    v201 = *(_QWORD *)v198;
                    *((_QWORD *)v198 + 1) = v199;
                    v202 = *((_DWORD *)this + 26);
                    if ( v202 <= 0 )
                    {
                      *((_DWORD *)v198 + 4) = 0;
                    }
                    else
                    {
                      v203 = (unsigned int)(v202 - 1);
                      v204 = *((_QWORD *)this + 157);
                      v205 = *((_QWORD *)this + 129);
                      v206 = 0;
                      v207 = v203 + 1;
                      do
                      {
                        v208 = *(double *)(v205 + 8LL * *(int *)(v204 + 4 * v206));
                        *(double *)(v199 + 8 * v206) = v208;
                        if ( v208 != 0.0 )
                        {
                          v209 = Theta++;
                          *(_DWORD *)(v201 + 4 * v209) = v206;
                        }
                        ++v206;
                      }
                      while ( v207 != v206 );
                      *((_DWORD *)v198 + 4) = Theta;
                      if ( Theta )
                        goto LABEL_258;
                    }
                    *((_BYTE *)v198 + 28) = 0;
LABEL_258:
                    (*(void (__fastcall **)(_QWORD, ClpSimplex *, CoinIndexedVector *, _QWORD, _QWORD))(**((_QWORD **)this + 24) + 312LL))(
                      *((_QWORD *)this + 24),
                      this,
                      v198,
                      0,
                      0);
                    CoinIndexedVector::clear(*((CoinIndexedVector **)this + 134));
                    ClpFactorization::updateColumnTranspose(
                      *((ClpFactorization **)this + 158),
                      *((CoinIndexedVector **)this + 134),
                      v198);
                    *((_QWORD *)v198 + 1) = v200;
                    v166 = *((_DWORD *)this + 84);
                    goto LABEL_206;
                  }
LABEL_229:
                  *((_DWORD *)this + 80) = -5;
                  goto LABEL_29;
                }
LABEL_234:
                v223 = -2;
LABEL_202:
                if ( v167 )
                  goto LABEL_229;
                goto LABEL_203;
              }
              goto LABEL_198;
            }
          }
        }
        if ( !v165 )
        {
          v168 = *((_DWORD *)this + 26);
          v167 = *((_DWORD *)this + 334);
          if ( v168 <= 0
            || (v169 = *((int **)this + 157), v170 = *((_QWORD *)this + 33), (*(_BYTE *)(v170 + *v169) & 0x40) != 0) )
          {
            v173 = 0;
LABEL_201:
            v223 = 0;
            goto LABEL_202;
          }
LABEL_198:
          v171 = 1;
          while ( 1 )
          {
            v173 = v171;
            if ( v168 <= (int)v171 )
              goto LABEL_201;
            v172 = v169[v171++];
            if ( (*(_BYTE *)(v170 + v172) & 0x40) != 0 )
            {
              if ( !v165 )
                goto LABEL_201;
              goto LABEL_234;
            }
          }
        }
      }
      v191 = *((_DWORD *)this + 326);
      *((_DWORD *)this + 80) = -3;
      v192 = (v165 + 1) >> 1;
      v223 = -2;
      if ( v192 > v191 )
        v192 = v191;
      *((_DWORD *)this + 326) = v192;
      goto LABEL_29;
    }
    v22 = (ClpSimplex *)((char *)this + 416);
    v23 = (CoinMessageHandler *)CoinMessageHandler::message(
                                  *((CoinMessageHandler **)this + 43),
                                  32,
                                  (ClpSimplex *)((char *)this + 416));
    v24 = CoinMessageHandler::operator<<(v23);
    CoinMessageHandler::operator<<(v24, 0, v21);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 155) + 32LL))(*((_QWORD *)this + 155));
    ClpSimplexOther::bestPivot(this, 0);
    if ( *((int *)this + 288) < 0 )
    {
      v25 = *((_QWORD *)this + 158);
      *((_DWORD *)this + 292) = -1;
      v26 = *(_QWORD *)(v25 + 8);
      if ( v26 )
        v27 = *(_DWORD *)(v26 + 68);
      else
        v27 = *(_DWORD *)(*(_QWORD *)(v25 + 16) + 52LL);
      if ( v27 > 9 )
      {
        v35 = *((CoinIndexedVector **)this + 132);
LABEL_28:
        CoinIndexedVector::clear(v35);
        CoinIndexedVector::clear(*((CoinIndexedVector **)this + 138));
        v223 = 1;
        goto LABEL_29;
      }
      v28 = *((_DWORD *)this + 84);
      if ( (v28 & 0x1000) != 0 || (a4 = 9.999999999999999e-12, v21 < 9.999999999999999e-12) )
      {
        v21 = *((double *)this + 98);
        if ( v21 > 100000000.0 )
        {
          a4 = 0.001;
          v21 = *((double *)this + 106);
          a5 = *((double *)this + 107) + 0.001;
          if ( v21 <= a5 )
          {
            a5 = *((double *)this + 105) - 0.001;
            if ( a5 <= v21 && (v28 & 0x40) != 0 )
            {
LABEL_25:
              v29 = (CoinMessageHandler *)CoinMessageHandler::message(
                                            *((CoinMessageHandler **)this + 43),
                                            12,
                                            (ClpSimplex *)((char *)this + 416));
              v30 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v29);
              v31 = CoinMessageHandler::operator<<(v30);
              CoinMessageHandler::operator<<(v31, 0, v21);
              ClpSimplex::setFlagged(this, *((_DWORD *)this + 290));
              v32 = *((_QWORD *)this + 158);
              v33 = *(_QWORD *)(v32 + 8);
              if ( v33 )
                v34 = *(_DWORD *)(v33 + 68);
              else
                v34 = *(_DWORD *)(*(_QWORD *)(v32 + 16) + 52LL);
              v35 = *((CoinIndexedVector **)this + 132);
              if ( v34 )
                goto LABEL_28;
              CoinIndexedVector::clear(v35);
              CoinIndexedVector::clear(*((CoinIndexedVector **)this + 138));
              continue;
            }
          }
          v68 = *((_DWORD *)this + 306);
          *((_DWORD *)this + 80) = 1;
          if ( v68 )
            *((_DWORD *)this + 80) = 10;
          CoinIndexedVector::clear(*((CoinIndexedVector **)this + 132));
          CoinIndexedVector::clear(*((CoinIndexedVector **)this + 138));
          v28 = *((_DWORD *)this + 84);
        }
      }
      if ( (v28 & 0x40) == 0 )
      {
        *((_DWORD *)this + 80) = -4;
        v35 = *((CoinIndexedVector **)this + 132);
        goto LABEL_28;
      }
      goto LABEL_25;
    }
    v224 = -*((double *)this + 99) * (double)*((int *)this + 291);
    ClpSimplex::unpackPacked(this, *((CoinIndexedVector **)this + 133));
    CoinIndexedVector::clear(*((CoinIndexedVector **)this + 134));
    v37 = (*(double (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 155) + 8LL))(
            *((_QWORD *)this + 155),
            *((_QWORD *)this + 132),
            *((_QWORD *)this + 134),
            *((_QWORD *)this + 135),
            *((_QWORD *)this + 133));
    v38 = *((double *)this + 95);
    *((double *)this + 99) = v37;
    if ( v38 <= 10.0 )
    {
      v39 = 0.0000001;
    }
    else
    {
      a5 = fmin(0.0001, v38 * 0.00000001);
      v39 = a5;
    }
    v40 = fabs(v224);
    if ( v40 < 1.0e-12 || (a5 = fabs(v37), a5 < 1.0e-12) || (a5 = a5 + 1.0, v39 = v39 * a5, fabs(v224 - v37) > v39) )
    {
      v41 = (CoinMessageHandler *)CoinMessageHandler::message(
                                    *((CoinMessageHandler **)this + 43),
                                    33,
                                    (ClpSimplex *)((char *)this + 416));
      v42 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v41);
      v43 = *((double *)this + 99);
      v44 = CoinMessageHandler::operator<<(v42);
      CoinMessageHandler::operator<<(v44, 0, v43);
      CoinIndexedVector::clear(*((CoinIndexedVector **)this + 136));
      v45 = *((_QWORD *)this + 158);
      v46 = *(_QWORD *)(v45 + 8);
      if ( v46 )
        v47 = *(_DWORD *)(v46 + 68);
      else
        v47 = *(_DWORD *)(*(_QWORD *)(v45 + 16) + 52LL);
      if ( v47 )
      {
        (*(void (__fastcall **)(_QWORD, double, double, double, double, double))(**((_QWORD **)this + 155) + 40LL))(
          *((_QWORD *)this + 155),
          v43,
          v39,
          a5,
          v40,
          1.0e-12);
        v193 = *((CoinIndexedVector **)this + 132);
        *((_DWORD *)this + 80) = -2;
        CoinIndexedVector::clear(v193);
        CoinIndexedVector::clear(*((CoinIndexedVector **)this + 133));
        CoinIndexedVector::clear(*((CoinIndexedVector **)this + 138));
        v223 = -2;
        goto LABEL_29;
      }
      v48 = fabs(*((double *)this + 99));
      if ( v40 >= 0.00000001 && v48 >= 0.00000001 )
        a5 = (v48 + 1.0) * 0.0001;
      else
        a5 = v48 * 0.1;
      if ( v40 < 1.0e-12 || v48 < 1.0e-12 || (v48 = fabs(v224 - *((double *)this + 99)), v48 > a5) )
      {
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 155) + 40LL))(*((_QWORD *)this + 155));
        v49 = (CoinMessageHandler *)CoinMessageHandler::message(
                                      *((CoinMessageHandler **)this + 43),
                                      12,
                                      (ClpSimplex *)((char *)this + 416));
        v50 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v49);
        v51 = CoinMessageHandler::operator<<(v50);
        CoinMessageHandler::operator<<(v51, 0, v48);
        ClpSimplex::setFlagged(this, *((_DWORD *)this + 290));
        v52 = *((_DWORD *)this + 77);
        v53 = *((CoinIndexedVector **)this + 132);
        *((_DWORD *)this + 425) = 0;
        *((_DWORD *)this + 332) = v52;
        CoinIndexedVector::clear(v53);
        CoinIndexedVector::clear(*((CoinIndexedVector **)this + 133));
        CoinIndexedVector::clear(*((CoinIndexedVector **)this + 138));
        a4 = 1.0e-10;
        if ( fabs(*((double *)this + 99)) < 1.0e-10 && v40 < 0.00000001 && *((int *)this + 77) > 100 )
        {
          *((_DWORD *)this + 80) = 1;
          v223 = 1;
          goto LABEL_29;
        }
        continue;
      }
    }
    v69 = *((CoinIndexedVector **)this + 134);
    v70 = *((CoinIndexedVector **)this + 138);
    v71 = *((CoinIndexedVector **)this + 132);
    v72 = *((double *)this + 100);
    v240 = 0.0;
    if ( (unsigned int)ClpSimplexDual::updateDualsInDual(this, v71, v70, v69, v72, &v240, 0) )
      abort();
    v73 = *((ClpFactorization **)this + 158);
    v74 = *((double *)this + 99);
    a5 = -0.00001;
    v225 = (double)*((int *)this + 291) * -*((double *)this + 108) / v74;
    if ( fabs(v225 * *((double *)this + 104)) + v240 < -0.00001 )
    {
      v75 = *((_QWORD *)v73 + 1);
      if ( v75 ? *(_DWORD *)(v75 + 68) : *(_DWORD *)(*((_QWORD *)v73 + 2) + 52LL) )
      {
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 155) + 40LL))(*((_QWORD *)this + 155));
        *((_DWORD *)this + 80) = -2;
        v223 = -2;
        goto LABEL_29;
      }
    }
    a4 = 0.00000001;
    v77 = ClpFactorization::replaceColumn(
            v73,
            this,
            *((CoinIndexedVector **)this + 134),
            *((CoinIndexedVector **)this + 133),
            *((_DWORD *)this + 292),
            v74,
            0,
            0.00000001);
    if ( v77 == 2 )
    {
      v86 = *((_QWORD *)this + 158);
      v87 = *(_QWORD *)(v86 + 8);
      if ( v87 )
        v88 = *(_DWORD *)(v87 + 68);
      else
        v88 = *(_DWORD *)(*(_QWORD *)(v86 + 16) + 52LL);
      if ( v88 || (a4 = *((double *)this + 99), v74 = fabs(a4), v74 <= 0.00001) )
      {
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 155) + 40LL))(*((_QWORD *)this + 155));
        v89 = *((_QWORD *)this + 158);
        v90 = *(_QWORD *)(v89 + 8);
        if ( v90 )
          v91 = *(_DWORD *)(v90 + 68);
        else
          v91 = *(_DWORD *)(*(_QWORD *)(v89 + 16) + 52LL);
        if ( v91 )
        {
          *((_DWORD *)this + 80) = -2;
          v223 = -2;
          goto LABEL_29;
        }
        v183 = (CoinMessageHandler *)CoinMessageHandler::message(
                                       *((CoinMessageHandler **)this + 43),
                                       12,
                                       (ClpSimplex *)((char *)this + 416));
        v184 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v183);
        v185 = CoinMessageHandler::operator<<(v184);
        CoinMessageHandler::operator<<(v185, 0, v74);
        ClpSimplex::setFlagged(this, *((_DWORD *)this + 290));
        v186 = *((_DWORD *)this + 77);
        v187 = *((CoinIndexedVector **)this + 132);
        *((_DWORD *)this + 425) = 0;
        *((_DWORD *)this + 332) = v186;
        CoinIndexedVector::clear(v187);
        CoinIndexedVector::clear(*((CoinIndexedVector **)this + 133));
        CoinIndexedVector::clear(*((CoinIndexedVector **)this + 138));
        v188 = *((CoinIndexedVector **)this + 133);
        v189 = *((CoinIndexedVector **)this + 138);
        v190 = *((CoinIndexedVector **)this + 132);
        *(_QWORD *)s = 0;
        ClpSimplexDual::updateDualsInDual(this, v190, v189, v188, 0.0, (double *)s, 1);
        continue;
      }
      v78 = 1;
      goto LABEL_136;
    }
    a4 = *((double *)this + 99);
    v78 = v77 == 4;
    switch ( v77 )
    {
      case 1:
      case 4:
        v86 = *((_QWORD *)this + 158);
        v87 = *(_QWORD *)(v86 + 8);
LABEL_136:
        if ( v87 )
          v134 = *(_DWORD *)(v87 + 68);
        else
          v134 = *(_DWORD *)(*(_QWORD *)(v86 + 16) + 52LL);
        if ( v134 > 5 || v78 )
        {
          *((_DWORD *)this + 80) = -2;
          v223 = -3;
        }
        break;
      case 3:
        v147 = *(_QWORD *)(*((_QWORD *)this + 158) + 8LL);
        if ( v147 )
        {
          v148 = *(_DWORD *)(v147 + 68);
          if ( (double)*(int *)(v147 + 64) * 0.5 > (double)v148 && v148 <= 199 )
            *(double *)(v147 + 16) = 1.1 * *(double *)(v147 + 16);
        }
LABEL_158:
        *((_DWORD *)this + 80) = -2;
        break;
      case 5:
        goto LABEL_158;
    }
    v79 = *((__int64 **)this + 136);
    v80 = v79[1];
    v232 = *((_DWORD *)this + 292);
    v81 = (double *)(v80 + 8LL * v232);
    v82 = *v81;
    v83 = -*v81 / a4;
    if ( v83 != 0.0 )
    {
      v135 = *((__int64 **)this + 133);
      v136 = *((_DWORD *)v135 + 4);
      if ( v136 > 0 )
      {
        v137 = v135[1];
        v138 = *v135;
        v139 = 0;
        v140 = (unsigned int)(v136 - 1) + 1LL;
        while ( 1 )
        {
          v141 = *(double *)(v137 + 8 * v139) * v83;
          v143 = *(int *)(v138 + 4 * v139);
          v144 = (double *)(v80 + 8 * v143);
          if ( *v144 == 0.0 )
            break;
          v141 = v141 + *v144;
          if ( v141 <= 0.0 )
            v142 = v141 <= -1.0e-50;
          else
            v142 = v141 >= 1.0e-50;
          if ( v142 )
            goto LABEL_153;
          *v144 = 1.0e-100;
LABEL_147:
          if ( v140 == ++v139 )
          {
            v81 = (double *)(v80 + 8LL * v232);
            v22 = (ClpSimplex *)((char *)this + 416);
            v82 = *v81;
            goto LABEL_82;
          }
        }
        if ( v141 <= 0.0 )
          v145 = v141 <= -1.0e-50;
        else
          v145 = v141 >= 1.0e-50;
        if ( !v145 )
          goto LABEL_147;
        v146 = *((int *)v79 + 4);
        *((_DWORD *)v79 + 4) = v146 + 1;
        *(_DWORD *)(*v79 + 4 * v146) = v143;
LABEL_153:
        *v144 = v141;
        goto LABEL_147;
      }
    }
LABEL_82:
    v84 = -v83 - v82;
    if ( v82 != 0.0 )
    {
      v84 = v84 + v82;
      if ( v84 <= 0.0 )
        v85 = v84 <= -1.0e-50;
      else
        v85 = v84 >= 1.0e-50;
      if ( !v85 )
      {
        *v81 = 1.0e-100;
        goto LABEL_116;
      }
      goto LABEL_115;
    }
    if ( v84 <= 0.0 )
      v96 = v84 <= -1.0e-50;
    else
      v96 = v84 >= 1.0e-50;
    if ( v96 )
    {
      v97 = *((int *)v79 + 4);
      v98 = *v79;
      *((_DWORD *)v79 + 4) = v97 + 1;
      *(_DWORD *)(v98 + 4 * v97) = v232;
LABEL_115:
      *v81 = v84;
    }
LABEL_116:
    if ( *((double *)this + 100) < 0.0 )
      *((_QWORD *)this + 100) = 0;
    ClpSimplexDual::flipBounds(this, *((CoinIndexedVector **)this + 132), *((CoinIndexedVector **)this + 138));
    (*(void (__fastcall **)(_QWORD, _QWORD, double *, double))(**((_QWORD **)this + 155) + 16LL))(
      *((_QWORD *)this + 155),
      *((_QWORD *)this + 133),
      &v240,
      v225);
    v99 = *((int *)this + 288);
    a5 = (double)-*((_DWORD *)this + 291);
    v100 = *((_QWORD *)this + 147);
    v101 = *((double *)this + 108) / *((double *)this + 99) * a5;
    *((double *)this + 108) = v101;
    *(_QWORD *)(v100 + 8 * v99) = 0;
    if ( *((_DWORD *)this + 289) == -1 )
      v102 = v101 + *((double *)this + 103);
    else
      v102 = v101 + *((double *)this + 101);
    *((double *)this + 102) = v102;
    v240 = 0.0;
    if ( v222 <= 0 )
    {
      v106 = 0.0;
    }
    else
    {
      v103 = *((_QWORD *)this + 150);
      v104 = *((_QWORD *)this + 129);
      v105 = 0;
      v106 = 0.0;
      do
      {
        v107 = *(double *)(v103 + v105) * *(double *)(v104 + v105);
        v105 += 8;
        v106 = v106 + v107;
        v240 = v106;
      }
      while ( v237 != v105 );
    }
    v108 = *((_DWORD *)this + 290);
    v240 = v106 - *((double *)this + 9);
    ClpSimplexOther::originalBound(this, v108, v221, v227, v228);
    v109 = *((int *)this + 290);
    v110 = *((_DWORD *)this + 291);
    v111 = *(double *)(*((_QWORD *)this + 123) + 8 * v109);
    v112 = *((_QWORD *)this + 126);
    *((double *)this + 105) = v111;
    a4 = *(double *)(v112 + 8 * v109);
    *((double *)this + 107) = a4;
    if ( v110 <= 0 )
    {
      v150 = *((double *)this + 100);
      v151 = *((_QWORD *)this + 147);
      *((double *)this + 106) = a4;
      *(double *)(v151 + 8 * v109) = -v150;
      v111 = a4;
    }
    else
    {
      v113 = *((_QWORD *)this + 147);
      a4 = *((double *)this + 100);
      *((double *)this + 106) = v111;
      *(double *)(v113 + 8 * v109) = a4;
    }
    *(double *)(*((_QWORD *)this + 150) + 8 * v109) = v111;
    v226 = ClpSimplex::housekeeping(this, v240);
    ClpSimplexDual::originalBound(this, *((_DWORD *)this + 288));
    v114 = *((int *)this + 290);
    *((_DWORD *)v8 + v114) = -1;
    v115 = *((int *)this + 288);
    *((_DWORD *)v8 + v115) = *((_DWORD *)this + 292);
    v116 = *((_DWORD *)this + 27);
    if ( (int)v115 >= v116 )
    {
      v239 = v114;
      v236 = v114;
      v149 = v115 - v116;
      v234 = *((_DWORD *)this + 27);
      if ( *((_DWORD *)this + 82) )
      {
        strcpy(dest, *(const char **)(*((_QWORD *)this + 46) + 8LL * v149));
        v119 = v234;
        v117 = v236;
        v118 = v239;
LABEL_128:
        if ( v117 >= v119 )
        {
          v156 = v117 - v119;
LABEL_173:
          strcpy(s, *(const char **)(*((_QWORD *)this + 46) + 8LL * v156));
          goto LABEL_130;
        }
        goto LABEL_129;
      }
      sprintf(dest, "R%7.7d", v149);
    }
    else
    {
      v238 = *((_DWORD *)this + 27);
      v235 = v114;
      v233 = v114;
      if ( *((_DWORD *)this + 82) )
      {
        strcpy(dest, *(const char **)(*((_QWORD *)this + 49) + 8 * v115));
        v117 = v233;
        v118 = v235;
        v119 = v238;
        goto LABEL_128;
      }
      sprintf(dest, "C%7.7d", v115);
    }
    v157 = *((_DWORD *)this + 290);
    v158 = *((_DWORD *)this + 27);
    v159 = *((_DWORD *)this + 82);
    if ( v158 <= v157 )
    {
      v156 = v157 - v158;
      if ( !v159 )
      {
        sprintf(s, "R%7.7d", v156);
        goto LABEL_130;
      }
      goto LABEL_173;
    }
    if ( !v159 )
    {
      sprintf(s, "C%7.7d", v157);
      goto LABEL_130;
    }
    v118 = v157;
LABEL_129:
    strcpy(s, *(const char **)(*((_QWORD *)this + 49) + 8 * v118));
LABEL_130:
    v120 = (CoinMessageHandler *)CoinMessageHandler::message(*((CoinMessageHandler **)this + 43), 88, v22);
    v121 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v120);
    v122 = *((double *)this + 9) * *(double *)this - *((double *)this + 5);
    v123 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v121);
    v128 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v123, (__int64)dest, v124, v125, v126, v127, v218);
    v133 = CoinMessageHandler::operator<<(v128, (__int64)s, v129, v130, v131, v132, v219);
    CoinMessageHandler::operator<<(v133, 0, v122);
    if ( v221 > v220 + 0.000000001 )
    {
      v152 = (CoinMessageHandler *)CoinMessageHandler::message(*((CoinMessageHandler **)this + 43), 87, v22);
      v153 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v152);
      v154 = *((double *)this + 9) * *(double *)this - *((double *)this + 5);
      v155 = CoinMessageHandler::operator<<(v153);
      CoinMessageHandler::operator<<(v155, 0, v154);
      v220 = v221;
    }
    ClpSimplexOther::originalBound(this, *((_DWORD *)this + 288), v221, v227, v228);
    ClpSimplexDual::changeBound(this, *((_DWORD *)this + 290));
    if ( v226 == 1 )
    {
      *((_DWORD *)this + 80) = -2;
      goto LABEL_29;
    }
    if ( v226 == 2 )
    {
      *((_DWORD *)this + 80) = 3;
      v223 = 3;
      goto LABEL_29;
    }
  }
  if ( v221 > v220 + 0.000000001 )
  {
    v194 = (CoinMessageHandler *)CoinMessageHandler::message(
                                   *((CoinMessageHandler **)this + 43),
                                   87,
                                   (ClpSimplex *)((char *)this + 416));
    v195 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v194);
    v196 = *(double *)this * *((double *)this + 9) - *((double *)this + 5);
    v197 = CoinMessageHandler::operator<<(v195);
    CoinMessageHandler::operator<<(v197, 0, v196);
  }
  v160 = *((_QWORD *)this + 158);
  *((_DWORD *)this + 80) = -2;
  v161 = *(_QWORD *)(v160 + 8);
  if ( v161 )
    v162 = *(_DWORD *)(v161 + 68);
  else
    v162 = *(_DWORD *)(*(_QWORD *)(v160 + 16) + 52LL);
  if ( !v162 && *((int *)this + 292) < 0 )
    *((_DWORD *)this + 80) = 2;
  v223 = 4;
  *(double *)a2 = v221;
  return v223;
}

