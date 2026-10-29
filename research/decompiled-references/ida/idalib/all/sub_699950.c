signed __int64 __fastcall sub_699950(__m128i *a1, unsigned __int64 *a2, __int64 a3)
{
  signed __int64 result; // rax
  __int64 v4; // rax
  __int64 v5; // r13
  __int64 v6; // r14
  unsigned __int64 *v7; // r12
  unsigned __int64 v8; // rdx
  __m128i *v9; // rbx
  __m128i *v10; // rax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rsi
  __m128i v13; // xmm0
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rsi
  __m128i *v16; // rax
  __m128 v17; // xmm0
  unsigned __int64 v18; // rdx
  __int64 i; // rbx
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // r8
  __m128i v22; // xmm1
  unsigned __int64 v23; // rsi
  __m128i v24; // xmm0

  result = (char *)a2 - (char *)a1;
  if ( (char *)a2 - (char *)a1 > 256 )
  {
    v4 = result >> 5;
    v5 = a3;
    v6 = ((char *)a2 - (char *)a1) >> 4;
    v7 = a2;
    if ( a3 )
    {
      while ( 1 )
      {
        v8 = a1[1].m128i_u64[0];
        --v5;
        v9 = a1 + 1;
        v10 = &a1[v4];
        v11 = v10->m128i_i64[0];
        if ( v10->m128i_i64[0] < v8 )
        {
          v12 = *(v7 - 2);
          if ( v12 >= v8 )
          {
LABEL_33:
            if ( v12 != v8 || a1[1].m128i_i64[1] < *(v7 - 1) )
              goto LABEL_35;
          }
          if ( v12 >= v11 && (v12 != v11 || v10->m128i_i64[1] < *(v7 - 1)) )
            goto LABEL_44;
          goto LABEL_8;
        }
        if ( v8 != v11 )
          break;
        if ( a1[1].m128i_i64[1] < (unsigned __int64)v10->m128i_i64[1] )
        {
          v23 = *(v7 - 2);
          if ( v23 < v8 )
            goto LABEL_35;
LABEL_40:
          if ( v11 == v23 && v10->m128i_i64[1] >= *(v7 - 1) )
            goto LABEL_42;
          goto LABEL_8;
        }
        v12 = *(v7 - 2);
        if ( v12 >= v8 )
          goto LABEL_33;
LABEL_8:
        v13 = _mm_loadu_si128(a1);
        *a1 = _mm_loadu_si128(v10);
        *v10 = v13;
        v14 = a1[1].m128i_u64[0];
        v15 = *(v7 - 2);
LABEL_9:
        v16 = (__m128i *)v7;
        while ( 1 )
        {
          v18 = a1->m128i_i64[0];
          if ( a1->m128i_i64[0] >= v14 )
          {
            while ( v14 < v18 || v9->m128i_i64[1] < (unsigned __int64)a1->m128i_i64[1] )
            {
              v14 = v9[1].m128i_u64[0];
              ++v9;
              if ( v18 < v14 )
              {
                --v16;
                if ( v15 >= v18 )
                  goto LABEL_18;
                goto LABEL_11;
              }
            }
          }
          --v16;
          if ( v15 >= v18 )
          {
LABEL_18:
            while ( v18 < v15 || a1->m128i_i64[1] < (unsigned __int64)v16->m128i_i64[1] )
            {
              v15 = v16[-1].m128i_u64[0];
              --v16;
              if ( v15 < v18 )
              {
                if ( v9 < v16 )
                  goto LABEL_12;
                goto LABEL_22;
              }
            }
          }
LABEL_11:
          if ( v9 >= v16 )
            break;
LABEL_12:
          ++v9;
          v17 = _mm_loadh_ps((const double *)&v9[-1].m128i_i64[1]);
          v9[-1] = _mm_loadu_si128(v16);
          v15 = v16[-1].m128i_u64[0];
          *v16 = (__m128i)v17;
          v14 = v9->m128i_i64[0];
        }
LABEL_22:
        sub_699950(v9, v7, v5);
        result = (char *)v9 - (char *)a1;
        if ( (char *)v9 - (char *)a1 <= 256 )
          return result;
        v7 = (unsigned __int64 *)v9;
        v4 = result >> 5;
        v6 = v9 - a1;
        if ( !v5 )
          goto LABEL_24;
      }
      v23 = *(v7 - 2);
      if ( v23 < v11 )
      {
        if ( v23 >= v8 )
        {
LABEL_42:
          if ( v23 != v8 || a1[1].m128i_i64[1] < *(v7 - 1) )
          {
LABEL_44:
            v24 = _mm_loadu_si128(a1);
            v15 = a1->m128i_i64[0];
            *a1 = _mm_loadu_si128((const __m128i *)v7 - 1);
            *((__m128i *)v7 - 1) = v24;
            v14 = a1[1].m128i_u64[0];
            goto LABEL_9;
          }
        }
LABEL_35:
        v22 = _mm_loadu_si128(a1 + 1);
        v14 = a1->m128i_i64[0];
        a1[1] = _mm_loadu_si128(a1);
        *a1 = v22;
        v15 = *(v7 - 2);
        goto LABEL_9;
      }
      goto LABEL_40;
    }
LABEL_24:
    for ( i = v4 - 1; ; --i )
    {
      sub_698D80((__int64)a1, i, v6, a1[i].m128i_u64[0], a1[i].m128i_u64[1]);
      if ( !i )
        break;
    }
    for ( result = (char *)v7 - (char *)a1;
          (char *)v7 - (char *)a1 > 16;
          result = (signed __int64)sub_698D80((__int64)a1, 0, ((char *)v7 - (char *)a1) >> 4, v20, v21) )
    {
      v7 -= 2;
      v20 = *v7;
      v21 = v7[1];
      *(__m128i *)v7 = _mm_loadu_si128(a1);
    }
  }
  return result;
}
