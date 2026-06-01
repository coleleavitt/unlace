void __fastcall sub_54B870(_QWORD *a1, const char *a2)
{
  __int64 v3; // rdi

  *(a1 - 2) = &message_box_t___vtable;
  *a1 = message_box_t___vtable_at__16;
  v3 = a1[3];
  if ( v3 )
  {
    a1[4] = 0;
    qfree(v3, a2);
  }
  QT::QMessageBox::~QMessageBox((QT::QMessageBox *)(a1 - 2));
}
