unsigned __int64 __fastcall sub_191310(QT::QObject *a1)
{
  QT::QTimer *v1; // r14
  QT::QVBoxLayout *v2; // rbp
  QT::QHBoxLayout *v3; // r12
  __int64 v4; // r15
  __int64 v5; // r15
  __int64 v6; // rax
  __m128i si128; // xmm1
  __int64 v8; // r12
  QT::QWidget *v9; // r12
  QT::QWidget *v10; // r12
  __int64 v11; // rax
  __m128i v12; // xmm2
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  __int64 v16; // rsi
  void *ptr[3]; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v19; // [rsp+18h] [rbp-40h]

  v19 = __readfsqword(0x28u);
  v1 = (QT::QObject *)((char *)a1 + 96);
  QT::QWidget::QWidget(a1, 0, 0);
  *((_QWORD *)a1 + 9) = 0;
  *((_OWORD *)a1 + 5) = 0;
  *(_QWORD *)a1 = &TAddressDetailsWidget___vtable;
  *((_QWORD *)a1 + 2) = TAddressDetailsWidget___vtable_at__16;
  QT::QTimer::QTimer((QT::QObject *)((char *)a1 + 96), a1);
  *((_QWORD *)a1 + 15) = -1;
  *((_WORD *)a1 + 56) = 0;
  QT::QWidget::setSizePolicy(a1, &stru_110000);
  v2 = (QT::QVBoxLayout *)operator new(0x20u);
  QT::QVBoxLayout::QVBoxLayout(v2);
  QT::QWidget::setLayout(a1, v2);
  v3 = (QT::QHBoxLayout *)operator new(0x20u);
  QT::QHBoxLayout::QHBoxLayout(v3);
  v4 = operator new(0x28u);
  QT::QString::fromUtf8(ptr, 8, "Address:");
  sub_53BA20(v4, ptr, 0);
  QT::QBoxLayout::addWidget(v3, v4, 0, 0);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v5 = operator new(0x28u);
  sub_53B9D0(v5, 0);
  *((_QWORD *)a1 + 5) = v5;
  QT::QBoxLayout::addWidget(v3, v5, 0, 0);
  v6 = operator new(0x28u);
  *(_DWORD *)(v6 + 8) = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_5DC310);
  *(_DWORD *)(v6 + 20) = (_DWORD)&loc_170000;
  *(_QWORD *)v6 = (char *)&`vtable for'QT::QSpacerItem + 16;
  *(_QWORD *)(v6 + 12) = 0x2800000014LL;
  *(__m128i *)(v6 + 24) = si128;
  QT::QBoxLayout::addSpacerItem(v3);
  QT::QBoxLayout::addLayout(v2, v3, 0);
  v8 = operator new(0x78u);
  sub_190CD0(v8, (__int64)a1);
  *((_QWORD *)a1 + 6) = sub_190220(a1, (__int64)v2, "Name", v8);
  v9 = (QT::QWidget *)operator new(0x40u);
  sub_191220(v9, (__int64)a1);
  *((_QWORD *)a1 + 7) = sub_190220(a1, (__int64)v2, "Flags", (__int64)v9);
  v10 = (QT::QWidget *)operator new(0x40u);
  sub_18F4F0(v10, (__int64)a1);
  *((_QWORD *)a1 + 8) = sub_190220(a1, (__int64)v2, "Data inspector", (__int64)v10);
  v11 = operator new(0x28u);
  *(_DWORD *)(v11 + 8) = 0;
  v12 = _mm_load_si128((const __m128i *)&xmmword_5DC310);
  *(_QWORD *)(v11 + 12) = 0x2800000014LL;
  *(_DWORD *)(v11 + 20) = (_DWORD)&unk_710000;
  *(_QWORD *)v11 = (char *)&`vtable for'QT::QSpacerItem + 16;
  *(__m128i *)(v11 + 24) = v12;
  QT::QBoxLayout::addSpacerItem(v2);
  if ( (unsigned __int8)netnode_inited() )
  {
    ptr[0] = (void *)-1LL;
    callui(11, (unsigned int)ptr, (unsigned int)&callui, v13, v14, v15);
    v16 = (__int64)ptr[0];
  }
  else
  {
    v16 = -1;
  }
  sub_190110((__int64)a1, v16);
  QT::QTimer::setInterval(v1, 500);
  QT::QTimer::setSingleShot(v1, 1);
  QT::QObject::connect(ptr, v1, "2timeout()", a1, "1refresh()", 0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)ptr);
  QT::QObject::connect(ptr, &qword_8CC800, "2ea_changed(ea_t, ea_t)", a1, "1on_ea_changed(ea_t, ea_t)", 0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)ptr);
  return v19 - __readfsqword(0x28u);
}
