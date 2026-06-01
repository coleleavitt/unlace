__int64 __fastcall sub_18F910(__int64 a1, QT::QWidget *a2)
{
  void *v3; // r13
  int v4; // eax
  QT::QVBoxLayout *v5; // r12
  QT::QVBoxLayout *v6; // r12
  QT::QHBoxLayout *v7; // r12
  __int64 v8; // r12
  int v9; // eax
  QT::QComboBox *v10; // r12
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rdi
  __m128i si128; // xmm0
  QT::QHBoxLayout *v15; // r14
  QT::QGroupBox *v16; // r14
  QT::QVBoxLayout *v17; // r14
  QT::QVBoxLayout *v18; // r14
  QT::QCheckBox *v19; // r14
  QT::QCheckBox *v20; // r14
  QT::QCheckBox *v21; // r14
  QT::QCheckBox *v22; // r14
  QT::QCheckBox *v23; // r14
  __int64 v24; // rax
  __m128i v25; // xmm1
  __int64 v26; // rdi
  QT::QVBoxLayout *v27; // r13
  __int64 v28; // rax
  __m128i v29; // xmm2
  __int64 v30; // rdi
  void *ptr[9]; // [rsp+0h] [rbp-48h] BYREF

  ptr[3] = (void *)__readfsqword(0x28u);
  QT::QObject::objectName((QT::QObject *)ptr);
  v3 = ptr[2];
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
  {
    free(ptr[0]);
    if ( v3 )
      goto LABEL_4;
LABEL_6:
    QT::QObject::setObjectName(a2, "name_container", 14);
    goto LABEL_4;
  }
  if ( !v3 )
    goto LABEL_6;
LABEL_4:
  ptr[0] = (void *)0xBE00000175LL;
  QT::QWidget::resize(a2, ptr);
  v4 = QT::QWidget::sizePolicy(a2);
  QT::QWidget::setSizePolicy(a2, v4 & 0x20000000 | 0x50000u);
  QT::QWidget::setMinimumSize(a2, 0, 190);
  v5 = (QT::QVBoxLayout *)operator new(0x20u);
  QT::QVBoxLayout::QVBoxLayout(v5, a2);
  *(_QWORD *)a1 = v5;
  QT::QObject::setObjectName(v5, "verticalLayout_5", 16);
  v6 = (QT::QVBoxLayout *)operator new(0x20u);
  QT::QVBoxLayout::QVBoxLayout(v6);
  *(_QWORD *)(a1 + 8) = v6;
  QT::QObject::setObjectName(v6, "verticalLayout_2", 16);
  v7 = (QT::QHBoxLayout *)operator new(0x20u);
  QT::QHBoxLayout::QHBoxLayout(v7);
  *(_QWORD *)(a1 + 16) = v7;
  QT::QObject::setObjectName(v7, "horizontalLayout_4", 18);
  v8 = operator new(0x28u);
  sub_53B9D0(v8, a2);
  *(_QWORD *)(a1 + 24) = v8;
  QT::QObject::setObjectName(v8, "label_4", 7);
  v9 = QT::QWidget::sizePolicy(*(QT::QWidget **)(a1 + 24));
  QT::QWidget::setSizePolicy(*(_QWORD *)(a1 + 24), v9 & 0x20000000 | 0x550000u);
  QT::QBoxLayout::addWidget(*(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 24), 0, 33);
  v10 = (QT::QComboBox *)operator new(0x28u);
  QT::QComboBox::QComboBox(v10, a2);
  *(_QWORD *)(a1 + 32) = v10;
  QT::QObject::setObjectName(v10, "name", 4);
  v11 = QT::QWidget::sizePolicy(*(QT::QWidget **)(a1 + 32));
  QT::QWidget::setSizePolicy(*(_QWORD *)(a1 + 32), v11 & 0x20000000 | 0x70000u);
  QT::QWidget::setMaximumSize(*(QT::QWidget **)(a1 + 32), 430, 0xFFFFFF);
  QT::QComboBox::setEditable(*(QT::QComboBox **)(a1 + 32), 1);
  QT::QBoxLayout::addWidget(*(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 32), 0, 32);
  v12 = operator new(0x28u);
  v13 = *(_QWORD *)(a1 + 16);
  si128 = _mm_load_si128((const __m128i *)&xmmword_5DC310);
  *(_DWORD *)(v12 + 8) = 0;
  *(_DWORD *)(v12 + 20) = (_DWORD)&loc_170000;
  *(__m128i *)(v12 + 24) = si128;
  *(_QWORD *)v12 = (char *)&`vtable for'QT::QSpacerItem + 16;
  *(_QWORD *)(v12 + 12) = 0x1400000028LL;
  *(_QWORD *)(a1 + 40) = v12;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 128LL))(v13);
  QT::QBoxLayout::setStretch(*(QT::QBoxLayout **)(a1 + 16), 1, 100);
  QT::QBoxLayout::setStretch(*(QT::QBoxLayout **)(a1 + 16), 2, 1);
  QT::QBoxLayout::addLayout(*(QT::QBoxLayout **)(a1 + 8), *(QT::QLayout **)(a1 + 16), 0);
  QT::QBoxLayout::addLayout(*(QT::QBoxLayout **)a1, *(QT::QLayout **)(a1 + 8), 0);
  v15 = (QT::QHBoxLayout *)operator new(0x20u);
  QT::QHBoxLayout::QHBoxLayout(v15);
  *(_QWORD *)(a1 + 48) = v15;
  QT::QObject::setObjectName(v15, "horizontalLayout_5", 18);
  v16 = (QT::QGroupBox *)operator new(0x28u);
  QT::QGroupBox::QGroupBox(v16, a2);
  *(_QWORD *)(a1 + 56) = v16;
  QT::QObject::setObjectName(v16, "cb_group", 8);
  v17 = (QT::QVBoxLayout *)operator new(0x20u);
  QT::QVBoxLayout::QVBoxLayout(v17, *(QT::QWidget **)(a1 + 56));
  *(_QWORD *)(a1 + 64) = v17;
  QT::QObject::setObjectName(v17, "verticalLayout_8", 16);
  v18 = (QT::QVBoxLayout *)operator new(0x20u);
  QT::QVBoxLayout::QVBoxLayout(v18);
  *(_QWORD *)(a1 + 72) = v18;
  QT::QObject::setObjectName(v18, "verticalLayout_7", 16);
  v19 = (QT::QCheckBox *)operator new(0x28u);
  QT::QCheckBox::QCheckBox(v19, *(QT::QWidget **)(a1 + 56));
  *(_QWORD *)(a1 + 80) = v19;
  QT::QObject::setObjectName(v19, "cb_local_name", 13);
  QT::QBoxLayout::addWidget(*(_QWORD *)(a1 + 72), *(_QWORD *)(a1 + 80), 0, 0);
  v20 = (QT::QCheckBox *)operator new(0x28u);
  QT::QCheckBox::QCheckBox(v20, *(QT::QWidget **)(a1 + 56));
  *(_QWORD *)(a1 + 88) = v20;
  QT::QObject::setObjectName(v20, "cb_include_in_name_list", 23);
  QT::QBoxLayout::addWidget(*(_QWORD *)(a1 + 72), *(_QWORD *)(a1 + 88), 0, 0);
  v21 = (QT::QCheckBox *)operator new(0x28u);
  QT::QCheckBox::QCheckBox(v21, *(QT::QWidget **)(a1 + 56));
  *(_QWORD *)(a1 + 96) = v21;
  QT::QObject::setObjectName(v21, "cb_public_name", 14);
  QT::QBoxLayout::addWidget(*(_QWORD *)(a1 + 72), *(_QWORD *)(a1 + 96), 0, 0);
  v22 = (QT::QCheckBox *)operator new(0x28u);
  QT::QCheckBox::QCheckBox(v22, *(QT::QWidget **)(a1 + 56));
  *(_QWORD *)(a1 + 104) = v22;
  QT::QObject::setObjectName(v22, "cb_autogenerated_name", 21);
  QT::QBoxLayout::addWidget(*(_QWORD *)(a1 + 72), *(_QWORD *)(a1 + 104), 0, 0);
  v23 = (QT::QCheckBox *)operator new(0x28u);
  QT::QCheckBox::QCheckBox(v23, *(QT::QWidget **)(a1 + 56));
  *(_QWORD *)(a1 + 112) = v23;
  QT::QObject::setObjectName(v23, "cb_weak_name", 12);
  QT::QBoxLayout::addWidget(*(_QWORD *)(a1 + 72), *(_QWORD *)(a1 + 112), 0, 0);
  QT::QBoxLayout::addLayout(*(QT::QBoxLayout **)(a1 + 64), *(QT::QLayout **)(a1 + 72), 0);
  QT::QBoxLayout::addWidget(*(_QWORD *)(a1 + 48), *(_QWORD *)(a1 + 56), 0, 0);
  v24 = operator new(0x28u);
  v25 = _mm_load_si128((const __m128i *)&xmmword_5DC310);
  v26 = *(_QWORD *)(a1 + 48);
  *(_DWORD *)(v24 + 8) = 0;
  *(__m128i *)(v24 + 24) = v25;
  *(_QWORD *)(v24 + 12) = 0x1400000028LL;
  *(_QWORD *)v24 = (char *)&`vtable for'QT::QSpacerItem + 16;
  *(_DWORD *)(v24 + 20) = (_DWORD)&loc_170000;
  *(_QWORD *)(a1 + 120) = v24;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 128LL))(v26);
  QT::QBoxLayout::addLayout(*(QT::QBoxLayout **)a1, *(QT::QLayout **)(a1 + 48), 0);
  v27 = (QT::QVBoxLayout *)operator new(0x20u);
  QT::QVBoxLayout::QVBoxLayout(v27);
  *(_QWORD *)(a1 + 128) = v27;
  QT::QObject::setObjectName(v27, "verticalLayout_4", 16);
  v28 = operator new(0x28u);
  v29 = _mm_load_si128((const __m128i *)&xmmword_5DC310);
  v30 = *(_QWORD *)(a1 + 128);
  *(_DWORD *)(v28 + 8) = 0;
  *(_QWORD *)v28 = (char *)&`vtable for'QT::QSpacerItem + 16;
  *(__m128i *)(v28 + 24) = v29;
  *(_QWORD *)(v28 + 12) = 0x100000014LL;
  *(_DWORD *)(v28 + 20) = (_DWORD)&unk_710000;
  *(_QWORD *)(a1 + 136) = v28;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 128LL))(v30);
  QT::QBoxLayout::addLayout(*(QT::QBoxLayout **)a1, *(QT::QLayout **)(a1 + 128), 0);
  sub_18F640((_QWORD *)a1, a2);
  return QT::QMetaObject::connectSlotsByName(a2, a2);
}
