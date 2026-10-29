__int64 __fastcall sub_1F58C00(__int64 *a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r12
  __int64 v7; // rdi
  bool v8; // zf
  unsigned __int64 v9; // rbp
  int v10; // edx
  unsigned __int64 v11; // rbp
  __int64 v12; // rsi
  int v13; // edx
  __int64 v14; // rdx
  __int64 result; // rax

  v4 = *a1;
  v5 = *(unsigned int *)(*a1 + 24);
  v6 = *(_QWORD *)(*a1 + 16);
  v7 = *(_QWORD *)(*a1 + 8);
  v8 = *(_QWORD *)(v6 + 856) == 0;
  *(_DWORD *)(v4 + 24) = v5 + 1;
  v9 = *(_QWORD *)(*(_QWORD *)(v4 + 32) + 8 * v5);
  if ( !v8 )
  {
    sub_1EDF870(v7, v6);
    v4 = *a1;
    v7 = *(_QWORD *)(*a1 + 8);
  }
  v10 = __ROR4__(v9, 1);
  v11 = HIDWORD(v9);
  if ( v11 )
    v6 = *(_QWORD *)(*(_QWORD *)(v6 + 3320) + 8LL * (unsigned int)(v11 - 1));
  if ( v10 )
    v10 = v10 + *(_DWORD *)(v6 + 1648) - 2;
  *(_DWORD *)(a2 + 8) = v10;
  v12 = *(unsigned int *)(v7 + 13072);
  v13 = *(_DWORD *)(v7 + 13072) - 2;
  *(_QWORD *)(a2 + 16) = *(_QWORD *)(*(_QWORD *)(v7 + 13064) + 8 * v12 - 8);
  *(_QWORD *)(a2 + 24) = *(_QWORD *)(*(_QWORD *)(v7 + 13064) + 8LL * (unsigned int)(v12 - 1) - 8);
  *(_DWORD *)(v7 + 13072) = v13;
  v14 = *(unsigned int *)(v4 + 24);
  *(_DWORD *)(v4 + 24) = v14 + 1;
  LOBYTE(v14) = *(_QWORD *)(*(_QWORD *)(v4 + 32) + 8 * v14) != 0;
  result = (unsigned int)v14 | *(_BYTE *)(a2 + 32) & 0xFE;
  *(_BYTE *)(a2 + 32) = v14 | *(_BYTE *)(a2 + 32) & 0xFE;
  return result;
}
