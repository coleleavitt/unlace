__int64 __fastcall sub_A58040(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  int v5; // ebp
  int v6; // r12d
  unsigned __int64 v7; // rcx
  __int64 result; // rax

  if ( !a2 )
    BUG();
  v4 = *(unsigned int *)(a3 + 8);
  v5 = (*(_DWORD *)(a2 + 8) >> 1) & 0xFFFFFF;
  v6 = *(_BYTE *)(a2 + 8) & 1;
  if ( v4 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
  {
    sub_2237220(a3, a3 + 16, v4 + 1, 4);
    v4 = *(unsigned int *)(a3 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a3 + 4 * v4) = v6;
  v7 = *(unsigned int *)(a3 + 12);
  result = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
  *(_DWORD *)(a3 + 8) = result;
  if ( result + 1 > v7 )
  {
    sub_2237220(a3, a3 + 16, result + 1, 4);
    result = *(unsigned int *)(a3 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a3 + 4 * result) = v5;
  ++*(_DWORD *)(a3 + 8);
  return result;
}
