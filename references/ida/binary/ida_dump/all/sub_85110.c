void __fastcall sub_85110(__m128i *a1, const __m128i *a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 v4; // r14
  __int64 v7; // rax
  __m128i **v8; // rdx
  __int64 v9; // rcx
  __m128i *v10; // rsi
  __int64 *v11; // rsi
  __int64 v12; // rax
  __m128i v13; // xmm0
  const __m128i *i; // rbx
  const __m128i *v15; // rbp

  v3 = a3 - 1;
  if ( v3 >= 0 )
  {
    v4 = v3;
    do
    {
      v7 = a2->m128i_i64[0];
      a1[1].m128i_i64[0] = 0;
      *a1 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1, (__m128i)(unsigned __int64)a1);
      if ( (const __m128i *)v7 != a2 )
      {
        v8 = (__m128i **)a2->m128i_i64[1];
        v9 = a2[1].m128i_i64[0];
        v10 = *v8;
        **(_QWORD **)(v7 + 8) = *v8;
        v10->m128i_i64[1] = *(_QWORD *)(v7 + 8);
        a2[1].m128i_i64[0] -= v9;
        v11 = (__int64 *)a1->m128i_i64[1];
        *v11 = v7;
        *(_QWORD *)(v7 + 8) = v11;
        *v8 = a1;
        a1[1].m128i_i64[0] += v9;
        a1->m128i_i64[1] = (__int64)v8;
      }
      v12 = a2[1].m128i_i64[1];
      v13 = _mm_loadu_si128(a2 + 2);
      a2[1].m128i_i64[1] = 0;
      a2[2] = 0;
      a1[1].m128i_i64[1] = v12;
      a1[2] = v13;
      for ( i = (const __m128i *)a2->m128i_i64[0]; i != a2; --a2[1].m128i_i64[0] )
      {
        v15 = i;
        i = (const __m128i *)i->m128i_i64[0];
        *(_QWORD *)v15->m128i_i64[1] = i;
        i->m128i_i64[1] = v15->m128i_i64[1];
        sub_255050(&v15[1]);
        qfree();
      }
      a2 += 3;
      a1 += 3;
    }
    while ( v4-- != 0 );
  }
}
