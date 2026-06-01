void __fastcall CoinIndexedVector::operator*=(CoinIndexedVector *a1)
{
  _BYTE v1[56]; // [rsp+0h] [rbp-38h] BYREF

  CoinIndexedVector::operator*((CoinIndexedVector *)v1, a1);
  CoinIndexedVector::operator=(a1);
  CoinIndexedVector::~CoinIndexedVector((CoinIndexedVector *)v1);
}

