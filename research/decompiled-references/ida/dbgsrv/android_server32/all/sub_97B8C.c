/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_97B8C
// Address: 0x00097B8C

//----- (00097B8C) --------------------------------------------------------
int __fastcall sub_97B8C(unsigned __int8 **a1, int a2)
{
  sub_93B8C(a2, "(", "");
  sub_923F8(a1[2], a2);
  sub_93B8C(a2, ") ? (", "");
  sub_923F8(a1[3], a2);
  sub_93B8C(a2, ") : (", "");
  sub_923F8(a1[4], a2);
  return sub_93B8C(a2, ")", "");
}
