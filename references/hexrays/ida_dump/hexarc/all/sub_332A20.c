void __fastcall sub_332A20(const char **src, const char **a2)
{
  __m128i *v2; // rbp
  const char *v3; // rbx
  const __m128i *v4; // r15
  int v5; // eax
  __int32 v6; // r14d
  const char *v7; // rsi
  __m128i *v8; // r12

  if ( src != a2 )
  {
    v2 = (__m128i *)(src + 2);
    if ( a2 != src + 2 )
    {
      do
      {
        v3 = (const char *)v2->m128i_i64[0];
        v4 = v2;
        v5 = strcmp((const char *)v2->m128i_i64[0], *src);
        v6 = v2->m128i_i32[2];
        if ( v5 >= 0 )
        {
          while ( 1 )
          {
            v7 = (const char *)v4[-1].m128i_i64[0];
            v8 = (__m128i *)v4--;
            if ( strcmp(v3, v7) >= 0 )
              break;
            v4[1] = _mm_loadu_si128(v4);
          }
          v8->m128i_i64[0] = (__int64)v3;
          v8->m128i_i32[2] = v6;
        }
        else
        {
          if ( (char *)v2 - (char *)src <= 16 )
          {
            if ( (char *)v2 - (char *)src == 16 )
              *v2 = _mm_loadu_si128((const __m128i *)src);
          }
          else
          {
            memmove(src + 2, src, (char *)v2 - (char *)src);
          }
          *src = v3;
          *((_DWORD *)src + 2) = v6;
        }
        ++v2;
      }
      while ( a2 != (const char **)v2 );
    }
  }
}
