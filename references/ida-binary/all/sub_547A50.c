__int64 __fastcall chooser_table_widget_t__::vfunc_2(QT::QObject *this, int a2, __int64 a3, __int64 *a4)
{
  __int64 result; // rax
  int v6; // [rsp+Ch] [rbp-1Ch]

  result = QT::QTableView::qt_metacall();
  if ( (int)result >= 0 )
  {
    if ( !a2 )
    {
      if ( (int)result <= 1 )
      {
        v6 = result;
        sub_5478F0(this, 0, result, a4);
        LODWORD(result) = v6;
      }
      return (unsigned int)(result - 2);
    }
    if ( a2 == 7 )
    {
      if ( (int)result <= 1 )
        *(_QWORD *)*a4 = 0;
      return (unsigned int)(result - 2);
    }
  }
  return result;
}
