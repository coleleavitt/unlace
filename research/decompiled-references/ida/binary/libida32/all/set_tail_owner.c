__int64 __fastcall set_tail_owner(__int64 a1, unsigned int a2)
{
  unsigned int v2; // ebp
  __int64 *v4; // r13
  _DWORD *v5; // rax
  _DWORD *v6; // r9
  unsigned int v7; // r14d

  if ( !a1 )
    return 0;
  if ( *(char *)(a1 + 9) >= 0 )
    return 0;
  if ( !*(_DWORD *)(a1 + 20) )
    return 0;
  v4 = *(__int64 **)(qword_2CA1698 + 1480);
  if ( !(unsigned __int8)sub_5AD260(v4, a1) )
    return 0;
  v5 = sub_5AA140(*(_DWORD **)(a1 + 24), *(_QWORD *)(a1 + 24) + 4LL * *(int *)(a1 + 20), a2);
  if ( v6 == v5 )
    return 0;
  LOBYTE(v2) = v5 != nullptr && *v5 == a2;
  if ( !(_BYTE)v2 )
    return 0;
  v7 = *(_DWORD *)(a1 + 16);
  *(_DWORD *)(a1 + 16) = a2;
  sub_5ACD60((__int64)v4, (unsigned int *)a1, 0);
  sub_396090(0x2Au, a1, a2, v7);
  return v2;
}

