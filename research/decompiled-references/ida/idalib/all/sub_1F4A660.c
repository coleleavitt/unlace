unsigned __int64 __fastcall sub_1F4A660(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r12
  __int64 v8; // rdi
  int v9; // ecx
  __int64 v10; // rdx
  bool v11; // zf
  __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rdx
  unsigned __int64 v15; // rbp
  int v16; // ecx
  unsigned __int64 v17; // rbp
  int v18; // ecx
  unsigned __int64 v19; // rdx
  unsigned __int64 result; // rax

  sub_1F43F90((__int64 *)a1, a2);
  *(_QWORD *)(a2 + 40) = sub_1F16D80(*(_QWORD *)(a1 + 16));
  v4 = *(_QWORD *)(a1 + 16);
  v5 = *(unsigned int *)(v4 + 24);
  v6 = *(_QWORD *)(v4 + 32);
  v7 = *(_QWORD *)(v4 + 16);
  v8 = *(_QWORD *)(v4 + 8);
  v9 = v5 + 1;
  v10 = *(_QWORD *)(v6 + 8 * v5);
  v11 = *(_QWORD *)(v7 + 856) == 0;
  *(_DWORD *)(v4 + 24) = v9;
  v12 = v7;
  *(_DWORD *)(a1 + 64) = v10;
  v13 = *(unsigned int *)(v4 + 24);
  v14 = (unsigned int)(v13 + 1);
  v15 = *(_QWORD *)(v6 + 8 * v13);
  *(_DWORD *)(v4 + 24) = v14;
  if ( !v11 )
  {
    sub_1EDF870(v8, v7);
    v4 = *(_QWORD *)(a1 + 16);
    v8 = *(_QWORD *)(v4 + 8);
    v12 = *(_QWORD *)(v4 + 16);
    v14 = *(unsigned int *)(v4 + 24);
    v6 = *(_QWORD *)(v4 + 32);
  }
  v16 = __ROR4__(v15, 1);
  v17 = HIDWORD(v15);
  if ( v17 )
    v7 = *(_QWORD *)(*(_QWORD *)(v7 + 3320) + 8LL * (unsigned int)(v17 - 1));
  if ( v16 )
    v16 = v16 + *(_DWORD *)(v7 + 1648) - 2;
  *(_DWORD *)(a2 + 56) = v16;
  v18 = v14 + 1;
  v19 = *(_QWORD *)(v6 + 8 * v14);
  *(_DWORD *)(v4 + 24) = v18;
  result = sub_1EFA430(v8, v12, v19);
  *(_QWORD *)(a1 + 56) = result;
  return result;
}
