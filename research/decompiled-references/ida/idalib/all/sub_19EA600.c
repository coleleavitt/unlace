void __fastcall sub_19EA600(__m128i *a1, __m128i *a2, __int64 a3)
{
  __m128i *v3; // rbx
  __m128i *v5; // r12
  __m128i v6; // xmm3
  __m128i v7; // xmm1
  int v8; // edx
  __m128i *v9; // r15
  __m128i v10; // xmm5
  __m128i v11; // xmm7
  __m128i si128; // xmm7
  __m128i v13; // [rsp+0h] [rbp-58h] BYREF
  __m128i v14[4]; // [rsp+10h] [rbp-48h] BYREF

  if ( a1 != a2 )
  {
    v3 = a1 + 2;
    if ( a2 != &a1[2] )
    {
      do
      {
        v5 = v3 + 2;
        if ( sub_10246C0(a3, v3[1].m128i_i32[0], a1[1].m128i_i32[0]) )
        {
          v11 = _mm_loadu_si128(v3 + 1);
          v13 = _mm_loadu_si128(v3);
          v14[0] = v11;
          if ( (char *)v3 - (char *)a1 > 0 )
            memmove(
              &v5[-2 * (((char *)v3 - (char *)a1) >> 5)],
              &v3[-2 * (((char *)v3 - (char *)a1) >> 5)],
              (char *)v3 - (char *)a1);
          si128 = _mm_load_si128(v14);
          *a1 = _mm_load_si128(&v13);
          a1[1] = si128;
        }
        else
        {
          v6 = _mm_loadu_si128(v3 + 1);
          v13 = _mm_loadu_si128(v3);
          v14[0] = v6;
          while ( 1 )
          {
            v8 = v3[-1].m128i_i32[0];
            v9 = v3;
            v3 -= 2;
            if ( !sub_10246C0(a3, v14[0].m128i_i32[0], v8) )
              break;
            v7 = _mm_loadu_si128(v3 + 1);
            v3[2] = _mm_loadu_si128(v3);
            v3[3] = v7;
          }
          v10 = _mm_load_si128(v14);
          *v9 = _mm_load_si128(&v13);
          v9[1] = v10;
        }
        v3 = v5;
      }
      while ( v5 != (__m128i *)&a1[4].m128i_i8[((char *)&a2[-4] - (char *)a1) & 0xFFFFFFFFFFFFFFE0LL] );
    }
  }
}
