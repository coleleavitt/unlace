void __fastcall sub_54CC50(__int64 a1)
{
  QT::QCheckBox *v1; // rdi

  v1 = (QT::QCheckBox *)(a1 - 16);
  *(_QWORD *)v1 = &check_box_t___vtable;
  *((_QWORD *)v1 + 2) = check_box_t___vtable_at__16;
  QT::QCheckBox::~QCheckBox(v1);
}
