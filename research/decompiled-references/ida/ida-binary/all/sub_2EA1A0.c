__int64 __fastcall sub_2EA1A0(QT::QCoreApplication **this, QT::QObject *a2, QT::QEvent *a3)
{
  int v3; // eax
  int v5[6]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v6; // [rsp+18h] [rbp-20h]

  v3 = *((_DWORD *)a2 + 16);
  v6 = __readfsqword(0x28u);
  if ( v3 == 16777235 )
  {
LABEL_8:
    QT::QCoreApplication::sendEvent(*(this + 9), a2, a3);
    goto LABEL_5;
  }
  if ( v3 > 16777235 )
  {
    a3 = nullptr;
    if ( (unsigned int)(v3 - 16777237) > 2 )
      return (unsigned int)a3;
    goto LABEL_8;
  }
  LODWORD(a3) = 0;
  if ( (unsigned int)(v3 - 16777220) <= 1 )
  {
    QT::QAbstractItemView::currentIndex((QT::QAbstractItemView *)v5);
    sub_2E9EF0((QT::QWidget *)this, v5);
LABEL_5:
    LODWORD(a3) = 1;
  }
  return (unsigned int)a3;
}
