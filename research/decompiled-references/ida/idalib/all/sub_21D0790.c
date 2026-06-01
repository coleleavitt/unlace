__int64 __fastcall sub_21D0790(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int8 a6)
{
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  unsigned __int64 v15; // r12
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  unsigned __int64 v18; // rcx
  __int64 v19; // rax
  unsigned __int64 v20; // rcx
  __int64 result; // rax

  v10 = *(unsigned int *)(a1 + 8);
  if ( v10 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
  {
    sub_2237220(a1, a1 + 16, v10 + 1, 4);
    v10 = *(unsigned int *)(a1 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a1 + 4 * v10) = a2;
  v11 = *(unsigned int *)(a1 + 12);
  v12 = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
  *(_DWORD *)(a1 + 8) = v12;
  if ( v12 + 1 > v11 )
  {
    sub_2237220(a1, a1 + 16, v12 + 1, 4);
    v12 = *(unsigned int *)(a1 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a1 + 4 * v12) = 0;
  ++*(_DWORD *)(a1 + 8);
  if ( a3 )
  {
    sub_2222BB0(a1, a4, a3);
    v13 = *(unsigned int *)(a1 + 8);
    v14 = v13 + 1;
    if ( v13 + 1 <= (unsigned __int64)*(unsigned int *)(a1 + 12) )
      goto LABEL_7;
  }
  else
  {
    sub_2222BB0(a1, 0, 0);
    v13 = *(unsigned int *)(a1 + 8);
    v14 = v13 + 1;
    if ( v13 + 1 <= (unsigned __int64)*(unsigned int *)(a1 + 12) )
      goto LABEL_7;
  }
  sub_2237220(a1, a1 + 16, v14, 4);
  v13 = *(unsigned int *)(a1 + 8);
LABEL_7:
  *(_DWORD *)(*(_QWORD *)a1 + 4 * v13) = a5;
  v15 = HIDWORD(a5);
  v16 = *(unsigned int *)(a1 + 12);
  v17 = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
  *(_DWORD *)(a1 + 8) = v17;
  if ( v17 + 1 > v16 )
  {
    sub_2237220(a1, a1 + 16, v17 + 1, 4);
    v17 = *(unsigned int *)(a1 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a1 + 4 * v17) = v15;
  v18 = *(unsigned int *)(a1 + 12);
  v19 = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
  *(_DWORD *)(a1 + 8) = v19;
  if ( v19 + 1 > v18 )
  {
    sub_2237220(a1, a1 + 16, v19 + 1, 4);
    v19 = *(unsigned int *)(a1 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a1 + 4 * v19) = a6;
  v20 = *(unsigned int *)(a1 + 12);
  result = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
  *(_DWORD *)(a1 + 8) = result;
  if ( result + 1 > v20 )
  {
    sub_2237220(a1, a1 + 16, result + 1, 4);
    result = *(unsigned int *)(a1 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a1 + 4 * result) = 0;
  ++*(_DWORD *)(a1 + 8);
  return result;
}
