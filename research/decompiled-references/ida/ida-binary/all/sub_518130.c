unsigned __int64 __fastcall sub_518130(QT::QAction *this, QT::QAction *a2, QT::QObject *a3)
{
  __int64 _0; // [rsp+0h] [rbp+0h] BYREF
  unsigned __int64 vars8; // [rsp+8h] [rbp+8h]

  vars8 = __readfsqword(0x28u);
  QT::QAction::QAction(this, a3);
  *(_QWORD *)this = &qaction_shadow_t___vtable;
  QT::QAction::icon((QT::QAction *)&_0);
  QT::QAction::setIcon(this, (const QT::QIcon *)&_0);
  QT::QIcon::~QIcon((QT::QIcon *)&_0);
  sub_517B40(this, a2);
  QT::QObject::connect(&_0, this, "2triggered()", a2, "2triggered()", 0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)&_0);
  QT::QObject::connect(&_0, a2, "2changed()", this, "1on_sync_required()", 0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)&_0);
  return vars8 - __readfsqword(0x28u);
}
