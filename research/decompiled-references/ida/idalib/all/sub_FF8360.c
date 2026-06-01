__int64 __fastcall sub_FF8360(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v7; // eax
  int v8; // eax
  __int64 *v9; // rsi
  __int64 *v10; // r15
  __int64 v11; // r15
  unsigned int v12; // r14d
  __int64 *v14[8]; // [rsp+8h] [rbp-40h] BYREF

  v7 = sub_2244B30(a2, a3);
  v8 = sub_2244E60(a1, a2, a3, v7);
  if ( v8 == -1 )
    v9 = (__int64 *)(*(_QWORD *)a1 + 8LL * *(unsigned int *)(a1 + 8));
  else
    v9 = (__int64 *)(*(_QWORD *)a1 + 8LL * v8);
  sub_FF7E30(v14, v9, 1);
  v10 = v14[0];
  sub_FF7E30(v14, (__int64 *)(*(_QWORD *)a1 + 8LL * *(unsigned int *)(a1 + 8)), 1);
  if ( v14[0] == v10 )
    return 0;
  v11 = *v10;
  v12 = *(unsigned __int8 *)(v11 + 24);
  if ( !(_BYTE)v12
    || (unsigned int)sub_FEAA90(a4) < *(_DWORD *)(v11 + 12)
    || sub_FF8240(a1, a2, a3, a4)
    || sub_FF8120(a1, a2, a3, a4) )
  {
    return 0;
  }
  return v12;
}
