void __fastcall sub_3AA4E0(
        __m128 *a1,
        __m128 *a2,
        __m128i a3,
        __m128 a4,
        __m128i a5,
        __m128i a6,
        __m128i a7,
        __m128 a8,
        __m128 si128)
{
  __m128 *v9; // r15
  unsigned __int64 v11; // rax
  __int64 *v12; // rdi
  __int64 v13; // rdi
  __m128i v14; // xmm2
  __m128 *v15; // rbx
  __int32 v16; // eax
  unsigned __int64 v17; // r13
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // r14
  __int64 v21; // rcx
  __int32 v22; // ecx
  unsigned __int64 v23; // rdi
  __int32 v24; // eax
  __m128i v25; // [rsp+0h] [rbp-78h] BYREF
  unsigned __int64 v26; // [rsp+10h] [rbp-68h]
  __int32 v27; // [rsp+1Ch] [rbp-5Ch]
  __m128i v28; // [rsp+20h] [rbp-58h] BYREF
  __m128i v29[4]; // [rsp+30h] [rbp-48h] BYREF

  if ( a1 != a2 )
  {
    v9 = a1 + 3;
    while ( a2 != v9 )
    {
      while ( 1 )
      {
        v11 = v9->m128_u64[1];
        v12 = (__int64 *)v9;
        v9 += 3;
        if ( v11 >= a1->m128_u64[1] )
          break;
        a6 = (__m128i)v11;
        v13 = (char *)v12 - (char *)a1;
        a3.m128i_i64[0] = 0;
        v14 = _mm_loadl_epi64((const __m128i *)&v9[-3]);
        v15 = v9;
        a4 = 0;
        a7 = _mm_loadu_si128((const __m128i *)&v9[-2].m128_u16[4]);
        v26 = v9[-2].m128_u64[0];
        v16 = v9[-1].m128_i32[2];
        a5 = _mm_unpacklo_epi64(v14, a6);
        v9[-2].m128_u64[0] = 0;
        v27 = v16;
        v28 = a5;
        v17 = 0xAAAAAAAAAAAAAAABLL * (v13 >> 4);
        v29[0] = a7;
        *(__m128 *)((char *)&v9[-2] + 8) = 0;
        if ( v13 > 0 )
        {
          do
          {
            v18 = v15[-6].m128_i64[0];
            v19 = v15[-2].m128_i64[0];
            v15 -= 3;
            v20 = v15[-2].m128_i64[0];
            a3 = _mm_loadu_si128((const __m128i *)&v15[-2].m128_u16[4]);
            *(__m128 *)((char *)v15 - 24) = a4;
            v15->m128_u64[0] = v18;
            v21 = v15[-3].m128_i64[1];
            v15[-2].m128_u64[0] = 0;
            v15->m128_u64[1] = v21;
            if ( v19 )
            {
              v15[1].m128_u64[1] = 0;
              v25 = a3;
              qfree(v19);
              a3 = _mm_load_si128(&v25);
              a4 = 0;
            }
            v22 = v15[-1].m128_i32[2];
            v15[1].m128_u64[0] = v20;
            *(__m128i *)((char *)v15 + 24) = a3;
            v15[2].m128_i32[2] = v22;
            --v17;
          }
          while ( v17 );
        }
        a8 = (__m128)_mm_load_si128(&v28);
        v23 = a1[1].m128_u64[0];
        *a1 = a8;
        if ( v23 )
        {
          a1[1].m128_u64[1] = 0;
          qfree(v23);
        }
        si128 = (__m128)_mm_load_si128(v29);
        a1[1].m128_u64[0] = v26;
        v24 = v27;
        *(__m128 *)((char *)a1 + 24) = si128;
        a1[2].m128_i32[2] = v24;
        if ( a2 == v9 )
          return;
      }
      sub_3AA3E0(
        v12,
        *(double *)a3.m128i_i64,
        *(double *)a4.m128_u64,
        *(double *)a5.m128i_i64,
        *(double *)a6.m128i_i64,
        *(double *)a7.m128i_i64,
        *(double *)a8.m128_u64,
        si128);
    }
  }
}
