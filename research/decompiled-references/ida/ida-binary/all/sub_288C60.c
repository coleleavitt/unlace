unsigned __int64 __fastcall sub_288C60(
        __int64 a1,
        QT::QFontMetricsF *a2,
        int a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r13
  __m128 v16; // xmm3
  __m128 v17; // xmm2
  __m128 v18; // xmm1
  __int64 v19; // rsi
  __m128 v20; // xmm0
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rcx
  unsigned __int64 v24; // rbp
  void **v25; // r15
  void *v26; // rdi
  __m128i si128; // xmm4
  __m128i v28; // xmm5
  char v29; // al
  __int64 v31; // rdi
  QT::QAbstractSlider *v32; // rbp
  int v33; // r14d
  double v34; // xmm4_8
  double v35; // xmm5_8
  double v36; // xmm4_8
  double v37; // xmm5_8
  int v38; // eax
  double v39; // xmm4_8
  double v40; // xmm5_8
  __int64 v41; // rbp
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rcx
  double v45; // xmm4_8
  double v46; // xmm5_8
  __int64 v47[2]; // [rsp+0h] [rbp-198h] BYREF
  __int64 v48[2]; // [rsp+10h] [rbp-188h] BYREF
  QT::QFontMetricsF *v49; // [rsp+28h] [rbp-170h]
  int v50[2]; // [rsp+30h] [rbp-168h]
  int v51[2]; // [rsp+38h] [rbp-160h]
  int v52[4]; // [rsp+40h] [rbp-158h] BYREF
  int v53[4]; // [rsp+50h] [rbp-148h]
  char v54[16]; // [rsp+60h] [rbp-138h] BYREF
  int v55[4]; // [rsp+70h] [rbp-128h]
  int v56[16]; // [rsp+90h] [rbp-108h] BYREF
  _BYTE v57[16]; // [rsp+D0h] [rbp-C8h] BYREF
  _BYTE v58[96]; // [rsp+E0h] [rbp-B8h] BYREF
  __int64 v59; // [rsp+140h] [rbp-58h]
  __int64 v60; // [rsp+148h] [rbp-50h]
  int v61[2]; // [rsp+158h] [rbp-40h]

  v49 = a2;
  *(_QWORD *)v61 = __readfsqword(0x28u);
  *(_QWORD *)v51 = v56;
  sub_283F90((__int64)v56, a1);
  v15 = v59;
  v16 = (__m128)_mm_loadu_si128((const __m128i *)(a1 + 360));
  v17 = (__m128)_mm_loadu_si128((const __m128i *)(a1 + 376));
  v18 = (__m128)_mm_loadu_si128((const __m128i *)(a1 + 392));
  v19 = (__int64)v52;
  v20 = (__m128)_mm_loadu_si128((const __m128i *)(a1 + 408));
  *(_QWORD *)v50 = v52;
  *(__m128 *)v48 = v16;
  *(__m128 *)v52 = v18;
  v21 = a3;
  *(__m128 *)v53 = v20;
  *(__m128 *)v54 = v16;
  if ( a3 >= v59 )
    a3 = v59 - 1;
  *(__m128 *)v47 = v17;
  *(__m128 *)v55 = v17;
  sub_283600((__int64 **)v54, (__int64 **)v52, v21, v13, v14);
  v24 = *(_QWORD *)(a1 + 416) + 8LL;
  v25 = (void **)(v17.m128_u64[1] + 8);
  if ( v17.m128_u64[1] + 8 < v24 )
  {
    do
    {
      v26 = *v25;
      v19 = 272;
      ++v25;
      operator delete(v26, 0x110u);
    }
    while ( (unsigned __int64)v25 < v24 );
  }
  si128 = _mm_load_si128((const __m128i *)v48);
  v28 = _mm_load_si128((const __m128i *)v47);
  *(_DWORD *)(a1 + 424) = 0;
  v29 = *(_BYTE *)(a1 + 433);
  LOBYTE(v52[0]) = 0;
  *(__m128i *)(a1 + 392) = si128;
  *(__m128i *)(a1 + 408) = v28;
  if ( !v29 )
  {
    *(_BYTE *)(a1 + 433) = 1;
    sub_1E96E0((QT::QObject *)v54, *(double *)v20.m128_u64, *(_QWORD *)(a1 + 16), 0);
    linearray_t_set_place(a1 + 184, v49);
    *(double *)v20.m128_u64 = linearray_t_copy_from(a1 + 264, a1 + 184);
    v38 = sub_287C20(a1, *(_BYTE **)v50, a1 + 184, a3, 1u, v20, v18, v17, v16, v36, v37, a10, a11);
    sub_287C20(a1, nullptr, a1 + 264, v60 - v38, 2u, v20, v18, v17, v16, v39, v40, a10, a11);
    v41 = *(_QWORD *)(a1 + 16);
    *(_BYTE *)(a1 + 433) = 0;
    v19 = sub_1EA6A0(v41 + 384, 0, v42, v43, *(double *)v20.m128_u64);
    sub_200650(v41, (const __m128i *)v19, 0, v44, *(double *)v20.m128_u64, v18, v17, v16, v45, v46, a10, a11);
    sub_1E98C0((QT::QObject *)v54);
    v29 = LOBYTE(v52[0]) ^ 1;
  }
  if ( v15 > 0 )
  {
    if ( v29 )
    {
      if ( a3 < v15 )
      {
        v31 = *(_QWORD *)(a1 + 16);
        if ( (*(_BYTE *)(v31 + 564) & 4) == 0 )
        {
          if ( (unsigned __int8)sub_3310F0(v31) )
          {
            v32 = (QT::QAbstractSlider *)QT::QAbstractScrollArea::verticalScrollBar(*(QT::QAbstractScrollArea **)(a1 + 16));
            v33 = QT::QAbstractSlider::maximum(v32);
            if ( v33 <= (int)QT::QAbstractSlider::minimum(v32) )
            {
              v19 = (unsigned int)(v15 - a3);
              sub_288200(a1, v19, 1u, *(__int64 *)v51, v20, v18, v17, v16, v34, v35, a10, a11);
            }
          }
        }
      }
    }
  }
  if ( *(_QWORD *)(a1 + 392) != *(_QWORD *)(a1 + 360) && !v60 )
  {
    if ( !under_debugger )
      interr(40384, v19, v22, v23, *(double *)v20.m128_u64);
    BUG();
  }
  QT::QFontMetricsF::~QFontMetricsF((QT::QFontMetricsF *)v58);
  QT::QFont::~QFont((QT::QFont *)v57);
  return *(_QWORD *)v61 - __readfsqword(0x28u);
}
