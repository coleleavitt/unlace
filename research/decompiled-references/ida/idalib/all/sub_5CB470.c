__int64 __fastcall sub_5CB470(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned int v3; // ebp
  _QWORD *v6; // rax
  _QWORD *v7; // r9
  __int64 v8; // r14

  if ( !a2 )
    return 0;
  if ( *(char *)(a2 + 17) >= 0 )
    return 0;
  if ( !*(_DWORD *)(a2 + 32) )
    return 0;
  if ( !(unsigned __int8)sub_5C7D50(*(__int64 **)(qword_2CCB598 + 1672), a2, a3) )
    return 0;
  v6 = sub_5C4680(*(_QWORD **)(a2 + 40), *(_QWORD *)(a2 + 40) + 8LL * *(int *)(a2 + 32), a3);
  if ( v7 == v6 )
    return 0;
  LOBYTE(v3) = v6 != nullptr && *v6 == a3;
  if ( !(_BYTE)v3 )
    return 0;
  v8 = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a2 + 24) = a3;
  sub_5C77B0(a1, (unsigned __int64 *)a2, 0);
  sub_39ADA0(0x2Au, a2, a3, v8);
  return v3;
}
