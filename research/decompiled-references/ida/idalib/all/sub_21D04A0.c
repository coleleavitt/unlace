__int64 __fastcall sub_21D04A0(__int64 a1, unsigned __int8 a2, __int64 a3, __int64 a4, unsigned __int64 a5)
{
  __int64 v8; // rax
  unsigned __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  unsigned __int64 v13; // rbp
  unsigned __int64 v14; // rcx
  __int64 result; // rax

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
  ++*(_DWORD *)(a1 + 8);
  if ( a3 )
  {
    sub_2222BB0(a1, a4, a3);
    v11 = *(unsigned int *)(a1 + 8);
    v12 = v11 + 1;
    if ( v11 + 1 <= (unsigned __int64)*(unsigned int *)(a1 + 12) )
      goto LABEL_7;
  }
  else
  {
    sub_2222BB0(a1, 0, 0);
    v11 = *(unsigned int *)(a1 + 8);
    v12 = v11 + 1;
    if ( v11 + 1 <= (unsigned __int64)*(unsigned int *)(a1 + 12) )
      goto LABEL_7;
  }
  sub_2237220(a1, a1 + 16, v12, 4);
  v11 = *(unsigned int *)(a1 + 8);
LABEL_7:
  *(_DWORD *)(*(_QWORD *)a1 + 4 * v11) = a5;
  v13 = HIDWORD(a5);
  v14 = *(unsigned int *)(a1 + 12);
  result = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
  *(_DWORD *)(a1 + 8) = result;
  if ( result + 1 > v14 )
  {
    sub_2237220(a1, a1 + 16, result + 1, 4);
    result = *(unsigned int *)(a1 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a1 + 4 * result) = v13;
  ++*(_DWORD *)(a1 + 8);
  return result;
}
