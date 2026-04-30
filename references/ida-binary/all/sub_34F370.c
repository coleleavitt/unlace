void __fastcall sub_34F370(_QWORD *a1)
{
  __int64 v2; // rax
  int v3; // eax
  void *v4; // rdi

  *a1 = OptionsDialog___vtable_at__16;
  v2 = a1[5];
  *(a1 - 2) = &OptionsDialog___vtable;
  v3 = QT::QTabWidget::currentIndex(*(QT::QTabWidget **)(v2 + 16));
  v4 = (void *)a1[5];
  dword_8CF098 = v3;
  if ( v4 )
    operator delete(v4, 0x800u);
  *(a1 - 2) = &ui_dialog_t___vtable;
  *a1 = ui_dialog_t___vtable_at__16;
  QT::QDialog::~QDialog((QT::QDialog *)(a1 - 2));
}
