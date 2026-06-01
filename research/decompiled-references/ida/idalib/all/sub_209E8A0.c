__int64 *__fastcall sub_209E8A0(const __m128i *a1)
{
  unsigned __int64 v1; // rcx
  __int64 *result; // rax
  __int64 v3; // rsi
  __int64 v4; // [rsp+8h] [rbp-20h]

  v1 = a1[1].m128i_u64[0];
  result = &a1[-2].m128i_i64[1];
  v3 = a1->m128i_i64[0];
  v4 = _mm_loadu_si128(a1).m128i_i64[1];
  if ( v1 < a1[-1].m128i_i64[1] )
  {
    while ( 1 )
    {
      result[3] = *result;
      result[4] = result[1];
      result[5] = result[2];
      if ( v1 >= *(result - 1) )
        break;
      result -= 3;
    }
  }
  else
  {
    result = (__int64 *)a1;
  }
  *result = v3;
  result[2] = v1;
  result[1] = v4;
  return result;
}
