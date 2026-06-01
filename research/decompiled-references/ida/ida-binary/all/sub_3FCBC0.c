__int64 __fastcall sub_3FCBC0(QT::QObject *a1, __int64 a2, int a3, int a4, __int64 a5, __int64 a6, int a7, __int64 a8)
{
  QT::QPushButton *v8; // r13
  double v9; // xmm0_8
  volatile signed __int32 *v10; // rax
  QT::QWidget *v11; // r15
  QT::QGridLayout *v12; // r13
  QT::QScrollArea *v13; // r13
  QT::QWidget *v14; // r15
  volatile signed __int32 *v15; // rax
  QT::QAbstractButton *v16; // r15
  __m128i *v17; // rax
  __m128i si128; // xmm0
  QT::QWidget *v19; // r13
  QT::QLayout **v20; // rbp
  _QWORD *v22; // [rsp+8h] [rbp-70h]
  char v23[8]; // [rsp+18h] [rbp-60h] BYREF
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __int128 v25; // [rsp+28h] [rbp-50h]
  unsigned __int64 v26; // [rsp+38h] [rbp-40h]

  v26 = __readfsqword(0x28u);
  v8 = (QT::QPushButton *)operator new(0x28u);
  v9 = QT::QString::fromUtf8(&ptr, 10, "Add Filter");
  QT::QPushButton::QPushButton(v8, (const QT::QString *)&ptr, a1);
  v10 = (volatile signed __int32 *)ptr;
  *((_QWORD *)a1 + 34) = v8;
  if ( v10 && !_InterlockedSub(v10, 1u) )
    free(ptr);
  v11 = (QT::QWidget *)operator new(0x28u);
  QT::QWidget::QWidget(v11, 0, 0);
  v12 = (QT::QGridLayout *)operator new(0x20u);
  QT::QGridLayout::QGridLayout(v12, nullptr);
  QT::QLayout::setContentsMargins(v12, 5, 5, 5, 5);
  (*(void (__fastcall **)(QT::QGridLayout *, __int64, double))(*(_QWORD *)v12 + 104LL))(v12, 2, v9);
  QT::QGridLayout::addWidget(v12, *((_QWORD *)a1 + 23), 0, 0, 0);
  QT::QGridLayout::addWidget(v12, *((_QWORD *)a1 + 26), 0, 1, 0);
  QT::QGridLayout::addWidget(v12, *((_QWORD *)a1 + 24), 0, 2, 0);
  QT::QGridLayout::addWidget(v12, *((_QWORD *)a1 + 29), 0, 3, 0);
  QT::QGridLayout::addWidget(v12, *((_QWORD *)a1 + 25), 1, 0, 0);
  QT::QGridLayout::addWidget(v12, *((_QWORD *)a1 + 27), 1, 1, 0);
  QT::QGridLayout::addWidget(v12, *((_QWORD *)a1 + 31), 1, 2, 0);
  QT::QGridLayout::addWidget(v12, *((_QWORD *)a1 + 30), 1, 3, 0);
  QT::QGridLayout::addWidget(v12, *((_QWORD *)a1 + 33), 2, 0, 0);
  QT::QGridLayout::addWidget(v12, *((_QWORD *)a1 + 28), 2, 1, 0);
  QT::QGridLayout::addWidget(v12, *((_QWORD *)a1 + 32), 2, 2, 0);
  QT::QWidget::setLayout(v11, v12);
  v13 = (QT::QScrollArea *)operator new(0x28u);
  QT::QScrollArea::QScrollArea(v13, a1);
  QT::QScrollArea::setWidgetResizable(v13, 1);
  QT::QAbstractScrollArea::setHorizontalScrollBarPolicy(v13, 0);
  QT::QAbstractScrollArea::setVerticalScrollBarPolicy(v13, 0);
  QT::QFrame::setFrameShape(v13, 0);
  QT::QScrollArea::setWidget(v13, v11);
  v14 = (QT::QWidget *)operator new(0x88u);
  QT::QString::fromUtf8(&ptr, 7, "Options");
  sub_1DE2E0(v14, (__int64)a1, (const __m128i *)&ptr, (__int64)v13, 1);
  v15 = (volatile signed __int32 *)ptr;
  *((_QWORD *)a1 + 16) = v14;
  if ( v15 && !_InterlockedSub(v15, 1u) )
    free(ptr);
  v16 = *((QT::QAbstractButton **)a1 + 34);
  if ( v16 )
  {
    v25 = 0;
    ptr = nullptr;
    v22 = QT::QCoreApplication::self;
    v17 = (__m128i *)qvector_reserve(&ptr, 0, 23, 1);
    si128 = _mm_load_si128((const __m128i *)&xmmword_5DD8A0);
    ptr = v17;
    *(_QWORD *)&v25 = 23;
    *v17 = si128;
    *(__int64 *)((char *)&v17->m128i_i64[1] + 6) = 0x6776732E3138312FLL;
    *((_BYTE *)ptr + 22) = 0;
    sub_479BE0(v23, v22, &ptr);
    QT::QAbstractButton::setIcon(v16, (const QT::QIcon *)v23);
    QT::QIcon::~QIcon((QT::QIcon *)v23);
    if ( ptr )
    {
      *(_QWORD *)&v25 = 0;
      *(double *)si128.m128i_i64 = qfree(ptr, v23);
    }
    v19 = *((QT::QWidget **)a1 + 34);
    QT::QString::fromUtf8(&ptr, 10, "Add Filter", *(double *)si128.m128i_i64);
    QT::QWidget::setToolTip(v19, (const QT::QString *)&ptr);
    if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
      free(ptr);
    sub_1DDAB0(*((_QWORD *)a1 + 16), *((_QWORD *)a1 + 34));
  }
  QT::QBoxLayout::addWidget(a2, *((_QWORD *)a1 + 16), 0, 0);
  v20 = (QT::QLayout **)operator new(0xA8u);
  sub_3F8B70(v20, (__int64)a1);
  *((_QWORD *)a1 + 17) = v20;
  QT::QBoxLayout::addWidget(a2, v20, 0, 0);
  sub_3FC750((QT::QLineEdit **)a1);
  return QT::QBoxLayout::addWidget(a2, *((_QWORD *)a1 + 18), 0, 0);
}
