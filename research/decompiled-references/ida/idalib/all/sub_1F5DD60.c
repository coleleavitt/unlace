__int64 __fastcall sub_1F5DD60(__int64 *a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rsi
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r13
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // r14
  __int64 v19; // rcx
  unsigned __int64 v20; // rbx
  int v21; // edx
  unsigned __int64 v22; // rbx
  __int64 v23; // rdx
  unsigned __int64 v24; // rbx
  __int64 result; // rax
  unsigned __int64 v26; // rbx

  v4 = *a1;
  v5 = *(_QWORD *)(*a1 + 8);
  v6 = *(_QWORD *)(*(_QWORD *)(v5 + 13064) + 8LL * *(unsigned int *)(v5 + 13072) - 8);
  v7 = *(_QWORD *)(v4 + 16);
  --*(_DWORD *)(v5 + 13072);
  *(_QWORD *)(a2 + 16) = v6;
  v8 = sub_1EE13A0(v5, v7, (__int64 *)(v4 + 32), (_DWORD *)(v4 + 24));
  *(_QWORD *)(a2 + 8) = sub_1EDB980((_QWORD *)v5, v8, v9, v10, v11, v12);
  v13 = *a1;
  v14 = *(unsigned int *)(*a1 + 24);
  v15 = *(_QWORD *)(*a1 + 16);
  v16 = *(_QWORD *)(*a1 + 8);
  v17 = *(_QWORD *)(v15 + 856);
  v18 = v15;
  *(_DWORD *)(v13 + 24) = v14 + 1;
  v19 = *(_QWORD *)(v13 + 32);
  v20 = *(_QWORD *)(v19 + 8 * v14);
  if ( v17 )
  {
    sub_1EDF870(v16, v15);
    v13 = *a1;
    v18 = *(_QWORD *)(*a1 + 16);
    v16 = *(_QWORD *)(*a1 + 8);
    v19 = *(_QWORD *)(*a1 + 32);
    v17 = *(_QWORD *)(v18 + 856);
  }
  v21 = __ROR4__(v20, 1);
  v22 = HIDWORD(v20);
  if ( v22 )
    v15 = *(_QWORD *)(*(_QWORD *)(v15 + 3320) + 8LL * (unsigned int)(v22 - 1));
  if ( v21 )
    v21 = v21 + *(_DWORD *)(v15 + 1648) - 2;
  *(_DWORD *)(a2 + 24) = v21;
  v23 = *(unsigned int *)(v13 + 24);
  v24 = *(_QWORD *)(v19 + 8 * v23);
  *(_DWORD *)(v13 + 24) = v23 + 1;
  if ( v17 )
    sub_1EDF870(v16, v18);
  result = (unsigned int)__ROR4__(v24, 1);
  v26 = HIDWORD(v24);
  if ( v26 )
    v18 = *(_QWORD *)(*(_QWORD *)(v18 + 3320) + 8LL * (unsigned int)(v26 - 1));
  if ( (_DWORD)result )
  {
    result = (unsigned int)(result + *(_DWORD *)(v18 + 1648) - 2);
    *(_DWORD *)(a2 + 28) = result;
  }
  else
  {
    *(_DWORD *)(a2 + 28) = 0;
  }
  return result;
}
