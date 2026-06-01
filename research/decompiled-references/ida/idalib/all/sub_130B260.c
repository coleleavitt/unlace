void __fastcall sub_130B260(void ***a1, const __m128i *a2, __m128i *a3, _BYTE *a4)
{
  void **v7; // r12
  void **v8; // rbp
  double v9; // rsi
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r14
  double v12; // rax
  unsigned __int64 v13; // r14
  __m128i *v14; // rax
  __m128i *v15; // rsi
  __m128i *v16; // rdi
  __int64 v17; // rdi
  __int8 v18; // dl
  const __m128i *v19; // rdx
  unsigned __int64 v20; // rsi
  __m128i *v21; // rax
  __int8 v22; // cl
  const __m128i *v23; // rcx
  const __m128i *v24; // rdx
  unsigned __int64 v25; // rbx
  __int64 v26; // rcx
  const __m128i *v27; // rcx
  void **i; // r15
  double v29[2]; // [rsp+8h] [rbp-50h] BYREF
  _BYTE *v30; // [rsp+18h] [rbp-40h]

  v7 = a1[1];
  v8 = *a1;
  *(_QWORD *)&v9 = (char *)a2 - (char *)*a1;
  if ( !(0xCCCCCCCCCCCCCCCDLL * (v7 - *a1)) )
  {
    v10 = 1;
    goto LABEL_32;
  }
  v10 = 0x999999999999999ALL * (a1[1] - *a1);
  v11 = -16;
  if ( 0xCCCCCCCCCCCCCCCDLL * (v7 - *a1) > 0x999999999999999ALL * (v7 - *a1) || v10 > 0x666666666666666LL )
    goto LABEL_3;
  if ( v10 )
  {
LABEL_32:
    v11 = 40 * v10;
LABEL_3:
    v30 = a4;
    v29[1] = v9;
    v12 = COERCE_DOUBLE(operator new(v11));
    a4 = v30;
    v29[0] = v12;
    v13 = *(_QWORD *)&v12 + v11;
    v14 = (__m128i *)(*(_QWORD *)&v12 + 40LL);
    goto LABEL_4;
  }
  v14 = (__m128i *)&qword_28;
  v13 = 0;
  v29[0] = 0.0;
LABEL_4:
  v15 = (__m128i *)(*(_QWORD *)&v29[0] + *(_QWORD *)&v9);
  v16 = (__m128i *)a3->m128i_i64[0];
  v15->m128i_i64[0] = (__int64)v15[1].m128i_i64;
  if ( v16 == &a3[1] )
  {
    v15[1] = _mm_loadu_si128(a3 + 1);
  }
  else
  {
    v15->m128i_i64[0] = (__int64)v16;
    v15[1].m128i_i64[0] = a3[1].m128i_i64[0];
  }
  v17 = a3->m128i_i64[1];
  a3->m128i_i64[0] = (__int64)a3[1].m128i_i64;
  a3[1].m128i_i8[0] = 0;
  v18 = *a4;
  v15->m128i_i64[1] = v17;
  a3->m128i_i64[1] = 0;
  v15[2].m128i_i8[0] = v18;
  if ( a2 != (const __m128i *)v8 )
  {
    v19 = (const __m128i *)(v8 + 2);
    v20 = *(_QWORD *)&v29[0] + 8 * ((unsigned __int64)((char *)&a2[-3].m128i_u64[1] - (char *)v8) >> 3) + 40;
    v21 = *(__m128i **)&v29[0];
    do
    {
      v21->m128i_i64[0] = (__int64)v21[1].m128i_i64;
      v23 = (const __m128i *)v19[-1].m128i_i64[0];
      if ( v19 == v23 )
      {
        v21[1] = _mm_loadu_si128(v19);
      }
      else
      {
        v21->m128i_i64[0] = (__int64)v23;
        v21[1].m128i_i64[0] = v19->m128i_i64[0];
      }
      v21 = (__m128i *)((char *)v21 + 40);
      v21[-2].m128i_i64[0] = v19[-1].m128i_i64[1];
      v22 = v19[1].m128i_i8[0];
      v19[-1].m128i_i64[0] = (__int64)v19;
      v19 = (const __m128i *)((char *)v19 + 40);
      v19[-3].m128i_i64[0] = 0;
      v19[-3].m128i_i8[8] = 0;
      v21[-1].m128i_i8[8] = v22;
    }
    while ( v21 != (__m128i *)v20 );
    v14 = (__m128i *)((char *)v21 + 40);
  }
  if ( a2 == (const __m128i *)v7 )
  {
    v25 = (unsigned __int64)v14;
  }
  else
  {
    v24 = a2 + 1;
    v25 = (unsigned __int64)&v14[2].m128i_u64[((unsigned __int64)((char *)v7 - (char *)a2 - 40) >> 3) + 1];
    do
    {
      v14->m128i_i64[0] = (__int64)v14[1].m128i_i64;
      v27 = (const __m128i *)v24[-1].m128i_i64[0];
      if ( v27 == v24 )
      {
        v14[1] = _mm_loadu_si128(v24);
      }
      else
      {
        v14->m128i_i64[0] = (__int64)v27;
        v14[1].m128i_i64[0] = v24->m128i_i64[0];
      }
      v26 = v24[-1].m128i_i64[1];
      v14 = (__m128i *)((char *)v14 + 40);
      v24[-1].m128i_i64[0] = (__int64)v24;
      v24 = (const __m128i *)((char *)v24 + 40);
      v24[-3].m128i_i64[0] = 0;
      v14[-2].m128i_i64[0] = v26;
      LOBYTE(v26) = v24[-2].m128i_i8[8];
      v24[-3].m128i_i8[8] = 0;
      v14[-1].m128i_i8[8] = v26;
    }
    while ( v14 != (__m128i *)v25 );
  }
  for ( i = v8; i != v7; i += 5 )
  {
    while ( *i != i + 2 )
    {
      operator delete(*i);
      i += 5;
      if ( v7 == i )
        goto LABEL_23;
    }
  }
LABEL_23:
  if ( v8 )
    operator delete(v8);
  *(_QWORD *)&v29[0] = v25;
  a1[2] = (void **)v13;
  *(__m128 *)a1 = _mm_loadh_ps(v29);
}
