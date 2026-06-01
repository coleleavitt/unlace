__int64 __fastcall sub_A57C80(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rax
  unsigned __int64 v8; // r13
  __int64 v9; // r14
  unsigned __int64 v10; // r12
  __int64 v11; // r14
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // rcx
  __int64 v14; // rax
  int v15; // r14d
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  unsigned __int64 v18; // rcx
  __int64 v19; // rax
  unsigned __int64 v20; // r13
  unsigned __int64 v21; // rcx
  __int64 v22; // rax

  v5 = *(unsigned int *)(a5 + 8);
  v8 = *(_QWORD *)(a2 + 16);
  v9 = *(_QWORD *)(a2 + 8);
  v10 = v9 & 0xFFFFFFFFFFFFFFF8LL;
  v11 = v9 >> 2;
  if ( v5 + 1 > (unsigned __int64)*(unsigned int *)(a5 + 12) )
  {
    sub_2237220(a5, a5 + 16, v5 + 1, 4);
    v5 = *(unsigned int *)(a5 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a5 + 4 * v5) = v10;
  v12 = HIDWORD(v10);
  v13 = *(unsigned int *)(a5 + 12);
  v14 = (unsigned int)(*(_DWORD *)(a5 + 8) + 1);
  *(_DWORD *)(a5 + 8) = v14;
  if ( v14 + 1 > v13 )
  {
    sub_2237220(a5, a5 + 16, v14 + 1, 4);
    v14 = *(unsigned int *)(a5 + 8);
  }
  v15 = v11 & 1;
  *(_DWORD *)(*(_QWORD *)a5 + 4 * v14) = v12;
  v16 = *(unsigned int *)(a5 + 12);
  v17 = (unsigned int)(*(_DWORD *)(a5 + 8) + 1);
  *(_DWORD *)(a5 + 8) = v17;
  if ( v17 + 1 > v16 )
  {
    sub_2237220(a5, a5 + 16, v17 + 1, 4);
    v17 = *(unsigned int *)(a5 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a5 + 4 * v17) = v15;
  v18 = *(unsigned int *)(a5 + 12);
  v19 = (unsigned int)(*(_DWORD *)(a5 + 8) + 1);
  *(_DWORD *)(a5 + 8) = v19;
  if ( v19 + 1 > v18 )
  {
    sub_2237220(a5, a5 + 16, v19 + 1, 4);
    v19 = *(unsigned int *)(a5 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a5 + 4 * v19) = v8;
  v20 = HIDWORD(v8);
  v21 = *(unsigned int *)(a5 + 12);
  v22 = (unsigned int)(*(_DWORD *)(a5 + 8) + 1);
  *(_DWORD *)(a5 + 8) = v22;
  if ( v22 + 1 > v21 )
  {
    sub_2237220(a5, a5 + 16, v22 + 1, 4);
    v22 = *(unsigned int *)(a5 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a5 + 4 * v22) = v20;
  ++*(_DWORD *)(a5 + 8);
  return sub_2222ED0(a5, a3);
}
