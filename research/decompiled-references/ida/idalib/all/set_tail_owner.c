__int64 __fastcall set_tail_owner(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned int v3; // ebp
  __int64 *v5; // r13
  _QWORD *v6; // rax
  _QWORD *v7; // r9
  __int64 v8; // r14

  if ( !a1 )
    return 0;
  if ( *(char *)(a1 + 17) >= 0 )
    return 0;
  if ( !*(_DWORD *)(a1 + 32) )
    return 0;
  v5 = *(__int64 **)(qword_2CCB598 + 1672);
  if ( !(unsigned __int8)sub_5C7D50(v5, a1, a3) )
    return 0;
  v6 = sub_5C4680(*(_QWORD **)(a1 + 40), *(_QWORD *)(a1 + 40) + 8LL * *(int *)(a1 + 32), a2);
  if ( v7 == v6 )
    return 0;
  LOBYTE(v3) = v6 != nullptr && *v6 == a2;
  if ( !(_BYTE)v3 )
    return 0;
  v8 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 24) = a2;
  sub_5C77B0((__int64)v5, (unsigned __int64 *)a1, 0);
  sub_39ADA0(0x2Au, a1, a2, v8);
  return v3;
}
