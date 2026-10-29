__int64 __fastcall sub_15D70C0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // rcx
  __int64 result; // rax
  unsigned __int64 v8; // rbp

  v4 = *(unsigned int *)(a2 + 8);
  v5 = ((unsigned __int64)((*(_BYTE *)(a3 + 2) & 4) != 0) << 32) | 9;
  if ( v4 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
  {
    sub_2237220(a2, a2 + 16, v4 + 1, 8);
    v4 = *(unsigned int *)(a2 + 8);
  }
  *(_QWORD *)(*(_QWORD *)a2 + 8 * v4) = v5;
  v6 = *(unsigned int *)(a2 + 12);
  result = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
  *(_DWORD *)(a2 + 8) = result;
  v8 = ((unsigned __int64)((*(_BYTE *)(a3 + 2) & 4) != 0) << 32) | 0xD;
  if ( result + 1 > v6 )
  {
    sub_2237220(a2, a2 + 16, result + 1, 8);
    result = *(unsigned int *)(a2 + 8);
  }
  *(_QWORD *)(*(_QWORD *)a2 + 8 * result) = v8;
  ++*(_DWORD *)(a2 + 8);
  return result;
}
