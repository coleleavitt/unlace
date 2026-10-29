/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100043F48
// Address: 0x0000000100043F48

//----- (0000000100043F48) ----------------------------------------------------
void __noreturn sub_100043F48(
        _Unwind_Exception *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        ...)
{
  va_list va; // [xsp+38h] [xbp+38h] BYREF

  va_start(va, a8);
  sub_100043F88((__int64 *)va);
  _Unwind_Resume(a1);
}
