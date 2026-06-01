unsigned __int64 __fastcall sub_1F17BB0(__int64 *a1)
{
  __int64 v2; // rbp
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  __int64 v5; // r9
  unsigned int v6; // edi
  __int64 v7; // rcx
  __int64 v8; // r8

  v2 = *(_QWORD *)*a1;
  v3 = sub_1F16500(*(_QWORD **)(*a1 + 8), *(_QWORD *)(*a1 + 16), (__int64 *)(*a1 + 32), (_DWORD *)(*a1 + 24));
  v4 = sub_1EE1670(*a1);
  v5 = *(_QWORD *)(*a1 + 32);
  v6 = *(_DWORD *)(*a1 + 24);
  v7 = *(_QWORD *)(v5 + 8LL * v6);
  v8 = *(_QWORD *)(v5 + 8LL * (v6 + 1));
  *(_DWORD *)(*a1 + 24) = v6 + 3;
  return sub_A77C90(v2, v3, v4, v7, v8, *(_QWORD *)(v5 + 8LL * (v6 + 2)) != 0);
}
