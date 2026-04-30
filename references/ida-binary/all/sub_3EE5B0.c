void __fastcall sub_3EE5B0(int a1, _QWORD *a2)
{
  if ( a1 )
  {
    if ( a1 == 1 )
      QT::QWidget::setFocus(*(_QWORD *)(a2[2] + 104LL), 7);
  }
  else if ( a2 )
  {
    operator delete(a2, 0x18u);
  }
}
