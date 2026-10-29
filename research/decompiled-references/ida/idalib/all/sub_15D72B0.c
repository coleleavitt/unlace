__int64 __fastcall sub_15D72B0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rcx
  __int64 result; // rax

  v2 = *(unsigned int *)(a2 + 8);
  if ( v2 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
  {
    sub_2237220(a2, a2 + 16, v2 + 1, 8);
    v2 = *(unsigned int *)(a2 + 8);
  }
  *(_QWORD *)(*(_QWORD *)a2 + 8 * v2) = 0x100000013LL;
  v3 = *(unsigned int *)(a2 + 12);
  result = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
  *(_DWORD *)(a2 + 8) = result;
  if ( result + 1 > v3 )
  {
    sub_2237220(a2, a2 + 16, result + 1, 8);
    result = *(unsigned int *)(a2 + 8);
  }
  *(_QWORD *)(*(_QWORD *)a2 + 8 * result) = 0x100000004LL;
  ++*(_DWORD *)(a2 + 8);
  return result;
}
