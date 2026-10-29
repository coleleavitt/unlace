__m128i *__fastcall sub_10310D0(__m128i *a1, __int64 a2, __int8 **a3)
{
  __int8 *v3; // rsi
  __int8 v4; // al
  size_t v5; // rax
  size_t v7; // rax
  __m128i v8; // [rsp+0h] [rbp-68h] BYREF
  _BYTE v9[16]; // [rsp+10h] [rbp-58h] BYREF
  void *v10[2]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v11[56]; // [rsp+30h] [rbp-38h] BYREF

  v3 = *a3;
  v4 = **a3;
  if ( v4 == 90 )
  {
    if ( (unsigned int)(v3[1] - 81) <= 3 )
    {
      *a3 = v3 + 1;
      v10[0] = v11;
      sub_1014B80(v10, v3, (__int64)(v3 + 2));
      v8.m128i_i64[0] = (__int64)v9;
      v7 = j__strlen("^");
      sub_1014B80(&v8, "^", (__int64)&aVirtfunc[v7 + 11]);
      sub_1030DD0(a1, &v8, v10);
      if ( (_BYTE *)v8.m128i_i64[0] != v9 )
        operator delete((void *)v8.m128i_i64[0]);
      if ( v10[0] != v11 )
        operator delete(v10[0]);
      return a1;
    }
  }
  else if ( v4 == 112 )
  {
    a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
    v5 = j__strlen("p");
    sub_1014B80(a1, "p", (__int64)&aP_1[v5 + 2]);
    return a1;
  }
  a1[1].m128i_i8[0] = v4;
  a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
  a1->m128i_i64[1] = 1;
  a1[1].m128i_i8[1] = 0;
  return a1;
}

