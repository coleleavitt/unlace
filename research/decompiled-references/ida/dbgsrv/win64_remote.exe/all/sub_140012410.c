/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140012410
// Address: 0x0000000140012410

//----- (0000000140012410) ----------------------------------------------------
__int64 sub_140012410(__int64 a1, struct __crt_locale_pointers *a2, ...)
{
  va_list va; // [rsp+40h] [rbp+18h] BYREF

  va_start(va, a2);
  return sub_140043730(0, *(_QWORD *)(a1 + 376), a2, va);
}
