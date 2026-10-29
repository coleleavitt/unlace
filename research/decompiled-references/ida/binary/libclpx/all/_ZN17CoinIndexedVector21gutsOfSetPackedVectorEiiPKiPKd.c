__int64 __fastcall CoinIndexedVector::gutsOfSetPackedVector(
        CoinIndexedVector *this,
        int a2,
        int a3,
        const int *a4,
        const double *a5)
{
  __int64 result; // rax
  __int64 v9; // rsi
  int v10; // r9d
  __int64 v11; // r8

  *((_BYTE *)this + 28) = 1;
  result = CoinIndexedVector::reserve(this, a2);
  *((_DWORD *)this + 4) = 0;
  if ( a3 > 0 )
  {
    result = 0;
    do
    {
      if ( fabs(a5[result]) >= 1.0e-50 )
      {
        v9 = *((int *)this + 4);
        v10 = a4[result];
        *(double *)(*((_QWORD *)this + 1) + 8 * v9) = a5[result];
        v11 = *(_QWORD *)this;
        *((_DWORD *)this + 4) = v9 + 1;
        *(_DWORD *)(v11 + 4 * v9) = v10;
      }
      ++result;
    }
    while ( (unsigned int)(a3 - 1) + 1LL != result );
  }
  return result;
}

