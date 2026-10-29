__int64 __fastcall sub_21D1360(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5, unsigned __int8 a6)
{
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  unsigned __int64 v13; // rcx
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  __int64 v16; // rax
  unsigned __int64 v17; // rcx
  __int64 v18; // rax
  unsigned __int64 v19; // r12
  unsigned __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned __int64 v23; // rcx
  __int64 result; // rax

  v10 = *(unsigned int *)(a1 + 8);
  if ( v10 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
  {
    sub_2237220(a1, a1 + 16, v10 + 1, 4);
    v10 = *(unsigned int *)(a1 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a1 + 4 * v10) = 69;
  v11 = *(unsigned int *)(a1 + 12);
  v12 = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
  *(_DWORD *)(a1 + 8) = v12;
  if ( v12 + 1 > v11 )
  {
    sub_2237220(a1, a1 + 16, v12 + 1, 4);
    v12 = *(unsigned int *)(a1 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a1 + 4 * v12) = 0;
  v13 = *(unsigned int *)(a1 + 12);
  v14 = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
  *(_DWORD *)(a1 + 8) = v14;
  if ( v14 + 1 > v13 )
  {
    sub_2237220(a1, a1 + 16, v14 + 1, 4);
    v14 = *(unsigned int *)(a1 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a1 + 4 * v14) = a2;
  v15 = *(unsigned int *)(a1 + 12);
  v16 = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
  *(_DWORD *)(a1 + 8) = v16;
  if ( v16 + 1 > v15 )
  {
    sub_2237220(a1, a1 + 16, v16 + 1, 4);
    v16 = *(unsigned int *)(a1 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a1 + 4 * v16) = HIDWORD(a2);
  v17 = *(unsigned int *)(a1 + 12);
  v18 = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
  *(_DWORD *)(a1 + 8) = v18;
  if ( v18 + 1 > v17 )
  {
    sub_2237220(a1, a1 + 16, v18 + 1, 4);
    v18 = *(unsigned int *)(a1 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a1 + 4 * v18) = a3;
  v19 = HIDWORD(a3);
  v20 = *(unsigned int *)(a1 + 12);
  v21 = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
  *(_DWORD *)(a1 + 8) = v21;
  if ( v21 + 1 > v20 )
  {
    sub_2237220(a1, a1 + 16, v21 + 1, 4);
    v21 = *(unsigned int *)(a1 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a1 + 4 * v21) = v19;
  ++*(_DWORD *)(a1 + 8);
  if ( a4 )
    sub_2222BB0(a1, a5, a4);
  else
    sub_2222BB0(a1, 0, 0);
  v22 = *(unsigned int *)(a1 + 8);
  if ( v22 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
  {
    sub_2237220(a1, a1 + 16, v22 + 1, 4);
    v22 = *(unsigned int *)(a1 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a1 + 4 * v22) = a6;
  v23 = *(unsigned int *)(a1 + 12);
  result = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
  *(_DWORD *)(a1 + 8) = result;
  if ( result + 1 > v23 )
  {
    sub_2237220(a1, a1 + 16, result + 1, 4);
    result = *(unsigned int *)(a1 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a1 + 4 * result) = 0;
  ++*(_DWORD *)(a1 + 8);
  return result;
}
