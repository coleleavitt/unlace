__int64 __fastcall sub_4D49D0(__int64 a1, QT::QWidget *a2)
{
  void *v2; // r12
  __int64 v3; // r12
  QT::QComboBox *v4; // r12
  QT::QComboBox *v5; // r12
  int v6; // eax
  QT::QComboBox *v7; // r12
  int v8; // eax
  __int64 v9; // r12
  QT::QComboBox *v10; // r12
  QT::QCheckBox *v11; // r12
  QT::QCheckBox *v12; // r12
  QT::QPushButton *v13; // r12
  QT::QPushButton *v14; // r12
  QT::QGroupBox *v15; // r12
  QT::QTableWidget *v16; // r12
  QT::QPushButton *v17; // r12
  QT::QWidget *v18; // rdx
  QT::QWidget *v19; // rdx
  QT::QWidget *v20; // rdx
  QT::QWidget *v21; // rdx
  QT::QWidget *v22; // rdx
  QT::QWidget *v23; // rdx
  QT::QWidget *v24; // rdx
  QT::QWidget *v25; // rdx
  QT::QWidget *v26; // rdx
  void *ptr[7]; // [rsp+0h] [rbp-38h] BYREF

  ptr[3] = (void *)__readfsqword(0x28u);
  QT::QObject::objectName((QT::QObject *)ptr);
  v2 = ptr[2];
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
  {
    free(ptr[0]);
    if ( v2 )
      goto LABEL_4;
LABEL_6:
    QT::QObject::setObjectName(a2, "edit_filters_dialog_t", 21);
    goto LABEL_4;
  }
  if ( !v2 )
    goto LABEL_6;
LABEL_4:
  v3 = operator new(0x28u);
  sub_53B9D0(v3, a2);
  *(_QWORD *)a1 = v3;
  QT::QObject::setObjectName(v3, "labIf", 5);
  v4 = (QT::QComboBox *)operator new(0x28u);
  QT::QComboBox::QComboBox(v4, a2);
  *(_QWORD *)(a1 + 8) = v4;
  QT::QObject::setObjectName(v4, "comboColumn", 11);
  v5 = (QT::QComboBox *)operator new(0x28u);
  QT::QComboBox::QComboBox(v5, a2);
  *(_QWORD *)(a1 + 16) = v5;
  QT::QObject::setObjectName(v5, "comboCondition", 14);
  v6 = QT::QWidget::sizePolicy(*(QT::QWidget **)(a1 + 16));
  QT::QWidget::setSizePolicy(*(_QWORD *)(a1 + 16), v6 & 0x20000000);
  v7 = (QT::QComboBox *)operator new(0x28u);
  QT::QComboBox::QComboBox(v7, a2);
  *(_QWORD *)(a1 + 24) = v7;
  QT::QObject::setObjectName(v7, "comboText", 9);
  QT::QComboBox::setMinimumContentsLength(*(QT::QComboBox **)(a1 + 24), 35);
  QT::QComboBox::setSizeAdjustPolicy(*(_QWORD *)(a1 + 24), 1);
  v8 = QT::QWidget::sizePolicy(*(QT::QWidget **)(a1 + 24));
  QT::QWidget::setSizePolicy(*(_QWORD *)(a1 + 24), v8 & 0x20000000 | 0x70000u);
  QT::QComboBox::setEditable(*(QT::QComboBox **)(a1 + 24), 1);
  v9 = operator new(0x28u);
  sub_53B9D0(v9, a2);
  *(_QWORD *)(a1 + 32) = v9;
  QT::QObject::setObjectName(v9, "labThen", 7);
  v10 = (QT::QComboBox *)operator new(0x28u);
  QT::QComboBox::QComboBox(v10, a2);
  *(_QWORD *)(a1 + 40) = v10;
  QT::QObject::setObjectName(v10, "comboAction", 11);
  v11 = (QT::QCheckBox *)operator new(0x28u);
  QT::QCheckBox::QCheckBox(v11, a2);
  *(_QWORD *)(a1 + 48) = v11;
  QT::QObject::setObjectName(v11, "cbMatchCase", 11);
  v12 = (QT::QCheckBox *)operator new(0x28u);
  QT::QCheckBox::QCheckBox(v12, a2);
  *(_QWORD *)(a1 + 56) = v12;
  QT::QObject::setObjectName(v12, "cbRegExp", 8);
  v13 = (QT::QPushButton *)operator new(0x28u);
  QT::QPushButton::QPushButton(v13, a2);
  *(_QWORD *)(a1 + 64) = v13;
  QT::QObject::setObjectName(v13, "btnAdd", 6);
  v14 = (QT::QPushButton *)operator new(0x28u);
  QT::QPushButton::QPushButton(v14, a2);
  *(_QWORD *)(a1 + 72) = v14;
  QT::QObject::setObjectName(v14, "btnCancel", 9);
  v15 = (QT::QGroupBox *)operator new(0x28u);
  QT::QGroupBox::QGroupBox(v15, a2);
  *(_QWORD *)(a1 + 80) = v15;
  QT::QObject::setObjectName(v15, "groupFilters", 12);
  v16 = (QT::QTableWidget *)operator new(0x28u);
  QT::QTableWidget::QTableWidget(v16, *(QT::QWidget **)(a1 + 80));
  *(_QWORD *)(a1 + 88) = v16;
  QT::QObject::setObjectName(v16, "tableFilters", 12);
  QT::QTableView::setShowGrid(*(QT::QTableView **)(a1 + 88), 0);
  QT::QTableWidget::setRowCount(*(QT::QTableWidget **)(a1 + 88), 0);
  v17 = (QT::QPushButton *)operator new(0x28u);
  QT::QPushButton::QPushButton(v17, a2);
  *(_QWORD *)(a1 + 96) = v17;
  QT::QObject::setObjectName(v17, "btnReset", 8);
  QT::QWidget::setTabOrder(*(QT::QWidget **)(a1 + 8), *(QT::QWidget **)(a1 + 16), v18);
  QT::QWidget::setTabOrder(*(QT::QWidget **)(a1 + 16), *(QT::QWidget **)(a1 + 24), v19);
  QT::QWidget::setTabOrder(*(QT::QWidget **)(a1 + 24), *(QT::QWidget **)(a1 + 40), v20);
  QT::QWidget::setTabOrder(*(QT::QWidget **)(a1 + 40), *(QT::QWidget **)(a1 + 48), v21);
  QT::QWidget::setTabOrder(*(QT::QWidget **)(a1 + 48), *(QT::QWidget **)(a1 + 56), v22);
  QT::QWidget::setTabOrder(*(QT::QWidget **)(a1 + 56), *(QT::QWidget **)(a1 + 64), v23);
  QT::QWidget::setTabOrder(*(QT::QWidget **)(a1 + 64), *(QT::QWidget **)(a1 + 96), v24);
  QT::QWidget::setTabOrder(*(QT::QWidget **)(a1 + 96), *(QT::QWidget **)(a1 + 72), v25);
  QT::QWidget::setTabOrder(*(QT::QWidget **)(a1 + 72), *(QT::QWidget **)(a1 + 88), v26);
  sub_4D46B0((QT::QLabel **)a1, a2);
  return QT::QMetaObject::connectSlotsByName(a2, a2);
}
