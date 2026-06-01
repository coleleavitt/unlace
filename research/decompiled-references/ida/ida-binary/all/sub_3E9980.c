unsigned __int64 __fastcall sub_3E9980(QT::QWidget *this, __int64 a2)
{
  QT::QWidget **v3; // rax
  QT::QLabel *v4; // r14
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __m128i *p_ptr; // rsi
  _BYTE v10[8]; // [rsp+8h] [rbp-70h] BYREF
  char *v11; // [rsp+10h] [rbp-68h] BYREF
  __int64 v12[3]; // [rsp+18h] [rbp-60h]
  __m128i ptr; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v14; // [rsp+48h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  sub_53A8A0(this, a2, 0);
  *(_QWORD *)this = &TWelcomeForm___vtable;
  *((_QWORD *)this + 2) = TWelcomeForm___vtable_at__16;
  v3 = (QT::QWidget **)operator new(0x80u);
  *((_QWORD *)this + 6) = v3;
  *((_QWORD *)this + 10) = 0;
  *((_OWORD *)this + 4) = 0;
  sub_3E8C40(v3, this);
  QT::QWidget::setWindowFlags(this, *(_DWORD *)(*((_QWORD *)this + 4) + 12LL) & 0xFFFEFFFF);
  QT::QLayout::setContentsMargins(*(QT::QLayout **)(*((_QWORD *)this + 6) + 8LL), 10, 10, 10, 10);
  QT::QWidget::setLayout(this, *(QT::QLayout **)(*((_QWORD *)this + 6) + 8LL));
  QT::QObject::connect(&ptr, *(_QWORD *)(*((_QWORD *)this + 6) + 48LL), "2clicked()", this, "1reject()", 0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)&ptr);
  QT::QObject::installEventFilter(*(QT::QObject **)(*((_QWORD *)this + 6) + 112LL), this);
  (*(void (__fastcall **)(_BYTE *, _QWORD *, __int64))(*QT::QCoreApplication::self + 160LL))(
    v10,
    QT::QCoreApplication::self,
    2);
  v4 = *(QT::QLabel **)(*((_QWORD *)this + 6) + 104LL);
  QT::QIcon::availableSizes(&ptr, v10, 0, 1);
  if ( !ptr.m128i_i64[0] || *(int *)ptr.m128i_i64[0] > 1 )
    sub_170CA0(&ptr, 0, 0, 0, v5, v6);
  QT::QIcon::pixmap(&v11, v10, ptr.m128i_i64[1], 0, 1);
  QT::QLabel::setPixmap(v4, (const QT::QPixmap *)&v11);
  QT::QPixmap::~QPixmap((QT::QPixmap *)&v11);
  if ( ptr.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)ptr.m128i_i64[0], 1u) )
    free((void *)ptr.m128i_i64[0]);
  *((_DWORD *)this + 14) = *(_DWORD *)(*((_QWORD *)this + 4) + 32LL) + 1 - *(_DWORD *)(*((_QWORD *)this + 4) + 24LL);
  v7 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 6) + 112LL) + 32LL);
  *((_DWORD *)this + 15) = *(_DWORD *)(v7 + 32) + 1 - *(_DWORD *)(v7 + 24);
  sub_3E94D0((__int64)this);
  p_ptr = nullptr;
  v11 = nullptr;
  *(_OWORD *)v12 = 0;
  if ( (unsigned __int8)reg_bin_op("TWelcomeForm", 0, &v11, 0, "Geometry", 2) )
  {
    QT::QByteArray::QByteArray((QT::QByteArray *)&ptr, v11, v12[0]);
    p_ptr = &ptr;
    QT::QWidget::restoreGeometry(this, (const QT::QByteArray *)&ptr);
    if ( ptr.m128i_i64[0] )
    {
      if ( !_InterlockedSub((volatile signed __int32 *)ptr.m128i_i64[0], 1u) )
        free((void *)ptr.m128i_i64[0]);
    }
  }
  if ( v11 )
  {
    v12[0] = 0;
    qfree(v11, p_ptr->m128i_i8);
  }
  QT::QIcon::~QIcon((QT::QIcon *)v10);
  return v14 - __readfsqword(0x28u);
}
