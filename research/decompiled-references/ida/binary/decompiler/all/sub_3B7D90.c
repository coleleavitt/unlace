__int64 __fastcall sub_3B7D90(__int64 a1, __int64 *a2)
{
  __int64 v2; // r12
  __int64 v4; // rdi
  __int64 v5; // rbp
  int v6; // eax
  __int64 result; // rax
  __int64 v8; // rdx

  if ( *((_DWORD *)a2 + 2) == 27 )
    return 2;
  v2 = *a2;
  v4 = *(_QWORD *)(a1 + 16);
  v5 = sub_3856D0(v4, *a2);
  if ( !v5 )
    return 7;
  v6 = *(_DWORD *)(a1 + 24);
  if ( v6 )
  {
    if ( v6 != 1 )
      sub_3B5950(v4);
    if ( v2 != *(_QWORD *)(v5 + 8) )
      return 7;
  }
  if ( *(_DWORD *)(v5 + 80) != 1 )
    return 7;
  sub_387930(v5);
  v8 = sub_3C0830(*(_QWORD *)(v5 + 24) + 1312LL);
  result = 3;
  if ( !v8 && (*(_DWORD *)(v5 + 80) != 1 || *(_DWORD *)(*(_QWORD *)(v5 + 88) + 8LL) != 82) )
    return 7;
  return result;
}
