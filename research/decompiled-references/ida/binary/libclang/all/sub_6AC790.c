__int64 __fastcall sub_6AC790(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rax
  unsigned __int64 v8; // r12
  unsigned int v9; // r13d
  int v10; // r15d
  int v11; // r14d
  unsigned __int64 v12; // rcx
  __int64 v13; // rax
  unsigned int v14; // r13d
  unsigned __int64 v15; // rcx
  __int64 v16; // rax
  unsigned __int64 v17; // rcx
  __int64 v18; // rax
  unsigned __int64 v19; // r12
  unsigned __int64 v20; // rcx
  __int64 v21; // rax

  if ( !a2 )
    BUG();
  v7 = *(unsigned int *)(a5 + 8);
  v8 = *(_QWORD *)(a2 + 8);
  v9 = *(char *)(a2 - 3);
  v10 = *(unsigned __int16 *)(a2 - 2);
  v11 = *(_WORD *)(a2 - 4) & 0x7FFF;
  if ( *(unsigned int *)(a5 + 12) < (unsigned __int64)(v7 + 1) )
  {
    sub_25D6060(a5, a5 + 16, v7 + 1, 4);
    v7 = *(unsigned int *)(a5 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a5 + 4 * v7) = v11;
  v12 = *(unsigned int *)(a5 + 12);
  v13 = (unsigned int)(*(_DWORD *)(a5 + 8) + 1);
  *(_DWORD *)(a5 + 8) = v13;
  if ( v12 < v13 + 1 )
  {
    sub_25D6060(a5, a5 + 16, v13 + 1, 4);
    v13 = *(unsigned int *)(a5 + 8);
  }
  v14 = v9 >> 31;
  *(_DWORD *)(*(_QWORD *)a5 + 4 * v13) = v10;
  v15 = *(unsigned int *)(a5 + 12);
  v16 = (unsigned int)(*(_DWORD *)(a5 + 8) + 1);
  *(_DWORD *)(a5 + 8) = v16;
  if ( v15 < v16 + 1 )
  {
    sub_25D6060(a5, a5 + 16, v16 + 1, 4);
    v16 = *(unsigned int *)(a5 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a5 + 4 * v16) = v14;
  v17 = *(unsigned int *)(a5 + 12);
  v18 = (unsigned int)(*(_DWORD *)(a5 + 8) + 1);
  *(_DWORD *)(a5 + 8) = v18;
  if ( v17 < v18 + 1 )
  {
    sub_25D6060(a5, a5 + 16, v18 + 1, 4);
    v18 = *(unsigned int *)(a5 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a5 + 4 * v18) = v8;
  v19 = HIDWORD(v8);
  v20 = *(unsigned int *)(a5 + 12);
  v21 = (unsigned int)(*(_DWORD *)(a5 + 8) + 1);
  *(_DWORD *)(a5 + 8) = v21;
  if ( v20 < v21 + 1 )
  {
    sub_25D6060(a5, a5 + 16, v21 + 1, 4);
    v21 = *(unsigned int *)(a5 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a5 + 4 * v21) = v19;
  ++*(_DWORD *)(a5 + 8);
  return sub_25ABE00(a5, a3);
}

