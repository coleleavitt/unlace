__int64 __fastcall sub_B98FD0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rax
  unsigned int *v8; // rbp
  __int64 v9; // r13
  __int64 v10; // rax
  __int64 v11; // r14
  unsigned int *v12; // rbp
  unsigned __int64 v13; // rcx
  __int64 v14; // rax
  unsigned int *v15; // r14
  unsigned int *v16; // rdi

  if ( !a2 )
    BUG();
  v7 = sub_B685F0(a2 - 104);
  v8 = *(unsigned int **)(a2 + 24);
  v9 = v7;
  v10 = *(unsigned int *)(a5 + 8);
  v11 = *v8;
  v12 = v8 + 2;
  if ( v10 + 1 > (unsigned __int64)*(unsigned int *)(a5 + 12) )
  {
    sub_22134E0(a5, a5 + 16, v10 + 1, 4);
    v10 = *(unsigned int *)(a5 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a5 + 4 * v10) = v11;
  v13 = *(unsigned int *)(a5 + 12);
  v14 = (unsigned int)(*(_DWORD *)(a5 + 8) + 1);
  *(_DWORD *)(a5 + 8) = v14;
  if ( v14 + 1 > v13 )
  {
    sub_22134E0(a5, a5 + 16, v14 + 1, 4);
    v14 = *(unsigned int *)(a5 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a5 + 4 * v14) = 0;
  v15 = &v12[6 * v11];
  ++*(_DWORD *)(a5 + 8);
  while ( v15 != v12 )
  {
    v16 = v12;
    v12 += 6;
    sub_EF9920(v16, a5, v9);
  }
  return sub_21FF190(a5, a3);
}

