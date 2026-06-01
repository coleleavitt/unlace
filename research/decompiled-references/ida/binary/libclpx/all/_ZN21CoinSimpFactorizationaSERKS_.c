CoinSimpFactorization *__fastcall CoinSimpFactorization::operator=(
        CoinSimpFactorization *this,
        const CoinSimpFactorization *a2)
{
  if ( this != a2 )
  {
    CoinSimpFactorization::gutsOfDestructor(this);
    CoinSimpFactorization::gutsOfInitialize(this);
    CoinSimpFactorization::gutsOfCopy(this, a2);
  }
  return this;
}

