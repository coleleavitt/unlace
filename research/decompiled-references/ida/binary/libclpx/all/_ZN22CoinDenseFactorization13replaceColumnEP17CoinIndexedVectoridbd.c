__int64 __fastcall CoinDenseFactorization::replaceColumn(
        CoinDenseFactorization *this,
        CoinIndexedVector *a2,
        double a3,
        double a4,
        int a5)
{
  int v5; // ecx
  __int64 result; // rax
  __int64 v7; // r12
  __int64 v9; // r14
  int *v10; // rbp
  int v11; // r15d
  _QWORD *v12; // rcx
  __int64 v13; // rsi
  double v14; // xmm1_8
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // xmm0_8
  __int64 v18; // rax
  int *v19; // rax
  __int64 v20; // rdx

  v5 = *((_DWORD *)this + 13);
  result = 3;
  if ( v5 != *((_DWORD *)this + 12) )
  {
    v7 = a5;
    v9 = *((_QWORD *)a2 + 1);
    v10 = *(int **)a2;
    v11 = *((_DWORD *)a2 + 4);
    v12 = memset(
            (void *)(*((_QWORD *)this + 10) + 8LL * *((_DWORD *)this + 9) * (*((_DWORD *)this + 10) + v5)),
            0,
            8LL * *((int *)this + 9));
    result = 2;
    if ( *((double *)this + 2) <= fabs(a3) )
    {
      v13 = *((_QWORD *)this + 9);
      v14 = 1.0 / a3;
      if ( *((_BYTE *)a2 + 28) )
      {
        if ( v11 > 0 )
        {
          v15 = 0;
          do
          {
            v16 = *(int *)(v13 + 4LL * v10[v15]);
            v17 = *(_QWORD *)(v9 + 8 * v15++);
            v12[v16] = v17;
          }
          while ( (unsigned int)(v11 - 1) + 1LL != v15 );
        }
      }
      else if ( v11 > 0 )
      {
        v19 = v10;
        do
        {
          v20 = *v19++;
          v12[*(int *)(v13 + 4 * v20)] = *(_QWORD *)(v9 + 8 * v20);
        }
        while ( &v10[v11 - 1 + 1] != v19 );
      }
      v18 = *(int *)(v13 + 4 * v7);
      *(double *)&v12[v18] = v14;
      *(_DWORD *)(v13 + 4LL * (*((_DWORD *)this + 13) + 2 * *((_DWORD *)this + 9))) = v18;
      ++*((_DWORD *)this + 13);
      return 0;
    }
  }
  return result;
}

