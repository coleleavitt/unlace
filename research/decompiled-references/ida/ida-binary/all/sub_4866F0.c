void __fastcall sub_4866F0(QT::QStyledItemDelegate *a1)
{
  *(_QWORD *)a1 = &off_893E50;
  QT::QStyledItemDelegate::~QStyledItemDelegate(a1);
  operator delete(a1, 0x18u);
}
