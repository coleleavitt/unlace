__int64 __fastcall Z3_is_ground(__int64 a1, __int64 a2)
{
  char v2; // al
  char v3; // r13
  int v4; // edx
  __int64 result; // rax
  int v6; // edx

  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  v3 = v2;
  if ( v2 )
  {
    sub_29A700();
    *(_DWORD *)(a1 + 1520) = 0;
    if ( a2 )
    {
      v6 = *(unsigned __int16 *)(a2 + 4);
      if ( (unsigned int)(v6 - 3) <= 1 )
      {
LABEL_6:
        sub_24EA30(a1, 3u, "ast is not an expression");
        if ( !v3 )
          return 0;
        goto LABEL_11;
      }
      if ( !(_WORD)v6 )
      {
        result = *(_BYTE *)(a2 + 30) & 1;
        goto LABEL_12;
      }
    }
    else
    {
      sub_24EA30(a1, 3u, "ast is not an expression");
    }
LABEL_11:
    result = 0;
LABEL_12:
    byte_1C7EBA0 = 1;
    return result;
  }
  *(_DWORD *)(a1 + 1520) = 0;
  if ( a2 )
  {
    v4 = *(unsigned __int16 *)(a2 + 4);
    if ( (unsigned int)(v4 - 3) > 1 )
    {
      if ( !(_WORD)v4 )
        return *(_BYTE *)(a2 + 30) & 1;
      return 0;
    }
    goto LABEL_6;
  }
  sub_24EA30(a1, 3u, "ast is not an expression");
  return 0;
}

