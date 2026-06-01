void __fastcall sub_5500A0(_QWORD *a1, const char *a2)
{
  QT::QDialog *v2; // rbp
  __int64 v4; // rdi

  v2 = (QT::QDialog *)(a1 - 2);
  *(a1 - 2) = &text_area_dialog_t___vtable;
  *a1 = text_area_dialog_t___vtable_at__16;
  v4 = a1[9];
  if ( v4 )
  {
    a1[10] = 0;
    qfree(v4, a2);
  }
  *(a1 - 2) = &ui_dialog_t___vtable;
  *a1 = ui_dialog_t___vtable_at__16;
  QT::QDialog::~QDialog(v2);
  operator delete(v2, 0x70u);
}
