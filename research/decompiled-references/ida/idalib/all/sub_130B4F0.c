__int64 __fastcall sub_130B4F0(__int64 a1, const __m128i *a2, __m128i *a3, __m128i *a4)
{
  __m128i *v5; // rbx
  __m128i *v6; // rbp
  __int8 *v7; // r8
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // r14
  __m128i *v11; // rax
  __m128i *v12; // r12
  __int64 m128i_i64; // r15
  __m128i *v14; // rax
  __m128i *v15; // r8
  __int64 v16; // r8
  __m128i *v17; // rdi
  __int64 v18; // rdi
  const __m128i *v19; // rax
  __m128i *v20; // rdx
  __m128i *v21; // rcx
  const __m128i *v22; // r8
  const __m128i *v23; // rdi
  __int64 v24; // rdi
  __int64 v25; // rdi
  const __m128i *v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r8
  __m128i *v29; // rdx
  unsigned __int64 v30; // rdi
  const __m128i *v31; // rsi
  __int64 v32; // rsi
  __int64 v33; // rsi
  __int64 v34; // rsi
  __int64 v35; // rsi
  __m128i *i; // r14
  __m128i *v37; // rdi
  __int64 result; // rax
  __int64 v39; // rsi
  __m128i v40; // xmm4
  __m128i v41; // xmm2
  __int64 v42; // [rsp+8h] [rbp-60h] BYREF
  __int64 v43; // [rsp+10h] [rbp-58h]
  const __m128i *v44; // [rsp+18h] [rbp-50h]
  __m128i *v45; // [rsp+20h] [rbp-48h]
  __m128i *v46; // [rsp+28h] [rbp-40h]

  v5 = *(__m128i **)(a1 + 8);
  v6 = *(__m128i **)a1;
  v7 = &a2->m128i_i8[-*(_QWORD *)a1];
  v8 = ((__int64)v5->m128i_i64 - *(_QWORD *)a1) >> 6;
  if ( !v8 )
  {
    v9 = 1;
    goto LABEL_42;
  }
  v9 = 2 * v8;
  v10 = -64;
  if ( v8 > 2 * v8 || v9 > 0x3FFFFFFFFFFFFFFLL )
    goto LABEL_3;
  if ( v9 )
  {
LABEL_42:
    v10 = v9 << 6;
LABEL_3:
    v46 = a4;
    v45 = a3;
    v44 = a2;
    v42 = (__int64)v7;
    v11 = (__m128i *)operator new(v10);
    v7 = (__int8 *)v42;
    v12 = v11;
    a3 = v45;
    a4 = v46;
    v43 = (__int64)v11->m128i_i64 + v10;
    m128i_i64 = (__int64)v11[4].m128i_i64;
    goto LABEL_4;
  }
  m128i_i64 = 64;
  v12 = nullptr;
  v43 = 0;
LABEL_4:
  v14 = (__m128i *)&v7[(_QWORD)v12];
  v15 = (__m128i *)a3->m128i_i64[0];
  v14->m128i_i64[0] = (__int64)v14[1].m128i_i64;
  if ( v15 == &a3[1] )
  {
    v14[1] = _mm_loadu_si128(a3 + 1);
  }
  else
  {
    v14->m128i_i64[0] = (__int64)v15;
    v14[1].m128i_i64[0] = a3[1].m128i_i64[0];
  }
  v16 = a3->m128i_i64[1];
  a3->m128i_i64[0] = (__int64)a3[1].m128i_i64;
  a3->m128i_i64[1] = 0;
  a3[1].m128i_i8[0] = 0;
  v17 = (__m128i *)a4->m128i_i64[0];
  v14[2].m128i_i64[0] = (__int64)v14[3].m128i_i64;
  v14->m128i_i64[1] = v16;
  if ( v17 == &a4[1] )
  {
    v14[3] = _mm_loadu_si128(a4 + 1);
  }
  else
  {
    v14[2].m128i_i64[0] = (__int64)v17;
    v14[3].m128i_i64[0] = a4[1].m128i_i64[0];
  }
  v18 = a4->m128i_i64[1];
  a4->m128i_i64[0] = (__int64)a4[1].m128i_i64;
  a4->m128i_i64[1] = 0;
  v14[2].m128i_i64[1] = v18;
  a4[1].m128i_i8[0] = 0;
  if ( a2 != v6 )
  {
    v19 = v6 + 1;
    v20 = v12;
    v21 = v6 + 3;
    v22 = a2 + 1;
    do
    {
      while ( 1 )
      {
        v20->m128i_i64[0] = (__int64)v20[1].m128i_i64;
        v23 = (const __m128i *)v19[-1].m128i_i64[0];
        if ( v19 == v23 )
        {
          v20[1] = _mm_loadu_si128(v19);
        }
        else
        {
          v20->m128i_i64[0] = (__int64)v23;
          v20[1].m128i_i64[0] = v19->m128i_i64[0];
        }
        v20->m128i_i64[1] = v19[-1].m128i_i64[1];
        v19[-1].m128i_i64[0] = (__int64)v19;
        v19[-1].m128i_i64[1] = 0;
        v19->m128i_i8[0] = 0;
        v20[2].m128i_i64[0] = (__int64)v20[3].m128i_i64;
        v24 = v19[1].m128i_i64[0];
        if ( (__m128i *)v24 == v21 )
          break;
        v20[2].m128i_i64[0] = v24;
        v25 = v19[2].m128i_i64[0];
        v19 += 4;
        v20 += 4;
        v20[-1].m128i_i64[0] = v25;
        v20[-2].m128i_i64[1] = v19[-3].m128i_i64[1];
        v19[-3].m128i_i64[0] = (__int64)v21;
        v21 += 4;
        v19[-3].m128i_i64[1] = 0;
        v19[-2].m128i_i8[0] = 0;
        if ( v19 == v22 )
          goto LABEL_14;
      }
      v41 = _mm_loadu_si128(v19 + 2);
      v19 += 4;
      v20 += 4;
      v20[-1] = v41;
      v20[-2].m128i_i64[1] = v19[-3].m128i_i64[1];
      v19[-3].m128i_i64[0] = (__int64)v21;
      v21 += 4;
      v19[-3].m128i_i64[1] = 0;
      v19[-2].m128i_i8[0] = 0;
    }
    while ( v22 != v19 );
LABEL_14:
    m128i_i64 = (__int64)v12[4 * ((unsigned __int64)((char *)&a2[-4] - (char *)v6) >> 6) + 8].m128i_i64;
  }
  if ( a2 != v5 )
  {
    v26 = a2 + 1;
    v27 = (__int64)a2[3].m128i_i64;
    v28 = (__int64)v5[1].m128i_i64;
    v29 = (__m128i *)m128i_i64;
    v30 = (unsigned __int64)((char *)v5 - (char *)a2 - 64) >> 6;
    do
    {
      v29->m128i_i64[0] = (__int64)v29[1].m128i_i64;
      v31 = (const __m128i *)v26[-1].m128i_i64[0];
      if ( v31 != v26 )
      {
LABEL_18:
        v29->m128i_i64[0] = (__int64)v31;
        v29[1].m128i_i64[0] = v26->m128i_i64[0];
        goto LABEL_19;
      }
      while ( 1 )
      {
        v29[1] = _mm_loadu_si128(v26);
LABEL_19:
        v32 = v26[-1].m128i_i64[1];
        v26[-1].m128i_i64[0] = (__int64)v26;
        v26[-1].m128i_i64[1] = 0;
        v29->m128i_i64[1] = v32;
        v29[2].m128i_i64[0] = (__int64)v29[3].m128i_i64;
        v33 = v26[1].m128i_i64[0];
        v26->m128i_i8[0] = 0;
        if ( v33 != v27 )
          break;
        v39 = v26[1].m128i_i64[1];
        v26 += 4;
        v29 += 4;
        v27 += 64;
        v40 = _mm_loadu_si128(v26 - 2);
        v26[-3].m128i_i64[1] = 0;
        v26[-2].m128i_i8[0] = 0;
        v29[-1] = v40;
        v29[-2].m128i_i64[1] = v39;
        if ( (const __m128i *)v28 == v26 )
          goto LABEL_21;
        v29->m128i_i64[0] = (__int64)v29[1].m128i_i64;
        v31 = (const __m128i *)v26[-1].m128i_i64[0];
        if ( v31 != v26 )
          goto LABEL_18;
      }
      v29[2].m128i_i64[0] = v33;
      v34 = v26[2].m128i_i64[0];
      v26 += 4;
      v29 += 4;
      v26[-3].m128i_i64[0] = v27;
      v27 += 64;
      v29[-1].m128i_i64[0] = v34;
      v35 = v26[-3].m128i_i64[1];
      v26[-2].m128i_i8[0] = 0;
      v26[-3].m128i_i64[1] = 0;
      v29[-2].m128i_i64[1] = v35;
    }
    while ( v26 != (const __m128i *)v28 );
LABEL_21:
    m128i_i64 += (v30 + 1) << 6;
  }
  for ( i = v6; i != v5; i += 4 )
  {
    while ( 1 )
    {
      v37 = (__m128i *)i[2].m128i_i64[0];
      if ( v37 != &i[3] )
        operator delete(v37);
      if ( (__m128i *)i->m128i_i64[0] == &i[1] )
        break;
      operator delete((void *)i->m128i_i64[0]);
      i += 4;
      if ( i == v5 )
        goto LABEL_27;
    }
  }
LABEL_27:
  if ( v6 )
    operator delete(v6);
  v42 = m128i_i64;
  result = v43;
  *(_QWORD *)(a1 + 16) = v43;
  *(__m128 *)a1 = _mm_loadh_ps((const double *)&v42);
  return result;
}
