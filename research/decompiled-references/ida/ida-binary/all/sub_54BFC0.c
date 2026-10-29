void __fastcall sub_54BFC0(QT::QPixmap *a1)
{
  int v2; // edx
  QT::QPixmap *v3; // rbx
  QT::QPixmap *v4; // rdi

  v2 = *((_DWORD *)a1 + 31);
  *((_QWORD *)a1 - 2) = &quick_filter_input_t___vtable;
  *(_QWORD *)a1 = quick_filter_input_t___vtable_at__16;
  if ( v2 )
  {
    QT::QBasicTimer::stop((QT::QPixmap *)((char *)a1 + 124));
    if ( !*((_DWORD *)a1 + 30) )
      goto LABEL_3;
LABEL_7:
    QT::QBasicTimer::stop((QT::QPixmap *)((char *)a1 + 120));
    goto LABEL_3;
  }
  if ( *((_DWORD *)a1 + 30) )
    goto LABEL_7;
LABEL_3:
  v3 = (QT::QPixmap *)((char *)a1 + 96);
  do
  {
    v4 = v3;
    v3 = (QT::QPixmap *)((char *)v3 - 24);
    QT::QPixmap::~QPixmap(v4);
  }
  while ( a1 != v3 );
  QT::QLineEdit::~QLineEdit((QT::QPixmap *)((char *)a1 - 16));
}
