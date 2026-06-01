/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140014620
// Address: 0x0000000140014620

//----- (0000000140014620) ----------------------------------------------------
_BOOL8 __fastcall sub_140014620(
        __int64 a1,
        _BYTE *a2,
        __int64 a3,
        __int64 (__fastcall **a4)(_QWORD, _BYTE *, struct __crt_locale_pointers *),
        __int64 (__fastcall **a5)(_QWORD, _BYTE *, struct __crt_locale_pointers *),
        __int64 (__fastcall **a6)(_QWORD, _BYTE *, struct __crt_locale_pointers *))
{
  char *v9; // rax
  __m128i *v10; // rax
  bool v11; // bl
  __int64 (__fastcall **v13[6])(_QWORD, _BYTE *, struct __crt_locale_pointers *); // [rsp+20h] [rbp-6B8h] BYREF
  __int64 (__fastcall **v14)(); // [rsp+50h] [rbp-688h] BYREF
  void *Block; // [rsp+58h] [rbp-680h]
  __int128 v16; // [rsp+60h] [rbp-678h]
  __m128i v17[64]; // [rsp+2B0h] [rbp-428h] BYREF

  v9 = sub_14005D9D0(a2);
  sub_1400621E0(v17, v9, 1024);
  v10 = sub_14006CA94(v17, 0x2Eu);
  if ( v10 )
    v10->m128i_i8[0] = 0;
  sub_1400622F0((unsigned __int8 *)v17);
  v14 = &off_140092F30;
  Block = nullptr;
  v16 = 0;
  if ( sub_140019860((__int64)&v14, a3, 0, 1) )
  {
    v13[0] = (__int64 (__fastcall **)(_QWORD, _BYTE *, struct __crt_locale_pointers *))&off_140093188;
    v13[1] = (__int64 (__fastcall **)(_QWORD, _BYTE *, struct __crt_locale_pointers *))(a1 + 8);
    v13[2] = (__int64 (__fastcall **)(_QWORD, _BYTE *, struct __crt_locale_pointers *))v17;
    v13[3] = a4;
    v13[4] = a5;
    v13[5] = a6;
    v11 = (int)sub_1400186E0((__int64)&v14, a3, v13) >= 0;
    v13[0] = (__int64 (__fastcall **)(_QWORD, _BYTE *, struct __crt_locale_pointers *))&off_140092F18;
  }
  else
  {
    v11 = 0;
  }
  v14 = &off_140092F30;
  if ( Block )
  {
    *(_QWORD *)&v16 = 0;
    j_free(Block);
  }
  return v11;
}
// 140092F18: using guessed type __int64 (__fastcall *off_140092F18)();
// 140092F30: using guessed type __int64 (__fastcall *off_140092F30)();
// 140093188: using guessed type __int64 (__fastcall *off_140093188)();
