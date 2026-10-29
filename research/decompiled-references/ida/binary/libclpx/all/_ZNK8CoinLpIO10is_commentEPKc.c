__int64 __fastcall CoinLpIO::is_comment(CoinLpIO *this, const char *a2)
{
  return (*a2 == 92) | (unsigned __int8)(*a2 == 47);
}

