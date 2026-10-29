unsigned __int64 __fastcall sub_3FC750(QT::QLineEdit **a1)
{
  QT::QLineEdit *v1; // rbp
  QT::QLineEdit *v2; // r12
  double v3; // xmm0_8
  QT::QPushButton *v4; // r12
  double v5; // xmm0_8
  volatile signed __int32 *v6; // rax
  double v7; // xmm0_8
  QT::QPushButton *v8; // r12
  double v9; // xmm0_8
  volatile signed __int32 *v10; // rax
  double v11; // xmm0_8
  QT::QWidget *v12; // r12
  double v13; // xmm0_8
  QT::QWidget *v14; // r13
  QT::QHBoxLayout *v15; // r12
  QT::QWidget *v16; // r12
  volatile signed __int32 *v17; // rax
  __m128i ptr; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v20; // [rsp+18h] [rbp-30h]

  v20 = __readfsqword(0x28u);
  v1 = (QT::QLineEdit *)operator new(0x28u);
  QT::QLineEdit::QLineEdit(v1, (QT::QWidget *)a1);
  a1[19] = v1;
  QT::QObject::setObjectName(v1, "xref_tree_search_input", 22);
  v2 = a1[19];
  v3 = QT::QString::fromUtf8(&ptr, 9, "Search...");
  QT::QLineEdit::setPlaceholderText(v2, (const QT::QString *)&ptr);
  if ( ptr.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)ptr.m128i_i64[0], 1u) )
    free((void *)ptr.m128i_i64[0]);
  QT::QLineEdit::setClearButtonEnabled(a1[19], 1);
  v4 = (QT::QPushButton *)operator new(0x28u);
  v5 = QT::QString::fromUtf8(&ptr, 3, byte_5C09A6, v3);
  QT::QPushButton::QPushButton(v4, (const QT::QString *)&ptr, (QT::QWidget *)a1);
  v6 = (volatile signed __int32 *)ptr.m128i_i64[0];
  a1[20] = v4;
  if ( v6 )
  {
    if ( !_InterlockedSub(v6, 1u) )
      free((void *)ptr.m128i_i64[0]);
    v4 = a1[20];
  }
  v7 = QT::QString::fromUtf8(&ptr, 14, "Previous match", v5);
  QT::QWidget::setToolTip(v4, (const QT::QString *)&ptr);
  if ( ptr.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)ptr.m128i_i64[0], 1u) )
    free((void *)ptr.m128i_i64[0]);
  QT::QWidget::setEnabled(a1[20], 0);
  QT::QWidget::setMaximumWidth(a1[20], 30);
  v8 = (QT::QPushButton *)operator new(0x28u);
  v9 = QT::QString::fromUtf8(&ptr, 3, byte_5C09B9, v7);
  QT::QPushButton::QPushButton(v8, (const QT::QString *)&ptr, (QT::QWidget *)a1);
  v10 = (volatile signed __int32 *)ptr.m128i_i64[0];
  a1[21] = v8;
  if ( v10 )
  {
    if ( !_InterlockedSub(v10, 1u) )
      free((void *)ptr.m128i_i64[0]);
    v8 = a1[21];
  }
  v11 = QT::QString::fromUtf8(&ptr, 10, "Next match", v9);
  QT::QWidget::setToolTip(v8, (const QT::QString *)&ptr);
  if ( ptr.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)ptr.m128i_i64[0], 1u) )
    free((void *)ptr.m128i_i64[0]);
  QT::QWidget::setEnabled(a1[21], 0);
  QT::QWidget::setMaximumWidth(a1[21], 30);
  v12 = (QT::QWidget *)operator new(0x28u);
  QT::QLabel::QLabel(v12, a1, 0, v11);
  a1[22] = v12;
  v13 = QT::QString::fromUtf8(&ptr, 23, "QLabel { color: gray; }");
  QT::QWidget::setStyleSheet(v12, (const QT::QString *)&ptr);
  if ( ptr.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)ptr.m128i_i64[0], 1u) )
    free((void *)ptr.m128i_i64[0]);
  QT::QWidget::setMinimumWidth(a1[22], 100);
  v14 = (QT::QWidget *)operator new(0x28u);
  QT::QWidget::QWidget(v14, a1, 0);
  v15 = (QT::QHBoxLayout *)operator new(0x20u);
  QT::QHBoxLayout::QHBoxLayout(v15, v14);
  QT::QLayout::setContentsMargins(v15, 5, 5, 5, 5);
  (*(void (__fastcall **)(QT::QHBoxLayout *, __int64, double))(*(_QWORD *)v15 + 104LL))(v15, 5, v13);
  QT::QBoxLayout::addWidget(v15, a1[19], 1, 0);
  QT::QBoxLayout::addWidget(v15, a1[20], 0, 0);
  QT::QBoxLayout::addWidget(v15, a1[21], 0, 0);
  QT::QBoxLayout::addWidget(v15, a1[22], 0, 0);
  QT::QWidget::setLayout(v14, v15);
  v16 = (QT::QWidget *)operator new(0x88u);
  QT::QString::fromUtf8(&ptr, 6, "Search");
  sub_1DE2E0(v16, (__int64)a1, &ptr, (__int64)v14, 1);
  v17 = (volatile signed __int32 *)ptr.m128i_i64[0];
  a1[18] = v16;
  if ( v17 )
  {
    if ( !_InterlockedSub(v17, 1u) )
      free((void *)ptr.m128i_i64[0]);
    v16 = a1[18];
  }
  return sub_3FC5F0((QT::QObject *)a1, v16);
}
