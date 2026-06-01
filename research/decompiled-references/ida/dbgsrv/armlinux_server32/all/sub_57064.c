/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_57064
// Address: 0x00057064

//----- (00057064) --------------------------------------------------------
_BYTE *__fastcall sub_57064(int a1, int a2)
{
  _BYTE *v4; // r4
  _DWORD *v5; // r0

  v4 = sub_808A4(0x100u);
  sub_599B8((int)v4, a2, a1);
  v4[96] = *(_BYTE *)(a1 + 59);
  v5 = sub_1AD20();
  v5[4] = 1;
  sub_59ABC((int)v4, (int)v5);
  dword_D4B38 = (int)v4;
  return v4;
}
// D4B38: using guessed type int dword_D4B38;
