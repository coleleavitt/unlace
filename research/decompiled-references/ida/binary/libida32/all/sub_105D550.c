char **__fastcall sub_105D550(__int64 a1, __int64 a2)
{
  switch ( a2 )
  {
    case 9LL:
      if ( *(_QWORD *)a1 == 0x766E6F6761786568LL && *(_BYTE *)(a1 + 8) == 53 )
        return &off_2B311E0;
      return (char **)&off_2B313C0;
    case 10LL:
      if ( *(_QWORD *)a1 == 0x766E6F6761786568LL && *(_WORD *)(a1 + 8) == 13621 )
      {
        return &off_2B31200;
      }
      else if ( *(_QWORD *)a1 == 0x766E6F6761786568LL && *(_WORD *)(a1 + 8) == 12342 )
      {
        return &off_2B31220;
      }
      else if ( *(_QWORD *)a1 == 0x766E6F6761786568LL && *(_WORD *)(a1 + 8) == 12854 )
      {
        return &off_2B31240;
      }
      else if ( *(_QWORD *)a1 == 0x766E6F6761786568LL && *(_WORD *)(a1 + 8) == 13622 )
      {
        return &off_2B31260;
      }
      else if ( *(_QWORD *)a1 == 0x766E6F6761786568LL && *(_WORD *)(a1 + 8) == 13878 )
      {
        return &off_2B31280;
      }
      else if ( *(_QWORD *)a1 == 0x766E6F6761786568LL && *(_WORD *)(a1 + 8) == 14134 )
      {
        return &off_2B312A0;
      }
      else if ( *(_QWORD *)a1 == 0x766E6F6761786568LL && *(_WORD *)(a1 + 8) == 14390 )
      {
        return &off_2B312E0;
      }
      else if ( *(_QWORD *)a1 == 0x766E6F6761786568LL && *(_WORD *)(a1 + 8) == 14646 )
      {
        return &off_2B31300;
      }
      else if ( *(_QWORD *)a1 == 0x766E6F6761786568LL && *(_WORD *)(a1 + 8) == 12599 )
      {
        return &off_2B31320;
      }
      else if ( *(_QWORD *)a1 == 0x766E6F6761786568LL && *(_WORD *)(a1 + 8) == 13111 )
      {
        return &off_2B31360;
      }
      else
      {
        if ( *(_QWORD *)a1 != 0x766E6F6761786568LL || *(_WORD *)(a1 + 8) != 13623 )
        {
          if ( *(_QWORD *)a1 == 0x766E6F6761786568LL && *(_WORD *)(a1 + 8) == 14647 )
            return &off_2B313A0;
          return (char **)&off_2B313C0;
        }
        return &off_2B31380;
      }
    case 11LL:
      if ( *(_QWORD *)a1 != 0x766E6F6761786568LL || *(_WORD *)(a1 + 8) != 14134 || *(_BYTE *)(a1 + 10) != 116 )
      {
        if ( *(_QWORD *)a1 == 0x766E6F6761786568LL && *(_WORD *)(a1 + 8) == 12599 && *(_BYTE *)(a1 + 10) == 116 )
          return &off_2B31340;
        return (char **)&off_2B313C0;
      }
      return &off_2B312C0;
    default:
      return (char **)&off_2B313C0;
  }
}

