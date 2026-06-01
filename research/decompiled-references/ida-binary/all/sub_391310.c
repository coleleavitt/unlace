unsigned __int64 __fastcall sub_391310(
        __int64 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  QT::QTreeWidgetItem *v10; // rdi
  double v11; // xmm4_8
  double v12; // xmm5_8
  unsigned __int64 result; // rax

  v10 = *(QT::QTreeWidgetItem **)(a1 + 1288);
  if ( v10 )
  {
    QT::QTreeWidgetItem::setSelected(v10, 1);
    QT::QTreeWidget::scrollToItem(*(_QWORD *)(a1 + 80), *(_QWORD *)(a1 + 1288), 0);
    QT::QTreeWidget::setCurrentItem(*(QT::QTreeWidget **)(a1 + 80), *(QT::QTreeWidgetItem **)(a1 + 1288));
    return sub_390F70(a1, *(QT::QTreeWidgetItem **)(a1 + 1288), a2, a3, a4, a5, v11, v12, a8, a9);
  }
  return result;
}
