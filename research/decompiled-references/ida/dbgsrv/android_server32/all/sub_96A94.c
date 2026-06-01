/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_96A94
// Address: 0x00096A94

//----- (00096A94) --------------------------------------------------------
int __fastcall sub_96A94(unsigned __int8 **a1, int a2)
{
  unsigned __int8 **v4; // r8
  __int64 v6; // [sp+8h] [bp-28h] BYREF
  int v7; // [sp+10h] [bp-20h]

  v4 = a1 + 3;
  HIDWORD(v6) = "";
  LODWORD(v6) = ">";
  if ( sub_96B94(a1 + 3, &v6) )
    sub_93B8C(a2, "(", "");
  sub_93B8C(a2, "(", "");
  sub_923F8(a1[2], a2);
  sub_93B8C(a2, ") ", "");
  sub_93B8C(a2, a1[3], a1[4]);
  sub_93B8C(a2, " (", "");
  sub_923F8(a1[5], a2);
  sub_93B8C(a2, ")", "");
  HIDWORD(v6) = "";
  LODWORD(v6) = ">";
  if ( sub_96B94(v4, &v6) )
    return sub_93B8C(a2, ")", "");
  else
    return _stack_chk_guard - v7;
}
