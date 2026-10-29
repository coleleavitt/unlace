/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140004990
// Address: 0x0000000140004990

//----- (0000000140004990) ----------------------------------------------------
__int64 sub_140004990(signed __int64 a1, ...)
{
  va_list va; // [rsp+38h] [rbp+10h] BYREF

  va_start(va, a1);
  return ((__int64 (__fastcall *)(int, struct __crt_locale_pointers *, signed __int64, va_list))off_1400C6AE0)(
           24,
           (struct __crt_locale_pointers *)5,
           a1,
           va);
}
// 1400C6AE0: using guessed type __int64 (__fastcall *off_1400C6AE0)(int a1, struct __crt_locale_pointers *a2, signed __int64 a3, va_list a4, int a5);
