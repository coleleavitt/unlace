__int64 __fastcall sub_15D7870(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rcx
  __int64 v6; // rax
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // rcx
  __int64 result; // rax
  unsigned __int64 v10; // rbp

  v4 = *(unsigned int *)(a2 + 8);
  if ( v4 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
  {
    sub_2237220(a2, a2 + 16, v4 + 1, 8);
    v4 = *(unsigned int *)(a2 + 8);
  }
  *(_QWORD *)(*(_QWORD *)a2 + 8 * v4) = 0x100000004LL;
  v5 = *(unsigned int *)(a2 + 12);
  v6 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
  *(_DWORD *)(a2 + 8) = v6;
  v7 = ((unsigned __int64)((*(_BYTE *)(a3 + 2) & 4) != 0) << 32) | 0xA;
  if ( v6 + 1 > v5 )
  {
    sub_2237220(a2, a2 + 16, v6 + 1, 8);
    v6 = *(unsigned int *)(a2 + 8);
  }
  *(_QWORD *)(*(_QWORD *)a2 + 8 * v6) = v7;
  v8 = *(unsigned int *)(a2 + 12);
  result = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
  *(_DWORD *)(a2 + 8) = result;
  v10 = (unsigned __int64)((*(_BYTE *)(a3 + 20) & 0x40) != 0) << 32;
  if ( result + 1 > v8 )
  {
    sub_2237220(a2, a2 + 16, result + 1, 8);
    result = *(unsigned int *)(a2 + 8);
  }
  *(_QWORD *)(*(_QWORD *)a2 + 8 * result) = v10;
  ++*(_DWORD *)(a2 + 8);
  return result;
}
