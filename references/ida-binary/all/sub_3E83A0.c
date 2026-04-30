void __fastcall TWelcomeForm__::vfunc_4(QT::QDialog *this)
{
  void *v2; // rdi
  volatile signed __int32 *v3; // rax

  *(_QWORD *)this = &TWelcomeForm___vtable;
  *((_QWORD *)this + 2) = TWelcomeForm___vtable_at__16;
  v2 = *((void **)this + 6);
  if ( v2 )
    operator delete(v2, 0x80u);
  v3 = *((volatile signed __int32 **)this + 8);
  if ( v3 && !_InterlockedSub(v3, 1u) )
    free(*((void **)this + 8));
  *(_QWORD *)this = &ui_dialog_t___vtable;
  *((_QWORD *)this + 2) = ui_dialog_t___vtable_at__16;
  QT::QDialog::~QDialog(this);
  operator delete(this, 0x58u);
}
