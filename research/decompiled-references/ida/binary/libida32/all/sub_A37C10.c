__int64 __fastcall sub_A37C10(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rax
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // r12
  __int64 v10; // rax
  unsigned __int64 v11; // r13
  __int64 v12; // rcx
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // r12
  __int64 v17; // rcx
  unsigned __int64 v18; // rax

  if ( !a2 )
  {
    sub_F39EB0(0);
    BUG();
  }
  v7 = sub_F39EB0(a2 - 24);
  v8 = *(_QWORD *)(a2 + 8);
  v9 = v7;
  v10 = *(unsigned int *)(a5 + 8);
  if ( v10 + 1 > (unsigned __int64)*(unsigned int *)(a5 + 12) )
  {
    sub_22134E0(a5, a5 + 16, v10 + 1, 4);
    v10 = *(unsigned int *)(a5 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a5 + 4 * v10) = v8;
  v11 = HIDWORD(v8);
  v12 = (unsigned int)(*(_DWORD *)(a5 + 8) + 1);
  v13 = *(unsigned int *)(a5 + 12);
  *(_DWORD *)(a5 + 8) = v12;
  if ( v12 + 1 > v13 )
  {
    sub_22134E0(a5, a5 + 16, v12 + 1, 4);
    v12 = *(unsigned int *)(a5 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a5 + 4 * v12) = v11;
  v14 = (unsigned int)(*(_DWORD *)(a5 + 8) + 1);
  v15 = *(unsigned int *)(a5 + 12);
  *(_DWORD *)(a5 + 8) = v14;
  if ( v14 + 1 > v15 )
  {
    sub_22134E0(a5, a5 + 16, v14 + 1, 4);
    v14 = *(unsigned int *)(a5 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a5 + 4 * v14) = v9;
  v16 = HIDWORD(v9);
  v17 = (unsigned int)(*(_DWORD *)(a5 + 8) + 1);
  v18 = *(unsigned int *)(a5 + 12);
  *(_DWORD *)(a5 + 8) = v17;
  if ( v17 + 1 > v18 )
  {
    sub_22134E0(a5, a5 + 16, v17 + 1, 4);
    v17 = *(unsigned int *)(a5 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a5 + 4 * v17) = v16;
  ++*(_DWORD *)(a5 + 8);
  return sub_21FF190(a5, a3);
}

