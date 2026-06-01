__int64 __fastcall sub_495B00(
        __int64 a1,
        QT::QAbstractItemView *a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __m128 a11,
        __m128 a12,
        __m128 a13,
        __m128 a14)
{
  char *v15; // rax
  __m128i v17; // xmm0
  const char *v18; // rsi
  __m128i v19; // kr00_16
  const char *v20; // rax
  __int64 v21; // rax
  const char *v22; // rdx
  const char *v23; // rsi
  __int64 v24; // rax
  __int64 *v25; // rdx
  __int64 v26; // rsi
  const char *v27; // rdx
  char v28; // [rsp-6h] [rbp-88h]
  __int64 v29; // [rsp+1h] [rbp-81h] BYREF
  char v30; // [rsp+9h] [rbp-79h]
  const char *v31; // [rsp+Ah] [rbp-78h] BYREF
  __m128i v32; // [rsp+12h] [rbp-70h]
  const char *v33; // [rsp+2Ah] [rbp-58h] BYREF
  __m128i v34[2]; // [rsp+32h] [rbp-50h] BYREF
  __int128 v35; // [rsp+52h] [rbp-30h] BYREF
  unsigned __int64 v36; // [rsp+62h] [rbp-20h]

  v36 = __readfsqword(0x28u);
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  sub_196F50(a1, 128, (int)"Please enter folder name", a4, a5, a6, (__m128)0LL, a8, a9, a10, a11, a12, a13, a14, v28);
  v15 = &byte_8CBC80;
  if ( *(_QWORD *)(a1 + 8) )
    v15 = *(char **)a1;
  if ( *v15 != 47 )
  {
    v34[0] = 0;
    v33 = nullptr;
    v34[1] = (__m128i)-1LL;
    v35 = -1;
    sub_4956F0(a2, (__int64 *)&v33, 3, NAN, *(double *)a8.m128_u64, a9);
    v31 = nullptr;
    v17.m128i_i64[0] = 0;
    v32 = 0;
    if ( a3 )
    {
      v24 = QT::QAbstractItemView::model(a2);
      v25 = *(__int64 **)(v24 + 216);
      if ( !v25 )
        v25 = *(__int64 **)(v24 + 208);
      v26 = *v25;
      v29 = -1;
      v30 = 0;
      dirtree_resolve_cursor(&v29, v26, &v35);
      if ( v29 != -1 && v30 )
      {
        v27 = &s1;
        if ( v34[0].m128i_i64[0] )
          v27 = v33;
        sub_48E680((void **)&v31, nullptr, v27);
        v21 = v32.m128i_i64[0];
        goto LABEL_8;
      }
      v18 = v31;
      v19 = v32;
    }
    else
    {
      v18 = nullptr;
      v19 = 0u;
    }
    v20 = v33;
    v17 = _mm_loadu_si128(v34);
    v33 = v18;
    v31 = v20;
    v21 = v34[0].m128i_i64[0];
    v34[0] = v19;
    v32 = v17;
LABEL_8:
    v22 = &s1;
    if ( *(_QWORD *)(a1 + 8) )
      v22 = *(const char **)a1;
    v23 = &s1;
    if ( v21 )
      v23 = v31;
    sub_48E5C0((__int64 *)a1, v23, v22, 0);
    if ( v31 )
    {
      v32.m128i_i64[0] = 0;
      *(double *)v17.m128i_i64 = qfree(v31, v23);
    }
    if ( v33 )
    {
      v34[0].m128i_i64[0] = 0;
      qfree(v33, v23, *(double *)v17.m128i_i64);
    }
  }
  return a1;
}
