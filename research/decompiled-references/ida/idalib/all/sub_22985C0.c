char *__fastcall sub_22985C0(__int64 a1, __int64 a2)
{
  char **v3; // rdx

  if ( a2 == 10 )
  {
    if ( *(_QWORD *)a1 == 0x312D746C61626F63LL && *(_WORD *)(a1 + 8) == 12336 )
    {
      v3 = &off_2BEC060;
      return v3[2];
    }
    return (char *)a1;
  }
  if ( a2 == 7 )
  {
    if ( *(_DWORD *)a1 != 1818458467 || *(_WORD *)(a1 + 4) != 28271 || *(_BYTE *)(a1 + 6) != 101 )
      return (char *)a1;
    v3 = &off_2BEC080;
  }
  else
  {
    if ( a2 != 8 )
    {
      if ( a2 == 9 )
      {
        if ( *(_QWORD *)a1 == 0x31732D656C707061LL && *(_BYTE *)(a1 + 8) == 48 )
        {
          v3 = &off_2BEC200;
          return v3[2];
        }
        if ( *(_QWORD *)a1 == 0x31612D656C707061LL && *(_BYTE *)(a1 + 8) == 56 )
        {
          v3 = &off_2BEC220;
          return v3[2];
        }
      }
      else if ( a2 == 12 && *(_QWORD *)a1 == 0x616C2D656C707061LL && *(_DWORD *)(a1 + 8) == 1953719668 )
      {
        v3 = &off_2BEC240;
        return v3[2];
      }
      return (char *)a1;
    }
    switch ( *(_QWORD *)a1 )
    {
      case 0x38612D656C707061LL:
        v3 = &off_2BEC0A0;
        return v3[2];
      case 0x39612D656C707061LL:
        v3 = &off_2BEC0C0;
        return v3[2];
      case 0x34732D656C707061LL:
        v3 = &off_2BEC0E0;
        return v3[2];
      case 0x35732D656C707061LL:
        v3 = &off_2BEC100;
        return v3[2];
      case 0x36732D656C707061LL:
        v3 = &off_2BEC120;
        return v3[2];
      case 0x37732D656C707061LL:
        v3 = &off_2BEC140;
        return v3[2];
      case 0x38732D656C707061LL:
        v3 = &off_2BEC160;
        return v3[2];
      case 0x316D2D656C707061LL:
        v3 = &off_2BEC180;
        return v3[2];
      case 0x326D2D656C707061LL:
        v3 = &off_2BEC1A0;
        return v3[2];
      case 0x336D2D656C707061LL:
        v3 = &off_2BEC1C0;
        return v3[2];
    }
    if ( *(_QWORD *)a1 != 0x39732D656C707061LL )
      return (char *)a1;
    v3 = &off_2BEC1E0;
  }
  return v3[2];
}
