__int64 __fastcall sub_2EC6A0(_QWORD *a1, __int64 a2, int *a3, QT::QPainter *a4, __int64 a5)
{
  QT::QPainter *v6; // rbp
  __int64 v7; // r13
  QT::QAbstractItemView *v8; // rax
  QT::QAbstractItemView *v9; // rbx
  __int64 v10; // rdi
  __int64 (__fastcall *v11)(__int64, __int64); // rax
  int v12; // eax
  __int64 v13; // r15
  __int64 v14; // r8
  int *v15; // r14
  int v16; // ebx
  int v17; // r15d
  __int128 v18; // rax
  int v19; // eax
  __m128i v20; // rax
  __int64 v22; // rax
  float v23; // xmm0_4
  int v24; // ecx
  __int16 v25; // ax
  __int16 v26; // dx
  __int16 v27; // cx
  __m128i v28; // xmm0
  int v29; // eax
  int v30; // eax
  QT::QString *v31; // [rsp+8h] [rbp-130h]
  int *v32; // [rsp+10h] [rbp-128h]
  int *v33; // [rsp+18h] [rbp-120h]
  char *v34; // [rsp+30h] [rbp-108h]
  int *v35; // [rsp+38h] [rbp-100h]
  QT::QFontMetrics *v36; // [rsp+48h] [rbp-F0h]
  double v37[2]; // [rsp+50h] [rbp-E8h] BYREF
  __int128 v38; // [rsp+60h] [rbp-D8h] BYREF
  __m128i v39; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v40; // [rsp+80h] [rbp-B8h]
  int v41; // [rsp+D0h] [rbp-68h] BYREF
  __int16 v42; // [rsp+D4h] [rbp-64h]
  __int16 v43; // [rsp+D6h] [rbp-62h]
  __int16 v44; // [rsp+D8h] [rbp-60h]
  int v45; // [rsp+DAh] [rbp-5Eh]
  __m128i v46; // [rsp+E0h] [rbp-58h] BYREF
  unsigned __int64 v47; // [rsp+F8h] [rbp-40h]

  v6 = a4;
  v32 = a3;
  v47 = __readfsqword(0x28u);
  v7 = a5;
  if ( (_DWORD)a2 == 45 && a5 )
  {
    v8 = (QT::QAbstractItemView *)QT::QMetaObject::cast(
                                    (QT::QMetaObject *)&off_889E80,
                                    *(const QT::QObject **)(a1[1] + 16LL));
    v9 = v8;
    if ( !v8 )
    {
LABEL_17:
      a3 = v32;
      a5 = v7;
      a4 = v6;
      a2 = 45;
      return QT::QProxyStyle::drawControl(a1, a2, a3, a4, a5);
    }
    v10 = QT::QAbstractItemView::model(v8);
    v11 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 120LL);
    v39 = (__m128i)0xFFFFFFFFFFFFFFFFLL;
    v40 = 0;
    if ( v11 == sub_2E61E0 )
    {
      v12 = *(_DWORD *)(v10 + 72);
      if ( v12 == 2 )
      {
        LODWORD(v22) = *(_DWORD *)(v10 + 64);
      }
      else
      {
        if ( v12 )
          goto LABEL_7;
        v22 = *(_QWORD *)(v10 + 48);
        if ( !v22 )
          goto LABEL_7;
      }
    }
    else
    {
      LODWORD(v22) = v11(v10, (__int64)&v39);
    }
    if ( (int)v22 <= 0 )
      goto LABEL_17;
LABEL_7:
    v33 = nullptr;
    if ( v32 )
    {
      if ( *v32 > 0 )
      {
        v33 = v32;
        if ( v32[1] != 10 )
          v33 = nullptr;
      }
    }
    v13 = sub_2E6E70(v10, v33 + 32);
    if ( v13 )
    {
      QT::QPainter::save(v6);
      if ( *(_QWORD *)(v13 + 32) )
      {
        v23 = (float)*(int *)(v13 + 64) * 2.55;
        v24 = (int)(float)(255.0 - v23);
        if ( (v24 | (unsigned int)(int)v23) > 0xFF )
        {
          v41 = 0;
          v25 = 0;
          v26 = 0;
          v27 = 0;
        }
        else
        {
          v41 = 1;
          v25 = 257 * (int)v23;
          v26 = 257 * v24;
          v27 = 25700;
        }
        v42 = v27;
        v43 = v26;
        v44 = v25;
        v45 = 0;
        v28 = _mm_loadu_si128((const __m128i *)(*(_QWORD *)QT::QPalette::brush(v33 + 10, 4, 9) + 8LL));
        v29 = v33[6];
        v37[1] = 0.0;
        v46 = v28;
        v30 = v29 + 1 - v33[4];
        v38 = 0;
        v37[0] = (double)v30;
        QT::QLinearGradient::QLinearGradient(&v39, v37, &v38);
        QT::QGradient::setColorAt((QT::QGradient *)&v39, 0.0, (const QT::QColor *)&v41);
        QT::QGradient::setColorAt((QT::QGradient *)&v39, 1.0, (const QT::QColor *)&v46);
        QT::QBrush::QBrush((QT::QBrush *)&v38, (const QT::QGradient *)&v39);
        QT::QPainter::fillRect(v6, v33 + 4, &v38);
        QT::QBrush::~QBrush((QT::QBrush *)&v38);
        QT::QLinearGradient::~QLinearGradient((QT::QLinearGradient *)&v39);
      }
      v14 = *(_QWORD *)(v13 + 40);
      if ( v14 + 16LL * *(_QWORD *)(v13 + 48) != v14 )
      {
        v35 = (int *)(v14 + 16LL * *(_QWORD *)(v13 + 48));
        v15 = *(int **)(v13 + 40);
        v31 = (QT::QString *)(v33 + 42);
        v34 = (char *)v9 + 40;
        v36 = (QT::QFontMetrics *)(v33 + 8);
        do
        {
          v16 = QT::QFontMetrics::horizontalAdvance(v36, v31, *v15);
          v17 = QT::QFontMetrics::horizontalAdvance(v36, v31, v15[2]);
          *(_QWORD *)&v18 = (*(__int64 (__fastcall **)(_QWORD *, __int64, int *, __int64))(*a1 + 192LL))(
                              a1,
                              46,
                              v32,
                              v7);
          v38 = v18;
          v19 = (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD, __int64))(*a1 + 224LL))(a1, 65, 0, v7);
          v39 = _mm_unpacklo_epi64(
                  _mm_unpacklo_epi32(_mm_cvtsi32_si128((int)v38 + v16 + v19 + 1), _mm_cvtsi32_si128(DWORD1(v38))),
                  _mm_unpacklo_epi32(_mm_cvtsi32_si128(v17 + (int)v38 + v19), _mm_cvtsi32_si128(HIDWORD(v38))));
          QT::QPainter::setClipRect(v6, &v38, 1);
          QT::QPainter::setClipping(v6, 1);
          v15 += 4;
          v20.m128i_i64[0] = sub_524FA0(v34, (*((char *)v33 + 9) < 0) + 2165563904LL, 0);
          v46 = v20;
          QT::QColor::setAlpha((QT::QColor *)&v46, 100);
          QT::QPainter::fillRect(v6, &v39, &v46);
          QT::QPainter::setClipping(v6, 0);
        }
        while ( v35 != v15 );
      }
      QT::QPainter::restore(v6);
    }
    goto LABEL_17;
  }
  return QT::QProxyStyle::drawControl(a1, a2, a3, a4, a5);
}
