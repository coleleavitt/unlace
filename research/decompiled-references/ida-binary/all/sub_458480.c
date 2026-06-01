void __fastcall sub_458480(_QWORD *a1)
{
  *(a1 - 2) = &vault_files_picker_dialog_t___vtable;
  *a1 = vault_files_picker_dialog_t___vtable_at__16;
  QT::QDialog::~QDialog((QT::QDialog *)(a1 - 2));
  operator delete(a1 - 2, 0x40u);
}
