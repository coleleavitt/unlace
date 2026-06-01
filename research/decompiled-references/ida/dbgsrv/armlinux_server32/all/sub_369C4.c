/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_369C4
// Address: 0x000369C4

//----- (000369C4) --------------------------------------------------------
int __fastcall sub_369C4(int a1, int a2)
{
  unsigned int v3; // r1
  FILE *v4; // r2
  int v6; // [sp+0h] [bp-8h] BYREF

  v3 = *(_DWORD *)(a1 + 8);
  if ( v3 < dword_D49F0
    && (v4 = *(FILE **)(dword_D49EC + 4 * v3)) != nullptr
    && !sub_77B58(v4, &v6, 4, *(_DWORD *)(a1 + 32) != 0) )
  {
    *(_DWORD *)(a2 + 8) = v6;
  }
  else
  {
    *(_DWORD *)(a2 + 8) = -1;
  }
  return 0;
}
// D49EC: using guessed type int dword_D49EC;
// D49F0: using guessed type int dword_D49F0;
