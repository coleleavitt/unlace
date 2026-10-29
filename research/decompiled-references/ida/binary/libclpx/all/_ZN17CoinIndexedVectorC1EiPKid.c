// Alternative name is '_ZN17CoinIndexedVectorC2EiPKid'
void __fastcall CoinIndexedVector::CoinIndexedVector(CoinIndexedVector *this, int a2, const int *a3, double a4)
{
  *(_QWORD *)this = 0;
  *((_QWORD *)this + 1) = 0;
  *((_QWORD *)this + 2) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_BYTE *)this + 28) = 0;
  CoinIndexedVector::gutsOfSetConstant(this, a2, a3, a4);
}

