unsigned __int64 __fastcall sub_498A40(QT::QObject *this, __int64 a2, _QWORD *a3, QT::QWidget *a4)
{
  char *v5; // rsi
  unsigned int v7; // edx
  __int64 v9; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v10; // [rsp+8h] [rbp-20h]

  v5 = (char *)&s1;
  v10 = __readfsqword(0x28u);
  v7 = ~(unsigned __int8)(*(int *)(*a3 + 12LL) >> 31) & 7;
  if ( a3[3] )
    v5 = (char *)a3[2];
  sub_492C70(this, v5, v7, a4);
  *((_QWORD *)this + 30) = a2;
  *(_QWORD *)this = &chooser_dirtree_widget_t___vtable;
  *((_QWORD *)this + 2) = chooser_dirtree_widget_t___vtable_at__16;
  QT::QObject::connect(&v9, this, "2expanded(const QModelIndex &)", this, "1on_expanded(const QModelIndex &)", 0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)&v9);
  return v10 - __readfsqword(0x28u);
}
