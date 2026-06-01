unsigned __int64 __fastcall sub_1F177A0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rbp
  __int64 v10; // rdx
  __int64 v11; // r12
  _QWORD *v12; // r13
  unsigned __int64 v13; // r14
  __int64 v14; // rax

  v7 = *a1;
  v8 = *(unsigned int *)(v7 + 24);
  v9 = *(_QWORD *)v7;
  *(_DWORD *)(v7 + 24) = v8 + 1;
  v10 = *(_QWORD *)(v7 + 32);
  v11 = *(_QWORD *)(v10 + 8 * v8);
  v12 = sub_1F16FA0(v7, a2, v10, a4, a5, a6);
  v13 = sub_1F16500(*(_QWORD **)(*a1 + 8), *(_QWORD *)(*a1 + 16), (__int64 *)(*a1 + 32), (_DWORD *)(*a1 + 24));
  v14 = sub_1EE1670(*a1);
  return sub_A76250(v9, v11, (__int64)v12, v13, v14);
}
