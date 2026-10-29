__int64 __fastcall CoinOslFactorization::postProcess(CoinOslFactorization *this, const int *a2, int *a3)
{
  int v3; // eax
  __int64 v4; // r10
  __int64 v5; // r8
  int *v6; // rcx
  __int64 result; // rax
  __int64 v8; // r9
  int v9; // r9d
  __int64 v10; // rcx

  v3 = *((_DWORD *)this + 105);
  *((_DWORD *)this + 100) = 0;
  *((_DWORD *)this + 13) = 0;
  v4 = *((_QWORD *)this + 24);
  v5 = *((_QWORD *)this + 39);
  v6 = *((int **)this + 38);
  *((_DWORD *)this + 92) = v3;
  result = *((unsigned int *)this + 9);
  if ( (int)result > 0 )
  {
    LODWORD(result) = 0;
    do
    {
      v8 = *v6++;
      *(_DWORD *)(v5 + 4 * v8 - 4) = result;
      v9 = *((_DWORD *)this + 9);
      result = (unsigned int)(result + 1);
    }
    while ( v9 > (int)result );
    if ( v9 > 0 )
    {
      v10 = 1;
      do
      {
        a3[v10 - 1] = a2[*(int *)(v5 + 4LL * (*(_DWORD *)(v4 + 4 * v10) - 1))];
        result = (unsigned int)v10++;
      }
      while ( *((_DWORD *)this + 9) > (int)result );
    }
  }
  return result;
}

