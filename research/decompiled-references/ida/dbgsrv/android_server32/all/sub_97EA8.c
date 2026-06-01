/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_97EA8
// Address: 0x00097EA8

//----- (00097EA8) --------------------------------------------------------
int __fastcall sub_97EA8(int a1, int a2)
{
  sub_93B8C(a2, "'lambda", "");
  sub_93B8C(a2, *(_BYTE **)(a1 + 16), *(_BYTE **)(a1 + 20));
  sub_93B8C(a2, "'(", "");
  sub_96CC0((_DWORD *)(a1 + 8), a2);
  return sub_93B8C(a2, ")", "");
}
