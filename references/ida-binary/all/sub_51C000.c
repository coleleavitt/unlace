unsigned __int64 __fastcall sub_51C000(QT::QLineEdit *this, QT::QWidget *a2)
{
  __int64 v2; // rbx
  QT::QPixmap *v3; // rbp
  __int64 v6; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v7; // [rsp+8h] [rbp-30h]

  v2 = 3;
  v7 = __readfsqword(0x28u);
  QT::QLineEdit::QLineEdit(this, a2);
  v3 = (QT::QLineEdit *)((char *)this + 40);
  *(_QWORD *)this = &quick_filter_input_t___vtable;
  *((_QWORD *)this + 2) = quick_filter_input_t___vtable_at__16;
  do
  {
    QT::QPixmap::QPixmap(v3);
    v3 = (QT::QPixmap *)((char *)v3 + 24);
  }
  while ( v2-- != 0 );
  *((_QWORD *)this + 17) = 0;
  QT::QObject::connect(&v6, this, "2textChanged(QString)", this, "1text_changed(QString)", 0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)&v6);
  return v7 - __readfsqword(0x28u);
}
