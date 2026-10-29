/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_78C64
// Address: 0x00078C64

//----- (00078C64) --------------------------------------------------------
void __fastcall __noreturn sub_78C64(int a1)
{
  char *v2; // r0

  if ( sub_71004() )
  {
    v2 = sub_807D4(8);
    *((_DWORD *)v2 + 1) = a1;
    *(_DWORD *)v2 = &off_D2BC8;
    sub_8109C((int)v2, (int)&`typeinfo for'interr_exc_t, (int)sub_782F0);
  }
  sub_17188("Oops! internal error %d occurred.", a1);
}
// D27C8: using guessed type int *`typeinfo for'interr_exc_t;
// D2BC8: using guessed type _UNKNOWN *off_D2BC8;
