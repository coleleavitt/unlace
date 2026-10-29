unsigned __int64 __fastcall sub_264130(_QWORD *a1, QT::QWidget *a2)
{
  QT::QGroupBox *v3; // rdi
  QT::QLabel *v4; // rdi
  QT::QLabel *v5; // r13
  QT::QLabel *v6; // r13
  QT::QLabel *v7; // rbp
  void *ptr[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v10; // [rsp+10h] [rbp-38h]
  unsigned __int64 v11; // [rsp+18h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  QT::QCoreApplication::translate((QT::QCoreApplication *)ptr, "TDemoBox", "Dialog", nullptr, -1);
  QT::QWidget::setWindowTitle(a2, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v3 = (QT::QGroupBox *)a1[2];
  v10 = 0;
  *(_OWORD *)ptr = 0;
  QT::QGroupBox::setTitle(v3, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v4 = (QT::QLabel *)a1[5];
  v10 = 0;
  *(_OWORD *)ptr = 0;
  QT::QLabel::setText(v4, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v5 = (QT::QLabel *)a1[6];
  QT::QCoreApplication::translate(
    (QT::QCoreApplication *)ptr,
    "TDemoBox",
    "<b>Thank you for using our demo version!</b>",
    nullptr,
    -1);
  QT::QLabel::setText(v5, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v6 = (QT::QLabel *)a1[7];
  QT::QCoreApplication::translate(
    (QT::QCoreApplication *)ptr,
    "TDemoBox",
    "For information about purchases please visit:",
    nullptr,
    -1);
  QT::QLabel::setText(v6, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v7 = (QT::QLabel *)a1[8];
  QT::QCoreApplication::translate(
    (QT::QCoreApplication *)ptr,
    "TDemoBox",
    "<b><a href=\"https://www.hex-rays.com/order\">https://www.hex-rays.com/order</a></b>",
    nullptr,
    -1);
  QT::QLabel::setText(v7, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return v11 - __readfsqword(0x28u);
}
