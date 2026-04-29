unsigned __int64 __fastcall sub_30F90(QT::QLineEdit *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  _BYTE v6[8]; // [rsp+8h] [rbp-48h] BYREF
  void *ptr[3]; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v8; // [rsp+28h] [rbp-28h]

  v8 = __readfsqword(0x28u);
  QT::QLineEdit::QLineEdit(this, nullptr);
  *((_QWORD *)this + 5) = a2;
  *(_QWORD *)this = &off_4D578;
  *((_QWORD *)this + 2) = search_bar_t___vtable_at__16;
  *((_QWORD *)this + 6) = a3;
  QT::QString::fromUtf8(ptr, 14, "Search by name");
  QT::QLineEdit::setPlaceholderText(this, ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  ptr[1] = nullptr;
  ptr[0] = &QT::QLineEdit::returnPressed;
  v4 = operator new(0x18u);
  *(_DWORD *)v4 = 1;
  *(_QWORD *)(v4 + 8) = sub_322E0;
  *(_QWORD *)(v4 + 16) = this;
  QT::QObject::connectImpl(v6, this, ptr, this, 0, v4, 0, 0, &QT::QLineEdit::staticMetaObject);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v6);
  QT::QLineEdit::setTextMargins(this, 5, 5, 5, 5);
  QT::QObject::setObjectName(this, "ViewerOverlayWidget", 19);
  return v8 - __readfsqword(0x28u);
}
