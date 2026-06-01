unsigned __int64 __fastcall sub_50FFF0(QT::QWidget *this, const QT::QString *a2)
{
  QT::QWidget *v2; // r14
  __int64 v3; // r14
  volatile signed __int32 *v4; // rax
  const QT::QObject *v5; // rsi
  __int64 v6; // r14
  __m128i *v7; // rax
  __m128i v8; // xmm0
  _BYTE v10[8]; // [rsp+8h] [rbp-58h] BYREF
  __m128i v11; // [rsp+10h] [rbp-50h] BYREF
  void *ptr[3]; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int64 v13; // [rsp+38h] [rbp-28h]

  v13 = __readfsqword(0x28u);
  sub_50FBA0((__int64)this);
  *(_QWORD *)this = &text_area_container_t___vtable;
  *((_QWORD *)this + 2) = text_area_container_t___vtable_at__16;
  v2 = (QT::QWidget *)operator new(0xB8u);
  sub_529BA0(v2);
  sub_50FDE0(this, a2, (__int64)v2);
  v3 = operator new(0x28u);
  QT::QString::fromUtf8(ptr, 15, "Line:0\tColumn:0");
  sub_53BA20(v3, ptr, 0);
  v4 = (volatile signed __int32 *)ptr[0];
  *((_QWORD *)this + 8) = v3;
  if ( v4 )
  {
    if ( !_InterlockedSub(v4, 1u) )
      free(ptr[0]);
    v3 = *((_QWORD *)this + 8);
  }
  QT::QBoxLayout::addWidget(*((_QWORD *)this + 5), v3, 0, 0);
  v5 = *((const QT::QObject **)this + 7);
  v11.m128i_i64[1] = 0;
  v11.m128i_i64[0] = (__int64)sub_5101B0;
  v6 = QT::QMetaObject::cast((QT::QMetaObject *)&off_89E260, v5);
  ptr[1] = nullptr;
  ptr[0] = &QT::QPlainTextEdit::cursorPositionChanged;
  v7 = (__m128i *)operator new(0x20u);
  v8 = _mm_load_si128(&v11);
  v7->m128i_i64[1] = (__int64)sub_50FE80;
  v7->m128i_i32[0] = 1;
  v7[1] = v8;
  QT::QObject::connectImpl(v10, v6, ptr, this, &v11, v7, 0, 0, &QT::QPlainTextEdit::staticMetaObject);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v10);
  return v13 - __readfsqword(0x28u);
}
