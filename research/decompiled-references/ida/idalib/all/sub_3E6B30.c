__m128i *__fastcall sub_3E6B30(__int64 a1, __m128i *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __m128i *result; // rax
  __int64 v7; // r14
  __m128i *i; // r13
  const __m128i *v10; // rbx
  char v11; // dl
  __m128i *v12; // rax
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rsi
  char v15; // si
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rdi
  __m128i v18; // xmm0
  __int64 v19; // rdx
  __m128i *j; // rax
  __m128i v21; // xmm0
  __int64 v22; // rdx
  __int8 v23; // dl
  char v24; // si
  unsigned __int64 v25; // rdi
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rdx
  __m128i v28; // xmm0
  __m128i v29; // xmm1
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rax
  __int128 v34; // xmm0
  __m128i v35; // xmm0
  __int64 v36; // rax
  __m128i v37; // [rsp+20h] [rbp-48h]
  __int64 v38; // [rsp+30h] [rbp-38h]

  result = (__m128i *)((char *)a2 - a1);
  if ( (__int64)a2->m128i_i64 - a1 > 384 )
  {
    v7 = a3;
    for ( i = a2; v7; i = (__m128i *)v10 )
    {
      --v7;
      v10 = (const __m128i *)(a1 + 24);
      v11 = *(_BYTE *)(a1 + 32);
      v12 = (__m128i *)(a1
                      + 8
                      * (((__int64)(0xAAAAAAAAAAAAAAABLL * ((__int64)result >> 3)) >> 1)
                       + ((0xAAAAAAAAAAAAAAABLL * ((__int64)result >> 3)) & 0xFFFFFFFFFFFFFFFELL)));
      v13 = v12->m128i_u8[8];
      if ( v11 < (char)v13
        || v11 <= (char)v13
        && ((v14 = *(_QWORD *)(a1 + 24), v14 < v12->m128i_i64[0])
         || v12->m128i_i64[0] >= v14 && *(_BYTE *)(a1 + 40) < v12[1].m128i_i8[0]) )
      {
        v24 = i[-1].m128i_i8[0];
        if ( (char)v13 >= v24 )
        {
          if ( (char)v13 > v24
            || (v13 = v12->m128i_i64[0], v25 = i[-2].m128i_u64[1], v12->m128i_i64[0] >= v25)
            && (v25 < v13 || v12[1].m128i_i8[0] >= (unsigned int)i[-1].m128i_i8[8]) )
          {
            if ( v11 < v24
              || v11 <= v24
              && ((v26 = *(_QWORD *)(a1 + 24), v27 = i[-2].m128i_u64[1], v26 < v27)
               || v27 >= v26 && *(_BYTE *)(a1 + 40) < i[-1].m128i_i8[8]) )
            {
LABEL_50:
              v35 = _mm_loadu_si128((const __m128i *)a1);
              v36 = *(_QWORD *)(a1 + 16);
              *(__m128i *)a1 = _mm_loadu_si128((__m128i *)((char *)i - 24));
              v38 = v36;
              *(_BYTE *)(a1 + 16) = i[-1].m128i_i8[8];
              v37 = v35;
              i[-1].m128i_i8[8] = v36;
              *(__m128i *)((char *)i - 24) = v35;
              goto LABEL_19;
            }
LABEL_44:
            v28 = _mm_loadu_si128((const __m128i *)a1);
            v29 = _mm_loadu_si128((const __m128i *)(a1 + 24));
            v38 = *(_QWORD *)(a1 + 16);
            *(_BYTE *)(a1 + 16) = *(_BYTE *)(a1 + 40);
            *(_BYTE *)(a1 + 40) = v38;
            v37 = v28;
            *(__m128i *)a1 = v29;
            *(__m128i *)(a1 + 24) = v28;
            goto LABEL_19;
          }
        }
      }
      else
      {
        v15 = i[-1].m128i_i8[0];
        if ( v11 < v15 )
          goto LABEL_44;
        if ( v11 <= v15 )
        {
          v16 = *(_QWORD *)(a1 + 24);
          v17 = i[-2].m128i_u64[1];
          if ( v16 < v17 || v17 >= v16 && *(_BYTE *)(a1 + 40) < i[-1].m128i_i8[8] )
            goto LABEL_44;
        }
        if ( (char)v13 < v15 )
          goto LABEL_50;
        if ( (char)v13 <= v15 )
        {
          v13 = i[-2].m128i_u64[1];
          if ( v12->m128i_i64[0] < v13
            || v13 >= v12->m128i_i64[0] && v12[1].m128i_i8[0] < (unsigned int)i[-1].m128i_i8[8] )
          {
            goto LABEL_50;
          }
        }
      }
      v18 = _mm_loadu_si128((const __m128i *)a1);
      v19 = *(_QWORD *)(a1 + 16);
      *(__m128i *)a1 = _mm_loadu_si128(v12);
      v13 = v12[1].m128i_u8[0];
      v38 = v19;
      *(_BYTE *)(a1 + 16) = v13;
      v12[1].m128i_i8[0] = v19;
      v37 = v18;
      *v12 = v18;
LABEL_19:
      for ( j = i; ; *j = v21 )
      {
        v23 = *(_BYTE *)(a1 + 8);
        while ( 1 )
        {
          if ( v10->m128i_i8[8] >= v23 )
          {
            if ( v10->m128i_i8[8] > v23 )
              break;
            v13 = v10->m128i_i64[0];
            if ( v10->m128i_i64[0] >= *(_QWORD *)a1
              && (*(_QWORD *)a1 < v13 || v10[1].m128i_i8[0] >= *(_BYTE *)(a1 + 16)) )
            {
              break;
            }
          }
          v10 = (const __m128i *)((char *)v10 + 24);
        }
        do
        {
          do
            j = (__m128i *)((char *)j - 24);
          while ( v23 < j->m128i_i8[8] );
          if ( v23 > j->m128i_i8[8] )
            break;
          v13 = *(_QWORD *)a1;
        }
        while ( *(_QWORD *)a1 < j->m128i_i64[0] || j->m128i_i64[0] >= v13 && *(_BYTE *)(a1 + 16) < j[1].m128i_i8[0] );
        if ( v10 >= j )
          break;
        v21 = _mm_loadu_si128(v10);
        v10 = (const __m128i *)((char *)v10 + 24);
        v22 = v10[-1].m128i_i64[1];
        *(const __m128i *)((char *)&v10[-2] + 8) = _mm_loadu_si128(j);
        v13 = j[1].m128i_u8[0];
        v38 = v22;
        v10[-1].m128i_i8[8] = v13;
        j[1].m128i_i8[0] = v22;
        v37 = v21;
      }
      sub_3E6B30(v10, i, v7, v13, a5, a6, v37.m128i_i64[0], v37.m128i_i64[1], v38);
      result = (__m128i *)((char *)v10 - a1);
      if ( (__int64)v10->m128i_i64 - a1 <= 384 )
        return result;
    }
    sub_3E6A00((const __m128i *)a1, i, (unsigned __int64)i, a4, a5, a6);
    for ( result = (__m128i *)((char *)i - a1);
          (__int64)i->m128i_i64 - a1 > 24;
          result = sub_3E1470(
                     a1,
                     0,
                     0xAAAAAAAAAAAAAAABLL * (((__int64)i->m128i_i64 - a1) >> 3),
                     v30,
                     v31,
                     v32,
                     v34,
                     v33) )
    {
      i = (__m128i *)((char *)i - 24);
      v33 = i[1].m128i_i64[0];
      v34 = (__int128)_mm_loadu_si128(i);
      *i = _mm_loadu_si128((const __m128i *)a1);
      i[1].m128i_i8[0] = *(_BYTE *)(a1 + 16);
    }
  }
  return result;
}
