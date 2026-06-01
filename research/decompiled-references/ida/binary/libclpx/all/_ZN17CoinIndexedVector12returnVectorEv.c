void __fastcall CoinIndexedVector::returnVector(CoinIndexedVector *this)
{
  *(_QWORD *)this = 0;
  *((_QWORD *)this + 1) = 0;
  *((_QWORD *)this + 2) = 0;
  *((_BYTE *)this + 28) = 0;
}

