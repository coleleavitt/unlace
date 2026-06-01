__int64 __fastcall sub_38CB40(__int64 a1, QT::QWidget *a2)
{
  void *v2; // r12
  int v3; // eax
  QT::QVBoxLayout *v4; // r12
  QT::QVBoxLayout *v5; // r12
  QT::QVBoxLayout *v6; // r12
  QT::QHBoxLayout *v7; // r12
  QT::QVBoxLayout *v8; // r12
  __int64 v9; // r12
  __int64 v10; // r12
  QT::QLabel *v11; // r14
  double v12; // xmm0_8
  QT::QComboBox *v13; // r14
  unsigned int v14; // r12d
  QT::QVBoxLayout *v15; // r14
  __int64 v16; // r14
  int v17; // eax
  QT::QComboBox *v18; // r12
  QT::QGroupBox *v19; // r12
  int v20; // eax
  QT::QHBoxLayout *v21; // r12
  QT::QVBoxLayout *v22; // r12
  QT::QHBoxLayout *v23; // r12
  QT::QCheckBox *v24; // r12
  QT::QCheckBox *v25; // r12
  QT::QSplitter *v26; // r12
  int v27; // eax
  QT::QTreeWidget *v28; // r12
  QT::QTreeWidgetItem *v29; // r12
  double v30; // xmm0_8
  void (__fastcall *v31)(QT::QTreeWidgetItem *, _QWORD, _QWORD, _BYTE *, double); // r15
  QT::QTableWidget *v32; // r12
  QT::QTableWidgetItem *v33; // r12
  QT::QTableWidgetItem *v34; // r12
  QT::QTableWidgetItem *v35; // r12
  QT::QObject *v36; // r12
  QT::QHeaderView *v37; // rax
  QT::QHeaderView *v38; // rax
  __int64 v39; // rax
  QT::QWidget *v40; // r12
  QT::QDialogButtonBox *v41; // r12
  void *ptr[4]; // [rsp+0h] [rbp-88h] BYREF
  _BYTE v44[40]; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v45; // [rsp+48h] [rbp-40h]

  v45 = __readfsqword(0x28u);
  QT::QObject::objectName((QT::QObject *)ptr);
  v2 = ptr[2];
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
  {
    free(ptr[0]);
    if ( v2 )
      goto LABEL_4;
LABEL_14:
    QT::QObject::setObjectName(a2, "TStructureOffsetsForm", 21);
    goto LABEL_4;
  }
  if ( !v2 )
    goto LABEL_14;
LABEL_4:
  ptr[0] = (void *)0x2BD00000309LL;
  QT::QWidget::resize(a2, ptr);
  v3 = QT::QWidget::sizePolicy(a2);
  QT::QWidget::setSizePolicy(a2, v3 & 0x20000000 | 0x550000u);
  v4 = (QT::QVBoxLayout *)operator new(0x20u);
  QT::QVBoxLayout::QVBoxLayout(v4, a2);
  *(_QWORD *)a1 = v4;
  QT::QObject::setObjectName(v4, "verticalLayout_7", 16);
  v5 = (QT::QVBoxLayout *)operator new(0x20u);
  QT::QVBoxLayout::QVBoxLayout(v5);
  *(_QWORD *)(a1 + 8) = v5;
  QT::QObject::setObjectName(v5, "verticalLayout_2", 16);
  v6 = (QT::QVBoxLayout *)operator new(0x20u);
  QT::QVBoxLayout::QVBoxLayout(v6);
  *(_QWORD *)(a1 + 16) = v6;
  QT::QObject::setObjectName(v6, "verticalLayout", 14);
  v7 = (QT::QHBoxLayout *)operator new(0x20u);
  QT::QHBoxLayout::QHBoxLayout(v7);
  *(_QWORD *)(a1 + 24) = v7;
  QT::QObject::setObjectName(v7, "horizontalLayout_2", 18);
  v8 = (QT::QVBoxLayout *)operator new(0x20u);
  QT::QVBoxLayout::QVBoxLayout(v8);
  *(_QWORD *)(a1 + 32) = v8;
  QT::QObject::setObjectName(v8, "verticalLayout_3", 16);
  v9 = operator new(0x28u);
  sub_53B9D0(v9, a2);
  *(_QWORD *)(a1 + 40) = v9;
  QT::QObject::setObjectName(v9, "label", 5);
  v10 = QT::QWidget::sizePolicy(*(QT::QWidget **)(a1 + 40)) & 0x20000000 | 0x40000;
  QT::QWidget::setSizePolicy(*(_QWORD *)(a1 + 40), v10);
  v11 = *(QT::QLabel **)(a1 + 40);
  v12 = QT::QString::fromUtf8(ptr, 10, "&Register:");
  QT::QLabel::setText(v11, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  QT::QBoxLayout::addWidget(*(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 40), 0, 0);
  v13 = (QT::QComboBox *)operator new(0x28u);
  QT::QComboBox::QComboBox(v13, a2);
  *(_QWORD *)(a1 + 48) = v13;
  QT::QObject::setObjectName(v13, "ComboBoxRegisters", 17);
  v14 = QT::QWidget::sizePolicy(*(QT::QWidget **)(a1 + 48)) & 0x20000000 | v10 & 0xDFFFFFFF;
  QT::QWidget::setSizePolicy(*(_QWORD *)(a1 + 48), v14);
  QT::QComboBox::setInsertPolicy(*(_QWORD *)(a1 + 48), 6, v12);
  QT::QBoxLayout::addWidget(*(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 48), 0, 0);
  QT::QBoxLayout::addLayout(*(QT::QBoxLayout **)(a1 + 24), *(QT::QLayout **)(a1 + 32), 0);
  v15 = (QT::QVBoxLayout *)operator new(0x20u);
  QT::QVBoxLayout::QVBoxLayout(v15);
  *(_QWORD *)(a1 + 56) = v15;
  QT::QObject::setObjectName(v15, "verticalLayout_4", 16);
  v16 = operator new(0x28u);
  sub_53B9D0(v16, a2);
  *(_QWORD *)(a1 + 64) = v16;
  QT::QObject::setObjectName(v16, "label_2", 7);
  v17 = QT::QWidget::sizePolicy(*(QT::QWidget **)(a1 + 64));
  QT::QWidget::setSizePolicy(*(_QWORD *)(a1 + 64), v17 & 0x20000000 | v14 & 0xDFFFFFFF);
  QT::QBoxLayout::addWidget(*(_QWORD *)(a1 + 56), *(_QWORD *)(a1 + 64), 0, 0);
  v18 = (QT::QComboBox *)operator new(0x28u);
  QT::QComboBox::QComboBox(v18, a2);
  *(_QWORD *)(a1 + 72) = v18;
  QT::QObject::setObjectName(v18, "editDelta", 9);
  QT::QWidget::setMinimumSize(*(QT::QWidget **)(a1 + 72), 150, 0);
  QT::QComboBox::setEditable(*(QT::QComboBox **)(a1 + 72), 1);
  QT::QBoxLayout::addWidget(*(_QWORD *)(a1 + 56), *(_QWORD *)(a1 + 72), 0, 0);
  QT::QBoxLayout::addLayout(*(QT::QBoxLayout **)(a1 + 24), *(QT::QLayout **)(a1 + 56), 0);
  v19 = (QT::QGroupBox *)operator new(0x28u);
  QT::QGroupBox::QGroupBox(v19, a2);
  *(_QWORD *)(a1 + 80) = v19;
  QT::QObject::setObjectName(v19, "groupBox", 8);
  v20 = QT::QWidget::sizePolicy(*(QT::QWidget **)(a1 + 80));
  QT::QWidget::setSizePolicy(*(_QWORD *)(a1 + 80), v20 & 0x20000000 | 0x510000u);
  QT::QWidget::setMinimumSize(*(QT::QWidget **)(a1 + 80), 500, 0);
  v21 = (QT::QHBoxLayout *)operator new(0x20u);
  QT::QHBoxLayout::QHBoxLayout(v21, *(QT::QWidget **)(a1 + 80));
  *(_QWORD *)(a1 + 88) = v21;
  QT::QObject::setObjectName(v21, "horizontalLayout_3", 18);
  v22 = (QT::QVBoxLayout *)operator new(0x20u);
  QT::QVBoxLayout::QVBoxLayout(v22);
  *(_QWORD *)(a1 + 96) = v22;
  QT::QObject::setObjectName(v22, "verticalLayout_6", 16);
  v23 = (QT::QHBoxLayout *)operator new(0x20u);
  QT::QHBoxLayout::QHBoxLayout(v23);
  *(_QWORD *)(a1 + 104) = v23;
  QT::QObject::setObjectName(v23, "horizontalLayout", 16);
  v24 = (QT::QCheckBox *)operator new(0x28u);
  QT::QCheckBox::QCheckBox(v24, *(QT::QWidget **)(a1 + 80));
  *(_QWORD *)(a1 + 112) = v24;
  QT::QObject::setObjectName(v24, "CheckBoxSubStructures", 21);
  QT::QAbstractButton::setChecked(*(QT::QAbstractButton **)(a1 + 112), 1);
  QT::QBoxLayout::addWidget(*(_QWORD *)(a1 + 104), *(_QWORD *)(a1 + 112), 0, 0);
  v25 = (QT::QCheckBox *)operator new(0x28u);
  QT::QCheckBox::QCheckBox(v25, *(QT::QWidget **)(a1 + 80));
  *(_QWORD *)(a1 + 120) = v25;
  QT::QObject::setObjectName(v25, "CheckBoxForceZero", 17);
  QT::QAbstractButton::setChecked(*(QT::QAbstractButton **)(a1 + 120), 1);
  QT::QBoxLayout::addWidget(*(_QWORD *)(a1 + 104), *(_QWORD *)(a1 + 120), 0, 0);
  QT::QBoxLayout::addLayout(*(QT::QBoxLayout **)(a1 + 96), *(QT::QLayout **)(a1 + 104), 0);
  QT::QBoxLayout::addLayout(*(QT::QBoxLayout **)(a1 + 88), *(QT::QLayout **)(a1 + 96), 0);
  QT::QBoxLayout::addWidget(*(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 80), 0, 0);
  QT::QBoxLayout::addLayout(*(QT::QBoxLayout **)(a1 + 16), *(QT::QLayout **)(a1 + 24), 0);
  QT::QBoxLayout::addLayout(*(QT::QBoxLayout **)(a1 + 8), *(QT::QLayout **)(a1 + 16), 0);
  v26 = (QT::QSplitter *)operator new(0x28u);
  QT::QSplitter::QSplitter(v26, a2);
  *(_QWORD *)(a1 + 128) = v26;
  QT::QObject::setObjectName(v26, "splitter", 8);
  v27 = QT::QWidget::sizePolicy(*(QT::QWidget **)(a1 + 128));
  QT::QWidget::setSizePolicy(*(_QWORD *)(a1 + 128), v27 & 0x20000000 | 0x770000u);
  QT::QSplitter::setOrientation(*(_QWORD *)(a1 + 128), 1);
  v28 = (QT::QTreeWidget *)operator new(0x30u);
  QT::QTreeWidget::QTreeWidget(v28, *(QT::QWidget **)(a1 + 128));
  *(_QWORD *)(a1 + 136) = v28;
  *((_QWORD *)v28 + 5) = 0;
  *(_QWORD *)v28 = &SOStructsAndUnions___vtable;
  *((_QWORD *)v28 + 2) = SOStructsAndUnions___vtable_at__16;
  v29 = (QT::QTreeWidgetItem *)operator new(0x60u);
  QT::QTreeWidgetItem::QTreeWidgetItem(v29, 0);
  v30 = QT::QString::fromUtf8(ptr, 1, "1");
  v31 = *(void (__fastcall **)(QT::QTreeWidgetItem *, _QWORD, _QWORD, _BYTE *, double))(*(_QWORD *)v29 + 32LL);
  QT::QVariant::QVariant((QT::QVariant *)v44, (const QT::QString *)ptr);
  v31(v29, 0, 0, v44, v30);
  QT::QVariant::~QVariant((QT::QVariant *)v44);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  QT::QTreeWidget::setHeaderItem(*(QT::QTreeWidget **)(a1 + 136), v29);
  QT::QObject::setObjectName(*(_QWORD *)(a1 + 136), "types", 5);
  QT::QSplitter::addWidget(*(QT::QSplitter **)(a1 + 128), *(QT::QWidget **)(a1 + 136));
  v32 = (QT::QTableWidget *)operator new(0x30u);
  QT::QTableWidget::QTableWidget(v32, *(QT::QWidget **)(a1 + 128));
  *(_QWORD *)(a1 + 144) = v32;
  *((_QWORD *)v32 + 5) = 0;
  *(_QWORD *)v32 = &SOTypeOffsets___vtable;
  *((_QWORD *)v32 + 2) = SOTypeOffsets___vtable_at__16;
  if ( (int)QT::QTableWidget::columnCount(v32) <= 2 )
    QT::QTableWidget::setColumnCount(*(QT::QTableWidget **)(a1 + 144), 3);
  v33 = (QT::QTableWidgetItem *)operator new(0x40u);
  QT::QTableWidgetItem::QTableWidgetItem(v33, 0);
  QT::QTableWidget::setHorizontalHeaderItem(*(QT::QTableWidget **)(a1 + 144), 0, v33);
  v34 = (QT::QTableWidgetItem *)operator new(0x40u);
  QT::QTableWidgetItem::QTableWidgetItem(v34, 0);
  QT::QTableWidget::setHorizontalHeaderItem(*(QT::QTableWidget **)(a1 + 144), 1, v34);
  v35 = (QT::QTableWidgetItem *)operator new(0x40u);
  QT::QTableWidgetItem::QTableWidgetItem(v35, 0);
  QT::QTableWidget::setHorizontalHeaderItem(*(QT::QTableWidget **)(a1 + 144), 2, v35);
  QT::QObject::setObjectName(*(_QWORD *)(a1 + 144), "offsets", 7);
  QT::QWidget::setMinimumSize(*(QT::QWidget **)(a1 + 144), 441, 0);
  v36 = (QT::QObject *)QT::QAbstractScrollArea::viewport(*(QT::QAbstractScrollArea **)(a1 + 144));
  QT::QCursor::QCursor(ptr, 0);
  QT::QCursor::operator QT::QVariant(v44, ptr);
  QT::QObject::doSetProperty(v36, "cursor", (const QT::QVariant *)v44, (QT::QVariant *)v44);
  QT::QVariant::~QVariant((QT::QVariant *)v44);
  QT::QCursor::~QCursor((QT::QCursor *)ptr);
  QT::QTableWidget::setColumnCount(*(QT::QTableWidget **)(a1 + 144), 3);
  QT::QSplitter::addWidget(*(QT::QSplitter **)(a1 + 128), *(QT::QWidget **)(a1 + 144));
  v37 = (QT::QHeaderView *)QT::QTableView::horizontalHeader(*(QT::QTableView **)(a1 + 144));
  QT::QHeaderView::setCascadingSectionResizes(v37, 0);
  v38 = (QT::QHeaderView *)QT::QTableView::horizontalHeader(*(QT::QTableView **)(a1 + 144));
  QT::QHeaderView::setStretchLastSection(v38, 1);
  v39 = QT::QTableView::verticalHeader(*(QT::QTableView **)(a1 + 144));
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v39 + 104LL))(v39, 0);
  QT::QBoxLayout::addWidget(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 128), 0, 0);
  v40 = (QT::QWidget *)operator new(0xB8u);
  sub_2DDD40(v40);
  *(_QWORD *)(a1 + 152) = v40;
  QT::QObject::setObjectName(v40, "searchLine", 10);
  QT::QBoxLayout::addWidget(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 152), 0, 0);
  v41 = (QT::QDialogButtonBox *)operator new(0x28u);
  QT::QDialogButtonBox::QDialogButtonBox(v41, a2);
  *(_QWORD *)(a1 + 160) = v41;
  QT::QObject::setObjectName(v41, "buttonBox", 9);
  QT::QDialogButtonBox::setStandardButtons(*(_QWORD *)(a1 + 160), 20972544);
  QT::QDialogButtonBox::setCenterButtons(*(QT::QDialogButtonBox **)(a1 + 160), 1);
  QT::QBoxLayout::addWidget(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 160), 0, 0);
  QT::QBoxLayout::addLayout(*(QT::QBoxLayout **)a1, *(QT::QLayout **)(a1 + 8), 0);
  QT::QLabel::setBuddy(*(QT::QLabel **)(a1 + 40), *(QT::QWidget **)(a1 + 48));
  QT::QLabel::setBuddy(*(QT::QLabel **)(a1 + 64), *(QT::QWidget **)(a1 + 72));
  sub_38C440((QT::QLabel **)a1, a2);
  return QT::QMetaObject::connectSlotsByName(a2, a2);
}
