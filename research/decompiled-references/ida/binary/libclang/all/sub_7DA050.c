unsigned __int64 __fastcall sub_7DA050(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // r14
  unsigned int *v6; // rbx
  __int64 v7; // r12
  __int64 v8; // rax
  __int64 v9; // r13
  unsigned int *v10; // rbx
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  unsigned int *v13; // r13
  unsigned int *v14; // rdi

  if ( !a2 )
    BUG();
  v4 = sub_798D40(a2 - 144);
  v5 = *(_QWORD *)(a2 + 40);
  v6 = *(unsigned int **)(a2 + 24);
  v7 = v4;
  v8 = *(unsigned int *)(a3 + 8);
  v9 = *v6;
  v10 = v6 + 2;
  if ( *(unsigned int *)(a3 + 12) < (unsigned __int64)(v8 + 1) )
  {
    sub_25D6060(a3, a3 + 16, v8 + 1, 4);
    v8 = *(unsigned int *)(a3 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a3 + 4 * v8) = v9;
  v11 = *(unsigned int *)(a3 + 12);
  v12 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
  *(_DWORD *)(a3 + 8) = v12;
  if ( v11 < v12 + 1 )
  {
    sub_25D6060(a3, a3 + 16, v12 + 1, 4);
    v12 = *(unsigned int *)(a3 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a3 + 4 * v12) = 0;
  v13 = &v10[6 * v9];
  ++*(_DWORD *)(a3 + 8);
  while ( v13 != v10 )
  {
    v14 = v10;
    v10 += 6;
    sub_AFDA60(v14, a3, v7);
  }
  sub_7D1F00(v5, a3, v7);
  return sub_6999F0(*(_QWORD **)a3, *(_QWORD *)a3 + 4LL * *(unsigned int *)(a3 + 8));
}

