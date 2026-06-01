char __fastcall sub_10810A0(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ecx
  char result; // al
  bool v5; // cl

  v3 = *(_DWORD *)(a1 + 248);
  result = v3 == 28;
  v5 = v3 != 28;
  if ( a3 == 5 )
  {
    if ( *(_DWORD *)a2 == 1668508018 && *(_BYTE *)(a2 + 4) == 118 )
      return 1;
    if ( *(_DWORD *)a2 == 1768043059 && *(_BYTE *)(a2 + 4) == 116 )
      return v5;
    if ( *(_DWORD *)a2 == 1768043574 && *(_BYTE *)(a2 + 4) == 116 )
      return result;
    return sub_2286200(*(_QWORD *)(a1 + 576), a2, a3);
  }
  if ( a3 != 7 )
  {
    if ( a3 == 12 && *(_QWORD *)a2 == 0x656D697265707865LL && *(_DWORD *)(a2 + 8) == 1818326126 )
      return *(_BYTE *)(a1 + 585);
    return sub_2286200(*(_QWORD *)(a1 + 576), a2, a3);
  }
  if ( *(_DWORD *)a2 == 1668508018 && *(_WORD *)(a2 + 4) == 13174 && *(_BYTE *)(a2 + 6) == 50 )
    return v5;
  if ( *(_DWORD *)a2 != 1668508018 || *(_WORD *)(a2 + 4) != 13942 || *(_BYTE *)(a2 + 6) != 52 )
    return sub_2286200(*(_QWORD *)(a1 + 576), a2, a3);
  return result;
}

