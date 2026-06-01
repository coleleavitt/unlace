void __fastcall sub_550470(__int64 a1)
{
  QT::QLabel *v1; // rdi

  v1 = (QT::QLabel *)(a1 - 16);
  *(_QWORD *)v1 = &ui_label_t___vtable;
  *((_QWORD *)v1 + 2) = ui_label_t___vtable_at__16;
  QT::QLabel::~QLabel(v1);
}
