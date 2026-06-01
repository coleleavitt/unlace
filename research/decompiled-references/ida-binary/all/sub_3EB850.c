signed __int64 __fastcall sub_3EB850(__m128i *a1, unsigned __int64 *a2, __int64 a3)
{
  signed __int64 result; // rax
  __int64 v4; // rax
  __int64 v5; // r13
  __int64 v6; // r14
  unsigned __int64 *i; // r12
  unsigned __int64 v8; // rdx
  __m128i *v9; // rbx
  __m128i *v10; // rax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rsi
  __int64 v13; // rcx
  __int16 v14; // dx
  unsigned __int64 v15; // rsi
  __m128i v16; // xmm0
  __int16 v17; // ax
  unsigned __int64 v18; // rdx
  __int16 v19; // ax
  __m128i *j; // rax
  unsigned __int64 v21; // rsi
  __int16 v22; // dx
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rcx
  __int64 k; // rbx
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // r8

  result = (char *)a2 - (char *)a1;
  if ( (char *)a2 - (char *)a1 > 256 )
  {
    v4 = result >> 5;
    v5 = a3;
    v6 = ((char *)a2 - (char *)a1) >> 4;
    for ( i = a2; v5; v6 = v9 - a1 )
    {
      v8 = a1[1].m128i_u64[0];
      --v5;
      v9 = a1 + 1;
      v10 = &a1[v4];
      v11 = v10->m128i_i64[0];
      if ( v8 < v10->m128i_i64[0] || v11 >= v8 && a1[1].m128i_i16[4] < (unsigned int)v10->m128i_i16[4] )
      {
        v15 = *(i - 2);
        if ( v11 >= v15 && (v15 < v11 || v10->m128i_i16[4] >= *((_WORD *)i - 4)) )
        {
          if ( v8 < v15 || v15 >= v8 && a1[1].m128i_i16[4] < *((_WORD *)i - 4) )
          {
LABEL_20:
            v18 = a1->m128i_i64[0];
            v19 = a1->m128i_i16[4];
            *a1 = _mm_loadu_si128((const __m128i *)i - 1);
            *(i - 2) = v18;
            *((_WORD *)i - 4) = v19;
            goto LABEL_21;
          }
LABEL_19:
          v16 = _mm_loadu_si128(a1 + 1);
          v17 = a1->m128i_i16[4];
          a1[1].m128i_i64[0] = a1->m128i_i64[0];
          a1[1].m128i_i16[4] = v17;
          *a1 = v16;
          goto LABEL_21;
        }
      }
      else
      {
        v12 = *(i - 2);
        if ( v8 < v12 || v12 >= v8 && a1[1].m128i_i16[4] < *((_WORD *)i - 4) )
          goto LABEL_19;
        if ( v11 < v12 || v12 >= v11 && v10->m128i_i16[4] < *((_WORD *)i - 4) )
          goto LABEL_20;
      }
      v13 = a1->m128i_i64[0];
      v14 = a1->m128i_i16[4];
      *a1 = _mm_loadu_si128(v10);
      v10->m128i_i64[0] = v13;
      v10->m128i_i16[4] = v14;
LABEL_21:
      for ( j = (__m128i *)i; ; j->m128i_i16[4] = v22 )
      {
        v23 = a1->m128i_i64[0];
        while ( 1 )
        {
          v24 = v9->m128i_i64[0];
          if ( v9->m128i_i64[0] >= v23 && (v23 < v24 || v9->m128i_i16[4] >= (unsigned int)a1->m128i_i16[4]) )
            break;
          ++v9;
        }
        do
        {
          do
          {
            v21 = j[-1].m128i_u64[0];
            --j;
          }
          while ( v23 < v21 );
        }
        while ( v21 >= v23 && a1->m128i_i16[4] < (unsigned int)j->m128i_i16[4] );
        if ( v9 >= j )
          break;
        v22 = v9->m128i_i16[4];
        ++v9;
        v9[-1] = _mm_loadu_si128(j);
        j->m128i_i64[0] = v24;
      }
      sub_3EB850(v9, i, v5);
      result = (char *)v9 - (char *)a1;
      if ( (char *)v9 - (char *)a1 <= 256 )
        return result;
      i = (unsigned __int64 *)v9;
      v4 = result >> 5;
    }
    for ( k = v4 - 1; ; --k )
    {
      sub_3EB5C0((__int64)a1, k, v6, a1[k].m128i_u64[0], a1[k].m128i_i64[1]);
      if ( !k )
        break;
    }
    for ( result = (char *)i - (char *)a1;
          (char *)i - (char *)a1 > 16;
          result = (signed __int64)sub_3EB5C0((__int64)a1, 0, ((char *)i - (char *)a1) >> 4, v26, v27) )
    {
      i -= 2;
      v26 = *i;
      v27 = i[1];
      *(__m128i *)i = _mm_loadu_si128(a1);
    }
  }
  return result;
}
