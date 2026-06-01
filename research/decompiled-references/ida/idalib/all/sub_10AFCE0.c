char __fastcall sub_10AFCE0(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ecx
  char result; // al

  v3 = *(_DWORD *)(a1 + 512);
  if ( a3 == 7 )
    return *(_DWORD *)a2 == 1953724787 && *(_WORD *)(a2 + 4) == 28005 && *(_BYTE *)(a2 + 6) == 122;
  if ( a3 == 5 )
  {
    if ( *(_DWORD *)a2 == 1751347809 && *(_BYTE *)(a2 + 4) == 56 )
    {
      return v3 > 7;
    }
    else
    {
      result = v3 > 8;
      if ( *(_DWORD *)a2 != 1751347809 || *(_BYTE *)(a2 + 4) != 57 )
        return 0;
    }
  }
  else
  {
    result = v3 > 9;
    switch ( a3 )
    {
      case 6LL:
        if ( *(_DWORD *)a2 != 1751347809 || *(_WORD *)(a2 + 4) != 12337 )
        {
          if ( *(_DWORD *)a2 == 1751347809 && *(_WORD *)(a2 + 4) == 12593 )
          {
            return v3 > 10;
          }
          else if ( *(_DWORD *)a2 == 1751347809 && *(_WORD *)(a2 + 4) == 12849 )
          {
            return v3 > 11;
          }
          else if ( *(_DWORD *)a2 == 1751347809 && *(_WORD *)(a2 + 4) == 13105 )
          {
            return v3 > 12;
          }
          else if ( *(_DWORD *)a2 == 1751347809 && *(_WORD *)(a2 + 4) == 13361 )
          {
            return v3 > 13;
          }
          else
          {
            result = v3 > 14;
            if ( *(_DWORD *)a2 != 1751347809 || *(_WORD *)(a2 + 4) != 13617 )
              return 0;
          }
        }
        break;
      case 3LL:
        result = *(_BYTE *)(a1 + 516);
        if ( *(_WORD *)a2 != 29800 || *(_BYTE *)(a2 + 2) != 109 )
          return 0;
        break;
      case 2LL:
        result = 0;
        if ( *(_WORD *)a2 == 30838 )
          return *(_BYTE *)(a1 + 517);
        break;
      default:
        return 0;
    }
  }
  return result;
}
