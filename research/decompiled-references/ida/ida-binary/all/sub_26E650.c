void __fastcall sub_26E650(QT::QStyledItemDelegate *a1)
{
  *(_QWORD *)a1 = &off_8710B0;
  QT::QStyledItemDelegate::~QStyledItemDelegate(a1);
  operator delete(a1, 0x10u);
}
