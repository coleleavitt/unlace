/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14002BAA0
// Address: 0x000000014002BAA0

//----- (000000014002BAA0) ----------------------------------------------------
__int64 __fastcall sub_14002BAA0(__m128i *a1, void **a2, signed __int64 a3, va_list a4)
{
  __int64 result; // rax
  _QWORD v7[3]; // [rsp+30h] [rbp-18h] BYREF
  struct __crt_locale_pointers v8; // [rsp+60h] [rbp+18h] BYREF

  ((void (__fastcall *)(int, struct __crt_locale_pointers *, signed __int64, va_list))off_1400C6AE0)(11, &v8, a3, a4);
  v7[0] = &off_140094B80;
  v7[1] = v8.locinfo;
  if ( !sub_14006C4B8(a1, (const __m128i *)"static ") )
    return sub_14002E8D0(nullptr, a1->m128i_i8, a2, (__int64)v7);
  sub_140035300("main", 0, &qword_140094C78, 7u);
  result = sub_140035620((__int64)a1, a2, (__int64)v7, 0);
  if ( (_BYTE)result )
    return sub_140028DE0(nullptr, "main", nullptr, 0, (__int64)a2, (__int64)v7);
  return result;
}
// 140094B80: using guessed type _UNKNOWN *off_140094B80;
// 140094C78: using guessed type __int64 qword_140094C78;
// 1400C6AE0: using guessed type __int64 (__fastcall *off_1400C6AE0)(int a1, struct __crt_locale_pointers *a2, signed __int64 a3, va_list a4, int a5);
