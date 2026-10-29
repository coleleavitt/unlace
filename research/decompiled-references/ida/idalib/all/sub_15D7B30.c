__int64 __fastcall sub_15D7B30(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // rcx
  __int64 v7; // rax
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rcx
  __int64 result; // rax
  unsigned __int64 v11; // rbp

  v4 = *(unsigned int *)(a2 + 8);
  v5 = ((unsigned __int64)((*(_BYTE *)(a3 + 2) & 4) != 0) << 32) | 8;
  if ( v4 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
  {
    sub_2237220(a2, a2 + 16, v4 + 1, 8);
    v4 = *(unsigned int *)(a2 + 8);
  }
  *(_QWORD *)(*(_QWORD *)a2 + 8 * v4) = v5;
  v6 = *(unsigned int *)(a2 + 12);
  v7 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
  *(_DWORD *)(a2 + 8) = v7;
  v8 = ((unsigned __int64)((*(_BYTE *)(a3 + 2) & 4) != 0) << 32) | 9;
  if ( v7 + 1 > v6 )
  {
    sub_2237220(a2, a2 + 16, v7 + 1, 8);
    v7 = *(unsigned int *)(a2 + 8);
  }
  *(_QWORD *)(*(_QWORD *)a2 + 8 * v7) = v8;
  v9 = *(unsigned int *)(a2 + 12);
  result = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
  *(_DWORD *)(a2 + 8) = result;
  v11 = ((unsigned __int64)((*(_BYTE *)(a3 + 2) & 4) != 0) << 32) | 7;
  if ( result + 1 > v9 )
  {
    sub_2237220(a2, a2 + 16, result + 1, 8);
    result = *(unsigned int *)(a2 + 8);
  }
  *(_QWORD *)(*(_QWORD *)a2 + 8 * result) = v11;
  ++*(_DWORD *)(a2 + 8);
  return result;
}
