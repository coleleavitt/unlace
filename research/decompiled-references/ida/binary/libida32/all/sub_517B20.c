__int64 __fastcall sub_517B20(__int64 a1, int a2)
{
  int v2; // eax
  _DWORD *v3; // rsi
  _DWORD *v4; // rcx
  _DWORD *v5; // rdx

  if ( *(_BYTE *)(a1 + 32) )
    sub_517580((__int64 *)a1, 0);
  if ( a2 == -1 )
    return 0xFFFFFFFFLL;
  v2 = sub_3B90A0(*(_QWORD **)(*(_QWORD *)a1 + 1480LL), a2);
  v3 = *(_DWORD **)(a1 + 8);
  v4 = &v3[*(_QWORD *)(a1 + 16)];
  if ( v3 == v4 )
    return 0xFFFFFFFFLL;
  v5 = *(_DWORD **)(a1 + 8);
  while ( v2 != *v5 )
  {
    if ( v4 == ++v5 )
      return 0xFFFFFFFFLL;
  }
  return v5 - v3;
}

