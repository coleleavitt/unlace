/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100031088
// Address: 0x0000000100031088

//----- (0000000100031088) ----------------------------------------------------
void __noreturn sub_100031088(
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
        __int64 a11,
        __int64 a12,
        ...)
{
  va_list va; // [xsp+58h] [xbp+58h] BYREF

  va_start(va, a12);
  sub_100006228((__int64 *)va);
  _Unwind_Resume(a1);
}
