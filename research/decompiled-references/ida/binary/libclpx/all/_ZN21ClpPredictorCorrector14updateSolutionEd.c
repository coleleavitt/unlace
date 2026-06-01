__int64 __fastcall ClpPredictorCorrector::updateSolution(ClpPredictorCorrector *this, double a2)
{
  double *v3; // rbp
  int v4; // esi
  int v5; // r12d
  int v6; // eax
  double v7; // xmm0_8
  int v8; // eax
  bool v9; // dl
  double v10; // xmm15_8
  double v11; // xmm15_8
  double v12; // xmm0_8
  double *v13; // rdx
  double *v14; // rdi
  double *v15; // r8
  int v16; // r9d
  __int64 v17; // rax
  unsigned int v18; // r10d
  unsigned int v19; // esi
  __m128d v20; // xmm1
  __int64 v21; // rcx
  double *v22; // r14
  double *v23; // r13
  double *v24; // rcx
  signed int v25; // eax
  __int64 v26; // rcx
  int v27; // eax
  int v28; // r9d
  double *v29; // rsi
  __int64 v30; // rdi
  double *v31; // r8
  double *v32; // rcx
  double *v33; // rax
  __int64 v34; // xmm0_8
  __int64 v35; // rax
  double *v36; // rdi
  double *v37; // r9
  double *v38; // rcx
  double *v39; // rax
  double v40; // xmm0_8
  __int64 v41; // rax
  double *v42; // rax
  _QWORD *v43; // rcx
  int v44; // esi
  _QWORD *v45; // r8
  _QWORD *v46; // rdx
  __int64 *v47; // rcx
  _QWORD *v48; // rax
  __int64 v49; // xmm0_8
  __int64 v50; // rax
  __int64 v51; // r8
  __int64 v52; // rdi
  double v53; // xmm9_8
  __int64 v54; // r9
  __int64 v55; // rax
  unsigned int v56; // r12d
  __int64 v57; // rdx
  double *v58; // rcx
  double *v59; // r10
  double v60; // xmm12_8
  double *v61; // r8
  double *v62; // rdi
  double v63; // xmm3_8
  double v64; // xmm12_8
  double v65; // xmm11_8
  double v66; // xmm8_8
  __int128 v67; // xmm0
  double v68; // xmm1_8
  double v69; // xmm4_8
  int v70; // r10d
  double v71; // xmm4_8
  double v72; // xmm5_8
  double v73; // xmm1_8
  double v74; // xmm2_8
  double *v75; // rsi
  char v76; // r11
  double *v77; // r10
  double *v78; // rsi
  double v79; // xmm1_8
  double v80; // xmm7_8
  double v81; // xmm2_8
  double v82; // xmm5_8
  double v83; // xmm2_8
  __m128d v84; // xmm3
  double v85; // xmm10_8
  __m128d v86; // xmm10
  double v87; // xmm3_8
  double v88; // xmm7_8
  double v89; // xmm3_8
  double v90; // xmm5_8
  double v91; // xmm10_8
  double v92; // xmm13_8
  double v93; // xmm10_8
  double v94; // xmm10_8
  double v95; // xmm10_8
  double v96; // xmm3_8
  double v97; // xmm1_8
  char v98; // r10
  char v99; // si
  double *v100; // r13
  double *v101; // rsi
  double v102; // xmm2_8
  double v103; // xmm10_8
  double v104; // xmm8_8
  double v105; // xmm13_8
  double v106; // xmm8_8
  __m128d v107; // xmm12
  double v108; // xmm14_8
  __m128d v109; // xmm14
  double v110; // xmm12_8
  double v111; // xmm12_8
  double v112; // xmm10_8
  double v113; // xmm13_8
  double v114; // xmm14_8
  double v115; // xmm13_8
  double v116; // xmm11_8
  double v117; // xmm2_8
  double v118; // xmm4_8
  double v119; // xmm4_8
  double *v120; // rcx
  __int64 v121; // rsi
  double v122; // xmm13_8
  double v123; // xmm11_8
  double v124; // xmm8_8
  double v125; // xmm8_8
  double v126; // xmm14_8
  double v127; // xmm7_8
  double v128; // xmm0_8
  double v129; // xmm0_8
  double v130; // xmm1_8
  CoinMessageHandler *v131; // rax
  CoinMessageHandler *v132; // rax
  __int64 v133; // rax
  double v134; // xmm1_8
  __int64 v135; // rcx
  __int64 v136; // rax
  double *v137; // rdx
  int v138; // esi
  const double *v139; // rdx
  int v140; // esi
  double v141; // xmm0_8
  double v142; // xmm7_8
  double v143; // xmm0_8
  int v144; // esi
  double v145; // xmm5_8
  __int64 v146; // rdi
  __int64 v147; // rax
  __int64 v148; // rdx
  double v149; // xmm2_8
  double v150; // xmm0_8
  double v151; // xmm3_8
  double v152; // xmm1_8
  double v153; // xmm4_8
  double v154; // xmm1_8
  double v155; // xmm1_8
  double v156; // xmm1_8
  double v157; // xmm1_8
  double v158; // xmm4_8
  double v159; // xmm7_8
  double v160; // xmm2_8
  double v161; // xmm3_8
  char v162; // bp
  double v163; // xmm4_8
  double v164; // xmm1_8
  double v165; // xmm5_8
  double v166; // xmm4_8
  CoinMessageHandler *v167; // rax
  CoinMessageHandler *v168; // rax
  CoinMessageHandler *v169; // rax
  double v170; // xmm0_8
  __int64 v171; // rax
  __int64 v172; // rax
  __int64 v173; // rsi
  double v174; // xmm0_8
  double v175; // xmm3_8
  double v176; // xmm3_8
  double v177; // xmm0_8
  __int64 v178; // rcx
  CoinMessageHandler *v179; // rax
  CoinMessageHandler *v180; // rax
  double v181; // xmm0_8
  __int64 v182; // rax
  bool v183; // cc
  CoinMessageHandler *v184; // rax
  __int64 v185; // rax
  char v186; // dl
  CoinMessageHandler *v187; // rax
  CoinMessageHandler *v188; // rax
  CoinMessageHandler *v189; // rax
  double v190; // xmm0_8
  __int64 v191; // rax
  double v193; // xmm0_8
  int v194; // esi
  _QWORD *v195; // rdi
  _QWORD *v196; // r8
  int v197; // esi
  __int64 v198; // rdx
  __int64 v199; // rcx
  _QWORD *v200; // rax
  __int64 v201; // rsi
  int v202; // edx
  _QWORD *v203; // rax
  int v204; // edx
  CoinMessageHandler *v205; // rax
  __int64 v206; // rax
  CoinMessageHandler *v207; // rax
  __int64 v208; // rax
  __int64 v209; // rax
  char v210; // al
  unsigned __int64 v211; // rax
  CoinMessageHandler *v212; // rax
  CoinMessageHandler *v213; // rax
  CoinMessageHandler *v214; // rax
  __int64 v215; // rax
  double v216; // [rsp+0h] [rbp-B8h]
  double v217; // [rsp+0h] [rbp-B8h]
  double v218; // [rsp+8h] [rbp-B0h]
  double v219; // [rsp+10h] [rbp-A8h]
  __int128 v220; // [rsp+18h] [rbp-A0h]
  double v221; // [rsp+28h] [rbp-90h]
  double v222; // [rsp+30h] [rbp-88h]
  double v223; // [rsp+38h] [rbp-80h]
  double v224; // [rsp+40h] [rbp-78h]
  double v225; // [rsp+48h] [rbp-70h]
  double v226; // [rsp+50h] [rbp-68h]
  double v227; // [rsp+58h] [rbp-60h]
  double v228; // [rsp+60h] [rbp-58h]
  double v229; // [rsp+68h] [rbp-50h]
  double v230; // [rsp+70h] [rbp-48h]
  double v231; // [rsp+78h] [rbp-40h]
  double v232; // [rsp+80h] [rbp-38h]
  double v233; // [rsp+88h] [rbp-30h]

  v3 = *((double **)this + 16);
  v4 = *((_DWORD *)this + 26);
  v5 = v4 + *((_DWORD *)this + 27);
  multiplyAdd(*((const double **)this + 146), v4, *((double *)this + 127), v3, 1.0);
  v6 = *((_DWORD *)this + 26);
  if ( v6 )
  {
    v194 = v6 + 7;
    v195 = *((_QWORD **)this + 138);
    v196 = *((_QWORD **)this + 139);
    if ( v6 >= 0 )
      v194 = v6;
    v197 = v194 >> 3;
    v198 = (unsigned int)(v6 % 8);
    v199 = v198;
    if ( v197 <= 0 )
    {
      switch ( (int)v198 )
      {
        case 0:
          goto LABEL_251;
        case 1:
          goto LABEL_245;
        case 2:
          goto LABEL_244;
        case 3:
          goto LABEL_243;
        case 4:
          goto LABEL_242;
        case 5:
          goto LABEL_241;
        case 6:
          goto LABEL_240;
        case 7:
LABEL_239:
          v195[6] = 0;
LABEL_240:
          v195[5] = 0;
LABEL_241:
          v195[4] = 0;
LABEL_242:
          v195[3] = 0;
LABEL_243:
          v195[2] = 0;
LABEL_244:
          v195[1] = 0;
LABEL_245:
          *v195 = 0;
          goto LABEL_246;
        default:
          goto LABEL_2;
      }
    }
    v200 = *((_QWORD **)this + 138);
    v201 = (unsigned int)(v197 - 1);
    do
    {
      *v200 = 0;
      v200[1] = 0;
      v200 += 8;
      *(v200 - 6) = 0;
      *(v200 - 5) = 0;
      *(v200 - 4) = 0;
      *(v200 - 3) = 0;
      *(v200 - 2) = 0;
      *(v200 - 1) = 0;
    }
    while ( &v195[8 * v201 + 8] != v200 );
    v195 += 8 * (int)v201 + 8;
    switch ( v198 )
    {
      case 1LL:
        goto LABEL_245;
      case 2LL:
        goto LABEL_244;
      case 3LL:
        goto LABEL_243;
      case 4LL:
        goto LABEL_242;
      case 5LL:
        goto LABEL_241;
      case 6LL:
        goto LABEL_240;
      case 7LL:
        goto LABEL_239;
      default:
        break;
    }
LABEL_246:
    v202 = *((_DWORD *)this + 26);
    if ( v202 )
    {
      v199 = (unsigned int)(v202 % 8);
      if ( v202 / 8 > 0 )
      {
        v203 = v196;
        v204 = v202 / 8 - 1;
        do
        {
          *v203 = 0;
          v203[1] = 0;
          v203 += 8;
          *(v203 - 6) = 0;
          *(v203 - 5) = 0;
          *(v203 - 4) = 0;
          *(v203 - 3) = 0;
          *(v203 - 2) = 0;
          *(v203 - 1) = 0;
        }
        while ( &v196[8 * (unsigned int)v204 + 8] != v203 );
        v196 += 8 * v204 + 8;
      }
LABEL_251:
      switch ( v199 )
      {
        case 1LL:
          goto LABEL_258;
        case 2LL:
          goto LABEL_257;
        case 3LL:
          goto LABEL_256;
        case 4LL:
          goto LABEL_255;
        case 5LL:
          goto LABEL_254;
        case 6LL:
          goto LABEL_253;
        case 7LL:
          v196[6] = 0;
LABEL_253:
          v196[5] = 0;
LABEL_254:
          v196[4] = 0;
LABEL_255:
          v196[3] = 0;
LABEL_256:
          v196[2] = 0;
LABEL_257:
          v196[1] = 0;
LABEL_258:
          *v196 = 0;
          break;
        default:
          break;
      }
    }
  }
LABEL_2:
  v7 = *(double *)(*((_QWORD *)this + 161) + 24LL);
  if ( v7 < 0.0 )
    v7 = -v7;
  v8 = *((_DWORD *)this + 77);
  if ( v7 >= 1.0e10 || (v9 = 0, *((double *)this + 113) / *((double *)this + 124) >= 1.0e12) )
    v9 = v8 > 19;
  v10 = 100.0 * *((double *)this + 110);
  v228 = *((double *)this + 4);
  v233 = fmax(100.0, v10);
  v219 = fmax(1.0e-12, *((double *)this + 3) / *((double *)this + 125));
  v232 = 1.0e18;
  if ( !v9 )
    v232 = 1.0e25;
  v225 = 1.0;
  v11 = fmax(10000000.0, v10);
  if ( v8 > 49 )
  {
    v12 = *((double *)this + 114);
    if ( v8 > 99 )
    {
      if ( v8 > 199 )
      {
        v193 = fmax(v12, 0.999995);
        v225 = 100.0;
      }
      else
      {
        v193 = fmax(v12, 0.99995);
        v225 = 20.0;
      }
      *((double *)this + 114) = v193;
    }
    else
    {
      v225 = 5.0;
      *((double *)this + 114) = fmax(v12, 0.9995000000000001);
    }
  }
  v13 = *((double **)this + 150);
  if ( v5 > 0 )
  {
    v14 = *((double **)this + 145);
    v15 = *((double **)this + 143);
    if ( (v15 >= v13 + 2 || v13 >= v15 + 2)
      && (unsigned int)v5 > 0xA
      && (v14 >= v13 + 2 || v13 >= v14 + 2)
      && (v13 >= (double *)this + 127 || (char *)this + 1008 >= (char *)&v13[v5]) )
    {
      v16 = 0;
      if ( (((unsigned __int64)v14 >> 3) & 1) != 0 )
      {
        v16 = 1;
        *v13 = *((double *)this + 126) * *v14 + *v15;
      }
      v17 = 0;
      v18 = v5 - (((unsigned __int64)v14 >> 3) & 1);
      v19 = 0;
      v20 = _mm_unpacklo_pd((__m128d)*((unsigned __int64 *)this + 126), (__m128d)*((unsigned __int64 *)this + 126));
      v21 = ((unsigned __int64)v14 >> 3) & 1;
      v22 = &v14[v21];
      v23 = &v15[v21];
      v24 = &v13[v21];
      do
      {
        ++v19;
        *(__m128d *)&v24[v17] = _mm_add_pd(_mm_mul_pd(*(__m128d *)&v22[v17], v20), *(__m128d *)&v23[v17]);
        v17 += 2;
      }
      while ( v19 < v18 >> 1 );
      v25 = (v18 & 0xFFFFFFFE) + v16;
      if ( (v18 & 0xFFFFFFFE) != v18 )
      {
        v26 = v25;
        v27 = v25 + 1;
        v13[v26] = v14[v26] * *((double *)this + 126) + v15[v26];
        if ( v27 < v5 )
          v13[v27] = v14[v27] * *((double *)this + 126) + v15[v27];
      }
    }
    else
    {
      v211 = 0;
      do
      {
        v13[v211 / 8] = *((double *)this + 126) * v14[v211 / 8] + v15[v211 / 8];
        v211 += 8LL;
      }
      while ( 8LL * (unsigned int)(v5 - 1) + 8 != v211 );
    }
  }
  v28 = *((_DWORD *)this + 26);
  v29 = *((double **)this + 104);
  v30 = *((int *)this + 27);
  v31 = &v29[v30];
  if ( v28 && v31 != v3 )
  {
    if ( v28 >> 3 <= 0 )
    {
      v36 = v3;
    }
    else
    {
      v32 = v3;
      v33 = &v29[v30];
      do
      {
        v34 = *(_QWORD *)v32;
        v33 += 8;
        v32 += 8;
        *((_QWORD *)v33 - 8) = v34;
        *(v33 - 7) = *(v32 - 7);
        *(v33 - 6) = *(v32 - 6);
        *(v33 - 5) = *(v32 - 5);
        *(v33 - 4) = *(v32 - 4);
        *(v33 - 3) = *(v32 - 3);
        *(v33 - 2) = *(v32 - 2);
        *(v33 - 1) = *(v32 - 1);
      }
      while ( v33 != &v31[8 * (unsigned int)((v28 >> 3) - 1) + 8] );
      v35 = ((v28 >> 3) - 1 + 1LL) << 6;
      v36 = (double *)((char *)v3 + v35);
      v31 = (double *)((char *)v31 + v35);
    }
    switch ( v28 % 8 )
    {
      case 1:
        goto LABEL_35;
      case 2:
        goto LABEL_34;
      case 3:
        goto LABEL_33;
      case 4:
        goto LABEL_32;
      case 5:
        goto LABEL_31;
      case 6:
        goto LABEL_30;
      case 7:
        v31[6] = v36[6];
LABEL_30:
        v31[5] = v36[5];
LABEL_31:
        v31[4] = v36[4];
LABEL_32:
        v31[3] = v36[3];
LABEL_33:
        v31[2] = v36[2];
LABEL_34:
        v31[1] = v36[1];
LABEL_35:
        *v31 = *v36;
        break;
      default:
        break;
    }
    LODWORD(v30) = *((_DWORD *)this + 27);
  }
  v37 = *((double **)this + 100);
  if ( (_DWORD)v30 && v29 != v37 )
  {
    if ( (int)v30 >> 3 <= 0 )
    {
      v42 = v29;
    }
    else
    {
      v38 = *((double **)this + 100);
      v39 = v29;
      do
      {
        v40 = *v38;
        v39 += 8;
        v38 += 8;
        *(v39 - 8) = v40;
        *(v39 - 7) = *(v38 - 7);
        *(v39 - 6) = *(v38 - 6);
        *(v39 - 5) = *(v38 - 5);
        *(v39 - 4) = *(v38 - 4);
        *(v39 - 3) = *(v38 - 3);
        *(v39 - 2) = *(v38 - 2);
        *(v39 - 1) = *(v38 - 1);
      }
      while ( v39 != &v29[8 * (unsigned int)(((int)v30 >> 3) - 1) + 8] );
      v41 = (((int)v30 >> 3) - 1 + 1LL) << 6;
      v37 = (double *)((char *)v37 + v41);
      v42 = (double *)((char *)v29 + v41);
    }
    switch ( (int)v30 % 8 )
    {
      case 1:
        goto LABEL_50;
      case 2:
        goto LABEL_49;
      case 3:
        goto LABEL_48;
      case 4:
        goto LABEL_47;
      case 5:
        goto LABEL_46;
      case 6:
        goto LABEL_45;
      case 7:
        v42[6] = v37[6];
LABEL_45:
        v42[5] = v37[5];
LABEL_46:
        v42[4] = v37[4];
LABEL_47:
        v42[3] = v37[3];
LABEL_48:
        v42[2] = v37[2];
LABEL_49:
        v42[1] = v37[1];
LABEL_50:
        *v42 = *v37;
        break;
      default:
        break;
    }
  }
  ClpInterior::quadraticDjs(this, v29, v13, 1.0);
  v44 = *((_DWORD *)this + 27);
  v227 = 1.0;
  v45 = *((_QWORD **)this + 149);
  v46 = *((_QWORD **)this + 104);
  if ( v44 && v45 != v46 )
  {
    if ( v44 >> 3 <= 0 )
    {
      v43 = *((_QWORD **)this + 104);
    }
    else
    {
      v47 = *((__int64 **)this + 104);
      v48 = *((_QWORD **)this + 149);
      do
      {
        v49 = *v47;
        v48 += 8;
        v47 += 8;
        *(v48 - 8) = v49;
        *(v48 - 7) = *(v47 - 7);
        *(v48 - 6) = *(v47 - 6);
        *(v48 - 5) = *(v47 - 5);
        *(v48 - 4) = *(v47 - 4);
        *(v48 - 3) = *(v47 - 3);
        *(v48 - 2) = *(v47 - 2);
        *(v48 - 1) = *(v47 - 1);
      }
      while ( v48 != &v45[8 * (unsigned int)((v44 >> 3) - 1) + 8] );
      v50 = ((v44 >> 3) - 1 + 1LL) << 6;
      v43 = (_QWORD *)((char *)v46 + v50);
      v45 = (_QWORD *)((char *)v45 + v50);
    }
    switch ( v44 % 8 )
    {
      case 1:
        goto LABEL_64;
      case 2:
        goto LABEL_63;
      case 3:
        goto LABEL_62;
      case 4:
        goto LABEL_61;
      case 5:
        goto LABEL_60;
      case 6:
        goto LABEL_59;
      case 7:
        v45[6] = v43[6];
LABEL_59:
        v45[5] = v43[5];
LABEL_60:
        v45[4] = v43[4];
LABEL_61:
        v45[3] = v43[3];
LABEL_62:
        v45[2] = v43[2];
LABEL_63:
        v45[1] = v43[1];
LABEL_64:
        *v45 = *v43;
        break;
      default:
        break;
    }
  }
  v216 = 0.0;
  (*(void (__fastcall **)(_QWORD, double *, _QWORD *, _QWORD *, _QWORD *, double))(**((_QWORD **)this + 24) + 376LL))(
    *((_QWORD *)this + 24),
    v3,
    v46,
    v43,
    v45,
    -1.0);
  v230 = *((double *)this + 117) * *((double *)this + 117);
  if ( v5 > 0 )
  {
    v51 = *((_QWORD *)this + 143);
    v224 = 0.0;
    v52 = *((_QWORD *)this + 145);
    v53 = 0.0;
    v223 = 1.0e50;
    v54 = (unsigned int)(v5 - 1) + 1LL;
    v55 = 0;
    v222 = 0.0;
    v56 = 0;
    v218 = 1.0e-12;
    v229 = 0.0;
    *((_QWORD *)&v220 + 1) = 0x3D719799812DEA11LL;
    v231 = 0.0;
    v221 = 0.0;
    *(_QWORD *)&v220 = 0;
    while ( 1 )
    {
      v57 = 8 * v55;
      v58 = (double *)(v51 + 8 * v55);
      v59 = (double *)(v52 + 8 * v55);
      if ( (*(_BYTE *)(*((_QWORD *)this + 33) + v55) & 2) != 0 )
      {
        v173 = *((_QWORD *)this + 142);
        *v59 = *v58;
        *(_QWORD *)(v173 + 8 * v55) = 0;
        v130 = *v58;
        v216 = *(double *)(*((_QWORD *)this + 149) + 8 * v55) * *v58 + v216;
        v174 = *(double *)(*((_QWORD *)this + 97) + 8 * v55);
        v175 = *(double *)(*((_QWORD *)this + 94) + 8 * v55);
        if ( v174 - v175 > 0.00001 )
        {
          if ( v175 + 0.00000001 > v130 )
          {
            v176 = *(double *)(*((_QWORD *)this + 104) + 8 * v55);
            if ( v176 < -0.00000001 )
              v229 = fmax(-v176, v229);
          }
          if ( v130 > v174 - 0.00000001 )
          {
            v177 = *(double *)(*((_QWORD *)this + 104) + 8 * v55);
            if ( v177 > 0.00000001 )
              v229 = fmax(v177, v229);
          }
        }
        goto LABEL_142;
      }
      v60 = *((double *)this + 127);
      v61 = (double *)(v57 + *((_QWORD *)this + 160));
      v226 = *(double *)(*((_QWORD *)this + 104) + 8 * v55);
      v62 = (double *)(v57 + *((_QWORD *)this + 159));
      v63 = *(double *)(*((_QWORD *)this + 147) + 8 * v55) * v60 + *v62;
      v64 = v60 * *(double *)(*((_QWORD *)this + 148) + 8 * v55) + *v61;
      *v62 = v63;
      *v61 = v64;
      v65 = *v59;
      v67 = *((unsigned __int64 *)this + 126);
      v66 = *v58;
      *(double *)&v67 = *(double *)&v67 * *v59 + *v58;
      v68 = *(double *)&v67;
      if ( *(double *)&v67 < 0.0 )
        v68 = -*(double *)&v67;
      v69 = v228;
      if ( v68 > 10000.0 )
        v69 = v228 * 0.0001 * *(double *)&v67;
      v70 = *((_DWORD *)this + 27);
      v71 = v69 * 0.001;
      if ( v70 <= (int)v55 )
      {
        v72 = *(double *)(*((_QWORD *)this + 18) + 8LL * ((int)v55 - v70));
        v73 = *(double *)(*((_QWORD *)this + 19) + 8LL * ((int)v55 - v70));
      }
      else
      {
        v72 = *(double *)(*((_QWORD *)this + 22) + 8 * v55);
        v73 = *(double *)(*((_QWORD *)this + 23) + 8 * v55);
      }
      v74 = v72 + v11;
      if ( v66 > v72 + v11 && v73 - v11 > v66 )
        break;
      if ( *(double *)&v67 > v74 && v73 - v11 > *(double *)&v67 )
      {
        *(double *)(*((_QWORD *)this + 94) + 8 * v55) = *(double *)&v67 - v11;
LABEL_196:
        v76 = 1;
        *(double *)(*((_QWORD *)this + 141) + 8 * v55) = v11;
        *(double *)(*((_QWORD *)this + 97) + 8 * v55) = *(double *)&v67 + v11;
        *(double *)(*((_QWORD *)this + 140) + 8 * v55) = v11;
        goto LABEL_78;
      }
      v76 = 0;
LABEL_78:
      if ( (*(_BYTE *)(*((_QWORD *)this + 33) + v55) & 8) != 0 )
      {
        v77 = (double *)(v57 + *((_QWORD *)this + 141));
        v78 = (double *)(v57 + *((_QWORD *)this + 94));
        v79 = *v77;
        v80 = *v78;
        if ( !v76 )
          v79 = v79 + (v66 - v79 + v65 - v80) * *((double *)this + 126);
        v81 = v79;
        if ( v79 < 0.0 )
          v81 = -v79;
        v82 = *(double *)&v67 - v80;
        v83 = fmax(fmin(v81 * 1.0e-12, 0.00001), v63);
        if ( *(double *)&v67 - v80 > 0.0 && v79 > 0.0 )
        {
          v84.m128d_f64[1] = *((double *)&v67 + 1);
          v84.m128d_f64[0] = v82 - v79;
          v85 = fmax(v79, v82);
          if ( v82 - v79 < 0.0 )
            v84 = _mm_xor_pd(v84, (__m128d)xmmword_289BF0);
          v86.m128d_f64[0] = v85 * 0.000001;
          v87 = _mm_cmpge_sd(v84, v86).m128d_f64[0];
          *(_QWORD *)&v79 = *(_QWORD *)&v79 & *(_QWORD *)&v87 | ~*(_QWORD *)&v87 & *(_QWORD *)&v82;
        }
        if ( *v62 <= v219 )
          v88 = 0.0;
        else
          v88 = v80 * *v62 + 0.0;
        *v77 = v79;
        v89 = *v78;
        v90 = *(double *)&v67 - v79 - *v78;
        if ( v90 < 0.0 )
          v90 = -v90;
        v91 = v225 * v71;
        if ( v225 * v71 >= v79 )
        {
          v92 = *(double *)&v67 - v89;
          if ( *(double *)&v67 - v89 < 0.0 )
          {
            if ( v91 >= -v92 )
              goto LABEL_95;
          }
          else if ( v91 >= v92 )
          {
LABEL_95:
            v93 = 1.1 * *((double *)this + 126);
            if ( v93 < 1.0 )
              v94 = v93 * v65;
            else
              v94 = v65;
            if ( *(double *)&v67 > v94 + *v58
              && *(double *)(*((_QWORD *)this + 104) + 8 * v55) > 0.00001
              && *((int *)this + 77) > 10 )
            {
              *v77 = 0.0;
              *(double *)&v67 = v89;
              v79 = 0.0;
            }
          }
        }
        if ( v71 >= v79 )
        {
          v95 = *v78;
          v96 = *(double *)&v67 - *v78;
          if ( v96 >= 0.0 )
          {
            if ( v71 < v96 )
              goto LABEL_104;
LABEL_217:
            *v77 = 0.0;
            v98 = 1;
            *(double *)&v67 = v95;
            v63 = v83;
            v97 = 1.0e-12;
            v99 = *(_BYTE *)(*((_QWORD *)this + 33) + v55);
LABEL_105:
            if ( (v99 & 0x10) == 0 )
              goto LABEL_199;
            goto LABEL_106;
          }
          if ( v71 >= -v96 )
            goto LABEL_217;
        }
LABEL_104:
        v97 = v79 + 1.0e-12;
        v98 = 0;
        v63 = v83;
        v99 = *(_BYTE *)(*((_QWORD *)this + 33) + v55);
        goto LABEL_105;
      }
      v98 = 0;
      v90 = 0.0;
      v97 = 1.0e-12;
      v88 = 0.0;
      if ( (*(_BYTE *)(*((_QWORD *)this + 33) + v55) & 0x10) == 0 )
      {
LABEL_199:
        v112 = 0.0;
        v117 = 1.0e-12;
        goto LABEL_132;
      }
LABEL_106:
      v100 = (double *)(v57 + *((_QWORD *)this + 140));
      v101 = (double *)(v57 + *((_QWORD *)this + 97));
      v102 = *v100;
      v103 = *v101;
      if ( !v76 )
        v102 = v102 + *((double *)this + 126) * (-v66 - v102 - v65 + v103);
      v104 = v102;
      if ( v102 < 0.0 )
        v104 = -v102;
      v105 = v103 - *(double *)&v67;
      v106 = fmax(fmin(v104 * 1.0e-12, 0.00001), v64);
      if ( v103 - *(double *)&v67 > 0.0 && v102 > 0.0 )
      {
        v107.m128d_f64[1] = 0.0;
        v107.m128d_f64[0] = v105 - v102;
        v108 = fmax(v102, v105);
        if ( v105 - v102 < 0.0 )
          v107 = _mm_xor_pd(v107, (__m128d)xmmword_289BF0);
        v109.m128d_f64[0] = v108 * 0.000001;
        v110 = _mm_cmpge_sd(v107, v109).m128d_f64[0];
        *(_QWORD *)&v102 = *(_QWORD *)&v102 & *(_QWORD *)&v110 | ~*(_QWORD *)&v110 & *(_QWORD *)&v105;
      }
      if ( *v61 > v219 )
        v88 = v88 - v103 * *v61;
      *v100 = v102;
      v111 = *v101;
      v112 = *(double *)&v67 + v102 - *v101;
      if ( v112 < 0.0 )
        v112 = -v112;
      v113 = v225 * v71;
      if ( v225 * v71 < v102 )
        goto LABEL_128;
      v114 = *(double *)&v67 - v111;
      if ( *(double *)&v67 - v111 < 0.0 )
      {
        if ( v113 >= -v114 )
        {
LABEL_122:
          v115 = 1.1 * *((double *)this + 126);
          if ( v115 < 1.0 )
            v65 = v65 * v115;
          if ( v65 + *v58 > *(double *)&v67
            && *(double *)(*((_QWORD *)this + 104) + 8 * v55) < -0.00001
            && *((int *)this + 77) > 10 )
          {
            *v100 = 0.0;
            *(double *)&v67 = v111;
            v102 = 0.0;
          }
        }
      }
      else if ( v113 >= v114 )
      {
        goto LABEL_122;
      }
LABEL_128:
      if ( v71 >= v102 )
      {
        v116 = *(double *)&v67 - *v101;
        if ( v116 < 0.0 )
        {
          if ( v71 >= -v116 )
          {
LABEL_216:
            *(double *)&v67 = *v101;
            *v100 = 0.0;
            v64 = v106;
            v98 = 1;
            v117 = 1.0e-12;
            goto LABEL_132;
          }
        }
        else if ( v71 >= v116 )
        {
          goto LABEL_216;
        }
      }
      v117 = v102 + 1.0e-12;
      v64 = v106;
LABEL_132:
      *(_QWORD *)v58 = v67;
      v118 = *(double *)&v67;
      if ( *(double *)&v67 < 0.0 )
        v118 = -*(double *)&v67;
      v119 = fmax(v118, v218);
      v120 = (double *)(v57 + *((_QWORD *)this + 142));
      if ( v98 )
      {
        *v120 = 0.0;
        *v62 = 0.0;
        ++v56;
        *v61 = 0.0;
        v218 = v119;
        *(_BYTE *)(v55 + *((_QWORD *)this + 33)) |= 2u;
        *(_BYTE *)(v55 + *((_QWORD *)this + 33)) |= 4u;
        v52 = *((_QWORD *)this + 145);
        v178 = *((_QWORD *)this + 149);
        v51 = *((_QWORD *)this + 143);
        *(_QWORD *)(v52 + 8 * v55) = v67;
        v130 = *(double *)(v51 + 8 * v55);
        v216 = *(double *)&v67 * *(double *)(v178 + 8 * v55) + v216;
      }
      else
      {
        v121 = *((_QWORD *)this + 151);
        v122 = *(double *)&v67 * *(double *)&v67;
        v123 = v230;
        if ( v121 )
        {
          v124 = *(double *)(v121 + 8 * v55);
          v123 = v230 + v124;
          v227 = v124 * v122 + v227;
        }
        v125 = *(double *)&v67 * v123 + *v61 + v226 - *v62;
        v126 = v125;
        if ( v125 < 0.0 )
          v126 = -v125;
        if ( v126 > v219 )
          v231 = *(double *)&v67 * v125 + v231;
        v218 = v119;
        v221 = v88 + v221;
        v224 = v122 + v224;
        *((_QWORD *)&v220 + 1) = fmax(v126, *((double *)&v220 + 1));
        v127 = fmin(v233, v117);
        v128 = fmin(v233, v97);
        *(_QWORD *)&v220 = fmax(v112, fmax(v90, *(double *)&v220));
        v129 = v127 * v128 / (v64 * v128 + v63 * v127 + v127 * (v128 * v123));
        *v120 = fmin(v232, v129);
        v52 = *((_QWORD *)this + 145);
        v51 = *((_QWORD *)this + 143);
        *(_QWORD *)(v52 + 8 * v55) = 0;
        v223 = fmin(v129, v223);
        v222 = fmax(v129, v222);
        v130 = *(double *)(v51 + 8 * v55);
      }
LABEL_142:
      ++v55;
      v53 = v53 + v130 * *(double *)(*((_QWORD *)this + 100) + v57);
      if ( v54 == v55 )
        goto LABEL_143;
    }
    v75 = (double *)(v57 + *((_QWORD *)this + 94));
    if ( *(double *)&v67 <= v74 || v73 - v11 <= *(double *)&v67 )
    {
      *v75 = v72;
      v76 = 1;
      *(_BYTE *)(v55 + *((_QWORD *)this + 33)) |= 8u;
      *(double *)(v57 + *((_QWORD *)this + 141)) = fmax(*(double *)&v67 - v72, 1.0);
      *(double *)(*((_QWORD *)this + 97) + 8 * v55) = v73;
      *(_BYTE *)(v55 + *((_QWORD *)this + 33)) |= 0x10u;
      v62 = (double *)(v57 + *((_QWORD *)this + 159));
      v61 = (double *)(v57 + *((_QWORD *)this + 160));
      *(double *)(v57 + *((_QWORD *)this + 140)) = fmax(v73 - *(double *)&v67, 1.0);
      v58 = (double *)(v57 + *((_QWORD *)this + 143));
      goto LABEL_78;
    }
    *v75 = *(double *)&v67 - v11;
    goto LABEL_196;
  }
  v224 = 0.0;
  v56 = 0;
  v223 = 1.0e50;
  v53 = 0.0;
  v218 = 1.0e-12;
  v229 = 0.0;
  *((_QWORD *)&v220 + 1) = 0x3D719799812DEA11LL;
  v216 = 0.0;
  v231 = 0.0;
  v221 = 0.0;
  *(_QWORD *)&v220 = 0;
LABEL_143:
  v131 = (CoinMessageHandler *)CoinMessageHandler::message(
                                 *((CoinMessageHandler **)this + 43),
                                 73,
                                 (ClpPredictorCorrector *)((char *)this + 416));
  v132 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v131);
  v133 = CoinMessageHandler::operator<<(v132);
  CoinMessageHandler::operator<<(v133, 0, v223);
  multiplyAdd(
    (const double *)(*((_QWORD *)this + 145) + 8LL * *((int *)this + 27)),
    *((_DWORD *)this + 26),
    -1.0,
    *((double **)this + 139),
    1.0);
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, double))(**((_QWORD **)this + 24) + 360LL))(
    *((_QWORD *)this + 24),
    *((_QWORD *)this + 145),
    *((_QWORD *)this + 139),
    1.0);
  v134 = v230 * 0.5 * v224 + 0.5 * v227;
  v217 = v216 + v231 + v221 - v134;
  if ( v229 != 0.0 )
  {
    v207 = (CoinMessageHandler *)CoinMessageHandler::message(
                                   *((CoinMessageHandler **)this + 43),
                                   75,
                                   (ClpPredictorCorrector *)((char *)this + 416));
    v208 = CoinMessageHandler::operator<<(v207);
    CoinMessageHandler::operator<<(v208, 0, v229);
  }
  v135 = *((int *)this + 27);
  v136 = *((_QWORD *)this + 143);
  v137 = *((double **)this + 138);
  v138 = *((_DWORD *)this + 26);
  *(_OWORD *)((char *)this + 712) = *((unsigned __int64 *)&v220 + 1);
  *((_QWORD *)this + 122) = v220;
  multiplyAdd((const double *)(v136 + 8 * v135), v138, -1.0, v137, 0.0);
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, double))(**((_QWORD **)this + 24) + 360LL))(
    *((_QWORD *)this + 24),
    *((_QWORD *)this + 143),
    *((_QWORD *)this + 138),
    1.0);
  v139 = *((const double **)this + 139);
  v140 = *((_DWORD *)this + 26);
  v141 = (v53 + v134) * *((double *)this + 125);
  *((_OWORD *)this + 61) = v220;
  *((double *)this + 110) = v218;
  *((double *)this + 112) = v141;
  innerProduct(v3, v140, v139);
  v142 = *((double *)this + 125);
  v143 = (v217 - v141) * v142;
  *((double *)this + 111) = v143;
  if ( v56 )
  {
    v205 = (CoinMessageHandler *)CoinMessageHandler::message(
                                   *((CoinMessageHandler **)this + 43),
                                   76,
                                   (ClpPredictorCorrector *)((char *)this + 416));
    v206 = CoinMessageHandler::operator<<(v205);
    CoinMessageHandler::operator<<(v206, 0, v143);
    v142 = *((double *)this + 125);
  }
  v144 = *((_DWORD *)this + 26);
  v145 = *((double *)this + 112);
  if ( v144 <= 0 )
  {
    v150 = 0.0;
    v151 = 0.0;
    *((double *)this + 112) = v145 - v142 * 0.0;
  }
  else
  {
    v147 = 0;
    v148 = (unsigned int)(v144 - 1) + 1LL;
    v149 = 0.0;
    v150 = 0.0;
    v151 = 0.0;
    do
    {
      while ( 1 )
      {
        v146 = *((_QWORD *)this + 138);
        v152 = *(double *)(v146 + 8 * v147);
        if ( !*(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 161) + 56LL) + v147) )
          break;
        v153 = *(double *)(v146 + 8 * v147);
        if ( v152 < 0.0 )
          v153 = -v152;
        v154 = v152 * v3[v147++];
        v150 = fmax(v153, v150);
        v149 = v149 + v154;
        if ( v148 == v147 )
          goto LABEL_156;
      }
      if ( v152 < 0.0 )
        v152 = -v152;
      ++v147;
      v151 = fmax(v152, v151);
    }
    while ( v148 != v147 );
LABEL_156:
    *((double *)this + 112) = v145 - v149 * v142;
    if ( v151 > v150 )
    {
      *((double *)this + 121) = v151;
      goto LABEL_158;
    }
  }
  v183 = v150 <= *((double *)this + 4);
  *((double *)this + 121) = v151;
  if ( !v183 )
  {
    v184 = (CoinMessageHandler *)CoinMessageHandler::message(
                                   *((CoinMessageHandler **)this + 43),
                                   77,
                                   (ClpPredictorCorrector *)((char *)this + 416));
    v185 = CoinMessageHandler::operator<<(v184);
    CoinMessageHandler::operator<<(v185, 0, v150);
    v144 = *((_DWORD *)this + 26);
  }
LABEL_158:
  maximumAbsElement(v3, v144);
  if ( v150 < 1.0e-12 )
  {
    v150 = 1.0e-12;
    *((_QWORD *)this + 108) = 0x3D719799812DEA11LL;
  }
  else
  {
    *((double *)this + 108) = v150;
  }
  v155 = *((double *)this + 135);
  if ( v155 > v150 )
  {
    v156 = v155 * 0.0001;
    if ( v156 > v150 )
    {
      *((double *)this + 108) = v156;
      v150 = v156;
    }
  }
  v157 = *((double *)this + 121);
  v158 = *((double *)this + 4);
  if ( v157 > v158 || (v159 = *((double *)this + 123), v159 > v219 / *((double *)this + 125)) )
  {
    v179 = (CoinMessageHandler *)CoinMessageHandler::message(
                                   *((CoinMessageHandler **)this + 43),
                                   78,
                                   (ClpPredictorCorrector *)((char *)this + 416));
    v180 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v179);
    v181 = *((double *)this + 123);
    v182 = CoinMessageHandler::operator<<(v180);
    CoinMessageHandler::operator<<(v182, 0, v181);
    v157 = *((double *)this + 121);
    v159 = *((double *)this + 123);
    v158 = *((double *)this + 4);
    v150 = *((double *)this + 108);
  }
  v160 = *((double *)this + 109);
  v161 = *((double *)this + 110);
  if ( v160 > v161 )
  {
    *((double *)this + 110) = v160;
    v161 = v160;
  }
  v162 = 0;
  if ( *((double *)this + 122) <= v158 )
    v162 = v157 / (v161 + 10.0) <= v158;
  v163 = *((double *)this + 112);
  v164 = *((double *)this + 111);
  v165 = v163 - v164;
  if ( v163 - v164 < 0.0 )
    v165 = -v165;
  if ( v164 < 0.0 )
    v164 = -v164;
  if ( v163 < 0.0 )
    v163 = -v163;
  v166 = fmin(v163, v164);
  if ( *((int *)this + 77) > 100
    && v165 / (v166 + 1.0e-50) < 0.000000001
    && (v166 + 1.0e-50) * 0.0000001 > *((double *)this + 134) )
  {
    v219 = 100.0 * v219;
  }
  if ( v159 <= v150 * v219 )
  {
    if ( v162 )
    {
      v186 = *((_BYTE *)this + 1309);
      if ( *((_BYTE *)this + 1308) )
      {
        v162 = *((_BYTE *)this + 1308);
        if ( v186 )
          goto LABEL_213;
        goto LABEL_212;
      }
      *((_BYTE *)this + 1308) = 1;
      if ( v186 )
        goto LABEL_185;
LABEL_211:
      v161 = *((double *)this + 110);
LABEL_212:
      *((_BYTE *)this + 1309) = v162;
      goto LABEL_213;
    }
    v212 = (CoinMessageHandler *)CoinMessageHandler::message(
                                   *((CoinMessageHandler **)this + 43),
                                   79,
                                   (ClpPredictorCorrector *)((char *)this + 416));
    v213 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v212);
    v214 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v213);
    v170 = *((double *)this + 123) / *((double *)this + 108);
    v215 = CoinMessageHandler::operator<<(v214);
    CoinMessageHandler::operator<<(v215, 0, v170);
    v162 = *((_BYTE *)this + 1308);
    if ( !v162 )
    {
      v162 = 1;
      if ( *((_BYTE *)this + 1309) )
        goto LABEL_185;
      goto LABEL_211;
    }
  }
  else
  {
    v167 = (CoinMessageHandler *)CoinMessageHandler::message(
                                   *((CoinMessageHandler **)this + 43),
                                   79,
                                   (ClpPredictorCorrector *)((char *)this + 416));
    v168 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v167);
    v169 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v168);
    v170 = *((double *)this + 123) / *((double *)this + 108);
    v171 = CoinMessageHandler::operator<<(v169);
    CoinMessageHandler::operator<<(v171, 0, v170);
    if ( !*((_BYTE *)this + 1308) )
    {
      v210 = *((_BYTE *)this + 1309);
      *((_BYTE *)this + 1308) = v162;
      v162 = 0;
      if ( v210 )
        goto LABEL_184;
      goto LABEL_211;
    }
    if ( v162 )
    {
      v162 = *((_BYTE *)this + 1309);
      if ( v162 )
        goto LABEL_184;
      goto LABEL_211;
    }
  }
  *((_BYTE *)this + 1308) = 0;
  if ( !v56 )
  {
    v209 = CoinMessageHandler::message(
             *((CoinMessageHandler **)this + 43),
             59,
             (ClpPredictorCorrector *)((char *)this + 416));
    CoinMessageHandler::operator<<(v209, 0, v170);
  }
  if ( !*((_BYTE *)this + 1309) )
    goto LABEL_211;
  if ( !v162 )
  {
LABEL_184:
    v172 = CoinMessageHandler::message(
             *((CoinMessageHandler **)this + 43),
             59,
             (ClpPredictorCorrector *)((char *)this + 416));
    CoinMessageHandler::operator<<(v172, 0, v170);
    *((_BYTE *)this + 1309) = 0;
  }
LABEL_185:
  v161 = *((double *)this + 110);
LABEL_213:
  if ( v161 > 1.0e40 || *((double *)this + 108) > 1.0e40 )
  {
    std::__ostream_insert<char,std::char_traits<char>>();
    std::endl<char,std::char_traits<char>>();
    abort();
  }
  v187 = (CoinMessageHandler *)CoinMessageHandler::message(
                                 *((CoinMessageHandler **)this + 43),
                                 80,
                                 (ClpPredictorCorrector *)((char *)this + 416));
  v188 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v187);
  v189 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v188);
  v190 = *((double *)this + 107);
  v191 = CoinMessageHandler::operator<<(v189);
  CoinMessageHandler::operator<<(v191, 0, v190);
  ++*((_DWORD *)this + 77);
  return v56;
}

