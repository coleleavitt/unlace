void __fastcall sub_3EB460(__m128i *a1, __m128i *a2)
{
  __m128i *v2; // rbx
  unsigned __int16 v3; // di
  unsigned __int64 v4; // rcx
  __m128i *i; // rax
  unsigned __int64 v6; // rdx
  __m128i v7; // xmm0

  if ( (char *)a2 - (char *)a1 <= 256 )
  {
    sub_3EB320(a1, a2);
  }
  else
  {
    v2 = a1 + 16;
    sub_3EB320(a1, a1 + 16);
    if ( a2 != &a1[16] )
    {
      do
      {
        v3 = v2->m128i_u16[4];
        v4 = v2->m128i_i64[0];
        for ( i = v2; ; i[1] = v7 )
        {
          v6 = i[-1].m128i_u64[0];
          if ( v4 >= v6 && (v6 < v4 || v3 >= (unsigned int)i[-1].m128i_i16[4]) )
            break;
          v7 = _mm_loadu_si128(--i);
        }
        ++v2;
        i->m128i_i64[0] = v4;
        i->m128i_i16[4] = v3;
      }
      while ( a2 != v2 );
    }
  }
}
