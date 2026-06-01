_DWORD *__fastcall sub_583300(_QWORD *a1, _QWORD *a2)
{
  __m128i v3; // xmm0
  size_t v4; // rdi
  _DWORD *result; // rax
  _DWORD *v6; // rsi
  size_t v7; // rdx
  __int64 v8; // [rsp+8h] [rbp-20h]

  if ( *a2 )
  {
    v3 = _mm_loadl_epi64((const __m128i *)(*a2 - 8LL));
    v4 = 4LL * (unsigned int)_mm_cvtsi128_si32(v3) + 8;
  }
  else
  {
    v3.m128i_i64[0] = 0;
    v4 = 8;
  }
  v8 = v3.m128i_i64[0];
  result = (_DWORD *)sub_186B270(v4);
  *a1 = result + 2;
  v6 = (_DWORD *)*a2;
  *(_QWORD *)result = v3.m128i_i64[0];
  if ( v6 )
  {
    v7 = 4LL * (unsigned int)*(v6 - 1);
    if ( v7 <= 4 )
    {
      if ( v7 == 4 )
        result[2] = *v6;
    }
    else
    {
      return memmove(result + 2, v6, v7);
    }
  }
  return result;
}

