__int64 __fastcall ClpPrimalColumnSteepest::pivotColumnOldMethod(
        ClpPrimalColumnSteepest *this,
        CoinIndexedVector *a2,
        CoinIndexedVector *a3,
        CoinIndexedVector *a4,
        CoinIndexedVector *a5,
        CoinIndexedVector *a6,
        double a7,
        double a8,
        double a9,
        double a10)
{
  ClpPrimalColumnSteepest *v10; // r12
  CoinIndexedVector *v11; // rbp
  __int64 v12; // r15
  int v13; // eax
  __int64 *v14; // r11
  double v15; // xmm6_8
  int v16; // ebx
  __int64 v17; // r14
  double v18; // xmm4_8
  int v19; // edi
  bool v20; // cc
  int v21; // eax
  int v22; // edx
  int *v23; // rax
  __int64 v24; // rsi
  __int64 v25; // r13
  int v26; // r11d
  __int64 v27; // r8
  __int64 v28; // r8
  __int64 v29; // rcx
  double *v30; // rdx
  int v31; // r9d
  double v32; // xmm0_8
  __int64 v33; // rcx
  double *v34; // rdx
  double v35; // xmm0_8
  double *v36; // rax
  int v37; // r13d
  __int64 v38; // rdx
  double v39; // xmm0_8
  unsigned __int8 v40; // al
  double *v41; // rdx
  int v42; // r9d
  int v43; // ebx
  int v44; // esi
  double v45; // xmm0_8
  double *v46; // rdx
  signed int v47; // eax
  __int64 v48; // xmm5_8
  int v49; // edx
  double v50; // xmm7_8
  __int64 v51; // rdx
  CoinIndexedVector *v52; // rdi
  int v53; // ecx
  __int64 v54; // r10
  __int64 v55; // r9
  int v56; // edx
  __int64 v57; // rcx
  __int64 v58; // rax
  int v59; // eax
  double v60; // xmm1_8
  double v61; // xmm0_8
  double v62; // xmm1_8
  __int64 v63; // xmm5_8
  __int64 *v64; // rax
  int v65; // eax
  __int64 v66; // r11
  CoinIndexedVector *v67; // rdi
  __int64 v68; // rbp
  double v69; // xmm2_8
  __int64 result; // rax
  int v71; // ecx
  int v72; // esi
  int *v73; // rdx
  int *v74; // r9
  __int64 v75; // rcx
  double v76; // xmm0_8
  __int64 v77; // rcx
  double *v78; // rdx
  __int64 v79; // rcx
  __int64 *v80; // rdx
  double *v81; // rcx
  bool v82; // dl
  double *v83; // rcx
  bool v84; // zf
  int *v85; // rdx
  int *v86; // r9
  __int64 v87; // rcx
  double v88; // xmm0_8
  __int64 v89; // rbx
  __int64 v90; // rbp
  int v91; // r14d
  __int64 v92; // r9
  double *v93; // rcx
  int v94; // edx
  double v95; // xmm0_8
  __int64 v96; // r9
  double *v97; // rcx
  double v98; // xmm0_8
  double *v99; // rdx
  __int64 v100; // rcx
  double *v101; // r9
  double v102; // xmm0_8
  double *v103; // r9
  double *v104; // rcx
  double v105; // xmm8_8
  __int64 *v106; // rcx
  bool v107; // dl
  double v108; // xmm4_8
  double v109; // xmm5_8
  bool v110; // r10
  __int64 v111; // r10
  __int64 v112; // rbx
  __int64 *v113; // rcx
  double *v114; // r10
  bool v115; // r9
  __int64 v116; // r9
  double *v117; // rax
  int v118; // r8d
  int v119; // edx
  __int64 v120; // r10
  __int64 v121; // rcx
  __int64 v122; // r8
  __int64 v123; // rdi
  double v124; // xmm0_8
  char *v125; // r9
  double v126; // xmm0_8
  double v127; // xmm5_8
  int v128; // r9d
  double v129; // xmm0_8
  double *v130; // r9
  bool v131; // zf
  double *v132; // r9
  double v133; // xmm0_8
  bool v134; // r10
  char *v135; // r9
  __int64 v136; // rsi
  __int64 v137; // rcx
  __int64 v138; // rdi
  __int64 v139; // r13
  __int64 *v140; // r12
  __int64 v141; // rbp
  double v142; // xmm0_8
  signed int v143; // ebx
  int v144; // r11d
  double v145; // xmm8_8
  double v146; // xmm0_8
  double *v147; // r9
  bool v148; // zf
  double *v149; // rsi
  char *v150; // r9
  double v151; // xmm0_8
  double *v152; // r9
  double v153; // xmm0_8
  bool v154; // si
  int v155; // r11d
  int v156; // ebx
  int v157; // ebx
  void *v158; // rdi
  __int64 v159; // rax
  double v160; // xmm0_8
  double v161; // xmm4_8
  double v162; // xmm5_8
  int *v163; // rsi
  __int64 v164; // r9
  signed int v165; // edx
  double v166; // xmm0_8
  int v167; // eax
  __int64 v168; // rdi
  int v169; // edx
  double *v170; // rcx
  double *v171; // rax
  double v172; // xmm1_8
  double v173; // xmm1_8
  double v174; // xmm8_8
  int v175; // r15d
  double v176; // xmm7_8
  __int64 v177; // rsi
  __int64 v178; // rax
  __int64 v179; // rdi
  double v180; // xmm0_8
  int v181; // r8d
  double v182; // xmm0_8
  __int64 v183; // rcx
  double *v184; // rdx
  double *v185; // r8
  double v186; // xmm1_8
  double v187; // xmm2_8
  double v188; // xmm1_8
  double v189; // xmm3_8
  double v190; // xmm8_8
  int v191; // r11d
  signed int v192; // r11d
  int v193; // ecx
  signed int v194; // r11d
  int v195; // ecx
  bool v196; // dl
  double v197; // xmm5_8
  void *v198; // rdi
  double v199; // xmm4_8
  int v200; // r9d
  __int64 v201; // rax
  __int64 v202; // rsi
  double v203; // xmm0_8
  __int64 v204; // r8
  int *v205; // rsi
  __int64 v206; // r15
  __int64 v207; // rax
  signed int v208; // ecx
  double *v209; // r9
  double *v210; // rax
  double v211; // xmm0_8
  double v212; // xmm1_8
  double v213; // xmm0_8
  double v214; // xmm1_8
  int v215; // eax
  int *v216; // rcx
  __int64 v217; // r9
  __int64 v218; // r11
  __int64 v219; // r10
  __int64 v220; // rsi
  double *v221; // r8
  double *v222; // rax
  double v223; // xmm0_8
  double v224; // xmm1_8
  double v225; // xmm0_8
  double v226; // xmm1_8
  bool v227; // si
  __int64 v228; // rsi
  int v229; // ebx
  __int64 *v230; // r9
  double *v231; // rcx
  bool v232; // cl
  __int64 v233; // rcx
  double *v234; // rdx
  bool v235; // al
  double v236; // xmm0_8
  bool v237; // r10
  __int64 v238; // r10
  int v239; // ebx
  bool v240; // r10
  __int64 v241; // r10
  bool v242; // al
  __int64 v243; // rax
  int v244; // r10d
  int v245; // r10d
  int v246; // eax
  int v247; // [rsp+0h] [rbp-B8h]
  double v248; // [rsp+0h] [rbp-B8h]
  double v249; // [rsp+0h] [rbp-B8h]
  double v250; // [rsp+0h] [rbp-B8h]
  CoinIndexedVector *v252; // [rsp+8h] [rbp-B0h]
  int v254; // [rsp+18h] [rbp-A0h]
  int v255; // [rsp+18h] [rbp-A0h]
  int v256; // [rsp+18h] [rbp-A0h]
  double v257; // [rsp+18h] [rbp-A0h]
  double v258; // [rsp+18h] [rbp-A0h]
  double v259; // [rsp+18h] [rbp-A0h]
  __int64 v260; // [rsp+18h] [rbp-A0h]
  double v261; // [rsp+18h] [rbp-A0h]
  int v262; // [rsp+20h] [rbp-98h]
  __int64 v263; // [rsp+20h] [rbp-98h]
  double v264; // [rsp+20h] [rbp-98h]
  __int64 v265; // [rsp+20h] [rbp-98h]
  double v266; // [rsp+20h] [rbp-98h]
  double v268; // [rsp+30h] [rbp-88h]
  double v269; // [rsp+30h] [rbp-88h]
  __int64 v270; // [rsp+30h] [rbp-88h]
  double v271; // [rsp+38h] [rbp-80h]
  int v272; // [rsp+38h] [rbp-80h]
  double v273; // [rsp+38h] [rbp-80h]
  int v274; // [rsp+38h] [rbp-80h]
  double v275; // [rsp+38h] [rbp-80h]
  int v276; // [rsp+38h] [rbp-80h]
  int v277; // [rsp+38h] [rbp-80h]
  int v278; // [rsp+38h] [rbp-80h]
  CoinIndexedVector *v279; // [rsp+40h] [rbp-78h]
  CoinIndexedVector *v280; // [rsp+40h] [rbp-78h]
  int v281; // [rsp+40h] [rbp-78h]
  int v282; // [rsp+40h] [rbp-78h]
  CoinIndexedVector *v283; // [rsp+40h] [rbp-78h]
  int v284; // [rsp+48h] [rbp-70h]
  int v285; // [rsp+48h] [rbp-70h]
  __int64 v286; // [rsp+48h] [rbp-70h]
  CoinIndexedVector *v287; // [rsp+48h] [rbp-70h]
  double v288; // [rsp+48h] [rbp-70h]
  __int64 v289; // [rsp+48h] [rbp-70h]
  __int64 v290; // [rsp+48h] [rbp-70h]
  int v291; // [rsp+50h] [rbp-68h]
  __int64 v292; // [rsp+50h] [rbp-68h]
  int v293; // [rsp+50h] [rbp-68h]
  int v294; // [rsp+50h] [rbp-68h]
  int v295; // [rsp+58h] [rbp-60h]
  unsigned int v296; // [rsp+58h] [rbp-60h]
  __int64 v297; // [rsp+58h] [rbp-60h]
  int v298; // [rsp+60h] [rbp-58h]
  int v299; // [rsp+60h] [rbp-58h]
  int *v300; // [rsp+60h] [rbp-58h]
  __int64 v301; // [rsp+68h] [rbp-50h]
  int v302; // [rsp+70h] [rbp-48h]
  _DWORD v303[17]; // [rsp+74h] [rbp-44h]

  v10 = this;
  v11 = a2;
  v12 = *((_QWORD *)this + 1);
  v13 = *((_DWORD *)this + 19);
  v14 = *((__int64 **)this + 5);
  v15 = *(double *)(v12 + 832);
  v16 = *(_DWORD *)(v12 + 1168);
  v268 = v15;
  v17 = v14[1];
  v18 = fmin(0.01, *(double *)(v12 + 768)) + *(double *)(v12 + 872);
  if ( v13 == 4 )
  {
    v247 = 5 - *((_DWORD *)this + 22);
  }
  else
  {
    v19 = *((_DWORD *)this + 19);
    v20 = v13 < 10;
    v21 = 3;
    if ( v20 )
      v21 = v19;
    v247 = v21;
  }
  if ( *((_DWORD *)a2 + 4) )
  {
    v262 = 2;
    if ( v16 >= 0 )
    {
      v259 = v18;
      CoinIndexedVector::add(a2, v16, -v15);
      v12 = *((_QWORD *)v10 + 1);
      v18 = v259;
    }
  }
  else
  {
    if ( v16 < 0 )
    {
      v262 = ~*((_DWORD *)v10 + 23) >> 31;
      goto LABEL_22;
    }
    a8 = fabs(v15);
    if ( a8 <= 1.0e-15 )
    {
      v262 = -1;
      goto LABEL_22;
    }
    v266 = v18;
    CoinIndexedVector::insert(a2, v16, -v15);
    v12 = *((_QWORD *)v10 + 1);
    v18 = v266;
    if ( a8 > 0.000001 )
      v262 = 1;
    else
      v262 = 2;
  }
  v271 = v18;
  ClpFactorization::updateColumnTranspose(*(ClpFactorization **)(v12 + 1264), a4, a2);
  (*(void (__fastcall **)(_QWORD, _QWORD, CoinIndexedVector *, CoinIndexedVector *, CoinIndexedVector *, double))(**(_QWORD **)(*((_QWORD *)v10 + 1) + 192LL) + 392LL))(
    *(_QWORD *)(*((_QWORD *)v10 + 1) + 192LL),
    *((_QWORD *)v10 + 1),
    a2,
    a6,
    a5,
    -1.0);
  v18 = v271;
  v12 = *((_QWORD *)v10 + 1);
  a9 = -0.0;
  v22 = *((_DWORD *)a2 + 4);
  v23 = *(int **)a2;
  v24 = *(_QWORD *)(v12 + 1184);
  v25 = *((_QWORD *)v11 + 1);
  a10 = -v271;
  v26 = *(_DWORD *)(v12 + 108);
  v254 = 0;
  v15 = -0.0;
  v272 = v16;
  v279 = v11;
LABEL_9:
  v27 = *(_QWORD *)(v12 + 1320);
  if ( !*(_BYTE *)(v27 + 149) )
  {
    if ( v22 <= 0 )
      goto LABEL_17;
    v28 = (__int64)&v23[v22 - 1 + 1];
    while ( 1 )
    {
      v29 = *v23;
      v30 = (double *)(v24 + 8 * v29);
      v31 = v26 + *v23;
      v32 = *v30 - *(double *)(v25 + 8 * v29);
      *v30 = v32;
      switch ( *(_BYTE *)(*(_QWORD *)(v12 + 264) + v31) & 7 )
      {
        case 0:
        case 4:
          v33 = 8LL * v31;
          a8 = 100.0 * v18;
          if ( fabs(v32) <= 100.0 * v18 )
            goto LABEL_89;
          v32 = v32 * 10.0;
          goto LABEL_14;
        case 1:
          v78 = (double *)(*(_QWORD *)(*((_QWORD *)v10 + 5) + 8LL) + 8LL * v31);
          if ( *v78 == 0.0 )
            goto LABEL_16;
          ++v23;
          *v78 = 2.225073858507201e-308;
          if ( (int *)v28 == v23 )
            goto LABEL_17;
          continue;
        case 2:
          v33 = 8LL * v31;
          if ( v32 <= v18 )
          {
LABEL_89:
            v83 = (double *)(*(_QWORD *)(*((_QWORD *)v10 + 5) + 8LL) + v33);
            v84 = *v83 == 0.0;
            goto LABEL_90;
          }
LABEL_14:
          v34 = (double *)(v17 + v33);
          v35 = v32 * v32;
          if ( *(double *)(v17 + v33) == 0.0 )
          {
            v80 = *((__int64 **)v10 + 5);
            v81 = (double *)(v80[1] + v33);
            a8 = *v81;
            if ( *v81 != 0.0 )
            {
              v35 = v35 + a8;
              if ( v35 > 0.0 )
                goto LABEL_292;
LABEL_88:
              a8 = -1.0e-50;
              v82 = v35 <= -1.0e-50;
              goto LABEL_293;
            }
            if ( v35 <= 0.0 )
            {
              a8 = -1.0e-50;
              v110 = v35 <= -1.0e-50;
              goto LABEL_152;
            }
            goto LABEL_151;
          }
LABEL_15:
          *v34 = v35;
LABEL_16:
          if ( (int *)v28 == ++v23 )
            goto LABEL_17;
          break;
        case 3:
          v79 = 8LL * v31;
          if ( a10 <= v32 )
          {
            v83 = (double *)(*(_QWORD *)(*((_QWORD *)v10 + 5) + 8LL) + v79);
            v84 = *v83 == 0.0;
LABEL_90:
            if ( v84 )
              goto LABEL_16;
            ++v23;
            *v83 = 2.225073858507201e-308;
            if ( (int *)v28 == v23 )
              goto LABEL_17;
          }
          else
          {
            v34 = (double *)(v17 + v79);
            v35 = v32 * v32;
            if ( *(double *)(v17 + 8LL * v31) != 0.0 )
              goto LABEL_15;
            v80 = *((__int64 **)v10 + 5);
            v81 = (double *)(v80[1] + v79);
            a8 = *v81;
            if ( *v81 != 0.0 )
            {
              v35 = v35 + a8;
              if ( v35 <= 0.0 )
                goto LABEL_88;
LABEL_292:
              v82 = v35 >= 1.0e-50;
LABEL_293:
              if ( !v82 )
              {
                *v81 = 1.0e-100;
                goto LABEL_16;
              }
              goto LABEL_154;
            }
            if ( v35 <= 0.0 )
            {
              v110 = v35 <= -1.0e-50;
              goto LABEL_152;
            }
LABEL_151:
            v110 = v35 >= 1.0e-50;
LABEL_152:
            if ( !v110 )
              goto LABEL_16;
            v111 = *((int *)v80 + 4);
            v112 = *v80;
            *((_DWORD *)v80 + 4) = v111 + 1;
            *(_DWORD *)(v112 + 4 * v111) = v31;
LABEL_154:
            ++v23;
            *v81 = v35;
            if ( (int *)v28 == v23 )
              goto LABEL_17;
          }
          break;
        default:
          goto LABEL_16;
      }
    }
  }
  if ( v22 <= 0 )
    goto LABEL_17;
  v89 = v17;
  v90 = (__int64)&v23[v22 - 1 + 1];
  v91 = v26;
  while ( 2 )
  {
    v92 = *v23;
    v93 = (double *)(v24 + 8 * v92);
    v94 = v91 + *v23;
    v95 = *v93 - *(double *)(v25 + 8 * v92);
    *v93 = v95;
    switch ( *(_BYTE *)(*(_QWORD *)(v12 + 264) + v94) & 7 )
    {
      case 0:
      case 4:
        v100 = 8LL * v94;
        a8 = 100.0 * v18;
        if ( fabs(v95) > 100.0 * v18 )
        {
          v101 = (double *)(v89 + v100);
          v98 = v95 * 10.0 * (v95 * 10.0);
          if ( *(double *)(v89 + 8LL * v94) != 0.0 )
            goto LABEL_119;
          v230 = *((__int64 **)v10 + 5);
          v231 = (double *)(v230[1] + v100);
          a8 = *v231;
          v114 = v231;
          if ( *v231 != 0.0 )
            goto LABEL_287;
          if ( v98 <= 0.0 )
          {
            a8 = -1.0e-50;
            v232 = v98 <= -1.0e-50;
          }
          else
          {
            v232 = v98 >= 1.0e-50;
          }
          if ( v232 )
          {
            v289 = *v230;
            v233 = *((int *)v230 + 4);
            *((_DWORD *)v230 + 4) = v233 + 1;
            *(_DWORD *)(v289 + 4 * v233) = v94;
            goto LABEL_161;
          }
          goto LABEL_112;
        }
        v104 = (double *)(*(_QWORD *)(*((_QWORD *)v10 + 5) + 8LL) + v100);
        if ( *v104 == 0.0 )
          goto LABEL_112;
        ++v23;
        *v104 = 2.225073858507201e-308;
        if ( (int *)v90 != v23 )
          continue;
        goto LABEL_113;
      case 1:
        v99 = (double *)(*(_QWORD *)(*((_QWORD *)v10 + 5) + 8LL) + 8LL * v94);
        if ( *v99 == 0.0 )
          goto LABEL_112;
        ++v23;
        *v99 = 2.225073858507201e-308;
        if ( (int *)v90 != v23 )
          continue;
        goto LABEL_113;
      case 2:
        v96 = 8LL * v94;
        if ( v95 > v18 )
          goto LABEL_110;
        v285 = *(_DWORD *)(v27 + 144);
        if ( (v285 & 1) != 0 )
        {
          v294 = *(_DWORD *)(*(_QWORD *)(v27 + 64) + 4LL * v94) + *(_DWORD *)(*(_QWORD *)(v27 + 72) + 4LL * v94);
          v194 = v294 + 1;
          if ( v294 + 1 == *(_DWORD *)(*(_QWORD *)(v27 + 56) + 4LL * v94 + 4)
            || (v195 = *(_DWORD *)(*(_QWORD *)(v27 + 104) + 4LL * (v194 >> 5)), _bittest(&v195, v194)) )
          {
            v105 = -1.0e100;
          }
          else
          {
            v105 = *(double *)(*(_QWORD *)(v27 + 88) + 8LL * v294) - *(double *)(*(_QWORD *)(v27 + 88) + 8LL * v294 + 8);
          }
        }
        else
        {
          v105 = 0.0;
        }
        if ( (v285 & 2) != 0 )
          v105 = -*(double *)(v27 + 16);
        v102 = v95 - v105;
        a8 = -v18;
        if ( v102 > -v18 )
          goto LABEL_127;
        goto LABEL_142;
      case 3:
        v96 = 8LL * v94;
        if ( a10 <= v95 )
        {
          v284 = *(_DWORD *)(v27 + 144);
          if ( (v284 & 1) != 0 )
          {
            v191 = *(_DWORD *)(*(_QWORD *)(v27 + 64) + 4LL * v94) + *(_DWORD *)(*(_QWORD *)(v27 + 72) + 4LL * v94);
            if ( v191 == *(_DWORD *)(*(_QWORD *)(v27 + 56) + 4LL * v94)
              || (v192 = v191 - 1, v193 = *(_DWORD *)(*(_QWORD *)(v27 + 104) + 4LL * (v192 >> 5)), _bittest(&v193, v192)) )
            {
              a8 = 1.0e100;
            }
            else
            {
              v293 = *(_DWORD *)(*(_QWORD *)(v27 + 64) + 4LL * v94) + *(_DWORD *)(*(_QWORD *)(v27 + 72) + 4LL * v94);
              a8 = *(double *)(*(_QWORD *)(v27 + 88) + 8LL * v293) - *(double *)(*(_QWORD *)(v27 + 88) + 8LL * v293 - 8);
            }
          }
          else
          {
            a8 = 0.0;
          }
          if ( (v284 & 2) != 0 )
            a8 = *(double *)(v27 + 16);
          v102 = v95 - a8;
          if ( v18 <= v102 )
          {
LABEL_142:
            v97 = (double *)(v89 + v96);
            v98 = v102 * v102;
            if ( *(double *)(v89 + v96) != 0.0 )
              goto LABEL_111;
            v106 = *((__int64 **)v10 + 5);
            v101 = (double *)(v106[1] + v96);
            a8 = *v101;
            if ( *v101 == 0.0 )
            {
              if ( v98 <= 0.0 )
              {
                a8 = -1.0e-50;
                v240 = v98 <= -1.0e-50;
              }
              else
              {
                v240 = v98 >= 1.0e-50;
              }
              if ( !v240 )
                goto LABEL_112;
              v290 = *v106;
              v241 = *((int *)v106 + 4);
              *((_DWORD *)v106 + 4) = v241 + 1;
              *(_DWORD *)(v290 + 4 * v241) = v94;
            }
            else
            {
              v98 = v98 + a8;
              if ( v98 <= 0.0 )
              {
                a8 = -1.0e-50;
                v107 = v98 <= -1.0e-50;
              }
              else
              {
                v107 = v98 >= 1.0e-50;
              }
              if ( !v107 )
              {
                *v101 = 1.0e-100;
                goto LABEL_112;
              }
            }
LABEL_119:
            ++v23;
            *v101 = v98;
            if ( (int *)v90 == v23 )
              goto LABEL_113;
          }
          else
          {
LABEL_127:
            v103 = (double *)(*(_QWORD *)(*((_QWORD *)v10 + 5) + 8LL) + v96);
            if ( *v103 == 0.0 )
              goto LABEL_112;
            ++v23;
            *v103 = 2.225073858507201e-308;
            if ( (int *)v90 == v23 )
              goto LABEL_113;
          }
          continue;
        }
LABEL_110:
        v97 = (double *)(v89 + v96);
        v98 = v95 * v95;
        if ( *(double *)(v89 + v96) != 0.0 )
        {
LABEL_111:
          *v97 = v98;
LABEL_112:
          if ( (int *)v90 == ++v23 )
            goto LABEL_113;
          continue;
        }
        v113 = *((__int64 **)v10 + 5);
        v114 = (double *)(v96 + v113[1]);
        a8 = *v114;
        if ( *v114 == 0.0 )
        {
          if ( v98 <= 0.0 )
          {
            a8 = -1.0e-50;
            v115 = v98 <= -1.0e-50;
          }
          else
          {
            v115 = v98 >= 1.0e-50;
          }
          if ( !v115 )
            goto LABEL_112;
          v116 = *((int *)v113 + 4);
          v286 = *v113;
          *((_DWORD *)v113 + 4) = v116 + 1;
          *(_DWORD *)(v286 + 4 * v116) = v94;
        }
        else
        {
LABEL_287:
          v98 = v98 + a8;
          if ( v98 <= 0.0 )
          {
            a8 = -1.0e-50;
            v196 = v98 <= -1.0e-50;
          }
          else
          {
            v196 = v98 >= 1.0e-50;
          }
          if ( !v196 )
          {
            *v114 = 1.0e-100;
            goto LABEL_112;
          }
        }
LABEL_161:
        ++v23;
        *v114 = v98;
        if ( (int *)v90 != v23 )
          continue;
LABEL_113:
        v17 = v89;
LABEL_17:
        if ( v254 != 1 )
        {
          v254 = 1;
          v26 = 0;
          v24 = *(_QWORD *)(v12 + 1192);
          v22 = *((_DWORD *)a5 + 4);
          v23 = *(int **)a5;
          v25 = *((_QWORD *)a5 + 1);
          goto LABEL_9;
        }
        v11 = v279;
        if ( v262 == 2 )
        {
          v261 = v18;
          CoinIndexedVector::clear(v279);
          CoinIndexedVector::clear(a5);
          v12 = *((_QWORD *)v10 + 1);
          v14 = *((__int64 **)v10 + 5);
          v18 = v261;
          if ( v272 >= 0 )
            goto LABEL_20;
        }
        else
        {
          v14 = *((__int64 **)v10 + 5);
          if ( v272 >= 0 )
          {
LABEL_20:
            v36 = (double *)(v14[1] + 8LL * *(int *)(v12 + 1152));
            if ( *v36 != 0.0 )
              *v36 = 2.225073858507201e-308;
          }
        }
LABEL_22:
        v37 = *(_DWORD *)(v12 + 1160);
        v255 = *((_DWORD *)v14 + 4);
        if ( v37 < 0 )
          goto LABEL_29;
        v38 = 8LL * v37;
        v39 = *(double *)(*(_QWORD *)(v12 + 1176) + v38);
        v40 = *(_BYTE *)(*(_QWORD *)(v12 + 264) + v37) & 7;
        if ( v40 == 2 )
        {
          if ( v39 <= v18 )
            goto LABEL_27;
          goto LABEL_278;
        }
        if ( v40 <= 2u )
        {
          if ( v40 )
            goto LABEL_29;
          goto LABEL_281;
        }
        if ( v40 != 3 )
        {
          if ( v40 != 4 )
            goto LABEL_29;
LABEL_281:
          a9 = fabs(v39);
          a8 = 100.0 * v18;
          if ( a9 <= 100.0 * v18 )
            goto LABEL_27;
          v39 = v39 * 10.0;
          goto LABEL_278;
        }
        a8 = -v18;
        if ( -v18 <= v39 )
        {
LABEL_27:
          v41 = (double *)(v14[1] + v38);
          if ( *v41 != 0.0 )
            *v41 = 2.225073858507201e-308;
          goto LABEL_29;
        }
LABEL_278:
        a8 = v39 * v39;
        if ( *(double *)(v17 + 8LL * v37) == 0.0 )
        {
          v234 = (double *)(v14[1] + v38);
          a9 = *v234;
          if ( *v234 == 0.0 )
          {
            if ( a8 <= 0.0 )
              v242 = a8 <= -1.0e-50;
            else
              v242 = a8 >= 1.0e-50;
            if ( v242 )
            {
              v243 = *v14;
              *((_DWORD *)v14 + 4) = v255 + 1;
              *(_DWORD *)(v243 + 4LL * v255) = v37;
              *v234 = a8;
              v255 = *((_DWORD *)v14 + 4);
            }
          }
          else
          {
            a8 = a8 + a9;
            if ( a8 <= 0.0 )
              v235 = a8 <= -1.0e-50;
            else
              v235 = a8 >= 1.0e-50;
            if ( v235 )
              *v234 = a8;
            else
              *v234 = 1.0e-100;
          }
        }
        else
        {
          *(double *)(v17 + 8LL * v37) = a8;
        }
LABEL_29:
        v42 = *(_DWORD *)(v12 + 108);
        if ( *(_DWORD *)(v12 + 1300) != 2 )
        {
          if ( v247 == 5 )
            goto LABEL_174;
LABEL_31:
          if ( v247 == 4 )
            goto LABEL_240;
          v43 = 10;
          if ( v247 > 3 )
            goto LABEL_37;
          if ( v247 <= 1 )
          {
            v43 = v255 + 1;
            goto LABEL_37;
          }
          a8 = 1.0;
          if ( v247 == 2 )
          {
            v43 = 2000;
            if ( v255 / 8 >= 2000 )
              v43 = v255 / 8;
            goto LABEL_37;
          }
LABEL_301:
          a9 = (double)*(int *)(v12 + 104);
          v203 = (double)*((int *)v10 + 27) / a9;
          if ( v203 < 1.0 )
          {
            v247 = 3;
            v43 = v255 / 20;
            if ( v255 / 20 < 2000 )
              v43 = 2000;
          }
          else
          {
            a8 = 5.0;
            if ( v203 >= 5.0 )
            {
              a8 = 10.0;
              if ( v203 < 10.0 )
              {
                v244 = v255 + 7;
                v247 = 3;
                if ( v255 >= 0 )
                  v244 = v255;
                v245 = v244 >> 3;
                v246 = v42 / 20;
                if ( v245 >= v42 / 20 )
                  v246 = v245;
                v43 = v246;
                if ( v246 < 2000 )
                  v43 = 2000;
              }
              else
              {
                a8 = (double)v255;
                v236 = v203 / 80.0 * (double)v255;
                if ( v236 <= (double)v255 )
                {
                  v247 = 3;
                  v43 = v42 / 10;
                  if ( v42 / 10 < 2000 )
                    v43 = 2000;
                  if ( v43 < (int)v236 )
                    v43 = (int)v236;
                }
                else
                {
                  v247 = 3;
                  v43 = v255 + 1;
                }
              }
            }
            else
            {
              v247 = 3;
              v43 = v42 / 20;
              if ( v255 / 10 >= v42 / 20 )
                v43 = v255 / 10;
              if ( v43 < 2000 )
                v43 = 2000;
            }
          }
          goto LABEL_37;
        }
        a9 = -0.0;
        v117 = *(double **)(v12 + 1184);
        v118 = *(_DWORD *)(v12 + 104);
        v15 = -0.0;
        v274 = 0;
        a10 = -v18;
        v119 = *(_DWORD *)(v12 + 108);
        v280 = v10;
        v287 = v11;
LABEL_164:
        v120 = *(_QWORD *)(v12 + 1320);
        if ( !*(_BYTE *)(v120 + 149) )
        {
          if ( v118 <= 0 )
            goto LABEL_172;
          v121 = v119;
          v122 = (__int64)&v117[(unsigned int)(v118 - 1) + 1];
          v123 = 8LL * v119 - (_QWORD)v117;
          while ( 2 )
          {
            while ( 2 )
            {
              v124 = *v117;
              switch ( *(_BYTE *)(*(_QWORD *)(v12 + 264) + v121) & 7 )
              {
                case 0:
                case 4:
                  v125 = (char *)v117 + v123;
                  a8 = fabs(v124);
                  if ( a8 <= v18 )
                    goto LABEL_196;
                  v126 = v124 * 10.0 * (v124 * 10.0);
                  if ( *(double *)(v17 + 8 * v121) != 0.0 )
                    goto LABEL_170;
                  goto LABEL_186;
                case 1:
                  v130 = (double *)((char *)v117 + v123 + v14[1]);
                  v131 = *v130 == 0.0;
                  break;
                case 2:
                  v125 = (char *)v117 + v123;
                  if ( v124 > v18 )
                  {
                    v126 = v124 * v124;
                    if ( *(double *)(v17 + 8 * v121) != 0.0 )
                      goto LABEL_170;
LABEL_186:
                    v132 = (double *)&v125[v14[1]];
                    a8 = *v132;
                    if ( *v132 != 0.0 )
                    {
                      v133 = v126 + a8;
                      if ( v133 > 0.0 )
                      {
LABEL_188:
                        v134 = v133 >= 1.0e-50;
                        goto LABEL_189;
                      }
LABEL_195:
                      a8 = -1.0e-50;
                      v134 = v133 <= -1.0e-50;
LABEL_189:
                      if ( v134 )
                        *v132 = v133;
                      else
                        *v132 = 1.0e-100;
                      goto LABEL_182;
                    }
                    if ( v126 > 0.0 )
                    {
LABEL_357:
                      v237 = v126 >= 1.0e-50;
                      goto LABEL_358;
                    }
                    a8 = -1.0e-50;
                    v237 = v126 <= -1.0e-50;
LABEL_358:
                    if ( v237 )
                    {
                      v238 = *v14;
                      *((_DWORD *)v14 + 4) = v255 + 1;
                      *(_DWORD *)(v238 + 4LL * v255) = v119;
                      v239 = *((_DWORD *)v14 + 4);
                      *v132 = v126;
                      v255 = v239;
                    }
                    goto LABEL_182;
                  }
LABEL_196:
                  v130 = (double *)&v125[v14[1]];
                  v131 = *v130 == 0.0;
                  break;
                case 3:
                  v135 = (char *)v117 + v123;
                  if ( a10 > v124 )
                  {
                    v126 = v124 * v124;
                    if ( *(double *)(v17 + 8 * v121) != 0.0 )
                    {
LABEL_170:
                      ++v117;
                      *(double *)(v17 + 8 * v121) = v126;
                      ++v119;
                      ++v121;
                      if ( (double *)v122 == v117 )
                        goto LABEL_171;
                      continue;
                    }
                    v132 = (double *)&v135[v14[1]];
                    a8 = *v132;
                    if ( *v132 != 0.0 )
                    {
                      v133 = v126 + a8;
                      if ( v133 > 0.0 )
                        goto LABEL_188;
                      goto LABEL_195;
                    }
                    if ( v126 > 0.0 )
                      goto LABEL_357;
                    v237 = v126 <= -1.0e-50;
                    goto LABEL_358;
                  }
                  v130 = (double *)&v135[v14[1]];
                  v131 = *v130 == 0.0;
                  break;
                default:
                  goto LABEL_182;
              }
              break;
            }
            if ( !v131 )
              *v130 = 2.225073858507201e-308;
LABEL_182:
            ++v117;
            ++v121;
            ++v119;
            if ( (double *)v122 == v117 )
              goto LABEL_171;
            continue;
          }
        }
        if ( v118 <= 0 )
          goto LABEL_172;
        v136 = v119;
        v291 = v37;
        v137 = v119 + 1LL;
        v138 = 4LL * v119;
        v139 = v137 + (unsigned int)(v118 - 1);
        v140 = v14;
        v141 = 8LL * v119 - (_QWORD)v117;
        while ( 2 )
        {
          v142 = *v117;
          switch ( *(_BYTE *)(*(_QWORD *)(v12 + 264) + v136) & 7 )
          {
            case 0:
            case 4:
              v150 = (char *)v117 + v141;
              a8 = fabs(v142);
              if ( a8 <= v18 )
              {
                v147 = (double *)&v150[v140[1]];
                v148 = *v147 == 0.0;
                goto LABEL_210;
              }
              v151 = v142 * 10.0 * (v142 * 10.0);
              if ( *(double *)(v17 + 8 * v136) != 0.0 )
                goto LABEL_232;
              goto LABEL_218;
            case 1:
              v149 = (double *)((char *)v117 + v141 + v140[1]);
              if ( *v149 != 0.0 )
                *v149 = 2.225073858507201e-308;
              goto LABEL_212;
            case 2:
              if ( v142 > v18 )
                goto LABEL_233;
              v295 = *(_DWORD *)(v120 + 144);
              if ( (v295 & 1) != 0 )
              {
                v298 = *(_DWORD *)(*(_QWORD *)(v120 + 64) + v138) + *(_DWORD *)(*(_QWORD *)(v120 + 72) + v138);
                v143 = v298 + 1;
                if ( v298 + 1 == *(_DWORD *)(*(_QWORD *)(v120 + 56) + v138 + 4)
                  || (v144 = *(_DWORD *)(*(_QWORD *)(v120 + 104) + 4LL * (v143 >> 5)), _bittest(&v144, v143)) )
                {
                  v145 = -1.0e100;
                }
                else
                {
                  v145 = *(double *)(*(_QWORD *)(v120 + 88) + 8LL * v298)
                       - *(double *)(*(_QWORD *)(v120 + 88) + 8LL * v298 + 8);
                }
              }
              else
              {
                v145 = 0.0;
              }
              if ( (v295 & 2) != 0 )
                v145 = -*(double *)(v120 + 16);
              v146 = v142 - v145;
              a8 = -v18;
              if ( v146 > -v18 )
                goto LABEL_209;
              goto LABEL_231;
            case 3:
              if ( a10 > v142 )
              {
LABEL_233:
                v151 = v142 * v142;
                if ( *(double *)(v17 + 8 * v136) != 0.0 )
                {
LABEL_232:
                  *(double *)(v17 + 8 * v136) = v151;
                  goto LABEL_212;
                }
              }
              else
              {
                v155 = *(_DWORD *)(v120 + 144);
                if ( (v155 & 1) != 0 )
                {
                  v156 = *(_DWORD *)(*(_QWORD *)(v120 + 64) + v138) + *(_DWORD *)(*(_QWORD *)(v120 + 72) + v138);
                  if ( v156 == *(_DWORD *)(*(_QWORD *)(v120 + 56) + v138)
                    || (v296 = v156 - 1,
                        v157 = *(_DWORD *)(*(_QWORD *)(v120 + 104) + 4LL * ((v156 - 1) >> 5)),
                        _bittest(&v157, v296)) )
                  {
                    a8 = 1.0e100;
                  }
                  else
                  {
                    v299 = *(_DWORD *)(*(_QWORD *)(v120 + 64) + v138) + *(_DWORD *)(*(_QWORD *)(v120 + 72) + v138);
                    a8 = *(double *)(*(_QWORD *)(v120 + 88) + 8LL * v299)
                       - *(double *)(*(_QWORD *)(v120 + 88) + 8LL * v299 - 8);
                  }
                }
                else
                {
                  a8 = 0.0;
                }
                if ( (v155 & 2) != 0 )
                  a8 = *(double *)(v120 + 16);
                v146 = v142 - a8;
                if ( v18 > v146 )
                {
LABEL_209:
                  v147 = (double *)((char *)v117 + v141 + v140[1]);
                  v148 = *v147 == 0.0;
LABEL_210:
                  if ( !v148 )
                    *v147 = 2.225073858507201e-308;
                  goto LABEL_212;
                }
LABEL_231:
                v151 = v146 * v146;
                if ( *(double *)(v17 + 8 * v136) != 0.0 )
                  goto LABEL_232;
              }
              v150 = (char *)v117 + v141;
LABEL_218:
              v152 = (double *)&v150[v140[1]];
              a8 = *v152;
              if ( *v152 == 0.0 )
              {
                if ( v151 <= 0.0 )
                {
                  a8 = -1.0e-50;
                  v227 = v151 <= -1.0e-50;
                }
                else
                {
                  v227 = v151 >= 1.0e-50;
                }
                if ( v227 )
                {
                  v228 = *v140;
                  *((_DWORD *)v140 + 4) = v255 + 1;
                  *(_DWORD *)(v228 + 4LL * v255) = v119;
                  v229 = *((_DWORD *)v140 + 4);
                  *v152 = v151;
                  v255 = v229;
                }
              }
              else
              {
                v153 = v151 + a8;
                if ( v153 <= 0.0 )
                {
                  a8 = -1.0e-50;
                  v154 = v153 <= -1.0e-50;
                }
                else
                {
                  v154 = v153 >= 1.0e-50;
                }
                if ( v154 )
                  *v152 = v153;
                else
                  *v152 = 1.0e-100;
              }
LABEL_212:
              ++v117;
              ++v119;
              v138 += 4;
              v136 = v137;
              if ( v139 != v137 )
              {
                ++v137;
                continue;
              }
              v37 = v291;
              v14 = v140;
LABEL_171:
              v42 = *(_DWORD *)(v12 + 108);
LABEL_172:
              if ( v274 != 1 )
              {
                v274 = 1;
                v117 = *(double **)(v12 + 1192);
                v118 = v42;
                v119 = 0;
                goto LABEL_164;
              }
              v10 = v280;
              v11 = v287;
              if ( v247 != 5 )
                goto LABEL_31;
LABEL_174:
              v281 = v42;
              v275 = v18;
              CoinIndexedVector::clear(v11);
              CoinIndexedVector::clear(a5);
              v12 = *((_QWORD *)v10 + 1);
              *((_DWORD *)v10 + 23) = -1;
              v18 = v275;
              v128 = v281;
              v129 = (double)*((int *)v10 + 27) / (double)*(int *)(v12 + 104);
              if ( v129 < 0.1 )
              {
                v43 = v255 / 200;
                if ( v255 / 200 < 100 )
                  v43 = 100;
                goto LABEL_178;
              }
              if ( v129 < 0.3 )
              {
                v43 = v255 / 40;
                if ( v255 / 40 < 500 )
                  v43 = 500;
                goto LABEL_178;
              }
              if ( v129 < 0.5 || *((_DWORD *)v10 + 19) == 5 )
              {
                v43 = v255 / 10;
                if ( v255 / 10 < v281 / 30 )
                  v43 = v281 / 30;
                if ( v43 < 2000 )
                  v43 = 2000;
LABEL_178:
                v14 = *((__int64 **)v10 + 5);
                goto LABEL_52;
              }
              v158 = *((void **)v10 + 4);
              ++*((_DWORD *)v10 + 22);
              if ( v158 )
              {
                operator delete[](v158);
                v12 = *((_QWORD *)v10 + 1);
                v128 = v281;
                v18 = v275;
              }
              v159 = *(_QWORD *)v10;
              v276 = v128;
              v248 = v18;
              *((_QWORD *)v10 + 4) = 0;
              (*(void (__fastcall **)(ClpPrimalColumnSteepest *, __int64, __int64, double, double, double, double, double, double, double))(v159 + 16))(
                v10,
                v12,
                4,
                v129,
                0.5,
                a9,
                a10,
                v18,
                v127,
                v15);
              CoinIndexedVector::clear(v11);
              v12 = *((_QWORD *)v10 + 1);
              v42 = v276;
              v18 = v248;
LABEL_240:
              v160 = (double)*((int *)v10 + 27) / (double)*(int *)(v12 + 104);
              a8 = 1.0;
              if ( v160 < 1.0 )
              {
                v43 = v255 / 20;
                goto LABEL_244;
              }
              a9 = 5.0;
              if ( v160 >= 5.0 )
              {
                v277 = v42;
                v249 = v18;
                CoinIndexedVector::clear(v11);
                CoinIndexedVector::clear(a5);
                v198 = *((void **)v10 + 4);
                ++*((_DWORD *)v10 + 22);
                *((_DWORD *)v10 + 23) = -1;
                v199 = v249;
                v200 = v277;
                a8 = 1.0;
                if ( v198 )
                {
                  operator delete[](v198);
                  v200 = v277;
                  a8 = 1.0;
                  v199 = v249;
                }
                v201 = *(_QWORD *)v10;
                v278 = v200;
                v250 = v199;
                v202 = *((_QWORD *)v10 + 1);
                *((_QWORD *)v10 + 4) = 0;
                (*(void (__fastcall **)(ClpPrimalColumnSteepest *, __int64, __int64, double, double, double, double, double, double, double))(v201 + 16))(
                  v10,
                  v202,
                  4,
                  v160,
                  1.0,
                  5.0,
                  a10,
                  v199,
                  v197,
                  v15);
                CoinIndexedVector::clear(v11);
                v12 = *((_QWORD *)v10 + 1);
                v14 = *((__int64 **)v10 + 5);
                v42 = v278;
                v18 = v250;
                goto LABEL_301;
              }
              v43 = v42 / 20;
              if ( v255 / 10 >= v42 / 20 )
                v43 = v255 / 10;
LABEL_244:
              v14 = *((__int64 **)v10 + 5);
              if ( v43 < 2000 )
                v43 = 2000;
              v247 = 4;
LABEL_37:
              v44 = *((_DWORD *)v10 + 23);
              *((_DWORD *)v10 + 23) = -1;
              if ( v44 < 0 )
                goto LABEL_52;
              v45 = 0.0;
              v46 = (double *)(v14[1] + 8LL * *(int *)(*(_QWORD *)(v12 + 1256) + 4LL * v44));
              v47 = *(_DWORD *)(*(_QWORD *)(v12 + 1256) + 4LL * v44);
              if ( *v46 != 0.0 )
                *v46 = 2.225073858507201e-308;
              *(double *)&v48 = 0.0;
              if ( v247 != 1 )
              {
                v49 = *(_DWORD *)(*((_QWORD *)v10 + 8) + 4LL * (v47 >> 5));
                if ( _bittest(&v49, v47) )
                  *(double *)&v48 = 1.0;
              }
              v273 = 0.0;
              if ( v37 >= 0 )
              {
                v15 = *(double *)(*((_QWORD *)v10 + 4) + 8LL * v37);
                v273 = v15;
              }
              if ( v262 == 1 )
              {
                v50 = -1.0 / v268;
              }
              else
              {
                *((_DWORD *)v11 + 4) = 0;
                *((_BYTE *)v11 + 28) = 0;
                v263 = v48;
                *((_DWORD *)a5 + 4) = 0;
                *((_BYTE *)a5 + 28) = 0;
                v258 = v18;
                CoinIndexedVector::insert(v11, v44, -1.0);
                ClpFactorization::updateColumnTranspose(*(ClpFactorization **)(*((_QWORD *)v10 + 1) + 1264LL), a4, v11);
                v45 = -1.0;
                (*(void (__fastcall **)(_QWORD, _QWORD, CoinIndexedVector *, CoinIndexedVector *, CoinIndexedVector *, double, double, double, double, double, double, double))(**(_QWORD **)(*((_QWORD *)v10 + 1) + 192LL) + 392LL))(
                  *(_QWORD *)(*((_QWORD *)v10 + 1) + 192LL),
                  *((_QWORD *)v10 + 1),
                  v11,
                  a6,
                  a5,
                  -1.0,
                  a8,
                  a9,
                  a10,
                  v108,
                  v109,
                  v15);
                v12 = *((_QWORD *)v10 + 1);
                v50 = -1.0;
                v48 = v263;
                v18 = v258;
              }
              v51 = *((_QWORD *)v10 + 4);
              v52 = *((CoinIndexedVector **)v10 + 6);
              v53 = *((_DWORD *)v11 + 4);
              v54 = *((_QWORD *)v11 + 1);
              v256 = *(_DWORD *)(v12 + 108);
              if ( v247 <= 3 )
              {
                v282 = *((_DWORD *)v11 + 4);
                v269 = *(double *)&v48;
                v301 = *((_QWORD *)v11 + 1);
                v300 = *(int **)v11;
                v264 = v18;
                v297 = v51 + 8LL * v256;
                v292 = *((_QWORD *)v52 + 1);
                ClpFactorization::updateColumnTranspose(*(ClpFactorization **)(v12 + 1264), a4, v52);
                v161 = v264;
                v162 = v269;
                if ( v282 > 0 )
                {
                  v15 = 0.0001;
                  v163 = v300;
                  v164 = (__int64)&v300[v282 - 1 + 1];
                  do
                  {
                    while ( 1 )
                    {
                      v168 = *v163;
                      v169 = *v163;
                      v170 = (double *)(v297 + 8 * v168);
                      v171 = (double *)(v301 + 8 * v168);
                      v172 = *v171;
                      a9 = *v170;
                      *v171 = 0.0;
                      v173 = v172 * v50;
                      v174 = v173 * v173;
                      a8 = v173 * *(double *)(v292 + 8 * v168);
                      a10 = *((double *)v10 + 3) * v174;
                      v45 = a8 + a10 + a9;
                      if ( v45 < 0.0001 )
                        break;
LABEL_254:
                      ++v163;
                      *v170 = v45;
                      if ( (int *)v164 == v163 )
                        goto LABEL_258;
                    }
                    if ( v247 != 1 )
                    {
                      v165 = v256 + v169;
                      v166 = v174 * v269;
                      v167 = *(_DWORD *)(*((_QWORD *)v10 + 8) + 4LL * (v165 >> 5));
                      if ( _bittest(&v167, v165) )
                        v166 = v166 + 1.0;
                      v45 = fmax(v166, 0.0001);
                      goto LABEL_254;
                    }
                    ++v163;
                    a10 = fmax(0.0001, v174 + 1.0);
                    v45 = a10;
                    *v170 = a10;
                  }
                  while ( (int *)v164 != v163 );
                }
LABEL_258:
                v288 = v269;
                *(double *)&v283 = v264;
                v175 = *((_DWORD *)a5 + 4);
                v270 = *((_QWORD *)v10 + 4);
                v265 = *(_QWORD *)a5;
                v260 = *((_QWORD *)a5 + 1);
                (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, CoinIndexedVector *, CoinIndexedVector *, double, double, double, double, double, double, double))(**(_QWORD **)(*((_QWORD *)v10 + 1) + 192LL) + 400LL))(
                  *(_QWORD *)(*((_QWORD *)v10 + 1) + 192LL),
                  *((_QWORD *)v10 + 1),
                  *((_QWORD *)v10 + 6),
                  a5,
                  a6,
                  v45,
                  a8,
                  a9,
                  a10,
                  v161,
                  v162,
                  v15);
                v176 = -v50;
                v177 = *((_QWORD *)a6 + 1);
                v18 = *(double *)&v283;
                if ( v175 <= 0 )
                {
                  v52 = *((CoinIndexedVector **)v10 + 6);
                  goto LABEL_49;
                }
                v178 = 0;
                v179 = (unsigned int)(v175 - 1) + 1LL;
                while ( 1 )
                {
                  while ( 1 )
                  {
                    v183 = *(int *)(v265 + 4 * v178);
                    v184 = (double *)(v270 + 8 * v183);
                    v185 = (double *)(v260 + 8 * v183);
                    v186 = *v185;
                    v187 = *v184;
                    *v185 = 0.0;
                    v188 = v186 * v176;
                    v189 = *(double *)(v177 + 8 * v178);
                    *(_QWORD *)(v177 + 8 * v178) = 0;
                    v190 = v188 * v188;
                    v182 = *((double *)v10 + 3) * (v188 * v188) + v188 * v189 + v187;
                    if ( v182 < 0.0001 )
                      break;
LABEL_263:
                    ++v178;
                    *v184 = v182;
                    if ( v179 == v178 )
                      goto LABEL_267;
                  }
                  if ( v247 != 1 )
                  {
                    v180 = v190 * v288;
                    v181 = *(_DWORD *)(*((_QWORD *)v10 + 8) + 4LL * ((int)v183 >> 5));
                    if ( _bittest(&v181, v183) )
                      v180 = v180 + 1.0;
                    v182 = fmax(v180, 0.0001);
                    goto LABEL_263;
                  }
                  ++v178;
                  *v184 = fmax(0.0001, v190 + 1.0);
                  if ( v179 == v178 )
                  {
LABEL_267:
                    v52 = *((CoinIndexedVector **)v10 + 6);
                    goto LABEL_49;
                  }
                }
              }
              if ( v247 == 4 )
              {
                if ( v53 > 0 )
                {
                  v204 = *((_QWORD *)v10 + 8);
                  v205 = *(int **)v11;
                  v206 = *(_QWORD *)v11 + 4LL * (unsigned int)(v53 - 1) + 4;
                  do
                  {
                    while ( 1 )
                    {
                      v207 = 8LL * *v205;
                      v208 = v256 + *v205;
                      v209 = (double *)(v51 + 8LL * v256 + v207);
                      v210 = (double *)(v54 + v207);
                      v211 = *v210;
                      v212 = *v209;
                      *v210 = 0.0;
                      LODWORD(v210) = *(_DWORD *)(v204 + 4LL * (v208 >> 5));
                      v213 = v211 * v50 * (v211 * v50) * *((double *)v10 + 3);
                      if ( _bittest((const int *)&v210, v208) )
                        v213 = v213 + 1.0;
                      v214 = v212 * 0.99;
                      if ( v214 > v213 )
                        break;
                      ++v205;
                      *v209 = v213;
                      if ( (int *)v206 == v205 )
                        goto LABEL_316;
                    }
                    ++v205;
                    *v209 = v214;
                  }
                  while ( (int *)v206 != v205 );
                }
LABEL_316:
                v215 = *((_DWORD *)a5 + 4);
                v216 = *(int **)a5;
                v217 = *((_QWORD *)a5 + 1);
                if ( v215 > 0 )
                {
                  v218 = *((_QWORD *)v10 + 8);
                  v219 = (__int64)&v216[v215 - 1 + 1];
                  do
                  {
                    while ( 1 )
                    {
                      v220 = *v216;
                      v221 = (double *)(v51 + 8 * v220);
                      v222 = (double *)(v217 + 8 * v220);
                      v223 = *v222;
                      v224 = *v221;
                      *v222 = 0.0;
                      LODWORD(v222) = *(_DWORD *)(v218 + 4LL * ((int)v220 >> 5));
                      v225 = v223 * v50 * (v223 * v50) * *((double *)v10 + 3);
                      if ( _bittest((const int *)&v222, v220) )
                        v225 = v225 + 1.0;
                      v226 = v224 * 0.99;
                      if ( v226 > v225 )
                        break;
                      ++v216;
                      *v221 = v225;
                      if ( v216 == (int *)v219 )
                        goto LABEL_49;
                    }
                    ++v216;
                    *v221 = v226;
                  }
                  while ( (int *)v219 != v216 );
                }
              }
LABEL_49:
              if ( v37 >= 0 )
                *(double *)(*((_QWORD *)v10 + 4) + 8LL * v37) = v273;
              v257 = v18;
              CoinIndexedVector::clear(v52);
              v12 = *((_QWORD *)v10 + 1);
              v14 = *((__int64 **)v10 + 5);
              v18 = v257;
              *((_DWORD *)a6 + 4) = 0;
              *((_BYTE *)a6 + 28) = 0;
              *((_DWORD *)v11 + 4) = 0;
              *((_BYTE *)v11 + 28) = 0;
              *((_DWORD *)a5 + 4) = 0;
              *((_BYTE *)a5 + 28) = 0;
LABEL_52:
              v55 = *v14;
              v56 = *((_DWORD *)v14 + 4);
              if ( *(_DWORD *)(v12 + 1328) + 199 < *(_DWORD *)(v12 + 308) )
                goto LABEL_60;
              v57 = *(_QWORD *)(v12 + 1264);
              v58 = *(_QWORD *)(v57 + 8);
              if ( v58 )
                v59 = *(_DWORD *)(v58 + 68);
              else
                v59 = *(_DWORD *)(*(_QWORD *)(v57 + 16) + 52LL);
              v60 = 0.000001;
              if ( v59 )
                v60 = 0.00000001;
              v61 = *(double *)(v12 + 768);
              if ( v61 > v60 )
                v18 = v18 * (v61 / v60);
              v62 = 1000000.0;
              if ( v18 <= 1000.0 )
LABEL_60:
                v62 = v18 * v18;
              v63 = 0;
              if ( v37 >= 0 )
              {
                v64 = (__int64 *)(v17 + 8LL * v37);
                v63 = *v64;
                *v64 = 0;
              }
              v65 = 1664525 * *(_DWORD *)(v12 + 356);
              v66 = v55 + 4;
              v303[0] = v56;
              v303[1] = 0;
              v67 = nullptr;
              v68 = v55;
              v65 += 1013904223;
              *(_DWORD *)(v12 + 356) = v65;
              v69 = 1.0e-30;
              v302 = (int)((double)v65 * 2.328306436538696e-10 * (double)v56);
              v303[2] = v302;
              result = 0xFFFFFFFFLL;
              while ( 2 )
              {
                v71 = *(_DWORD *)((char *)v303 + (_QWORD)v67);
                v72 = *(_DWORD *)((char *)&v303[-1] + (_QWORD)v67);
                if ( v247 > 4 )
                {
                  if ( v71 > v72 )
                  {
                    v252 = v67;
                    v85 = (int *)(v68 + 4LL * v72);
                    v86 = (int *)(v66 + 4 * ((unsigned int)(v71 - 1 - v72) + (__int64)v72));
                    do
                    {
                      v87 = *v85;
                      v88 = *(double *)(v17 + 8 * v87);
                      if ( v88 > v62 && v88 > v69 )
                      {
                        if ( (*(_BYTE *)(*(_QWORD *)(v12 + 264) + v87) & 0x40) != 0 )
                        {
                          ++v43;
                        }
                        else
                        {
                          result = (unsigned int)v87;
                          v69 = *(double *)(v17 + 8 * v87);
                        }
                      }
                      if ( !--v43 )
                        goto LABEL_74;
                      ++v85;
                    }
                    while ( v86 != v85 );
LABEL_102:
                    v67 = v252;
LABEL_103:
                    v67 = (CoinIndexedVector *)((char *)v67 + 8);
                    if ( v67 == (CoinIndexedVector *)&word_10 )
                      goto LABEL_74;
                    continue;
                  }
                }
                else if ( v71 > v72 )
                {
                  v252 = v67;
                  v73 = (int *)(v68 + 4LL * v72);
                  v74 = (int *)(v66 + 4 * ((unsigned int)(v71 - 1 - v72) + (__int64)v72));
                  while ( 1 )
                  {
                    v75 = *v73;
                    v76 = *(double *)(v17 + 8 * v75);
                    if ( v76 <= v62 || v76 <= *(double *)(*((_QWORD *)v10 + 4) + 8 * v75) * v69 )
                      goto LABEL_68;
                    if ( (*(_BYTE *)(*(_QWORD *)(v12 + 264) + v75) & 0x40) == 0 )
                      break;
                    if ( !v43 )
                      goto LABEL_74;
LABEL_69:
                    if ( v74 == ++v73 )
                      goto LABEL_102;
                  }
                  result = (unsigned int)v75;
                  v69 = v76 / *(double *)(*((_QWORD *)v10 + 4) + 8 * v75);
LABEL_68:
                  if ( !--v43 )
                    goto LABEL_74;
                  goto LABEL_69;
                }
                break;
              }
              if ( v43 )
                goto LABEL_103;
LABEL_74:
              if ( v37 >= 0 )
                *(_QWORD *)(v17 + 8LL * v37) = v63;
              v77 = *(_QWORD *)(v12 + 1176);
              *(_DWORD *)(*(_QWORD *)(v12 + 192) + 48LL) = result;
              if ( (int)result >= 0 )
                *(_QWORD *)(*(_QWORD *)(v12 + 192) + 32LL) = *(_QWORD *)(v77 + 8LL * (int)result);
              return result;
            default:
              goto LABEL_212;
          }
        }
      default:
        goto LABEL_112;
    }
  }
}

