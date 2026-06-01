void __fastcall sub_203DA0(
        __m128 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        __int64 *a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rsi
  __m128i si128; // xmm0
  __int64 v20; // rsi
  __int64 v21; // rbx
  __int64 v22; // rbp
  QT::QAbstractScrollArea *v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rax
  const char *v26; // rsi
  __int64 *v27; // rdi
  __int64 v28; // rax
  __m128i v29[2]; // [rsp+0h] [rbp-28h] BYREF

  v16 = a10[1];
  v17 = *a10;
  v18 = *a10 + 16 * v16;
  if ( v17 != v18 )
  {
    while ( *(_OWORD *)v17 - *(_OWORD *)a11 != 0 )
    {
      v17 += 16;
      if ( v18 == v17 )
        goto LABEL_7;
    }
    if ( v17 != v18 )
    {
      sub_169700(
        (int)"Coherency check failed: !g->has(ss)\n",
        v18,
        v17,
        *(_QWORD *)(v17 + 8) ^ *(_QWORD *)(a11 + 8),
        a13,
        a14,
        a1,
        a2,
        a3,
        a4,
        a5,
        a6,
        a7,
        a8,
        v29[0].m128i_i8[0]);
      v16 = a10[1];
    }
  }
LABEL_7:
  if ( v16 && !*(_BYTE *)a11 )
  {
    v25 = QT::QMetaObject::cast((QT::QMetaObject *)&off_87B020, *(const QT::QObject **)(a11 + 8));
    v26 = (const char *)v25;
    if ( v25 )
    {
      v27 = (__int64 *)unk_8CAC18;
      if ( !unk_8CAC18 )
      {
        v29[0].m128i_i64[0] = v25;
        v28 = operator new(0x18u);
        v26 = (const char *)v29[0].m128i_i64[0];
        *(_QWORD *)v28 = 0;
        v27 = (__int64 *)v28;
        unk_8CAC18 = v28;
        *(_OWORD *)(v28 + 8) = 0;
      }
      sub_1949B0(v27, v26, 1);
    }
    v16 = a10[1];
  }
  si128 = _mm_loadu_si128((const __m128i *)a11);
  v20 = *a10;
  if ( a10[2] < (unsigned __int64)(v16 + 1) )
  {
    v29[0] = si128;
    v24 = qvector_reserve(a10, v20, v16 + 1, 16);
    v16 = a10[1];
    si128 = _mm_load_si128(v29);
    *a10 = v24;
    v20 = v24;
  }
  v21 = 0;
  *(__m128i *)(v20 + 16 * v16) = si128;
  ++a10[1];
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
}
