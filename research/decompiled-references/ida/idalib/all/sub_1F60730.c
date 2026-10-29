__int64 __fastcall sub_1F60730(__int64 *a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r13
  __int64 v8; // rdi
  bool v9; // zf
  unsigned __int64 v10; // rbp
  int v11; // eax
  unsigned __int64 v12; // rbp
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 result; // rax

  sub_1F58FC0(a1, a2);
  v3 = *(_QWORD *)(*a1 + 8);
  v4 = *(_QWORD *)(*(_QWORD *)(v3 + 13064) + 8LL * (unsigned int)(*(_DWORD *)(v3 + 13072))-- - 8);
  *(_QWORD *)(a2 + 16) = v4;
  v5 = *a1;
  v6 = *(unsigned int *)(*a1 + 24);
  v7 = *(_QWORD *)(*a1 + 16);
  v8 = *(_QWORD *)(*a1 + 8);
  v9 = *(_QWORD *)(v7 + 856) == 0;
  *(_DWORD *)(v5 + 24) = v6 + 1;
  v10 = *(_QWORD *)(*(_QWORD *)(v5 + 32) + 8 * v6);
  if ( !v9 )
    sub_1EDF870(v8, v7);
  v11 = __ROR4__(v10, 1);
  v12 = HIDWORD(v10);
  if ( v12 )
    v7 = *(_QWORD *)(*(_QWORD *)(v7 + 3320) + 8LL * (unsigned int)(v12 - 1));
  if ( v11 )
    v11 = v11 + *(_DWORD *)(v7 + 1648) - 2;
  *(_DWORD *)(a2 + 4) = v11;
  v13 = *a1;
  v14 = *(unsigned int *)(*a1 + 24);
  *(_DWORD *)(v13 + 24) = v14 + 1;
  LOBYTE(v14) = *(_QWORD *)(*(_QWORD *)(v13 + 32) + 8 * v14) != 0;
  LOBYTE(v13) = 8 * v14;
  result = (8 * (_DWORD)v14) | *(_BYTE *)(a2 + 2) & 0xF7u;
  *(_BYTE *)(a2 + 2) = v13 | *(_BYTE *)(a2 + 2) & 0xF7;
  return result;
}
