__int64 __fastcall sub_220C670(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // r12d

  v2 = *(unsigned int *)(a2 + 8);
  v3 = *(unsigned __int8 *)(a1 + 12);
  if ( v2 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
  {
    sub_2237220(a2, a2 + 16, v2 + 1, 4);
    v2 = *(unsigned int *)(a2 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a2 + 4 * v2) = v3;
  ++*(_DWORD *)(a2 + 8);
  return sub_2205760((__int64 *)a1, a2);
}
