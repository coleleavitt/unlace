__int64 __fastcall ClpSimplex::restoreData(__int64 a1, double *a2)
{
  __int64 v3; // rax
  double v4; // xmm0_8
  CoinFactorization *v5; // rdi
  __int64 v6; // rax
  double v7; // xmm0_8
  CoinFactorization *v8; // rdi
  int v9; // eax
  __int64 v10; // xmm0_8
  __int64 result; // rax
  double v12; // xmm0_8
  CoinOtherFactorization *v13; // rdi

  v3 = *(_QWORD *)(a1 + 1264);
  v4 = a2[2];
  v5 = *(CoinFactorization **)(v3 + 8);
  if ( v5 )
  {
    CoinFactorization::pivotTolerance(v5, v4);
  }
  else
  {
    v13 = *(CoinOtherFactorization **)(v3 + 16);
    if ( !v13 )
    {
      v7 = a2[3];
LABEL_9:
      CoinOtherFactorization::zeroTolerance(v13, v7);
      goto LABEL_5;
    }
    CoinOtherFactorization::pivotTolerance(v13, v4);
  }
  v6 = *(_QWORD *)(a1 + 1264);
  v7 = a2[3];
  v8 = *(CoinFactorization **)(v6 + 8);
  if ( !v8 )
  {
    v13 = *(CoinOtherFactorization **)(v6 + 16);
    goto LABEL_9;
  }
  CoinFactorization::zeroTolerance(v8, v7);
LABEL_5:
  v9 = *((_DWORD *)a2 + 15);
  *(double *)(a1 + 704) = a2[4];
  v10 = *((_QWORD *)a2 + 1);
  *(_DWORD *)(a1 + 1308) = v9;
  result = *((unsigned int *)a2 + 16);
  *(_QWORD *)(a1 + 904) = v10;
  v12 = *a2;
  *(_DWORD *)(a1 + 1304) = result;
  *(double *)(a1 + 784) = v12;
  *(double *)(a1 + 88) = a2[6];
  *(double *)(a1 + 928) = a2[5];
  return result;
}

