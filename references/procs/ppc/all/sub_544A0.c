void __fastcall sub_544A0(__m128i *src, __m128i *a2)
{
  __int8 *v2; // rbx
  __int8 *v3; // r12
  __int64 v4; // rbp
  __int64 v5; // r15
  __int16 v6; // r14
  const __m128i *v7; // rax
  __m128i v8; // xmm0
  __m128i *v9; // rdx

  if ( src != a2 )
  {
    v2 = &src[1].m128i_i8[8];
    if ( a2 != (__m128i *)&src[1].m128i_u64[1] )
    {
      v3 = &src[3].m128i_i8[((char *)&a2[-3] - (char *)src) & 0xFFFFFFFFFFFFFFF8LL];
      do
      {
        while ( 1 )
        {
          v4 = *(_QWORD *)v2;
          v5 = *((_QWORD *)v2 + 1);
          v6 = *((_WORD *)v2 + 8);
          if ( *(_QWORD *)v2 < src->m128i_i64[0] )
            break;
          v7 = (const __m128i *)(v2 - 24);
          if ( v4 >= *((_QWORD *)v2 - 3) )
          {
            *(_QWORD *)v2 = v4;
            *((_QWORD *)v2 + 1) = v5;
            *((_WORD *)v2 + 8) = v6;
          }
          else
          {
            do
            {
              v8 = _mm_loadu_si128(v7);
              v7[2].m128i_i64[1] = v7[1].m128i_i64[0];
              v9 = (__m128i *)v7;
              v7 = (const __m128i *)((char *)v7 - 24);
              v7[3] = v8;
            }
            while ( v4 < v7->m128i_i64[0] );
            v9->m128i_i64[0] = v4;
            v9->m128i_i64[1] = v5;
            v9[1].m128i_i16[0] = v6;
          }
          v2 += 24;
          if ( v2 == v3 )
            return;
        }
        if ( v2 - (__int8 *)src <= 24 )
        {
          if ( v2 - (__int8 *)src == 24 )
          {
            *(__m128i *)v2 = _mm_loadu_si128(src);
            *((_QWORD *)v2 + 2) = src[1].m128i_i64[0];
          }
        }
        else
        {
          memmove(&src[1].m128i_u64[1], src, v2 - (__int8 *)src);
        }
        v2 += 24;
        src->m128i_i64[0] = v4;
        src->m128i_i64[1] = v5;
        src[1].m128i_i16[0] = v6;
      }
      while ( v2 != v3 );
    }
  }
}
