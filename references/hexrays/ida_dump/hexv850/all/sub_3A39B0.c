void __fastcall sub_3A39B0(__m128i *src, __m128i *a2)
{
  __m128i *i; // rbx
  __int64 v4; // rdi
  __int32 v5; // edx
  __int32 v6; // eax
  __int64 v7; // rax
  __m128i v8; // xmm0
  char v9; // al
  __m128i v10; // xmm0
  __m128i v11; // [rsp+0h] [rbp-58h] BYREF
  __m128i v12; // [rsp+10h] [rbp-48h] BYREF
  __int64 v13; // [rsp+20h] [rbp-38h]

  if ( src != a2 )
  {
    for ( i = (__m128i *)((char *)src + 40); a2 != i; src[1] = v10 )
    {
      while ( 1 )
      {
        v5 = i[1].m128i_i32[0];
        v6 = src[1].m128i_i32[0];
        if ( v5 < v6 || i[1].m128i_i32[1] < src[1].m128i_i32[1] && v5 == v6 )
          break;
        v4 = (__int64)i;
        i = (__m128i *)((char *)i + 40);
        sub_3A3840(v4);
        if ( a2 == i )
          return;
      }
      v7 = i[2].m128i_i64[0];
      v11 = _mm_loadu_si128(i);
      v8 = _mm_loadu_si128(i + 1);
      v13 = v7;
      v12 = v8;
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
      v9 = v13;
      i = (__m128i *)((char *)i + 40);
      *src = _mm_load_si128(&v11);
      v10 = _mm_load_si128(&v12);
      src[2].m128i_i8[0] = v9;
    }
  }
}
