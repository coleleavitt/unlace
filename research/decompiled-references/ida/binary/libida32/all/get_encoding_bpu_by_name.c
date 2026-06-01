__int64 __fastcall get_encoding_bpu_by_name(__int64 a1)
{
  int v1; // edx
  __int64 result; // rax
  char v3; // dl

  if ( !a1 )
    return 1;
  v1 = strncasecmp((const char *)a1, "UTF-", 4u);
  result = 1;
  if ( !v1 )
  {
    v3 = *(_BYTE *)(a1 + 4);
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

