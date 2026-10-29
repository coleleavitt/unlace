char __fastcall sub_FF8060(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // eax
  int v7; // eax
  __int64 *v8; // rsi
  __int64 *v9; // r13
  char result; // al
  __int64 v11; // rbx
  __int64 *v12[6]; // [rsp+8h] [rbp-30h] BYREF

  v6 = sub_2244B30(a2, a3);
  v7 = sub_2244E60(a1, a2, a3, v6);
  if ( v7 == -1 )
    v8 = (__int64 *)(*(_QWORD *)a1 + 8LL * *(unsigned int *)(a1 + 8));
  else
    v8 = (__int64 *)(*(_QWORD *)a1 + 8LL * v7);
  sub_FF7E30(v12, v8, 1);
  v9 = v12[0];
  sub_FF7E30(v12, (__int64 *)(*(_QWORD *)a1 + 8LL * *(unsigned int *)(a1 + 8)), 1);
  result = 0;
  if ( v12[0] != v9 )
  {
    result = *(_BYTE *)(*v9 + 24);
    if ( result )
    {
      v11 = *v9;
      return (unsigned int)sub_FEAA90(a4) >= *(_DWORD *)(v11 + 12);
    }
  }
  return result;
}
