/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14006A9C4
// Address: 0x000000014006A9C4

//----- (000000014006A9C4) ----------------------------------------------------
void __fastcall __noreturn sub_14006A9C4(__int64 a1)
{
  _QWORD v1[5]; // [rsp+20h] [rbp-28h] BYREF

  sub_14006A8E8((__int64)v1, a1);
  sub_14006C754(v1, &_TI3_AVlength_error_std__);
  JUMPOUT(0x14006A9E6LL);
}
// 14006A9E1: control flows out of bounds to 14006A9E6
// 1400C4B80: using guessed type __TI_flags _TI3_AVlength_error_std__;
