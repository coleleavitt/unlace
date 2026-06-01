_QWORD *__fastcall sub_17EEE0(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  _QWORD v4[5]; // [rsp+0h] [rbp-28h] BYREF

  v4[1] = __readfsqword(0x28u);
  v2 = (_QWORD *)operator new(0xD0u);
  sub_17EDE0(v2, a2);
  QT::QObject::connect(v4, v2[24], "2triggered()", QT::QCoreApplication::self, "1action_triggered()", 0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v4);
  return v2;
}
