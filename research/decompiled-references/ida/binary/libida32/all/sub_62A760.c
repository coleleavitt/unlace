void __fastcall sub_62A760(__int64 a1, signed int *a2)
{
  signed int *v2; // r14
  signed int v4; // eax
  const __m128i *v5; // rbx
  __m128i v6; // xmm2
  __int64 v7; // rax
  __m128i v8; // xmm3
  __m128i v9; // xmm4
  __int64 v10; // rbp
  __int32 v11; // eax
  void *v12; // rdi
  __int64 v13; // r15
  __m128i v14; // xmm0
  __int32 v15; // eax
  void *v16; // rdi
  __m128i v17; // xmm6
  __m128i v18; // [rsp+0h] [rbp-68h] BYREF
  __m128i v19; // [rsp+10h] [rbp-58h] BYREF
  __int64 v20; // [rsp+20h] [rbp-48h]
  unsigned __int64 v21; // [rsp+28h] [rbp-40h]

  if ( (signed int *)a1 != a2 )
  {
    v2 = (signed int *)(a1 + 32);
    while ( a2 != v2 )
    {
      while ( 1 )
      {
        v4 = *v2;
        v5 = (const __m128i *)v2;
        v2 += 8;
        if ( v4 >= *(_DWORD *)a1 )
          break;
        v6 = _mm_cvtsi32_si128(v4);
        v7 = *((_QWORD *)v2 - 3);
        v8 = _mm_cvtsi32_si128(*(v2 - 7));
        v9 = _mm_loadu_si128((const __m128i *)v2 - 1);
        *((_QWORD *)v2 - 3) = 0;
        v20 = v7;
        v21 = _mm_unpacklo_epi32(v6, v8).m128i_u64[0];
        v19 = v9;
        *((_OWORD *)v2 - 1) = 0;
        v10 = ((__int64)v5->m128i_i64 - a1) >> 5;
        if ( (__int64)v5->m128i_i64 - a1 > 0 )
        {
          do
          {
            v11 = v5[-2].m128i_i32[0];
            v12 = (void *)v5->m128i_i64[1];
            v5 -= 2;
            v13 = v5->m128i_i64[1];
            v14 = _mm_loadu_si128(v5 + 1);
            v5[1] = 0;
            v5[2].m128i_i32[0] = v11;
            v15 = v5->m128i_i32[1];
            v5->m128i_i64[1] = 0;
            v5[2].m128i_i32[1] = v15;
            if ( v12 )
            {
              v5[3].m128i_i64[0] = 0;
              v18 = v14;
              qfree(v12);
              v14 = _mm_load_si128(&v18);
            }
            v5[2].m128i_i64[1] = v13;
            v5[3] = v14;
            --v10;
          }
          while ( v10 );
        }
        v16 = *(void **)(a1 + 8);
        *(_QWORD *)a1 = v21;
        if ( v16 )
        {
          *(_QWORD *)(a1 + 16) = 0;
          qfree(v16);
        }
        v17 = _mm_load_si128(&v19);
        *(_QWORD *)(a1 + 8) = v20;
        *(__m128i *)(a1 + 16) = v17;
        if ( a2 == v2 )
          return;
      }
      sub_62A680(v5);
    }
  }
}

