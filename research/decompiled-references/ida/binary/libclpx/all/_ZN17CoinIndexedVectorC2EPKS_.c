// Alternative name is '_ZN17CoinIndexedVectorC1EPKS_'
void __fastcall CoinIndexedVector::CoinIndexedVector(CoinIndexedVector *this, const CoinIndexedVector *a2)
{
  bool v2; // zf
  const double *v3; // r8
  int v4; // edx
  const int *v5; // rcx
  int v6; // esi

  *(_QWORD *)this = 0;
  *((_QWORD *)this + 1) = 0;
  *((_QWORD *)this + 2) = 0;
  *((_BYTE *)this + 28) = 0;
  v2 = *((_BYTE *)a2 + 28) == 0;
  *((_DWORD *)this + 6) = 0;
  v3 = *((const double **)a2 + 1);
  v4 = *((_DWORD *)a2 + 4);
  v5 = *(const int **)a2;
  v6 = *((_DWORD *)a2 + 5);
  if ( v2 )
    CoinIndexedVector::gutsOfSetVector(this, v6, v4, v5, v3);
  else
    CoinIndexedVector::gutsOfSetPackedVector(this, v6, v4, v5, v3);
}

