void __fastcall type_completer_t__::vfunc_4(QT::QCompleter *this)
{
  *(_QWORD *)this = &type_completer_t___vtable;
  sub_57F9D0(*((_QWORD *)this + 3));
  QT::QCompleter::~QCompleter(this);
  operator delete(this, 0x30u);
}
