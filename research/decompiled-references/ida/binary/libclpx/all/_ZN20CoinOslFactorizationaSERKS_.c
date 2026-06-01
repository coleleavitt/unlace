CoinOslFactorization *__fastcall CoinOslFactorization::operator=(CoinOslFactorization *this, CoinOslFactorization *a2)
{
  bool v2; // r12

  if ( this != a2 )
  {
    v2 = 0;
    if ( *((_DWORD *)this + 87) != *((_DWORD *)a2 + 87) )
      v2 = *((_DWORD *)this + 120) != *((_DWORD *)a2 + 120);
    CoinOslFactorization::gutsOfDestructor(this, v2);
    CoinOslFactorization::gutsOfInitialize(this, v2);
    CoinOslFactorization::gutsOfCopy(this, a2);
  }
  return this;
}

