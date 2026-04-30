unsigned __int64 __fastcall sub_38C440(QT::QLabel **a1, QT::QWidget *a2)
{
  QT::QLabel *v2; // rbp
  QT::QGroupBox *v3; // rbp
  QT::QAbstractButton *v4; // rbp
  QT::QAbstractButton *v5; // rbp
  __int64 v6; // r14
  void (__fastcall *v7)(__int64, _QWORD, _BYTE *); // r15
  __int64 v8; // r14
  void (__fastcall *v9)(__int64, _QWORD, _BYTE *); // r15
  __int64 v10; // r12
  void (__fastcall *v11)(__int64, _QWORD, _BYTE *); // r13
  void *ptr[4]; // [rsp+0h] [rbp-88h] BYREF
  _BYTE v14[40]; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v15; // [rsp+48h] [rbp-40h]

  v15 = __readfsqword(0x28u);
  QT::QCoreApplication::translate(
    (QT::QCoreApplication *)ptr,
    "TStructureOffsetsForm",
    "Structure offsets",
    nullptr,
    -1);
  QT::QWidget::setWindowTitle(a2, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v2 = a1[8];
  QT::QCoreApplication::translate((QT::QCoreApplication *)ptr, "TStructureOffsetsForm", "&Offset delta:", nullptr, -1);
  QT::QLabel::setText(v2, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v3 = a1[10];
  QT::QCoreApplication::translate((QT::QCoreApplication *)ptr, "TStructureOffsetsForm", "Options", nullptr, -1);
  QT::QGroupBox::setTitle(v3, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v4 = a1[14];
  QT::QCoreApplication::translate(
    (QT::QCoreApplication *)ptr,
    "TStructureOffsetsForm",
    "&Hide sub structures without sub unions",
    nullptr,
    -1);
  QT::QAbstractButton::setText(v4, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v5 = a1[15];
  QT::QCoreApplication::translate(
    (QT::QCoreApplication *)ptr,
    "TStructureOffsetsForm",
    "&Force zero offset field",
    nullptr,
    -1);
  QT::QAbstractButton::setText(v5, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v6 = QT::QTableWidget::horizontalHeaderItem(a1[18], 0);
  QT::QCoreApplication::translate((QT::QCoreApplication *)ptr, "TStructureOffsetsForm", "Operand", nullptr, -1);
  v7 = *(void (__fastcall **)(__int64, _QWORD, _BYTE *))(*(_QWORD *)v6 + 32LL);
  QT::QVariant::QVariant((QT::QVariant *)v14, (const QT::QString *)ptr);
  v7(v6, 0, v14);
  QT::QVariant::~QVariant((QT::QVariant *)v14);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v8 = QT::QTableWidget::horizontalHeaderItem(a1[18], 1);
  QT::QCoreApplication::translate((QT::QCoreApplication *)ptr, "TStructureOffsetsForm", "Value", nullptr, -1);
  v9 = *(void (__fastcall **)(__int64, _QWORD, _BYTE *))(*(_QWORD *)v8 + 32LL);
  QT::QVariant::QVariant((QT::QVariant *)v14, (const QT::QString *)ptr);
  v9(v8, 0, v14);
  QT::QVariant::~QVariant((QT::QVariant *)v14);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v10 = QT::QTableWidget::horizontalHeaderItem(a1[18], 2);
  QT::QCoreApplication::translate((QT::QCoreApplication *)ptr, "TStructureOffsetsForm", "Name", nullptr, -1);
  v11 = *(void (__fastcall **)(__int64, _QWORD, _BYTE *))(*(_QWORD *)v10 + 32LL);
  QT::QVariant::QVariant((QT::QVariant *)v14, (const QT::QString *)ptr);
  v11(v10, 0, v14);
  QT::QVariant::~QVariant((QT::QVariant *)v14);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return v15 - __readfsqword(0x28u);
}
