/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140011330
// Address: 0x0000000140011330

//----- (0000000140011330) ----------------------------------------------------
void __fastcall sub_140011330(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  __int64 (__fastcall **v6)(_QWORD, _BYTE *, struct __crt_locale_pointers *); // rbp
  struct _exception *v7; // rsi
  _QWORD *v8; // rax
  void *v9; // rbx
  void *v10; // rcx
  __int64 *v11; // rax
  __int64 v12; // rbx

  if ( a3 )
  {
    if ( !*(_QWORD *)(a1 + 376) && (*(_DWORD *)(a1 + 632) & 0x80000) != 0 && !sub_14005C830() )
    {
      if ( byte_1400CB61C )
        __debugbreak();
      sub_14005A480(30191);
    }
    v6 = (__int64 (__fastcall **)(_QWORD, _BYTE *, struct __crt_locale_pointers *))sub_140043A50(a1);
    if ( *(_QWORD *)(a1 + 1032) > 1u )
    {
      v7 = *(struct _exception **)(a1 + 1024);
      v8 = sub_1400639D0(v7, 0);
      v9 = v8;
      if ( v8 )
      {
        sub_140014620(
          a1,
          v7,
          (__int64)v8,
          *(__int64 (__fastcall ***)(_QWORD, _BYTE *, struct __crt_locale_pointers *))(a1 + 1048),
          v6,
          nullptr);
        sub_140063970(v9);
      }
      v10 = *(void **)(a1 + 1024);
      if ( v10 )
      {
        *(_QWORD *)(a1 + 1032) = 0;
        j_free(v10);
        *(_QWORD *)(a1 + 1024) = 0;
        *(_QWORD *)(a1 + 1040) = 0;
      }
    }
    v11 = *(__int64 **)(a1 + 1008);
    v12 = *v11;
    if ( (__int64 *)*v11 != v11 )
    {
      do
      {
        sub_1400139D0(
          a1,
          (__int64 **)(a1 + 944),
          *(__int64 (__fastcall ***)(_QWORD, _BYTE *, struct __crt_locale_pointers *))(v12 + 32),
          v6,
          nullptr);
        v12 = sub_14000C830((_QWORD *)(a1 + 1008), v12);
      }
      while ( v12 != *(_QWORD *)(a1 + 1008) );
    }
  }
  if ( a4 )
    sub_14001C4C0(a1, a4);
}
// 1400CB61C: using guessed type char byte_1400CB61C;
