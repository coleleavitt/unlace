__int64 __fastcall CoinDenseFactorization::postProcess(CoinDenseFactorization *this, int *a2, int *a3)
{
  __int64 result; // rax
  __int64 v4; // r9
  int v5; // ecx
  int v6; // eax
  int v7; // r8d

  result = *((unsigned int *)this + 9);
  if ( (int)result > 0 )
  {
    v4 = *((_QWORD *)this + 9);
    v5 = 0;
    do
    {
      v6 = v5 + result;
      v7 = *a2;
      ++v5;
      ++a2;
      a3[*(int *)(v4 + 4LL * v6)] = v7;
      result = *((unsigned int *)this + 9);
    }
    while ( (int)result > v5 );
  }
  return result;
}

