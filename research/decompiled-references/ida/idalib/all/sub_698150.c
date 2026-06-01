char __fastcall sub_698150(__int64 a1, __int64 a2)
{
  char result; // al
  int v3; // eax
  int v4; // edx
  int v5; // ecx
  bool v6; // sf
  bool v7; // of
  int v8; // eax
  unsigned __int64 v9; // rax
  bool v10; // cf
  unsigned __int64 v11; // rdx

  if ( *(_QWORD *)a1 != *(_QWORD *)a2 )
    return *(_QWORD *)a1 < *(_QWORD *)a2;
  v3 = *(_DWORD *)(a1 + 28);
  v4 = *(_DWORD *)(a2 + 28);
  if ( (((unsigned __int8)v4 ^ (unsigned __int8)v3) & 1) != 0 )
    return v3 & 1;
  v5 = *(_DWORD *)(a1 + 28) & 1;
  v7 = __OFSUB__(v3, v4);
  v6 = v3 - v4 < 0;
  if ( v3 != v4 )
    return v5 ^ v6 ^ v7;
  v8 = *(_DWORD *)(a2 + 24);
  v7 = __OFSUB__(*(_DWORD *)(a1 + 24), v8);
  v6 = *(_DWORD *)(a1 + 24) - v8 < 0;
  if ( *(_DWORD *)(a1 + 24) != v8 )
    return v5 ^ v6 ^ v7;
  v9 = *(_QWORD *)(a2 + 16);
  v10 = *(_QWORD *)(a1 + 16) < v9;
  if ( *(_QWORD *)(a1 + 16) != v9 )
    return v5 ^ v10;
  v11 = *(_QWORD *)(a2 + 8);
  result = 0;
  v10 = *(_QWORD *)(a1 + 8) < v11;
  if ( *(_QWORD *)(a1 + 8) != v11 )
    return v5 ^ v10;
  return result;
}
