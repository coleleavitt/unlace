unsigned __int64 __fastcall sub_34A1E0(QT::QObject *this, QT::QWidget *a2)
{
  void *ptr[3]; // [rsp+0h] [rbp+0h] BYREF
  unsigned __int64 vars18; // [rsp+18h] [rbp+18h]

  vars18 = __readfsqword(0x28u);
  QT::QPlainTextEdit::QPlainTextEdit(this, a2);
  *((_QWORD *)this + 7) = 0;
  *((_DWORD *)this + 16) = 0;
  *(_OWORD *)((char *)this + 40) = 0;
  *((_QWORD *)this + 2) = TNoteBox___vtable_at__16;
  *(_QWORD *)this = &TNoteBox___vtable;
  (*(void (__fastcall **)(void **, _QWORD *, _QWORD))(*QT::QCoreApplication::self + 144LL))(
    ptr,
    QT::QCoreApplication::self,
    unk_8CA110);
  QT::QWidget::setWindowIcon(this, (const QT::QIcon *)ptr);
  QT::QIcon::~QIcon((QT::QIcon *)ptr);
  QT::QString::fromUtf8(ptr, 16, "Database notepad");
  QT::QWidget::setWindowTitle(this, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  sub_4EBBA0(this);
  QT::QObject::setObjectName(this, "TNoteBoxQPlainTextEdit", 22);
  QT::QWidget::setContextMenuPolicy(this, 3);
  QT::QObject::connect(
    ptr,
    this,
    "2customContextMenuRequested(const QPoint &)",
    this,
    "1custom_context_menu_requested(const QPoint &)",
    0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)ptr);
  return vars18 - __readfsqword(0x28u);
}
