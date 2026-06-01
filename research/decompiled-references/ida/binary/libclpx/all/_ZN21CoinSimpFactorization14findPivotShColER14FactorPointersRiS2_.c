__int64 __fastcall CoinSimpFactorization::findPivotShCol(
        CoinSimpFactorization *this,
        FactorPointers *a2,
        int *a3,
        int *a4)
{
  __int64 v4; // rsi
  int v5; // r12d
  int v7; // r8d
  int v8; // ebp
  __int64 v9; // rax
  int v10; // edx
  double v11; // xmm1_8
  __int64 v12; // r13
  unsigned __int64 v13; // r15
  int v14; // r14d
  double v15; // xmm0_8
  double v16; // [rsp+8h] [rbp-50h]

  v4 = *((_QWORD *)a2 + 4);
  *a4 = -1;
  *a3 = -1;
  v5 = *(_DWORD *)(v4 + 4);
  if ( v5 != -1 )
  {
    *a3 = *(_DWORD *)(*((_QWORD *)this + 44) + 4LL * *(int *)(*((_QWORD *)this + 41) + 4LL * v5));
    *a4 = v5;
    return 0;
  }
  v7 = *((_DWORD *)this + 9);
  if ( v7 <= 1 )
    return 1;
  v8 = *(_DWORD *)(v4 + 8);
  if ( v8 == -1 )
  {
    v9 = 3;
    while ( v7 >= (int)v9 )
    {
      ++v9;
      v8 = *(_DWORD *)(v4 + 4 * v9 - 4);
      if ( v8 != -1 )
        goto LABEL_9;
    }
    return 1;
  }
LABEL_9:
  v10 = *(_DWORD *)(*((_QWORD *)this + 41) + 4LL * v8);
  if ( v10 < v10 + *(_DWORD *)(*((_QWORD *)this + 42) + 4LL * v8) )
  {
    v11 = 0.0;
    v12 = 4LL * v10;
    v13 = 4 * (v10 + (unsigned __int64)(unsigned int)(*(_DWORD *)(*((_QWORD *)this + 42) + 4LL * v8) - 1) + 1);
    do
    {
      v16 = v11;
      v14 = *(_DWORD *)(*((_QWORD *)this + 44) + v12);
      v15 = fabs(*(double *)(*((_QWORD *)this + 35) + 8LL * (int)CoinSimpFactorization::findInRow(this, v14, v8)));
      v11 = fmax(v11, v15);
      if ( v16 <= v15 )
        v5 = v14;
      v12 += 4;
    }
    while ( v13 != v12 );
  }
  *a4 = v8;
  *a3 = v5;
  return 0;
}

