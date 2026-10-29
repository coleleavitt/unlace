bool __fastcall sub_1668F10(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v4; // r13
  unsigned int v5; // eax
  int v6; // eax
  __int64 *v8[6]; // [rsp+8h] [rbp-30h] BYREF

  sub_105CB60(v8, (__int64 *)(*(_QWORD *)a1 + 8LL * *(unsigned int *)(a1 + 8)), 1);
  v4 = v8[0];
  v5 = sub_2244B30(a2, a3);
  v6 = sub_2244E60(a1, a2, a3, v5);
  if ( v6 == -1 )
    sub_105CB60(v8, (__int64 *)(*(_QWORD *)a1 + 8LL * *(unsigned int *)(a1 + 8)), 1);
  else
    sub_105CB60(v8, (__int64 *)(*(_QWORD *)a1 + 8LL * v6), 1);
  return v4 != v8[0];
}
