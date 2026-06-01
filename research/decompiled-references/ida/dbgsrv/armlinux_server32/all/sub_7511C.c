/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7511C
// Address: 0x0007511C

//----- (0007511C) --------------------------------------------------------
_DWORD *__fastcall sub_7511C(int a1, int a2)
{
  int *v4; // r0

  v4 = (int *)sub_808A4(0x18u);
  v4[5] = a1;
  v4[2] = a2;
  v4[3] = 0;
  v4[4] = 0;
  *v4 = (int)&off_D1D10;
  return sub_74AF4(v4);
}
// D1D10: using guessed type _UNKNOWN *off_D1D10;
