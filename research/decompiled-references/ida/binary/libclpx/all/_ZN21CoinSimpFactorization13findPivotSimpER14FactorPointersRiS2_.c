__int64 __fastcall CoinSimpFactorization::findPivotSimp(
        CoinSimpFactorization *this,
        FactorPointers *a2,
        int *a3,
        int *a4)
{
  __int64 v4; // rcx
  int v5; // eax
  int v6; // r12d
  double v7; // xmm1_8
  __int64 v8; // rbx
  int v9; // r13d
  unsigned __int64 v10; // rbp
  int v11; // r15d
  double v12; // xmm0_8
  double v14; // [rsp+0h] [rbp-48h]

  *a3 = -1;
  v4 = *a4;
  v5 = *(_DWORD *)(*((_QWORD *)this + 41) + 4 * v4);
  if ( v5 >= v5 + *(_DWORD *)(*((_QWORD *)this + 42) + 4 * v4) )
    return 1;
  v6 = v4;
  v7 = 0.0;
  v8 = 4LL * v5;
  v9 = -1;
  v10 = 4 * (v5 + (unsigned __int64)(unsigned int)(*(_DWORD *)(*((_QWORD *)this + 42) + 4 * v4) - 1) + 1);
  do
  {
    v14 = v7;
    v11 = *(_DWORD *)(*((_QWORD *)this + 44) + v8);
    v12 = fabs(*(double *)(*((_QWORD *)this + 35) + 8LL * (int)CoinSimpFactorization::findInRow(this, v11, v6)));
    v7 = fmax(v7, v12);
    if ( v14 <= v12 )
      v9 = v11;
    v8 += 4;
  }
  while ( v8 != v10 );
  if ( v9 == -1 )
    return 1;
  *a3 = v9;
  return 0;
}

