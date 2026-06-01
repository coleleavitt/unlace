__int64 __fastcall sub_432240(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  unsigned __int64 v4; // r15
  __m128i v5; // xmm0
  __int64 v6; // rdi
  __int64 v7; // r15
  __int64 v8; // r12
  __int64 i; // rbp
  __int64 *v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // rdi
  __int64 v19; // rdi
  __int64 v20; // rdi
  __m128i si128; // xmm1
  _QWORD *v23; // r12
  __int64 v24; // rbx
  __int64 v25; // rbp
  __int64 v26; // rdi
  __m128i v27[4]; // [rsp+0h] [rbp-48h] BYREF

  v2 = 0;
  v4 = *(_QWORD *)(a2 + 8);
  v5 = _mm_unpacklo_epi64((__m128i)v4, (__m128i)v4);
  v27[0] = v5;
  if ( v4 )
  {
    v23 = (_QWORD *)a2;
    v24 = 0;
    v25 = 0;
    v2 = qalloc_or_throw(240 * v4);
    do
    {
      v26 = v2 + v24;
      ++v25;
      a2 = v24 + *v23;
      v24 += 240;
      sub_41BD40(v26, a2);
    }
    while ( v4 != v25 );
  }
  v6 = *(_QWORD *)(a1 + 184);
  if ( v6 )
  {
    v7 = *(_QWORD *)(a1 + 192);
    if ( v7 )
    {
      v8 = 0;
      for ( i = 0; i != v7; ++i )
      {
        v10 = (__int64 *)(v6 + v8);
        v11 = *(_QWORD *)(v6 + v8 + 216);
        if ( v11 )
        {
          v10[28] = 0;
          *(double *)v5.m128i_i64 = qfree(v11, (const char *)a2);
        }
        v12 = v10[24];
        if ( v12 )
        {
          v10[25] = 0;
          *(double *)v5.m128i_i64 = qfree(v12, (const char *)a2, *(double *)v5.m128i_i64);
        }
        v13 = v10[21];
        if ( v13 )
        {
          v10[22] = 0;
          *(double *)v5.m128i_i64 = qfree(v13, (const char *)a2, *(double *)v5.m128i_i64);
        }
        v14 = v10[18];
        if ( v14 )
        {
          v10[19] = 0;
          *(double *)v5.m128i_i64 = qfree(v14, (const char *)a2, *(double *)v5.m128i_i64);
        }
        v15 = v10[15];
        if ( v15 )
        {
          v10[16] = 0;
          *(double *)v5.m128i_i64 = qfree(v15, (const char *)a2, *(double *)v5.m128i_i64);
        }
        v16 = v10[12];
        if ( v16 )
        {
          v10[13] = 0;
          *(double *)v5.m128i_i64 = qfree(v16, (const char *)a2, *(double *)v5.m128i_i64);
        }
        v17 = v10[9];
        if ( v17 )
        {
          v10[10] = 0;
          *(double *)v5.m128i_i64 = qfree(v17, (const char *)a2, *(double *)v5.m128i_i64);
        }
        v18 = v10[6];
        if ( v18 )
        {
          v10[7] = 0;
          *(double *)v5.m128i_i64 = qfree(v18, (const char *)a2, *(double *)v5.m128i_i64);
        }
        v19 = v10[3];
        if ( v19 )
        {
          v10[4] = 0;
          *(double *)v5.m128i_i64 = qfree(v19, (const char *)a2, *(double *)v5.m128i_i64);
        }
        v20 = *v10;
        if ( *v10 )
        {
          v10[1] = 0;
          *(double *)v5.m128i_i64 = qfree(v20, (const char *)a2, *(double *)v5.m128i_i64);
        }
        v6 = *(_QWORD *)(a1 + 184);
        v8 += 240;
      }
    }
    *(_QWORD *)(a1 + 192) = 0;
    qfree(v6, (const char *)a2);
  }
  si128 = _mm_load_si128(v27);
  *(_QWORD *)(a1 + 184) = v2;
  *(__m128i *)(a1 + 192) = si128;
  return 1;
}
