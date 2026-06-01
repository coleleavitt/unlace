void __fastcall sub_125B7D0(__int64 a1, char a2, char a3)
{
  __int64 v3; // rax
  __int64 v4; // rax
  void *v5; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v6; // [rsp+8h] [rbp-A0h]
  __m128i v7; // [rsp+10h] [rbp-98h] BYREF
  void *v8; // [rsp+20h] [rbp-88h] BYREF
  __int64 v9; // [rsp+28h] [rbp-80h]
  __m128i v10; // [rsp+30h] [rbp-78h] BYREF
  __m128i v11; // [rsp+40h] [rbp-68h] BYREF
  __m128i v12; // [rsp+50h] [rbp-58h] BYREF
  void *v13; // [rsp+60h] [rbp-48h]
  __int64 v14; // [rsp+68h] [rbp-40h]
  _OWORD v15[3]; // [rsp+70h] [rbp-38h] BYREF

  if ( a2 > a3 )
    abort();
  sub_12582C0((__int64)&v8, (__int64 *)(a1 + 104), a3);
  sub_12582C0((__int64)&v5, (__int64 *)(a1 + 104), a2);
  v11.m128i_i64[0] = (__int64)&v12;
  if ( v5 == &v7 )
  {
    v12 = _mm_load_si128(&v7);
  }
  else
  {
    v11.m128i_i64[0] = (__int64)v5;
    v12.m128i_i64[0] = v7.m128i_i64[0];
  }
  v3 = v6;
  v7.m128i_i8[0] = 0;
  v6 = 0;
  v11.m128i_i64[1] = v3;
  v5 = &v7;
  v13 = v15;
  if ( v8 == &v10 )
  {
    v15[0] = _mm_load_si128(&v10);
  }
  else
  {
    v13 = v8;
    *(_QWORD *)&v15[0] = v10.m128i_i64[0];
  }
  v4 = v9;
  v10.m128i_i8[0] = 0;
  v9 = 0;
  v14 = v4;
  v8 = &v10;
  sub_125B700(a1 + 48, &v11);
  if ( v13 != v15 )
    operator delete(v13);
  if ( (__m128i *)v11.m128i_i64[0] != &v12 )
    operator delete((void *)v11.m128i_i64[0]);
  if ( v5 != &v7 )
    operator delete(v5);
  if ( v8 != &v10 )
    operator delete(v8);
}
