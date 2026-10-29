_QWORD *__fastcall sub_593C00(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbp
  _QWORD *result; // rax
  __m128i v4; // xmm0
  _QWORD *v5; // rsi
  size_t v6; // rdx
  __int64 v7; // [rsp+8h] [rbp-20h]

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 24LL);
  result = (_QWORD *)(v2 + 8);
  if ( a2 != (_QWORD *)(v2 + 8) )
  {
    if ( *a2 )
      sub_186B220((void *)(*a2 - 8LL));
    result = *(_QWORD **)(v2 + 8);
    if ( result )
    {
      v4 = _mm_loadl_epi64((const __m128i *)(result - 1));
      v7 = v4.m128i_i64[0];
      result = (_QWORD *)sub_186B270(8LL * (unsigned int)_mm_cvtsi128_si32(v4) + 8);
      *a2 = result + 1;
      v5 = *(_QWORD **)(v2 + 8);
      *result = v4.m128i_i64[0];
      if ( v5 )
      {
        v6 = 8LL * *((unsigned int *)v5 - 1);
        if ( v6 <= 8 )
        {
          if ( v6 == 8 )
            result[1] = *v5;
        }
        else
        {
          return memmove(result + 1, v5, v6);
        }
      }
    }
    else
    {
      *a2 = 0;
    }
  }
  return result;
}

