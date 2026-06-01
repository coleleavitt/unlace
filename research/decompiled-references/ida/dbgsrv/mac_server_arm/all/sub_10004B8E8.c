/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004B8E8
// Address: 0x000000010004B8E8

//----- (000000010004B8E8) ----------------------------------------------------
void __noreturn sub_10004B8E8(
        _Unwind_Exception *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        ...)
{
  va_list va; // [xsp+30h] [xbp+30h] BYREF

  va_start(va, a7);
  sub_1000017A4((__int64 *)va);
  _Unwind_Resume(a1);
}
