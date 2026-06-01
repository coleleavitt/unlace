unsigned __int64 __fastcall sub_B9D0F0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // r12
  unsigned int *v6; // rbp
  __int64 v7; // r13
  __int64 v8; // rax
  __int64 v9; // r14
  unsigned int *v10; // rbp
  __int64 v11; // rcx
  unsigned __int64 v12; // rax
  unsigned int *v13; // r14
  unsigned int *v14; // rdi

  if ( !a2 )
    BUG();
  v4 = sub_B685F0(a2 - 144);
  v5 = *(_QWORD *)(a2 + 40);
  v6 = *(unsigned int **)(a2 + 24);
  v7 = v4;
  v8 = *(unsigned int *)(a3 + 8);
  v9 = *v6;
  v10 = v6 + 2;
  if ( v8 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
  {
    sub_22134E0(a3, a3 + 16, v8 + 1, 4);
    v8 = *(unsigned int *)(a3 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a3 + 4 * v8) = v9;
  v11 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
  v12 = *(unsigned int *)(a3 + 12);
  *(_DWORD *)(a3 + 8) = v11;
  if ( v11 + 1 > v12 )
  {
    sub_22134E0(a3, a3 + 16, v11 + 1, 4);
    v11 = *(unsigned int *)(a3 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a3 + 4 * v11) = 0;
  v13 = &v10[6 * v9];
  ++*(_DWORD *)(a3 + 8);
  while ( v13 != v10 )
  {
    v14 = v10;
    v10 += 6;
    sub_EF9920(v14, a3, v7);
  }
  sub_B9C550(v5, a3, v7);
  return sub_961DD0(*(_QWORD **)a3, *(_QWORD *)a3 + 4LL * *(unsigned int *)(a3 + 8));
}

