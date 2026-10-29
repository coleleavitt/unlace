/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9793C
// Address: 0x0009793C

//----- (0009793C) --------------------------------------------------------
int __fastcall sub_9793C(unsigned __int8 **a1, int a2)
{
  unsigned __int8 *v4; // r0

  sub_9241E(a2, 91);
  sub_923F8(a1[2], a2);
  sub_93B8C(a2, " ... ", "");
  sub_923F8(a1[3], a2);
  sub_9241E(a2, 93);
  v4 = a1[4];
  if ( (unsigned __int8)(v4[4] - 43) >= 2u )
  {
    sub_93B8C(a2, " = ", "");
    v4 = a1[4];
  }
  return sub_923F8(v4, a2);
}
