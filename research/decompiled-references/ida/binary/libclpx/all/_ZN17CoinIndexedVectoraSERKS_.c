CoinIndexedVector *__fastcall CoinIndexedVector::operator=(CoinIndexedVector *this, __int64 a2)
{
  char v3; // al
  int v4; // edx
  int v5; // esi
  const double *v6; // r8
  const int *v7; // rcx

  if ( this == (CoinIndexedVector *)a2 )
    return this;
  CoinIndexedVector::clear(this);
  v3 = *(_BYTE *)(a2 + 28);
  v4 = *(_DWORD *)(a2 + 16);
  v5 = *(_DWORD *)(a2 + 20);
  v6 = *(const double **)(a2 + 8);
  v7 = *(const int **)a2;
  *((_BYTE *)this + 28) = v3;
  if ( v3 )
  {
    CoinIndexedVector::gutsOfSetPackedVector(this, v5, v4, v7, v6);
    return this;
  }
  CoinIndexedVector::gutsOfSetVector(this, v5, v4, v7, v6);
  return this;
}

