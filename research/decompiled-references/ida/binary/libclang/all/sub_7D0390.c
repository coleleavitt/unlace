__int64 __fastcall sub_7D0390(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rax
  unsigned int *v8; // rbx
  __int64 v9; // r12
  __int64 v10; // rax
  __int64 v11; // r15
  unsigned int *v12; // rbx
  unsigned __int64 v13; // rcx
  __int64 v14; // rax
  unsigned int *v15; // r13
  unsigned int *v16; // rdi

  v7 = sub_798D40(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF8LL);
  v8 = *(unsigned int **)(a2 + 24);
  v9 = v7;
  v10 = *(unsigned int *)(a5 + 8);
  v11 = *v8;
  v12 = v8 + 2;
  if ( *(unsigned int *)(a5 + 12) < (unsigned __int64)(v10 + 1) )
  {
    sub_25D6060(a5, a5 + 16, v10 + 1, 4);
    v10 = *(unsigned int *)(a5 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a5 + 4 * v10) = v11;
  v13 = *(unsigned int *)(a5 + 12);
  v14 = (unsigned int)(*(_DWORD *)(a5 + 8) + 1);
  *(_DWORD *)(a5 + 8) = v14;
  if ( v13 < v14 + 1 )
  {
    sub_25D6060(a5, a5 + 16, v14 + 1, 4);
    v14 = *(unsigned int *)(a5 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a5 + 4 * v14) = 0;
  v15 = &v12[6 * v11];
  ++*(_DWORD *)(a5 + 8);
  while ( v15 != v12 )
  {
    v16 = v12;
    v12 += 6;
    sub_AFDA60(v16, a5, v9);
  }
  return sub_25ABE00(a5, a3);
}

