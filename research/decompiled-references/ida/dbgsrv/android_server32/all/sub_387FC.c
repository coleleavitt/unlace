/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_387FC
// Address: 0x000387FC

//----- (000387FC) --------------------------------------------------------
int __fastcall sub_387FC(int a1, int a2)
{
  int v3; // r7
  unsigned int v4; // r1
  FILE *v5; // r5
  int v7; // [sp+4h] [bp-8h] BYREF

  v3 = -1;
  v4 = *(_DWORD *)(a1 + 8);
  if ( dword_DE33C > v4 )
  {
    v5 = *(FILE **)(dword_DE338 + 4 * v4);
    if ( v5 )
    {
      if ( !freadbytes(v5, (char *)&v7, 4, *(_DWORD *)(a1 + 32) != 0) )
        v3 = v7;
    }
  }
  *(_DWORD *)(a2 + 8) = v3;
  return 0;
}
// DE338: using guessed type int dword_DE338;
// DE33C: using guessed type int dword_DE33C;
