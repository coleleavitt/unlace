_BOOL8 __fastcall CoinLpIO::is_inf(CoinLpIO *this, const char *a2)
{
  int v3; // r12d
  int v4; // r12d
  int v5; // ebx

  if ( strlen(a2) != 3 )
    return 0;
  if ( !*a2 )
    return 0;
  v3 = tolower(*a2);
  if ( tolower(105) != v3 )
    return 0;
  if ( !a2[1] )
    return 0;
  v4 = tolower(a2[1]);
  if ( v4 != tolower(110) || !a2[2] )
    return 0;
  v5 = tolower(a2[2]);
  return v5 == tolower(102);
}

