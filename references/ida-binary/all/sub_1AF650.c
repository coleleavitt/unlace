unsigned __int64 __fastcall sub_1AF650(QT::QObject *a1)
{
  int v1; // eax
  _BYTE v3[40]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v4; // [rsp+28h] [rbp-20h]

  v4 = __readfsqword(0x28u);
  QT::QObject::sender(a1);
  QT::QAction::data((QT::QAction *)v3);
  v1 = QT::QVariant::toInt((QT::QVariant *)v3, nullptr);
  sub_1AF250(v1, 1);
  QT::QVariant::~QVariant((QT::QVariant *)v3);
  return v4 - __readfsqword(0x28u);
}
