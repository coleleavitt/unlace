__int64 __fastcall sub_1F5E090(__int64 *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdi
  __int64 v5; // r12
  __int64 v6; // rsi
  int v7; // edx
  bool v8; // zf
  __int64 v9; // rcx
  __int64 v10; // rdx
  unsigned __int64 v11; // rbx
  __int64 result; // rax
  unsigned __int64 v13; // rbx

  v3 = *a1;
  v4 = *(_QWORD *)(*a1 + 8);
  v5 = *(_QWORD *)(v3 + 16);
  v6 = *(unsigned int *)(v4 + 13072);
  v7 = *(_DWORD *)(v4 + 13072) - 2;
  v8 = *(_QWORD *)(v5 + 856) == 0;
  *(_QWORD *)(a2 + 16) = *(_QWORD *)(*(_QWORD *)(v4 + 13064) + 8 * v6 - 8);
  v9 = *(_QWORD *)(*(_QWORD *)(v4 + 13064) + 8LL * (unsigned int)(v6 - 1) - 8);
  *(_DWORD *)(v4 + 13072) = v7;
  v10 = *(unsigned int *)(v3 + 24);
  *(_QWORD *)(a2 + 24) = v9;
  *(_DWORD *)(v3 + 24) = v10 + 1;
  v11 = *(_QWORD *)(*(_QWORD *)(v3 + 32) + 8 * v10);
  if ( !v8 )
    sub_1EDF870(v4, v5);
  result = (unsigned int)__ROR4__(v11, 1);
  v13 = HIDWORD(v11);
  if ( v13 )
    v5 = *(_QWORD *)(*(_QWORD *)(v5 + 3320) + 8LL * (unsigned int)(v13 - 1));
  if ( (_DWORD)result )
    result = (unsigned int)(result + *(_DWORD *)(v5 + 1648) - 2);
  *(_DWORD *)(a2 + 8) = result;
  return result;
}
