__int64 __fastcall ClpSimplexOther::parametricsLoop(
        ClpSimplex *a1,
        double *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        ClpDataSave *a6,
        double a7,
        char a8)
{
  double v11; // xmm6_8
  double v12; // xmm1_8
  int v13; // eax
  __int64 v14; // r10
  __int64 v15; // rdi
  __int64 v16; // r9
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // r10
  double v20; // xmm0_8
  char v21; // si
  int v22; // edx
  ClpSimplex *v23; // r14
  CoinIndexedVector *v24; // rdi
  CoinFactorization **v25; // rdi
  void (__fastcall ***v26)(_QWORD, __int64); // rdi
  int i; // [rsp+0h] [rbp-74h]
  double v29; // [rsp+4h] [rbp-70h]
  double v30; // [rsp+Ch] [rbp-68h]
  double *v32; // [rsp+34h] [rbp-40h] BYREF

  v11 = *a2;
  v30 = *a2;
  if ( a7 == 0.0 || !a8 )
  {
    v29 = 0.0;
  }
  else
  {
    v12 = fmin(a2[1], v11 + a7);
    a2[1] = v12;
    v29 = v12 - v11;
  }
  v13 = *((_DWORD *)a1 + 26) + *((_DWORD *)a1 + 27);
  if ( v13 > 0 )
  {
    v14 = (unsigned int)(v13 - 1);
    v15 = *((_QWORD *)a1 + 123);
    v16 = *((_QWORD *)a1 + 126);
    v17 = *((_QWORD *)a1 + 129);
    v18 = 0;
    v19 = v14 + 1;
    do
    {
      *(double *)(v15 + 8 * v18) = *(double *)(a3 + 8 * v18) * v29 + *(double *)(v15 + 8 * v18);
      v20 = *(double *)(v16 + 8 * v18) + v29 * *(double *)(a4 + 8 * v18);
      *(double *)(v16 + 8 * v18) = v20;
      v21 = *(_BYTE *)(*((_QWORD *)a1 + 33) + v18) & 7;
      if ( v21 == 3 )
      {
        *(_QWORD *)(*((_QWORD *)a1 + 150) + 8 * v18) = *(_QWORD *)(v15 + 8 * v18);
      }
      else if ( v21 == 5 || v21 == 2 )
      {
        *(double *)(*((_QWORD *)a1 + 150) + 8 * v18) = v20;
      }
      *(double *)(v17 + 8 * v18) = v29 * *(double *)(a5 + 8 * v18) + *(double *)(v17 + 8 * v18);
      ++v18;
    }
    while ( v19 != v18 );
  }
  *((_DWORD *)a1 + 80) = -1;
  ClpSimplexProgress::startCheck((ClpSimplex *)((char *)a1 + 1408));
  v22 = *((_DWORD *)a1 + 80);
  *((_DWORD *)a1 + 324) = 1;
  for ( i = 0; v22 < 0; i = 1 )
  {
    v23 = (ClpSimplex *)((char *)a1 + 1056);
    do
    {
      v24 = *(CoinIndexedVector **)v23;
      v23 = (ClpSimplex *)((char *)v23 + 8);
      CoinIndexedVector::clear(v24);
    }
    while ( (ClpSimplex *)((char *)a1 + 1088) != v23 );
    CoinIndexedVector::clear(*((CoinIndexedVector **)a1 + 138));
    CoinIndexedVector::clear(*((CoinIndexedVector **)a1 + 139));
    (*(void (__fastcall **)(_QWORD, ClpSimplex *))(**((_QWORD **)a1 + 24) + 224LL))(*((_QWORD *)a1 + 24), a1);
    ClpSimplexOther::statusOfProblemInParametrics(a1, i, a6);
    if ( *((_DWORD *)a6 + 14) )
    {
      v25 = *((CoinFactorization ***)a1 + 158);
      if ( v25[1] )
      {
        CoinFactorization::sparseThreshold(v25[1], 0);
        v25 = *((CoinFactorization ***)a1 + 158);
      }
      ClpFactorization::goSparse((ClpFactorization *)v25);
    }
    v22 = *((_DWORD *)a1 + 80);
    if ( v22 >= 0 && (a8 || v30 >= a2[1] - 0.0000001) )
      break;
    if ( (unsigned __int8)ClpModel::hitMaximumIterations(a1) )
    {
      *((_DWORD *)a1 + 80) = 3;
      return 3;
    }
    if ( (***((int (__fastcall ****)(_QWORD, __int64))a1 + 45))(*((_QWORD *)a1 + 45), 101) >= 0 )
    {
      v22 = 5;
      *((_QWORD *)a1 + 40) = 0x6500000005LL;
      return (unsigned int)v22;
    }
    *((_DWORD *)a1 + 80) = -1;
    if ( a8 )
    {
      v32 = nullptr;
      ClpSimplexDual::whileIterating(a1, &v32, 0);
    }
    else
    {
      ClpSimplexOther::whileIterating(a1);
      v30 = a2[1];
    }
    v22 = *((_DWORD *)a1 + 80);
  }
  if ( v22 )
  {
    if ( v22 == 10 )
      return (unsigned int)-1;
  }
  else
  {
    v26 = *((void (__fastcall ****)(_QWORD, __int64))a1 + 45);
    *((double *)a1 + 100) = v30 + v29;
    (**v26)(v26, 106);
    return 0;
  }
  return (unsigned int)v22;
}

