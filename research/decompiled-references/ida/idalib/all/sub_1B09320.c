_DWORD *__fastcall sub_1B09320(__int64 *a1, int a2, unsigned int a3, int a4, int a5, int a6)
{
  _QWORD *v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  _DWORD *result; // rax
  __int64 v16; // r13
  void *v17[2]; // [rsp+0h] [rbp-F8h] BYREF
  __int64 v18; // [rsp+10h] [rbp-E8h] BYREF
  __m128i v19; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v20; // [rsp+30h] [rbp-C8h] BYREF
  _BYTE v21[184]; // [rsp+40h] [rbp-B8h] BYREF

  if ( a2 == 3 )
  {
    sub_168B9F0((__int64)v21, a1, a3, 0x1217u, 0);
    sub_1AEE640(v17, 11, 0, 3u, nullptr, 0);
    v16 = sub_1682AF0((__int64)v21, (__int64)v17);
    sub_1AF81E0(&v19, 0xBu);
    sub_1682AF0(v16, (__int64)&v19);
    if ( (__int64 *)v19.m128i_i64[0] != &v20 )
      operator delete((void *)v19.m128i_i64[0]);
    if ( v17[0] != &v18 )
      operator delete(v17[0]);
    sub_15F7200(v21);
    return nullptr;
  }
  else
  {
    v10 = (_QWORD *)sub_168B6C0((__int64)a1);
    v13 = v10[294];
    v10[304] += 24LL;
    v14 = (v13 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v10[295] >= v14 + 24 && v13 )
    {
      v10[294] = v14 + 24;
      result = (_DWORD *)((v13 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    }
    else
    {
      result = (_DWORD *)sub_986170((__int64)(v10 + 294), 24, 24, 3, v11, v12);
    }
    *result = a4;
    result[1] = a6;
    result[2] = 11;
    result[3] = a5;
    result[4] = a2;
    result[5] = a3;
  }
  return result;
}
