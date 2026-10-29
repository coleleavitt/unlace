__int64 __fastcall sub_9F0400(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // eax
  int v5; // eax
  __int64 *v6; // rsi
  __int64 *v7; // r12
  __int64 v8; // rbx
  __int64 v9; // rsi
  char v10; // al
  __int64 v11; // rdx
  __int64 *v13[4]; // [rsp+8h] [rbp-20h] BYREF

  v4 = sub_2244B30(a2, a3);
  v5 = sub_2244E60(a1, a2, a3, v4);
  if ( v5 == -1 )
    v6 = (__int64 *)(*(_QWORD *)a1 + 8LL * *(unsigned int *)(a1 + 8));
  else
    v6 = (__int64 *)(*(_QWORD *)a1 + 8LL * v5);
  sub_9F02A0(v13, v6, 1);
  v7 = v13[0];
  sub_9F02A0(v13, (__int64 *)(*(_QWORD *)a1 + 8LL * *(unsigned int *)(a1 + 8)), 1);
  if ( v13[0] == v7 )
    return 0;
  v8 = *v7;
  v9 = *(unsigned int *)(*v7 + 8);
  LODWORD(v13[0]) = 78;
  v10 = sub_AFA190(v13, v9);
  v11 = 0;
  if ( v10 )
    return *(_QWORD *)(v8 + 16);
  return v11;
}
