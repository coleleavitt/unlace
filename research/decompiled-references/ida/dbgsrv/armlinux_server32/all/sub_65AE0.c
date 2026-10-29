/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_65AE0
// Address: 0x00065AE0

//----- (00065AE0) --------------------------------------------------------
int __fastcall sub_65AE0(int a1)
{
  _DWORD *v2; // r4

  v2 = sub_808A4(8u);
  sub_6A4AC(v2);
  v2[1] = a1;
  *v2 = &off_D14C0;
  return sub_6A604();
}
// D14C0: using guessed type _UNKNOWN *off_D14C0;
