__int64 __fastcall sub_3B5510(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // r12
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // rbp
  int v8; // eax
  __int64 result; // rax
  __int64 v10; // rdx

  if ( *(_DWORD *)(a2 + 8) == 27 )
    return 2;
  v3 = *(_QWORD *)a2;
  v5 = *(_QWORD *)(a1 + 16);
  v6 = *(_QWORD *)a2;
  v7 = sub_3822F0(v5, v6);
  if ( !v7 )
    return 7;
  v8 = *(_DWORD *)(a1 + 24);
  if ( v8 )
  {
    if ( v8 != 1 )
      sub_3B30D0(a3, v5, v6);
    if ( v3 != *(_QWORD *)(v7 + 8) )
      return 7;
  }
  if ( *(_DWORD *)(v7 + 80) != 1 )
    return 7;
  sub_384830(v7);
  v10 = sub_3BE030(*(_QWORD *)(v7 + 24) + 1312LL);
  result = 3;
  if ( !v10 && (*(_DWORD *)(v7 + 80) != 1 || *(_DWORD *)(*(_QWORD *)(v7 + 88) + 8LL) != 82) )
    return 7;
  return result;
}
