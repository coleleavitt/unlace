__int64 __fastcall sub_1F5B590(__int64 *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 v7; // rdx
  unsigned __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r12
  __int64 v12; // rdi
  bool v13; // zf
  unsigned __int64 v14; // rbx
  __int64 result; // rax
  unsigned __int64 v16; // rbx

  sub_1F58FC0(a1, a2);
  v3 = *a1;
  v4 = *(_QWORD *)(*a1 + 8);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 13064) + 8LL * *(unsigned int *)(v4 + 13072) - 8);
  v6 = *(_QWORD *)(*a1 + 16);
  --*(_DWORD *)(v4 + 13072);
  v7 = *(unsigned int *)(v3 + 24);
  *(_QWORD *)(a2 + 16) = v5;
  *(_DWORD *)(v3 + 24) = v7 + 1;
  v8 = sub_1EE0AD0(v4, v6, *(_QWORD *)(*(_QWORD *)(v3 + 32) + 8 * v7));
  *(_QWORD *)(a2 + 24) = sub_1EE2910((_QWORD *)v4, v8);
  v9 = *a1;
  v10 = *(unsigned int *)(*a1 + 24);
  v11 = *(_QWORD *)(*a1 + 16);
  v12 = *(_QWORD *)(*a1 + 8);
  v13 = *(_QWORD *)(v11 + 856) == 0;
  *(_DWORD *)(v9 + 24) = v10 + 1;
  v14 = *(_QWORD *)(*(_QWORD *)(v9 + 32) + 8 * v10);
  if ( !v13 )
    sub_1EDF870(v12, v11);
  result = (unsigned int)__ROR4__(v14, 1);
  v16 = HIDWORD(v14);
  if ( v16 )
    v11 = *(_QWORD *)(*(_QWORD *)(v11 + 3320) + 8LL * (unsigned int)(v16 - 1));
  if ( (_DWORD)result )
  {
    result = (unsigned int)(result + *(_DWORD *)(v11 + 1648) - 2);
    *(_DWORD *)(a2 + 32) = result;
  }
  else
  {
    *(_DWORD *)(a2 + 32) = 0;
  }
  return result;
}
