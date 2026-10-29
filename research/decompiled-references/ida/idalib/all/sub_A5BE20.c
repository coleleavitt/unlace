__int64 __fastcall sub_A5BE20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rax
  unsigned __int64 v8; // rbp
  int v9; // r12d
  unsigned __int64 v10; // rcx
  __int64 v11; // rax
  unsigned __int64 v12; // rbp
  unsigned __int64 v13; // rcx
  __int64 v14; // rax

  if ( !a2 )
    BUG();
  v7 = *(unsigned int *)(a5 + 8);
  v8 = *(_QWORD *)(a2 - 8);
  v9 = *(_WORD *)(a2 - 12) >> 2;
  if ( v7 + 1 > (unsigned __int64)*(unsigned int *)(a5 + 12) )
  {
    sub_2237220(a5, a5 + 16, v7 + 1, 4);
    v7 = *(unsigned int *)(a5 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a5 + 4 * v7) = v9;
  v10 = *(unsigned int *)(a5 + 12);
  v11 = (unsigned int)(*(_DWORD *)(a5 + 8) + 1);
  *(_DWORD *)(a5 + 8) = v11;
  if ( v11 + 1 > v10 )
  {
    sub_2237220(a5, a5 + 16, v11 + 1, 4);
    v11 = *(unsigned int *)(a5 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a5 + 4 * v11) = v8;
  v12 = HIDWORD(v8);
  v13 = *(unsigned int *)(a5 + 12);
  v14 = (unsigned int)(*(_DWORD *)(a5 + 8) + 1);
  *(_DWORD *)(a5 + 8) = v14;
  if ( v14 + 1 > v13 )
  {
    sub_2237220(a5, a5 + 16, v14 + 1, 4);
    v14 = *(unsigned int *)(a5 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a5 + 4 * v14) = v12;
  ++*(_DWORD *)(a5 + 8);
  return sub_2222ED0(a5, a3);
}
