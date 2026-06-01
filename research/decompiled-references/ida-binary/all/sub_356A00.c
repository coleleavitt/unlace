__int64 __fastcall sub_356A00(__int64 a1)
{
  __int64 v1; // rax
  QT::QWidget *v2; // rbp
  char isChecked; // al
  __int64 v4; // rax
  QT::QWidget *v5; // rbp
  char v6; // al
  char v7; // dl
  __int64 v8; // rax
  QT::QLabel *v9; // r12
  double v10; // xmm0_8
  __int64 v11; // rax
  __int64 v12; // rbp
  void (__fastcall *v13)(__int64, _QWORD); // r12
  unsigned __int8 v14; // al
  __int64 v15; // rax
  QT::QWidget *v16; // rbx
  char v17; // al
  char v19; // al
  QT::QLabel *v20; // r12
  double v21; // xmm0_8
  __int64 v22; // rax
  __int64 v23; // rbp
  void (__fastcall *v24)(__int64, _QWORD, double); // r12
  unsigned __int8 v25; // al
  void *ptr[7]; // [rsp+0h] [rbp-38h] BYREF

  v1 = *(_QWORD *)(a1 + 56);
  ptr[3] = (void *)__readfsqword(0x28u);
  v2 = *(QT::QWidget **)(v1 + 616);
  isChecked = QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(v1 + 600));
  QT::QWidget::setEnabled(v2, isChecked);
  v4 = *(_QWORD *)(a1 + 56);
  v5 = *(QT::QWidget **)(v4 + 624);
  v6 = QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(v4 + 600));
  QT::QWidget::setEnabled(v5, v6);
  v7 = QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(*(_QWORD *)(a1 + 56) + 600LL));
  v8 = *(_QWORD *)(a1 + 56);
  if ( !v7 )
  {
    v9 = *(QT::QLabel **)(v8 + 664);
    v10 = QT::QString::fromUtf8(ptr, 3, "...");
    QT::QLabel::setText(v9, (const QT::QString *)ptr);
    goto LABEL_3;
  }
  v19 = QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(v8 + 616));
  v20 = *(QT::QLabel **)(*(_QWORD *)(a1 + 56) + 664LL);
  if ( v19 )
  {
    v10 = QT::QString::fromUtf8(ptr, 13, "somefunc+0x22");
    QT::QLabel::setText(v20, (const QT::QString *)ptr);
LABEL_3:
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
    (*(void (__fastcall **)(_QWORD, _QWORD, double))(**(_QWORD **)(*(_QWORD *)(a1 + 56) + 656LL) + 104LL))(
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 656LL),
      0,
      v10);
    goto LABEL_7;
  }
  v21 = QT::QString::fromUtf8(ptr, 4, "0FE0");
  QT::QLabel::setText(v20, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v22 = *(_QWORD *)(a1 + 56);
  v23 = *(_QWORD *)(v22 + 656);
  v24 = *(void (__fastcall **)(__int64, _QWORD, double))(*(_QWORD *)v23 + 104LL);
  v25 = QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(v22 + 624));
  v24(v23, v25, v21);
LABEL_7:
  v11 = *(_QWORD *)(a1 + 56);
  v12 = *(_QWORD *)(v11 + 648);
  v13 = *(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v12 + 104LL);
  v14 = QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(v11 + 608));
  v13(v12, v14);
  v15 = *(_QWORD *)(a1 + 56);
  v16 = *(QT::QWidget **)(v15 + 624);
  v17 = QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(v15 + 616));
  return QT::QWidget::setEnabled(v16, v17 != 1);
}
