CoinDenseFactorization *__fastcall CoinDenseFactorization::operator=(
        CoinDenseFactorization *this,
        const CoinDenseFactorization *a2)
{
  if ( this != a2 )
  {
    CoinDenseFactorization::gutsOfDestructor(this);
    CoinDenseFactorization::gutsOfInitialize(this);
    CoinDenseFactorization::gutsOfCopy(this, a2);
  }
  return this;
}

