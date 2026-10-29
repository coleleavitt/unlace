void __fastcall sub_4CE5B0(QT::QWidget *this)
{
  QT::QWidget **v2; // rdi
  QT::QWidget **v3; // rdx

  *(_QWORD *)this = &BaseDockWidget___vtable;
  *((_QWORD *)this + 2) = algn_898AF0;
  v2 = (QT::QWidget **)qword_8D1DE0;
  v3 = (QT::QWidget **)(qword_8D1DE0 + 8 * xmmword_8D1DE8);
  if ( (QT::QWidget **)qword_8D1DE0 != v3 )
  {
    while ( this != *v2 )
    {
      if ( v3 == ++v2 )
        goto LABEL_7;
    }
    if ( v3 != v2 )
    {
      memmove(v2, v2 + 1, (char *)v3 - (char *)v2 - 8);
      *(_QWORD *)&xmmword_8D1DE8 = xmmword_8D1DE8 - 1;
    }
  }
LABEL_7:
  QT::QWidget::~QWidget(this);
}
