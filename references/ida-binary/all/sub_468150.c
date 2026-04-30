void __fastcall IdaMenu__::vfunc_3(QT::QMenu *a1)
{
  *(_QWORD *)a1 = &IdaMenu___vtable;
  *((_QWORD *)a1 + 2) = IdaMenu___vtable_at__16;
  QT::QMenu::~QMenu(a1);
}
