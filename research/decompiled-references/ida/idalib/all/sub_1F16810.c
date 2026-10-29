unsigned __int64 __fastcall sub_1F16810(__int64 **a1)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // rbp
  unsigned __int64 v4; // rax
  __int64 *v5; // rdi
  __int64 v6; // r13
  __int64 v7; // rax
  __int64 v8; // r12
  __int64 v9; // rax

  v2 = **a1;
  v3 = sub_1F16500((_QWORD *)(*a1)[1], (*a1)[2], *a1 + 4, (_DWORD *)*a1 + 6);
  v4 = sub_1F16500((_QWORD *)(*a1)[1], (*a1)[2], *a1 + 4, (_DWORD *)*a1 + 6);
  v5 = *a1;
  v6 = v4;
  v7 = *((unsigned int *)*a1 + 6);
  *((_DWORD *)v5 + 6) = v7 + 1;
  v8 = *(_QWORD *)(v5[4] + 8 * v7);
  v9 = sub_1F21F80();
  return sub_A71850(v2, v8, v3, v6, v9);
}
