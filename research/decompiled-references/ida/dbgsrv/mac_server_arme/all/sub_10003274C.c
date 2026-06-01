/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10003274C
// Address: 0x000000010003274C

//----- (000000010003274C) ----------------------------------------------------
void __noreturn sub_10003274C(
        _Unwind_Exception *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        ...)
{
  va_list va; // [xsp+48h] [xbp+48h] BYREF

  va_start(va, a10);
  sub_100006678((__int64 *)va);
  _Unwind_Resume(a1);
}
