unsigned __int64 __fastcall sub_3F53E0(QT::QLineEdit **a1, QT::QString *a2, __int64 a3)
{
  QT::QHBoxLayout *v3; // r12
  QT::QLineEdit *v4; // r14
  double v5; // xmm0_8
  QT::QCheckBox *v6; // r14
  double v7; // xmm0_8
  volatile signed __int32 *v8; // rax
  QT::QCheckBox *v9; // r14
  double v10; // xmm0_8
  volatile signed __int32 *v11; // rax
  QT::QCheckBox *v12; // r14
  double v13; // xmm0_8
  volatile signed __int32 *v14; // rax
  QT::QPushButton *v15; // r13
  double v16; // xmm0_8
  volatile signed __int32 *v17; // rax
  QT::QWidget *v18; // r13
  QT::QLineEdit *v19; // r13
  __m128i *v20; // rax
  __m128i si128; // xmm0
  QT::QLineEdit *v22; // r13
  __m128i *v23; // rax
  __m128i v24; // xmm0
  QT::QLineEdit *v25; // rsi
  __m128i *v26; // rax
  __m128i v27; // xmm0
  QT::QLineEdit *v28; // r15
  __m128i *v29; // rax
  __m128i v30; // xmm0
  QT::QLineEdit *v31; // r15
  __m128i *v32; // rax
  __m128i v33; // xmm0
  _QWORD v35[2]; // [rsp+10h] [rbp-90h] BYREF
  _QWORD v36[2]; // [rsp+20h] [rbp-80h] BYREF
  _QWORD v37[2]; // [rsp+30h] [rbp-70h] BYREF
  __m128i v38; // [rsp+40h] [rbp-60h] BYREF
  void *ptr[2]; // [rsp+50h] [rbp-50h] BYREF
  unsigned __int64 v40; // [rsp+68h] [rbp-38h]

  v40 = __readfsqword(0x28u);
  QT::QWidget::QWidget(a1, a3, 0);
  *a1 = (QT::QLineEdit *)&filter_row_widget_t___vtable;
  a1[2] = (QT::QLineEdit *)filter_row_widget_t___vtable_at__16;
  v3 = (QT::QHBoxLayout *)operator new(0x20u);
  QT::QHBoxLayout::QHBoxLayout(v3, (QT::QWidget *)a1);
  QT::QLayout::setContentsMargins(v3, 2, 2, 2, 2);
  v4 = (QT::QLineEdit *)operator new(0x28u);
  QT::QLineEdit::QLineEdit(v4, (QT::QWidget *)a1);
  a1[5] = v4;
  v5 = QT::QString::fromUtf8(ptr, 17, "Filter pattern...");
  QT::QLineEdit::setPlaceholderText(v4, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  QT::QLineEdit::setText(a1[5], a2);
  QT::QBoxLayout::addWidget(v3, a1[5], 0, 0);
  v6 = (QT::QCheckBox *)operator new(0x28u);
  v7 = QT::QString::fromUtf8(ptr, 7, "Enabled", v5);
  QT::QCheckBox::QCheckBox(v6, (const QT::QString *)ptr, (QT::QWidget *)a1);
  v8 = (volatile signed __int32 *)ptr[0];
  a1[6] = v6;
  if ( v8 )
  {
    if ( !_InterlockedSub(v8, 1u) )
      free(ptr[0]);
    v6 = a1[6];
  }
  QT::QAbstractButton::setChecked(v6, *((_BYTE *)a2 + 24));
  QT::QBoxLayout::addWidget(v3, a1[6], 0, 0);
  v9 = (QT::QCheckBox *)operator new(0x28u);
  v10 = QT::QString::fromUtf8(ptr, 5, "Regex", v7);
  QT::QCheckBox::QCheckBox(v9, (const QT::QString *)ptr, (QT::QWidget *)a1);
  v11 = (volatile signed __int32 *)ptr[0];
  a1[7] = v9;
  if ( v11 )
  {
    if ( !_InterlockedSub(v11, 1u) )
      free(ptr[0]);
    v9 = a1[7];
  }
  QT::QAbstractButton::setChecked(v9, *((_BYTE *)a2 + 25));
  QT::QBoxLayout::addWidget(v3, a1[7], 0, 0);
  v12 = (QT::QCheckBox *)operator new(0x28u);
  v13 = QT::QString::fromUtf8(ptr, 4, "Case", v10);
  QT::QCheckBox::QCheckBox(v12, (const QT::QString *)ptr, (QT::QWidget *)a1);
  v14 = (volatile signed __int32 *)ptr[0];
  a1[8] = v12;
  if ( v14 )
  {
    if ( !_InterlockedSub(v14, 1u) )
      free(ptr[0]);
    v12 = a1[8];
  }
  QT::QAbstractButton::setChecked(v12, *((_DWORD *)a2 + 7) == 1);
  QT::QBoxLayout::addWidget(v3, a1[8], 0, 0);
  v15 = (QT::QPushButton *)operator new(0x28u);
  v16 = QT::QString::fromUtf8(ptr, 3, byte_5C08F4, v13);
  QT::QPushButton::QPushButton(v15, (const QT::QString *)ptr, (QT::QWidget *)a1);
  v17 = (volatile signed __int32 *)ptr[0];
  a1[9] = v15;
  if ( v17 )
  {
    if ( !_InterlockedSub(v17, 1u) )
      free(ptr[0]);
    v15 = a1[9];
  }
  QT::QWidget::setMaximumWidth(v15, 30);
  v18 = a1[9];
  QT::QString::fromUtf8(ptr, 13, "Delete filter", v16);
  QT::QWidget::setToolTip(v18, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  QT::QBoxLayout::addWidget(v3, a1[9], 0, 0);
  ptr[1] = nullptr;
  v19 = a1[5];
  ptr[0] = &loc_3EE020;
  v35[1] = 0;
  v35[0] = &QT::QLineEdit::textChanged;
  v20 = (__m128i *)operator new(0x20u);
  si128 = _mm_load_si128((const __m128i *)ptr);
  v20->m128i_i32[0] = 1;
  v20->m128i_i64[1] = (__int64)sub_3EEE30;
  v20[1] = si128;
  QT::QObject::connectImpl(&v38, v19, v35, a1, ptr, v20, 0, 0, &QT::QLineEdit::staticMetaObject);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)&v38);
  ptr[0] = &loc_3EEA50;
  ptr[1] = nullptr;
  v22 = a1[6];
  v36[0] = &QT::QAbstractButton::toggled;
  v36[1] = 0;
  v23 = (__m128i *)operator new(0x20u);
  v24 = _mm_load_si128((const __m128i *)ptr);
  v23->m128i_i64[1] = (__int64)sub_3EEE30;
  v23->m128i_i32[0] = 1;
  v23[1] = v24;
  QT::QObject::connectImpl(&v38, v22, v36, a1, ptr, v23, 0, 0, &QT::QAbstractButton::staticMetaObject);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)&v38);
  v25 = a1[7];
  ptr[0] = &loc_3EEA50;
  ptr[1] = nullptr;
  v37[0] = &QT::QAbstractButton::toggled;
  v37[1] = 0;
  v26 = (__m128i *)operator new(0x20u);
  v27 = _mm_load_si128((const __m128i *)ptr);
  v26->m128i_i64[1] = (__int64)sub_3EEE30;
  v26->m128i_i32[0] = 1;
  v26[1] = v27;
  QT::QObject::connectImpl(&v38, v25, v37, a1, ptr, v26, 0, 0, &QT::QAbstractButton::staticMetaObject);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)&v38);
  ptr[0] = &loc_3EEA50;
  ptr[1] = nullptr;
  v28 = a1[8];
  v38.m128i_i64[0] = (__int64)&QT::QAbstractButton::toggled;
  v38.m128i_i64[1] = 0;
  v29 = (__m128i *)operator new(0x20u);
  v30 = _mm_load_si128((const __m128i *)ptr);
  v29->m128i_i64[1] = (__int64)sub_3EEE30;
  v29->m128i_i32[0] = 1;
  v29[1] = v30;
  QT::QObject::connectImpl(v37, v28, &v38, a1, ptr, v29, 0, 0, &QT::QAbstractButton::staticMetaObject);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v37);
  v38.m128i_i64[1] = 0;
  v38.m128i_i64[0] = (__int64)&loc_3EE030;
  ptr[1] = nullptr;
  v31 = a1[9];
  ptr[0] = &QT::QAbstractButton::clicked;
  v32 = (__m128i *)operator new(0x20u);
  v33 = _mm_load_si128(&v38);
  v32->m128i_i64[1] = (__int64)sub_3EEE30;
  v32->m128i_i32[0] = 1;
  v32[1] = v33;
  QT::QObject::connectImpl(v37, v31, ptr, a1, &v38, v32, 0, 0, &QT::QAbstractButton::staticMetaObject);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v37);
  return v40 - __readfsqword(0x28u);
}
