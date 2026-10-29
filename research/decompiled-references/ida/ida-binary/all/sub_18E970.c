__int64 __fastcall sub_18E970(__int64 a1, QT::QWidget *a2)
{
  void *v2; // r13
  int v3; // eax
  QT::QVBoxLayout *v4; // r12
  QT::QVBoxLayout *v5; // r12
  QT::QGridLayout *v6; // r12
  __int64 v7; // r12
  __int64 v8; // r13
  QT::QLineEdit *v9; // r13
  QT::QLineEdit *v10; // r14
  int v11; // eax
  __int64 v12; // r13
  QT::QLineEdit *v13; // r13
  QT::QLineEdit *v14; // r13
  __int64 v15; // r13
  int v16; // eax
  __int64 v17; // r12
  QT::QLineEdit *v18; // r12
  __int64 v19; // r12
  QT::QLineEdit *v20; // r12
  QT::QHBoxLayout *v21; // r12
  QT::QHBoxLayout *v22; // r12
  QT::QCheckBox *v23; // r12
  QT::QCheckBox *v24; // r12
  QT::QCheckBox *v25; // r12
  QT::QFormLayout *v26; // r12
  __int64 v27; // r12
  QT::QLineEdit *v28; // r12
  __int64 v29; // r12
  QT::QLineEdit *v30; // r12
  __int64 v31; // r12
  QT::QLineEdit *v32; // r12
  void *ptr[9]; // [rsp+0h] [rbp-48h] BYREF

  ptr[3] = (void *)__readfsqword(0x28u);
  QT::QObject::objectName((QT::QObject *)ptr);
  v2 = ptr[2];
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
  {
    free(ptr[0]);
    if ( v2 )
      goto LABEL_4;
LABEL_6:
    QT::QObject::setObjectName(a2, "data_container", 14);
    goto LABEL_4;
  }
  if ( !v2 )
    goto LABEL_6;
LABEL_4:
  ptr[0] = (void *)0xBE00000175LL;
  QT::QWidget::resize(a2, ptr);
  v3 = QT::QWidget::sizePolicy(a2);
  QT::QWidget::setSizePolicy(a2, v3 & 0x20000000 | 0x50000u);
  QT::QWidget::setMinimumSize(a2, 0, 190);
  v4 = (QT::QVBoxLayout *)operator new(0x20u);
  QT::QVBoxLayout::QVBoxLayout(v4, a2);
  *(_QWORD *)a1 = v4;
  QT::QObject::setObjectName(v4, "verticalLayout_5", 16);
  v5 = (QT::QVBoxLayout *)operator new(0x20u);
  QT::QVBoxLayout::QVBoxLayout(v5);
  *(_QWORD *)(a1 + 8) = v5;
  QT::QObject::setObjectName(v5, "verticalLayout", 14);
  v6 = (QT::QGridLayout *)operator new(0x20u);
  QT::QGridLayout::QGridLayout(v6, nullptr);
  *(_QWORD *)(a1 + 16) = v6;
  QT::QObject::setObjectName(v6, "gridLayout", 10);
  v7 = operator new(0x28u);
  sub_53B9D0(v7, a2);
  *(_QWORD *)(a1 + 24) = v7;
  QT::QObject::setObjectName(v7, "label_2", 7);
  LODWORD(v7) = QT::QWidget::sizePolicy(*(QT::QWidget **)(a1 + 24)) & 0x20000000 | 0x500000;
  QT::QWidget::setSizePolicy(*(_QWORD *)(a1 + 24), (unsigned int)v7);
  QT::QGridLayout::addWidget(*(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 24), 1, 2, 1, 1, 0);
  v8 = operator new(0x28u);
  sub_53B9D0(v8, a2);
  *(_QWORD *)(a1 + 32) = v8;
  QT::QObject::setObjectName(v8, "Int8", 4);
  LODWORD(v7) = QT::QWidget::sizePolicy(*(QT::QWidget **)(a1 + 32)) & 0x20000000 | v7 & 0xDFFFFFFF;
  QT::QWidget::setSizePolicy(*(_QWORD *)(a1 + 32), (unsigned int)v7);
  QT::QGridLayout::addWidget(*(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 32), 0, 0, 1, 1, 0);
  v9 = (QT::QLineEdit *)operator new(0x28u);
  QT::QLineEdit::QLineEdit(v9, a2);
  *(_QWORD *)(a1 + 40) = v9;
  QT::QObject::setObjectName(v9, "leInt64", 7);
  LODWORD(v9) = QT::QWidget::sizePolicy(*(QT::QWidget **)(a1 + 40)) & 0x20000000 | 0x70000;
  QT::QWidget::setSizePolicy(*(_QWORD *)(a1 + 40), (unsigned int)v9);
  QT::QLineEdit::setReadOnly(*(QT::QLineEdit **)(a1 + 40), 1);
  QT::QGridLayout::addWidget(*(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 40), 1, 3, 1, 1, 0);
  v10 = (QT::QLineEdit *)operator new(0x28u);
  QT::QLineEdit::QLineEdit(v10, a2);
  *(_QWORD *)(a1 + 48) = v10;
  QT::QObject::setObjectName(v10, "leInt32", 7);
  v11 = QT::QWidget::sizePolicy(*(QT::QWidget **)(a1 + 48));
  QT::QWidget::setSizePolicy(*(_QWORD *)(a1 + 48), v11 & 0x20000000 | (unsigned int)v9 & 0xDFFFFFFF);
  QT::QLineEdit::setReadOnly(*(QT::QLineEdit **)(a1 + 48), 1);
  QT::QGridLayout::addWidget(*(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 48), 1, 1, 1, 1, 0);
  v12 = operator new(0x28u);
  sub_53B9D0(v12, a2);
  *(_QWORD *)(a1 + 56) = v12;
  QT::QObject::setObjectName(v12, "label", 5);
  LODWORD(v7) = QT::QWidget::sizePolicy(*(QT::QWidget **)(a1 + 56)) & 0x20000000 | v7 & 0xDFFFFFFF;
  QT::QWidget::setSizePolicy(*(_QWORD *)(a1 + 56), (unsigned int)v7);
  QT::QGridLayout::addWidget(*(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 56), 1, 0, 1, 1, 0);
  v13 = (QT::QLineEdit *)operator new(0x28u);
  QT::QLineEdit::QLineEdit(v13, a2);
  *(_QWORD *)(a1 + 64) = v13;
  QT::QObject::setObjectName(v13, "leInt8", 6);
  QT::QLineEdit::setReadOnly(*(QT::QLineEdit **)(a1 + 64), 1);
  QT::QGridLayout::addWidget(*(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 64), 0, 1, 1, 1, 0);
  v14 = (QT::QLineEdit *)operator new(0x28u);
  QT::QLineEdit::QLineEdit(v14, a2);
  *(_QWORD *)(a1 + 72) = v14;
  QT::QObject::setObjectName(v14, "leInt16", 7);
  QT::QLineEdit::setReadOnly(*(QT::QLineEdit **)(a1 + 72), 1);
  QT::QGridLayout::addWidget(*(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 72), 0, 3, 1, 1, 0);
  v15 = operator new(0x28u);
  sub_53B9D0(v15, a2);
  *(_QWORD *)(a1 + 80) = v15;
  QT::QObject::setObjectName(v15, "label_5", 7);
  v16 = QT::QWidget::sizePolicy(*(QT::QWidget **)(a1 + 80));
  QT::QWidget::setSizePolicy(*(_QWORD *)(a1 + 80), v16 & 0x20000000 | (unsigned int)v7 & 0xDFFFFFFF);
  QT::QGridLayout::addWidget(*(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 80), 0, 2, 1, 1, 0);
  v17 = operator new(0x28u);
  sub_53B9D0(v17, a2);
  *(_QWORD *)(a1 + 88) = v17;
  QT::QObject::setObjectName(v17, "label_6", 7);
  QT::QGridLayout::addWidget(*(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 88), 2, 0, 1, 1, 0);
  v18 = (QT::QLineEdit *)operator new(0x28u);
  QT::QLineEdit::QLineEdit(v18, a2);
  *(_QWORD *)(a1 + 96) = v18;
  QT::QObject::setObjectName(v18, "leFloat", 7);
  QT::QLineEdit::setReadOnly(*(QT::QLineEdit **)(a1 + 96), 1);
  QT::QGridLayout::addWidget(*(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 96), 2, 1, 1, 1, 0);
  v19 = operator new(0x28u);
  sub_53B9D0(v19, a2);
  *(_QWORD *)(a1 + 104) = v19;
  QT::QObject::setObjectName(v19, "label_7", 7);
  QT::QGridLayout::addWidget(*(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 104), 2, 2, 1, 1, 0);
  v20 = (QT::QLineEdit *)operator new(0x28u);
  QT::QLineEdit::QLineEdit(v20, a2);
  *(_QWORD *)(a1 + 112) = v20;
  QT::QObject::setObjectName(v20, "leDouble", 8);
  QT::QLineEdit::setReadOnly(*(QT::QLineEdit **)(a1 + 112), 1);
  QT::QGridLayout::addWidget(*(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 112), 2, 3, 1, 1, 0);
  QT::QBoxLayout::addLayout(*(QT::QBoxLayout **)(a1 + 8), *(QT::QLayout **)(a1 + 16), 0);
  v21 = (QT::QHBoxLayout *)operator new(0x20u);
  QT::QHBoxLayout::QHBoxLayout(v21);
  *(_QWORD *)(a1 + 120) = v21;
  QT::QObject::setObjectName(v21, "horizontalLayout_2", 18);
  QT::QBoxLayout::addLayout(*(QT::QBoxLayout **)(a1 + 8), *(QT::QLayout **)(a1 + 120), 0);
  v22 = (QT::QHBoxLayout *)operator new(0x20u);
  QT::QHBoxLayout::QHBoxLayout(v22);
  *(_QWORD *)(a1 + 128) = v22;
  QT::QObject::setObjectName(v22, "horizontalLayout", 16);
  v23 = (QT::QCheckBox *)operator new(0x28u);
  QT::QCheckBox::QCheckBox(v23, a2);
  *(_QWORD *)(a1 + 136) = v23;
  QT::QObject::setObjectName(v23, "cbSigned", 8);
  QT::QBoxLayout::addWidget(*(_QWORD *)(a1 + 128), *(_QWORD *)(a1 + 136), 0, 0);
  v24 = (QT::QCheckBox *)operator new(0x28u);
  QT::QCheckBox::QCheckBox(v24, a2);
  *(_QWORD *)(a1 + 144) = v24;
  QT::QObject::setObjectName(v24, "cbHex", 5);
  QT::QBoxLayout::addWidget(*(_QWORD *)(a1 + 128), *(_QWORD *)(a1 + 144), 0, 0);
  v25 = (QT::QCheckBox *)operator new(0x28u);
  QT::QCheckBox::QCheckBox(v25, a2);
  *(_QWORD *)(a1 + 152) = v25;
  QT::QObject::setObjectName(v25, "cbLittleEndian", 14);
  QT::QBoxLayout::addWidget(*(_QWORD *)(a1 + 128), *(_QWORD *)(a1 + 152), 0, 0);
  QT::QBoxLayout::addLayout(*(QT::QBoxLayout **)(a1 + 8), *(QT::QLayout **)(a1 + 128), 0);
  QT::QBoxLayout::addLayout(*(QT::QBoxLayout **)a1, *(QT::QLayout **)(a1 + 8), 0);
  v26 = (QT::QFormLayout *)operator new(0x20u);
  QT::QFormLayout::QFormLayout(v26, nullptr);
  *(_QWORD *)(a1 + 160) = v26;
  QT::QObject::setObjectName(v26, "formLayout", 10);
  v27 = operator new(0x28u);
  sub_53B9D0(v27, a2);
  *(_QWORD *)(a1 + 168) = v27;
  QT::QObject::setObjectName(v27, "label_3", 7);
  QT::QFormLayout::setWidget(*(_QWORD *)(a1 + 160), 1, 0, *(_QWORD *)(a1 + 168));
  v28 = (QT::QLineEdit *)operator new(0x28u);
  QT::QLineEdit::QLineEdit(v28, a2);
  *(_QWORD *)(a1 + 176) = v28;
  QT::QObject::setObjectName(v28, "leAscii", 7);
  QT::QLineEdit::setReadOnly(*(QT::QLineEdit **)(a1 + 176), 1);
  QT::QFormLayout::setWidget(*(_QWORD *)(a1 + 160), 1, 1, *(_QWORD *)(a1 + 176));
  v29 = operator new(0x28u);
  sub_53B9D0(v29, a2);
  *(_QWORD *)(a1 + 184) = v29;
  QT::QObject::setObjectName(v29, "label_4", 7);
  QT::QFormLayout::setWidget(*(_QWORD *)(a1 + 160), 2, 0, *(_QWORD *)(a1 + 184));
  v30 = (QT::QLineEdit *)operator new(0x28u);
  QT::QLineEdit::QLineEdit(v30, a2);
  *(_QWORD *)(a1 + 192) = v30;
  QT::QObject::setObjectName(v30, "leUTF8", 6);
  QT::QLineEdit::setReadOnly(*(QT::QLineEdit **)(a1 + 192), 1);
  QT::QFormLayout::setWidget(*(_QWORD *)(a1 + 160), 2, 1, *(_QWORD *)(a1 + 192));
  v31 = operator new(0x28u);
  sub_53B9D0(v31, a2);
  *(_QWORD *)(a1 + 200) = v31;
  QT::QObject::setObjectName(v31, "label_8", 7);
  QT::QFormLayout::setWidget(*(_QWORD *)(a1 + 160), 3, 0, *(_QWORD *)(a1 + 200));
  v32 = (QT::QLineEdit *)operator new(0x28u);
  QT::QLineEdit::QLineEdit(v32, a2);
  *(_QWORD *)(a1 + 208) = v32;
  QT::QObject::setObjectName(v32, "leUTF16", 7);
  QT::QLineEdit::setReadOnly(*(QT::QLineEdit **)(a1 + 208), 1);
  QT::QFormLayout::setWidget(*(_QWORD *)(a1 + 160), 3, 1, *(_QWORD *)(a1 + 208));
  QT::QBoxLayout::addLayout(*(QT::QBoxLayout **)a1, *(QT::QLayout **)(a1 + 160), 0);
  sub_18E500((_QWORD *)a1, a2);
  return QT::QMetaObject::connectSlotsByName(a2, a2);
}
