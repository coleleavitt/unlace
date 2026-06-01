void __fastcall sub_54FF40(_QWORD *a1, const char *a2)
{
  __int64 v3; // rdi

  *(a1 - 2) = &text_area_dialog_t___vtable;
  *a1 = text_area_dialog_t___vtable_at__16;
  v3 = a1[9];
  if ( v3 )
  {
    a1[10] = 0;
    qfree(v3, a2);
  }
  *(a1 - 2) = &ui_dialog_t___vtable;
  *a1 = ui_dialog_t___vtable_at__16;
  QT::QDialog::~QDialog((QT::QDialog *)(a1 - 2));
}
