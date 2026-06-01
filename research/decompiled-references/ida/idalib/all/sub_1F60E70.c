__int64 __fastcall sub_1F60E70(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rbp
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // r13
  __int64 v14; // rcx
  unsigned __int64 v15; // rbx
  int v16; // edx
  unsigned __int64 v17; // rbx
  __int64 v18; // rdx
  unsigned __int64 v19; // rbx
  __int64 result; // rax
  unsigned __int64 v21; // rbx

  sub_1F1D950(*a1, *(unsigned int **)(a2 + 24), a3, a4, a5, a6);
  v8 = *a1;
  v9 = *(unsigned int *)(*a1 + 24);
  v10 = *(_QWORD *)(*a1 + 16);
  v11 = *(_QWORD *)(*a1 + 32);
  v12 = *(_QWORD *)(*a1 + 8);
  v13 = v10;
  *(_DWORD *)(*a1 + 24) = v9 + 1;
  v14 = *(_QWORD *)(v10 + 856);
  v15 = *(_QWORD *)(v11 + 8 * v9);
  if ( v14 )
  {
    sub_1EDF870(v12, v10);
    v8 = *a1;
    v13 = *(_QWORD *)(*a1 + 16);
    v12 = *(_QWORD *)(*a1 + 8);
    v11 = *(_QWORD *)(*a1 + 32);
    v14 = *(_QWORD *)(v13 + 856);
  }
  v16 = __ROR4__(v15, 1);
  v17 = HIDWORD(v15);
  if ( v17 )
    v10 = *(_QWORD *)(*(_QWORD *)(v10 + 3320) + 8LL * (unsigned int)(v17 - 1));
  if ( v16 )
    v16 = v16 + *(_DWORD *)(v10 + 1648) - 2;
  *(_DWORD *)(a2 + 12) = v16;
  v18 = *(unsigned int *)(v8 + 24);
  v19 = *(_QWORD *)(v11 + 8 * v18);
  *(_DWORD *)(v8 + 24) = v18 + 1;
  if ( v14 )
    sub_1EDF870(v12, v13);
  result = (unsigned int)__ROR4__(v19, 1);
  v21 = HIDWORD(v19);
  if ( v21 )
    v13 = *(_QWORD *)(*(_QWORD *)(v13 + 3320) + 8LL * (unsigned int)(v21 - 1));
  if ( (_DWORD)result )
  {
    result = (unsigned int)(result + *(_DWORD *)(v13 + 1648) - 2);
    *(_DWORD *)(a2 + 16) = result;
  }
  else
  {
    *(_DWORD *)(a2 + 16) = 0;
  }
  return result;
}
