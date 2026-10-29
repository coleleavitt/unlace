__int64 __fastcall sub_21D0350(__int64 a1, unsigned __int8 a2, unsigned __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v8; // rax
  unsigned __int64 v9; // rcx
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  unsigned __int64 v13; // rbp
  unsigned __int64 v14; // rcx
  __int64 v15; // rax

  v8 = *(unsigned int *)(a1 + 8);
  if ( v8 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
  {
    sub_2237220(a1, a1 + 16, v8 + 1, 4);
    v8 = *(unsigned int *)(a1 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a1 + 4 * v8) = a2;
  v9 = *(unsigned int *)(a1 + 12);
  v10 = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
  *(_DWORD *)(a1 + 8) = v10;
  if ( v10 + 1 > v9 )
  {
    sub_2237220(a1, a1 + 16, v10 + 1, 4);
    v10 = *(unsigned int *)(a1 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a1 + 4 * v10) = 0;
  v11 = *(unsigned int *)(a1 + 12);
  v12 = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
  *(_DWORD *)(a1 + 8) = v12;
  if ( v12 + 1 > v11 )
  {
    sub_2237220(a1, a1 + 16, v12 + 1, 4);
    v12 = *(unsigned int *)(a1 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a1 + 4 * v12) = a3;
  v13 = HIDWORD(a3);
  v14 = *(unsigned int *)(a1 + 12);
  v15 = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
  *(_DWORD *)(a1 + 8) = v15;
  if ( v15 + 1 > v14 )
  {
    sub_2237220(a1, a1 + 16, v15 + 1, 4);
    v15 = *(unsigned int *)(a1 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a1 + 4 * v15) = v13;
  ++*(_DWORD *)(a1 + 8);
  if ( a4 )
    return sub_2222BB0(a1, a5, a4);
  else
    return sub_2222BB0(a1, 0, 0);
}
