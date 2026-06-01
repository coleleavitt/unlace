/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3871C
// Address: 0x0003871C

//----- (0003871C) --------------------------------------------------------
int __fastcall sub_3871C(int a1, int a2)
{
  unsigned int v4; // r1
  int v5; // r0
  FILE *v6; // r1

  v4 = *(_DWORD *)(a1 + 32);
  v5 = -1;
  if ( dword_DE33C > v4 )
  {
    v6 = *(FILE **)(dword_DE338 + 4 * v4);
    if ( v6 )
      v5 = qfputc(*(unsigned __int8 *)(a1 + 8), v6);
  }
  *(_DWORD *)(a2 + 8) = v5;
  return 0;
}
// DE338: using guessed type int dword_DE338;
// DE33C: using guessed type int dword_DE33C;
