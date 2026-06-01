__int64 __fastcall sub_21D15C0(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6)
{
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  unsigned __int64 v13; // rcx
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  unsigned __int64 v19; // r12
  unsigned __int64 v20; // rcx
  __int64 v21; // rax
  unsigned __int64 v22; // rcx
  __int64 v23; // rax
  unsigned __int64 v24; // rbp
  unsigned __int64 v25; // rcx
  __int64 result; // rax

  v10 = *(unsigned int *)(a1 + 8);
  if ( v10 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
  {
    sub_2237220(a1, a1 + 16, v10 + 1, 4);
    v10 = *(unsigned int *)(a1 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a1 + 4 * v10) = 71;
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
  *(_DWORD *)(*(_QWORD *)a1 + 4 * v16) = 0;
  ++*(_DWORD *)(a1 + 8);
  if ( a3 )
  {
    sub_2222BB0(a1, a4, a3);
    v17 = *(unsigned int *)(a1 + 8);
    v18 = v17 + 1;
    if ( v17 + 1 <= (unsigned __int64)*(unsigned int *)(a1 + 12) )
      goto LABEL_11;
  }
  else
  {
    sub_2222BB0(a1, 0, 0);
    v17 = *(unsigned int *)(a1 + 8);
    v18 = v17 + 1;
    if ( v17 + 1 <= (unsigned __int64)*(unsigned int *)(a1 + 12) )
      goto LABEL_11;
  }
  sub_2237220(a1, a1 + 16, v18, 4);
  v17 = *(unsigned int *)(a1 + 8);
LABEL_11:
  *(_DWORD *)(*(_QWORD *)a1 + 4 * v17) = a5;
  v19 = HIDWORD(a5);
  v20 = *(unsigned int *)(a1 + 12);
  v21 = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
  *(_DWORD *)(a1 + 8) = v21;
  if ( v21 + 1 > v20 )
  {
    sub_2237220(a1, a1 + 16, v21 + 1, 4);
    v21 = *(unsigned int *)(a1 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a1 + 4 * v21) = v19;
  v22 = *(unsigned int *)(a1 + 12);
  v23 = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
  *(_DWORD *)(a1 + 8) = v23;
  if ( v23 + 1 > v22 )
  {
    sub_2237220(a1, a1 + 16, v23 + 1, 4);
    v23 = *(unsigned int *)(a1 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a1 + 4 * v23) = a6;
  v24 = HIDWORD(a6);
  v25 = *(unsigned int *)(a1 + 12);
  result = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
  *(_DWORD *)(a1 + 8) = result;
  if ( result + 1 > v25 )
  {
    sub_2237220(a1, a1 + 16, result + 1, 4);
    result = *(unsigned int *)(a1 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a1 + 4 * result) = v24;
  ++*(_DWORD *)(a1 + 8);
  return result;
}
