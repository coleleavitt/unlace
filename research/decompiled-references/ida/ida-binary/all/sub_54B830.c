void __fastcall message_box_t__::vfunc_3(QT::QMessageBox *this, const char *a2)
{
  __int64 v3; // rdi

  *(_QWORD *)this = &message_box_t___vtable;
  *((_QWORD *)this + 2) = message_box_t___vtable_at__16;
  v3 = *((_QWORD *)this + 5);
  if ( v3 )
  {
    *((_QWORD *)this + 6) = 0;
    qfree(v3, a2);
  }
  QT::QMessageBox::~QMessageBox(this);
}
