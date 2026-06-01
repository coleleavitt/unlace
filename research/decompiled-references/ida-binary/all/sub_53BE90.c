__m128i *__fastcall sub_53BE90(const __m128i *a1, __int64 a2)
{
  __m128i *v3; // rax
  __m128i v4; // xmm0
  __m128i *v5; // r12
  __int64 v6; // rax
  __int64 v7; // rdi
  const __m128i *v8; // rbp
  __m128i *v9; // rbx
  __m128i *v10; // r13
  __m128i *v11; // rax
  __m128i v12; // xmm0
  __int32 v13; // eax
  __int64 v14; // rdi

  v3 = (__m128i *)operator new(0x40u);
  v4 = _mm_loadu_si128(a1 + 2);
  v5 = v3;
  v3[3].m128i_i64[0] = a1[3].m128i_i64[0];
  v3[2] = v4;
  if ( v4.m128i_i64[0] )
    _InterlockedAdd((volatile signed __int32 *)v4.m128i_i64[0], 1u);
  v6 = a1[3].m128i_i64[1];
  v7 = a1[1].m128i_i64[1];
  v5[1].m128i_i64[0] = 0;
  v5[1].m128i_i64[1] = 0;
  v5[3].m128i_i64[1] = v6;
  LODWORD(v6) = a1->m128i_i32[0];
  v5->m128i_i64[1] = a2;
  v5->m128i_i32[0] = v6;
  if ( v7 )
    v5[1].m128i_i64[1] = sub_53BE90(v7, v5);
  v8 = (const __m128i *)a1[1].m128i_i64[0];
  if ( v8 )
  {
    v9 = v5;
    do
    {
      v10 = v9;
      v11 = (__m128i *)operator new(0x40u);
      v12 = _mm_loadu_si128(v8 + 2);
      v9 = v11;
      v11[3].m128i_i64[0] = v8[3].m128i_i64[0];
      v11[2] = v12;
      if ( v12.m128i_i64[0] )
        _InterlockedAdd((volatile signed __int32 *)v12.m128i_i64[0], 1u);
      v11[3].m128i_i64[1] = v8[3].m128i_i64[1];
      v13 = v8->m128i_i32[0];
      v9[1].m128i_i64[0] = 0;
      v9->m128i_i32[0] = v13;
      v9[1].m128i_i64[1] = 0;
      v10[1].m128i_i64[0] = (__int64)v9;
      v9->m128i_i64[1] = (__int64)v10;
      v14 = v8[1].m128i_i64[1];
      if ( v14 )
        v9[1].m128i_i64[1] = sub_53BE90(v14, v9);
      v8 = (const __m128i *)v8[1].m128i_i64[0];
    }
    while ( v8 );
  }
  return v5;
}
