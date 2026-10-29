__int64 __fastcall sub_3E8C40(QT::QWidget **a1, QT::QWidget *a2)
{
  __int64 v3; // r12
  int v4; // eax
  QT::QWidget *v5; // r12
  QT::QWidget *v6; // rdi
  QT::QVBoxLayout *v7; // r12
  QT::QHBoxLayout *v8; // r12
  QT::QGridLayout *v9; // r12
  QT::QPushButton *v10; // r12
  QT::QWidget *v11; // r12
  QT::QPushButton *v12; // r12
  QT::QWidget *v13; // r12
  QT::QPushButton *v14; // r12
  QT::QWidget *v15; // r12
  QT::QPushButton *v16; // r12
  QT::QWidget *v17; // r12
  __int64 v18; // rax
  __m128i si128; // xmm0
  QT::QWidget *v20; // rdi
  QT::QWidget *v21; // r12
  QT::QListWidget *v22; // r12
  QT::QCheckBox *v23; // r12
  void *ptr[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v26; // [rsp+10h] [rbp-38h]
  unsigned __int64 v27; // [rsp+18h] [rbp-30h]

  v27 = __readfsqword(0x28u);
  QT::QObject::objectName((QT::QObject *)ptr);
  v3 = v26;
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
  {
    free(ptr[0]);
    if ( v3 )
      goto LABEL_4;
LABEL_6:
    QT::QObject::setObjectName(a2, "TWelcomeForm", 12);
    goto LABEL_4;
  }
  if ( !v3 )
    goto LABEL_6;
LABEL_4:
  ptr[0] = (void *)0x14600000190LL;
  QT::QWidget::resize(a2, ptr);
  v4 = QT::QWidget::sizePolicy(a2);
  QT::QWidget::setSizePolicy(a2, v4 & 0x20000000 | 0xD50000u);
  v5 = (QT::QWidget *)operator new(0x28u);
  QT::QWidget::QWidget(v5, a2, 0);
  *a1 = v5;
  QT::QObject::setObjectName(v5, "layoutWidget", 12);
  v6 = *a1;
  *(__m128i *)ptr = _mm_load_si128((const __m128i *)&xmmword_5DD7F0);
  QT::QWidget::setGeometry(v6, ptr);
  v7 = (QT::QVBoxLayout *)operator new(0x20u);
  QT::QVBoxLayout::QVBoxLayout(v7, *a1);
  a1[1] = v7;
  QT::QObject::setObjectName(v7, "mainLayout", 10);
  QT::QLayout::setContentsMargins(a1[1], 0, 0, 0, 0);
  v8 = (QT::QHBoxLayout *)operator new(0x20u);
  QT::QHBoxLayout::QHBoxLayout(v8);
  a1[2] = v8;
  QT::QObject::setObjectName(v8, "horizontalLayout", 16);
  v9 = (QT::QGridLayout *)operator new(0x20u);
  QT::QGridLayout::QGridLayout(v9, nullptr);
  a1[3] = v9;
  QT::QObject::setObjectName(v9, "gridLayout", 10);
  v10 = (QT::QPushButton *)operator new(0x28u);
  QT::QPushButton::QPushButton(v10, *a1);
  a1[4] = v10;
  QT::QObject::setObjectName(v10, "btnNew", 6);
  QT::QGridLayout::addWidget(a1[3], a1[4], 0, 0, 1, 1, 0);
  v11 = (QT::QWidget *)operator new(0x28u);
  sub_53B9D0(v11, *a1);
  a1[5] = v11;
  QT::QObject::setObjectName(v11, "label", 5);
  QT::QGridLayout::addWidget(a1[3], a1[5], 0, 1, 1, 1, 0);
  v12 = (QT::QPushButton *)operator new(0x28u);
  QT::QPushButton::QPushButton(v12, *a1);
  a1[6] = v12;
  QT::QObject::setObjectName(v12, "btnGo", 5);
  QT::QGridLayout::addWidget(a1[3], a1[6], 1, 0, 1, 1, 0);
  v13 = (QT::QWidget *)operator new(0x28u);
  sub_53B9D0(v13, *a1);
  a1[7] = v13;
  QT::QObject::setObjectName(v13, "label_2", 7);
  QT::QGridLayout::addWidget(a1[3], a1[7], 1, 1, 1, 1, 0);
  v14 = (QT::QPushButton *)operator new(0x28u);
  QT::QPushButton::QPushButton(v14, *a1);
  a1[8] = v14;
  QT::QObject::setObjectName(v14, "btnPrev", 7);
  QT::QGridLayout::addWidget(a1[3], a1[8], 2, 0, 1, 1, 0);
  v15 = (QT::QWidget *)operator new(0x28u);
  sub_53B9D0(v15, *a1);
  a1[9] = v15;
  QT::QObject::setObjectName(v15, "label_3", 7);
  QT::QGridLayout::addWidget(a1[3], a1[9], 2, 1, 1, 1, 0);
  v16 = (QT::QPushButton *)operator new(0x28u);
  QT::QPushButton::QPushButton(v16, *a1);
  a1[10] = v16;
  QT::QObject::setObjectName(v16, "btnRemote", 9);
  QT::QGridLayout::addWidget(a1[3], a1[10], 3, 0, 1, 1, 0);
  v17 = (QT::QWidget *)operator new(0x28u);
  sub_53B9D0(v17, *a1);
  a1[11] = v17;
  QT::QObject::setObjectName(v17, "label_5", 7);
  QT::QGridLayout::addWidget(a1[3], a1[11], 3, 1, 1, 1, 0);
  QT::QBoxLayout::addLayout(a1[2], a1[3], 0);
  v18 = operator new(0x28u);
  si128 = _mm_load_si128((const __m128i *)&xmmword_5DC310);
  v20 = a1[2];
  *(_DWORD *)(v18 + 8) = 0;
  *(_DWORD *)(v18 + 20) = (_DWORD)&loc_170000;
  a1[12] = (QT::QWidget *)v18;
  *(_QWORD *)v18 = (char *)&`vtable for'QT::QSpacerItem + 16;
  *(__m128i *)(v18 + 24) = si128;
  *(_QWORD *)(v18 + 12) = 0x1400000028LL;
  (*(void (__fastcall **)(QT::QWidget *))(*(_QWORD *)v20 + 128LL))(v20);
  v21 = (QT::QWidget *)operator new(0x28u);
  sub_53B9D0(v21, *a1);
  a1[13] = v21;
  QT::QObject::setObjectName(v21, "label_4", 7);
  QT::QLabel::setAlignment(a1[13], 132);
  QT::QBoxLayout::addWidget(a1[2], a1[13], 0, 0);
  QT::QBoxLayout::addLayout(a1[1], a1[2], 0);
  v22 = (QT::QListWidget *)operator new(0x28u);
  QT::QListWidget::QListWidget(v22, *a1);
  a1[14] = v22;
  QT::QObject::setObjectName(v22, "listFiles", 9);
  QT::QBoxLayout::addWidget(a1[1], a1[14], 0, 0);
  v23 = (QT::QCheckBox *)operator new(0x28u);
  QT::QCheckBox::QCheckBox(v23, *a1);
  a1[15] = v23;
  QT::QObject::setObjectName(v23, "cbDontShow", 10);
  QT::QBoxLayout::addWidget(a1[1], a1[15], 0, 0);
  sub_3E8840(a1, a2);
  QT::QPushButton::setDefault(a1[8], (bool)&dword_0 + 1);
  return QT::QMetaObject::connectSlotsByName(a2, (QT::QObject *)((char *)&dword_0 + 1));
}
