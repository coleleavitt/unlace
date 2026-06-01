/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6B37C
// Address: 0x0006B37C

//----- (0006B37C) --------------------------------------------------------
int __fastcall sub_6B37C(_DWORD *a1, int a2)
{
  int v4; // r3

  if ( (unsigned int)(a2 - 1) > 0x146 )
    return 0;
  v4 = dword_B1498[2 * a2 + 1];
  *a1 = dword_B1498[2 * a2];
  a1[1] = v4 + 1;
  return 1;
}
// B1498: using guessed type int dword_B1498[2];
