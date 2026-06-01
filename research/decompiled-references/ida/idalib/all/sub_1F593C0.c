__int64 *__fastcall sub_1F593C0(__int64 *a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r13
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // r14
  __int64 v10; // rcx
  unsigned __int64 v11; // rbp
  int v12; // edx
  unsigned __int64 v13; // rbp
  __int64 v14; // rdx
  __int64 v15; // r13
  unsigned __int64 v16; // rbp
  int v17; // edx
  unsigned __int64 v18; // rbp
  __int64 v19; // rdx
  unsigned __int64 v20; // rbp
  int v21; // edx
  unsigned __int64 v22; // rbp
  __int64 *result; // rax

  sub_1F58FC0(a1, a2);
  v4 = *a1;
  v5 = *(unsigned int *)(*a1 + 24);
  v6 = *(_QWORD *)(*a1 + 16);
  v7 = *(_QWORD *)(*a1 + 32);
  v8 = *(_QWORD *)(*a1 + 8);
  v9 = v6;
  *(_DWORD *)(*a1 + 24) = v5 + 1;
  v10 = *(_QWORD *)(v6 + 856);
  v11 = *(_QWORD *)(v7 + 8 * v5);
  if ( v10 )
  {
    sub_1EDF870(v8, v6);
    v4 = *a1;
    v9 = *(_QWORD *)(*a1 + 16);
    v8 = *(_QWORD *)(*a1 + 8);
    v7 = *(_QWORD *)(*a1 + 32);
    v10 = *(_QWORD *)(v9 + 856);
  }
  v12 = __ROR4__(v11, 1);
  v13 = HIDWORD(v11);
  if ( v13 )
    v6 = *(_QWORD *)(*(_QWORD *)(v6 + 3320) + 8LL * (unsigned int)(v13 - 1));
  if ( v12 )
    v12 = v12 + *(_DWORD *)(v6 + 1648) - 2;
  *(_DWORD *)(a2 + 16) = v12;
  v14 = *(unsigned int *)(v4 + 24);
  v15 = v9;
  v16 = *(_QWORD *)(v7 + 8 * v14);
  *(_DWORD *)(v4 + 24) = v14 + 1;
  if ( v10 )
  {
    sub_1EDF870(v8, v9);
    v4 = *a1;
    v15 = *(_QWORD *)(*a1 + 16);
    v8 = *(_QWORD *)(*a1 + 8);
    v7 = *(_QWORD *)(*a1 + 32);
    v10 = *(_QWORD *)(v15 + 856);
  }
  v17 = __ROR4__(v16, 1);
  v18 = HIDWORD(v16);
  if ( v18 )
    v9 = *(_QWORD *)(*(_QWORD *)(v9 + 3320) + 8LL * (unsigned int)(v18 - 1));
  if ( v17 )
    v17 = v17 + *(_DWORD *)(v9 + 1648) - 2;
  *(_DWORD *)(a2 + 20) = v17;
  v19 = *(unsigned int *)(v4 + 24);
  v20 = *(_QWORD *)(v7 + 8 * v19);
  *(_DWORD *)(v4 + 24) = v19 + 1;
  if ( v10 )
  {
    sub_1EDF870(v8, v15);
    v4 = *a1;
  }
  v21 = __ROR4__(v20, 1);
  v22 = HIDWORD(v20);
  if ( v22 )
    v15 = *(_QWORD *)(*(_QWORD *)(v15 + 3320) + 8LL * (unsigned int)(v22 - 1));
  if ( v21 )
    v21 = v21 + *(_DWORD *)(v15 + 1648) - 2;
  *(_DWORD *)(a2 + 24) = v21;
  result = sub_1F19370(v4);
  *(_QWORD *)(a2 + 32) = result;
  return result;
}
