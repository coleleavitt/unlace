unsigned __int64 __fastcall sub_3D9980(QT::QAbstractScrollArea *this, char *a2, int *a3)
{
  __int64 v5; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v6; // [rsp+8h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  sub_202FB0(this, a2, a3);
  *(_QWORD *)this = &watchview_t___vtable;
  *((_QWORD *)this + 2) = watchview_t___vtable_at__16;
  *((_QWORD *)this + 5) = watchview_t___vtable_at__40;
  *((_QWORD *)this + 13) = watchview_t___vtable_at__104;
  sub_1FC230((__m128i *)this, (__int64)a3);
  QT::QObject::connect(&v5, this, "2placeChanged(const place_t *)", this, "1onPlaceChanged(const place_t *)", 0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)&v5);
  qword_8D0C80 = nullptr;
  return v6 - __readfsqword(0x28u);
}
