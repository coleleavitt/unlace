__m128i *__fastcall sub_1AF81E0(__m128i *a1, unsigned int a2)
{
  _BYTE *v3; // rax
  __int64 v4; // rdx
  _BYTE *v6; // rax
  __int64 v7; // rdx
  __m128i *v8; // rax
  _BYTE *v9; // rdi
  void *v10; // [rsp+0h] [rbp-38h] BYREF
  __int64 v11; // [rsp+8h] [rbp-30h]
  _BYTE v12[40]; // [rsp+10h] [rbp-28h] BYREF

  if ( a2 == 100 )
  {
    v6 = (_BYTE *)sub_20EB760(100, 0);
    if ( v6 )
    {
      v10 = v12;
      sub_1AEB960(&v10, v6, (__int64)&v6[v7]);
      if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - v11) <= 0xF )
        std::__throw_length_error("basic_string::append");
    }
    else
    {
      v12[0] = 0;
      v10 = v12;
      v11 = 0;
    }
    v8 = (__m128i *)sub_9EE560(&v10, " or thread local", 0x10u);
    a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
    if ( (__m128i *)v8->m128i_i64[0] == &v8[1] )
    {
      a1[1] = _mm_loadu_si128(v8 + 1);
    }
    else
    {
      a1->m128i_i64[0] = v8->m128i_i64[0];
      a1[1].m128i_i64[0] = v8[1].m128i_i64[0];
    }
    a1->m128i_i64[1] = v8->m128i_i64[1];
    v8->m128i_i64[0] = (__int64)v8[1].m128i_i64;
    v9 = v10;
    v8->m128i_i64[1] = 0;
    v8[1].m128i_i8[0] = 0;
    if ( v9 == v12 )
      return a1;
    operator delete(v9);
    return a1;
  }
  else
  {
    v3 = (_BYTE *)sub_20EB760(a2, 0);
    a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
    if ( v3 )
    {
      sub_1AEB960(a1, v3, (__int64)&v3[v4]);
      return a1;
    }
    a1->m128i_i64[1] = 0;
    a1[1].m128i_i8[0] = 0;
    return a1;
  }
}
