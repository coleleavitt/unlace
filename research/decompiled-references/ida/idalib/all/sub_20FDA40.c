__int64 __fastcall sub_20FDA40(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r13
  unsigned int v8; // eax
  int v9; // eax
  __int64 *v10; // rsi
  __int64 *v11; // rbp
  __int64 v12; // rdx
  __int64 result; // rax
  __int64 *v14[6]; // [rsp+0h] [rbp-30h] BYREF

  if ( !a2 )
    return 0;
  v4 = *(_QWORD *)(a2 + 8);
  if ( !v4 )
    return 0;
  v8 = sub_2244B30(a3, a4);
  v9 = sub_2244E60(v4, a3, a4, v8);
  v10 = (__int64 *)(v9 == -1 ? *(_QWORD *)v4 + 8LL * *(unsigned int *)(v4 + 8) : *(_QWORD *)v4 + 8LL * v9);
  sub_20FD350(v14, v10, 1);
  v11 = v14[0];
  sub_20FD350(v14, (__int64 *)(**(_QWORD **)(a2 + 8) + 8LL * *(unsigned int *)(*(_QWORD *)(a2 + 8) + 8LL)), 1);
  if ( v14[0] == v11 )
    return 0;
  v12 = *v11;
  result = *v11 + 8;
  if ( *v11 == -8 || *(_DWORD *)(v12 + 8) == 103 && !*(_DWORD *)(*(_QWORD *)(v12 + 16) + 12LL) )
    return 0;
  return result;
}
