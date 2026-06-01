__int64 __fastcall sub_FE9B40(__int64 a1, _BYTE *a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  void *v7; // rbp
  __m128i v9; // [rsp+0h] [rbp-88h] BYREF
  _BYTE v10[16]; // [rsp+10h] [rbp-78h] BYREF
  void *v11[3]; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v12[80]; // [rsp+38h] [rbp-50h] BYREF

  sub_E35C20((void ***)v11, (void **)"text", (void **)&byte_4);
  v9.m128i_i64[0] = (__int64)v10;
  if ( a2 )
  {
    sub_FE8E40(&v9, a2, (__int64)&a2[a3]);
  }
  else
  {
    v9.m128i_i64[1] = 0;
    v10[0] = 0;
  }
  sub_E35650((__int64)v12, &v9);
  sub_FE9990(a1, (__int64)v11, 1, v4, v5, v6);
  sub_2207560(v12);
  v7 = v11[0];
  if ( v11[0] )
  {
    if ( *(void **)v11[0] != (char *)v11[0] + 16 )
      operator delete(*(void **)v11[0]);
    operator delete(v7, 0x20u);
  }
  if ( (_BYTE *)v9.m128i_i64[0] != v10 )
    operator delete((void *)v9.m128i_i64[0]);
  return a1;
}

