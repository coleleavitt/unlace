void __fastcall sub_394250(__m128i *a1, __m128i *a2, unsigned __int8 (__fastcall *a3)(__int64 *, __int64 *))
{
  __m128i *v3; // rbx
  __int64 *v6; // rdi
  __m128i *v7; // r14
  __int64 v8; // rax
  __m128i v9; // xmm2
  __m128i v10; // xmm0
  __m128i v11; // xmm3
  __m128i v12; // xmm1
  __int64 v13; // rax
  unsigned __int64 v14; // r15
  __int64 v15; // rdi
  __int64 v16; // r13
  __int64 v17; // rcx
  __int64 v18; // rdi
  __m128i v19; // xmm4
  __m128i si128; // xmm5
  __int64 v21; // rax
  __m128i v22; // [rsp+0h] [rbp-88h] BYREF
  __m128i *v23; // [rsp+18h] [rbp-70h]
  __int64 v24; // [rsp+20h] [rbp-68h]
  __int64 v25; // [rsp+28h] [rbp-60h]
  __m128i v26; // [rsp+30h] [rbp-58h] BYREF
  __m128i v27[4]; // [rsp+40h] [rbp-48h] BYREF

  v23 = a2;
  if ( a1 != a2 )
  {
    v3 = a1 + 3;
    if ( a2 != &a1[3] )
    {
      do
      {
        v6 = (__int64 *)v3;
        v7 = v3;
        v3 += 3;
        if ( a3(v6, a1->m128i_i64) )
        {
          v8 = v3[-3].m128i_i64[0];
          v9 = _mm_loadu_si128((__m128i *)((char *)v3 - 40));
          v10.m128i_i64[0] = 0;
          v11 = _mm_loadu_si128(v3 - 1);
          *(__m128i *)((char *)&v3[-3] + 8) = 0;
          v12 = 0;
          v24 = v8;
          v13 = v3[-2].m128i_i64[1];
          v3[-3].m128i_i64[0] = 0;
          v25 = v13;
          v14 = 0xAAAAAAAAAAAAAAABLL * (v7 - a1);
          v26 = v9;
          v27[0] = v11;
          if ( (char *)v7 - (char *)a1 > 0 )
          {
            do
            {
              v15 = v7->m128i_i64[0];
              v7 -= 3;
              v16 = v7->m128i_i64[0];
              v10 = _mm_loadu_si128((const __m128i *)&v7->m128i_u64[1]);
              v7->m128i_i64[0] = 0;
              *(__m128i *)((char *)v7 + 8) = v12;
              if ( v15 )
              {
                v7[3].m128i_i64[1] = 0;
                v22 = v10;
                qfree(v15, a1->m128i_i8);
                v10 = _mm_load_si128(&v22);
                v12 = 0;
              }
              v17 = v7[1].m128i_i64[1];
              v7[3].m128i_i64[0] = v16;
              *(__m128i *)((char *)v7 + 56) = v10;
              v7[4].m128i_i64[1] = v17;
              v7[5].m128i_i64[0] = v7[2].m128i_i64[0];
              v7[5].m128i_i64[1] = v7[2].m128i_i64[1];
              --v14;
            }
            while ( v14 );
          }
          v18 = a1->m128i_i64[0];
          if ( a1->m128i_i64[0] )
          {
            a1->m128i_i64[1] = 0;
            qfree(v18, a1->m128i_i8, *(double *)v10.m128i_i64, *(double *)v12.m128i_i64);
          }
          v19 = _mm_load_si128(&v26);
          si128 = _mm_load_si128(v27);
          a1->m128i_i64[0] = v24;
          v21 = v25;
          *(__m128i *)((char *)a1 + 8) = v19;
          a1[1].m128i_i64[1] = v21;
          a1[2] = si128;
        }
        else
        {
          sub_394090(v7->m128i_i64, a3);
        }
      }
      while ( v23 != v3 );
    }
  }
}
