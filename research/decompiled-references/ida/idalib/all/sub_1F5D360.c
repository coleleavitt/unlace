__int64 __fastcall sub_1F5D360(__int64 *a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r13
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // r14
  __int64 v14; // rcx
  unsigned __int64 v15; // rbx
  int v16; // edx
  unsigned __int64 v17; // rbx
  __int64 v18; // rdx
  unsigned __int64 v19; // rbx
  __int64 result; // rax
  unsigned __int64 v21; // rbx

  sub_1F58FC0(a1, a2);
  v4 = *a1;
  v5 = *(unsigned int *)(*a1 + 24);
  v6 = *(_QWORD *)(*a1 + 8);
  v7 = *(_QWORD *)(*a1 + 16);
  *(_DWORD *)(v4 + 24) = v5 + 1;
  *(_QWORD *)(a2 + 16) = sub_1EF55A0(v6, v7, *(_QWORD *)(*(_QWORD *)(v4 + 32) + 8 * v5));
  v8 = *a1;
  v9 = *(unsigned int *)(*a1 + 24);
  v10 = *(_QWORD *)(*a1 + 16);
  v11 = *(_QWORD *)(*a1 + 8);
  v12 = *(_QWORD *)(v10 + 856);
  v13 = v10;
  *(_DWORD *)(v8 + 24) = v9 + 1;
  v14 = *(_QWORD *)(v8 + 32);
  v15 = *(_QWORD *)(v14 + 8 * v9);
  if ( v12 )
  {
    sub_1EDF870(v11, v10);
    v8 = *a1;
    v13 = *(_QWORD *)(*a1 + 16);
    v11 = *(_QWORD *)(*a1 + 8);
    v14 = *(_QWORD *)(*a1 + 32);
    v12 = *(_QWORD *)(v13 + 856);
  }
  v16 = __ROR4__(v15, 1);
  v17 = HIDWORD(v15);
  if ( v17 )
    v10 = *(_QWORD *)(*(_QWORD *)(v10 + 3320) + 8LL * (unsigned int)(v17 - 1));
  if ( v16 )
    v16 = v16 + *(_DWORD *)(v10 + 1648) - 2;
  *(_DWORD *)(a2 + 24) = v16;
  v18 = *(unsigned int *)(v8 + 24);
  v19 = *(_QWORD *)(v14 + 8 * v18);
  *(_DWORD *)(v8 + 24) = v18 + 1;
  if ( v12 )
    sub_1EDF870(v11, v13);
  result = (unsigned int)__ROR4__(v19, 1);
  v21 = HIDWORD(v19);
  if ( v21 )
    v13 = *(_QWORD *)(*(_QWORD *)(v13 + 3320) + 8LL * (unsigned int)(v21 - 1));
  if ( (_DWORD)result )
  {
    result = (unsigned int)(result + *(_DWORD *)(v13 + 1648) - 2);
    *(_DWORD *)(a2 + 28) = result;
  }
  else
  {
    *(_DWORD *)(a2 + 28) = 0;
  }
  return result;
}
