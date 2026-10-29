void __fastcall sub_F57E20(__int64 a1, __int64 *a2)
{
  __int64 *v2; // rdx
  unsigned __int64 v3; // r8
  __int64 *v4; // r9
  __m128i v5; // xmm7
  unsigned __int64 *v6; // rax
  unsigned __int64 v7; // rcx
  __m128i v8; // xmm6
  __m128i v9; // xmm7
  unsigned __int64 v10; // rdx
  __m128i v11; // xmm0
  __m128i v12; // xmm1
  __m128i v13; // xmm2
  __m128i v14; // xmm6
  __int64 v15; // rdx
  __m128i v16; // xmm7
  __m128i v17; // xmm6
  __m128i v18; // xmm6
  __m128i v19; // xmm7
  __int64 v20; // rax
  __m128i v21; // xmm3
  __m128i v22; // xmm4
  __m128i v23; // xmm5
  __int64 v24; // rcx
  __m128i v25; // xmm6
  __m128i v26; // xmm7
  __int64 v27; // rax
  __m128i v28; // xmm6
  __m128i v29; // [rsp+0h] [rbp-48h] BYREF
  __m128i v30; // [rsp+10h] [rbp-38h] BYREF
  __m128i v31; // [rsp+20h] [rbp-28h] BYREF
  __m128i v32; // [rsp+30h] [rbp-18h]

  if ( (__int64 *)a1 != a2 )
  {
    v2 = (__int64 *)(a1 + 64);
    if ( a2 != (__int64 *)(a1 + 64) )
    {
      do
      {
        v3 = *v2;
        v4 = v2 + 8;
        if ( (unsigned __int64)*v2 < *(_QWORD *)a1 )
        {
          v18 = _mm_loadu_si128((const __m128i *)v2 + 2);
          v29.m128i_i64[1] = _mm_loadu_si128((const __m128i *)v2).m128i_i64[1];
          v19 = _mm_loadu_si128((const __m128i *)v2 + 1);
          v31 = v18;
          v20 = ((__int64)v2 - a1) >> 6;
          v30 = v19;
          v32 = _mm_loadu_si128((const __m128i *)v2 + 3);
          if ( (__int64)v2 - a1 > 0 )
          {
            do
            {
              v2 -= 8;
              v21 = _mm_loadu_si128((const __m128i *)(v2 + 1));
              v22 = _mm_loadu_si128((const __m128i *)(v2 + 3));
              v23 = _mm_loadu_si128((const __m128i *)(v2 + 5));
              v2[8] = *v2;
              v24 = v2[7];
              *(__m128i *)(v2 + 9) = v21;
              *(__m128i *)(v2 + 11) = v22;
              *(__m128i *)(v2 + 13) = v23;
              v2[15] = v24;
              --v20;
            }
            while ( v20 );
          }
          v25 = _mm_loadu_si128((const __m128i *)&v29.m128i_u64[1]);
          v26 = _mm_loadu_si128((const __m128i *)&v30.m128i_u64[1]);
          *(_QWORD *)a1 = v3;
          v27 = v32.m128i_i64[1];
          *(__m128i *)(a1 + 8) = v25;
          v28 = _mm_loadu_si128((const __m128i *)&v31.m128i_u64[1]);
          *(__m128i *)(a1 + 24) = v26;
          *(__m128i *)(a1 + 40) = v28;
          *(_QWORD *)(a1 + 56) = v27;
        }
        else
        {
          v5 = _mm_loadu_si128((const __m128i *)v2 + 1);
          v6 = (unsigned __int64 *)(v2 - 8);
          v7 = *(v2 - 8);
          v29.m128i_i64[1] = _mm_loadu_si128((const __m128i *)v2).m128i_i64[1];
          v8 = _mm_loadu_si128((const __m128i *)v2 + 2);
          v30 = v5;
          v9 = _mm_loadu_si128((const __m128i *)v2 + 3);
          v31 = v8;
          v32 = v9;
          if ( v3 < v7 )
          {
            while ( 1 )
            {
              v10 = v6[7];
              v11 = _mm_loadu_si128((const __m128i *)(v6 + 1));
              v6[8] = v7;
              v12 = _mm_loadu_si128((const __m128i *)(v6 + 3));
              v13 = _mm_loadu_si128((const __m128i *)(v6 + 5));
              v7 = *(v6 - 8);
              v6[15] = v10;
              *(__m128i *)(v6 + 9) = v11;
              *(__m128i *)(v6 + 11) = v12;
              *(__m128i *)(v6 + 13) = v13;
              if ( v3 >= v7 )
                break;
              v6 -= 8;
            }
          }
          else
          {
            v6 = (unsigned __int64 *)v2;
          }
          v14 = _mm_loadu_si128((const __m128i *)&v29.m128i_u64[1]);
          v15 = v32.m128i_i64[1];
          *v6 = v3;
          v16 = _mm_loadu_si128((const __m128i *)&v30.m128i_u64[1]);
          *(__m128i *)(v6 + 1) = v14;
          v17 = _mm_loadu_si128((const __m128i *)&v31.m128i_u64[1]);
          v6[7] = v15;
          *(__m128i *)(v6 + 3) = v16;
          *(__m128i *)(v6 + 5) = v17;
        }
        v2 = v4;
      }
      while ( a2 != v4 );
    }
  }
}

