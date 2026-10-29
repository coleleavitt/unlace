__int64 __fastcall sub_2862A0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        double a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  __int64 v11; // r14
  unsigned int v12; // r12d
  int v14; // r13d
  __int64 v15; // rbp
  double v16; // xmm0_8
  double v17; // xmm4_8
  double v18; // xmm5_8
  unsigned int v19; // edx
  int v20; // eax
  int v21; // r15d
  __int64 v22; // rdi
  __int64 v23; // rdx
  double v25; // r15
  __m128 v26; // xmm3
  int v27; // r14d
  double v28; // xmm4_8
  double v29; // xmm5_8
  QT::QAbstractSlider *v30; // r12
  int v31; // r13d
  double v32; // xmm0_8
  __int64 v33; // rsi
  int v34; // r12d
  __int64 v35; // rdx
  __int64 v36; // rcx
  __m128i *v37; // rax
  double v38; // xmm4_8
  double v39; // xmm5_8
  __int64 v40; // rdi
  __m128 v41; // xmm1
  __m128 v42; // xmm0
  int v43; // eax
  double v44; // [rsp+8h] [rbp-150h]
  double v45; // [rsp+8h] [rbp-150h]
  double v46; // [rsp+10h] [rbp-148h]
  double v47; // [rsp+10h] [rbp-148h]
  __m128i v48; // [rsp+20h] [rbp-138h] BYREF
  __m128i v49; // [rsp+30h] [rbp-128h]
  __int64 v50; // [rsp+40h] [rbp-118h]
  __int64 v51; // [rsp+48h] [rbp-110h]
  _BYTE v52[64]; // [rsp+50h] [rbp-108h] BYREF
  _BYTE v53[16]; // [rsp+90h] [rbp-C8h] BYREF
  _BYTE v54[24]; // [rsp+A0h] [rbp-B8h] BYREF
  double v55; // [rsp+B8h] [rbp-A0h]
  __int64 v56; // [rsp+100h] [rbp-58h]
  unsigned __int64 v57; // [rsp+118h] [rbp-40h]

  v11 = a3 >> 32;
  v12 = a3;
  v57 = __readfsqword(0x28u);
  v14 = a3;
  if ( !HIDWORD(a3) )
    goto LABEL_13;
  v15 = HIDWORD(a3);
  if ( (*(_BYTE *)(a2 + 35) & 6) != 0 )
  {
    a2 = a1;
    sub_283F90((__int64)v52, a1);
    a5 = (__m128)0x3FE0000000000000uLL;
    v46 = (double)(int)v11;
    v44 = 120.0 / (double)(int)v56;
    if ( (int)v11 < 0 )
      a5 = (__m128)0xBFE0000000000000LL;
    v16 = (double)(int)v11 / v44 + *(double *)a5.m128_u64;
    v21 = (int)v16;
    QT::QFontMetricsF::~QFontMetricsF((QT::QFontMetricsF *)v54);
    QT::QFont::~QFont((QT::QFont *)v53);
  }
  else
  {
    v16 = (*(double (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 1024LL))(*(_QWORD *)(a1 + 16));
    a6 = 0;
    v19 = *(_DWORD *)(a1 + 436);
    v44 = v16;
    v46 = (double)(int)v11;
    *(double *)a6.m128_u64 = (double)(int)v11 / v16;
    v20 = (int)*(double *)a6.m128_u64;
    v21 = -(int)*(double *)a6.m128_u64;
    if ( (int)*(double *)a6.m128_u64 > 0 )
      v21 = (int)*(double *)a6.m128_u64;
    if ( v19 && v19 < v21 )
    {
      v22 = *(_QWORD *)(a1 + 16);
      v21 = v19;
      if ( v20 < 0 )
        v21 = -v19;
      sub_1FE050(v22, (const char *)a2, v16, a5, a6, a7, v17, v18, a10, a11);
LABEL_10:
      v23 = (unsigned int)-v21;
      if ( v21 > 0 )
        v23 = (unsigned int)v21;
      (*(void (__fastcall **)(__int64, bool, __int64))(*(_QWORD *)a1 + 248LL))(a1, (int)v11 > 0, v23);
      sub_1F6870(*(_QWORD *)(a1 + 16), 1);
      if ( !*(_DWORD *)(a1 + 436) )
      {
        a5 = 0;
        *(double *)a5.m128_u64 = (double)v21 * v44;
        v15 = (unsigned int)(int)(v46 - *(double *)a5.m128_u64);
LABEL_14:
        if ( !v14 )
          return (v15 << 32) | v12;
        goto LABEL_20;
      }
LABEL_13:
      v15 = 0;
      goto LABEL_14;
    }
    if ( v20 < 0 )
      v21 = -v21;
  }
  sub_1FE050(*(_QWORD *)(a1 + 16), (const char *)a2, v16, a5, a6, a7, v17, v18, a10, a11);
  if ( v21 )
    goto LABEL_10;
  if ( !v14 )
    return (v15 << 32) | v12;
LABEL_20:
  sub_283F90((__int64)v52, a1);
  v26 = 0;
  v45 = (*(double (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 1024LL))(*(_QWORD *)(a1 + 16));
  v25 = (double)v14;
  *(double *)v26.m128_u64 = (double)v14 / v45;
  v47 = v55;
  v27 = (int)*(double *)v26.m128_u64;
  sub_1FE050(*(_QWORD *)(a1 + 16), (const char *)a1, v55, a5, a6, v26, v28, v29, a10, a11);
  if ( (int)*(double *)v26.m128_u64 )
  {
    v30 = (QT::QAbstractSlider *)QT::QAbstractScrollArea::horizontalScrollBar(*(QT::QAbstractScrollArea **)(a1 + 16));
    v31 = QT::QAbstractSlider::value(v30);
    v32 = v47 * (double)v27;
    v33 = (unsigned int)(v31 - (int)v32);
    QT::QAbstractSlider::setValue(v30, v33);
    v34 = QT::QAbstractSlider::value(v30) - v31;
    v37 = (__m128i *)sub_1EA680(*(_QWORD *)(a1 + 16) + 384LL, v33, v35, v36, v32);
    v49.m128i_i64[0] = 0;
    v49.m128i_i64[1] = -1;
    v50 = 0;
    v51 = 0;
    v48 = 0;
    if ( v37 == &v48 )
    {
      v41 = (__m128)0xBFF0000000000000LL;
    }
    else
    {
      v48 = _mm_loadu_si128(v37);
      v49 = _mm_loadu_si128(v37 + 1);
      LODWORD(v50) = v37[2].m128i_i32[0];
      v40 = v37[2].m128i_i64[1];
      if ( v40 )
        v51 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
      v41 = 0;
      *(double *)v41.m128_u64 = (double)v49.m128i_i16[6];
    }
    v42 = 0;
    *(double *)v42.m128_u64 = (double)v34 / v55 + *(double *)v41.m128_u64;
    v43 = (int)*(double *)v42.m128_u64;
    if ( (int)*(double *)v42.m128_u64 < 0 )
      LOWORD(v43) = 0;
    v49.m128i_i16[6] = v43;
    sub_1FF700(*(_QWORD *)(a1 + 16) + 384LL, &v48, v42, v41, a6, v26, v38, v39, a10, a11);
    sub_1F4880(*(QT::QAbstractScrollArea **)(a1 + 16), 0);
    v12 = (int)(v25 - (double)v27 * v45);
    if ( v51 )
      qfree(v51, nullptr);
  }
  QT::QFontMetricsF::~QFontMetricsF((QT::QFontMetricsF *)v54);
  QT::QFont::~QFont((QT::QFont *)v53);
  return (v15 << 32) | v12;
}
