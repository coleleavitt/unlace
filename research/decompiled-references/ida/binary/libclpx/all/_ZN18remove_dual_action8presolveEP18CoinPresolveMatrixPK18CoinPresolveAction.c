CoinPresolveMatrix *__fastcall remove_dual_action::presolve(
        remove_dual_action *this,
        CoinPresolveMatrix *a2,
        const CoinPresolveAction *a3)
{
  size_t v4; // rdx
  __int64 v5; // rbx
  __int64 v6; // rdi
  unsigned __int64 v7; // rbx
  __int64 *v8; // rbp
  unsigned __int64 v9; // r9
  int v10; // edx
  int *v11; // rax
  __int64 v12; // rsi
  char v13; // cl
  __int64 v14; // rdx
  double v15; // xmm1_8
  double v16; // xmm2_8
  unsigned __int64 v17; // r13
  int v18; // r8d
  __int64 v19; // rax
  int *v20; // r11
  double *v21; // rbp
  double v22; // xmm0_8
  char v23; // dl
  __int64 v24; // r12
  int v25; // r10d
  __int64 v26; // r9
  int v27; // ebx
  __int64 v28; // r8
  __int64 v29; // r10
  double v30; // xmm14_8
  __int64 v31; // r9
  __int64 v32; // rdx
  double v33; // xmm4_8
  double v34; // xmm3_8
  __int64 v35; // rax
  double v36; // xmm0_8
  double v37; // xmm1_8
  double v38; // xmm15_8
  double v39; // xmm5_8
  double v40; // xmm4_8
  __int64 v41; // rdx
  double v42; // xmm3_8
  double v43; // xmm12_8
  double v44; // xmm14_8
  __int64 v45; // rax
  double v46; // xmm0_8
  double v47; // xmm1_8
  double v48; // xmm15_8
  double v49; // xmm5_8
  __int64 v50; // rax
  int v51; // ecx
  bool v52; // dl
  bool v53; // cl
  __int64 v54; // xmm0_8
  unsigned int v55; // r11d
  __int64 v56; // rax
  double *v57; // r10
  double *v58; // rdi
  unsigned __int64 v59; // rsi
  unsigned __int64 v60; // rdx
  __int64 v61; // rax
  __m128i v62; // xmm1
  __m128i v63; // xmm2
  __m128d v64; // xmm3
  __int64 v65; // rax
  _QWORD *v66; // rdx
  bool v67; // di
  bool v68; // si
  __int64 v69; // xmm1_8
  int v70; // ecx
  double v71; // xmm1_8
  _QWORD *v72; // rsi
  bool v73; // dl
  __int64 v74; // xmm0_8
  __int64 v75; // rax
  bool v76; // r8
  __int64 v77; // rdx
  double v78; // xmm1_8
  double v79; // xmm0_8
  __int64 v80; // rdx
  double *v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // r14
  double v84; // xmm5_8
  int v85; // r10d
  double v86; // xmm6_8
  int v87; // r8d
  __int64 v88; // r13
  __int64 v89; // rsi
  __int64 v90; // rax
  int v91; // edi
  __int64 v92; // rdx
  double v93; // xmm1_8
  double v94; // xmm2_8
  double v95; // xmm3_8
  double v96; // xmm4_8
  bool v97; // al
  double v98; // xmm0_8
  __int64 v99; // r12
  __int64 v100; // rax
  __int64 v101; // rsi
  bool v102; // cf
  double v103; // xmm1_8
  __int64 v104; // r13
  int v105; // edi
  double v106; // xmm0_8
  int v107; // eax
  int v108; // edi
  __int64 v109; // r10
  __int64 v110; // r11
  __int64 v111; // rcx
  __int64 v112; // r8
  int v113; // edx
  bool v114; // zf
  double v115; // xmm0_8
  int *v116; // rdx
  __int64 v117; // rdx
  double v118; // xmm1_8
  double v119; // xmm0_8
  __int64 v120; // rax
  int v121; // r8d
  double v122; // xmm3_8
  double v123; // xmm9_8
  __int64 v124; // r10
  __int64 v125; // rdi
  __int64 v126; // r9
  __int64 v127; // rax
  int v128; // esi
  double v129; // xmm1_8
  double v130; // xmm1_8
  double v131; // xmm0_8
  __int64 v132; // rcx
  double v133; // xmm1_8
  double v134; // xmm1_8
  int v135; // eax
  __int64 v136; // rax
  double v137; // xmm2_8
  __int64 v138; // r11
  __int64 v139; // rdx
  int *v140; // r8
  int v141; // ecx
  double v142; // xmm12_8
  double v143; // xmm11_8
  double v144; // xmm0_8
  double v145; // xmm14_8
  double v146; // xmm1_8
  double v147; // xmm13_8
  double v148; // xmm0_8
  __int64 v149; // rax
  __int64 v150; // r13
  __int64 v151; // r10
  __int64 v152; // r11
  __int64 v153; // rax
  double *v154; // r14
  double v155; // xmm2_8
  double v156; // xmm1_8
  double v157; // xmm0_8
  __int64 v158; // rdx
  double *v159; // rsi
  double v160; // xmm2_8
  double v161; // xmm4_8
  CoinMessageHandler *v162; // r14
  CoinMessageHandler *v163; // rax
  __int64 v164; // rax
  CoinMessageHandler *v165; // r14
  CoinMessageHandler *v166; // rax
  __int64 v167; // rax
  __int64 v168; // rbp
  int v169; // esi
  int v170; // ebx
  int v171; // edx
  int v172; // edi
  int v173; // edx
  double v174; // xmm4_8
  int v175; // r11d
  int *v176; // rax
  __int128 v177; // xmm3
  unsigned __int64 *v178; // rcx
  unsigned __int64 v179; // rdi
  int v180; // r10d
  int v181; // r14d
  __int128 v182; // xmm1
  __int64 v183; // rdx
  double v184; // xmm2_8
  double v185; // xmm0_8
  int v186; // r14d
  __int64 v187; // rbx
  __int64 v188; // rcx
  int *v189; // rdi
  __int64 v190; // r8
  __int64 v191; // rax
  int v192; // esi
  double *v193; // r9
  double *v194; // rdx
  __int64 v195; // xmm0_8
  int v196; // r11d
  char *v197; // rax
  char v198; // dl
  __int64 v199; // rax
  __int64 v200; // rdx
  __int64 v201; // rax
  CoinPresolveMatrix *v202; // rsi
  double v204; // xmm0_8
  CoinPresolveAction *v205; // rax
  __int64 v206; // xmm1_8
  double v207; // xmm1_8
  bool v208; // si
  double v209; // xmm1_8
  __int64 v210; // [rsp+0h] [rbp-138h]
  int v211; // [rsp+0h] [rbp-138h]
  int v212; // [rsp+8h] [rbp-130h]
  __int64 v213; // [rsp+8h] [rbp-130h]
  __int64 v214; // [rsp+8h] [rbp-130h]
  __int64 v215; // [rsp+10h] [rbp-128h]
  __int64 v216; // [rsp+18h] [rbp-120h]
  const CoinPresolveAction *v217; // [rsp+20h] [rbp-118h]
  __int64 v218; // [rsp+28h] [rbp-110h]
  __int64 v219; // [rsp+30h] [rbp-108h]
  __int64 v220; // [rsp+38h] [rbp-100h]
  int v221; // [rsp+38h] [rbp-100h]
  void *v222; // [rsp+40h] [rbp-F8h]
  CoinPresolveAction *v223; // [rsp+48h] [rbp-F0h]
  unsigned int v224; // [rsp+48h] [rbp-F0h]
  CoinPresolveMatrix *v225; // [rsp+50h] [rbp-E8h]
  __int64 v226; // [rsp+58h] [rbp-E0h]
  __int64 v227; // [rsp+60h] [rbp-D8h]
  __int64 v228; // [rsp+68h] [rbp-D0h]
  unsigned __int64 v229; // [rsp+70h] [rbp-C8h]
  int v230; // [rsp+70h] [rbp-C8h]
  int v231; // [rsp+78h] [rbp-C0h]
  int v232; // [rsp+7Ch] [rbp-BCh]
  double *v233; // [rsp+80h] [rbp-B8h]
  double *v234; // [rsp+88h] [rbp-B0h]
  double v235; // [rsp+90h] [rbp-A8h]
  __int64 *v236; // [rsp+98h] [rbp-A0h]
  int v237; // [rsp+98h] [rbp-A0h]
  double v238; // [rsp+A0h] [rbp-98h]
  __int64 v239; // [rsp+A8h] [rbp-90h]
  __int64 v240; // [rsp+B0h] [rbp-88h]
  __int64 v242; // [rsp+C0h] [rbp-78h]
  __int64 v243; // [rsp+C8h] [rbp-70h]
  __int64 v244; // [rsp+D0h] [rbp-68h]
  __int64 v245; // [rsp+D8h] [rbp-60h]
  _BYTE v246[88]; // [rsp+E0h] [rbp-58h] BYREF

  v4 = *(int *)this;
  v216 = *((_QWORD *)this + 5);
  v231 = *(_DWORD *)this;
  v210 = *((_QWORD *)this + 6);
  v218 = *((_QWORD *)this + 7);
  v219 = *((_QWORD *)this + 8);
  v217 = *((const CoinPresolveAction **)this + 9);
  v215 = *((_QWORD *)this + 39);
  v227 = *((_QWORD *)this + 11);
  v228 = *((_QWORD *)this + 12);
  v5 = *((_QWORD *)this + 20);
  v6 = *((int *)this + 1);
  v226 = v5;
  v232 = v6;
  v239 = *((_QWORD *)this + 35);
  v245 = v6;
  v243 = 8 * v6;
  v240 = *((_QWORD *)this + 36);
  v235 = *((double *)this + 18);
  v242 = *((_QWORD *)this + 38);
  v222 = (void *)(*((_QWORD *)this + 58) + 4 * v4);
  v244 = *((_QWORD *)this + 37);
  v233 = *((double **)this + 13);
  v234 = *((double **)this + 14);
  v7 = *((_QWORD *)this + 57);
  v8 = (__int64 *)(v7 + 8 * v6);
  memset(v222, 0, v4);
  v10 = *((_DWORD *)this + 94);
  v11 = *((int **)this + 46);
  if ( v10 > 0 )
  {
    v12 = (__int64)&v11[v10 - 1 + 1];
    v9 = (unsigned __int64)v222;
    do
    {
      while ( 1 )
      {
        v14 = *v11;
        v15 = *(double *)(v228 + 8 * v14);
        v16 = *(double *)(v227 + 8 * v14);
        if ( v15 < 1.0e28 )
          break;
        v13 = v16 > -1.0e28;
LABEL_4:
        ++v11;
        *((_BYTE *)v222 + v14) = v13;
        if ( (int *)v12 == v11 )
          goto LABEL_8;
      }
      v13 = 2;
      if ( v16 <= -1.0e28 )
        goto LABEL_4;
      ++v11;
      *((_BYTE *)v222 + v14) = (v15 <= v16) + 3;
    }
    while ( (int *)v12 != v11 );
  }
LABEL_8:
  if ( (int)v6 <= 0 )
    goto LABEL_75;
  v17 = 0;
  v229 = v7;
  v223 = (CoinPresolveAction *)((unsigned int)(v6 - 1) + 1LL);
  v220 = 4LL * (_QWORD)v223;
  v236 = (__int64 *)(v7 + 8 * v6);
  do
  {
LABEL_10:
    v18 = *(_DWORD *)(v239 + v17);
    if ( v18 >= v18 + *(_DWORD *)(v240 + v17) )
      goto LABEL_55;
    v19 = v18;
    v20 = (int *)(v242 + 4LL * v18);
    v21 = (double *)(v244 + 8LL * v18);
    v22 = *v21;
    v23 = *((_BYTE *)v222 + *v20);
    if ( !v23 || (v23 & 8) != 0 )
      goto LABEL_55;
    v24 = -1;
    v25 = 0;
    v26 = (unsigned int)(*(_DWORD *)(v240 + v17) - 1);
    v27 = 0;
    v212 = -1;
    v28 = v18 + v26;
    while ( 1 )
    {
      if ( v23 == 1 )
      {
        if ( v22 > 0.0 )
          goto LABEL_21;
        goto LABEL_200;
      }
      if ( v23 == 2 )
        break;
      if ( v23 == 3 )
      {
        if ( v22 <= 0.0 )
        {
          ++v27;
          v212 = v19;
        }
        else
        {
          ++v25;
          v24 = (int)v19;
        }
      }
LABEL_16:
      if ( v28 == v19 )
        goto LABEL_22;
LABEL_17:
      v22 = *(double *)(v244 + 8 * v19 + 8);
      v23 = *((_BYTE *)v222 + *(int *)(v242 + 4 * v19 + 4));
      if ( v23 )
      {
        ++v19;
        if ( (v23 & 8) == 0 )
          continue;
      }
      goto LABEL_55;
    }
    if ( v22 >= 0.0 )
    {
LABEL_200:
      ++v27;
      goto LABEL_16;
    }
LABEL_21:
    ++v25;
    if ( v28 != v19 )
      goto LABEL_17;
LABEL_22:
    if ( (int)v24 < 0 || v25 != 1 )
    {
      if ( v212 < 0 || v27 != 1 )
        goto LABEL_55;
      v31 = v26 + 1;
      v39 = v233[v17 / 4];
      v40 = v234[v17 / 4];
      goto LABEL_40;
    }
    v29 = *(int *)(v242 + 4 * v24);
    v30 = *(double *)(v244 + 8 * v24);
    v31 = v26 + 1;
    v32 = 0;
    v33 = 0.0;
    v34 = 0.0;
    while ( 2 )
    {
      while ( 2 )
      {
        v35 = v20[v32];
        if ( (_DWORD)v29 == (_DWORD)v35 )
          goto LABEL_29;
        v36 = v21[v32];
        v37 = *(double *)(v227 + 8 * v35);
        v38 = *(double *)(v228 + 8 * v35);
        if ( v36 > 0.0 )
        {
          if ( v38 > 1.0e30 )
            v33 = 1.797693134862316e308;
          else
            v33 = v33 + v38 * v36;
          if ( v37 < -1.0e30 )
LABEL_204:
            v34 = -1.797693134862316e308;
          else
            v34 = v34 + v36 * v37;
LABEL_29:
          if ( v31 == ++v32 )
            goto LABEL_36;
          continue;
        }
        break;
      }
      if ( v37 < -1.0e30 )
        v33 = 1.797693134862316e308;
      else
        v33 = v33 + v37 * v36;
      if ( v38 > 1.0e30 )
        goto LABEL_204;
      ++v32;
      v34 = v34 + v36 * v38;
      if ( v31 != v32 )
        continue;
      break;
    }
LABEL_36:
    v39 = v233[v17 / 4];
    if ( (v39 - v33) / v30 > *(double *)(v227 + 8 * v29) - 0.0000001 )
      goto LABEL_208;
    v40 = v234[v17 / 4];
    if ( *(double *)(v228 + 8 * v29) + 0.0000001 > (v40 - v34) / v30 )
      goto LABEL_54;
    if ( v212 < 0 || v27 != 1 )
    {
LABEL_55:
      v17 += 4LL;
      if ( v220 == v17 )
        break;
      goto LABEL_10;
    }
LABEL_40:
    v41 = 0;
    v42 = 0.0;
    v43 = 0.0;
    v29 = *(int *)(v242 + 4LL * v212);
    v44 = *(double *)(v244 + 8LL * v212);
    while ( 2 )
    {
      while ( 2 )
      {
        v45 = v20[v41];
        if ( (_DWORD)v29 == (_DWORD)v45 )
          goto LABEL_45;
        v46 = v21[v41];
        v47 = *(double *)(v227 + 8 * v45);
        v48 = *(double *)(v228 + 8 * v45);
        if ( v46 > 0.0 )
        {
          if ( v48 > 1.0e30 )
            v43 = 1.797693134862316e308;
          else
            v43 = v43 + v48 * v46;
          if ( v47 < -1.0e30 )
LABEL_206:
            v42 = -1.797693134862316e308;
          else
            v42 = v42 + v46 * v47;
LABEL_45:
          if ( v31 == ++v41 )
            goto LABEL_52;
          continue;
        }
        break;
      }
      if ( v47 < -1.0e30 )
        v43 = 1.797693134862316e308;
      else
        v43 = v43 + v47 * v46;
      if ( v48 > 1.0e30 )
        goto LABEL_206;
      ++v41;
      v42 = v42 + v46 * v48;
      if ( v31 != v41 )
        continue;
      break;
    }
LABEL_52:
    v49 = v39 - v43;
    if ( (v40 - v42) / v44 <= *(double *)(v227 + 8 * v29) - 0.0000001 )
    {
      if ( *(double *)(v228 + 8 * v29) + 0.0000001 > v49 / v44 )
LABEL_54:
        *((_BYTE *)v222 + v29) = 9;
      goto LABEL_55;
    }
LABEL_208:
    *((_BYTE *)v222 + v29) = 10;
    v17 += 4LL;
  }
  while ( v220 != v17 );
  v7 = v229;
  v8 = v236;
  v9 = v229 + v243 + 16;
  if ( (v236 >= (__int64 *)v234 + 2 || (unsigned __int64)v234 >= v9)
    && (v236 >= (__int64 *)v233 + 2 || (unsigned __int64)v233 >= v9)
    && (v229 >= (unsigned __int64)(v234 + 2) || (unsigned __int64)v234 >= v229 + 16)
    && (v229 >= (unsigned __int64)(v233 + 2) || (unsigned __int64)v233 >= v229 + 16)
    && (unsigned int)v6 > 3
    && (v243 + 16 <= 0 || (unsigned __int64)v236 >= v229 + 16) )
  {
    v50 = (v229 >> 3) & 1;
    v51 = 0;
    if ( (int)v6 - 1 < 2 - (unsigned int)((_DWORD)v50 == 0) )
      goto LABEL_67;
    if ( (_DWORD)v50 )
    {
      v52 = *v234 >= 1.0e28;
      v53 = *v233 <= -1.0e28;
      if ( *v233 <= -1.0e28 || *v234 < 1.0e28 )
      {
        *(_QWORD *)v229 = 0xFFEFFFFFFFFFFFFFLL;
        if ( v52 || !v53 )
          v54 = 0x7FEFFFFFFFFFFFFFLL;
        else
          v54 = 0;
      }
      else
      {
        v54 = 0x7FEFFFFFFFFFFFFFLL;
        *(_QWORD *)v229 = 0;
      }
      *v236 = v54;
      v51 = 1;
    }
    v55 = 0;
    v9 = (unsigned int)(v6 - v50);
    v56 = v50;
    v57 = &v234[v56];
    v58 = &v233[v56];
    v59 = v229 + v56 * 8;
    v60 = v229 + v243 + v56 * 8;
    v61 = 0;
    do
    {
      ++v55;
      v62 = (__m128i)_mm_cmple_pd((__m128d)xmmword_299D40, *(__m128d *)&v57[v61]);
      v63 = (__m128i)_mm_cmple_pd(*(__m128d *)&v58[v61], (__m128d)xmmword_299D50);
      v64 = (__m128d)_mm_andnot_si128(v63, v62);
      *(__m128d *)(v59 + v61 * 8) = _mm_andn_pd(v64, (__m128d)xmmword_28C780);
      *(__m128d *)(v60 + v61 * 8) = _mm_andn_pd(
                                      (__m128d)_mm_andnot_si128((__m128i)v64, _mm_andnot_si128(v62, v63)),
                                      (__m128d)xmmword_28C790);
      v61 += 2;
    }
    while ( v55 < (unsigned int)v9 >> 1 );
    v51 += v9 & 0xFFFFFFFE;
    if ( (v9 & 0xFFFFFFFE) != (_DWORD)v9 )
    {
LABEL_67:
      v65 = v51;
      v66 = (_QWORD *)(v229 + 8LL * v51);
      v67 = v234[v51] >= 1.0e28;
      v68 = v233[v51] <= -1.0e28;
      if ( v233[v51] <= -1.0e28 || v234[v51] < 1.0e28 )
      {
        *v66 = 0xFFEFFFFFFFFFFFFFLL;
        if ( v67 || !v68 )
          v69 = 0x7FEFFFFFFFFFFFFFLL;
        else
          v69 = 0;
      }
      else
      {
        v69 = 0x7FEFFFFFFFFFFFFFLL;
        *v66 = 0;
      }
      v70 = v51 + 1;
      v236[v65] = v69;
      if ( v232 > v70 )
      {
        v71 = v234[v70];
        v72 = (_QWORD *)(v229 + 8LL * v70);
        v73 = v233[v70] <= -1.0e28;
        if ( v233[v70] <= -1.0e28 || v71 < 1.0e28 )
        {
          *v72 = 0xFFEFFFFFFFFFFFFFLL;
          if ( v71 < 1.0e28 && v73 )
            v74 = 0;
          else
            v74 = 0x7FEFFFFFFFFFFFFFLL;
        }
        else
        {
          v74 = 0x7FEFFFFFFFFFFFFFLL;
          *v72 = 0;
        }
        v236[v70] = v74;
      }
    }
  }
  else
  {
    v205 = nullptr;
    do
    {
      v207 = *(double *)((char *)v205 + (_QWORD)v234);
      v208 = *(double *)((char *)v205 + (_QWORD)v233) <= -1.0e28;
      if ( *(double *)((char *)v205 + (_QWORD)v233) <= -1.0e28 || v207 < 1.0e28 )
      {
        *(_QWORD *)((char *)v205 + v229) = 0xFFEFFFFFFFFFFFFFLL;
        if ( v207 < 1.0e28 && v208 )
          v206 = 0;
        else
          v206 = 0x7FEFFFFFFFFFFFFFLL;
      }
      else
      {
        v206 = 0x7FEFFFFFFFFFFFFFLL;
        *(_QWORD *)((char *)v205 + v229) = 0;
      }
      *(_QWORD *)((char *)v205 + (_QWORD)v236) = v206;
      v205 = (CoinPresolveAction *)((char *)v205 + 8);
    }
    while ( (CoinPresolveAction *)(8LL * (_QWORD)v223) != v205 );
  }
LABEL_75:
  if ( v231 > 0 )
  {
    v9 = (unsigned __int64)v217;
    v75 = 0;
    while ( 1 )
    {
      if ( *(_BYTE *)(v215 + v75) )
        goto LABEL_83;
      if ( *(_DWORD *)(v210 + 4 * v75) != 1 )
        goto LABEL_83;
      v76 = (*((_BYTE *)v222 + v75) & 6) == 0;
      if ( v76 == ((*((_BYTE *)v222 + v75) & 5) == 0) )
        goto LABEL_83;
      v77 = *(int *)(v216 + 4 * v75);
      v78 = *(double *)(v219 + 8 * v77);
      v79 = *((double *)v217 + v75) / v78;
      v80 = *(int *)(v218 + 4 * v77);
      if ( v78 > 0.0 == v76 )
        break;
      v81 = (double *)(v7 + v80 * 8);
      if ( v79 > *v81 )
        goto LABEL_82;
LABEL_83:
      if ( (unsigned int)(v231 - 1) + 1LL == ++v75 )
        goto LABEL_84;
    }
    v81 = (double *)&v8[v80];
    if ( *v81 <= v79 )
      goto LABEL_83;
LABEL_82:
    *v81 = v79;
    goto LABEL_83;
  }
LABEL_84:
  v237 = 100;
  v225 = *((CoinPresolveMatrix **)this + 58);
  v221 = v231;
  v238 = -v235;
LABEL_85:
  if ( v231 <= 0 )
    goto LABEL_117;
  v213 = (unsigned int)(v231 - 1) + 1LL;
  v82 = 0;
  v230 = 0;
  v224 = 0;
  while ( 2 )
  {
    v9 = *(unsigned int *)(v210 + 4 * v82);
    if ( (int)v9 <= 0 )
      goto LABEL_113;
    v83 = *(int *)(v216 + 4 * v82);
    v84 = *((double *)v217 + v82);
    v9 = (unsigned int)(v83 + v9);
    if ( (int)v83 < (int)v9 )
    {
      v85 = 0;
      v86 = *((double *)v217 + v82);
      v87 = 0;
      v88 = v219 + 8LL * (int)v83;
      v89 = (unsigned int)(v9 - v83 - 1) + 1LL;
      v90 = 0;
      v91 = 0;
      while ( 1 )
      {
        while ( 1 )
        {
          v92 = *(int *)(v218 + 4LL * (int)v83 + 4 * v90);
          v93 = *(double *)(v7 + 8 * v92);
          v94 = *(double *)&v8[v92];
          v95 = *(double *)(v88 + 8 * v90) * v93;
          v96 = *(double *)(v88 + 8 * v90) * v94;
          if ( *(double *)(v88 + 8 * v90) > 0.0 )
            break;
          if ( v94 > 1.0e20 )
            ++v87;
          else
            v84 = v84 - v96;
          if ( v93 < -1.0e20 )
            goto LABEL_211;
          ++v90;
          ++v85;
          v86 = v86 - v95;
          if ( v89 == v90 )
            goto LABEL_100;
        }
        if ( v93 < -1.0e20 )
          ++v87;
        else
          v84 = v84 - v95;
        if ( v94 > 1.0e20 )
        {
LABEL_211:
          ++v91;
          goto LABEL_94;
        }
        v86 = v86 - v96;
        ++v85;
LABEL_94:
        if ( v89 == ++v90 )
          goto LABEL_100;
      }
    }
    v86 = *((double *)v217 + v82);
    v85 = 0;
    v91 = 0;
    v87 = 0;
LABEL_100:
    if ( *(_BYTE *)(v215 + v82) || (*((_BYTE *)v222 + v82) & 6) != 0 )
      goto LABEL_214;
    if ( v87 != 1 || v238 <= v84 )
    {
      v97 = v91 == 0;
      if ( v85 != 1 || v91 )
        goto LABEL_215;
      if ( v238 > v86 && (_DWORD)v83 + 1 != (_DWORD)v9 )
        abort();
      if ( v86 > v235 )
        goto LABEL_108;
LABEL_217:
      if ( !v87 && v238 > v84 && (!*((_BYTE *)this + 440) || (*(_BYTE *)(*((_QWORD *)this + 45) + v82) & 2) == 0) )
      {
        v148 = *(double *)(v228 + 8 * v82);
        if ( v148 >= 1.0e28 )
        {
          v165 = *((CoinMessageHandler **)this + 26);
          CoinMessages::CoinMessages((CoinMessages *)v246, (remove_dual_action *)((char *)this + 224));
          v166 = (CoinMessageHandler *)CoinMessageHandler::message(v165, 17, (const CoinMessages *)v246);
          v167 = CoinMessageHandler::operator<<(v166);
          CoinMessageHandler::operator<<(v167, 0, v148);
          goto LABEL_251;
        }
        *((_DWORD *)v225 + (int)v224++) = v82;
        if ( !v226 )
          goto LABEL_113;
        *(double *)(v226 + 8 * v82) = v148;
        *(_BYTE *)(*((_QWORD *)this + 24) + v82++) = 2;
        if ( v213 != v82 )
          continue;
LABEL_114:
        if ( v221 < v231 || v230 <= 99 )
          goto LABEL_252;
LABEL_115:
        v9 = v224;
        if ( v224 )
          goto LABEL_253;
        if ( !--v237 )
          goto LABEL_117;
        goto LABEL_85;
      }
LABEL_113:
      if ( v213 == ++v82 )
        goto LABEL_114;
      continue;
    }
    break;
  }
  if ( (int)v83 < (int)v9 )
  {
    v149 = (unsigned int)(v9 - v83 - 1);
    v9 = (unsigned int)v230;
    v150 = v149 + 1;
    v151 = v218 + 4 * v83;
    v152 = v219 + 8 * v83;
    v153 = 0;
    while ( 1 )
    {
      v157 = *(double *)(v152 + 8 * v153);
      v158 = *(int *)(v151 + 4 * v153);
      if ( v157 > 0.0 && *(double *)(v7 + 8LL * (int)v158) < -1.0e20 )
        break;
      if ( v157 >= 0.0
        || *(double *)&v8[v158] <= 1.0e20
        || (v159 = (double *)(v7 + 8 * v158), v160 = *v159, *v159 * v157 - v235 <= v84) )
      {
LABEL_236:
        if ( v150 == ++v153 )
          goto LABEL_245;
      }
      else
      {
        v161 = v84 / v157;
        if ( v160 >= -1.0e20 || v161 < -1.0e20 )
        {
          if ( v160 >= -1.0e20 )
            v86 = v86 - v157 * (v161 - v160);
        }
        else
        {
          --v91;
          v86 = v86 - v157 * v161;
        }
        ++v153;
        v9 = (unsigned int)(v9 + 1);
        *v159 = v161;
        if ( v150 == v153 )
        {
LABEL_245:
          v230 = v9;
          v97 = v91 == 0;
          goto LABEL_215;
        }
      }
    }
    v154 = (double *)&v8[(int)v158];
    v155 = *v154;
    if ( *v154 * v157 - v235 > v84 )
    {
      v156 = v84 / v157;
      if ( v155 <= 1.0e20 || v156 > 1.0e20 )
      {
        if ( v155 <= 1.0e20 )
          v86 = v86 - v157 * (v156 - v155);
      }
      else
      {
        --v91;
        v86 = v86 - v157 * v156;
      }
      *v154 = v156;
      v9 = (unsigned int)(v9 + 1);
    }
    goto LABEL_236;
  }
LABEL_214:
  v97 = v91 == 0;
LABEL_215:
  if ( v86 <= v235 || !v97 )
    goto LABEL_217;
LABEL_108:
  if ( *((_BYTE *)this + 440) && (*(_BYTE *)(*((_QWORD *)this + 45) + v82) & 2) != 0 )
    goto LABEL_113;
  v98 = *(double *)(v227 + 8 * v82);
  if ( v98 > -1.0e28 )
  {
    *((_DWORD *)v225 + --v221) = v82;
    if ( v226 )
    {
      *(double *)(v226 + 8 * v82) = v98;
      *(_BYTE *)(*((_QWORD *)this + 24) + v82) = 3;
    }
    goto LABEL_113;
  }
  v162 = *((CoinMessageHandler **)this + 26);
  CoinMessages::CoinMessages((CoinMessages *)v246, (remove_dual_action *)((char *)this + 224));
  v163 = (CoinMessageHandler *)CoinMessageHandler::message(v162, 18, (const CoinMessages *)v246);
  v164 = CoinMessageHandler::operator<<(v163);
  CoinMessageHandler::operator<<(v164, 0, v98);
LABEL_251:
  CoinMessages::~CoinMessages((CoinMessages *)v246);
  *((_DWORD *)this + 86) |= 2u;
  if ( v231 <= v221 && v230 > 99 )
    goto LABEL_115;
LABEL_252:
  if ( v224 )
LABEL_253:
    a2 = (CoinPresolveMatrix *)make_fixed_action::presolve(
                                 this,
                                 v225,
                                 (int *)v224,
                                 0,
                                 (bool)a2,
                                 (const CoinPresolveAction *)v9);
LABEL_117:
  if ( v231 > v221 )
    a2 = (CoinPresolveMatrix *)make_fixed_action::presolve(
                                 this,
                                 (CoinPresolveMatrix *)((char *)v225 + 4 * v221),
                                 (int *)(unsigned int)(v231 - v221),
                                 1,
                                 (bool)a2,
                                 (const CoinPresolveAction *)v9);
  v99 = *((_QWORD *)this + 56);
  v214 = v99 + v243;
  if ( v232 <= 0 )
  {
    if ( v231 <= 0 )
      return a2;
    goto LABEL_130;
  }
  v100 = 0;
  v101 = (unsigned int)(v232 - 1) + 1LL;
  while ( 2 )
  {
    while ( 2 )
    {
      v102 = v233[v100] > -1.0e28;
      v103 = v234[v100];
      *(_DWORD *)(v99 + 4 * v100) = 0;
      if ( v102 && v103 >= 1.0e28 )
      {
        *(_DWORD *)(v99 + 4 * v100) = (*(double *)(v7 + 8 * v100) > 0.0) - 2;
        goto LABEL_123;
      }
      if ( v103 >= 1.0e28 || v102 )
      {
LABEL_123:
        if ( ++v100 == v101 )
          goto LABEL_129;
        continue;
      }
      break;
    }
    if ( *(double *)&v8[v100] < 0.0 )
    {
      *(_DWORD *)(v99 + 4 * v100) = 1;
      goto LABEL_123;
    }
    *(_DWORD *)(v99 + 4 * v100++) = 2;
    if ( v100 != v101 )
      continue;
    break;
  }
LABEL_129:
  if ( v231 > 0 )
  {
LABEL_130:
    v104 = 0;
    do
    {
      v105 = *(_DWORD *)(v210 + 4 * v104);
      if ( v105 > 1 && !*(_BYTE *)(v215 + v104) )
      {
        v106 = *(double *)(v227 + 8 * v104);
        if ( *(double *)(v228 + 8 * v104) >= 1.0e28 )
        {
          v107 = *(_DWORD *)(v216 + 4 * v104);
          v108 = v107 + v105;
          if ( v106 > -1.0e28 )
          {
            if ( v107 >= v108 )
              goto LABEL_156;
            v109 = -2;
            v110 = -1;
LABEL_137:
            v111 = v107;
            v112 = *(int *)(v218 + 4LL * v107);
            v113 = *(_DWORD *)(v99 + 4 * v112);
            if ( abs32(v113) != 2 )
              goto LABEL_156;
            while ( 2 )
            {
              if ( *(double *)(v219 + 8 * v111) > 0.0 )
              {
                if ( v113 != 2 )
                  goto LABEL_140;
LABEL_146:
                v114 = (_DWORD)v110 == -1;
                v110 = (int)v112;
                if ( !v114 )
                  v110 = -2;
                if ( ++v107 >= v108 )
                  goto LABEL_149;
              }
              else
              {
                if ( v113 != 2 )
                  goto LABEL_146;
LABEL_140:
                v114 = (_DWORD)v109 == -1;
                v109 = (int)v112;
                if ( !v114 )
                  v109 = -2;
                if ( ++v107 >= v108 )
                {
LABEL_149:
                  if ( (_DWORD)v109 == -2 && (_DWORD)v110 == -2 )
                    goto LABEL_156;
                  v115 = *((double *)v217 + v104);
                  if ( (int)v110 >= -1 && v115 <= 0.0 )
                  {
                    if ( (_DWORD)v110 == -1 )
                      goto LABEL_156;
                    v116 = (int *)(v99 + 4 * v110);
                  }
                  else
                  {
                    if ( v115 < 0.0 )
                      goto LABEL_156;
LABEL_153:
                    if ( (int)v109 < 0 )
                      goto LABEL_156;
                    v116 = (int *)(v99 + 4 * v109);
                  }
                  *v116 /= 2;
                  goto LABEL_156;
                }
              }
              ++v111;
              v112 = *(int *)(v218 + 4 * v111);
              v113 = *(_DWORD *)(v99 + 4 * v112);
              if ( abs32(v113) != 2 )
                goto LABEL_156;
              continue;
            }
          }
          v109 = -1;
          v110 = -1;
          if ( v107 < v108 )
            goto LABEL_137;
          v204 = *((double *)v217 + v104);
          if ( v204 > 0.0 && v204 >= 0.0 )
            goto LABEL_153;
        }
        else if ( v106 <= -1.0e28 )
        {
          v107 = *(_DWORD *)(v216 + 4 * v104);
          v108 = v107 + v105;
          if ( v107 < v108 )
          {
            v109 = -1;
            v110 = -2;
            goto LABEL_137;
          }
        }
      }
LABEL_156:
      ++v104;
    }
    while ( v231 > (int)v104 );
    if ( v232 <= 0 )
      goto LABEL_182;
  }
  v117 = 0;
  while ( 2 )
  {
    while ( 1 )
    {
      v118 = v234[v117];
      v119 = v233[v117];
      if ( v119 != v118 && (v119 > -1.0e20 || v118 < 1.0e20) )
        break;
      *(_DWORD *)(v214 + 4 * v117++) = (_DWORD)&loc_A000A;
      if ( v232 <= (int)v117 )
        goto LABEL_181;
    }
    v120 = *(int *)(v239 + 4 * v117);
    if ( (int)v120 >= (int)v120 + *(_DWORD *)(v240 + 4 * v117) )
    {
      v135 = 0;
      v122 = 0.0;
      v123 = 0.0;
      goto LABEL_180;
    }
    v121 = 0;
    v122 = 0.0;
    v123 = 0.0;
    v124 = v244 + 8 * v120;
    v125 = (unsigned int)(*(_DWORD *)(v240 + 4 * v117) - 1) + 1LL;
    v126 = v242 + 4 * v120;
    v127 = 0;
    v128 = 0;
    while ( 2 )
    {
      while ( 2 )
      {
        v131 = *(double *)(v124 + 8 * v127);
        v132 = *(int *)(v126 + 4 * v127);
        if ( v131 > 0.0 )
        {
          v129 = *(double *)(v228 + 8 * v132);
          if ( v129 >= 1.0e12 )
            ++v121;
          else
            v123 = v123 + v129 * v131;
          v130 = *(double *)(v227 + 8 * v132);
          if ( v130 <= -1.0e12 )
            ++v128;
          else
            v122 = v122 + v131 * v130;
LABEL_169:
          if ( ++v127 == v125 )
            goto LABEL_176;
          continue;
        }
        break;
      }
      if ( v131 >= 0.0 )
        goto LABEL_169;
      v133 = *(double *)(v228 + 8 * v132);
      if ( v133 >= 1.0e12 )
        ++v128;
      else
        v122 = v122 + v133 * v131;
      v134 = *(double *)(v227 + 8 * v132);
      if ( v134 <= -1.0e12 )
      {
        ++v121;
        goto LABEL_169;
      }
      ++v127;
      v123 = v123 + v131 * v134;
      if ( v127 != v125 )
        continue;
      break;
    }
LABEL_176:
    if ( v128 >= 2 )
      v128 = 2;
    v135 = v128 | (v121 << 16);
    if ( v121 >= 2 )
      v135 = v128 | 0x20000;
LABEL_180:
    *(_DWORD *)(v214 + 4 * v117) = v135;
    *(double *)&v8[v117] = v123;
    *(double *)(v7 + 8 * v117++) = v122;
    if ( v232 > (int)v117 )
      continue;
    break;
  }
LABEL_181:
  if ( v231 <= 0 )
    goto LABEL_261;
LABEL_182:
  v136 = 0;
  while ( 2 )
  {
    if ( *(_DWORD *)(v210 + 4 * v136) == 1 )
    {
      v137 = *((double *)v217 + v136);
      if ( v137 > -1.0e10 )
      {
        v138 = *(int *)(v216 + 4 * v136);
        v139 = *(int *)(v218 + 4 * v138);
        v140 = (int *)(v214 + 4 * v139);
        v141 = *v140 >> 16;
        if ( v141 <= 1 || (*v140 & 0x3Fu) <= 1 )
        {
          v142 = *(double *)(v7 + 8 * v139);
          v143 = *(double *)&v8[v139];
          v144 = *(double *)(v219 + 8 * v138);
          if ( v144 <= 0.0 )
          {
            if ( v137 <= 0.0 )
            {
              v209 = v233[v139];
              if ( v209 > -1.0e12
                && v209 + 0.0000001 > *(double *)(v228 + 8 * v136) * v144 + v142
                && v144 * *(double *)(v227 + 8 * v136) + v143 > v209 - 0.0000001 )
              {
                *(_DWORD *)(v99 + 4 * v139) = -11;
                *v140 = (int)&loc_A000A;
              }
            }
          }
          else
          {
            v145 = *(double *)(v227 + 8 * v136);
            if ( v145 > -1.0e12 )
            {
              if ( (*v140 & 0x3F) != 0 )
                v142 = -9.999999999999999e59;
              else
                v142 = v142 - v145 * v144;
            }
            else if ( (*v140 & 0x3Fu) > 1 )
            {
              v146 = *(double *)(v228 + 8 * v136);
              v142 = -9.999999999999999e59;
              if ( v146 < 1.0e12 )
                goto LABEL_192;
              goto LABEL_194;
            }
            v146 = *(double *)(v228 + 8 * v136);
            if ( v146 < 1.0e12 )
            {
LABEL_192:
              if ( !v141 )
              {
                v143 = v143 - v144 * v146;
                goto LABEL_194;
              }
            }
            else if ( v141 <= 1 )
            {
              goto LABEL_194;
            }
            v143 = 9.999999999999999e59;
LABEL_194:
            if ( v137 <= 0.0 )
            {
              v147 = v234[v139];
              if ( v147 < 1.0e12 && v146 * v144 + v142 > v147 - 0.0000001 && v147 + 0.0000001 > v145 * v144 + v143 )
              {
                *(_DWORD *)(v99 + 4 * v139) = 1;
                *v140 = (int)&loc_A000A;
              }
            }
          }
        }
      }
    }
    if ( v231 > (int)++v136 )
      continue;
    break;
  }
  if ( v232 <= 0 )
    return a2;
LABEL_261:
  v168 = 0;
  v211 = v232;
  while ( 2 )
  {
    while ( 2 )
    {
      v169 = *(_DWORD *)(v99 + 4 * v168);
      v170 = v168;
      if ( abs32(v169) != 1 || (v171 = *(_DWORD *)(v240 + 4 * v168), v171 <= 1) )
      {
LABEL_262:
        if ( v232 <= (int)++v168 )
          goto LABEL_283;
        continue;
      }
      break;
    }
    v172 = *(_DWORD *)(v239 + 4 * v168);
    v173 = v172 + v171;
    if ( v169 == 1 )
      v174 = v234[v168];
    else
      v174 = v233[v168];
    if ( v172 < v173 )
    {
      v175 = 0;
      v176 = (int *)(v242 + 4LL * v172);
      v177 = 0;
      v178 = (unsigned __int64 *)(v244 + 8LL * v172);
      v179 = v242 + 4 + 4 * (v172 + (unsigned __int64)(unsigned int)(v173 - v172 - 1));
      v180 = 0;
      v181 = 0;
      do
      {
        while ( 1 )
        {
          v183 = *v176;
          v182 = *v178;
          v184 = *(double *)(v228 + 8 * v183);
          v185 = *(double *)(v227 + 8 * v183);
          if ( v184 > v185 )
            break;
          ++v176;
          ++v178;
          v174 = v174 - v185 * *(double *)&v182;
          if ( (int *)v179 == v176 )
            goto LABEL_281;
        }
        if ( *(double *)&v177 == 0.0 )
        {
          v175 = 1;
        }
        else if ( *(double *)&v182 == *(double *)&v177 )
        {
          v182 = v177;
          ++v175;
        }
        else
        {
          v114 = -*(double *)&v177 == *(double *)&v182;
          v182 = v177;
          if ( !v114 )
            v180 = 1;
        }
        if ( *((_BYTE *)this + 440) && (*(_BYTE *)(*((_QWORD *)this + 45) + v183) & 2) != 0 )
          goto LABEL_262;
        if ( *(_BYTE *)(v215 + v183) )
        {
          if ( v185 != 0.0 || v184 != 1.0 )
            goto LABEL_262;
          v177 = v182;
          ++v181;
        }
        else
        {
          ++v180;
          v177 = v182;
        }
        ++v176;
        ++v178;
      }
      while ( (int *)v179 != v176 );
LABEL_281:
      if ( v181 )
      {
        if ( !v180 )
        {
          if ( v174 == 0.0 )
          {
            if ( v175 == 1 && v181 == 2 )
              goto LABEL_282;
          }
          else if ( v169 == 1 && v174 == 1.0 && v181 == v175 && *(double *)&v177 == 1.0 )
          {
            goto LABEL_282;
          }
        }
        goto LABEL_262;
      }
    }
LABEL_282:
    ++v168;
    *(_DWORD *)(v99 + 4LL * v211++) = v170;
    if ( v232 > (int)v168 )
      continue;
    break;
  }
LABEL_283:
  v186 = v211 - v232;
  if ( v211 - v232 > 0 )
  {
    v187 = operator new[](24LL * v186);
    v188 = v187;
    v189 = (int *)(v99 + 4 * v245);
    v190 = v187 + 24LL * (unsigned int)(v186 - 1) + 24;
    while ( 1 )
    {
      while ( 1 )
      {
        v191 = *v189;
        v192 = *v189;
        v193 = &v233[v191];
        v194 = &v234[v191];
        *(double *)v188 = *v193;
        v195 = *(_QWORD *)v194;
        *(_DWORD *)(v188 + 16) = v191;
        v196 = *(_DWORD *)(v99 + 4 * v191);
        *(_QWORD *)(v188 + 8) = v195;
        if ( v196 == 1 )
          break;
        if ( v196 == -1 )
        {
          v197 = (char *)(*((_QWORD *)this + 50) + v191);
          *v194 = *v193;
          v198 = *v197;
          if ( (*v197 & 1) == 0 )
            goto LABEL_289;
        }
LABEL_286:
        v188 += 24;
        ++v189;
        if ( v190 == v188 )
          goto LABEL_290;
      }
      v197 = (char *)(*((_QWORD *)this + 50) + v191);
      *v193 = *v194;
      v198 = *v197;
      if ( (*v197 & 1) != 0 )
        goto LABEL_286;
LABEL_289:
      v188 += 24;
      ++v189;
      *v197 = v198 | 1;
      v199 = *((int *)this + 108);
      v200 = *((_QWORD *)this + 53);
      *((_DWORD *)this + 108) = v199 + 1;
      *(_DWORD *)(v200 + 4 * v199) = v192;
      if ( v190 == v188 )
      {
LABEL_290:
        v201 = operator new(0x20u);
        v202 = a2;
        *(_DWORD *)(v201 + 16) = v186;
        *(_QWORD *)(v201 + 24) = v187;
        a2 = (CoinPresolveMatrix *)v201;
        *(_QWORD *)(v201 + 8) = v202;
        *(_QWORD *)v201 = &off_4D1BC0;
        return a2;
      }
    }
  }
  return a2;
}

