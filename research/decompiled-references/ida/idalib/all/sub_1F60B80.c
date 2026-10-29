__int64 __fastcall sub_1F60B80(__int64 *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rbp
  __int64 v6; // rdi
  bool v7; // zf
  unsigned __int64 v8; // rbx
  int v9; // eax
  unsigned __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 result; // rax

  v3 = *a1;
  v4 = *(unsigned int *)(*a1 + 24);
  v5 = *(_QWORD *)(*a1 + 16);
  v6 = *(_QWORD *)(*a1 + 8);
  v7 = *(_QWORD *)(v5 + 856) == 0;
  *(_DWORD *)(v3 + 24) = v4 + 1;
  v8 = *(_QWORD *)(*(_QWORD *)(v3 + 32) + 8 * v4);
  if ( !v7 )
  {
    sub_1EDF870(v6, v5);
    v6 = *(_QWORD *)(*a1 + 8);
  }
  v9 = __ROR4__(v8, 1);
  v10 = HIDWORD(v8);
  if ( v10 )
    v5 = *(_QWORD *)(*(_QWORD *)(v5 + 3320) + 8LL * (unsigned int)(v10 - 1));
  if ( v9 )
    v9 = v9 + *(_DWORD *)(v5 + 1648) - 2;
  *(_DWORD *)(a2 + 8) = v9;
  v11 = *(_QWORD *)(*(_QWORD *)(v6 + 13064) + 8LL * *(unsigned int *)(v6 + 13072) - 8);
  result = (unsigned int)(*(_DWORD *)(v6 + 13072) - 1);
  *(_DWORD *)(v6 + 13072) = result;
  *(_QWORD *)(a2 + 16) = v11;
  return result;
}
