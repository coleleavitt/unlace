__int64 __fastcall sub_57810(__int64 a1, __m128i *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  __int64 v7; // r14
  __m128i *i; // r13
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // r9
  __int16 v13; // r8
  __m128i *v14; // rbx
  __int64 v15; // rdx
  __m128i *v16; // rax
  __int64 v17; // rcx
  __m128i v18; // xmm0
  __int64 v19; // rax
  __int64 v20; // rsi
  __m128i *v21; // rax
  __int64 j; // rcx
  __int64 v23; // rsi
  __int16 v24; // cx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  __m128i v29; // xmm0

  result = (__int64)a2->m128i_i64 - a1;
  if ( (__int64)a2->m128i_i64 - a1 > 384 )
  {
    v7 = a3;
    for ( i = a2; v7; i = v14 )
    {
      v10 = *(_QWORD *)(a1 + 24);
      v11 = i[-2].m128i_i64[1];
      --v7;
      v12 = *(_QWORD *)(a1 + 8);
      v13 = *(_WORD *)(a1 + 16);
      v14 = (__m128i *)(a1 + 24);
      v15 = *(_QWORD *)a1;
      v16 = (__m128i *)(a1
                      + 8
                      * (((__int64)(0xAAAAAAAAAAAAAAABLL * (result >> 3)) >> 1)
                       + ((0xAAAAAAAAAAAAAAABLL * (result >> 3)) & 0xFFFFFFFFFFFFFFFELL)));
      v17 = v16->m128i_i64[0];
      if ( v10 >= v16->m128i_i64[0] )
      {
        if ( v10 >= v11 )
        {
          if ( v17 >= v11 )
          {
LABEL_22:
            *(__m128i *)a1 = _mm_loadu_si128(v16);
            *(_QWORD *)(a1 + 16) = v16[1].m128i_i64[0];
            v16->m128i_i64[0] = v15;
            v16->m128i_i64[1] = v12;
            v16[1].m128i_i16[0] = v13;
            v15 = *(_QWORD *)(a1 + 24);
            v20 = i[-2].m128i_i64[1];
            goto LABEL_7;
          }
LABEL_16:
          v20 = *(_QWORD *)a1;
          *(__m128i *)a1 = _mm_loadu_si128((__m128i *)((char *)i - 24));
          *(_QWORD *)(a1 + 16) = i[-1].m128i_i64[1];
          i[-2].m128i_i64[1] = v15;
          i[-1].m128i_i64[0] = v12;
          i[-1].m128i_i16[4] = v13;
          v15 = *(_QWORD *)(a1 + 24);
          goto LABEL_7;
        }
      }
      else
      {
        if ( v17 < v11 )
          goto LABEL_22;
        if ( v10 < v11 )
          goto LABEL_16;
      }
      v18 = _mm_loadu_si128((const __m128i *)(a1 + 24));
      v19 = *(_QWORD *)(a1 + 40);
      *(_QWORD *)(a1 + 24) = v15;
      *(_QWORD *)(a1 + 32) = v12;
      *(_QWORD *)(a1 + 16) = v19;
      *(_WORD *)(a1 + 40) = v13;
      *(__m128i *)a1 = v18;
      v20 = i[-2].m128i_i64[1];
LABEL_7:
      v21 = i;
      while ( 1 )
      {
        for ( j = *(_QWORD *)a1; v15 < j; v14 = (__m128i *)((char *)v14 + 24) )
          v15 = v14[1].m128i_i64[1];
        v21 = (__m128i *)((char *)v21 - 24);
        if ( v20 > j )
        {
          do
            v21 = (__m128i *)((char *)v21 - 24);
          while ( v21->m128i_i64[0] > j );
        }
        if ( v14 >= v21 )
          break;
        v23 = v14->m128i_i64[1];
        v14 = (__m128i *)((char *)v14 + 24);
        v24 = v14[-1].m128i_i16[4];
        *(__m128i *)((char *)v14 - 24) = _mm_loadu_si128(v21);
        v14[-1].m128i_i64[1] = v21[1].m128i_i64[0];
        v21->m128i_i64[1] = v23;
        v20 = v21[-2].m128i_i64[1];
        v21->m128i_i64[0] = v15;
        v21[1].m128i_i16[0] = v24;
        v15 = v14->m128i_i64[0];
      }
      sub_57810(v14, i, v7);
      result = (__int64)v14->m128i_i64 - a1;
      if ( (__int64)v14->m128i_i64 - a1 <= 384 )
        return result;
    }
    sub_576E0((const __m128i *)a1, i, (unsigned __int64)i, a4, a5, a6);
    for ( result = (__int64)i->m128i_i64 - a1;
          (__int64)i->m128i_i64 - a1 > 24;
          result = sub_54290(
                     a1,
                     0,
                     0xAAAAAAAAAAAAAAABLL * (((__int64)i->m128i_i64 - a1) >> 3),
                     v25,
                     v26,
                     v27,
                     v29.m128i_i64[0],
                     v29.m128i_i64[1],
                     v28) )
    {
      i = (__m128i *)((char *)i - 24);
      v28 = i[1].m128i_i64[0];
      v29 = _mm_loadu_si128(i);
      *i = _mm_loadu_si128((const __m128i *)a1);
      i[1].m128i_i64[0] = *(_QWORD *)(a1 + 16);
    }
  }
  return result;
}
