void __fastcall sub_281600(_QWORD *a1)
{
  QT::QDialog *v1; // rbp
  void *v3; // rdi

  v1 = (QT::QDialog *)(a1 - 2);
  *(a1 - 2) = &EULADialog___vtable;
  *a1 = EULADialog___vtable_at__16;
  v3 = (void *)a1[4];
  if ( v3 )
    operator delete(v3, 0x20u);
  *(a1 - 2) = &ui_dialog_t___vtable;
  *a1 = ui_dialog_t___vtable_at__16;
  QT::QDialog::~QDialog(v1);
  operator delete(v1, 0x38u);
}
