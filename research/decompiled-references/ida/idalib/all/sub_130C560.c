void **__fastcall sub_130C560(void ***a1, const __m128i *a2, __int64 a3)
{
  void **v6; // rbx
  void **v7; // r12
  char *v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r15
  __int64 v11; // rax
  __m128i *v12; // r15
  _BYTE *v13; // rsi
  char *v14; // rdi
  char *v15; // rcx
  const __m128i *v16; // rdx
  unsigned __int64 v17; // rsi
  __m128i *v18; // rax
  __int8 v19; // cl
  const __m128i *v20; // rcx
  const __m128i *v21; // rdx
  unsigned __int64 v22; // rbp
  __int64 v23; // rcx
  const __m128i *v24; // rcx
  void **i; // r15
  void **result; // rax
  __m128 v27; // xmm0
  __m128i *v28; // [rsp+8h] [rbp-50h] BYREF
  char *v29; // [rsp+10h] [rbp-48h]
  void **v30; // [rsp+18h] [rbp-40h]

  v6 = a1[1];
  v7 = *a1;
  v8 = (char *)((char *)a2 - (char *)*a1);
  if ( !(0xCCCCCCCCCCCCCCCDLL * (v6 - *a1)) )
  {
    v9 = 1;
    goto LABEL_30;
  }
  v9 = 0x999999999999999ALL * (a1[1] - *a1);
  v10 = -16;
  if ( 0xCCCCCCCCCCCCCCCDLL * (v6 - *a1) > 0x999999999999999ALL * (v6 - *a1) || v9 > 0x666666666666666LL )
    goto LABEL_3;
  if ( v9 )
  {
LABEL_30:
    v10 = 40 * v9;
LABEL_3:
    v29 = (char *)((char *)a2 - (char *)*a1);
    v11 = operator new(v10);
    v8 = v29;
    v28 = (__m128i *)v11;
    v30 = (void **)(v11 + v10);
    v12 = (__m128i *)(v11 + 40);
    goto LABEL_4;
  }
  v30 = nullptr;
  v12 = (__m128i *)&qword_28;
  v28 = nullptr;
LABEL_4:
  v13 = *(_BYTE **)a3;
  v14 = &v8[(_QWORD)v28];
  v29 = v14;
  *(_QWORD *)v14 = v14 + 16;
  sub_12FAA20(v14, v13, (__int64)&v13[*(_QWORD *)(a3 + 8)]);
  v15 = v29;
  *((_WORD *)v29 + 16) = *(_WORD *)(a3 + 32);
  *((_DWORD *)v15 + 9) = *(_DWORD *)(a3 + 36);
  if ( a2 != (const __m128i *)v7 )
  {
    v16 = (const __m128i *)(v7 + 2);
    v17 = (unsigned __int64)&v28[2].m128i_u64[((unsigned __int64)((char *)&a2[-3].m128i_u64[1] - (char *)v7) >> 3) + 1];
    v18 = v28;
    do
    {
      v18->m128i_i64[0] = (__int64)v18[1].m128i_i64;
      v20 = (const __m128i *)v16[-1].m128i_i64[0];
      if ( v20 == v16 )
      {
        v18[1] = _mm_loadu_si128(v16);
      }
      else
      {
        v18->m128i_i64[0] = (__int64)v20;
        v18[1].m128i_i64[0] = v16->m128i_i64[0];
      }
      v18 = (__m128i *)((char *)v18 + 40);
      v18[-2].m128i_i64[0] = v16[-1].m128i_i64[1];
      v19 = v16[1].m128i_i8[0];
      v16[-1].m128i_i64[0] = (__int64)v16;
      v16 = (const __m128i *)((char *)v16 + 40);
      v16[-3].m128i_i64[0] = 0;
      v16[-3].m128i_i8[8] = 0;
      v18[-1].m128i_i8[8] = v19;
      v18[-1].m128i_i8[9] = v16[-2].m128i_i8[9];
      v18[-1].m128i_i32[3] = v16[-2].m128i_i32[3];
    }
    while ( v18 != (__m128i *)v17 );
    v12 = (__m128i *)((char *)v18 + 40);
  }
  if ( a2 == (const __m128i *)v6 )
  {
    v22 = (unsigned __int64)v12;
  }
  else
  {
    v21 = a2 + 1;
    v22 = (unsigned __int64)&v12[2].m128i_u64[((unsigned __int64)((char *)v6 - (char *)a2 - 40) >> 3) + 1];
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
      v12[-1].m128i_i8[9] = v21[-2].m128i_i8[9];
      v12[-1].m128i_i32[3] = v21[-2].m128i_i32[3];
    }
    while ( v12 != (__m128i *)v22 );
  }
  for ( i = v7; i != v6; i += 5 )
  {
    while ( *i != i + 2 )
    {
      operator delete(*i);
      i += 5;
      if ( v6 == i )
        goto LABEL_21;
    }
  }
LABEL_21:
  if ( v7 )
    operator delete(v7);
  v28 = (__m128i *)v22;
  result = v30;
  v27 = _mm_loadh_ps((const double *)&v28);
  a1[2] = v30;
  *(__m128 *)a1 = v27;
  return result;
}
