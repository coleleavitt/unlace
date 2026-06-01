/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140054270
// Address: 0x0000000140054270

//----- (0000000140054270) ----------------------------------------------------
__int64 __fastcall sub_140054270(int a1, struct __crt_locale_pointers *a2, va_list a3)
{
  if ( !a1 )
    return (int)((__int64 (__fastcall *)(int, struct __crt_locale_pointers *, signed __int64, va_list))off_1400C6AE0)(
                  23,
                  a2,
                  (signed __int64)a3,
                  (va_list)off_1400C6AE0);
  if ( a1 <= 0 )
    sub_14005A830((char *)a2, a3);
  ((void (__fastcall *)(int, struct __crt_locale_pointers *, signed __int64, va_list))off_1400C6AE0)(
    24,
    (struct __crt_locale_pointers *)2,
    (signed __int64)a2,
    a3);
  return 0;
}
// 1400C6AE0: using guessed type __int64 (__fastcall *off_1400C6AE0)(int a1, struct __crt_locale_pointers *a2, signed __int64 a3, va_list a4, int a5);
