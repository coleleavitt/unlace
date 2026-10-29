unsigned __int64 __fastcall sub_33F2E0(QT::QWidget *this, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r15
  __m128i *v4; // rax
  __m128i v5; // xmm0
  _BYTE v7[8]; // [rsp+18h] [rbp-68h] BYREF
  __m128i v8; // [rsp+20h] [rbp-60h] BYREF
  void *ptr[3]; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int64 v10; // [rsp+48h] [rbp-38h]

  v10 = __readfsqword(0x28u);
  QT::QWidget::QWidget(this, a2, 0);
  v2 = QT::QMetaObject::className((QT::QMetaObject *)&off_88C6E0);
  sub_525E40((char *)this + 40, &off_866680, 19, v2);
  *((_QWORD *)this + 13) = a2;
  *((_QWORD *)this + 14) = 0;
  *(_OWORD *)((char *)this + 120) = 0;
  *(_QWORD *)this = &navband_t___vtable;
  *((_QWORD *)this + 2) = navband_t___vtable_at__16;
  *((_QWORD *)this + 5) = navband_t___vtable_at__40;
  *((_QWORD *)this + 19) = -1;
  *((_BYTE *)this + 160) = 0;
  *((_QWORD *)this + 29) = 0;
  *(_OWORD *)((char *)this + 136) = -1;
  *(_OWORD *)((char *)this + 184) = 0;
  *((_OWORD *)this + 15) = 0;
  QT::QPixmap::QPixmap((QT::QWidget *)((char *)this + 264));
  QT::QPixmap::QPixmap((QT::QWidget *)((char *)this + 288));
  QT::QPixmap::QPixmap((QT::QWidget *)((char *)this + 312));
  *((_DWORD *)this + 90) = 0;
  *((_QWORD *)this + 47) = (char *)this + 360;
  *((_QWORD *)this + 48) = (char *)this + 360;
  *((_WORD *)this + 172) = 0;
  *((_QWORD *)this + 52) = sub_33EAB0;
  *((_BYTE *)this + 256) = 0;
  *((_QWORD *)this + 46) = 0;
  *((_QWORD *)this + 49) = 0;
  *((_QWORD *)this + 53) = 0;
  *((_BYTE *)this + 400) = 0;
  *((_DWORD *)this + 44) = 3;
  *((_QWORD *)this + 21) = 16;
  *((_QWORD *)this + 42) = 32;
  *((_BYTE *)this + 432) = 1;
  *(_QWORD *)((char *)this + 404) = 200;
  *(_OWORD *)((char *)this + 200) = 0;
  *(_OWORD *)((char *)this + 216) = 0;
  *(_OWORD *)((char *)this + 440) = 0;
  QT::QString::fromUtf8(ptr, 15, "Navigation Band");
  QT::QWidget::setWindowTitle(this, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  QT::QWidget::setSizePolicy(this, &unk_770000);
  QT::QObject::connect(ptr, &qword_8CC800, "2ea_changed(ea_t, ea_t)", this, "1on_navdata_ea_changed(ea_t, ea_t)", 0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)ptr);
  v3 = sub_414310(ptr);
  v8.m128i_i64[1] = 0;
  v8.m128i_i64[0] = (__int64)sub_33EB10;
  ptr[1] = nullptr;
  ptr[0] = sub_475680;
  v4 = (__m128i *)operator new(0x20u);
  v5 = _mm_load_si128(&v8);
  v4->m128i_i32[0] = 1;
  v4[1] = v5;
  v4->m128i_i64[1] = (__int64)sub_33EB60;
  QT::QObject::connectImpl(v7, v3, ptr, this, &v8, v4, 0, 0, &off_893BE0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v7);
  return v10 - __readfsqword(0x28u);
}
