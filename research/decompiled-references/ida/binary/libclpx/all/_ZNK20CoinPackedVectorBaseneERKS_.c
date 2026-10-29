__int64 CoinPackedVectorBase::operator!=()
{
  return (unsigned int)CoinPackedVectorBase::operator==() ^ 1;
}

