/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100071C28
// Address: 0x0000000100071C28

//----- (0000000100071C28) ----------------------------------------------------
void __noreturn sub_100071C28(
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
  sub_100006228((__int64 *)va);
  _Unwind_Resume(a1);
}
