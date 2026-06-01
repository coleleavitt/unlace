unsigned __int64 __fastcall sub_4F1920(__int64 a1, QT::QPainter *a2, __int64 a3, __int64 a4, double a5, double a6)
{
  __m128i v9; // xmm0
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // r15
  __int64 v13; // rbp
  __int64 v14; // rax
  void *v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rbp
  __int64 v18; // r12
  __int64 v19; // rdx
  __int64 v20; // rbp
  QT::QTextDocument *v21; // r13
  __m128d v22; // xmm0
  __m128d v23; // xmm1
  double v26; // [rsp+30h] [rbp-198h]
  QT::QTextDocument *v27; // [rsp+48h] [rbp-180h] BYREF
  void *v28; // [rsp+50h] [rbp-178h] BYREF
  __int64 v29; // [rsp+58h] [rbp-170h]
  __int64 v30; // [rsp+60h] [rbp-168h]
  __m128d v31; // [rsp+70h] [rbp-158h] BYREF
  _BYTE v32[64]; // [rsp+90h] [rbp-138h] BYREF
  __int64 v33; // [rsp+D0h] [rbp-F8h]
  __int64 v34; // [rsp+D8h] [rbp-F0h]
  __int64 v35; // [rsp+E0h] [rbp-E8h]
  _BYTE v36[20]; // [rsp+E8h] [rbp-E0h] BYREF
  int v37; // [rsp+FCh] [rbp-CCh]
  _BYTE v38[8]; // [rsp+100h] [rbp-C8h] BYREF
  QT::QApplication *v39; // [rsp+108h] [rbp-C0h]
  __m128i v40; // [rsp+110h] [rbp-B8h]
  __int64 v41; // [rsp+120h] [rbp-A8h]
  int v42; // [rsp+128h] [rbp-A0h]
  _BYTE v43[8]; // [rsp+130h] [rbp-98h] BYREF
  void *ptr[2]; // [rsp+138h] [rbp-90h] BYREF
  __int64 v45; // [rsp+148h] [rbp-80h]
  int v46; // [rsp+150h] [rbp-78h]
  _BYTE v47[8]; // [rsp+158h] [rbp-70h] BYREF
  __int128 v48; // [rsp+160h] [rbp-68h] BYREF
  __int64 v49; // [rsp+170h] [rbp-58h]
  __int64 v50; // [rsp+178h] [rbp-50h]
  unsigned __int64 v51; // [rsp+188h] [rbp-40h]

  v51 = __readfsqword(0x28u);
  QT::QStyleOption::QStyleOption((QT::QStyleOption *)v32, 1, 10);
  v33 = 0;
  v35 = -1;
  QT::QFont::QFont((QT::QFont *)v36);
  v37 = 0;
  QT::QLocale::QLocale((QT::QLocale *)v38);
  v40 = (__m128i)0xFFFFFFFFFFFFFFFFLL;
  v41 = 0;
  QT::QIcon::QIcon((QT::QIcon *)v43);
  v45 = 0;
  *(_OWORD *)ptr = 0;
  QT::QBrush::QBrush((QT::QBrush *)v47);
  QT::QStyleOption::operator=(v32, a3);
  v33 = *(_QWORD *)(a3 + 64);
  v34 = *(_QWORD *)(a3 + 72);
  v35 = *(_QWORD *)(a3 + 80);
  QT::QFont::operator=(v36, a3 + 88);
  v36[16] = *(_BYTE *)(a3 + 104);
  v37 = *(_DWORD *)(a3 + 108);
  QT::QLocale::operator=(v38, a3 + 112);
  v9 = _mm_loadu_si128((const __m128i *)(a3 + 128));
  v39 = *(QT::QApplication **)(a3 + 120);
  v10 = *(_QWORD *)(a3 + 144);
  v40 = v9;
  v41 = v10;
  v42 = *(_DWORD *)(a3 + 152);
  QT::QIcon::operator=(v43, a3 + 160);
  QT::QString::operator=(ptr, a3 + 168);
  v46 = *(_DWORD *)(a3 + 192);
  QT::QBrush::operator=(v47, a3 + 200);
  (*(void (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a1 + 184LL))(a1, v32, a4);
  v11 = *(_QWORD *)(a4 + 16);
  if ( v11 )
  {
    (*(void (__fastcall **)(__int128 *, __int64, __int64, _QWORD))(*(_QWORD *)v11 + 144LL))(&v48, v11, a4, 0);
  }
  else
  {
    v49 = 0;
    v50 = 2;
    v48 = 0;
  }
  QT::QVariant::toString((QT::QVariant *)&v28);
  QT::QVariant::~QVariant((QT::QVariant *)&v48);
  v12 = v29;
  if ( -v30 >= 0 && v30 != 0
    || v30 <= 0
    || (v13 = v29 + 2 * v30, v14 = QT::QtPrivate::qustrchr((2 * v30) >> 1, v29, 60), v13 == v14)
    || v14 - v12 == -2 )
  {
    QT::QStyledItemDelegate::paint(a1, a2, a3);
  }
  else
  {
    if ( ptr[1] )
    {
      v15 = ptr[0];
      v45 = 0;
      *(_OWORD *)ptr = 0;
      if ( v15 )
      {
        if ( !_InterlockedSub((volatile signed __int32 *)v15, 1u) )
          free(v15);
      }
    }
    if ( v39 )
      v16 = QT::QWidget::style(v39);
    else
      v16 = QT::QApplication::style(nullptr);
    v17 = v16;
    (*(void (__fastcall **)(__int64, __int64, _BYTE *, QT::QPainter *, QT::QApplication *))(*(_QWORD *)v16 + 184LL))(
      v16,
      45,
      v32,
      a2,
      v39);
    v18 = (*(__int64 (__fastcall **)(__int64, __int64, _BYTE *, QT::QApplication *))(*(_QWORD *)v17 + 192LL))(
            v17,
            46,
            v32,
            v39);
    v20 = v19;
    sub_4F03A0(&v27, a1, (const QT::QString *)&v28, a4, (__int64)v32);
    v21 = v27;
    QT::QTextDocument::size(v27);
    v26 = ((double)(HIDWORD(v20) - HIDWORD(v18) + 1) - a6) * 0.5;
    QT::QPainter::save(a2);
    v22 = 0;
    v23 = 0;
    v22.m128d_f64[0] = (double)(int)v18;
    v23.m128d_f64[0] = (double)SHIDWORD(v18) + v26;
    v31 = _mm_unpacklo_pd(v22, v23);
    QT::QPainter::translate(a2, &v31);
    HIDWORD(v31.m128d_f64[1]) = HIDWORD(v20) - HIDWORD(v18);
    LODWORD(v31.m128d_f64[1]) = v20 - v18;
    v31.m128d_f64[0] = 0.0;
    QT::QPainter::setClipRect(a2, &v31, 1);
    memset(&v31, 0, 32);
    QT::QTextDocument::drawContents(v21, a2, &v31);
    QT::QPainter::restore(a2);
    if ( v21 )
      (*(void (__fastcall **)(QT::QTextDocument *))(*(_QWORD *)v21 + 32LL))(v21);
  }
  if ( v28 && !_InterlockedSub((volatile signed __int32 *)v28, 1u) )
    free(v28);
  QT::QBrush::~QBrush((QT::QBrush *)v47);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  QT::QIcon::~QIcon((QT::QIcon *)v43);
  QT::QLocale::~QLocale((QT::QLocale *)v38);
  QT::QFont::~QFont((QT::QFont *)v36);
  QT::QStyleOption::~QStyleOption((QT::QStyleOption *)v32);
  return v51 - __readfsqword(0x28u);
}
