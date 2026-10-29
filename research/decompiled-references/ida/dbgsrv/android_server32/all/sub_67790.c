/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_67790
// Address: 0x00067790

//----- (00067790) --------------------------------------------------------
_BYTE *__fastcall sub_67790(int a1, int a2)
{
  _BYTE *v4; // r4
  _DWORD *v5; // r0

  v4 = operator new(0x100u);
  sub_5ABC8((int)v4, a2, a1);
  v4[96] = *(_BYTE *)(a1 + 59);
  v5 = sub_24FF0();
  v5[4] = 1;
  sub_5B2FC((int)v4, (int)v5);
  dword_DE4A8 = (int)v4;
  return v4;
}
// DE4A8: using guessed type int dword_DE4A8;
