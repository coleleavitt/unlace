void __fastcall sub_54C0C0(QT::QPixmap *a1)
{
  QT::QLineEdit *v1; // r12
  int v3; // edx
  QT::QPixmap *v4; // rbx
  QT::QPixmap *v5; // rdi

  v1 = (QT::QPixmap *)((char *)a1 - 16);
  v3 = *((_DWORD *)a1 + 31);
  *((_QWORD *)a1 - 2) = &quick_filter_input_t___vtable;
  *(_QWORD *)a1 = quick_filter_input_t___vtable_at__16;
  if ( v3 )
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
  v4 = (QT::QPixmap *)((char *)a1 + 96);
  do
  {
    v5 = v4;
    v4 = (QT::QPixmap *)((char *)v4 - 24);
    QT::QPixmap::~QPixmap(v5);
  }
  while ( a1 != v4 );
  QT::QLineEdit::~QLineEdit(v1);
  operator delete(v1, 0x90u);
}
