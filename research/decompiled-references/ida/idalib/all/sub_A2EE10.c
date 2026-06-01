void __fastcall sub_A2EE10(unsigned int *a1, unsigned int *a2)
{
  __m128i *v2; // r14
  __m128i *v4; // rbp
  __int64 m128i_i64; // r15
  __int64 v6; // rdx
  unsigned __int64 v7; // r14
  __int64 v8; // rdi
  unsigned __int64 v9; // [rsp+0h] [rbp-1C8h]
  __int64 v10; // [rsp+8h] [rbp-1C0h]
  __m128i v11; // [rsp+10h] [rbp-1B8h] BYREF
  _BYTE v12[424]; // [rsp+20h] [rbp-1A8h] BYREF

  if ( a1 != a2 )
  {
    v2 = (__m128i *)(a1 + 96);
    if ( a2 != a1 + 96 )
    {
      v9 = (unsigned __int64)a1 + (((char *)(a2 - 192) - (char *)a1) & 0xFFFFFFFFFFFFFF80LL) + 768;
      v10 = (__int64)(a1 + 4);
      do
      {
        v4 = v2 + 24;
        if ( (unsigned __int8)sub_A09E20((unsigned int *)v2, a1) )
        {
          m128i_i64 = (__int64)v2[1].m128i_i64;
          v11 = _mm_loadu_si128(v2);
          sub_A0A4A0((__int64)v12, (__int64)v2[1].m128i_i64);
          v6 = (char *)v2 - (char *)a1;
          v7 = 0xAAAAAAAAAAAAAAABLL * (((char *)v2 - (char *)a1) >> 7);
          if ( v6 > 0 )
          {
            do
            {
              v8 = m128i_i64;
              *(__m128i *)(m128i_i64 - 16) = _mm_loadu_si128((const __m128i *)(m128i_i64 - 400));
              m128i_i64 -= 384;
              sub_A2E800(v8, m128i_i64);
              --v7;
            }
            while ( v7 );
          }
          *(__m128i *)a1 = _mm_load_si128(&v11);
          sub_A2E800(v10, (__int64)v12);
          sub_A0A3E0((__int64)v12);
        }
        else
        {
          sub_A2ED70(v2);
        }
        v2 = v4;
      }
      while ( v4 != (__m128i *)v9 );
    }
  }
}
