/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_54678
// Address: 0x00054678

//----- (00054678) --------------------------------------------------------
int __fastcall sub_54678(int a1, int a2)
{
  int v4; // r7
  int v5; // r6
  int v6; // r2

  v4 = *(_DWORD *)(a2 + 4);
  v5 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 84))(a1);
  if ( v5 > 0 )
  {
    while ( !(*(int (__fastcall **)(int, int, int))(*(_DWORD *)a1 + 68))(a1, a2, -1) )
      ;
    v6 = *(_DWORD *)(a2 + 4);
    if ( v6 != v4 )
    {
      v5 = -1;
      if ( (*(_DWORD *)(a2 + 16) & 0xFFFFFFF) != 3 )
        sub_17480(a1, "unexpected event from thread %d arrived (expected thread %d)\n", v6, v4);
    }
  }
  return v5;
}
