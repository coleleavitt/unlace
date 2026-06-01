void __fastcall sub_54D520(_QWORD *a1, const char *a2)
{
  QT::QDialog *v2; // rbp
  __int64 v4; // rdi

  v2 = (QT::QDialog *)(a1 - 2);
  *(a1 - 2) = &ui_form_dialog_t___vtable;
  *a1 = ui_form_dialog_t___vtable_at__16;
  v4 = a1[6];
  if ( v4 )
  {
    a1[7] = 0;
    qfree(v4, a2);
  }
  *(a1 - 2) = &ui_dialog_t___vtable;
  *a1 = ui_dialog_t___vtable_at__16;
  QT::QDialog::~QDialog(v2);
  operator delete(v2, 0x58u);
}
