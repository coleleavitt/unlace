void __fastcall EULADialog__::vfunc_3(QT::QDialog *this)
{
  void *v2; // rdi

  *(_QWORD *)this = &EULADialog___vtable;
  *((_QWORD *)this + 2) = EULADialog___vtable_at__16;
  v2 = *((void **)this + 6);
  if ( v2 )
    operator delete(v2, 0x20u);
  *(_QWORD *)this = &ui_dialog_t___vtable;
  *((_QWORD *)this + 2) = ui_dialog_t___vtable_at__16;
  QT::QDialog::~QDialog(this);
}
