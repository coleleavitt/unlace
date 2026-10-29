void __fastcall sub_4CDD30(__m128i *src, __m128i *a2)
{
  double *m128i_i64; // rbp
  __int64 v5; // rbx
  const __m128i *v6; // r15
  const char *v7; // rsi
  int v8; // eax
  const char *v9; // rdi
  __int64 v10; // rax
  __m128i *v11; // r12
  __m128i v12; // [rsp+0h] [rbp-58h] BYREF
  const char *v13; // [rsp+18h] [rbp-40h]

  if ( src != a2 )
  {
    m128i_i64 = (double *)src[1].m128i_i64;
    if ( a2 != &src[1] )
    {
      do
      {
        v5 = *(_QWORD *)m128i_i64;
        v6 = (const __m128i *)m128i_i64;
        v7 = *(const char **)(src->m128i_i64[0] + 24);
        v13 = *(const char **)(*(_QWORD *)m128i_i64 + 24LL);
        v8 = strcmp(v13, v7);
        v9 = v13;
        v12 = (__m128i)_mm_loadh_ps(m128i_i64 + 1);
        if ( v8 >= 0 )
        {
          while ( 1 )
          {
            v10 = v6[-1].m128i_i64[0];
            v11 = (__m128i *)v6--;
            if ( strcmp(v9, *(const char **)(v10 + 24)) >= 0 )
              break;
            v6[1] = _mm_loadu_si128(v6);
            v9 = *(const char **)(v5 + 24);
          }
          *v11 = _mm_load_si128(&v12);
        }
        else
        {
          if ( (char *)m128i_i64 - (char *)src <= 16 )
          {
            if ( (char *)m128i_i64 - (char *)src == 16 )
              *(__m128i *)m128i_i64 = _mm_loadu_si128(src);
          }
          else
          {
            memmove(&src[1], src, (char *)m128i_i64 - (char *)src);
          }
          *src = _mm_load_si128(&v12);
        }
        m128i_i64 += 2;
      }
      while ( a2 != (__m128i *)m128i_i64 );
    }
  }
}

