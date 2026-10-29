unsigned __int64 __fastcall sub_16DAF0(QT::QGroupBox **a1, QT::QWidget *a2)
{
  QT::QGroupBox *v3; // rdi
  QT::QLabel *v4; // rdi
  QT::QLabel *v5; // r13
  QT::QLabel *v6; // r13
  QT::QLabel *v7; // r13
  QT::QLabel *v8; // rdi
  QT::QLabel *v9; // r13
  QT::QLabel *v10; // r13
  QT::QLabel *v11; // rbp
  void *ptr[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v14; // [rsp+10h] [rbp-38h]
  unsigned __int64 v15; // [rsp+18h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  QT::QCoreApplication::translate((QT::QCoreApplication *)ptr, "AboutDialog", "About", nullptr, -1);
  QT::QWidget::setWindowTitle(a2, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v3 = *a1;
  v14 = 0;
  *(_OWORD *)ptr = 0;
  QT::QGroupBox::setTitle(v3, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v4 = a1[4];
  v14 = 0;
  *(_OWORD *)ptr = 0;
  QT::QLabel::setText(v4, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v5 = a1[6];
  QT::QCoreApplication::translate(
    (QT::QCoreApplication *)ptr,
    "AboutDialog",
    "<b>IDA - The Interactive Disassembler</b>",
    nullptr,
    -1);
  QT::QLabel::setText(v5, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v6 = a1[7];
  QT::QCoreApplication::translate((QT::QCoreApplication *)ptr, "AboutDialog", "Version", nullptr, -1);
  QT::QLabel::setText(v6, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v7 = a1[8];
  QT::QCoreApplication::translate((QT::QCoreApplication *)ptr, "AboutDialog", "(c) 2026 Hex-Rays SA", nullptr, -1);
  QT::QLabel::setText(v7, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v8 = a1[9];
  v14 = 0;
  *(_OWORD *)ptr = 0;
  QT::QLabel::setText(v8, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v9 = a1[10];
  QT::QCoreApplication::translate((QT::QCoreApplication *)ptr, "AboutDialog", "License:", nullptr, -1);
  QT::QLabel::setText(v9, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v10 = a1[11];
  QT::QCoreApplication::translate((QT::QCoreApplication *)ptr, "AboutDialog", "Experimental version", nullptr, -1);
  QT::QLabel::setText(v10, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v11 = a1[12];
  QT::QCoreApplication::translate(
    (QT::QCoreApplication *)ptr,
    "AboutDialog",
    "<b><a href=\"https://www.hex-rays.com/\">www.hex-rays.com</a></b>",
    nullptr,
    -1);
  QT::QLabel::setText(v11, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return v15 - __readfsqword(0x28u);
}
