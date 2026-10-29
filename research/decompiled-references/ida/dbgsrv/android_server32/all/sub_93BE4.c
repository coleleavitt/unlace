/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_93BE4
// Address: 0x00093BE4

//----- (00093BE4) --------------------------------------------------------
int __fastcall sub_93BE4(int a1, int a2)
{
  sub_93B8C(a2, "construction vtable for ", "");
  sub_923F8(*(unsigned __int8 **)(a1 + 8), a2);
  sub_93B8C(a2, "-in-", "");
  return sub_923F8(*(unsigned __int8 **)(a1 + 12), a2);
}
