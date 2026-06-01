unsigned __int64 __fastcall sub_391370(
        __int64 a1,
        QT::QTreeWidgetItem *a2,
        __m128 a3,
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
  QT::QWidget *v13; // rax

  if ( a2 )
  {
    sub_390F70(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
    return sub_38BE00(a1, *(double *)a3.m128_u64, a4, a5, a6, v10, v11, a9, a10);
  }
  else
  {
    v13 = (QT::QWidget *)QT::QDialogButtonBox::button(*(_QWORD *)(*(_QWORD *)(a1 + 72) + 160LL), 1024);
    return QT::QWidget::setEnabled(v13, 0);
  }
}
