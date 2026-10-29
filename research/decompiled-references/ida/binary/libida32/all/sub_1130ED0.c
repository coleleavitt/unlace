__int64 __fastcall sub_1130ED0(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rax

  v1 = a1[1];
  v2 = *a1;
  if ( v1 == 8 )
  {
    if ( *(_QWORD *)v2 == 0x327232337370696DLL
      || *(_QWORD *)v2 == 0x337232337370696DLL
      || *(_QWORD *)v2 == 0x357232337370696DLL
      || *(_QWORD *)v2 == 0x367232337370696DLL
      || *(_QWORD *)v2 == 0x327234367370696DLL
      || *(_QWORD *)v2 == 0x337234367370696DLL
      || *(_QWORD *)v2 == 0x357234367370696DLL
      || *(_QWORD *)v2 == 0x367234367370696DLL )
    {
      return 1;
    }
  }
  else if ( v1 == 6 )
  {
    if ( *(_DWORD *)v2 == 1702126447 && *(_WORD *)(v2 + 4) == 28271 )
      return 1;
  }
  else if ( v1 == 5
         && (*(_DWORD *)v2 == 808858992 && *(_BYTE *)(v2 + 4) == 48
          || *(_DWORD *)v2 == 808728169 && *(_BYTE *)(v2 + 4) == 48
          || *(_DWORD *)v2 == 808793705 && *(_BYTE *)(v2 + 4) == 48) )
  {
    return 1;
  }
  return 0;
}

