/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_96DDC
// Address: 0x00096DDC

//----- (00096DDC) --------------------------------------------------------
int __fastcall sub_96DDC(int a1, int a2)
{
  if ( *(_BYTE *)(a1 + 12) )
    sub_93B8C(a2, "::", "");
  sub_93B8C(a2, "delete", "");
  if ( *(_BYTE *)(a1 + 13) )
    sub_93B8C(a2, "[] ", "");
  return sub_923F8(*(unsigned __int8 **)(a1 + 8), a2);
}
