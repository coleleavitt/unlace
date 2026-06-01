__int64 __fastcall sub_1FD8D80(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // eax
  int v5; // eax
  __int64 result; // rax
  __int64 *v7[4]; // [rsp+8h] [rbp-20h] BYREF

  v4 = sub_2244B30(a2, a3);
  v5 = sub_2244E60(a1 + 8, a2, a3, v4);
  if ( v5 == -1 )
    sub_1FD8A00(v7, (__int64 *)(*(_QWORD *)(a1 + 8) + 8LL * *(unsigned int *)(a1 + 16)), 1);
  else
    sub_1FD8A00(v7, (__int64 *)(*(_QWORD *)(a1 + 8) + 8LL * v5), 1);
  result = *v7[0];
  *(_BYTE *)(*v7[0] + 16) = 1;
  return result;
}
