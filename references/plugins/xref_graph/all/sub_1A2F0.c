void __fastcall graph_chooser_t__::vfunc_0(__int64 a1)
{
  QT::QDialog *v1; // rdi

  v1 = (QT::QDialog *)(a1 - 16);
  *(_QWORD *)v1 = &off_4C570;
  *((_QWORD *)v1 + 2) = graph_chooser_t___vtable_at__16;
  QT::QDialog::~QDialog(v1);
}
