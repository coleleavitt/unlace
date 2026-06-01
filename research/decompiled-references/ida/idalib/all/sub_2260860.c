__int64 *__fastcall sub_2260860(__int64 a1, const __m128i *a2, __m128i *a3, __int64 a4, _BYTE *a5)
{
  __m128i *v7; // rbx
  __m128i *v8; // rbp
  __int8 *v9; // r13
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rsi
  __m128i *v13; // rax
  __m128i *v14; // r12
  char *v15; // r13
  _BYTE *v16; // rsi
  __int64 v17; // rax
  char v18; // r8
  __int64 v19; // rcx
  const __m128i *v20; // rax
  __m128i *v21; // rcx
  unsigned __int64 v22; // rdi
  __m128i *v23; // rdx
  __int64 v24; // rsi
  __int64 v25; // rsi
  const __m128i *v26; // rsi
  const __m128i *v27; // rax
  __int64 m128i_i64; // rcx
  unsigned __int64 v29; // rdi
  __m128i *v30; // rdx
  __int64 v31; // rsi
  __int64 v32; // rsi
  __int64 v33; // rsi
  const __m128i *v34; // rsi
  __m128i *i; // r15
  __m128i *v36; // rdi
  __int64 *result; // rax
  __int64 v38; // [rsp+8h] [rbp-60h] BYREF
  __m128i *v39; // [rsp+10h] [rbp-58h]
  __int64 v40; // [rsp+18h] [rbp-50h]
  __int64 *v41; // [rsp+20h] [rbp-48h]
  _BYTE *v42; // [rsp+28h] [rbp-40h]

  v7 = *(__m128i **)(a1 + 8);
  v8 = *(__m128i **)a1;
  v9 = &a2->m128i_i8[-*(_QWORD *)a1];
  v10 = 0x8E38E38E38E38E39LL * (((__int64)v7->m128i_i64 - *(_QWORD *)a1) >> 3);
  if ( !v10 )
  {
    v11 = 1;
    goto LABEL_38;
  }
  v11 = 0x1C71C71C71C71C72LL * ((__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3);
  v12 = 0x1FFFFFFFFFFFFFFELL;
  if ( v10 > 2 * v10 || v11 > 0x38E38E38E38E38ELL )
    goto LABEL_3;
  if ( v11 )
  {
LABEL_38:
    v12 = 9 * v11;
LABEL_3:
    v42 = a5;
    v40 = a4;
    v39 = a3;
    v13 = (__m128i *)operator new(v12 * 8);
    a3 = v39;
    v14 = v13;
    a4 = v40;
    a5 = v42;
    v41 = &v13->m128i_i64[v12];
    v38 = (__int64)&v13[4].m128i_i64[1];
    goto LABEL_4;
  }
  v38 = 72;
  v14 = nullptr;
  v41 = nullptr;
LABEL_4:
  v15 = &v9[(_QWORD)v14];
  v16 = (_BYTE *)a3->m128i_i64[0];
  v17 = a3->m128i_i64[1];
  v40 = a4;
  v18 = *a5;
  *(_QWORD *)v15 = v15 + 16;
  LOBYTE(v39) = v18;
  sub_2259A00(v15, v16, (__int64)&v16[v17]);
  v19 = v40;
  *((_QWORD *)v15 + 4) = v15 + 48;
  sub_2259A00((_QWORD *)v15 + 4, *(_BYTE **)v19, *(_QWORD *)v19 + *(_QWORD *)(v19 + 8));
  v15[64] = (char)v39;
  if ( a2 != v8 )
  {
    v20 = v8 + 1;
    v21 = v8 + 3;
    v22 = (0xE38E38E38E38E39LL * ((unsigned __int64)((char *)&a2[-5].m128i_u64[1] - (char *)v8) >> 3))
        & 0x1FFFFFFFFFFFFFFFLL;
    v23 = v14;
    do
    {
      v23->m128i_i64[0] = (__int64)v23[1].m128i_i64;
      v26 = (const __m128i *)v20[-1].m128i_i64[0];
      if ( v26 == v20 )
      {
        v23[1] = _mm_loadu_si128(v20);
      }
      else
      {
        v23->m128i_i64[0] = (__int64)v26;
        v23[1].m128i_i64[0] = v20->m128i_i64[0];
      }
      v23->m128i_i64[1] = v20[-1].m128i_i64[1];
      v20[-1].m128i_i64[0] = (__int64)v20;
      v20[-1].m128i_i64[1] = 0;
      v20->m128i_i8[0] = 0;
      v23[2].m128i_i64[0] = (__int64)v23[3].m128i_i64;
      v24 = v20[1].m128i_i64[0];
      if ( (__m128i *)v24 == v21 )
      {
        v23[3] = _mm_loadu_si128(v20 + 2);
      }
      else
      {
        v23[2].m128i_i64[0] = v24;
        v23[3].m128i_i64[0] = v20[2].m128i_i64[0];
      }
      v25 = v20[1].m128i_i64[1];
      v20 = (const __m128i *)((char *)v20 + 72);
      v23 = (__m128i *)((char *)v23 + 72);
      v23[-2].m128i_i64[0] = v25;
      LOBYTE(v25) = v20[-2].m128i_i8[8];
      v20[-4].m128i_i64[1] = (__int64)v21;
      v21 = (__m128i *)((char *)v21 + 72);
      v20[-3].m128i_i64[0] = 0;
      v20[-3].m128i_i8[8] = 0;
      v23[-1].m128i_i8[8] = v25;
    }
    while ( v20 != (const __m128i *)&v8[5].m128i_u64[9 * v22 + 1] );
    v38 = (__int64)&v14[9].m128i_i64[9 * v22];
  }
  if ( a2 != v7 )
  {
    v27 = a2 + 1;
    m128i_i64 = (__int64)a2[3].m128i_i64;
    v29 = (0xE38E38E38E38E39LL * ((unsigned __int64)((char *)v7 - (char *)a2 - 72) >> 3)) & 0x1FFFFFFFFFFFFFFFLL;
    v30 = (__m128i *)v38;
    do
    {
      v30->m128i_i64[0] = (__int64)v30[1].m128i_i64;
      v34 = (const __m128i *)v27[-1].m128i_i64[0];
      if ( v34 == v27 )
      {
        v30[1] = _mm_loadu_si128(v27);
      }
      else
      {
        v30->m128i_i64[0] = (__int64)v34;
        v30[1].m128i_i64[0] = v27->m128i_i64[0];
      }
      v31 = v27[-1].m128i_i64[1];
      v27[-1].m128i_i64[0] = (__int64)v27;
      v27[-1].m128i_i64[1] = 0;
      v30->m128i_i64[1] = v31;
      v30[2].m128i_i64[0] = (__int64)v30[3].m128i_i64;
      v32 = v27[1].m128i_i64[0];
      v27->m128i_i8[0] = 0;
      if ( v32 == m128i_i64 )
      {
        v30[3] = _mm_loadu_si128(v27 + 2);
      }
      else
      {
        v30[2].m128i_i64[0] = v32;
        v30[3].m128i_i64[0] = v27[2].m128i_i64[0];
      }
      v33 = v27[1].m128i_i64[1];
      v27[1].m128i_i64[0] = m128i_i64;
      v27 = (const __m128i *)((char *)v27 + 72);
      v30 = (__m128i *)((char *)v30 + 72);
      v27[-3].m128i_i64[0] = 0;
      m128i_i64 += 72;
      v30[-2].m128i_i64[0] = v33;
      LOBYTE(v33) = v27[-2].m128i_i8[8];
      v27[-3].m128i_i8[8] = 0;
      v30[-1].m128i_i8[8] = v33;
    }
    while ( v27 != (const __m128i *)&a2[5].m128i_u64[9 * v29 + 1] );
    v38 += 8 * (9 * v29 + 9);
  }
  for ( i = v8; i != v7; i = (__m128i *)((char *)i + 72) )
  {
    while ( 1 )
    {
      v36 = (__m128i *)i[2].m128i_i64[0];
      if ( v36 != &i[3] )
        operator delete(v36);
      if ( (__m128i *)i->m128i_i64[0] == &i[1] )
        break;
      operator delete((void *)i->m128i_i64[0]);
      i = (__m128i *)((char *)i + 72);
      if ( i == v7 )
        goto LABEL_29;
    }
  }
LABEL_29:
  if ( v8 )
    operator delete(v8);
  v39 = v14;
  result = v41;
  *(__m128 *)a1 = _mm_loadh_ps((const double *)&v38);
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
