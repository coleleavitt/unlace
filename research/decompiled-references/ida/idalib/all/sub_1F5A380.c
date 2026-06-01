__int64 __fastcall sub_1F5A380(__int64 *a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // r12
  __int64 v7; // rsi
  int v8; // edx
  bool v9; // zf
  __int64 v10; // rcx
  __int64 v11; // rdx
  unsigned __int64 v12; // rbx
  __int64 result; // rax
  unsigned __int64 v14; // rbx

  sub_1F58FC0(a1, a2);
  v4 = *a1;
  v5 = *(_QWORD *)(*a1 + 8);
  v6 = *(_QWORD *)(*a1 + 16);
  v7 = *(unsigned int *)(v5 + 13072);
  v8 = *(_DWORD *)(v5 + 13072) - 2;
  v9 = *(_QWORD *)(v6 + 856) == 0;
  *(_QWORD *)(a2 + 16) = *(_QWORD *)(*(_QWORD *)(v5 + 13064) + 8 * v7 - 8);
  v10 = *(_QWORD *)(*(_QWORD *)(v5 + 13064) + 8LL * (unsigned int)(v7 - 1) - 8);
  *(_DWORD *)(v5 + 13072) = v8;
  v11 = *(unsigned int *)(v4 + 24);
  *(_QWORD *)(a2 + 24) = v10;
  *(_DWORD *)(v4 + 24) = v11 + 1;
  v12 = *(_QWORD *)(*(_QWORD *)(v4 + 32) + 8 * v11);
  if ( !v9 )
    sub_1EDF870(v5, v6);
  result = (unsigned int)__ROR4__(v12, 1);
  v14 = HIDWORD(v12);
  if ( v14 )
    v6 = *(_QWORD *)(*(_QWORD *)(v6 + 3320) + 8LL * (unsigned int)(v14 - 1));
  if ( (_DWORD)result )
  {
    result = (unsigned int)(result + *(_DWORD *)(v6 + 1648) - 2);
    *(_DWORD *)(a2 + 4) = result;
  }
  else
  {
    *(_DWORD *)(a2 + 4) = 0;
  }
  return result;
}
