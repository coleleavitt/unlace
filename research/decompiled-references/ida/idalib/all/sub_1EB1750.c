void **__fastcall sub_1EB1750(void ***a1, const __m128i *a2, __int64 a3, _BYTE *a4)
{
  void **v5; // rbx
  void **v6; // r12
  _QWORD *v7; // r8
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // r15
  __int64 v10; // rax
  __m128i *v11; // r13
  __m128i *v12; // r15
  _QWORD *v13; // r8
  _BYTE *v14; // rsi
  __int64 v15; // rax
  char v16; // cl
  const __m128i *v17; // rdx
  __m128i *v18; // rax
  __int8 v19; // cl
  const __m128i *v20; // rcx
  const __m128i *v21; // rdx
  unsigned __int64 v22; // rbp
  __int64 v23; // rcx
  const __m128i *v24; // rcx
  void **i; // r15
  void **result; // rax
  _QWORD *v27; // [rsp+0h] [rbp-58h] BYREF
  __int64 v28; // [rsp+8h] [rbp-50h]
  void **v29; // [rsp+10h] [rbp-48h]
  _BYTE *v30; // [rsp+18h] [rbp-40h]

  v5 = a1[1];
  v6 = *a1;
  v7 = (_QWORD *)((char *)a2 - (char *)*a1);
  if ( !(0xCCCCCCCCCCCCCCCDLL * (v5 - *a1)) )
  {
    v8 = 1;
    goto LABEL_30;
  }
  v8 = 0x999999999999999ALL * (a1[1] - *a1);
  v9 = -16;
  if ( 0xCCCCCCCCCCCCCCCDLL * (v5 - *a1) > 0x999999999999999ALL * (v5 - *a1) || v8 > 0x666666666666666LL )
    goto LABEL_3;
  if ( v8 )
  {
LABEL_30:
    v9 = 40 * v8;
LABEL_3:
    v30 = a4;
    v28 = a3;
    v27 = v7;
    v10 = operator new(v9);
    v7 = v27;
    a3 = v28;
    v11 = (__m128i *)v10;
    a4 = v30;
    v29 = (void **)(v10 + v9);
    v12 = (__m128i *)(v10 + 40);
    goto LABEL_4;
  }
  v12 = (__m128i *)&qword_28;
  v11 = nullptr;
  v29 = nullptr;
LABEL_4:
  v13 = (_QWORD *)((char *)v7 + (_QWORD)v11);
  v14 = *(_BYTE **)a3;
  v15 = *(_QWORD *)(a3 + 8);
  v16 = *a4;
  v27 = v13;
  *v13 = v13 + 2;
  LOBYTE(v28) = v16;
  sub_1EA9D80(v13, v14, (__int64)&v14[v15]);
  *((_BYTE *)v27 + 32) = v28;
  if ( a2 != (const __m128i *)v6 )
  {
    v17 = (const __m128i *)(v6 + 2);
    v18 = v11;
    do
    {
      v18->m128i_i64[0] = (__int64)v18[1].m128i_i64;
      v20 = (const __m128i *)v17[-1].m128i_i64[0];
      if ( v20 == v17 )
      {
        v18[1] = _mm_loadu_si128(v17);
      }
      else
      {
        v18->m128i_i64[0] = (__int64)v20;
        v18[1].m128i_i64[0] = v17->m128i_i64[0];
      }
      v18 = (__m128i *)((char *)v18 + 40);
      v18[-2].m128i_i64[0] = v17[-1].m128i_i64[1];
      v19 = v17[1].m128i_i8[0];
      v17[-1].m128i_i64[0] = (__int64)v17;
      v17 = (const __m128i *)((char *)v17 + 40);
      v17[-3].m128i_i64[0] = 0;
      v17[-3].m128i_i8[8] = 0;
      v18[-1].m128i_i8[8] = v19;
    }
    while ( v18 != (__m128i *)&v11[2].m128i_u64[((unsigned __int64)((char *)&a2[-3].m128i_u64[1] - (char *)v6) >> 3) + 1] );
    v12 = (__m128i *)((char *)v18 + 40);
  }
  if ( a2 == (const __m128i *)v5 )
  {
    v22 = (unsigned __int64)v12;
  }
  else
  {
    v21 = a2 + 1;
    v22 = (unsigned __int64)&v12[2].m128i_u64[((unsigned __int64)((char *)v5 - (char *)a2 - 40) >> 3) + 1];
    do
    {
      v12->m128i_i64[0] = (__int64)v12[1].m128i_i64;
      v24 = (const __m128i *)v21[-1].m128i_i64[0];
      if ( v24 == v21 )
      {
        v12[1] = _mm_loadu_si128(v21);
      }
      else
      {
        v12->m128i_i64[0] = (__int64)v24;
        v12[1].m128i_i64[0] = v21->m128i_i64[0];
      }
      v23 = v21[-1].m128i_i64[1];
      v12 = (__m128i *)((char *)v12 + 40);
      v21[-1].m128i_i64[0] = (__int64)v21;
      v21 = (const __m128i *)((char *)v21 + 40);
      v21[-3].m128i_i64[0] = 0;
      v12[-2].m128i_i64[0] = v23;
      LOBYTE(v23) = v21[-2].m128i_i8[8];
      v21[-3].m128i_i8[8] = 0;
      v12[-1].m128i_i8[8] = v23;
    }
    while ( v12 != (__m128i *)v22 );
  }
  for ( i = v6; i != v5; i += 5 )
  {
    while ( *i != i + 2 )
    {
      operator delete(*i);
      i += 5;
      if ( v5 == i )
        goto LABEL_21;
    }
  }
LABEL_21:
  if ( v6 )
    operator delete(v6);
  v27 = (_QWORD *)v22;
  result = v29;
  a1[2] = v29;
  *(__m128 *)a1 = _mm_loadh_ps((const double *)&v27);
  return result;
}
