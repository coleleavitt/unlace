__int64 __fastcall CoinLpIO::rowIndex(CoinLpIO *this, const char *a2)
{
  if ( *((_QWORD *)this + 40) )
    return CoinLpIO::findHash(this, a2, 0);
  else
    return 0xFFFFFFFFLL;
}

