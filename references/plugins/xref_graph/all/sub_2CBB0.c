void __fastcall sub_2CBB0(QT::QLineEdit *a1)
{
  *(_QWORD *)a1 = &off_4D578;
  *((_QWORD *)a1 + 2) = search_bar_t___vtable_at__16;
  QT::QLineEdit::~QLineEdit(a1);
  operator delete(a1, 0x38u);
}
