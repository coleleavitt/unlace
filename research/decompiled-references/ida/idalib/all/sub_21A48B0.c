void __fastcall sub_21A48B0(const __m128i **a1, unsigned __int64 a2)
{
  const __m128i *v2; // rbx
  const __m128i *v4; // r8
  signed __int64 v5; // r14
  const __m128i *v6; // rax
  const __m128i *v7; // rbp
  const __m128i *v8; // r12
  __m128i *v9; // r15
  const __m128i *v10; // rdx
  const __m128i *v11; // rax
  __int32 v12; // esi
  __m128i v13; // xmm1
  __m128i v14; // xmm2
  __int32 v15; // esi
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // rsi
  void *v20; // rdi
  unsigned __int64 v21; // [rsp+0h] [rbp-48h]
  const __m128i *v22; // [rsp+8h] [rbp-40h]

  if ( a2 > 0x1FFFFFFFFFFFFFFLL )
    std::__throw_length_error("vector::reserve");
  v2 = *a1;
  if ( a2 > ((char *)a1[2] - (char *)*a1) >> 7 )
  {
    v4 = a1[1];
    v21 = a2 << 7;
    v5 = (char *)v4 - (char *)v2;
    if ( a2 )
    {
      v22 = a1[1];
      v6 = (const __m128i *)operator new(a2 << 7);
      v4 = v22;
      v7 = a1[1];
      v8 = v6;
      v9 = (__m128i *)*a1;
      if ( v22 == v2 )
        goto LABEL_7;
    }
    else
    {
      v9 = (__m128i *)*a1;
      v7 = a1[1];
      v8 = nullptr;
      if ( v4 == v2 )
      {
LABEL_11:
        if ( v9 )
          operator delete(v9);
        *a1 = v8;
        a1[1] = (const __m128i *)((char *)v8 + v5);
        a1[2] = (const __m128i *)((char *)v8 + v21);
        return;
      }
    }
    v10 = v2;
    v11 = v8;
    do
    {
      v12 = v10->m128i_i32[0];
      v13 = _mm_loadu_si128(v10 + 2);
      v10 += 8;
      v11 += 8;
      v14 = _mm_loadu_si128(v10 - 4);
      v11[-8].m128i_i32[0] = v12;
      v15 = v10[-8].m128i_i32[1];
      *(const __m128i *)((char *)&v11[-8] + 8) = 0;
      v11[-7].m128i_i64[1] = 0;
      v11[-8].m128i_i32[1] = v15;
      v11[-8].m128i_i64[1] = v10[-8].m128i_i64[1];
      v16 = v10[-7].m128i_i64[0];
      v10[-8].m128i_i64[1] = 0;
      v17 = v11[-7].m128i_i64[0];
      v11[-7].m128i_i64[0] = v16;
      v18 = v10[-7].m128i_i64[1];
      v10[-7].m128i_i64[0] = v17;
      v19 = v11[-7].m128i_i64[1];
      v11[-7].m128i_i64[1] = v18;
      v10[-7].m128i_i64[1] = v19;
      LODWORD(v19) = v10[-5].m128i_i32[0];
      v11[-6] = v13;
      v11[-5].m128i_i32[0] = v19;
      v11[-5].m128i_i32[1] = v10[-5].m128i_i32[1];
      LODWORD(v19) = v10[-5].m128i_i32[2];
      v11[-4] = v14;
      v11[-5].m128i_i32[2] = v19;
      v11[-3].m128i_i64[0] = v10[-3].m128i_i64[0];
      *(const __m128i *)((char *)&v11[-3] + 8) = _mm_loadu_si128((const __m128i *)((char *)v10 - 40));
      *(const __m128i *)((char *)&v11[-2] + 8) = _mm_loadu_si128((const __m128i *)((char *)v10 - 24));
      v11[-1].m128i_i32[2] = v10[-1].m128i_i32[2];
    }
    while ( v4 != v10 );
LABEL_7:
    if ( v7 != v9 )
    {
      do
      {
        while ( 1 )
        {
          v20 = (void *)v9->m128i_i64[1];
          if ( !v20 )
            break;
          operator delete(v20);
          v9 += 8;
          if ( v9 == v7 )
            goto LABEL_10;
        }
        v9 += 8;
      }
      while ( v9 != v7 );
LABEL_10:
      v9 = (__m128i *)*a1;
    }
    goto LABEL_11;
  }
}
