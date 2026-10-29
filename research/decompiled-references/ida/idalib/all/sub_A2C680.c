void __fastcall sub_A2C680(unsigned int *a1, unsigned int *a2)
{
  __m128i *v2; // r14
  __int64 m128i_i64; // r15
  unsigned int *v5; // rbp
  __m128i *v6; // r13
  __m128i v7; // xmm2
  __int64 v8; // r14
  unsigned __int64 v9; // rbp
  __int64 v10; // rdi
  __int64 v11; // rdi
  unsigned __int64 v12; // [rsp+0h] [rbp-100h]
  __m128i v13; // [rsp+8h] [rbp-F8h] BYREF
  _BYTE v14[232]; // [rsp+18h] [rbp-E8h] BYREF

  if ( a1 != a2 )
  {
    v2 = (__m128i *)(a1 + 48);
    if ( a2 != a1 + 48 )
    {
      v12 = (unsigned __int64)a1 + (((char *)(a2 - 96) - (char *)a1) & 0xFFFFFFFFFFFFFFC0LL) + 384;
      do
      {
        m128i_i64 = (__int64)v2[1].m128i_i64;
        v5 = (unsigned int *)&v2[-12];
        v6 = v2 + 12;
        if ( (unsigned __int8)sub_A09E20((unsigned int *)v2, a1) )
        {
          v7 = _mm_loadu_si128(v2);
          v8 = (char *)v2 - (char *)a1;
          v13 = v7;
          sub_A0A250((__int64)v14, m128i_i64);
          v9 = 0xAAAAAAAAAAAAAAABLL * (v8 >> 6);
          if ( v8 > 0 )
          {
            do
            {
              v10 = m128i_i64;
              *(__m128i *)(m128i_i64 - 16) = _mm_loadu_si128((const __m128i *)(m128i_i64 - 208));
              m128i_i64 -= 192;
              sub_A1D050(v10, m128i_i64);
              --v9;
            }
            while ( v9 );
          }
          *(__m128i *)a1 = _mm_load_si128(&v13);
          sub_A1D050((__int64)(a1 + 4), (__int64)v14);
          sub_A09D30((__int64)v14);
        }
        else
        {
          v13 = _mm_loadu_si128(v2);
          sub_A0A250((__int64)v14, (__int64)v2[1].m128i_i64);
          while ( (unsigned __int8)sub_A09E20((unsigned int *)&v13, v5) )
          {
            v11 = m128i_i64;
            v5 = (unsigned int *)(m128i_i64 - 400);
            *(__m128i *)(m128i_i64 - 16) = _mm_loadu_si128((const __m128i *)(m128i_i64 - 208));
            m128i_i64 -= 192;
            sub_A1D050(v11, m128i_i64);
          }
          *(__m128i *)(m128i_i64 - 16) = _mm_load_si128(&v13);
          sub_A1D050(m128i_i64, (__int64)v14);
          sub_A09D30((__int64)v14);
        }
        v2 = v6;
      }
      while ( v6 != (__m128i *)v12 );
    }
  }
}
