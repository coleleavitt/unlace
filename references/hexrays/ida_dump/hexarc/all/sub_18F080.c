__int64 __fastcall sub_18F080(__m128i *src, __m128i *a2)
{
  __m128i *i; // rbx
  __int64 v4; // rdi
  __int64 result; // rax
  __int64 v6; // rax
  __m128i v7; // xmm0
  __m128i v8; // xmm0
  __m128i v9; // [rsp+0h] [rbp-58h] BYREF
  __m128i v10; // [rsp+10h] [rbp-48h] BYREF
  __int64 v11; // [rsp+20h] [rbp-38h]

  if ( src != a2 )
  {
    for ( i = (__m128i *)((char *)src + 40); a2 != i; src[1] = v8 )
    {
      while ( i[1].m128i_i64[1] >= src[1].m128i_i64[1] )
      {
        v4 = (__int64)i;
        i = (__m128i *)((char *)i + 40);
        result = sub_18F000(v4);
        if ( a2 == i )
          return result;
      }
      v6 = i[2].m128i_i64[0];
      v9 = _mm_loadu_si128(i);
      v7 = _mm_loadu_si128(i + 1);
      v11 = v6;
      v10 = v7;
      if ( (char *)i - (char *)src <= 40 )
      {
        if ( (char *)i - (char *)src == 40 )
        {
          *i = _mm_loadu_si128(src);
          i[1] = _mm_loadu_si128(src + 1);
          i[2].m128i_i8[0] = src[2].m128i_i8[0];
        }
      }
      else
      {
        memmove(&src[2].m128i_u64[1], src, (char *)i - (char *)src);
      }
      result = (unsigned __int8)v11;
      i = (__m128i *)((char *)i + 40);
      *src = _mm_load_si128(&v9);
      v8 = _mm_load_si128(&v10);
      src[2].m128i_i8[0] = result;
    }
  }
  return result;
}
