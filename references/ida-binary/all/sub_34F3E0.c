void __fastcall sub_34F3E0(_QWORD *a1)
{
  QT::QDialog *v1; // rbp
  __int64 v3; // rax
  int v4; // eax
  void *v5; // rdi

  v1 = (QT::QDialog *)(a1 - 2);
  *a1 = OptionsDialog___vtable_at__16;
  v3 = a1[5];
  *(a1 - 2) = &OptionsDialog___vtable;
  v4 = QT::QTabWidget::currentIndex(*(QT::QTabWidget **)(v3 + 16));
  v5 = (void *)a1[5];
  dword_8CF098 = v4;
  if ( v5 )
    operator delete(v5, 0x800u);
  *(a1 - 2) = &ui_dialog_t___vtable;
  *a1 = ui_dialog_t___vtable_at__16;
  QT::QDialog::~QDialog(v1);
  operator delete(v1, 0x48u);
}
