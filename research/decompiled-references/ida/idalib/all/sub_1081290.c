char **__fastcall sub_1081290(__int64 a1, __int64 a2)
{
  switch ( a2 )
  {
    case 9LL:
      if ( *(_QWORD *)a1 == 0x766E6F6761786568LL && *(_BYTE *)(a1 + 8) == 53 )
        return &off_2B5B180;
      return (char **)&off_2B5B360;
    case 10LL:
      if ( *(_QWORD *)a1 == 0x766E6F6761786568LL && *(_WORD *)(a1 + 8) == 13621 )
      {
        return &off_2B5B1A0;
      }
      else if ( *(_QWORD *)a1 == 0x766E6F6761786568LL && *(_WORD *)(a1 + 8) == 12342 )
      {
        return &off_2B5B1C0;
      }
      else if ( *(_QWORD *)a1 == 0x766E6F6761786568LL && *(_WORD *)(a1 + 8) == 12854 )
      {
        return &off_2B5B1E0;
      }
      else if ( *(_QWORD *)a1 == 0x766E6F6761786568LL && *(_WORD *)(a1 + 8) == 13622 )
      {
        return &off_2B5B200;
      }
      else if ( *(_QWORD *)a1 == 0x766E6F6761786568LL && *(_WORD *)(a1 + 8) == 13878 )
      {
        return &off_2B5B220;
      }
      else if ( *(_QWORD *)a1 == 0x766E6F6761786568LL && *(_WORD *)(a1 + 8) == 14134 )
      {
        return &off_2B5B240;
      }
      else if ( *(_QWORD *)a1 == 0x766E6F6761786568LL && *(_WORD *)(a1 + 8) == 14390 )
      {
        return &off_2B5B280;
      }
      else if ( *(_QWORD *)a1 == 0x766E6F6761786568LL && *(_WORD *)(a1 + 8) == 14646 )
      {
        return &off_2B5B2A0;
      }
      else if ( *(_QWORD *)a1 == 0x766E6F6761786568LL && *(_WORD *)(a1 + 8) == 12599 )
      {
        return &off_2B5B2C0;
      }
      else if ( *(_QWORD *)a1 == 0x766E6F6761786568LL && *(_WORD *)(a1 + 8) == 13111 )
      {
        return &off_2B5B300;
      }
      else
      {
        if ( *(_QWORD *)a1 != 0x766E6F6761786568LL || *(_WORD *)(a1 + 8) != 13623 )
        {
          if ( *(_QWORD *)a1 == 0x766E6F6761786568LL && *(_WORD *)(a1 + 8) == 14647 )
            return &off_2B5B340;
          return (char **)&off_2B5B360;
        }
        return &off_2B5B320;
      }
    case 11LL:
      if ( *(_QWORD *)a1 != 0x766E6F6761786568LL || *(_WORD *)(a1 + 8) != 14134 || *(_BYTE *)(a1 + 10) != 116 )
      {
        if ( *(_QWORD *)a1 == 0x766E6F6761786568LL && *(_WORD *)(a1 + 8) == 12599 && *(_BYTE *)(a1 + 10) == 116 )
          return &off_2B5B2E0;
        return (char **)&off_2B5B360;
      }
      return &off_2B5B260;
    default:
      return (char **)&off_2B5B360;
  }
}
