__int64 __fastcall sub_1455CC0(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v3; // r12
  unsigned int v4; // eax
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  _QWORD *v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // rbp
  __int64 *v14[6]; // [rsp+8h] [rbp-30h] BYREF

  v2 = *(_QWORD *)(a2 + 8);
  v3 = *(_QWORD *)(a2 + 16);
  v4 = sub_2244B30(v2, v3);
  v5 = sub_2244E60(a1 + 40, v2, v3, v4);
  if ( v5 == -1 )
    sub_1455C80(v14, (__int64 *)(*(_QWORD *)(a1 + 40) + 8LL * *(unsigned int *)(a1 + 48)), 1);
  else
    sub_1455C80(v14, (__int64 *)(*(_QWORD *)(a1 + 40) + 8LL * v5), 1);
  v10 = (_QWORD *)*v14[0];
  v10[1] = 0;
  sub_2244F90(a1 + 40, v10, v6, v7, v8, v9);
  v11 = v10[1];
  v12 = *v10 + 17LL;
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
  return operator delete(v10, v12, 8);
}
