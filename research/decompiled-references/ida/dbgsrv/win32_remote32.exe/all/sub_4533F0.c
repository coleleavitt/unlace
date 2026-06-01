/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4533F0
// Address: 0x004533F0

//----- (004533F0) --------------------------------------------------------
void __cdecl __noreturn sub_4533F0(int a1)
{
  _DWORD v1[4]; // [esp+0h] [ebp-10h] BYREF

  if ( sub_45C940() )
  {
    sub_453060((char *)v1, a1);
    sub_464D00(v1, &_TI2_AUinterr_exc_t__);
  }
  sub_404C90((int)"Oops! internal error %d occurred.", v1[0]);
}
// 4B1BFC: using guessed type __TI_flags _TI2_AUinterr_exc_t__;
