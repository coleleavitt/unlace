__int64 __fastcall sub_1F581F0(__int64 *a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r12
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // r14
  __int64 v10; // rcx
  unsigned __int64 v11; // rbx
  int v12; // edx
  unsigned __int64 v13; // rbx
  __int64 v14; // rdx
  unsigned __int64 v15; // rbx
  int v16; // eax
  unsigned __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 result; // rax

  v4 = *a1;
  v5 = *(unsigned int *)(*a1 + 24);
  v6 = *(_QWORD *)(*a1 + 16);
  v7 = *(_QWORD *)(*a1 + 8);
  v8 = *(_QWORD *)(v6 + 856);
  v9 = v6;
  *(_DWORD *)(v4 + 24) = v5 + 1;
  v10 = *(_QWORD *)(v4 + 32);
  v11 = *(_QWORD *)(v10 + 8 * v5);
  if ( v8 )
  {
    sub_1EDF870(v7, v6);
    v4 = *a1;
    v9 = *(_QWORD *)(*a1 + 16);
    v7 = *(_QWORD *)(*a1 + 8);
    v10 = *(_QWORD *)(*a1 + 32);
    v8 = *(_QWORD *)(v9 + 856);
  }
  v12 = __ROR4__(v11, 1);
  v13 = HIDWORD(v11);
  if ( v13 )
    v6 = *(_QWORD *)(*(_QWORD *)(v6 + 3320) + 8LL * (unsigned int)(v13 - 1));
  if ( v12 )
    v12 = v12 + *(_DWORD *)(v6 + 1648) - 2;
  *(_DWORD *)(a2 + 4) = v12;
  v14 = *(unsigned int *)(v4 + 24);
  v15 = *(_QWORD *)(v10 + 8 * v14);
  *(_DWORD *)(v4 + 24) = v14 + 1;
  if ( v8 )
  {
    sub_1EDF870(v7, v9);
    v7 = *(_QWORD *)(*a1 + 8);
  }
  v16 = __ROR4__(v15, 1);
  v17 = HIDWORD(v15);
  if ( v17 )
    v9 = *(_QWORD *)(*(_QWORD *)(v9 + 3320) + 8LL * (unsigned int)(v17 - 1));
  if ( v16 )
    v16 = v16 + *(_DWORD *)(v9 + 1648) - 2;
  *(_DWORD *)(a2 + 8) = v16;
  v18 = *(_QWORD *)(*(_QWORD *)(v7 + 13064) + 8LL * *(unsigned int *)(v7 + 13072) - 8);
  result = (unsigned int)(*(_DWORD *)(v7 + 13072) - 1);
  *(_DWORD *)(v7 + 13072) = result;
  *(_QWORD *)(a2 + 16) = v18;
  return result;
}
