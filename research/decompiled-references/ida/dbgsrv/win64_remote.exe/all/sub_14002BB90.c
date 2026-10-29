/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14002BB90
// Address: 0x000000014002BB90

//----- (000000014002BB90) ----------------------------------------------------
__int64 __fastcall sub_14002BB90(char *a1, char *a2, char *a3, va_list a4, __int64 a5)
{
  unsigned int v7; // ebx
  struct __crt_locale_pointers v10; // [rsp+30h] [rbp-28h] BYREF
  struct __crt_locale_data *locinfo; // [rsp+40h] [rbp-18h]

  v7 = (unsigned int)a4;
  ((void (__fastcall *)(int, struct __crt_locale_pointers *, signed __int64, va_list))off_1400C6AE0)(
    11,
    &v10,
    (signed __int64)a3,
    a4);
  v10.mbcinfo = (struct __crt_multibyte_data *)&off_140094B80;
  locinfo = v10.locinfo;
  return sub_140028DE0(a1, a2, a3, v7, a5, (__int64)&v10.mbcinfo);
}
// 140094B80: using guessed type _UNKNOWN *off_140094B80;
// 1400C6AE0: using guessed type __int64 (__fastcall *off_1400C6AE0)(int a1, struct __crt_locale_pointers *a2, signed __int64 a3, va_list a4, int a5);
