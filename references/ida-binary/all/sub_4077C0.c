__int64 __fastcall xref_tree_t__::vfunc_5(QT::QWidget *a1, unsigned __int16 *a2, __m128i a3)
{
  int v3; // eax

  v3 = a2[4];
  if ( v3 == 2004 )
  {
    sub_404E80((__int64)a1, (__int64)a2);
    return 1;
  }
  else if ( v3 == 2005 )
  {
    sub_400740((__int64)a1, (__int64)a2, a3);
    return 1;
  }
  else
  {
    return QT::QWidget::event(a1, (QT::QEvent *)a2);
  }
}
