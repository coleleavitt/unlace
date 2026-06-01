__int64 __fastcall sub_1F59150(__int64 *a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r13
  __int64 v7; // rdi
  bool v8; // zf
  unsigned __int64 v9; // rbp
  int v10; // eax
  unsigned __int64 v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // rsi
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rsi
  __int64 result; // rax
  __int64 v18; // rcx

  sub_1F58FC0(a1, a2);
  v4 = *a1;
  v5 = *(unsigned int *)(*a1 + 24);
  v6 = *(_QWORD *)(*a1 + 16);
  v7 = *(_QWORD *)(*a1 + 8);
  v8 = *(_QWORD *)(v6 + 856) == 0;
  *(_DWORD *)(v4 + 24) = v5 + 1;
  v9 = *(_QWORD *)(*(_QWORD *)(v4 + 32) + 8 * v5);
  if ( !v8 )
    sub_1EDF870(v7, v6);
  v10 = __ROR4__(v9, 1);
  v11 = HIDWORD(v9);
  if ( v11 )
    v6 = *(_QWORD *)(*(_QWORD *)(v6 + 3320) + 8LL * (unsigned int)(v11 - 1));
  if ( v10 )
    v10 = v10 + *(_DWORD *)(v6 + 1648) - 2;
  *(_DWORD *)(a2 + 16) = v10;
  v12 = *(_QWORD *)(*a1 + 8);
  v13 = *(unsigned int *)(v12 + 13072);
  v14 = *(_DWORD *)(v12 + 13072);
  *(_QWORD *)(a2 + 24) = *(_QWORD *)(*(_QWORD *)(v12 + 13064) + 8 * v13 - 8);
  *(_QWORD *)(a2 + 32) = *(_QWORD *)(*(_QWORD *)(v12 + 13064) + 8LL * (unsigned int)(v13 - 1) - 8);
  *(_QWORD *)(a2 + 40) = *(_QWORD *)(*(_QWORD *)(v12 + 13064) + 8LL * (unsigned int)(v14 - 2) - 8);
  *(_QWORD *)(a2 + 48) = *(_QWORD *)(*(_QWORD *)(v12 + 13064) + 8LL * (unsigned int)(v14 - 3) - 8);
  v15 = *(_QWORD *)(*(_QWORD *)(v12 + 13064) + 8LL * (unsigned int)(v14 - 4) - 8);
  v16 = (unsigned int)(v14 - 5);
  result = (unsigned int)(v14 - 6);
  *(_QWORD *)(a2 + 56) = v15;
  v18 = *(_QWORD *)(*(_QWORD *)(v12 + 13064) + 8 * v16 - 8);
  *(_DWORD *)(v12 + 13072) = result;
  *(_QWORD *)(a2 + 64) = v18;
  return result;
}
