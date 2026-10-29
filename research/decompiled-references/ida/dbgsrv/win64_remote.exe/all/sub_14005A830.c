/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14005A830
// Address: 0x000000014005A830

//----- (000000014005A830) ----------------------------------------------------
void __fastcall __noreturn sub_14005A830(char *a1, va_list a2)
{
  FILE *v2; // rax

  if ( a1 )
  {
    if ( off_1400C6AE0 )
    {
      ((void (__fastcall *)(int, struct __crt_locale_pointers *, signed __int64, va_list))off_1400C6AE0)(
        24,
        (struct __crt_locale_pointers *)3,
        (signed __int64)a1,
        a2);
    }
    else
    {
      sub_14005B0F0(a1, (__int64)a2);
      v2 = _acrt_iob_func(2u);
      sub_140064940(10, v2);
    }
  }
  ++dword_1400CB604;
  sub_14005A640(1);
}
// 1400C6AE0: using guessed type __int64 (__fastcall *off_1400C6AE0)(int a1, struct __crt_locale_pointers *a2, signed __int64 a3, va_list a4, int a5);
// 1400CB604: using guessed type int dword_1400CB604;
