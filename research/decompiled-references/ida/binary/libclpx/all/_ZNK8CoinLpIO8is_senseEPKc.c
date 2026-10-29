__int64 __fastcall CoinLpIO::is_sense(CoinLpIO *this, const char *a2)
{
  bool v2; // zf
  __int64 result; // rax
  char reject[12]; // [rsp+Ch] [rbp-Ch] BYREF

  strcpy(reject, "<>=");
  if ( strcspn(a2, reject) )
    return 0xFFFFFFFFLL;
  v2 = strcmp(a2, "<=") == 0;
  result = !v2;
  if ( !v2 )
  {
    result = 1;
    if ( strcmp(a2, "=") )
    {
      result = 2;
      if ( strcmp(a2, ">=") )
      {
        printf("### ERROR: CoinLpIO: is_sense(): string: %s \n", a2);
        return 0xFFFFFFFFLL;
      }
    }
  }
  return result;
}

