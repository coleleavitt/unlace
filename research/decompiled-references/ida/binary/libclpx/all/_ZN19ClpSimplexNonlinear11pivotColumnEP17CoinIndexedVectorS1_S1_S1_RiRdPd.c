__int64 __fastcall ClpSimplexNonlinear::pivotColumn(
        ClpSimplexNonlinear *this,
        CoinIndexedVector *a2,
        CoinIndexedVector *a3,
        CoinIndexedVector *a4,
        double **a5,
        int *a6,
        double *a7,
        double *a8)
{
  ClpPrimalColumnPivot *v9; // rdi
  void (__fastcall *v10)(ClpPrimalColumnPivot *, char); // rax
  int *v11; // rax
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rax
  int v15; // eax
  int v16; // eax
  int v17; // ebx
  __int64 v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rax
  bool v22; // cl
  char v23; // r12
  unsigned __int64 v24; // rdx
  double *v25; // rbx
  double *v26; // r13
  double *v27; // r14
  bool v28; // cf
  char v29; // bl
  bool v30; // dl
  int v31; // ebp
  __int64 v32; // rdi
  __int64 v33; // rdx
  int v34; // r8d
  int v35; // eax
  double *v36; // r12
  double v37; // xmm7_8
  __int64 v38; // rcx
  unsigned __int64 v39; // r8
  double v40; // xmm5_8
  int v41; // eax
  int v42; // r10d
  __m128d v43; // xmm1
  __int64 v44; // rax
  double v45; // xmm0_8
  __int64 v46; // rdx
  __int64 v47; // rax
  int v49; // esi
  int v50; // eax
  __int64 v51; // rdx
  __int128 v52; // xmm2
  int *v53; // rax
  double *v54; // rcx
  double *v55; // rax
  __int64 v56; // xmm0_8
  double *v57; // rax
  double *v58; // kr00_8
  double *v59; // rax
  double v60; // xmm0_8
  double *v61; // kr08_8
  double v62; // xmm0_8
  int v63; // r10d
  unsigned int v64; // eax
  bool v65; // al
  int v66; // eax
  int v67; // edi
  unsigned int v68; // r8d
  char v69; // al
  unsigned __int8 v70; // al
  bool v71; // al
  _BYTE *v72; // rdi
  void (__fastcall *v73)(ClpPrimalColumnPivot *, char); // rax
  unsigned int v74; // r14d
  char v76; // dl
  __int64 v77; // rdx
  double v78; // xmm6_8
  double v79; // xmm4_8
  int v80; // r12d
  __int64 v81; // rax
  double v82; // xmm11_8
  double v83; // xmm8_8
  double v84; // xmm0_8
  double v85; // xmm2_8
  double v86; // xmm0_8
  __int64 v87; // rdi
  double v88; // xmm0_8
  double v89; // xmm1_8
  double v90; // xmm4_8
  double v91; // xmm0_8
  __int64 v92; // r12
  double v93; // xmm0_8
  int v94; // esi
  double *v95; // rax
  double v96; // xmm0_8
  _BYTE *v97; // rdi
  unsigned __int8 v98; // cl
  int v99; // eax
  int v100; // esi
  double v101; // xmm0_8
  double *v102; // rbx
  __int64 v103; // rax
  __m128d v104; // xmm4
  int v105; // eax
  __int64 v106; // rsi
  int v107; // eax
  double *v108; // rdi
  __int64 v109; // rcx
  double *v110; // rsi
  int v111; // r13d
  int v112; // esi
  bool v113; // zf
  int v114; // eax
  _DWORD *v115; // rcx
  __int64 v116; // rdx
  __int64 v117; // rax
  __int64 v118; // rdx
  int v119; // esi
  __int64 v120; // rax
  __int64 v121; // rdx
  int v122; // eax
  double v123; // xmm10_8
  double v124; // xmm0_8
  double v125; // xmm8_8
  int v126; // ebp
  double v127; // xmm4_8
  __int64 v128; // rbx
  int v129; // r12d
  double v130; // xmm7_8
  double v131; // xmm9_8
  double v132; // xmm11_8
  double v133; // xmm6_8
  int v134; // edi
  __int64 v135; // r11
  __int64 v136; // r9
  int v137; // r8d
  __int64 v138; // r10
  __int64 v139; // rax
  unsigned __int64 v140; // xmm13_8
  double v141; // xmm1_8
  double v142; // xmm1_8
  int v143; // esi
  char v144; // dl
  unsigned __int8 v145; // dl
  double v146; // xmm0_8
  double v147; // xmm1_8
  __int64 v148; // rax
  int v149; // eax
  int v150; // eax
  __int64 v151; // rax
  int v152; // edx
  double v153; // xmm1_8
  __int64 v154; // rcx
  unsigned __int64 v155; // rdx
  double v156; // xmm0_8
  int v157; // eax
  int v158; // esi
  double v159; // xmm4_8
  const char *v160; // rsi
  int v161; // eax
  double v162; // xmm2_8
  __int64 v163; // rcx
  __int64 v164; // rsi
  __int64 v165; // rax
  __int64 v166; // rcx
  double v167; // xmm3_8
  unsigned __int8 v168; // dl
  int v169; // eax
  __int64 v170; // rbx
  __m128d v171; // rt1
  double v172; // xmm6_8
  double v173; // xmm6_8
  __int64 v174; // rcx
  __int64 v175; // rax
  double v176; // xmm4_8
  __int64 v177; // rcx
  double v178; // xmm1_8
  double v179; // xmm0_8
  __int64 v180; // rdx
  double v181; // xmm1_8
  __int64 v182; // rax
  __int64 v183; // rdx
  double v184; // xmm0_8
  __int64 v185; // rdx
  __int64 v186; // xmm1_8
  __int64 v187; // rdx
  unsigned __int64 v188; // rax
  unsigned __int64 v189; // rax
  __int64 v190; // rdx
  __int64 v191; // rax
  int v192; // edx
  double v193; // xmm4_8
  double v194; // xmm0_8
  double v195; // xmm5_8
  int v196; // eax
  int v197; // esi
  int v198; // r14d
  __int64 v199; // rax
  double v200; // xmm0_8
  __int64 v201; // rax
  __int64 v202; // xmm0_8
  __int64 v203; // rax
  unsigned int v204; // eax
  __int64 v205; // rax
  __int64 v206; // rdx
  double v207; // xmm0_8
  __int64 v208; // rdx
  __int64 v209; // xmm1_8
  __int64 v210; // rdx
  __int64 v211; // rax
  __int64 v212; // rax
  __int64 v213; // xmm0_8
  __int64 v214; // rax
  int v215; // [rsp+10h] [rbp-218h]
  int v216; // [rsp+18h] [rbp-210h]
  int v218; // [rsp+2Ch] [rbp-1FCh]
  int v219; // [rsp+30h] [rbp-1F8h]
  int v220; // [rsp+38h] [rbp-1F0h]
  int v221; // [rsp+3Ch] [rbp-1ECh]
  double v222; // [rsp+40h] [rbp-1E8h]
  double v223; // [rsp+48h] [rbp-1E0h]
  double v224; // [rsp+50h] [rbp-1D8h]
  int v225; // [rsp+58h] [rbp-1D0h]
  double v227; // [rsp+68h] [rbp-1C0h]
  double v228; // [rsp+68h] [rbp-1C0h]
  double v229; // [rsp+68h] [rbp-1C0h]
  bool v230; // [rsp+70h] [rbp-1B8h]
  int v231; // [rsp+70h] [rbp-1B8h]
  double v232; // [rsp+70h] [rbp-1B8h]
  double v233; // [rsp+70h] [rbp-1B8h]
  int *v236; // [rsp+88h] [rbp-1A0h]
  double *v237; // [rsp+90h] [rbp-198h]
  double v238; // [rsp+98h] [rbp-190h]
  double v239; // [rsp+A0h] [rbp-188h]
  __int64 v240; // [rsp+B0h] [rbp-178h]
  int v241; // [rsp+B8h] [rbp-170h]
  int v242; // [rsp+C0h] [rbp-168h]
  unsigned int v243; // [rsp+C4h] [rbp-164h]
  double v244; // [rsp+E8h] [rbp-140h]
  __int64 v245; // [rsp+F0h] [rbp-138h]
  unsigned __int64 v246; // [rsp+F8h] [rbp-130h]
  double *v247; // [rsp+100h] [rbp-128h]
  double *v248; // [rsp+108h] [rbp-120h]
  double *v249; // [rsp+110h] [rbp-118h]
  char *v250; // [rsp+118h] [rbp-110h]
  unsigned int v251; // [rsp+120h] [rbp-108h]
  unsigned int v252; // [rsp+124h] [rbp-104h]
  double *v253; // [rsp+128h] [rbp-100h]
  unsigned int v254; // [rsp+130h] [rbp-F8h]
  unsigned int v255; // [rsp+134h] [rbp-F4h]
  int v256; // [rsp+138h] [rbp-F0h]
  int v257; // [rsp+13Ch] [rbp-ECh]
  double *v258; // [rsp+140h] [rbp-E8h]
  bool v259; // [rsp+148h] [rbp-E0h]
  bool v260; // [rsp+149h] [rbp-DFh]
  bool v261; // [rsp+14Ah] [rbp-DEh]
  bool v262; // [rsp+14Bh] [rbp-DDh]
  int v263; // [rsp+14Ch] [rbp-DCh]
  double *v264; // [rsp+150h] [rbp-D8h]
  __int64 v265; // [rsp+158h] [rbp-D0h]
  double v267; // [rsp+168h] [rbp-C0h]
  int v268; // [rsp+17Ch] [rbp-ACh] BYREF
  double v269; // [rsp+180h] [rbp-A8h] BYREF
  double v270; // [rsp+188h] [rbp-A0h] BYREF
  double v271; // [rsp+190h] [rbp-98h] BYREF
  double v272; // [rsp+198h] [rbp-90h] BYREF
  double v273; // [rsp+1A0h] [rbp-88h] BYREF
  double v274; // [rsp+1A8h] [rbp-80h] BYREF
  __int128 v275; // [rsp+1B0h] [rbp-78h] BYREF
  unsigned __int64 v276; // [rsp+1C0h] [rbp-68h]
  __int128 v277; // [rsp+1D0h] [rbp-58h] BYREF
  __int64 v278; // [rsp+1E0h] [rbp-48h]
  double *v279; // [rsp+238h] [rbp+10h]

  v9 = *((ClpPrimalColumnPivot **)this + 156);
  v10 = *(void (__fastcall **)(ClpPrimalColumnPivot *, char))(*(_QWORD *)v9 + 48LL);
  if ( v10 == ClpPrimalColumnPivot::setLooksOptimal )
  {
    *((_BYTE *)v9 + 20) = 0;
    v11 = a6;
  }
  else
  {
    v10(v9, 0);
    v11 = a6;
  }
  v12 = *v11;
  v215 = v12;
  if ( v12 && v12 <= 9 )
  {
    v13 = *((_QWORD *)this + 158);
    v14 = *(_QWORD *)(v13 + 8);
    if ( v14 )
      v15 = *(_DWORD *)(v14 + 68);
    else
      v15 = *(_DWORD *)(*(_QWORD *)(v13 + 16) + 52LL);
    v244 = 0.00001;
    if ( !v15 )
      v244 = 0.000001;
  }
  else
  {
    v244 = 1.0e-10;
  }
  v16 = *((_DWORD *)this + 27);
  v17 = *((_DWORD *)this + 26);
  v18 = *((_QWORD *)this + 20);
  v269 = 0.0;
  v270 = 0.0;
  v221 = v16 + v17;
  v19 = *((_QWORD *)this + 150);
  *((_DWORD *)this + 288) = -1;
  (*(void (__fastcall **)(__int64, ClpSimplexNonlinear *, __int64, __int64, double))(*(_QWORD *)v18 + 16LL))(
    v18,
    this,
    v19,
    v19,
    0.0);
  v242 = v221 >> 3;
  v237 = &a8[v221];
  v267 = v271;
  v243 = v221 % 8;
  v20 = 8LL * v221 + 16;
  v247 = a8 + 2;
  v249 = (double *)((char *)a8 + v20);
  v21 = v221;
  v248 = &a8[v21];
  v22 = v20 <= 0 || a8 + 2 <= &a8[v21];
  v23 = 0;
  LODWORD(v20) = ((unsigned __int64)a8 >> 3) & 1;
  v260 = v22;
  v251 = v20 + 1;
  v257 = v20;
  v256 = v221 - v20;
  v255 = (unsigned int)(v221 - v20) >> 1;
  v24 = ((unsigned __int64)a8 >> 3) & 1;
  v264 = &a8[v24 + v21];
  v252 = v221 - 1;
  v246 = v24 * 8;
  v240 = (unsigned int)(v221 - 1) + 1LL;
  v253 = &a8[v24];
  v265 = 8 * v240;
  v254 = v256 & 0xFFFFFFFE;
  v263 = (v256 & 0xFFFFFFFE) + (((unsigned __int64)a8 >> 3) & 1);
  v227 = 0.0;
  v218 = 0;
  v222 = 0.0;
  v220 = 0;
  v245 = ((unsigned int)((v221 >> 3) - 1) + 1LL) << 6;
  v258 = (double *)((char *)a8 + v245);
  v25 = a8;
  v223 = 1.0e30;
  v241 = -1;
  v216 = -1;
  while ( 2 )
  {
    v26 = v25;
    v268 = 0;
    v219 = -1;
    v27 = *((double **)a2 + 1);
    v236 = *(int **)a2;
    v259 = v221 == 0 || v25 == v27;
    v28 = v25 < v27 + 2;
    v29 = v23;
    v30 = !v28 || v27 >= v247;
    v261 = (v27 >= v249 || v248 >= v27 + 2) && v260 && v30 && (unsigned int)v221 > 9;
    v250 = (char *)v27 + v246;
    v31 = 0;
    v262 = v30 && (unsigned int)v221 > 0x18;
    while ( 1 )
    {
      while ( 1 )
      {
LABEL_12:
        v32 = *((_QWORD *)this + 20);
        v33 = *((_QWORD *)this + 147);
        *(_QWORD *)&v275 = 0x7FEFFFFFFFFFFFFFLL;
        (*(void (__fastcall **)(__int64, ClpSimplexNonlinear *, __int64, _QWORD))(*(_QWORD *)v32 + 8LL))(
          v32,
          this,
          v33,
          0);
        CoinIndexedVector::clear(a2);
        v230 = v218 > 100 || v220 + v31 > 3000;
        if ( v230 )
        {
          v190 = *((_QWORD *)this + 158);
          v102 = v26;
          v191 = *(_QWORD *)(v190 + 8);
          if ( v191 )
            v192 = *(_DWORD *)(v191 + 68);
          else
            v192 = *(_DWORD *)(*(_QWORD *)(v190 + 16) + 52LL);
          v112 = v220;
          v99 = *((_DWORD *)this + 288);
          v101 = *((double *)this + 100);
          v111 = v192 == 0 ? 1 : 3;
          if ( v220 > 999 )
            goto LABEL_194;
          goto LABEL_290;
        }
        if ( !v31 )
        {
          ++v218;
          v268 = 0;
        }
        if ( v215 || *a6 <= 9 )
        {
          if ( v215 == -1 || (v34 = v215, v218 > 9) )
          {
            v34 = 0;
            v215 = 0;
          }
        }
        else
        {
          v34 = 100;
          if ( v218 >= 10 )
            v34 = 0;
        }
        if ( v29 )
          v34 = 2;
        v35 = v219;
        if ( !v31 )
          v35 = v34;
        v219 = v35;
        ClpSimplexNonlinear::directionVector(this, a2, (CoinIndexedVector *)a5, a3, v34, &v269, &v270, &v268);
        v36 = a5[1];
        multiplyAdd(
          (const double *)(*((_QWORD *)this + 150) + 8LL * *((int *)this + 27)),
          *((_DWORD *)this + 26),
          -1.0,
          v36,
          0.0);
        v37 = 1.0;
        (*(void (__fastcall **)(_QWORD, _QWORD, double *, _QWORD, _QWORD, double))(**((_QWORD **)this + 24) + 368LL))(
          *((_QWORD *)this + 24),
          *((_QWORD *)this + 150),
          v36,
          *((_QWORD *)this + 28),
          *((_QWORD *)this + 29),
          1.0);
        v41 = *((_DWORD *)this + 26);
        v42 = v220 + v31;
        if ( v41 <= 0 )
        {
          v43.m128d_f64[0] = 0.0;
        }
        else
        {
          v43.m128d_f64[0] = 0.0;
          v44 = (__int64)&v36[(unsigned int)(v41 - 1) + 1];
          do
          {
            v45 = *v36;
            *v36++ = 0.0;
            v43.m128d_f64[0] = fmax(fabs(v45), v43.m128d_f64[0]);
          }
          while ( (double *)v44 != v36 );
        }
        if ( *a7 < 0.0 )
        {
          *a7 = v43.m128d_f64[0];
        }
        else if ( v43.m128d_f64[0] > fmax(0.00000001, *a7 * 100.0) )
        {
          v46 = *((_QWORD *)this + 158);
          v47 = *(_QWORD *)(v46 + 8);
          if ( v47 ? *(_DWORD *)(v47 + 68) : *(_DWORD *)(*(_QWORD *)(v46 + 16) + 52LL) )
          {
            v74 = 3;
            CoinIndexedVector::clear(a2);
            *((_DWORD *)this + 292) = -1;
            *((_QWORD *)this + 100) = 0;
            return v74;
          }
        }
        v49 = *((_DWORD *)this + 288);
        v50 = v216;
        v51 = (unsigned int)v268;
        if ( v49 >= 0 )
          v50 = *((_DWORD *)this + 288);
        v216 = v50;
        if ( v268 <= 0 )
        {
          if ( !v268 )
          {
            if ( v215 > 9 )
            {
              *(_QWORD *)&v52 = 0;
              if ( !v31 )
                goto LABEL_242;
              goto LABEL_243;
            }
            v52 = 0;
            if ( !v31 )
            {
              v31 = 1;
LABEL_242:
              v222 = 9.999999999999999e-21;
              goto LABEL_42;
            }
LABEL_162:
            v43.m128d_f64[1] = *((double *)&v52 + 1);
            v43.m128d_f64[0] = *(double *)&v52 / v227;
            if ( v221 > 0 )
            {
              if ( v261 )
              {
                if ( v251 > v252 )
                {
                  v105 = 0;
                }
                else
                {
                  if ( v257 )
                  {
                    *v26 = *v26 * v43.m128d_f64[0] + *v27;
                    *v237 = *v27;
                  }
                  v39 = (unsigned __int64)v264;
                  v103 = 0;
                  LODWORD(v38) = 0;
                  v104 = _mm_unpacklo_pd(v43, v43);
                  do
                  {
                    v38 = (unsigned int)(v38 + 1);
                    *(__m128d *)&v253[v103] = _mm_add_pd(
                                                _mm_mul_pd(*(__m128d *)&v253[v103], v104),
                                                *(__m128d *)&v250[v103 * 8]);
                    *(_OWORD *)&v264[v103] = *(_OWORD *)&v250[v103 * 8];
                    v103 += 2;
                  }
                  while ( (unsigned int)v38 < v255 );
                  if ( v254 == v256 )
                    goto LABEL_173;
                  v105 = v263;
                }
                v106 = v105;
                v107 = v105 + 1;
                v108 = &v27[v106];
                v38 = (__int64)&v26[v106];
                *(double *)v38 = *(double *)v38 * v43.m128d_f64[0] + *v108;
                v237[v106] = *v108;
                if ( v107 < v221 )
                {
                  v109 = v107;
                  v110 = &v27[v109];
                  v38 = (__int64)&v26[v109];
                  v43.m128d_f64[0] = v43.m128d_f64[0] * *(double *)v38 + *v110;
                  *(double *)v38 = v43.m128d_f64[0];
                  v237[v107] = *v110;
                }
              }
              else
              {
                v38 = (__int64)v237;
                v188 = 0;
                do
                {
                  v26[v188 / 8] = v26[v188 / 8] * v43.m128d_f64[0] + v27[v188 / 8];
                  v237[v188 / 8] = v27[v188 / 8];
                  v188 += 8LL;
                }
                while ( v265 != v188 );
              }
            }
LABEL_173:
            v63 = 1;
            goto LABEL_174;
          }
          v52 = 0;
        }
        else
        {
          v52 = 0;
          v53 = v236;
          do
          {
            v38 = *v53++;
            *(double *)&v52 = *(double *)&v52 + v27[v38] * v27[v38];
          }
          while ( &v236[v268 - 1 + 1] != v53 );
        }
        if ( v215 <= 9 )
        {
          if ( !v31 )
          {
            v42 = v220;
            v31 = 1;
            goto LABEL_40;
          }
          goto LABEL_162;
        }
        if ( v49 < 0 || v31 > 4 )
        {
          v31 = 1;
          v215 = 0;
          goto LABEL_40;
        }
        if ( !v31 )
          break;
LABEL_243:
        if ( v221 > 0 )
        {
          if ( v262 )
          {
            if ( v251 > v252 )
            {
              v149 = 0;
            }
            else
            {
              if ( v257 )
                *v26 = *v27;
              v148 = 0;
              v39 = v255;
              LODWORD(v38) = 0;
              do
              {
                v38 = (unsigned int)(v38 + 1);
                *(_OWORD *)&v253[v148] = *(_OWORD *)&v250[v148 * 8];
                v148 += 2;
              }
              while ( (unsigned int)v38 < v255 );
              if ( v254 == v256 )
                goto LABEL_254;
              v149 = v263;
            }
            v38 = v149;
            v150 = v149 + 1;
            v26[v38] = v27[v38];
            if ( v150 < v221 )
              v26[v150] = v27[v150];
          }
          else
          {
            v38 = 8 * v240;
            v189 = 0;
            do
            {
              v26[v189 / 8] = v27[v189 / 8];
              v189 += 8LL;
            }
            while ( v265 != v189 );
          }
        }
LABEL_254:
        v63 = 0;
LABEL_174:
        v62 = 0.000001 * v222;
        if ( 0.000001 * v222 > *(double *)&v52 )
        {
          v64 = *a6;
          if ( *a6 <= 9 )
            goto LABEL_91;
          goto LABEL_90;
        }
        if ( v31 <= 100 )
        {
          v65 = 0;
          goto LABEL_268;
        }
        v29 = 0;
        v62 = fmin(v222 * 0.1, 1.0e-12);
        if ( v62 <= *(double *)&v52 )
          goto LABEL_93;
        v29 = 1;
        v64 = *a6;
        if ( *a6 <= 9 )
          goto LABEL_93;
        if ( (_DWORD)v51 )
        {
LABEL_179:
          v227 = *(double *)&v52;
          v220 += v31;
          v215 = v64;
          v29 = 0;
          v31 = 0;
          goto LABEL_180;
        }
LABEL_91:
        if ( v31 <= 100 )
        {
          v65 = 1;
LABEL_268:
          v227 = *(double *)&v52;
          goto LABEL_97;
        }
        v29 = 1;
LABEL_93:
        if ( 0.01 * v269 > *(double *)&v52 && !v219 )
        {
          ClpSimplexPrimal::unflag(this);
          v220 += v31;
          v215 = 0;
          v31 = 0;
          v227 = *(double *)&v52;
          goto LABEL_180;
        }
        v62 = v222 * 0.99;
        LOBYTE(v38) = v31 > 1500;
        v65 = v31 > 1500 && *(double *)&v52 > v222 * 0.99;
        if ( v65 )
        {
          v37 = 1.2345e-20;
          v227 = 1.2345e-20;
        }
        else
        {
          v227 = *(double *)&v52;
          v65 = v29;
        }
LABEL_97:
        if ( (_DWORD)v51 )
          goto LABEL_98;
LABEL_72:
        v66 = *((_DWORD *)this + 27) + *((_DWORD *)this + 26);
        if ( v66 <= 0 )
          goto LABEL_184;
LABEL_73:
        v51 = 0;
        v67 = 0;
        v68 = 0;
        v38 = (unsigned int)(v66 - 1) + 1LL;
        *(_QWORD *)&v52 = 0x7FFFFFFFFFFFFFFFLL;
        v43.m128d_f64[0] = -0.0;
        do
        {
          while ( 1 )
          {
            v69 = *(_BYTE *)(*((_QWORD *)this + 33) + v51);
            if ( (v69 & 0x40) != 0 )
              goto LABEL_78;
            v70 = v69 & 7;
            if ( v70 == 2 )
              break;
            if ( v70 <= 2u )
            {
              if ( v70 )
                goto LABEL_78;
LABEL_77:
              v62 = fabs(*(double *)(*((_QWORD *)this + 147) + 8 * v51));
              v68 += v62 > *((double *)this + 109);
              goto LABEL_78;
            }
            if ( v70 == 3 )
            {
              v62 = -*((double *)this + 109);
              if ( v62 > *(double *)(*((_QWORD *)this + 147) + 8 * v51) )
                ++v67;
              goto LABEL_78;
            }
            if ( v70 == 4 )
              goto LABEL_77;
LABEL_78:
            if ( ++v51 == v38 )
              goto LABEL_82;
          }
          v62 = *(double *)(*((_QWORD *)this + 147) + 8 * v51++);
          v67 += v62 > *((double *)this + 109);
        }
        while ( v51 != v38 );
LABEL_82:
        v39 = v67 | v68;
        v71 = (_DWORD)v39 == 0;
LABEL_83:
        if ( v216 < 0 && v71 )
        {
          v157 = ClpSimplexPrimal::unflag(this);
          v51 = (unsigned int)*a6;
          if ( (int)v51 > 9 )
          {
            v51 = (unsigned int)(v51 - 1);
            v38 = 0;
            if ( (_DWORD)v51 == 9 )
              v51 = 0;
            *a6 = v51;
          }
          if ( !v157 )
            goto LABEL_86;
        }
        v43.m128d_f64[0] = 0.00000001;
        v62 = v269 + v270;
        if ( v269 + v270 < 0.00000001 )
        {
LABEL_86:
          v72 = *((_BYTE **)this + 156);
          v73 = *(void (__fastcall **)(ClpPrimalColumnPivot *, char))(*(_QWORD *)v72 + 48LL);
          if ( v73 == ClpPrimalColumnPivot::setLooksOptimal )
          {
            v72[20] = 1;
            return 0;
          }
          else
          {
            v74 = 0;
            ((void (__fastcall *)(_BYTE *, __int64, __int64, __int64, unsigned __int64, double, double, double))v73)(
              v72,
              1,
              v51,
              v38,
              v39,
              v62,
              v43.m128d_f64[0],
              *(double *)&v52);
          }
          return v74;
        }
        v220 += v31;
        v29 = 0;
        v215 = -1;
        v216 = -1;
        v31 = 0;
LABEL_180:
        if ( v29 )
        {
LABEL_155:
          v102 = v26;
          v100 = *((_DWORD *)this + 288);
          goto LABEL_192;
        }
      }
      v42 = v220;
LABEL_40:
      v220 = v42;
      v222 = *(double *)&v52 <= 9.999999999999999e-21 ? 9.999999999999999e-21 : *(double *)&v52;
LABEL_42:
      if ( !v259 )
      {
        if ( v242 <= 0 )
        {
          v57 = v26;
          v38 = (__int64)v27;
        }
        else
        {
          v54 = v26;
          v55 = v27;
          do
          {
            v56 = *(_QWORD *)v55;
            v55 += 8;
            v54 += 8;
            *((_QWORD *)v54 - 8) = v56;
            *(v54 - 7) = *(v55 - 7);
            *(v54 - 6) = *(v55 - 6);
            *(v54 - 5) = *(v55 - 5);
            *(v54 - 4) = *(v55 - 4);
            *(v54 - 3) = *(v55 - 3);
            *(v54 - 2) = *(v55 - 2);
            *(v54 - 1) = *(v55 - 1);
          }
          while ( v55 != (double *)((char *)v27 + v245) );
          v57 = v258;
          v38 = (__int64)v27 + v245;
        }
        v58 = (double *)v39;
        v39 = v243;
        switch ( v243 )
        {
          case 1u:
            goto LABEL_54;
          case 2u:
            goto LABEL_53;
          case 3u:
            goto LABEL_52;
          case 4u:
            goto LABEL_51;
          case 5u:
            goto LABEL_50;
          case 6u:
            goto LABEL_49;
          case 7u:
            v57[6] = *(double *)(v38 + 48);
LABEL_49:
            v57[5] = *(double *)(v38 + 40);
LABEL_50:
            v57[4] = *(double *)(v38 + 32);
LABEL_51:
            v57[3] = *(double *)(v38 + 24);
LABEL_52:
            v57[2] = *(double *)(v38 + 16);
LABEL_53:
            v57[1] = *(double *)(v38 + 8);
LABEL_54:
            *v57 = *(double *)v38;
            break;
          default:
            v39 = (unsigned __int64)v58;
            break;
        }
      }
      if ( v221 != 0 && v237 != v27 )
      {
        v59 = v237;
        v38 = (__int64)v27;
        if ( v242 > 0 )
        {
          do
          {
            v60 = *(double *)v38;
            v59 += 8;
            v38 += 64;
            *(v59 - 8) = v60;
            *(v59 - 7) = *(double *)(v38 - 56);
            *(v59 - 6) = *(double *)(v38 - 48);
            *(v59 - 5) = *(double *)(v38 - 40);
            *(v59 - 4) = *(double *)(v38 - 32);
            *(v59 - 3) = *(double *)(v38 - 24);
            *(v59 - 2) = *(double *)(v38 - 16);
            *(v59 - 1) = *(double *)(v38 - 8);
          }
          while ( v59 != (double *)((char *)v237 + v245) );
          v59 = (double *)((char *)v237 + v245);
          v38 = (__int64)v27 + v245;
        }
        v61 = (double *)v39;
        v39 = v243;
        switch ( v243 )
        {
          case 1u:
            goto LABEL_66;
          case 2u:
            goto LABEL_65;
          case 3u:
            goto LABEL_64;
          case 4u:
            goto LABEL_63;
          case 5u:
            goto LABEL_62;
          case 6u:
            goto LABEL_61;
          case 7u:
            v59[6] = *(double *)(v38 + 48);
LABEL_61:
            v59[5] = *(double *)(v38 + 40);
LABEL_62:
            v59[4] = *(double *)(v38 + 32);
LABEL_63:
            v59[3] = *(double *)(v38 + 24);
LABEL_64:
            v59[2] = *(double *)(v38 + 16);
LABEL_65:
            v59[1] = *(double *)(v38 + 8);
LABEL_66:
            *v59 = *(double *)v38;
            break;
          default:
            v39 = (unsigned __int64)v61;
            break;
        }
      }
      if ( (_DWORD)v51 == 1 && v49 >= 0 )
      {
        v228 = (*(double (__fastcall **)(_QWORD, ClpSimplexNonlinear *, _QWORD, double *, double *, double *, double, double *))(**((_QWORD **)this + 20) + 16LL))(
                 *((_QWORD *)this + 20),
                 this,
                 *((_QWORD *)this + 150),
                 v27,
                 &v271,
                 &v272,
                 1.0e30,
                 &v273);
        CoinIndexedVector::clear(a3);
        ClpSimplex::unpackPacked(this, a3);
        ClpFactorization::updateColumnFT(*((ClpFactorization **)this + 158), (CoinIndexedVector *)a5, a3);
        *((_QWORD *)this + 100) = 0;
        v169 = *((_DWORD *)a3 + 4);
        v170 = *((int *)this + 288);
        v171.m128d_f64[0] = *(double *)(*((_QWORD *)this + 147) + 8 * v170);
        v172 = _mm_cmplt_sd((__m128d)0LL, v171).m128d_f64[0];
        *(_QWORD *)&v173 = ~*(_QWORD *)&v172 & 0x3FF0000000000000LL | *(_QWORD *)&v172 & 0xBFF0000000000000LL;
        if ( v169 > 0 )
        {
          v174 = (unsigned int)(v169 - 1);
          v175 = 0;
          v176 = 1.797693134862316e308;
          v177 = v174 + 1;
          while ( 1 )
          {
            v179 = *(double *)(*((_QWORD *)a3 + 1) + 8 * v175) * v173;
            v180 = *(int *)(*((_QWORD *)this + 157) + 4LL * *(int *)(*(_QWORD *)a3 + 4 * v175));
            if ( v179 < -0.00001 )
            {
              v178 = *(double *)(*((_QWORD *)this + 126) + 8 * v180) - *(double *)(*((_QWORD *)this + 150) + 8 * v180);
              if ( -v176 * v179 > v178 )
                v176 = fmax(
                         0.0,
                         -(*(double *)(*((_QWORD *)this + 126) + 8 * v180)
                         - *(double *)(*((_QWORD *)this + 150) + 8 * v180))
                       / v179);
              if ( v179 * -1.0e-12 > v178 )
                goto LABEL_327;
            }
            else if ( v179 > 0.00001 )
            {
              v181 = *(double *)(*((_QWORD *)this + 150) + 8 * v180) - *(double *)(*((_QWORD *)this + 123) + 8 * v180);
              if ( v179 * v176 > v181 )
                v176 = fmax(0.0, v181 / v179);
              if ( v179 * 1.0e-12 > v181 )
                goto LABEL_327;
            }
            if ( v177 == ++v175 )
              goto LABEL_344;
          }
        }
        v176 = 1.797693134862316e308;
LABEL_344:
        v193 = v176 / fabs(v27[v170]);
        if ( v228 > v193 )
          goto LABEL_327;
        v37 = v272;
        v229 = v271;
        v194 = v193;
        v238 = v272;
        v239 = v193;
        (*(void (__fastcall **)(_QWORD, ClpSimplexNonlinear *, _QWORD, double *, double *, double *, double, __int128 *))(**((_QWORD **)this + 20) + 16LL))(
          *((_QWORD *)this + 20),
          this,
          *((_QWORD *)this + 150),
          v27,
          &v271,
          &v272,
          v193,
          &v275);
        v43.m128d_f64[0] = fmax(*(double *)&v275, v272);
        v195 = v271 - v43.m128d_f64[0];
        *(double *)&v275 = v43.m128d_f64[0];
        if ( v271 - v43.m128d_f64[0] > 0.00000001 )
        {
          v37 = 0.5 * (v229 - v238);
          if ( v195 > v37 )
          {
            if ( v195 <= v229 - v238 )
            {
LABEL_327:
              CoinIndexedVector::clear(a3);
            }
            else
            {
              printf("****** th %g simple %g\n", v194, v43.m128d_f64[0]);
              (*(void (__fastcall **)(_QWORD, ClpSimplexNonlinear *, _QWORD, double *, double *, double *, double, double, double, double, __int128 *))(**((_QWORD **)this + 20) + 16LL))(
                *((_QWORD *)this + 20),
                this,
                *((_QWORD *)this + 150),
                v27,
                &v271,
                &v272,
                1.0e30,
                v43.m128d_f64[0],
                *(double *)&v52,
                0.0,
                &v275);
              (*(void (__fastcall **)(_QWORD, ClpSimplexNonlinear *, _QWORD, double *, double *, double *, double, __int128 *))(**((_QWORD **)this + 20) + 16LL))(
                *((_QWORD *)this + 20),
                this,
                *((_QWORD *)this + 150),
                v27,
                &v271,
                &v272,
                v239,
                &v275);
              CoinIndexedVector::clear(a3);
            }
            v182 = *((int *)this + 288);
            v183 = *((_QWORD *)this + 147);
            *((_QWORD *)this + 102) = *(_QWORD *)(*((_QWORD *)this + 150) + 8 * v182);
            v184 = *(double *)(v183 + 8 * v182);
            v185 = *((_QWORD *)this + 123);
            *((double *)this + 104) = v184;
            v186 = *(_QWORD *)(v185 + 8 * v182);
            v187 = *((_QWORD *)this + 126);
            *((_QWORD *)this + 101) = v186;
            *((_QWORD *)this + 103) = *(_QWORD *)(v187 + 8 * v182);
            v74 = 0;
            *((_DWORD *)this + 289) = 2 * (v184 <= 0.0) - 1;
            CoinIndexedVector::clear(a2);
            *((_DWORD *)this + 292) = -1;
            *((_QWORD *)this + 100) = 0;
            return v74;
          }
        }
        CoinIndexedVector::clear(a3);
        v51 = (unsigned int)v268;
      }
      v62 = v222 * 0.000001;
      if ( v222 * 0.000001 > *(double *)&v52 )
      {
        v63 = v31;
        v31 = 0;
        v64 = *a6;
        if ( *a6 <= 9 )
        {
          v31 = 0;
          v227 = *(double *)&v52;
          v65 = 1;
          if ( !(_DWORD)v51 )
            goto LABEL_72;
LABEL_98:
          ++v31;
          v76 = 1;
          if ( v31 <= 2000 )
            v76 = v65;
          v230 = v76;
          goto LABEL_101;
        }
LABEL_90:
        if ( (_DWORD)v51 )
          goto LABEL_179;
        goto LABEL_91;
      }
      if ( !(_DWORD)v51 )
      {
        v66 = *((_DWORD *)this + 27) + *((_DWORD *)this + 26);
        v31 = 0;
        v227 = *(double *)&v52;
        if ( v66 <= 0 )
        {
LABEL_184:
          v71 = 1;
          goto LABEL_83;
        }
        goto LABEL_73;
      }
      v63 = v31;
      v227 = *(double *)&v52;
      v31 = 1;
LABEL_101:
      v77 = *((_QWORD *)this + 150);
      *((_QWORD *)this + 100) = 0x46293E5939A08CEALL;
      v78 = 0.0001 * *((double *)this + 110);
      if ( v221 > 0 )
      {
        v79 = 1.0e30;
        v80 = -1;
        v81 = 0;
        v241 = -1;
        v37 = 0.0000001;
        v82 = 1.0e30;
        v83 = -v78;
        while ( 1 )
        {
          v84 = v26[v81];
          *(_QWORD *)&v52 = *(_QWORD *)(v77 + 8 * v81);
          v43.m128d_f64[0] = fabs(v84);
          if ( (*(_BYTE *)(*((_QWORD *)this + 33) + v81) & 7) != 1 )
          {
            if ( v43.m128d_f64[0] >= v244 )
            {
              v40 = v79 * v84;
              if ( v84 < 0.0 )
              {
                *(double *)&v52 = *(double *)&v52 - *(double *)(*((_QWORD *)this + 123) + 8 * v81);
                v40 = v40 + *(double *)&v52;
                if ( v40 < 0.0 )
                {
                  v80 = v81;
                  v79 = *(double *)&v52 / -v84;
                  if ( v79 < 0.0 )
                    v79 = 0.0;
                }
              }
              else
              {
                v43.m128d_f64[0] = *(double *)(*((_QWORD *)this + 126) + 8 * v81) - *(double *)&v52;
                *(double *)&v52 = v43.m128d_f64[0] - v40;
                if ( v43.m128d_f64[0] - v40 < 0.0 )
                {
                  v80 = v81;
                  v79 = v43.m128d_f64[0] / v84;
                  if ( v43.m128d_f64[0] / v84 < 0.0 )
                    v79 = 0.0;
                }
              }
            }
            goto LABEL_106;
          }
          if ( v43.m128d_f64[0] < 0.0000001 )
            goto LABEL_106;
          v40 = v84 * v82;
          if ( v84 < 0.0 )
          {
            *(double *)&v52 = *(double *)&v52 - *(double *)(*((_QWORD *)this + 123) + 8 * v81);
            v40 = v40 + *(double *)&v52;
            if ( v83 <= v40 )
              goto LABEL_106;
            v85 = *(double *)&v52 + v78;
            v84 = -v84;
LABEL_112:
            *(double *)&v52 = v85 / v84;
            v241 = v81;
            v82 = *(double *)&v52;
            if ( *(double *)&v52 >= 0.0 )
              goto LABEL_106;
            ++v81;
            v82 = 0.0;
            if ( v240 == v81 )
            {
LABEL_114:
              v223 = v82;
              v86 = fmin(v79, v82);
              goto LABEL_115;
            }
          }
          else
          {
            *(double *)&v52 = *(double *)(*((_QWORD *)this + 126) + 8 * v81) - *(double *)&v52;
            v43.m128d_f64[0] = *(double *)&v52 - v40;
            if ( v83 > *(double *)&v52 - v40 )
            {
              v85 = *(double *)&v52 + v78;
              goto LABEL_112;
            }
LABEL_106:
            if ( v240 == ++v81 )
              goto LABEL_114;
          }
        }
      }
      v79 = 1.0e30;
      v80 = -1;
      v223 = 1.0e30;
      v241 = -1;
      v86 = 1.0e30;
LABEL_115:
      v87 = *((_QWORD *)this + 20);
      *((double *)this + 100) = v86;
      v225 = v63;
      v224 = v79;
      v88 = (*(double (__fastcall **)(__int64, ClpSimplexNonlinear *, __int64, double *, double *, double *, double, double, double, double, double, double, double, double, double *))(*(_QWORD *)v87 + 16LL))(
              v87,
              this,
              v77,
              v26,
              &v271,
              &v272,
              v86,
              v43.m128d_f64[0],
              *(double *)&v52,
              0.0,
              v79,
              v40,
              v78,
              v37,
              &v273);
      v89 = fmin(v88, 9.999999999999999e28);
      v90 = v224;
      if ( v225 )
      {
        v151 = (***((__int64 (__fastcall ****)(_QWORD, ClpSimplexNonlinear *, double *, __int128 *, __int64, _QWORD, double, double, double, double, double))this
                  + 20))(
                 *((_QWORD *)this + 20),
                 this,
                 v26,
                 &v277,
                 1,
                 0,
                 v88,
                 v89,
                 *(double *)&v52,
                 0.0,
                 v224);
        v152 = *((_DWORD *)this + 27);
        v90 = v224;
        if ( v152 <= 0 )
          goto LABEL_341;
        v153 = 0.0;
        v154 = 8LL * (unsigned int)(v152 - 1) + 8;
        v155 = 0;
        do
        {
          v156 = *(double *)(v151 + v155) * v26[v155 / 8];
          v155 += 8LL;
          v153 = v153 + v156;
        }
        while ( v154 != v155 );
        if ( v153 <= 0.0 )
LABEL_341:
          v89 = 1.797693134862316e308;
        else
          v89 = v227 / v153;
      }
      v91 = *((double *)this + 100);
      if ( v91 <= v89 || v271 - 1.0e-12 > v273 && v89 + 1.0e-10 > v91 )
      {
        v89 = fmax(v89, 1.00000001 * v91 + 1.0e-12);
      }
      else
      {
        *((double *)this + 100) = v89;
        v91 = v89;
      }
      v29 = 1;
      if ( v223 != v91 )
      {
        v29 = v230;
        if ( *((int *)this + 288) >= 0 && v91 < 1.0e-10 )
          v29 = 1;
      }
      if ( *(int *)(*((_QWORD *)this + 43) + 104LL) > 3 && v89 != v91 )
      {
        v232 = v90;
        printf("%d pass obj %g,", v31, v271);
        v158 = *((_DWORD *)this + 288);
        v159 = v232;
        if ( v158 >= 0 )
        {
          printf(" Sin %d,", v158);
          v159 = v232;
        }
        v233 = v159;
        if ( v223 == *((double *)this + 100) )
          printf(" X(%d) basicTheta %g", v241, v223);
        else
          printf(" basicTheta %g", v223);
        if ( v233 == *((double *)this + 100) )
          printf(" X(%d) non-basicTheta %g", v80, v233);
        else
          printf(" non-basicTheta %g", v233);
        v160 = "X";
        if ( v89 != *((double *)this + 100) )
          v160 = "";
        printf(" %s objTheta %g", v160, v89);
        printf(" djNorm %g\n", v227);
        v91 = *((double *)this + 100);
        v90 = v233;
      }
      if ( v89 != v91 )
      {
        v220 += v31;
        v31 = 0;
      }
      if ( (v215 <= 9 || v216 == v80) && v90 == v91 && v223 > v91 && v91 < 0.00001 )
        ClpSimplex::setFlagged(this, v80);
      if ( v221 > 0 )
      {
        v92 = 0;
        do
        {
          while ( 1 )
          {
            v93 = v26[v92];
            v94 = v92;
            if ( v93 != 0.0 )
              break;
LABEL_132:
            if ( ++v92 == v240 )
              goto LABEL_136;
          }
          v95 = (double *)(*((_QWORD *)this + 150) + 8 * v92);
          v96 = v93 * *((double *)this + 100) + *v95;
          *v95 = v96;
          v97 = (_BYTE *)(v92 + *((_QWORD *)this + 33));
          v98 = *v97 & 7;
          if ( v98 != 4 )
          {
            if ( v98 < 4u || v98 == 5 )
              ClpNonLinearCost::setOne(*((ClpNonLinearCost **)this + 165), v92, v96);
            goto LABEL_132;
          }
          ++v92;
          *v97 = *v97 & 0xF8 | 5;
          ClpNonLinearCost::setOne(*((ClpNonLinearCost **)this + 165), v94, v96);
        }
        while ( v92 != v240 );
      }
LABEL_136:
      v99 = *((_DWORD *)this + 288);
      v100 = v99;
      if ( v89 >= 1.0e-10 )
        goto LABEL_140;
      v101 = *((double *)this + 100);
      if ( v101 != v89 )
        goto LABEL_140;
      if ( v99 >= 0 )
        break;
      if ( v220 > 10 )
      {
        v102 = v26;
        v111 = 1;
        goto LABEL_193;
      }
LABEL_154:
      if ( v29 )
        goto LABEL_155;
    }
    if ( v223 < 0.000000001 )
    {
      v220 += v31;
      *((_DWORD *)this + 288) = -1;
      v31 = 0;
      v215 = 0;
      goto LABEL_154;
    }
LABEL_140:
    if ( v99 < 0 )
      goto LABEL_154;
    if ( !v29 )
    {
      if ( v89 > 0.0001 && v215 <= 9 )
      {
        v220 += v31;
        *((_DWORD *)this + 288) = -1;
        v31 = 0;
        v215 = 0;
      }
      goto LABEL_12;
    }
    v102 = v26;
LABEL_192:
    v101 = *((double *)this + 100);
    v99 = v100;
    v111 = 1;
LABEL_193:
    v112 = v220;
    if ( v220 > 999 )
    {
LABEL_194:
      v111 = 2;
      goto LABEL_195;
    }
LABEL_290:
    if ( v112 <= 10 )
    {
LABEL_195:
      if ( v99 < 0 )
        goto LABEL_294;
LABEL_196:
      if ( v268 == 1 && v101 < 1.0e-15 )
      {
        v198 = v111;
        if ( v101 < 1.0e30 )
        {
          CoinIndexedVector::clear(a3);
          CoinIndexedVector::clear(a4);
          CoinIndexedVector::clear(a2);
          v205 = *((int *)this + 288);
          v206 = *((_QWORD *)this + 147);
          *((_QWORD *)this + 102) = *(_QWORD *)(*((_QWORD *)this + 150) + 8 * v205);
          v207 = *(double *)(v206 + 8 * v205);
          v208 = *((_QWORD *)this + 123);
          *((double *)this + 104) = v207;
          v209 = *(_QWORD *)(v208 + 8 * v205);
          v210 = *((_QWORD *)this + 126);
          *((_QWORD *)this + 101) = v209;
          *((_QWORD *)this + 103) = *(_QWORD *)(v210 + 8 * v205);
          *((_DWORD *)this + 289) = 2 * (v207 <= 0.0) - 1;
          goto LABEL_372;
        }
      }
      else if ( v101 < 1.0e30 )
      {
        v113 = v223 == v101;
        goto LABEL_199;
      }
LABEL_415:
      v74 = 2;
      goto LABEL_298;
    }
    if ( v99 >= 0 )
      goto LABEL_196;
    if ( v101 < 1.0e-10 )
      v111 = 2;
LABEL_294:
    if ( v101 >= 1.0e30 )
      goto LABEL_415;
    v113 = v223 == v101;
LABEL_199:
    if ( !v113 )
    {
      v74 = v111;
      CoinIndexedVector::clear(a2);
      if ( !v215 && v227 < 0.001 && (v227 != 1.2345e-20 || v222 <= 0.0001) )
      {
        if ( *a6 > 9 )
        {
          v196 = *a6 - 1;
          if ( *a6 == 10 )
            v196 = 0;
          *a6 = v196;
        }
        if ( !(unsigned int)ClpSimplexPrimal::unflag(this) && v227 < 1.0e-10 )
        {
          *((_DWORD *)this + 288) = -1;
          v74 = 0;
        }
      }
      goto LABEL_298;
    }
    v114 = *((_DWORD *)this + 26);
    *((_DWORD *)this + 292) = -1;
    if ( v114 > 0 )
    {
      v115 = *((_DWORD **)this + 157);
      if ( v241 == *v115 )
      {
        v119 = 0;
LABEL_205:
        *((_DWORD *)this + 292) = v119;
      }
      else
      {
        v116 = (unsigned int)(v114 - 1);
        v117 = 1;
        v118 = v116 + 1;
        while ( 1 )
        {
          v119 = v117;
          if ( v118 == v117 )
            break;
          if ( v115[v117++] == v241 )
            goto LABEL_205;
        }
      }
    }
    v120 = *((_QWORD *)this + 158);
    v121 = *(_QWORD *)(v120 + 8);
    if ( v121 )
      v122 = *(_DWORD *)(v121 + 68);
    else
      v122 = *(_DWORD *)(*(_QWORD *)(v120 + 16) + 52LL);
    v123 = 0.00001;
    if ( v122 <= 10 )
    {
      v123 = 0.000001;
      if ( v122 <= 5 )
        v123 = 0.0000001;
    }
    if ( v27[v241] <= 0.0 )
      v124 = 1.0;
    else
      v124 = -1.0;
    v274 = v124;
    CoinIndexedVector::createPacked(a3, 1, (const int *)this + 292, &v274);
    ClpFactorization::updateColumnTranspose(*((ClpFactorization **)this + 158), (CoinIndexedVector *)a5, a3);
    (*(void (__fastcall **)(_QWORD, ClpSimplexNonlinear *, CoinIndexedVector *, double **, CoinIndexedVector *, double))(**((_QWORD **)this + 24) + 392LL))(
      *((_QWORD *)this + 24),
      this,
      a3,
      a5,
      a4,
      -1.0);
    v125 = 0.0;
    v275 = xmmword_291B70;
    v276 = 0xC6293E5939A08CEALL;
    v231 = v31;
    v278 = 0x3FF0000000000000LL;
    v126 = -1;
    v277 = xmmword_291B80;
    v127 = -1.0;
    v279 = v102;
    v128 = 0;
    *((_DWORD *)this + 288) = -1;
    while ( 2 )
    {
      v129 = 0;
      v130 = *((double *)&v277 + v128) * v123;
      v131 = *((double *)&v275 + v128);
      v132 = -v131;
      v133 = -v130;
      while ( 2 )
      {
        while ( ++v129 == 1 )
        {
          v137 = *((_DWORD *)this + 27);
          v134 = *((_DWORD *)a3 + 4);
          v135 = *((_QWORD *)a3 + 1);
          v136 = *(_QWORD *)a3;
          if ( v134 > 0 )
            goto LABEL_218;
        }
        v134 = *((_DWORD *)a4 + 4);
        v135 = *((_QWORD *)a4 + 1);
        v136 = *(_QWORD *)a4;
        if ( v134 > 0 )
        {
          v137 = 0;
LABEL_218:
          v138 = *((_QWORD *)this + 33);
          v139 = 0;
          while ( 2 )
          {
            v143 = v137 + *(_DWORD *)(v136 + 4 * v139);
            v144 = *(_BYTE *)(v138 + v143);
            if ( (v144 & 0x40) != 0 )
              goto LABEL_227;
            v145 = v144 & 7;
            v146 = *(double *)(v135 + 8 * v139);
            v147 = v27[v143];
            if ( v145 == 2 )
            {
              if ( v146 <= v130 || v132 <= v147 )
              {
                if ( v128 != 2 || v133 <= v146 || v132 <= v147 )
                  goto LABEL_227;
                goto LABEL_222;
              }
            }
            else
            {
              if ( v145 <= 2u )
              {
                if ( v145 )
                  goto LABEL_227;
              }
              else
              {
                if ( v145 == 3 )
                {
                  if ( v133 <= v146 || v147 <= v131 )
                  {
                    if ( v128 == 2 && v146 > v130 && v147 > v131 )
                      break;
LABEL_227:
                    if ( v134 <= (int)++v139 )
                      goto LABEL_363;
                    continue;
                  }
LABEL_222:
                  *(double *)&v140 = 1.0;
LABEL_223:
                  if ( v215 > 9 && v216 == v126 )
                  {
                    *((_DWORD *)this + 288) = v143;
                    v126 = v143;
                    v125 = *(double *)&v140;
                    v127 = 1.797693134862316e308;
                  }
                  else
                  {
                    v141 = *(double *)(*((_QWORD *)this + 150) + 8LL * v143);
                    v142 = fmin(
                             v141 - *(double *)(*((_QWORD *)this + 123) + 8LL * v143),
                             *(double *)(*((_QWORD *)this + 126) + 8LL * v143) - v141);
                    if ( v142 > v127 )
                    {
                      v125 = *(double *)&v140;
                      v127 = v142;
                      *((_DWORD *)this + 288) = v143;
                      v126 = v143;
                    }
                  }
                  goto LABEL_227;
                }
                if ( v145 != 4 )
                  goto LABEL_227;
              }
              if ( v133 > v146 && v147 > v131 )
                goto LABEL_222;
              if ( v146 <= v130 || v132 <= v147 )
                goto LABEL_227;
            }
            break;
          }
          *(double *)&v140 = -1.0;
          goto LABEL_223;
        }
LABEL_363:
        if ( v129 != 2 )
          continue;
        break;
      }
      if ( v126 >= 0 && v127 > 0.0 )
      {
        v197 = v126;
        v198 = v111;
        goto LABEL_367;
      }
      if ( ++v128 != 3 )
        continue;
      break;
    }
    v197 = v126;
    v25 = v279;
    if ( v126 < 0 )
    {
      v220 += v231;
      if ( v222 * 0.9 > v227 && !v215 && v227 < 0.001 )
        ClpSimplexPrimal::unflag(this);
      v23 = 1;
      CoinIndexedVector::clear(a3);
      CoinIndexedVector::clear(a4);
      CoinIndexedVector::clear(a2);
      continue;
    }
    break;
  }
  v198 = v111;
LABEL_367:
  v199 = *((_QWORD *)this + 147);
  *((_QWORD *)this + 102) = *(_QWORD *)(*((_QWORD *)this + 150) + 8LL * v197);
  v200 = *(double *)(v199 + 8LL * v197);
  *((double *)this + 104) = v200;
  if ( v125 < 0.0 )
  {
    if ( v200 > 0.0 )
      goto LABEL_402;
    v212 = *((_QWORD *)this + 123);
    *((_QWORD *)this + 104) = 0x3FF0000000000000LL;
    v213 = *(_QWORD *)(v212 + 8LL * v197);
    v214 = *((_QWORD *)this + 126);
    *((_QWORD *)this + 101) = v213;
    *((_QWORD *)this + 103) = *(_QWORD *)(v214 + 8LL * v197);
LABEL_403:
    *((_DWORD *)this + 289) = -1;
  }
  else
  {
    if ( v200 >= 0.0 )
    {
      v201 = *((_QWORD *)this + 123);
      *((_QWORD *)this + 104) = 0xBFF0000000000000LL;
      v202 = *(_QWORD *)(v201 + 8LL * v197);
      v203 = *((_QWORD *)this + 126);
      *((_QWORD *)this + 101) = v202;
      *((_QWORD *)this + 103) = *(_QWORD *)(v203 + 8LL * v197);
      goto LABEL_370;
    }
LABEL_402:
    v211 = *((_QWORD *)this + 126);
    *((_QWORD *)this + 101) = *(_QWORD *)(*((_QWORD *)this + 123) + 8LL * v197);
    *((_QWORD *)this + 103) = *(_QWORD *)(v211 + 8LL * v197);
    if ( v200 > 0.0 )
      goto LABEL_403;
LABEL_370:
    *((_DWORD *)this + 289) = 1;
  }
  CoinIndexedVector::clear(a3);
  CoinIndexedVector::clear(a4);
  CoinIndexedVector::clear(a2);
LABEL_372:
  v204 = 0;
  if ( v198 != 1 )
    v204 = v198;
  v74 = v204;
LABEL_298:
  if ( 1.0e-12 * v269 > v222 )
    ClpSimplexPrimal::unflag(this);
  v62 = v267 - v271;
  if ( v220 > 2000 && v62 < 0.00001 )
  {
    v161 = *((_DWORD *)this + 27) + *((_DWORD *)this + 26);
    v162 = 1000.0 * *((double *)this + 109);
    v270 = 0.0;
    *(_QWORD *)&v52 = fmin(0.01, v162);
    v43.m128d_f64[0] = v269;
    if ( v161 > 0 )
    {
      v163 = (unsigned int)(v161 - 1);
      v164 = *((_QWORD *)this + 33);
      v165 = 0;
      v166 = v163 + 1;
      while ( 1 )
      {
        v168 = *(_BYTE *)(v164 + v165) & 7;
        if ( v168 == 2 )
        {
          v167 = *(double *)(*((_QWORD *)this + 147) + 8 * v165);
          if ( v167 <= *(double *)&v52 )
            goto LABEL_309;
          goto LABEL_308;
        }
        if ( v168 <= 2u )
          break;
        if ( v168 == 3 )
        {
          v167 = *(double *)(*((_QWORD *)this + 147) + 8 * v165);
          if ( -*(double *)&v52 <= v167 )
            goto LABEL_309;
LABEL_308:
          v43.m128d_f64[0] = v43.m128d_f64[0] + v167 * v167;
          v269 = v43.m128d_f64[0];
          goto LABEL_309;
        }
        if ( v168 == 4 )
          goto LABEL_307;
LABEL_309:
        if ( ++v165 == v166 )
          goto LABEL_397;
      }
      if ( v168 )
        goto LABEL_309;
LABEL_307:
      v167 = *(double *)(*((_QWORD *)this + 147) + 8 * v165);
      if ( fabs(v167) > *(double *)&v52 )
        goto LABEL_308;
      goto LABEL_309;
    }
LABEL_397:
    if ( *(int *)(*((_QWORD *)this + 43) + 104LL) > 2 )
    {
      printf("possible optimal  %d %d %g %g\n", v218, v220, v62, v43.m128d_f64[0]);
      v43.m128d_f64[0] = v269;
    }
    if ( v43.m128d_f64[0] < 0.00001 )
    {
      ClpSimplexPrimal::unflag(this);
      goto LABEL_86;
    }
  }
  return v74;
}

