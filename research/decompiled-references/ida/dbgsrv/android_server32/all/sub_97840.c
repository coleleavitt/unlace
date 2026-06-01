/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_97840
// Address: 0x00097840

//----- (00097840) --------------------------------------------------------
int __fastcall sub_97840(int a1, int a2)
{
  sub_93B8C(a2, "(", "");
  sub_923F8(*(unsigned __int8 **)(a1 + 8), a2);
  sub_93B8C(a2, ")[", "");
  sub_923F8(*(unsigned __int8 **)(a1 + 12), a2);
  return sub_93B8C(a2, "]", "");
}
