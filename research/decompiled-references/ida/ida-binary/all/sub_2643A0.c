__int64 __fastcall sub_2643A0(__int64 *a1, QT::QWidget *a2)
{
  __int64 v3; // r12
  __int64 v4; // r12
  QT::QWidget *v5; // rdi
  QT::QVBoxLayout *v6; // r12
  QT::QGroupBox *v7; // r12
  __int64 v8; // r12
  __int64 v9; // rdi
  QT::QVBoxLayout *v10; // r12
  __int64 v11; // r12
  __int64 v12; // r12
  __int64 v13; // r12
  __int64 v14; // r12
  QT::QDialogButtonBox *v15; // r12
  void *ptr[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v18; // [rsp+10h] [rbp-38h]
  unsigned __int64 v19; // [rsp+18h] [rbp-30h]

  v19 = __readfsqword(0x28u);
  QT::QObject::objectName((QT::QObject *)ptr);
  v3 = v18;
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
  {
    free(ptr[0]);
    if ( v3 )
      goto LABEL_4;
LABEL_6:
    QT::QObject::setObjectName(a2, "TDemoBox", 8);
    goto LABEL_4;
  }
  if ( !v3 )
    goto LABEL_6;
LABEL_4:
  ptr[0] = (void *)0x13F000001ADLL;
  QT::QWidget::resize(a2, ptr);
  v4 = operator new(0x28u);
  QT::QWidget::QWidget(v4, a2, 0);
  *a1 = v4;
  QT::QObject::setObjectName(v4, "widget", 6);
  v5 = (QT::QWidget *)*a1;
  *(__m128i *)ptr = _mm_load_si128((const __m128i *)&xmmword_5DCBF0);
  QT::QWidget::setGeometry(v5, ptr);
  v6 = (QT::QVBoxLayout *)operator new(0x20u);
  QT::QVBoxLayout::QVBoxLayout(v6, (QT::QWidget *)*a1);
  a1[1] = (__int64)v6;
  QT::QObject::setObjectName(v6, "mainLayout", 10);
  QT::QLayout::setContentsMargins((QT::QLayout *)a1[1], 0, 0, 0, 0);
  v7 = (QT::QGroupBox *)operator new(0x28u);
  QT::QGroupBox::QGroupBox(v7, (QT::QWidget *)*a1);
  a1[2] = (__int64)v7;
  QT::QObject::setObjectName(v7, "groupBox", 8);
  v8 = operator new(0x28u);
  QT::QWidget::QWidget(v8, a1[2], 0);
  a1[3] = v8;
  QT::QObject::setObjectName(v8, "widget1", 7);
  v9 = a1[3];
  *(__m128i *)ptr = _mm_load_si128((const __m128i *)&xmmword_5DCC00);
  QT::QWidget::setGeometry(v9, ptr);
  v10 = (QT::QVBoxLayout *)operator new(0x20u);
  QT::QVBoxLayout::QVBoxLayout(v10, (QT::QWidget *)a1[3]);
  a1[4] = (__int64)v10;
  QT::QObject::setObjectName(v10, "groupLayout", 11);
  QT::QLayout::setContentsMargins((QT::QLayout *)a1[4], 0, 0, 0, 0);
  v11 = operator new(0x28u);
  sub_53B9D0(v11, a1[3]);
  a1[5] = v11;
  QT::QObject::setObjectName(v11, "label", 5);
  QT::QLabel::setAlignment(a1[5], 132);
  QT::QBoxLayout::addWidget(a1[4], a1[5], 0, 0);
  v12 = operator new(0x28u);
  sub_53B9D0(v12, a1[3]);
  a1[6] = v12;
  QT::QObject::setObjectName(v12, "label_2", 7);
  QT::QLabel::setAlignment(a1[6], 132);
  QT::QBoxLayout::addWidget(a1[4], a1[6], 0, 0);
  v13 = operator new(0x28u);
  sub_53B9D0(v13, a1[3]);
  a1[7] = v13;
  QT::QObject::setObjectName(v13, "label_3", 7);
  QT::QLabel::setAlignment(a1[7], 132);
  QT::QBoxLayout::addWidget(a1[4], a1[7], 0, 0);
  v14 = operator new(0x28u);
  sub_53B9D0(v14, a1[3]);
  a1[8] = v14;
  QT::QObject::setObjectName(v14, "label_4", 7);
  QT::QLabel::setAlignment(a1[8], 132);
  QT::QLabel::setOpenExternalLinks((QT::QLabel *)a1[8], 1);
  QT::QBoxLayout::addWidget(a1[4], a1[8], 0, 0);
  QT::QBoxLayout::addWidget(a1[1], a1[2], 0, 0);
  v15 = (QT::QDialogButtonBox *)operator new(0x28u);
  QT::QDialogButtonBox::QDialogButtonBox(v15, (QT::QWidget *)*a1);
  a1[9] = (__int64)v15;
  QT::QObject::setObjectName(v15, "buttonBox", 9);
  QT::QDialogButtonBox::setStandardButtons(a1[9], 1024);
  QT::QDialogButtonBox::setCenterButtons((QT::QDialogButtonBox *)a1[9], 1);
  QT::QBoxLayout::addWidget(a1[1], a1[9], 0, 0);
  sub_264130(a1, a2);
  return QT::QMetaObject::connectSlotsByName(a2, a2);
}
