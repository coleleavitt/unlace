__int64 __fastcall sub_20FD390(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r12
  unsigned int v5; // eax
  int v6; // eax
  __int64 *v7; // rsi
  __int64 *v8; // rbp
  __int64 *v10[6]; // [rsp+8h] [rbp-30h] BYREF

  v3 = *(_QWORD *)(a1 + 8);
  if ( !v3 )
    return 0;
  v5 = sub_2244B30(a2, a3);
  v6 = sub_2244E60(v3, a2, a3, v5);
  v7 = (__int64 *)(v6 == -1 ? *(_QWORD *)v3 + 8LL * *(unsigned int *)(v3 + 8) : *(_QWORD *)v3 + 8LL * v6);
  sub_20FD350(v10, v7, 1);
  v8 = v10[0];
  sub_20FD350(v10, (__int64 *)(**(_QWORD **)(a1 + 8) + 8LL * *(unsigned int *)(*(_QWORD *)(a1 + 8) + 8LL)), 1);
  if ( v10[0] == v8 )
    return 0;
  else
    return *v8 + 8;
}
