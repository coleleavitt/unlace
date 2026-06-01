void __fastcall TChooserDialog__::vfunc_4(QT::QDialog *a1)
{
  *(_QWORD *)a1 = &ui_dialog_t___vtable;
  *((_QWORD *)a1 + 2) = ui_dialog_t___vtable_at__16;
  QT::QDialog::~QDialog(a1);
  operator delete(a1, 0x38u);
}
