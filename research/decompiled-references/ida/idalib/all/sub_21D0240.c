__int64 __fastcall sub_21D0240(__int64 a1, unsigned __int8 a2, unsigned __int64 a3)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rcx
  __int64 v6; // rax
  unsigned __int64 v7; // rcx
  __int64 v8; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  __int64 result; // rax

  v4 = *(unsigned int *)(a1 + 8);
  if ( v4 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
  {
    sub_2237220(a1, a1 + 16, v4 + 1, 4);
    v4 = *(unsigned int *)(a1 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a1 + 4 * v4) = a2;
  v5 = *(unsigned int *)(a1 + 12);
  v6 = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
  *(_DWORD *)(a1 + 8) = v6;
  if ( v6 + 1 > v5 )
  {
    sub_2237220(a1, a1 + 16, v6 + 1, 4);
    v6 = *(unsigned int *)(a1 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a1 + 4 * v6) = 0;
  v7 = *(unsigned int *)(a1 + 12);
  v8 = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
  *(_DWORD *)(a1 + 8) = v8;
  if ( v8 + 1 > v7 )
  {
    sub_2237220(a1, a1 + 16, v8 + 1, 4);
    v8 = *(unsigned int *)(a1 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a1 + 4 * v8) = a3;
  v9 = HIDWORD(a3);
  v10 = *(unsigned int *)(a1 + 12);
  result = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
  *(_DWORD *)(a1 + 8) = result;
  if ( result + 1 > v10 )
  {
    sub_2237220(a1, a1 + 16, result + 1, 4);
    result = *(unsigned int *)(a1 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a1 + 4 * result) = v9;
  ++*(_DWORD *)(a1 + 8);
  return result;
}
