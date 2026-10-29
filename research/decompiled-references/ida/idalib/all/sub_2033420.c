__m128i *__fastcall sub_2033420(__m128i *a1, int a2)
{
  size_t v4; // rax
  __m128i *v5; // rdi
  size_t v6; // r12
  unsigned __int64 v7; // rdx
  __int8 *v8; // rdi
  __m128i *v9; // [rsp+0h] [rbp-38h] BYREF
  size_t v10; // [rsp+8h] [rbp-30h]
  __m128i v11[2]; // [rsp+10h] [rbp-28h] BYREF

  if ( a2 )
  {
    sub_202F7E0(&v9, a2);
    v4 = j__strlen(" ");
    if ( v4 > 0x7FFFFFFFFFFFFFFFLL - v10 )
      std::__throw_length_error("basic_string::append");
    v5 = v9;
    v6 = v4 + v10;
    if ( v9 == v11 )
      v7 = 15;
    else
      v7 = v11[0].m128i_i64[0];
    if ( v6 > v7 )
    {
      sub_998B30((__int64)&v9, v10, 0, " ", v4);
      v5 = v9;
    }
    else if ( v4 )
    {
      v8 = &v9->m128i_i8[v10];
      if ( v4 == 1 )
        *v8 = 32;
      else
        memcpy(v8, " ", v4);
      v5 = v9;
    }
    v10 = v6;
    v5->m128i_i8[v6] = 0;
    a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
    if ( v9 == v11 )
    {
      a1[1] = _mm_load_si128(v11);
    }
    else
    {
      a1->m128i_i64[0] = (__int64)v9;
      a1[1].m128i_i64[0] = v11[0].m128i_i64[0];
    }
    a1->m128i_i64[1] = v10;
    return a1;
  }
  else
  {
    sub_202F730(a1, &byte_22F0C30);
    return a1;
  }
}
