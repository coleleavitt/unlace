__int64 __fastcall sub_108B470(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rax

  v1 = *(_QWORD *)(a1 + 520);
  v2 = *(_QWORD *)(a1 + 512);
  if ( v1 == 5 )
  {
    if ( *(_DWORD *)v2 == 1936746861 && *(_BYTE *)(v2 + 4) == 51
      || *(_DWORD *)v2 == 1936746861 && *(_BYTE *)(v2 + 4) == 52
      || *(_DWORD *)v2 == 1936746861 && *(_BYTE *)(v2 + 4) == 53
      || *(_DWORD *)v2 == 808728169 && *(_BYTE *)(v2 + 4) == 48
      || *(_DWORD *)v2 == 808793705 && *(_BYTE *)(v2 + 4) == 48 )
    {
      return 1;
    }
  }
  else
  {
    if ( v1 != 6 )
    {
      if ( v1 == 8 )
      {
        if ( *(_QWORD *)v2 != 0x327234367370696DLL
          && *(_QWORD *)v2 != 0x337234367370696DLL
          && *(_QWORD *)v2 != 0x357234367370696DLL
          && *(_QWORD *)v2 != 0x367234367370696DLL )
        {
          return 0;
        }
      }
      else if ( v1 != 7 || *(_DWORD *)v2 != 1702126447 || *(_WORD *)(v2 + 4) != 28271 || *(_BYTE *)(v2 + 6) != 43 )
      {
        return 0;
      }
      return 1;
    }
    if ( *(_DWORD *)v2 == 1936746861 && *(_WORD *)(v2 + 4) == 13366
      || *(_DWORD *)v2 == 1702126447 && *(_WORD *)(v2 + 4) == 28271 )
    {
      return 1;
    }
  }
  return 0;
}
