unsigned __int64 __fastcall sub_17EDE0(_QWORD *a1, __int64 a2)
{
  QT::QAction *v2; // rbx
  __int64 v4; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v5; // [rsp+8h] [rbp-30h]

  v5 = __readfsqword(0x28u);
  sub_530A50();
  *a1 = &ida_action_t___vtable;
  v2 = (QT::QAction *)operator new(0x10u);
  QT::QAction::QAction(v2, (QT::QObject *)QT::QCoreApplication::self);
  *(_QWORD *)v2 = &off_86F9C8;
  QT::QAction::setMenuRole(v2, 0);
  if ( qword_8CD748 )
    QT::QWidget::addAction(qword_8CD748, v2);
  if ( *(int *)(a2 + 56) >= 0 )
  {
    (*(void (__fastcall **)(__int64 *))(*QT::QCoreApplication::self + 136LL))(&v4);
    QT::QAction::setIcon(v2, (const QT::QIcon *)&v4);
    QT::QIcon::~QIcon((QT::QIcon *)&v4);
  }
  sub_531E00(a1, v2);
  return v5 - __readfsqword(0x28u);
}
