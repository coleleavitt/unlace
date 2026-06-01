__int64 __fastcall CoinLpIO::writeLp(CoinLpIO *this, _IO_FILE *stream, double a3, int a4, int a5, bool a6)
{
  CoinLpIO::setEpsilon(this, a3);
  CoinLpIO::setNumberAcross(this, a4);
  CoinLpIO::setDecimals(this, a5);
  return CoinLpIO::writeLp(this, stream, a6);
}

