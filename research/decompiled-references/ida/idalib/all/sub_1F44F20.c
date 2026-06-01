__int64 __fastcall sub_1F44F20(__int64 *a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r12
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // r14
  __int64 v12; // rcx
  unsigned __int64 v13; // rbp
  int v14; // edx
  unsigned __int64 v15; // rbp
  __int64 v16; // rdx
  unsigned __int64 v17; // rbp
  int v18; // edx
  unsigned __int64 v19; // rbp
  int v20; // ecx
  int v21; // eax
  __int64 result; // rax

  sub_1F43F90(a1, a2);
  v4 = a1[2];
  v5 = *(unsigned int *)(v4 + 24);
  *(_DWORD *)(v4 + 24) = v5 + 1;
  *(_BYTE *)(a2 + 49) = (32 * *(_QWORD *)(*(_QWORD *)(v4 + 32) + 8 * v5)) | *(_BYTE *)(a2 + 49) & 0x1F;
  v6 = a1[2];
  v7 = *(unsigned int *)(v6 + 24);
  v8 = *(_QWORD *)(v6 + 16);
  v9 = *(_QWORD *)(v6 + 8);
  v10 = *(_QWORD *)(v8 + 856);
  v11 = v8;
  *(_DWORD *)(v6 + 24) = v7 + 1;
  v12 = *(_QWORD *)(v6 + 32);
  v13 = *(_QWORD *)(v12 + 8 * v7);
  if ( v10 )
  {
    sub_1EDF870(v9, v8);
    v6 = a1[2];
    v11 = *(_QWORD *)(v6 + 16);
    v9 = *(_QWORD *)(v6 + 8);
    v12 = *(_QWORD *)(v6 + 32);
    v10 = *(_QWORD *)(v11 + 856);
  }
  v14 = __ROR4__(v13, 1);
  v15 = HIDWORD(v13);
  if ( v15 )
    v8 = *(_QWORD *)(*(_QWORD *)(v8 + 3320) + 8LL * (unsigned int)(v15 - 1));
  if ( v14 )
    v14 = v14 + *(_DWORD *)(v8 + 1648) - 2;
  *(_DWORD *)(a2 + 72) = v14;
  v16 = *(unsigned int *)(v6 + 24);
  v17 = *(_QWORD *)(v12 + 8 * v16);
  *(_DWORD *)(v6 + 24) = v16 + 1;
  if ( v10 )
    sub_1EDF870(v9, v11);
  v18 = __ROR4__(v17, 1);
  v19 = HIDWORD(v17);
  if ( v19 )
    v11 = *(_QWORD *)(*(_QWORD *)(v11 + 3320) + 8LL * (unsigned int)(v19 - 1));
  v20 = 0;
  if ( v18 )
  {
    v18 = v18 + *(_DWORD *)(v11 + 1648) - 2;
    LOBYTE(v20) = v18 != 0;
  }
  v21 = *(unsigned __int8 *)(a2 + 50);
  *(_DWORD *)(a2 + 76) = v18;
  result = v20 | v21 & 0xFFFFFFFE;
  *(_BYTE *)(a2 + 50) = result;
  return result;
}
