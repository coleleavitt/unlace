__int64 __fastcall sub_1FD8B80(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // eax
  int v5; // eax
  __int64 v6; // rdx
  unsigned int v7; // ebx
  __int64 v8; // rdi
  __int64 *v10[4]; // [rsp+8h] [rbp-20h] BYREF

  v4 = sub_2244B30(a2, a3);
  v5 = sub_2244E60(a1 + 8, a2, a3, v4);
  if ( v5 == -1 )
    sub_1FD8A00(v10, (__int64 *)(*(_QWORD *)(a1 + 8) + 8LL * *(unsigned int *)(a1 + 16)), 1);
  else
    sub_1FD8A00(v10, (__int64 *)(*(_QWORD *)(a1 + 8) + 8LL * v5), 1);
  v6 = *v10[0];
  v7 = *(unsigned __int8 *)(*v10[0] + 16);
  if ( !(_BYTE)v7 )
  {
    v8 = *(_QWORD *)(v6 + 8);
    *(_QWORD *)(v6 + 8) = 0;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  }
  return v7;
}
