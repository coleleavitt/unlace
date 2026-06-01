void __fastcall sub_A046F0(unsigned int *a1, unsigned int *a2)
{
  __m128i *v2; // r15
  unsigned int *v4; // rbp
  __int64 m128i_i64; // r14
  __m128i *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // r15
  __m128i *v9; // rbp
  __m128i *v10; // r14
  __m128i *v11; // rdi
  __int64 v12; // rdi
  __m128i v13; // [rsp+8h] [rbp-98h] BYREF
  _BYTE v14[136]; // [rsp+18h] [rbp-88h] BYREF

  if ( a1 != a2 )
  {
    v2 = (__m128i *)(a1 + 22);
    if ( a2 != a1 + 22 )
    {
      do
      {
        v4 = &v2[-6].m128i_u32[2];
        m128i_i64 = (__int64)v2[1].m128i_i64;
        v6 = (__m128i *)((char *)v2 + 88);
        if ( (unsigned __int8)sub_9E60E0((unsigned int *)v2, a1) )
        {
          v13 = _mm_loadu_si128(v2);
          sub_9E61E0((__int64)v14, (__int64)v2[1].m128i_i64);
          v7 = (char *)v2 - (char *)a1;
          v8 = 0x2E8BA2E8BA2E8BA3LL * (((char *)v2 - (char *)a1) >> 3);
          if ( v7 > 0 )
          {
            v9 = v6;
            do
            {
              v10 = v9 - 11;
              v11 = v9;
              v9 = (__m128i *)((char *)v9 - 88);
              *v9 = _mm_loadu_si128((__m128i *)((char *)v9 - 88));
              sub_9E6D90((__int64)&v11[-5].m128i_i64[1], &v9[-5].m128i_i64[1]);
              v9[3].m128i_i8[0] = v10[3].m128i_i8[0] & 8
                                | v10[3].m128i_i8[0] & 4
                                | v10[3].m128i_i8[0] & 2
                                | v10[3].m128i_i8[0] & 1
                                | v9[3].m128i_i8[0] & 0xF0;
              sub_9E6D90((__int64)&v9[3].m128i_i64[1], (__m128i *)v9[-2].m128i_i64);
              --v8;
            }
            while ( v8 );
          }
          *(__m128i *)a1 = _mm_load_si128(&v13);
          sub_A043E0((__int64)(a1 + 4), (__int64)v14);
          sub_9E5EF0((__int64)v14);
        }
        else
        {
          v13 = _mm_loadu_si128(v2);
          sub_9E61E0((__int64)v14, (__int64)v2[1].m128i_i64);
          while ( (unsigned __int8)sub_9E60E0((unsigned int *)&v13, v4) )
          {
            v12 = m128i_i64;
            v4 = (unsigned int *)(m128i_i64 - 192);
            *(__m128i *)(m128i_i64 - 16) = _mm_loadu_si128((const __m128i *)(m128i_i64 - 104));
            m128i_i64 -= 88;
            sub_A043E0(v12, m128i_i64);
          }
          *(__m128i *)(m128i_i64 - 16) = _mm_load_si128(&v13);
          sub_A043E0(m128i_i64, (__int64)v14);
          sub_9E5EF0((__int64)v14);
        }
        v2 = v6;
      }
      while ( a2 != (unsigned int *)v6 );
    }
  }
}

