void __fastcall sub_2A2590(__m128i *src, __m128i *a2, __int64 (__fastcall *a3)(__m128i *, char *))
{
  __m128i *v4; // rbx
  char i; // al
  __m128i si128; // xmm0
  __int32 v8; // r15d
  const __m128i *v9; // rdi
  __m128i v10[4]; // [rsp+0h] [rbp-48h] BYREF

  if ( src != a2 )
  {
    v4 = (__m128i *)((char *)src + 20);
    if ( a2 != (__m128i *)((char *)src[1].m128i_i64 + 4) )
    {
      for ( i = a3(v4, src->m128i_i8); ; i = a3(v4, src->m128i_i8) )
      {
        if ( i )
        {
          si128 = _mm_loadu_si128(v4);
          v8 = v4[1].m128i_i32[0];
          if ( (char *)v4 - (char *)src <= 20 )
          {
            if ( (char *)v4 - (char *)src == 20 )
            {
              *v4 = _mm_loadu_si128(src);
              v4[1].m128i_i32[0] = src[1].m128i_i32[0];
            }
          }
          else
          {
            v10[0] = si128;
            memmove((char *)src[1].m128i_i64 + 4, src, (char *)v4 - (char *)src);
            si128 = _mm_load_si128(v10);
          }
          v4 = (__m128i *)((char *)v4 + 20);
          src[1].m128i_i32[0] = v8;
          *src = si128;
          if ( a2 == v4 )
            return;
        }
        else
        {
          v9 = v4;
          v4 = (__m128i *)((char *)v4 + 20);
          sub_2A2500(v9, a3);
          if ( a2 == v4 )
            return;
        }
      }
    }
  }
}
