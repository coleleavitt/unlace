__int64 __fastcall sub_A36AB0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rax
  unsigned __int64 v6; // r13
  unsigned __int64 v9; // rbp
  int v10; // r14d
  unsigned __int64 v11; // r13
  unsigned __int64 v12; // rcx
  __int64 v13; // rax
  unsigned __int64 v14; // rcx
  __int64 v15; // rax
  unsigned __int64 v16; // rbp
  unsigned __int64 v17; // rcx
  __int64 v18; // rax

  if ( !a2 )
    BUG();
  v5 = *(unsigned int *)(a5 + 8);
  v6 = *(_QWORD *)(a2 + 8);
  v9 = *(_QWORD *)(a2 + 16);
  v10 = v6;
  if ( v5 + 1 > (unsigned __int64)*(unsigned int *)(a5 + 12) )
  {
    sub_22134E0(a5, a5 + 16, v5 + 1, 4);
    v5 = *(unsigned int *)(a5 + 8);
  }
  v11 = HIDWORD(v6);
  *(_DWORD *)(*(_QWORD *)a5 + 4 * v5) = v10;
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
  *(_DWORD *)(*(_QWORD *)a5 + 4 * v15) = v9;
  v16 = HIDWORD(v9);
  v17 = *(unsigned int *)(a5 + 12);
  v18 = (unsigned int)(*(_DWORD *)(a5 + 8) + 1);
  *(_DWORD *)(a5 + 8) = v18;
  if ( v18 + 1 > v17 )
  {
    sub_22134E0(a5, a5 + 16, v18 + 1, 4);
    v18 = *(unsigned int *)(a5 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a5 + 4 * v18) = v16;
  ++*(_DWORD *)(a5 + 8);
  return sub_21FF190(a5, a3);
}

