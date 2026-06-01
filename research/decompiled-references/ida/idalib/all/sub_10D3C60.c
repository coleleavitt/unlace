__m128i *__fastcall sub_10D3C60(__m128i *a1, unsigned int a2, __int8 *a3, size_t a4, char a5)
{
  char *v9; // rax
  size_t v10; // rdx
  __m128i *v11; // r9
  __m128i *v12; // rdi
  size_t v13; // r13
  unsigned __int64 v14; // rcx
  size_t v15; // r13
  unsigned __int64 v16; // rdx
  __m128i *v17; // rdi
  size_t v18; // r13
  unsigned __int64 v19; // rax
  char *v20; // rdi
  __int8 *v21; // rdi
  __m128i *v22; // [rsp+0h] [rbp-58h] BYREF
  size_t v23; // [rsp+8h] [rbp-50h]
  __m128i v24[4]; // [rsp+10h] [rbp-48h] BYREF

  if ( a5 == 1 || a2 > 1 )
  {
    v23 = 1;
    v24[0].m128i_i16[0] = 45;
    v22 = v24;
    v9 = sub_10D1F80(a2);
    if ( v10 > 0x7FFFFFFFFFFFFFFELL )
      goto LABEL_38;
    v12 = v22;
    v13 = v10 + v23;
    v14 = v22 == v11 ? 15LL : v24[0].m128i_i64[0];
    if ( v13 > v14 )
    {
      sub_998B30((__int64)&v22, 1u, 0, v9, v10);
      v12 = v22;
    }
    else if ( v10 )
    {
      v20 = &v22->m128i_i8[v23];
      if ( v10 == 1 )
        *v20 = *v9;
      else
        memcpy(v20, v9, v10);
      v12 = v22;
    }
    v23 = v13;
    v12->m128i_i8[v13] = 0;
    v15 = v23;
    if ( v23 == 0x7FFFFFFFFFFFFFFFLL )
      goto LABEL_38;
    v16 = v22 == v24 ? 15LL : v24[0].m128i_i64[0];
    if ( v23 + 1 > v16 )
      sub_998B30((__int64)&v22, v23, 0, "-", 1u);
    else
      v22->m128i_i8[v23] = 45;
    v23 = v15 + 1;
    v22->m128i_i8[v15 + 1] = 0;
    if ( a4 > 0x7FFFFFFFFFFFFFFFLL - v23 )
LABEL_38:
      std::__throw_length_error("basic_string::append");
    v17 = v22;
    v18 = a4 + v23;
    if ( v22 == v24 )
      v19 = 15;
    else
      v19 = v24[0].m128i_i64[0];
    if ( v18 > v19 )
    {
      sub_998B30((__int64)&v22, v23, 0, a3, a4);
      v17 = v22;
    }
    else if ( a4 )
    {
      v21 = &v22->m128i_i8[v23];
      if ( a4 == 1 )
        *v21 = *a3;
      else
        memcpy(v21, a3, a4);
      v17 = v22;
    }
    v23 = v18;
    v17->m128i_i8[v18] = 0;
    a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
    if ( v22 == v24 )
    {
      a1[1] = _mm_load_si128(v24);
    }
    else
    {
      a1->m128i_i64[0] = (__int64)v22;
      a1[1].m128i_i64[0] = v24[0].m128i_i64[0];
    }
    a1->m128i_i64[1] = v23;
  }
  else
  {
    a1->m128i_i64[1] = 0;
    a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
    a1[1].m128i_i8[0] = 0;
  }
  return a1;
}
