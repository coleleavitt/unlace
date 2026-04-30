void __fastcall quick_filter_input_t__::vfunc_4(QT::QLineEdit *this)
{
  int v2; // edx
  QT::QPixmap *v3; // rbx
  QT::QPixmap *v4; // r12
  QT::QPixmap *v5; // rdi

  v2 = *((_DWORD *)this + 35);
  *(_QWORD *)this = &quick_filter_input_t___vtable;
  *((_QWORD *)this + 2) = quick_filter_input_t___vtable_at__16;
  if ( v2 )
  {
    QT::QBasicTimer::stop((QT::QLineEdit *)((char *)this + 140));
    if ( !*((_DWORD *)this + 34) )
      goto LABEL_3;
LABEL_7:
    QT::QBasicTimer::stop((QT::QLineEdit *)((char *)this + 136));
    goto LABEL_3;
  }
  if ( *((_DWORD *)this + 34) )
    goto LABEL_7;
LABEL_3:
  v3 = (QT::QLineEdit *)((char *)this + 112);
  v4 = (QT::QLineEdit *)((char *)this + 16);
  do
  {
    v5 = v3;
    v3 = (QT::QPixmap *)((char *)v3 - 24);
    QT::QPixmap::~QPixmap(v5);
  }
  while ( v4 != v3 );
  QT::QLineEdit::~QLineEdit(this);
  operator delete(this, 0x90u);
}
