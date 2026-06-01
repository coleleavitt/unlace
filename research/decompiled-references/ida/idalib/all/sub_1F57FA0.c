__int64 __fastcall sub_1F57FA0(__int64 *a1, __int64 a2)
{
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rsi
  int v7; // eax
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rdi
  int v11; // eax
  __int64 v12; // rdi
  __int64 result; // rax

  v4 = *a1;
  v5 = *(_QWORD *)(v4 + 8);
  v6 = *(unsigned int *)(v5 + 13072);
  v7 = *(_DWORD *)(v5 + 13072) - 2;
  *(_QWORD *)(a2 + 16) = *(_QWORD *)(*(_QWORD *)(v5 + 13064) + 8 * v6 - 8);
  v8 = *(_QWORD *)(*(_QWORD *)(v5 + 13064) + 8LL * (unsigned int)(v6 - 1) - 8);
  *(_DWORD *)(v5 + 13072) = v7;
  *(_QWORD *)(a2 + 8) = v8;
  v9 = sub_1EE7490(v4);
  v10 = *a1;
  *(_DWORD *)(a2 + 4) = v9;
  v11 = sub_1EE7490(v10);
  v12 = *a1;
  *(_DWORD *)(a2 + 24) = v11;
  result = sub_1EE7490(v12);
  *(_DWORD *)(a2 + 28) = result;
  return result;
}
