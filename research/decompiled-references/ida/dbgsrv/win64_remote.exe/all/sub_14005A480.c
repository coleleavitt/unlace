/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14005A480
// Address: 0x000000014005A480

//----- (000000014005A480) ----------------------------------------------------
void __fastcall __noreturn sub_14005A480(int a1)
{
  _QWORD v2[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( (unsigned __int8)sub_140063D10() )
  {
    sub_14005A190((__int64)v2, a1);
    sub_14006C754(v2, &_TI2_AUinterr_exc_t__);
    __debugbreak();
  }
  sub_140005300("Oops! internal error %d occurred.", a1);
}
// 1400C4AC0: using guessed type __TI_flags _TI2_AUinterr_exc_t__;
