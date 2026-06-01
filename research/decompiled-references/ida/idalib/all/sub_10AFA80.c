char **__fastcall sub_10AFA80(__int64 a1, __int64 a2)
{
  switch ( a2 )
  {
    case 5LL:
      if ( *(_DWORD *)a1 == 1751347809 && *(_BYTE *)(a1 + 4) == 56 )
        return &off_2B609A0;
      if ( *(_DWORD *)a1 == 1751347809 && *(_BYTE *)(a1 + 4) == 57 )
        return &off_2B609D0;
      if ( *(_DWORD *)a1 == 826492282 && *(_BYTE *)(a1 + 4) == 50 )
        return &off_2B60A18;
      return &off_2B60B20;
    case 3LL:
      if ( *(_WORD *)a1 == 12666 && *(_BYTE *)(a1 + 2) == 48 )
      {
        return &off_2B609B8;
      }
      else if ( *(_WORD *)a1 == 12666 && *(_BYTE *)(a1 + 2) == 51 )
      {
        return &off_2B60A48;
      }
      else if ( *(_WORD *)a1 == 12666 && *(_BYTE *)(a1 + 2) == 52 )
      {
        return &off_2B60A78;
      }
      else if ( *(_WORD *)a1 == 12666 && *(_BYTE *)(a1 + 2) == 53 )
      {
        return &off_2B60AA8;
      }
      else
      {
        if ( *(_WORD *)a1 != 12666 || *(_BYTE *)(a1 + 2) != 54 )
        {
          if ( *(_WORD *)a1 == 12666 && *(_BYTE *)(a1 + 2) == 55 )
            return &off_2B60B08;
          return &off_2B60B20;
        }
        return &off_2B60AD8;
      }
    case 4LL:
      if ( *(_DWORD *)a1 != 909717882 )
        return &off_2B60B20;
      return &off_2B609E8;
    case 6LL:
      if ( *(_DWORD *)a1 == 1751347809 && *(_WORD *)(a1 + 4) == 12337 )
        return &off_2B60A00;
      if ( *(_DWORD *)a1 == 1751347809 && *(_WORD *)(a1 + 4) == 12593 )
      {
        return &off_2B60A30;
      }
      else if ( *(_DWORD *)a1 == 1751347809 && *(_WORD *)(a1 + 4) == 12849 )
      {
        return &off_2B60A60;
      }
      else if ( *(_DWORD *)a1 == 1751347809 && *(_WORD *)(a1 + 4) == 13105 )
      {
        return &off_2B60A90;
      }
      else
      {
        if ( *(_DWORD *)a1 != 1751347809 || *(_WORD *)(a1 + 4) != 13361 )
        {
          if ( *(_DWORD *)a1 == 1751347809 && *(_WORD *)(a1 + 4) == 13617 )
            return &off_2B60AF0;
          return &off_2B60B20;
        }
        return &off_2B60AC0;
      }
    default:
      return &off_2B60B20;
  }
}
