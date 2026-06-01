char **__fastcall sub_108BD40(__int64 a1, __int64 a2)
{
  switch ( a2 )
  {
    case 5LL:
      if ( *(_DWORD *)a1 == 1751347809 && *(_BYTE *)(a1 + 4) == 56 )
        return &off_2B36A00;
      if ( *(_DWORD *)a1 == 1751347809 && *(_BYTE *)(a1 + 4) == 57 )
        return &off_2B36A30;
      if ( *(_DWORD *)a1 == 826492282 && *(_BYTE *)(a1 + 4) == 50 )
        return &off_2B36A78;
      return &off_2B36B80;
    case 3LL:
      if ( *(_WORD *)a1 == 12666 && *(_BYTE *)(a1 + 2) == 48 )
      {
        return &off_2B36A18;
      }
      else if ( *(_WORD *)a1 == 12666 && *(_BYTE *)(a1 + 2) == 51 )
      {
        return &off_2B36AA8;
      }
      else if ( *(_WORD *)a1 == 12666 && *(_BYTE *)(a1 + 2) == 52 )
      {
        return &off_2B36AD8;
      }
      else if ( *(_WORD *)a1 == 12666 && *(_BYTE *)(a1 + 2) == 53 )
      {
        return &off_2B36B08;
      }
      else
      {
        if ( *(_WORD *)a1 != 12666 || *(_BYTE *)(a1 + 2) != 54 )
        {
          if ( *(_WORD *)a1 == 12666 && *(_BYTE *)(a1 + 2) == 55 )
            return &off_2B36B68;
          return &off_2B36B80;
        }
        return &off_2B36B38;
      }
    case 4LL:
      if ( *(_DWORD *)a1 != 909717882 )
        return &off_2B36B80;
      return &off_2B36A48;
    case 6LL:
      if ( *(_DWORD *)a1 == 1751347809 && *(_WORD *)(a1 + 4) == 12337 )
        return &off_2B36A60;
      if ( *(_DWORD *)a1 == 1751347809 && *(_WORD *)(a1 + 4) == 12593 )
      {
        return &off_2B36A90;
      }
      else if ( *(_DWORD *)a1 == 1751347809 && *(_WORD *)(a1 + 4) == 12849 )
      {
        return &off_2B36AC0;
      }
      else if ( *(_DWORD *)a1 == 1751347809 && *(_WORD *)(a1 + 4) == 13105 )
      {
        return &off_2B36AF0;
      }
      else
      {
        if ( *(_DWORD *)a1 != 1751347809 || *(_WORD *)(a1 + 4) != 13361 )
        {
          if ( *(_DWORD *)a1 == 1751347809 && *(_WORD *)(a1 + 4) == 13617 )
            return &off_2B36B50;
          return &off_2B36B80;
        }
        return &off_2B36B20;
      }
    default:
      return &off_2B36B80;
  }
}

