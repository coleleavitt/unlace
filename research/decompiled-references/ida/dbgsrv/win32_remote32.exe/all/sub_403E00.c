/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_403E00
// Address: 0x00403E00

//----- (00403E00) --------------------------------------------------------
void __noreturn sub_403E00()
{
  _DWORD v0[3]; // [esp+0h] [ebp-Ch] BYREF

  sub_402C00((char *)v0);
  sub_464D00(v0, &_TI3_AVbad_array_new_length_std__);
  JUMPOUT(0x403E1A);
}
// 403E15: control flows out of bounds to 403E1A
// 4AC608: using guessed type __TI_flags _TI3_AVbad_array_new_length_std__;
