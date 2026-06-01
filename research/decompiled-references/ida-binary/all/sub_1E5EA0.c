void __fastcall sub_1E5EA0(_QWORD *a1)
{
  void *v2; // rdi

  *(a1 - 2) = &CustomHelpDialog___vtable;
  *a1 = CustomHelpDialog___vtable_at__16;
  v2 = (void *)a1[4];
  if ( v2 )
    operator delete(v2, 0x20u);
  *(a1 - 2) = &ui_dialog_t___vtable;
  *a1 = ui_dialog_t___vtable_at__16;
  QT::QDialog::~QDialog((QT::QDialog *)(a1 - 2));
}
