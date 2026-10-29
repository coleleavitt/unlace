__int64 __fastcall sub_1710E0(QT::QGroupBox **a1, QT::QWidget *a2)
{
  __int64 v3; // r13
  QT::QGroupBox *v4; // r13
  QT::QGroupBox *v5; // rdi
  QT::QGroupBox *v6; // r13
  QT::QGroupBox *v7; // rdi
  QT::QVBoxLayout *v8; // r13
  QT::QHBoxLayout *v9; // r13
  QT::QGroupBox *v10; // r13
  QT::QLabel *v11; // r13
  QT::QVBoxLayout *v12; // r13
  QT::QGroupBox *v13; // r13
  QT::QGroupBox *v14; // r13
  QT::QGroupBox *v15; // r13
  QT::QGroupBox *v16; // r13
  QT::QGroupBox *v17; // r13
  QT::QGroupBox *v18; // r13
  QT::QGroupBox *v19; // r13
  QT::QDialogButtonBox *v20; // r13
  QT::QGroupBox *v21; // rdi
  void *ptr[4]; // [rsp+0h] [rbp-68h] BYREF
  void *v24[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v25; // [rsp+30h] [rbp-38h]
  unsigned __int64 v26; // [rsp+38h] [rbp-30h]

  v26 = __readfsqword(0x28u);
  QT::QObject::objectName((QT::QObject *)v24);
  v3 = v25;
  if ( v24[0] && !_InterlockedSub((volatile signed __int32 *)v24[0], 1u) )
  {
    free(v24[0]);
    if ( v3 )
      goto LABEL_4;
LABEL_9:
    QT::QObject::setObjectName(a2, "AboutDialog", 11);
    goto LABEL_4;
  }
  if ( !v3 )
    goto LABEL_9;
LABEL_4:
  v24[0] = (void *)0x1210000018ELL;
  QT::QWidget::resize(a2, v24);
  v4 = (QT::QGroupBox *)operator new(0x28u);
  QT::QGroupBox::QGroupBox(v4, a2);
  *a1 = v4;
  QT::QObject::setObjectName(v4, "groupBox", 8);
  v5 = *a1;
  *(__m128i *)v24 = _mm_load_si128((const __m128i *)&xmmword_5DC2D0);
  QT::QWidget::setGeometry(v5, v24);
  v6 = (QT::QGroupBox *)operator new(0x28u);
  QT::QWidget::QWidget(v6, *a1, 0);
  a1[1] = v6;
  QT::QObject::setObjectName(v6, "widget", 6);
  v7 = a1[1];
  *(__m128i *)v24 = _mm_load_si128((const __m128i *)&xmmword_5DC2E0);
  QT::QWidget::setGeometry(v7, v24);
  v8 = (QT::QVBoxLayout *)operator new(0x20u);
  QT::QVBoxLayout::QVBoxLayout(v8, a1[1]);
  a1[2] = v8;
  QT::QObject::setObjectName(v8, "verticalLayout_2", 16);
  QT::QLayout::setContentsMargins(a1[2], 0, 0, 0, 0);
  v9 = (QT::QHBoxLayout *)operator new(0x20u);
  QT::QHBoxLayout::QHBoxLayout(v9);
  a1[3] = v9;
  QT::QBoxLayout::setSpacing(v9, 20);
  QT::QObject::setObjectName(a1[3], "horizontalLayout", 16);
  v10 = (QT::QGroupBox *)operator new(0x28u);
  sub_53B9D0(v10, a1[1]);
  a1[4] = v10;
  QT::QObject::setObjectName(v10, "icon", 4);
  v11 = a1[4];
  QT::QString::fromUtf8(ptr, 33, ":/IDAG/resources/appico_large.png");
  QT::QPixmap::QPixmap(v24, ptr, 0, 0);
  QT::QLabel::setPixmap(v11, (const QT::QPixmap *)v24);
  QT::QPixmap::~QPixmap((QT::QPixmap *)v24);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  QT::QBoxLayout::addWidget(a1[3], a1[4], 0, 0);
  v12 = (QT::QVBoxLayout *)operator new(0x20u);
  QT::QVBoxLayout::QVBoxLayout(v12);
  a1[5] = v12;
  QT::QObject::setObjectName(v12, "verticalLayout", 14);
  v13 = (QT::QGroupBox *)operator new(0x28u);
  sub_53B9D0(v13, a1[1]);
  a1[6] = v13;
  QT::QObject::setObjectName(v13, "product", 7);
  QT::QLabel::setAlignment(a1[6], 132);
  QT::QLabel::setTextInteractionFlags(a1[6], 1);
  QT::QBoxLayout::addWidget(a1[5], a1[6], 0, 0);
  v14 = (QT::QGroupBox *)operator new(0x28u);
  sub_53B9D0(v14, a1[1]);
  a1[7] = v14;
  QT::QObject::setObjectName(v14, "version", 7);
  QT::QLabel::setAlignment(a1[7], 132);
  QT::QLabel::setTextInteractionFlags(a1[7], 1);
  QT::QBoxLayout::addWidget(a1[5], a1[7], 0, 0);
  v15 = (QT::QGroupBox *)operator new(0x28u);
  sub_53B9D0(v15, a1[1]);
  a1[8] = v15;
  QT::QObject::setObjectName(v15, "copyright", 9);
  QT::QLabel::setAlignment(a1[8], 132);
  QT::QLabel::setTextInteractionFlags(a1[8], 1);
  QT::QBoxLayout::addWidget(a1[5], a1[8], 0, 0);
  QT::QBoxLayout::addLayout(a1[3], a1[5], 0);
  QT::QBoxLayout::addLayout(a1[2], a1[3], 0);
  v16 = (QT::QGroupBox *)operator new(0x28u);
  sub_53B9D0(v16, a1[1]);
  a1[9] = v16;
  QT::QObject::setObjectName(v16, "demo_limitations", 16);
  QT::QLabel::setAlignment(a1[9], 132);
  QT::QLabel::setWordWrap(a1[9], 1);
  QT::QLabel::setTextInteractionFlags(a1[9], 1);
  QT::QBoxLayout::addWidget(a1[2], a1[9], 0, 0);
  v17 = (QT::QGroupBox *)operator new(0x28u);
  sub_53B9D0(v17, a1[1]);
  a1[10] = v17;
  QT::QObject::setObjectName(v17, "license", 7);
  QT::QLabel::setAlignment(a1[10], 132);
  QT::QLabel::setWordWrap(a1[10], 1);
  QT::QLabel::setTextInteractionFlags(a1[10], 1);
  QT::QBoxLayout::addWidget(a1[2], a1[10], 0, 0);
  v18 = (QT::QGroupBox *)operator new(0x28u);
  sub_53B9D0(v18, a1[1]);
  a1[11] = v18;
  QT::QObject::setObjectName(v18, "comments", 8);
  QT::QLabel::setAlignment(a1[11], 132);
  QT::QLabel::setWordWrap(a1[11], 1);
  QT::QLabel::setTextInteractionFlags(a1[11], 1);
  QT::QBoxLayout::addWidget(a1[2], a1[11], 0, 0);
  v19 = (QT::QGroupBox *)operator new(0x28u);
  sub_53B9D0(v19, a1[1]);
  a1[12] = v19;
  QT::QObject::setObjectName(v19, "url", 3);
  QT::QLabel::setAlignment(a1[12], 132);
  QT::QLabel::setTextInteractionFlags(a1[12], 5);
  QT::QLabel::setOpenExternalLinks(a1[12], 1);
  QT::QBoxLayout::addWidget(a1[2], a1[12], 0, 0);
  v20 = (QT::QDialogButtonBox *)operator new(0x28u);
  QT::QDialogButtonBox::QDialogButtonBox(v20, a2);
  a1[13] = v20;
  QT::QObject::setObjectName(v20, "buttonBox", 9);
  v21 = a1[13];
  *(__m128i *)v24 = _mm_load_si128((const __m128i *)&xmmword_5DC2F0);
  QT::QWidget::setGeometry(v21, v24);
  QT::QDialogButtonBox::setStandardButtons(a1[13], 1024);
  QT::QDialogButtonBox::setCenterButtons(a1[13], 1);
  sub_16DAF0(a1, a2);
  return QT::QMetaObject::connectSlotsByName(a2, a2);
}
