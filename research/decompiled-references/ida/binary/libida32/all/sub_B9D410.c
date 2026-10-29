unsigned __int64 __fastcall sub_B9D410(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  unsigned int *v5; // rbp
  __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // r13
  unsigned int *v9; // rbp
  unsigned __int64 v10; // rcx
  __int64 v11; // rax
  unsigned int *v12; // r13
  __int64 v13; // rax
  unsigned int *v14; // rdi

  if ( !a2 )
    BUG();
  v4 = sub_B685F0(a2 - 104);
  v5 = *(unsigned int **)(a2 + 24);
  v6 = v4;
  v7 = *(unsigned int *)(a3 + 8);
  v8 = *v5;
  v9 = v5 + 2;
  if ( v7 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
  {
    sub_22134E0(a3, a3 + 16, v7 + 1, 4);
    v7 = *(unsigned int *)(a3 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a3 + 4 * v7) = v8;
  v10 = *(unsigned int *)(a3 + 12);
  v11 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
  *(_DWORD *)(a3 + 8) = v11;
  if ( v11 + 1 > v10 )
  {
    sub_22134E0(a3, a3 + 16, v11 + 1, 4);
    v11 = *(unsigned int *)(a3 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a3 + 4 * v11) = 0;
  v12 = &v9[6 * v8];
  v13 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
  *(_DWORD *)(a3 + 8) = v13;
  if ( v9 != v12 )
  {
    do
    {
      v14 = v9;
      v9 += 6;
      sub_EF9920(v14, a3, v6);
    }
    while ( v12 != v9 );
    v13 = *(unsigned int *)(a3 + 8);
  }
  return sub_961DD0(*(_QWORD **)a3, *(_QWORD *)a3 + 4 * v13);
}

