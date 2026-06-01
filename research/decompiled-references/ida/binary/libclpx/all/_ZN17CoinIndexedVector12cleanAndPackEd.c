__int64 __fastcall CoinIndexedVector::cleanAndPack(CoinIndexedVector *this, double a2)
{
  __int64 result; // rax
  __int64 v3; // r10
  __int64 v4; // r8
  __int64 v5; // r9
  int *v6; // rdx
  __int64 v7; // rsi
  double *v8; // rcx
  double v9; // xmm1_8

  result = *((unsigned int *)this + 4);
  if ( !*((_BYTE *)this + 28) )
  {
    *((_DWORD *)this + 4) = 0;
    if ( (int)result <= 0 )
    {
      result = 0;
    }
    else
    {
      v3 = *(_QWORD *)this;
      v4 = *((_QWORD *)this + 1);
      v5 = *(_QWORD *)this + 4LL * (unsigned int)(result - 1) + 4;
      v6 = *(int **)this;
      result = 0;
      do
      {
        v7 = *v6;
        v8 = (double *)(v4 + 8 * v7);
        v9 = *v8;
        *v8 = 0.0;
        if ( fabs(v9) >= a2 )
        {
          *(double *)(v4 + 8LL * (int)result) = v9;
          *((_DWORD *)this + 4) = result + 1;
          *(_DWORD *)(v3 + 4LL * (int)result) = v7;
          result = *((unsigned int *)this + 4);
        }
        ++v6;
      }
      while ( (int *)v5 != v6 );
    }
    *((_BYTE *)this + 28) = 1;
  }
  return result;
}

