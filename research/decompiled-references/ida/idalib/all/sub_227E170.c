void *__fastcall sub_227E170(__m128i *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx
  __int64 v6; // rsi
  void *result; // rax
  __int64 v8; // rdi
  unsigned __int64 v9; // r12
  __m128i v10; // xmm0
  __m128i v11; // xmm0
  __m128i v12[2]; // [rsp+8h] [rbp-20h] BYREF

  v5 = a1[2].m128i_i64[1];
  v6 = a1[2].m128i_i64[0];
  result = (void *)a1[1].m128i_i64[1];
  if ( v5 >= v6 )
  {
    v8 = (v6 + 1) / 2;
    v9 = 3 * v8;
    if ( v6 < 3 * v8 )
    {
      if ( v9 <= 0x1FFFFFFFFFFFFFFFLL )
      {
        v12[0].m128i_i64[0] = a3;
        result = realloc(result, 24 * v8);
        a3 = v12[0].m128i_i64[0];
        if ( result )
        {
          a1[1].m128i_i64[1] = (__int64)result;
          v5 = a1[2].m128i_i64[1];
          a1[2].m128i_i64[0] = v9;
        }
        else
        {
          if ( !a1[1].m128i_i32[0] )
            a1[1].m128i_i32[0] = 12;
          v5 = a1[2].m128i_i64[1];
          v12[0].m128i_i64[0] = (__int64)&unk_2D0ADA8;
          v11 = _mm_loadl_epi64(v12);
          result = (void *)a1[1].m128i_i64[1];
          *a1 = _mm_unpacklo_epi64(v11, v11);
        }
      }
      else
      {
        if ( !a1[1].m128i_i32[0] )
          a1[1].m128i_i32[0] = 12;
        v12[0].m128i_i64[0] = (__int64)&unk_2D0ADA8;
        v10 = _mm_loadl_epi64(v12);
        *a1 = _mm_unpacklo_epi64(v10, v10);
      }
    }
  }
  a1[2].m128i_i64[1] = v5 + 1;
  *((_QWORD *)result + v5) = a3 | a2;
  return result;
}
