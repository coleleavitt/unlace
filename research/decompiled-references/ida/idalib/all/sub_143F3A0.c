__int64 __fastcall sub_143F3A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rax
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // r13
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  unsigned __int64 v13; // rcx
  __int64 v14; // rax
  unsigned __int64 v15; // rbp
  unsigned __int64 v16; // rcx
  __int64 v17; // rax

  v7 = *(unsigned int *)(a5 + 8);
  v8 = *(_QWORD *)(a2 + 8);
  v9 = *(_QWORD *)(a2 + 24);
  if ( v7 + 1 > (unsigned __int64)*(unsigned int *)(a5 + 12) )
  {
    sub_2237220(a5, a5 + 16, v7 + 1, 4);
    v7 = *(unsigned int *)(a5 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a5 + 4 * v7) = v9;
  v10 = HIDWORD(v9);
  v11 = *(unsigned int *)(a5 + 12);
  v12 = (unsigned int)(*(_DWORD *)(a5 + 8) + 1);
  *(_DWORD *)(a5 + 8) = v12;
  if ( v12 + 1 > v11 )
  {
    sub_2237220(a5, a5 + 16, v12 + 1, 4);
    v12 = *(unsigned int *)(a5 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a5 + 4 * v12) = v10;
  v13 = *(unsigned int *)(a5 + 12);
  v14 = (unsigned int)(*(_DWORD *)(a5 + 8) + 1);
  *(_DWORD *)(a5 + 8) = v14;
  if ( v14 + 1 > v13 )
  {
    sub_2237220(a5, a5 + 16, v14 + 1, 4);
    v14 = *(unsigned int *)(a5 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a5 + 4 * v14) = v8;
  v15 = HIDWORD(v8);
  v16 = *(unsigned int *)(a5 + 12);
  v17 = (unsigned int)(*(_DWORD *)(a5 + 8) + 1);
  *(_DWORD *)(a5 + 8) = v17;
  if ( v17 + 1 > v16 )
  {
    sub_2237220(a5, a5 + 16, v17 + 1, 4);
    v17 = *(unsigned int *)(a5 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a5 + 4 * v17) = v15;
  ++*(_DWORD *)(a5 + 8);
  return sub_2222ED0(a5, a3);
}
