__int64 __fastcall sub_1F5B0B0(__int64 *a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rdi
  int v8; // eax
  __int64 v9; // rdx
  __int64 result; // rax

  sub_1F58FC0(a1, a2);
  v3 = *a1;
  v4 = *(_QWORD *)(*a1 + 8);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 13064) + 8LL * (unsigned int)(*(_DWORD *)(v4 + 13072))-- - 8);
  *(_QWORD *)(a2 + 16) = v5;
  v6 = sub_1EE7490(v3);
  v7 = *a1;
  *(_DWORD *)(a2 + 24) = v6;
  v8 = sub_1EE7490(v7);
  v9 = *a1;
  *(_DWORD *)(a2 + 28) = v8;
  result = *(unsigned int *)(v9 + 24);
  *(_DWORD *)(v9 + 24) = result + 1;
  *(_BYTE *)(a2 + 32) = *(_QWORD *)(*(_QWORD *)(v9 + 32) + 8 * result) != 0;
  return result;
}
