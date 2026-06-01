__int64 __fastcall CoinIndexedVector::insert(CoinIndexedVector *this, int a2, double a3)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 result; // rax

  if ( *((_DWORD *)this + 5) <= a2 )
    CoinIndexedVector::reserve(this, a2 + 1);
  v3 = *((int *)this + 4);
  v4 = *(_QWORD *)this;
  *((_DWORD *)this + 4) = v3 + 1;
  *(_DWORD *)(v4 + 4 * v3) = a2;
  result = *((_QWORD *)this + 1);
  *(double *)(result + 8LL * a2) = a3;
  return result;
}

