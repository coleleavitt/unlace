unsigned __int64 __fastcall sub_4C7120(QT::QWidget *this, __int64 a2)
{
  __int64 v3; // rbp
  QT::QWidget *v4; // rbp
  QT::QWidget *v5; // rbp
  QT::QWidget *v6; // rbp
  QT::QWidget *v7; // rbp
  QT::QWidget *v8; // rbp
  __int64 v9; // rbp
  QT::QWidget *v10; // rbp
  __int64 v12; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v13; // [rsp+8h] [rbp-20h]

  v13 = __readfsqword(0x28u);
  QT::QWidget::QWidget(this, a2, 0);
  *(_QWORD *)this = &DockArea___vtable;
  *((_QWORD *)this + 2) = DockArea___vtable_at__16;
  QT::QWidget::setAcceptDrops(this, 1);
  v3 = operator new(0x68u);
  QT::QTimer::QTimer((QT::QTimer *)(v3 + 48), nullptr);
  *((_QWORD *)this + 5) = v3;
  *(_QWORD *)v3 = 0;
  *(_WORD *)(v3 + 80) = 256;
  v4 = (QT::QWidget *)operator new(0xA0u);
  sub_4CD1A0(v4);
  *(_QWORD *)(*((_QWORD *)this + 5) + 8LL) = v4;
  v5 = (QT::QWidget *)operator new(0x50u);
  sub_4CCCE0(v5);
  *(_QWORD *)(*((_QWORD *)this + 5) + 16LL) = v5;
  v6 = (QT::QWidget *)operator new(0x50u);
  sub_4CCCE0(v6);
  *(_QWORD *)(*((_QWORD *)this + 5) + 24LL) = v6;
  v7 = (QT::QWidget *)operator new(0x50u);
  sub_4CCCE0(v7);
  *(_QWORD *)(*((_QWORD *)this + 5) + 32LL) = v7;
  v8 = (QT::QWidget *)operator new(0x50u);
  sub_4CCCE0(v8);
  *(_QWORD *)(*((_QWORD *)this + 5) + 40LL) = v8;
  QT::QTimer::setSingleShot((QT::QTimer *)(*((_QWORD *)this + 5) + 48LL), 1);
  QT::QTimer::setInterval((QT::QTimer *)(*((_QWORD *)this + 5) + 48LL), 500);
  QT::QObject::connect(&v12, *((_QWORD *)this + 5) + 48LL, "2timeout()", this, "1hideDragArrowsTimeout()", 0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)&v12);
  v9 = operator new(0x28u);
  QT::QRubberBand::QRubberBand(v9, 1, this);
  *(_QWORD *)(*((_QWORD *)this + 5) + 64LL) = v9;
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 5) + 64LL) + 104LL))(
    *(_QWORD *)(*((_QWORD *)this + 5) + 64LL),
    0);
  *(_QWORD *)(*((_QWORD *)this + 5) + 72LL) = 0;
  *(_DWORD *)(*((_QWORD *)this + 5) + 88LL) = 0;
  v10 = (QT::QWidget *)operator new(0x58u);
  sub_4C6E80(v10, (__int64)this);
  *(_QWORD *)(*((_QWORD *)this + 5) + 96LL) = v10;
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 5) + 96LL) + 104LL))(
    *(_QWORD *)(*((_QWORD *)this + 5) + 96LL),
    0);
  return v13 - __readfsqword(0x28u);
}
