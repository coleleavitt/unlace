__int64 __fastcall sub_A36EE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rax
  unsigned __int64 v8; // rbp
  int v9; // r13d
  unsigned __int8 v10; // r14
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // rcx
  __int64 v13; // rax
  unsigned __int64 v14; // rcx
  __int64 v15; // rax
  unsigned __int64 v16; // rcx
  __int64 v17; // rax

  if ( !a2 )
    BUG();
  v5 = *(unsigned int *)(a5 + 8);
  v8 = *(_QWORD *)(a2 + 8);
  v9 = (*(_BYTE *)(a2 - 6) >> 3) & 7;
  v10 = (*(_WORD *)(a2 - 6) >> 6) & 7;
  if ( v5 + 1 > (unsigned __int64)*(unsigned int *)(a5 + 12) )
  {
    sub_22134E0(a5, a5 + 16, v5 + 1, 4);
    v5 = *(unsigned int *)(a5 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a5 + 4 * v5) = v8;
  v11 = HIDWORD(v8);
  v12 = *(unsigned int *)(a5 + 12);
  v13 = (unsigned int)(*(_DWORD *)(a5 + 8) + 1);
  *(_DWORD *)(a5 + 8) = v13;
  if ( v13 + 1 > v12 )
  {
    sub_22134E0(a5, a5 + 16, v13 + 1, 4);
    v13 = *(unsigned int *)(a5 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a5 + 4 * v13) = v11;
  v14 = *(unsigned int *)(a5 + 12);
  v15 = (unsigned int)(*(_DWORD *)(a5 + 8) + 1);
  *(_DWORD *)(a5 + 8) = v15;
  if ( v15 + 1 > v14 )
  {
    sub_22134E0(a5, a5 + 16, v15 + 1, 4);
    v15 = *(unsigned int *)(a5 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a5 + 4 * v15) = v10;
  v16 = *(unsigned int *)(a5 + 12);
  v17 = (unsigned int)(*(_DWORD *)(a5 + 8) + 1);
  *(_DWORD *)(a5 + 8) = v17;
  if ( v17 + 1 > v16 )
  {
    sub_22134E0(a5, a5 + 16, v17 + 1, 4);
    v17 = *(unsigned int *)(a5 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a5 + 4 * v17) = v9;
  ++*(_DWORD *)(a5 + 8);
  return sub_21FF190(a5, a3);
}

