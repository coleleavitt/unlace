__int64 __fastcall sub_1F5CE80(__int64 *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdi
  __int64 v5; // r12
  __int64 v6; // rcx
  bool v7; // zf
  __int64 v8; // rdx
  unsigned __int64 v9; // rbx
  __int64 result; // rax
  unsigned __int64 v11; // rbx

  sub_1F58FC0(a1, a2);
  v3 = *a1;
  v4 = *(_QWORD *)(*a1 + 8);
  v5 = *(_QWORD *)(*a1 + 16);
  v6 = *(_QWORD *)(*(_QWORD *)(v4 + 13064) + 8LL * *(unsigned int *)(v4 + 13072) - 8);
  v7 = *(_QWORD *)(v5 + 856) == 0;
  --*(_DWORD *)(v4 + 13072);
  v8 = *(unsigned int *)(v3 + 24);
  *(_QWORD *)(a2 + 16) = v6;
  *(_DWORD *)(v3 + 24) = v8 + 1;
  v9 = *(_QWORD *)(*(_QWORD *)(v3 + 32) + 8 * v8);
  if ( !v7 )
    sub_1EDF870(v4, v5);
  result = (unsigned int)__ROR4__(v9, 1);
  v11 = HIDWORD(v9);
  if ( v11 )
    v5 = *(_QWORD *)(*(_QWORD *)(v5 + 3320) + 8LL * (unsigned int)(v11 - 1));
  if ( (_DWORD)result )
    result = (unsigned int)(result + *(_DWORD *)(v5 + 1648) - 2);
  *(_DWORD *)(a2 + 24) = result;
  return result;
}
