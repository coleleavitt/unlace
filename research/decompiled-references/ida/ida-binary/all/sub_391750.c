__int64 __fastcall sub_391750(
        __int64 a1,
        const char *a2,
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
  QT::QWidget *v12; // rax

  QT::QAbstractItemView::clearSelection(*(QT::QAbstractItemView **)(a1 + 80));
  sub_38BBA0((_QWORD *)a1, a2);
  sub_391470(a1, a3, a4, a5, a6, v10, v11, a9, a10);
  v12 = (QT::QWidget *)QT::QDialogButtonBox::button(*(_QWORD *)(*(_QWORD *)(a1 + 72) + 160LL), 1024);
  return QT::QWidget::setEnabled(v12, 0);
}
