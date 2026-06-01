/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_65EB0
// Address: 0x00065EB0

//----- (00065EB0) --------------------------------------------------------
int __fastcall sub_65EB0(int a1, int a2)
{
  int v4; // r4
  int v5; // r2
  int v7; // [sp+4h] [bp-4h]

  v7 = *(_DWORD *)(a2 + 4);
  v4 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 84))(a1);
  if ( v4 >= 1 )
  {
    while ( !(*(int (__fastcall **)(int, int, int))(*(_DWORD *)a1 + 68))(a1, a2, -1) )
      ;
    v5 = *(_DWORD *)(a2 + 4);
    if ( v7 != v5 )
    {
      if ( (*(_DWORD *)(a2 + 16) & 0xFFFFFFF) != 3 )
        sub_1BC48(a1, "unexpected event from thread %d arrived (expected thread %d)\n", v5, v7);
      return -1;
    }
  }
  return v4;
}
