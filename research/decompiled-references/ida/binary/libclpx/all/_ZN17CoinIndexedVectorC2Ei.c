// Alternative name is '_ZN17CoinIndexedVectorC1Ei'
void __fastcall CoinIndexedVector::CoinIndexedVector(CoinIndexedVector *this, int a2)
{
  *(_QWORD *)this = 0;
  *((_QWORD *)this + 1) = 0;
  *((_QWORD *)this + 2) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_BYTE *)this + 28) = 0;
  CoinIndexedVector::reserve(this, a2);
}

