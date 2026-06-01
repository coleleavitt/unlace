/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6B4F0
// Address: 0x0006B4F0

//----- (0006B4F0) --------------------------------------------------------
int __fastcall sub_6B4F0(_DWORD *a1, int a2)
{
  int v4; // r3

  if ( (unsigned int)(a2 - 1) > 0x146 )
    return 0;
  v4 = dword_B15D4[2 * a2 + 1];
  *a1 = dword_B15D4[2 * a2];
  a1[1] = v4 + 1;
  return 1;
}
// B15D4: using guessed type int dword_B15D4[2];
