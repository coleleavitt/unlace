unsigned __int64 __fastcall sub_4D2BD0(QT::QWidget *a1, QT::QApplication *a2, unsigned int a3, double a4)
{
  QT::QObject *v6; // r15
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  const char *v10; // r8
  QT::QDrag *v11; // rbx
  QT::QMimeData *v12; // r13
  __m128i si128; // xmm0
  QT::QWidget *v14; // rsi
  double v15; // xmm0_8
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  QT::QWidget *v19; // rdi
  int v20; // ebp
  __int64 v21; // rax
  __int64 v23; // rax
  QT::QWidget *v24; // rax
  int v25; // [rsp+14h] [rbp-94h]
  QT::QWidget *v26; // [rsp+18h] [rbp-90h] BYREF
  __m128i v27; // [rsp+20h] [rbp-88h] BYREF
  void *ptr[4]; // [rsp+30h] [rbp-78h] BYREF
  __m128i v29; // [rsp+50h] [rbp-58h] BYREF
  unsigned __int64 v30; // [rsp+68h] [rbp-40h]

  v26 = a1;
  v30 = __readfsqword(0x28u);
  v6 = (QT::QObject *)sub_4C5EE0((__int64)a2);
  v7 = QT::QApplication::focusWidget(a2);
  sub_478D00((char *)&qword_8D1DA0, v7, a4, v8, v9, v10);
  QT::QByteArray::QByteArray((QT::QByteArray *)ptr, (const char *)&v26, 8);
  *((_DWORD *)v26 + 12) = a3;
  v11 = (QT::QDrag *)operator new(0x10u);
  QT::QDrag::QDrag(v11, v6);
  v12 = (QT::QMimeData *)operator new(0x10u);
  QT::QMimeData::QMimeData(v12);
  sub_4C7620(&v29);
  QT::QMimeData::setData(v12, (const QT::QString *)&v29, (const QT::QByteArray *)ptr);
  if ( v29.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)v29.m128i_i64[0], 1u) )
    free((void *)v29.m128i_i64[0]);
  QT::QDrag::setMimeData(v11, v12);
  si128 = _mm_load_si128((const __m128i *)&xmmword_5DDD70);
  v27 = si128;
  QT::QWidget::grab(&v29, v26, &v27);
  QT::QDrag::setPixmap(v11, (const QT::QPixmap *)&v29);
  QT::QPixmap::~QPixmap((QT::QPixmap *)&v29);
  v29.m128i_i64[0] = a3;
  QT::QDrag::setHotSpot(v11, &v29);
  QT::QWidget::setBaseSize(
    v26,
    *(_DWORD *)(*((_QWORD *)v26 + 4) + 28LL) + 1 - *(_DWORD *)(*((_QWORD *)v26 + 4) + 20LL),
    *(_DWORD *)(*((_QWORD *)v26 + 4) + 32LL) + 1 - *(_DWORD *)(*((_QWORD *)v26 + 4) + 24LL));
  sub_4C6A80(1);
  v14 = v26;
  sub_4C9DF0((QT::QWidget ***)a2, v26, *(double *)si128.m128i_i64);
  sub_4C5F10(a2);
  sub_4C6A80(2);
  if ( qword_8D1D70 )
  {
    *(_QWORD *)&xmmword_8D1D78 = 0;
    qfree(qword_8D1D70, (const char *)v14);
    qword_8D1D70 = 0;
    *((_QWORD *)&xmmword_8D1D78 + 1) = 0;
  }
  v15 = QT::QDrag::exec(v11, 3);
  v25 = v16;
  sub_4CBCB0(v15, (__int64)v11, 3, v17, v18);
  v19 = a2;
  sub_4C6A90((__int64)a2);
  if ( (_QWORD)xmmword_8D1D78 )
  {
    v20 = 0;
    v21 = 0;
    do
    {
      v19 = *(QT::QWidget **)(qword_8D1D70 + 8 * v21);
      QT::QWidget::close(v19);
      v21 = ++v20;
    }
    while ( v20 < (unsigned __int64)xmmword_8D1D78 );
  }
  if ( !v25 || (v19 = v11, !QT::QDrag::target(v11)) )
  {
    v23 = QT::QCursor::pos(v19);
    v29.m128i_i32[1] = HIDWORD(v23);
    v29.m128i_i32[0] = v23 - a3;
    v24 = (QT::QWidget *)sub_4C6170((__int64)v6);
    sub_4CB740(v6, 0, v26, v24, v29.m128i_i64, v15);
  }
  sub_4C6A80(0);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return v30 - __readfsqword(0x28u);
}
