char **__fastcall sub_1067370(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rax

  v1 = a1[1];
  v2 = *a1;
  switch ( v1 )
  {
    case 5LL:
      if ( *(_DWORD *)v2 == 1936746861 && *(_BYTE *)(v2 + 4) == 49 )
        return (char **)&off_2B33120;
      if ( *(_DWORD *)v2 == 1936746861 && *(_BYTE *)(v2 + 4) == 50 )
        return (char **)&off_2B33130;
      if ( *(_DWORD *)v2 == 1936746861 && *(_BYTE *)(v2 + 4) == 51 )
        return (char **)&off_2B33140;
      if ( *(_DWORD *)v2 == 1936746861 && *(_BYTE *)(v2 + 4) == 52 )
        return (char **)&off_2B33150;
      if ( *(_DWORD *)v2 == 1936746861 && *(_BYTE *)(v2 + 4) == 53 )
        return (char **)&off_2B33160;
      if ( *(_DWORD *)v2 == 808858992 && *(_BYTE *)(v2 + 4) == 48 )
        return &off_2B33230;
      if ( *(_DWORD *)v2 == 808728169 && *(_BYTE *)(v2 + 4) == 48 )
        return &off_2B33240;
      if ( *(_DWORD *)v2 != 808793705 || *(_BYTE *)(v2 + 4) != 48 )
        return (char **)&off_2B33260;
      return &off_2B33250;
    case 6LL:
      if ( *(_DWORD *)v2 == 1936746861 && *(_WORD *)(v2 + 4) == 12851 )
        return (char **)&off_2B33170;
      if ( *(_DWORD *)v2 == 1936746861 && *(_WORD *)(v2 + 4) == 13366 )
        return (char **)&off_2B331C0;
      if ( *(_DWORD *)v2 == 1702126447 && *(_WORD *)(v2 + 4) == 28271 )
        return &off_2B33210;
      return (char **)&off_2B33260;
    case 8LL:
      switch ( *(_QWORD *)v2 )
      {
        case 0x327232337370696DLL:
          return (char **)&off_2B33180;
        case 0x337232337370696DLL:
          return (char **)&off_2B33190;
        case 0x357232337370696DLL:
          return (char **)&off_2B331A0;
        case 0x367232337370696DLL:
          return (char **)&off_2B331B0;
        case 0x327234367370696DLL:
          return (char **)&off_2B331D0;
        case 0x337234367370696DLL:
          return (char **)&off_2B331E0;
        case 0x357234367370696DLL:
          return (char **)&off_2B331F0;
        case 0x367234367370696DLL:
          return (char **)&off_2B33200;
        default:
          return (char **)&off_2B33260;
      }
    default:
      if ( v1 == 7 && *(_DWORD *)v2 == 1702126447 && *(_WORD *)(v2 + 4) == 28271 && *(_BYTE *)(v2 + 6) == 43 )
        return &off_2B33220;
      return (char **)&off_2B33260;
  }
}

