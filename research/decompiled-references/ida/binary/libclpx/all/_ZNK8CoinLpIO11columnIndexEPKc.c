__int64 __fastcall CoinLpIO::columnIndex(CoinLpIO *this, const char *a2)
{
  if ( *((_QWORD *)this + 41) )
    return CoinLpIO::findHash(this, a2, 1);
  else
    return 0xFFFFFFFFLL;
}

