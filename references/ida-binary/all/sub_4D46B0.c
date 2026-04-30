unsigned __int64 __fastcall sub_4D46B0(QT::QLabel **a1, QT::QWidget *a2)
{
  QT::QLabel *v2; // r13
  QT::QLabel *v3; // r13
  QT::QAbstractButton *v4; // r13
  QT::QAbstractButton *v5; // r13
  QT::QAbstractButton *v6; // r13
  QT::QAbstractButton *v7; // r13
  QT::QGroupBox *v8; // r13
  QT::QAbstractButton *v9; // rbp
  void *ptr[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v12; // [rsp+10h] [rbp-38h]
  unsigned __int64 v13; // [rsp+18h] [rbp-30h]

  v13 = __readfsqword(0x28u);
  *(_OWORD *)ptr = 0;
  v12 = 0;
  QT::QWidget::setWindowTitle(a2, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v2 = *a1;
  QT::QCoreApplication::translate((QT::QCoreApplication *)ptr, "edit_filters_dialog_t", "If column", nullptr, -1);
  QT::QLabel::setText(v2, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v3 = a1[4];
  QT::QCoreApplication::translate((QT::QCoreApplication *)ptr, "edit_filters_dialog_t", "then", nullptr, -1);
  QT::QLabel::setText(v3, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v4 = a1[6];
  QT::QCoreApplication::translate((QT::QCoreApplication *)ptr, "edit_filters_dialog_t", "Match case", nullptr, -1);
  QT::QAbstractButton::setText(v4, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v5 = a1[7];
  QT::QCoreApplication::translate(
    (QT::QCoreApplication *)ptr,
    "edit_filters_dialog_t",
    "Regular expression",
    nullptr,
    -1);
  QT::QAbstractButton::setText(v5, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v6 = a1[8];
  QT::QCoreApplication::translate((QT::QCoreApplication *)ptr, "edit_filters_dialog_t", "&Add", nullptr, -1);
  QT::QAbstractButton::setText(v6, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v7 = a1[9];
  QT::QCoreApplication::translate((QT::QCoreApplication *)ptr, "edit_filters_dialog_t", "&Close", nullptr, -1);
  QT::QAbstractButton::setText(v7, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v8 = a1[10];
  QT::QCoreApplication::translate((QT::QCoreApplication *)ptr, "edit_filters_dialog_t", "Filter list", nullptr, -1);
  QT::QGroupBox::setTitle(v8, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v9 = a1[12];
  QT::QCoreApplication::translate((QT::QCoreApplication *)ptr, "edit_filters_dialog_t", "&Reset", nullptr, -1);
  QT::QAbstractButton::setText(v9, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return v13 - __readfsqword(0x28u);
}
