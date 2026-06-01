__int64 __fastcall sub_1F5E2B0(__int64 *a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // r14
  _QWORD *v6; // r12
  bool v7; // zf
  __int64 v8; // rsi
  unsigned __int64 v9; // rbx
  int v10; // eax
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 result; // rax

  v3 = *a1;
  v4 = *(unsigned int *)(*a1 + 24);
  v5 = *(_QWORD *)(*a1 + 16);
  v6 = *(_QWORD **)(*a1 + 8);
  v7 = *(_QWORD *)(v5 + 856) == 0;
  v8 = v5;
  *(_DWORD *)(v3 + 24) = v4 + 1;
  v9 = *(_QWORD *)(*(_QWORD *)(v3 + 32) + 8 * v4);
  if ( !v7 )
  {
    sub_1EDF870((__int64)v6, v5);
    v3 = *a1;
    v6 = *(_QWORD **)(*a1 + 8);
    v8 = *(_QWORD *)(*a1 + 16);
  }
  v10 = __ROR4__(v9, 1);
  v11 = HIDWORD(v9);
  if ( v11 )
    v5 = *(_QWORD *)(*(_QWORD *)(v5 + 3320) + 8LL * (unsigned int)(v11 - 1));
  if ( v10 )
    v10 = v10 + *(_DWORD *)(v5 + 1648) - 2;
  *(_DWORD *)(a2 + 8) = v10;
  v12 = sub_1EE13A0((__int64)v6, v8, (__int64 *)(v3 + 32), (_DWORD *)(v3 + 24));
  *(_QWORD *)(a2 + 16) = sub_1EDB980(v6, v12, v13, v14, v15, v16);
  v17 = *(_QWORD *)(*a1 + 8);
  v18 = *(_QWORD *)(*(_QWORD *)(v17 + 13064) + 8LL * *(unsigned int *)(v17 + 13072) - 8);
  result = (unsigned int)(*(_DWORD *)(v17 + 13072) - 1);
  *(_DWORD *)(v17 + 13072) = result;
  *(_QWORD *)(a2 + 24) = v18;
  return result;
}
