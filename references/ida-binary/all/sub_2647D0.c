unsigned __int64 __fastcall sub_2647D0(QT::QWidget *this, __int64 a2)
{
  __int64 *v3; // rax
  QT::QLabel *v4; // r14
  __int64 v5; // r8
  __int64 v6; // r9
  _BYTE v8[8]; // [rsp+8h] [rbp-70h] BYREF
  _BYTE v9[32]; // [rsp+10h] [rbp-68h] BYREF
  __m128i ptr; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v11; // [rsp+48h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  sub_53A8A0(this, a2, 0);
  *(_QWORD *)this = &TDemoBox___vtable;
  *((_QWORD *)this + 2) = TDemoBox___vtable_at__16;
  v3 = (__int64 *)operator new(0x50u);
  *((_QWORD *)this + 6) = v3;
  sub_2643A0(v3, this);
  QT::QLayout::setContentsMargins(*(QT::QLayout **)(*((_QWORD *)this + 6) + 32LL), 10, 10, 10, 10);
  QT::QWidget::setLayout(
    *(QT::QWidget **)(*((_QWORD *)this + 6) + 16LL),
    *(QT::QLayout **)(*((_QWORD *)this + 6) + 32LL));
  QT::QLayout::setContentsMargins(*(QT::QLayout **)(*((_QWORD *)this + 6) + 8LL), 10, 10, 10, 10);
  QT::QWidget::setLayout(this, *(QT::QLayout **)(*((_QWORD *)this + 6) + 8LL));
  (*(void (__fastcall **)(_BYTE *, _QWORD *, __int64))(*QT::QCoreApplication::self + 160LL))(
    v8,
    QT::QCoreApplication::self,
    2);
  v4 = *(QT::QLabel **)(*((_QWORD *)this + 6) + 40LL);
  QT::QIcon::availableSizes(&ptr, v8, 0, 1);
  if ( !ptr.m128i_i64[0] || *(int *)ptr.m128i_i64[0] > 1 )
    sub_170CA0(&ptr, 0, 0, 0, v5, v6);
  QT::QIcon::pixmap(v9, v8, ptr.m128i_i64[1], 0, 1);
  QT::QLabel::setPixmap(v4, (const QT::QPixmap *)v9);
  QT::QPixmap::~QPixmap((QT::QPixmap *)v9);
  if ( ptr.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)ptr.m128i_i64[0], 1u) )
    free((void *)ptr.m128i_i64[0]);
  QT::QLabel::setTextFormat(*(_QWORD *)(*((_QWORD *)this + 6) + 48LL), 2);
  QT::QLabel::setTextFormat(*(_QWORD *)(*((_QWORD *)this + 6) + 64LL), 2);
  QT::QObject::connect(&ptr, *(_QWORD *)(*((_QWORD *)this + 6) + 72LL), "2accepted()", this, "1accept()", 0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)&ptr);
  QT::QIcon::~QIcon((QT::QIcon *)v8);
  return v11 - __readfsqword(0x28u);
}
