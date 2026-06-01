/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400085B0
// Address: 0x00000001400085B0

//----- (00000001400085B0) ----------------------------------------------------
__int64 sub_1400085B0(signed __int64 a1, ...)
{
  va_list va; // [rsp+38h] [rbp+10h] BYREF

  va_start(va, a1);
  return ((__int64 (__fastcall *)(int, struct __crt_locale_pointers *, signed __int64, va_list))off_1400C6AE0)(
           24,
           (struct __crt_locale_pointers *)9,
           a1,
           va);
}
// 1400C6AE0: using guessed type __int64 (__fastcall *off_1400C6AE0)(int a1, struct __crt_locale_pointers *a2, signed __int64 a3, va_list a4, int a5);
