/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14005B0A0
// Address: 0x000000014005B0A0

//----- (000000014005B0A0) ----------------------------------------------------
size_t sub_14005B0A0(struct __crt_locale_pointers *a1, signed __int64 a2, char *a3, ...)
{
  va_list va; // [rsp+48h] [rbp+20h] BYREF

  va_start(va, a3);
  return sub_14005B240(a1, a2, a3, va);
}
