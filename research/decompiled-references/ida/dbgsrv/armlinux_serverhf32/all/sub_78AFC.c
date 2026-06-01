/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_78AFC
// Address: 0x00078AFC

//----- (00078AFC) --------------------------------------------------------
void __fastcall __noreturn sub_78AFC(int a1)
{
  char *v2; // r0

  if ( sub_70E98() )
  {
    v2 = sub_8117C(8);
    *((_DWORD *)v2 + 1) = a1;
    *(_DWORD *)v2 = &off_D1BC8;
    sub_80D98((int)v2, (int)&`typeinfo for'interr_exc_t, (int)sub_78188);
  }
  sub_16FE4("Oops! internal error %d occurred.", a1);
}
// D17C8: using guessed type int *`typeinfo for'interr_exc_t;
// D1BC8: using guessed type _UNKNOWN *off_D1BC8;
