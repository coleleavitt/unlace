__int64 __fastcall sub_1F46980(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r13
  __int64 v8; // rdi
  bool v9; // zf
  unsigned __int64 v10; // r12
  int v11; // eax
  unsigned __int64 v12; // r12
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r13
  __int64 v16; // rdi
  unsigned __int64 v17; // r12
  int v18; // eax
  unsigned __int64 v19; // r12
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r12
  __int64 v23; // rdi
  unsigned __int64 v24; // rbx
  __int64 result; // rax
  unsigned __int64 v26; // rbx
  _OWORD v27[4]; // [rsp+0h] [rbp-48h] BYREF

  sub_1F458C0(a1, a2);
  memset(v27, 0, 32);
  sub_1F1EA40(a1, v27);
  v3 = *(_QWORD *)(a1 + 16);
  v4 = *(unsigned int *)(v3 + 24);
  *(_DWORD *)(v3 + 24) = v4 + 1;
  *(_BYTE *)(a2 + 92) = *(_QWORD *)(*(_QWORD *)(v3 + 32) + 8 * v4) != 0;
  v5 = *(_QWORD *)(a1 + 16);
  v6 = *(unsigned int *)(v5 + 24);
  v7 = *(_QWORD *)(v5 + 16);
  v8 = *(_QWORD *)(v5 + 8);
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
  *(_DWORD *)(a2 + 88) = v11;
  v13 = *(_QWORD *)(a1 + 16);
  v14 = *(unsigned int *)(v13 + 24);
  v15 = *(_QWORD *)(v13 + 16);
  v16 = *(_QWORD *)(v13 + 8);
  v9 = *(_QWORD *)(v15 + 856) == 0;
  *(_DWORD *)(v13 + 24) = v14 + 1;
  v17 = *(_QWORD *)(*(_QWORD *)(v13 + 32) + 8 * v14);
  if ( !v9 )
    sub_1EDF870(v16, v15);
  v18 = __ROR4__(v17, 1);
  v19 = HIDWORD(v17);
  if ( v19 )
    v15 = *(_QWORD *)(*(_QWORD *)(v15 + 3320) + 8LL * (unsigned int)(v19 - 1));
  if ( v18 )
    v18 = v18 + *(_DWORD *)(v15 + 1648) - 2;
  *(_DWORD *)(a2 + 80) = v18;
  v20 = *(_QWORD *)(a1 + 16);
  v21 = *(unsigned int *)(v20 + 24);
  v22 = *(_QWORD *)(v20 + 16);
  v23 = *(_QWORD *)(v20 + 8);
  v9 = *(_QWORD *)(v22 + 856) == 0;
  *(_DWORD *)(v20 + 24) = v21 + 1;
  v24 = *(_QWORD *)(*(_QWORD *)(v20 + 32) + 8 * v21);
  if ( !v9 )
    sub_1EDF870(v23, v22);
  result = (unsigned int)__ROR4__(v24, 1);
  v26 = HIDWORD(v24);
  if ( v26 )
    v22 = *(_QWORD *)(*(_QWORD *)(v22 + 3320) + 8LL * (unsigned int)(v26 - 1));
  if ( (_DWORD)result )
  {
    result = (unsigned int)(result + *(_DWORD *)(v22 + 1648) - 2);
    *(_DWORD *)(a2 + 84) = result;
  }
  else
  {
    *(_DWORD *)(a2 + 84) = 0;
  }
  return result;
}
