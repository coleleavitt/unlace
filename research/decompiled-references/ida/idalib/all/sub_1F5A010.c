__int64 __fastcall sub_1F5A010(__int64 *a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // r12
  __int64 v8; // rdi
  int v9; // ecx
  __int64 v10; // rdx
  bool v11; // zf
  __int64 v12; // rcx
  __int64 v13; // rdx
  unsigned __int64 v14; // rbp
  int v15; // ecx
  unsigned __int64 v16; // rbp
  int v17; // edx
  __int64 result; // rax

  sub_1F58FC0(a1, a2);
  v4 = *a1;
  v5 = *(unsigned int *)(*a1 + 24);
  v6 = *(_QWORD *)(*a1 + 32);
  v7 = *(_QWORD *)(*a1 + 16);
  v8 = *(_QWORD *)(*a1 + 8);
  v9 = v5 + 1;
  v10 = *(_QWORD *)(v6 + 8 * v5);
  v11 = *(_QWORD *)(v7 + 856) == 0;
  *(_DWORD *)(v4 + 24) = v9;
  *(_DWORD *)(a2 + 16) = v10;
  v12 = *(unsigned int *)(v4 + 24);
  v13 = (unsigned int)(v12 + 1);
  v14 = *(_QWORD *)(v6 + 8 * v12);
  *(_DWORD *)(v4 + 24) = v13;
  if ( !v11 )
  {
    sub_1EDF870(v8, v7);
    v4 = *a1;
    v13 = *(unsigned int *)(*a1 + 24);
    v6 = *(_QWORD *)(*a1 + 32);
  }
  v15 = __ROR4__(v14, 1);
  v16 = HIDWORD(v14);
  if ( v16 )
    v7 = *(_QWORD *)(*(_QWORD *)(v7 + 3320) + 8LL * (unsigned int)(v16 - 1));
  if ( v15 )
    v15 = v15 + *(_DWORD *)(v7 + 1648) - 2;
  *(_DWORD *)(a2 + 20) = v15;
  *(_DWORD *)(v4 + 24) = v13 + 1;
  v17 = 8 * (*(_QWORD *)(v6 + 8 * v13) & 7);
  result = v17 | *(_BYTE *)(a2 + 2) & 0xC7u;
  *(_BYTE *)(a2 + 2) = v17 | *(_BYTE *)(a2 + 2) & 0xC7;
  return result;
}
