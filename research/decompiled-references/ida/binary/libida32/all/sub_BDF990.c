__m128 *__fastcall sub_BDF990(__m128 *a1, __int64 a2)
{
  __m128 *result; // rax
  double v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rsi
  __m128 v6; // xmm0
  double v7[2]; // [rsp+0h] [rbp-78h] BYREF
  __m128i v8; // [rsp+10h] [rbp-68h]
  __m128i v9; // [rsp+30h] [rbp-48h] BYREF

  result = a1;
  if ( *(char *)(a2 + 2) < 0 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(**(_QWORD **)(a2 + 16) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 6 )
    {
      *(_QWORD *)&v7[1] = a1;
      sub_ECEDE0(&v9);
      v5 = v9.m128i_i64[0];
      v7[0] = 0.0;
      result = a1;
      v8 = _mm_load_si128(&v9);
      v4 = v8.m128i_i64[1];
    }
    else
    {
      v7[0] = 0.0;
      v4 = 0;
      v5 = 0;
    }
  }
  else
  {
    *(_QWORD *)&v3 = a2 + 24;
    v4 = 0;
    v5 = a2 + 16;
    v7[0] = v3;
  }
  v6 = _mm_loadh_ps(v7);
  result->m128_u64[0] = v5;
  result->m128_u64[1] = v4;
  result[1] = v6;
  result[2].m128_u64[0] = 0;
  result[2].m128_u64[1] = 0;
  return result;
}

