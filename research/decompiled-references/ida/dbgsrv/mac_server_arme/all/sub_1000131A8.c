/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000131A8
// Address: 0x00000001000131A8

//----- (00000001000131A8) ----------------------------------------------------
void __noreturn sub_1000131A8(
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
  sub_1000018E0((__int64 *)va);
  _Unwind_Resume(a1);
}
