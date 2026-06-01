__int64 __fastcall sub_1D8D0(__m128i *a1, __m128i *a2)
{
  const __m128i *v2; // r13
  unsigned __int32 v4; // ebp
  __m128i *v5; // r14
  __m128i v6; // xmm2
  __m128i v7; // xmm3
  __m128i v8; // xmm1
  __int64 v9; // rax
  __int64 v10; // r15
  __int64 v11; // rdi
  __int64 v12; // r12
  __m128i v13; // xmm0
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // rax
  __m128i v17; // xmm4
  __m128i si128; // xmm5
  __int64 v19; // rax
  __int64 result; // rax
  __m128i v21; // [rsp+0h] [rbp-88h] BYREF
  __m128i *v22; // [rsp+10h] [rbp-78h]
  __int64 v23; // [rsp+18h] [rbp-70h]
  __int64 v24; // [rsp+20h] [rbp-68h]
  unsigned int v25; // [rsp+2Ch] [rbp-5Ch]
  __m128i v26; // [rsp+30h] [rbp-58h] BYREF
  __m128i v27[4]; // [rsp+40h] [rbp-48h] BYREF

  v22 = a2;
  if ( a1 != a2 )
  {
    v2 = (__m128i *)((char *)a1 + 56);
    if ( a2 != (__m128i *)&a1[3].m128i_u64[1] )
    {
      do
      {
        v4 = v2[3].m128i_u32[1];
        v5 = (__m128i *)v2;
        v2 = (const __m128i *)((char *)v2 + 56);
        if ( v4 >= a1[3].m128i_i32[1] )
        {
          result = sub_1D7C0(v5->m128i_i64);
        }
        else
        {
          v6 = _mm_loadu_si128(v2 - 3);
          v7 = _mm_loadu_si128((const __m128i *)((char *)v2 - 24));
          v8 = 0;
          v23 = v2[-4].m128i_i64[1];
          v9 = v2[-2].m128i_i64[0];
          v2[-4].m128i_i64[1] = 0;
          v24 = v9;
          LODWORD(v9) = v2[-1].m128i_i32[2];
          v10 = 0x6DB6DB6DB6DB6DB7LL * (((char *)v5 - (char *)a1) >> 3);
          v26 = v6;
          v25 = v9;
          v2[-3] = 0;
          v27[0] = v7;
          if ( (char *)v5 - (char *)a1 > 0 )
          {
            do
            {
              v11 = v5->m128i_i64[0];
              v5 = (__m128i *)((char *)v5 - 56);
              v12 = v5->m128i_i64[0];
              v13 = _mm_loadu_si128((const __m128i *)&v5->m128i_u64[1]);
              v5->m128i_i64[0] = 0;
              *(__m128i *)((char *)v5 + 8) = v8;
              if ( v11 )
              {
                v5[4].m128i_i64[0] = 0;
                v21 = v13;
                qfree(v11);
                v13 = _mm_load_si128(&v21);
                v8 = 0;
              }
              v14 = v5[1].m128i_i64[1];
              v5[3].m128i_i64[1] = v12;
              v5[4] = v13;
              v5[5].m128i_i64[0] = v14;
              v5[5].m128i_i64[1] = v5[2].m128i_i64[0];
              v5[6].m128i_i64[0] = v5[2].m128i_i64[1];
              v5[6].m128i_i32[2] = v5[3].m128i_i32[0];
              v5[6].m128i_i32[3] = v5[3].m128i_i32[1];
              --v10;
            }
            while ( v10 );
          }
          v15 = a1->m128i_i64[0];
          if ( a1->m128i_i64[0] )
          {
            a1->m128i_i64[1] = 0;
            qfree(v15);
          }
          v16 = v23;
          v17 = _mm_load_si128(&v26);
          a1[3].m128i_i32[1] = v4;
          si128 = _mm_load_si128(v27);
          a1->m128i_i64[0] = v16;
          v19 = v24;
          *(__m128i *)((char *)a1 + 8) = v17;
          a1[1].m128i_i64[1] = v19;
          result = v25;
          a1[2] = si128;
          a1[3].m128i_i32[0] = result;
        }
      }
      while ( v22 != v2 );
    }
  }
  return result;
}

