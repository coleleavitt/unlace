__int64 __fastcall sub_E3FD20(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  unsigned __int64 *v4; // r14
  __int64 v7; // rax
  __int64 v8; // rdx
  size_t v9; // r8
  __int64 *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r13
  int v13; // eax
  unsigned __int64 v14; // [rsp+8h] [rbp-120h]
  __int64 v15; // [rsp+8h] [rbp-120h]
  __int64 *v16; // [rsp+8h] [rbp-120h]
  __int64 v17; // [rsp+10h] [rbp-118h]
  size_t v18; // [rsp+10h] [rbp-118h]
  void *v20[4]; // [rsp+30h] [rbp-F8h] BYREF
  void *s2; // [rsp+50h] [rbp-D8h] BYREF
  __int64 v22; // [rsp+58h] [rbp-D0h]
  __int64 v23; // [rsp+60h] [rbp-C8h] BYREF
  void *s1; // [rsp+70h] [rbp-B8h] BYREF
  size_t n; // [rsp+78h] [rbp-B0h]
  __int64 v26; // [rsp+80h] [rbp-A8h] BYREF
  __m128i v27; // [rsp+90h] [rbp-98h] BYREF
  _BYTE v28[16]; // [rsp+A0h] [rbp-88h] BYREF
  void *v29[3]; // [rsp+B0h] [rbp-78h] BYREF
  _BYTE v30[96]; // [rsp+C8h] [rbp-60h] BYREF

  v4 = (unsigned __int64 *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  v17 = a3 & 7;
  v14 = a3 & 0xFFFFFFFFFFFFFFF0LL;
  if ( (a3 & 8) != 0 )
  {
    v17 |= *(__int64 *)((char *)&qword_18 + (a3 & 0xFFFFFFFFFFFFFFF0LL));
    v14 = *v4;
  }
  sub_F54690(&s2, v14, v17, a2 + 1248);
  sub_E35E20((void ***)v29, "qualType");
  v27.m128i_i64[0] = (__int64)v28;
  sub_E34980(&v27, s2, (__int64)s2 + v22);
  sub_E35650((__int64)v30, &v27);
  sub_E3FB10(a1, (__int64)v29);
  sub_2207560(v30);
  if ( v29[0] )
    sub_E34850((void **)v29[0]);
  if ( (_BYTE *)v27.m128i_i64[0] != v28 )
    operator delete((void *)v27.m128i_i64[0]);
  if ( a4 && v4 )
  {
    v7 = sub_F47160(a3);
    if ( v14 != v7 || v8 != v17 )
    {
      sub_F54690(&s1, v7, v8, a2 + 1248);
      v9 = n;
      v10 = (__int64 *)s1;
      if ( n != v22 || n && (v18 = n, v16 = (__int64 *)s1, v13 = memcmp(s1, s2, n), v10 = v16, v9 = v18, v13) )
      {
        v27.m128i_i64[0] = (__int64)v28;
        sub_E34980(&v27, v10, (__int64)v10 + v9);
        sub_E35650((__int64)v29, &v27);
        sub_E35E20((void ***)v20, "desugaredQualType");
        v15 = sub_220A4E0(a1, v20);
        sub_2207560(v15);
        sub_2205840(v15, v29);
        if ( v20[0] )
          sub_E34850((void **)v20[0]);
        sub_2207560(v29);
        if ( (_BYTE *)v27.m128i_i64[0] != v28 )
          operator delete((void *)v27.m128i_i64[0]);
        v10 = (__int64 *)s1;
      }
      if ( v10 != &v26 )
        operator delete(v10);
    }
    v11 = sub_F46EC0(*v4);
    if ( v11 )
    {
      sub_E3A830(&v27, *(_QWORD *)(v11 + 32));
      sub_E35650((__int64)v29, &v27);
      sub_E35E20((void ***)&s1, "typeAliasDeclId");
      v12 = sub_220A4E0(a1, &s1);
      sub_2207560(v12);
      sub_2205840(v12, v29);
      if ( s1 )
        sub_E34850((void **)s1);
      sub_2207560(v29);
      if ( (_BYTE *)v27.m128i_i64[0] != v28 )
        operator delete((void *)v27.m128i_i64[0]);
    }
  }
  if ( s2 != &v23 )
    operator delete(s2);
  return a1;
}

