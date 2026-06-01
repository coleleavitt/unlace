void __fastcall sub_A2B6F0(unsigned int *a1, unsigned int *a2)
{
  __m128i *v2; // r14
  unsigned int *v4; // r12
  __int64 m128i_i64; // r15
  __m128i *v6; // rbx
  __m128i v7; // xmm2
  __int64 v8; // r14
  const __m128i *v9; // rsi
  __int64 v10; // r15
  __m128i *v11; // r12
  __m128i *v12; // r14
  __m128i *v13; // rdi
  __int64 v14; // rdi
  unsigned __int64 v15; // [rsp+8h] [rbp-C0h]
  __m128i v16; // [rsp+10h] [rbp-B8h] BYREF
  __m128i v17[10]; // [rsp+20h] [rbp-A8h] BYREF

  if ( a1 != a2 )
  {
    v2 = (__m128i *)(a1 + 32);
    if ( a2 != a1 + 32 )
    {
      v15 = (unsigned __int64)a1 + (((char *)(a2 - 64) - (char *)a1) & 0xFFFFFFFFFFFFFF80LL) + 256;
      do
      {
        v4 = (unsigned int *)&v2[-8];
        m128i_i64 = (__int64)v2[1].m128i_i64;
        v6 = v2 + 8;
        if ( (unsigned __int8)sub_A09E20((unsigned int *)v2, a1) )
        {
          v7 = _mm_loadu_si128(v2);
          v8 = (char *)v2 - (char *)a1;
          v9 = (const __m128i *)m128i_i64;
          v16 = v7;
          v10 = v8 >> 7;
          sub_A0A1C0(v17, v9);
          if ( v8 > 0 )
          {
            v11 = v6;
            do
            {
              v12 = v11 - 16;
              v13 = v11;
              v11 -= 8;
              *v11 = _mm_loadu_si128(v11 - 8);
              sub_A0AAD0((__int64)v13[-7].m128i_i64, (__m128i *)v11[-7].m128i_i64);
              v11[3].m128i_i8[0] = v12[3].m128i_i8[0] & 8
                                 | v12[3].m128i_i8[0] & 4
                                 | v12[3].m128i_i8[0] & 2
                                 | v12[3].m128i_i8[0] & 1
                                 | v11[3].m128i_i8[0] & 0xF0;
              sub_A0AAD0((__int64)&v11[3].m128i_i64[1], &v11[-5].m128i_i64[1]);
              v11[5].m128i_i8[8] = v12[5].m128i_i8[8] & 6 | v12[5].m128i_i8[8] & 1 | v11[5].m128i_i8[8] & 0xF8;
              sub_A0AAD0((__int64)v11[6].m128i_i64, (__m128i *)v11[-2].m128i_i64);
              --v10;
            }
            while ( v10 );
          }
          *(__m128i *)a1 = _mm_load_si128(&v16);
          sub_A0B090((__int64)(a1 + 4), (__int64)v17);
          sub_A09CE0((__int64)v17);
        }
        else
        {
          v16 = _mm_loadu_si128(v2);
          sub_A0A1C0(v17, v2 + 1);
          while ( (unsigned __int8)sub_A09E20((unsigned int *)&v16, v4) )
          {
            v14 = m128i_i64;
            v4 = (unsigned int *)(m128i_i64 - 272);
            *(__m128i *)(m128i_i64 - 16) = _mm_loadu_si128((const __m128i *)(m128i_i64 - 144));
            m128i_i64 -= 128;
            sub_A0B090(v14, m128i_i64);
          }
          *(__m128i *)(m128i_i64 - 16) = _mm_load_si128(&v16);
          sub_A0B090(m128i_i64, (__int64)v17);
          sub_A09CE0((__int64)v17);
        }
        v2 = v6;
      }
      while ( v6 != (__m128i *)v15 );
    }
  }
}
