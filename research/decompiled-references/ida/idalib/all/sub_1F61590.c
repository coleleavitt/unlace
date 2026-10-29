void __fastcall sub_1F61590(__int64 *a1, __int64 a2)
{
  __int64 v4; // rax
  int v5; // edx
  __int64 v6; // rcx
  __int64 v7; // rdi
  int v8; // esi
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // r12
  __int64 v15; // rcx
  bool v16; // zf
  unsigned __int64 v17; // rbp
  int v18; // eax
  unsigned __int64 v19; // rbp
  __int64 v20; // rsi
  unsigned __int64 v21; // rdx

  v4 = *a1;
  v5 = *(_DWORD *)(*a1 + 24);
  v6 = *(_QWORD *)(*a1 + 32);
  v7 = *(_QWORD *)(*a1 + 8);
  v8 = v5 + 2;
  v9 = *(_QWORD *)(v6 + 8LL * (unsigned int)(v5 + 1));
  *(_DWORD *)(v4 + 24) = v8;
  v10 = *(_QWORD *)(v4 + 16);
  *(_BYTE *)(a2 + 8) = v9;
  v11 = sub_1EEDED0(v7, v10, (_QWORD *)(v4 + 32), (_DWORD *)(v4 + 24));
  v12 = *a1;
  *(_QWORD *)(a2 + 12) = v11;
  v13 = *(unsigned int *)(v12 + 24);
  v14 = *(_QWORD *)(v12 + 16);
  v15 = *(_QWORD *)(v12 + 8);
  v16 = *(_QWORD *)(v14 + 856) == 0;
  *(_DWORD *)(v12 + 24) = v13 + 1;
  v17 = *(_QWORD *)(*(_QWORD *)(v12 + 32) + 8 * v13);
  if ( !v16 )
  {
    sub_1EDF870(v15, v14);
    v12 = *a1;
  }
  v18 = __ROR4__(v17, 1);
  v19 = HIDWORD(v17);
  if ( v19 )
    v14 = *(_QWORD *)(*(_QWORD *)(v14 + 3320) + 8LL * (unsigned int)(v19 - 1));
  if ( v18 )
    v18 = v18 + *(_DWORD *)(v14 + 1648) - 2;
  v20 = *(_QWORD *)(a2 + 24);
  v21 = *(_QWORD *)(a2 + 32);
  *(_DWORD *)(a2 + 20) = v18;
  sub_1EEDDC0(v12, v20, v21);
}
