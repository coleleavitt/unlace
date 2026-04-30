void __fastcall buddy_label_t__::vfunc_3(QT::QLabel *this)
{
  QT::QKeySequence *v2; // rdi

  v2 = (QT::QLabel *)((char *)this + 56);
  *((_QWORD *)v2 - 7) = &buddy_label_t___vtable;
  *((_QWORD *)v2 - 5) = buddy_label_t___vtable_at__16;
  QT::QKeySequence::~QKeySequence(v2);
  *(_QWORD *)this = &ui_label_t___vtable;
  *((_QWORD *)this + 2) = ui_label_t___vtable_at__16;
  QT::QLabel::~QLabel(this);
}
