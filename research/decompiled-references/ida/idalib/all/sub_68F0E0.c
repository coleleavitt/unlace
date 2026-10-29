signed __int64 __fastcall sub_68F0E0(__m128i *a1, unsigned __int64 *a2, __int64 a3)
{
  signed __int64 result; // rax
  __int64 v4; // rax
  __int64 v5; // r13
  __int64 v6; // r14
  unsigned __int64 *i; // r12
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rdx
  __m128i *v11; // rax
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // r8
  __m128i *v14; // rbx
  unsigned __int64 v15; // rcx
  __m128i v16; // xmm0
  unsigned __int64 v17; // rsi
  __m128i *v18; // rax
  unsigned __int64 j; // rcx
  __int64 v20; // rcx
  __int64 k; // rbx
  unsigned __int64 v22; // rcx
  __int64 v23; // r8

  result = (char *)a2 - (char *)a1;
  if ( (char *)a2 - (char *)a1 > 256 )
  {
    v4 = result >> 5;
    v5 = a3;
    v6 = ((char *)a2 - (char *)a1) >> 4;
    for ( i = a2; v5; v6 = v14 - a1 )
    {
      v9 = a1[1].m128i_u64[0];
      v10 = a1->m128i_i64[0];
      --v5;
      v11 = &a1[v4];
      v12 = *(i - 2);
      v13 = a1->m128i_u64[1];
      v14 = a1 + 1;
      v15 = v11->m128i_i64[0];
      if ( v9 >= v11->m128i_i64[0] )
      {
        if ( v9 >= v12 )
        {
          if ( v15 >= v12 )
          {
LABEL_25:
            *a1 = _mm_loadu_si128(v11);
            v11->m128i_i64[0] = v10;
            v11->m128i_i64[1] = v13;
            v10 = a1[1].m128i_u64[0];
            v17 = *(i - 2);
            goto LABEL_7;
          }
LABEL_16:
          v17 = a1->m128i_i64[0];
          *a1 = _mm_loadu_si128((const __m128i *)i - 1);
          *(i - 2) = v10;
          *(i - 1) = v13;
          v10 = a1[1].m128i_u64[0];
          goto LABEL_7;
        }
      }
      else
      {
        if ( v15 < v12 )
          goto LABEL_25;
        if ( v9 < v12 )
          goto LABEL_16;
      }
      v16 = _mm_loadu_si128(a1 + 1);
      a1[1].m128i_i64[0] = v10;
      a1[1].m128i_i64[1] = v13;
      *a1 = v16;
      v17 = *(i - 2);
LABEL_7:
      v18 = (__m128i *)i;
      while ( 1 )
      {
        for ( j = a1->m128i_i64[0]; v10 < j; ++v14 )
          v10 = v14[1].m128i_u64[0];
        --v18;
        if ( j < v17 )
        {
          do
            --v18;
          while ( j < v18->m128i_i64[0] );
        }
        if ( v14 >= v18 )
          break;
        v20 = v14->m128i_i64[1];
        ++v14;
        v14[-1] = _mm_loadu_si128(v18);
        v17 = v18[-1].m128i_u64[0];
        v18->m128i_i64[0] = v10;
        v18->m128i_i64[1] = v20;
        v10 = v14->m128i_i64[0];
      }
      sub_68F0E0(v14, i, v5);
      result = (char *)v14 - (char *)a1;
      if ( (char *)v14 - (char *)a1 <= 256 )
        return result;
      i = (unsigned __int64 *)v14;
      v4 = result >> 5;
    }
    for ( k = v4 - 1; ; --k )
    {
      sub_68EBC0((__int64)a1, k, v6, a1[k].m128i_u64[0], a1[k].m128i_i64[1]);
      if ( !k )
        break;
    }
    for ( result = (char *)i - (char *)a1;
          (char *)i - (char *)a1 > 16;
          result = (signed __int64)sub_68EBC0((__int64)a1, 0, ((char *)i - (char *)a1) >> 4, v22, v23) )
    {
      i -= 2;
      v22 = *i;
      v23 = i[1];
      *(__m128i *)i = _mm_loadu_si128(a1);
    }
  }
  return result;
}
