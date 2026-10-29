/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_978D8
// Address: 0x000978D8

//----- (000978D8) --------------------------------------------------------
int __fastcall sub_978D8(int a1, int a2)
{
  unsigned __int8 *v4; // r0

  if ( *(_BYTE *)(a1 + 16) )
  {
    sub_9241E(a2, 91);
    sub_923F8(*(unsigned __int8 **)(a1 + 8), a2);
    sub_9241E(a2, 93);
  }
  else
  {
    sub_9241E(a2, 46);
    sub_923F8(*(unsigned __int8 **)(a1 + 8), a2);
  }
  v4 = *(unsigned __int8 **)(a1 + 12);
  if ( (unsigned __int8)(v4[4] - 43) >= 2u )
  {
    sub_93B8C(a2, " = ", "");
    v4 = *(unsigned __int8 **)(a1 + 12);
  }
  return sub_923F8(v4, a2);
}
