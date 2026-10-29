__int64 __fastcall CoinMpsIO::getNumRows(CoinMpsIO *this)
{
  return *((unsigned int *)this + 10);
}

