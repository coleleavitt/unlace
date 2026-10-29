__int64 __fastcall ClpSimplexPrimal::pivotResult(ClpSimplexPrimal *this, int a2, double a3)
{
  CoinIndexedVector *v5; // rdi
  int v6; // eax
  double v7; // xmm1_8
  double v8; // xmm3_8
  int v9; // eax
  unsigned int v10; // r13d
  int v11; // eax
  int v12; // r12d
  int v13; // eax
  __int64 v14; // rdi
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  double v19; // xmm2_8
  double v20; // xmm0_8
  CoinMessageHandler *v21; // rax
  CoinMessageHandler *v22; // rdi
  CoinMessageHandler *v23; // rax
  CoinMessageHandler *v24; // rax
  double v25; // xmm0_8
  __int64 v26; // rax
  double v27; // xmm0_8
  double v28; // xmm1_8
  double v29; // xmm2_8
  double v30; // xmm0_8
  __int64 v31; // rdx
  __int64 v32; // rax
  int v33; // eax
  CoinMessageHandler *v34; // rax
  CoinMessageHandler *v35; // rdi
  __int64 v36; // rax
  ClpFactorization *v37; // rdi
  double *v38; // rax
  double v39; // xmm2_8
  __int64 v40; // rdx
  __int64 v41; // rax
  double v42; // xmm0_8
  int v43; // eax
  int v44; // eax
  __int64 v45; // rdx
  __int64 v46; // rax
  int v47; // eax
  int v48; // eax
  __int64 v49; // rax
  double *v50; // rdi
  __int64 v51; // rdx
  __int64 v52; // rax
  int v53; // eax
  int v54; // eax
  double *v55; // rdi
  int **v56; // r11
  int v57; // eax
  int *v58; // rdx
  int *v59; // rdi
  __int64 v60; // r10
  __int64 v61; // r9
  __int64 v62; // r8
  __int64 v63; // rcx
  double *v64; // rsi
  double *v65; // rax
  double v66; // xmm0_8
  int **v67; // r12
  int v68; // eax
  int *v69; // rdx
  int *v70; // rdi
  __int64 v71; // r11
  int v72; // r10d
  __int64 v73; // r9
  __int64 v74; // r8
  __int64 v75; // rax
  double *v76; // rsi
  double *v77; // rcx
  double v78; // xmm0_8
  double v79; // xmm0_8
  CoinIndexedVector *v80; // rsi
  double *v81; // rax
  __int64 v82; // rax
  int v83; // eax
  CoinIndexedVector *v84; // rsi
  __int64 v85; // rax
  bool v86; // cc
  bool v87; // zf
  double v88; // xmm1_8
  int v89; // esi
  double v90; // xmm0_8
  int v91; // eax
  double v92; // xmm1_8
  __int64 v93; // rdx
  double v94; // xmm0_8
  int v95; // eax
  __int64 v96; // rax
  double v97; // xmm0_8
  int v98; // eax
  __int64 v99; // rdx
  __int64 v100; // rax
  int v101; // eax
  double v103; // xmm2_8
  CoinMessageHandler *v104; // rax
  CoinMessageHandler *v105; // rdi
  __int64 v106; // rax
  int v107; // eax
  CoinMessageHandler *v108; // rax
  CoinMessageHandler *v109; // rdi
  __int64 v110; // rax
  int v111; // eax
  __int64 v112; // rcx
  __int64 v113; // rax
  double v114; // [rsp+8h] [rbp-188h]
  double v115; // [rsp+10h] [rbp-180h]
  double v116; // [rsp+10h] [rbp-180h]
  int v117; // [rsp+28h] [rbp-168h] BYREF
  int v118; // [rsp+2Ch] [rbp-164h] BYREF
  double v119[44]; // [rsp+30h] [rbp-160h] BYREF

  while ( 1 )
  {
    v5 = *((CoinIndexedVector **)this + 133);
    *((_DWORD *)this + 292) = -1;
    *((_DWORD *)this + 290) = -1;
    CoinIndexedVector::clear(v5);
    ClpSimplex::unpackPacked(this, *((CoinIndexedVector **)this + 133));
    v115 = *((double *)this + 104);
    ClpFactorization::updateColumnFT(
      *((ClpFactorization **)this + 158),
      *((CoinIndexedVector **)this + 134),
      *((CoinIndexedVector **)this + 133));
    (*(void (__fastcall **)(_QWORD, ClpSimplexPrimal *, _QWORD, _QWORD))(**((_QWORD **)this + 24) + 296LL))(
      *((_QWORD *)this + 24),
      this,
      *((_QWORD *)this + 133),
      0);
    ClpSimplexPrimal::primalRow(
      this,
      *((CoinIndexedVector **)this + 133),
      *((CoinIndexedVector **)this + 135),
      *((CoinIndexedVector **)this + 134),
      a2);
    if ( a2 )
    {
      v6 = *((_DWORD *)this + 292);
      v7 = *((double *)this + 104);
      if ( v6 == -1 )
      {
        a3 = 100.0 * *((double *)this + 109);
        v7 = fabs(v7);
        if ( a3 <= v7 || *(int *)(*((_QWORD *)this + 20) + 16LL) > 1 )
        {
LABEL_6:
          v9 = *((_DWORD *)this + 78);
          if ( v9 == 1 )
          {
            v104 = (CoinMessageHandler *)CoinMessageHandler::message(
                                           *((CoinMessageHandler **)this + 43),
                                           12,
                                           (ClpSimplexPrimal *)((char *)this + 416));
            v105 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v104);
            v106 = CoinMessageHandler::operator<<(v105);
            CoinMessageHandler::operator<<(v106, 0, a3);
            ClpSimplex::setFlagged(this, *((_DWORD *)this + 288));
            v107 = *((_DWORD *)this + 77);
            *((_DWORD *)this + 425) = 0;
            *((_DWORD *)this + 332) = v107;
            ClpSimplexPrimal::clearAll(this);
            *((_DWORD *)this + 292) = -1;
            v9 = *((_DWORD *)this + 78);
          }
          v10 = -5;
          if ( v9 != 2 )
            return v10;
          goto LABEL_9;
        }
      }
      else
      {
        if ( v6 < 0 )
          goto LABEL_22;
        v8 = *((double *)this + 99);
        a3 = 0.00001;
        if ( fabs(v8) >= 0.00001 )
          goto LABEL_22;
        v7 = fabs(v7);
        if ( 100.0 * *((double *)this + 109) <= v7 )
          goto LABEL_6;
        if ( *(int *)(*((_QWORD *)this + 20) + 16LL) > 1 )
        {
LABEL_21:
          if ( fabs(v8) < 0.00001 )
            goto LABEL_6;
          goto LABEL_22;
        }
      }
      *((_DWORD *)this + 289) = -*((_DWORD *)this + 289);
      ClpSimplexPrimal::primalRow(
        this,
        *((CoinIndexedVector **)this + 133),
        *((CoinIndexedVector **)this + 135),
        *((CoinIndexedVector **)this + 134),
        0);
      v11 = *((_DWORD *)this + 292);
      if ( v11 == -1 )
        goto LABEL_6;
      if ( v11 >= 0 )
      {
        v8 = *((double *)this + 99);
        a3 = 0.00001;
        goto LABEL_21;
      }
LABEL_22:
      (*(void (__fastcall **)(_QWORD, ClpSimplexPrimal *, _QWORD, __int64, double, double))(**((_QWORD **)this + 24)
                                                                                          + 296LL))(
        *((_QWORD *)this + 24),
        this,
        *((_QWORD *)this + 133),
        1,
        a3,
        v7);
      goto LABEL_23;
    }
    (*(void (__fastcall **)(_QWORD, ClpSimplexPrimal *, _QWORD, __int64))(**((_QWORD **)this + 24) + 296LL))(
      *((_QWORD *)this + 24),
      this,
      *((_QWORD *)this + 133),
      1);
    if ( *((double *)this + 96) <= 0.00001 )
      v19 = 0.01;
    else
      v19 = 0.1;
    if ( *((_DWORD *)this + 78) != 1 )
      goto LABEL_23;
    v20 = *((double *)this + 104);
    if ( (v115 * v20 < 9.999999999999999e-21
       || fabs(v115 - v20) > (fabs(v115) + 1.0) * v19
       || *((double *)this + 109) > fabs(v20))
      && (v115 * v20 <= 0.0 || fmin(fabs(v115), fabs(v20)) <= 100000.0) )
    {
      break;
    }
    v12 = *((_DWORD *)this + 292);
    if ( v12 >= 0 )
      goto LABEL_26;
LABEL_62:
    if ( v12 != -1 )
    {
      v84 = *((CoinIndexedVector **)this + 133);
      v10 = -1;
      goto LABEL_114;
    }
    a3 = *((double *)this + 106);
    if ( a3 != 1.797693134862316e308 )
    {
      v79 = a3 - *((double *)this + 102);
      v80 = *((CoinIndexedVector **)this + 133);
      v119[0] = 0.0;
      *((double *)this + 100) = v79;
      ClpSimplexPrimal::updatePrimalsInPrimal(this, v80, v79, v119, a2);
      v81 = (double *)(*((_QWORD *)this + 150) + 8LL * *((int *)this + 288));
      a3 = *v81 + *((double *)this + 100);
      *v81 = a3;
    }
    CoinIndexedVector::clear(*((CoinIndexedVector **)this + 132));
    v45 = *((_QWORD *)this + 158);
    v46 = *(_QWORD *)(v45 + 8);
    if ( v46 )
      v47 = *(_DWORD *)(v46 + 68);
    else
      v47 = *(_DWORD *)(*(_QWORD *)(v45 + 16) + 52LL);
    if ( !v47 )
    {
      a3 = 0.00000001;
      if ( *((double *)this + 116) <= 0.00000001 )
      {
        if ( *(double *)(*((_QWORD *)this + 165) + 32LL) == 0.0 )
          ClpSimplexPrimal::primalRay(this, *((CoinIndexedVector **)this + 133));
        v48 = *((_DWORD *)this + 78);
        v10 = 2;
        goto LABEL_137;
      }
    }
    v48 = *((_DWORD *)this + 78);
    if ( v48 != 2 || (*((_BYTE *)this + 729) & 2) != 0 )
    {
      v10 = 4;
      *((_QWORD *)this + 116) = 0x3E45798EE2308C3ALL;
      goto LABEL_137;
    }
    v118 = 0;
    ClpSimplexProgress::ClpSimplexProgress((ClpSimplexProgress *)v119);
    if ( *((_QWORD *)this + 164) )
    {
LABEL_72:
      ClpSimplexPrimal::statusOfProblemInPrimal(this, &v118, 1, (ClpSimplexProgress *)v119, 1, a2, nullptr);
      goto LABEL_73;
    }
LABEL_93:
    ClpSimplexPrimal::statusOfProblemInPrimal(this, &v118, 0, (ClpSimplexProgress *)v119, 1, a2, nullptr);
LABEL_73:
    ClpSimplexProgress::~ClpSimplexProgress((ClpSimplexProgress *)v119);
  }
  v114 = *((double *)this + 109);
  v21 = (CoinMessageHandler *)CoinMessageHandler::message(
                                *((CoinMessageHandler **)this + 43),
                                34,
                                (ClpSimplexPrimal *)((char *)this + 416));
  v22 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v21);
  v23 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v22);
  v24 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v23);
  v25 = *((double *)this + 104);
  v26 = CoinMessageHandler::operator<<(v24);
  CoinMessageHandler::operator<<(v26, 0, v25);
  if ( *((_DWORD *)this + 293) != *((_DWORD *)this + 77) )
    goto LABEL_169;
  v27 = *((double *)this + 104);
  v28 = v115 * v27;
  v29 = fabs(v27);
  if ( v115 * v27 < 9.999999999999999e-21 || fabs(v115 - v27) > (v29 + 1.0) * 0.2 || v114 > v29 )
  {
    if ( (v30 = fabs(v115), v30 > v29)
      || (v30 = 0.0001, v28 < 0.0001)
      || ((v31 = *((_QWORD *)this + 158), (v32 = *(_QWORD *)(v31 + 8)) == 0)
        ? (v33 = *(_DWORD *)(*(_QWORD *)(v31 + 16) + 52LL))
        : (v33 = *(_DWORD *)(v32 + 68)),
          v33) )
    {
      v34 = (CoinMessageHandler *)CoinMessageHandler::message(
                                    *((CoinMessageHandler **)this + 43),
                                    12,
                                    (ClpSimplexPrimal *)((char *)this + 416));
      v35 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v34);
      v36 = CoinMessageHandler::operator<<(v35);
      CoinMessageHandler::operator<<(v36, 0, v30);
      ClpSimplex::setFlagged(this, *((_DWORD *)this + 288));
      (*(void (__fastcall **)(_QWORD, ClpSimplexPrimal *, __int64))(**((_QWORD **)this + 156) + 16LL))(
        *((_QWORD *)this + 156),
        this,
        6);
      v37 = *((ClpFactorization **)this + 158);
      v38 = *((double **)v37 + 1);
      if ( v38 )
      {
        v39 = *v38;
      }
      else
      {
        v113 = *((_QWORD *)v37 + 2);
        if ( v113 )
          v39 = *(double *)(v113 + 8);
        else
          v39 = 0.00000001;
      }
      ClpFactorization::saferTolerances(v37, -0.99, -1.03);
      v40 = *((_QWORD *)this + 158);
      v41 = *(_QWORD *)(v40 + 8);
      if ( v41 )
      {
        v42 = *(double *)v41;
      }
      else
      {
        v112 = *(_QWORD *)(v40 + 16);
        if ( v112 )
          v42 = *(double *)(v112 + 8);
        else
          v42 = 0.00000001;
      }
      if ( 1.029 * v39 <= v42
        || v39 >= 0.995
        || (!v41 ? (v43 = *(_DWORD *)(*(_QWORD *)(v40 + 16) + 52LL)) : (v43 = *(_DWORD *)(v41 + 68)), v43) )
      {
LABEL_59:
        *((_DWORD *)this + 425) = 0;
        v44 = *((_DWORD *)this + 77);
        goto LABEL_145;
      }
LABEL_169:
      ClpSimplexPrimal::clearAll(this);
      v111 = *((_DWORD *)this + 293);
      *((_DWORD *)this + 292) = -1;
      if ( v111 + 1 == *((_DWORD *)this + 77) )
        ClpNonLinearCost::checkInfeasibilities(*((ClpNonLinearCost **)this + 165), 0.0);
      *((_DWORD *)this + 290) = -1;
      v48 = *((_DWORD *)this + 78);
      v10 = -4;
LABEL_137:
      if ( v48 != 2 )
        return v10;
LABEL_9:
      if ( (*((_BYTE *)this + 729) & 2) == 0 && v10 + 3 <= 1 )
      {
        v118 = 0;
        ClpSimplexProgress::ClpSimplexProgress((ClpSimplexProgress *)v119);
        if ( *((_QWORD *)this + 164) )
          ClpSimplexPrimal::statusOfProblemInPrimal(this, &v118, 1, (ClpSimplexProgress *)v119, 1, a2, nullptr);
        else
          ClpSimplexPrimal::statusOfProblemInPrimal(this, &v118, 0, (ClpSimplexProgress *)v119, 1, a2, nullptr);
        if ( *((_DWORD *)this + 80) == 5 )
        {
          *((_DWORD *)this + 80) = -1;
          v10 = 5;
        }
        ClpSimplexProgress::~ClpSimplexProgress((ClpSimplexProgress *)v119);
      }
      return v10;
    }
  }
LABEL_23:
  v12 = *((_DWORD *)this + 292);
  if ( v12 < 0 )
    goto LABEL_62;
  v13 = *((_DWORD *)this + 78);
  if ( v13 > 1 && (*((_BYTE *)this + 729) & 2) == 0 )
  {
    if ( v13 == 2 )
    {
      ClpSimplexPrimal::primalRay(this, *((CoinIndexedVector **)this + 133));
      v12 = *((_DWORD *)this + 292);
    }
    CoinIndexedVector::insert(
      *((CoinIndexedVector **)this + 132),
      v12,
      *((double *)this + 104) / *((double *)this + 99));
    ClpFactorization::updateColumnTranspose(
      *((ClpFactorization **)this + 158),
      *((CoinIndexedVector **)this + 134),
      *((CoinIndexedVector **)this + 132));
    (*(void (__fastcall **)(_QWORD, ClpSimplexPrimal *, _QWORD, _QWORD, _QWORD, double))(**((_QWORD **)this + 24) + 392LL))(
      *((_QWORD *)this + 24),
      this,
      *((_QWORD *)this + 132),
      *((_QWORD *)this + 139),
      *((_QWORD *)this + 138),
      -1.0);
    v56 = *((int ***)this + 138);
    v57 = *((_DWORD *)v56 + 4);
    v58 = *v56;
    v59 = v56[1];
    if ( v57 > 0 )
    {
      v60 = *((_QWORD *)this + 147);
      v61 = *((_QWORD *)this + 17);
      v62 = (__int64)&v58[v57 - 1 + 1];
      do
      {
        v63 = *v58++;
        v64 = (double *)(v60 + 8 * v63);
        v65 = (double *)&v59[2 * v63];
        v66 = *v64 + *v65;
        *v64 = v66;
        *(double *)(v61 + 8 * v63) = v66;
        *v65 = 0.0;
      }
      while ( (int *)v62 != v58 );
    }
    *((_DWORD *)v56 + 4) = 0;
    *((_BYTE *)v56 + 28) = 0;
    v67 = *((int ***)this + 132);
    v68 = *((_DWORD *)v67 + 4);
    v69 = *v67;
    v70 = v67[1];
    if ( v68 > 0 )
    {
      v71 = *((_QWORD *)this + 147);
      v72 = *((_DWORD *)this + 27);
      v73 = *((_QWORD *)this + 16);
      v74 = (__int64)&v69[v68 - 1 + 1];
      do
      {
        v75 = *v69++;
        v76 = (double *)(v71 + 8LL * (v72 + (int)v75));
        v77 = (double *)&v70[2 * v75];
        v78 = *v76 + *v77;
        *v76 = v78;
        *(double *)(v73 + 8 * v75) = v78;
        *v77 = 0.0;
      }
      while ( v69 != (int *)v74 );
    }
    *((_DWORD *)v67 + 4) = 0;
    *((_BYTE *)v67 + 28) = 0;
  }
LABEL_26:
  v14 = *((_QWORD *)this + 24);
  v117 = 0;
  v15 = (*(__int64 (__fastcall **)(__int64, ClpSimplexPrimal *, __int64, int *))(*(_QWORD *)v14 + 320LL))(
          v14,
          this,
          3,
          &v117);
  if ( v117 >= 0 )
    v15 = ClpFactorization::replaceColumn(
            *((ClpFactorization **)this + 158),
            this,
            *((CoinIndexedVector **)this + 134),
            *((CoinIndexedVector **)this + 133),
            *((_DWORD *)this + 292),
            *((double *)this + 99),
            (*((_DWORD *)this + 182) & 0x10) != 0,
            0.00000001);
  if ( v15 != 2 )
  {
    LOBYTE(v16) = v15 == 4;
    v17 = (unsigned int)v16;
    if ( v15 != 1 && v15 != 4 )
    {
      if ( v15 == 3 )
      {
        v10 = -2;
        v18 = *(_QWORD *)(*((_QWORD *)this + 158) + 8LL);
        if ( v18 )
        {
          v16 = *(unsigned int *)(v18 + 68);
          if ( (double)*(int *)(v18 + 64) * 0.5 > (double)(int)v16 && (int)v16 <= 199 )
            *(double *)(v18 + 16) = 1.1 * *(double *)(v18 + 16);
          else
            v10 = -2;
        }
      }
      else
      {
        v10 = -1;
        if ( v15 == 5 )
          *((_DWORD *)this + 80) = -2;
      }
LABEL_111:
      v84 = *((CoinIndexedVector **)this + 133);
      if ( !a2 )
      {
        (*(void (__fastcall **)(_QWORD, CoinIndexedVector *, __int64, __int64))(**((_QWORD **)this + 156) + 8LL))(
          *((_QWORD *)this + 156),
          v84,
          v16,
          v17);
        v84 = *((CoinIndexedVector **)this + 133);
      }
      v12 = *((_DWORD *)this + 292);
LABEL_114:
      v85 = *((int *)this + 290);
      if ( (int)v85 < 0 )
        v116 = 0.0;
      else
        v116 = *(double *)(*((_QWORD *)this + 129) + 8 * v85);
      v86 = *((_DWORD *)this + 26) <= v12;
      v119[0] = 0.0;
      if ( v86 )
        *((_DWORD *)this + 292) = -1;
      ClpSimplexPrimal::updatePrimalsInPrimal(this, v84, *((double *)this + 100), v119, a2);
      v87 = *((_DWORD *)this + 289) == -1;
      *((_DWORD *)this + 292) = v12;
      v88 = *((double *)this + 102);
      v89 = *((_DWORD *)this + 290);
      if ( v87 )
      {
        if ( *((_DWORD *)this + 288) != v89 )
        {
          v90 = v88 - fabs(*((double *)this + 100));
          *((double *)this + 102) = v90;
          goto LABEL_121;
        }
        v97 = *((double *)this + 101);
        *((double *)this + 102) = v97;
      }
      else
      {
        if ( *((_DWORD *)this + 288) != v89 )
        {
          v90 = fabs(*((double *)this + 100)) + v88;
          *((double *)this + 102) = v90;
LABEL_121:
          v91 = *((_DWORD *)this + 291);
          v119[0] = (v90 - v88) * *((double *)this + 104) + v119[0];
          if ( v91 <= 0 )
            v92 = *((double *)this + 107);
          else
            v92 = *((double *)this + 105);
          v93 = *((_QWORD *)this + 123);
          *((double *)this + 106) = v92;
          v94 = *((double *)this + 110);
          if ( *(double *)(v93 + 8LL * v89) - v94 <= v92 )
          {
            v103 = *(double *)(*((_QWORD *)this + 126) + 8LL * v89);
            if ( v92 > v94 + v103 )
              *((double *)this + 106) = v94 * 0.9 + v103;
          }
          else
          {
            *((double *)this + 106) = *(double *)(v93 + 8LL * v89) - v94 * 0.9;
          }
          v95 = ClpNonLinearCost::setOneOutgoing(*((ClpNonLinearCost **)this + 165), v89, (double *)this + 106);
          v86 = *((_DWORD *)this + 78) <= 1;
          *((_DWORD *)this + 291) = v95;
          v96 = 8LL * *((int *)this + 290);
          if ( v86 )
            *(double *)(*((_QWORD *)this + 147) + 8LL * *((int *)this + 290)) = *(double *)(*((_QWORD *)this + 129)
                                                                                          + 8LL * *((int *)this + 290))
                                                                              - v116;
          *(_QWORD *)(*((_QWORD *)this + 150) + v96) = *((_QWORD *)this + 106);
          v89 = *((_DWORD *)this + 288);
          v97 = *((double *)this + 102);
          goto LABEL_128;
        }
        v97 = *((double *)this + 103);
        *((double *)this + 102) = v97;
      }
      v119[0] = *((double *)this + 104) * (v97 - v88) + v119[0];
LABEL_128:
      ClpNonLinearCost::setOne(*((ClpNonLinearCost **)this + 165), v89, v97);
      v98 = ClpSimplex::housekeeping(this, v119[0]);
      if ( v98 == 1 )
      {
        v10 = -2;
      }
      else if ( v98 == 2 )
      {
        v10 = 3;
      }
      else
      {
        v99 = *((_QWORD *)this + 158);
        v100 = *(_QWORD *)(v99 + 8);
        if ( v100 )
          v101 = *(_DWORD *)(v100 + 64);
        else
          v101 = *(_DWORD *)(*(_QWORD *)(v99 + 16) + 48LL);
        if ( *((_DWORD *)this + 77) == *((_DWORD *)this + 293) + 2 * v101 )
          v10 = -2;
      }
      if ( (***((int (__fastcall ****)(_QWORD, __int64))this + 45))(*((_QWORD *)this + 45), 100) >= 0 )
      {
        v10 = 3;
        *((_QWORD *)this + 40) = 0x6400000005LL;
      }
      v48 = *((_DWORD *)this + 78);
      goto LABEL_137;
    }
LABEL_107:
    v16 = *((_QWORD *)this + 158);
    v82 = *(_QWORD *)(v16 + 8);
    if ( v82 )
      v83 = *(_DWORD *)(v82 + 68);
    else
      v83 = *(_DWORD *)(*(_QWORD *)(v16 + 16) + 52LL);
    if ( v83 > 5 || (v10 = -1, (_BYTE)v17) )
      v10 = -3;
    goto LABEL_111;
  }
  if ( *((_DWORD *)this + 293) == *((_DWORD *)this + 77) && fabs(*((double *)this + 99)) > 0.00001 )
  {
    v17 = 1;
    goto LABEL_107;
  }
  v49 = *((_QWORD *)this + 158);
  v50 = *(double **)(v49 + 8);
  if ( v50 )
  {
    a3 = fmin(v50[1], 1.0e-15);
    CoinFactorization::zeroTolerance((CoinFactorization *)v50, a3);
  }
  else
  {
    v55 = *(double **)(v49 + 16);
    a3 = fmin(v55[2], 1.0e-15);
    CoinOtherFactorization::zeroTolerance((CoinOtherFactorization *)v55, a3);
  }
  v51 = *((_QWORD *)this + 158);
  v52 = *(_QWORD *)(v51 + 8);
  if ( v52 )
    v53 = *(_DWORD *)(v52 + 64);
  else
    v53 = *(_DWORD *)(*(_QWORD *)(v51 + 16) + 48LL);
  if ( v53 > 10 )
  {
    if ( *((int *)this + 326) >= 0 )
      v53 = *((_DWORD *)this + 326);
    v54 = v53 >> 1;
    if ( v54 <= 0 )
      v54 = 1;
    *((_DWORD *)this + 326) = v54;
  }
  v44 = *((_DWORD *)this + 293);
  if ( v44 == *((_DWORD *)this + 77) )
  {
    if ( *((_DWORD *)this + 78) == 1 )
    {
      v108 = (CoinMessageHandler *)CoinMessageHandler::message(
                                     *((CoinMessageHandler **)this + 43),
                                     12,
                                     (ClpSimplexPrimal *)((char *)this + 416));
      v109 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v108);
      v110 = CoinMessageHandler::operator<<(v109);
      CoinMessageHandler::operator<<(v110, 0, a3);
      ClpSimplex::setFlagged(this, *((_DWORD *)this + 288));
      goto LABEL_59;
    }
LABEL_145:
    *((_DWORD *)this + 332) = v44;
    v10 = -5;
    ClpSimplexPrimal::clearAll(this);
    *((_DWORD *)this + 292) = -1;
    *((_DWORD *)this + 290) = -1;
    v48 = *((_DWORD *)this + 78);
    goto LABEL_137;
  }
  ClpSimplexPrimal::clearAll(this);
  v48 = *((_DWORD *)this + 78);
  *((_DWORD *)this + 292) = -1;
  if ( v48 != 1 )
  {
    if ( (*((_BYTE *)this + 729) & 2) != 0 )
    {
      v10 = -4;
      goto LABEL_137;
    }
    v118 = 0;
    ClpSimplexProgress::ClpSimplexProgress((ClpSimplexProgress *)v119);
    if ( *((_QWORD *)this + 164) )
      goto LABEL_72;
    goto LABEL_93;
  }
  return 4294967292LL;
}

