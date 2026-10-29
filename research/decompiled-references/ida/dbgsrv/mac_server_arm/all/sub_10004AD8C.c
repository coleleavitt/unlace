/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004AD8C
// Address: 0x000000010004AD8C

//----- (000000010004AD8C) ----------------------------------------------------
void __noreturn sub_10004AD8C(
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
  sub_100013FC0((void ***)va);
  _Unwind_Resume(a1);
}
