__int64 __fastcall sub_133D60(__int64 a1, __int64 a2)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // edx
  __int64 result; // rax

  if ( *(_QWORD *)a1 < *(_QWORD *)a2 )
    return 0xFFFFFFFFLL;
  if ( *(_QWORD *)a2 < *(_QWORD *)a1 )
    return 1;
  v2 = *(_DWORD *)(a2 + 8);
  if ( *(_DWORD *)(a1 + 8) < v2 )
    return 0xFFFFFFFFLL;
  if ( *(_DWORD *)(a1 + 8) > v2 )
    return 1;
  v3 = *(_DWORD *)(a2 + 12);
  if ( *(_DWORD *)(a1 + 12) < v3 )
    return 0xFFFFFFFFLL;
  if ( *(_DWORD *)(a1 + 12) > v3 )
    return 1;
  v4 = *(_DWORD *)(a2 + 16);
  if ( *(_DWORD *)(a1 + 16) < v4 )
    return 0xFFFFFFFFLL;
  if ( *(_DWORD *)(a1 + 16) > v4 )
    return 1;
  v5 = *(_DWORD *)(a1 + 104);
  v6 = *(_DWORD *)(a2 + 104);
  if ( v5 < v6 )
    return 0xFFFFFFFFLL;
  if ( v5 > v6 )
    return 1;
  if ( (v6 != 0) != (v5 != 0) )
    return v5 == 0 ? -1 : 1;
  if ( !v5 )
    return 0;
  result = 1;
  if ( v6 )
    return sub_119F60(a1 + 24, a2 + 24);
  return result;
}
