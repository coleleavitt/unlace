void __fastcall sub_54D3D0(_QWORD *a1, const char *a2)
{
  __int64 v3; // rdi

  *(a1 - 2) = &ui_form_dialog_t___vtable;
  *a1 = ui_form_dialog_t___vtable_at__16;
  v3 = a1[6];
  if ( v3 )
  {
    a1[7] = 0;
    qfree(v3, a2);
  }
  *(a1 - 2) = &ui_dialog_t___vtable;
  *a1 = ui_dialog_t___vtable_at__16;
  QT::QDialog::~QDialog((QT::QDialog *)(a1 - 2));
}
