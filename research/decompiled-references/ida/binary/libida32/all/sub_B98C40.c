__int64 __fastcall sub_B98C40(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  unsigned int *v5; // rbx
  __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // r13
  unsigned int *v9; // rbx
  unsigned __int64 v10; // rcx
  __int64 v11; // rax
  __int64 result; // rax
  unsigned int *v13; // r13
  unsigned int *v14; // rdi

  v4 = sub_B685F0(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF8LL);
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
  result = 3 * v8;
  v13 = &v9[6 * v8];
  ++*(_DWORD *)(a3 + 8);
  for ( ; v13 != v9; result = sub_EF9920(v14, a3, v6) )
  {
    v14 = v9;
    v9 += 6;
  }
  return result;
}

