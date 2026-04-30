__int64 __fastcall sub_37B3B0(QT::QWidget **a1, QT::QWidget *a2)
{
  __int64 v3; // r12
  QT::QWidget *v4; // r12
  QT::QWidget *v5; // rdi
  QT::QVBoxLayout *v6; // r12
  QT::QVBoxLayout *v7; // r12
  QT::QWidget *v8; // r12
  QT::QTableWidget *v9; // r12
  QT::QHBoxLayout *v10; // r12
  QT::QVBoxLayout *v11; // r12
  QT::QWidget *v12; // r12
  QT::QListWidget *v13; // r12
  QT::QVBoxLayout *v14; // r12
  QT::QPushButton *v15; // r12
  QT::QPushButton *v16; // r12
  QT::QVBoxLayout *v17; // r12
  QT::QWidget *v18; // r12
  QT::QListWidget *v19; // r12
  QT::QDialogButtonBox *v20; // r12
  void *ptr[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v23; // [rsp+10h] [rbp-38h]
  unsigned __int64 v24; // [rsp+18h] [rbp-30h]

  v24 = __readfsqword(0x28u);
  QT::QObject::objectName((QT::QObject *)ptr);
  v3 = v23;
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
  {
    free(ptr[0]);
    if ( v3 )
      goto LABEL_4;
  }
  else if ( v3 )
  {
    goto LABEL_4;
  }
  QT::QObject::setObjectName(a2, "TSegTransBox", 12);
LABEL_4:
  ptr[0] = (void *)0x1D4000001BBLL;
  QT::QWidget::resize(a2, ptr);
  v4 = (QT::QWidget *)operator new(0x28u);
  QT::QWidget::QWidget(v4, a2, 0);
  *a1 = v4;
  QT::QObject::setObjectName(v4, "widget", 6);
  v5 = *a1;
  *(__m128i *)ptr = _mm_load_si128((const __m128i *)&xmmword_5DD310);
  QT::QWidget::setGeometry(v5, ptr);
  v6 = (QT::QVBoxLayout *)operator new(0x20u);
  QT::QVBoxLayout::QVBoxLayout(v6, *a1);
  a1[1] = v6;
  QT::QObject::setObjectName(v6, "verticalLayout_5", 16);
  QT::QLayout::setContentsMargins(a1[1], 0, 0, 0, 0);
  v7 = (QT::QVBoxLayout *)operator new(0x20u);
  QT::QVBoxLayout::QVBoxLayout(v7);
  a1[2] = v7;
  QT::QObject::setObjectName(v7, "verticalLayout_4", 16);
  v8 = (QT::QWidget *)operator new(0x28u);
  sub_53B9D0(v8, *a1);
  a1[3] = v8;
  QT::QObject::setObjectName(v8, "label", 5);
  QT::QBoxLayout::addWidget(a1[2], a1[3], 0, 0);
  v9 = (QT::QTableWidget *)operator new(0x28u);
  QT::QTableWidget::QTableWidget(v9, *a1);
  a1[4] = v9;
  if ( (int)QT::QTableWidget::columnCount(v9) <= 2 )
    QT::QTableWidget::setColumnCount(a1[4], 3);
  QT::QObject::setObjectName(a1[4], "MainSeg", 7);
  QT::QTableWidget::setColumnCount(a1[4], 3);
  QT::QBoxLayout::addWidget(a1[2], a1[4], 0, 0);
  QT::QBoxLayout::addLayout(a1[1], a1[2], 0);
  v10 = (QT::QHBoxLayout *)operator new(0x20u);
  QT::QHBoxLayout::QHBoxLayout(v10);
  a1[5] = v10;
  QT::QObject::setObjectName(v10, "horizontalLayout", 16);
  v11 = (QT::QVBoxLayout *)operator new(0x20u);
  QT::QVBoxLayout::QVBoxLayout(v11);
  a1[6] = v11;
  QT::QObject::setObjectName(v11, "verticalLayout_2", 16);
  v12 = (QT::QWidget *)operator new(0x28u);
  sub_53B9D0(v12, *a1);
  a1[7] = v12;
  QT::QObject::setObjectName(v12, "label_2", 7);
  QT::QBoxLayout::addWidget(a1[6], a1[7], 0, 0);
  v13 = (QT::QListWidget *)operator new(0x28u);
  QT::QListWidget::QListWidget(v13, *a1);
  a1[8] = v13;
  QT::QObject::setObjectName(v13, "Seg", 3);
  QT::QBoxLayout::addWidget(a1[6], a1[8], 0, 0);
  QT::QBoxLayout::addLayout(a1[5], a1[6], 0);
  v14 = (QT::QVBoxLayout *)operator new(0x20u);
  QT::QVBoxLayout::QVBoxLayout(v14);
  a1[9] = v14;
  QT::QObject::setObjectName(v14, "verticalLayout", 14);
  v15 = (QT::QPushButton *)operator new(0x28u);
  QT::QPushButton::QPushButton(v15, *a1);
  a1[10] = v15;
  QT::QObject::setObjectName(v15, "btnAdd", 6);
  QT::QWidget::setMinimumSize(a1[10], 31, 30);
  QT::QWidget::setMaximumSize(a1[10], 31, 30);
  QT::QBoxLayout::addWidget(a1[9], a1[10], 0, 0);
  v16 = (QT::QPushButton *)operator new(0x28u);
  QT::QPushButton::QPushButton(v16, *a1);
  a1[11] = v16;
  QT::QObject::setObjectName(v16, "btnDel", 6);
  QT::QWidget::setMinimumSize(a1[11], 31, 30);
  QT::QWidget::setMaximumSize(a1[11], 31, 30);
  QT::QBoxLayout::addWidget(a1[9], a1[11], 0, 0);
  QT::QBoxLayout::addLayout(a1[5], a1[9], 0);
  v17 = (QT::QVBoxLayout *)operator new(0x20u);
  QT::QVBoxLayout::QVBoxLayout(v17);
  a1[12] = v17;
  QT::QObject::setObjectName(v17, "verticalLayout_3", 16);
  v18 = (QT::QWidget *)operator new(0x28u);
  sub_53B9D0(v18, *a1);
  a1[13] = v18;
  QT::QObject::setObjectName(v18, "label_3", 7);
  QT::QBoxLayout::addWidget(a1[12], a1[13], 0, 0);
  v19 = (QT::QListWidget *)operator new(0x28u);
  QT::QListWidget::QListWidget(v19, *a1);
  a1[14] = v19;
  QT::QObject::setObjectName(v19, "Map", 3);
  QT::QBoxLayout::addWidget(a1[12], a1[14], 0, 0);
  QT::QBoxLayout::addLayout(a1[5], a1[12], 0);
  QT::QBoxLayout::addLayout(a1[1], a1[5], 0);
  v20 = (QT::QDialogButtonBox *)operator new(0x28u);
  QT::QDialogButtonBox::QDialogButtonBox(v20, *a1);
  a1[15] = v20;
  QT::QObject::setObjectName(v20, "buttonBox", 9);
  QT::QDialogButtonBox::setStandardButtons(a1[15], 20972544);
  QT::QDialogButtonBox::setCenterButtons(a1[15], 1);
  QT::QBoxLayout::addWidget(a1[1], a1[15], 0, 0);
  sub_37B090(a1, a2);
  return QT::QMetaObject::connectSlotsByName(a2, a2);
}
