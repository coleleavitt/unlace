/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44AC60
// Address: 0x0044AC60

//----- (0044AC60) --------------------------------------------------------
int __thiscall sub_44AC60(int this, char a2, int a3)
{
  sub_44B790((_BYTE *)this, a2, a3, 0, 0);
  *(_DWORD *)this = &off_48EE14;
  *(_WORD *)(this + 52) = 0;
  return this;
}
// 48EE14: using guessed type _UNKNOWN *off_48EE14;
