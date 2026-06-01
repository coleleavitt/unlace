unsigned __int64 __fastcall sub_3E8840(_QWORD *a1, QT::QWidget *a2)
{
  QT::QAbstractButton *v3; // r13
  QT::QLabel *v4; // r13
  QT::QAbstractButton *v5; // r13
  QT::QLabel *v6; // r13
  QT::QAbstractButton *v7; // r13
  QT::QLabel *v8; // r13
  QT::QAbstractButton *v9; // r13
  QT::QLabel *v10; // r13
  QT::QLabel *v11; // rdi
  QT::QAbstractButton *v12; // rbp
  void *ptr[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v15; // [rsp+10h] [rbp-38h]
  unsigned __int64 v16; // [rsp+18h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  QT::QCoreApplication::translate((QT::QCoreApplication *)ptr, "TWelcomeForm", "IDA: Quick start", nullptr, -1);
  QT::QWidget::setWindowTitle(a2, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v3 = (QT::QAbstractButton *)a1[4];
  QT::QCoreApplication::translate((QT::QCoreApplication *)ptr, "TWelcomeForm", "&New", nullptr, -1);
  QT::QAbstractButton::setText(v3, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v4 = (QT::QLabel *)a1[5];
  QT::QCoreApplication::translate((QT::QCoreApplication *)ptr, "TWelcomeForm", "Disassemble a new file", nullptr, -1);
  QT::QLabel::setText(v4, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v5 = (QT::QAbstractButton *)a1[6];
  QT::QCoreApplication::translate((QT::QCoreApplication *)ptr, "TWelcomeForm", "&Go", nullptr, -1);
  QT::QAbstractButton::setText(v5, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v6 = (QT::QLabel *)a1[7];
  QT::QCoreApplication::translate((QT::QCoreApplication *)ptr, "TWelcomeForm", "Work on your own", nullptr, -1);
  QT::QLabel::setText(v6, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v7 = (QT::QAbstractButton *)a1[8];
  QT::QCoreApplication::translate((QT::QCoreApplication *)ptr, "TWelcomeForm", "&Previous", nullptr, -1);
  QT::QAbstractButton::setText(v7, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v8 = (QT::QLabel *)a1[9];
  QT::QCoreApplication::translate((QT::QCoreApplication *)ptr, "TWelcomeForm", "Load the old disassembly", nullptr, -1);
  QT::QLabel::setText(v8, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v9 = (QT::QAbstractButton *)a1[10];
  QT::QCoreApplication::translate((QT::QCoreApplication *)ptr, "TWelcomeForm", "&Remote", nullptr, -1);
  QT::QAbstractButton::setText(v9, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v10 = (QT::QLabel *)a1[11];
  QT::QCoreApplication::translate((QT::QCoreApplication *)ptr, "TWelcomeForm", "Open remote file", nullptr, -1);
  QT::QLabel::setText(v10, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v11 = (QT::QLabel *)a1[13];
  v15 = 0;
  *(_OWORD *)ptr = 0;
  QT::QLabel::setText(v11, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v12 = (QT::QAbstractButton *)a1[15];
  QT::QCoreApplication::translate((QT::QCoreApplication *)ptr, "TWelcomeForm", "&Display at startup", nullptr, -1);
  QT::QAbstractButton::setText(v12, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return v16 - __readfsqword(0x28u);
}
