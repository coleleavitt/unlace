void __fastcall sub_F7CA80(__int64 a1, __int64 a2)
{
  const __m128i *v2; // rbx
  unsigned __int64 v4; // r14
  const __m128i *v5; // rdi
  __m128i si128; // xmm1
  char *v7; // r15
  __m128i v8; // xmm2
  __m128i v9; // xmm3
  __m128i v10; // xmm4
  __m128i v11; // xmm6
  __m128i v12; // xmm7
  __int64 v13; // rax
  const __m128i *v14; // [rsp+0h] [rbp-A0h] BYREF
  __m128 v15; // [rsp+8h] [rbp-98h] BYREF
  __m128 v16; // [rsp+18h] [rbp-88h] BYREF
  __m128i v17; // [rsp+28h] [rbp-78h] BYREF
  __m128i v18; // [rsp+38h] [rbp-68h] BYREF
  __m128i v19; // [rsp+48h] [rbp-58h] BYREF
  __int64 v20; // [rsp+58h] [rbp-48h]

  if ( a1 != a2 )
  {
    v2 = (const __m128i *)(a1 + 56);
    if ( a2 != a1 + 56 )
    {
      v14 = (const __m128i *)a1;
      v15 = _mm_loadh_ps((const double *)&v14);
      v4 = a1
         + 8
         * (0x6DB6DB6DB6DB6DB8LL * ((unsigned __int64)(a2 - 112 - a1) >> 3)
          - ((0xDB6DB6DB6DB6DB7LL * ((unsigned __int64)(a2 - 112 - a1) >> 3)) & 0x1FFFFFFFFFFFFFFFLL))
         + 112;
      do
      {
        while ( 1 )
        {
          si128 = _mm_load_si128((const __m128i *)&v15);
          v7 = &v2[3].m128i_i8[8];
          v14 = v2;
          v17 = si128;
          v16 = _mm_loadh_ps((const double *)&v14);
          if ( (unsigned __int8)sub_F7C540(&v16, (__int64 **)&v17) )
            break;
          v5 = v2;
          v2 = (const __m128i *)((char *)v2 + 56);
          sub_F7C970(v5);
          if ( v7 == (char *)v4 )
            return;
        }
        v8 = _mm_loadu_si128(v2);
        v9 = _mm_loadu_si128(v2 + 1);
        v10 = _mm_loadu_si128(v2 + 2);
        v20 = v2[3].m128i_i64[0];
        v17 = v8;
        v18 = v9;
        v19 = v10;
        if ( (__int64)v2->m128i_i64 - a1 > 0 )
          memmove(
            &v7[-8 * (((__int64)v2->m128i_i64 - a1) >> 3)],
            (char *)v2 - 8 * (((__int64)v2->m128i_i64 - a1) >> 3),
            (size_t)v2 - a1);
        v11 = _mm_load_si128(&v18);
        v2 = (const __m128i *)((char *)v2 + 56);
        v12 = _mm_load_si128(&v19);
        v13 = v20;
        *(__m128i *)a1 = _mm_load_si128(&v17);
        *(__m128i *)(a1 + 16) = v11;
        *(__m128i *)(a1 + 32) = v12;
        *(_QWORD *)(a1 + 48) = v13;
      }
      while ( v7 != (char *)v4 );
    }
  }
}
