__int64 __fastcall sub_21D0980(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 a5)
{
  __int64 v8; // rax
  unsigned __int64 v9; // rcx
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  unsigned __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  unsigned __int64 v17; // rbp
  unsigned __int64 v18; // rcx
  __int64 result; // rax

  v8 = *(unsigned int *)(a1 + 8);
  if ( v8 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
  {
    sub_2237220(a1, a1 + 16, v8 + 1, 4);
    v8 = *(unsigned int *)(a1 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a1 + 4 * v8) = 2;
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
  *(_DWORD *)(*(_QWORD *)a1 + 4 * v12) = a2;
  v13 = *(unsigned int *)(a1 + 12);
  v14 = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
  *(_DWORD *)(a1 + 8) = v14;
  if ( v14 + 1 > v13 )
  {
    sub_2237220(a1, a1 + 16, v14 + 1, 4);
    v14 = *(unsigned int *)(a1 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a1 + 4 * v14) = HIDWORD(a2);
  ++*(_DWORD *)(a1 + 8);
  if ( a3 )
  {
    sub_2222BB0(a1, a4, a3);
    v15 = *(unsigned int *)(a1 + 8);
    v16 = v15 + 1;
    if ( v15 + 1 <= (unsigned __int64)*(unsigned int *)(a1 + 12) )
      goto LABEL_11;
  }
  else
  {
    sub_2222BB0(a1, 0, 0);
    v15 = *(unsigned int *)(a1 + 8);
    v16 = v15 + 1;
    if ( v15 + 1 <= (unsigned __int64)*(unsigned int *)(a1 + 12) )
      goto LABEL_11;
  }
  sub_2237220(a1, a1 + 16, v16, 4);
  v15 = *(unsigned int *)(a1 + 8);
LABEL_11:
  *(_DWORD *)(*(_QWORD *)a1 + 4 * v15) = a5;
  v17 = HIDWORD(a5);
  v18 = *(unsigned int *)(a1 + 12);
  result = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
  *(_DWORD *)(a1 + 8) = result;
  if ( result + 1 > v18 )
  {
    sub_2237220(a1, a1 + 16, result + 1, 4);
    result = *(unsigned int *)(a1 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a1 + 4 * result) = v17;
  ++*(_DWORD *)(a1 + 8);
  return result;
}
