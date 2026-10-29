/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100011F10
// Address: 0x0000000100011F10

//----- (0000000100011F10) ----------------------------------------------------
void __noreturn sub_100011F10(
        _Unwind_Exception *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        ...)
{
  va_list va; // [xsp+40h] [xbp+40h] BYREF

  va_start(va, a9);
  sub_1000017A4((__int64 *)va);
  _Unwind_Resume(a1);
}
