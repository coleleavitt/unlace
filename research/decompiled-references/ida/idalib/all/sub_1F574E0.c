__int64 __fastcall sub_1F574E0(__int64 *a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r12
  __int64 v7; // rsi
  __int64 v8; // rdi
  bool v9; // zf
  __int64 v10; // rdx
  unsigned __int64 v11; // rbx
  int v12; // ecx
  unsigned __int64 v13; // rbx
  int v14; // edx
  __int64 result; // rax

  v4 = *a1;
  v5 = *(unsigned int *)(*a1 + 24);
  v6 = *(_QWORD *)(*a1 + 16);
  v7 = *(_QWORD *)(*a1 + 32);
  v8 = *(_QWORD *)(*a1 + 8);
  v9 = *(_QWORD *)(v6 + 856) == 0;
  v10 = (unsigned int)(v5 + 1);
  *(_DWORD *)(v4 + 24) = v10;
  v11 = *(_QWORD *)(v7 + 8 * v5);
  if ( !v9 )
  {
    sub_1EDF870(v8, v6);
    v4 = *a1;
    v10 = *(unsigned int *)(*a1 + 24);
    v7 = *(_QWORD *)(*a1 + 32);
  }
  v12 = __ROR4__(v11, 1);
  v13 = HIDWORD(v11);
  if ( v13 )
    v6 = *(_QWORD *)(*(_QWORD *)(v6 + 3320) + 8LL * (unsigned int)(v13 - 1));
  if ( v12 )
    v12 = v12 + *(_DWORD *)(v6 + 1648) - 2;
  *(_DWORD *)(a2 + 4) = v12;
  *(_DWORD *)(v4 + 24) = v10 + 1;
  v14 = 2 * (*(_QWORD *)(v7 + 8 * v10) & 1);
  result = v14 | *(_BYTE *)(a2 + 1) & 0xFDu;
  *(_BYTE *)(a2 + 1) = v14 | *(_BYTE *)(a2 + 1) & 0xFD;
  return result;
}
