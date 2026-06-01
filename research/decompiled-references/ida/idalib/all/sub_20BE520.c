__int64 __fastcall sub_20BE520(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // eax
  int v5; // eax
  __int64 *v6; // rsi
  __int64 *v7; // r12
  __int64 *v9[4]; // [rsp+8h] [rbp-20h] BYREF

  v4 = sub_2244B30(a2, a3);
  v5 = sub_2244E60(a1 + 288, a2, a3, v4);
  if ( v5 == -1 )
    v6 = (__int64 *)(*(_QWORD *)(a1 + 288) + 8LL * *(unsigned int *)(a1 + 296));
  else
    v6 = (__int64 *)(*(_QWORD *)(a1 + 288) + 8LL * v5);
  sub_20BE4E0(v9, v6, 1);
  v7 = v9[0];
  sub_20BE4E0(v9, (__int64 *)(*(_QWORD *)(a1 + 288) + 8LL * *(unsigned int *)(a1 + 296)), 1);
  if ( v7 == v9[0] )
    return 0;
  else
    return *(_QWORD *)(*v7 + 8);
}
