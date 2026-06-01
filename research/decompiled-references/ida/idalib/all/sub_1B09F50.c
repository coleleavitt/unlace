_DWORD *__fastcall sub_1B09F50(__int64 *a1, int a2, unsigned int a3, int a4, unsigned int a5, unsigned int a6)
{
  _QWORD *v10; // rax
  __int64 v12; // r13
  void *v13[2]; // [rsp+0h] [rbp-F8h] BYREF
  __int64 v14; // [rsp+10h] [rbp-E8h] BYREF
  __m128i v15; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v16; // [rsp+30h] [rbp-C8h] BYREF
  _BYTE v17[184]; // [rsp+40h] [rbp-B8h] BYREF

  if ( a2 == 3 )
  {
    sub_168B9F0((__int64)v17, a1, a3, 0x1217u, 0);
    sub_1AEE640(v13, 12, 0, 3u, nullptr, 0);
    v12 = sub_1682AF0((__int64)v17, (__int64)v13);
    sub_1AF81E0(&v15, 0xCu);
    sub_1682AF0(v12, (__int64)&v15);
    if ( (__int64 *)v15.m128i_i64[0] != &v16 )
      operator delete((void *)v15.m128i_i64[0]);
    if ( v13[0] != &v14 )
      operator delete(v13[0]);
    sub_15F7200(v17);
    return nullptr;
  }
  else
  {
    v10 = (_QWORD *)sub_168B6C0((__int64)a1);
    return sub_EBFEC0(v10, a2, a3, a4, a5, a6);
  }
}
