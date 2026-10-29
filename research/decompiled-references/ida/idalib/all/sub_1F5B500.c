unsigned __int64 __fastcall sub_1F5B500(__int64 *a1, __int64 a2)
{
  int v4; // eax
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // rax
  unsigned __int64 result; // rax

  sub_1F58FC0(a1, a2);
  v4 = sub_1EE7490(*a1);
  v5 = *a1;
  *(_DWORD *)(a2 + 16) = v4;
  *(_QWORD *)(a2 + 24) = *(_QWORD *)(a2 + 24) & 7LL | (unsigned __int64)sub_1F19370(v5);
  v6 = *a1;
  v7 = *(_QWORD *)(*a1 + 8);
  v8 = *(_QWORD *)(*(_QWORD *)(v7 + 13064) + 8LL * (unsigned int)(*(_DWORD *)(v7 + 13072))-- - 8);
  v9 = *(unsigned int *)(v6 + 24);
  *(_QWORD *)(a2 + 32) = v8;
  *(_DWORD *)(v6 + 24) = v9 + 1;
  result = *(_QWORD *)(a2 + 24) & 0xFFFFFFFFFFFFFFFBLL | (4LL * (*(_QWORD *)(*(_QWORD *)(v6 + 32) + 8 * v9) != 0));
  *(_QWORD *)(a2 + 24) = result;
  return result;
}
