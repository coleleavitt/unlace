__int64 __fastcall sub_2FCA60(QT::QVBoxLayout **a1, QT::QWidget *a2)
{
  void *v2; // r12
  QT::QVBoxLayout *v3; // r12
  QT::QVBoxLayout *v4; // r12
  QT::QListWidget *v5; // r12
  int v6; // eax
  QT::QVBoxLayout *v7; // r12
  QT::QHBoxLayout *v8; // r12
  QT::QHBoxLayout *v9; // r12
  QT::QGridLayout *v10; // r12
  QT::QVBoxLayout *v11; // r12
  QT::QVBoxLayout *v12; // r12
  QT::QLineEdit *v13; // r12
  QT::QLineEdit *v14; // r12
  QT::QGroupBox *v15; // r12
  QT::QVBoxLayout *v16; // r12
  QT::QCheckBox *v17; // r12
  QT::QCheckBox *v18; // r12
  QT::QVBoxLayout *v19; // r12
  QT::QHBoxLayout *v20; // r12
  QT::QPushButton *v21; // r12
  QT::QPushButton *v22; // r13
  int v23; // eax
  QT::QHBoxLayout *v24; // r12
  QT::QGroupBox *v25; // r12
  QT::QGridLayout *v26; // r12
  QT::QCheckBox *v27; // r12
  QT::QCheckBox *v28; // r12
  QT::QCheckBox *v29; // r12
  QT::QCheckBox *v30; // r12
  QT::QCheckBox *v31; // r12
  QT::QCheckBox *v32; // r12
  QT::QCheckBox *v33; // r12
  QT::QCheckBox *v34; // r12
  QT::QCheckBox *v35; // r12
  QT::QDialogButtonBox *v36; // r12
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
    QT::QObject::setObjectName(a2, "LoadFileDialog", 14);
    goto LABEL_4;
  }
  if ( !v2 )
    goto LABEL_6;
LABEL_4:
  QT::QWidget::setWindowModality(a2, 0);
  v3 = (QT::QVBoxLayout *)operator new(0x20u);
  QT::QVBoxLayout::QVBoxLayout(v3, a2);
  *a1 = v3;
  QT::QBoxLayout::setSpacing(v3, 6);
  QT::QObject::setObjectName(*a1, "mainLayout", 10);
  v4 = (QT::QVBoxLayout *)operator new(0x28u);
  sub_53B9D0(v4, a2);
  a1[1] = v4;
  QT::QObject::setObjectName(v4, "filenameLabel", 13);
  QT::QBoxLayout::addWidget(*a1, a1[1], 0, 0);
  v5 = (QT::QListWidget *)operator new(0x28u);
  QT::QListWidget::QListWidget(v5, a2);
  a1[2] = v5;
  QT::QObject::setObjectName(v5, "loaderList", 10);
  v6 = QT::QWidget::sizePolicy(a1[2]);
  QT::QWidget::setSizePolicy(a1[2], v6 & 0x20000000 | 0x770000u);
  QT::QWidget::setMaximumHeight(a1[2], 80);
  QT::QAbstractItemView::setAutoScroll(a1[2], 0);
  QT::QBoxLayout::addWidget(*a1, a1[2], 0, 0);
  v7 = (QT::QVBoxLayout *)operator new(0x28u);
  sub_53B9D0(v7, a2);
  a1[3] = v7;
  QT::QObject::setObjectName(v7, "processorTypeLabel", 18);
  QT::QBoxLayout::addWidget(*a1, a1[3], 0, 0);
  v8 = (QT::QHBoxLayout *)operator new(0x20u);
  QT::QHBoxLayout::QHBoxLayout(v8);
  a1[4] = v8;
  QT::QObject::setObjectName(v8, "processorsLayout", 16);
  QT::QBoxLayout::addLayout(*a1, a1[4], 0);
  v9 = (QT::QHBoxLayout *)operator new(0x20u);
  QT::QHBoxLayout::QHBoxLayout(v9);
  a1[5] = v9;
  QT::QObject::setObjectName(v9, "firstOptionsLayout", 18);
  v10 = (QT::QGridLayout *)operator new(0x20u);
  QT::QGridLayout::QGridLayout(v10, nullptr);
  a1[6] = v10;
  QT::QObject::setObjectName(v10, "loadingGridLayout", 17);
  v11 = (QT::QVBoxLayout *)operator new(0x28u);
  sub_53B9D0(v11, a2);
  a1[7] = v11;
  QT::QObject::setObjectName(v11, "label_2", 7);
  QT::QGridLayout::addWidget(a1[6], a1[7], 0, 0, 1, 1, 0);
  v12 = (QT::QVBoxLayout *)operator new(0x28u);
  sub_53B9D0(v12, a2);
  a1[8] = v12;
  QT::QObject::setObjectName(v12, "label_3", 7);
  QT::QGridLayout::addWidget(a1[6], a1[8], 1, 0, 1, 1, 0);
  v13 = (QT::QLineEdit *)operator new(0x28u);
  QT::QLineEdit::QLineEdit(v13, a2);
  a1[9] = v13;
  QT::QObject::setObjectName(v13, "segmentEdit", 11);
  QT::QWidget::setMinimumSize(a1[9], 100, 0);
  QT::QGridLayout::addWidget(a1[6], a1[9], 0, 1, 1, 1, 0);
  v14 = (QT::QLineEdit *)operator new(0x28u);
  QT::QLineEdit::QLineEdit(v14, a2);
  a1[10] = v14;
  QT::QObject::setObjectName(v14, "offsetEdit", 10);
  QT::QWidget::setMinimumSize(a1[10], 100, 0);
  QT::QGridLayout::addWidget(a1[6], a1[10], 1, 1, 1, 1, 0);
  QT::QBoxLayout::addLayout(a1[5], a1[6], 0);
  v15 = (QT::QGroupBox *)operator new(0x28u);
  QT::QGroupBox::QGroupBox(v15, a2);
  a1[11] = v15;
  QT::QObject::setObjectName(v15, "analysisGroup", 13);
  v16 = (QT::QVBoxLayout *)operator new(0x20u);
  QT::QVBoxLayout::QVBoxLayout(v16, a1[11]);
  a1[12] = v16;
  QT::QObject::setObjectName(v16, "verticalLayout_5", 16);
  v17 = (QT::QCheckBox *)operator new(0x28u);
  QT::QCheckBox::QCheckBox(v17, a1[11]);
  a1[13] = v17;
  QT::QObject::setObjectName(v17, "analysisCheck", 13);
  QT::QBoxLayout::addWidget(a1[12], a1[13], 0, 0);
  v18 = (QT::QCheckBox *)operator new(0x28u);
  QT::QCheckBox::QCheckBox(v18, a1[11]);
  a1[14] = v18;
  QT::QObject::setObjectName(v18, "analysisIndicatorCheck", 22);
  QT::QBoxLayout::addWidget(a1[12], a1[14], 0, 0);
  QT::QBoxLayout::addWidget(a1[5], a1[11], 0, 0);
  v19 = (QT::QVBoxLayout *)operator new(0x20u);
  QT::QVBoxLayout::QVBoxLayout(v19);
  a1[15] = v19;
  QT::QObject::setObjectName(v19, "buttonOptionsLayout", 19);
  v20 = (QT::QHBoxLayout *)operator new(0x20u);
  QT::QHBoxLayout::QHBoxLayout(v20);
  a1[16] = v20;
  QT::QObject::setObjectName(v20, "kernelOptionsLayout", 19);
  v21 = (QT::QPushButton *)operator new(0x28u);
  QT::QPushButton::QPushButton(v21, a2);
  a1[17] = v21;
  QT::QObject::setObjectName(v21, "kernelOptButton", 15);
  LODWORD(v21) = QT::QWidget::sizePolicy(a1[17]) & 0x20000000 | 0x10000;
  QT::QWidget::setSizePolicy(a1[17], (unsigned int)v21);
  QT::QBoxLayout::addWidget(a1[16], a1[17], 0, 0);
  QT::QBoxLayout::addLayout(a1[15], a1[16], 0);
  v22 = (QT::QPushButton *)operator new(0x28u);
  QT::QPushButton::QPushButton(v22, a2);
  a1[18] = v22;
  QT::QObject::setObjectName(v22, "processorOptionsButton", 22);
  v23 = QT::QWidget::sizePolicy(a1[18]);
  QT::QWidget::setSizePolicy(a1[18], v23 & 0x20000000 | (unsigned int)v21 & 0xDFFFFFFF);
  QT::QBoxLayout::addWidget(a1[15], a1[18], 0, 0);
  QT::QBoxLayout::addLayout(a1[5], a1[15], 0);
  QT::QBoxLayout::addLayout(*a1, a1[5], 0);
  v24 = (QT::QHBoxLayout *)operator new(0x20u);
  QT::QHBoxLayout::QHBoxLayout(v24);
  a1[19] = v24;
  QT::QObject::setObjectName(v24, "secondOptionsLayout", 19);
  v25 = (QT::QGroupBox *)operator new(0x28u);
  QT::QGroupBox::QGroupBox(v25, a2);
  a1[20] = v25;
  QT::QObject::setObjectName(v25, "optionsGroup", 12);
  QT::QWidget::setMinimumSize(a1[20], 0, 0);
  v26 = (QT::QGridLayout *)operator new(0x20u);
  QT::QGridLayout::QGridLayout(v26, a1[20]);
  a1[21] = v26;
  QT::QObject::setObjectName(v26, "secondGridLayout", 16);
  QT::QGridLayout::setVerticalSpacing(a1[21], 0);
  v27 = (QT::QCheckBox *)operator new(0x28u);
  QT::QCheckBox::QCheckBox(v27, a1[20]);
  a1[22] = v27;
  QT::QObject::setObjectName(v27, "loadingOptionsCheck", 19);
  QT::QGridLayout::addWidget(a1[21], a1[22], 0, 0, 1, 1, 0);
  v28 = (QT::QCheckBox *)operator new(0x28u);
  QT::QCheckBox::QCheckBox(v28, a1[20]);
  a1[23] = v28;
  QT::QObject::setObjectName(v28, "fillSegmentGapsCheck", 20);
  QT::QGridLayout::addWidget(a1[21], a1[23], 1, 0, 1, 1, 0);
  v29 = (QT::QCheckBox *)operator new(0x28u);
  QT::QCheckBox::QCheckBox(v29, a1[20]);
  a1[24] = v29;
  QT::QObject::setObjectName(v29, "loadAsCodeSegmentCheck", 22);
  QT::QGridLayout::addWidget(a1[21], a1[24], 2, 0, 1, 1, 0);
  v30 = (QT::QCheckBox *)operator new(0x28u);
  QT::QCheckBox::QCheckBox(v30, a1[20]);
  a1[25] = v30;
  QT::QObject::setObjectName(v30, "createSegmentsCheck", 19);
  QT::QGridLayout::addWidget(a1[21], a1[25], 0, 1, 1, 1, 0);
  v31 = (QT::QCheckBox *)operator new(0x28u);
  QT::QCheckBox::QCheckBox(v31, a1[20]);
  a1[26] = v31;
  QT::QObject::setObjectName(v31, "createFLATGroupCheck", 20);
  QT::QGridLayout::addWidget(a1[21], a1[26], 1, 1, 1, 1, 0);
  v32 = (QT::QCheckBox *)operator new(0x28u);
  QT::QCheckBox::QCheckBox(v32, a1[20]);
  a1[27] = v32;
  QT::QObject::setObjectName(v32, "makeImportsSegmentCheck", 23);
  QT::QGridLayout::addWidget(a1[21], a1[27], 2, 1, 1, 1, 0);
  v33 = (QT::QCheckBox *)operator new(0x28u);
  QT::QCheckBox::QCheckBox(v33, a1[20]);
  a1[28] = v33;
  QT::QObject::setObjectName(v33, "loadResourcesCheck", 18);
  QT::QGridLayout::addWidget(a1[21], a1[28], 0, 2, 1, 1, 0);
  v34 = (QT::QCheckBox *)operator new(0x28u);
  QT::QCheckBox::QCheckBox(v34, a1[20]);
  a1[29] = v34;
  QT::QObject::setObjectName(v34, "renameDllEntriesCheck", 21);
  QT::QGridLayout::addWidget(a1[21], a1[29], 1, 2, 1, 1, 0);
  v35 = (QT::QCheckBox *)operator new(0x28u);
  QT::QCheckBox::QCheckBox(v35, a1[20]);
  a1[30] = v35;
  QT::QObject::setObjectName(v35, "manualLoadCheck", 15);
  QT::QGridLayout::addWidget(a1[21], a1[30], 2, 2, 1, 1, 0);
  QT::QBoxLayout::addWidget(a1[19], a1[20], 0, 0);
  QT::QBoxLayout::addLayout(*a1, a1[19], 0);
  v36 = (QT::QDialogButtonBox *)operator new(0x28u);
  QT::QDialogButtonBox::QDialogButtonBox(v36, a2);
  a1[31] = v36;
  QT::QObject::setObjectName(v36, "buttonBox", 9);
  QT::QDialogButtonBox::setStandardButtons(a1[31], 20972544);
  QT::QDialogButtonBox::setCenterButtons(a1[31], 1);
  QT::QBoxLayout::addWidget(*a1, a1[31], 0, 0);
  QT::QLabel::setBuddy(a1[1], a1[2]);
  QT::QLabel::setBuddy(a1[7], a1[9]);
  QT::QLabel::setBuddy(a1[8], a1[10]);
  sub_2F76D0(a1, a2);
  QT::QListWidget::setCurrentRow(a1[2], -1);
  return QT::QMetaObject::connectSlotsByName(a2, (QT::QObject *)0xFFFFFFFFLL);
}
