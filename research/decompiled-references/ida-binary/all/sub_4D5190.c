void __fastcall sub_4D5190(__int64 a1, const QT::QTableWidgetItem *a2)
{
  QT::QTableWidget *v3; // rdi
  __int64 v4; // rsi

  v3 = *((QT::QTableWidget **)a2 + 5);
  if ( v3 )
    v4 = (unsigned int)QT::QTableWidget::row(v3, a2);
  else
    v4 = 0xFFFFFFFFLL;
  sub_4D4FF0(a1, (const char *)v4, 1);
}
