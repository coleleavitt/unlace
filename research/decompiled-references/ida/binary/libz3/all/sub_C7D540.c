char *__fastcall sub_C7D540(
        const __m128i *a1,
        const __m128i *a2,
        const __m128i *a3,
        const __m128i *a4,
        char *a5,
        _QWORD *a6)
{
  __m128i v9; // xmm0
  __m128i v10; // xmm1
  unsigned int v11; // esi
  unsigned int v12; // edx
  unsigned int v13; // eax
  unsigned int v14; // ecx
  char v15; // dl
  bool v16; // al
  __int64 v17; // r11
  __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  const __m128i *v20; // rax
  unsigned __int64 v21; // rax
  __int64 v22; // rdx
  unsigned __int64 v23; // rcx
  __int64 v24; // rbx
  __int64 v25; // rcx
  unsigned __int64 v26; // rdx
  const __m128i *v27; // rax
  unsigned __int64 v28; // rax
  __int64 v29; // rdx
  unsigned __int64 v30; // rcx
  char *v32; // rcx
  __int64 v33; // rsi
  char *v34; // rcx
  __int64 v35; // rsi

  if ( a1 != a2 )
  {
    while ( a3 != a4 )
    {
      v9 = _mm_loadl_epi64(a3);
      v10 = _mm_loadl_epi64(a1);
      v11 = _mm_cvtsi128_si32(_mm_shuffle_epi32(v9, 229));
      v12 = _mm_cvtsi128_si32(v9);
      v13 = _mm_cvtsi128_si32(v10);
      v14 = _mm_cvtsi128_si32(_mm_shuffle_epi32(v10, 229));
      if ( v11 )
      {
        if ( v14 )
        {
          v15 = *(_BYTE *)(*a6 + v12);
          v16 = *(_BYTE *)(*a6 + v13) != 0;
          if ( !v15 && v16 )
            goto LABEL_11;
          if ( (v15 != 0) == v16 && v11 < v14 )
            goto LABEL_11;
        }
LABEL_5:
        a1 = (const __m128i *)((char *)a1 + 8);
        a5 += 8;
        *((_QWORD *)a5 - 1) = v10.m128i_i64[0];
        if ( a1 == a2 )
          break;
      }
      else
      {
        if ( !v14 && v12 >= v13 )
          goto LABEL_5;
LABEL_11:
        *(_QWORD *)a5 = v9.m128i_i64[0];
        a3 = (const __m128i *)((char *)a3 + 8);
        a5 += 8;
        if ( a1 == a2 )
          break;
      }
    }
  }
  v17 = (char *)a2 - (char *)a1;
  v18 = v17 >> 3;
  v19 = v17 >> 3;
  if ( v17 <= 0 )
    goto LABEL_21;
  v20 = (const __m128i *)&a1->m128i_u64[1];
  if ( (unsigned __int64)(a5 - (char *)&a1->m128i_u64[1] + 4) <= 8 )
  {
    v34 = a5;
    while ( 1 )
    {
      v35 = a1->m128i_i64[0];
      v34 += 8;
      a1 = v20;
      *((_QWORD *)v34 - 1) = v35;
      if ( !--v19 )
        break;
      v20 = (const __m128i *)((char *)v20 + 8);
    }
    goto LABEL_20;
  }
  if ( v17 <= 8 )
  {
    v23 = 0;
  }
  else
  {
    v21 = 0;
    v22 = 16 * (v19 >> 1);
    do
    {
      *(__m128i *)&a5[v21] = _mm_loadu_si128(&a1[v21 / 0x10]);
      v21 += 16LL;
    }
    while ( v22 != v21 );
    if ( (v18 & 1) == 0 )
      goto LABEL_20;
    v23 = v18 & 0xFFFFFFFFFFFFFFFELL;
  }
  *(_QWORD *)&a5[8 * v23] = a1->m128i_i64[v23];
LABEL_20:
  a5 += v17;
LABEL_21:
  v24 = (char *)a4 - (char *)a3;
  v25 = v24 >> 3;
  v26 = v24 >> 3;
  if ( v24 > 0 )
  {
    v27 = (const __m128i *)&a3->m128i_u64[1];
    if ( (unsigned __int64)(a5 - (char *)&a3->m128i_u64[1] + 4) <= 8 )
    {
      v32 = a5;
      while ( 1 )
      {
        v33 = a3->m128i_i64[0];
        v32 += 8;
        a3 = v27;
        *((_QWORD *)v32 - 1) = v33;
        if ( !--v26 )
          break;
        v27 = (const __m128i *)((char *)v27 + 8);
      }
      goto LABEL_29;
    }
    if ( v24 <= 8 )
    {
      v30 = 0;
    }
    else
    {
      v28 = 0;
      v29 = 16 * (v26 >> 1);
      do
      {
        *(__m128i *)&a5[v28] = _mm_loadu_si128(&a3[v28 / 0x10]);
        v28 += 16LL;
      }
      while ( v28 != v29 );
      if ( (v25 & 1) == 0 )
        goto LABEL_29;
      v30 = v25 & 0xFFFFFFFFFFFFFFFELL;
    }
    *(_QWORD *)&a5[8 * v30] = a3->m128i_i64[v30];
LABEL_29:
    a5 += v24;
  }
  return a5;
}

