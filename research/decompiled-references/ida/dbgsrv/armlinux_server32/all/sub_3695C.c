/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3695C
// Address: 0x0003695C

//----- (0003695C) --------------------------------------------------------
int __fastcall sub_3695C(_DWORD *a1, int a2)
{
  unsigned int v3; // r1
  FILE *v4; // r2
  int v5; // r3
  __int16 v7; // [sp+2h] [bp-6h] BYREF

  v3 = a1[2];
  if ( v3 < dword_D49F0 && (v4 = *(FILE **)(dword_D49EC + 4 * v3)) != nullptr )
  {
    v5 = a1[14];
    v7 = a1[8];
    *(_DWORD *)(a2 + 8) = sub_77BD8(v4, (char *)&v7, 2u, v5 != 0);
  }
  else
  {
    *(_DWORD *)(a2 + 8) = -1;
  }
  return 0;
}
// D49EC: using guessed type int dword_D49EC;
// D49F0: using guessed type int dword_D49F0;
