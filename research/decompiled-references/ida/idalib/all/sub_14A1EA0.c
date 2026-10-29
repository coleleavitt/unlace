void __fastcall sub_14A1EA0(__m128i *a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  __m128i *v6; // rbx
  const __m128i *v7; // rdx
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rsi
  __m128i v10; // xmm1
  __m128i v11; // xmm0
  unsigned __int64 v12; // rdx
  _QWORD *v13; // rcx
  _QWORD *v14; // rdx
  __int64 v15; // rsi
  __m128i *v16; // r15
  void **v17; // r14
  __int32 v18; // r14d
  unsigned __int64 v19; // rcx
  __int64 v20; // rsi
  __int64 v21; // rsi
  __int64 v22[8]; // [rsp+8h] [rbp-40h] BYREF

  v2 = sub_2237400(a1, &a1[1], a2, 16, v22);
  v3 = a1->m128i_i64[0];
  v4 = v2;
  v5 = 16LL * a1->m128i_u32[2];
  v6 = (__m128i *)(a1->m128i_i64[0] + v5);
  if ( (__m128i *)a1->m128i_i64[0] != v6 )
  {
    v7 = (const __m128i *)a1->m128i_i64[0];
    if ( (v4 >= v3 + 32 || v3 >= v4 + 32) && (unsigned __int64)&v6[-1] - v3 > 0x20 )
    {
      v8 = (((unsigned __int64)&v6[-1] - v3) >> 4) + 1;
      v9 = v4;
      do
      {
        v10 = _mm_loadu_si128(v7);
        v11 = _mm_loadu_si128(v7 + 1);
        v7 += 2;
        v9 += 32LL;
        v7[-2].m128i_i64[1] = 0;
        v7[-1].m128i_i64[1] = 0;
        *(__m128i *)(v9 - 32) = v10;
        *(__m128i *)(v9 - 16) = v11;
      }
      while ( v7 != (const __m128i *)(v3 + 32 * (v8 >> 1)) );
      v12 = 16 * (v8 & 0xFFFFFFFFFFFFFFFELL);
      v13 = (_QWORD *)(v12 + v3);
      v14 = (_QWORD *)(v4 + v12);
      if ( v8 != (v8 & 0xFFFFFFFFFFFFFFFELL) )
      {
        *v14 = *v13;
        v15 = v13[1];
        v13[1] = 0;
        v14[1] = v15;
      }
    }
    else
    {
      v19 = v4;
      do
      {
        v20 = v7->m128i_i64[0];
        ++v7;
        v19 += 16LL;
        *(_QWORD *)(v19 - 16) = v20;
        v21 = v7[-1].m128i_i64[1];
        v7[-1].m128i_i64[1] = 0;
        *(_QWORD *)(v19 - 8) = v21;
      }
      while ( v6 != v7 );
    }
    v16 = (__m128i *)a1->m128i_i64[0];
    v6 = (__m128i *)(a1->m128i_i64[0] + v5);
    if ( (__m128i *)a1->m128i_i64[0] != v6 )
    {
      do
      {
        --v6;
        v17 = (void **)v6->m128i_i64[1];
        if ( v17 )
        {
          if ( *v17 != v17 + 2 )
            free(*v17);
          operator delete(v17, 0x70u);
        }
      }
      while ( v16 != v6 );
      v6 = (__m128i *)a1->m128i_i64[0];
    }
  }
  v18 = v22[0];
  if ( &a1[1] != v6 )
    free(v6);
  a1->m128i_i64[0] = v4;
  a1->m128i_i32[3] = v18;
}
