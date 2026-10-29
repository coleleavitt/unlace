void __fastcall ClpSimplexOther::statusOfProblemInParametrics(
        ClpSimplexOther *this,
        int a2,
        ClpDataSave *a3,
        double a4,
        double a5,
        double a6)
{
  int v7; // eax
  double v9; // xmm0_8
  double v10; // xmm1_8
  double v11; // xmm3_8
  __int64 v12; // rax
  CoinFactorization *v13; // rdi
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rdx
  int v17; // edx
  __int64 v18; // rdx
  __int64 v19; // rax
  int v20; // eax
  CoinMessageHandler *v21; // rdi
  CoinMessageHandler *v22; // rax
  CoinMessageHandler *v23; // rax
  CoinMessageHandler *v24; // rax
  CoinMessageHandler *v25; // rax
  CoinMessageHandler *v26; // rax
  double v27; // xmm0_8
  CoinMessageHandler *v28; // rax
  CoinMessageHandler *v29; // rax
  __int64 v30; // rax
  double v31; // xmm4_8
  double v32; // xmm5_8
  int v33; // eax
  int v34; // eax
  __int64 v35; // rdi
  int v36; // eax
  int v37; // eax
  double *v38; // rdi
  _DWORD v39[7]; // [rsp+1Ch] [rbp-1Ch] BYREF

  if ( a2 == 2 )
    goto LABEL_15;
  v7 = *((_DWORD *)this + 80);
  if ( v7 >= -2 )
  {
    if ( !a2 )
      goto LABEL_4;
LABEL_20:
    if ( (unsigned int)ClpSimplex::internalFactorize(this, 1) )
      goto LABEL_15;
    v7 = *((_DWORD *)this + 80);
    goto LABEL_4;
  }
  v15 = *((_QWORD *)this + 158);
  v16 = *(_QWORD *)(v15 + 8);
  if ( v16 )
    v17 = *(_DWORD *)(v16 + 68);
  else
    v17 = *(_DWORD *)(*(_QWORD *)(v15 + 16) + 52LL);
  if ( !v17 )
    goto LABEL_6;
  if ( a2 )
    goto LABEL_20;
LABEL_4:
  if ( v7 != -4
    || ((v18 = *((_QWORD *)this + 158), (v19 = *(_QWORD *)(v18 + 8)) == 0)
      ? (v20 = *(_DWORD *)(*(_QWORD *)(v18 + 16) + 52LL))
      : (v20 = *(_DWORD *)(v19 + 68)),
        v20 > 10) )
  {
    *((_DWORD *)this + 80) = -3;
  }
LABEL_6:
  ClpSimplex::gutsOfSolution(this, nullptr, nullptr, 0);
  v9 = *((double *)this + 95);
  if ( v9 > 1.0e15 || (a6 = *((double *)this + 96), a6 > 1.0e15) )
  {
    if ( *((_DWORD *)this + 77) )
      goto LABEL_15;
  }
  v10 = 0.0000001;
  v11 = *((double *)this + 111);
  if ( v9 < 0.0000001 && *((double *)this + 96) < 0.0000001 )
  {
    v12 = *((_QWORD *)this + 158);
    v10 = *((double *)a3 + 2);
    v13 = *(CoinFactorization **)(v12 + 8);
    if ( v13 )
    {
      CoinFactorization::pivotTolerance(v13, fmax(0.99 * *(double *)v13, v10));
    }
    else
    {
      v38 = *(double **)(v12 + 16);
      if ( v38 )
        CoinOtherFactorization::pivotTolerance((CoinOtherFactorization *)v38, fmax(0.99 * v38[1], v10));
    }
  }
  v14 = ClpSimplexProgress::looping((ClpSimplexOther *)((char *)this + 1408));
  if ( v14 < 0 )
  {
    if ( v14 != -1 )
      ClpSimplex::gutsOfSolution(this, nullptr, nullptr, 0);
    v21 = *((CoinMessageHandler **)this + 43);
    *((_DWORD *)this + 336) = 0;
    v22 = (CoinMessageHandler *)CoinMessageHandler::message(v21, 6, (ClpSimplexOther *)((char *)this + 416));
    v23 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v22);
    CoinMessageHandler::operator<<(v23);
    v24 = (CoinMessageHandler *)CoinMessageHandler::printing(
                                  *((CoinMessageHandler **)this + 43),
                                  *((double *)this + 112) > 0.0);
    v25 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v24);
    CoinMessageHandler::operator<<(v25);
    v26 = (CoinMessageHandler *)CoinMessageHandler::printing(
                                  *((CoinMessageHandler **)this + 43),
                                  *((double *)this + 111) > 0.0);
    v27 = *((double *)this + 111);
    v28 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v26);
    CoinMessageHandler::operator<<(v28);
    v29 = (CoinMessageHandler *)CoinMessageHandler::printing(
                                  *((CoinMessageHandler **)this + 43),
                                  *((_DWORD *)this + 307) < *((_DWORD *)this + 306));
    CoinMessageHandler::operator<<(v29);
    v30 = CoinMessageHandler::message(*((CoinMessageHandler **)this + 43), -1);
    CoinMessageHandler::operator<<(v30, 0, v27);
    v33 = *((_DWORD *)this + 308);
    if ( !*(_QWORD *)((char *)this + 1228) && *((_DWORD *)this + 306) )
      goto LABEL_15;
    if ( *((double *)this + 114) == 0.0 && *((double *)this + 115) == 0.0 )
    {
      *((_DWORD *)this + 306) = 0;
      *((_QWORD *)this + 111) = 0;
      *((_DWORD *)this + 308) = 0;
      *((_QWORD *)this + 112) = 0;
    }
    else if ( *((_DWORD *)this + 306) && *((_DWORD *)this + 80) != -4 )
    {
      goto LABEL_34;
    }
    v10 = *((double *)this + 111) * *((double *)this + 98);
    v27 = *((double *)this + 9) - v10;
    ClpSimplexProgress::modifyObjective((ClpSimplexOther *)((char *)this + 1408), v27);
    v33 = *((_DWORD *)this + 308);
LABEL_34:
    if ( v33 )
    {
      v34 = *((_DWORD *)this + 80);
      if ( (unsigned int)(v34 + 5) <= 1 )
      {
        v37 = *((_DWORD *)this + 77);
        *((_DWORD *)this + 80) = 1;
        *((_DWORD *)this + 293) = v37;
      }
      else
      {
        *((_DWORD *)this + 293) = *((_DWORD *)this + 77);
        if ( v34 < 0 )
        {
          v31 = 0.0;
          *((double *)this + 111) = v11;
          if ( v11 != 0.0 )
            *((_DWORD *)this + 306) = 1;
        }
      }
    }
    else
    {
      v36 = *((_DWORD *)this + 77);
      if ( *((_DWORD *)this + 306) )
        *((_DWORD *)this + 80) = 10;
      else
        *((_DWORD *)this + 80) = 0;
      *((_DWORD *)this + 293) = v36;
    }
    v35 = *((_QWORD *)this + 24);
    v39[0] = -999;
    (*(void (__fastcall **)(__int64, ClpSimplexOther *, _DWORD *, _DWORD *, double, double, double, double, double, double, double))(*(_QWORD *)v35 + 352LL))(
      v35,
      this,
      v39,
      v39,
      v27,
      v10,
      a6,
      v11,
      v31,
      v32,
      0.0);
    return;
  }
  *((_DWORD *)this + 80) = v14;
  if ( v14 )
  {
LABEL_15:
    *((_DWORD *)this + 80) = 10;
    return;
  }
  *((_DWORD *)this + 308) = 0;
  *((_QWORD *)this + 112) = 0;
}

