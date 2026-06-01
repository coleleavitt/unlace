void __fastcall sub_157E830(__int64 a1, __int64 a2, __int64 a3, __m128i a4)
{
  const __m128i *v4; // r15
  unsigned __int64 v5; // rsi
  unsigned __int64 v7; // r12
  const __m128i *v8; // rbp
  int v9; // r14d
  unsigned int v10; // eax
  __int64 v11; // rax
  const __m128i *v12; // r14
  unsigned __int64 v13; // r12
  unsigned __int64 v14; // rdi
  __m128i *v15; // rbp
  int v16; // r13d
  unsigned int v17; // eax
  __m128i v18; // xmm3
  __int64 v19; // rcx
  __int64 v20; // xmm4_8^8
  unsigned __int64 v21; // rax
  __m128i v22; // xmm1
  __m128i v23; // xmm5
  __int64 v25; // [rsp+8h] [rbp-60h]
  __m128i v26; // [rsp+10h] [rbp-58h] BYREF
  __int64 v27; // [rsp+20h] [rbp-48h]

  if ( a1 != a2 && a2 != a1 + 24 )
  {
    v4 = (const __m128i *)(a1 + 24);
    v5 = (a2 - 48 - a1) & 0xFFFFFFFFFFFFFFF8LL;
    v25 = a1 + v5 + 48;
    do
    {
      v7 = v4->m128i_i64[0];
      v8 = v4;
      v9 = sub_EEB7E0(*(_QWORD *)a1, v5, *(double *)a4.m128i_i64);
      v10 = sub_EEB7E0(v7, v5, *(double *)a4.m128i_i64);
      v5 = v10;
      if ( sub_10246C0(a3, v10, v9) )
      {
        v19 = v4->m128i_i64[0];
        v5 = 0xAAAAAAAAAAAAAAABLL;
        v20 = _mm_loadu_si128(v4).m128i_i64[1];
        v27 = v4[1].m128i_i64[0];
        v26.m128i_i64[1] = v20;
        v21 = 0xAAAAAAAAAAAAAAABLL * (((__int64)v4->m128i_i64 - a1) >> 3);
        if ( (__int64)v4->m128i_i64 - a1 > 0 )
        {
          do
          {
            v8 = (const __m128i *)((char *)v8 - 24);
            v22 = _mm_loadu_si128((const __m128i *)&v8->m128i_u64[1]);
            v8[1].m128i_i64[1] = v8->m128i_i64[0];
            v8[2] = v22;
            --v21;
          }
          while ( v21 );
        }
        v23 = _mm_loadu_si128((const __m128i *)&v26.m128i_u64[1]);
        *(_QWORD *)a1 = v19;
        *(__m128i *)(a1 + 8) = v23;
      }
      else
      {
        v11 = v4[1].m128i_i64[0];
        v12 = v4;
        v13 = v4->m128i_i64[0];
        v26.m128i_i64[1] = _mm_loadu_si128(v4).m128i_i64[1];
        v27 = v11;
        while ( 1 )
        {
          v14 = v12[-2].m128i_u64[1];
          v15 = (__m128i *)v12;
          v12 = (const __m128i *)((char *)v12 - 24);
          v16 = sub_EEB7E0(v14, v5, *(double *)a4.m128i_i64);
          v17 = sub_EEB7E0(v13, v5, *(double *)a4.m128i_i64);
          v5 = v17;
          if ( !sub_10246C0(a3, v17, v16) )
            break;
          a4 = _mm_loadu_si128((const __m128i *)&v12->m128i_u64[1]);
          v12[1].m128i_i64[1] = v12->m128i_i64[0];
          v12[2] = a4;
        }
        v18 = _mm_loadu_si128((const __m128i *)&v26.m128i_u64[1]);
        v15->m128i_i64[0] = v13;
        *(__m128i *)((char *)v15 + 8) = v18;
      }
      v4 = (const __m128i *)((char *)v4 + 24);
    }
    while ( v4 != (const __m128i *)v25 );
  }
}
