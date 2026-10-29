void __fastcall sub_12DF350(__int64 a1, const __m128i *a2, const __m128i *a3)
{
  __m128i *v6; // rbp
  __m128i *v7; // rbx
  __int8 *v8; // rdx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // r13
  __int64 v11; // rax
  __int64 v12; // r13
  __m128i *v13; // rax
  __m128i *v14; // rdx
  const __m128i *v15; // rsi
  __int64 v16; // rsi
  __int8 v17; // cl
  const __m128i *v18; // rdx
  __m128i *v19; // rax
  __m128i *v20; // rsi
  __int8 v21; // cl
  const __m128i *v22; // rcx
  const __m128i *v23; // rdx
  __m128i *v24; // r14
  __int64 v25; // rcx
  const __m128i *v26; // rcx
  __m128i *i; // r15
  __m128i *v28; // rdi
  __m128i *v29; // [rsp+0h] [rbp-48h] BYREF
  __int8 *v30; // [rsp+8h] [rbp-40h]

  v6 = *(__m128i **)(a1 + 8);
  v7 = *(__m128i **)a1;
  v8 = &a2->m128i_i8[-*(_QWORD *)a1];
  if ( !(0x6DB6DB6DB6DB6DB7LL * (((__int64)v6->m128i_i64 - *(_QWORD *)a1) >> 3)) )
  {
    v9 = 1;
    goto LABEL_32;
  }
  v9 = 0xDB6DB6DB6DB6DB6ELL * ((__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3);
  v10 = -16;
  if ( 0x6DB6DB6DB6DB6DB7LL * (((__int64)v6->m128i_i64 - *(_QWORD *)a1) >> 3) > 0xDB6DB6DB6DB6DB6ELL
                                                                              * (((__int64)v6->m128i_i64 - *(_QWORD *)a1) >> 3)
    || v9 > 0x492492492492492LL )
  {
    goto LABEL_3;
  }
  if ( v9 )
  {
LABEL_32:
    v10 = 56 * v9;
LABEL_3:
    v30 = &a2->m128i_i8[-*(_QWORD *)a1];
    v11 = operator new(v10);
    v8 = v30;
    v29 = (__m128i *)v11;
    v12 = v11 + v10;
    v13 = (__m128i *)(v11 + 56);
    goto LABEL_4;
  }
  v13 = (__m128i *)&word_38;
  v12 = 0;
  v29 = nullptr;
LABEL_4:
  v14 = (__m128i *)&v8[(_QWORD)v29];
  v15 = (const __m128i *)a3[1].m128i_i64[0];
  v14->m128i_i64[0] = a3->m128i_i64[0];
  v14->m128i_i64[1] = a3->m128i_i64[1];
  v14[1].m128i_i64[0] = (__int64)v14[2].m128i_i64;
  if ( v15 == &a3[2] )
  {
    v14[2] = _mm_loadu_si128(a3 + 2);
  }
  else
  {
    v14[1].m128i_i64[0] = (__int64)v15;
    v14[2].m128i_i64[0] = a3[2].m128i_i64[0];
  }
  v16 = a3[1].m128i_i64[1];
  a3[1].m128i_i64[0] = (__int64)a3[2].m128i_i64;
  v17 = a3[3].m128i_i8[0];
  a3[1].m128i_i64[1] = 0;
  v14[1].m128i_i64[1] = v16;
  a3[2].m128i_i8[0] = 0;
  v14[3].m128i_i8[0] = v17;
  if ( a2 != v7 )
  {
    v18 = v7 + 2;
    v19 = v29;
    v20 = (__m128i *)((char *)v29
                    + 56
                    * ((0xDB6DB6DB6DB6DB7LL * ((unsigned __int64)((char *)&a2[-4].m128i_u64[1] - (char *)v7) >> 3))
                     & 0x1FFFFFFFFFFFFFFFLL)
                    + 56);
    do
    {
      v19->m128i_i64[0] = v18[-2].m128i_i64[0];
      v19->m128i_i64[1] = v18[-2].m128i_i64[1];
      v19[1].m128i_i64[0] = (__int64)v19[2].m128i_i64;
      v22 = (const __m128i *)v18[-1].m128i_i64[0];
      if ( v22 == v18 )
      {
        v19[2] = _mm_loadu_si128(v18);
      }
      else
      {
        v19[1].m128i_i64[0] = (__int64)v22;
        v19[2].m128i_i64[0] = v18->m128i_i64[0];
      }
      v19 = (__m128i *)((char *)v19 + 56);
      v19[-2].m128i_i64[0] = v18[-1].m128i_i64[1];
      v21 = v18[1].m128i_i8[0];
      v18[-1].m128i_i64[0] = (__int64)v18;
      v18 = (const __m128i *)((char *)v18 + 56);
      v18[-4].m128i_i64[0] = 0;
      v18[-4].m128i_i8[8] = 0;
      v19[-1].m128i_i8[8] = v21;
    }
    while ( v19 != v20 );
    v13 = (__m128i *)((char *)v19 + 56);
  }
  if ( a2 == v6 )
  {
    v24 = v13;
  }
  else
  {
    v23 = a2 + 2;
    v24 = (__m128i *)((char *)v13
                    + 56
                    * ((0xDB6DB6DB6DB6DB7LL * ((unsigned __int64)((char *)v6 - (char *)a2 - 56) >> 3))
                     & 0x1FFFFFFFFFFFFFFFLL)
                    + 56);
    do
    {
      v13->m128i_i64[0] = v23[-2].m128i_i64[0];
      v13->m128i_i64[1] = v23[-2].m128i_i64[1];
      v13[1].m128i_i64[0] = (__int64)v13[2].m128i_i64;
      v26 = (const __m128i *)v23[-1].m128i_i64[0];
      if ( v26 == v23 )
      {
        v13[2] = _mm_loadu_si128(v23);
      }
      else
      {
        v13[1].m128i_i64[0] = (__int64)v26;
        v13[2].m128i_i64[0] = v23->m128i_i64[0];
      }
      v25 = v23[-1].m128i_i64[1];
      v13 = (__m128i *)((char *)v13 + 56);
      v23[-1].m128i_i64[0] = (__int64)v23;
      v23 = (const __m128i *)((char *)v23 + 56);
      v23[-4].m128i_i64[0] = 0;
      v13[-2].m128i_i64[0] = v25;
      LOBYTE(v25) = v23[-3].m128i_i8[8];
      v23[-4].m128i_i8[8] = 0;
      v13[-1].m128i_i8[8] = v25;
    }
    while ( v13 != v24 );
  }
  for ( i = v7; i != v6; i = (__m128i *)((char *)i + 56) )
  {
    while ( 1 )
    {
      v28 = (__m128i *)i[1].m128i_i64[0];
      if ( v28 == &i[2] )
        break;
      operator delete(v28);
      i = (__m128i *)((char *)i + 56);
      if ( v6 == i )
        goto LABEL_23;
    }
  }
LABEL_23:
  if ( v7 )
    operator delete(v7);
  v29 = v24;
  *(_QWORD *)(a1 + 16) = v12;
  *(__m128 *)a1 = _mm_loadh_ps((const double *)&v29);
}
