void __fastcall sub_16B62A0(__m128i *a1, __m128i *a2)
{
  const __m128i *v2; // rdx
  const __m128i *v3; // r9
  unsigned __int16 v4; // cx
  __m128i *v5; // rax
  __m128i v6; // xmm5
  __m128i v7; // xmm6
  __m128i v8; // xmm7
  __m128i v9; // xmm0
  unsigned __int32 v10; // r8d
  __m128i v11; // xmm0
  __m128i v12; // xmm1
  __m128i v13; // xmm2
  __int32 v14; // edx
  __m128i v15; // xmm3
  unsigned __int32 v16; // edx
  __m128i v17; // xmm1
  __m128i v18; // xmm2
  __m128i v19; // xmm3
  __int32 v20; // edx
  __m128i v21; // xmm4
  __m128i *v22; // rax
  __m128i v23; // xmm6
  __int64 v24; // rcx
  __m128i v25; // xmm7
  __m128i v26; // xmm0
  __m128i v27; // xmm1
  unsigned __int64 v28; // rdx
  __m128i v29; // xmm4
  __m128i v30; // xmm5
  __m128i v31; // xmm6
  __m128i v32; // xmm7
  __int32 v33; // ecx
  __m128i v34; // xmm2
  __m128i v35; // xmm3
  __m128i v36; // xmm5
  __m128i v37; // xmm6
  __int32 v38; // eax
  __m128i v39; // [rsp+0h] [rbp-58h] BYREF
  __m128i v40; // [rsp+10h] [rbp-48h] BYREF
  __m128i v41; // [rsp+20h] [rbp-38h] BYREF
  __m128i v42; // [rsp+30h] [rbp-28h] BYREF
  __m128i v43; // [rsp+40h] [rbp-18h]

  if ( a1 != a2 )
  {
    v2 = a1 + 5;
    if ( a2 != &a1[5] )
    {
      do
      {
        v3 = v2 + 5;
        v4 = ((unsigned __int32)v2[4].m128i_i32[2] >> 4) & 0x3FFF;
        if ( v4 < (unsigned __int16)(((unsigned __int32)a1[4].m128i_i32[2] >> 4) & 0x3FFF) )
        {
          v22 = (__m128i *)&v2[5];
          v23 = _mm_loadu_si128(v2 + 1);
          v24 = (char *)v2 - (char *)a1;
          v25 = _mm_loadu_si128(v2 + 2);
          v26 = _mm_loadu_si128(v2 + 3);
          v27 = _mm_loadu_si128(v2 + 4);
          v39 = _mm_loadu_si128(v2);
          v40 = v23;
          v41 = v25;
          v28 = 0xCCCCCCCCCCCCCCCDLL * (v2 - a1);
          v42 = v26;
          v43 = v27;
          if ( v24 > 0 )
          {
            do
            {
              v22 -= 5;
              v29 = _mm_loadu_si128(v22 - 5);
              v30 = _mm_loadu_si128(v22 - 4);
              v31 = _mm_loadu_si128(v22 - 3);
              v32 = _mm_loadu_si128(v22 - 2);
              v22[4].m128i_i64[0] = v22[-1].m128i_i64[0];
              v33 = v22[-1].m128i_i32[2];
              *v22 = v29;
              v22[1] = v30;
              v22[2] = v31;
              v22[3] = v32;
              v22[4].m128i_i32[2] = v33;
              --v28;
            }
            while ( v28 );
          }
          v34 = _mm_load_si128(&v39);
          v35 = _mm_load_si128(&v40);
          v36 = _mm_load_si128(&v41);
          v37 = _mm_load_si128(&v42);
          a1[4].m128i_i64[0] = v43.m128i_i64[0];
          v38 = v43.m128i_i32[2];
          *a1 = v34;
          a1[1] = v35;
          a1[2] = v36;
          a1[3] = v37;
          a1[4].m128i_i32[2] = v38;
        }
        else
        {
          v5 = (__m128i *)&v2[-5];
          v6 = _mm_loadu_si128(v2 + 1);
          v7 = _mm_loadu_si128(v2 + 2);
          v8 = _mm_loadu_si128(v2 + 3);
          v9 = _mm_loadu_si128(v2 + 4);
          v10 = (unsigned __int32)v2[-1].m128i_i32[2] >> 4;
          v39 = _mm_loadu_si128(v2);
          v40 = v6;
          v41 = v7;
          v42 = v8;
          v43 = v9;
          if ( v4 < (unsigned __int16)(v10 & 0x3FFF) )
          {
            while ( 1 )
            {
              v11 = _mm_loadu_si128(v5);
              v12 = _mm_loadu_si128(v5 + 1);
              v13 = _mm_loadu_si128(v5 + 2);
              v5[9].m128i_i64[0] = v5[4].m128i_i64[0];
              v14 = v5[4].m128i_i32[2];
              v15 = _mm_loadu_si128(v5 + 3);
              v5[5] = v11;
              v5[9].m128i_i32[2] = v14;
              v16 = v5[-1].m128i_u32[2];
              v5[6] = v12;
              v5[7] = v13;
              v5[8] = v15;
              if ( v4 >= (unsigned __int16)((v16 >> 4) & 0x3FFF) )
                break;
              v5 -= 5;
            }
          }
          else
          {
            v5 = (__m128i *)v2;
          }
          v17 = _mm_load_si128(&v39);
          v18 = _mm_load_si128(&v40);
          v19 = _mm_load_si128(&v41);
          v5[4].m128i_i64[0] = v43.m128i_i64[0];
          v20 = v43.m128i_i32[2];
          v21 = _mm_load_si128(&v42);
          *v5 = v17;
          v5[4].m128i_i32[2] = v20;
          v5[1] = v18;
          v5[2] = v19;
          v5[3] = v21;
        }
        v2 = v3;
      }
      while ( a2 != v3 );
    }
  }
}
