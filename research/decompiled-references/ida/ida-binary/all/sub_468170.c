void __fastcall sub_468170(__int64 a1)
{
  QT::QMenu *v1; // rdi

  v1 = (QT::QMenu *)(a1 - 16);
  *(_QWORD *)v1 = &IdaMenu___vtable;
  *((_QWORD *)v1 + 2) = IdaMenu___vtable_at__16;
  QT::QMenu::~QMenu(v1);
}
