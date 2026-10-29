__int64 __fastcall ClpSimplex::pivotResultPart2(ClpSimplex *this, int a2, char a3)
{
  double v5; // xmm0_8
  CoinIndexedVector *v6; // rdi
  int v7; // eax
  double v8; // xmm2_8
  double v9; // xmm1_8
  double v10; // xmm0_8
  double v11; // xmm1_8
  double v12; // xmm5_8
  double v13; // xmm2_8
  CoinMessageHandler *v14; // rax
  CoinMessageHandler *v15; // rax
  double v16; // xmm0_8
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  int v20; // eax
  double v21; // xmm0_8
  double v22; // xmm3_8
  __int64 v23; // rax
  _BYTE *v24; // rax
  char v25; // bp
  int updated; // eax
  _BYTE *v27; // rcx
  double v28; // xmm6_8
  int v29; // eax
  double v30; // xmm1_8
  double v31; // xmm0_8
  double v32; // xmm3_8
  double v33; // xmm7_8
  double v34; // xmm2_8
  double v35; // xmm6_8
  double v36; // xmm2_8
  int v37; // eax
  bool v38; // cl
  __int64 v39; // rdx
  __int64 v40; // rax
  int v41; // eax
  unsigned int v42; // ebp
  double v43; // xmm0_8
  __int64 v44; // rdx
  __int64 v45; // rax
  double v46; // xmm1_8
  double v47; // xmm0_8
  double v48; // xmm0_8
  double *v49; // rax
  int v50; // edx
  double v51; // xmm0_8
  __int64 v52; // xmm1_8
  int v53; // r12d
  int v54; // ecx
  __int64 v55; // rdx
  __int64 v56; // rax
  int v57; // edx
  int v58; // eax
  __int64 v59; // rsi
  double v60; // xmm0_8
  __int64 *v61; // rax
  int v62; // edx
  __int64 v63; // r8
  __int64 v64; // rdi
  __int64 v65; // r9
  __int64 v66; // rax
  double v67; // xmm1_8
  __int64 *v68; // rax
  double v69; // xmm0_8
  int v70; // edx
  __int64 v71; // r8
  __int64 v72; // rsi
  __int64 v73; // rax
  __int64 v74; // rdi
  __int64 v75; // rdx
  __int64 *v76; // rax
  int v77; // edx
  __int64 v78; // r9
  __int64 v79; // rsi
  __int64 v80; // rax
  __int64 v81; // r8
  __int64 v82; // rdx
  double *v83; // rcx
  CoinIndexedVector *v84; // rsi
  double v85; // xmm0_8
  double v86; // xmm7_8
  double v87; // xmm1_8
  int v88; // esi
  double v89; // xmm0_8
  int v90; // eax
  double v91; // xmm1_8
  __int64 v92; // rdx
  double v93; // xmm0_8
  double v94; // xmm0_8
  int v95; // eax
  __int64 v96; // rdx
  __int64 v97; // rax
  int v98; // eax
  CoinIndexedVector *v100; // rdi
  CoinIndexedVector *v101; // rdx
  double v102; // xmm0_8
  double v103; // xmm2_8
  __int64 v104; // rax
  int v105; // edx
  CoinIndexedVector *v106; // rdi
  double v107; // [rsp+8h] [rbp-50h]
  double v108; // [rsp+8h] [rbp-50h]
  double v109[4]; // [rsp+38h] [rbp-20h] BYREF

  if ( (a3 & 1) == 0 )
  {
    ClpSimplex::unpackPacked(this, *((CoinIndexedVector **)this + 133));
    ClpFactorization::updateColumnFT(
      *((ClpFactorization **)this + 158),
      *((CoinIndexedVector **)this + 134),
      *((CoinIndexedVector **)this + 133));
  }
  if ( (a3 & 2) == 0 )
  {
    v100 = *((CoinIndexedVector **)this + 132);
    v109[0] = (double)*((int *)this + 291);
    CoinIndexedVector::createPacked(v100, 1, (const int *)this + 292, v109);
    ClpFactorization::updateColumnTranspose(
      *((ClpFactorization **)this + 158),
      *((CoinIndexedVector **)this + 134),
      *((CoinIndexedVector **)this + 132));
    CoinIndexedVector::clear(*((CoinIndexedVector **)this + 135));
    (*(void (__fastcall **)(_QWORD, ClpSimplex *, _QWORD, _QWORD, _QWORD, double))(**((_QWORD **)this + 24) + 392LL))(
      *((_QWORD *)this + 24),
      this,
      *((_QWORD *)this + 132),
      *((_QWORD *)this + 134),
      *((_QWORD *)this + 138),
      -1.0);
  }
  v5 = *((double *)this + 99);
  v6 = *((CoinIndexedVector **)this + 133);
  if ( a2 > 0 )
  {
    v42 = ClpFactorization::replaceColumn(
            *((ClpFactorization **)this + 158),
            this,
            *((CoinIndexedVector **)this + 134),
            *((CoinIndexedVector **)this + 133),
            *((_DWORD *)this + 292),
            v5,
            0,
            0.00000001);
    if ( v42 )
      goto LABEL_126;
    v59 = *((_QWORD *)this + 129);
    v60 = *(double *)(v59 + 8LL * *((int *)this + 288));
    v61 = *((__int64 **)this + 133);
    *((double *)this + 104) = v60;
    v62 = *((_DWORD *)v61 + 4);
    v63 = v61[1];
    v64 = *v61;
    if ( v62 > 0 )
    {
      v65 = *((_QWORD *)this + 157);
      v66 = 0;
      do
      {
        v67 = *(double *)(v59 + 8LL * *(int *)(v65 + 4LL * *(int *)(v64 + 4 * v66))) * *(double *)(v63 + 8 * v66);
        ++v66;
        v60 = v60 - v67;
        *((double *)this + 104) = v60;
      }
      while ( (unsigned int)(v62 - 1) + 1LL != v66 );
    }
    v68 = *((__int64 **)this + 138);
    v69 = v60 / *((double *)this + 99);
    v70 = *((_DWORD *)v68 + 4);
    v71 = *v68;
    v72 = v68[1];
    if ( v70 > 0 )
    {
      v73 = 0;
      v74 = (unsigned int)(v70 - 1) + 1LL;
      do
      {
        v75 = *(int *)(v71 + 4 * v73);
        *(double *)(*((_QWORD *)this + 147) + 8 * v75) = *(double *)(v72 + 8 * v73) * v69
                                                       + *(double *)(*((_QWORD *)this + 147) + 8 * v75);
        *(_QWORD *)(*((_QWORD *)this + 17) + 8 * v75) = *(_QWORD *)(*((_QWORD *)this + 147) + 8 * v75);
        *(_QWORD *)(v72 + 8 * v73++) = 0;
      }
      while ( v74 != v73 );
      v68 = *((__int64 **)this + 138);
    }
    *((_DWORD *)v68 + 4) = 0;
    *((_BYTE *)v68 + 28) = 0;
    v76 = *((__int64 **)this + 132);
    v77 = *((_DWORD *)v76 + 4);
    v78 = *v76;
    v79 = v76[1];
    if ( v77 > 0 )
    {
      v80 = 0;
      v81 = (unsigned int)(v77 - 1) + 1LL;
      do
      {
        v82 = *(int *)(v78 + 4 * v80);
        v83 = (double *)(*((_QWORD *)this + 147) + 8LL * ((int)v82 + *((_DWORD *)this + 27)));
        *v83 = *(double *)(v79 + 8 * v80) * v69 + *v83;
        *(_QWORD *)(*((_QWORD *)this + 16) + 8 * v82) = *(_QWORD *)(*((_QWORD *)this + 147)
                                                                  + 8LL * ((int)v82 + *((_DWORD *)this + 27)));
        *(_QWORD *)(v79 + 8 * v80++) = 0;
      }
      while ( v80 != v81 );
      v76 = *((__int64 **)this + 132);
    }
    *((_DWORD *)v76 + 4) = 0;
    *((_BYTE *)v76 + 28) = 0;
    v84 = *((CoinIndexedVector **)this + 133);
    v85 = *((double *)this + 100);
    v86 = *(double *)(*((_QWORD *)this + 129) + 8LL * *((int *)this + 290));
    v109[0] = 0.0;
    ClpSimplexPrimal::updatePrimalsInPrimal(this, v84, v85, v109, 0);
    v87 = *((double *)this + 102);
    v88 = *((_DWORD *)this + 290);
    if ( *((_DWORD *)this + 289) == -1 )
    {
      if ( *((_DWORD *)this + 288) != v88 )
      {
        v89 = v87 - fabs(*((double *)this + 100));
        *((double *)this + 102) = v89;
        goto LABEL_71;
      }
      v94 = *((double *)this + 101);
      *((double *)this + 102) = v94;
    }
    else
    {
      if ( *((_DWORD *)this + 288) != v88 )
      {
        v89 = fabs(*((double *)this + 100)) + v87;
        *((double *)this + 102) = v89;
LABEL_71:
        v90 = *((_DWORD *)this + 291);
        v109[0] = (v89 - v87) * *((double *)this + 104) + v109[0];
        if ( v90 <= 0 )
          v91 = *((double *)this + 107);
        else
          v91 = *((double *)this + 105);
        v92 = *((_QWORD *)this + 123);
        *((double *)this + 106) = v91;
        v93 = *((double *)this + 110);
        if ( *(double *)(v92 + 8LL * v88) - v93 <= v91 )
        {
          v103 = *(double *)(*((_QWORD *)this + 126) + 8LL * v88);
          if ( v91 > v93 + v103 )
            *((double *)this + 106) = v93 * 0.9 + v103;
        }
        else
        {
          *((double *)this + 106) = *(double *)(v92 + 8LL * v88) - v93 * 0.9;
        }
        *((_DWORD *)this + 291) = ClpNonLinearCost::setOneOutgoing(
                                    *((ClpNonLinearCost **)this + 165),
                                    v88,
                                    (double *)this + 106);
        *(double *)(*((_QWORD *)this + 147) + 8LL * *((int *)this + 290)) = *(double *)(*((_QWORD *)this + 129)
                                                                                      + 8LL * *((int *)this + 290))
                                                                          - v86;
        *(_QWORD *)(*((_QWORD *)this + 150) + 8LL * *((int *)this + 290)) = *((_QWORD *)this + 106);
        v88 = *((_DWORD *)this + 288);
        v94 = *((double *)this + 102);
        goto LABEL_76;
      }
      v94 = *((double *)this + 103);
      *((double *)this + 102) = v94;
    }
    v109[0] = *((double *)this + 104) * (v94 - v87) + v109[0];
LABEL_76:
    ClpNonLinearCost::setOne(*((ClpNonLinearCost **)this + 165), v88, v94);
    ClpSimplexProgress::startCheck((ClpSimplex *)((char *)this + 1408));
    v95 = ClpSimplex::housekeeping(this, v109[0]);
    if ( v95 == 1 )
    {
      v42 = -2;
    }
    else if ( v95 == 2 )
    {
      v42 = 3;
    }
    else
    {
      v96 = *((_QWORD *)this + 158);
      v97 = *(_QWORD *)(v96 + 8);
      if ( v97 )
        v98 = *(_DWORD *)(v97 + 64);
      else
        v98 = *(_DWORD *)(*(_QWORD *)(v96 + 16) + 48LL);
      if ( *((_DWORD *)this + 77) == *((_DWORD *)this + 293) + 2 * v98 )
        v42 = -2;
    }
    goto LABEL_82;
  }
  v7 = *((_DWORD *)this + 291);
  v8 = *((double *)this + 106);
  if ( v7 < 0 )
    v9 = v8 - *((double *)this + 107);
  else
    v9 = *((double *)this + 105) - v8;
  *((double *)this + 108) = v9;
  v107 = -v5 * (double)v7;
  CoinIndexedVector::clear(v6);
  ClpSimplex::unpackPacked(this, *((CoinIndexedVector **)this + 133));
  v10 = (*(double (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 155) + 8LL))(
          *((_QWORD *)this + 155),
          *((_QWORD *)this + 132),
          *((_QWORD *)this + 134),
          *((_QWORD *)this + 135),
          *((_QWORD *)this + 133));
  v11 = *((double *)this + 95);
  *((double *)this + 99) = v10;
  v12 = 0.0000001;
  if ( v11 > 10.0 )
  {
    v11 = fmin(0.0001, 0.00000001 * v11);
    v12 = v11;
  }
  v13 = fabs(v107);
  if ( v13 < 1.0e-12 || (v11 = fabs(v10), v11 < 1.0e-12) || (v11 = v11 + 1.0, fabs(v107 - v10) > v12 * v11) )
  {
    v14 = (CoinMessageHandler *)CoinMessageHandler::message(
                                  *((CoinMessageHandler **)this + 43),
                                  33,
                                  (ClpSimplex *)((char *)this + 416));
    v15 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v14);
    v16 = *((double *)this + 99);
    v17 = CoinMessageHandler::operator<<(v15);
    CoinMessageHandler::operator<<(v17, 0, v16);
    v18 = *((_QWORD *)this + 158);
    v19 = *(_QWORD *)(v18 + 8);
    if ( v19 )
      v20 = *(_DWORD *)(v19 + 68);
    else
      v20 = *(_DWORD *)(*(_QWORD *)(v18 + 16) + 52LL);
    if ( v20 )
    {
      (*(void (__fastcall **)(_QWORD, double, double, double, double, double))(**((_QWORD **)this + 155) + 40LL))(
        *((_QWORD *)this + 155),
        v16,
        v11,
        v13,
        1.0e-12,
        NAN);
      v106 = *((CoinIndexedVector **)this + 132);
      *((_DWORD *)this + 80) = -2;
      CoinIndexedVector::clear(v106);
      CoinIndexedVector::clear(*((CoinIndexedVector **)this + 133));
      CoinIndexedVector::clear(*((CoinIndexedVector **)this + 138));
      goto LABEL_126;
    }
    v21 = fabs(*((double *)this + 99));
    if ( v13 >= 0.00000001 && v21 >= 0.00000001 )
      v22 = (v21 + 1.0) * 0.0001;
    else
      v22 = v21 * 0.1;
    if ( v13 < 1.0e-12 || v21 < 1.0e-12 || fabs(v107 - *((double *)this + 99)) > v22 )
LABEL_126:
      abort();
  }
  v23 = *((int *)this + 288);
  v109[0] = 0.0;
  v24 = (_BYTE *)(*((_QWORD *)this + 33) + v23);
  v25 = *v24 & 7;
  *v24 = *v24 & 0xF8 | 1;
  updated = ClpSimplexDual::updateDualsInDual(
              this,
              *((CoinIndexedVector **)this + 132),
              *((CoinIndexedVector **)this + 138),
              *((CoinIndexedVector **)this + 134),
              *((double *)this + 100),
              v109,
              0);
  v27 = (_BYTE *)(*((_QWORD *)this + 33) + *((int *)this + 288));
  *v27 = v25 | *v27 & 0xF8;
  v28 = *((double *)this + 108);
  if ( updated )
  {
    v101 = *((CoinIndexedVector **)this + 134);
    if ( *((_DWORD *)v101 + 4) )
    {
      ClpFactorization::updateColumn(*((ClpFactorization **)this + 158), *((CoinIndexedVector **)this + 135), v101, 0);
      (*(void (__fastcall **)(_QWORD, _QWORD, double *, double))(**((_QWORD **)this + 155) + 16LL))(
        *((_QWORD *)this + 155),
        *((_QWORD *)this + 134),
        v109,
        1.0);
    }
    v102 = *(double *)(*((_QWORD *)this + 150) + 8LL * *((int *)this + 290));
    v29 = *((_DWORD *)this + 291);
    *((double *)this + 106) = v102;
    if ( v29 < 0 )
      v30 = v102 - *((double *)this + 107);
    else
      v30 = *((double *)this + 105) - v102;
    *((double *)this + 108) = v30;
  }
  else
  {
    v29 = *((_DWORD *)this + 291);
    v30 = *((double *)this + 108);
  }
  v31 = *((double *)this + 99);
  v32 = *((double *)this + 104);
  v33 = -0.00001;
  v34 = (double)v29 * v28;
  v108 = -v30 * (double)v29 / v31;
  v35 = fabs(*((double *)this + 9)) * 1.0e-12;
  v36 = fabs(v34 / v31 * v32) + v109[0];
  if ( v35 >= 0.00001 )
    v33 = -v35;
  if ( v33 > v36 && (*(_BYTE *)(*((_QWORD *)this + 43) + 104LL) & 0x20) != 0 )
  {
    printf("movement %g, swap change %g, rest %g  * %g\n", fabs(v108 * v32) + v109[0], v109[0], v108, v32);
    v31 = *((double *)this + 99);
  }
  v37 = ClpFactorization::replaceColumn(
          *((ClpFactorization **)this + 158),
          this,
          *((CoinIndexedVector **)this + 134),
          *((CoinIndexedVector **)this + 133),
          *((_DWORD *)this + 292),
          v31,
          0,
          0.00000001);
  if ( fabs(*((double *)this + 108)) > 1.0e50 || v37 == 2 )
  {
    v39 = *((_QWORD *)this + 158);
    v40 = *(_QWORD *)(v39 + 8);
    if ( v40 )
      v54 = *(_DWORD *)(v40 + 68);
    else
      v54 = *(_DWORD *)(*(_QWORD *)(v39 + 16) + 52LL);
    if ( !v54 && COERCE_DOUBLE(*((_QWORD *)this + 99) & 0x7FFFFFFFFFFFFFFFLL) > 0.00001 )
    {
      v38 = 1;
LABEL_33:
      if ( v40 )
        v41 = *(_DWORD *)(v40 + 68);
      else
        v41 = *(_DWORD *)(*(_QWORD *)(v39 + 16) + 52LL);
      if ( v41 > 5 || (v42 = -1, v38) )
      {
        *((_DWORD *)this + 80) = -2;
        v42 = -3;
      }
      goto LABEL_38;
    }
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 155) + 40LL))(*((_QWORD *)this + 155));
    v55 = *((_QWORD *)this + 158);
    v56 = *(_QWORD *)(v55 + 8);
    if ( v56 )
      v57 = *(_DWORD *)(v56 + 68);
    else
      v57 = *(_DWORD *)(*(_QWORD *)(v55 + 16) + 52LL);
    if ( v57 )
    {
      v58 = *((_DWORD *)this + 182);
      if ( (v58 & 0x10) == 0 || v57 > 4 )
      {
        *((_DWORD *)this + 80) = -2;
        v42 = -2;
        *((_DWORD *)this + 182) = v58 | 0x10;
        return v42;
      }
    }
    goto LABEL_126;
  }
  v38 = v37 == 4;
  switch ( v37 )
  {
    case 1:
    case 4:
      v39 = *((_QWORD *)this + 158);
      v40 = *(_QWORD *)(v39 + 8);
      goto LABEL_33;
    case 3:
      v104 = *(_QWORD *)(*((_QWORD *)this + 158) + 8LL);
      if ( v104 )
      {
        v105 = *(_DWORD *)(v104 + 68);
        if ( (double)*(int *)(v104 + 64) * 0.5 > (double)v105 && v105 <= 199 )
          *(double *)(v104 + 16) = 1.1 * *(double *)(v104 + 16);
      }
      goto LABEL_115;
    case 5:
LABEL_115:
      *((_DWORD *)this + 80) = -2;
      v42 = -1;
      goto LABEL_38;
  }
  v42 = -1;
LABEL_38:
  v43 = *((double *)this + 100);
  if ( v43 < 0.0 )
  {
    if ( (*(_BYTE *)(*((_QWORD *)this + 43) + 104LL) & 0x20) != 0 )
      printf("negative theta %g\n", v43);
    *((_QWORD *)this + 100) = 0;
  }
  ClpSimplexDual::flipBounds(this, *((CoinIndexedVector **)this + 132), *((CoinIndexedVector **)this + 138));
  (*(void (__fastcall **)(_QWORD, _QWORD, double *, double))(**((_QWORD **)this + 155) + 16LL))(
    *((_QWORD *)this + 155),
    *((_QWORD *)this + 133),
    v109,
    v108);
  v44 = *((int *)this + 288);
  v45 = *((_QWORD *)this + 147);
  *((double *)this + 108) = *((double *)this + 108) / *((double *)this + 99) * (double)-*((_DWORD *)this + 291);
  *(_QWORD *)(v45 + 8 * v44) = 0;
  v46 = *((double *)this + 102);
  if ( *((_DWORD *)this + 289) == -1 )
    v47 = *((double *)this + 103);
  else
    v47 = *((double *)this + 101);
  v48 = v47 + *((double *)this + 108);
  *((double *)this + 102) = v48;
  v49 = (double *)(*((_QWORD *)this + 147) + 8LL * *((int *)this + 290));
  v50 = *((_DWORD *)this + 291);
  v109[0] = (v48 - v46) * *(double *)(*((_QWORD *)this + 129) + 8LL * *((int *)this + 288)) + v109[0];
  v51 = *((double *)this + 100);
  if ( v50 <= 0 )
  {
    v51 = -v51;
    v52 = *((_QWORD *)this + 107);
  }
  else
  {
    v52 = *((_QWORD *)this + 105);
  }
  *((_QWORD *)this + 106) = v52;
  *v49 = v51;
  *(_QWORD *)(*((_QWORD *)this + 150) + 8LL * *((int *)this + 290)) = *((_QWORD *)this + 106);
  v53 = ClpSimplex::housekeeping(this, v109[0]);
  ClpSimplexDual::originalBound(this, *((_DWORD *)this + 288));
  ClpSimplexDual::changeBound(this, *((_DWORD *)this + 290));
  if ( v53 == 1 )
  {
    *((_DWORD *)this + 80) = -2;
  }
  else if ( v53 == 2 )
  {
    *((_DWORD *)this + 80) = 3;
    abort();
  }
LABEL_82:
  if ( (***((int (__fastcall ****)(_QWORD, __int64))this + 45))(*((_QWORD *)this + 45), 100) >= 0 )
  {
    v42 = 3;
    *((_QWORD *)this + 40) = 0x6400000005LL;
  }
  return v42;
}

