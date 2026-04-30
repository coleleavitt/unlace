__int64 __fastcall sub_4B8B20(char *a1, int a2)
{
  char *v2; // r12
  _QWORD _0[9]; // [rsp+0h] [rbp+0h] BYREF

  _0[5] = __readfsqword(0x28u);
  v2 = sub_4B5570(a1);
  QT::QVariant::QVariant((QT::QVariant *)_0, a2 & 0x400001C0);
  QT::QObject::doSetProperty((QT::QObject *)v2, "close_flags", (const QT::QVariant *)_0, (QT::QVariant *)_0);
  QT::QVariant::~QVariant((QT::QVariant *)_0);
  return a2 & 0xBFFFFE3F;
}
