/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3866C
// Address: 0x0003866C

//----- (0003866C) --------------------------------------------------------
int __fastcall sub_3866C(_DWORD *a1, int a2)
{
  unsigned int v4; // r2
  int v5; // r0
  FILE *v6; // r5
  int whence; // [sp+0h] [bp-8h] BYREF

  v4 = a1[2];
  v5 = -1;
  if ( dword_DE33C > v4 )
  {
    v6 = *(FILE **)(dword_DE338 + 4 * v4);
    if ( v6 )
      v5 = qfseek(v6, (int)&whence, a1[8], a1[9], a1[14]);
  }
  *(_DWORD *)(a2 + 8) = v5;
  return 0;
}
// DE338: using guessed type int dword_DE338;
// DE33C: using guessed type int dword_DE33C;
