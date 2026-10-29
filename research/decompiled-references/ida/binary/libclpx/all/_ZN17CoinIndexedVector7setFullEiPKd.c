__int64 __fastcall CoinIndexedVector::setFull(CoinIndexedVector *this, int a2, const double *a3)
{
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx

  CoinIndexedVector::clear(this);
  result = CoinIndexedVector::reserve(this, a2);
  *((_DWORD *)this + 4) = 0;
  if ( a2 > 0 )
  {
    result = 0;
    do
    {
      if ( fabs(a3[result]) >= 1.0e-50 )
      {
        v5 = *((int *)this + 4);
        *(double *)(*((_QWORD *)this + 1) + 8 * result) = a3[result];
        v6 = *(_QWORD *)this;
        *((_DWORD *)this + 4) = v5 + 1;
        *(_DWORD *)(v6 + 4 * v5) = result;
      }
      ++result;
    }
    while ( (unsigned int)(a2 - 1) + 1LL != result );
  }
  return result;
}

