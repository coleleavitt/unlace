/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_65F0C
// Address: 0x00065F0C

//----- (00065F0C) --------------------------------------------------------
int __fastcall sub_65F0C(int a1, int a2)
{
  int v4; // r0
  int v5; // r6
  int v6; // r2
  int v8; // [sp+0h] [bp-4h]

  v4 = (*(int (__fastcall **)(int, _DWORD, int))(*(_DWORD *)a1 + 108))(a1, *(_DWORD *)(a2 + 4), 1);
  if ( v4 < 1 )
    return v4;
  v8 = *(_DWORD *)(a2 + 4);
  v5 = (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 84))(a1, a2);
  if ( v5 >= 1 )
  {
    while ( !(*(int (__fastcall **)(int, int, int))(*(_DWORD *)a1 + 68))(a1, a2, -1) )
      ;
    v6 = *(_DWORD *)(a2 + 4);
    if ( v8 != v6 )
    {
      if ( (*(_DWORD *)(a2 + 16) & 0xFFFFFFF) != 3 )
        sub_1BC48(a1, "unexpected event from thread %d arrived (expected thread %d)\n", v6, v8);
      return -1;
    }
  }
  return v5;
}
