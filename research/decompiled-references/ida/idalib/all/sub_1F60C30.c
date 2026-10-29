__int64 __fastcall sub_1F60C30(__int64 *a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // r12
  __int64 v8; // rdi
  bool v9; // zf
  unsigned __int64 v10; // rbx
  int v11; // eax
  unsigned __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 result; // rax
  __int64 v15; // rdx

  v4 = *a1;
  v5 = *(unsigned int *)(*a1 + 24);
  v6 = *(_QWORD *)(*a1 + 32);
  v7 = *(_QWORD *)(*a1 + 16);
  v8 = *(_QWORD *)(*a1 + 8);
  *(_BYTE *)(a2 + 8) = *(_QWORD *)(v6 + 8 * v5) != 0;
  v9 = *(_QWORD *)(v7 + 856) == 0;
  *(_DWORD *)(v4 + 24) = v5 + 2;
  v10 = *(_QWORD *)(v6 + 8LL * (unsigned int)(v5 + 1));
  if ( !v9 )
  {
    sub_1EDF870(v8, v7);
    v8 = *(_QWORD *)(*a1 + 8);
  }
  v11 = __ROR4__(v10, 1);
  v12 = HIDWORD(v10);
  if ( v12 )
    v7 = *(_QWORD *)(*(_QWORD *)(v7 + 3320) + 8LL * (unsigned int)(v12 - 1));
  if ( v11 )
    v11 = v11 + *(_DWORD *)(v7 + 1648) - 2;
  *(_DWORD *)(a2 + 12) = v11;
  v13 = *(unsigned int *)(v8 + 13072);
  result = (unsigned int)(*(_DWORD *)(v8 + 13072) - 2);
  *(_QWORD *)(a2 + 16) = *(_QWORD *)(*(_QWORD *)(v8 + 13064) + 8 * v13 - 8);
  v15 = *(_QWORD *)(*(_QWORD *)(v8 + 13064) + 8LL * (unsigned int)(v13 - 1) - 8);
  *(_DWORD *)(v8 + 13072) = result;
  *(_QWORD *)(a2 + 24) = v15;
  return result;
}
