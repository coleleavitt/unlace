_DWORD *__fastcall sub_1B09070(__int64 *a1, int a2, unsigned int a3, int a4, int a5, int a6)
{
  _QWORD *v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  _DWORD *result; // rax
  __int64 v16; // rax
  __int64 v17; // rbp
  __int64 v18; // [rsp+18h] [rbp-110h]
  void *v19[2]; // [rsp+20h] [rbp-108h] BYREF
  _BYTE v20[16]; // [rsp+30h] [rbp-F8h] BYREF
  __m128i v21; // [rsp+40h] [rbp-E8h] BYREF
  _BYTE v22[16]; // [rsp+50h] [rbp-D8h] BYREF
  _BYTE v23[200]; // [rsp+60h] [rbp-C8h] BYREF

  if ( a2 == 7 )
  {
    sub_168B9F0((__int64)v23, a1, a3, 0x1217u, 0);
    v16 = sub_168B6E0((__int64)a1);
    sub_1AEE640(v19, 83, 2u, (*(_DWORD *)(v16 + 64) > 0x32u) + 5, nullptr, 0);
    v17 = sub_1682AF0((__int64)v23, (__int64)v19);
    sub_1AF81E0(&v21, 0x53u);
    sub_1682AF0(v17, (__int64)&v21);
    if ( (_BYTE *)v21.m128i_i64[0] != v22 )
      operator delete((void *)v21.m128i_i64[0]);
    if ( v19[0] != v20 )
      operator delete(v19[0]);
    sub_15F7200(v23);
    return nullptr;
  }
  else
  {
    if ( a2 == 5 && *(_DWORD *)(sub_168B6E0((__int64)a1) + 64) <= 0x32u )
    {
      sub_168B9F0((__int64)v23, a1, a3, 0x1217u, 0);
      sub_1AEE640(v19, 83, 2u, 5u, nullptr, 0);
      v18 = sub_1682AF0((__int64)v23, (__int64)v19);
      sub_1AF81E0(&v21, 0x53u);
      sub_1682AF0(v18, (__int64)&v21);
      if ( (_BYTE *)v21.m128i_i64[0] != v22 )
        operator delete((void *)v21.m128i_i64[0]);
      if ( v19[0] != v20 )
        operator delete(v19[0]);
      sub_15F7200(v23);
    }
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
    result[2] = 83;
    result[3] = a5;
    result[4] = a2;
    result[5] = a3;
  }
  return result;
}
