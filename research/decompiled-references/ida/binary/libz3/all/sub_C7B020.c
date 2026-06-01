char *__fastcall sub_C7B020(_QWORD *a1, char **a2)
{
  __m128i v3; // xmm0
  size_t v4; // rdi
  char *result; // rax
  char *v6; // rsi
  size_t v7; // rdx
  __int64 v8; // [rsp+8h] [rbp-20h]

  if ( *a2 )
  {
    v3 = _mm_loadl_epi64((const __m128i *)(*a2 - 8));
    v4 = (unsigned int)_mm_cvtsi128_si32(v3) + 8LL;
  }
  else
  {
    v3.m128i_i64[0] = 0;
    v4 = 8;
  }
  v8 = v3.m128i_i64[0];
  result = (char *)sub_186B270(v4);
  *a1 = result + 8;
  v6 = *a2;
  *(_QWORD *)result = v3.m128i_i64[0];
  if ( v6 )
  {
    v7 = *((unsigned int *)v6 - 1);
    if ( v7 <= 1 )
    {
      if ( v7 == 1 )
        result[8] = *v6;
    }
    else
    {
      return (char *)memmove(result + 8, v6, v7);
    }
  }
  return result;
}

