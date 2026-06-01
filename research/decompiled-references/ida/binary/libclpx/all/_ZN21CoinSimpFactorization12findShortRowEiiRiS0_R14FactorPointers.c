__int64 __fastcall CoinSimpFactorization::findShortRow(
        CoinSimpFactorization *this,
        int a2,
        int a3,
        int *a4,
        int *a5,
        FactorPointers *a6,
        double a7)
{
  int v7; // eax
  int v8; // ebx
  int v9; // ebx
  __int64 v11; // r14
  int v12; // esi
  unsigned __int64 v13; // rbp
  __int64 v14; // rax
  int v15; // r13d
  __int64 v16; // r12
  int v17; // eax
  int *v18; // r10

  v7 = *(_DWORD *)(*((_QWORD *)this + 41) + 4LL * a2);
  v8 = *(_DWORD *)(*((_QWORD *)this + 42) + 4LL * a2);
  *a4 = -1;
  *a5 = 0x7FFFFFFF;
  v9 = v7 + v8;
  if ( v7 >= v9 )
    return 1;
  v11 = 4LL * v7;
  v12 = 0x7FFFFFFF;
  v13 = 4 * (v7 + (unsigned __int64)(unsigned int)(v9 - v7 - 1) + 1);
  while ( 1 )
  {
    v14 = *(int *)(*((_QWORD *)this + 44) + v11);
    v15 = *(_DWORD *)(*((_QWORD *)this + 44) + v11);
    v16 = 4 * v14;
    if ( *(_DWORD *)(*((_QWORD *)this + 34) + 4 * v14) < v12 )
    {
      CoinSimpFactorization::findMaxInRrow(this, v14, a6);
      v17 = CoinSimpFactorization::findInRow(this, v15, a2);
      a7 = a7 * *((double *)this + 1);
      if ( a7 <= fabs(*(double *)(*((_QWORD *)this + 35) + 8LL * v17)) )
      {
        v18 = (int *)(v16 + *((_QWORD *)this + 34));
        *a4 = v15;
        *a5 = *v18;
        if ( *v18 <= a3 )
          break;
      }
    }
    v11 += 4;
    if ( v13 == v11 )
      return 1;
    v12 = *a5;
  }
  return 0;
}

