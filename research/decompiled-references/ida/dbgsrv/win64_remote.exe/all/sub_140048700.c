/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140048700
// Address: 0x0000000140048700

//----- (0000000140048700) ----------------------------------------------------
int *sub_140048700(__int64 a1, struct __crt_locale_pointers *a2, ...)
{
  int *result; // rax
  va_list va; // [rsp+40h] [rbp+18h] BYREF

  va_start(va, a2);
  result = &dword_1400CB618;
  if ( (dword_1400CB618 & 0x400000) != 0 )
    return (int *)((__int64 (__fastcall *)(int, struct __crt_locale_pointers *, signed __int64, va_list))off_1400C6AE0)(
                    23,
                    a2,
                    (signed __int64)va,
                    (va_list)off_1400C6AE0);
  return result;
}
// 1400C6AE0: using guessed type __int64 (__fastcall *off_1400C6AE0)(int a1, struct __crt_locale_pointers *a2, signed __int64 a3, va_list a4, int a5);
// 1400CB618: using guessed type int dword_1400CB618;
