void __fastcall sub_458BD0(_QWORD *a1)
{
  *(a1 - 2) = &ui_dialog_t___vtable;
  *a1 = ui_dialog_t___vtable_at__16;
  QT::QDialog::~QDialog((QT::QDialog *)(a1 - 2));
  operator delete(a1 - 2, 0x40u);
}
