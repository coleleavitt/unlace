__int64 __fastcall sub_389C80(QT::QTableWidgetItem *a1, QT::QTableWidgetItem *a2, __int64 a3, __int64 a4, double a5)
{
  QT::QTableWidget *v6; // rdi
  __int64 v7; // rbx
  _QWORD v9[9]; // [rsp+0h] [rbp-48h] BYREF

  v9[5] = __readfsqword(0x28u);
  v6 = *((QT::QTableWidget **)a1 + 5);
  if ( !v6 || (a2 = a1, (unsigned int)QT::QTableWidget::column(v6, a1)) )
  {
    if ( !under_debugger )
      interr(40478, a2, a3, a4, a5);
    BUG();
  }
  (*(void (__fastcall **)(_QWORD *, QT::QTableWidgetItem *, __int64))(*(_QWORD *)a1 + 24LL))(v9, a1, 256);
  v7 = sub_1C7FC0((QT::QVariant *)v9);
  QT::QVariant::~QVariant((QT::QVariant *)v9);
  return v7;
}
