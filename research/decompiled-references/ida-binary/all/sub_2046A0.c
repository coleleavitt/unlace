__int64 __fastcall sub_2046A0(
        __m128 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        const __m128i *a10,
        _QWORD *a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  const __m128i *v14; // rbp
  unsigned __int64 v15; // r8
  const __m128i *v16; // rax
  __int64 v18; // rdx
  __m128i *v19; // rdi
  __int64 v21; // rbx
  __int64 v22; // rbp
  QT::QAbstractScrollArea *v23; // rdi
  const char *v24; // rax
  const char *v25; // rsi
  __int64 *v26; // rdi
  __int64 v27; // rax
  char v28; // [rsp+0h] [rbp-48h]
  const char *v29; // [rsp+8h] [rbp-40h]
  __m128i v30; // [rsp+10h] [rbp-38h]

  v14 = a10;
  v15 = a10->m128i_u64[1];
  v16 = (const __m128i *)a10->m128i_i64[0];
  v18 = a10->m128i_i64[0] + 16 * v15;
  if ( a10->m128i_i64[0] != v18 )
  {
    a10 = (const __m128i *)a10->m128i_i64[0];
    while ( 1 )
    {
      a12 = a10->m128i_i64[1] ^ a11[1] | a10->m128i_i64[0] ^ *a11;
      if ( *(_OWORD *)a10 - *(_OWORD *)a11 == 0 )
        break;
      if ( (const __m128i *)v18 == ++a10 )
        goto LABEL_23;
    }
    if ( a10 != (const __m128i *)v18 )
    {
      v19 = (__m128i *)v16;
      goto LABEL_8;
    }
  }
LABEL_23:
  sub_169700(
    (int)"Coherency check failed: g->has(ss)\n",
    (__int64)a10,
    v18,
    a12,
    v15,
    a14,
    a1,
    a2,
    a3,
    a4,
    a5,
    a6,
    a7,
    a8,
    v28);
  v15 = v14->m128i_u64[1];
  v16 = (const __m128i *)v14->m128i_i64[0];
  v19 = (__m128i *)v14->m128i_i64[0];
  v18 = v14->m128i_i64[0] + 16 * v15;
  if ( v14->m128i_i64[0] == v18 )
    return 0;
LABEL_8:
  while ( *(_OWORD *)v16 - *(_OWORD *)a11 != 0 )
  {
    if ( (const __m128i *)v18 == ++v16 )
      return 0;
  }
  if ( v16 == (const __m128i *)v18 || v16->m128i_i8[0] )
    return 0;
  v30 = v16 == v19 && v15 > 1 ? _mm_loadu_si128(v19 + 1) : _mm_loadu_si128(v16);
  if ( !v30.m128i_i8[0] )
  {
    v24 = (const char *)QT::QMetaObject::cast((QT::QMetaObject *)&off_87B020, (const QT::QObject *)v30.m128i_i64[1]);
    v25 = v24;
    if ( v24 )
    {
      v26 = (__int64 *)unk_8CAC18;
      if ( !unk_8CAC18 )
      {
        v29 = v24;
        v27 = operator new(0x18u);
        v25 = v29;
        *(_QWORD *)v27 = 0;
        v26 = (__int64 *)v27;
        unk_8CAC18 = v27;
        *(_OWORD *)(v27 + 8) = 0;
      }
      sub_1949B0(v26, v25, 0);
    }
    v19 = (__m128i *)v14->m128i_i64[0];
    v18 = v14->m128i_i64[0] + 16 * v14->m128i_i64[1];
    if ( v18 == v14->m128i_i64[0] )
      return 0;
  }
  while ( *v19 - *(_OWORD *)a11 != 0 )
  {
    if ( (__m128i *)v18 == ++v19 )
      return 0;
  }
  if ( v19 == (__m128i *)v18 )
    return 0;
  v21 = 0;
  memmove(v19, &v19[1], v18 - (_QWORD)v19 - 16);
  --v14->m128i_i64[1];
  v22 = xmmword_8CB528;
  if ( (_QWORD)xmmword_8CB528 )
  {
    do
    {
      v23 = *(QT::QAbstractScrollArea **)(qword_8CB520 + 8 * v21++);
      sub_203AD0(v23);
    }
    while ( v22 != v21 );
  }
  return 1;
}
