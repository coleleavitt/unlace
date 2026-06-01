unsigned __int64 __fastcall sub_18E500(_QWORD *a1, QT::QWidget *a2)
{
  QT::QLabel *v2; // r13
  QT::QLabel *v3; // r13
  QT::QLabel *v4; // r13
  QT::QLabel *v5; // r13
  QT::QLabel *v6; // r13
  QT::QLabel *v7; // r13
  QT::QAbstractButton *v8; // r13
  QT::QAbstractButton *v9; // r13
  QT::QAbstractButton *v10; // r13
  QT::QLabel *v11; // r13
  QT::QLabel *v12; // r13
  QT::QLabel *v13; // rbp
  void *ptr[3]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v16; // [rsp+18h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  QT::QCoreApplication::translate((QT::QCoreApplication *)ptr, "data_container", "Form", nullptr, -1);
  QT::QWidget::setWindowTitle(a2, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v2 = (QT::QLabel *)a1[3];
  QT::QCoreApplication::translate((QT::QCoreApplication *)ptr, "data_container", "Int64", nullptr, -1);
  QT::QLabel::setText(v2, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v3 = (QT::QLabel *)a1[4];
  QT::QCoreApplication::translate((QT::QCoreApplication *)ptr, "data_container", "Int8", nullptr, -1);
  QT::QLabel::setText(v3, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v4 = (QT::QLabel *)a1[7];
  QT::QCoreApplication::translate((QT::QCoreApplication *)ptr, "data_container", "Int32", nullptr, -1);
  QT::QLabel::setText(v4, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v5 = (QT::QLabel *)a1[10];
  QT::QCoreApplication::translate((QT::QCoreApplication *)ptr, "data_container", "Int16", nullptr, -1);
  QT::QLabel::setText(v5, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v6 = (QT::QLabel *)a1[11];
  QT::QCoreApplication::translate((QT::QCoreApplication *)ptr, "data_container", "Float", nullptr, -1);
  QT::QLabel::setText(v6, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v7 = (QT::QLabel *)a1[13];
  QT::QCoreApplication::translate((QT::QCoreApplication *)ptr, "data_container", "Double", nullptr, -1);
  QT::QLabel::setText(v7, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v8 = (QT::QAbstractButton *)a1[17];
  QT::QCoreApplication::translate((QT::QCoreApplication *)ptr, "data_container", "Signed", nullptr, -1);
  QT::QAbstractButton::setText(v8, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v9 = (QT::QAbstractButton *)a1[18];
  QT::QCoreApplication::translate((QT::QCoreApplication *)ptr, "data_container", "Hex", nullptr, -1);
  QT::QAbstractButton::setText(v9, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v10 = (QT::QAbstractButton *)a1[19];
  QT::QCoreApplication::translate((QT::QCoreApplication *)ptr, "data_container", "Little endian", nullptr, -1);
  QT::QAbstractButton::setText(v10, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v11 = (QT::QLabel *)a1[21];
  QT::QCoreApplication::translate((QT::QCoreApplication *)ptr, "data_container", "ISO-8859-1", nullptr, -1);
  QT::QLabel::setText(v11, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v12 = (QT::QLabel *)a1[23];
  QT::QCoreApplication::translate((QT::QCoreApplication *)ptr, "data_container", "UTF-8", nullptr, -1);
  QT::QLabel::setText(v12, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v13 = (QT::QLabel *)a1[25];
  QT::QCoreApplication::translate((QT::QCoreApplication *)ptr, "data_container", "UTF-16", nullptr, -1);
  QT::QLabel::setText(v13, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return v16 - __readfsqword(0x28u);
}
