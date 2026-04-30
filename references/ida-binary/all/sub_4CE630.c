void __fastcall DockWidget__::vfunc_3(QT::QWidget *this)
{
  char *v1; // rax
  QT::QWidget *v2; // rax

  *(_QWORD *)this = &DockWidget___vtable;
  *((_QWORD *)this + 2) = DockWidget___vtable_at__16;
  v1 = (char *)sub_4CD420(this, 1u);
  if ( (unsigned __int8)sub_4B8CE0(v1) )
  {
    v2 = (QT::QWidget *)sub_4CD420(this, 1u);
    QT::QWidget::setParent(v2, nullptr);
  }
  sub_4CE5B0(this);
}
