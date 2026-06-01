CoinSnapshot *__fastcall CoinSnapshot::operator=(CoinSnapshot *this, CoinSnapshot *a2)
{
  if ( this != a2 )
  {
    CoinSnapshot::gutsOfDestructor(this, 15);
    CoinSnapshot::gutsOfCopy(this, a2);
  }
  return this;
}

