__int64 __fastcall sub_108B5F0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 520);
  v2 = *(_QWORD *)(a1 + 512);
  if ( v1 == 6 )
  {
    if ( *(_DWORD *)v2 == 1936746861 && *(_WORD *)(v2 + 4) == 12851
      || *(_DWORD *)v2 == 1936746861 && *(_WORD *)(v2 + 4) == 13366 )
    {
      return 1;
    }
    if ( *(_DWORD *)v2 != 1702126447 )
      return 0;
    if ( *(_WORD *)(v2 + 4) != 28271 )
      return 0;
    return 2;
  }
  if ( v1 != 8 )
  {
    if ( v1 == 7 )
    {
      if ( *(_DWORD *)v2 == 1702126447 && *(_WORD *)(v2 + 4) == 28271 && *(_BYTE *)(v2 + 6) == 43 )
        return 2;
    }
    else if ( v1 == 5 && *(_DWORD *)v2 == 808858992 )
    {
      if ( *(_BYTE *)(v2 + 4) != 48 )
        return 0;
      return 5;
    }
    return 0;
  }
  if ( *(_QWORD *)v2 == 0x327232337370696DLL || *(_QWORD *)v2 == 0x327234367370696DLL )
    return 2;
  result = 3;
  if ( *(_QWORD *)v2 != 0x337232337370696DLL && *(_QWORD *)v2 != 0x337234367370696DLL )
  {
    if ( *(_QWORD *)v2 != 0x357232337370696DLL && *(_QWORD *)v2 != 0x357234367370696DLL )
    {
      result = 6;
      if ( *(_QWORD *)v2 != 0x367232337370696DLL && *(_QWORD *)v2 != 0x367234367370696DLL )
        return 0;
      return result;
    }
    return 5;
  }
  return result;
}
