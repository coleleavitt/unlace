void __fastcall sub_16D8F0(_QWORD *a1)
{
  QT::QDialog *v1; // rbp
  void *v3; // rdi

  v1 = (QT::QDialog *)(a1 - 2);
  *(a1 - 2) = &AboutDialog___vtable;
  *a1 = AboutDialog___vtable_at__16;
  v3 = (void *)a1[4];
  if ( v3 )
    operator delete(v3, 0x70u);
  *(a1 - 2) = &ui_dialog_t___vtable;
  *a1 = ui_dialog_t___vtable_at__16;
  QT::QDialog::~QDialog(v1);
  operator delete(v1, 0x40u);
}
