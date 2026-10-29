/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3885C
// Address: 0x0003885C

//----- (0003885C) --------------------------------------------------------
int __fastcall sub_3885C(_DWORD *a1, int a2)
{
  unsigned int v3; // r1
  FILE *v4; // r5
  int v5; // r0
  __int16 v7; // [sp+0h] [bp-8h] BYREF

  v3 = a1[2];
  if ( dword_DE33C > v3 && (v4 = *(FILE **)(dword_DE338 + 4 * v3)) != nullptr )
  {
    v7 = a1[8];
    v5 = fwritebytes(v4, &v7, 2u, a1[14] != 0);
  }
  else
  {
    v5 = -1;
  }
  *(_DWORD *)(a2 + 8) = v5;
  return 0;
}
// DE338: using guessed type int dword_DE338;
// DE33C: using guessed type int dword_DE33C;
