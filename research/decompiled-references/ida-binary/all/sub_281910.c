unsigned __int64 __fastcall sub_281910(QT::QWidget *this, __int64 a2)
{
  QT::QWidget **v2; // rax
  QT::QAbstractButton *v3; // r12
  QT::QAbstractButton *v4; // r12
  void *ptr[3]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v7; // [rsp+18h] [rbp-30h]

  v7 = __readfsqword(0x28u);
  sub_53A8A0(this, a2, 0);
  *(_QWORD *)this = &EULADialog___vtable;
  *((_QWORD *)this + 2) = EULADialog___vtable_at__16;
  v2 = (QT::QWidget **)operator new(0x20u);
  *((_QWORD *)this + 6) = v2;
  sub_281670(v2, this);
  v3 = (QT::QAbstractButton *)QT::QDialogButtonBox::button(*(_QWORD *)(*((_QWORD *)this + 6) + 24LL), 0x4000);
  QT::QMetaObject::tr((QT::QMetaObject *)ptr, off_884180, "I Agree", 0);
  QT::QAbstractButton::setText(v3, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v4 = (QT::QAbstractButton *)QT::QDialogButtonBox::button(*(_QWORD *)(*((_QWORD *)this + 6) + 24LL), &stru_10000);
  QT::QMetaObject::tr((QT::QMetaObject *)ptr, off_884180, "I Disagree", 0);
  QT::QAbstractButton::setText(v4, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  QT::QLayout::setContentsMargins(*(QT::QLayout **)(*((_QWORD *)this + 6) + 8LL), 10, 10, 10, 10);
  QT::QWidget::setLayout(this, *(QT::QLayout **)(*((_QWORD *)this + 6) + 8LL));
  QT::QWidget::setWindowFlags(this, *(_DWORD *)(*((_QWORD *)this + 4) + 12LL) & 0xF7FEFFFF);
  QT::QObject::connect(ptr, *(_QWORD *)(*((_QWORD *)this + 6) + 24LL), "2accepted()", this, "1accept()", 0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)ptr);
  QT::QObject::connect(ptr, *(_QWORD *)(*((_QWORD *)this + 6) + 24LL), "2rejected()", this, "1reject()", 0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)ptr);
  return v7 - __readfsqword(0x28u);
}
