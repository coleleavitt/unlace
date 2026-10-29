__m128i *__fastcall sub_10E1980(__m128i *a1, __m128i *a2, char *a3)
{
  unsigned __int64 v6; // rax
  size_t v7; // rsi
  __int64 v8; // rdi
  __m128i *v9; // r12
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // rdx
  char *v13; // rdi

  v6 = strlen(a3);
  v7 = a2->m128i_u64[1];
  if ( 0x7FFFFFFFFFFFFFFFLL - v7 < v6 )
    std::__throw_length_error("basic_string::append");
  v8 = a2->m128i_i64[0];
  v9 = a2 + 1;
  v10 = v7 + v6;
  if ( (__m128i *)a2->m128i_i64[0] == &a2[1] )
    v11 = 15;
  else
    v11 = a2[1].m128i_u64[0];
  if ( v10 > v11 )
  {
    sub_998B30((__int64)a2, v7, 0, a3, v6);
    v8 = a2->m128i_i64[0];
  }
  else if ( v6 )
  {
    v13 = (char *)(v7 + v8);
    if ( v6 == 1 )
      *v13 = *a3;
    else
      memcpy(v13, a3, v6);
    v8 = a2->m128i_i64[0];
  }
  a2->m128i_i64[1] = v10;
  *(_BYTE *)(v8 + v10) = 0;
  a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
  if ( (__m128i *)a2->m128i_i64[0] == v9 )
  {
    a1[1] = _mm_loadu_si128(a2 + 1);
  }
  else
  {
    a1->m128i_i64[0] = a2->m128i_i64[0];
    a1[1].m128i_i64[0] = a2[1].m128i_i64[0];
  }
  a1->m128i_i64[1] = a2->m128i_i64[1];
  a2->m128i_i64[0] = (__int64)v9;
  a2->m128i_i64[1] = 0;
  a2[1].m128i_i8[0] = 0;
  return a1;
}
