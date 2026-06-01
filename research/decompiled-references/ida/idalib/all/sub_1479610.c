bool __fastcall sub_1479610(__int64 a1)
{
  _WORD *v1; // rax
  __int64 v2; // rdx
  _WORD *v3; // rcx
  bool result; // al

  v1 = sub_1479360((_WORD *)(*(_QWORD *)(a1 + 16) + 16LL), **(unsigned int **)(a1 + 16));
  v3 = v1;
  switch ( v2 )
  {
    case 5LL:
      if ( *(_DWORD *)v1 == 1701738319 && *((_BYTE *)v1 + 4) == 114 )
        return 1;
      goto LABEL_16;
    case 7LL:
      if ( *(_DWORD *)v1 == 1852403536 && v1[2] == 25972 && *((_BYTE *)v1 + 6) == 114 )
        return 1;
LABEL_16:
      result = v2 != 23;
      goto LABEL_17;
    case 14LL:
      if ( *(_QWORD *)v1 == 0x656E6961746E6F63LL && *((_DWORD *)v1 + 2) == 2037669732 && v1[6] == 25968
        || *(_QWORD *)v1 == 0x6572726566657270LL && *((_DWORD *)v1 + 2) == 1634623332 && v1[6] == 25965 )
      {
        return 1;
      }
      if ( *(_QWORD *)v1 == 0x6572726566657270LL && *((_DWORD *)v1 + 2) == 2037669732 )
        return v1[6] == 25968;
      return 0;
  }
  if ( v2 != 18 )
    goto LABEL_16;
  if ( !(*(_QWORD *)v1 ^ 0x74656C74756F6269LL | *((_QWORD *)v1 + 1) ^ 0x697463656C6C6F63LL) && v1[8] == 28271 )
    return 1;
  result = 1;
LABEL_17:
  if ( result )
  {
    if ( v2 == 13 && *(_QWORD *)v3 == 0x657079745F636576LL && *((_DWORD *)v3 + 2) == 1852401759 )
      return *((_BYTE *)v3 + 12) == 116;
    return 0;
  }
  if ( !(*(_QWORD *)v3 ^ 0x72656B5F6C637973LL | *((_QWORD *)v3 + 1) ^ 0x72746E655F6C656ELL)
    && *((_DWORD *)v3 + 4) == 1869635449
    && v3[10] == 28265
    && *((_BYTE *)v3 + 22) == 116 )
  {
    return 1;
  }
  return result;
}
