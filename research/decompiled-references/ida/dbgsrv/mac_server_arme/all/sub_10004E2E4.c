/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004E2E4
// Address: 0x000000010004E2E4

//----- (000000010004E2E4) ----------------------------------------------------
void __noreturn sub_10004E2E4(
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
  sub_1000018E0((__int64 *)va);
  _Unwind_Resume(a1);
}
