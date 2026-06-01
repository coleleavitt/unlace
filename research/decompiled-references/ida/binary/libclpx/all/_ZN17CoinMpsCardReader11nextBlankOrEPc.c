CoinMpsCardReader *__fastcall CoinMpsCardReader::nextBlankOr(CoinMpsCardReader *this, char *a2)
{
  char v2; // cl
  CoinMpsCardReader *result; // rax
  char v4; // dl

  v2 = *(_BYTE *)this;
  while ( v2 != 32 && v2 != 9 )
  {
    if ( !v2 )
      return nullptr;
    result = this;
    while ( 1 )
    {
      result = (CoinMpsCardReader *)((char *)result + 1);
      v4 = *(_BYTE *)result;
      if ( *(_BYTE *)result == 32 || v4 == 9 )
        break;
      if ( !v4 )
        return nullptr;
    }
    if ( result - this != 1 || ((v2 - 43) & 0xFD) != 0 )
      return result;
    do
    {
      do
      {
        result = (CoinMpsCardReader *)((char *)result + 1);
        v2 = *(_BYTE *)result;
      }
      while ( *(_BYTE *)result == 32 );
    }
    while ( v2 == 9 );
    this = result;
  }
  return this;
}

