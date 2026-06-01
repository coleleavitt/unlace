__int64 __fastcall sub_1452D80(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  unsigned int v6; // eax
  int v7; // eax
  __int64 *v8; // rsi
  __int64 *v9; // r14
  unsigned int v11; // eax
  int v12; // eax
  __int64 *v13; // r12
  __int64 *v14[6]; // [rsp+8h] [rbp-30h] BYREF

  v6 = sub_2244B30(a2, a3);
  v7 = sub_2244E60(a1 + 40, a2, a3, v6);
  if ( v7 == -1 )
    v8 = (__int64 *)(*(_QWORD *)(a1 + 40) + 8LL * *(unsigned int *)(a1 + 48));
  else
    v8 = (__int64 *)(*(_QWORD *)(a1 + 40) + 8LL * v7);
  sub_1452D40(v14, v8, 1);
  v9 = v14[0];
  sub_1452D40(v14, (__int64 *)(*(_QWORD *)(a1 + 40) + 8LL * *(unsigned int *)(a1 + 48)), 1);
  if ( v14[0] != v9 )
    return *(_QWORD *)(*v9 + 8);
  if ( a4 )
    return 0;
  v11 = sub_2244B30(0, 0);
  v12 = sub_2244E60(a1 + 40, 0, 0, v11);
  if ( v12 == -1 )
    sub_1452D40(v14, (__int64 *)(*(_QWORD *)(a1 + 40) + 8LL * *(unsigned int *)(a1 + 48)), 1);
  else
    sub_1452D40(v14, (__int64 *)(*(_QWORD *)(a1 + 40) + 8LL * v12), 1);
  v13 = v14[0];
  sub_1452D40(v14, (__int64 *)(*(_QWORD *)(a1 + 40) + 8LL * *(unsigned int *)(a1 + 48)), 1);
  if ( v14[0] == v13 )
    return 0;
  return *(_QWORD *)(*v13 + 8);
}
