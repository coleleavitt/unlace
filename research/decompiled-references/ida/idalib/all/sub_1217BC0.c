__int64 *__fastcall sub_1217BC0(__int64 a1, const __m128i *a2, __int64 a3)
{
  __m128i *v5; // rbx
  __m128i *v6; // rbp
  __int8 *v7; // rcx
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // r14
  __m128i *v10; // rax
  const __m128i *v11; // rax
  __m128i *v12; // rsi
  __m128i *v13; // rcx
  unsigned __int64 v14; // r9
  __m128i *v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // rdi
  __int64 v19; // r11
  __int64 v20; // rdi
  __int64 v21; // r11
  __int64 v22; // rdi
  const __m128i *v23; // rdi
  const __m128i *v24; // rax
  __int64 m128i_i64; // rsi
  __int64 v26; // rcx
  unsigned __int64 v27; // r9
  __m128i *v28; // rdx
  __int64 v29; // rdi
  __int64 v30; // rdi
  __int64 v31; // rdi
  __int64 v32; // rdi
  __int64 v33; // rdi
  __int64 v34; // rdi
  __int64 v35; // rdi
  __int64 v36; // rdi
  const __m128i *v37; // rdi
  __m128i *i; // r15
  void **v39; // r12
  void **v40; // r14
  __m128i *v41; // rdi
  __m128i *v42; // rdi
  __int64 *result; // rax
  __m128 v44; // xmm0
  __int64 v45; // [rsp+8h] [rbp-60h] BYREF
  __m128i *v46; // [rsp+10h] [rbp-58h]
  __int64 *v47; // [rsp+18h] [rbp-50h]
  __int8 *v48; // [rsp+20h] [rbp-48h]
  __int64 v49; // [rsp+28h] [rbp-40h]

  v5 = *(__m128i **)(a1 + 8);
  v6 = *(__m128i **)a1;
  v7 = &a2->m128i_i8[-*(_QWORD *)a1];
  if ( !(0xEEEEEEEEEEEEEEEFLL * (((__int64)v5->m128i_i64 - *(_QWORD *)a1) >> 3)) )
  {
    v8 = 1;
    goto LABEL_54;
  }
  v8 = 0xDDDDDDDDDDDDDDDELL * ((__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3);
  v9 = 0x1FFFFFFFFFFFFFFELL;
  if ( 0xEEEEEEEEEEEEEEEFLL * (((__int64)v5->m128i_i64 - *(_QWORD *)a1) >> 3) > 0xDDDDDDDDDDDDDDDELL
                                                                              * (((__int64)v5->m128i_i64 - *(_QWORD *)a1) >> 3)
    || v8 > 0x222222222222222LL )
  {
    goto LABEL_3;
  }
  if ( v8 )
  {
LABEL_54:
    v9 = 15 * v8;
LABEL_3:
    v49 = a3;
    v48 = v7;
    v10 = (__m128i *)operator new(v9 * 8);
    v7 = v48;
    a3 = v49;
    v46 = v10;
    v47 = &v10->m128i_i64[v9];
    v45 = (__int64)&v10[7].m128i_i64[1];
    goto LABEL_4;
  }
  v45 = 120;
  v47 = nullptr;
  v46 = nullptr;
LABEL_4:
  sub_117F2D0((__int64)&v7[(_QWORD)v46], a3);
  if ( a2 != v6 )
  {
    v11 = v6 + 1;
    v12 = v6 + 5;
    v13 = v6 + 3;
    v14 = (0xEEEEEEEEEEEEEEFLL * ((unsigned __int64)((char *)&a2[-8].m128i_u64[1] - (char *)v6) >> 3))
        & 0x1FFFFFFFFFFFFFFFLL;
    v15 = v46;
    do
    {
      v15->m128i_i64[0] = (__int64)v15[1].m128i_i64;
      v23 = (const __m128i *)v11[-1].m128i_i64[0];
      if ( v23 == v11 )
      {
        v15[1] = _mm_loadu_si128(v11);
      }
      else
      {
        v15->m128i_i64[0] = (__int64)v23;
        v15[1].m128i_i64[0] = v11->m128i_i64[0];
      }
      v15->m128i_i64[1] = v11[-1].m128i_i64[1];
      v11[-1].m128i_i64[0] = (__int64)v11;
      v11[-1].m128i_i64[1] = 0;
      v11->m128i_i8[0] = 0;
      v15[2].m128i_i64[0] = (__int64)v15[3].m128i_i64;
      v16 = v11[1].m128i_i64[0];
      if ( (__m128i *)v16 == v13 )
      {
        v15[3] = _mm_loadu_si128(v11 + 2);
      }
      else
      {
        v15[2].m128i_i64[0] = v16;
        v15[3].m128i_i64[0] = v11[2].m128i_i64[0];
      }
      v15[2].m128i_i64[1] = v11[1].m128i_i64[1];
      v11[1].m128i_i64[0] = (__int64)v13;
      v11[1].m128i_i64[1] = 0;
      v11[2].m128i_i8[0] = 0;
      v15[4].m128i_i64[0] = (__int64)v15[5].m128i_i64;
      v17 = v11[3].m128i_i64[0];
      if ( (__m128i *)v17 == v12 )
      {
        v15[5] = _mm_loadu_si128(v11 + 4);
      }
      else
      {
        v15[4].m128i_i64[0] = v17;
        v15[5].m128i_i64[0] = v11[4].m128i_i64[0];
      }
      v18 = v11[3].m128i_i64[1];
      v11 = (const __m128i *)((char *)v11 + 120);
      v15 = (__m128i *)((char *)v15 + 120);
      v13 = (__m128i *)((char *)v13 + 120);
      v15[-3].m128i_i64[0] = v18;
      v11[-4].m128i_i8[8] = 0;
      v11[-5].m128i_i64[1] = (__int64)v12;
      v12 = (__m128i *)((char *)v12 + 120);
      v11[-4].m128i_i64[0] = 0;
      *(__m128i *)((char *)&v15[-2] + 8) = 0;
      v15[-1].m128i_i64[1] = 0;
      v15[-2].m128i_i64[1] = v11[-3].m128i_i64[1];
      v19 = v11[-2].m128i_i64[0];
      v11[-3].m128i_i64[1] = 0;
      v20 = v15[-1].m128i_i64[0];
      v15[-1].m128i_i64[0] = v19;
      v21 = v11[-2].m128i_i64[1];
      v11[-2].m128i_i64[0] = v20;
      v22 = v15[-1].m128i_i64[1];
      v15[-1].m128i_i64[1] = v21;
      v11[-2].m128i_i64[1] = v22;
    }
    while ( v11 != (const __m128i *)&v6[8].m128i_u64[0xEEEEEEEEEEEEEEF0LL
                                                   * ((unsigned __int64)((char *)&a2[-8].m128i_u64[1] - (char *)v6) >> 3)
                                                   - v14
                                                   + 1] );
    v45 = (__int64)&v46[15].m128i_i64[15 * v14];
  }
  if ( a2 != v5 )
  {
    v24 = a2 + 1;
    m128i_i64 = (__int64)a2[5].m128i_i64;
    v26 = (__int64)a2[3].m128i_i64;
    v27 = (0xEEEEEEEEEEEEEEFLL * ((unsigned __int64)((char *)v5 - (char *)a2 - 120) >> 3)) & 0x1FFFFFFFFFFFFFFFLL;
    v28 = (__m128i *)v45;
    do
    {
      v28->m128i_i64[0] = (__int64)v28[1].m128i_i64;
      v37 = (const __m128i *)v24[-1].m128i_i64[0];
      if ( v37 == v24 )
      {
        v28[1] = _mm_loadu_si128(v24);
      }
      else
      {
        v28->m128i_i64[0] = (__int64)v37;
        v28[1].m128i_i64[0] = v24->m128i_i64[0];
      }
      v29 = v24[-1].m128i_i64[1];
      v24[-1].m128i_i64[0] = (__int64)v24;
      v24[-1].m128i_i64[1] = 0;
      v28->m128i_i64[1] = v29;
      v28[2].m128i_i64[0] = (__int64)v28[3].m128i_i64;
      v30 = v24[1].m128i_i64[0];
      v24->m128i_i8[0] = 0;
      if ( v30 == v26 )
      {
        v28[3] = _mm_loadu_si128(v24 + 2);
      }
      else
      {
        v28[2].m128i_i64[0] = v30;
        v28[3].m128i_i64[0] = v24[2].m128i_i64[0];
      }
      v31 = v24[1].m128i_i64[1];
      v24[1].m128i_i64[0] = v26;
      v24[1].m128i_i64[1] = 0;
      v28[2].m128i_i64[1] = v31;
      v28[4].m128i_i64[0] = (__int64)v28[5].m128i_i64;
      v32 = v24[3].m128i_i64[0];
      v24[2].m128i_i8[0] = 0;
      if ( v32 == m128i_i64 )
      {
        v28[5] = _mm_loadu_si128(v24 + 4);
      }
      else
      {
        v28[4].m128i_i64[0] = v32;
        v28[5].m128i_i64[0] = v24[4].m128i_i64[0];
      }
      v33 = v24[3].m128i_i64[1];
      v24[3].m128i_i64[0] = m128i_i64;
      v24 = (const __m128i *)((char *)v24 + 120);
      v28 = (__m128i *)((char *)v28 + 120);
      v24[-4].m128i_i64[0] = 0;
      m128i_i64 += 120;
      v26 += 120;
      v28[-3].m128i_i64[0] = v33;
      v34 = v24[-3].m128i_i64[1];
      v24[-4].m128i_i8[8] = 0;
      v28[-2].m128i_i64[1] = v34;
      v35 = v24[-2].m128i_i64[0];
      *(const __m128i *)((char *)&v24[-3] + 8) = 0;
      v28[-1].m128i_i64[0] = v35;
      v36 = v24[-2].m128i_i64[1];
      v24[-2].m128i_i64[1] = 0;
      v28[-1].m128i_i64[1] = v36;
    }
    while ( v24 != (const __m128i *)&a2[8].m128i_u64[0xEEEEEEEEEEEEEEF0LL
                                                   * ((unsigned __int64)((char *)v5 - (char *)a2 - 120) >> 3)
                                                   - v27
                                                   + 1] );
    v45 += 120 * (v27 + 1);
  }
  for ( i = v6; i != v5; i = (__m128i *)((char *)i + 120) )
  {
    while ( 1 )
    {
      v39 = (void **)i[6].m128i_i64[1];
      v40 = (void **)i[6].m128i_i64[0];
      if ( v39 != v40 )
      {
        do
        {
          while ( *v40 != v40 + 2 )
          {
            operator delete(*v40);
            v40 += 4;
            if ( v39 == v40 )
              goto LABEL_34;
          }
          v40 += 4;
        }
        while ( v39 != v40 );
LABEL_34:
        v40 = (void **)i[6].m128i_i64[0];
      }
      if ( v40 )
        operator delete(v40);
      v41 = (__m128i *)i[4].m128i_i64[0];
      if ( v41 != &i[5] )
        operator delete(v41);
      v42 = (__m128i *)i[2].m128i_i64[0];
      if ( v42 != &i[3] )
        operator delete(v42);
      if ( (__m128i *)i->m128i_i64[0] == &i[1] )
        break;
      operator delete((void *)i->m128i_i64[0]);
      i = (__m128i *)((char *)i + 120);
      if ( i == v5 )
        goto LABEL_43;
    }
  }
LABEL_43:
  if ( v6 )
    operator delete(v6);
  result = v47;
  v44 = _mm_loadh_ps((const double *)&v45);
  *(_QWORD *)(a1 + 16) = v47;
  *(__m128 *)a1 = v44;
  return result;
}
