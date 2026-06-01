__m128i *__fastcall sub_40FA00(unsigned __int64 *a1, unsigned __int64 a2)
{
  const __m128i *v3; // r12
  unsigned __int64 v4; // r13
  unsigned __int64 v5; // rax
  __m128i *v6; // r12
  __m128i *result; // rax
  __m128i v8; // xmm0
  __int64 v9; // r12
  __m128i v10; // xmm1
  __m128i v11; // xmm2
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r14
  __int64 v14; // r13
  __int64 v15; // rbp
  __int64 v16; // rax
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // r14
  const __m128i *v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __m128i v23; // xmm0
  bool v24; // cf
  __int64 v25; // rax
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // r15
  const __m128i *v28; // rdi
  __int64 v29; // xmm1_8
  __int64 v30; // rdx
  __int64 v31; // xmm2_8
  __int64 v32; // rcx
  __int64 v33; // rcx
  __m128i v34; // xmm0
  __m128i v35[4]; // [rsp+0h] [rbp-48h] BYREF

  v3 = (const __m128i *)*a1;
  v4 = a1[2];
  if ( a2 >= *a1 && a2 < (unsigned __int64)&v3[2 * v4] )
  {
    v9 = *(_QWORD *)(a2 + 8);
    v10 = _mm_loadl_epi64((const __m128i *)(a2 + 16));
    *(_QWORD *)(a2 + 8) = 0;
    v11 = _mm_loadl_epi64((const __m128i *)(a2 + 24));
    *(_OWORD *)(a2 + 16) = 0;
    v12 = a1[1];
    v13 = a1[2];
    v14 = *(_QWORD *)a2;
    if ( v13 < v12 + 1 )
    {
      v35[0].m128i_i64[1] = v11.m128i_i64[0];
      v35[0].m128i_i64[0] = v10.m128i_i64[0];
      v25 = qvector_reserve();
      v26 = a1[1];
      v27 = a1[2];
      v15 = v25;
      a1[2] = v13;
      v28 = (const __m128i *)*a1;
      v29 = v35[0].m128i_i64[0];
      v30 = v26 - 1;
      v31 = v35[0].m128i_i64[1];
      if ( v30 >= 0 )
      {
        do
        {
          v32 = v28->m128i_i64[0];
          v25 += 32;
          v28 += 2;
          *(_QWORD *)(v25 - 32) = v32;
          v33 = v28[-2].m128i_i64[1];
          v34 = _mm_loadu_si128(v28 - 1);
          v28[-2].m128i_i64[1] = 0;
          *(_QWORD *)(v25 - 24) = v33;
          *(__m128i *)(v25 - 16) = v34;
          v28[-1].m128i_i64[1] = 0;
          v24 = v30-- == 0;
        }
        while ( !v24 );
      }
      v35[0].m128i_i64[1] = v31;
      v35[0].m128i_i64[0] = v29;
      qfree();
      v12 = a1[1];
      v10 = _mm_loadl_epi64(v35);
      *a1 = v15;
      a1[2] = v27;
      v11 = _mm_loadl_epi64((const __m128i *)&v35[0].m128i_u64[1]);
    }
    else
    {
      v15 = *a1;
    }
    result = (__m128i *)(v15 + 32 * v12);
    result->m128i_i64[0] = v14;
    result->m128i_i64[1] = v9;
    result[1] = _mm_unpacklo_epi64(v10, v11);
  }
  else
  {
    v5 = a1[1];
    if ( v4 < v5 + 1 )
    {
      v16 = qvector_reserve();
      v17 = a1[1];
      v18 = a1[2];
      a1[2] = v4;
      v19 = (const __m128i *)*a1;
      v3 = (const __m128i *)v16;
      v20 = v17 - 1;
      if ( v20 >= 0 )
      {
        do
        {
          v21 = v19->m128i_i64[0];
          v16 += 32;
          v19 += 2;
          *(_QWORD *)(v16 - 32) = v21;
          v22 = v19[-2].m128i_i64[1];
          v23 = _mm_loadu_si128(v19 - 1);
          v19[-2].m128i_i64[1] = 0;
          *(_QWORD *)(v16 - 24) = v22;
          *(__m128i *)(v16 - 16) = v23;
          v19[-1].m128i_i64[1] = 0;
          v24 = v20-- == 0;
        }
        while ( !v24 );
      }
      qfree();
      *a1 = (unsigned __int64)v3;
      v5 = a1[1];
      a1[2] = v18;
    }
    v6 = (__m128i *)&v3[2 * v5];
    v6->m128i_i64[0] = *(_QWORD *)a2;
    result = *(__m128i **)(a2 + 8);
    v8 = _mm_loadu_si128((const __m128i *)(a2 + 16));
    *(_QWORD *)(a2 + 8) = 0;
    v6->m128i_i64[1] = (__int64)result;
    v6[1] = v8;
    *(_OWORD *)(a2 + 16) = 0;
  }
  ++a1[1];
  return result;
}
