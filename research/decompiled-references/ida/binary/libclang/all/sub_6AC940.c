__int64 __fastcall sub_6AC940(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rax
  int v8; // r13d
  int v9; // r15d
  unsigned __int64 v10; // r14
  unsigned __int8 v11; // r12
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rcx
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  __int64 v16; // rax
  unsigned __int64 v17; // rcx
  __int64 v18; // rax
  unsigned __int64 v19; // rcx
  __int64 v20; // rax

  if ( !a2 )
    BUG();
  v7 = *(unsigned int *)(a5 + 8);
  v8 = *(unsigned __int8 *)(a2 - 8);
  v9 = *(_DWORD *)(a2 - 4);
  v10 = *(_QWORD *)(a2 + 8);
  v11 = (*(_BYTE *)(a2 - 6) >> 3) & 0xF;
  if ( *(unsigned int *)(a5 + 12) < (unsigned __int64)(v7 + 1) )
  {
    sub_25D6060(a5, a5 + 16, v7 + 1, 4);
    v7 = *(unsigned int *)(a5 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a5 + 4 * v7) = v10;
  v12 = HIDWORD(v10);
  v13 = *(unsigned int *)(a5 + 12);
  v14 = (unsigned int)(*(_DWORD *)(a5 + 8) + 1);
  *(_DWORD *)(a5 + 8) = v14;
  if ( v13 < v14 + 1 )
  {
    sub_25D6060(a5, a5 + 16, v14 + 1, 4);
    v14 = *(unsigned int *)(a5 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a5 + 4 * v14) = v12;
  v15 = *(unsigned int *)(a5 + 12);
  v16 = (unsigned int)(*(_DWORD *)(a5 + 8) + 1);
  *(_DWORD *)(a5 + 8) = v16;
  if ( v15 < v16 + 1 )
  {
    sub_25D6060(a5, a5 + 16, v16 + 1, 4);
    v16 = *(unsigned int *)(a5 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a5 + 4 * v16) = v9;
  v17 = *(unsigned int *)(a5 + 12);
  v18 = (unsigned int)(*(_DWORD *)(a5 + 8) + 1);
  *(_DWORD *)(a5 + 8) = v18;
  if ( v17 < v18 + 1 )
  {
    sub_25D6060(a5, a5 + 16, v18 + 1, 4);
    v18 = *(unsigned int *)(a5 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a5 + 4 * v18) = v8;
  v19 = *(unsigned int *)(a5 + 12);
  v20 = (unsigned int)(*(_DWORD *)(a5 + 8) + 1);
  *(_DWORD *)(a5 + 8) = v20;
  if ( v19 < v20 + 1 )
  {
    sub_25D6060(a5, a5 + 16, v20 + 1, 4);
    v20 = *(unsigned int *)(a5 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a5 + 4 * v20) = v11;
  ++*(_DWORD *)(a5 + 8);
  return sub_25ABE00(a5, a3);
}

