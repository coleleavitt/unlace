void __fastcall sub_54EB60(__int64 a1)
{
  QT::QDialog *v1; // rdi

  v1 = (QT::QDialog *)(a1 - 16);
  *(_QWORD *)v1 = &ui_dialog_t___vtable;
  *((_QWORD *)v1 + 2) = ui_dialog_t___vtable_at__16;
  QT::QDialog::~QDialog(v1);
}
