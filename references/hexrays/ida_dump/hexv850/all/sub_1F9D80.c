__int64 __fastcall sub_1F9D80(__m128i *a1, __int64 *a2, __int64 a3, unsigned __int8 (__fastcall *a4)(__int64, __int64))
{
  __int64 result; // rax
  __int64 v5; // rax
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 *i; // r13
  __int64 *v11; // r15
  char *v12; // rbx
  unsigned __int8 v13; // al
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 *v17; // r15
  unsigned __int8 v18; // al
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 j; // rbx
  __int64 v22; // rcx
  __m128d v23; // xmm0
  unsigned __int8 v24; // al
  __int64 v25; // rdx
  unsigned __int8 v26; // al

  result = (char *)a2 - (char *)a1;
  if ( (char *)a2 - (char *)a1 > 128 )
  {
    v5 = result >> 4;
    v6 = a3;
    v7 = ((char *)a2 - (char *)a1) >> 3;
    for ( i = a2; v6; v7 = (v12 - (char *)a1) >> 3 )
    {
      v11 = &a1->m128i_i64[v5];
      --v6;
      v12 = &a1->m128i_i8[8];
      v13 = a4(a1->m128i_i64[1], *v11);
      v14 = *(i - 1);
      if ( v13 )
      {
        if ( !a4(*v11, v14) )
        {
          v24 = a4(a1->m128i_i64[1], *(i - 1));
          v25 = a1->m128i_i64[0];
          if ( !v24 )
          {
            v16 = a1->m128i_i64[1];
            *a1 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v16, (__m128i)(unsigned __int64)v25);
            goto LABEL_6;
          }
LABEL_25:
          a1->m128i_i64[0] = *(i - 1);
          *(i - 1) = v25;
          v16 = a1->m128i_i64[0];
          goto LABEL_6;
        }
        v15 = a1->m128i_i64[0];
        a1->m128i_i64[0] = *v11;
        *v11 = v15;
        v16 = a1->m128i_i64[0];
      }
      else
      {
        if ( !a4(a1->m128i_i64[1], v14) )
        {
          v26 = a4(*v11, *(i - 1));
          v25 = a1->m128i_i64[0];
          if ( !v26 )
          {
            a1->m128i_i64[0] = *v11;
            *v11 = v25;
            v16 = a1->m128i_i64[0];
            goto LABEL_6;
          }
          goto LABEL_25;
        }
        v23 = (__m128d)_mm_loadu_si128(a1);
        v16 = a1->m128i_i64[1];
        *(__m128d *)a1 = _mm_shuffle_pd(v23, v23, 1);
      }
LABEL_6:
      v17 = i;
      while ( 1 )
      {
        while ( 1 )
        {
          v18 = a4(*(_QWORD *)v12, v16);
          v19 = a1->m128i_i64[0];
          v16 = a1->m128i_i64[0];
          if ( !v18 )
            break;
          v12 += 8;
        }
        for ( --v17; a4(v19, *v17); --v17 )
          v19 = a1->m128i_i64[0];
        if ( v12 >= (char *)v17 )
          break;
        v20 = *(_QWORD *)v12;
        v12 += 8;
        *((_QWORD *)v12 - 1) = *v17;
        *v17 = v20;
        v16 = a1->m128i_i64[0];
      }
      sub_1F9D80(v12, i, v6, a4);
      result = v12 - (char *)a1;
      if ( v12 - (char *)a1 <= 128 )
        return result;
      i = (__int64 *)v12;
      v5 = result >> 4;
    }
    for ( j = v5 - 1; ; --j )
    {
      sub_1F9BE0((__int64)a1, j, v7, a1->m128i_i64[j], a4);
      if ( !j )
        break;
    }
    for ( result = (char *)i - (char *)a1;
          (char *)i - (char *)a1 > 8;
          result = (__int64)sub_1F9BE0((__int64)a1, 0, ((char *)i - (char *)a1) >> 3, v22, a4) )
    {
      v22 = *--i;
      *i = a1->m128i_i64[0];
    }
  }
  return result;
}
