__int64 __fastcall ClpSimplexDual::whileIterating(
        ClpSimplexDual *this,
        double **a2,
        int a3,
        double a4,
        double a5,
        double a6,
        double a7)
{
  CoinIndexedVector **v7; // r12
  CoinIndexedVector **v8; // rbp
  CoinIndexedVector *v11; // rdi
  double v12; // xmm0_8
  __int64 v13; // rax
  unsigned __int64 v14; // rdi
  __int64 v15; // rax
  int v16; // r8d
  double *v17; // rdi
  double *v18; // r9
  int v19; // ecx
  double *v20; // rdx
  double *v21; // rax
  double v22; // xmm0_8
  __int64 v23; // rax
  __int64 v24; // rsi
  int v25; // eax
  int v26; // ebp
  __int64 v27; // rcx
  _BYTE *v28; // rdi
  __int64 v29; // rdx
  int v30; // r14d
  int v31; // r12d
  CoinMessageHandler *v32; // rax
  __int64 v33; // rax
  double v34; // xmm1_8
  __int64 v35; // rdx
  __int64 v36; // rax
  int v37; // eax
  const int *v38; // rdx
  CoinIndexedVector *v39; // rdi
  double v40; // xmm0_8
  __int64 v41; // rdi
  __int64 v42; // r9
  __int64 v43; // rax
  CoinIndexedVector *v44; // rdx
  CoinIndexedVector *v45; // rsi
  int v46; // r8d
  double v47; // xmm0_8
  __int64 v48; // rax
  int v49; // esi
  double v50; // xmm1_8
  double v51; // xmm0_8
  int v52; // eax
  void *v53; // rdi
  int v54; // eax
  __int64 v55; // rdx
  __int64 v56; // rax
  int v57; // ecx
  double v58; // xmm1_8
  int v59; // eax
  int v60; // eax
  __int64 v61; // rcx
  __int64 v62; // rdx
  int v63; // edx
  CoinMessageHandler *v64; // rax
  CoinMessageHandler *v65; // rdi
  __int64 v66; // rax
  CoinIndexedVector *v67; // rdi
  double v68; // xmm1_8
  int v69; // eax
  double *v70; // rsi
  int v71; // ecx
  bool v72; // zf
  int v73; // ecx
  double *v74; // r8
  double *v75; // rdx
  double *v76; // rax
  __int64 v77; // xmm0_8
  __int64 v78; // rax
  CoinIndexedVector *v80; // rdi
  __int64 v81; // rdi
  __int64 v82; // r9
  __int64 v83; // rax
  double v84; // xmm0_8
  double v85; // xmm1_8
  double v86; // xmm1_8
  double v87; // xmm4_8
  CoinMessageHandler *v88; // rax
  CoinMessageHandler *v89; // rax
  double v90; // xmm0_8
  __int64 v91; // rax
  __int64 v92; // rdx
  __int64 v93; // rax
  int v94; // eax
  double v95; // xmm0_8
  CoinMessageHandler *v96; // rax
  CoinMessageHandler *v97; // rdi
  __int64 v98; // rax
  int v99; // eax
  CoinIndexedVector *v100; // rdi
  double v101; // xmm0_8
  __int64 v102; // rax
  unsigned __int64 v103; // rdi
  __int64 v104; // rax
  CoinIndexedVector *v105; // rdi
  int v106; // r10d
  unsigned __int64 v107; // rsi
  _QWORD *v108; // r8
  int v109; // edi
  __int64 v110; // rax
  unsigned int v111; // edx
  int v112; // r11d
  __int64 v113; // rcx
  unsigned int v114; // r9d
  __int64 v115; // rax
  unsigned int v116; // r9d
  unsigned __int64 v117; // r12
  _QWORD *v118; // rcx
  signed int v119; // edi
  __int64 v120; // rax
  int v121; // edi
  double v122; // xmm2_8
  int v123; // eax
  double v124; // xmm4_8
  double v125; // xmm0_8
  double v126; // xmm1_8
  ClpFactorization *v127; // rdi
  __int64 v128; // rax
  int v130; // eax
  double v131; // xmm0_8
  bool v132; // cl
  __int64 v133; // rdx
  __int64 v134; // rax
  int v135; // eax
  int v136; // eax
  __int64 v137; // rcx
  __int64 v138; // rdx
  double v139; // xmm0_8
  double v140; // xmm0_8
  double v141; // xmm0_8
  __int64 v142; // rdx
  __int64 v143; // xmm0_8
  int v144; // r14d
  __int64 v145; // rcx
  int i; // edx
  __int64 v147; // rax
  int v148; // ecx
  __int64 v149; // rdx
  __int64 v150; // rax
  __int64 v151; // rcx
  __int64 v152; // rdx
  char *v154; // rax
  int updated; // eax
  _BYTE *v156; // rcx
  CoinIndexedVector *v157; // rdx
  double v158; // xmm0_8
  int v159; // ecx
  __int64 v160; // rdx
  CoinFactorization *v161; // rdi
  int v162; // ecx
  int v163; // eax
  double v164; // xmm0_8
  double v165; // xmm0_8
  CoinMessageHandler *v166; // rax
  unsigned __int64 v167; // rax
  double v168; // xmm0_8
  __int64 v169; // rax
  __int64 v170; // rdx
  int v171; // eax
  __int64 v172; // rax
  __int64 v173; // rdx
  int v174; // eax
  __int64 v175; // rdx
  __int64 v176; // rax
  int v177; // r12d
  int v178; // eax
  int v179; // eax
  int v180; // eax
  __int64 v181; // rax
  int v182; // edx
  int v183; // r9d
  int v184; // r11d
  int v185; // r10d
  int v186; // r8d
  int *v187; // rsi
  __int64 v188; // rbp
  __int64 v189; // rax
  __int64 v190; // rdx
  int v191; // edi
  int v192; // ebp
  CoinMessageHandler *v193; // rax
  CoinMessageHandler *v194; // rdi
  __int64 v195; // rax
  int v196; // eax
  CoinIndexedVector *v197; // rdi
  CoinIndexedVector *v198; // rcx
  CoinIndexedVector *v199; // rdx
  CoinIndexedVector *v200; // rsi
  CoinIndexedVector *v201; // rdi
  int v202; // r9d
  CoinIndexedVector *v203; // rbp
  double *v204; // rbp
  int v205; // eax
  __int64 v206; // rdi
  unsigned __int64 v207; // rdx
  __int64 v208; // rsi
  double v209; // xmm1_8
  char v210; // al
  double v211; // xmm2_8
  __int64 v212; // rax
  __int64 v213; // rdx
  int v214; // eax
  ClpLinearObjective *v215; // rbp
  __int64 v216; // rax
  double v217; // xmm1_8
  double v218; // xmm0_8
  CoinIndexedVector *v219; // r12
  __int64 v220; // rcx
  __int64 v221; // r14
  __int64 v222; // r8
  int v223; // eax
  __int64 v224; // rdx
  __int64 v225; // rdi
  __int64 v226; // rsi
  __int64 v227; // rax
  __int64 v228; // rdx
  __int64 v229; // r9
  int v230; // ecx
  __int64 v231; // rdx
  double v232; // xmm1_8
  double v233; // xmm2_8
  __int64 v234; // rax
  __int64 v235; // rdx
  int v236; // eax
  CoinOtherFactorization *v237; // rdi
  double v238; // [rsp+8h] [rbp-80h]
  _DWORD *v239; // [rsp+10h] [rbp-78h]
  int v241; // [rsp+18h] [rbp-70h]
  int v242; // [rsp+18h] [rbp-70h]
  unsigned int v243; // [rsp+1Ch] [rbp-6Ch]
  __int64 v244; // [rsp+20h] [rbp-68h]
  double v245; // [rsp+20h] [rbp-68h]
  __int64 v246; // [rsp+20h] [rbp-68h]
  double v247; // [rsp+20h] [rbp-68h]
  double v248; // [rsp+20h] [rbp-68h]
  char v249; // [rsp+20h] [rbp-68h]
  __int64 v250; // [rsp+28h] [rbp-60h]
  __int64 v251; // [rsp+28h] [rbp-60h]
  double v252; // [rsp+28h] [rbp-60h]
  double v253; // [rsp+30h] [rbp-58h]
  double v254; // [rsp+40h] [rbp-48h] BYREF
  double v255[8]; // [rsp+48h] [rbp-40h] BYREF

  v7 = (CoinIndexedVector **)((char *)this + 1088);
  v8 = (CoinIndexedVector **)((char *)this + 1056);
  do
  {
    v11 = *v8++;
    CoinIndexedVector::clear(v11);
  }
  while ( v7 != v8 );
  CoinIndexedVector::clear(*((CoinIndexedVector **)this + 138));
  CoinIndexedVector::clear(*((CoinIndexedVector **)this + 139));
  v12 = *((double *)this + 95);
  if ( v12 <= 10.0 )
  {
    v102 = *(_QWORD *)(*((_QWORD *)this + 158) + 8LL);
    if ( v102 )
      *(_QWORD *)(v102 + 24) = 0x3FF0000000000000LL;
  }
  else
  {
    v12 = v12 / 10.0;
    v13 = *(_QWORD *)(*((_QWORD *)this + 158) + 8LL);
    a5 = fmin(100.0, v12);
    if ( v13 )
      *(double *)(v13 + 24) = a5;
  }
  v253 = *((double *)this + 111);
  if ( *a2 )
  {
    v14 = *((int *)this + 26);
    if ( v14 > 0x1FFFFFFFFFFFFFFELL )
LABEL_416:
      __cxa_throw_bad_array_new_length();
    v15 = operator new[](4 * v14);
    v16 = *((_DWORD *)this + 26);
    v239 = (_DWORD *)v15;
    v17 = *((double **)this + 147);
    v18 = *a2;
    v19 = *((_DWORD *)this + 27) + v16;
    if ( v19 && v17 != v18 )
    {
      if ( v19 >> 3 > 0 )
      {
        v20 = *a2;
        v21 = *((double **)this + 147);
        do
        {
          v22 = *v20;
          v21 += 8;
          v20 += 8;
          *(v21 - 8) = v22;
          *(v21 - 7) = *(v20 - 7);
          *(v21 - 6) = *(v20 - 6);
          *(v21 - 5) = *(v20 - 5);
          *(v21 - 4) = *(v20 - 4);
          *(v21 - 3) = *(v20 - 3);
          *(v21 - 2) = *(v20 - 2);
          v12 = *(v20 - 1);
          *(v21 - 1) = v12;
        }
        while ( v21 != &v17[8 * (unsigned int)((v19 >> 3) - 1) + 8] );
        v23 = ((v19 >> 3) - 1 + 1LL) << 6;
        v18 = (double *)((char *)v18 + v23);
        v17 = (double *)((char *)v17 + v23);
      }
      switch ( v19 % 8 )
      {
        case 1:
          goto LABEL_21;
        case 2:
          goto LABEL_20;
        case 3:
          goto LABEL_19;
        case 4:
          goto LABEL_18;
        case 5:
          goto LABEL_17;
        case 6:
          goto LABEL_16;
        case 7:
          v17[6] = v18[6];
LABEL_16:
          v17[5] = v18[5];
LABEL_17:
          v17[4] = v18[4];
LABEL_18:
          v17[3] = v18[3];
LABEL_19:
          v17[2] = v18[2];
LABEL_20:
          v17[1] = v18[1];
LABEL_21:
          v12 = *v18;
          *v17 = *v18;
          break;
        default:
          break;
      }
    }
    if ( v16 > 0 )
    {
      a5 = NAN;
      v24 = 0;
      v25 = 0;
      a6 = -1.0e50;
      v26 = 0;
      a7 = 1.0e50;
      while ( 1 )
      {
        while ( 1 )
        {
          v27 = *(int *)(*((_QWORD *)this + 157) + v24);
          v28 = (_BYTE *)(v27 + *((_QWORD *)this + 33));
          if ( (*v28 & 0x40) == 0 )
            break;
LABEL_30:
          ++v25;
          v24 += 4;
          if ( v25 >= v16 )
            goto LABEL_31;
        }
        v12 = fabs(*(double *)(*((_QWORD *)this + 147) + 8 * v27));
        if ( v12 > *((double *)this + 109) )
        {
          v12 = *(double *)(*((_QWORD *)this + 123) + 8 * v27);
          if ( (v12 > -1.0e50 || *(double *)(*((_QWORD *)this + 126) + 8 * v27) < 1.0e50) && (*v28 & 0x20) != 0 )
          {
            v16 = *((_DWORD *)this + 26);
            v29 = v26++;
            v239[v29] = v25;
          }
          goto LABEL_30;
        }
        ++v25;
        v24 += 4;
        *v28 &= ~0x20u;
        v16 = *((_DWORD *)this + 26);
        if ( v25 >= v16 )
        {
LABEL_31:
          if ( v26 )
            goto LABEL_32;
          break;
        }
      }
    }
    operator delete[](v239);
    if ( *a2 )
      operator delete[](*a2);
    *a2 = nullptr;
    v145 = 0;
    for ( i = 0; *((_DWORD *)this + 26) > i; *(_BYTE *)(*((_QWORD *)this + 33) + v147) &= ~0x20u )
    {
      ++i;
      v147 = *(int *)(*((_QWORD *)this + 157) + v145);
      v145 += 4;
    }
    v26 = 0;
    v239 = nullptr;
LABEL_32:
    a3 = 1;
  }
  else
  {
    v26 = 0;
    v239 = nullptr;
  }
  v30 = *((_DWORD *)this + 80);
  v243 = -1;
  while ( 1 )
  {
    if ( v30 != -1 )
      goto LABEL_95;
    v31 = -1;
    if ( v26 )
      v31 = v239[--v26];
    ClpSimplexDual::dualRow(this, v31);
    if ( *((int *)this + 292) < 0 )
      break;
    v32 = (CoinMessageHandler *)CoinMessageHandler::message(
                                  *((CoinMessageHandler **)this + 43),
                                  32,
                                  (ClpSimplexDual *)((char *)this + 416));
    v33 = CoinMessageHandler::operator<<(v32);
    CoinMessageHandler::operator<<(v33, 0, v12);
    (*(void (__fastcall **)(_QWORD, double, double, double, double))(**((_QWORD **)this + 155) + 32LL))(
      *((_QWORD *)this + 155),
      v12,
      a5,
      a6,
      a7);
    v34 = *((double *)this + 116);
    v238 = v34;
    if ( *((int *)this + 77) <= 100 )
      v238 = 0.1 * v34;
    v35 = *((_QWORD *)this + 158);
    v36 = *(_QWORD *)(v35 + 8);
    if ( v36 )
      v37 = *(_DWORD *)(v36 + 68);
    else
      v37 = *(_DWORD *)(*(_QWORD *)(v35 + 16) + 52LL);
    if ( v37 > 10 )
      goto LABEL_110;
    if ( v37 )
    {
      if ( v253 == 0.0 )
      {
        if ( v37 > 5 )
          v34 = v34 * 100.0;
        v238 = v34;
        goto LABEL_44;
      }
LABEL_110:
      v238 = v34 * 1000.0;
    }
LABEL_44:
    v38 = (const int *)((char *)this + 1168);
    v39 = *((CoinIndexedVector **)this + 132);
    if ( v31 < 0 )
    {
      v255[0] = (double)*((int *)this + 291);
      CoinIndexedVector::createPacked(v39, 1, v38, v255);
      ClpFactorization::updateColumnTranspose(
        *((ClpFactorization **)this + 158),
        *((CoinIndexedVector **)this + 133),
        *((CoinIndexedVector **)this + 132));
      if ( *((int *)this + 83) < -1 )
        *((_DWORD *)this + 431) = 1;
      v80 = *((CoinIndexedVector **)this + 135);
      *((double *)this + 218) = v238;
      CoinIndexedVector::clear(v80);
      v81 = *((_QWORD *)this + 26);
      *((_DWORD *)this + 288) = -1;
      if ( v81 )
      {
        v72 = (*((_BYTE *)this + 728) & 8) == 0;
        v82 = *((_QWORD *)this + 28);
        v83 = *((_QWORD *)this + 29);
        *((_QWORD *)this + 28) = 0;
        *((_QWORD *)this + 29) = 0;
        if ( !v72 )
          *((_DWORD *)this + 431) = 1;
        v251 = v83;
        v246 = v82;
        (*(void (__fastcall **)(__int64, ClpSimplexDual *, _QWORD, _QWORD, _QWORD, double))(*(_QWORD *)v81 + 392LL))(
          v81,
          this,
          *((_QWORD *)this + 132),
          *((_QWORD *)this + 133),
          *((_QWORD *)this + 138),
          -1.0);
        *((_QWORD *)this + 28) = v246;
        *((_QWORD *)this + 29) = v251;
      }
      else
      {
        if ( (*((_BYTE *)this + 728) & 8) != 0 && !*((_QWORD *)this + 28) )
          *((_DWORD *)this + 431) = 1;
        (*(void (__fastcall **)(_QWORD, ClpSimplexDual *, _QWORD, _QWORD, _QWORD, double))(**((_QWORD **)this + 24)
                                                                                         + 392LL))(
          *((_QWORD *)this + 24),
          this,
          *((_QWORD *)this + 132),
          *((_QWORD *)this + 133),
          *((_QWORD *)this + 138),
          -1.0);
      }
      ClpSimplexDual::dualColumn(
        this,
        *((CoinIndexedVector **)this + 132),
        *((CoinIndexedVector **)this + 138),
        *((CoinIndexedVector **)this + 135),
        *((CoinIndexedVector **)this + 139),
        v238,
        nullptr);
      v52 = *((_DWORD *)this + 288);
      v245 = v238;
      if ( v52 >= 0 )
        goto LABEL_128;
      if ( *((double *)this + 116) >= v238 )
      {
        v151 = *((_QWORD *)this + 158);
        v152 = *(_QWORD *)(v151 + 8);
        if ( !(v152 ? *(_DWORD *)(v152 + 68) : *(_DWORD *)(*(_QWORD *)(v151 + 16) + 52LL)) )
          *((_DWORD *)this + 80) = 1;
      }
LABEL_61:
      if ( v52 >= 0 )
      {
LABEL_128:
        v247 = -*((double *)this + 99) * (double)*((int *)this + 291);
        ClpSimplex::unpackPacked(this, *((CoinIndexedVector **)this + 133));
        v84 = (*(double (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 155) + 8LL))(
                *((_QWORD *)this + 155),
                *((_QWORD *)this + 132),
                *((_QWORD *)this + 134),
                *((_QWORD *)this + 135),
                *((_QWORD *)this + 133));
        v85 = *((double *)this + 95);
        *((double *)this + 99) = v84;
        if ( v85 <= 10.0 )
        {
          v86 = 0.0000001;
        }
        else
        {
          a6 = fmin(0.0001, v85 * 0.00000001);
          v86 = a6;
        }
        v87 = fabs(v247);
        if ( v87 < 1.0e-12 || (a6 = fabs(v84), a6 < 1.0e-12) || (a6 = a6 + 1.0, v86 = v86 * a6, fabs(v247 - v84) > v86) )
        {
          v252 = v87;
          v88 = (CoinMessageHandler *)CoinMessageHandler::message(
                                        *((CoinMessageHandler **)this + 43),
                                        33,
                                        (ClpSimplexDual *)((char *)this + 416));
          v89 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v88);
          v90 = *((double *)this + 99);
          v91 = CoinMessageHandler::operator<<(v89);
          CoinMessageHandler::operator<<(v91, 0, v90);
          v92 = *((_QWORD *)this + 158);
          a7 = 1.0e-12;
          v93 = *(_QWORD *)(v92 + 8);
          if ( v93 )
            v94 = *(_DWORD *)(v93 + 68);
          else
            v94 = *(_DWORD *)(*(_QWORD *)(v92 + 16) + 52LL);
          if ( v94 )
          {
            (*(void (__fastcall **)(_QWORD, double, double, double, double, double))(**((_QWORD **)this + 155) + 40LL))(
              *((_QWORD *)this + 155),
              v90,
              v86,
              a6,
              1.0e-12,
              v252);
            v201 = *((CoinIndexedVector **)this + 132);
            *((_DWORD *)this + 80) = -2;
            CoinIndexedVector::clear(v201);
            CoinIndexedVector::clear(*((CoinIndexedVector **)this + 133));
            CoinIndexedVector::clear(*((CoinIndexedVector **)this + 138));
            v243 = -2;
            goto LABEL_95;
          }
          v95 = fabs(*((double *)this + 99));
          if ( v252 >= 0.00000001 && v95 >= 0.00000001 )
            a6 = (v95 + 1.0) * 0.0001;
          else
            a6 = v95 * 0.1;
          if ( v252 < 1.0e-12 || v95 < 1.0e-12 || (v95 = fabs(v247 - *((double *)this + 99)), v95 > a6) )
          {
            (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 155) + 40LL))(*((_QWORD *)this + 155));
            v96 = (CoinMessageHandler *)CoinMessageHandler::message(
                                          *((CoinMessageHandler **)this + 43),
                                          12,
                                          (ClpSimplexDual *)((char *)this + 416));
            v97 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v96);
            v98 = CoinMessageHandler::operator<<(v97);
            CoinMessageHandler::operator<<(v98, 0, v95);
            ClpFactorization::saferTolerances(*((ClpFactorization **)this + 158), -0.99, -1.03);
            ClpSimplex::setFlagged(this, *((_DWORD *)this + 290));
            v99 = *((_DWORD *)this + 77);
            v100 = *((CoinIndexedVector **)this + 132);
            *((_DWORD *)this + 425) = 0;
            *((_DWORD *)this + 332) = v99;
            CoinIndexedVector::clear(v100);
            CoinIndexedVector::clear(*((CoinIndexedVector **)this + 133));
            CoinIndexedVector::clear(*((CoinIndexedVector **)this + 138));
            a5 = 1.0e-10;
            v12 = fabs(*((double *)this + 99));
            if ( v12 < 1.0e-10 && v252 < 0.00000001 && *((int *)this + 77) > 100 )
            {
              *((_DWORD *)this + 80) = 1;
              v243 = 1;
              goto LABEL_95;
            }
            goto LABEL_209;
          }
        }
        v254 = 0.0;
        if ( v31 == -1 )
        {
          v154 = (char *)(*((_QWORD *)this + 33) + *((int *)this + 288));
          v249 = *v154;
          *v154 = *v154 & 0xF8 | 1;
          updated = ClpSimplexDual::updateDualsInDual(
                      this,
                      *((CoinIndexedVector **)this + 132),
                      *((CoinIndexedVector **)this + 138),
                      *((CoinIndexedVector **)this + 134),
                      *((double *)this + 100),
                      &v254,
                      0);
          v156 = (_BYTE *)(*((_QWORD *)this + 33) + *((int *)this + 288));
          *v156 = v249 & 7 | *v156 & 0xF8;
          v122 = *((double *)this + 108);
          if ( updated )
          {
            v157 = *((CoinIndexedVector **)this + 134);
            if ( *((_DWORD *)v157 + 4) )
            {
              ClpFactorization::updateColumn(
                *((ClpFactorization **)this + 158),
                *((CoinIndexedVector **)this + 135),
                v157,
                0);
              (*(void (__fastcall **)(_QWORD, _QWORD, double *, double))(**((_QWORD **)this + 155) + 16LL))(
                *((_QWORD *)this + 155),
                *((_QWORD *)this + 134),
                &v254,
                1.0);
            }
            v158 = *(double *)(*((_QWORD *)this + 150) + 8LL * *((int *)this + 290));
            v123 = *((_DWORD *)this + 291);
            *((double *)this + 106) = v158;
            if ( v123 < 0 )
              v124 = v158 - *((double *)this + 107);
            else
              v124 = *((double *)this + 105) - v158;
            *((double *)this + 108) = v124;
          }
          else
          {
            v123 = *((_DWORD *)this + 291);
            v124 = *((double *)this + 108);
          }
        }
        else
        {
          ClpSimplexDual::updateDualsInValuesPass(
            this,
            *((CoinIndexedVector **)this + 132),
            *((CoinIndexedVector **)this + 138),
            *((double *)this + 100));
          v122 = *((double *)this + 108);
          v123 = *((_DWORD *)this + 291);
          v124 = v122;
        }
        v125 = *((double *)this + 99);
        v248 = -v124 * (double)v123 / v125;
        a7 = 1.0e-12 * fabs(*((double *)this + 9));
        v126 = -0.00001;
        a6 = fabs(v122 * (double)v123 / v125 * *((double *)this + 104)) + v254;
        if ( a7 >= 0.00001 )
        {
          a7 = -a7;
          v126 = a7;
        }
        v127 = *((ClpFactorization **)this + 158);
        if ( v126 > a6 )
        {
          v128 = *((_QWORD *)v127 + 1);
          if ( v128 ? *(_DWORD *)(v128 + 68) : *(_DWORD *)(*((_QWORD *)v127 + 2) + 52LL) )
          {
            (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 155) + 40LL))(*((_QWORD *)this + 155));
            *((_DWORD *)this + 80) = -2;
            v243 = -2;
            goto LABEL_95;
          }
        }
        a5 = v238;
        v130 = ClpFactorization::replaceColumn(
                 v127,
                 this,
                 *((CoinIndexedVector **)this + 134),
                 *((CoinIndexedVector **)this + 133),
                 *((_DWORD *)this + 292),
                 v125,
                 (*((_DWORD *)this + 182) & 0x10) != 0,
                 v238);
        v131 = fabs(*((double *)this + 108));
        if ( v131 <= 1.0e50 && v130 != 2 )
        {
          v132 = v130 == 4;
          if ( v130 != 1 && v130 != 4 )
          {
            if ( v130 == 3 )
            {
              v181 = *(_QWORD *)(*((_QWORD *)this + 158) + 8LL);
              if ( v181 )
              {
                v182 = *(_DWORD *)(v181 + 68);
                if ( (double)*(int *)(v181 + 64) * 0.5 > (double)v182 && v182 <= 199 )
                  *(double *)(v181 + 16) = 1.1 * *(double *)(v181 + 16);
              }
LABEL_286:
              *((_DWORD *)this + 80) = -2;
            }
            else if ( v130 == 5 )
            {
              goto LABEL_286;
            }
LABEL_196:
            if ( *((double *)this + 100) < 0.0 && v31 == -1 )
              *((_QWORD *)this + 100) = 0;
            ClpSimplexDual::flipBounds(this, *((CoinIndexedVector **)this + 132), *((CoinIndexedVector **)this + 138));
            (*(void (__fastcall **)(_QWORD, _QWORD, double *, double))(**((_QWORD **)this + 155) + 16LL))(
              *((_QWORD *)this + 155),
              *((_QWORD *)this + 133),
              &v254,
              v248);
            v136 = *((_DWORD *)this + 291);
            v137 = *((_QWORD *)this + 147);
            v138 = *((int *)this + 288);
            v139 = *((double *)this + 108) / *((double *)this + 99) * (double)-v136;
            *((double *)this + 108) = v139;
            *(_QWORD *)(v137 + 8 * v138) = 0;
            a5 = *((double *)this + 102);
            if ( *((_DWORD *)this + 289) == -1 )
              v140 = v139 + *((double *)this + 103);
            else
              v140 = v139 + *((double *)this + 101);
            *((double *)this + 102) = v140;
            v141 = (v140 - a5) * *(double *)(*((_QWORD *)this + 129) + 8 * v138);
            v142 = *((int *)this + 290);
            v254 = v141 + v254;
            if ( v136 <= 0 )
            {
              v143 = *((_QWORD *)this + 107);
              *((_QWORD *)this + 106) = v143;
              if ( v31 == -1 )
              {
                a5 = -*((double *)this + 100);
                *(double *)(v137 + 8 * v142) = a5;
              }
            }
            else
            {
              v143 = *((_QWORD *)this + 105);
              *((_QWORD *)this + 106) = v143;
              if ( v31 == -1 )
              {
                a5 = *((double *)this + 100);
                *(double *)(v137 + 8 * v142) = a5;
              }
            }
            *(_QWORD *)(*((_QWORD *)this + 150) + 8 * v142) = v143;
            v12 = v254;
            v144 = ClpSimplex::housekeeping(this, v254);
            if ( !*a2 && (a3 & 0xFFFFFFFD) != 0 )
            {
              v166 = (CoinMessageHandler *)CoinMessageHandler::message(
                                             *((CoinMessageHandler **)this + 43),
                                             48,
                                             (ClpSimplexDual *)((char *)this + 416));
              CoinMessageHandler::operator<<(v166);
              ClpSimplexDual::originalBound(this, *((_DWORD *)this + 288));
              ClpSimplexDual::changeBound(this, *((_DWORD *)this + 290));
              goto LABEL_269;
            }
            ClpSimplexDual::originalBound(this, *((_DWORD *)this + 288));
            ClpSimplexDual::changeBound(this, *((_DWORD *)this + 290));
            if ( v144 == 1 || v31 == -2 )
            {
LABEL_269:
              *((_DWORD *)this + 80) = -2;
            }
            else if ( v144 == 2 )
            {
              *((_DWORD *)this + 80) = 3;
              v243 = 3;
              goto LABEL_95;
            }
            if ( (***((int (__fastcall ****)(_QWORD, __int64))this + 45))(*((_QWORD *)this + 45), 100) >= 0 )
            {
              v243 = 4;
              *((_QWORD *)this + 40) = 0x6400000005LL;
              goto LABEL_95;
            }
            goto LABEL_209;
          }
          v133 = *((_QWORD *)this + 158);
          v134 = *(_QWORD *)(v133 + 8);
LABEL_191:
          if ( v134 )
            v135 = *(_DWORD *)(v134 + 68);
          else
            v135 = *(_DWORD *)(*(_QWORD *)(v133 + 16) + 52LL);
          if ( v135 > 5 || v132 )
          {
            *((_DWORD *)this + 80) = -2;
            v243 = -3;
          }
          goto LABEL_196;
        }
        v133 = *((_QWORD *)this + 158);
        v134 = *(_QWORD *)(v133 + 8);
        if ( v134 )
          v159 = *(_DWORD *)(v134 + 68);
        else
          v159 = *(_DWORD *)(*(_QWORD *)(v133 + 16) + 52LL);
        if ( !v159 )
        {
          v131 = fabs(*((double *)this + 99));
          if ( v131 > 0.00001 )
          {
            v132 = 1;
            goto LABEL_191;
          }
        }
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 155) + 40LL))(*((_QWORD *)this + 155));
        v160 = *((_QWORD *)this + 158);
        v161 = *(CoinFactorization **)(v160 + 8);
        if ( v161 )
          v162 = *((_DWORD *)v161 + 17);
        else
          v162 = *(_DWORD *)(*(_QWORD *)(v160 + 16) + 52LL);
        if ( v162 )
        {
          v163 = *((_DWORD *)this + 182);
          if ( (v163 & 0x10) == 0 || v162 > 4 )
          {
            *((_DWORD *)this + 80) = -2;
            *((_DWORD *)this + 182) = v163 | 0x10;
            if ( v161 )
            {
              v164 = *(double *)v161;
            }
            else
            {
              v216 = *(_QWORD *)(v160 + 16);
              v243 = -2;
              if ( !v216 )
                goto LABEL_95;
              v164 = *(double *)(v216 + 8);
            }
            v243 = -2;
            if ( v164 < 0.4 && v162 <= 99 )
            {
              v165 = v164 * 1.05;
              if ( v161 )
              {
                CoinFactorization::pivotTolerance(v161, v165);
              }
              else
              {
                v237 = *(CoinOtherFactorization **)(v160 + 16);
                if ( v237 )
                  CoinOtherFactorization::pivotTolerance(v237, v165);
              }
            }
            goto LABEL_95;
          }
        }
        v193 = (CoinMessageHandler *)CoinMessageHandler::message(
                                       *((CoinMessageHandler **)this + 43),
                                       12,
                                       (ClpSimplexDual *)((char *)this + 416));
        v194 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v193);
        v195 = CoinMessageHandler::operator<<(v194);
        CoinMessageHandler::operator<<(v195, 0, v131);
        ClpSimplex::setFlagged(this, *((_DWORD *)this + 290));
        v196 = *((_DWORD *)this + 77);
        v197 = *((CoinIndexedVector **)this + 132);
        *((_DWORD *)this + 425) = 0;
        *((_DWORD *)this + 332) = v196;
        CoinIndexedVector::clear(v197);
        CoinIndexedVector::clear(*((CoinIndexedVector **)this + 133));
        CoinIndexedVector::clear(*((CoinIndexedVector **)this + 138));
        v12 = 0.0;
        v198 = *((CoinIndexedVector **)this + 133);
        v199 = *((CoinIndexedVector **)this + 138);
        v200 = *((CoinIndexedVector **)this + 132);
        v255[0] = 0.0;
        ClpSimplexDual::updateDualsInDual(this, v200, v199, v198, 0.0, v255, 1);
        CoinIndexedVector::clear(*((CoinIndexedVector **)this + 133));
        CoinIndexedVector::clear(*((CoinIndexedVector **)this + 138));
LABEL_209:
        v30 = *((_DWORD *)this + 80);
      }
      else
      {
        v53 = *((void **)this + 27);
        v54 = *((_DWORD *)this + 292);
        *((_DWORD *)this + 292) = -1;
        *((_DWORD *)this + 434) = v54;
        if ( v53 )
          operator delete[](v53);
        v55 = *((_QWORD *)this + 158);
        *((_QWORD *)this + 27) = 0;
        v56 = *(_QWORD *)(v55 + 8);
        if ( v56 )
          v57 = *(_DWORD *)(v56 + 68);
        else
          v57 = *(_DWORD *)(*(_QWORD *)(v55 + 16) + 52LL);
        if ( v57 > 1 && ((*((_BYTE *)this + 338) & 0x20) == 0 || v57 > 49) )
        {
          v58 = *((double *)this + 116);
LABEL_280:
          v67 = *((CoinIndexedVector **)this + 132);
LABEL_89:
          v68 = fabs(v58);
          *((double *)this + 116) = v68;
          if ( v56 )
          {
LABEL_90:
            v69 = *(_DWORD *)(v56 + 68);
LABEL_91:
            if ( v69 <= 4 && v68 > 0.00000001 )
              *((_QWORD *)this + 116) = 0x3E45798EE2308C3ALL;
            CoinIndexedVector::clear(v67);
            CoinIndexedVector::clear(*((CoinIndexedVector **)this + 138));
            v243 = 1;
            goto LABEL_95;
          }
LABEL_164:
          v69 = *(_DWORD *)(*(_QWORD *)(v55 + 16) + 52LL);
          goto LABEL_91;
        }
        v58 = *((double *)this + 116);
        if ( v58 > 0.00000001 || v58 <= 0.0 )
          goto LABEL_280;
        v59 = *((_DWORD *)this + 84);
        if ( (v59 & 0x1400) != 0 && (v59 & 0x200020) == 0 )
        {
          a5 = 1.0e13;
          if ( (v59 & 0x1000) == 0 )
            goto LABEL_75;
LABEL_74:
          a5 = 100000000.0;
          goto LABEL_75;
        }
        v103 = *((int *)this + 26);
        if ( v103 > 0xFFFFFFFFFFFFFFFLL )
          goto LABEL_416;
        v104 = operator new[](8 * v103);
        v105 = *((CoinIndexedVector **)this + 132);
        *((_QWORD *)this + 27) = v104;
        CoinIndexedVector::expand(v105);
        v106 = *((_DWORD *)this + 26);
        v107 = *(_QWORD *)(*((_QWORD *)this + 132) + 8LL);
        if ( v106 > 0 )
        {
          v108 = *((_QWORD **)this + 27);
          if ( (v107 >= (unsigned __int64)(v108 + 2) || (unsigned __int64)v108 >= v107 + 16)
            && (unsigned int)v106 > 0x18 )
          {
            v109 = 0;
            v110 = (v107 >> 3) & 1;
            if ( ((v107 >> 3) & 1) != 0 )
            {
              v109 = 1;
              *v108 = *(_QWORD *)v107;
            }
            v111 = 0;
            v112 = v106 - v110;
            v113 = (v107 >> 3) & 1;
            v114 = v106 - v110;
            v115 = 0;
            v116 = v114 >> 1;
            v117 = v107 + v113 * 8;
            v118 = &v108[v113];
            do
            {
              ++v111;
              *(_OWORD *)&v118[v115] = *(_OWORD *)(v117 + v115 * 8);
              v115 += 2;
            }
            while ( v111 < v116 );
            v119 = (v112 & 0xFFFFFFFE) + v109;
            if ( (v112 & 0xFFFFFFFE) != v112 )
            {
              v120 = v119;
              v121 = v119 + 1;
              v108[v120] = *(_QWORD *)(v107 + 8 * v120);
              if ( v106 > v121 )
                v108[v121] = *(_QWORD *)(v107 + 8LL * v121);
            }
          }
          else
          {
            v167 = 0;
            do
            {
              v108[v167 / 8] = *(_QWORD *)(v107 + v167);
              v167 += 8LL;
            }
            while ( 8LL * (unsigned int)(v106 - 1) + 8 != v167 );
          }
        }
        a5 = 1.0e13;
        if ( (*((_DWORD *)this + 84) & 0x1000) != 0 )
          goto LABEL_74;
LABEL_75:
        if ( !(unsigned int)ClpSimplexDual::checkFakeBounds(this) )
          a5 = 0.0;
        v60 = *((_DWORD *)this + 84);
        if ( ((v60 & 0x1000) != 0 || (v12 = 9.999999999999999e-12, v245 < 9.999999999999999e-12))
          && (v12 = *((double *)this + 98), v12 > a5) )
        {
          v61 = *((_QWORD *)this + 158);
          v62 = *(_QWORD *)(v61 + 8);
          if ( v62 )
            v63 = *(_DWORD *)(v62 + 68);
          else
            v63 = *(_DWORD *)(*(_QWORD *)(v61 + 16) + 52LL);
          a5 = 0.0001;
          if ( !v63 && *((_DWORD *)this + 308) == 1 )
            a5 = 0.000001;
          a6 = *((double *)this + 106);
          if ( a6 > *((double *)this + 107) + a5 || (v12 = *((double *)this + 105) - a5, v12 > a6) || (v60 & 0x40) == 0 )
          {
            *((_DWORD *)this + 80) = 1;
            if ( (unsigned int)ClpSimplexDual::numberAtFakeBound(this) )
            {
              v168 = *((double *)this + 112);
              if ( v168 < 0.001
                || *((double *)this + 111) > 0.00001
                || v168 < 100000.0
                && (*((_BYTE *)this + 337) & 4) != 0
                && ((v169 = *((_QWORD *)this + 158), (v170 = *(_QWORD *)(v169 + 8)) == 0)
                  ? (v171 = *(_DWORD *)(*(_QWORD *)(v169 + 16) + 52LL))
                  : (v171 = *(_DWORD *)(v170 + 68)),
                    v171) )
              {
                if ( v168 <= 50.0 )
                  goto LABEL_297;
LABEL_370:
                v212 = *((_QWORD *)this + 158);
                v213 = *(_QWORD *)(v212 + 8);
                if ( v213 )
                  v214 = *(_DWORD *)(v213 + 68);
                else
                  v214 = *(_DWORD *)(*(_QWORD *)(v212 + 16) + 52LL);
                if ( v214 <= 2 )
                {
LABEL_297:
                  if ( (*((_BYTE *)this + 729) & 1) != 0 )
                  {
                    v172 = *((_QWORD *)this + 158);
                    v173 = *(_QWORD *)(v172 + 8);
                    if ( v173 )
                      v174 = *(_DWORD *)(v173 + 68);
                    else
                      v174 = *(_DWORD *)(*(_QWORD *)(v172 + 16) + 52LL);
                    if ( v174 )
                      goto LABEL_373;
                    *((_DWORD *)this + 80) = 10;
                  }
                  else
                  {
                    v72 = (*((_BYTE *)this + 337) & 0x40) == 0;
                    *((_DWORD *)this + 80) = 10;
                    if ( v72 )
                    {
                      v215 = (ClpLinearObjective *)operator new(0x28u);
                      ClpLinearObjective::ClpLinearObjective(v215, nullptr, *((_DWORD *)this + 27));
                      *((_QWORD *)this + 20) = v215;
                    }
                  }
                }
                else
                {
LABEL_373:
                  *((_DWORD *)this + 80) = -4;
                }
              }
            }
            else if ( *((double *)this + 112) < 0.001 || *((double *)this + 111) > 0.00001 )
            {
              goto LABEL_370;
            }
            CoinIndexedVector::clear(*((CoinIndexedVector **)this + 132));
            CoinIndexedVector::clear(*((CoinIndexedVector **)this + 138));
            v243 = 1;
            goto LABEL_95;
          }
        }
        else if ( (v60 & 0x40) == 0 )
        {
LABEL_105:
          v55 = *((_QWORD *)this + 158);
          v58 = *((double *)this + 116);
          v67 = *((CoinIndexedVector **)this + 132);
          v56 = *(_QWORD *)(v55 + 8);
          if ( v56 )
          {
            if ( *(_DWORD *)(v56 + 68) )
            {
              v68 = fabs(v58);
              *((double *)this + 116) = v68;
              goto LABEL_90;
            }
          }
          else if ( *(_DWORD *)(*(_QWORD *)(v55 + 16) + 52LL) )
          {
            v68 = fabs(v58);
            *((double *)this + 116) = v68;
            goto LABEL_164;
          }
          *((_DWORD *)this + 80) = -4;
          goto LABEL_89;
        }
        if ( (*((_BYTE *)this + 728) & 0x40) != 0 )
          goto LABEL_105;
        v64 = (CoinMessageHandler *)CoinMessageHandler::message(
                                      *((CoinMessageHandler **)this + 43),
                                      12,
                                      (ClpSimplexDual *)((char *)this + 416));
        v65 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v64);
        v66 = CoinMessageHandler::operator<<(v65);
        CoinMessageHandler::operator<<(v66, 0, v12);
        ClpSimplex::setFlagged(this, *((_DWORD *)this + 290));
        v55 = *((_QWORD *)this + 158);
        v56 = *(_QWORD *)(v55 + 8);
        if ( v56 )
        {
          v67 = *((CoinIndexedVector **)this + 132);
          if ( *(_DWORD *)(v56 + 68) )
            goto LABEL_88;
        }
        else
        {
          v67 = *((CoinIndexedVector **)this + 132);
          if ( *(_DWORD *)(*(_QWORD *)(v55 + 16) + 52LL) )
          {
LABEL_88:
            v58 = *((double *)this + 116);
            goto LABEL_89;
          }
        }
        CoinIndexedVector::clear(v67);
        CoinIndexedVector::clear(*((CoinIndexedVector **)this + 138));
        v30 = *((_DWORD *)this + 80);
      }
    }
    else
    {
      if ( a3 == 2 )
      {
        if ( *(double *)(*((_QWORD *)this + 16) + 8LL * *((int *)this + 292)) > 0.0 )
        {
          *((_DWORD *)this + 291) = 1;
          v30 = 1;
          goto LABEL_48;
        }
        *((_DWORD *)this + 291) = -1;
      }
      else
      {
        v30 = *((_DWORD *)this + 291);
        if ( v30 >= 0 )
        {
          if ( !v30 )
          {
            a5 = 0.0;
            goto LABEL_50;
          }
LABEL_48:
          a6 = *((double *)this + 98) + *((double *)this + 110);
          v40 = fabs(*((double *)this + 106) - *((double *)this + 105));
          if ( v40 > a6 && v40 > fabs(*((double *)this + 106) - *((double *)this + 107)) )
          {
            *((_DWORD *)this + 291) = -1;
            a5 = -1.0;
            goto LABEL_50;
          }
          goto LABEL_49;
        }
      }
      a6 = *((double *)this + 98) + *((double *)this + 110);
      v101 = fabs(*((double *)this + 106) - *((double *)this + 107));
      if ( v101 > a6 && v101 > fabs(*((double *)this + 106) - *((double *)this + 105)) )
      {
        *((_DWORD *)this + 291) = 1;
        a5 = 1.0;
        goto LABEL_50;
      }
LABEL_49:
      a5 = (double)v30;
LABEL_50:
      v255[0] = a5;
      CoinIndexedVector::createPacked(v39, 1, v38, v255);
      ClpFactorization::updateColumnTranspose(
        *((ClpFactorization **)this + 158),
        *((CoinIndexedVector **)this + 133),
        *((CoinIndexedVector **)this + 132));
      v41 = *((_QWORD *)this + 26);
      if ( v41 )
      {
        v42 = *((_QWORD *)this + 28);
        v43 = *((_QWORD *)this + 29);
        *((_QWORD *)this + 28) = 0;
        *((_QWORD *)this + 29) = 0;
        v250 = v42;
        v244 = v43;
        (*(void (__fastcall **)(__int64, ClpSimplexDual *, _QWORD, _QWORD, _QWORD, double))(*(_QWORD *)v41 + 392LL))(
          v41,
          this,
          *((_QWORD *)this + 132),
          *((_QWORD *)this + 135),
          *((_QWORD *)this + 138),
          -1.0);
        *((_QWORD *)this + 28) = v250;
        *((_QWORD *)this + 29) = v244;
      }
      else
      {
        (*(void (__fastcall **)(_QWORD, ClpSimplexDual *, _QWORD, _QWORD, _QWORD, double))(**((_QWORD **)this + 24)
                                                                                         + 392LL))(
          *((_QWORD *)this + 24),
          this,
          *((_QWORD *)this + 132),
          *((_QWORD *)this + 135),
          *((_QWORD *)this + 138),
          -1.0);
      }
      v44 = *((CoinIndexedVector **)this + 138);
      v45 = *((CoinIndexedVector **)this + 132);
      v238 = 10.0 * v238;
      v12 = v238;
      if ( a3 == 1 )
      {
        ClpSimplexDual::checkPossibleValuesMove(this, v45, v44, v238);
        v46 = *((_DWORD *)this + 288);
LABEL_54:
        a5 = *((double *)this + 106);
        if ( *((int *)this + 291) < 0 )
        {
          a5 = a5 - *((double *)this + 107);
          v47 = a5;
        }
        else
        {
          v47 = *((double *)this + 105) - a5;
        }
        v48 = *((int *)this + 290);
        *((double *)this + 108) = v47;
        v49 = v48;
        *(_BYTE *)(*((_QWORD *)this + 33) + v48) &= ~0x20u;
        if ( !v26 )
        {
          if ( v239 )
          {
            v241 = v46;
            operator delete[](v239);
            v46 = v241;
          }
          if ( *a2 )
          {
            v242 = v46;
            operator delete[](*a2);
            v46 = v242;
          }
          *a2 = nullptr;
          if ( *((int *)this + 26) > 0 )
          {
            v148 = 0;
            v149 = 0;
            do
            {
              ++v148;
              v150 = *(int *)(*((_QWORD *)this + 157) + v149);
              v149 += 4;
              *(_BYTE *)(*((_QWORD *)this + 33) + v150) &= ~0x20u;
            }
            while ( *((_DWORD *)this + 26) > v148 );
          }
          if ( v49 == v46 )
          {
            ClpSimplexDual::updateDualsInValuesPass(
              this,
              *((CoinIndexedVector **)this + 132),
              *((CoinIndexedVector **)this + 138),
              *((double *)this + 100));
            *((_DWORD *)this + 80) = -2;
            v239 = nullptr;
            goto LABEL_95;
          }
          v31 = -2;
          v239 = nullptr;
          a3 = 1;
LABEL_58:
          v50 = *((double *)this + 106);
          if ( *((int *)this + 291) < 0 )
            v51 = v50 - *((double *)this + 107);
          else
            v51 = *((double *)this + 105) - v50;
          v52 = *((_DWORD *)this + 288);
          *((double *)this + 108) = v51;
          v245 = 1.0;
          goto LABEL_61;
        }
        if ( (_DWORD)v48 != v46 )
          goto LABEL_58;
        v12 = *((double *)this + 100);
        ClpSimplexDual::updateDualsInValuesPass(
          this,
          *((CoinIndexedVector **)this + 132),
          *((CoinIndexedVector **)this + 138),
          v12);
        v30 = *((_DWORD *)this + 80);
      }
      else
      {
        ClpSimplexDual::checkPossibleCleanup(this, v45, v44, v238);
        v46 = *((_DWORD *)this + 288);
        if ( v46 >= 0 )
          goto LABEL_54;
        CoinIndexedVector::clear(*((CoinIndexedVector **)this + 132));
        CoinIndexedVector::clear(*((CoinIndexedVector **)this + 138));
        v30 = *((_DWORD *)this + 80);
      }
    }
  }
  v175 = *((_QWORD *)this + 158);
  v176 = *(_QWORD *)(v175 + 8);
  if ( v176 )
    v177 = *(_DWORD *)(v176 + 68);
  else
    v177 = *(_DWORD *)(*(_QWORD *)(v175 + 16) + 52LL);
  v178 = 20;
  if ( *((int *)this + 340) >= 20 )
    v178 = *((_DWORD *)this + 340);
  if ( v178 < v177 )
  {
LABEL_311:
    v179 = v177 + 1;
    *((_DWORD *)this + 80) = -3;
LABEL_312:
    v180 = v179 >> 1;
    v243 = -2;
    if ( v180 > *((_DWORD *)this + 326) )
      v180 = *((_DWORD *)this + 326);
    *((_DWORD *)this + 326) = v180;
    goto LABEL_95;
  }
  v183 = *((_DWORD *)this + 84);
  if ( (v183 & 0x800) != 0 && (v12 = *((double *)this + 98), v12 >= 100000000.0) )
  {
    v184 = 0;
  }
  else
  {
    v184 = *((_DWORD *)this + 334);
    if ( v177 )
      goto LABEL_311;
  }
  v185 = *((_DWORD *)this + 308);
  if ( v185 && *((_DWORD *)this + 80) == -1 )
    *((_DWORD *)this + 80) = -4;
  v186 = *((_DWORD *)this + 26);
  if ( v186 <= 0 )
  {
    v191 = 0;
    v243 = 0;
  }
  else
  {
    v187 = *((int **)this + 157);
    v188 = *((_QWORD *)this + 33);
    if ( (*(_BYTE *)(v188 + *v187) & 0x40) == 0 )
    {
      v189 = 1;
      while ( 1 )
      {
        v191 = v189;
        if ( (unsigned int)(v186 - 1) + 1LL == v189 )
          goto LABEL_332;
        v190 = v187[v189++];
        if ( (*(_BYTE *)(v188 + v190) & 0x40) != 0 )
          goto LABEL_342;
      }
    }
    v191 = 0;
LABEL_342:
    if ( v191 >= v186 || (v243 = -2, !v177) )
LABEL_332:
      v243 = 0;
  }
  if ( v184 )
  {
    if ( (v183 & 0x400) != 0 )
      goto LABEL_95;
    goto LABEL_340;
  }
  v192 = *((_DWORD *)this + 306);
  if ( v192 )
  {
    if ( (v183 & 0x400) != 0 )
    {
      if ( !v177 && v185 )
        *((_DWORD *)this + 80) = 1;
      goto LABEL_95;
    }
LABEL_340:
    *((_DWORD *)this + 80) = -5;
    goto LABEL_95;
  }
  if ( v191 < v186 )
    goto LABEL_340;
  *((_DWORD *)this + 80) = 0;
  if ( v177 <= 10 )
    goto LABEL_353;
  ClpSimplex::computePrimals(this, *((const double **)this + 151), *((const double **)this + 152));
  ClpSimplex::checkPrimalSolution(this, *((const double **)this + 151), *((const double **)this + 152));
  if ( *((_DWORD *)this + 308) )
  {
    *((_DWORD *)this + 80) = -1;
    v243 = -2;
    goto LABEL_95;
  }
  if ( !*((_DWORD *)this + 80) )
  {
LABEL_353:
    v72 = *((_DWORD *)this + 327) == 101;
    *((_DWORD *)this + 308) = 0;
    *((_QWORD *)this + 112) = 0;
    *((_DWORD *)this + 306) = 0;
    *((_QWORD *)this + 111) = 0;
    if ( !v72 && !*((_DWORD *)this + 335) )
    {
      if ( v177 )
        goto LABEL_387;
      goto LABEL_358;
    }
    *((_DWORD *)this + 335) = 0;
    *((_DWORD *)this + 327) = 102;
    ClpSimplex::createRim4(this, 0);
    ClpSimplex::computeDuals(this, *a2);
    ClpSimplex::checkDualSolution(this);
    v12 = -1.797693134862316e308;
    ClpSimplexProgress::modifyObjective((ClpSimplexDual *)((char *)this + 1408), -1.797693134862316e308);
    if ( *((_DWORD *)this + 306) )
    {
      *((_DWORD *)this + 80) = 10;
      goto LABEL_357;
    }
LABEL_387:
    ClpSimplex::computeObjectiveValue(this, 1);
LABEL_357:
    if ( v177 >= -1000 )
    {
LABEL_358:
      v202 = *((_DWORD *)this + 84);
LABEL_359:
      *((_QWORD *)this + 112) = 0;
      if ( (v202 & 0x4400) == 0 || *((_DWORD *)this + 80) )
        goto LABEL_95;
      v203 = *((CoinIndexedVector **)this + 133);
      CoinIndexedVector::clear(v203);
      v204 = *((double **)v203 + 1);
      ClpModel::times(this, 1.0, *((const double **)this + 150), v204);
      v205 = *((_DWORD *)this + 26);
      if ( v205 <= 0 )
      {
        v230 = *((_DWORD *)this + 27);
        if ( v230 <= 0 )
          goto LABEL_95;
        v210 = 0;
LABEL_401:
        v231 = 0;
        v232 = *((double *)this + 110);
        do
        {
          v233 = *(double *)(*((_QWORD *)this + 150) + 8 * v231);
          if ( *(double *)(*((_QWORD *)this + 125) + 8 * v231) - v232 <= v233 )
          {
            if ( v233 > *(double *)(*((_QWORD *)this + 128) + 8 * v231) + v232 )
              v210 = 1;
          }
          else
          {
            v210 = 1;
          }
          ++v231;
        }
        while ( v230 > (int)v231 );
      }
      else
      {
        v206 = *((_QWORD *)this + 124);
        v207 = 0;
        v208 = 8LL * (unsigned int)(v205 - 1) + 8;
        v209 = *((double *)this + 110);
        v210 = 0;
        do
        {
          v211 = v204[v207 / 8];
          if ( *(double *)(v206 + v207) - v209 <= v211 )
          {
            if ( v211 > *(double *)(*((_QWORD *)this + 127) + v207) + v209 )
              v210 = 1;
          }
          else
          {
            v210 = 1;
          }
          v204[v207 / 8] = 0.0;
          v207 += 8LL;
        }
        while ( v208 != v207 );
        v230 = *((_DWORD *)this + 27);
        if ( v230 > 0 )
          goto LABEL_401;
      }
      if ( !v210 )
        goto LABEL_95;
      v234 = *((_QWORD *)this + 158);
      *((_DWORD *)this + 80) = -3;
      v235 = *(_QWORD *)(v234 + 8);
      if ( v235 )
        v236 = *(_DWORD *)(v235 + 68);
      else
        v236 = *(_DWORD *)(*(_QWORD *)(v234 + 16) + 52LL);
      v179 = v236 + 1;
      goto LABEL_312;
    }
    innerProduct(
      *((const double **)this + 129),
      *((_DWORD *)this + 27) + *((_DWORD *)this + 26),
      *((const double **)this + 150));
    v202 = *((_DWORD *)this + 84);
    v217 = *((double *)this + 11) * *((double *)this + 12);
    v218 = (v12 + *(double *)(*((_QWORD *)this + 20) + 8LL)) / v217;
    *((double *)this + 9) = v218;
    if ( (v202 & 0x4000) != 0 )
      goto LABEL_359;
    v219 = *((CoinIndexedVector **)this + 133);
    CoinIndexedVector::clear(v219);
    v220 = *((_QWORD *)this + 16);
    v221 = *((_QWORD *)v219 + 1);
    v222 = *(_QWORD *)v219;
    *((_QWORD *)v219 + 1) = v220;
    v223 = *((_DWORD *)this + 26);
    if ( v223 > 0 )
    {
      v224 = (unsigned int)(v223 - 1);
      v225 = *((_QWORD *)this + 157);
      v226 = *((_QWORD *)this + 129);
      v217 = 0.0;
      v227 = 0;
      v228 = v224 + 1;
      do
      {
        v218 = *(double *)(v226 + 8LL * *(int *)(v225 + 4 * v227));
        *(double *)(v220 + 8 * v227) = v218;
        if ( v218 != 0.0 )
        {
          v229 = v192++;
          *(_DWORD *)(v222 + 4 * v229) = v227;
        }
        ++v227;
      }
      while ( v228 != v227 );
      *((_DWORD *)v219 + 4) = v192;
      if ( !v192 )
LABEL_397:
        *((_BYTE *)v219 + 28) = 0;
      (*(void (__fastcall **)(_QWORD, ClpSimplexDual *, CoinIndexedVector *, _QWORD, _QWORD, double, double, double, double))(**((_QWORD **)this + 24) + 312LL))(
        *((_QWORD *)this + 24),
        this,
        v219,
        0,
        0,
        v218,
        v217,
        a6,
        a7);
      CoinIndexedVector::clear(*((CoinIndexedVector **)this + 134));
      ClpFactorization::updateColumnTranspose(
        *((ClpFactorization **)this + 158),
        *((CoinIndexedVector **)this + 134),
        v219);
      *((_QWORD *)v219 + 1) = v221;
      goto LABEL_358;
    }
    *((_DWORD *)v219 + 4) = 0;
    goto LABEL_397;
  }
LABEL_95:
  v70 = *a2;
  if ( *a2 )
  {
    v71 = *((_DWORD *)this + 27);
    v72 = *((_DWORD *)this + 26) + v71 == 0;
    v73 = *((_DWORD *)this + 26) + v71;
    v74 = *((double **)this + 147);
    if ( !v72 && v70 != v74 )
    {
      if ( v73 >> 3 > 0 )
      {
        v75 = *((double **)this + 147);
        v76 = *a2;
        do
        {
          v77 = *(_QWORD *)v75;
          v76 += 8;
          v75 += 8;
          *((_QWORD *)v76 - 8) = v77;
          *(v76 - 7) = *(v75 - 7);
          *(v76 - 6) = *(v75 - 6);
          *(v76 - 5) = *(v75 - 5);
          *(v76 - 4) = *(v75 - 4);
          *(v76 - 3) = *(v75 - 3);
          *(v76 - 2) = *(v75 - 2);
          *(v76 - 1) = *(v75 - 1);
        }
        while ( v76 != &v70[8 * (unsigned int)((v73 >> 3) - 1) + 8] );
        v78 = ((v73 >> 3) - 1 + 1LL) << 6;
        v74 = (double *)((char *)v74 + v78);
        v70 = (double *)((char *)v70 + v78);
      }
      switch ( v73 % 8 )
      {
        case 1:
          goto LABEL_117;
        case 2:
          goto LABEL_116;
        case 3:
          goto LABEL_115;
        case 4:
          goto LABEL_114;
        case 5:
          goto LABEL_113;
        case 6:
          goto LABEL_112;
        case 7:
          v70[6] = v74[6];
LABEL_112:
          v70[5] = v74[5];
LABEL_113:
          v70[4] = v74[4];
LABEL_114:
          v70[3] = v74[3];
LABEL_115:
          v70[2] = v74[2];
LABEL_116:
          v70[1] = v74[1];
LABEL_117:
          *v70 = *v74;
          break;
        default:
          break;
      }
    }
    if ( v239 )
      operator delete[](v239);
  }
  return v243;
}

