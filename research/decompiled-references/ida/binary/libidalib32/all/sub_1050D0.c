__int64 __fastcall sub_1050D0(__int64 a1, __int64 a2)
{
  int v3; // esi
  int v4; // eax
  const char *v5; // rbp

  v3 = *(_DWORD *)(a2 + 8);
  if ( (unsigned int)(v3 - 67) <= 5 || v3 == 64 )
    return *(_QWORD *)a2;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 64LL))(a1) )
    return 0;
  v4 = *(_DWORD *)(a2 + 8);
  v5 = *(const char **)(a2 + 72);
  if ( v4 == 36 || v4 == 41 )
  {
    if ( !strncmp(*(const char **)(a2 + 72), "Actins", 6u) )
      return *(_QWORD *)a2;
    return 0;
  }
  if ( !strncmp(*(const char **)(a2 + 72), "Chooser", 7u) || !strncmp(v5, "AppPrefer", 9u) )
    return *(_QWORD *)a2;
  return 0;
}

