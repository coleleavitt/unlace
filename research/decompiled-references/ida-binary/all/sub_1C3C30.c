unsigned __int64 __fastcall sub_1C3C30(QT::QWidget *this, __int64 a2, double a3, __m128 a4)
{
  double v4; // xmm0_8
  __int64 v5; // rsi
  _BYTE v7[8]; // [rsp+8h] [rbp-48h] BYREF
  void *ptr[3]; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v9; // [rsp+28h] [rbp-28h]

  v9 = __readfsqword(0x28u);
  (*(void (__fastcall **)(_BYTE *, _QWORD *, _QWORD))(*QT::QCoreApplication::self + 144LL))(
    v7,
    QT::QCoreApplication::self,
    unk_8CA458);
  v4 = QT::QString::fromUtf8(ptr, 15, "Command palette");
  sub_18B7D0(
    this,
    (const QT::QString *)ptr,
    (const QT::QIcon *)v7,
    16,
    (__int64)&word_8CAEC0,
    dword_5E00D0,
    v4,
    a4,
    36864,
    a2);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  QT::QIcon::~QIcon((QT::QIcon *)v7);
  v5 = *((_QWORD *)this + 16);
  qword_8CAEE8 = (__int64)this;
  *(_QWORD *)this = &CommandPalette___vtable;
  *((_QWORD *)this + 2) = CommandPalette___vtable_at__16;
  *((_QWORD *)this + 5) = CommandPalette___vtable_at__40;
  QT::QObject::connect(ptr, v5, "2view_synced()", this, "1on_chooser_view_synced()", 0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)ptr);
  return v9 - __readfsqword(0x28u);
}
