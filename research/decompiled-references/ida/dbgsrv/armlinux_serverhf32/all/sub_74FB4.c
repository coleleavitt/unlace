/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_74FB4
// Address: 0x00074FB4

//----- (00074FB4) --------------------------------------------------------
_DWORD *__fastcall sub_74FB4(int a1, int a2)
{
  int *v4; // r0

  v4 = (int *)sub_805CC(0x18u);
  v4[5] = a1;
  v4[2] = a2;
  v4[3] = 0;
  v4[4] = 0;
  *v4 = (int)&off_D0D10;
  return sub_74988(v4);
}
// D0D10: using guessed type _UNKNOWN *off_D0D10;
