/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_96C80
// Address: 0x00096C80

//----- (00096C80) --------------------------------------------------------
int __fastcall sub_96C80(int a1, int a2)
{
  sub_923F8(*(unsigned __int8 **)(a1 + 8), a2);
  sub_93B8C(a2, "(", "");
  sub_96CC0((_DWORD *)(a1 + 12), a2);
  return sub_93B8C(a2, ")", "");
}
