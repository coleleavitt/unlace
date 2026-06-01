__int64 __fastcall sub_33F7B0(QT::QWidget *this)
{
  void (*v1)(void); // rax

  v1 = *((void (**)(void))this + 55);
  *((_BYTE *)this + 256) = 1;
  *((_BYTE *)this + 400) = 1;
  if ( v1 )
    v1();
  return QT::QWidget::update(this);
}
