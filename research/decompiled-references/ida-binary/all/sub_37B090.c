unsigned __int64 __fastcall sub_37B090(_QWORD *a1, QT::QWidget *a2)
{
  QT::QLabel *v2; // r13
  QT::QLabel *v3; // r13
  QT::QWidget *v4; // r13
  QT::QAbstractButton *v5; // r13
  QT::QWidget *v6; // r13
  QT::QAbstractButton *v7; // r13
  QT::QLabel *v8; // rbp
  void *ptr[3]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v11; // [rsp+18h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  QT::QCoreApplication::translate((QT::QCoreApplication *)ptr, "TSegTransBox", "Segment translation", nullptr, -1);
  QT::QWidget::setWindowTitle(a2, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v2 = (QT::QLabel *)a1[3];
  QT::QCoreApplication::translate((QT::QCoreApplication *)ptr, "TSegTransBox", "Translation for segment:", nullptr, -1);
  QT::QLabel::setText(v2, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v3 = (QT::QLabel *)a1[7];
  QT::QCoreApplication::translate((QT::QCoreApplication *)ptr, "TSegTransBox", "Unmapped segments", nullptr, -1);
  QT::QLabel::setText(v3, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v4 = (QT::QWidget *)a1[10];
  QT::QCoreApplication::translate(
    (QT::QCoreApplication *)ptr,
    "TSegTransBox",
    "Add to the translation list",
    nullptr,
    -1);
  QT::QWidget::setToolTip(v4, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v5 = (QT::QAbstractButton *)a1[10];
  QT::QCoreApplication::translate((QT::QCoreApplication *)ptr, "TSegTransBox", ">>", nullptr, -1);
  QT::QAbstractButton::setText(v5, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v6 = (QT::QWidget *)a1[11];
  QT::QCoreApplication::translate(
    (QT::QCoreApplication *)ptr,
    "TSegTransBox",
    "Remove from the translation list",
    nullptr,
    -1);
  QT::QWidget::setToolTip(v6, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v7 = (QT::QAbstractButton *)a1[11];
  QT::QCoreApplication::translate((QT::QCoreApplication *)ptr, "TSegTransBox", "<<", nullptr, -1);
  QT::QAbstractButton::setText(v7, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v8 = (QT::QLabel *)a1[13];
  QT::QCoreApplication::translate((QT::QCoreApplication *)ptr, "TSegTransBox", "Segments visible from %s", nullptr, -1);
  QT::QLabel::setText(v8, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return v11 - __readfsqword(0x28u);
}
