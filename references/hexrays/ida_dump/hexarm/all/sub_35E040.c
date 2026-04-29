void __fastcall sub_35E040(__m128i *src, __m128i *a2)
{
  __m128i *i; // rbx
  _QWORD *v3; // rbp
  __int32 v4; // r14d
  unsigned __int64 v5; // rdx
  const __m128i *v6; // rax
  __m128i v7; // xmm0
  __m128i *v8; // rcx

  if ( src != a2 )
  {
    for ( i = src + 1; a2 != i; src->m128i_i32[2] = v4 )
    {
      while ( 1 )
      {
        v3 = (_QWORD *)i->m128i_i64[0];
        v4 = i->m128i_i32[2];
        v5 = *(_QWORD *)i->m128i_i64[0];
        if ( v5 < *(_QWORD *)src->m128i_i64[0] )
          break;
        v6 = i - 1;
        if ( v5 >= *(_QWORD *)i[-1].m128i_i64[0] )
        {
          i->m128i_i64[0] = (__int64)v3;
          i->m128i_i32[2] = v4;
        }
        else
        {
          do
          {
            v7 = _mm_loadu_si128(v6);
            v8 = (__m128i *)v6--;
            v6[2] = v7;
          }
          while ( *v3 < *(_QWORD *)v6->m128i_i64[0] );
          v8->m128i_i64[0] = (__int64)v3;
          v8->m128i_i32[2] = v4;
        }
        if ( a2 == ++i )
          return;
      }
      if ( (char *)i - (char *)src <= 16 )
      {
        if ( (char *)i - (char *)src == 16 )
          *i = _mm_loadu_si128(src);
      }
      else
      {
        memmove(&src[1], src, (char *)i - (char *)src);
      }
      ++i;
      src->m128i_i64[0] = (__int64)v3;
    }
  }
}
