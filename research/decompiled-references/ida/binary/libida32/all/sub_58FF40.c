char __fastcall sub_58FF40(__int64 a1)
{
  int v1; // edx
  char result; // al
  char v3; // dl

  if ( !a1 )
    return 0;
  v1 = strncasecmp((const char *)a1, "UTF-", 4u);
  result = 0;
  if ( !v1 )
  {
    v3 = *(_BYTE *)(a1 + 4);
    if ( v3 == 49 )
    {
      return *(_BYTE *)(a1 + 5) != 54;
    }
    else
    {
      result = 1;
      if ( v3 == 51 )
        return *(_BYTE *)(a1 + 5) != 50;
    }
  }
  return result;
}

