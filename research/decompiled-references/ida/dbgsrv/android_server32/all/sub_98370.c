/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_98370
// Address: 0x00098370

//----- (00098370) --------------------------------------------------------
int __fastcall sub_98370(unsigned __int8 **a1, int a2)
{
  sub_923F8(a1[2], a2);
  sub_93B8C(a2, " (", "");
  sub_93B8C(a2, a1[3], a1[4]);
  return sub_93B8C(a2, ")", "");
}
