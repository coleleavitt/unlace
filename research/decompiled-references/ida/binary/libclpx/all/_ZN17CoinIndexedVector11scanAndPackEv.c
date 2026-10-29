__int64 __fastcall CoinIndexedVector::scanAndPack(CoinIndexedVector *this)
{
  int v1; // edx

  v1 = *((_DWORD *)this + 5);
  *((_DWORD *)this + 4) = 0;
  return CoinIndexedVector::scanAndPack(this, 0, v1);
}

