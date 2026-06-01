void __fastcall sub_A09690(__m128i *a1, __m128i *a2)
{
  __m128i *v2; // r15
  __m128i *v4; // rbp
  __int64 m128i_i64; // r13
  __int64 v6; // rcx
  unsigned __int64 v7; // r15
  const __m128i *v8; // rsi
  __m128i *v9; // rdi
  unsigned __int64 v10; // [rsp+0h] [rbp-188h]
  __m128i v11; // [rsp+10h] [rbp-178h] BYREF
  _BYTE v12[176]; // [rsp+20h] [rbp-168h] BYREF
  __m128i v13[11]; // [rsp+D0h] [rbp-B8h] BYREF

  if ( a1 != a2 )
  {
    v2 = a1 + 20;
    if ( a2 != &a1[20] )
    {
      v10 = (unsigned __int64)a1[40].m128i_u64 + (((char *)&a2[-40] - (char *)a1) & 0xFFFFFFFFFFFFFFC0LL);
      do
      {
        v4 = v2 + 20;
        if ( (unsigned __int8)sub_9E60E0((unsigned int *)v2, (unsigned int *)a1) )
        {
          m128i_i64 = (__int64)v2[1].m128i_i64;
          v11 = _mm_loadu_si128(v2);
          sub_9E6510((__int64)v12, (__int64)v2[1].m128i_i64);
          sub_9FD280(v13, v2 + 12);
          v6 = (char *)v2 - (char *)a1;
          v7 = 0xCCCCCCCCCCCCCCCDLL * (((char *)v2 - (char *)a1) >> 6);
          if ( v6 > 0 )
          {
            do
            {
              *(__m128i *)(m128i_i64 - 16) = _mm_loadu_si128((const __m128i *)(m128i_i64 - 336));
              sub_9F9310(m128i_i64, m128i_i64 - 320);
              v8 = (const __m128i *)(m128i_i64 - 144);
              v9 = (__m128i *)(m128i_i64 + 176);
              m128i_i64 -= 320;
              sub_A08F80(v9, v8);
              --v7;
            }
            while ( v7 );
          }
          *a1 = _mm_load_si128(&v11);
          sub_9F9310((__int64)a1[1].m128i_i64, (__int64)v12);
          sub_A08F80(a1 + 12, v13);
          sub_9FC080((__int64)v12);
        }
        else
        {
          sub_A095C0(v2);
        }
        v2 = v4;
      }
      while ( v4 != (__m128i *)v10 );
    }
  }
}

