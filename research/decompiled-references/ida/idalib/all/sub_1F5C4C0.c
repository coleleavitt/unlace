__int64 __fastcall sub_1F5C4C0(__int64 *a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // r13
  _QWORD *v7; // r12
  __int64 v8; // rdi
  __int64 v9; // r14
  __int64 v10; // rcx
  unsigned __int64 v11; // rbx
  int v12; // eax
  unsigned __int64 v13; // rbx
  __int64 v14; // rax
  unsigned __int64 v15; // rbx
  __int64 v16; // rsi
  int v17; // eax
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 result; // rax

  sub_1F58FC0(a1, a2);
  v4 = *a1;
  v5 = *(unsigned int *)(*a1 + 24);
  v6 = *(_QWORD *)(*a1 + 16);
  v7 = *(_QWORD **)(*a1 + 8);
  v8 = *(_QWORD *)(v6 + 856);
  v9 = *(_QWORD *)(*a1 + 16);
  *(_DWORD *)(v4 + 24) = v5 + 1;
  v10 = *(_QWORD *)(v4 + 32);
  v11 = *(_QWORD *)(v10 + 8 * v5);
  if ( v8 )
  {
    sub_1EDF870((__int64)v7, v6);
    v4 = *a1;
    v9 = *(_QWORD *)(*a1 + 16);
    v7 = *(_QWORD **)(*a1 + 8);
    v10 = *(_QWORD *)(*a1 + 32);
    v8 = *(_QWORD *)(v9 + 856);
  }
  v12 = __ROR4__(v11, 1);
  v13 = HIDWORD(v11);
  if ( v13 )
    v6 = *(_QWORD *)(*(_QWORD *)(v6 + 3320) + 8LL * (unsigned int)(v13 - 1));
  if ( v12 )
    v12 = v12 + *(_DWORD *)(v6 + 1648) - 2;
  *(_DWORD *)(a2 + 16) = v12;
  v14 = *(unsigned int *)(v4 + 24);
  v15 = *(_QWORD *)(v10 + 8 * v14);
  *(_DWORD *)(v4 + 24) = v14 + 1;
  v16 = v9;
  if ( v8 )
  {
    sub_1EDF870((__int64)v7, v9);
    v4 = *a1;
    v7 = *(_QWORD **)(*a1 + 8);
    v16 = *(_QWORD *)(*a1 + 16);
  }
  v17 = __ROR4__(v15, 1);
  v18 = HIDWORD(v15);
  if ( v18 )
    v9 = *(_QWORD *)(*(_QWORD *)(v9 + 3320) + 8LL * (unsigned int)(v18 - 1));
  if ( v17 )
    v17 = v17 + *(_DWORD *)(v9 + 1648) - 2;
  *(_DWORD *)(a2 + 20) = v17;
  v19 = sub_1EE13A0((__int64)v7, v16, (__int64 *)(v4 + 32), (_DWORD *)(v4 + 24));
  result = sub_1EDB980(v7, v19, v20, v21, v22, v23);
  *(_QWORD *)(a2 + 24) = result;
  return result;
}
