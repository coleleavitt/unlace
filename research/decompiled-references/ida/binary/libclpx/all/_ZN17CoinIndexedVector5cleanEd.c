__int64 __fastcall CoinIndexedVector::clean(CoinIndexedVector *this, double a2)
{
  int v2; // eax
  __int64 v3; // r10
  __int64 v4; // r9
  __int64 v5; // r8
  int *v6; // rdx
  __int64 result; // rax
  __int64 v8; // rsi
  double *v9; // rcx

  v2 = *((_DWORD *)this + 4);
  *((_DWORD *)this + 4) = 0;
  if ( v2 <= 0 )
    return 0;
  v3 = *(_QWORD *)this;
  v4 = *((_QWORD *)this + 1);
  v5 = *(_QWORD *)this + 4LL * (unsigned int)(v2 - 1) + 4;
  v6 = *(int **)this;
  result = 0;
  do
  {
    while ( 1 )
    {
      v8 = *v6;
      v9 = (double *)(v4 + 8 * v8);
      if ( fabs(*v9) < a2 )
        break;
      ++v6;
      *((_DWORD *)this + 4) = result + 1;
      *(_DWORD *)(v3 + 4 * result) = v8;
      result = *((int *)this + 4);
      if ( (int *)v5 == v6 )
        return result;
    }
    ++v6;
    *v9 = 0.0;
  }
  while ( (int *)v5 != v6 );
  return result;
}

