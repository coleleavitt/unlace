bool __fastcall CoinParamUtils::isInteractive(CoinParamUtils *this)
{
  bool result; // al

  result = 0;
  if ( dword_4D6D4C < 0 )
    return stream == stdin;
  return result;
}

