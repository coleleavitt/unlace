unsigned __int64 __fastcall sub_1864C90(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v5; // rsi
  char v7; // [rsp+Fh] [rbp-A9h] BYREF
  _BYTE v8[168]; // [rsp+10h] [rbp-A8h] BYREF

  v5 = *(_QWORD *)(a1 + 4176);
  if ( v5 )
    return sub_183D390(a1, v5, a2, a3);
  v7 = 0;
  v5 = sub_1864A00(a1, a3, "initializer_list", &v7);
  *(_QWORD *)(a1 + 4176) = v5;
  if ( v5 )
    return sub_183D390(a1, v5, a2, a3);
  if ( !v7 )
  {
    sub_168B9F0((__int64)v8, (__int64 *)(a1 + 8), a3, 0xF6Eu, 0);
    sub_15F7200(v8);
  }
  return 0;
}
