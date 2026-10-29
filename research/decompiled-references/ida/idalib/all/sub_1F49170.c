__int64 __fastcall sub_1F49170(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r13
  __int64 v10; // rdi
  bool v11; // zf
  unsigned __int64 v12; // r12
  int v13; // eax
  unsigned __int64 v14; // r12
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r12
  __int64 v18; // rdi
  unsigned __int64 v19; // rbp
  __int64 result; // rax
  unsigned __int64 v21; // rbp
  __int64 v22; // [rsp+0h] [rbp-48h] BYREF

  sub_1F48A90((__int64)&v22, a1, a2);
  v3 = a1[2];
  v4 = *(unsigned int *)(v3 + 24);
  *(_DWORD *)(v3 + 24) = v4 + 1;
  *(_BYTE *)(a2 + 89) = ((unsigned __int8)*(_QWORD *)(*(_QWORD *)(v3 + 32) + 8 * v4) << 6) | *(_BYTE *)(a2 + 89) & 0x3F;
  v5 = a1[2];
  v6 = *(unsigned int *)(v5 + 24);
  *(_DWORD *)(v5 + 24) = v6 + 1;
  *(_WORD *)(a2 + 88) = *(_QWORD *)(*(_QWORD *)(v5 + 32) + 8 * v6) & 0x3FFF | *(_WORD *)(a2 + 88) & 0xC000;
  v7 = a1[2];
  v8 = *(unsigned int *)(v7 + 24);
  v9 = *(_QWORD *)(v7 + 16);
  v10 = *(_QWORD *)(v7 + 8);
  v11 = *(_QWORD *)(v9 + 856) == 0;
  *(_DWORD *)(v7 + 24) = v8 + 1;
  v12 = *(_QWORD *)(*(_QWORD *)(v7 + 32) + 8 * v8);
  if ( !v11 )
    sub_1EDF870(v10, v9);
  v13 = __ROR4__(v12, 1);
  v14 = HIDWORD(v12);
  if ( v14 )
    v9 = *(_QWORD *)(*(_QWORD *)(v9 + 3320) + 8LL * (unsigned int)(v14 - 1));
  if ( v13 )
    v13 = v13 + *(_DWORD *)(v9 + 1648) - 2;
  *(_DWORD *)(a2 + 92) = v13;
  v15 = a1[2];
  v16 = *(unsigned int *)(v15 + 24);
  v17 = *(_QWORD *)(v15 + 16);
  v18 = *(_QWORD *)(v15 + 8);
  v11 = *(_QWORD *)(v17 + 856) == 0;
  *(_DWORD *)(v15 + 24) = v16 + 1;
  v19 = *(_QWORD *)(*(_QWORD *)(v15 + 32) + 8 * v16);
  if ( !v11 )
    sub_1EDF870(v18, v17);
  result = (unsigned int)__ROR4__(v19, 1);
  v21 = HIDWORD(v19);
  if ( v21 )
    v17 = *(_QWORD *)(*(_QWORD *)(v17 + 3320) + 8LL * (unsigned int)(v21 - 1));
  if ( (_DWORD)result )
  {
    result = (unsigned int)(result + *(_DWORD *)(v17 + 1648) - 2);
    *(_DWORD *)(a2 + 96) = result;
  }
  else
  {
    *(_DWORD *)(a2 + 96) = 0;
  }
  return result;
}
