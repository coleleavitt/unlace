unsigned __int64 __fastcall sub_47A6B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, const char *a5, double a6)
{
  bool v6; // zf
  __int64 v8; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v9; // [rsp+8h] [rbp-20h]

  v6 = *(_BYTE *)(a1 + 520) == 0;
  v9 = __readfsqword(0x28u);
  if ( !v6 || !*(_QWORD *)(a1 + 512) )
    goto LABEL_5;
  do
  {
    if ( under_debugger )
      BUG();
    interr(2566, a2, a3, a4, a6);
LABEL_5:
    ;
  }
  while ( !a2 );
  sub_478D00((char *)(a1 + 496), a2, a6, a3, a4, a5);
  QT::QObject::connect(
    &v8,
    a2,
    "2closeEventReceived(BaseDockWidget*,QCloseEvent*)",
    a1,
    "1on_dock_close_event(BaseDockWidget*,QCloseEvent*)",
    0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)&v8);
  QT::QObject::connect(
    &v8,
    a2,
    "2user_request_docks_deletion(QList<DockWidget*>, uint32)",
    a1,
    "1on_user_docks_deletion_request(QList<DockWidget*>, uint32)",
    0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)&v8);
  return v9 - __readfsqword(0x28u);
}
