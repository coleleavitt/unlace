__int64 __fastcall sub_3915D0(
        __int64 a1,
        unsigned int a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  double v10; // xmm4_8
  double v11; // xmm5_8
  double v12; // xmm4_8
  double v13; // xmm5_8
  QT::QWidget *v14; // rax

  QT::QTableWidget::clearContents(*(QT::QTableWidget **)(a1 + 88));
  QT::QTableWidget::setRowCount(*(QT::QTableWidget **)(a1 + 88), 0);
  sub_38DC20(a1, a2, a3, a4, a5, a6, v10, v11, a9, a10);
  sub_38BBA0((_QWORD *)a1, (const char *)a2);
  sub_391470(a1, a3, a4, a5, a6, v12, v13, a9, a10);
  QT::QAbstractItemView::clearSelection(*(QT::QAbstractItemView **)(a1 + 80));
  v14 = (QT::QWidget *)QT::QDialogButtonBox::button(*(_QWORD *)(*(_QWORD *)(a1 + 72) + 160LL), 1024);
  return QT::QWidget::setEnabled(v14, 0);
}
