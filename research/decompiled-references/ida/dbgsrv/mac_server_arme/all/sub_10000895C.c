/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000895C
// Address: 0x000000010000895C

//----- (000000010000895C) ----------------------------------------------------
void __noreturn sub_10000895C(
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
  sub_10000B7DC((char **)va);
  _Unwind_Resume(a1);
}
