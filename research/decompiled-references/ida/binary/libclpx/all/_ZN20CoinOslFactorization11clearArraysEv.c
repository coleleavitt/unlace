__int64 __fastcall CoinOslFactorization::clearArrays(CoinOslFactorization *this)
{
  *((_DWORD *)this + 116) = 0;
  *(_QWORD *)((char *)this + 388) = 0;
  *(_QWORD *)((char *)this + 60) = 0;
  *((_DWORD *)this + 121) = 0;
  return CoinOslFactorization::gutsOfDestructor(this, 0);
}

