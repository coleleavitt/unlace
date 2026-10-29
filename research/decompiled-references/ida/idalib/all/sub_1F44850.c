void __fastcall sub_1F44850(__int64 *a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r13
  __int64 v9; // rdi
  bool v10; // zf
  unsigned __int64 v11; // r12
  int v12; // eax
  unsigned __int64 v13; // r12
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r13
  __int64 v17; // rdi
  unsigned __int64 v18; // r12
  int v19; // eax
  unsigned __int64 v20; // r12
  __int64 v21; // rsi
  unsigned __int64 v22; // rdx

  sub_1F43F90(a1, a2);
  v4 = a1[2];
  v5 = *(unsigned int *)(v4 + 24);
  *(_DWORD *)(v4 + 24) = v5 + 1;
  *(_BYTE *)(a2 + 33) = *(_QWORD *)(*(_QWORD *)(v4 + 32) + 8 * v5);
  v6 = a1[2];
  v7 = *(unsigned int *)(v6 + 24);
  v8 = *(_QWORD *)(v6 + 16);
  v9 = *(_QWORD *)(v6 + 8);
  v10 = *(_QWORD *)(v8 + 856) == 0;
  *(_DWORD *)(v6 + 24) = v7 + 1;
  v11 = *(_QWORD *)(*(_QWORD *)(v6 + 32) + 8 * v7);
  if ( !v10 )
    sub_1EDF870(v9, v8);
  v12 = __ROR4__(v11, 1);
  v13 = HIDWORD(v11);
  if ( v13 )
    v8 = *(_QWORD *)(*(_QWORD *)(v8 + 3320) + 8LL * (unsigned int)(v13 - 1));
  if ( v12 )
    v12 = v12 + *(_DWORD *)(v8 + 1648) - 2;
  *(_DWORD *)(a2 + 36) = v12;
  v14 = a1[2];
  v15 = *(unsigned int *)(v14 + 24);
  v16 = *(_QWORD *)(v14 + 16);
  v17 = *(_QWORD *)(v14 + 8);
  v10 = *(_QWORD *)(v16 + 856) == 0;
  *(_DWORD *)(v14 + 24) = v15 + 1;
  v18 = *(_QWORD *)(*(_QWORD *)(v14 + 32) + 8 * v15);
  if ( !v10 )
    sub_1EDF870(v17, v16);
  v19 = __ROR4__(v18, 1);
  v20 = HIDWORD(v18);
  if ( v20 )
    v16 = *(_QWORD *)(*(_QWORD *)(v16 + 3320) + 8LL * (unsigned int)(v20 - 1));
  if ( v19 )
    v19 = v19 + *(_DWORD *)(v16 + 1648) - 2;
  v21 = *(_QWORD *)(a2 + 48);
  v22 = *(_QWORD *)(a2 + 56);
  *(_DWORD *)(a2 + 40) = v19;
  sub_1EEDDC0(a1[2], v21, v22);
}
