const char *__fastcall sub_11330D0(__int64 a1, __int64 a2)
{
  bool v2; // r8
  bool v3; // al
  char v4; // dl
  bool v5; // cl
  bool v6; // si
  char v7; // r9
  const char *result; // rax

  v2 = a2 != 6;
  v3 = a2 != 4;
  if ( a2 == 4 )
  {
    v4 = 1;
    v5 = 1;
    if ( *(_DWORD *)a1 != 930248560 )
    {
      v5 = 1;
      v6 = 1;
      if ( *(_DWORD *)a1 == 947025776 )
      {
        v7 = 1;
        v4 = 1;
        result = "-mpower8";
        goto LABEL_27;
      }
LABEL_17:
      v7 = v6;
      v4 = 1;
      result = "-mpower9";
      if ( *(_DWORD *)a1 == 963802992 )
        goto LABEL_10;
      v4 = 0;
      result = "-mpower7";
      if ( v6 )
        goto LABEL_10;
LABEL_19:
      if ( *(_DWORD *)a1 != 829585264 || *(_BYTE *)(a1 + 4) != 48 )
      {
LABEL_20:
        if ( *(_DWORD *)a1 != 829585264 || *(_BYTE *)(a1 + 4) != 49 )
          goto LABEL_12;
        return "-mpower11";
      }
      return "-mpower10";
    }
  }
  else
  {
    if ( a2 == 6 )
    {
      if ( *(_DWORD *)a1 == 1702326128 && *(_WORD *)(a1 + 4) == 14194 )
      {
        v7 = 1;
        v5 = 1;
        v4 = 1;
        result = "-mpower7";
      }
      else
      {
        if ( *(_DWORD *)a1 != 1702326128 || (v4 = 1, result = "-mpower8", *(_WORD *)(a1 + 4) != 14450) )
        {
          v4 = 0;
          result = "-mpower7";
        }
        v5 = 1;
        v7 = 1;
      }
      goto LABEL_27;
    }
    v5 = a2 != 7;
    v4 = 0;
    if ( a2 == 7 )
    {
      if ( *(_DWORD *)a1 == 912486512 && *(_WORD *)(a1 + 4) == 27700 && *(_BYTE *)(a1 + 6) == 101 )
      {
        result = "-mpower8";
        v4 = 1;
        v7 = 1;
      }
      else
      {
        result = "-mpower7";
        v7 = 1;
      }
LABEL_9:
      if ( (unsigned __int8)v7 | (unsigned __int8)v4 )
        goto LABEL_10;
      goto LABEL_19;
    }
  }
  v6 = a2 != 5;
  if ( !v3 && !v4 )
    goto LABEL_17;
  v7 = v6;
  result = "-mpower7";
LABEL_27:
  if ( (unsigned __int8)v4 | v2 )
    goto LABEL_9;
  if ( *(_DWORD *)a1 == 1702326128 && *(_WORD *)(a1 + 4) == 14706 )
    return "-mpower9";
LABEL_10:
  if ( !((unsigned __int8)v4 | v5) )
  {
    if ( *(_DWORD *)a1 != 1702326128 || *(_WORD *)(a1 + 4) != 12658 || *(_BYTE *)(a1 + 6) != 48 )
    {
      if ( *(_DWORD *)a1 != 1702326128 || *(_WORD *)(a1 + 4) != 12658 || *(_BYTE *)(a1 + 6) != 49 )
        return "-many";
      return "-mpower11";
    }
    return "-mpower10";
  }
  if ( !((unsigned __int8)v4 | (unsigned __int8)v7) )
  {
    v4 = 0;
    goto LABEL_20;
  }
LABEL_12:
  if ( !v4 )
    return "-many";
  return result;
}

