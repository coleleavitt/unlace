__int64 __fastcall sub_52FF20(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  _QWORD *v3; // rsi
  _QWORD *v4; // rcx
  _QWORD *v5; // rdx

  if ( *(_BYTE *)(a1 + 32) )
    sub_52F980((__int64 *)a1, 0);
  if ( a2 == -1 )
    return 0xFFFFFFFFLL;
  v2 = sub_3BDD60(*(_QWORD **)(*(_QWORD *)a1 + 1672LL), a2);
  v3 = *(_QWORD **)(a1 + 8);
  v4 = &v3[*(_QWORD *)(a1 + 16)];
  if ( v3 == v4 )
    return 0xFFFFFFFFLL;
  v5 = *(_QWORD **)(a1 + 8);
  while ( v2 != *v5 )
  {
    if ( v4 == ++v5 )
      return 0xFFFFFFFFLL;
  }
  return v5 - v3;
}
