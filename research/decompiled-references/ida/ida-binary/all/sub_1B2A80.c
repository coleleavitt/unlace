unsigned __int64 __fastcall sub_1B2A80(__int64 a1)
{
  int v1; // ebp
  __int64 i; // r13
  QT::QAction *v3; // rbx
  const char *v4; // r12
  size_t v5; // rax
  void *ptr[4]; // [rsp+10h] [rbp-B8h] BYREF
  _BYTE v8[48]; // [rsp+30h] [rbp-98h] BYREF
  _BYTE v9[40]; // [rsp+60h] [rbp-68h] BYREF
  unsigned __int64 v10; // [rsp+88h] [rbp-40h]

  v10 = __readfsqword(0x28u);
  QT::QMenu::QMenu((QT::QMenu *)v8, nullptr);
  QT::QObject::setObjectName(v8, "cli_popup_menu", 14);
  v1 = 0;
  for ( i = 0; v1 < (unsigned __int64)xmmword_8CAE08; i = v1 )
  {
    v3 = (QT::QAction *)operator new(0x10u);
    QT::QAction::QAction(v3, (QT::QObject *)v8);
    QT::QVariant::QVariant((QT::QVariant *)v9, v1);
    QT::QAction::setData(v3, (const QT::QVariant *)v9);
    QT::QVariant::~QVariant((QT::QVariant *)v9);
    v4 = *(const char **)(**((_QWORD **)qword_8CAE00 + i) + 24LL);
    v5 = 0;
    if ( v4 )
      v5 = strlen(*(const char **)(**((_QWORD **)qword_8CAE00 + i) + 24LL));
    QT::QString::fromUtf8(ptr, v5, v4);
    QT::QAction::setText(v3, (const QT::QString *)ptr);
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
    QT::QObject::connect(ptr, v3, "2triggered()", a1, "1switch_cli_clicked()", 0);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)ptr);
    QT::QWidget::addAction((QT::QWidget *)v8, v3);
    ++v1;
  }
  ptr[0] = (void *)QT::QCursor::pos((QT::QCursor *)v8);
  QT::QMenu::exec(v8, ptr, 0);
  QT::QMenu::~QMenu((QT::QMenu *)v8);
  return v10 - __readfsqword(0x28u);
}
