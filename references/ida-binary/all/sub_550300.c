void __fastcall sub_550300(__int64 a1, QT::QDialog *a2)
{
  void (__fastcall *v2)(QT::QDialog *); // rax

  v2 = *(void (__fastcall **)(QT::QDialog *))(*(_QWORD *)a2 + 24LL);
  if ( v2 == ui_dialog_t__::vfunc_3 )
  {
    *(_QWORD *)a2 = &ui_dialog_t___vtable;
    *((_QWORD *)a2 + 2) = ui_dialog_t___vtable_at__16;
    QT::QDialog::~QDialog(a2);
  }
  else
  {
    v2(a2);
  }
}
