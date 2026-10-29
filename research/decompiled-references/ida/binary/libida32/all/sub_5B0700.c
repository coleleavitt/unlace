__int64 __fastcall sub_5B0700(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // ebp
  _DWORD *v6; // rax
  _DWORD *v7; // r9
  unsigned int v8; // r14d

  if ( !a2 )
    return 0;
  if ( *(char *)(a2 + 9) >= 0 )
    return 0;
  if ( !*(_DWORD *)(a2 + 20) )
    return 0;
  if ( !(unsigned __int8)sub_5AD260(*(__int64 **)(qword_2CA1698 + 1480), a2) )
    return 0;
  v6 = sub_5AA140(*(_DWORD **)(a2 + 24), *(_QWORD *)(a2 + 24) + 4LL * *(int *)(a2 + 20), a3);
  if ( v7 == v6 )
    return 0;
  LOBYTE(v3) = v6 != nullptr && *v6 == a3;
  if ( !(_BYTE)v3 )
    return 0;
  v8 = *(_DWORD *)(a2 + 16);
  *(_DWORD *)(a2 + 16) = a3;
  sub_5ACD60(a1, (unsigned int *)a2, 0);
  sub_396090(0x2Au, a2, a3, v8);
  return v3;
}

