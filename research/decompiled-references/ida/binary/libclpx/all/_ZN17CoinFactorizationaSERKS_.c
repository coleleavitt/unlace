CoinFactorization *__fastcall CoinFactorization::operator=(CoinFactorization *this, CoinFactorization *a2)
{
  if ( this != a2 )
  {
    CoinFactorization::gutsOfDestructor(this, 2);
    CoinFactorization::gutsOfInitialize(this, 3);
    *((_DWORD *)this + 289) = *((_DWORD *)a2 + 289);
    CoinFactorization::gutsOfCopy(this, a2);
  }
  return this;
}

