void __fastcall sub_12FA880(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  size_t v3; // r14
  size_t v4; // r9
  __m128i *v5; // rbx
  const __m128i *v6; // rbp
  const void *v7; // r12
  size_t v8; // rdx
  int v9; // eax
  __int64 v10; // rbx
  __int64 v11; // rax
  __m128i v12; // xmm4
  __m128i v13; // xmm6
  __m128i v14; // xmm6
  size_t v15; // rbp
  size_t v16; // rdx
  int v17; // eax
  __m128i si128; // xmm2
  __m128i v19; // xmm0
  __m128i v20; // xmm1
  __int64 v21; // [rsp+0h] [rbp-70h]
  size_t v22; // [rsp+8h] [rbp-68h]
  __m128i v23; // [rsp+18h] [rbp-58h] BYREF
  __m128i v24[4]; // [rsp+28h] [rbp-48h] BYREF

  if ( a1 != a2 && a2 != a1 + 32 )
  {
    v2 = a1 + 64;
    do
    {
      v3 = *(_QWORD *)(v2 - 24);
      v4 = *(_QWORD *)(a1 + 8);
      v5 = (__m128i *)(v2 - 32);
      v21 = v2;
      v6 = (const __m128i *)(v2 - 32);
      v7 = *(const void **)(v2 - 32);
      v8 = v4;
      if ( v3 <= v4 )
        v8 = *(_QWORD *)(v2 - 24);
      if ( v8
        && (v22 = *(_QWORD *)(a1 + 8), v9 = memcmp(*(const void **)(v2 - 32), *(const void **)a1, v8), v4 = v22, v9) )
      {
        if ( v9 >= 0 )
          goto LABEL_16;
      }
      else if ( v3 == v4 || v3 >= v4 )
      {
LABEL_16:
        v14 = _mm_loadu_si128((const __m128i *)(v2 - 16));
        v23 = _mm_loadu_si128((const __m128i *)(v2 - 32));
        v24[0] = v14;
        while ( 1 )
        {
          v15 = v5[-2].m128i_u64[1];
          v16 = v15;
          if ( v3 <= v15 )
            v16 = v3;
          if ( v16 && (v17 = memcmp(v7, (const void *)v5[-2].m128i_i64[0], v16)) != 0 )
          {
            if ( v17 >= 0 )
              goto LABEL_23;
          }
          else if ( v3 == v15 || v3 >= v15 )
          {
LABEL_23:
            si128 = _mm_load_si128(v24);
            v5->m128i_i64[0] = (__int64)v7;
            v5->m128i_i64[1] = v3;
            v5[1] = si128;
            goto LABEL_13;
          }
          v19 = _mm_loadu_si128(v5 - 2);
          v20 = _mm_loadu_si128(v5 - 1);
          v5 -= 2;
          v5[2] = v19;
          v5[3] = v20;
        }
      }
      v10 = (__int64)v5->m128i_i64 - a1;
      v23 = _mm_loadu_si128((const __m128i *)(v2 - 32));
      v11 = v10 >> 5;
      v24[0] = _mm_loadu_si128((const __m128i *)(v2 - 16));
      if ( v10 > 0 )
      {
        do
        {
          v6 -= 2;
          v12 = _mm_loadu_si128(v6 + 1);
          v6[2] = _mm_loadu_si128(v6);
          v6[3] = v12;
          --v11;
        }
        while ( v11 );
      }
      v13 = _mm_load_si128(v24);
      *(__m128i *)a1 = _mm_load_si128(&v23);
      *(__m128i *)(a1 + 16) = v13;
LABEL_13:
      v2 += 32;
    }
    while ( a2 != v21 );
  }
}
