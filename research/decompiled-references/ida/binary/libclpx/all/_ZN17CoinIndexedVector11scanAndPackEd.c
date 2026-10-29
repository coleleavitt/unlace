__int64 __fastcall CoinIndexedVector::scanAndPack(CoinIndexedVector *this, double a2)
{
  int v2; // edx

  v2 = *((_DWORD *)this + 5);
  *((_DWORD *)this + 4) = 0;
  return CoinIndexedVector::scanAndPack(this, 0, v2, a2);
}

