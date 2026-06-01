/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000546E8
// Address: 0x00000001000546E8

//----- (00000001000546E8) ----------------------------------------------------
void __noreturn sub_1000546E8(_Unwind_Exception *a1, __int64 a2, __int64 a3, ...)
{
  va_list va; // [xsp+10h] [xbp+10h] BYREF

  va_start(va, a3);
  sub_100003E94((__int64)va);
  _Unwind_Resume(a1);
}
