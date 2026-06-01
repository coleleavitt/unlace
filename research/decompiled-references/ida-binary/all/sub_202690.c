unsigned __int64 __fastcall sub_202690(
        QT::QWidget *this,
        QT::QPainter *a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5,
        unsigned __int8 a6,
        __int64 a7,
        int a8)
{
  __int64 v12; // rbx
  __int64 v13; // rax
  unsigned __int64 (__fastcall *v14)(QT::QWidget *, _QWORD *, __int64, int *, char, double); // rax
  __m128i v15; // xmm1
  unsigned __int64 v16; // xmm5_8
  double v17; // xmm0_8
  __int64 v18; // r8
  __int64 v19; // r9
  __m128d v20; // xmm0
  int *v21; // rax
  char *v22; // rdx
  char *v23; // rbp
  char *v24; // rdi
  char *i; // rax
  int v26; // esi
  int v27; // ecx
  int v28; // edx
  int v29; // edx
  char *v31; // rbx
  char *v32; // rbp
  QT::QTextFormat *v33; // rdi
  double v34; // rdx
  double v35; // xmm0_8
  __m128d v36; // xmm2
  __m128d v37; // xmm3
  QT::QTextLayout *v38; // [rsp+0h] [rbp-118h]
  double v40; // [rsp+8h] [rbp-110h]
  unsigned __int64 v41; // [rsp+10h] [rbp-108h]
  double v42; // [rsp+18h] [rbp-100h]
  __m128i v43; // [rsp+30h] [rbp-E8h] BYREF
  __m128i v44; // [rsp+40h] [rbp-D8h] BYREF
  int v45; // [rsp+58h] [rbp-C0h] BYREF
  char v46; // [rsp+5Ch] [rbp-BCh]
  __m128d v47; // [rsp+60h] [rbp-B8h] BYREF
  void *ptr[2]; // [rsp+70h] [rbp-A8h] BYREF
  __int64 v49; // [rsp+80h] [rbp-98h]
  __m128d v50; // [rsp+90h] [rbp-88h] BYREF
  __m128d v51; // [rsp+A0h] [rbp-78h]
  __m128d v52; // [rsp+B0h] [rbp-68h] BYREF
  __m128d v53; // [rsp+C0h] [rbp-58h]
  unsigned __int64 v54; // [rsp+D8h] [rbp-40h]

  v54 = __readfsqword(0x28u);
  v12 = sub_178210((__int64)a3, a5, (__int64)this);
  v46 = 0;
  v38 = (QT::QTextLayout *)sub_175CF0(v12);
  v45 = -1;
  if ( a8 != -1 )
  {
    v46 = 1;
    v45 = a8;
  }
  *(_QWORD *)(v12 + 144) = 0;
  *(_OWORD *)ptr = 0;
  *(_QWORD *)(v12 + 168) = 0;
  v13 = *(_QWORD *)this;
  v49 = 0;
  v14 = *(unsigned __int64 (__fastcall **)(QT::QWidget *, _QWORD *, __int64, int *, char, double))(v13 + 944);
  if ( v14 == sub_1F3010 )
    sub_1F2240(this, a3, a4, &v45, a6, 63, 0.0);
  else
    ((void (__fastcall *)(QT::QWidget *, _QWORD *, __int64, int *, _QWORD))v14)(this, a3, a4, &v45, a6);
  sub_177C10((const __m128i **)(v12 + 136), (__m128i *)ptr, v12, 1);
  v15 = _mm_loadl_epi64((const __m128i *)a7);
  v16 = *(_QWORD *)a5;
  v42 = *(double *)(a5 + 152);
  v40 = *(double *)(a5 + 8);
  v50 = _mm_cvtepi32_pd(v15);
  v41 = v16;
  v51 = _mm_cvtepi32_pd(
          _mm_sub_epi32(
            _mm_add_epi32(_mm_loadl_epi64((const __m128i *)(a7 + 8)), _mm_loadl_epi64((const __m128i *)&qword_5DBD90)),
            v15));
  v17 = *(double *)(v12 + 128) - v42;
  if ( v17 > 0.0 && (int)QT::QTextLayout::lineCount(v38) > 0 )
  {
    LODWORD(v52.m128d_f64[0]) = QT::QTextLayout::lineAt(v38, 0);
    v52.m128d_f64[1] = v34;
    QT::QTextLine::ascent((QT::QTextLine *)&v52);
    QT::QFontMetricsF::ascent((QT::QFontMetricsF *)(a5 + 80));
    v35 = v17 - v17;
    if ( v35 > 0.0 )
    {
      v36 = (__m128d)*(unsigned __int64 *)&v42;
      v37 = (__m128d)*(unsigned __int64 *)&v51.m128d_f64[0];
      v36.m128d_f64[0] = v42 + v40;
      v37.m128d_f64[0] = v51.m128d_f64[0] + v50.m128d_f64[0];
      v52 = _mm_unpacklo_pd((__m128d)*(unsigned __int64 *)&v50.m128d_f64[0], (__m128d)*(unsigned __int64 *)&v40);
      v53 = _mm_unpacklo_pd(v37, v36);
      QT::QRectF::operator&(&v43, &v50, &v52);
      v50 = (__m128d)_mm_loadu_si128(&v43);
      v40 = v40 - v35;
      v51 = (__m128d)_mm_loadu_si128(&v44);
    }
  }
  QT::QPainter::save(a2);
  QT::QPainter::setRenderHint(a2, 1, 0);
  sub_1FA290((__int64)this, a2, (__int64)a3, a5, (__int64 *)(v12 + 24));
  sub_1FA290((__int64)this, a2, (__int64)a3, a5, (__int64 *)(v12 + 160));
  QT::QPainter::restore(a2);
  v20 = (__m128d)*(unsigned __int64 *)&v40;
  v20.m128d_f64[0] = v40 + *(double *)&qword_8CB470;
  v21 = (int *)ptr[0];
  v47 = _mm_unpacklo_pd((__m128d)v41, v20);
  if ( !ptr[0] || *(int *)ptr[0] > 1 )
  {
    sub_177130((__m128i *)ptr, 0, 0, 0, v18, v19);
    v21 = (int *)ptr[0];
  }
  v22 = (char *)ptr[1];
  v23 = (char *)ptr[1];
  if ( !v21 || *v21 > 1 )
  {
    sub_177130((__m128i *)ptr, 0, 0, 0, v18, v19);
    v22 = (char *)ptr[1];
  }
  v24 = &v22[24 * v49];
  for ( i = v23; v24 != i; i += 24 )
  {
    v26 = *(_DWORD *)i;
    v27 = *((_DWORD *)i + 1);
    if ( *(_DWORD *)i == -1 )
    {
      *(_DWORD *)i = 0;
      v29 = *(_DWORD *)(v12 + 212);
      if ( v29 >= v27 )
        continue;
    }
    else
    {
      v28 = *(_DWORD *)(v12 + 212);
      if ( v28 >= v27 && v28 >= v26 + v27 )
        continue;
      v29 = v28 - v26;
    }
    *((_DWORD *)i + 1) = v29;
  }
  v52 = 0;
  v53 = 0;
  QT::QTextLayout::draw(v38, a2, &v47, ptr, &v52);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
  {
    v31 = (char *)ptr[1];
    v32 = (char *)ptr[1] + 24 * v49;
    if ( ptr[1] != v32 )
    {
      do
      {
        v33 = (QT::QTextFormat *)(v31 + 8);
        v31 += 24;
        QT::QTextFormat::~QTextFormat(v33);
      }
      while ( v32 != v31 );
    }
    free(ptr[0]);
  }
  return v54 - __readfsqword(0x28u);
}
