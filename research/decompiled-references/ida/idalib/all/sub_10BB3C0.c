size_t __fastcall sub_10BB3C0(__int64 a1)
{
  size_t result; // rax
  bool v2; // dl
  char v3; // cl
  char v4; // al

  if ( !a1 )
  {
    v2 = 1;
LABEL_28:
    v3 = v2;
    if ( !v2 )
      goto LABEL_11;
LABEL_29:
    v4 = 1;
    if ( v2 )
      goto LABEL_16;
LABEL_30:
    if ( (*(_DWORD *)a1 != 1852007232 || *(_WORD *)(a1 + 4) != 25959)
      && (*(_DWORD *)a1 != 1852007232 || *(_WORD *)(a1 + 4) != 25964) )
    {
LABEL_22:
      result = 0;
      if ( v3 || *(_DWORD *)a1 != 1868784448 && *(_DWORD *)a1 != 1885561664 && *(_DWORD *)a1 != 1935893312 )
        return result;
      return 4;
    }
    return 6;
  }
  result = strlen((const char *)a1);
  v2 = result != 6;
  if ( result != 4 )
  {
    if ( result == 5 )
    {
      if ( *(_DWORD *)a1 == 1633903424 && *(_BYTE *)(a1 + 4) == 101 )
        return result;
      if ( *(_DWORD *)a1 == 1650680640 && *(_BYTE *)(a1 + 4) == 101
        || *(_DWORD *)a1 == 1734566720 && *(_BYTE *)(a1 + 4) == 101
        || *(_DWORD *)a1 == 1818452800 && *(_BYTE *)(a1 + 4) == 101
        || *(_DWORD *)a1 == 1852007232 && *(_BYTE *)(a1 + 4) == 97
        || *(_DWORD *)a1 == 1852007232 && *(_BYTE *)(a1 + 4) == 98 )
      {
        return 5;
      }
      v3 = 1;
      v2 = 1;
LABEL_11:
      if ( *(_DWORD *)a1 == 1852007232 && *(_BYTE *)(a1 + 4) == 99
        || *(_DWORD *)a1 == 1852007232 && *(_BYTE *)(a1 + 4) == 101
        || *(_DWORD *)a1 == 1852007232 && *(_BYTE *)(a1 + 4) == 122
        || *(_DWORD *)a1 == 1852007232 && *(_BYTE *)(a1 + 4) == 103 )
      {
        return 5;
      }
      v4 = 0;
      if ( v2 )
      {
LABEL_16:
        if ( !v4
          && (*(_DWORD *)a1 == 1852007232 && *(_BYTE *)(a1 + 4) == 108
           || *(_DWORD *)a1 == 1852007232 && *(_BYTE *)(a1 + 4) == 111
           || *(_DWORD *)a1 == 1852007232 && *(_BYTE *)(a1 + 4) == 112
           || *(_DWORD *)a1 == 1852007232 && *(_BYTE *)(a1 + 4) == 115) )
        {
          return 5;
        }
        goto LABEL_22;
      }
      goto LABEL_30;
    }
    if ( result == 6 )
    {
      if ( *(_DWORD *)a1 == 1852007232 && *(_WORD *)(a1 + 4) == 25953
        || *(_DWORD *)a1 == 1852007232 && *(_WORD *)(a1 + 4) == 25954 )
      {
        return 6;
      }
      v3 = 1;
      goto LABEL_29;
    }
    goto LABEL_28;
  }
  if ( *(_DWORD *)a1 != 1633903424 )
  {
    result = 4;
    if ( *(_DWORD *)a1 != 1650680640 )
    {
      if ( *(_DWORD *)a1 == 1667457856
        || *(_DWORD *)a1 == 1701012288
        || *(_DWORD *)a1 == 2053333824
        || *(_DWORD *)a1 == 1734566720 )
      {
        return 4;
      }
      v3 = 0;
      v2 = 1;
      if ( *(_DWORD *)a1 == 1818452800 )
        return result;
      goto LABEL_29;
    }
  }
  return result;
}
