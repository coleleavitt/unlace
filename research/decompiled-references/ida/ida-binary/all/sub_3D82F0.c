void __fastcall ViewSwitcher__::vfunc_3(QT::QDialog *this)
{
  int v1; // eax
  volatile signed __int32 *v2; // rax

  *((_QWORD *)this + 2) = ViewSwitcher___vtable_at__16;
  v1 = *((_DWORD *)this + 29);
  *(_QWORD *)this = &ViewSwitcher___vtable;
  if ( v1 )
    QT::QBasicTimer::stop((QT::QDialog *)((char *)this + 116));
  v2 = *((volatile signed __int32 **)this + 8);
  if ( v2 && !_InterlockedSub(v2, 1u) )
    free(*((void **)this + 8));
  *(_QWORD *)this = &ui_dialog_t___vtable;
  *((_QWORD *)this + 2) = ui_dialog_t___vtable_at__16;
  QT::QDialog::~QDialog(this);
}
