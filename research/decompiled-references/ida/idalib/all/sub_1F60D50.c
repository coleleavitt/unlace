__int64 __fastcall sub_1F60D50(__int64 *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r13
  __int64 v6; // rdi
  bool v7; // zf
  unsigned __int64 v8; // rbx
  int v9; // eax
  unsigned __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r13
  __int64 v14; // rdi
  unsigned __int64 v15; // rbx
  int v16; // eax
  unsigned __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 result; // rax

  sub_1F58FC0(a1, a2);
  v3 = *a1;
  v4 = *(unsigned int *)(*a1 + 24);
  v5 = *(_QWORD *)(*a1 + 16);
  v6 = *(_QWORD *)(*a1 + 8);
  v7 = *(_QWORD *)(v5 + 856) == 0;
  *(_DWORD *)(v3 + 24) = v4 + 1;
  v8 = *(_QWORD *)(*(_QWORD *)(v3 + 32) + 8 * v4);
  if ( !v7 )
    sub_1EDF870(v6, v5);
  v9 = __ROR4__(v8, 1);
  v10 = HIDWORD(v8);
  if ( v10 )
    v5 = *(_QWORD *)(*(_QWORD *)(v5 + 3320) + 8LL * (unsigned int)(v10 - 1));
  if ( v9 )
    v9 = v9 + *(_DWORD *)(v5 + 1648) - 2;
  *(_DWORD *)(a2 + 24) = v9;
  v11 = *a1;
  v12 = *(unsigned int *)(*a1 + 24);
  v13 = *(_QWORD *)(*a1 + 16);
  v14 = *(_QWORD *)(*a1 + 8);
  v7 = *(_QWORD *)(v13 + 856) == 0;
  *(_DWORD *)(v11 + 24) = v12 + 1;
  v15 = *(_QWORD *)(*(_QWORD *)(v11 + 32) + 8 * v12);
  if ( !v7 )
    sub_1EDF870(v14, v13);
  v16 = __ROR4__(v15, 1);
  v17 = HIDWORD(v15);
  if ( v17 )
    v13 = *(_QWORD *)(*(_QWORD *)(v13 + 3320) + 8LL * (unsigned int)(v17 - 1));
  if ( v16 )
    v16 = v16 + *(_DWORD *)(v13 + 1648) - 2;
  *(_DWORD *)(a2 + 28) = v16;
  v18 = *(_QWORD *)(*a1 + 8);
  v19 = *(_QWORD *)(*(_QWORD *)(v18 + 13064) + 8LL * *(unsigned int *)(v18 + 13072) - 8);
  result = (unsigned int)(*(_DWORD *)(v18 + 13072) - 1);
  *(_DWORD *)(v18 + 13072) = result;
  *(_QWORD *)(a2 + 16) = v19;
  return result;
}
