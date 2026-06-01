__int64 __fastcall sub_1F5A440(__int64 *a1, __int64 a2)
{
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rsi
  int v7; // eax
  __int64 v8; // rcx
  __int64 result; // rax

  sub_1F58FC0(a1, a2);
  v4 = *a1;
  v5 = *(_QWORD *)(*a1 + 8);
  v6 = *(unsigned int *)(v5 + 13072);
  v7 = *(_DWORD *)(v5 + 13072);
  *(_QWORD *)(a2 + 16) = *(_QWORD *)(*(_QWORD *)(v5 + 13064) + 8 * v6 - 8);
  *(_QWORD *)(a2 + 24) = *(_QWORD *)(*(_QWORD *)(v5 + 13064) + 8LL * (unsigned int)(v6 - 1) - 8);
  v8 = *(_QWORD *)(*(_QWORD *)(v5 + 13064) + 8LL * (unsigned int)(v7 - 2) - 8);
  *(_DWORD *)(v5 + 13072) = v7 - 3;
  *(_QWORD *)(a2 + 32) = v8;
  result = sub_1EE7490(v4);
  *(_DWORD *)(a2 + 4) = result;
  return result;
}
