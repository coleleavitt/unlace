__m128i *__fastcall sub_10D3F00(__m128i *a1, __int64 a2)
{
  __m128i *result; // rax
  unsigned int v3; // edx
  int v5; // edx
  size_t v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // rcx
  __int8 *v11; // rdx
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rcx
  __int8 *v14; // rdx
  __m128i *v15; // [rsp+8h] [rbp-40h]
  __m128i *v16; // [rsp+10h] [rbp-38h] BYREF
  __int64 v17; // [rsp+18h] [rbp-30h]
  __m128i v18; // [rsp+20h] [rbp-28h] BYREF

  result = a1;
  v3 = *(_DWORD *)(a2 + 64);
  if ( v3 == 4 )
  {
    a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
    strcpy(a1[1].m128i_i8, "device-openmp");
    a1->m128i_i64[1] = 13;
    return result;
  }
  if ( v3 <= 4 )
  {
    if ( v3 == 2 )
    {
      a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
      strcpy(a1[1].m128i_i8, "device-cuda");
      a1->m128i_i64[1] = 11;
      return result;
    }
  }
  else
  {
    if ( v3 == 8 )
    {
      a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
      strcpy(a1[1].m128i_i8, "device-hip");
      a1->m128i_i64[1] = 10;
      return result;
    }
    if ( v3 == 16 )
    {
      a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
      strcpy(a1[1].m128i_i8, "device-sycl");
      a1->m128i_i64[1] = 11;
      return result;
    }
  }
  v5 = *(_DWORD *)(a2 + 60);
  if ( !v5 )
  {
    a1->m128i_i64[1] = 0;
    a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
    a1[1].m128i_i8[0] = 0;
    return result;
  }
  v18.m128i_i32[0] = 1953722216;
  v17 = 4;
  v16 = &v18;
  if ( (v5 & 2) != 0 )
  {
    v18.m128i_i32[1] = 1685414701;
    v6 = 9;
    v18.m128i_i16[4] = 97;
    v17 = 9;
    if ( (v5 & 8) == 0 )
    {
LABEL_14:
      if ( (v5 & 4) == 0 )
        goto LABEL_15;
      goto LABEL_23;
    }
    v7 = 13;
    v8 = 9;
  }
  else
  {
    v18.m128i_i8[4] = 0;
    v6 = 4;
    if ( (v5 & 8) == 0 )
      goto LABEL_14;
    v7 = 8;
    v8 = 4;
  }
  *(__int32 *)((char *)v18.m128i_i32 + v8) = 1885956141;
  v17 = v7;
  v16->m128i_i8[v7] = 0;
  v5 = *(_DWORD *)(a2 + 60);
  v6 = v17;
  if ( (v5 & 4) == 0 )
    goto LABEL_15;
  if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - v17) <= 6 )
    goto LABEL_40;
LABEL_23:
  v9 = v6 + 7;
  if ( v16 == &v18 )
    v10 = 15;
  else
    v10 = v18.m128i_i64[0];
  if ( v9 > v10 )
  {
    sub_998B30((__int64)&v16, v6, 0, "-openmp", 7u);
    result = a1;
  }
  else
  {
    v11 = &v16->m128i_i8[v6];
    *(_DWORD *)v11 = 1701867309;
    *((_WORD *)v11 + 2) = 28014;
    v11[6] = 112;
  }
  v17 = v6 + 7;
  v16->m128i_i8[v9] = 0;
  v5 = *(_DWORD *)(a2 + 60);
  v6 = v17;
LABEL_15:
  if ( (v5 & 0x10) != 0 )
  {
    if ( 0x7FFFFFFFFFFFFFFFLL - v6 > 4 )
    {
      v12 = v6 + 5;
      if ( v16 == &v18 )
        v13 = 15;
      else
        v13 = v18.m128i_i64[0];
      if ( v12 > v13 )
      {
        v15 = result;
        sub_998B30((__int64)&v16, v6, 0, "-sycl", 5u);
        result = v15;
      }
      else
      {
        v14 = &v16->m128i_i8[v6];
        *(_DWORD *)v14 = 1668903725;
        v14[4] = 108;
      }
      v17 = v6 + 5;
      v16->m128i_i8[v12] = 0;
      v6 = v17;
      goto LABEL_16;
    }
LABEL_40:
    std::__throw_length_error("basic_string::append");
  }
LABEL_16:
  result->m128i_i64[0] = (__int64)result[1].m128i_i64;
  if ( v16 == &v18 )
  {
    result[1] = _mm_load_si128(&v18);
  }
  else
  {
    result->m128i_i64[0] = (__int64)v16;
    result[1].m128i_i64[0] = v18.m128i_i64[0];
  }
  result->m128i_i64[1] = v6;
  return result;
}
