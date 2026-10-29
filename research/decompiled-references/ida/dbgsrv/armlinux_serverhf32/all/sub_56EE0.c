/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_56EE0
// Address: 0x00056EE0

//----- (00056EE0) --------------------------------------------------------
_BYTE *__fastcall sub_56EE0(int a1, int a2)
{
  _BYTE *v4; // r4
  _DWORD *v5; // r0

  v4 = sub_805CC(0x100u);
  sub_59834((int)v4, a2, a1);
  v4[96] = *(_BYTE *)(a1 + 59);
  v5 = sub_1AB7C();
  v5[4] = 1;
  sub_59938((int)v4, (int)v5);
  dword_D3B18 = (int)v4;
  return v4;
}
// D3B18: using guessed type int dword_D3B18;
