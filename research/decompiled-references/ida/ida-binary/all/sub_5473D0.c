void __fastcall sub_5473D0(_QWORD *a1)
{
  QT::QLabel *v1; // rbp
  QT::QKeySequence *v3; // rdi

  v1 = (QT::QLabel *)(a1 - 2);
  v3 = (QT::QKeySequence *)(a1 + 5);
  *((_QWORD *)v3 - 7) = &buddy_label_t___vtable;
  *((_QWORD *)v3 - 5) = buddy_label_t___vtable_at__16;
  QT::QKeySequence::~QKeySequence(v3);
  *(a1 - 2) = &ui_label_t___vtable;
  *a1 = ui_label_t___vtable_at__16;
  QT::QLabel::~QLabel(v1);
}
