__int64 __fastcall sub_1F5E140(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  __int64 v4; // rbp
  __int64 v5; // rcx
  bool v6; // zf
  __int64 v7; // rdx
  unsigned __int64 v8; // rbx
  __int64 result; // rax
  unsigned __int64 v10; // rbx

  v2 = *a1;
  v3 = *(_QWORD *)(*a1 + 8);
  v4 = *(_QWORD *)(v2 + 16);
  v5 = *(_QWORD *)(*(_QWORD *)(v3 + 13064) + 8LL * *(unsigned int *)(v3 + 13072) - 8);
  v6 = *(_QWORD *)(v4 + 856) == 0;
  --*(_DWORD *)(v3 + 13072);
  v7 = *(unsigned int *)(v2 + 24);
  *(_QWORD *)(a2 + 16) = v5;
  *(_DWORD *)(v2 + 24) = v7 + 1;
  v8 = *(_QWORD *)(*(_QWORD *)(v2 + 32) + 8 * v7);
  if ( !v6 )
    sub_1EDF870(v3, v4);
  result = (unsigned int)__ROR4__(v8, 1);
  v10 = HIDWORD(v8);
  if ( v10 )
    v4 = *(_QWORD *)(*(_QWORD *)(v4 + 3320) + 8LL * (unsigned int)(v10 - 1));
  if ( (_DWORD)result )
    result = (unsigned int)(result + *(_DWORD *)(v4 + 1648) - 2);
  *(_DWORD *)(a2 + 8) = result;
  return result;
}
