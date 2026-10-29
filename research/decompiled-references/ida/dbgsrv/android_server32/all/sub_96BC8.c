/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_96BC8
// Address: 0x00096BC8

//----- (00096BC8) --------------------------------------------------------
int __fastcall sub_96BC8(_BYTE **a1, int a2)
{
  sub_93B8C(a2, a1[2], a1[3]);
  sub_93B8C(a2, "(", "");
  sub_923F8(a1[4], a2);
  return sub_93B8C(a2, ")", "");
}
