/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140002E60
// Address: 0x0000000140002E60

//----- (0000000140002E60) ----------------------------------------------------
__int64 sub_140002E60(_QWORD *a1, _QWORD *a2, char *a3, ...)
{
  int v5; // ebx
  struct __crt_locale_pointers v7; // [rsp+20h] [rbp-428h] BYREF
  va_list va; // [rsp+468h] [rbp+20h] BYREF

  va_start(va, a3);
  v5 = sub_14005B240(&v7, 1024, a3, va);
  sub_140002CE0((struct __crt_locale_pointers *)&dword_140091764, &v7);
  *a2 = v5 + 1;
  *a1 = sub_14005AB50((char *)&v7);
  return 4294967294LL;
}
// 140091764: using guessed type int dword_140091764;
