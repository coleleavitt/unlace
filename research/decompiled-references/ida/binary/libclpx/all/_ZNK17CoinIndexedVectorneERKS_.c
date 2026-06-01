__int64 __fastcall CoinIndexedVector::operator!=(__int64 a1, int **a2)
{
  int v2; // edx
  __int64 result; // rax
  int *v4; // rax
  int *v5; // rcx
  __int64 v6; // rsi
  int *v7; // rax
  int *v8; // rdi
  __int64 v9; // rdx

  v2 = *(_DWORD *)(a1 + 16);
  result = 1;
  if ( v2 == *((_DWORD *)a2 + 4) )
  {
    if ( v2 <= 0 )
      return 0;
    v4 = *a2;
    v5 = a2[1];
    v6 = *(_QWORD *)(a1 + 8);
    if ( *(double *)&v5[2 * *v4] == *(double *)(v6 + 8LL * *v4) )
    {
      v7 = v4 + 1;
      v8 = &v7[v2 - 1];
      while ( v7 != v8 )
      {
        v9 = *v7++;
        if ( *(double *)&v5[2 * v9] != *(double *)(v6 + 8 * v9) )
          return 1;
      }
      return 0;
    }
    return 1;
  }
  return result;
}

