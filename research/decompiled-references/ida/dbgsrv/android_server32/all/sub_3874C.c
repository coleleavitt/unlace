/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3874C
// Address: 0x0003874C

//----- (0003874C) --------------------------------------------------------
int __fastcall sub_3874C(int a1, int a2)
{
  unsigned int v4; // r0
  int v5; // r1
  int *v6; // r4
  int v7; // r0
  int *v8; // r3

  v4 = *(_DWORD *)(a1 + 8);
  if ( dword_DE33C <= v4 )
  {
    v8 = (int *)(a2 + 8);
    v7 = -1;
  }
  else
  {
    v5 = *(_DWORD *)(dword_DE338 + 4 * v4);
    v6 = (int *)(a2 + 8);
    v7 = -1;
    if ( v5 )
    {
      --*(_DWORD *)(a2 + 8);
      sub_3E2D0((int)sub_38B04, v5, a1 + 24, a2);
    }
    v8 = v6;
  }
  *v8 = v7;
  return 0;
}
// 3878A: variable 'v7' is possibly undefined
// DE338: using guessed type int dword_DE338;
// DE33C: using guessed type int dword_DE33C;
