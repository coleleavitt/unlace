signed __int64 __fastcall sub_4F47C0(__m128i *a1, unsigned __int64 *a2, __int64 a3)
{
  signed __int64 result; // rax
  __int64 v4; // r13
  unsigned __int64 *v5; // r12
  __int64 v7; // rax
  __int64 i; // rbx
  unsigned __int64 v9; // rsi
  __m128i *v10; // rbx
  __m128i *v11; // rax
  __m128i v12; // xmm0
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  __m128i v16; // xmm1
  unsigned __int64 v17; // rsi
  __m128i *v18; // rax
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  __m128 v21; // xmm0
  __int64 j; // rsi
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // r8

  result = (char *)a2 - (char *)a1;
  if ( (char *)a2 - (char *)a1 > 256 )
  {
    v4 = a3;
    v5 = a2;
    v7 = result >> 5;
    for ( i = ((char *)a2 - (char *)a1) >> 4; v4; i = v10 - a1 )
    {
      v9 = a1[1].m128i_u64[0];
      --v4;
      v10 = a1 + 1;
      v11 = &a1[v7];
      v12 = _mm_loadu_si128(a1);
      v13 = *(v5 - 2);
      v14 = v11->m128i_i64[0];
      v15 = v12.m128i_i64[0];
      if ( v9 >= v11->m128i_i64[0] )
      {
        if ( v9 >= v13 )
        {
          if ( v14 >= v13 )
          {
LABEL_25:
            *a1 = _mm_loadu_si128(v11);
            *v11 = v12;
            v15 = a1[1].m128i_u64[0];
            v17 = *(v5 - 2);
            goto LABEL_7;
          }
LABEL_16:
          v17 = v12.m128i_i64[0];
          *a1 = _mm_loadu_si128((const __m128i *)v5 - 1);
          *((__m128i *)v5 - 1) = v12;
          v15 = a1[1].m128i_u64[0];
          goto LABEL_7;
        }
      }
      else
      {
        if ( v14 < v13 )
          goto LABEL_25;
        if ( v9 < v13 )
          goto LABEL_16;
      }
      v16 = _mm_loadu_si128(a1 + 1);
      a1[1] = v12;
      *a1 = v16;
      v17 = *(v5 - 2);
LABEL_7:
      v18 = (__m128i *)v5;
      while ( 1 )
      {
        v19 = a1->m128i_i64[0];
        if ( v15 < a1->m128i_i64[0] )
        {
          do
          {
            v20 = v10[1].m128i_u64[0];
            ++v10;
          }
          while ( v20 < v19 );
        }
        --v18;
        if ( v19 < v17 )
        {
          do
            --v18;
          while ( v19 < v18->m128i_i64[0] );
        }
        if ( v10 >= v18 )
          break;
        ++v10;
        v21 = _mm_loadh_ps((const double *)&v10[-1].m128i_i64[1]);
        v10[-1] = _mm_loadu_si128(v18);
        v17 = v18[-1].m128i_u64[0];
        *v18 = (__m128i)v21;
        v15 = v10->m128i_i64[0];
      }
      sub_4F47C0(v10, v5, v4);
      result = (char *)v10 - (char *)a1;
      if ( (char *)v10 - (char *)a1 <= 256 )
        return result;
      v5 = (unsigned __int64 *)v10;
      v7 = result >> 5;
    }
    for ( j = v7 - 1; ; --j )
    {
      sub_4F3E80((__int64)a1, j, i, a1[j].m128i_u64[0], a1[j].m128i_u64[1]);
      if ( !j )
        break;
    }
    for ( result = (char *)v5 - (char *)a1;
          (char *)v5 - (char *)a1 > 16;
          result = (signed __int64)sub_4F3E80((__int64)a1, 0, ((char *)v5 - (char *)a1) >> 4, v23, v24) )
    {
      v5 -= 2;
      v23 = *v5;
      v24 = v5[1];
      *(__m128i *)v5 = _mm_loadu_si128(a1);
    }
  }
  return result;
}
