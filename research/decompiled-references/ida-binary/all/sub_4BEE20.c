void __fastcall sub_4BEE20(int a1, __int64 a2)
{
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      **(_BYTE **)(a2 + 16) = 1;
      QT::QWidget::close(*(QT::QWidget **)(a2 + 24));
    }
  }
  else if ( a2 )
  {
    operator delete((void *)a2, 0x20u);
  }
}
