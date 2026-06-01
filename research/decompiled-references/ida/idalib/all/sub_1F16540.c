unsigned __int64 __fastcall sub_1F16540(__int64 *a1)
{
  __int64 v2; // rbp
  __int64 v3; // r12
  __int64 v4; // r13
  unsigned int v5; // r14d
  unsigned __int64 v6; // rax

  v2 = *(_QWORD *)*a1;
  v3 = sub_1F68F80(*(_QWORD *)(*a1 + 8), *(_QWORD *)(*a1 + 16));
  v4 = sub_1F68F80(*(_QWORD *)(*a1 + 8), *(_QWORD *)(*a1 + 16));
  v5 = sub_1EE7490(*a1);
  v6 = sub_1F16500(*(_QWORD **)(*a1 + 8), *(_QWORD *)(*a1 + 16), (__int64 *)(*a1 + 32), (_DWORD *)(*a1 + 24));
  return sub_A76F70(v2, v6, v3, v4, v5);
}
