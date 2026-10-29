void __fastcall sub_16B7FA0(__m128i *a1, const __m128i *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r10
  __m128i *v6; // r14
  __int64 v7; // r9
  __int64 v8; // r12
  __int64 v9; // rdx
  const __m128i *v10; // rbx
  __m128i *v11; // rbp
  __int64 v12; // rcx
  __m128i *v13; // rax
  __int64 v14; // r15
  __int64 v15; // r13
  __m128i *v16; // r15
  __int64 v17; // rcx
  __int64 v18; // rdi
  const __m128i *v19; // rax
  __m128i v20; // xmm3
  __m128i v21; // xmm4
  __m128i v22; // xmm2
  __m128i v23; // xmm1
  __m128i v24; // xmm0
  __int64 v25; // rdx
  __int64 v26; // [rsp+8h] [rbp-A0h]
  __int64 v27; // [rsp+10h] [rbp-98h]

  if ( a4 )
  {
    v5 = a5;
    if ( a5 )
    {
      v6 = a1;
      v7 = a4;
      if ( a5 + a4 == 2 )
      {
        v16 = a1;
        v11 = (__m128i *)a2;
LABEL_13:
        if ( (unsigned __int16)(((unsigned __int32)v16[4].m128i_i32[2] >> 4) & 0x3FFF) > (unsigned __int16)(((unsigned __int32)v11[4].m128i_i32[2] >> 4) & 0x3FFF) )
        {
          v20 = _mm_loadu_si128(v16);
          v21 = _mm_loadu_si128(v16 + 4);
          v22 = _mm_loadu_si128(v16 + 1);
          *v16 = _mm_loadu_si128(v11);
          v23 = _mm_loadu_si128(v16 + 2);
          v24 = _mm_loadu_si128(v16 + 3);
          v25 = v16[4].m128i_i64[0];
          v16[1] = _mm_loadu_si128(v11 + 1);
          v16[2] = _mm_loadu_si128(v11 + 2);
          v16[3] = _mm_loadu_si128(v11 + 3);
          v16[4].m128i_i64[0] = v11[4].m128i_i64[0];
          v16[4].m128i_i32[2] = v11[4].m128i_i32[2];
          *v11 = v20;
          v11[1] = v22;
          v11[2] = v23;
          v11[3] = v24;
          v11[4].m128i_i64[0] = v25;
          v11[4].m128i_i32[2] = v21.m128i_i32[2];
        }
      }
      else
      {
        while ( 1 )
        {
          if ( v5 >= v7 )
          {
            v15 = v5 / 2;
            v17 = 0xCCCCCCCCCCCCCCCDLL * (a2 - v6);
            v11 = (__m128i *)&a2[5 * (v5 / 2)];
            if ( (char *)a2 - (char *)v6 <= 0 )
            {
              v10 = v6;
            }
            else
            {
              v10 = v6;
              do
              {
                while ( 1 )
                {
                  v18 = v17 >> 1;
                  v19 = &v10[5 * (v17 >> 1)];
                  if ( (unsigned __int16)(((unsigned __int32)v11[4].m128i_i32[2] >> 4) & 0x3FFF) < (unsigned __int16)(((unsigned __int32)v19[4].m128i_i32[2] >> 4) & 0x3FFF) )
                    break;
                  v10 = v19 + 5;
                  v17 = v17 - v18 - 1;
                  if ( v17 <= 0 )
                    goto LABEL_21;
                }
                v17 >>= 1;
              }
              while ( v18 );
            }
LABEL_21:
            v14 = 80 * (v5 / 2);
            v8 = 0xCCCCCCCCCCCCCCCDLL * (v10 - v6);
          }
          else
          {
            v8 = v7 / 2;
            v9 = 0xCCCCCCCCCCCCCCCDLL * ((a3 - (__int64)a2) >> 4);
            v10 = &v6[5 * (v7 / 2)];
            if ( a3 - (__int64)a2 <= 0 )
            {
              v11 = (__m128i *)a2;
            }
            else
            {
              v11 = (__m128i *)a2;
              do
              {
                while ( 1 )
                {
                  v12 = v9 >> 1;
                  v13 = &v11[5 * (v9 >> 1)];
                  if ( (unsigned __int16)(((unsigned __int32)v13[4].m128i_i32[2] >> 4) & 0x3FFF) >= (unsigned __int16)(((unsigned __int32)v10[4].m128i_i32[2] >> 4) & 0x3FFF) )
                    break;
                  v11 = v13 + 5;
                  v9 = v9 - v12 - 1;
                  if ( v9 <= 0 )
                    goto LABEL_9;
                }
                v9 >>= 1;
              }
              while ( v12 );
            }
LABEL_9:
            v14 = (char *)v11 - (char *)a2;
            v15 = 0xCCCCCCCCCCCCCCCDLL * (v11 - a2);
          }
          v16 = (__m128i *)((char *)v10 + v14);
          v27 = v5;
          v26 = v7;
          sub_16B7C80(v10, a2, v11);
          sub_16B7FA0(v6, v10, v16, v8, v15);
          v5 = v27 - v15;
          v7 = v26 - v8;
          if ( v26 == v8 || !v5 )
            break;
          a2 = v11;
          v6 = v16;
          if ( v5 + v7 == 2 )
            goto LABEL_13;
        }
      }
    }
  }
}
