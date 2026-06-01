unsigned __int64 __fastcall sub_1E4C70(QT::QSplitter *this, __int64 a2, __int64 a3, int a4)
{
  QT::QWidget *v6; // rbp
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // rsi
  QT::QSplitter *v11; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v12; // [rsp+8h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  sub_2ED730(this);
  *((_BYTE *)this + 244) = 0;
  *((_DWORD *)this + 54) = 0;
  *((_QWORD *)this + 31) = 0;
  *(_QWORD *)this = &CustomCodeViewer___vtable;
  *((_QWORD *)this + 2) = CustomCodeViewer___vtable_at__16;
  *((_DWORD *)this + 55) = a4;
  *((_QWORD *)this + 26) = 0;
  *((_DWORD *)this + 56) = 0;
  *((_QWORD *)this + 29) = 10;
  *((_DWORD *)this + 60) = 0;
  *((_BYTE *)this + 256) = 0;
  *((_OWORD *)this + 11) = 0;
  *((_OWORD *)this + 12) = 0;
  v6 = (QT::QWidget *)operator new(0x40u);
  sub_1E45F0(v6, (__int64)this);
  sub_2EE0C0(this);
  v7 = *(_QWORD *)(a3 + 888);
  QT::QObject::connect(&v11, a3, "2placeChanged(const place_t *)", v6, "1on_cim_place_changed(const place_t *)", 0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)&v11);
  QT::QObject::connect(&v11, a3, "2cursorChanged()", v6, "1check_line_info_ranges()", 0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)&v11);
  QT::QObject::connect(&v11, v7, "2model_loaded()", v6, "1check_line_info_ranges()", 0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)&v11);
  QT::QWidget::setFont(v6, (const QT::QFont *)(*(_QWORD *)(a3 + 32) + 56LL));
  sub_1E4A40((__int64)this);
  v8 = xmmword_8CB458;
  v11 = this;
  v9 = qword_8CB450;
  if ( *((_QWORD *)&xmmword_8CB458 + 1) < (unsigned __int64)(xmmword_8CB458 + 1) )
  {
    qword_8CB450 = qvector_reserve(&qword_8CB450, qword_8CB450, xmmword_8CB458 + 1, 8);
    v9 = qword_8CB450;
    v8 = xmmword_8CB458;
  }
  *(_QWORD *)(v9 + 8 * v8) = this;
  *(_QWORD *)&xmmword_8CB458 = xmmword_8CB458 + 1;
  return v12 - __readfsqword(0x28u);
}
