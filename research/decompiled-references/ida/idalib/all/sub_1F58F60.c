__int64 __fastcall sub_1F58F60(__int64 *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rsi
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 result; // rax

  v3 = *a1;
  v4 = *(_QWORD *)(*a1 + 8);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 13064) + 8LL * *(unsigned int *)(v4 + 13072) - 8);
  v6 = *(_QWORD *)(v3 + 16);
  --*(_DWORD *)(v4 + 13072);
  *(_QWORD *)(a2 + 8) = v5;
  v7 = sub_1EE13A0(v4, v6, (__int64 *)(v3 + 32), (_DWORD *)(v3 + 24));
  result = sub_1EDB980((_QWORD *)v4, v7, v8, v9, v10, v11);
  *(_QWORD *)(a2 + 16) = result;
  return result;
}
