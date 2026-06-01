unsigned __int64 __fastcall sub_4436A0(QT::QWidget *this, __int64 a2, const char *a3, _QWORD *a4)
{
  size_t v6; // rax
  QT::QVBoxLayout *v7; // r13
  __int64 v8; // r14
  __m128i *v9; // rax
  __m128i v10; // xmm0
  _BYTE v13[8]; // [rsp+18h] [rbp-68h] BYREF
  __m128i v14; // [rsp+20h] [rbp-60h] BYREF
  void *ptr[3]; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int64 v16; // [rsp+48h] [rbp-38h]

  v16 = __readfsqword(0x28u);
  sub_53A8A0(this, a2, 0);
  *((_QWORD *)this + 6) = a4;
  *((_DWORD *)this + 14) = -1;
  *((_QWORD *)this + 2) = worklists_dialog_t___vtable_at__16;
  v6 = 0;
  *(_QWORD *)this = &worklists_dialog_t___vtable;
  if ( a3 )
    v6 = strlen(a3);
  QT::QString::fromUtf8(ptr, v6, a3);
  QT::QWidget::setWindowTitle(this, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v7 = (QT::QVBoxLayout *)operator new(0x20u);
  QT::QVBoxLayout::QVBoxLayout(v7);
  QT::QBoxLayout::addWidget(v7, a4, 0, 0);
  v8 = *((_QWORD *)this + 6);
  v14.m128i_i64[1] = 0;
  v14.m128i_i64[0] = (__int64)sub_443480;
  ptr[1] = nullptr;
  ptr[0] = &QT::QAbstractItemView::doubleClicked;
  v9 = (__m128i *)operator new(0x20u);
  v10 = _mm_load_si128(&v14);
  v9->m128i_i32[0] = 1;
  v9[1] = v10;
  v9->m128i_i64[1] = (__int64)sub_4414E0;
  QT::QObject::connectImpl(v13, v8, ptr, this, &v14, v9, 0, 0, &QT::QAbstractItemView::staticMetaObject);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v13);
  ptr[0] = (void *)(*(__int64 (__fastcall **)(_QWORD *))(*a4 + 112LL))(a4);
  LODWORD(ptr[0]) = sub_518D60(64, a4);
  QT::QWidget::resize(this, ptr);
  QT::QWidget::setLayout(this, v7);
  a4[317] = this;
  return v16 - __readfsqword(0x28u);
}
