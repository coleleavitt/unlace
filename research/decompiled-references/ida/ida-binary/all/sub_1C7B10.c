__int64 __fastcall sub_1C7B10(QT::QCursor *a1)
{
  _QWORD v2[3]; // [rsp+0h] [rbp-18h] BYREF

  v2[1] = __readfsqword(0x28u);
  v2[0] = QT::QCursor::pos(a1);
  return QT::QWidget::mapFromGlobal(a1, v2);
}
