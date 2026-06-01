__int64 __fastcall sub_1F57810(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r13
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // r14
  __int64 v17; // rcx
  unsigned __int64 v18; // rbx
  int v19; // edx
  unsigned __int64 v20; // rbx
  __int64 v21; // rdx
  unsigned __int64 v22; // rbx
  int v23; // eax
  unsigned __int64 v24; // rbx
  __int64 v25; // rdx
  __int64 result; // rax

  v8 = *a1;
  v9 = *(unsigned int *)(*a1 + 24);
  v10 = *(_QWORD *)(*a1 + 8);
  *(_DWORD *)(v8 + 24) = v9 + 1;
  sub_1EDDEE0(v10, a2, *(_QWORD *)(*(_QWORD *)(v8 + 32) + 8 * v9), *(_QWORD *)(v8 + 32), a5, a6);
  v11 = *a1;
  v12 = *(unsigned int *)(*a1 + 24);
  v13 = *(_QWORD *)(*a1 + 16);
  v14 = *(_QWORD *)(*a1 + 32);
  v15 = *(_QWORD *)(*a1 + 8);
  v16 = v13;
  *(_DWORD *)(*a1 + 24) = v12 + 1;
  v17 = *(_QWORD *)(v13 + 856);
  v18 = *(_QWORD *)(v14 + 8 * v12);
  if ( v17 )
  {
    sub_1EDF870(v15, v13);
    v11 = *a1;
    v16 = *(_QWORD *)(*a1 + 16);
    v15 = *(_QWORD *)(*a1 + 8);
    v14 = *(_QWORD *)(*a1 + 32);
    v17 = *(_QWORD *)(v16 + 856);
  }
  v19 = __ROR4__(v18, 1);
  v20 = HIDWORD(v18);
  if ( v20 )
    v13 = *(_QWORD *)(*(_QWORD *)(v13 + 3320) + 8LL * (unsigned int)(v20 - 1));
  if ( v19 )
    v19 = v19 + *(_DWORD *)(v13 + 1648) - 2;
  *(_DWORD *)(a2 + 4) = v19;
  v21 = *(unsigned int *)(v11 + 24);
  v22 = *(_QWORD *)(v14 + 8 * v21);
  *(_DWORD *)(v11 + 24) = v21 + 1;
  if ( v17 )
  {
    sub_1EDF870(v15, v16);
    v15 = *(_QWORD *)(*a1 + 8);
  }
  v23 = __ROR4__(v22, 1);
  v24 = HIDWORD(v22);
  if ( v24 )
    v16 = *(_QWORD *)(*(_QWORD *)(v16 + 3320) + 8LL * (unsigned int)(v24 - 1));
  if ( v23 )
    v23 = v23 + *(_DWORD *)(v16 + 1648) - 2;
  *(_DWORD *)(a2 + 8) = v23;
  v25 = *(_QWORD *)(*(_QWORD *)(v15 + 13064) + 8LL * *(unsigned int *)(v15 + 13072) - 8);
  result = (unsigned int)(*(_DWORD *)(v15 + 13072) - 1);
  *(_DWORD *)(v15 + 13072) = result;
  *(_QWORD *)(a2 + 24) = v25;
  return result;
}
