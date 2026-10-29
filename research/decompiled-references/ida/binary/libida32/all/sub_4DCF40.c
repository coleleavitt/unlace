void __fastcall sub_4DCF40(__m128i *src, __m128i *a2)
{
  __m128i *i; // rbx
  __m128i v3; // xmm0
  unsigned int v4; // ecx
  __int64 *v5; // rax
  __int64 *v6; // rdx
  __int64 v7; // [rsp+0h] [rbp-30h]

  if ( src != a2 )
  {
    for ( i = (__m128i *)&src->m128i_u64[1]; a2 != i; src->m128i_i64[0] = v3.m128i_i64[0] )
    {
      while ( 1 )
      {
        v3 = _mm_loadl_epi64(i);
        v4 = _mm_cvtsi128_si32(v3);
        if ( v4 < src->m128i_i32[0] )
          break;
        v5 = &i[-1].m128i_i64[1];
        if ( v4 >= i[-1].m128i_i32[2] )
        {
          i->m128i_i64[0] = v3.m128i_i64[0];
        }
        else
        {
          do
          {
            v5[1] = *v5;
            v6 = v5--;
          }
          while ( v4 < *(_DWORD *)v5 );
          *v6 = v3.m128i_i64[0];
        }
        i = (__m128i *)((char *)i + 8);
        if ( a2 == i )
          return;
      }
      if ( (char *)i - (char *)src <= 8 )
      {
        if ( (char *)i - (char *)src == 8 )
          i->m128i_i64[0] = src->m128i_i64[0];
      }
      else
      {
        v7 = v3.m128i_i64[0];
        memmove(&src->m128i_u64[1], src, (char *)i - (char *)src);
        v3.m128i_i64[0] = v7;
      }
      i = (__m128i *)((char *)i + 8);
    }
  }
}

