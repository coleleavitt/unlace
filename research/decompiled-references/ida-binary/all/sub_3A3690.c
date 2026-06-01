void __fastcall sub_3A3690(int a1, _QWORD *a2)
{
  QT::QAbstractItemView *v2; // rbx

  if ( a1 )
  {
    if ( a1 == 1 )
    {
      v2 = (QT::QAbstractItemView *)a2[2];
      QT::QAbstractItemView::model(v2);
      sub_48F2A0(v2);
    }
  }
  else if ( a2 )
  {
    operator delete(a2, 0x18u);
  }
}
