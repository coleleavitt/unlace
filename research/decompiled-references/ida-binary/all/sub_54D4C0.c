void __fastcall ui_form_dialog_t__::vfunc_4(QT::QDialog *this, const char *a2)
{
  __int64 v3; // rdi

  *(_QWORD *)this = &ui_form_dialog_t___vtable;
  *((_QWORD *)this + 2) = ui_form_dialog_t___vtable_at__16;
  v3 = *((_QWORD *)this + 8);
  if ( v3 )
  {
    *((_QWORD *)this + 9) = 0;
    qfree(v3, a2);
  }
  *(_QWORD *)this = &ui_dialog_t___vtable;
  *((_QWORD *)this + 2) = ui_dialog_t___vtable_at__16;
  QT::QDialog::~QDialog(this);
  operator delete(this, 0x58u);
}
