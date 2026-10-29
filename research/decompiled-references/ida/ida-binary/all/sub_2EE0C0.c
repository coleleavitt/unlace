unsigned __int64 __fastcall sub_2EE0C0(QT::QWidget **this, __int64 a2, QT::QObject *a3, __int64 a4, double a5)
{
  char *v5; // r13
  int v7; // r12d
  __int64 v9; // [rsp+0h] [rbp-28h]

  if ( !a3 )
    goto LABEL_8;
  v5 = (char *)(this + 15);
  if ( (_DWORD)a2 == 1 )
    v5 = (char *)(this + 10);
  if ( v5[24] || !*((_QWORD *)v5 + 2) )
  {
    if ( !*((_BYTE *)this + 64) )
    {
      v7 = QT::QSplitter::indexOf((QT::QSplitter *)this, *(this + 7));
      QT::QObject::removeEventFilter(a3, (QT::QObject *)this);
      QT::QObject::installEventFilter(a3, (QT::QObject *)this);
      QT::QSplitter::insertWidget((QT::QSplitter *)this, ((_DWORD)a2 != 1) + v7, a3);
      sub_478D00(v5, v9);
      return sub_2EDEF0((QT::QSplitter *)this);
    }
  }
  else
  {
LABEL_8:
    if ( under_debugger )
      BUG();
    this = (QT::QWidget **)(&stru_A078 + 6);
    interr(41086, a2, a3, a4, a5);
  }
  sub_2ED710(a5, (__int64)this, a2, (__int64)a3, a4);
  return sub_2EE180((QT::QSplitter *)this);
}
