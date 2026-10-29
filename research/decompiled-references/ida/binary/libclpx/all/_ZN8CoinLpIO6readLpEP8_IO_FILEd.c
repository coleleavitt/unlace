__int64 __fastcall CoinLpIO::readLp(CoinLpIO *this, _IO_FILE *a2, double a3)
{
  CoinLpIO::setEpsilon(this, a3);
  return CoinLpIO::readLp(this, a2);
}

