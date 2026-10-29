void __fastcall sub_21C5440(__int64 a1, __int64 *a2)
{
  unsigned __int64 *i; // rcx
  unsigned __int64 *v3; // rax
  unsigned __int64 v4; // r9
  __int64 v5; // xmm2_8^8
  unsigned __int64 v6; // rdx
  __m128i v7; // xmm0
  __m128i v8; // xmm3
  __int64 v9; // xmm4_8^8
  unsigned __int64 v10; // rdx
  __int64 *v11; // rax
  __m128i v12; // xmm5
  __m128i v13; // xmm5
  __m128i v14; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v15; // [rsp+10h] [rbp-18h]

  if ( (__int64 *)a1 != a2 )
  {
    for ( i = (unsigned __int64 *)(a1 + 24); a2 != (__int64 *)i; i += 3 )
    {
      v3 = i;
      v4 = *i;
      if ( *i >= *(_QWORD *)a1 )
      {
        v9 = _mm_loadu_si128((const __m128i *)i).m128i_i64[1];
        v10 = *(i - 3);
        v15 = i[2];
        v11 = (__int64 *)(i - 3);
        v14.m128i_i64[1] = v9;
        if ( v4 < v10 )
        {
          while ( 1 )
          {
            v11[3] = v10;
            v10 = *(v11 - 3);
            *((__m128i *)v11 + 2) = _mm_loadu_si128((const __m128i *)(v11 + 1));
            if ( v4 >= v10 )
              break;
            v11 -= 3;
          }
          v12 = _mm_loadu_si128((const __m128i *)&v14.m128i_u64[1]);
          *v11 = v4;
          *(__m128i *)(v11 + 1) = v12;
        }
        else
        {
          v13 = _mm_loadu_si128((const __m128i *)&v14.m128i_u64[1]);
          *i = v4;
          *(__m128i *)(i + 1) = v13;
        }
      }
      else
      {
        v5 = _mm_loadu_si128((const __m128i *)i).m128i_i64[1];
        v15 = i[2];
        v14.m128i_i64[1] = v5;
        v6 = 0xAAAAAAAAAAAAAAABLL * (((__int64)i - a1) >> 3);
        if ( (__int64)i - a1 > 0 )
        {
          do
          {
            v3 -= 3;
            v7 = _mm_loadu_si128((const __m128i *)(v3 + 1));
            v3[3] = *v3;
            *((__m128i *)v3 + 2) = v7;
            --v6;
          }
          while ( v6 );
        }
        v8 = _mm_loadu_si128((const __m128i *)&v14.m128i_u64[1]);
        *(_QWORD *)a1 = v4;
        *(__m128i *)(a1 + 8) = v8;
      }
    }
  }
}
