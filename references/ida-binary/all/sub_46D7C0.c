void __fastcall sub_46D7C0(_QWORD *a1, const char *a2)
{
  QT::QPixmap *v3; // rdi
  __int64 v4; // rdi

  v3 = (QT::QPixmap *)(a1 + 81);
  *((_QWORD *)v3 - 83) = &navigator_t___vtable;
  *((_QWORD *)v3 - 81) = navigator_t___vtable_at__16;
  QT::QPixmap::~QPixmap(v3);
  a1[10] = &HintProvider___vtable;
  if ( *((_DWORD *)a1 + 158) )
    QT::QBasicTimer::stop((QT::QBasicTimer *)(a1 + 79));
  QT::QObject::~QObject((QT::QObject *)(a1 + 10));
  v4 = a1[5];
  if ( v4 )
  {
    a1[6] = 0;
    qfree(v4, a2);
  }
  QT::QWidget::~QWidget((QT::QWidget *)(a1 - 2));
}
