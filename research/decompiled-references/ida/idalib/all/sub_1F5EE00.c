__int64 __fastcall sub_1F5EE00(__int64 *a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r13
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rdx
  bool v10; // zf
  unsigned __int64 v11; // rbp
  int v12; // ecx
  unsigned __int64 v13; // rbp
  __int64 v14; // rdx
  __int64 v15; // rax
  unsigned __int8 v16; // al
  __int64 result; // rax

  sub_1F58FC0(a1, a2);
  v4 = *a1;
  v5 = *(unsigned int *)(*a1 + 24);
  v6 = *(_QWORD *)(*a1 + 16);
  v7 = *(_QWORD *)(*a1 + 32);
  v8 = *(_QWORD *)(*a1 + 8);
  v9 = (unsigned int)(v5 + 1);
  v10 = *(_QWORD *)(v6 + 856) == 0;
  *(_DWORD *)(*a1 + 24) = v9;
  v11 = *(_QWORD *)(v7 + 8 * v5);
  if ( !v10 )
  {
    sub_1EDF870(v8, v6);
    v4 = *a1;
    v9 = *(unsigned int *)(*a1 + 24);
    v7 = *(_QWORD *)(*a1 + 32);
  }
  v12 = __ROR4__(v11, 1);
  v13 = HIDWORD(v11);
  if ( v13 )
    v6 = *(_QWORD *)(*(_QWORD *)(v6 + 3320) + 8LL * (unsigned int)(v13 - 1));
  if ( v12 )
    v12 = v12 + *(_DWORD *)(v6 + 1648) - 2;
  v10 = *(_QWORD *)(v7 + 8 * v9) == 0;
  *(_DWORD *)(a2 + 4) = v12;
  *(_DWORD *)(v4 + 24) = v9 + 1;
  *(_BYTE *)(a2 + 2) = (8 * !v10) | *(_BYTE *)(a2 + 2) & 0xF7;
  v14 = *a1;
  v15 = *(unsigned int *)(*a1 + 24);
  *(_DWORD *)(v14 + 24) = v15 + 1;
  *(_BYTE *)(a2 + 2) = (16 * (*(_QWORD *)(*(_QWORD *)(v14 + 32) + 8 * v15) != 0)) | *(_BYTE *)(a2 + 2) & 0xEF;
  v16 = sub_B63530((_QWORD *)a2);
  *(_BYTE *)(a2 + 1) = (v16 << 6) | *(_BYTE *)(a2 + 1) & 0x3F;
  result = *(_BYTE *)(a2 + 2) & 0xF8 | (v16 >> 2) & 7u;
  *(_BYTE *)(a2 + 2) = result;
  return result;
}
