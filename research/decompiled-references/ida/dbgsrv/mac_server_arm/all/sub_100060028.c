/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100060028
// Address: 0x0000000100060028

//----- (0000000100060028) ----------------------------------------------------
void __noreturn sub_100060028(
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
  __int64 v8; // x29
  va_list va; // [xsp+38h] [xbp+38h] BYREF

  va_start(va, a8);
  sub_100006228((_QWORD *)(v8 - 168));
  sub_10006023C((__int64)va);
  _Unwind_Resume(a1);
}
// 100060070: variable 'v8' is possibly undefined
