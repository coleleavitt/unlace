unsigned __int64 __fastcall sub_37E0A0(QT::QWidget *this, __int64 a2, double a3, __m128 a4)
{
  double v4; // xmm0_8
  _BYTE v6[8]; // [rsp+8h] [rbp-48h] BYREF
  void *ptr[3]; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v8; // [rsp+28h] [rbp-28h]

  v8 = __readfsqword(0x28u);
  (*(void (__fastcall **)(_BYTE *, _QWORD *, _QWORD))(*QT::QCoreApplication::self + 144LL))(
    v6,
    QT::QCoreApplication::self,
    unk_8CA1F0);
  v4 = QT::QString::fromUtf8(ptr, 12, "Shortcuts...");
  sub_18B7D0(
    this,
    (const QT::QString *)ptr,
    (const QT::QIcon *)v6,
    63,
    (__int64)&word_8CF138,
    dword_5E9130,
    v4,
    a4,
    0,
    a2);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  QT::QIcon::~QIcon((QT::QIcon *)v6);
  qword_8CF140 = (__int64)this;
  *(_QWORD *)this = &ShortcutEditor___vtable;
  *((_QWORD *)this + 2) = ShortcutEditor___vtable_at__16;
  *((_QWORD *)this + 5) = ShortcutEditor___vtable_at__40;
  return v8 - __readfsqword(0x28u);
}
