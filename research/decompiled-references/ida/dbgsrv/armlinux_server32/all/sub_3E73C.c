/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3E73C
// Address: 0x0003E73C

//----- (0003E73C) --------------------------------------------------------
unsigned int __fastcall sub_3E73C(int *a1, int a2, unsigned int a3)
{
  int v3; // r3
  _BYTE *v5; // r1

  if ( a1[1] - a2 <= 3 )
  {
    if ( under_debugger )
      __und(0xFFu);
    sub_78C64(277);
  }
  v3 = *a1;
  *(_BYTE *)(v3 + a2) = a3;
  v5 = (_BYTE *)(a2 + v3);
  v5[1] = BYTE1(a3);
  v5[2] = BYTE2(a3);
  v5[3] = HIBYTE(a3);
  return HIBYTE(a3);
}
// D6C20: using guessed type char under_debugger;
