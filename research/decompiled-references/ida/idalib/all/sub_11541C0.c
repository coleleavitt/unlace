__int64 __fastcall sub_11541C0(__int64 *a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 result; // rax

  v1 = a1[1];
  v2 = *a1;
  if ( v1 == 5 )
  {
    if ( *(_DWORD *)v2 == 1936746861 && *(_BYTE *)(v2 + 4) == 49
      || *(_DWORD *)v2 == 1936746861 && *(_BYTE *)(v2 + 4) == 50
      || *(_DWORD *)v2 == 1936746861 && *(_BYTE *)(v2 + 4) == 51
      || *(_DWORD *)v2 == 1936746861 && *(_BYTE *)(v2 + 4) == 52
      || *(_DWORD *)v2 == 1936746861 && *(_BYTE *)(v2 + 4) == 53 )
    {
      return 1;
    }
    return 2;
  }
  if ( v1 == 6 )
  {
    if ( *(_DWORD *)v2 == 1936746861 && *(_WORD *)(v2 + 4) == 12851
      || *(_DWORD *)v2 == 1936746861 && *(_WORD *)(v2 + 4) == 13366 )
    {
      return 1;
    }
    return 2;
  }
  if ( v1 != 8 )
    return 2;
  if ( *(_QWORD *)v2 == 0x327232337370696DLL || *(_QWORD *)v2 == 0x337232337370696DLL )
    return 3;
  result = 3;
  if ( *(_QWORD *)v2 != 0x357232337370696DLL )
  {
    if ( *(_QWORD *)v2 != 0x367232337370696DLL )
    {
      if ( *(_QWORD *)v2 != 0x327234367370696DLL && *(_QWORD *)v2 != 0x337234367370696DLL )
        return (unsigned int)(*(_QWORD *)v2 == 0x357234367370696DLL) + 2;
      return result;
    }
    return 2;
  }
  return result;
}
