char **__fastcall sub_108B0B0(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rax

  v1 = a1[1];
  v2 = *a1;
  switch ( v1 )
  {
    case 5LL:
      if ( *(_DWORD *)v2 == 1936746861 && *(_BYTE *)(v2 + 4) == 49 )
        return (char **)&off_2B5D0C0;
      if ( *(_DWORD *)v2 == 1936746861 && *(_BYTE *)(v2 + 4) == 50 )
        return (char **)&off_2B5D0D0;
      if ( *(_DWORD *)v2 == 1936746861 && *(_BYTE *)(v2 + 4) == 51 )
        return (char **)&off_2B5D0E0;
      if ( *(_DWORD *)v2 == 1936746861 && *(_BYTE *)(v2 + 4) == 52 )
        return (char **)&off_2B5D0F0;
      if ( *(_DWORD *)v2 == 1936746861 && *(_BYTE *)(v2 + 4) == 53 )
        return (char **)&off_2B5D100;
      if ( *(_DWORD *)v2 == 808858992 && *(_BYTE *)(v2 + 4) == 48 )
        return &off_2B5D1D0;
      if ( *(_DWORD *)v2 == 808728169 && *(_BYTE *)(v2 + 4) == 48 )
        return &off_2B5D1E0;
      if ( *(_DWORD *)v2 != 808793705 || *(_BYTE *)(v2 + 4) != 48 )
        return (char **)&off_2B5D200;
      return &off_2B5D1F0;
    case 6LL:
      if ( *(_DWORD *)v2 == 1936746861 && *(_WORD *)(v2 + 4) == 12851 )
        return (char **)&off_2B5D110;
      if ( *(_DWORD *)v2 == 1936746861 && *(_WORD *)(v2 + 4) == 13366 )
        return (char **)&off_2B5D160;
      if ( *(_DWORD *)v2 == 1702126447 && *(_WORD *)(v2 + 4) == 28271 )
        return &off_2B5D1B0;
      return (char **)&off_2B5D200;
    case 8LL:
      switch ( *(_QWORD *)v2 )
      {
        case 0x327232337370696DLL:
          return (char **)&off_2B5D120;
        case 0x337232337370696DLL:
          return (char **)&off_2B5D130;
        case 0x357232337370696DLL:
          return (char **)&off_2B5D140;
        case 0x367232337370696DLL:
          return (char **)&off_2B5D150;
        case 0x327234367370696DLL:
          return (char **)&off_2B5D170;
        case 0x337234367370696DLL:
          return (char **)&off_2B5D180;
        case 0x357234367370696DLL:
          return (char **)&off_2B5D190;
        case 0x367234367370696DLL:
          return (char **)&off_2B5D1A0;
        default:
          return (char **)&off_2B5D200;
      }
    default:
      if ( v1 == 7 && *(_DWORD *)v2 == 1702126447 && *(_WORD *)(v2 + 4) == 28271 && *(_BYTE *)(v2 + 6) == 43 )
        return &off_2B5D1C0;
      return (char **)&off_2B5D200;
  }
}
