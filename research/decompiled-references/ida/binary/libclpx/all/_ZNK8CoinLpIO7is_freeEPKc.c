_BOOL8 __fastcall CoinLpIO::is_free(CoinLpIO *this, const char *a2)
{
  int v3; // r12d
  int v4; // r12d
  int v5; // r12d

  if ( strlen(a2) == 4
    && *a2
    && (v3 = tolower(*a2), tolower(102) == v3)
    && a2[1]
    && (v4 = tolower(a2[1]), v4 == tolower(114))
    && a2[2]
    && (v5 = tolower(a2[2]), v5 == tolower(101))
    && a2[3] )
  {
    return tolower(a2[3]) == v5;
  }
  else
  {
    return 0;
  }
}

