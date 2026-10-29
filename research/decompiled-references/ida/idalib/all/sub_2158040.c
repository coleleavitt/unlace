_QWORD *__fastcall sub_2158040(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __m128i *v8; // rax
  size_t v9; // rbp
  unsigned __int64 v10; // rdx
  __int64 v11; // rbx
  __m128i *v12; // rdi
  void *v14[2]; // [rsp+0h] [rbp-98h] BYREF
  __m128i v15; // [rsp+10h] [rbp-88h] BYREF
  void *v16[2]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v17; // [rsp+30h] [rbp-68h] BYREF
  __m128i *v18; // [rsp+40h] [rbp-58h] BYREF
  size_t v19; // [rsp+48h] [rbp-50h]
  __m128i v20; // [rsp+50h] [rbp-48h] BYREF
  __int16 v21; // [rsp+60h] [rbp-38h]

  sub_2253560(v16, &a7);
  v8 = (__m128i *)sub_99BDC0(v16, 0, 0, "truncated or malformed archive (", 0x20u);
  v18 = &v20;
  if ( (__m128i *)v8->m128i_i64[0] == &v8[1] )
  {
    v20 = _mm_loadu_si128(v8 + 1);
  }
  else
  {
    v18 = (__m128i *)v8->m128i_i64[0];
    v20.m128i_i64[0] = v8[1].m128i_i64[0];
  }
  v19 = v8->m128i_u64[1];
  v8->m128i_i64[0] = (__int64)v8[1].m128i_i64;
  v8->m128i_i64[1] = 0;
  v8[1].m128i_i8[0] = 0;
  v9 = v19;
  if ( v19 == 0x7FFFFFFFFFFFFFFFLL )
    std::__throw_length_error("basic_string::append");
  if ( v18 == &v20 )
    v10 = 15;
  else
    v10 = v20.m128i_i64[0];
  if ( v19 + 1 > v10 )
    sub_998B30((__int64)&v18, v19, 0, ")", 1u);
  else
    v18->m128i_i8[v19] = 41;
  v19 = v9 + 1;
  v18->m128i_i8[v9 + 1] = 0;
  v14[0] = &v15;
  if ( v18 == &v20 )
  {
    v15 = _mm_load_si128(&v20);
  }
  else
  {
    v14[0] = v18;
    v15.m128i_i64[0] = v20.m128i_i64[0];
  }
  v14[1] = (void *)v19;
  if ( v16[0] != &v17 )
    operator delete(v16[0]);
  v18 = (__m128i *)v14;
  v21 = 260;
  v11 = operator new(0x38u);
  sub_2195A00(v11, &v18, 3);
  v12 = (__m128i *)v14[0];
  *a1 = v11;
  if ( v12 != &v15 )
    operator delete(v12);
  return a1;
}
