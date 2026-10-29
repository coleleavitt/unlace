/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_96D7C
// Address: 0x00096D7C

//----- (00096D7C) --------------------------------------------------------
int __fastcall sub_96D7C(int a1, int a2)
{
  sub_93B8C(a2, "(", "");
  sub_923F8(*(unsigned __int8 **)(a1 + 8), a2);
  sub_93B8C(a2, ")(", "");
  sub_96CC0((_DWORD *)(a1 + 12), a2);
  return sub_93B8C(a2, ")", "");
}
