__int64 __fastcall sub_5AA090(__int64 a1)
{
  int v1; // edx
  __int64 result; // rax
  char v3; // dl

  if ( !a1 )
    return 0;
  v1 = strncasecmp((const char *)a1, "UTF-", 4u);
  result = 0;
  if ( !v1 )
  {
    v3 = *(_BYTE *)(a1 + 4);
    result = 1;
    if ( v3 == 49 )
    {
      if ( *(_BYTE *)(a1 + 5) == 54 )
        return 2;
    }
    else if ( v3 == 51 )
    {
      result = 4;
      if ( *(_BYTE *)(a1 + 5) != 50 )
        return 1;
    }
  }
  return result;
}
