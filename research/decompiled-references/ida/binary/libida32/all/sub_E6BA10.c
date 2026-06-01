__int64 __fastcall sub_E6BA10(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rax
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  __int64 v13; // rax
  unsigned __int64 v14; // rbp
  unsigned __int64 v15; // rbp
  unsigned __int64 v16; // rcx
  __int64 v17; // rax

  v7 = *(unsigned int *)(a5 + 8);
  v8 = *(_QWORD *)(a2 + 8);
  if ( v7 + 1 > (unsigned __int64)*(unsigned int *)(a5 + 12) )
  {
    sub_22134E0(a5, a5 + 16, v7 + 1, 4);
    v7 = *(unsigned int *)(a5 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a5 + 4 * v7) = v8;
  v9 = HIDWORD(v8);
  v10 = *(unsigned int *)(a5 + 12);
  v11 = (unsigned int)(*(_DWORD *)(a5 + 8) + 1);
  *(_DWORD *)(a5 + 8) = v11;
  if ( v11 + 1 > v10 )
  {
    sub_22134E0(a5, a5 + 16, v11 + 1, 4);
    v11 = *(unsigned int *)(a5 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a5 + 4 * v11) = v9;
  v12 = *(unsigned int *)(a5 + 12);
  v13 = (unsigned int)(*(_DWORD *)(a5 + 8) + 1);
  *(_DWORD *)(a5 + 8) = v13;
  v14 = *(_QWORD *)(a2 + 16);
  if ( v13 + 1 > v12 )
  {
    sub_22134E0(a5, a5 + 16, v13 + 1, 4);
    v13 = *(unsigned int *)(a5 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a5 + 4 * v13) = v14;
  v15 = HIDWORD(v14);
  v16 = *(unsigned int *)(a5 + 12);
  v17 = (unsigned int)(*(_DWORD *)(a5 + 8) + 1);
  *(_DWORD *)(a5 + 8) = v17;
  if ( v17 + 1 > v16 )
  {
    sub_22134E0(a5, a5 + 16, v17 + 1, 4);
    v17 = *(unsigned int *)(a5 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a5 + 4 * v17) = v15;
  ++*(_DWORD *)(a5 + 8);
  return sub_21FF190(a5, a3);
}

