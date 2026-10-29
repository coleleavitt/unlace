void __fastcall sub_EFE0B0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbp
  __int64 v5; // rax
  unsigned __int16 v6; // r14
  unsigned __int64 v7; // r8
  int v8; // r15d
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rcx
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  __int64 v13; // rax
  unsigned __int64 v14; // rcx
  __int64 v15; // rax
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // r13
  __int64 v19; // rdi
  unsigned __int64 v20; // [rsp+8h] [rbp-40h]
  int v21; // [rsp+8h] [rbp-40h]

  v4 = a1 + 24;
  v5 = *(unsigned int *)(a2 + 8);
  v6 = *(_WORD *)(a1 + 2) >> 1;
  v7 = *(_QWORD *)(a1 + 16);
  v8 = (*(_DWORD *)a1 >> 3) & 0x3FFF;
  if ( v5 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
  {
    v20 = *(_QWORD *)(a1 + 16);
    sub_22134E0(a2, a2 + 16, v5 + 1, 4);
    v5 = *(unsigned int *)(a2 + 8);
    v7 = v20;
  }
  *(_DWORD *)(*(_QWORD *)a2 + 4 * v5) = v7;
  v9 = HIDWORD(v7);
  v10 = *(unsigned int *)(a2 + 12);
  v11 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
  *(_DWORD *)(a2 + 8) = v11;
  if ( v11 + 1 > v10 )
  {
    v21 = v9;
    sub_22134E0(a2, a2 + 16, v11 + 1, 4);
    v11 = *(unsigned int *)(a2 + 8);
    LODWORD(v9) = v21;
  }
  *(_DWORD *)(*(_QWORD *)a2 + 4 * v11) = v9;
  v12 = *(unsigned int *)(a2 + 12);
  v13 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
  *(_DWORD *)(a2 + 8) = v13;
  if ( v13 + 1 > v12 )
  {
    sub_22134E0(a2, a2 + 16, v13 + 1, 4);
    v13 = *(unsigned int *)(a2 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a2 + 4 * v13) = v8;
  v14 = *(unsigned int *)(a2 + 12);
  v15 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
  *(_DWORD *)(a2 + 8) = v15;
  if ( v15 + 1 > v14 )
  {
    sub_22134E0(a2, a2 + 16, v15 + 1, 4);
    v15 = *(unsigned int *)(a2 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a2 + 4 * v15) = v6;
  v16 = *(unsigned int *)(a2 + 12);
  v17 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
  *(_DWORD *)(a2 + 8) = v17;
  if ( v17 + 1 > v16 )
  {
    sub_22134E0(a2, a2 + 16, v17 + 1, 4);
    v17 = *(unsigned int *)(a2 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a2 + 4 * v17) = 0;
  v18 = v4 + 24LL * v6;
  ++*(_DWORD *)(a2 + 8);
  while ( v18 != v4 )
  {
    v19 = v4;
    v4 += 24;
    sub_EF9920(v19, a2, a3);
  }
}

