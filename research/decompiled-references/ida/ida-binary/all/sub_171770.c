unsigned __int64 __fastcall sub_171770(QT::QWidget *this, __int64 a2, char a3)
{
  QT::QGroupBox **v4; // rax
  QT::QVBoxLayout *v5; // rbp
  __int64 v7; // r12
  __int64 v8; // rax
  __int64 v9; // rsi
  void *ptr[3]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v11; // [rsp+18h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  sub_53A8A0(this, a2, 0);
  *(_QWORD *)this = &AboutDialog___vtable;
  *((_QWORD *)this + 2) = AboutDialog___vtable_at__16;
  v4 = (QT::QGroupBox **)operator new(0x70u);
  *((_QWORD *)this + 6) = v4;
  sub_1710E0(v4, this);
  QT::QLabel::setTextFormat(*(_QWORD *)(*((_QWORD *)this + 6) + 32LL), 2);
  QT::QLabel::setTextFormat(*(_QWORD *)(*((_QWORD *)this + 6) + 96LL), 2);
  QT::QLabel::setTextFormat(*(_QWORD *)(*((_QWORD *)this + 6) + 48LL), 2);
  QT::QLabel::setTextFormat(*(_QWORD *)(*((_QWORD *)this + 6) + 80LL), 2);
  QT::QLabel::setTextFormat(*(_QWORD *)(*((_QWORD *)this + 6) + 88LL), 2);
  QT::QLabel::setTextFormat(*(_QWORD *)(*((_QWORD *)this + 6) + 56LL), 2);
  if ( a3 && (int)xmmword_8C9548 > 0 )
  {
    v7 = *(_QWORD *)(*((_QWORD *)this + 6) + 104LL);
    QT::QString::fromUtf8(ptr, 10, "&Addons...");
    v8 = QT::QDialogButtonBox::addButton(v7, ptr, 3);
    *((_QWORD *)this + 7) = v8;
    v9 = v8;
    if ( ptr[0] )
    {
      if ( !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
        free(ptr[0]);
      v9 = *((_QWORD *)this + 7);
    }
    QT::QObject::connect(ptr, v9, "2clicked()", this, "1infoClicked()", 0);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)ptr);
  }
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 6) + 72LL) + 104LL))(
    *(_QWORD *)(*((_QWORD *)this + 6) + 72LL),
    0);
  QT::QLayout::setContentsMargins(*(QT::QLayout **)(*((_QWORD *)this + 6) + 16LL), 20, 20, 20, 20);
  QT::QWidget::setLayout(**((QT::QWidget ***)this + 6), *(QT::QLayout **)(*((_QWORD *)this + 6) + 16LL));
  v5 = (QT::QVBoxLayout *)operator new(0x20u);
  QT::QVBoxLayout::QVBoxLayout(v5);
  QT::QBoxLayout::addWidget(v5, **((_QWORD **)this + 6), 0, 0);
  QT::QBoxLayout::addWidget(v5, *(_QWORD *)(*((_QWORD *)this + 6) + 104LL), 0, 0);
  QT::QWidget::setLayout(this, v5);
  QT::QWidget::setWindowFlags(this, *(_DWORD *)(*((_QWORD *)this + 4) + 12LL) & 0xF7FEFFFF);
  QT::QObject::connect(ptr, *(_QWORD *)(*((_QWORD *)this + 6) + 104LL), "2accepted()", this, "1accept()", 0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)ptr);
  return v11 - __readfsqword(0x28u);
}
