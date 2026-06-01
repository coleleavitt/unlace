double *__fastcall CoinIndexedVector::add(CoinIndexedVector *this, int a2, double a3)
{
  double *result; // rax
  double v4; // xmm1_8
  __int64 v5; // rdx
  __int64 v6; // rcx

  if ( *((_DWORD *)this + 5) <= a2 )
    CoinIndexedVector::reserve(this, a2 + 1);
  result = (double *)(*((_QWORD *)this + 1) + 8LL * a2);
  if ( *result == 0.0 )
  {
    if ( fabs(a3) >= 1.0e-50 )
    {
      v5 = *((int *)this + 4);
      v6 = *(_QWORD *)this;
      *((_DWORD *)this + 4) = v5 + 1;
      *(_DWORD *)(v6 + 4 * v5) = a2;
      *result = a3;
    }
  }
  else
  {
    v4 = *result + a3;
    if ( fabs(v4) < 1.0e-50 )
      *result = 1.0e-100;
    else
      *result = v4;
  }
  return result;
}

