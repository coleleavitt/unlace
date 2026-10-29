__m128i *__fastcall sub_1582B20(__m128i *a1, _BYTE *a2, __int64 a3)
{
  size_t v4; // rax
  __m128i *v5; // rax
  __int64 v6; // rcx
  unsigned __int64 v7; // rax
  __m128i *v8; // rax
  _OWORD *v9; // rdi
  void *vars0[2]; // [rsp+0h] [rbp+0h] BYREF
  char vars10; // [rsp+10h] [rbp+10h] BYREF
  void *vars20; // [rsp+20h] [rbp+20h] BYREF
  __int64 vars28; // [rsp+28h] [rbp+28h]
  _OWORD vars30[2]; // [rsp+30h] [rbp+30h] BYREF

  vars0[0] = &vars10;
  if ( a2 )
  {
    sub_1580B80(vars0, a2, (__int64)&a2[a3]);
  }
  else
  {
    vars0[1] = nullptr;
    vars10 = 0;
  }
  v4 = j__strlen("'");
  v5 = (__m128i *)sub_99BDC0(vars0, 0, 0, "'", v4);
  vars20 = vars30;
  if ( (__m128i *)v5->m128i_i64[0] == &v5[1] )
  {
    vars30[0] = _mm_loadu_si128(v5 + 1);
  }
  else
  {
    vars20 = (void *)v5->m128i_i64[0];
    *(_QWORD *)&vars30[0] = v5[1].m128i_i64[0];
  }
  v6 = v5->m128i_i64[1];
  v5[1].m128i_i8[0] = 0;
  vars28 = v6;
  v5->m128i_i64[0] = (__int64)v5[1].m128i_i64;
  v5->m128i_i64[1] = 0;
  v7 = j__strlen("'");
  if ( v7 > 0x7FFFFFFFFFFFFFFFLL - vars28 )
    std::__throw_length_error("basic_string::append");
  v8 = (__m128i *)sub_9EE560(&vars20, "'", v7);
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
  v9 = vars20;
  v8->m128i_i64[1] = 0;
  v8[1].m128i_i8[0] = 0;
  if ( v9 != vars30 )
    operator delete(v9);
  if ( vars0[0] != vars0 )
    operator delete(vars0[0]);
  return a1;
}
