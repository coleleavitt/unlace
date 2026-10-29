__int64 __fastcall sub_21D05E0(__int64 a1, unsigned __int8 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 v6; // rax
  unsigned __int64 v7; // rcx
  __int64 v8; // rax
  unsigned __int64 v9; // rcx
  __int64 v10; // rax
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // rcx
  __int64 v13; // rax
  unsigned __int64 v14; // rcx
  __int64 v15; // rax
  unsigned __int64 v16; // rbp
  unsigned __int64 v17; // rcx
  __int64 result; // rax

  v6 = *(unsigned int *)(a1 + 8);
  if ( v6 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
  {
    sub_2237220(a1, a1 + 16, v6 + 1, 4);
    v6 = *(unsigned int *)(a1 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a1 + 4 * v6) = a2;
  v7 = *(unsigned int *)(a1 + 12);
  v8 = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
  *(_DWORD *)(a1 + 8) = v8;
  if ( v8 + 1 > v7 )
  {
    sub_2237220(a1, a1 + 16, v8 + 1, 4);
    v8 = *(unsigned int *)(a1 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a1 + 4 * v8) = 0;
  v9 = *(unsigned int *)(a1 + 12);
  v10 = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
  *(_DWORD *)(a1 + 8) = v10;
  if ( v10 + 1 > v9 )
  {
    sub_2237220(a1, a1 + 16, v10 + 1, 4);
    v10 = *(unsigned int *)(a1 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a1 + 4 * v10) = a3;
  v11 = HIDWORD(a3);
  v12 = *(unsigned int *)(a1 + 12);
  v13 = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
  *(_DWORD *)(a1 + 8) = v13;
  if ( v13 + 1 > v12 )
  {
    sub_2237220(a1, a1 + 16, v13 + 1, 4);
    v13 = *(unsigned int *)(a1 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a1 + 4 * v13) = v11;
  v14 = *(unsigned int *)(a1 + 12);
  v15 = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
  *(_DWORD *)(a1 + 8) = v15;
  if ( v15 + 1 > v14 )
  {
    sub_2237220(a1, a1 + 16, v15 + 1, 4);
    v15 = *(unsigned int *)(a1 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a1 + 4 * v15) = a4;
  v16 = HIDWORD(a4);
  v17 = *(unsigned int *)(a1 + 12);
  result = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
  *(_DWORD *)(a1 + 8) = result;
  if ( result + 1 > v17 )
  {
    sub_2237220(a1, a1 + 16, result + 1, 4);
    result = *(unsigned int *)(a1 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a1 + 4 * result) = v16;
  ++*(_DWORD *)(a1 + 8);
  return result;
}
