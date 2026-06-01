__m128i *__fastcall sub_11C28A0(__m128i *a1, __m128i *a2, char a3)
{
  __int64 v3; // r12
  __int64 v4; // rax
  __m128i *v5; // r13
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rdx
  __int64 v9; // rax

  v3 = a2->m128i_i64[1];
  if ( v3 == 0x7FFFFFFFFFFFFFFFLL )
    std::__throw_length_error("basic_string::_M_replace_aux");
  v4 = a2->m128i_i64[0];
  v5 = a2 + 1;
  v7 = v3 + 1;
  if ( (__m128i *)a2->m128i_i64[0] == &a2[1] )
    v8 = 15;
  else
    v8 = a2[1].m128i_u64[0];
  if ( v7 > v8 )
  {
    sub_998B30((__int64)a2, a2->m128i_u64[1], 0, nullptr, 1u);
    v4 = a2->m128i_i64[0];
  }
  *(_BYTE *)(v4 + v3) = a3;
  v9 = a2->m128i_i64[0];
  a2->m128i_i64[1] = v7;
  *(_BYTE *)(v9 + v3 + 1) = 0;
  a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
  if ( (__m128i *)a2->m128i_i64[0] == v5 )
  {
    a1[1] = _mm_loadu_si128(a2 + 1);
  }
  else
  {
    a1->m128i_i64[0] = a2->m128i_i64[0];
    a1[1].m128i_i64[0] = a2[1].m128i_i64[0];
  }
  a1->m128i_i64[1] = a2->m128i_i64[1];
  a2->m128i_i64[0] = (__int64)v5;
  a2->m128i_i64[1] = 0;
  a2[1].m128i_i8[0] = 0;
  return a1;
}
