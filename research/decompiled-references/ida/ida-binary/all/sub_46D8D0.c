void __fastcall sub_46D8D0(_QWORD *a1, const char *a2)
{
  QT::QWidget *v2; // rbp
  QT::QPixmap *v4; // rdi
  __int64 v5; // rdi

  v2 = (QT::QWidget *)(a1 - 2);
  v4 = (QT::QPixmap *)(a1 + 81);
  *((_QWORD *)v4 - 83) = &navigator_t___vtable;
  *((_QWORD *)v4 - 81) = navigator_t___vtable_at__16;
  QT::QPixmap::~QPixmap(v4);
  a1[10] = &HintProvider___vtable;
  if ( *((_DWORD *)a1 + 158) )
    QT::QBasicTimer::stop((QT::QBasicTimer *)(a1 + 79));
  QT::QObject::~QObject((QT::QObject *)(a1 + 10));
  v5 = a1[5];
  if ( v5 )
  {
    a1[6] = 0;
    qfree(v5, a2);
  }
  QT::QWidget::~QWidget(v2);
  operator delete(v2, 0x2E8u);
}
