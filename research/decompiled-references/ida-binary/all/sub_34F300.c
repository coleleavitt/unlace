void __fastcall OptionsDialog__::vfunc_4(QT::QDialog *this)
{
  __int64 v2; // rax
  int v3; // eax
  void *v4; // rdi

  *((_QWORD *)this + 2) = OptionsDialog___vtable_at__16;
  v2 = *((_QWORD *)this + 7);
  *(_QWORD *)this = &OptionsDialog___vtable;
  v3 = QT::QTabWidget::currentIndex(*(QT::QTabWidget **)(v2 + 16));
  v4 = *((void **)this + 7);
  dword_8CF098 = v3;
  if ( v4 )
    operator delete(v4, 0x800u);
  *(_QWORD *)this = &ui_dialog_t___vtable;
  *((_QWORD *)this + 2) = ui_dialog_t___vtable_at__16;
  QT::QDialog::~QDialog(this);
  operator delete(this, 0x48u);
}
