__int64 __fastcall sub_3C64C0(
        QT::QAbstractItemView *a1,
        __int64 a2,
        double a3,
        double a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __m128i v12; // xmm0
  double v13; // xmm4_8
  double v14; // xmm5_8
  const char *v15; // rsi
  char v16; // al
  __int64 v17; // rdi
  unsigned int v18; // r14d
  __m128i v20; // xmm2
  __m128i v21; // xmm1
  __int64 v22; // rax
  unsigned int v23; // [rsp+4h] [rbp-7Ch] BYREF
  unsigned int *v24; // [rsp+8h] [rbp-78h] BYREF
  __int128 v25; // [rsp+10h] [rbp-70h]
  __int64 v26; // [rsp+28h] [rbp-58h] BYREF
  __m256i v27; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int64 v28; // [rsp+50h] [rbp-30h]

  v28 = __readfsqword(0x28u);
  v25 = 0;
  *(_OWORD *)v27.m256i_i8 = 0;
  v12.m128i_i64[0] = -1;
  v24 = nullptr;
  v26 = 0;
  *(_OWORD *)&v27.m256i_u64[2] = -1;
  sub_48FF00(a1);
  if ( v27.m256i_i64[3] )
    v27.m256i_i64[3] = 0;
  v15 = (const char *)&v23;
  v16 = sub_3A90C0((__int64 *)&v24, &v23, (const __m128i *)&v27.m256i_u64[2], 1u, NAN, a4, a5, a6, v13, v14, a9, a10);
  v17 = v26;
  v18 = 0;
  if ( v16 && (_QWORD)v25 )
  {
    if ( v26 )
    {
      v27.m256i_i64[0] = 0;
      qfree(v26, (const char *)&v23);
      v26 = 0;
      v27.m256i_i64[1] = 0;
    }
    v15 = *((const char **)a1 + 311);
    *(_OWORD *)&v27.m256i_u64[2] = -1;
    sub_3C5CD0((__int64)&v26, (__int64)v15, &v24, v23);
    v20 = _mm_loadu_si128((const __m128i *)(a2 + 88));
    v18 = 2;
    v12 = _mm_loadu_si128((const __m128i *)&v27.m256i_u64[2]);
    v17 = *(_QWORD *)(a2 + 72);
    v21 = _mm_loadu_si128((const __m128i *)&v27);
    *(_QWORD *)(a2 + 72) = v26;
    v22 = *(_QWORD *)(a2 + 104);
    *(_DWORD *)(a2 + 136) |= 2u;
    v26 = v17;
    v27.m256i_i64[3] = v22;
    *(__m128i *)&v27.m256i_u64[1] = v20;
    *(__m128i *)(a2 + 80) = v21;
    *(__m128i *)(a2 + 96) = v12;
  }
  if ( v17 )
  {
    v27.m256i_i64[0] = 0;
    *(double *)v12.m128i_i64 = qfree(v17, v15);
  }
  if ( v24 )
  {
    *(_QWORD *)&v25 = 0;
    qfree(v24, v15, *(double *)v12.m128i_i64);
  }
  return v18;
}
