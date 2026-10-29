__int64 __fastcall sub_125B300(__int64 a1, const __m128i *a2, __m128i *a3)
{
  __m128i *v4; // rbx
  __m128i *v5; // rbp
  __int8 *v6; // r8
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // r14
  __m128i *v10; // rax
  __m128i *v11; // r12
  __int64 m128i_i64; // r15
  __m128i *v13; // rax
  __m128i *v14; // rdi
  __int64 v15; // rdi
  __m128i *v16; // rdi
  __int64 v17; // rdi
  const __m128i *v18; // rax
  __m128i *v19; // rdx
  __m128i *v20; // rcx
  const __m128i *v21; // r8
  const __m128i *v22; // rdi
  __int64 v23; // rdi
  __int64 v24; // rdi
  const __m128i *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r8
  __m128i *v28; // rdx
  unsigned __int64 v29; // rdi
  const __m128i *v30; // rsi
  __int64 v31; // rsi
  __int64 v32; // rsi
  __int64 v33; // rsi
  __int64 v34; // rsi
  __m128i *i; // r14
  __m128i *v36; // rdi
  __int64 result; // rax
  __int64 v38; // rsi
  __m128i v39; // xmm4
  __m128i v40; // xmm2
  __int64 v41; // [rsp+0h] [rbp-58h] BYREF
  __int64 v42; // [rsp+8h] [rbp-50h]
  const __m128i *v43; // [rsp+10h] [rbp-48h]
  __m128i *v44; // [rsp+18h] [rbp-40h]

  v4 = *(__m128i **)(a1 + 8);
  v5 = *(__m128i **)a1;
  v6 = &a2->m128i_i8[-*(_QWORD *)a1];
  v7 = ((__int64)v4->m128i_i64 - *(_QWORD *)a1) >> 6;
  if ( !v7 )
  {
    v8 = 1;
    goto LABEL_42;
  }
  v8 = 2 * v7;
  v9 = -64;
  if ( v7 > 2 * v7 || v8 > 0x3FFFFFFFFFFFFFFLL )
    goto LABEL_3;
  if ( v8 )
  {
LABEL_42:
    v9 = v8 << 6;
LABEL_3:
    v44 = a3;
    v43 = a2;
    v41 = (__int64)v6;
    v10 = (__m128i *)operator new(v9);
    v6 = (__int8 *)v41;
    v11 = v10;
    a3 = v44;
    v42 = (__int64)v10->m128i_i64 + v9;
    m128i_i64 = (__int64)v10[4].m128i_i64;
    goto LABEL_4;
  }
  m128i_i64 = 64;
  v11 = nullptr;
  v42 = 0;
LABEL_4:
  v13 = (__m128i *)&v6[(_QWORD)v11];
  v14 = (__m128i *)a3->m128i_i64[0];
  *(_QWORD *)&v6[(_QWORD)v11] = &v6[(_QWORD)v11 + 16];
  if ( v14 == &a3[1] )
  {
    v13[1] = _mm_loadu_si128(a3 + 1);
  }
  else
  {
    v13->m128i_i64[0] = (__int64)v14;
    v13[1].m128i_i64[0] = a3[1].m128i_i64[0];
  }
  v15 = a3->m128i_i64[1];
  a3->m128i_i64[0] = (__int64)a3[1].m128i_i64;
  v13[2].m128i_i64[0] = (__int64)v13[3].m128i_i64;
  v13->m128i_i64[1] = v15;
  v16 = (__m128i *)a3[2].m128i_i64[0];
  a3->m128i_i64[1] = 0;
  a3[1].m128i_i8[0] = 0;
  if ( v16 == &a3[3] )
  {
    v13[3] = _mm_loadu_si128(a3 + 3);
  }
  else
  {
    v13[2].m128i_i64[0] = (__int64)v16;
    v13[3].m128i_i64[0] = a3[3].m128i_i64[0];
  }
  v17 = a3[2].m128i_i64[1];
  a3[2].m128i_i64[0] = (__int64)a3[3].m128i_i64;
  a3[2].m128i_i64[1] = 0;
  v13[2].m128i_i64[1] = v17;
  a3[3].m128i_i8[0] = 0;
  if ( a2 != v5 )
  {
    v18 = v5 + 1;
    v19 = v11;
    v20 = v5 + 3;
    v21 = a2 + 1;
    do
    {
      while ( 1 )
      {
        v19->m128i_i64[0] = (__int64)v19[1].m128i_i64;
        v22 = (const __m128i *)v18[-1].m128i_i64[0];
        if ( v22 == v18 )
        {
          v19[1] = _mm_loadu_si128(v18);
        }
        else
        {
          v19->m128i_i64[0] = (__int64)v22;
          v19[1].m128i_i64[0] = v18->m128i_i64[0];
        }
        v19->m128i_i64[1] = v18[-1].m128i_i64[1];
        v18[-1].m128i_i64[0] = (__int64)v18;
        v18[-1].m128i_i64[1] = 0;
        v18->m128i_i8[0] = 0;
        v19[2].m128i_i64[0] = (__int64)v19[3].m128i_i64;
        v23 = v18[1].m128i_i64[0];
        if ( (__m128i *)v23 == v20 )
          break;
        v19[2].m128i_i64[0] = v23;
        v24 = v18[2].m128i_i64[0];
        v18 += 4;
        v19 += 4;
        v19[-1].m128i_i64[0] = v24;
        v19[-2].m128i_i64[1] = v18[-3].m128i_i64[1];
        v18[-3].m128i_i64[0] = (__int64)v20;
        v20 += 4;
        v18[-3].m128i_i64[1] = 0;
        v18[-2].m128i_i8[0] = 0;
        if ( v18 == v21 )
          goto LABEL_14;
      }
      v40 = _mm_loadu_si128(v18 + 2);
      v18 += 4;
      v19 += 4;
      v19[-1] = v40;
      v19[-2].m128i_i64[1] = v18[-3].m128i_i64[1];
      v18[-3].m128i_i64[0] = (__int64)v20;
      v20 += 4;
      v18[-3].m128i_i64[1] = 0;
      v18[-2].m128i_i8[0] = 0;
    }
    while ( v21 != v18 );
LABEL_14:
    m128i_i64 = (__int64)v11[4 * ((unsigned __int64)((char *)&a2[-4] - (char *)v5) >> 6) + 8].m128i_i64;
  }
  if ( a2 != v4 )
  {
    v25 = a2 + 1;
    v26 = (__int64)a2[3].m128i_i64;
    v27 = (__int64)v4[1].m128i_i64;
    v28 = (__m128i *)m128i_i64;
    v29 = (unsigned __int64)((char *)v4 - (char *)a2 - 64) >> 6;
    do
    {
      v28->m128i_i64[0] = (__int64)v28[1].m128i_i64;
      v30 = (const __m128i *)v25[-1].m128i_i64[0];
      if ( v30 != v25 )
      {
LABEL_18:
        v28->m128i_i64[0] = (__int64)v30;
        v28[1].m128i_i64[0] = v25->m128i_i64[0];
        goto LABEL_19;
      }
      while ( 1 )
      {
        v28[1] = _mm_loadu_si128(v25);
LABEL_19:
        v31 = v25[-1].m128i_i64[1];
        v25[-1].m128i_i64[0] = (__int64)v25;
        v25[-1].m128i_i64[1] = 0;
        v28->m128i_i64[1] = v31;
        v28[2].m128i_i64[0] = (__int64)v28[3].m128i_i64;
        v32 = v25[1].m128i_i64[0];
        v25->m128i_i8[0] = 0;
        if ( v32 != v26 )
          break;
        v38 = v25[1].m128i_i64[1];
        v25 += 4;
        v28 += 4;
        v26 += 64;
        v39 = _mm_loadu_si128(v25 - 2);
        v25[-3].m128i_i64[1] = 0;
        v25[-2].m128i_i8[0] = 0;
        v28[-1] = v39;
        v28[-2].m128i_i64[1] = v38;
        if ( (const __m128i *)v27 == v25 )
          goto LABEL_21;
        v28->m128i_i64[0] = (__int64)v28[1].m128i_i64;
        v30 = (const __m128i *)v25[-1].m128i_i64[0];
        if ( v30 != v25 )
          goto LABEL_18;
      }
      v28[2].m128i_i64[0] = v32;
      v33 = v25[2].m128i_i64[0];
      v25 += 4;
      v28 += 4;
      v25[-3].m128i_i64[0] = v26;
      v26 += 64;
      v28[-1].m128i_i64[0] = v33;
      v34 = v25[-3].m128i_i64[1];
      v25[-2].m128i_i8[0] = 0;
      v25[-3].m128i_i64[1] = 0;
      v28[-2].m128i_i64[1] = v34;
    }
    while ( v25 != (const __m128i *)v27 );
LABEL_21:
    m128i_i64 += (v29 + 1) << 6;
  }
  for ( i = v5; i != v4; i += 4 )
  {
    while ( 1 )
    {
      v36 = (__m128i *)i[2].m128i_i64[0];
      if ( v36 != &i[3] )
        operator delete(v36);
      if ( (__m128i *)i->m128i_i64[0] == &i[1] )
        break;
      operator delete((void *)i->m128i_i64[0]);
      i += 4;
      if ( i == v4 )
        goto LABEL_27;
    }
  }
LABEL_27:
  if ( v5 )
    operator delete(v5);
  v41 = m128i_i64;
  result = v42;
  *(_QWORD *)(a1 + 16) = v42;
  *(__m128 *)a1 = _mm_loadh_ps((const double *)&v41);
  return result;
}
